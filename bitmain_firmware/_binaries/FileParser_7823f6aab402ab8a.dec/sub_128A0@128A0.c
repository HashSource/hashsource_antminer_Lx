int __fastcall sub_128A0(const char *a1, char *a2, const char *a3, _BYTE *a4, char a5, char a6, char a7)
{
  size_t v8; // r0
  int v9; // r0
  const char *v10; // r0
  int v11; // r0
  int error; // r0
  const char *v13; // r0
  _DWORD v19[65]; // [sp+1Ch] [bp-BF0h] BYREF
  _BYTE v20[12]; // [sp+120h] [bp-AECh] BYREF
  int v21; // [sp+190h] [bp-A7Ch] BYREF
  __int64 v22; // [sp+194h] [bp-A78h]
  int v23; // [sp+19Ch] [bp-A70h]
  __int64 v24; // [sp+1A0h] [bp-A6Ch]
  __int64 v25; // [sp+1A8h] [bp-A64h]
  _DWORD v26[64]; // [sp+1B0h] [bp-A5Ch] BYREF
  _BYTE v27[12]; // [sp+2B0h] [bp-95Ch] BYREF
  _OWORD v28[66]; // [sp+320h] [bp-8ECh] BYREF
  _DWORD v29[256]; // [sp+740h] [bp-4CCh] BYREF
  __int64 dest; // [sp+B40h] [bp-CCh] BYREF
  _BYTE v31[48]; // [sp+B48h] [bp-C4h] BYREF
  int v32; // [sp+B78h] [bp-94h]
  unsigned int v33; // [sp+BB0h] [bp-5Ch]
  int v34; // [sp+BB4h] [bp-58h]
  int v35; // [sp+BB8h] [bp-54h]
  int bio_RSA_PUBKEY; // [sp+BBCh] [bp-50h]
  int v37; // [sp+BC0h] [bp-4Ch]
  FILE *v38; // [sp+BC4h] [bp-48h]
  FILE *v39; // [sp+BC8h] [bp-44h]
  int v40; // [sp+BCCh] [bp-40h]
  size_t n; // [sp+BD0h] [bp-3Ch]
  FILE *v42; // [sp+BD4h] [bp-38h]
  unsigned int v43; // [sp+BD8h] [bp-34h]
  unsigned __int16 v44; // [sp+BDEh] [bp-2Eh]
  unsigned __int64 v45; // [sp+BE0h] [bp-2Ch]
  FILE *stream; // [sp+BE8h] [bp-24h]
  int v47; // [sp+BECh] [bp-20h]
  int m; // [sp+BF0h] [bp-1Ch]
  int k; // [sp+BF4h] [bp-18h]
  int j; // [sp+BF8h] [bp-14h]
  int v51; // [sp+BFCh] [bp-10h]
  int i; // [sp+C00h] [bp-Ch]
  unsigned __int8 v53; // [sp+C07h] [bp-5h]

  sub_137F4(a1, v31);
  v47 = v32;
  if ( v32 >= 2048 )
  {
    stream = (FILE *)fopen64(a1, "rb");
    if ( stream )
    {
      fread(a4, 0x800u, 1u, stream);
      if ( *a4 == 38 )
      {
        printf("miner_type %s\n", a2);
        v8 = strlen(a2);
        v45 = sub_12078((unsigned __int8 *)a2, v8);
        memcpy(&dest, a4 + 2, sizeof(dest));
        printf("miner_type_hash %16llx, bmu_hash %16llx\n", v45, dest);
        if ( v45 == dest )
        {
          v53 = 0;
          v44 = _byteswap_ushort(*(_WORD *)(a4 + 11));
          if ( !a7 || (printf("content:%x\n", v44), (v44 & 0xFE00) == 0xFE00) )
          {
            for ( i = 0; i <= 15; ++i )
            {
              if ( (((int)v44 >> i) & 1) != 0 )
                ++v53;
            }
            if ( v53 == (unsigned __int8)a4[1304] )
            {
              v51 = ((unsigned __int8)a4[1304] + 9) << 8;
              v43 = _byteswap_ulong(*(_DWORD *)(a4 + 1305));
              for ( j = 0; j < v53; ++j )
              {
                v33 = _byteswap_ulong(*(_DWORD *)&a4[5 * j + 1310]);
                v51 += v33;
                printf("file[%d] size:[%d]\n", j, v33);
              }
              if ( v51 == v47 )
              {
                v42 = (FILE *)fopen64(a3, "r");
                if ( v42 )
                {
                  memset(v29, 0, sizeof(v29));
                  fread(v29, 0x400u, 1u, v42);
                  fclose(v42);
                  v42 = 0;
                  n = ((unsigned __int8)a4[22] << 8) | (unsigned __int8)a4[23];
                  v40 = sub_10C50((int)(a4 + 24), n, (int)(a4 + 1048), (int)v29);
                  if ( v40 )
                  {
                    printf("Check pem payload failed! ret:[%d]\n", v40);
                    if ( stream )
                      fclose(stream);
                    return v40;
                  }
                  else
                  {
                    v39 = (FILE *)fopen64("/usr/bin/fw_version", "w");
                    if ( v39 )
                    {
                      fwrite(a4 + 13, 1u, 8u, v39);
                      fclose(v39);
                    }
                    if ( a5 )
                    {
                      v38 = (FILE *)fopen64("/tmp/tmpfw/miner.pem", "w");
                      if ( !v38 )
                      {
                        puts("Dump Miner.pem Failed!\r");
                        return 15;
                      }
                      fwrite(a4 + 24, 1u, n, v38);
                      fclose(v38);
                      v38 = (FILE *)fopen64("/tmp/tmpfw/miner.pem.sig", "w");
                      if ( !v38 )
                      {
                        puts("Dump Miner.pem.sig Failed!\r");
                        return 16;
                      }
                      fwrite(a4 + 1048, 1u, 0x100u, v38);
                      fclose(v38);
                    }
                    memset(v28, 0, sizeof(v28));
                    SHA256_Init(v27);
                    SHA256_Update(v27, a4, 2048);
                    SHA256_Final(v28, v27);
                    for ( k = 0; k < v53; ++k )
                    {
                      v34 = _byteswap_ulong(*(_DWORD *)&a4[5 * k + 1310]);
                      sub_10DC8(stream, v34, (int)&v28[2 * k + 2], a4[5 * k + 1309], 0, a5);
                    }
                    for ( m = 0; m < v53; ++m )
                      sub_10DC8(stream, 256, (int)&v28[2 * v53 + 2 + 2 * m], a4[5 * m + 1309], 1, a5);
                    memset(v26, 0, sizeof(v26));
                    fseek(stream, -256, 2);
                    fread(v26, 0x100u, 1u, stream);
                    v21 = 0;
                    v22 = 0;
                    v23 = 0;
                    v24 = 0;
                    v25 = 0;
                    SHA256_Init(v20);
                    SHA256_Update(v20, v28, (v53 << 6) + 32);
                    SHA256_Final(&v21, v20);
                    v37 = 0;
                    bio_RSA_PUBKEY = 0;
                    v37 = BIO_new_mem_buf(a4 + 24, 1024);
                    bio_RSA_PUBKEY = PEM_read_bio_RSA_PUBKEY(v37, 0, 0, 0);
                    if ( bio_RSA_PUBKEY )
                    {
                      v35 = RSA_verify(672, &v21, 32, v26, 256, bio_RSA_PUBKEY);
                      if ( bio_RSA_PUBKEY )
                        RSA_free(bio_RSA_PUBKEY);
                      if ( v37 )
                        BIO_free(v37);
                      if ( v35 == 1 )
                      {
                        if ( stream )
                          fclose(stream);
                        stream = 0;
                        puts("All Done!\r");
                        if ( a6 )
                        {
                          puts("This Comment Of This Package:");
                          memset(v19, 0, 257);
                          memcpy(v19, a4 + 1360, 0x100u);
                          puts((const char *)v19);
                        }
                        return 0;
                      }
                      else
                      {
                        v11 = puts("Check File Sig failed!\r");
                        error = ERR_get_error(v11);
                        v13 = (const char *)ERR_error_string(error, 0);
                        printf("OpenSSL error: %s\n", v13);
                        return 18;
                      }
                    }
                    else
                    {
                      v9 = ERR_get_error(0);
                      v10 = (const char *)ERR_error_string(v9, 0);
                      printf("OpenSSL error: %s\n", v10);
                      puts("Load Pem Failed!");
                      return 17;
                    }
                  }
                }
                else
                {
                  printf("Cannot Open Root PublicKey '%s'!\n", a3);
                  if ( stream )
                    fclose(stream);
                  return 11;
                }
              }
              else
              {
                printf(
                  "Check FileSize Failed, FileSize Should Be [%d]Bytes, But It Was [%d] Bytes, And Total Says[%d]\n",
                  v43,
                  v47,
                  v51);
                if ( stream )
                  fclose(stream);
                return 10;
              }
            }
            else
            {
              printf("Content Doesn't Match![%d][%d]\n", (unsigned __int8)a4[1304], v53);
              if ( stream )
                fclose(stream);
              return 9;
            }
          }
          else
          {
            puts("This Package Was Not Full Package!");
            return 20;
          }
        }
        else
        {
          puts("input miner_type and bmu miner type donot match!");
          if ( stream )
            fclose(stream);
          return 30;
        }
      }
      else
      {
        printf("'%s' Not A Btmu File!\n", a1);
        if ( stream )
          fclose(stream);
        return 8;
      }
    }
    else
    {
      printf("Read File '%s' Failed!\n", a1);
      return 7;
    }
  }
  else
  {
    printf("File '%s' Not Enough %d, Something Wrong!\n", a1, 2048);
    return 6;
  }
}

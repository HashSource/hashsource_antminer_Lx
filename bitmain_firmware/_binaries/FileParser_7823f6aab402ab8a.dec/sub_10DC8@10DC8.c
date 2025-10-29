int __fastcall sub_10DC8(FILE *a1, int a2, int a3, char a4, char a5, char a6)
{
  int v6; // r3
  __int64 v7; // kr00_8
  int v8; // r1
  __int64 v9; // r2
  _BYTE v15[128]; // [sp+14h] [bp-520h] BYREF
  int v16; // [sp+94h] [bp-4A0h] BYREF
  __int64 v17; // [sp+98h] [bp-49Ch]
  int v18; // [sp+A0h] [bp-494h]
  __int64 v19; // [sp+A4h] [bp-490h]
  __int64 v20; // [sp+ACh] [bp-488h]
  _BYTE v21[16]; // [sp+B4h] [bp-480h] BYREF
  size_t v22[256]; // [sp+124h] [bp-410h] BYREF
  size_t n; // [sp+524h] [bp-10h]
  FILE *s; // [sp+528h] [bp-Ch]
  int v25; // [sp+52Ch] [bp-8h]

  memset(v22, 0, sizeof(v22));
  SHA256_Init(v21);
  v25 = 0;
  n = 0;
  s = 0;
  if ( a6 )
  {
    strcpy(v15, "/tmp/tmpfw/");
    memset(&v15[12], 0, 0x74u);
    switch ( a4 )
    {
      case 0:
        strcat(v15, "BOOT.bin");
        break;
      case 1:
        strcat(v15, "devicetree.dtb");
        break;
      case 2:
        strcat(v15, "uImage");
        break;
      case 3:
        strcat(v15, "minerfs.image.gz");
        break;
      case 4:
        strcat(v15, "update.image.gz");
        break;
      case 5:
        strcat(v15, "crl.tar.gz");
        break;
      case 6:
        strcat(v15, "miner.btm.tar.gz");
        break;
      case 7:
        strcat(v15, "reserve");
        break;
      case 9:
        strcat(v15, "datafile");
        break;
      default:
        break;
    }
    if ( a5 )
      strcat(v15, ".sig");
    printf("fileName:'%s', size:[%d]\r\n", v15, a2);
    s = (FILE *)fopen64(v15, "wb");
    if ( !s )
      printf("Create File '%s' Failed!\r\n", v15);
  }
  while ( (unsigned int)(a2 - v25) > 0x400 )
  {
    n = fread(v22, 1u, 0x400u, a1);
    v25 += n;
    SHA256_Update(v21, v22, 1024);
    if ( a6 && s )
      fwrite(v22, 1u, 0x400u, s);
  }
  n = fread(v22, 1u, a2 - v25, a1);
  SHA256_Update(v21, v22, n);
  if ( a6 && s )
    fwrite(v22, 1u, n, s);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  SHA256_Final(&v16, v21);
  if ( a6 && s )
  {
    fclose(s);
    s = 0;
  }
  v7 = v17;
  v6 = v18;
  *(_DWORD *)a3 = v16;
  *(_QWORD *)(a3 + 4) = v7;
  *(_DWORD *)(a3 + 12) = v6;
  v8 = HIDWORD(v19);
  v9 = v20;
  *(_DWORD *)(a3 + 16) = v19;
  *(_DWORD *)(a3 + 20) = v8;
  *(_QWORD *)(a3 + 24) = v9;
  return HIDWORD(v9);
}

__int16 *__fastcall sub_20F7C(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char s,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28)
{
  __int16 v28; // r4
  int v30; // r7
  int v31; // r10
  unsigned int v32; // r6
  int v33; // r8
  unsigned int v34; // r2
  unsigned int v35; // r3
  char *v36; // r4
  size_t v37; // r0
  int v38; // r2
  char *v39; // r1
  size_t v40; // r0
  int v41; // r6
  size_t v42; // r0
  unsigned int *v43; // r5
  int v44; // r4
  int v45; // r2
  unsigned int *v46; // r5
  int v47; // r2
  unsigned int v48; // [sp+4h] [bp-D4h]
  const char *v49; // [sp+3Ch] [bp-9Ch]
  const char *v50; // [sp+3Ch] [bp-9Ch]
  char v51[8]; // [sp+58h] [bp-80h] BYREF
  char v52[8]; // [sp+60h] [bp-78h] BYREF
  char v53[8]; // [sp+68h] [bp-70h] BYREF
  char v54[8]; // [sp+70h] [bp-68h] BYREF
  char v55[8]; // [sp+78h] [bp-60h] BYREF
  char v56[8]; // [sp+80h] [bp-58h] BYREF
  char v57[8]; // [sp+88h] [bp-50h] BYREF
  char s1[8]; // [sp+90h] [bp-48h] BYREF
  char v59[8]; // [sp+98h] [bp-40h] BYREF
  char v60[8]; // [sp+A0h] [bp-38h] BYREF
  char v61[12]; // [sp+A8h] [bp-30h] BYREF
  char v62[12]; // [sp+B4h] [bp-24h] BYREF
  char v63[12]; // [sp+C0h] [bp-18h] BYREF
  _BYTE v64[12]; // [sp+CCh] [bp-Ch] BYREF
  char v65[20]; // [sp+D8h] [bp+0h] BYREF
  _DWORD var28[15]; // [sp+ECh] [bp+14h] BYREF

  strcpy(s1, "ifstats");
  v28 = __rev16(*(unsigned __int16 *)(a1 + 98));
  strcpy(v65, "addr_restrictions");
  if ( !v28 )
  {
LABEL_7:
    if ( sys_ifnum )
    {
      v48 = 0;
      do
      {
        v30 = ep_list;
        if ( ep_list )
        {
          if ( *(_DWORD *)(ep_list + 20) == v48 )
          {
LABEL_16:
            strcpy(v59, "addr.%u");
            v31 = 12;
            strcpy(v61, "bcast.%u");
            v32 = 0;
            v33 = 0;
            strcpy(v51, "en.%u");
            strcpy(v60, "name.%u");
            strcpy(v62, "flags.%u");
            memset(v64, 0, sizeof(v64));
            strcpy(v52, "tl.%u");
            strcpy(v53, "mc.%u");
            strcpy(v54, "rx.%u");
            strcpy(v55, "tx.%u");
            strcpy(v63, "txerr.%u");
            strcpy(v56, "pc.%u");
            strcpy(v57, "up.%u");
            do
            {
              if ( v33 <= 3 )
              {
                v33 = 27;
                v41 = rand();
                v32 = v41 ^ (rand() << 16);
              }
              else
              {
                v33 -= 4;
              }
              v34 = v32 & 0xF;
              v32 >>= 4;
              while ( 1 )
              {
                v35 = v34 % 0xC;
                v36 = (char *)&var28[9] + v34 % 0xC;
                if ( !v64[v34 % 0xC] )
                  break;
                v34 = v35 + 1;
              }
              switch ( v35 )
              {
                case 1u:
                  sub_6BCB0(var28, 32, v61, v48);
                  v38 = *(_DWORD *)(v30 + 144) & 0x20;
                  if ( v38 )
                  {
                    v50 = (const char *)sub_6C0D8(v30 + 80);
                    v42 = strlen(v50);
                    v39 = (char *)v50;
                    v38 = v42;
                  }
                  else
                  {
                    v39 = byte_97B44;
                  }
                  sub_1EE84((const char *)var28, (int)v39, v38);
                  break;
                case 2u:
                  sub_6BCB0(var28, 32, v51, v48);
                  sub_1F848((const char *)var28, *(_DWORD *)(v30 + 180) == 0);
                  break;
                case 3u:
                  sub_6BCB0(var28, 32, v60, v48);
                  v37 = strlen((const char *)(v30 + 108));
                  sub_1F060((const char *)var28, v30 + 108, v37);
                  break;
                case 4u:
                  sub_6BCB0(var28, 32, v62, v48);
                  sub_1F7A4((const char *)var28, *(_DWORD *)(v30 + 144));
                  break;
                case 5u:
                  sub_6BCB0(var28, 32, v52, v48);
                  sub_1F848((const char *)var28, *(_DWORD *)(v30 + 148));
                  break;
                case 6u:
                  sub_6BCB0(var28, 32, v53, v48);
                  sub_1F848((const char *)var28, *(_DWORD *)(v30 + 156));
                  break;
                case 7u:
                  sub_6BCB0(var28, 32, v54, v48);
                  sub_1F848((const char *)var28, *(_DWORD *)(v30 + 164));
                  break;
                case 8u:
                  sub_6BCB0(var28, 32, v55, v48);
                  sub_1F848((const char *)var28, *(_DWORD *)(v30 + 168));
                  break;
                case 9u:
                  sub_6BCB0(var28, 32, v63, v48);
                  sub_1F848((const char *)var28, *(_DWORD *)(v30 + 172));
                  break;
                case 0xAu:
                  sub_6BCB0(var28, 32, v56, v48);
                  sub_1F8EC((const char *)var28, *(_DWORD *)(v30 + 188));
                  break;
                case 0xBu:
                  sub_6BCB0(var28, 32, v57, v48);
                  sub_1F8EC((const char *)var28, current_time - *(_DWORD *)(v30 + 160));
                  break;
                default:
                  sub_6BCB0(var28, 32, v59, v48);
                  v49 = (const char *)sub_6C0D8(v30 + 24);
                  v40 = strlen(v49);
                  sub_1EE84((const char *)var28, (int)v49, v40);
                  break;
              }
              --v31;
              *(v36 - 68) = 1;
            }
            while ( v31 );
            sub_1F990(v48);
          }
          else
          {
            while ( 1 )
            {
              v30 = *(_DWORD *)v30;
              if ( !v30 )
                break;
              if ( *(_DWORD *)(v30 + 20) == v48 )
                goto LABEL_16;
            }
          }
        }
        ++v48;
      }
      while ( v48 < sys_ifnum );
    }
    return sub_1E934(0);
  }
  if ( v28 == 7 )
  {
    if ( memcmp(s1, (const void *)(a1 + 100), 7u) )
      return (__int16 *)sub_1F270(5);
    goto LABEL_7;
  }
  if ( v28 != 17 || memcmp(v65, (const void *)(a1 + 100), 0x11u) )
    return (__int16 *)sub_1F270(5);
  v43 = (unsigned int *)restrictlist4;
  if ( restrictlist4 )
  {
    v44 = 0;
    do
    {
      v45 = v44++;
      sub_1FB20(v43, 0, v45);
      v43 = (unsigned int *)*v43;
    }
    while ( v43 );
  }
  else
  {
    v44 = 0;
  }
  v46 = (unsigned int *)restrictlist6;
  if ( !restrictlist6 )
    return sub_1E934(0);
  do
  {
    v47 = v44++;
    sub_1FB20(v46, 1, v47);
    v46 = (unsigned int *)*v46;
  }
  while ( v46 );
  return sub_1E934(0);
}

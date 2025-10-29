void __fastcall sub_2BB78(int a1, unsigned int a2)
{
  FILE *v3; // r0
  int v5; // r7
  _BOOL4 v6; // r0
  size_t v7; // r7
  size_t v8; // r7
  size_t v9; // r10
  char *v10; // r11
  int v11; // r0
  size_t v12; // r1
  char *v13; // r7
  int v14; // r0
  unsigned int v15; // r2
  __pid_t v16; // r0
  int v17; // r3
  int v18; // r5
  char v19; // r3
  int v20; // r0
  int v21; // r0
  unsigned int v22; // r12
  int v23; // r0
  char *v24; // r5
  __pid_t v25; // r0
  int v26; // [sp+8h] [bp-A4h]
  size_t v27; // [sp+14h] [bp-98h]
  char *v28; // [sp+18h] [bp-94h]
  size_t v29; // [sp+1Ch] [bp-90h]
  size_t v30; // [sp+1Ch] [bp-90h]
  size_t v31; // [sp+1Ch] [bp-90h]
  size_t v32; // [sp+1Ch] [bp-90h]
  size_t v33; // [sp+1Ch] [bp-90h]
  time_t v34; // [sp+20h] [bp-8Ch] BYREF
  unsigned __int16 v35; // [sp+24h] [bp-88h] BYREF
  unsigned __int8 v36; // [sp+26h] [bp-86h]
  char v37; // [sp+27h] [bp-85h]
  char v38; // [sp+28h] [bp-84h]
  char v39; // [sp+29h] [bp-83h]
  char v40; // [sp+2Ah] [bp-82h]
  unsigned __int16 v41; // [sp+2Ch] [bp-80h] BYREF
  int v42; // [sp+30h] [bp-7Ch]
  char v43; // [sp+34h] [bp-78h]
  char v44[16]; // [sp+38h] [bp-74h] BYREF
  int v45; // [sp+48h] [bp-64h]
  unsigned int v46; // [sp+4Ch] [bp-60h]

  if ( *(char *)(a1 + 21) >= 0 )
  {
    v3 = *(FILE **)a1;
    if ( v3 )
    {
      fclose(v3);
      *(_DWORD *)a1 = 0;
    }
    return;
  }
  switch ( *(_BYTE *)(a1 + 20) )
  {
    case 1:
      v5 = *(_DWORD *)(a1 + 12);
      v6 = v5 != getpid();
      if ( !*(_DWORD *)a1 )
        v6 = 1;
      if ( v6 )
        goto LABEL_16;
      return;
    case 2:
    case 3:
    case 4:
    case 5:
      if ( a2 < *(_DWORD *)(a1 + 12) || a2 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_16;
      goto LABEL_11;
    case 6:
      if ( *(_DWORD *)(a1 + 12) > (unsigned int)current_time || (unsigned int)current_time >= *(_DWORD *)(a1 + 16) )
        goto LABEL_16;
LABEL_11:
      if ( *(_DWORD *)a1 )
        return;
LABEL_16:
      v34 = time(0);
      v7 = strlen(*(const char **)(a1 + 4));
      v8 = v7 + strlen(*(const char **)(a1 + 8));
      v9 = v8 + 65;
      v27 = v8 + 64;
      v10 = (char *)sub_637E4(0, v8 + 65, 0, 0);
      v11 = sub_637E4(0, v8 + 65, 0, 0);
      v12 = v8 + 65;
      v13 = (char *)v11;
      sub_6BCB0(v10, v12, "%s%s", *(const char **)(a1 + 4), *(const char **)(a1 + 8));
      v14 = sub_6D12C(v13);
      v13[v27] = 0;
      v15 = *(unsigned __int8 *)(a1 + 20);
      v28 = &v13[v14];
      if ( v15 == 4 )
      {
        v33 = v9 - v14;
        sub_6636C(&v41, a2, &v34);
        sub_6BCB0(v28, v33, "%c%04d%02d", 46, v41, (unsigned __int8)v42);
        v43 = 0;
        BYTE1(v42) = 1;
        HIWORD(v42) = 0;
        v20 = sub_6644C(&v41);
        LOBYTE(v42) = v42 + 1;
        goto LABEL_40;
      }
      if ( v15 > 4 )
      {
        if ( v15 == 6 )
        {
          v22 = current_time - current_time % 0x15180u;
          *(_DWORD *)(a1 + 12) = v22;
          *(_DWORD *)(a1 + 16) = v22 + 86400;
          sub_6BCB0(v28, v9 - v14, "%ca%08ld", 46, v22);
          v17 = (unsigned __int8)v13[v27];
          goto LABEL_22;
        }
        if ( v15 >= 6 )
        {
          if ( v15 == 255 )
            goto LABEL_33;
          goto LABEL_42;
        }
        v30 = v9 - v14;
        sub_6636C(&v41, a2, &v34);
        sub_6BCB0(v28, v30, "%c%04d", 46, v41);
        v43 = 0;
        v42 = 257;
        v20 = sub_6644C(&v41);
        ++v41;
LABEL_40:
        *(_DWORD *)(a1 + 12) = v20;
        *(_DWORD *)(a1 + 16) = sub_6644C(&v41);
        v17 = (unsigned __int8)v13[v27];
        goto LABEL_22;
      }
      if ( v15 == 2 )
      {
        v32 = v9 - v14;
        sub_6636C(&v41, a2, &v34);
        sub_6BCB0(v28, v32, "%c%04d%02d%02d", 46, v41, (unsigned __int8)v42, BYTE1(v42));
        HIWORD(v42) = 0;
        v43 = 0;
        v23 = sub_6644C(&v41);
        *(_DWORD *)(a1 + 12) = v23;
        *(_DWORD *)(a1 + 16) = v23 + 86400;
        v17 = (unsigned __int8)v13[v27];
        goto LABEL_22;
      }
      if ( v15 > 2 )
      {
        v31 = v9 - v14;
        sub_668D8(&v35, a2, &v34);
        sub_6BCB0(v28, v31, "%c%04dw%02d", 46, v35, v36);
        v40 = 0;
        v37 = 1;
        v39 = 0;
        v38 = 0;
        v21 = sub_669D8(&v35);
        *(_DWORD *)(a1 + 12) = v21;
        *(_DWORD *)(a1 + 16) = v21 + 604800;
        v17 = (unsigned __int8)v13[v27];
        goto LABEL_22;
      }
      if ( v15 != 1 )
      {
LABEL_42:
        sub_64A18(3, "unsupported file generations type %d for \"%s\" - reverting to FILEGEN_NONE", v15, v10);
        *(_BYTE *)(a1 + 20) = -1;
        if ( !v13[v27] )
          goto LABEL_33;
        goto LABEL_43;
      }
      v29 = v9 - v14;
      v16 = getpid();
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 12) = v16;
      sub_6BCB0(v28, v29, "%c#%ld", 46, v16);
      v17 = (unsigned __int8)v13[v27];
LABEL_22:
      if ( !v17 )
        goto LABEL_23;
LABEL_43:
      v13[v27] = 0;
      sub_64A18(3, "logfile name truncated: \"%s\"", v13);
LABEL_23:
      if ( *(unsigned __int8 *)(a1 + 20) != 255 )
      {
        if ( _xstat64(3, v10, v44) )
        {
          if ( *_errno_location() != 2 )
            sub_64A18(3, "stat(%s) failed: %m", v10);
        }
        else if ( (v45 & 0xF000) == 0x8000 )
        {
          if ( v46 <= 1 )
          {
            v24 = (char *)sub_637E4(0, v9, 0, 0);
            v25 = getpid();
            v26 = dword_B8924++;
            sub_6BCB0(v24, v9, "%s%c%dC%lu", v10, 46, v25, v26);
            if ( rename(v10, v24) )
              sub_64A18(3, "couldn't save %s: %m", v10);
            free(v24);
          }
          else if ( unlink(v10) )
          {
            sub_64A18(3, "couldn't unlink %s: %m", v10);
          }
        }
        else
        {
          sub_64A18(3, "expected regular file for %s (found mode 0%lo)", v10, v45);
        }
      }
LABEL_33:
      v18 = fopen64(v13, &off_99528);
      if ( v18 )
      {
        if ( *(_DWORD *)a1 )
          fclose(*(FILE **)a1);
        v19 = *(_BYTE *)(a1 + 21);
        *(_DWORD *)a1 = v18;
        if ( (v19 & 1) != 0 && link(v13, v10) && *_errno_location() != 17 )
          sub_64A18(3, "can't link(%s, %s): %m", v13, v10);
      }
      else if ( *_errno_location() != 2 )
      {
        sub_64A18(3, "can't open %s: %m", v13);
      }
      free(v10);
      free(v13);
      return;
    default:
      if ( !*(_DWORD *)a1 )
        goto LABEL_16;
      return;
  }
}

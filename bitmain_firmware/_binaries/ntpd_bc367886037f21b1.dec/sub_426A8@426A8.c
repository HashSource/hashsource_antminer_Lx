void __fastcall sub_426A8(int a1, char *s)
{
  size_t v3; // r0
  size_t v4; // r0
  size_t v5; // r7
  void *v6; // r8
  int v7; // r5
  char *v8; // r7
  const char *v9; // r8
  char *v10; // r0
  FILE *v11; // r4
  __pid_t v12; // r0
  size_t v13; // r0
  size_t v14; // r7
  char *v15; // r9
  __int16 v16; // r2
  FILE *v17; // r0
  FILE *v18; // r5
  time_t v19; // [sp+14h] [bp-28h] BYREF
  int v20; // [sp+18h] [bp-24h] BYREF
  int v21[2]; // [sp+20h] [bp-1Ch] BYREF
  __int16 v22; // [sp+28h] [bp-14h]
  _DWORD v23[2]; // [sp+2Ch] [bp-10h] BYREF

  strcpy((char *)v23, ".TEMP");
  switch ( a1 )
  {
    case 1:
      if ( s )
      {
        v13 = strlen(s);
        v14 = v13;
        if ( v13 )
        {
          stats_drift_file = sub_637E4(stats_drift_file, v13 + 1, 0, 0);
          v15 = (char *)sub_637E4(dword_BBCC0, v14 + 6, 0, 0);
          dword_BBCC0 = (int)v15;
          memcpy((void *)stats_drift_file, s, v14 + 1);
          memcpy(v15, s, v14);
          v16 = v23[1];
          *(_DWORD *)&v15[v14] = v23[0];
          *(_WORD *)&v15[v14 + 4] = v16;
          v17 = (FILE *)fopen64(stats_drift_file, "r");
          v18 = v17;
          if ( v17 )
          {
            if ( fscanf(v17, "%lf", v21) == 1 )
            {
              fclose(v18);
              sub_302F0((__int16 *)&byte_9[3]);
              dbl_BBCB8 = drift_comp;
            }
            else
            {
              sub_64A18(3, "format error frequency file %s", (const char *)stats_drift_file);
              fclose(v18);
            }
          }
        }
      }
      break;
    case 2:
      v3 = strlen(s);
      if ( v3 > 0xFE )
      {
        sub_64A18(3, "statsdir too long (>%d, sigh)", 254);
      }
      else
      {
        if ( v3 && s[v3 - 1] != 47 )
          sub_6BCB0(statsdir, 256, "%s%c", s, 47);
        else
          sub_6BCB0(statsdir, 256, "%s", s);
        sub_2C5D8();
      }
      break;
    case 3:
      v11 = (FILE *)fopen64(s, "w");
      if ( v11 )
      {
        v12 = getpid();
        _fprintf_chk(v11, 1, "%d", v12);
        fclose(v11);
      }
      else
      {
        sub_64A18(3, "pid file %s: %m", s);
      }
      break;
    case 4:
      if ( s )
      {
        v4 = strlen(s);
        if ( v4 )
        {
          v5 = v4 + 1;
          v6 = (void *)sub_637E4(dword_BBBE8, v4 + 1, 0, 0);
          dword_BBBE8 = (int)v6;
          memcpy(v6, s, v5);
          if ( sub_2E270((const char *)v6, dword_BBCC8, 1, 1) )
          {
            sub_5F334(&v20);
            time(&v19);
            sub_2D870(v21);
            v7 = v22;
            v8 = sub_425B4(v21[1]);
            if ( sub_2D8D8(v20, 0) )
              v9 = "expired";
            else
              v9 = "expires";
            v10 = sub_425B4(v21[0]);
            sub_26094((__int16 *)&byte_9[5], 0, (int)"%d leap %s %s %s", v7, v8, v9, v10);
            dword_BBCC4 = 1;
            sub_414B4(1, v20, &v19);
          }
        }
      }
      break;
    default:
      return;
  }
}

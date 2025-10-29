size_t __fastcall sub_1FF34(int a1, unsigned __int8 *a2, int a3)
{
  size_t result; // r0
  char *v5; // r7
  __int16 v6; // r3
  char *v7; // r8
  char *v8; // r5
  const char *v9; // r10
  size_t v10; // r2
  char *v11; // r3
  char *v12; // r0
  int v13; // r7
  __int16 v14; // r3
  unsigned __int8 *v15; // r1
  int v16; // r2
  bool v17; // zf
  int v18; // r2
  int v19; // r3
  int v20; // t1
  bool v21; // zf
  char *v22; // r3
  _BYTE *v23; // r3
  int v24; // r3
  int v25; // r1
  _BYTE *v26; // r4
  size_t v27; // r0
  size_t v28; // r4
  int v29; // r3
  _DWORD v30[2]; // [sp+0h] [bp-1E4h] BYREF
  char v31[468]; // [sp+8h] [bp-1DCh] BYREF
  _DWORD v32[2]; // [sp+1DCh] [bp-8h] BYREF

  result = a1 - 1;
  switch ( result )
  {
    case 0u:
      if ( a3 || (v23 = (_BYTE *)*((_DWORD *)a2 + 8)) == 0 || !*v23 )
        result = (size_t)sub_1F8EC("type", *a2);
      break;
    case 1u:
      result = (size_t)sub_1F060("timecode", *((_DWORD *)a2 + 2), *((unsigned __int16 *)a2 + 2));
      break;
    case 2u:
      result = (size_t)sub_1F8EC("poll", *((_DWORD *)a2 + 3));
      break;
    case 3u:
      result = (size_t)sub_1F8EC("noreply", *((_DWORD *)a2 + 4));
      break;
    case 4u:
      result = (size_t)sub_1F8EC("badformat", *((_DWORD *)a2 + 5));
      break;
    case 5u:
      result = (size_t)sub_1F8EC("baddata", *((_DWORD *)a2 + 6));
      break;
    case 6u:
      if ( a3 || (a2[2] & 1) != 0 )
        result = (size_t)sub_1FE70("fudgetime1", 1, 3);
      break;
    case 7u:
      if ( a3 || (a2[2] & 2) != 0 )
        result = (size_t)sub_1FE70("fudgetime2", 1, 3);
      break;
    case 8u:
      if ( a3 || (a2[2] & 4) != 0 )
        result = (size_t)sub_1F848("stratum", *((_DWORD *)a2 + 14));
      break;
    case 9u:
      if ( a3 || (a2[2] & 8) != 0 )
      {
        v24 = *((_DWORD *)a2 + 14);
        v25 = *((_DWORD *)a2 + 15);
        if ( v24 <= 1 )
          result = (size_t)sub_1EFAC("refid", v25);
        else
          result = (size_t)sub_1EF28("refid", v25, 0);
      }
      break;
    case 0xAu:
      result = (size_t)sub_1F8EC("flags", a2[1]);
      break;
    case 0xBu:
      v26 = (_BYTE *)*((_DWORD *)a2 + 8);
      if ( v26 && *v26 )
      {
        v27 = strlen(*((const char **)a2 + 8));
        result = (size_t)sub_1F060("device", (int)v26, v27);
      }
      else if ( a3 )
      {
        result = (size_t)sub_1F060("device", (int)byte_97B44, 0);
      }
      break;
    case 0xCu:
      sub_6BCB0(v31, 468, "%s=\"", "clock_var_list");
      result = strlen(v31);
      v5 = (char *)&unk_B2EF0;
      LOBYTE(v6) = 1;
      v7 = &v31[result];
      v8 = &v31[result];
      while ( 1 )
      {
        v5 += 8;
        if ( (v6 & 0x80) != 0 )
          break;
        if ( (v6 & 0x40) == 0 )
        {
          v9 = (const char *)*((_DWORD *)v5 + 1);
          result = strlen(v9);
          v10 = result;
          v11 = &v8[result + 1];
          if ( v32 <= (_DWORD *)v11 )
            break;
          if ( v8 == v7 )
          {
            v12 = v7;
          }
          else
          {
            v12 = v8 + 1;
            LOBYTE(v11) = 44;
          }
          if ( v8 != v7 )
            *v8 = (char)v11;
          v8 = &v12[v10];
          result = (size_t)memcpy(v12, v9, v10);
        }
        v6 = *((_WORD *)v5 + 5);
      }
      v13 = *((_DWORD *)a2 + 17);
      if ( v13 )
      {
        v14 = *(_WORD *)(v13 + 2);
        if ( (v14 & 0x80) == 0 )
        {
          while ( 1 )
          {
            if ( (v14 & 0x40) == 0 )
            {
              v15 = *(unsigned __int8 **)(v13 + 4);
              if ( v15 )
              {
                v16 = *v15;
                v17 = v16 == 61;
                if ( v16 != 61 )
                  v17 = v16 == 0;
                if ( v17 )
                {
                  v28 = 0;
                  v29 = 1;
                }
                else
                {
                  v18 = *(_DWORD *)(v13 + 4);
                  do
                  {
                    v20 = *(unsigned __int8 *)++v18;
                    v19 = v20;
                    v21 = v20 == 0;
                    if ( v20 )
                      v21 = v19 == 61;
                  }
                  while ( !v21 );
                  v28 = v18 - (_DWORD)v15;
                  v29 = v18 - (_DWORD)v15 + 1;
                }
                if ( v32 <= (_DWORD *)&v8[v29] )
                  break;
                if ( v7 == v8 )
                {
                  v22 = v7;
                }
                else
                {
                  *v8 = 44;
                  v22 = v8 + 1;
                }
                if ( v7 != v8 )
                  v15 = *(unsigned __int8 **)(v13 + 4);
                v8 = &v22[v28];
                result = (size_t)memcpy(v22, v15, v28);
                *(_BYTE *)(result + v28) = 0;
              }
            }
            v13 += 8;
            if ( v13 )
            {
              v14 = *(_WORD *)(v13 + 2);
              if ( (v14 & 0x80) == 0 )
                continue;
            }
            break;
          }
        }
      }
      if ( v32 > (_DWORD *)(v8 + 2) )
      {
        *v8 = 34;
        v8[1] = 0;
        v30[0] = v31;
        v30[1] = v8 + 1 - v31;
        result = (size_t)sub_1EC64((char *)v30, 1, 0);
      }
      break;
    default:
      return result;
  }
  return result;
}

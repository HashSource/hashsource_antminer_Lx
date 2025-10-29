int __fastcall sub_147F4(const char *a1, unsigned __int16 *a2, unsigned int a3)
{
  _BOOL4 v5; // r0
  int v6; // r4
  _BOOL4 v7; // r9
  int v8; // r6
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r1
  int result; // r0
  int v21; // r3
  int v22; // r3
  int v23; // [sp+0h] [bp-7Ch]
  int v24; // [sp+8h] [bp-74h]
  _BYTE v25[24]; // [sp+1Ch] [bp-60h] BYREF
  _BYTE v26[24]; // [sp+34h] [bp-48h] BYREF
  int v27; // [sp+4Ch] [bp-30h] BYREF
  int v28; // [sp+50h] [bp-2Ch]
  int v29; // [sp+54h] [bp-28h]
  int v30; // [sp+58h] [bp-24h]
  int v31; // [sp+5Ch] [bp-20h]
  int v32; // [sp+60h] [bp-1Ch]
  int v33; // [sp+64h] [bp-18h]
  _BYTE v34[12]; // [sp+68h] [bp-14h] BYREF

  v24 = a3 & 4;
  v23 = (a3 >> 2) & 1;
  v5 = sub_13B60(a2);
  v6 = nic_rule_list;
  v7 = v5;
  if ( nic_rule_list )
  {
    while ( 1 )
    {
      switch ( *(_DWORD *)(v6 + 8) )
      {
        case 0:
          if ( v7 | v23 )
            goto LABEL_5;
          return *(_DWORD *)(v6 + 4);
        case 1:
          if ( *a2 == 2 )
            return *(_DWORD *)(v6 + 4);
          goto LABEL_5;
        case 2:
          if ( *a2 == 10 )
            return *(_DWORD *)(v6 + 4);
          goto LABEL_5;
        case 3:
          if ( v7 )
            return *(_DWORD *)(v6 + 4);
          goto LABEL_5;
        case 4:
          if ( a1 && !fnmatch(*(const char **)(v6 + 12), a1, 16) )
            return *(_DWORD *)(v6 + 4);
          goto LABEL_5;
        case 5:
          v8 = *(_DWORD *)(v6 + 44);
          if ( v8 == -1 )
          {
            v22 = *(unsigned __int16 *)(v6 + 16);
            if ( v22 == *a2 )
            {
              if ( v22 == 2 )
              {
                if ( *((_DWORD *)a2 + 1) == *(_DWORD *)(v6 + 20) )
                  return *(_DWORD *)(v6 + 4);
              }
              else if ( !memcmp(a2 + 4, (const void *)(v6 + 24), 0x10u) && *((_DWORD *)a2 + 6) == *(_DWORD *)(v6 + 40) )
              {
                return *(_DWORD *)(v6 + 4);
              }
            }
          }
          else
          {
            v9 = *(_DWORD *)a2;
            v10 = *((_DWORD *)a2 + 1);
            v11 = *((_DWORD *)a2 + 2);
            v12 = *((_DWORD *)a2 + 3);
            memset(v34, 0, sizeof(v34));
            v27 = v9;
            v28 = v10;
            v29 = v11;
            v30 = v12;
            v13 = *((_DWORD *)a2 + 5);
            v14 = *((_DWORD *)a2 + 6);
            v31 = *((_DWORD *)a2 + 4);
            v32 = v13;
            v33 = v14;
            sub_748C4(v25, &v27);
            memset(v34, 0, sizeof(v34));
            v15 = *(_DWORD *)(v6 + 20);
            v16 = *(_DWORD *)(v6 + 24);
            v17 = *(_DWORD *)(v6 + 28);
            v27 = *(_DWORD *)(v6 + 16);
            v28 = v15;
            v29 = v16;
            v30 = v17;
            v18 = *(_DWORD *)(v6 + 40);
            v19 = *(_DWORD *)(v6 + 36);
            v31 = *(_DWORD *)(v6 + 32);
            v32 = v19;
            v33 = v18;
            sub_748C4(v26, &v27);
            if ( sub_74104(v25, v26, v8) )
              return *(_DWORD *)(v6 + 4);
          }
LABEL_5:
          v6 = *(_DWORD *)v6;
          if ( !v6 )
            goto LABEL_6;
          break;
        default:
          goto LABEL_5;
      }
    }
  }
LABEL_6:
  if ( v24 )
    return 0;
  if ( v7 )
    return 2;
  v21 = (int)a1;
  if ( a1 )
    v21 = 1;
  if ( listen_to_virtual_ips )
    v21 = 0;
  if ( v21 && strchr(a1, 58) )
    return 1;
  result = nic_rule_list;
  if ( nic_rule_list )
    return 1;
  return result;
}

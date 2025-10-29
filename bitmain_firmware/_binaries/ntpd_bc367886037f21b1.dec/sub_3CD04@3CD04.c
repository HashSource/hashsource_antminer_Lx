int __fastcall sub_3CD04(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v4; // r7
  bool v5; // zf
  unsigned int v6; // r6
  int v7; // r9
  int *v8; // r2
  int v9; // r0
  int v11; // [sp+Ch] [bp-60h]
  int v12; // [sp+10h] [bp-5Ch]
  int v13; // [sp+14h] [bp-58h]
  int v16; // [sp+2Ch] [bp-40h]
  __int64 v17; // [sp+30h] [bp-3Ch] BYREF
  __int64 v18; // [sp+38h] [bp-34h]
  __int64 v19; // [sp+40h] [bp-2Ch]
  _BYTE v20[28]; // [sp+48h] [bp-24h] BYREF

  v4 = __rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF;
  if ( v4 > 0x18 )
    return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v11 = 0;
  v12 = 0;
  v16 = a3 + 8;
  while ( 1 )
  {
    v6 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
    v5 = v6 == 0;
    LOWORD(v6) = v6 - 1;
    if ( !v5 )
    {
      v7 = v16;
      while ( 2 )
      {
        v17 = 0;
        v18 = 0;
        v19 = 0;
        _memcpy_chk(&v17, v7);
        memset(v20, 0, sizeof(v20));
        if ( dword_BBB2C && HIDWORD(v17) )
        {
          strcpy(v20, "\n");
          *(_QWORD *)&v20[8] = v18;
          *(_QWORD *)&v20[16] = v19;
        }
        else
        {
          *(_WORD *)v20 = 2;
          *(_DWORD *)&v20[4] = v17;
        }
        v8 = 0;
        *(_WORD *)&v20[2] = 31488;
        while ( 1 )
        {
          v9 = sub_31748((unsigned __int16 *)v20, 0, v8, -1, 0, 0);
          v8 = (int *)v9;
          if ( !v9 )
            break;
          if ( (*(_DWORD *)(v9 + 68) & 1) != 0 )
          {
            if ( v11 )
            {
              v13 = v9;
              sub_35EE4(v9, (int *)"GONE");
              sub_31CC8(v13);
            }
            goto LABEL_12;
          }
        }
        if ( v12 != 1 )
          return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
LABEL_12:
        v7 += v4;
        v6 = (unsigned __int16)(v6 - 1);
        if ( v6 != 0xFFFF )
          continue;
        break;
      }
    }
    v11 ^= 1u;
    if ( v12 == 1 )
      return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
    v12 = 1;
  }
}

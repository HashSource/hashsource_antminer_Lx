int __fastcall sub_3C60C(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v4; // r7
  bool v5; // zf
  unsigned int v6; // r4
  int v7; // r8
  int v8; // r9
  unsigned int v9; // r8
  int *i; // r11
  int v14; // [sp+1Ch] [bp-40h]
  __int64 v15; // [sp+20h] [bp-3Ch] BYREF
  __int64 v16; // [sp+28h] [bp-34h]
  __int64 v17; // [sp+30h] [bp-2Ch]
  __int64 v18; // [sp+38h] [bp-24h] BYREF
  _BYTE v19[20]; // [sp+40h] [bp-1Ch] BYREF

  v4 = __rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF;
  if ( v4 > 0x18 )
    return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v6 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  v5 = v6 == 0;
  LOWORD(v6) = v6 - 1;
  if ( !v5 )
  {
    v7 = a3 + 8;
    v14 = a3 + 8;
    do
    {
      v15 = 0;
      v16 = 0;
      v17 = 0;
      _memcpy_chk(&v15, v7);
      v18 = 0;
      memset(v19, 0, sizeof(v19));
      if ( dword_BBB2C && HIDWORD(v15) )
      {
        LOWORD(v18) = 10;
        *(_QWORD *)v19 = v16;
        *(_QWORD *)&v19[8] = v17;
      }
      else
      {
        LOWORD(v18) = 2;
        HIDWORD(v18) = v15;
      }
      if ( !sub_31748((unsigned __int16 *)&v18, 0, 0, -1, 0, 0) )
        return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
      v7 += v4;
      v6 = (unsigned __int16)(v6 - 1);
    }
    while ( v6 != 0xFFFF );
    v8 = v14;
    v9 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
    v5 = v9 == 0;
    LOWORD(v9) = v9 - 1;
    if ( !v5 )
    {
      do
      {
        v15 = 0;
        v16 = 0;
        v17 = 0;
        _memcpy_chk(&v15, v8);
        v18 = 0;
        memset(v19, 0, sizeof(v19));
        if ( dword_BBB2C && HIDWORD(v15) )
        {
          LOWORD(v18) = 10;
          *(_QWORD *)v19 = v16;
          *(_QWORD *)&v19[8] = v17;
        }
        else
        {
          LOWORD(v18) = 2;
          HIDWORD(v18) = v15;
        }
        WORD1(v18) = 31488;
        for ( i = (int *)sub_31748((unsigned __int16 *)&v18, 0, 0, -1, 0, 0);
              i;
              i = (int *)sub_31748((unsigned __int16 *)&v18, 0, i, -1, 0, 0) )
        {
          sub_3281C(i);
        }
        v8 += v4;
        v9 = (unsigned __int16)(v9 - 1);
      }
      while ( v9 != 0xFFFF );
    }
  }
  return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}

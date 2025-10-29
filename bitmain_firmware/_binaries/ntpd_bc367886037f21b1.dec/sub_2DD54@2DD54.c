int __fastcall sub_2DD54(int (__fastcall *a1)(int), int a2)
{
  int v4; // r5
  int v5; // r8
  int v7; // r0
  unsigned int *v8; // r12
  unsigned int v9; // r3
  unsigned int v10; // t1
  _QWORD *v11; // r2
  int v12; // [sp+20h] [bp-18h] BYREF
  __int64 s1; // [sp+24h] [bp-14h] BYREF
  int v14; // [sp+2Ch] [bp-Ch]
  __int64 v15; // [sp+30h] [bp-8h]
  _BYTE v16[20]; // [sp+38h] [bp+0h] BYREF
  const unsigned __int16 *v17[23]; // [sp+4Ch] [bp+14h] BYREF
  unsigned __int8 v18[2]; // [sp+A8h] [bp+70h] BYREF
  char s[58]; // [sp+AAh] [bp+72h] BYREF

  v4 = -1;
  sub_77D20(v17);
  while ( sub_2CD10(a1, a2, v18) )
  {
    v5 = strncmp((const char *)v18, "#h", 2u);
    if ( v5 )
    {
      if ( !strncmp((const char *)v18, "#@", 2u) || !strncmp((const char *)v18, "#$", 2u) )
      {
        sub_2CB3C(v17, (unsigned __int8 *)s);
      }
      else if ( ((*_ctype_b_loc())[v18[0]] & 0x800) != 0 )
      {
        sub_2CB3C(v17, v18);
      }
    }
    else
    {
      s1 = 0;
      v14 = 0;
      v15 = 0;
      if ( sscanf(s, " %lx %lx %lx %lx %lx%n", v16, &v16[4], &v16[8], &v16[12], &v16[16], &v12) == 5
        && (unsigned __int8)s[v12] <= 0x20u )
      {
        v7 = 0;
        v8 = (unsigned int *)v16;
        do
        {
          v10 = *v8++;
          v9 = v10;
          v11 = (__int64 *)((char *)&s1 + v7 + 4);
          do
          {
            *((_BYTE *)v11 - 1) = v9;
            v11 = (_QWORD *)((char *)v11 - 1);
            v9 >>= 8;
          }
          while ( v11 != (__int64 *)((char *)&s1 + v7) );
          v7 += 4;
          *(v8 - 1) = v9;
        }
        while ( v7 != 20 );
        v5 = 1;
      }
      v4 = v5;
    }
  }
  sub_77F70((int)v17);
  sub_77DD4(v17);
  if ( v4 == -1 )
    return 0;
  if ( !v4 )
    return -2;
  if ( !memcmp(&s1, v16, 0x14u) )
    return 1;
  return -1;
}

unsigned __int64 __fastcall sub_43C78(unsigned __int8 *a1, unsigned __int8 **a2)
{
  int v2; // r8
  unsigned __int64 v4; // r10
  unsigned int v5; // r6
  unsigned __int8 *v6; // r3
  const unsigned __int16 **v7; // r0
  unsigned __int8 *v8; // r12
  int v9; // r2
  int v10; // r3
  unsigned __int8 *v11; // r2
  unsigned __int64 v12; // r4
  int *v13; // r0
  int *v15; // r0
  unsigned __int64 v16; // [sp+0h] [bp-24h]
  unsigned __int8 *v17; // [sp+0h] [bp-24h]
  unsigned __int8 *v18; // [sp+Ch] [bp-18h]

  v2 = *a1;
  if ( v2 == 45 )
  {
    v5 = 2;
    v18 = a1 + 1;
    v4 = 0x8000000000000000LL;
  }
  else
  {
    v4 = 0x7FFFFFFFFFFFFFFFLL;
    v5 = 0;
    if ( v2 == 43 )
      v6 = a1 + 1;
    else
      v6 = a1;
    v18 = v6;
  }
  v7 = _ctype_b_loc();
  v8 = v18;
  v16 = 0;
  while ( 1 )
  {
    v10 = *v8;
    v11 = v8++;
    if ( ((*v7)[v10] & 0x800) == 0 )
      break;
    v9 = v16 > __PAIR64__(loc_43E1C, loc_43E18);
    v16 = 10 * v16 + v10 - 48;
    if ( v4 < v16 )
      v9 |= 1u;
    v5 |= v9;
  }
  v12 = v16;
  if ( v18 == v11 )
  {
    v15 = _errno_location();
    v11 = a1;
    *v15 = 22;
  }
  if ( (v5 & 1) != 0 )
  {
    v17 = v11;
    v13 = _errno_location();
    v11 = v17;
    v12 = v4;
    *v13 = 34;
  }
  *a2 = v11;
  if ( ((v12 != 0) & (v5 >> 1)) != 0 )
    return -(__int64)v12;
  else
    return v12;
}

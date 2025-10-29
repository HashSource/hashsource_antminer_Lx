__int64 __fastcall sub_762C0(unsigned int *a1, unsigned int *a2)
{
  int v2; // r2
  unsigned int v3; // r2
  unsigned int v4; // lr
  unsigned int v5; // r6
  unsigned __int64 v6; // r0
  unsigned __int64 v7; // r2

  v2 = (int)a2;
  if ( a2 )
    v2 = 1;
  if ( !a1 )
    v2 = 0;
  if ( !v2 )
    sub_6E8F0((int)"./../lib/isc/unix/time.c", 308, 0, "t1 != ((void *)0) && t2 != ((void *)0)");
  v3 = a1[1];
  if ( v3 > 0x3B9AC9FF || (v4 = a2[1], v4 > 0x3B9AC9FF) )
    sub_6E8F0((int)"./../lib/isc/unix/time.c", 309, 2, "t1->nanoseconds < 1000000000 && t2->nanoseconds < 1000000000");
  v5 = *a1;
  v6 = 1000000000LL * *a2 + v4;
  v7 = 1000000000LL * v5 + v3;
  if ( v7 > v6 )
    return sub_8BB68((int)v7 - (int)v6, (v7 - v6) >> 32, 1000, 0);
  else
    return 0;
}

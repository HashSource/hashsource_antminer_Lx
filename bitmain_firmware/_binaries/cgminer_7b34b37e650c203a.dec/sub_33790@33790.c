int __fastcall sub_33790(int *a1, int a2)
{
  double v4; // d8
  unsigned __int64 v5; // r0
  double v6; // r0
  double v7; // d8
  double v8; // r0
  int v9; // r5
  double v10; // r0
  int v11; // r5
  double v12; // r0
  int v13; // r4
  int v15; // r12
  int v16; // r2
  bool v17; // zf
  int v18; // r2
  int *v19; // r0
  int *v20; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = dbl_68748;
  v5 = sub_334C0(a2);
  *(_QWORD *)(a2 + 232) = v5;
  LODWORD(v6) = sub_4A10C(v5);
  if ( v4 <= v6 )
  {
    v15 = *(_DWORD *)(a2 + 260);
    v16 = (unsigned __int8)byte_74500;
    *(_BYTE *)(a2 + 283) = 1;
    v17 = v16 == 0;
    v18 = dword_7345C + 1;
    ++*(_DWORD *)(v15 + 32);
    dword_7345C = v18;
    *(_BYTE *)(a2 + 282) = 1;
    if ( !v17 || byte_68BD4 || dword_67DB4 > 4 )
    {
      snprintf(s, 0x800u, "Found block for pool %d!", **(_DWORD **)(a2 + 260));
      sub_20F58(5, s, 0);
    }
  }
  if ( pthread_mutex_lock(&stru_766C4) )
  {
    v19 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v19, "cgminer.c", "update_work_stats", 8836);
    goto LABEL_10;
  }
  v7 = *(double *)(a2 + 224);
  LODWORD(v8) = sub_4A11C(qword_76850);
  qword_76850 = (__int64)(v8 + v7);
  v9 = *a1;
  LODWORD(v10) = sub_4A11C(*(_QWORD *)(*a1 + 192));
  *(_QWORD *)(v9 + 192) = (__int64)(v10 + v7);
  v11 = *(_DWORD *)(a2 + 260);
  LODWORD(v12) = sub_4A11C(*(_QWORD *)(v11 + 40));
  *(_QWORD *)(v11 + 40) = (__int64)(v12 + *(double *)(a2 + 224));
  v13 = *a1;
  *(_DWORD *)(v13 + 232) = time(0);
  if ( pthread_mutex_unlock(&stru_766C4) )
  {
    v20 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v20,
      "cgminer.c",
      "update_work_stats",
      8841);
LABEL_10:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  return off_67ED8();
}

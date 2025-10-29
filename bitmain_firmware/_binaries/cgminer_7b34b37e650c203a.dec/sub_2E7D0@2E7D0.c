int __fastcall sub_2E7D0(char *a1, size_t a2, int a3)
{
  double v3; // d0
  double v7; // r0
  double v8; // d8
  unsigned __int64 v9; // r8
  size_t v10; // r7
  char v12[16]; // [sp+28h] [bp-864h] BYREF
  char v13[16]; // [sp+38h] [bp-854h] BYREF
  char s[64]; // [sp+48h] [bp-844h] BYREF
  char v15[2052]; // [sp+88h] [bp-804h] BYREF

  sub_2CC3C(a3);
  LODWORD(v7) = sub_4A11C(*(_QWORD *)(a3 + 192));
  v8 = v7 / v3 * 60.0;
  v9 = (unsigned __int64)(*(double *)(a3 + 48) * 1000000.0);
  sub_2AEF8((unsigned __int64)(*(double *)(a3 + 80) / v3 * 1000000.0), v12, 0x10u, 4);
  sub_2AEF8(v9, v13, 0x10u, 4);
  snprintf(a1, a2, "%s%d ", *(const char **)(*(_DWORD *)(a3 + 4) + 8), *(_DWORD *)(a3 + 8));
  (*(void (__fastcall **)(char *, size_t, int))(*(_DWORD *)(a3 + 4) + 20))(a1, a2, a3);
  v10 = strlen(a1);
  snprintf(
    s,
    0x40u,
    "(%ds):%s (avg):%sh/s | A:%.0f R:%.0f HW:%d WU:%.1f/m",
    dword_68730,
    v13,
    v12,
    *(double *)(a3 + 200),
    *(double *)(a3 + 208),
    *(_DWORD *)(a3 + 44),
    v8);
  if ( v10 + strlen(s) >= a2 )
  {
    snprintf(v15, 0x800u, "tailsprintf buffer overflow in %s %s line %d", "cgminer.c", "get_statline", 3118);
    sub_20F58(3, v15, 1);
    sub_2E6B0(1, 1);
  }
  strcat(a1, s);
  return (*(int (__fastcall **)(char *, size_t, int))(*(_DWORD *)(a3 + 4) + 24))(a1, a2, a3);
}

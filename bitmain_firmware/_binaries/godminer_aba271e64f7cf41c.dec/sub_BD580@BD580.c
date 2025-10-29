int __fastcall sub_BD580(int a1)
{
  int v1; // r0
  int v3[2]; // [sp+Ch] [bp-220h] BYREF
  char s[512]; // [sp+14h] [bp-218h] BYREF
  int v5; // [sp+214h] [bp-18h] BYREF
  int v6; // [sp+218h] [bp-14h]
  void *ptr[2]; // [sp+21Ch] [bp-10h] BYREF
  int v8; // [sp+224h] [bp-8h]

  v3[0] = a1;
  v8 = 0;
  if ( find_c_map((int *)dword_1608E0, (int)v3, ptr) == 1 )
  {
    ptr[1] = ptr[0];
    v8 = *((_DWORD *)ptr[0] + 1);
    free(ptr[0]);
  }
  else
  {
    v1 = sub_BD558(v3[0]);
    snprintf(s, 0x200u, "/dev/ttyS%d", v1);
    v6 = open(s, 2306);
    v8 = v6;
    v5 = v3[0];
    sub_BD674(v6);
    insert_c_map((int *)dword_1608E0, v3, 4u, &v5, 8u);
  }
  return v8;
}

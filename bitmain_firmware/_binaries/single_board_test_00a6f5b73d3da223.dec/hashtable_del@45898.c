int __fastcall hashtable_del(int a1, char *a2)
{
  size_t v2; // r0
  int v6; // [sp+Ch] [bp+Ch]

  v2 = strlen(a2);
  v6 = sub_44AD4((unsigned __int8 *)a2, v2, hashtable_seed);
  return sub_4547C(a1, a2, v6);
}

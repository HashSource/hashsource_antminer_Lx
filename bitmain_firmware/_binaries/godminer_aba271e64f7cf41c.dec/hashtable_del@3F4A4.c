int __fastcall hashtable_del(int a1, char *a2)
{
  size_t v2; // r0
  size_t v6; // [sp+Ch] [bp-8h]

  v2 = strlen(a2);
  v6 = sub_3DBC4((unsigned __int8 *)a2, v2, hashtable_seed);
  return sub_3ED70(a1, a2, v6);
}

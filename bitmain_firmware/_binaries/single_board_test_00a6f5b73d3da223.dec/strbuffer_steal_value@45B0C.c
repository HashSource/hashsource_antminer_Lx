int __fastcall strbuffer_steal_value(int *a1)
{
  int v2; // [sp+Ch] [bp+Ch]

  v2 = *a1;
  *a1 = 0;
  return v2;
}

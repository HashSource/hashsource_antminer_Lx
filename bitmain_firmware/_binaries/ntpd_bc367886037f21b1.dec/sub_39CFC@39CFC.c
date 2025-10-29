int __fastcall sub_39CFC(int a1, int a2)
{
  int (__fastcall *v3)(int); // r5
  int v4; // r1

  v3 = *(int (__fastcall **)(int))(a1 + 8);
  if ( v3 && !v3(a2) )
  {
    sub_69BD8(a2, v4);
    return 1;
  }
  else
  {
    sub_69C74(a2);
    return 0;
  }
}

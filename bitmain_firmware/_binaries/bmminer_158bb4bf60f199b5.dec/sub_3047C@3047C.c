int sub_3047C()
{
  int result; // r0
  char v1[2048]; // [sp+0h] [bp-800h] BYREF

  result = dword_1AEA18;
  if ( !dword_1AEA18 )
  {
    if ( *(_DWORD *)(dword_1AEA1C + 4) <= sub_30348() )
    {
      result = (*(int (**)(void))(dword_1AEA1C + 8))();
      dword_1AEA18 = result;
    }
    else
    {
      result = dword_1AEA18;
    }
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(v1, 0x800u, "sale_hash_rate = %d\n", result);
      sub_47AB4(3, v1, 0);
      return dword_1AEA18;
    }
  }
  return result;
}

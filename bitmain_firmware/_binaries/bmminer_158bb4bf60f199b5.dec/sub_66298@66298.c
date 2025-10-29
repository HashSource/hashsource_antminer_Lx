int sub_66298()
{
  int v0; // r6
  int v2; // r0
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_1B0E60 )
    return 0;
  if ( sub_667A0() )
  {
    v0 = -1;
    strcpy(v3, "fpga init failed\n");
    sub_47AB4(0, v3, 0);
    return v0;
  }
  if ( sub_669C4() )
  {
    v0 = -2;
    strcpy(v3, "gpio init failed\n");
    sub_47AB4(0, v3, 0);
    return v0;
  }
  memset(dword_1B0D38, 0, sizeof(dword_1B0D38));
  if ( sub_694C4() )
  {
    sub_667C0();
    nullsub_1(v2);
    v0 = -3;
    strcpy(v3, "failed to load hal config\n");
    sub_47AB4(0, v3, 0);
    return v0;
  }
  sub_6607C();
  dword_1B0E60 = 1;
  sub_66474();
  sub_68B54();
  sub_67EA0();
  return 0;
}

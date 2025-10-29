int sub_654C4()
{
  int j; // [sp+0h] [bp-Ch]
  int i; // [sp+4h] [bp-8h]

  if ( byte_15251D )
    return -1;
  for ( i = 0; i <= 7; ++i )
    *(_QWORD *)&byte_152520[16 * i + 56] = 2592000;
  for ( j = 0; j <= 15; ++j )
  {
    *(_QWORD *)&byte_152520[16 * j + 696] = 2592000;
    *(_QWORD *)&byte_152520[16 * j + 184] = 600;
    *(_QWORD *)&byte_152520[16 * j + 440] = 600;
  }
  *(_QWORD *)&dbl_1528F8 = 2592000;
  *(_QWORD *)&dbl_152528 = 2592000;
  *(_QWORD *)&dbl_152538 = 2592000;
  *(_QWORD *)&dbl_1528E8 = 2592000;
  *(_QWORD *)&dbl_1528D8 = 2592000;
  *(_QWORD *)&dbl_152548 = 2592000;
  byte_15251D = 1;
  return 0;
}

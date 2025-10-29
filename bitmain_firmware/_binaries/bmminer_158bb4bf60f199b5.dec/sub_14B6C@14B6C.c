void sub_14B6C()
{
  FILE *v0; // r0
  FILE *v1; // r4

  v0 = (FILE *)fopen64("/tmp/check_chip_type_failed", "r");
  if ( v0 )
  {
    fclose(v0);
    sub_226C0(0xDu, "Can't get temperature sensor type!");
  }
  else
  {
    v1 = (FILE *)fopen64("/tmp/check_chip_type_failed", "w+");
    if ( v1 )
    {
      fwrite("Can't get temperature sensor type.\n", 0x23u, 1u, v1);
      fclose(v1);
    }
    sub_226C0(0xCu, "Re-run cgminer to check temerature sensor type again!");
  }
}

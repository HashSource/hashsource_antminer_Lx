void sub_3B674()
{
  unsigned int v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r3
  char *v4; // r12
  char *v5; // r12
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = dword_9E31C;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-40s : %d\n", "voltage", **(_DWORD **)dword_1AEA80);
    sub_47EC8(3, s, 0);
    v0 = dword_9E31C;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-40s : ", "freq_base");
      sub_47EC8(3, s, 0);
      v0 = dword_9E31C;
    }
  }
  v1 = 0;
  do
  {
    while ( 1 )
    {
      v2 = 4 * v1;
      if ( *(_DWORD *)(dword_A0D68 + 4 * v1 + 4) == 1 && v0 > 3 )
        break;
      if ( ++v1 == 16 )
        goto LABEL_7;
    }
    v3 = v1++;
    snprintf(s, 0x800u, "[%d] = %d ", v3, *(_DWORD *)(*(_DWORD *)dword_1AEA80 + v2 + 4));
    sub_47EC8(3, s, 0);
    v0 = dword_9E31C;
  }
  while ( v1 != 16 );
LABEL_7:
  if ( v0 > 3 )
  {
    strcpy(s, "\n");
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-40s : %d\n", "freq_threshold", *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 68));
      sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        return;
      snprintf(s, 0x800u, "%-40s : %d\n", "freq_serial_threshold", *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 72));
      sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_21;
      snprintf(s, 0x800u, "%-40s : %d\n", "freq_diff_threshold", *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 76));
      sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        return;
      snprintf(s, 0x800u, "%-40s : %d\n", "freq_step", *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 80));
      sub_47EC8(3, s, 0);
    }
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_26;
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_bad_asic_dec", *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 84));
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    v4 = "true";
    if ( !*(_BYTE *)(*(_DWORD *)dword_1AEA80 + 88) )
      v4 = "false";
    snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol", v4);
    sub_47EC8(3, s, 0);
LABEL_21:
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_29;
    v5 = "true";
    if ( !*(_BYTE *)(*(_DWORD *)dword_1AEA80 + 89) )
      v5 = "false";
    snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", v5);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %d\n", "is_board_init_with_power_off", *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 92));
    sub_47EC8(3, s, 0);
LABEL_26:
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_32;
    snprintf(s, 0x800u, "%-40s : %.4f\n", "hw_threshold", *(float *)(*(_DWORD *)dword_1AEA80 + 96));
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_threshold", *(float *)(*(_DWORD *)dword_1AEA80 + 100));
    sub_47EC8(3, s, 0);
LABEL_29:
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(float *)(*(_DWORD *)dword_1AEA80 + 104));
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %d\n", "pm_grade_step", *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 108));
    sub_47EC8(3, s, 0);
LABEL_32:
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-40s : %d\n", "pm_grade_count", *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 112));
      sub_47EC8(3, s, 0);
    }
  }
}

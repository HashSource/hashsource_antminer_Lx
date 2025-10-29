int dev_init_hal_pcba()
{
  int v0; // r4
  int *v1; // r5
  int v2; // r6
  unsigned int hash_on_plug; // r9
  int v4; // r3
  int v5; // r2

  v0 = platform_init();
  if ( v0 )
    return sub_BB898();
  LOWORD(v1) = -14904;
  LOWORD(v2) = -11196;
  HIWORD(v1) = (unsigned int)&unk_16B4C8 >> 16;
  *v1 = 0;
  HIWORD(v2) = (unsigned int)&unk_16C33C >> 16;
  hash_on_plug = get_hash_on_plug();
  printf("plug_on_status: %x\n", hash_on_plug);
  do
  {
    while ( ((hash_on_plug >> v0) & 1) == 0 )
    {
      if ( ++v0 == 16 )
        goto LABEL_6;
    }
    v4 = *v1;
    v5 = v0;
    *(_DWORD *)(v2 + 8 * *v1) = v0++;
    *(_BYTE *)(v2 + 8 * v4 + 4) = 1;
    printf("chain_offset %d, chain %d\n", v4, v5);
    ++*v1;
  }
  while ( v0 != 16 );
LABEL_6:
  enable_bypass_mode();
  dev_config_hal((int)"re_version");
  return 0;
}

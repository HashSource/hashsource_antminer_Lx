int __fastcall get_fake_regio_runtime(int a1)
{
  _UNKNOWN **v1; // r0
  int v2; // r4

  if ( !dword_47B938[a1] )
  {
    dword_47B938[a1] = calloc(1u, 0x310u);
    *(_DWORD *)(dword_47B938[a1] + 136) = a1;
    v1 = dev_ctrl();
    ((void (__fastcall *)(int))v1[1])(a1);
    pthread_mutex_init((pthread_mutex_t *)(dword_47B938[a1] + 688), 0);
    pthread_mutex_init((pthread_mutex_t *)(dword_47B938[a1] + 712), 0);
    v2 = dword_47B938[a1];
    *(_DWORD *)(v2 + 664) = queue_new(1, 0);
    *(_DWORD *)(dword_47B938[a1] + 656) = *(_DWORD *)(dword_47B938[a1] + 664);
    *(_DWORD *)(dword_47B938[a1] + 148) = set_chipaddr_base;
    *(_DWORD *)(dword_47B938[a1] + 152) = set_inactive_base;
    *(_DWORD *)(dword_47B938[a1] + 156) = set_chip_reg_base;
    *(_DWORD *)(dword_47B938[a1] + 160) = set_core_reg_base;
    *(_DWORD *)(dword_47B938[a1] + 176) = sync_get_chip_reg_base;
    *(_DWORD *)(dword_47B938[a1] + 184) = sync_get_core_reg_base;
    *(_BYTE *)(dword_47B938[a1] + 144) = 1;
  }
  return dword_47B938[a1];
}

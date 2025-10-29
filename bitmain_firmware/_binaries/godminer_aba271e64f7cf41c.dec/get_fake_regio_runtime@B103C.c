int __fastcall get_fake_regio_runtime(int a1)
{
  int (**v1)(); // r0
  int v2; // r4

  if ( !dword_15FFF0[a1] )
  {
    dword_15FFF0[a1] = calloc(1u, 0x510u);
    *(_DWORD *)(dword_15FFF0[a1] + 248) = a1;
    v1 = dev_ctrl();
    ((void (__fastcall *)(int))v1[1])(a1);
    pthread_mutex_init((pthread_mutex_t *)(dword_15FFF0[a1] + 1024), 0);
    pthread_mutex_init((pthread_mutex_t *)(dword_15FFF0[a1] + 1048), 0);
    v2 = dword_15FFF0[a1];
    *(_DWORD *)(v2 + 868) = queue_new(1, 0);
    *(_DWORD *)(dword_15FFF0[a1] + 860) = *(_DWORD *)(dword_15FFF0[a1] + 868);
    *(_DWORD *)(dword_15FFF0[a1] + 260) = set_chipaddr_base;
    *(_DWORD *)(dword_15FFF0[a1] + 264) = set_inactive_base;
    *(_DWORD *)(dword_15FFF0[a1] + 268) = set_chip_reg_base;
    *(_DWORD *)(dword_15FFF0[a1] + 272) = set_core_reg_base;
    *(_DWORD *)(dword_15FFF0[a1] + 288) = sync_get_chip_reg_base;
    *(_DWORD *)(dword_15FFF0[a1] + 300) = sync_get_core_reg_base;
    *(_BYTE *)(dword_15FFF0[a1] + 256) = 1;
  }
  return dword_15FFF0[a1];
}

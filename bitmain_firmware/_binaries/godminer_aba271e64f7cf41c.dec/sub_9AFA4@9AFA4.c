void __fastcall sub_9AFA4(int a1, int a2, int a3)
{
  char v5[32]; // [sp+24h] [bp-1820h] BYREF
  char v6[32]; // [sp+824h] [bp-1020h] BYREF
  _DWORD v7[3]; // [sp+1824h] [bp-20h] BYREF
  void *ptr; // [sp+1830h] [bp-14h]
  int v9; // [sp+1834h] [bp-10h]
  _DWORD *v10; // [sp+1838h] [bp-Ch]
  int i; // [sp+183Ch] [bp-8h]

  if ( a3 )
  {
    v10 = new_iterator_c_map(a3);
    for ( i = ((int (__fastcall *)(_DWORD *))*v10)(v10); i; i = ((int (__fastcall *)(_DWORD *))*v10)(v10) )
    {
      v9 = v10[5];
      if ( a1 == ***(_DWORD ***)(v9 + 16) )
      {
        ptr = (void *)((int (__fastcall *)(int))v10[2])(i);
        v7[0] = a2;
        v7[1] = 0;
        v7[2] = 1;
        ((void (__fastcall *)(_DWORD *, _DWORD *, int))v10[1])(v10, v7, 12);
        snprintf(v5, 0x800u, "update the freq interval of port[%d] from %d to %d\n", a1, *(_DWORD *)ptr, a2);
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, v5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
          184,
          "update_filcker_freq",
          19,
          245,
          20,
          v6);
        free(ptr);
        break;
      }
    }
    delete_iterator_c_map(v10);
  }
}

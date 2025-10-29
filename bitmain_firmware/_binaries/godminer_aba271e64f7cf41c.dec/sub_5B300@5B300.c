int __fastcall sub_5B300(int a1, int a2, int a3)
{
  char v7[12]; // [sp+20h] [bp-100Ch] BYREF
  char *s2; // [sp+1020h] [bp-Ch]
  int v9; // [sp+1024h] [bp-8h]

  v9 = a3;
  s2 = *(char **)(a1 + 1132);
  if ( s2 )
  {
    if ( *(_DWORD *)(a2 + 1588) )
    {
      if ( !strcmp((const char *)(v9 + 16), s2)
        && !memcmp((const void *)(v9 + 80), s2 + 64, 0x20u)
        && *(_QWORD *)(v9 + 112) == *((_QWORD *)s2 + 12)
        && *(_QWORD *)(v9 + 120) == *((_QWORD *)s2 + 13)
        && (!*(_DWORD *)(a2 + 1580) || !strcmp((const char *)(v9 + 128), *(const char **)(a2 + 1580))) )
      {
        *(_QWORD *)(a1 + 1072) = (int)_byteswap_ulong(*(_DWORD *)(v9 + 192));
        *(_DWORD *)(a1 + 1072) = *(_DWORD *)(v9 + 192);
        memcpy(s2 + 112, (const void *)(v9 + 196), 0x20u);
        return 0;
      }
      else
      {
        V_LOCK();
        logfmt_raw(
          v7,
          0x1000u,
          0,
          "stale nonce, ans_id: %s ,pool_job_id: %s, chip_id %d, core_id %d",
          v9 + 128,
          *(_DWORD *)(a2 + 1580),
          *(_DWORD *)(v9 + 8),
          *(_DWORD *)(v9 + 12));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/dhash_content/x7/x7_2044/x7_2044_content.c",
          180,
          "nonce_pop_handler_x7_2044",
          25,
          55,
          20,
          v7);
        return 1;
      }
    }
    else
    {
      printf("invalid pointer(%s)!\n", "pool->work.private");
      return 3;
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}

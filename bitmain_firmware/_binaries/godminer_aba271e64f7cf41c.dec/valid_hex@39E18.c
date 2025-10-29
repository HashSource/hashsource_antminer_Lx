int __fastcall valid_hex(const char *a1)
{
  char v4[16]; // [sp+1Ch] [bp-1010h] BYREF
  unsigned __int8 v5; // [sp+101Eh] [bp-Eh]
  unsigned __int8 v6; // [sp+101Fh] [bp-Dh]
  signed int i; // [sp+1020h] [bp-Ch]
  signed int v8; // [sp+1024h] [bp-8h]

  v6 = 0;
  if ( a1 )
  {
    v8 = strlen(a1);
    for ( i = 0; i < v8; ++i )
    {
      v5 = a1[i];
      if ( dword_D985C[v5] < 0 )
      {
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "Invalid charpassed to valid_hex");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/util.c",
          144,
          "valid_hex",
          9,
          237,
          20,
          v4);
        return v6;
      }
    }
    v6 = 1;
    return 1;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Null string passed to valid_hex");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/util.c",
      144,
      "valid_hex",
      9,
      227,
      20,
      v4);
    return v6;
  }
}

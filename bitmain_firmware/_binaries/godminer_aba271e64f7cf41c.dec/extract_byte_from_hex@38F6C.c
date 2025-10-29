int __fastcall extract_byte_from_hex(const char *a1, int a2)
{
  char v5[16]; // [sp+1Ch] [bp-1010h] BYREF
  int v6; // [sp+101Ch] [bp-10h]
  int v7; // [sp+1020h] [bp-Ch]
  unsigned __int8 v8; // [sp+1026h] [bp-6h]
  unsigned __int8 v9; // [sp+1027h] [bp-5h]

  if ( (strlen(a1) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Provided hex %s is not valid!", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/util.c",
      144,
      "extract_byte_from_hex",
      21,
      29,
      100,
      v5);
  }
  v8 = tolower((unsigned __int8)a1[a2]);
  v9 = tolower((unsigned __int8)a1[a2 + 1]);
  if ( (unsigned __int8)sub_38D68(v8) != 1 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Hex character %d is not valid!", v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/util.c",
      144,
      "extract_byte_from_hex",
      21,
      36,
      100,
      v5);
  }
  if ( (unsigned __int8)sub_38D68(v9) != 1 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Hex character %d is not valid!", v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/util.c",
      144,
      "extract_byte_from_hex",
      21,
      39,
      100,
      v5);
  }
  v7 = 16 * sub_38DDC(v8);
  v6 = sub_38DDC(v9);
  if ( v7 + v6 > 255 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "The provided hex %s at index %d is not a valid byte!", a1, a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/util.c",
      144,
      "extract_byte_from_hex",
      21,
      46,
      100,
      v5);
  }
  return (unsigned __int8)(v7 + v6);
}

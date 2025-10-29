int __fastcall sub_4E210(int a1, int a2, char *a3)
{
  int v4; // r3
  char v9[68]; // [sp+24h] [bp-58h] BYREF
  char v10[12]; // [sp+68h] [bp-14h] BYREF
  const char *v11; // [sp+74h] [bp-8h]

  v11 = *(const char **)(a1 + 1132);
  if ( v11 )
  {
    bin2hex((int)v10, a1 + 1072, 4u);
    bin2hex((int)v9, (int)(v11 + 112), 0x20u);
    v4 = *(_DWORD *)(a2 + 1920);
    *(_DWORD *)(a2 + 1920) = v4 + 1;
    snprintf(
      a3,
      0xC00u,
      "{\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"submit\",\"params\":{\"id\":\"%s\",\"job_id\":\"%s\",\"nonce\":\"%s\","
      "\"result\":\"%s\",\"algo\":\"rx/0\"}}",
      v4,
      v11,
      *(const char **)(a1 + 1124),
      v10,
      v9);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}

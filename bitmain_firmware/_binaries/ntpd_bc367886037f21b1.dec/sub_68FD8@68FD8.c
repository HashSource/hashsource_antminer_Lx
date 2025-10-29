int __fastcall sub_68FD8(int a1)
{
  int v2; // r3
  int v3; // r0
  int v4; // r2
  void (__fastcall *v5)(int, int, int, int); // r5
  int v6; // r1
  int result; // r0
  _DWORD *v8; // r4

  while ( 1 )
  {
    result = sub_6E578(a1);
    v8 = (_DWORD *)result;
    if ( !result )
      break;
    v2 = result + 24;
    v3 = *(_DWORD *)(result + 8);
    v4 = *v8 - 24;
    v5 = (void (__fastcall *)(int, int, int, int))v8[4];
    v6 = v8[5];
    --intres_req_pending;
    v5(v3, v6, v4, v2);
    free(v8);
  }
  if ( worker_per_query )
    return sub_6E718(a1);
  if ( !intres_req_pending )
    return sub_40B58(180);
  return result;
}

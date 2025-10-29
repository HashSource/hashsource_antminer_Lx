int __fastcall heartbeat_on_device(int a1, int a2, int a3)
{
  int v5; // r0
  bool v6; // zf
  int result; // r0

  v5 = dev_ctrl(a1);
  v6 = (*(int (__fastcall **)(_DWORD))(v5 + 72))(*(_DWORD *)(a1 + 136)) == 0;
  result = a3 + 64;
  if ( v6 )
    *(_DWORD *)(a3 + 64) |= 1u;
  return result;
}

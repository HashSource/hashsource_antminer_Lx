int __fastcall stop_mining_base(int a1)
{
  _UNKNOWN **v1; // r0

  (*(void (__fastcall **)(int))(a1 + 48))(a1);
  v1 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v1[9])(*(_DWORD *)(a1 + 136));
  *(_BYTE *)(a1 + 145) = 0;
  *(_BYTE *)(a1 + 146) = 0;
  return 0;
}

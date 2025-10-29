int __fastcall pcba_ltc_reg_init(int result)
{
  *(_DWORD *)(result + 304) = 1;
  return result;
}

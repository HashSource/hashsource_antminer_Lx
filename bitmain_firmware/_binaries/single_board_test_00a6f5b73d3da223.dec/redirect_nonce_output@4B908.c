int __fastcall redirect_nonce_output(int result, int a2)
{
  while ( *(_DWORD *)(result + 668) != result && *(_DWORD *)(result + 668) )
    *(_DWORD *)(result + 668) = result;
  *(_DWORD *)(a2 + 668) = result;
  return result;
}

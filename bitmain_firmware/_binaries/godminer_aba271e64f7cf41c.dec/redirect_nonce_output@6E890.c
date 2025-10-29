int __fastcall redirect_nonce_output(int result, int a2)
{
  while ( result != *(_DWORD *)(result + 1004) && *(_DWORD *)(result + 1004) )
    *(_DWORD *)(result + 1004) = result;
  *(_DWORD *)(a2 + 1004) = result;
  return result;
}

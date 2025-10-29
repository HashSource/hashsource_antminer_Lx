int __fastcall agt_mk_comp_droids(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 < *a2 )
    return -1;
  else
    return *a1 != *a2;
}

int __fastcall try_get_seed_status(int a1, int a2, int a3, _DWORD *a4)
{
  int seed_status_x7; // [sp+1Ch] [bp-8h]

  seed_status_x7 = sync_unblocked_get_seed_status_x7(a1, 2, a2, a3, a4);
  if ( seed_status_x7 )
    return seed_status_x7;
  else
    return 0;
}

int __fastcall try_get_msg_ack(int a1, int a2, int a3, _DWORD *a4)
{
  int msg_x7; // [sp+1Ch] [bp-8h]

  msg_x7 = sync_unblocked_get_msg_x7(a1, 3, a2, a3, 13, a4);
  if ( msg_x7 )
    return msg_x7;
  else
    return 0;
}

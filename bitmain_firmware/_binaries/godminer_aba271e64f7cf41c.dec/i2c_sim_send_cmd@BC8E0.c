int __fastcall i2c_sim_send_cmd(char a1, char a2, char a3, unsigned __int8 a4, unsigned __int8 a5)
{
  unsigned __int8 v10; // [sp+7h] [bp-Dh]
  unsigned __int8 v11; // [sp+Fh] [bp-5h]

  v10 = 2 * a1;
  if ( a3 )
  {
    sub_BC2F0();
    sub_BC4D8(v10);
    sub_BC4D8(a4);
  }
  if ( a2 )
  {
    sub_BC2F0();
    sub_BC4D8(v10 | 1);
    v11 = sub_BC668(0);
    sub_BC318();
    return v11;
  }
  else
  {
    if ( a3 != 1 )
    {
      sub_BC2F0();
      sub_BC4D8(v10);
    }
    sub_BC4D8(a5);
    sub_BC318();
    return 0;
  }
}

bool __fastcall sub_671A4(int ecode)
{
  int v2; // r4
  const char *v3; // r0
  const char *v4; // r3
  const char *v5; // r1
  int v6; // r4
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0

  switch ( ecode )
  {
    case -11:
      if ( debug <= 1 )
        goto LABEL_17;
      v2 = 1;
      v8 = gai_strerror(-11);
      v4 = byte_97B44;
      v5 = v8;
      goto LABEL_15;
    case -5:
    case -2:
      v6 = dword_106200;
      if ( debug <= 1 )
        return dword_106200 == 0;
      v5 = gai_strerror(ecode);
      if ( v6 )
      {
        v2 = 0;
        v4 = "not ";
      }
      else
      {
        v2 = 1;
        v4 = byte_97B44;
      }
      goto LABEL_15;
    case -4:
      if ( debug <= 1 )
        goto LABEL_17;
      v2 = 1;
      v3 = gai_strerror(-4);
      v4 = byte_97B44;
      v5 = v3;
      goto LABEL_15;
    case -3:
      v2 = 1;
      dword_106200 = 1;
      if ( debug > 1 )
      {
        v7 = gai_strerror(-3);
        v4 = byte_97B44;
        v5 = v7;
        goto LABEL_15;
      }
LABEL_17:
      v2 = 1;
      break;
    default:
      if ( debug > 1 )
      {
        v2 = 0;
        v9 = gai_strerror(ecode);
        v4 = "not ";
        v5 = v9;
LABEL_15:
        sub_64940("intres: resolver returned: %s (%d), %sretrying\n", v5, ecode, v4);
      }
      else
      {
        v2 = 0;
      }
      break;
  }
  return v2;
}

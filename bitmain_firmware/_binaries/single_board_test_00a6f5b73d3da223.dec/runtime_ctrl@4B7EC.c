_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v3; // [sp+Ch] [bp+Ch]

  switch ( a1 )
  {
    case 1:
      v3 = runtime_ctrl_vbk();
      break;
    case 2:
      v3 = runtime_ctrl_ckb();
      break;
    case 3:
      v3 = runtime_ctrl_ae();
      break;
    case 4:
      v3 = runtime_ctrl_grin32();
      break;
    case 5:
      v3 = runtime_ctrl_eth();
      break;
    case 6:
      v3 = runtime_ctrl_ltc();
      break;
    case 7:
      v3 = runtime_ctrl_dash();
      break;
    case 8:
      v3 = runtime_ctrl_ckb2();
      break;
    case 9:
      v3 = runtime_ctrl_dcr();
      break;
    default:
      v3 = runtime_ctrl_grin29();
      break;
  }
  if ( v3 )
  {
    pthread_mutex_lock(&stru_47A2B0);
    v3[58] = a1;
    dword_479EAC[dword_47A2AC] = v3;
    v3[34] = dword_47A2AC++;
    pthread_mutex_unlock(&stru_47A2B0);
  }
  return v3;
}

int __fastcall open_pic(unsigned __int8 a1)
{
  int v4; // [sp+Ch] [bp+Ch] BYREF
  __int16 v5; // [sp+10h] [bp+10h]
  char v6; // [sp+12h] [bp+12h]
  unsigned __int8 v7; // [sp+13h] [bp+13h]
  int v8; // [sp+14h] [bp+14h]

  if ( g_bitmain_pic_state[2 * a1] && g_bitmain_pic_state[2 * a1 + 1] )
    return g_bitmain_pic_state[2 * a1];
  v4 = a1;
  v5 = 0;
  v6 = byte_47B310;
  v7 = a1;
  pthread_mutex_lock(&i2c_mutex_all);
  v8 = iic_init((int)&v4);
  pthread_mutex_unlock(&i2c_mutex_all);
  if ( v8 >= 0 )
  {
    g_bitmain_pic_state[2 * a1] = v8;
    g_bitmain_pic_state[2 * a1 + 1] = 1;
  }
  return v8;
}

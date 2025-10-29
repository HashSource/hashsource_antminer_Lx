int sub_73B94()
{
  int v0; // r4
  int *v1; // r6
  int v3; // [sp+Ch] [bp-804h] BYREF
  _DWORD v4[512]; // [sp+10h] [bp-800h] BYREF

  v3 = -1;
  if ( dword_1B0E60 )
  {
    v0 = dword_1B14CC;
    if ( dword_1B14CC )
    {
      v1 = (int *)dword_1B14D0;
    }
    else
    {
      v1 = sub_69ED4((int)sub_73AC4, 0, 0);
      dword_1B14D0 = (int)v1;
      pthread_mutex_init(&stru_1B14D4, 0);
      v0 = dword_1B14CC;
    }
    dword_1B14CC = v0 + 1;
    v3 = v0 + 1;
    v4[0] = 0;
    v4[1] = 0;
    sub_69F24(v1, &v3, 4u, v4, 8u);
    return v3;
  }
  else
  {
    strcpy((char *)v4, "please init platform first!!\n");
    sub_47AB4(0, (const char *)v4, 0);
    return -2;
  }
}

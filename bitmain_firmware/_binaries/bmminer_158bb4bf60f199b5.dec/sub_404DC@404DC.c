int __fastcall sub_404DC(unsigned int *a1, int a2, const char *a3, unsigned __int8 a4)
{
  unsigned int *v6; // r5
  char *v7; // r0
  unsigned int v8; // r0
  int v9; // r7
  const char *v10; // r3
  int v11; // r2
  int v12; // r1
  unsigned __int8 v14; // [sp+18h] [bp+18h]

  if ( a3 && *a3 )
  {
    v6 = a1;
    v7 = strchr(a3, 44);
    if ( v7 )
    {
      *v7 = 0;
      v8 = strtol(v7 + 1, 0, 10);
      v9 = v8;
      if ( v8 > 0x270F )
      {
        v14 = a4;
        v10 = a3;
        v11 = v8;
        v12 = 84;
        a1 = v6;
      }
      else
      {
        if ( !strcasecmp(a3, "queue") )
        {
          dword_9EE6C = v9;
        }
        else if ( !strcasecmp(a3, "scantime") )
        {
          dword_9ED98 = v9;
        }
        else
        {
          if ( strcasecmp(a3, "expiry") )
          {
            v14 = a4;
            v10 = a3;
            v11 = 0;
            a1 = v6;
            v12 = 83;
            return sub_3F65C(a1, v12, v11, (int)v10, v14);
          }
          dword_9ED9C = v9;
        }
        v14 = a4;
        v10 = a3;
        v11 = v9;
        a1 = v6;
        v12 = 82;
      }
    }
    else
    {
      v14 = a4;
      v10 = a3;
      v11 = 0;
      v12 = 86;
      a1 = v6;
    }
  }
  else
  {
    v10 = 0;
    v14 = a4;
    v11 = 0;
    v12 = 85;
  }
  return sub_3F65C(a1, v12, v11, (int)v10, v14);
}

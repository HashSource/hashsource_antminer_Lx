int __fastcall sub_393C4(int a1)
{
  unsigned int v2; // r7
  int v3; // r5
  const char *v4; // r0
  int (__fastcall **v6)(_DWORD, int); // r11
  int v7; // r0
  char v8; // r12
  int v9; // r2
  int v10; // r10

  if ( *(_WORD *)(a1 + 16) == 2 && (v2 = bswap32(*(_DWORD *)(a1 + 20)), HIWORD(v2) << 16 == 2139029504) )
  {
    if ( (unsigned __int8)num_refclock_conf > (unsigned int)BYTE1(v2)
      && (v6 = (int (__fastcall **)(_DWORD, int))*(&refclock_conf + BYTE1(v2)), *v6) )
    {
      v7 = sub_637E4(0, 792, 0, 1);
      v8 = *(_BYTE *)(a1 + 66);
      v9 = *(_DWORD *)(a1 + 68);
      *(_BYTE *)(a1 + 93) = 0;
      *(_BYTE *)(a1 + 88) = BYTE1(v2);
      *(_BYTE *)(a1 + 89) = v2;
      *(_DWORD *)(a1 + 68) = v9 | 8;
      *(_BYTE *)(a1 + 94) = v8;
      v10 = v7;
      *(_DWORD *)(a1 + 84) = v7;
      *(_BYTE *)(a1 + 91) = 3;
      *(_BYTE *)(v7 + 43) = BYTE1(v2);
      *(_DWORD *)(v7 + 4) = v6;
      *(_DWORD *)(v7 + 28) = -1;
      *(_DWORD *)(v7 + 772) = current_time;
      if ( *(_BYTE *)(a1 + 63) == 1 )
        *(_BYTE *)(a1 + 92) = 2;
      else
        *(_BYTE *)(a1 + 92) = 4;
      v3 = (*v6)((unsigned __int8)v2, a1);
      if ( v3 )
      {
        v3 = 1;
        *(_DWORD *)(a1 + 112) = *(_DWORD *)(v10 + 764);
      }
      else
      {
        sub_39330(a1);
      }
    }
    else
    {
      v3 = 0;
      sub_64A18(3, "refclock_newpeer: clock type %d invalid\n", BYTE1(v2));
    }
  }
  else
  {
    v3 = 0;
    v4 = (const char *)sub_6BF44(a1 + 16);
    sub_64A18(3, "refclock_newpeer: clock address %s invalid", v4);
  }
  return v3;
}

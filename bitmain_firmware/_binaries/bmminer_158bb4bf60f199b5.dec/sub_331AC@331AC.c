unsigned int __fastcall sub_331AC(int a1)
{
  unsigned int v1; // r6
  unsigned int v3; // r1
  unsigned int v4; // r7
  int v5; // r8
  int v6; // r9
  unsigned int result; // r0
  int v8; // r2
  int v9; // r1
  bool v10; // cc
  unsigned int v11; // r3
  int v12; // r12
  int v13; // r2
  int v14; // r2

  v1 = *(_DWORD *)(a1 + 4);
  v3 = *(unsigned __int8 *)(dword_A0D68 + 12954);
  if ( !*(_BYTE *)(dword_A0D68 + 12954) )
    v3 = 3;
  v4 = sub_75CF4(v1, v3);
  v5 = *(_WORD *)(a1 + 2) & 0x7FFF;
  v6 = *(_BYTE *)a1 & 0xF;
  result = sub_75CEC(v1);
  if ( *(_DWORD *)(dword_A0D68 + 4 * v6 + 4) )
  {
    v8 = dword_1AEA68;
    if ( (*(_BYTE *)a1 & 0x20) != 0 )
    {
      ++*(_DWORD *)(dword_1AEA68 + 4 * v6 + 1941192);
    }
    else if ( (*(_BYTE *)a1 & 0x40) != 0 )
    {
      ++*(_DWORD *)(dword_1AEA68 + 4 * v6 + 1941256);
    }
    else if ( (*(_BYTE *)a1 & 0x80) != 0 )
    {
      if ( v4 > 0x4D )
      {
        ++*(_DWORD *)(dword_1AEA68 + 4 * v6 + 3853516);
      }
      else
      {
        result = 4 * (__int16)result + (v5 & 3);
        v9 = v5 >> 7;
        v10 = (unsigned int)(v5 >> 7) > 7;
        if ( (unsigned int)(v5 >> 7) <= 7 )
          v10 = result > 0x17E;
        if ( v10 )
        {
          ++*(_DWORD *)(dword_1AEA68 + 4 * v6 + 1941448);
        }
        else if ( *(_DWORD *)(*(_DWORD *)(dword_1AEA68 + 4 * ((_DWORD)&unk_EDF22 + v4) + 4) + 52 * v9 + 416 * result + 4) == v1 )
        {
          v11 = dword_1AEA68 + 4 * (383 * v4 + 29874 * v6 + result);
          result = v11 + 1941504;
          v12 = *(_DWORD *)(v11 + 1941576);
          if ( (v12 & (1 << v9)) != 0 )
          {
            ++*(_DWORD *)(dword_1AEA68 + 4 * v6 + 1941128);
          }
          else
          {
            *(_DWORD *)(v11 + 1941576) = v12 | (1 << v9);
            result = *(_DWORD *)(v11 + 8) + 1;
            *(_DWORD *)(v11 + 8) = result;
            ++*(_DWORD *)(v8 + 4 * (v4 + 78 * v6) + 1911944);
            ++*(_DWORD *)(v8 + 4 * v6 + 1916936);
          }
        }
        else
        {
          result = sub_31658((_DWORD *)(dword_1AEA68 + 52 * (v5 & 0x7F) + 6656 * v6 + 3898820), v1);
          if ( result )
            v13 = *(_DWORD *)(dword_1AEA68 + 4 * v6 + 1941384);
          else
            v13 = *(_DWORD *)(dword_1AEA68 + 4 * v6 + 1941448);
          v14 = v13 + 1;
          if ( result )
            *(_DWORD *)(dword_1AEA68 + 4 * v6 + 1941384) = v14;
          else
            *(_DWORD *)(dword_1AEA68 + 4 * v6 + 1941448) = v14;
        }
      }
    }
    else
    {
      ++*(_DWORD *)(dword_1AEA68 + 4 * v6 + 1941320);
    }
  }
  else
  {
    ++*(_DWORD *)(dword_1AEA68 + 3853512);
  }
  return result;
}

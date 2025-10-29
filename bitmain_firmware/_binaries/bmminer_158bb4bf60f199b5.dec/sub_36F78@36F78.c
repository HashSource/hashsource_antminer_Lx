void __fastcall sub_36F78(int a1)
{
  int v2; // r3
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v3, "[DEBUG] Send work for hw sweep.\n");
    sub_47AB4(4, v3, 0);
  }
  if ( dword_1AEA78 && (v2 = *(_DWORD *)(dword_1AEA78 + 4)) != 0 )
  {
    (*(void (__fastcall **)(int, int))(v2 + 28))(255, a1);
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    sub_36E34();
  }
}

unsigned int __fastcall sub_8B118(unsigned int result, int a2)
{
  FILE *v2; // r3

  if ( byte_1062C4 )
    v2 = stderr;
  else
    v2 = stdout;
  if ( result > 0xF )
    return sub_8A114(result, (_DWORD *)(a2 + 16), (_BYTE **)(a2 + 24), v2, 0);
  return result;
}

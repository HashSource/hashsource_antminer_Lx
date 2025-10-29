int __fastcall sub_42C4C(int *a1)
{
  unsigned __int8 buf; // [sp+Fh] [bp+Fh] BYREF

  if ( read(*a1, &buf, 1u) == 1 )
    return buf;
  else
    return -1;
}

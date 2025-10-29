__int16 *sub_18CE4()
{
  __int16 *result; // r0
  int i; // r3

  result = (_WORD *)(elf_hash_bucket + 1648);
  dword_B82C4 = 0;
  for ( i = fd_list; fd_list; i = fd_list )
    result = sub_157B8(*(__int16 **)(i + 4));
  return result;
}

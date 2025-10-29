void **__fastcall compressor_reset(void **result)
{
  void **v1; // [sp+4h] [bp+4h]

  v1 = result;
  if ( result[7] )
    result = (void **)memset(result[7], (unsigned __int8)result[8], 4 * (_DWORD)result[3]);
  v1[6] = 0;
  return result;
}

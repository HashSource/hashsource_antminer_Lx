void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return memcpy(result, dword_1603F8, 0x124u);
  return result;
}

void *__fastcall copy_app_config(int a1)
{
  const char *v1; // r4
  size_t v2; // r0
  size_t v3; // r0
  size_t v4; // r0
  size_t v5; // r0
  void *result; // r0

  v1 = *(const char **)(a1 + 20);
  v2 = strlen(v1);
  memcpy((void *)MES2Local_Config_Information, v1, v2);
  v3 = strlen(*(const char **)(a1 + 24));
  memcpy((void *)(MES2Local_Config_Information + 16), *(const void **)(a1 + 24), v3);
  memset((void *)(MES2Local_Config_Information + 32), 0, 0x10u);
  v4 = strlen(*(const char **)(a1 + 28));
  memcpy((void *)(MES2Local_Config_Information + 32), *(const void **)(a1 + 28), v4);
  memset((void *)(MES2Local_Config_Information + 48), 0, 0x10u);
  v5 = strlen(*(const char **)(a1 + 16));
  result = memcpy((void *)(MES2Local_Config_Information + 48), *(const void **)(a1 + 16), v5);
  *(_DWORD *)(MES2Local_Config_Information + 64) = *(_DWORD *)(a1 + 40);
  *(_BYTE *)(MES2Local_Config_Information + 188) = *(_DWORD *)(a1 + 32) != 0;
  *(_BYTE *)(MES2Local_Config_Information + 189) = *(_DWORD *)(a1 + 36) != 0;
  *(_BYTE *)(MES2Local_Config_Information + 468) = *(_DWORD *)(a1 + 108) != 0;
  *(_BYTE *)(MES2Local_Config_Information + 88) = 0;
  *(_BYTE *)(MES2Local_Config_Information + 89) = 1;
  return result;
}

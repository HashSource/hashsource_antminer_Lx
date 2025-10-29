_QWORD *__fastcall sub_12344(_QWORD *result, _DWORD *a2)
{
  __int64 v2; // r2

  LODWORD(v2) = 2;
  *(_QWORD *)((char *)result + 4) = 0;
  *(_QWORD *)((char *)result + 12) = 0;
  result[2] = 0;
  HIDWORD(v2) = *a2;
  *result = v2;
  return result;
}

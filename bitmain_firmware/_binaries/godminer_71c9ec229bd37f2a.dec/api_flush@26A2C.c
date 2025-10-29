int *api_flush()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r2
  _DWORD *v2; // r1
  _QWORD *v3; // r12
  int *result; // r0
  _QWORD *v5; // r3

  LOWORD(v0) = -6204;
  HIWORD(v0) = (unsigned int)&unk_16C794 >> 16;
  LOWORD(v1) = -6208;
  LOWORD(v2) = -6244;
  HIWORD(v1) = (unsigned int)&unk_16C790 >> 16;
  *v0 = 0;
  HIWORD(v2) = (unsigned int)&unk_16C76C >> 16;
  LOWORD(v0) = -6240;
  *v2 = 0;
  HIWORD(v0) = (unsigned int)&unk_16C770 >> 16;
  *v1 = 0;
  LOWORD(v1) = -6248;
  *v0 = 0;
  HIWORD(v1) = (unsigned int)&unk_16C768 >> 16;
  LOWORD(v0) = -6280;
  *v1 = 0;
  HIWORD(v0) = (unsigned int)&unk_16C748 >> 16;
  dword_166EE4 = 0;
  *(_QWORD *)v0 = 0;
  LOWORD(v0) = -6232;
  *(_QWORD *)&dword_166EF0 = 0;
  HIWORD(v0) = (unsigned int)&unk_16C778 >> 16;
  dbl_166EE8 = 0.0;
  *(_QWORD *)v0 = 0;
  *(_QWORD *)&total_discarded = 0;
  LOWORD(v3) = -6224;
  LOWORD(v2) = -6200;
  LOWORD(result) = -6192;
  HIWORD(v2) = (unsigned int)&unk_16C798 >> 16;
  HIWORD(v3) = (unsigned int)&unk_16C780 >> 16;
  HIWORD(result) = (unsigned int)&unk_16C7A0 >> 16;
  *(_QWORD *)v2 = 0;
  *v3 = 0;
  LOWORD(v2) = -6272;
  *(_QWORD *)result = 0;
  LOWORD(v1) = -6256;
  LOWORD(v5) = -6216;
  HIWORD(v2) = (unsigned int)&unk_16C750 >> 16;
  HIWORD(v1) = (unsigned int)&unk_16C760 >> 16;
  HIWORD(v5) = (unsigned int)&unk_16C788 >> 16;
  *(_QWORD *)v2 = 0;
  *(_QWORD *)v1 = 0;
  *v5 = 0;
  return result;
}

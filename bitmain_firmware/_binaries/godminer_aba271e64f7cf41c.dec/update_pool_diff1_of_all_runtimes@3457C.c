int __fastcall update_pool_diff1_of_all_runtimes(int a1)
{
  __int64 v1; // r0
  int v4; // [sp+Ch] [bp-20h] BYREF
  _DWORD *all_created_runtime; // [sp+10h] [bp-1Ch]
  int i; // [sp+14h] [bp-18h]
  double v7; // [sp+18h] [bp-14h]

  v4 = 0;
  all_created_runtime = get_all_created_runtime(&v4);
  v7 = 0.0;
  for ( i = 0; i < v4; ++i )
    *(_QWORD *)&v7 += *(_QWORD *)(all_created_runtime[i] + 8 * (*(_DWORD *)a1 + 71));
  *(_QWORD *)&total_diff1 += *(_QWORD *)&v7 - *(_QWORD *)&dbl_152228[*(_DWORD *)a1];
  v1 = *(_QWORD *)(a1 + 1992);
  *(_QWORD *)(a1 + 1992) = *(_QWORD *)&v7 - *(_QWORD *)&dbl_152228[*(_DWORD *)a1] + v1;
  dbl_152228[*(_DWORD *)a1] = v7;
  return v1;
}

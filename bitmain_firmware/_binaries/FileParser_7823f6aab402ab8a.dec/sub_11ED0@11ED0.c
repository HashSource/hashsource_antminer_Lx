_QWORD *__fastcall sub_11ED0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, double a7)
{
  __int64 v10; // [sp+18h] [bp-1Ch]
  __int64 v11; // [sp+20h] [bp-14h]
  __int64 v12; // [sp+50h] [bp+1Ch]
  unsigned __int64 v13; // [sp+50h] [bp+1Ch]
  unsigned __int64 v14; // [sp+58h] [bp+24h]

  v12 = a2 + *(_QWORD *)&a6;
  v14 = sub_114E4(*(_QWORD *)&a7 + v12 + a5, 21);
  v11 = v12;
  v13 = a4 + a3 + v12;
  v10 = v11 + v14 + sub_114E4(v13, 44);
  *a1 = a5 + v13;
  a1[1] = v10;
  return a1;
}

unsigned __int64 __fastcall sub_59550(int a1)
{
  double v2; // r0
  double v3; // d8
  double v4; // r0
  double v5; // d8
  double v6; // r0
  double v7; // d6
  double v8; // r0
  double v9; // d8
  unsigned __int64 v10; // r6
  int v11; // r8
  unsigned __int64 *v12; // r3
  int *v14; // r0
  int *v15; // r0
  int *v16; // r0
  int *v17; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  LODWORD(v2) = sub_778A4(*(_QWORD *)(a1 + 216));
  v3 = v2 * 6.27710174e57;
  LODWORD(v4) = sub_778A4(*(_QWORD *)(a1 + 208));
  v5 = v3 + v4 * 3.40282367e38;
  LODWORD(v6) = sub_778A4(*(_QWORD *)(a1 + 200));
  v7 = v6;
  LODWORD(v8) = sub_778A4(*(_QWORD *)(a1 + 192));
  v9 = v8 + v5 + v7 * 1.84467441e19;
  if ( v9 == 0.0 )
    v9 = 0.0;
  round();
  v10 = (unsigned __int64)(2.69595353e67 / v9);
  if ( pthread_mutex_lock(&stru_2440BC) )
  {
    v14 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v14, "cgminer.c", "share_diff", 5145);
    goto LABEL_14;
  }
  v11 = pthread_rwlock_wrlock(&rwlock);
  if ( v11 )
  {
    v15 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v15, "cgminer.c", "share_diff", 5145);
    goto LABEL_14;
  }
  if ( qword_1AF0D0 < v10 )
  {
    qword_1AF0D0 = (unsigned __int64)(2.69595353e67 / v9);
    v11 = 1;
    sub_51B18(v10, dword_9ED70, 8u, 0);
  }
  v12 = (unsigned __int64 *)(*(_DWORD *)(a1 + 260) + 368);
  if ( *v12 < v10 )
    *v12 = v10;
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v16 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v16, "cgminer.c", "share_diff", 5159);
    goto LABEL_14;
  }
  if ( pthread_mutex_unlock(&stru_2440BC) )
  {
    v17 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v17, "cgminer.c", "share_diff", 5159);
LABEL_14:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  off_9E444();
  if ( v11 && (byte_244080 || byte_1AECC4 || dword_9E320 > 5) )
  {
    snprintf(s, 0x800u, "New best share: %s", dword_9ED70);
    sub_47AB4(6, s, 0);
  }
  return (unsigned __int64)(2.69595353e67 / v9);
}

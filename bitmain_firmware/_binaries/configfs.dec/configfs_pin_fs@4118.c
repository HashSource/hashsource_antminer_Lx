__int64 configfs_pin_fs()
{
  __int64 result; // x0

  LODWORD(result) = simple_pin_fs(&off_6C28, &qword_7108, &unk_7100);
  if ( (_DWORD)result )
    return (int)result;
  else
    return *(_QWORD *)qword_7108;
}

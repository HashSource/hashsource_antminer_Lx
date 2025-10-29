__int64 __fastcall sub_3F78(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 root; // x20
  __int64 result; // x0

  *(_BYTE *)(a1 + 20) = 12;
  *(_QWORD *)(a1 + 96) = 1650812272;
  *(_QWORD *)(a1 + 24) = 4096;
  *(_DWORD *)(a1 + 1384) = 1;
  *(_QWORD *)(a1 + 48) = &unk_5200;
  v2 = configfs_new_inode(16877, (__int64)&unk_6B48, a1);
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 32) = configfs_root_inode_operations;
    *(_QWORD *)(v2 + 376) = &configfs_dir_operations;
    inc_nlink(v2);
    root = d_make_root(v3);
    if ( root )
    {
      config_group_init(&off_6BA0);
      *(_QWORD *)(root + 144) = &unk_6B48;
      *(_QWORD *)(a1 + 1472) = &configfs_dentry_ops;
      result = 0;
      *(_QWORD *)(a1 + 104) = root;
      qword_6BE8 = root;
      return result;
    }
    if ( (word_6D72 & 4) != 0 )
    {
      _dynamic_pr_debug(off_6D50, "configfs: %s: could not get root dentry!\n", "configfs_fill_super");
      return 4294967284LL;
    }
  }
  else if ( (word_6D4A & 4) != 0 )
  {
    _dynamic_pr_debug(off_6D28, "configfs: could not get root inode\n");
    return 4294967284LL;
  }
  return 4294967284LL;
}

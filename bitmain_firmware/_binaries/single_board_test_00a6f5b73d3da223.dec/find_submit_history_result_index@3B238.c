int __fastcall find_submit_history_result_index(unsigned __int8 *a1)
{
  unsigned __int8 i; // [sp+Fh] [bp+Fh]

  if ( dword_47BE7C >= (unsigned int)(gTest_loop - 1) )
  {
    printf("We had do %d tests, and strict standard are not ok", dword_47BE7C + 1);
    for ( i = 0; i < (unsigned int)gTest_loop; ++i )
    {
      if ( *((_BYTE *)&gHistory_Result + 265800 * i + 265796) == 1 )
      {
        *a1 = i;
        printf("find history result index: %d, and it is LOOSE_STANDARD", *a1);
        return 0;
      }
    }
    *a1 = dword_47BE7C;
    printf("find history result index: %d, and this time pattern test fail", *a1);
    return 1;
  }
  else if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 265796) )
  {
    printf("Not find history result index, and go on testing. g_pcba_info.level_index = %d", dword_47BE7C);
    return 2;
  }
  else
  {
    *a1 = dword_47BE7C;
    printf("find history result index: %d, and it is STRICT_STANDARD", *a1);
    return 0;
  }
}

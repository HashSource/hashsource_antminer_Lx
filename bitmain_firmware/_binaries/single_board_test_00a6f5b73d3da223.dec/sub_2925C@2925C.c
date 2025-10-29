int sub_2925C()
{
  pthread_t v0; // r0
  int v2; // [sp+Ch] [bp+4h]

  v0 = pthread_self();
  pthread_detach(v0);
  v2 = 0;
  g_lcd_result_with_data = 0;
  while ( g_pcba_info )
  {
    if ( !g_lcd_result_with_data )
    {
      sprintf(dest, "Time %ds", v2);
      sprintf(byte_47BEB9, "Level %d", *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + 4));
      sprintf(&byte_47BEB9[17], "Nonce: %.2f%", flt_47BE70);
      sprintf(dword_47BEDB, "T: %d-%d %d-%d", dword_47BE58, dword_47BE54, dword_47BE60, dword_47BE5C);
      printf("board temp %d - %d, chip temp %d - %d\n", dword_47BE58, dword_47BE54, dword_47BE60, dword_47BE5C);
      pcba_display_result_on_lcd();
      ++v2;
    }
    sleep(1u);
  }
  printf("%s[%d] quit\n", "pcba_show_status_func", 405);
  return 0;
}

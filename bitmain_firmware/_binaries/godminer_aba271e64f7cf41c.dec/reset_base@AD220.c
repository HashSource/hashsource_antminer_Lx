int __fastcall reset_base(int a1)
{
  int (**v1)(); // r0

  (*(void (__fastcall **)(int))(a1 + 60))(a1);
  v1 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v1[11])(*(_DWORD *)(a1 + 248));
  queue_clear(*(_DWORD *)(a1 + 860));
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 520) = 0;
  memset(*(void **)(a1 + 516), 0, *(_DWORD *)(a1 + 848) * *(_DWORD *)(a1 + 336));
  return 0;
}

// Decompiled: monitor-recobtn_74cfc4f2adba303e


void _DT_INIT(void)

{
  FUN_00010880();
  return;
}




void FUN_00010670(int param_1,int param_2)

{
  int iVar1;
  __pid_t _Var2;
  timeval local_38;
  timeval local_30;
  
  printf("monitor-recobtn compile %s--%s\n","Aug 21 2024","19:33:54");
  do {
    iVar1 = FUN_000109a0(0);
    while (iVar1 == 0) {
      gettimeofday(&local_38,(__timezone_ptr_t)0x0);
      FUN_00010910(1);
      puts("Detect recovery button push off");
LAB_000106e4:
      iVar1 = FUN_000109a0(0);
      if (iVar1 != 1) {
        while (gettimeofday(&local_30,(__timezone_ptr_t)0x0),
              3000000 < ((local_30.tv_sec - local_38.tv_sec) * 1000000 + local_30.tv_usec) - local_38.tv_usec) {
          puts("recovery button off over 3S, wait push on");
          while (iVar1 = FUN_000109a0(0), iVar1 == 0) {
            FUN_00010910(1);
            sleep(1);
            FUN_00010910(0);
            sleep(1);
          }
          puts("recovery button on");
          _Var2 = fork();
          if (_Var2 < 0) {
            puts("error occured.");
            goto LAB_000106e4;
          }
          if (_Var2 == 0) {
            FUN_00010910();
            if (param_1 < 2) {
              sleep(1);
            }
            else {
              execvp(*(char **)(param_2 + 4),(char **)(param_2 + 4));
            }
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          wait((void *)0x0);
          puts("child complete");
          iVar1 = 100;
          do {
            FUN_00010910(1);
            usleep(100000);
            FUN_00010910(0);
            usleep(100000);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          puts("recovery factory complete");
          iVar1 = FUN_000109a0(0);
          if (iVar1 == 1) goto LAB_000107e4;
        }
        usleep(500000);
        goto LAB_000106e4;
      }
LAB_000107e4:
      FUN_00010910(0);
      iVar1 = FUN_000109a0(0);
    }
    sleep(1);
  } while( true );
}




void entry(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  __libc_start_main(FUN_00010670,in_stack_00000000,&stack0x00000004,0x10ae9,&DAT_00010b25,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x00010894) */

void FUN_00010880(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x000108b8) */
/* WARNING: Removing unreachable block (ram,0x000108c2) */

void FUN_000108a4(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x000108e4) */
/* WARNING: Removing unreachable block (ram,0x000108ee) */

void FUN_000108c8(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00021068 == '\0') {
    FUN_000108a4();
    DAT_00021068 = '\x01';
  }
  return;
}




void FUN_00010910(int param_1)

{
  char local_50 [68];
  
  if (param_1 != 0) {
    param_1 = 1;
  }
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  local_50[4] = '\0';
  local_50[5] = '\0';
  local_50[6] = '\0';
  local_50[7] = '\0';
  local_50[8] = '\0';
  local_50[9] = '\0';
  local_50[10] = '\0';
  local_50[0xb] = '\0';
  local_50[0xc] = '\0';
  local_50[0xd] = '\0';
  local_50[0xe] = '\0';
  local_50[0xf] = '\0';
  local_50[0x10] = '\0';
  local_50[0x11] = '\0';
  local_50[0x12] = '\0';
  local_50[0x13] = '\0';
  local_50[0x14] = '\0';
  local_50[0x15] = '\0';
  local_50[0x16] = '\0';
  local_50[0x17] = '\0';
  local_50[0x18] = '\0';
  local_50[0x19] = '\0';
  local_50[0x1a] = '\0';
  local_50[0x1b] = '\0';
  local_50[0x1c] = '\0';
  local_50[0x1d] = '\0';
  local_50[0x1e] = '\0';
  local_50[0x1f] = '\0';
  local_50[0x20] = '\0';
  local_50[0x21] = '\0';
  local_50[0x22] = '\0';
  local_50[0x23] = '\0';
  local_50[0x24] = '\0';
  local_50[0x25] = '\0';
  local_50[0x26] = '\0';
  local_50[0x27] = '\0';
  local_50[0x28] = '\0';
  local_50[0x29] = '\0';
  local_50[0x2a] = '\0';
  local_50[0x2b] = '\0';
  local_50[0x2c] = '\0';
  local_50[0x2d] = '\0';
  local_50[0x2e] = '\0';
  local_50[0x2f] = '\0';
  local_50[0x30] = '\0';
  local_50[0x31] = '\0';
  local_50[0x32] = '\0';
  local_50[0x33] = '\0';
  local_50[0x34] = '\0';
  local_50[0x35] = '\0';
  local_50[0x36] = '\0';
  local_50[0x37] = '\0';
  local_50[0x38] = '\0';
  local_50[0x39] = '\0';
  local_50[0x3a] = '\0';
  local_50[0x3b] = '\0';
  local_50[0x3c] = '\0';
  local_50[0x3d] = '\0';
  local_50[0x3e] = '\0';
  local_50[0x3f] = '\0';
  sprintf(local_50,"echo %d > /sys/class/gpio/gpio%d/value",param_1,0x1b2);
  system(local_50);
  sprintf(local_50,"echo %d > /sys/class/gpio/gpio%d/value",param_1,0x1b3);
  system(local_50);
  return;
}




bool FUN_00010988(char *param_1)

{
  int iVar1;
  
  iVar1 = access(param_1,0);
  return iVar1 == 0;
}




int FUN_000109a0(void)

{
  int iVar1;
  FILE *pFVar2;
  size_t sVar3;
  int local_4c;
  char local_48 [64];
  
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  local_48[0x32] = '\0';
  local_48[0x33] = '\0';
  local_48[0x34] = '\0';
  local_48[0x35] = '\0';
  local_48[0x36] = '\0';
  local_48[0x37] = '\0';
  local_48[0x38] = '\0';
  local_48[0x39] = '\0';
  local_48[0x3a] = '\0';
  local_48[0x3b] = '\0';
  local_48[0x3c] = '\0';
  local_48[0x3d] = '\0';
  local_48[0x3e] = '\0';
  local_48[0x3f] = '\0';
  sprintf(local_48,"/sys/class/gpio/gpio%d",0x1bf);
  iVar1 = access(local_48,0);
  if (iVar1 == 0) {
    sprintf(local_48,"/sys/class/gpio/gpio%d/value",0x1bf);
    pFVar2 = fopen64(local_48,"r");
    if (pFVar2 == (FILE *)0x0) {
      puts("Open read recovery button failure");
      local_4c = -1;
    }
    else {
      __isoc99_fscanf(pFVar2,"%d",&local_4c);
      fclose(pFVar2);
      if (local_4c != 0) {
        local_4c = 1;
      }
    }
    return local_4c;
  }
  pFVar2 = fopen64("/sys/class/gpio/export","w");
  if (pFVar2 != (FILE *)0x0) {
    sprintf(local_48,"%d",0x1bf);
    sVar3 = strlen(local_48);
    sVar3 = fwrite(local_48,sVar3,1,pFVar2);
    if (sVar3 != 1) {
      puts("File Write Error!");
    }
    fclose(pFVar2);
    return -1;
  }
  puts("Open read gpio/export");
  return -1;
}




void FUN_00010ae8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined **ppuVar2;
  
  _DT_INIT();
  iVar1 = 0;
  ppuVar2 = &__DT_INIT_ARRAY;
  do {
    iVar1 = iVar1 + 1;
    (*(code *)*ppuVar2)(param_1,param_2,param_3,*ppuVar2,param_4);
    ppuVar2 = ppuVar2 + 1;
  } while (iVar1 != 1);
  return;
}




void _DT_FINI(void)

{
  return;
}




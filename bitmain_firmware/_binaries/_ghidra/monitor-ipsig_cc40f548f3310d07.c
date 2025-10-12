// Decompiled: monitor-ipsig_cc40f548f3310d07


void _DT_INIT(void)

{
  FUN_000109f8();
  return;
}




void FUN_00010958(void)

{
  int iVar1;
  
  printf("monitor-ipsig compile %s--%s\n","Aug 21 2024","19:33:53");
  FUN_00011014();
  do {
    iVar1 = FUN_000114d8();
    while (iVar1 != 1) {
      usleep(400000);
      iVar1 = FUN_000114d8();
    }
    do {
      puts("Key Down!!!!!");
      FUN_00011114();
      iVar1 = FUN_000112a4();
    } while (iVar1 != 1);
  } while( true );
}




void entry(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  __libc_start_main(FUN_00010958,in_stack_00000000,&stack0x00000004,0x1156d,&DAT_000115a9,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x00010a0c) */

void FUN_000109f8(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00010a30) */
/* WARNING: Removing unreachable block (ram,0x00010a3a) */

void FUN_00010a1c(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00010a5c) */
/* WARNING: Removing unreachable block (ram,0x00010a66) */

void FUN_00010a40(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_000220a8 == '\0') {
    FUN_00010a1c();
    DAT_000220a8 = '\x01';
  }
  return;
}




undefined4 FUN_00010afc(char *param_1,char *param_2)

{
  int __fd;
  int iVar1;
  char *__src;
  undefined4 uVar2;
  char acStack_30 [15];
  undefined1 local_21;
  in_addr iStack_1c;
  
  __fd = socket(2,2,0);
  if (__fd == -1) {
    perror("socket");
    uVar2 = 0xffffffff;
  }
  else {
    strncpy(acStack_30,param_1,0x14);
    local_21 = 0x30;
    iVar1 = ioctl(__fd,0x8915,acStack_30);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
      printf(":No Such Device %s/n",param_1);
    }
    else {
      __src = inet_ntoa(iStack_1c);
      strcpy(param_2,__src);
      close(__fd);
      uVar2 = 1;
    }
  }
  return uVar2;
}




undefined4 * FUN_00010bbc(undefined4 *param_1,char *param_2)

{
  char *__s;
  int __fd;
  int iVar1;
  char *pcVar2;
  char acStack_38 [18];
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  __s = (char *)calloc(0x28,1);
  __fd = socket(2,1,0);
  if (__fd < 0) {
    perror("socket");
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  strcpy(acStack_38,param_2);
  iVar1 = ioctl(__fd,0x8927,acStack_38);
  if (-1 < iVar1) {
    close(__fd);
    sprintf(__s,"%02X:%02X:%02X:%02X:%02X:%02X",(uint)local_26,(uint)local_25,(uint)local_24,(uint)local_23,
            (uint)local_22,(uint)local_21);
    *param_1 = 0x3d43414d;
    pcVar2 = stpcpy((char *)(param_1 + 1),__s);
    pcVar2[0] = ',';
    pcVar2[1] = '\0';
    free(__s);
    return param_1;
  }
  perror("ioctl");
                    /* WARNING: Subroutine does not return */
  exit(0);
}




char * FUN_00010cc0(char *param_1,char *param_2)

{
  char *__s;
  int __fd;
  int iVar1;
  char acStack_38 [18];
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  __s = (char *)calloc(0x28,1);
  __fd = socket(2,1,0);
  if (__fd < 0) {
    perror("socket");
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  strcpy(acStack_38,param_2);
  iVar1 = ioctl(__fd,0x8927,acStack_38);
  if (-1 < iVar1) {
    close(__fd);
    sprintf(__s,"%02X:%02X:%02X:%02X:%02X:%02X",(uint)local_26,(uint)local_25,(uint)local_24,(uint)local_23,
            (uint)local_22,(uint)local_21);
    strcpy(param_1,__s);
    free(__s);
    return param_1;
  }
  perror("ioctl");
                    /* WARNING: Subroutine does not return */
  exit(0);
}




void FUN_00010da0(undefined4 param_1)

{
  char local_50 [68];
  
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




bool FUN_00010e14(char *param_1)

{
  int iVar1;
  
  iVar1 = access(param_1,0);
  return iVar1 == 0;
}




int FUN_00010e2c(void)

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
  sprintf(local_48,"/sys/class/gpio/gpio%d",0x196);
  iVar1 = access(local_48,0);
  if (iVar1 != 0) {
    pFVar2 = fopen64("/sys/class/gpio/export","w");
    if (pFVar2 == (FILE *)0x0) {
      puts("Open read gpio/export");
      return 1;
    }
    sprintf(local_48,"%d",0x196);
    sVar3 = strlen(local_48);
    sVar3 = fwrite(local_48,sVar3,1,pFVar2);
    if (sVar3 == 1) {
      fclose(pFVar2);
    }
    else {
      puts("File Write Error!");
      fclose(pFVar2);
    }
  }
  sprintf(local_48,"/sys/class/gpio/gpio%d/value",0x196);
  pFVar2 = fopen64(local_48,"r");
  if (pFVar2 != (FILE *)0x0) {
    __isoc99_fscanf(pFVar2,"%d",&local_4c);
    fclose(pFVar2);
    if (local_4c != 0) {
      local_4c = 1;
    }
    return local_4c;
  }
  puts("Open read recovery button failure");
  return 1;
}




void FUN_00010f78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_50 [64];
  
  uVar2 = 0x1b3;
  iVar1 = 3;
  if (param_1 == 0) {
    uVar2 = 0x1b2;
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
  do {
    sprintf(local_50,"echo %d > /sys/class/gpio/gpio%d/value",1,uVar2);
    system(local_50);
    usleep(50000);
    sprintf(local_50,"echo %d > /sys/class/gpio/gpio%d/value",0,uVar2);
    system(local_50);
    usleep(50000);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}




undefined4 FUN_00011014(void)

{
  int iVar1;
  undefined4 local_14 [2];
  
  DAT_000220a4 = socket(2,2,0);
  if (DAT_000220a4 == -1) {
    printf("socket error");
    return 0xffffffff;
  }
  local_14[0] = 1;
  iVar1 = setsockopt(DAT_000220a4,1,6,local_14,4);
  if (iVar1 != -1) {
    DAT_000220dc = 0;
    DAT_000220d4 = 0x9c370002;
    DAT_000220ec = 0;
    DAT_000220e4 = 0xffffffff9b370002;
    iVar1 = bind(DAT_000220a4,(sockaddr *)&DAT_000220d4,0x10);
    if (iVar1 == -1) {
      printf("bind error...");
    }
    return 0;
  }
  printf("set socket error...");
  return 0xffffffff;
}




undefined4 FUN_00011114(void)

{
  int iVar1;
  size_t __n;
  char *pcVar2;
  ssize_t sVar3;
  char *__dest;
  char local_bc [32];
  char local_9c [140];
  
  __dest = local_9c + 0x28;
  local_bc[0] = '\0';
  local_bc[1] = '\0';
  local_bc[2] = '\0';
  local_bc[3] = '\0';
  local_bc[4] = '\0';
  local_bc[5] = '\0';
  local_bc[6] = '\0';
  local_bc[7] = '\0';
  local_bc[8] = '\0';
  local_bc[9] = '\0';
  local_bc[10] = '\0';
  local_bc[0xb] = '\0';
  local_bc[0xc] = '\0';
  local_bc[0xd] = '\0';
  local_bc[0xe] = '\0';
  local_bc[0xf] = '\0';
  local_bc[0x10] = '\0';
  local_bc[0x11] = '\0';
  local_bc[0x12] = '\0';
  local_bc[0x13] = '\0';
  local_bc[0x14] = '\0';
  local_bc[0x15] = '\0';
  local_bc[0x16] = '\0';
  local_bc[0x17] = '\0';
  local_bc[0x18] = '\0';
  local_bc[0x19] = '\0';
  local_bc[0x1a] = '\0';
  local_bc[0x1b] = '\0';
  local_bc[0x1c] = '\0';
  local_bc[0x1d] = '\0';
  local_9c[0] = '\0';
  local_9c[1] = '\0';
  local_9c[2] = '\0';
  local_9c[3] = '\0';
  local_9c[4] = '\0';
  local_9c[5] = '\0';
  local_9c[6] = '\0';
  local_9c[7] = '\0';
  local_9c[8] = '\0';
  local_9c[9] = '\0';
  local_9c[10] = '\0';
  local_9c[0xb] = '\0';
  local_9c[0xc] = '\0';
  local_9c[0xd] = '\0';
  local_9c[0xe] = '\0';
  local_9c[0xf] = '\0';
  local_9c[0x10] = '\0';
  local_9c[0x11] = '\0';
  local_9c[0x12] = '\0';
  local_9c[0x13] = '\0';
  local_9c[0x14] = '\0';
  local_9c[0x15] = '\0';
  local_9c[0x16] = '\0';
  local_9c[0x17] = '\0';
  local_9c[0x18] = '\0';
  local_9c[0x19] = '\0';
  local_9c[0x1a] = '\0';
  local_9c[0x1b] = '\0';
  local_9c[0x1c] = '\0';
  local_9c[0x1d] = '\0';
  local_9c[0x1e] = '\0';
  local_9c[0x1f] = '\0';
  local_9c[0x20] = '\0';
  local_9c[0x21] = '\0';
  local_9c[0x22] = '\0';
  local_9c[0x23] = '\0';
  local_9c[0x24] = '\0';
  local_9c[0x25] = '\0';
  local_9c[0x26] = '\0';
  local_9c[0x27] = '\0';
  memset(__dest,0,100);
  iVar1 = FUN_00010afc(&DAT_00011714,local_9c);
  if (iVar1 == 0) {
    puts("get IP error");
  }
  FUN_00010cc0(local_bc,&DAT_00011714);
  __n = strlen(local_bc);
  strncpy(&DAT_000220ac,local_bc,__n);
  pcVar2 = stpcpy(__dest,local_9c);
  *pcVar2 = ',';
  memcpy(pcVar2 + 1,local_bc,__n + 1);
  sVar3 = sendto(DAT_000220a4,__dest,(size_t)(pcVar2 + (__n - (int)__dest) + 1),0,(sockaddr *)&DAT_000220e4,0x10);
  if (-1 < sVar3) {
    printf("send ipmac:\n%s\n",__dest);
    return 1;
  }
  printf("send error....");
  return 1;
}




void FUN_0001124c(void *param_1)

{
  ssize_t sVar1;
  char *__format;
  
  sVar1 = sendto(DAT_000220a4,param_1,10,0,(sockaddr *)&DAT_000220e4,0x10);
  if (sVar1 < 0) {
    __format = "send error....";
  }
  else {
    __format = "send ack OK!\n ";
  }
  printf(__format);
  return;
}




undefined4 FUN_000112a4(void)

{
  char *__s1;
  int iVar1;
  ssize_t sVar2;
  size_t __n;
  uint uVar3;
  __suseconds_t *p_Var4;
  uint uVar5;
  uint uVar6;
  socklen_t local_a4;
  timeval local_a0;
  fd_set local_98;
  
  uVar3 = DAT_000220a4;
  p_Var4 = &local_a0.tv_usec;
  local_a0.tv_usec = 0;
  local_a0.tv_sec = 2;
  do {
    p_Var4 = p_Var4 + 1;
    *p_Var4 = 0;
  } while (p_Var4 != local_98.fds_bits + 0x1f);
  uVar6 = DAT_000220a4 & 0x1f;
  uVar5 = DAT_000220a4 + 0x1f;
  if (-1 < (int)DAT_000220a4) {
    uVar5 = DAT_000220a4;
  }
  if ((int)DAT_000220a4 < 1) {
    uVar6 = -(-DAT_000220a4 & 0x1f);
  }
  local_98.fds_bits[(int)uVar5 >> 5] = local_98.fds_bits[(int)uVar5 >> 5] | 1 << (uVar6 & 0xff);
  __s1 = (char *)calloc(0x1e,1);
  iVar1 = select(uVar3 + 1,&local_98,(fd_set *)0x0,(fd_set *)0x0,&local_a0);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  if (iVar1 != 0) {
    uVar3 = DAT_000220a4 & 0x1f;
    uVar6 = DAT_000220a4 + 0x1f;
    if (-1 < (int)DAT_000220a4) {
      uVar6 = DAT_000220a4;
    }
    if ((int)DAT_000220a4 < 1) {
      uVar3 = -(-DAT_000220a4 & 0x1f);
    }
    if ((local_98.fds_bits[(int)uVar6 >> 5] & 1 << (uVar3 & 0xff)) == 0) goto joined_r0x000113ec;
    local_a4 = 0x10;
    sVar2 = recvfrom(DAT_000220a4,__s1,0x1e,0,(sockaddr *)&DAT_000220d4,&local_a4);
    if (0 < sVar2) {
      printf("rev:\n%s\t",__s1);
      DAT_000220cc = 0;
      __n = strlen(&DAT_000220ac);
      iVar1 = strncmp(__s1,&DAT_000220ac,__n);
      if (iVar1 == 0) {
        printf("send_ack(\"1\");");
        FUN_00010f78(1);
        FUN_0001124c(&DAT_00011788);
        free(__s1);
        return 1;
      }
      printf("send_ack(\"0\");");
      FUN_00010f78(0);
      FUN_0001124c("FAILD");
      free(__s1);
      return 0;
    }
    printf("read error....");
  }
  DAT_000220cc = DAT_000220cc + 1;
joined_r0x000113ec:
  if (DAT_000220cc != 5) {
    free(__s1);
    return 0;
  }
  DAT_000220cc = 0;
  puts("Time Out");
  free(__s1);
  return 1;
}




undefined4 FUN_000114d8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 5;
  iVar3 = 0;
  do {
    iVar1 = FUN_00010e2c();
    if (iVar1 == 0) {
      iVar3 = iVar3 + 1;
      usleep(20000);
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (iVar3 != 5) {
    return 0;
  }
  FUN_00010da0(0);
  while (iVar2 = FUN_00010e2c(), iVar2 == 0) {
    usleep(1000);
  }
  iVar2 = 5;
  do {
    FUN_00010da0(1);
    usleep(100000);
    FUN_00010da0(0);
    usleep(100000);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}




void FUN_0001156c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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




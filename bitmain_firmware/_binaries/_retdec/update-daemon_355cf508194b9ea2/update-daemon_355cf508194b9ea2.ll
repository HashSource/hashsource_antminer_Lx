source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_2200c = local_unnamed_addr global i32 67496
@global_var_22010 = local_unnamed_addr global i32 67496
@global_var_22014 = local_unnamed_addr global i32 67496
@global_var_22018 = local_unnamed_addr global i32 67496
@global_var_2201c = local_unnamed_addr global i32 67496
@global_var_22020 = local_unnamed_addr global i32 67496
@global_var_22024 = local_unnamed_addr global i32 67496
@global_var_22028 = local_unnamed_addr global i32 67496
@global_var_2202c = local_unnamed_addr global i32 67496
@global_var_22030 = local_unnamed_addr global i32 67496
@global_var_22034 = local_unnamed_addr global i32 67496
@global_var_22038 = local_unnamed_addr global i32 67496
@global_var_2203c = local_unnamed_addr global i32 67496
@global_var_22040 = local_unnamed_addr global i32 67496
@global_var_22044 = local_unnamed_addr global i32 67496
@global_var_22048 = local_unnamed_addr global i32 67496
@global_var_2204c = local_unnamed_addr global i32 67496
@global_var_22050 = local_unnamed_addr global i32 67496
@global_var_22054 = local_unnamed_addr global i32 67496
@global_var_22058 = local_unnamed_addr global i32 67496
@global_var_2205c = local_unnamed_addr global i32 67496
@global_var_22060 = local_unnamed_addr global i32 67496
@global_var_22064 = local_unnamed_addr global i32 67496
@global_var_22068 = local_unnamed_addr global i32 67496
@global_var_2206c = local_unnamed_addr global i32 67496
@global_var_22070 = local_unnamed_addr global i32 67496
@global_var_22074 = local_unnamed_addr global i32 67496
@global_var_22078 = local_unnamed_addr global i32 67496
@global_var_2207c = local_unnamed_addr global i32 67496
@global_var_22080 = local_unnamed_addr global i32 67496
@global_var_22084 = local_unnamed_addr global i32 67496
@global_var_11548 = constant [8 x i8] c"daemonc\00"
@global_var_11550 = constant [8 x i8] c"daemons\00"
@global_var_11518 = constant [10 x i8] c"127.0.0.1\00"
@global_var_11524 = constant [6 x i8] c"22322\00"
@global_var_1157c = constant [29 x i8] c"Will Listening To Port[%d]\0D\0A\00"
@global_var_115bc = constant [30 x i8] c"waiting for new connection...\00"
@global_var_115ec = constant [25 x i8] c"A new connection occurs!\00"
@global_var_11608 = constant [23 x i8] c"pthread_create error!\0A\00"
@global_var_1162c = constant [18 x i8] c"Server shuts down\00"
@global_var_115dc = constant [15 x i8] c"Accept error!\0A\00"
@global_var_11640 = constant [22 x i8] c"Cannot Find Command!\0D\00"
@global_var_11558 = constant [16 x i8] c"update-daemon.c\00"
@global_var_11620 = constant [10 x i8] c"ret != -1\00"
@global_var_10b80 = local_unnamed_addr constant i32 70692
@global_var_11424 = constant [14 x i8] c"ProcessServer\00"
@global_var_11568 = constant [20 x i8] c"sockfd_server != -1\00"
@global_var_115ac = constant [15 x i8] c"listen error!\0A\00"
@global_var_1159c = constant [13 x i8] c"bind error!\0A\00"
@global_var_10bd0 = local_unnamed_addr constant i32 70716
@global_var_1143c = constant [5 x i8] c"ad!\0D\00"
@global_var_10bd4 = local_unnamed_addr constant i32 136
@global_var_10bc4 = constant i32 -481165312
@global_var_11434 = constant [13 x i8] c"New Thread!\0D\00"
@global_var_11444 = constant [12 x i8] c"Recv:'%s'\0D\0A\00"
@global_var_1146c = constant [24 x i8] c"Invalid client content.\00"
@global_var_11024 = local_unnamed_addr constant [25 x i8] c"/usr/sbin/updateporc.sh \00"
@global_var_11028 = local_unnamed_addr constant [21 x i8] c"/sbin/updateporc.sh \00"
@global_var_1102c = local_unnamed_addr constant [17 x i8] c"n/updateporc.sh \00"
@global_var_11030 = local_unnamed_addr constant [13 x i8] c"dateporc.sh \00"
@global_var_11034 = local_unnamed_addr constant [9 x i8] c"porc.sh \00"
@global_var_11038 = local_unnamed_addr constant [5 x i8] c".sh \00"
@global_var_11508 = local_unnamed_addr constant [14 x i8] c"Come On WUHAN\00"
@global_var_1150c = local_unnamed_addr constant [10 x i8] c" On WUHAN\00"
@global_var_11510 = local_unnamed_addr constant [6 x i8] c"WUHAN\00"
@global_var_11494 = constant [21 x i8] c"system status:[%d]\0D\0A\00"
@global_var_114ac = constant [26 x i8] c"Shell Exec Successfully!\0D\00"
@global_var_11450 = constant [25 x i8] c"File does not exist: %s\0A\00"
@global_var_114ec = constant [21 x i8] c"Other Exit Ret[%d]\0D\0A\00"
@global_var_11504 = constant [4 x i8] c"6%d\00"
@global_var_11484 = constant [13 x i8] c"system err!\0D\00"
@global_var_114c8 = constant [32 x i8] c"Shell Execute Failed, Ret[%d]\0D\0A\00"
@global_var_114e8 = constant [3 x i8] c"%d\00"
@global_var_1152c = constant [12 x i8] c"socket err:\00"
@global_var_11538 = constant [13 x i8] c"connect err:\00"
@global_var_1100c = local_unnamed_addr constant i32 69410
@global_var_11010 = local_unnamed_addr constant i32 69400
@global_var_21f08 = global i32 68673
@0 = external global i32
@global_var_22098 = local_unnamed_addr global %_IO_FILE* null
@global_var_10bac = local_unnamed_addr constant void ()* inttoptr (i32 67888 to void ()*)
@global_var_10bb0 = local_unnamed_addr constant void ()* inttoptr (i32 69593 to void ()*)
@global_var_1103c = local_unnamed_addr constant i8 0
@global_var_11514 = local_unnamed_addr constant i16 78

declare i32 @unknown_240() local_unnamed_addr

define i32 @function_1079c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1079c:
  %0 = call i32 @function_10bb4(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i8* @function_107bc(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_107bc:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !2
  ret i8* %0, !insn.addr !2
}

define i32 @function_107c8(i8* %format, ...) local_unnamed_addr {
dec_label_pc_107c8:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_107d4(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_107d4:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_107e0(i8* %s) local_unnamed_addr {
dec_label_pc_107e0:
  call void @perror(i8* %s), !insn.addr !5
  ret void, !insn.addr !5
}

define i32 @function_107ec(i32 %fd, %sockaddr* %addr, i32* %addr_len) local_unnamed_addr {
dec_label_pc_107ec:
  %0 = call i32 @accept(i32 %fd, %sockaddr* %addr, i32* %addr_len), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_107f8(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_107f8:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i8* @function_10804(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10804:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_10810(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg) local_unnamed_addr {
dec_label_pc_10810:
  %0 = call i32 @pthread_create(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_1081c(i8* %s) local_unnamed_addr {
dec_label_pc_1081c:
  %0 = call i32 @puts(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_10828(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10828:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_10834(i8* %command) local_unnamed_addr {
dec_label_pc_10834:
  %0 = call i32 @system(i8* %command), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void @function_10840() local_unnamed_addr {
dec_label_pc_10840:
  call void @__gmon_start__(), !insn.addr !13
  ret void, !insn.addr !13
}

define i16** @function_1084c() local_unnamed_addr {
dec_label_pc_1084c:
  %0 = call i16** @__ctype_b_loc(), !insn.addr !14
  ret i16** %0, !insn.addr !14
}

define void @function_10858(i32 %status) local_unnamed_addr {
dec_label_pc_10858:
  call void @exit(i32 %status), !insn.addr !15
  ret void, !insn.addr !15
}

define i32 @function_10864(i8* %s) local_unnamed_addr {
dec_label_pc_10864:
  %0 = call i32 @strlen(i8* %s), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_10870(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10870:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32* @function_1087c(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1087c:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !18
  ret i32* %0, !insn.addr !18
}

define i32 @function_10888(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_10888:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_10894(i8* %name, i32 %type) local_unnamed_addr {
dec_label_pc_10894:
  %0 = call i32 @access(i8* %name, i32 %type), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define void @function_108a0(i32* %retval) local_unnamed_addr {
dec_label_pc_108a0:
  call void @pthread_exit(i32* %retval), !insn.addr !21
  ret void, !insn.addr !21
}

define i32 @function_108ac(i32 %fd, i32 %how) local_unnamed_addr {
dec_label_pc_108ac:
  %0 = call i32 @shutdown(i32 %fd, i32 %how), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_108b8(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_108b8:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_108c4(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_108c4:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_108d0(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_108d0:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_108dc(i8* %cp) local_unnamed_addr {
dec_label_pc_108dc:
  %0 = call i32 @inet_addr(i8* %cp), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define void @function_108e8() local_unnamed_addr {
dec_label_pc_108e8:
  call void @abort(), !insn.addr !27
  ret void, !insn.addr !27
}

define i32 @function_108f4(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_108f4:
  %0 = call i32 @recv(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_10900(i32 %fd) local_unnamed_addr {
dec_label_pc_10900:
  %0 = call i32 @close(i32 %fd), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_1090c(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_1090c:
  %0 = call i32 @send(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_10918(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10918:
  %0 = call i32 @connect(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define void @function_10924(i8* %assertion, i8* %file, i32 %line, i8* %function) local_unnamed_addr {
dec_label_pc_10924:
  call void @__assert_fail(i8* %assertion, i8* %file, i32 %line, i8* %function), !insn.addr !32
  ret void, !insn.addr !32
}

define i32 @function_10930(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10930:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !33
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-68 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i16, align 2
  %2 = load i32, i32* %0
  %3 = inttoptr i32 %arg2 to i8*, !insn.addr !34
  %4 = call i8* @strstr(i8* %3, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_11548, i32 0, i32 0)), !insn.addr !34
  %5 = icmp eq i8* %4, null, !insn.addr !35
  br i1 %5, label %dec_label_pc_10958, label %dec_label_pc_10abc, !insn.addr !36

dec_label_pc_10958:                               ; preds = %dec_label_pc_10930
  %6 = call i8* @strstr(i8* %3, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_11550, i32 0, i32 0)), !insn.addr !37
  %7 = icmp eq i8* %6, null, !insn.addr !38
  br i1 %7, label %dec_label_pc_10ae4, label %dec_label_pc_10970, !insn.addr !39

dec_label_pc_10970:                               ; preds = %dec_label_pc_10958
  %8 = ptrtoint i8* %4 to i32, !insn.addr !34
  %9 = call i32 @socket(i32 2, i32 1, i32 %8), !insn.addr !40
  %10 = icmp eq i32 %9, -1, !insn.addr !41
  br i1 %10, label %dec_label_pc_10b14, label %dec_label_pc_1098c, !insn.addr !42

dec_label_pc_1098c:                               ; preds = %dec_label_pc_10970
  %11 = call double @__asm_vmov.i32(i32 0), !insn.addr !43
  store i16 2, i16* %stack_var_-56, align 2, !insn.addr !44
  call void @__asm_vst1.8(double %11, i32 %2), !insn.addr !45
  call void @__asm_vst1.8(double %11, i32 %1), !insn.addr !46
  %12 = call i32 @inet_addr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11518, i32 0, i32 0)), !insn.addr !47
  %13 = call i32 @function_10c44(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_11524, i32 0, i32 0)), !insn.addr !48
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1157c, i32 0, i32 0), i32 %13), !insn.addr !49
  %15 = bitcast i16* %stack_var_-56 to %sockaddr*, !insn.addr !50
  %16 = call i32 @bind(i32 %9, %sockaddr* nonnull %15, i32 16), !insn.addr !50
  %17 = icmp eq i32 %16, -1, !insn.addr !51
  br i1 %17, label %dec_label_pc_10b58, label %dec_label_pc_109f4, !insn.addr !52

dec_label_pc_109f4:                               ; preds = %dec_label_pc_1098c
  %18 = call i32 @listen(i32 %9, i32 512), !insn.addr !53
  %19 = icmp eq i32 %18, -1, !insn.addr !54
  br i1 %19, label %dec_label_pc_10b30, label %dec_label_pc_10a28.preheader, !insn.addr !55

dec_label_pc_10a28.preheader:                     ; preds = %dec_label_pc_109f4
  %20 = bitcast i32* %stack_var_-40 to %sockaddr*
  br label %dec_label_pc_10a28

dec_label_pc_10a28:                               ; preds = %dec_label_pc_10a28.backedge, %dec_label_pc_10a28.preheader
  %21 = call i32 @puts(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_115bc, i32 0, i32 0)), !insn.addr !56
  store i32 16, i32* %stack_var_-64, align 4, !insn.addr !57
  %22 = call i32 @accept(i32 %9, %sockaddr* nonnull %20, i32* nonnull %stack_var_-64), !insn.addr !58
  %23 = icmp eq i32 %22, -1, !insn.addr !59
  store i32 %22, i32* %stack_var_-68, align 4, !insn.addr !60
  br i1 %23, label %dec_label_pc_10ac8, label %dec_label_pc_10a54, !insn.addr !61

dec_label_pc_10a54:                               ; preds = %dec_label_pc_10a28
  %24 = call i32 @puts(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_115ec, i32 0, i32 0)), !insn.addr !62
  %25 = call i32 @pthread_create(i32* nonnull %stack_var_-60, i32* null, i32* (i32*)* inttoptr (i32 68752 to i32* (i32*)*), i32* nonnull %stack_var_-68), !insn.addr !63
  %26 = icmp eq i32 %25, -1, !insn.addr !64
  br i1 %26, label %dec_label_pc_10a78, label %dec_label_pc_10a28.backedge, !insn.addr !65

dec_label_pc_10a78:                               ; preds = %dec_label_pc_10a54
  %27 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !66
  %28 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_11608 to i32*), i32 1, i32 22, %_IO_FILE* %27), !insn.addr !67
  %29 = call i32 @shutdown(i32 %9, i32 1), !insn.addr !68
  %30 = icmp eq i32 %29, -1, !insn.addr !69
  br i1 %30, label %dec_label_pc_10af8, label %dec_label_pc_10aa4, !insn.addr !70

dec_label_pc_10aa4:                               ; preds = %dec_label_pc_10a78
  %31 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_1162c, i32 0, i32 0)), !insn.addr !71
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !72
  br label %dec_label_pc_10ab4, !insn.addr !72

dec_label_pc_10ab4:                               ; preds = %dec_label_pc_10ae4, %dec_label_pc_10abc, %dec_label_pc_10aa4
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !73

dec_label_pc_10abc:                               ; preds = %dec_label_pc_10930
  %32 = add i32 %arg2, 4, !insn.addr !74
  %33 = inttoptr i32 %32 to i32*, !insn.addr !74
  %34 = load i32, i32* %33, align 4, !insn.addr !74
  %35 = call i32 @function_10ebc(i32 %34), !insn.addr !75
  store i32 %35, i32* %r0.0.reg2mem, !insn.addr !76
  br label %dec_label_pc_10ab4, !insn.addr !76

dec_label_pc_10ac8:                               ; preds = %dec_label_pc_10a28
  %36 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !77
  %37 = call i32 @fwrite(i32* bitcast ([15 x i8]* @global_var_115dc to i32*), i32 1, i32 14, %_IO_FILE* %36), !insn.addr !78
  br label %dec_label_pc_10a28.backedge, !insn.addr !79

dec_label_pc_10a28.backedge:                      ; preds = %dec_label_pc_10ac8, %dec_label_pc_10a54
  br label %dec_label_pc_10a28

dec_label_pc_10ae4:                               ; preds = %dec_label_pc_10958
  %38 = call i32 @puts(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_11640, i32 0, i32 0)), !insn.addr !80
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !81
  br label %dec_label_pc_10ab4, !insn.addr !81

dec_label_pc_10af8:                               ; preds = %dec_label_pc_10a78
  call void @__assert_fail(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11620, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11558, i32 0, i32 0), i32 204, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_11424, i32 0, i32 0)), !insn.addr !82
  br label %dec_label_pc_10b14, !insn.addr !82

dec_label_pc_10b14:                               ; preds = %dec_label_pc_10af8, %dec_label_pc_10970
  call void @__assert_fail(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_11568, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11558, i32 0, i32 0), i32 162, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_11424, i32 0, i32 0)), !insn.addr !83
  br label %dec_label_pc_10b30, !insn.addr !83

dec_label_pc_10b30:                               ; preds = %dec_label_pc_10b14, %dec_label_pc_109f4
  %39 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !84
  %40 = call i32 @fwrite(i32* bitcast ([15 x i8]* @global_var_115ac to i32*), i32 1, i32 14, %_IO_FILE* %39), !insn.addr !85
  call void @exit(i32 1), !insn.addr !86
  unreachable, !insn.addr !86

dec_label_pc_10b58:                               ; preds = %dec_label_pc_1098c
  %41 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !87
  %42 = call i32 @fwrite(i32* bitcast ([13 x i8]* @global_var_1159c to i32*), i32 1, i32 12, %_IO_FILE* %41), !insn.addr !88
  call void @exit(i32 1), !insn.addr !89
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !89

; uselistorder directives
  uselistorder i32 %22, { 1, 0 }
  uselistorder double %11, { 1, 0 }
  uselistorder i8* %4, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder void (i8*, i8*, i32, i8*)* @__assert_fail, { 1, 0, 2 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 3, 2, 1, 0, 4 }
  uselistorder %_IO_FILE** @global_var_22098, { 3, 2, 1, 0 }
  uselistorder i8* (i8*, i8*)* @strstr, { 1, 0, 2 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10b84:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !90
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !90
  %2 = call i32 @__libc_start_main(i32 67888, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 69593 to void ()*), void ()* inttoptr (i32 67888 to void ()*), void ()* %1), !insn.addr !90
  call void @abort(), !insn.addr !91
  unreachable, !insn.addr !91
}

define i32 @function_10ba8(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10ba8:
  ret i32 %arg1, !insn.addr !92
}

define i32 @function_10bb4() local_unnamed_addr {
dec_label_pc_10bb4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10bc4 to i32), i32 ptrtoint ([5 x i8]* @global_var_1143c to i32)), i32 136) to i32*), align 4, !insn.addr !93
  %3 = icmp eq i32 %2, 0, !insn.addr !94
  br i1 %3, label %4, label %dec_label_pc_10bcc, !insn.addr !95

; <label>:4:                                      ; preds = %dec_label_pc_10bb4
  ret i32 %1, !insn.addr !95

dec_label_pc_10bcc:                               ; preds = %dec_label_pc_10bb4
  call void @__gmon_start__(), !insn.addr !96
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !96
}

define i32 @function_10bd8(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_10bd8:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.01.reg2mem = alloca i1, !insn.addr !97
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i32, i32* %0
  %7 = load double, double* %2
  %8 = load double, double* %2
  br i1 %4, label %9, label %dec_label_pc_10bf4, !insn.addr !97

; <label>:9:                                      ; preds = %dec_label_pc_10bd8
  ret i32 %arg1, !insn.addr !97

dec_label_pc_10bf4:                               ; preds = %dec_label_pc_10bd8
  %10 = icmp eq i1 %5, %3, !insn.addr !98
  br i1 %10, label %dec_label_pc_10c08, label %11, !insn.addr !98

; <label>:11:                                     ; preds = %dec_label_pc_10bf4
  call void @__asm_svclt(i32 18288), !insn.addr !98
  br label %dec_label_pc_10c08, !insn.addr !98

dec_label_pc_10c08:                               ; preds = %11, %dec_label_pc_10bf4
  br i1 %3, label %dec_label_pc_10c20, label %12, !insn.addr !99

; <label>:12:                                     ; preds = %dec_label_pc_10c08
  %13 = mul i32 %6, 1048577, !insn.addr !100
  %14 = mul i32 %6, 4194304, !insn.addr !99
  %15 = sub i32 0, %14
  %16 = sub i32 %15, 1
  %17 = and i32 %13, %16, !insn.addr !99
  %18 = icmp slt i32 %17, 0, !insn.addr !99
  %19 = icmp eq i32 %17, 0, !insn.addr !99
  store i1 %18, i1* %cpsr_n.01.reg2mem, !insn.addr !101
  br i1 %19, label %20, label %dec_label_pc_10c20, !insn.addr !101

; <label>:20:                                     ; preds = %12
  %21 = call i32 @unknown_240(), !insn.addr !101
  ret i32 %21, !insn.addr !101

dec_label_pc_10c20:                               ; preds = %dec_label_pc_10c08, %12
  %cpsr_n.01.reload = load i1, i1* %cpsr_n.01.reg2mem
  %22 = icmp eq i1 %cpsr_n.01.reload, %3, !insn.addr !102
  br i1 %22, label %24, label %23, !insn.addr !102

; <label>:23:                                     ; preds = %dec_label_pc_10c20
  call void @__asm_svclt(i32 18288), !insn.addr !102
  br label %24, !insn.addr !102

; <label>:24:                                     ; preds = %dec_label_pc_10c20, %23
  %25 = call double @__asm_vqrshl.s8(double %8, double %7), !insn.addr !103
  ret i32 %arg1, !insn.addr !103

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i1 %3, { 2, 1, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %24, { 1, 0 }
  uselistorder label %dec_label_pc_10c20, { 1, 0 }
}

define i32 @function_10c2c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_10c2c:
  %r0.0.reg2mem = alloca i32, !insn.addr !104
  %0 = mul i32 %arg4, 262144, !insn.addr !104
  %1 = or i32 %0, 131072, !insn.addr !105
  %2 = inttoptr i32 %1 to i8*, !insn.addr !106
  %3 = load i8, i8* %2, align 131072, !insn.addr !106
  %4 = icmp eq i8 %3, 0, !insn.addr !107
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !107
  br i1 %4, label %dec_label_pc_10c36, label %dec_label_pc_10c3e, !insn.addr !107

dec_label_pc_10c36:                               ; preds = %dec_label_pc_10c2c
  %5 = call i32 @function_10bd8(i32 %arg1, i32 %arg2, i32 %arg3, i8 0), !insn.addr !108
  store i8 1, i8* %2, align 131072, !insn.addr !109
  store i32 %5, i32* %r0.0.reg2mem, !insn.addr !109
  br label %dec_label_pc_10c3e, !insn.addr !109

dec_label_pc_10c3e:                               ; preds = %dec_label_pc_10c2c, %dec_label_pc_10c36
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !110

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10c3e, { 1, 0 }
}

define i32 @function_10c40() local_unnamed_addr {
dec_label_pc_10c40:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !111
}

define i32 @function_10c44(i8* %arg1) local_unnamed_addr {
dec_label_pc_10c44:
  %.lcssa.reg2mem = alloca i32, !insn.addr !112
  %r2.01.reg2mem = alloca i32, !insn.addr !112
  %.reg2mem = alloca i32, !insn.addr !112
  %0 = ptrtoint i8* %arg1 to i32
  %1 = call i32 @strlen(i8* %arg1), !insn.addr !113
  %2 = add i32 %0, -1
  %3 = add i32 %0, -2, !insn.addr !114
  %4 = add i32 %3, %1, !insn.addr !115
  %5 = icmp eq i32 %2, %4, !insn.addr !116
  store i32 -48, i32* %.reg2mem, !insn.addr !117
  store i32 %2, i32* %r2.01.reg2mem, !insn.addr !117
  store i32 -48, i32* %.lcssa.reg2mem, !insn.addr !117
  br i1 %5, label %dec_label_pc_10c84, label %dec_label_pc_10c6c, !insn.addr !117

dec_label_pc_10c6c:                               ; preds = %dec_label_pc_10c44, %dec_label_pc_10c6c
  %r2.01.reload = load i32, i32* %r2.01.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %6 = add i32 %r2.01.reload, 1, !insn.addr !118
  %7 = inttoptr i32 %6 to i8*, !insn.addr !118
  %8 = load i8, i8* %7, align 1, !insn.addr !118
  %9 = zext i8 %8 to i32, !insn.addr !118
  %10 = add i32 %.reload, %9, !insn.addr !119
  %11 = mul i32 %10, 10, !insn.addr !120
  %12 = icmp eq i32 %6, %4, !insn.addr !116
  %13 = add i32 %11, -48, !insn.addr !121
  store i32 %13, i32* %.reg2mem, !insn.addr !117
  store i32 %6, i32* %r2.01.reg2mem, !insn.addr !117
  store i32 %13, i32* %.lcssa.reg2mem, !insn.addr !117
  br i1 %12, label %dec_label_pc_10c84, label %dec_label_pc_10c6c, !insn.addr !117

dec_label_pc_10c84:                               ; preds = %dec_label_pc_10c6c, %dec_label_pc_10c44
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %14 = add i32 %1, %2, !insn.addr !122
  %15 = inttoptr i32 %14 to i8*, !insn.addr !122
  %16 = load i8, i8* %15, align 1, !insn.addr !122
  %17 = zext i8 %16 to i32, !insn.addr !122
  %18 = add i32 %.lcssa.reload, %17, !insn.addr !123
  ret i32 %18, !insn.addr !124

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %2, { 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 -48, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10c6c, { 1, 0 }
}

define i32 @function_10c90(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c90:
  %r5.3.reg2mem = alloca i32, !insn.addr !125
  %r4.3.reg2mem = alloca i32, !insn.addr !125
  %r5.2.reg2mem = alloca i32, !insn.addr !125
  %r4.2.reg2mem = alloca i32, !insn.addr !125
  %r5.1.reg2mem = alloca i32, !insn.addr !125
  %r4.1.reg2mem = alloca i32, !insn.addr !125
  %r5.0.reg2mem = alloca i32, !insn.addr !125
  %r4.0.reg2mem = alloca i32, !insn.addr !125
  %r2.0.reg2mem = alloca i32, !insn.addr !125
  %stack_var_-1015 = alloca i32, align 4
  %stack_var_-1016 = alloca i8, align 1
  %stack_var_-1040 = alloca i8*, align 4
  %stack_var_-2064 = alloca i32, align 4
  %stack_var_-2060 = alloca i32, align 4
  %stack_var_-2080 = alloca i32, align 4
  %0 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11434, i32 0, i32 0)), !insn.addr !126
  store i32 0, i32* %stack_var_-2064, align 4, !insn.addr !127
  %1 = call i32* @memset(i32* nonnull %stack_var_-2060, i32 0, i32 1020), !insn.addr !128
  %2 = ptrtoint i32* %1 to i32, !insn.addr !128
  %3 = call i32 @read(i32 %2, i32* nonnull %stack_var_-2064, i32 1024), !insn.addr !129
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_11444, i32 0, i32 0), i32* nonnull %stack_var_-2064), !insn.addr !130
  %5 = bitcast i32* %stack_var_-2064 to i8*, !insn.addr !131
  %6 = call i32 @access(i8* nonnull %5, i32 0), !insn.addr !131
  %7 = icmp eq i32 %6, 0, !insn.addr !132
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !133
  store i32 %arg1, i32* %r5.2.reg2mem, !insn.addr !133
  br i1 %7, label %dec_label_pc_10cf8, label %dec_label_pc_10e30, !insn.addr !133

dec_label_pc_10cf8:                               ; preds = %dec_label_pc_10c90
  %8 = load i32, i32* %stack_var_-2064, align 4, !insn.addr !134
  %9 = urem i32 %8, 256, !insn.addr !134
  %10 = icmp eq i32 %9, 0, !insn.addr !135
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !136
  br i1 %10, label %dec_label_pc_10d5c, label %dec_label_pc_10d04, !insn.addr !136

dec_label_pc_10d04:                               ; preds = %dec_label_pc_10cf8
  %11 = call i16** @__ctype_b_loc(), !insn.addr !137
  %12 = ptrtoint i32* %stack_var_-2064 to i32, !insn.addr !138
  %13 = load i16*, i16** %11, align 4, !insn.addr !139
  %14 = ptrtoint i16* %13 to i32, !insn.addr !139
  store i32 %12, i32* %r2.0.reg2mem, !insn.addr !139
  store i32 %9, i32* %r4.0.reg2mem, !insn.addr !139
  br label %dec_label_pc_10d10, !insn.addr !139

dec_label_pc_10d10:                               ; preds = %dec_label_pc_10d50, %dec_label_pc_10d04
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %15 = mul i32 %r4.0.reload, 2, !insn.addr !140
  %16 = add i32 %15, %14, !insn.addr !141
  %17 = inttoptr i32 %16 to i16*, !insn.addr !141
  %18 = load i16, i16* %17, align 2, !insn.addr !141
  %19 = and i16 %18, 8
  %20 = zext i16 %19 to i32, !insn.addr !142
  %21 = icmp ne i16 %19, 0, !insn.addr !142
  %22 = icmp eq i32 %r4.0.reload, 95, !insn.addr !143
  %or.cond = or i1 %22, %21
  br i1 %or.cond, label %dec_label_pc_10d50, label %dec_label_pc_10d28, !insn.addr !144

dec_label_pc_10d28:                               ; preds = %dec_label_pc_10d10
  %23 = add nsw i32 %r4.0.reload, -45, !insn.addr !145
  %24 = icmp ult i32 %23, 2, !insn.addr !146
  %25 = icmp ne i1 %24, true, !insn.addr !146
  %26 = icmp eq i32 %23, 2, !insn.addr !146
  %27 = icmp ne i1 %25, true, !insn.addr !147
  %28 = or i1 %26, %27, !insn.addr !147
  br i1 %28, label %dec_label_pc_10d50, label %dec_label_pc_10d34, !insn.addr !147

dec_label_pc_10d34:                               ; preds = %dec_label_pc_10d28
  %29 = call i32 @puts(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_1146c, i32 0, i32 0)), !insn.addr !148
  %30 = call i32 @close(i32 %2), !insn.addr !149
  %31 = inttoptr i32 %20 to i32*, !insn.addr !150
  call void @pthread_exit(i32* %31), !insn.addr !150
  br label %dec_label_pc_10d50, !insn.addr !150

dec_label_pc_10d50:                               ; preds = %dec_label_pc_10d10, %dec_label_pc_10d34, %dec_label_pc_10d28
  %32 = add i32 %r2.0.reload, 1, !insn.addr !151
  %33 = inttoptr i32 %32 to i8*, !insn.addr !151
  %34 = load i8, i8* %33, align 1, !insn.addr !151
  %35 = zext i8 %34 to i32, !insn.addr !151
  %36 = icmp eq i8 %34, 0, !insn.addr !152
  store i32 %32, i32* %r2.0.reg2mem, !insn.addr !153
  store i32 %35, i32* %r4.0.reg2mem, !insn.addr !153
  store i32 %20, i32* %r5.0.reg2mem, !insn.addr !153
  br i1 %36, label %dec_label_pc_10d5c, label %dec_label_pc_10d10, !insn.addr !153

dec_label_pc_10d5c:                               ; preds = %dec_label_pc_10d50, %dec_label_pc_10cf8
  store i8* inttoptr (i32 1920169263 to i8*), i8** %stack_var_-1040, align 4, !insn.addr !154
  store i8 0, i8* %stack_var_-1016, align 1, !insn.addr !155
  %37 = call i32* @memset(i32* nonnull %stack_var_-1015, i32 0, i32 999), !insn.addr !156
  %38 = call i8* @strcpy(i8* nonnull %stack_var_-1016, i8* nonnull %5), !insn.addr !157
  store i32 1701670723, i32* %stack_var_-2080, align 4, !insn.addr !158
  %39 = bitcast i8** %stack_var_-1040 to i8*, !insn.addr !159
  %40 = call i32 @system(i8* nonnull %39), !insn.addr !159
  %41 = icmp eq i32 %40, -1, !insn.addr !160
  br i1 %41, label %dec_label_pc_10e78, label %dec_label_pc_10dcc, !insn.addr !161

dec_label_pc_10dcc:                               ; preds = %dec_label_pc_10d5c
  %42 = call i32 @__asm_ubfx(i32 %40, i32 8, i32 8), !insn.addr !162
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_11494, i32 0, i32 0)), !insn.addr !163
  %44 = urem i32 %40, 128, !insn.addr !164
  %45 = icmp eq i32 %44, 0, !insn.addr !164
  store i32 %40, i32* %r4.3.reg2mem, !insn.addr !165
  store i32 %42, i32* %r5.3.reg2mem, !insn.addr !165
  br i1 %45, label %dec_label_pc_10de8, label %dec_label_pc_10e50, !insn.addr !165

dec_label_pc_10de8:                               ; preds = %dec_label_pc_10dcc
  %46 = icmp eq i32 %42, 0, !insn.addr !166
  br i1 %46, label %dec_label_pc_10df0, label %dec_label_pc_10e94, !insn.addr !167

dec_label_pc_10df0:                               ; preds = %dec_label_pc_10de8
  %47 = call i32 @puts(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_114ac, i32 0, i32 0)), !insn.addr !168
  store i32 3158066, i32* %stack_var_-2080, align 4, !insn.addr !169
  store i32 %40, i32* %r4.1.reg2mem, !insn.addr !169
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !169
  br label %dec_label_pc_10e08, !insn.addr !169

dec_label_pc_10e08:                               ; preds = %dec_label_pc_10e94, %dec_label_pc_10e78, %dec_label_pc_10e50, %dec_label_pc_10df0
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %48 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !170
  %49 = call i32 @strlen(i8* nonnull %48), !insn.addr !170
  %50 = add i32 %49, 1, !insn.addr !171
  %51 = call i32 @write(i32 %2, i32* nonnull %stack_var_-2080, i32 %50), !insn.addr !172
  %52 = call i32 @close(i32 %2), !insn.addr !173
  call void @pthread_exit(i32* null), !insn.addr !174
  store i32 %r4.1.reload, i32* %r4.2.reg2mem, !insn.addr !174
  store i32 %r5.1.reload, i32* %r5.2.reg2mem, !insn.addr !174
  br label %dec_label_pc_10e30, !insn.addr !174

dec_label_pc_10e30:                               ; preds = %dec_label_pc_10c90, %dec_label_pc_10e08
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %53 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_11450, i32 0, i32 0), i32* nonnull %stack_var_-2064), !insn.addr !175
  %54 = call i32 @close(i32 %2), !insn.addr !176
  %55 = inttoptr i32 %r4.2.reload to i32*, !insn.addr !177
  call void @pthread_exit(i32* %55), !insn.addr !177
  store i32 %r4.2.reload, i32* %r4.3.reg2mem, !insn.addr !177
  store i32 %r5.2.reload, i32* %r5.3.reg2mem, !insn.addr !177
  br label %dec_label_pc_10e50, !insn.addr !177

dec_label_pc_10e50:                               ; preds = %dec_label_pc_10dcc, %dec_label_pc_10e30
  %r5.3.reload = load i32, i32* %r5.3.reg2mem
  %r4.3.reload = load i32, i32* %r4.3.reg2mem
  %56 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_114ec, i32 0, i32 0), i32 %r5.3.reload), !insn.addr !178
  %57 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !179
  %58 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %57, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_11504, i32 0, i32 0), i32 %r5.3.reload), !insn.addr !179
  store i32 %r4.3.reload, i32* %r4.1.reg2mem, !insn.addr !180
  store i32 %r5.3.reload, i32* %r5.1.reg2mem, !insn.addr !180
  br label %dec_label_pc_10e08, !insn.addr !180

dec_label_pc_10e78:                               ; preds = %dec_label_pc_10d5c
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %59 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11484, i32 0, i32 0)), !insn.addr !181
  store i32 3158069, i32* %stack_var_-2080, align 4, !insn.addr !182
  store i32 -1, i32* %r4.1.reg2mem, !insn.addr !183
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !183
  br label %dec_label_pc_10e08, !insn.addr !183

dec_label_pc_10e94:                               ; preds = %dec_label_pc_10de8
  %60 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_114c8, i32 0, i32 0), i32 %42), !insn.addr !184
  %61 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !185
  %62 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %61, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_114e8, i32 0, i32 0), i32 %42), !insn.addr !185
  store i32 %40, i32* %r4.1.reg2mem, !insn.addr !186
  store i32 %42, i32* %r5.1.reg2mem, !insn.addr !186
  br label %dec_label_pc_10e08, !insn.addr !186

; uselistorder directives
  uselistorder i32 %r5.3.reload, { 2, 0, 1 }
  uselistorder i32 %42, { 1, 3, 4, 2, 0 }
  uselistorder i32 %40, { 1, 2, 0, 3, 4, 5 }
  uselistorder i32 %2, { 1, 3, 2, 0, 4 }
  uselistorder i32* %stack_var_-2080, { 0, 4, 1, 2, 3, 5, 6 }
  uselistorder i32* %stack_var_-2064, { 0, 4, 5, 2, 1, 3, 6 }
  uselistorder i8** %stack_var_-1040, { 1, 0 }
  uselistorder i8* %stack_var_-1016, { 1, 0 }
  uselistorder i32* %r2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 1, 4, 3, 0, 2 }
  uselistorder i32* %r5.1.reg2mem, { 1, 4, 3, 0, 2 }
  uselistorder i32* %r4.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r4.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.3.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 1, 0, 2 }
  uselistorder void (i32*)* @pthread_exit, { 2, 1, 0, 3 }
  uselistorder i32 (i32)* @close, { 2, 1, 0, 3 }
  uselistorder i32 (i8*, ...)* @printf, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i8*)* @puts, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10e50, { 1, 0 }
  uselistorder label %dec_label_pc_10e30, { 1, 0 }
  uselistorder label %dec_label_pc_10d50, { 1, 2, 0 }
}

define i32 @function_10ebc(i32 %arg1) local_unnamed_addr {
dec_label_pc_10ebc:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !187
  %stack_var_-1040 = alloca i32, align 4
  %stack_var_-1036 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-1056 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %3 = icmp eq i32 %arg1, 0, !insn.addr !188
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !189
  br i1 %3, label %dec_label_pc_10fa0, label %dec_label_pc_10ecc, !insn.addr !189

dec_label_pc_10ecc:                               ; preds = %dec_label_pc_10ebc
  %4 = call double @__asm_vmov.i32(i32 0), !insn.addr !190
  call void @__asm_vst1.8(double %4, i32 %2), !insn.addr !191
  store i32 2, i32* %stack_var_-1056, align 4, !insn.addr !192
  call void @__asm_vst1.8(double %4, i32 %1), !insn.addr !193
  %5 = call i32 @inet_addr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11518, i32 0, i32 0)), !insn.addr !194
  %6 = call i32 @function_10c44(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_11524, i32 0, i32 0)), !insn.addr !195
  %7 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !196
  %8 = icmp slt i32 %7, 0, !insn.addr !197
  br i1 %8, label %dec_label_pc_10fb0, label %dec_label_pc_10f20, !insn.addr !198

dec_label_pc_10f20:                               ; preds = %dec_label_pc_10ecc
  %9 = bitcast i32* %stack_var_-1056 to %sockaddr*, !insn.addr !199
  %10 = call i32 @connect(i32 %7, %sockaddr* nonnull %9, i32 16), !insn.addr !199
  %11 = icmp slt i32 %10, 0, !insn.addr !200
  br i1 %11, label %dec_label_pc_10fc4, label %dec_label_pc_10f34, !insn.addr !201

dec_label_pc_10f34:                               ; preds = %dec_label_pc_10f20
  %12 = inttoptr i32 %arg1 to i8*, !insn.addr !202
  %13 = call i32 @strlen(i8* %12), !insn.addr !202
  %14 = add i32 %13, 1, !insn.addr !203
  %15 = inttoptr i32 %arg1 to i32*, !insn.addr !204
  %16 = call i32 @send(i32 %7, i32* %15, i32 %14, i32 0), !insn.addr !204
  store i32 0, i32* %stack_var_-1040, align 4, !insn.addr !205
  %17 = call i32* @memset(i32* nonnull %stack_var_-1036, i32 0, i32 1020), !insn.addr !206
  %18 = call i32 @recv(i32 %7, i32* nonnull %stack_var_-1040, i32 1024, i32 0), !insn.addr !207
  %19 = icmp slt i32 %18, 1, !insn.addr !208
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !208
  br i1 %19, label %dec_label_pc_10fa0, label %dec_label_pc_10f84, !insn.addr !208

dec_label_pc_10f84:                               ; preds = %dec_label_pc_10f34
  %20 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !209
  %21 = add i32 %20, -1024, !insn.addr !210
  %22 = add i32 %21, %18, !insn.addr !211
  %23 = inttoptr i32 %22 to i8*, !insn.addr !211
  store i8 0, i8* %23, align 1, !insn.addr !211
  %24 = bitcast i32* %stack_var_-1040 to i8*, !insn.addr !212
  %25 = call i32 @function_10c44(i8* nonnull %24), !insn.addr !212
  %26 = icmp eq i32 %25, 200, !insn.addr !213
  %spec.select = select i1 %26, i32 0, i32 %25
  ret i32 %spec.select

dec_label_pc_10fa0:                               ; preds = %dec_label_pc_10ebc, %dec_label_pc_10f34, %dec_label_pc_10fc4, %dec_label_pc_10fb0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !214

dec_label_pc_10fb0:                               ; preds = %dec_label_pc_10ecc
  call void @perror(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_1152c, i32 0, i32 0)), !insn.addr !215
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !216
  br label %dec_label_pc_10fa0, !insn.addr !216

dec_label_pc_10fc4:                               ; preds = %dec_label_pc_10f20
  call void @perror(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11538, i32 0, i32 0)), !insn.addr !217
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !218
  br label %dec_label_pc_10fa0, !insn.addr !218

; uselistorder directives
  uselistorder i32 %7, { 1, 0, 2, 3 }
  uselistorder double %4, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 -1, { 0, 1, 3, 4, 2, 5, 6, 7, 8, 9, 10 }
  uselistorder void (i8*)* @perror, { 1, 0, 2 }
  uselistorder i8 0, { 1, 3, 2, 0, 4, 5 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 0, 2, 1, 3 }
  uselistorder i32 (i8*)* @strlen, { 1, 2, 0, 3 }
  uselistorder i32 (i32, i32, i32)* @socket, { 1, 0, 2 }
  uselistorder i32 (i8*)* @function_10c44, { 2, 1, 0 }
  uselistorder i32 (i8*)* @inet_addr, { 1, 0, 2 }
  uselistorder i32 -3, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10fa0, { 2, 3, 1, 0 }
}

define i32 @function_10fd8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10fd8:
  %0 = call i32 @function_1079c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !219
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 139018, i32 ptrtoint (i32* @global_var_21f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !220

; uselistorder directives
  uselistorder i32 0, { 9, 12, 13, 10, 11, 4, 58, 59, 61, 60, 73, 74, 62, 75, 76, 16, 17, 18, 19, 14, 15, 20, 21, 22, 23, 24, 25, 1, 26, 27, 68, 69, 28, 29, 63, 30, 31, 70, 0, 67, 64, 32, 33, 65, 66, 34, 35, 71, 72, 3, 78, 38, 39, 40, 41, 42, 43, 44, 45, 36, 37, 2, 46, 47, 5, 6, 7, 8, 48, 49, 50, 51, 52, 53, 77, 54, 55, 56, 57 }
  uselistorder i32 2, { 1, 3, 2, 5, 6, 0, 4 }
}

define i32 @function_11014() local_unnamed_addr {
dec_label_pc_11014:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !221

; uselistorder directives
  uselistorder i32 1, { 5, 25, 53, 28, 40, 39, 38, 37, 8, 4, 51, 52, 44, 43, 42, 27, 26, 41, 17, 16, 15, 14, 13, 12, 11, 10, 9, 54, 20, 19, 18, 3, 21, 24, 22, 7, 6, 2, 1, 45, 29, 30, 31, 32, 33, 34, 35, 36, 50, 49, 48, 47, 46, 23, 0 }
}

define i32 @function_11018(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11018:
  ret i32 %arg1, !insn.addr !222
}

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @read(i32, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @accept(i32, %sockaddr*, i32*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @pthread_create(i32*, i32*, i32* (i32*)*, i32*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @system(i8*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i16** @__ctype_b_loc() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @write(i32, i32*, i32) local_unnamed_addr

declare i32 @access(i8*, i32) local_unnamed_addr

declare void @pthread_exit(i32*) local_unnamed_addr

declare i32 @shutdown(i32, i32) local_unnamed_addr

declare i32 @listen(i32, i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @inet_addr(i8*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @recv(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @send(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @connect(i32, %sockaddr*, i32) local_unnamed_addr

declare void @__assert_fail(i8*, i8*, i32, i8*) local_unnamed_addr

declare double @__asm_vmov.i32(i32) local_unnamed_addr

declare void @__asm_vst1.8(double, i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare i32 @__asm_ubfx(i32, i32, i32) local_unnamed_addr

!0 = !{i64 67488}
!1 = !{i64 67492}
!2 = !{i64 67524}
!3 = !{i64 67536}
!4 = !{i64 67548}
!5 = !{i64 67560}
!6 = !{i64 67572}
!7 = !{i64 67584}
!8 = !{i64 67596}
!9 = !{i64 67608}
!10 = !{i64 67620}
!11 = !{i64 67632}
!12 = !{i64 67644}
!13 = !{i64 67656}
!14 = !{i64 67668}
!15 = !{i64 67680}
!16 = !{i64 67692}
!17 = !{i64 67704}
!18 = !{i64 67716}
!19 = !{i64 67728}
!20 = !{i64 67740}
!21 = !{i64 67752}
!22 = !{i64 67764}
!23 = !{i64 67776}
!24 = !{i64 67788}
!25 = !{i64 67800}
!26 = !{i64 67812}
!27 = !{i64 67824}
!28 = !{i64 67836}
!29 = !{i64 67848}
!30 = !{i64 67860}
!31 = !{i64 67872}
!32 = !{i64 67884}
!33 = !{i64 67888}
!34 = !{i64 67916}
!35 = !{i64 67920}
!36 = !{i64 67924}
!37 = !{i64 67940}
!38 = !{i64 67944}
!39 = !{i64 67948}
!40 = !{i64 67964}
!41 = !{i64 67968}
!42 = !{i64 67976}
!43 = !{i64 67980}
!44 = !{i64 67992}
!45 = !{i64 68004}
!46 = !{i64 68012}
!47 = !{i64 68016}
!48 = !{i64 68032}
!49 = !{i64 68052}
!50 = !{i64 68072}
!51 = !{i64 68076}
!52 = !{i64 68080}
!53 = !{i64 68092}
!54 = !{i64 68096}
!55 = !{i64 68100}
!56 = !{i64 68140}
!57 = !{i64 68160}
!58 = !{i64 68164}
!59 = !{i64 68168}
!60 = !{i64 68172}
!61 = !{i64 68176}
!62 = !{i64 68184}
!63 = !{i64 68204}
!64 = !{i64 68208}
!65 = !{i64 68212}
!66 = !{i64 68216}
!67 = !{i64 68236}
!68 = !{i64 68248}
!69 = !{i64 68252}
!70 = !{i64 68256}
!71 = !{i64 68268}
!72 = !{i64 68272}
!73 = !{i64 68280}
!74 = !{i64 68284}
!75 = !{i64 68288}
!76 = !{i64 68292}
!77 = !{i64 68300}
!78 = !{i64 68316}
!79 = !{i64 68320}
!80 = !{i64 68332}
!81 = !{i64 68340}
!82 = !{i64 68368}
!83 = !{i64 68396}
!84 = !{i64 68416}
!85 = !{i64 68428}
!86 = !{i64 68436}
!87 = !{i64 68456}
!88 = !{i64 68468}
!89 = !{i64 68476}
!90 = !{i64 68512}
!91 = !{i64 68516}
!92 = !{i64 68522}
!93 = !{i64 68544}
!94 = !{i64 68548}
!95 = !{i64 68552}
!96 = !{i64 68556}
!97 = !{i64 68568}
!98 = !{i64 68600}
!99 = !{i64 68624}
!100 = !{i64 68620}
!101 = !{i64 68632}
!102 = !{i64 68644}
!103 = !{i64 68648}
!104 = !{i64 68652}
!105 = !{i64 68654}
!106 = !{i64 68658}
!107 = !{i64 68660}
!108 = !{i64 68662}
!109 = !{i64 68668}
!110 = !{i64 68670}
!111 = !{i64 68672}
!112 = !{i64 68676}
!113 = !{i64 68684}
!114 = !{i64 68688}
!115 = !{i64 68708}
!116 = !{i64 68728}
!117 = !{i64 68736}
!118 = !{i64 68716}
!119 = !{i64 68720}
!120 = !{i64 68724}
!121 = !{i64 68732}
!122 = !{i64 68740}
!123 = !{i64 68744}
!124 = !{i64 68748}
!125 = !{i64 68752}
!126 = !{i64 68776}
!127 = !{i64 68792}
!128 = !{i64 68796}
!129 = !{i64 68816}
!130 = !{i64 68832}
!131 = !{i64 68844}
!132 = !{i64 68848}
!133 = !{i64 68852}
!134 = !{i64 68856}
!135 = !{i64 68860}
!136 = !{i64 68864}
!137 = !{i64 68868}
!138 = !{i64 68872}
!139 = !{i64 68876}
!140 = !{i64 68880}
!141 = !{i64 68884}
!142 = !{i64 68888}
!143 = !{i64 68896}
!144 = !{i64 68892}
!145 = !{i64 68904}
!146 = !{i64 68908}
!147 = !{i64 68912}
!148 = !{i64 68924}
!149 = !{i64 68932}
!150 = !{i64 68940}
!151 = !{i64 68944}
!152 = !{i64 68948}
!153 = !{i64 68952}
!154 = !{i64 68972}
!155 = !{i64 68988}
!156 = !{i64 69004}
!157 = !{i64 69020}
!158 = !{i64 69040}
!159 = !{i64 69052}
!160 = !{i64 69056}
!161 = !{i64 69064}
!162 = !{i64 69080}
!163 = !{i64 69084}
!164 = !{i64 69088}
!165 = !{i64 69092}
!166 = !{i64 69096}
!167 = !{i64 69100}
!168 = !{i64 69112}
!169 = !{i64 69124}
!170 = !{i64 69132}
!171 = !{i64 69140}
!172 = !{i64 69148}
!173 = !{i64 69156}
!174 = !{i64 69164}
!175 = !{i64 69180}
!176 = !{i64 69188}
!177 = !{i64 69196}
!178 = !{i64 69212}
!179 = !{i64 69232}
!180 = !{i64 69236}
!181 = !{i64 69248}
!182 = !{i64 69260}
!183 = !{i64 69264}
!184 = !{i64 69280}
!185 = !{i64 69300}
!186 = !{i64 69304}
!187 = !{i64 69308}
!188 = !{i64 69312}
!189 = !{i64 69320}
!190 = !{i64 69324}
!191 = !{i64 69348}
!192 = !{i64 69352}
!193 = !{i64 69356}
!194 = !{i64 69360}
!195 = !{i64 69376}
!196 = !{i64 69396}
!197 = !{i64 69400}
!198 = !{i64 69404}
!199 = !{i64 69416}
!200 = !{i64 69420}
!201 = !{i64 69424}
!202 = !{i64 69436}
!203 = !{i64 69448}
!204 = !{i64 69456}
!205 = !{i64 69472}
!206 = !{i64 69476}
!207 = !{i64 69496}
!208 = !{i64 69504}
!209 = !{i64 69508}
!210 = !{i64 69512}
!211 = !{i64 69520}
!212 = !{i64 69524}
!213 = !{i64 69528}
!214 = !{i64 69540}
!215 = !{i64 69560}
!216 = !{i64 69568}
!217 = !{i64 69580}
!218 = !{i64 69588}
!219 = !{i64 69608}
!220 = !{i64 69640}
!221 = !{i64 69652}
!222 = !{i64 69660}

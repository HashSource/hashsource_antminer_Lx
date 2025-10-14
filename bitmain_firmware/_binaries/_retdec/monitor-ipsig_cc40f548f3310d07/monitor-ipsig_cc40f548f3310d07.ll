source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%timeval = type { i32, i32 }
%sockaddr = type { i32, [14 x i8] }
%_IO_FILE = type { i32 }
%in_addr = type { i32 }
%_TYPEDEF_fd_set = type { [1 x i32] }
%timezone = type { i32, i32 }

@global_var_2200c = local_unnamed_addr global i32 67488
@global_var_22010 = local_unnamed_addr global i32 67488
@global_var_22014 = local_unnamed_addr global i32 67488
@global_var_22018 = local_unnamed_addr global i32 67488
@global_var_2201c = local_unnamed_addr global i32 67488
@global_var_22020 = local_unnamed_addr global i32 67488
@global_var_22024 = local_unnamed_addr global i32 67488
@global_var_22028 = local_unnamed_addr global i32 67488
@global_var_2202c = local_unnamed_addr global i32 67488
@global_var_22030 = local_unnamed_addr global i32 67488
@global_var_22034 = local_unnamed_addr global i32 67488
@global_var_22038 = local_unnamed_addr global i32 67488
@global_var_2203c = local_unnamed_addr global i32 67488
@global_var_22040 = local_unnamed_addr global i32 67488
@global_var_22044 = local_unnamed_addr global i32 67488
@global_var_22048 = local_unnamed_addr global i32 67488
@global_var_2204c = local_unnamed_addr global i32 67488
@global_var_22050 = local_unnamed_addr global i32 67488
@global_var_22054 = local_unnamed_addr global i32 67488
@global_var_22058 = local_unnamed_addr global i32 67488
@global_var_2205c = local_unnamed_addr global i32 67488
@global_var_22060 = local_unnamed_addr global i32 67488
@global_var_22064 = local_unnamed_addr global i32 67488
@global_var_22068 = local_unnamed_addr global i32 67488
@global_var_2206c = local_unnamed_addr global i32 67488
@global_var_22070 = local_unnamed_addr global i32 67488
@global_var_22074 = local_unnamed_addr global i32 67488
@global_var_22078 = local_unnamed_addr global i32 67488
@global_var_2207c = local_unnamed_addr global i32 67488
@global_var_22080 = local_unnamed_addr global i32 67488
@global_var_22084 = local_unnamed_addr global i32 67488
@global_var_22088 = local_unnamed_addr global i32 67488
@global_var_2208c = local_unnamed_addr global i32 67488
@global_var_22090 = local_unnamed_addr global i32 67488
@global_var_22094 = local_unnamed_addr global i32 67488
@global_var_117b0 = constant [9 x i8] c"19:33:53\00"
@global_var_117bc = constant [12 x i8] c"Aug 21 2024\00"
@global_var_117c8 = constant [30 x i8] c"monitor-ipsig compile %s--%s\0A\00"
@global_var_117e8 = constant [14 x i8] c"Key Down!!!!!\00"
@global_var_10a14 = local_unnamed_addr constant i32 71160
@global_var_115f8 = constant [10 x i8] c"%02X:%02X\00"
@global_var_10a18 = local_unnamed_addr constant i32 152
@global_var_10a08 = constant i32 -481165312
@global_var_115b8 = constant [4 x i8] c"%ld\00"
@global_var_115c4 = constant [21 x i8] c":No Such Device %s/n\00"
@global_var_115bc = constant [7 x i8] c"socket\00"
@global_var_115e4 = constant [30 x i8] c"%02X:%02X:%02X:%02X:%02X:%02X\00"
@global_var_11604 = local_unnamed_addr constant [5 x i8] c"MAC=\00"
@global_var_115dc = constant [6 x i8] c"ioctl\00"
@global_var_11610 = constant [39 x i8] c"echo %d > /sys/class/gpio/gpio%d/value\00"
@global_var_11638 = constant [23 x i8] c"/sys/class/gpio/gpio%d\00"
@global_var_11654 = constant [23 x i8] c"/sys/class/gpio/export\00"
@global_var_1164c = constant [3 x i8] c"%d\00"
@global_var_11698 = constant [29 x i8] c"/sys/class/gpio/gpio%d/value\00"
@global_var_116bc = constant [34 x i8] c"Open read recovery button failure\00"
@global_var_11684 = constant [18 x i8] c"File Write Error!\00"
@global_var_1166c = constant [22 x i8] c"Open read gpio/export\00"
@global_var_220a4 = local_unnamed_addr global i32 -1
@global_var_220d8 = local_unnamed_addr global i32 0
@global_var_220e8 = local_unnamed_addr global i32 0
@global_var_116f0 = constant [20 x i8] c"set socket error...\00"
@global_var_116e0 = constant [13 x i8] c"socket error\00"
@global_var_11704 = constant [14 x i8] c"bind error...\00"
@global_var_11714 = constant [5 x i8] c"eth0\00"
@global_var_1173c = constant [16 x i8] c"send ipmac:\0A%s\0A\00"
@global_var_1171c = constant [13 x i8] c"get IP error\00"
@global_var_1172c = constant [15 x i8] c"send error....\00"
@global_var_220cc = local_unnamed_addr global i32 0
@global_var_117a4 = constant [9 x i8] c"Time Out\00"
@global_var_1175c = constant [15 x i8] c"read error....\00"
@global_var_1176c = constant [9 x i8] c"rev:\0A%s\09\00"
@global_var_11778 = constant [15 x i8] c"send_ack(\221\22);\00"
@global_var_11788 = constant [3 x i8] c"OK\00"
@global_var_1178c = constant [15 x i8] c"send_ack(\220\22);\00"
@global_var_1179c = constant [6 x i8] c"FAILD\00"
@global_var_115a0 = local_unnamed_addr constant i32 67990
@global_var_115a4 = local_unnamed_addr constant i32 67980
@global_var_21f10 = global i32 68229
@0 = external global i32
@global_var_109f0 = local_unnamed_addr constant void ()* inttoptr (i32 67928 to void ()*)
@global_var_109f4 = local_unnamed_addr constant void ()* inttoptr (i32 71021 to void ()*)
@global_var_220a8 = external local_unnamed_addr global i8*
@global_var_1160c = local_unnamed_addr constant i16 44
@1 = internal constant [2 x i8] c"w\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@3 = internal constant [2 x i8] c"r\00"
@4 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @3, i32 0, i32 0)
@global_var_220d4 = global %timeval* null
@global_var_220e4 = global %sockaddr* null
@global_var_220ac = external global i8*
@global_var_11650 = constant [2 x i8] c"w\00"
@global_var_116b8 = constant [2 x i8] c"r\00"

define i32 @function_10794(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10794:
  %0 = call i32 @function_109f8(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32* @function_107b4(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_107b4:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !2
  ret i32* %0, !insn.addr !2
}

define i32 @function_107c0(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_107c0:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_107cc(i8* %format, ...) local_unnamed_addr {
dec_label_pc_107cc:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_107d8(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_107d8:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fscanf(%_IO_FILE* %stream, i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_107e4(i32* %ptr) local_unnamed_addr {
dec_label_pc_107e4:
  call void @free(i32* %ptr), !insn.addr !6
  ret void, !insn.addr !6
}

define i32* @function_107f0(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_107f0:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define i8* @function_107fc(%in_addr %arg1) local_unnamed_addr {
dec_label_pc_107fc:
  %0 = call i8* @inet_ntoa(%in_addr %arg1), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_10808(i32 %nfds, %_TYPEDEF_fd_set* %readfds, %_TYPEDEF_fd_set* %writefds, %_TYPEDEF_fd_set* %exceptfds, %timeval* %timeout) local_unnamed_addr {
dec_label_pc_10808:
  %0 = call i32 @select(i32 %nfds, %_TYPEDEF_fd_set* %readfds, %_TYPEDEF_fd_set* %writefds, %_TYPEDEF_fd_set* %exceptfds, %timeval* %timeout), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i8* @function_10814(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10814:
  %0 = call i8* @stpcpy(i8* %dest, i8* %src), !insn.addr !10
  ret i8* %0, !insn.addr !10
}

define i32 @function_10820(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32* %addr_len) local_unnamed_addr {
dec_label_pc_10820:
  %0 = call i32 @recvfrom(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32* %addr_len), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void @function_1082c(i8* %s) local_unnamed_addr {
dec_label_pc_1082c:
  call void @perror(i8* %s), !insn.addr !12
  ret void, !insn.addr !12
}

define i32 @function_10838(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_10838:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @function_10844(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10844:
  %0 = call i8* @strcat(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_10850(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_10850:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_1085c(i32 %useconds) local_unnamed_addr {
dec_label_pc_1085c:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i8* @function_10868(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10868:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !17
  ret i8* %0, !insn.addr !17
}

define i32 @function_10874(%timeval* %tv, %timezone* %tz) local_unnamed_addr {
dec_label_pc_10874:
  %0 = call i32 @gettimeofday(%timeval* %tv, %timezone* %tz), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_10880(i8* %s) local_unnamed_addr {
dec_label_pc_10880:
  %0 = call i32 @puts(i8* %s), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_1088c(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1088c:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_10898(i8* %command) local_unnamed_addr {
dec_label_pc_10898:
  %0 = call i32 @system(i8* %command), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define void @function_108a4() local_unnamed_addr {
dec_label_pc_108a4:
  call void @__gmon_start__(), !insn.addr !22
  ret void, !insn.addr !22
}

define void @function_108b0(i32 %status) local_unnamed_addr {
dec_label_pc_108b0:
  call void @exit(i32 %status), !insn.addr !23
  ret void, !insn.addr !23
}

define i32 @function_108bc(i8* %s) local_unnamed_addr {
dec_label_pc_108bc:
  %0 = call i32 @strlen(i8* %s), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_108c8(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_108c8:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32* @function_108d4(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_108d4:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !26
  ret i32* %0, !insn.addr !26
}

define i8* @function_108e0(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_108e0:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !27
  ret i8* %0, !insn.addr !27
}

define i32 @function_108ec(i8* %name, i32 %type) local_unnamed_addr {
dec_label_pc_108ec:
  %0 = call i32 @access(i8* %name, i32 %type), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_108f8(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_108f8:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_10904(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32 %addr_len) local_unnamed_addr {
dec_label_pc_10904:
  %0 = call i32 @sendto(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32 %addr_len), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_10910(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10910:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define %_IO_FILE* @function_1091c(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_1091c:
  %0 = call %_IO_FILE* @fopen64(i8* %filename, i8* %modes), !insn.addr !32
  ret %_IO_FILE* %0, !insn.addr !32
}

define i32 @function_10928(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_10928:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define i32 @function_10934(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_10934:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define void @function_10940() local_unnamed_addr {
dec_label_pc_10940:
  call void @abort(), !insn.addr !35
  ret void, !insn.addr !35
}

define i32 @function_1094c(i32 %fd) local_unnamed_addr {
dec_label_pc_1094c:
  %0 = call i32 @close(i32 %fd), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_10958() local_unnamed_addr {
dec_label_pc_10958:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_117c8, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_117bc, i32 0, i32 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_117b0, i32 0, i32 0)), !insn.addr !37
  %1 = call i32 @function_11014(), !insn.addr !38
  br label %dec_label_pc_1098c, !insn.addr !39

dec_label_pc_1098c:                               ; preds = %dec_label_pc_109ac, %dec_label_pc_10958
  %2 = call i32 @function_114d8(), !insn.addr !40
  %3 = icmp eq i32 %2, 1, !insn.addr !41
  br i1 %3, label %dec_label_pc_109ac.preheader, label %dec_label_pc_10998, !insn.addr !42

dec_label_pc_10998:                               ; preds = %dec_label_pc_1098c, %dec_label_pc_10998
  %4 = call i32 @usleep(i32 400000), !insn.addr !43
  %5 = call i32 @function_114d8(), !insn.addr !44
  %6 = icmp eq i32 %5, 1, !insn.addr !45
  br i1 %6, label %dec_label_pc_109ac.preheader, label %dec_label_pc_10998, !insn.addr !46

dec_label_pc_109ac.preheader:                     ; preds = %dec_label_pc_10998, %dec_label_pc_1098c
  br label %dec_label_pc_109ac

dec_label_pc_109ac:                               ; preds = %dec_label_pc_109ac.preheader, %dec_label_pc_109ac
  %7 = call i32 @puts(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_117e8, i32 0, i32 0)), !insn.addr !47
  %8 = call i32 @function_11114(), !insn.addr !48
  %9 = call i32 @function_112a4(), !insn.addr !49
  %10 = icmp eq i32 %9, 1, !insn.addr !50
  br i1 %10, label %dec_label_pc_1098c, label %dec_label_pc_109ac, !insn.addr !51

; uselistorder directives
  uselistorder i32 ()* @function_114d8, { 1, 0 }
  uselistorder label %dec_label_pc_109ac, { 1, 0 }
  uselistorder label %dec_label_pc_10998, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_109c8:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !52
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !52
  %2 = call i32 @__libc_start_main(i32 67928, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 71021 to void ()*), void ()* inttoptr (i32 67928 to void ()*), void ()* %1), !insn.addr !52
  call void @abort(), !insn.addr !53
  unreachable, !insn.addr !53
}

define i32 @function_109ec(i32 %arg1) local_unnamed_addr {
dec_label_pc_109ec:
  ret i32 %arg1, !insn.addr !54
}

define i32 @function_109f8() local_unnamed_addr {
dec_label_pc_109f8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10a08 to i32), i32 ptrtoint ([10 x i8]* @global_var_115f8 to i32)), i32 152) to i32*), align 4, !insn.addr !55
  %3 = icmp eq i32 %2, 0, !insn.addr !56
  br i1 %3, label %4, label %dec_label_pc_10a10, !insn.addr !57

; <label>:4:                                      ; preds = %dec_label_pc_109f8
  ret i32 %1, !insn.addr !57

dec_label_pc_10a10:                               ; preds = %dec_label_pc_109f8
  call void @__gmon_start__(), !insn.addr !58
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !58
}

define i32 @function_10a1c(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10a1c:
  ret i32 %arg1, !insn.addr !59
}

define i32 @function_10a22(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10a22:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = mul i32 %1, 16384, !insn.addr !60
  %3 = or i32 %2, 131072, !insn.addr !61
  ret i32 %3, !insn.addr !62
}

define i32 @function_10a3e() local_unnamed_addr {
dec_label_pc_10a3e:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca fp128
  %3 = alloca double
  %r0.0.reg2mem = alloca i32, !insn.addr !63
  %4 = load i32, i32* %0
  %5 = load i1, i1* %1
  %6 = load i1, i1* %1
  %7 = load i1, i1* %1
  %8 = load fp128, fp128* %2
  %9 = load fp128, fp128* %2
  %10 = load double, double* %3
  %11 = load double, double* %3
  %12 = load double, double* %3
  %13 = load double, double* %3
  %14 = load double, double* %3
  %15 = call double @__asm_vmax.f32(double %13, double %14), !insn.addr !63
  %16 = call double @__asm_vhadd.s8(double %11, double %10), !insn.addr !64
  %17 = call fp128 @__asm_vaddw.s8(fp128 %8, double %10), !insn.addr !65
  %18 = call fp128 @__asm_vaddl.s8(double %14, double %13), !insn.addr !66
  br i1 %6, label %dec_label_pc_10a52, label %19, !insn.addr !67

; <label>:19:                                     ; preds = %dec_label_pc_10a3e
  %20 = call i32 @function_250e5e(), !insn.addr !67
  br label %dec_label_pc_10a52, !insn.addr !67

dec_label_pc_10a52:                               ; preds = %dec_label_pc_10a3e, %19
  %21 = call i32 @unknown_54c7e(), !insn.addr !68
  %22 = call double @__asm_vhadd.s8(double %14, double %12), !insn.addr !69
  %23 = call fp128 @__asm_vsubw.s8(fp128 %9, double %14), !insn.addr !70
  %24 = icmp eq i1 %7, %5, !insn.addr !71
  store i32 %21, i32* %r0.0.reg2mem, !insn.addr !71
  br i1 %24, label %27, label %25, !insn.addr !71

; <label>:25:                                     ; preds = %dec_label_pc_10a52
  %26 = call i32 @__asm_mrslt(i32 %4), !insn.addr !71
  store i32 %26, i32* %r0.0.reg2mem, !insn.addr !71
  br label %27, !insn.addr !71

; <label>:27:                                     ; preds = %dec_label_pc_10a52, %25
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !71

; uselistorder directives
  uselistorder double %14, { 2, 3, 1, 0 }
  uselistorder double %13, { 1, 0 }
  uselistorder double* %3, { 4, 3, 2, 1, 0 }
  uselistorder fp128* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %27, { 1, 0 }
  uselistorder label %dec_label_pc_10a52, { 1, 0 }
}

define i32 @function_10a66() local_unnamed_addr {
dec_label_pc_10a66:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !72
}

define i32 @function_10a68() local_unnamed_addr {
dec_label_pc_10a68:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !73
}

define i32 @function_10a6c() local_unnamed_addr {
dec_label_pc_10a6c:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !74
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_220a8 to i8*), align 4, !insn.addr !75
  %5 = icmp eq i8 %4, 0, !insn.addr !76
  br i1 %5, label %dec_label_pc_10a7a, label %dec_label_pc_10a82, !insn.addr !76

dec_label_pc_10a7a:                               ; preds = %dec_label_pc_10a6c
  %6 = call i32 @function_10a1c(i32 %3, i32 %2, i32 %1), !insn.addr !77
  store i8 1, i8* bitcast (i8** @global_var_220a8 to i8*), align 4, !insn.addr !78
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !78
  br label %dec_label_pc_10a82, !insn.addr !78

dec_label_pc_10a82:                               ; preds = %dec_label_pc_10a6c, %dec_label_pc_10a7a
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !79

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_10a82, { 1, 0 }
}

define i32 @function_10a84(i32 %arg1) local_unnamed_addr {
dec_label_pc_10a84:
  %0 = alloca i32
  %1 = alloca i1
  %2 = load i1, i1* %1
  %3 = load i1, i1* %1
  %4 = load i32, i32* %0
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %5 = icmp eq i1 %3, %2, !insn.addr !80
  br i1 %5, label %7, label %6, !insn.addr !80

; <label>:6:                                      ; preds = %dec_label_pc_10a84
  call void @__asm_svclt(i32 59356), !insn.addr !80
  br label %7, !insn.addr !80

; <label>:7:                                      ; preds = %dec_label_pc_10a84, %6
  %8 = bitcast i32* %stack_var_-16 to %timeval*, !insn.addr !81
  %9 = call i32 @gettimeofday(%timeval* nonnull %8, %timezone* null), !insn.addr !81
  %10 = bitcast i32* %stack_var_-24 to i8*, !insn.addr !82
  %11 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %10, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_115b8, i32 0, i32 0), i32 %4), !insn.addr !82
  %12 = call double @__asm_vmov.i32.2(i32 0), !insn.addr !83
  %13 = add i32 %arg1, 2, !insn.addr !84
  %14 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !85
  call void @__asm_vst1.8.3(double %12, i32 %14), !insn.addr !86
  %15 = inttoptr i32 %13 to i32*, !insn.addr !87
  %16 = load i32, i32* %15, align 4, !insn.addr !87
  call void @__asm_vst1.8.3(double %12, i32 %16), !insn.addr !87
  %17 = call i32 @strlen(i8* nonnull %10), !insn.addr !88
  %18 = sub i32 6, %17, !insn.addr !89
  %19 = urem i32 %18, 256, !insn.addr !90
  %20 = icmp eq i32 %19, 0, !insn.addr !90
  br i1 %20, label %dec_label_pc_10ae4, label %dec_label_pc_10ad8, !insn.addr !91

dec_label_pc_10ad8:                               ; preds = %7
  %21 = inttoptr i32 %arg1 to i32*, !insn.addr !92
  %22 = call i32* @memset(i32* %21, i32 48, i32 %19), !insn.addr !92
  br label %dec_label_pc_10ae4, !insn.addr !92

dec_label_pc_10ae4:                               ; preds = %dec_label_pc_10ad8, %7
  %23 = inttoptr i32 %arg1 to i8*, !insn.addr !93
  %24 = call i8* @strcat(i8* %23, i8* nonnull %10), !insn.addr !93
  ret i32 %arg1, !insn.addr !94

; uselistorder directives
  uselistorder i32 %19, { 1, 0 }
  uselistorder double %12, { 1, 0 }
  uselistorder i32* %stack_var_-24, { 1, 0 }
  uselistorder i1* %1, { 1, 0 }
  uselistorder i32 %arg1, { 2, 1, 0, 3 }
  uselistorder label %7, { 1, 0 }
}

define i32 @function_10afc(i8* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_10afc:
  %0 = alloca i32
  %r4.0.reg2mem = alloca i32, !insn.addr !95
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @socket(i32 2, i32 2, i32 0), !insn.addr !96
  %3 = icmp eq i32 %2, -1, !insn.addr !97
  br i1 %3, label %dec_label_pc_10bac, label %dec_label_pc_10b28, !insn.addr !98

dec_label_pc_10b28:                               ; preds = %dec_label_pc_10afc
  %4 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !99
  %5 = call i8* @strncpy(i8* nonnull %4, i8* %arg1, i32 20), !insn.addr !99
  %6 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 35093), !insn.addr !100
  %7 = icmp slt i32 %6, 0, !insn.addr !101
  br i1 %7, label %dec_label_pc_10b94, label %dec_label_pc_10b58, !insn.addr !102

dec_label_pc_10b58:                               ; preds = %dec_label_pc_10b28
  %8 = insertvalue %in_addr undef, i32 %1, 0, !insn.addr !103
  %9 = call i8* @inet_ntoa(%in_addr %8), !insn.addr !103
  %10 = bitcast i32* %arg2 to i8*, !insn.addr !104
  %11 = call i8* @strcpy(i8* %10, i8* %9), !insn.addr !104
  %12 = call i32 @close(i32 %2), !insn.addr !105
  store i32 1, i32* %r4.0.reg2mem, !insn.addr !106
  br label %dec_label_pc_10b88, !insn.addr !106

dec_label_pc_10b88:                               ; preds = %dec_label_pc_10bac, %dec_label_pc_10b94, %dec_label_pc_10b58
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !107

dec_label_pc_10b94:                               ; preds = %dec_label_pc_10b28
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_115c4, i32 0, i32 0), i8* %arg1), !insn.addr !108
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !109
  br label %dec_label_pc_10b88, !insn.addr !109

dec_label_pc_10bac:                               ; preds = %dec_label_pc_10afc
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_115bc, i32 0, i32 0)), !insn.addr !110
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !111
  br label %dec_label_pc_10b88, !insn.addr !111

; uselistorder directives
  uselistorder i32* %r4.0.reg2mem, { 3, 2, 0, 1 }
}

define i32 @function_10bbc(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10bbc:
  %0 = alloca i8
  %1 = load i8, i8* %0
  %2 = load i8, i8* %0
  %3 = load i8, i8* %0
  %4 = load i8, i8* %0
  %5 = load i8, i8* %0
  %6 = load i8, i8* %0
  %stack_var_-56 = alloca i32, align 4
  %7 = call i32* @calloc(i32 40, i32 1), !insn.addr !112
  %8 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !113
  %9 = icmp slt i32 %8, 0, !insn.addr !114
  br i1 %9, label %dec_label_pc_10cac, label %dec_label_pc_10bf4, !insn.addr !115

dec_label_pc_10bf4:                               ; preds = %dec_label_pc_10bbc
  %10 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !116
  %11 = inttoptr i32 %arg2 to i8*, !insn.addr !116
  %12 = call i8* @strcpy(i8* nonnull %10, i8* %11), !insn.addr !116
  %13 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 35111), !insn.addr !117
  %14 = icmp slt i32 %13, 0, !insn.addr !118
  br i1 %14, label %dec_label_pc_10c98, label %dec_label_pc_10c18, !insn.addr !119

dec_label_pc_10c18:                               ; preds = %dec_label_pc_10bf4
  %15 = call i32 @close(i32 %8), !insn.addr !120
  %16 = zext i8 %6 to i32, !insn.addr !121
  %17 = zext i8 %5 to i32, !insn.addr !122
  %18 = zext i8 %4 to i32, !insn.addr !123
  %19 = zext i8 %2 to i32, !insn.addr !124
  %20 = zext i8 %1 to i32, !insn.addr !125
  %21 = bitcast i32* %7 to i8*, !insn.addr !126
  %22 = sext i8 %3 to i32, !insn.addr !126
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* %21, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_115e4, i32 0, i32 0), i32 %20, i32 %19, i32 %22, i32 %18, i32 %17, i32 %16), !insn.addr !126
  %24 = inttoptr i32 %arg1 to i32*, !insn.addr !127
  store i32 1027817805, i32* %24, align 4, !insn.addr !127
  %25 = add i32 %arg1, 4, !insn.addr !127
  %26 = inttoptr i32 %25 to i8*, !insn.addr !128
  %27 = call i8* @stpcpy(i8* %26, i8* %21), !insn.addr !128
  %28 = bitcast i8* %27 to i16*, !insn.addr !129
  store i16 44, i16* %28, align 2, !insn.addr !129
  call void @free(i32* %7), !insn.addr !130
  ret i32 %arg1, !insn.addr !131

dec_label_pc_10c98:                               ; preds = %dec_label_pc_10bf4
  call void @perror(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_115dc, i32 0, i32 0)), !insn.addr !132
  call void @exit(i32 0), !insn.addr !133
  unreachable, !insn.addr !133

dec_label_pc_10cac:                               ; preds = %dec_label_pc_10bbc
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_115bc, i32 0, i32 0)), !insn.addr !134
  call void @exit(i32 0), !insn.addr !135
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !135

; uselistorder directives
  uselistorder i8* %0, { 5, 4, 3, 2, 1, 0 }
}

define i32 @function_10cc0(i32* %arg1, i8* %arg2) local_unnamed_addr {
dec_label_pc_10cc0:
  %0 = alloca i8
  %1 = load i8, i8* %0
  %2 = load i8, i8* %0
  %3 = load i8, i8* %0
  %4 = load i8, i8* %0
  %5 = load i8, i8* %0
  %6 = load i8, i8* %0
  %stack_var_-56 = alloca i32, align 4
  %7 = call i32* @calloc(i32 40, i32 1), !insn.addr !136
  %8 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !137
  %9 = icmp slt i32 %8, 0, !insn.addr !138
  br i1 %9, label %dec_label_pc_10d8c, label %dec_label_pc_10cf8, !insn.addr !139

dec_label_pc_10cf8:                               ; preds = %dec_label_pc_10cc0
  %10 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !140
  %11 = call i8* @strcpy(i8* nonnull %10, i8* %arg2), !insn.addr !140
  %12 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 35111), !insn.addr !141
  %13 = icmp slt i32 %12, 0, !insn.addr !142
  br i1 %13, label %dec_label_pc_10d78, label %dec_label_pc_10d1c, !insn.addr !143

dec_label_pc_10d1c:                               ; preds = %dec_label_pc_10cf8
  %14 = ptrtoint i32* %arg1 to i32
  %15 = call i32 @close(i32 %8), !insn.addr !144
  %16 = zext i8 %6 to i32, !insn.addr !145
  %17 = zext i8 %5 to i32, !insn.addr !146
  %18 = zext i8 %4 to i32, !insn.addr !147
  %19 = zext i8 %2 to i32, !insn.addr !148
  %20 = zext i8 %1 to i32, !insn.addr !149
  %21 = bitcast i32* %7 to i8*, !insn.addr !150
  %22 = sext i8 %3 to i32, !insn.addr !150
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* %21, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_115e4, i32 0, i32 0), i32 %20, i32 %19, i32 %22, i32 %18, i32 %17, i32 %16), !insn.addr !150
  %24 = bitcast i32* %arg1 to i8*, !insn.addr !151
  %25 = call i8* @strcpy(i8* %24, i8* %21), !insn.addr !151
  call void @free(i32* %7), !insn.addr !152
  ret i32 %14, !insn.addr !153

dec_label_pc_10d78:                               ; preds = %dec_label_pc_10cf8
  call void @perror(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_115dc, i32 0, i32 0)), !insn.addr !154
  call void @exit(i32 0), !insn.addr !155
  unreachable, !insn.addr !155

dec_label_pc_10d8c:                               ; preds = %dec_label_pc_10cc0
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_115bc, i32 0, i32 0)), !insn.addr !156
  call void @exit(i32 0), !insn.addr !157
  unreachable, !insn.addr !157

; uselistorder directives
  uselistorder i8* %0, { 5, 4, 3, 2, 1, 0 }
  uselistorder void (i8*)* @perror, { 2, 1, 4, 3, 0, 5 }
  uselistorder i32 (i32)* @close, { 1, 2, 0, 3 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 1, 2, 0, 3 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 2, 1, 3, 0, 4 }
}

define i32 @function_10da0(i32 %arg1) local_unnamed_addr {
dec_label_pc_10da0:
  %0 = alloca i32
  %1 = alloca double
  %2 = load double, double* %1
  %3 = load double, double* %1
  %4 = load i32, i32* %0
  %5 = load i32, i32* %0
  %6 = load i32, i32* %0
  %7 = load i32, i32* %0
  %8 = load i32, i32* %0
  %9 = load i32, i32* %0
  %10 = load i32, i32* %0
  %stack_var_-80 = alloca i32, align 4
  %11 = call fp128 @__asm_vmov.i32(i32 0), !insn.addr !158
  call void @__asm_vst1.8(double %3, double %2, i32 %10), !insn.addr !159
  call void @__asm_vstr(double %3, i32 %9), !insn.addr !160
  call void @__asm_vstr(double %3, i32 %8), !insn.addr !161
  call void @__asm_vstr(double %3, i32 %7), !insn.addr !162
  call void @__asm_vstr(double %3, i32 %6), !insn.addr !163
  call void @__asm_vstr(double %3, i32 %5), !insn.addr !164
  call void @__asm_vstr(double %3, i32 %4), !insn.addr !165
  %12 = bitcast i32* %stack_var_-80 to i8*, !insn.addr !166
  %13 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %12, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11610, i32 0, i32 0)), !insn.addr !166
  %14 = call i32 @system(i8* nonnull %12), !insn.addr !167
  %15 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %12, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11610, i32 0, i32 0), i32 %arg1, i32 435), !insn.addr !168
  %16 = call i32 @system(i8* nonnull %12), !insn.addr !169
  ret i32 %16, !insn.addr !170

; uselistorder directives
  uselistorder double %3, { 6, 3, 4, 5, 0, 1, 2 }
  uselistorder double* %1, { 1, 0 }
  uselistorder i32* %0, { 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @function_10e14() local_unnamed_addr {
dec_label_pc_10e14:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i8*, !insn.addr !171
  %3 = call i32 @access(i8* %2, i32 0), !insn.addr !171
  ret i32 0, !insn.addr !172
}

define i32 @function_10e2c() local_unnamed_addr {
dec_label_pc_10e2c:
  %0 = alloca i32
  %1 = alloca double
  %2 = load i32, i32* %0
  %3 = load double, double* %1
  %4 = load double, double* %1
  %stack_var_-76 = alloca i32, align 4
  %5 = load i32, i32* %0
  %6 = load i32, i32* %0
  %7 = load i32, i32* %0
  %8 = load i32, i32* %0
  %9 = load i32, i32* %0
  %10 = load i32, i32* %0
  %stack_var_-72 = alloca i32, align 4
  %11 = call fp128 @__asm_vmov.i32(i32 0), !insn.addr !173
  call void @__asm_vstr(double %4, i32 %10), !insn.addr !174
  call void @__asm_vst1.8(double %4, double %3, i32 %2), !insn.addr !175
  call void @__asm_vstr(double %4, i32 %9), !insn.addr !176
  call void @__asm_vstr(double %4, i32 %8), !insn.addr !177
  call void @__asm_vstr(double %4, i32 %7), !insn.addr !178
  call void @__asm_vstr(double %4, i32 %6), !insn.addr !179
  call void @__asm_vstr(double %4, i32 %5), !insn.addr !180
  %12 = bitcast i32* %stack_var_-72 to i8*, !insn.addr !181
  %13 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %12, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_11638, i32 0, i32 0)), !insn.addr !181
  %14 = call i32 @access(i8* nonnull %12, i32 0), !insn.addr !182
  %15 = icmp eq i32 %14, 0, !insn.addr !183
  br i1 %15, label %dec_label_pc_10ed8, label %dec_label_pc_10e7c, !insn.addr !184

dec_label_pc_10e7c:                               ; preds = %dec_label_pc_10e2c
  %16 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_11654, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11650, i32 0, i32 0)), !insn.addr !185
  %17 = icmp eq %_IO_FILE* %16, null, !insn.addr !186
  br i1 %17, label %dec_label_pc_10f60, label %dec_label_pc_10e98, !insn.addr !187

dec_label_pc_10e98:                               ; preds = %dec_label_pc_10e7c
  %18 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %12, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_1164c, i32 0, i32 0), i32 406), !insn.addr !188
  %19 = call i32 @strlen(i8* nonnull %12), !insn.addr !189
  %20 = call i32 @fwrite(i32* nonnull %stack_var_-72, i32 %19, i32 1, %_IO_FILE* nonnull %16), !insn.addr !190
  %21 = icmp eq i32 %20, 1, !insn.addr !191
  br i1 %21, label %dec_label_pc_10ed0, label %dec_label_pc_10f48, !insn.addr !192

dec_label_pc_10ed0:                               ; preds = %dec_label_pc_10e98
  %22 = call i32 @fclose(%_IO_FILE* nonnull %16), !insn.addr !193
  br label %dec_label_pc_10ed8, !insn.addr !193

dec_label_pc_10ed8:                               ; preds = %dec_label_pc_10f48, %dec_label_pc_10ed0, %dec_label_pc_10e2c
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %12, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11698, i32 0, i32 0), i32 406), !insn.addr !194
  %24 = call %_IO_FILE* @fopen64(i8* nonnull %12, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_116b8, i32 0, i32 0)), !insn.addr !195
  %25 = icmp eq %_IO_FILE* %24, null, !insn.addr !196
  br i1 %25, label %dec_label_pc_10f30, label %dec_label_pc_10f04, !insn.addr !197

dec_label_pc_10f04:                               ; preds = %dec_label_pc_10ed8
  %26 = call i32 (%_IO_FILE*, i8*, ...) @fscanf(%_IO_FILE* nonnull %24, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_1164c, i32 0, i32 0), i32* nonnull %stack_var_-76), !insn.addr !198
  %27 = call i32 @fclose(%_IO_FILE* nonnull %24), !insn.addr !199
  %28 = load i32, i32* %stack_var_-76, align 4, !insn.addr !200
  %29 = icmp ne i32 %28, 0, !insn.addr !201
  %spec.select = zext i1 %29 to i32
  ret i32 %spec.select, !insn.addr !202

dec_label_pc_10f30:                               ; preds = %dec_label_pc_10ed8
  %30 = call i32 @puts(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_116bc, i32 0, i32 0)), !insn.addr !203
  ret i32 1, !insn.addr !204

dec_label_pc_10f48:                               ; preds = %dec_label_pc_10e98
  %31 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_11684, i32 0, i32 0)), !insn.addr !205
  %32 = call i32 @fclose(%_IO_FILE* nonnull %16), !insn.addr !206
  br label %dec_label_pc_10ed8, !insn.addr !207

dec_label_pc_10f60:                               ; preds = %dec_label_pc_10e7c
  %33 = call i32 @puts(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_1166c, i32 0, i32 0)), !insn.addr !208
  ret i32 1, !insn.addr !209

; uselistorder directives
  uselistorder %_IO_FILE* %16, { 1, 0, 2, 3 }
  uselistorder i8* %12, { 2, 3, 0, 1, 4, 5 }
  uselistorder i32* %stack_var_-76, { 1, 0 }
  uselistorder double %4, { 6, 3, 4, 5, 0, 1, 2 }
  uselistorder double* %1, { 1, 0 }
  uselistorder i32* %0, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen64, { 1, 0, 2 }
}

define i32 @function_10f78(i32 %arg1) local_unnamed_addr {
dec_label_pc_10f78:
  %0 = alloca i32
  %1 = alloca double
  %r4.0.reg2mem = alloca i32, !insn.addr !210
  %2 = load i32, i32* %0
  %3 = load double, double* %1
  %4 = load double, double* %1
  %5 = load i32, i32* %0
  %6 = load i32, i32* %0
  %7 = load i32, i32* %0
  %8 = load i32, i32* %0
  %9 = load i32, i32* %0
  %10 = load i32, i32* %0
  %stack_var_-80 = alloca i32, align 4
  %11 = call fp128 @__asm_vmov.i32(i32 0), !insn.addr !210
  %12 = icmp eq i32 %arg1, 0, !insn.addr !211
  %spec.select = select i1 %12, i32 434, i32 435
  call void @__asm_vst1.8(double %4, double %3, i32 %2), !insn.addr !212
  call void @__asm_vstr(double %4, i32 %10), !insn.addr !213
  call void @__asm_vstr(double %4, i32 %9), !insn.addr !214
  call void @__asm_vstr(double %4, i32 %8), !insn.addr !215
  call void @__asm_vstr(double %4, i32 %7), !insn.addr !216
  call void @__asm_vstr(double %4, i32 %6), !insn.addr !217
  call void @__asm_vstr(double %4, i32 %5), !insn.addr !218
  %13 = bitcast i32* %stack_var_-80 to i8*, !insn.addr !219
  store i32 3, i32* %r4.0.reg2mem, !insn.addr !218
  br label %dec_label_pc_10fbc, !insn.addr !218

dec_label_pc_10fbc:                               ; preds = %dec_label_pc_10fbc, %dec_label_pc_10f78
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %14 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %13, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11610, i32 0, i32 0), i32 1, i32 %spec.select), !insn.addr !219
  %15 = call i32 @system(i8* nonnull %13), !insn.addr !220
  %16 = call i32 @usleep(i32 50000), !insn.addr !221
  %17 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %13, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11610, i32 0, i32 0), i32 0, i32 %spec.select), !insn.addr !222
  %18 = call i32 @system(i8* nonnull %13), !insn.addr !223
  %19 = call i32 @usleep(i32 50000), !insn.addr !224
  %20 = add nsw i32 %r4.0.reload, -1, !insn.addr !225
  %21 = icmp eq i32 %r4.0.reload, 1, !insn.addr !225
  store i32 %20, i32* %r4.0.reg2mem, !insn.addr !226
  br i1 %21, label %dec_label_pc_1100c, label %dec_label_pc_10fbc, !insn.addr !226

dec_label_pc_1100c:                               ; preds = %dec_label_pc_10fbc
  ret i32 %19, !insn.addr !227

; uselistorder directives
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32 %spec.select, { 1, 0 }
  uselistorder double %4, { 6, 3, 4, 5, 0, 1, 2 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder double* %1, { 1, 0 }
  uselistorder i32* %0, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i8*)* @system, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 8, 3, 5, 4, 9, 2, 1, 0, 7, 6, 10 }
}

define i32 @function_11014() local_unnamed_addr {
dec_label_pc_11014:
  %0 = alloca double
  %1 = load double, double* %0
  %2 = load double, double* %0
  %stack_var_-20 = alloca i32, align 4
  %3 = call i32 @socket(i32 2, i32 2, i32 0), !insn.addr !228
  %4 = icmp eq i32 %3, -1, !insn.addr !229
  store i32 %3, i32* @global_var_220a4, align 4, !insn.addr !230
  br i1 %4, label %dec_label_pc_110e8, label %dec_label_pc_11040, !insn.addr !231

dec_label_pc_11040:                               ; preds = %dec_label_pc_11014
  store i32 1, i32* %stack_var_-20, align 4, !insn.addr !232
  %5 = call i32 @setsockopt(i32 %3, i32 1, i32 6, i32* nonnull %stack_var_-20, i32 4), !insn.addr !233
  %6 = icmp eq i32 %5, -1, !insn.addr !234
  br i1 %6, label %dec_label_pc_110d0, label %dec_label_pc_11068, !insn.addr !235

dec_label_pc_11068:                               ; preds = %dec_label_pc_11040
  %7 = call fp128 @__asm_vmov.i32(i32 0), !insn.addr !236
  %8 = load i32, i32* @global_var_220a4, align 4, !insn.addr !237
  %9 = load %timeval*, %timeval** @global_var_220d4, align 4, !insn.addr !238
  %10 = ptrtoint %timeval* %9 to i32, !insn.addr !238
  call void @__asm_vst1.8(double %2, double %1, i32 %10), !insn.addr !238
  store i32 0, i32* @global_var_220d8, align 4, !insn.addr !239
  store i32 -1674117118, i32* bitcast (%timeval** @global_var_220d4 to i32*), align 4, !insn.addr !240
  %11 = load %sockaddr*, %sockaddr** @global_var_220e4, align 4, !insn.addr !241
  %12 = ptrtoint %sockaddr* %11 to i32, !insn.addr !241
  call void @__asm_vst1.8(double %2, double %1, i32 %12), !insn.addr !241
  store i32 -1690894334, i32* bitcast (%sockaddr** @global_var_220e4 to i32*), align 4, !insn.addr !242
  store i32 -1, i32* @global_var_220e8, align 4, !insn.addr !243
  %13 = call i32 @bind(i32 %8, %sockaddr* bitcast (%timeval** @global_var_220d4 to %sockaddr*), i32 16), !insn.addr !244
  %14 = icmp eq i32 %13, -1, !insn.addr !245
  br i1 %14, label %dec_label_pc_11104, label %dec_label_pc_110c4, !insn.addr !246

dec_label_pc_110c4:                               ; preds = %dec_label_pc_11104, %dec_label_pc_11068
  ret i32 0, !insn.addr !247

dec_label_pc_110d0:                               ; preds = %dec_label_pc_11040
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_116f0, i32 0, i32 0)), !insn.addr !248
  ret i32 -1, !insn.addr !249

dec_label_pc_110e8:                               ; preds = %dec_label_pc_11014
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_116e0, i32 0, i32 0)), !insn.addr !250
  ret i32 -1, !insn.addr !251

dec_label_pc_11104:                               ; preds = %dec_label_pc_11068
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_11704, i32 0, i32 0)), !insn.addr !252
  br label %dec_label_pc_110c4, !insn.addr !253

; uselistorder directives
  uselistorder i32 %3, { 0, 2, 1 }
  uselistorder double %2, { 1, 0 }
  uselistorder double %1, { 1, 0 }
  uselistorder double* %0, { 1, 0 }
  uselistorder i32 (i32, i32, i32)* @socket, { 0, 2, 3, 1, 4 }
}

define i32 @function_11114() local_unnamed_addr {
dec_label_pc_11114:
  %0 = alloca i32
  %1 = alloca double
  %2 = load double, double* %1
  %3 = load double, double* %1
  %4 = load i32, i32* %0
  %5 = load i32, i32* %0
  %6 = load i32, i32* %0
  %stack_var_-156 = alloca i32, align 4
  %7 = load i32, i32* %0
  %stack_var_-116 = alloca i32, align 4
  %8 = load i32, i32* %0
  %stack_var_-188 = alloca i32, align 4
  %9 = load i32, i32* %0
  %10 = call fp128 @__asm_vmov.i32(i32 0), !insn.addr !254
  call void @__asm_vst1.8(double %3, double %2, i32 %9), !insn.addr !255
  call void @__asm_vst1.8(double %3, double %2, i32 %8), !insn.addr !256
  call void @__asm_vst1.8(double %3, double %2, i32 %7), !insn.addr !257
  call void @__asm_vstr(double %3, i32 %6), !insn.addr !258
  call void @__asm_vstr(double %3, i32 %5), !insn.addr !259
  call void @__asm_vstr(double %3, i32 %4), !insn.addr !260
  %11 = call i32* @memset(i32* nonnull %stack_var_-116, i32 0, i32 100), !insn.addr !261
  %12 = call i32 @function_10afc(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_11714, i32 0, i32 0), i32* nonnull %stack_var_-156), !insn.addr !262
  %13 = icmp eq i32 %12, 0, !insn.addr !263
  br i1 %13, label %dec_label_pc_11224, label %dec_label_pc_11170, !insn.addr !264

dec_label_pc_11170:                               ; preds = %dec_label_pc_11224, %dec_label_pc_11114
  %14 = ptrtoint i32* %stack_var_-116 to i32, !insn.addr !265
  %15 = call i32 @function_10cc0(i32* nonnull %stack_var_-188, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_11714, i32 0, i32 0)), !insn.addr !266
  %16 = bitcast i32* %stack_var_-188 to i8*, !insn.addr !267
  %17 = call i32 @strlen(i8* nonnull %16), !insn.addr !267
  %18 = call i8* @strncpy(i8* bitcast (i8** @global_var_220ac to i8*), i8* nonnull %16, i32 %17), !insn.addr !268
  %19 = bitcast i32* %stack_var_-116 to i8*, !insn.addr !269
  %20 = bitcast i32* %stack_var_-156 to i8*, !insn.addr !269
  %21 = call i8* @stpcpy(i8* nonnull %19, i8* nonnull %20), !insn.addr !269
  %22 = ptrtoint i8* %21 to i32, !insn.addr !269
  %23 = add i32 %17, 1
  store i8 44, i8* %21, align 1, !insn.addr !270
  %24 = add i32 %22, 1, !insn.addr !271
  %25 = inttoptr i32 %24 to i32*, !insn.addr !272
  %26 = call i32* @memcpy(i32* %25, i32* nonnull %stack_var_-188, i32 %23), !insn.addr !272
  %27 = load i32, i32* @global_var_220a4, align 4, !insn.addr !273
  %28 = sub i32 %23, %14, !insn.addr !274
  %29 = add i32 %28, %22, !insn.addr !275
  %30 = call i32 @sendto(i32 %27, i32* nonnull %stack_var_-116, i32 %29, i32 0, %sockaddr* bitcast (%sockaddr** @global_var_220e4 to %sockaddr*), i32 16), !insn.addr !276
  %31 = icmp slt i32 %30, 0, !insn.addr !277
  br i1 %31, label %dec_label_pc_11234, label %dec_label_pc_11208, !insn.addr !278

dec_label_pc_11208:                               ; preds = %dec_label_pc_11170
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_1173c, i32 0, i32 0), i32* nonnull %stack_var_-116), !insn.addr !279
  ret i32 1, !insn.addr !280

dec_label_pc_11224:                               ; preds = %dec_label_pc_11114
  %33 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_1171c, i32 0, i32 0)), !insn.addr !281
  br label %dec_label_pc_11170, !insn.addr !282

dec_label_pc_11234:                               ; preds = %dec_label_pc_11170
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_1172c, i32 0, i32 0)), !insn.addr !283
  ret i32 1, !insn.addr !284

; uselistorder directives
  uselistorder i32* %stack_var_-116, { 0, 1, 2, 4, 3 }
  uselistorder double %3, { 3, 4, 5, 0, 1, 2 }
  uselistorder double* %1, { 1, 0 }
  uselistorder i32* %0, { 5, 4, 3, 2, 1, 0 }
  uselistorder void (double, i32)* @__asm_vstr, { 18, 19, 20, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 12, 13, 14, 15, 16, 17 }
  uselistorder void (double, double, i32)* @__asm_vst1.8, { 3, 4, 5, 6, 7, 1, 0, 2 }
  uselistorder fp128 (i32)* @__asm_vmov.i32, { 3, 4, 1, 0, 2 }
}

define i32 @function_1124c(i8* %arg1) local_unnamed_addr {
dec_label_pc_1124c:
  %0 = load i32, i32* @global_var_220a4, align 4, !insn.addr !285
  %1 = bitcast i8* %arg1 to i32*, !insn.addr !286
  %2 = call i32 @sendto(i32 %0, i32* %1, i32 10, i32 0, %sockaddr* bitcast (%sockaddr** @global_var_220e4 to %sockaddr*), i32 16), !insn.addr !286
  %3 = icmp slt i32 %2, 0, !insn.addr !287
  %4 = icmp eq i1 %3, false, !insn.addr !288
  %.op = urem i32 %2, 65536
  %.op.op = or i32 %.op, 65536
  %spec.select.op.op = select i1 %3, i32 71468, i32 %.op.op
  %5 = inttoptr i32 %spec.select.op.op to i8*
  %6 = select i1 %4, i8* inttoptr (i32 71500 to i8*), i8* %5, !insn.addr !289
  %7 = call i32 (i8*, ...) @printf(i8* nonnull %6), !insn.addr !289
  ret i32 %7, !insn.addr !289

; uselistorder directives
  uselistorder i32 65536, { 1, 0 }
  uselistorder i32 (i32, i32*, i32, i32, %sockaddr*, i32)* @sendto, { 1, 0, 2 }
}

define i32 @function_112a4() local_unnamed_addr {
dec_label_pc_112a4:
  %r0.0.reg2mem = alloca i32, !insn.addr !290
  %r3.0.reg2mem = alloca i32, !insn.addr !290
  %stack_var_-164 = alloca i32, align 4
  %stack_var_-152 = alloca i32, align 4
  %stack_var_-160 = alloca i32, align 4
  %stack_var_-156 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !291
  store i32 0, i32* %stack_var_-156, align 4, !insn.addr !292
  %1 = ptrtoint i32* %stack_var_-156 to i32, !insn.addr !292
  store i32 2, i32* %stack_var_-160, align 4, !insn.addr !293
  store i32 %1, i32* %r3.0.reg2mem, !insn.addr !293
  br label %dec_label_pc_112c8, !insn.addr !293

dec_label_pc_112c8:                               ; preds = %dec_label_pc_112c8, %dec_label_pc_112a4
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %2 = add i32 %r3.0.reload, 4, !insn.addr !294
  %3 = inttoptr i32 %2 to i32*, !insn.addr !294
  store i32 0, i32* %3, align 4, !insn.addr !294
  %4 = icmp eq i32 %2, %0, !insn.addr !295
  store i32 %2, i32* %r3.0.reg2mem, !insn.addr !296
  br i1 %4, label %dec_label_pc_112d4, label %dec_label_pc_112c8, !insn.addr !296

dec_label_pc_112d4:                               ; preds = %dec_label_pc_112c8
  %5 = load i32, i32* @global_var_220a4, align 4, !insn.addr !297
  %6 = icmp slt i32 %5, 0, !insn.addr !298
  %7 = add i32 %5, 31, !insn.addr !299
  %8 = urem i32 %5, 32, !insn.addr !300
  %spec.select = select i1 %6, i32 %7, i32 %5
  %9 = sub i32 0, %5, !insn.addr !301
  %10 = icmp slt i32 %9, 0, !insn.addr !301
  %11 = ashr i32 %spec.select, 5, !insn.addr !302
  %12 = urem i32 %9, 32
  %13 = sub nsw i32 0, %12
  %ip.0 = select i1 %10, i32 %8, i32 %13
  %14 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !303
  %15 = mul i32 %11, 4, !insn.addr !304
  %16 = add i32 %14, -128
  %17 = add i32 %15, %16, !insn.addr !305
  %18 = inttoptr i32 %17 to i32*, !insn.addr !305
  %19 = load i32, i32* %18, align 4, !insn.addr !305
  %20 = shl i32 1, %ip.0, !insn.addr !306
  %21 = or i32 %20, %19, !insn.addr !306
  store i32 %21, i32* %18, align 4, !insn.addr !307
  %22 = call i32* @calloc(i32 30, i32 1), !insn.addr !308
  %23 = bitcast i32* %stack_var_-160 to %timeval*
  %24 = add i32 %5, 1, !insn.addr !309
  %25 = bitcast i32* %stack_var_-152 to %_TYPEDEF_fd_set*, !insn.addr !310
  %26 = call i32 @select(i32 %24, %_TYPEDEF_fd_set* nonnull %25, %_TYPEDEF_fd_set* null, %_TYPEDEF_fd_set* null, %timeval* nonnull %23), !insn.addr !310
  switch i32 %26, label %dec_label_pc_11354 [
    i32 -1, label %dec_label_pc_114d4
    i32 0, label %dec_label_pc_113d4
  ]

dec_label_pc_11354:                               ; preds = %dec_label_pc_112d4
  %27 = load i32, i32* @global_var_220a4, align 4, !insn.addr !311
  %28 = icmp slt i32 %27, 0, !insn.addr !312
  %29 = add i32 %27, 31, !insn.addr !313
  %30 = urem i32 %27, 32, !insn.addr !314
  %spec.select2 = select i1 %28, i32 %29, i32 %27
  %31 = sub i32 0, %27, !insn.addr !315
  %32 = icmp slt i32 %31, 0, !insn.addr !315
  %33 = ashr i32 %spec.select2, 5, !insn.addr !316
  %34 = urem i32 %31, 32
  %35 = sub nsw i32 0, %34
  %r2.0 = select i1 %32, i32 %30, i32 %35
  %36 = mul i32 %33, 4, !insn.addr !317
  %37 = add i32 %36, %16, !insn.addr !318
  %38 = inttoptr i32 %37 to i32*, !insn.addr !318
  %39 = load i32, i32* %38, align 4, !insn.addr !318
  %40 = shl i32 1, %r2.0, !insn.addr !319
  %41 = and i32 %40, %39, !insn.addr !319
  %42 = icmp eq i32 %41, 0, !insn.addr !319
  br i1 %42, label %dec_label_pc_1138c, label %dec_label_pc_11404, !insn.addr !320

dec_label_pc_1138c:                               ; preds = %dec_label_pc_11354
  %43 = load i32, i32* @global_var_220cc, align 4, !insn.addr !321
  %44 = icmp eq i32 %43, 5, !insn.addr !322
  br i1 %44, label %dec_label_pc_113a0, label %dec_label_pc_113f0, !insn.addr !323

dec_label_pc_113a0:                               ; preds = %dec_label_pc_1138c, %dec_label_pc_113d4
  store i32 0, i32* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_220ac to i32), i32 32) to i32*), align 4, !insn.addr !324
  %45 = call i32 @puts(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_117a4, i32 0, i32 0)), !insn.addr !325
  call void @free(i32* %22), !insn.addr !326
  ret i32 1, !insn.addr !327

dec_label_pc_113c8:                               ; preds = %dec_label_pc_11404
  %46 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_1175c, i32 0, i32 0)), !insn.addr !328
  br label %dec_label_pc_113d4, !insn.addr !328

dec_label_pc_113d4:                               ; preds = %dec_label_pc_112d4, %dec_label_pc_113c8
  %47 = load i32, i32* @global_var_220cc, align 4, !insn.addr !329
  %48 = add i32 %47, 1, !insn.addr !330
  store i32 %48, i32* @global_var_220cc, align 4, !insn.addr !331
  %49 = icmp eq i32 %48, 5, !insn.addr !332
  br i1 %49, label %dec_label_pc_113a0, label %dec_label_pc_113f0, !insn.addr !333

dec_label_pc_113f0:                               ; preds = %dec_label_pc_1138c, %dec_label_pc_113d4
  call void @free(i32* %22), !insn.addr !334
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !335
  br label %dec_label_pc_113fc, !insn.addr !335

dec_label_pc_113fc:                               ; preds = %dec_label_pc_114a4, %dec_label_pc_11474, %dec_label_pc_113f0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !336

dec_label_pc_11404:                               ; preds = %dec_label_pc_11354
  store i32 16, i32* %stack_var_-164, align 4, !insn.addr !337
  %50 = call i32 @recvfrom(i32 %27, i32* %22, i32 30, i32 0, %sockaddr* bitcast (%timeval** @global_var_220d4 to %sockaddr*), i32* nonnull %stack_var_-164), !insn.addr !338
  %51 = icmp slt i32 %50, 1, !insn.addr !339
  br i1 %51, label %dec_label_pc_113c8, label %dec_label_pc_11438, !insn.addr !339

dec_label_pc_11438:                               ; preds = %dec_label_pc_11404
  %52 = bitcast i32* %22 to i8*, !insn.addr !340
  %53 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_1176c, i32 0, i32 0), i32* %22), !insn.addr !340
  store i32 0, i32* @global_var_220cc, align 4, !insn.addr !341
  %54 = call i32 @strlen(i8* bitcast (i8** @global_var_220ac to i8*)), !insn.addr !342
  %55 = call i32 @strncmp(i8* %52, i8* bitcast (i8** @global_var_220ac to i8*), i32 %54), !insn.addr !343
  %56 = icmp eq i32 %55, 0, !insn.addr !344
  br i1 %56, label %dec_label_pc_11474, label %dec_label_pc_114a4, !insn.addr !345

dec_label_pc_11474:                               ; preds = %dec_label_pc_11438
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11778, i32 0, i32 0)), !insn.addr !346
  %58 = call i32 @function_10f78(i32 1), !insn.addr !347
  %59 = call i32 @function_1124c(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_11788, i32 0, i32 0)), !insn.addr !348
  call void @free(i32* %22), !insn.addr !349
  store i32 1, i32* %r0.0.reg2mem, !insn.addr !350
  br label %dec_label_pc_113fc, !insn.addr !350

dec_label_pc_114a4:                               ; preds = %dec_label_pc_11438
  %60 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_1178c, i32 0, i32 0)), !insn.addr !351
  %61 = call i32 @function_10f78(i32 0), !insn.addr !352
  %62 = call i32 @function_1124c(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_1179c, i32 0, i32 0)), !insn.addr !353
  call void @free(i32* %22), !insn.addr !354
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !355
  br label %dec_label_pc_113fc, !insn.addr !355

dec_label_pc_114d4:                               ; preds = %dec_label_pc_112d4
  call void @exit(i32 -1), !insn.addr !356
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !356

; uselistorder directives
  uselistorder i32 %48, { 1, 0 }
  uselistorder i32 %27, { 2, 3, 1, 0, 5, 4 }
  uselistorder i32* %22, { 3, 2, 4, 5, 6, 1, 0 }
  uselistorder i32 %5, { 2, 3, 1, 0, 5, 4 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.0.reg2mem, { 1, 2, 0, 3 }
  uselistorder void (i32)* @exit, { 2, 1, 0, 4, 3, 5 }
  uselistorder i32 (i8*)* @function_1124c, { 1, 0 }
  uselistorder i32 (i32)* @function_10f78, { 1, 0 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2, 3, 4 }
  uselistorder i32 (i8*, ...)* @printf, { 10, 8, 7, 9, 11, 5, 4, 3, 2, 1, 6, 0, 12 }
  uselistorder void (i32*)* @free, { 4, 3, 2, 1, 0, 5, 6 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 5, 4, 3, 0, 6 }
  uselistorder i8** @global_var_220ac, { 1, 0 }
  uselistorder i32* (i32, i32)* @calloc, { 1, 0, 2, 3 }
  uselistorder i32 30, { 1, 0 }
  uselistorder i32 32, { 4, 0, 1, 2, 3 }
  uselistorder i32* @global_var_220a4, { 1, 2, 3, 4, 5, 0 }
  uselistorder i32 4, { 0, 1, 4, 2, 3 }
  uselistorder label %dec_label_pc_113f0, { 1, 0 }
  uselistorder label %dec_label_pc_113d4, { 1, 0 }
  uselistorder label %dec_label_pc_113a0, { 1, 0 }
}

define i32 @function_114d8() local_unnamed_addr {
dec_label_pc_114d8:
  %r4.1.reg2mem = alloca i32, !insn.addr !357
  %merge.reg2mem = alloca i32, !insn.addr !357
  %r5.1.reg2mem = alloca i32, !insn.addr !357
  %r5.0.reg2mem = alloca i32, !insn.addr !357
  %r4.0.reg2mem = alloca i32, !insn.addr !357
  store i32 5, i32* %r4.0.reg2mem, !insn.addr !358
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !358
  br label %dec_label_pc_114e4, !insn.addr !358

dec_label_pc_114e4:                               ; preds = %dec_label_pc_114f0, %dec_label_pc_114d8
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %0 = call i32 @function_10e2c(), !insn.addr !359
  %1 = icmp eq i32 %0, 0, !insn.addr !360
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !361
  br i1 %1, label %dec_label_pc_1155c, label %dec_label_pc_114f0, !insn.addr !361

dec_label_pc_114f0:                               ; preds = %dec_label_pc_1155c, %dec_label_pc_114e4
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %2 = add nsw i32 %r4.0.reload, -1, !insn.addr !362
  %3 = icmp eq i32 %r4.0.reload, 1, !insn.addr !362
  store i32 %2, i32* %r4.0.reg2mem, !insn.addr !363
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !363
  br i1 %3, label %dec_label_pc_114f8, label %dec_label_pc_114e4, !insn.addr !363

dec_label_pc_114f8:                               ; preds = %dec_label_pc_114f0
  %4 = icmp eq i32 %r5.1.reload, 5, !insn.addr !364
  store i32 0, i32* %merge.reg2mem, !insn.addr !365
  br i1 %4, label %dec_label_pc_11510.preheader, label %dec_label_pc_11554, !insn.addr !365

dec_label_pc_11510.preheader:                     ; preds = %dec_label_pc_114f8
  %5 = call i32 @function_10e2c(), !insn.addr !366
  %6 = icmp eq i32 %5, 0, !insn.addr !367
  br i1 %6, label %dec_label_pc_1150c, label %dec_label_pc_1152c.preheader, !insn.addr !368

dec_label_pc_11554:                               ; preds = %dec_label_pc_1152c, %dec_label_pc_114f8
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !365

dec_label_pc_1150c:                               ; preds = %dec_label_pc_11510.preheader, %dec_label_pc_1150c
  %7 = call i32 @usleep(i32 1000), !insn.addr !369
  %8 = call i32 @function_10e2c(), !insn.addr !366
  %9 = icmp eq i32 %8, 0, !insn.addr !367
  br i1 %9, label %dec_label_pc_1150c, label %dec_label_pc_1152c.preheader, !insn.addr !368

dec_label_pc_1152c.preheader:                     ; preds = %dec_label_pc_1150c, %dec_label_pc_11510.preheader
  store i32 5, i32* %r4.1.reg2mem
  br label %dec_label_pc_1152c

dec_label_pc_1152c:                               ; preds = %dec_label_pc_1152c.preheader, %dec_label_pc_1152c
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %10 = call i32 @usleep(i32 100000), !insn.addr !370
  %11 = call i32 @usleep(i32 100000), !insn.addr !371
  %12 = add nsw i32 %r4.1.reload, -1, !insn.addr !372
  %13 = icmp eq i32 %r4.1.reload, 1, !insn.addr !372
  store i32 1, i32* %merge.reg2mem, !insn.addr !373
  store i32 %12, i32* %r4.1.reg2mem, !insn.addr !373
  br i1 %13, label %dec_label_pc_11554, label %dec_label_pc_1152c, !insn.addr !373

dec_label_pc_1155c:                               ; preds = %dec_label_pc_114e4
  %14 = add i32 %r5.0.reload, 1, !insn.addr !374
  %15 = call i32 @usleep(i32 20000), !insn.addr !375
  store i32 %14, i32* %r5.1.reg2mem, !insn.addr !376
  br label %dec_label_pc_114f0, !insn.addr !376

; uselistorder directives
  uselistorder i32 %r4.1.reload, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %merge.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 100000, { 1, 0 }
  uselistorder i32 (i32)* @usleep, { 6, 4, 3, 5, 2, 1, 0, 7 }
  uselistorder i32 -1, { 6, 7, 4, 5, 2, 3, 8, 13, 9, 10, 11, 1, 0, 12, 14 }
  uselistorder i32 ()* @function_10e2c, { 2, 0, 1 }
  uselistorder i32 5, { 0, 2, 1, 3, 4, 5, 6 }
  uselistorder label %dec_label_pc_1152c, { 1, 0 }
  uselistorder label %dec_label_pc_1150c, { 1, 0 }
}

define i32 @function_1156c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1156c:
  %0 = call i32 @function_10794(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !377
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 139026, i32 ptrtoint (i32* @global_var_21f10 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !378

; uselistorder directives
  uselistorder i32 0, { 16, 110, 10, 0, 111, 1, 2, 19, 20, 81, 21, 22, 23, 24, 25, 26, 115, 14, 27, 28, 82, 3, 17, 18, 29, 30, 83, 116, 117, 118, 119, 120, 11, 121, 122, 123, 124, 15, 84, 112, 85, 33, 34, 31, 32, 35, 36, 129, 86, 130, 37, 38, 87, 131, 43, 44, 39, 40, 41, 42, 4, 88, 132, 89, 90, 113, 114, 45, 46, 47, 48, 49, 50, 107, 6, 7, 51, 52, 53, 54, 8, 9, 55, 56, 108, 91, 57, 58, 109, 5, 92, 59, 60, 125, 93, 94, 126, 127, 95, 96, 97, 61, 62, 63, 64, 103, 104, 98, 65, 66, 67, 68, 128, 99, 105, 106, 69, 70, 133, 12, 13, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 100, 101, 102 }
  uselistorder i32 2, { 0, 1, 3, 2, 4, 5, 7, 6, 8 }
}

define i32 @function_115a8() local_unnamed_addr {
dec_label_pc_115a8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !379
}

define i32 @function_115ac(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_115ac:
  ret i32 %arg1, !insn.addr !380
}

declare i32* @calloc(i32, i32) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @fscanf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i8* @inet_ntoa(%in_addr) local_unnamed_addr

declare i32 @select(i32, %_TYPEDEF_fd_set*, %_TYPEDEF_fd_set*, %_TYPEDEF_fd_set*, %timeval*) local_unnamed_addr

declare i8* @stpcpy(i8*, i8*) local_unnamed_addr

declare i32 @recvfrom(i32, i32*, i32, i32, %sockaddr*, i32*) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i8* @strcat(i8*, i8*) local_unnamed_addr

declare i32 @ioctl(i32, i32, ...) local_unnamed_addr

declare i32 @usleep(i32) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @gettimeofday(%timeval*, %timezone*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @system(i8*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @access(i8*, i32) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32 @sendto(i32, i32*, i32, i32, %sockaddr*, i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare %_IO_FILE* @fopen64(i8*, i8*) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @strncmp(i8*, i8*, i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @unknown_54c7e() local_unnamed_addr

define i32 @function_250e5e() local_unnamed_addr {
dec_label_pc_250e5e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1

; uselistorder directives
  uselistorder i32 1, { 14, 13, 80, 27, 81, 82, 31, 30, 29, 28, 26, 32, 45, 50, 84, 40, 46, 47, 48, 49, 64, 63, 62, 61, 60, 59, 34, 33, 41, 42, 85, 86, 67, 66, 65, 25, 12, 52, 51, 68, 24, 83, 53, 69, 35, 23, 11, 43, 44, 79, 54, 71, 70, 22, 10, 9, 72, 21, 8, 55, 56, 73, 16, 57, 58, 74, 15, 36, 75, 37, 7, 77, 76, 18, 6, 38, 5, 4, 3, 39, 20, 19, 17, 2, 1, 0, 78, 87, 88, 89 }
}

declare fp128 @__asm_vmov.i32(i32) local_unnamed_addr

declare void @__asm_vst1.8(double, double, i32) local_unnamed_addr

declare void @__asm_vstr(double, i32) local_unnamed_addr

declare double @__asm_vmax.f32(double, double) local_unnamed_addr

declare double @__asm_vhadd.s8(double, double) local_unnamed_addr

declare fp128 @__asm_vaddw.s8(fp128, double) local_unnamed_addr

declare fp128 @__asm_vaddl.s8(double, double) local_unnamed_addr

declare fp128 @__asm_vsubw.s8(fp128, double) local_unnamed_addr

declare i32 @__asm_mrslt(i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vmov.i32.2(i32) local_unnamed_addr

declare void @__asm_vst1.8.3(double, i32) local_unnamed_addr

!0 = !{i64 67480}
!1 = !{i64 67484}
!2 = !{i64 67516}
!3 = !{i64 67528}
!4 = !{i64 67540}
!5 = !{i64 67552}
!6 = !{i64 67564}
!7 = !{i64 67576}
!8 = !{i64 67588}
!9 = !{i64 67600}
!10 = !{i64 67612}
!11 = !{i64 67624}
!12 = !{i64 67636}
!13 = !{i64 67648}
!14 = !{i64 67660}
!15 = !{i64 67672}
!16 = !{i64 67684}
!17 = !{i64 67696}
!18 = !{i64 67708}
!19 = !{i64 67720}
!20 = !{i64 67732}
!21 = !{i64 67744}
!22 = !{i64 67756}
!23 = !{i64 67768}
!24 = !{i64 67780}
!25 = !{i64 67792}
!26 = !{i64 67804}
!27 = !{i64 67816}
!28 = !{i64 67828}
!29 = !{i64 67840}
!30 = !{i64 67852}
!31 = !{i64 67864}
!32 = !{i64 67876}
!33 = !{i64 67888}
!34 = !{i64 67900}
!35 = !{i64 67912}
!36 = !{i64 67924}
!37 = !{i64 67960}
!38 = !{i64 67968}
!39 = !{i64 67976}
!40 = !{i64 67980}
!41 = !{i64 67984}
!42 = !{i64 67988}
!43 = !{i64 67996}
!44 = !{i64 68000}
!45 = !{i64 68004}
!46 = !{i64 68008}
!47 = !{i64 68016}
!48 = !{i64 68020}
!49 = !{i64 68024}
!50 = !{i64 68028}
!51 = !{i64 68032}
!52 = !{i64 68068}
!53 = !{i64 68072}
!54 = !{i64 68078}
!55 = !{i64 68100}
!56 = !{i64 68104}
!57 = !{i64 68108}
!58 = !{i64 68112}
!59 = !{i64 68124}
!60 = !{i64 68130}
!61 = !{i64 68132}
!62 = !{i64 68156}
!63 = !{i64 68158}
!64 = !{i64 68162}
!65 = !{i64 68166}
!66 = !{i64 68170}
!67 = !{i64 68174}
!68 = !{i64 68178}
!69 = !{i64 68186}
!70 = !{i64 68190}
!71 = !{i64 68194}
!72 = !{i64 68198}
!73 = !{i64 68200}
!74 = !{i64 68204}
!75 = !{i64 68214}
!76 = !{i64 68216}
!77 = !{i64 68218}
!78 = !{i64 68224}
!79 = !{i64 68226}
!80 = !{i64 68228}
!81 = !{i64 68252}
!82 = !{i64 68272}
!83 = !{i64 68276}
!84 = !{i64 68280}
!85 = !{i64 68284}
!86 = !{i64 68288}
!87 = !{i64 68292}
!88 = !{i64 68296}
!89 = !{i64 68300}
!90 = !{i64 68304}
!91 = !{i64 68308}
!92 = !{i64 68320}
!93 = !{i64 68332}
!94 = !{i64 68344}
!95 = !{i64 68348}
!96 = !{i64 68376}
!97 = !{i64 68380}
!98 = !{i64 68388}
!99 = !{i64 68404}
!100 = !{i64 68428}
!101 = !{i64 68432}
!102 = !{i64 68436}
!103 = !{i64 68460}
!104 = !{i64 68472}
!105 = !{i64 68480}
!106 = !{i64 68484}
!107 = !{i64 68496}
!108 = !{i64 68516}
!109 = !{i64 68520}
!110 = !{i64 68532}
!111 = !{i64 68536}
!112 = !{i64 68564}
!113 = !{i64 68584}
!114 = !{i64 68588}
!115 = !{i64 68592}
!116 = !{i64 68604}
!117 = !{i64 68620}
!118 = !{i64 68624}
!119 = !{i64 68628}
!120 = !{i64 68636}
!121 = !{i64 68640}
!122 = !{i64 68644}
!123 = !{i64 68652}
!124 = !{i64 68676}
!125 = !{i64 68684}
!126 = !{i64 68688}
!127 = !{i64 68712}
!128 = !{i64 68720}
!129 = !{i64 68736}
!130 = !{i64 68744}
!131 = !{i64 68756}
!132 = !{i64 68768}
!133 = !{i64 68776}
!134 = !{i64 68788}
!135 = !{i64 68796}
!136 = !{i64 68824}
!137 = !{i64 68844}
!138 = !{i64 68848}
!139 = !{i64 68852}
!140 = !{i64 68864}
!141 = !{i64 68880}
!142 = !{i64 68884}
!143 = !{i64 68888}
!144 = !{i64 68896}
!145 = !{i64 68900}
!146 = !{i64 68904}
!147 = !{i64 68912}
!148 = !{i64 68936}
!149 = !{i64 68940}
!150 = !{i64 68948}
!151 = !{i64 68960}
!152 = !{i64 68968}
!153 = !{i64 68980}
!154 = !{i64 68992}
!155 = !{i64 69000}
!156 = !{i64 69012}
!157 = !{i64 69020}
!158 = !{i64 69028}
!159 = !{i64 69064}
!160 = !{i64 69068}
!161 = !{i64 69072}
!162 = !{i64 69076}
!163 = !{i64 69080}
!164 = !{i64 69084}
!165 = !{i64 69088}
!166 = !{i64 69092}
!167 = !{i64 69100}
!168 = !{i64 69120}
!169 = !{i64 69128}
!170 = !{i64 69136}
!171 = !{i64 69148}
!172 = !{i64 69160}
!173 = !{i64 69168}
!174 = !{i64 69192}
!175 = !{i64 69196}
!176 = !{i64 69200}
!177 = !{i64 69204}
!178 = !{i64 69208}
!179 = !{i64 69212}
!180 = !{i64 69216}
!181 = !{i64 69220}
!182 = !{i64 69232}
!183 = !{i64 69236}
!184 = !{i64 69240}
!185 = !{i64 69260}
!186 = !{i64 69264}
!187 = !{i64 69268}
!188 = !{i64 69288}
!189 = !{i64 69296}
!190 = !{i64 69316}
!191 = !{i64 69320}
!192 = !{i64 69324}
!193 = !{i64 69332}
!194 = !{i64 69352}
!195 = !{i64 69368}
!196 = !{i64 69372}
!197 = !{i64 69376}
!198 = !{i64 69392}
!199 = !{i64 69400}
!200 = !{i64 69404}
!201 = !{i64 69408}
!202 = !{i64 69420}
!203 = !{i64 69432}
!204 = !{i64 69444}
!205 = !{i64 69456}
!206 = !{i64 69464}
!207 = !{i64 69468}
!208 = !{i64 69480}
!209 = !{i64 69492}
!210 = !{i64 69496}
!211 = !{i64 69500}
!212 = !{i64 69536}
!213 = !{i64 69540}
!214 = !{i64 69544}
!215 = !{i64 69548}
!216 = !{i64 69552}
!217 = !{i64 69556}
!218 = !{i64 69560}
!219 = !{i64 69580}
!220 = !{i64 69588}
!221 = !{i64 69596}
!222 = !{i64 69616}
!223 = !{i64 69624}
!224 = !{i64 69632}
!225 = !{i64 69636}
!226 = !{i64 69640}
!227 = !{i64 69648}
!228 = !{i64 69676}
!229 = !{i64 69684}
!230 = !{i64 69688}
!231 = !{i64 69692}
!232 = !{i64 69708}
!233 = !{i64 69720}
!234 = !{i64 69724}
!235 = !{i64 69732}
!236 = !{i64 69736}
!237 = !{i64 69756}
!238 = !{i64 69760}
!239 = !{i64 69784}
!240 = !{i64 69788}
!241 = !{i64 69796}
!242 = !{i64 69804}
!243 = !{i64 69812}
!244 = !{i64 69816}
!245 = !{i64 69820}
!246 = !{i64 69824}
!247 = !{i64 69836}
!248 = !{i64 69848}
!249 = !{i64 69860}
!250 = !{i64 69876}
!251 = !{i64 69888}
!252 = !{i64 69900}
!253 = !{i64 69904}
!254 = !{i64 69912}
!255 = !{i64 69940}
!256 = !{i64 69952}
!257 = !{i64 69956}
!258 = !{i64 69960}
!259 = !{i64 69964}
!260 = !{i64 69968}
!261 = !{i64 69972}
!262 = !{i64 69988}
!263 = !{i64 69992}
!264 = !{i64 69996}
!265 = !{i64 69932}
!266 = !{i64 70012}
!267 = !{i64 70020}
!268 = !{i64 70044}
!269 = !{i64 70056}
!270 = !{i64 70076}
!271 = !{i64 70080}
!272 = !{i64 70084}
!273 = !{i64 70108}
!274 = !{i64 70100}
!275 = !{i64 70128}
!276 = !{i64 70140}
!277 = !{i64 70144}
!278 = !{i64 70148}
!279 = !{i64 70164}
!280 = !{i64 70176}
!281 = !{i64 70188}
!282 = !{i64 70192}
!283 = !{i64 70204}
!284 = !{i64 70216}
!285 = !{i64 70244}
!286 = !{i64 70272}
!287 = !{i64 70276}
!288 = !{i64 70284}
!289 = !{i64 70304}
!290 = !{i64 70308}
!291 = !{i64 70320}
!292 = !{i64 70332}
!293 = !{i64 70340}
!294 = !{i64 70344}
!295 = !{i64 70348}
!296 = !{i64 70352}
!297 = !{i64 70372}
!298 = !{i64 70380}
!299 = !{i64 70384}
!300 = !{i64 70388}
!301 = !{i64 70396}
!302 = !{i64 70404}
!303 = !{i64 70412}
!304 = !{i64 70416}
!305 = !{i64 70420}
!306 = !{i64 70424}
!307 = !{i64 70428}
!308 = !{i64 70432}
!309 = !{i64 70460}
!310 = !{i64 70464}
!311 = !{i64 70484}
!312 = !{i64 70488}
!313 = !{i64 70492}
!314 = !{i64 70496}
!315 = !{i64 70504}
!316 = !{i64 70512}
!317 = !{i64 70524}
!318 = !{i64 70528}
!319 = !{i64 70532}
!320 = !{i64 70536}
!321 = !{i64 70548}
!322 = !{i64 70552}
!323 = !{i64 70556}
!324 = !{i64 70572}
!325 = !{i64 70576}
!326 = !{i64 70584}
!327 = !{i64 70596}
!328 = !{i64 70608}
!329 = !{i64 70620}
!330 = !{i64 70624}
!331 = !{i64 70628}
!332 = !{i64 70632}
!333 = !{i64 70636}
!334 = !{i64 70644}
!335 = !{i64 70648}
!336 = !{i64 70656}
!337 = !{i64 70676}
!338 = !{i64 70700}
!339 = !{i64 70708}
!340 = !{i64 70732}
!341 = !{i64 70740}
!342 = !{i64 70744}
!343 = !{i64 70760}
!344 = !{i64 70764}
!345 = !{i64 70768}
!346 = !{i64 70780}
!347 = !{i64 70788}
!348 = !{i64 70800}
!349 = !{i64 70808}
!350 = !{i64 70816}
!351 = !{i64 70828}
!352 = !{i64 70836}
!353 = !{i64 70848}
!354 = !{i64 70856}
!355 = !{i64 70864}
!356 = !{i64 70868}
!357 = !{i64 70872}
!358 = !{i64 70880}
!359 = !{i64 70884}
!360 = !{i64 70888}
!361 = !{i64 70892}
!362 = !{i64 70896}
!363 = !{i64 70900}
!364 = !{i64 70904}
!365 = !{i64 70912}
!366 = !{i64 70928}
!367 = !{i64 70932}
!368 = !{i64 70940}
!369 = !{i64 70924}
!370 = !{i64 70968}
!371 = !{i64 70984}
!372 = !{i64 70988}
!373 = !{i64 70992}
!374 = !{i64 71008}
!375 = !{i64 71012}
!376 = !{i64 71016}
!377 = !{i64 71036}
!378 = !{i64 71068}
!379 = !{i64 71080}
!380 = !{i64 71088}

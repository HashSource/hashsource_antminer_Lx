int __fastcall find_test_standard_position(
        int a1,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        const char *a6,
        const char *a7,
        char *a8,
        int a9)
{
  int v9; // r2
  int v10; // r4
  _DWORD v17[2]; // [sp+28h] [bp+10h] BYREF
  __int16 v18; // [sp+30h] [bp+18h]
  int v19; // [sp+34h] [bp+1Ch]
  int v20; // [sp+38h] [bp+20h]
  int v21; // [sp+3Ch] [bp+24h]
  int v22; // [sp+40h] [bp+28h]
  int v23; // [sp+44h] [bp+2Ch]
  char *v24; // [sp+48h] [bp+30h]
  int v25; // [sp+4Ch] [bp+34h]
  int v26; // [sp+50h] [bp+38h]
  int v27; // [sp+54h] [bp+3Ch]
  int v28; // [sp+58h] [bp+40h]
  int v29; // [sp+5Ch] [bp+44h]
  char v30; // [sp+62h] [bp+4Ah]
  char v31; // [sp+63h] [bp+4Bh]
  int v32; // [sp+64h] [bp+4Ch]
  _DWORD *v33; // [sp+68h] [bp+50h]
  _DWORD *v34; // [sp+6Ch] [bp+54h]
  char *src; // [sp+70h] [bp+58h]
  char *j; // [sp+74h] [bp+5Ch]
  int v37; // [sp+78h] [bp+60h]
  int v38; // [sp+7Ch] [bp+64h]
  char *s1; // [sp+80h] [bp+68h]
  int v40; // [sp+84h] [bp+6Ch]
  int v41; // [sp+88h] [bp+70h]
  int v42; // [sp+8Ch] [bp+74h]
  int v43; // [sp+90h] [bp+78h]
  int v44; // [sp+94h] [bp+7Ch]
  bool v45; // [sp+98h] [bp+80h]
  char v46; // [sp+99h] [bp+81h]
  char v47; // [sp+9Ah] [bp+82h]
  char v48; // [sp+9Bh] [bp+83h]
  unsigned int i; // [sp+9Ch] [bp+84h]

  i = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v31 = 0;
  v30 = 0;
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0;
  v45 = 1;
  v44 = 0;
  v43 = 0;
  v29 = 0;
  v42 = 0;
  v28 = 0;
  v27 = 0;
  v41 = 0;
  v40 = 0;
  v26 = 0;
  v25 = 0;
  s1 = 0;
  v38 = 0;
  v37 = 0;
  j = 0;
  v24 = 0;
  src = 0;
  v34 = 0;
  v23 = 0;
  v22 = 0;
  v33 = 0;
  v21 = 0;
  v32 = 0;
  v20 = 0;
  v19 = 0;
  printf("%s %s %s%s%s %s %s BIN%d\n", a2, a3, a5, a6, a7, a4, a8, a9);
  s1 = *(char **)(Mes_System_Config_File_Information + 100);
  while ( s1 )
  {
    if ( !strcmp(s1, a2) )
    {
      v38 = *((_DWORD *)s1 + 6);
      while ( v38 )
      {
        if ( !strcmp((const char *)(v38 + 4), a3) && !strcmp((const char *)(v38 + 28), a4) )
        {
          *(_DWORD *)(MES2Local_Config_Information + 64) = *(_DWORD *)(v38 + 52);
          printf("Asic_Num: %d\n", *(_DWORD *)(MES2Local_Config_Information + 64));
          *(_DWORD *)(MES2Local_Config_Information + 80) = *(_DWORD *)(v38 + 56);
          printf("Voltage_Domain: %d\n", *(_DWORD *)(MES2Local_Config_Information + 80));
          *(_DWORD *)(MES2Local_Config_Information + 84) = *(_DWORD *)(v38 + 60);
          printf("Asic_Num_Per_Voltage_Domain: %d\n", *(_DWORD *)(MES2Local_Config_Information + 84));
          for ( i = 0; i < gPower_version_array_size; ++i )
          {
            APW_power_version[i] = *(_DWORD *)(v38 + 4 * (i + 16));
            printf("APW_power_version[%d]: %d\n", i, APW_power_version[i]);
          }
          v48 = 1;
          break;
        }
        v38 = *(_DWORD *)(v38 + 96);
        ++v43;
      }
      if ( v48 != 1 )
      {
        printf("can't find:: board_name: %s, asic_type: %s\n", a3, a4);
      }
      else
      {
        v37 = *((_DWORD *)s1 + 11);
        while ( v37 )
        {
          if ( !strcmp((const char *)(v37 + 72), a8) && *(_DWORD *)(v37 + 96) == a9 )
          {
            j = *(char **)(v37 + 100);
            src = j;
            for ( j = (char *)*((_DWORD *)j + 23); j; j = v24 )
            {
              if ( strcmp(src, j) < 0 )
                src = j;
            }
            strcpy((char *)(MES2Local_Config_Information + 442), src);
            printf("version: %s\n", (const char *)(MES2Local_Config_Information + 442));
            v32 = *((_DWORD *)src + 6);
            printf("pattern_id: %d\n", v32);
            v20 = *((_DWORD *)src + 7);
            printf("asic_reg_id: %d\n", v20);
            v19 = *((_DWORD *)src + 8);
            printf("test_method_id: %d\n", v19);
            *(_DWORD *)(MES2Local_Config_Information + 460) = *((_DWORD *)src + 9);
            printf("version: %d\n", *(_DWORD *)(MES2Local_Config_Information + 460));
            *(_DWORD *)(MES2Local_Config_Information + 436) = *((_DWORD *)src + 10);
            printf("Fan_Speed: %d\n", *(_DWORD *)(MES2Local_Config_Information + 436));
            gTest_loop_id_array_size = *((_DWORD *)src + 21);
            printf("gTest_loop_id_array_size: %d\n", gTest_loop_id_array_size);
            if ( (unsigned int)gTest_loop_id_array_size > 0xA )
            {
              printf("gTest_loop_id_array_size is %d, bigger than %d\n", gTest_loop_id_array_size, 10);
              goto LABEL_57;
            }
            v9 = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(v9 + 28) = gTest_loop_id_array_size;
            *(_DWORD *)(a1 + 52) = *(_DWORD *)(v9 + 28);
            gTest_loop = gTest_loop_id_array_size;
            printf("gTest_loop: %d\n", gTest_loop_id_array_size);
            for ( i = 0; i < gTest_loop_id_array_size; ++i )
            {
              *(_DWORD *)(16 * (i + 2) + MES2Local_Config_Information + 192) = *(_DWORD *)&src[4 * i + 44];
              printf("Test_Loop[%d]->Level: %d\n", i, *(_DWORD *)(16 * (i + 2) + MES2Local_Config_Information + 192));
              *(_DWORD *)(16 * (i + 2) + MES2Local_Config_Information + 196) = *((_DWORD *)src + 22);
              printf(
                "Test_Loop[%d]->Pre_Open_Core_Voltage: %d\n",
                i,
                *(_DWORD *)(16 * (i + 2) + MES2Local_Config_Information + 196));
            }
            v47 = 1;
            break;
          }
          v37 = *(_DWORD *)(v37 + 104);
          ++v40;
        }
        if ( v47 != 1 )
        {
          printf("can't find::  %s%s%s, %s, BIN%d\n", a5, a6, a7, a8, a9);
        }
        else
        {
          v34 = (_DWORD *)*((_DWORD *)s1 + 7);
          while ( v34 )
          {
            if ( *v34 == v32 )
            {
              printf("pattern[%d]->id: %d\n", v42, *v34);
              *(_DWORD *)(MES2Local_Config_Information + 200) = v34[1];
              *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16) = v34[1];
              printf("pattern[%d]->Pattern_Number: %d\n", v42, *(_DWORD *)(MES2Local_Config_Information + 200));
              *(_DWORD *)(MES2Local_Config_Information + 204) = v34[2];
              *(_DWORD *)(*(_DWORD *)(a1 + 8) + 60) = v34[2];
              printf("pattern[%d]->Invalid_Core_Number: %d\n", v42, *(_DWORD *)(MES2Local_Config_Information + 204));
              *(_DWORD *)(MES2Local_Config_Information + 220) = v34[3];
              printf("pattern[%d]->Most_HW_Num: %d\n", v42, *(_DWORD *)(MES2Local_Config_Information + 220));
              *(_DWORD *)(MES2Local_Config_Information + 208) = v34[4];
              *(_DWORD *)(*(_DWORD *)(a1 + 8) + 64) = v34[4];
              printf("pattern[%d]->Least_Nonce_Per_Core: %d\n", v42, *(_DWORD *)(MES2Local_Config_Information + 208));
              *(_DWORD *)(MES2Local_Config_Information + 212) = v34[5];
              printf("pattern[%d]->Nonce_Rate: %d\n", v42, *(_DWORD *)(MES2Local_Config_Information + 212));
              *(_DWORD *)(MES2Local_Config_Information + 216) = v34[6];
              printf("pattern[%d]->Min_nonce_rate_per_asic: %d\n", v42, *(_DWORD *)(MES2Local_Config_Information + 216));
              v46 = 1;
              break;
            }
            v34 = (_DWORD *)v34[8];
            ++v42;
          }
          if ( v46 != 1 )
          {
            printf("can't find:: pattern_id: %d\n", v32);
          }
          else
          {
            if ( *(_DWORD *)(a1 + 48) && *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24) )
            {
              free(*(void **)(a1 + 48));
              free(*(void **)(*(_DWORD *)(a1 + 8) + 24));
              *(_DWORD *)(a1 + 48) = malloc(4 * gTest_loop_id_array_size);
              v10 = *(_DWORD *)(a1 + 8);
              *(_DWORD *)(v10 + 24) = malloc(4 * gTest_loop_id_array_size);
            }
            for ( i = 0; i < gTest_loop_id_array_size; ++i )
            {
              *((_BYTE *)v17 + i) = 0;
              v33 = (_DWORD *)*((_DWORD *)s1 + 10);
              while ( v33 )
              {
                if ( *v33 == *(_DWORD *)(16 * (i + 2) + MES2Local_Config_Information + 192) )
                {
                  printf("test_loop[%d]->id: %d\n", v41, *v33);
                  *(_DWORD *)(16 * (i + 14) + MES2Local_Config_Information + 12) = v33[1];
                  *(_DWORD *)(4 * i + *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24)) = v33[1];
                  printf(
                    "test_loop[%d]->Frequence: %d\n",
                    v41,
                    *(_DWORD *)(4 * i + *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24)));
                  *(_DWORD *)(16 * (i + 14) + MES2Local_Config_Information + 8) = v33[2];
                  *(_DWORD *)(4 * i + *(_DWORD *)(a1 + 48)) = v33[2];
                  printf("test_loop[%d]->Voltage: %d\n", v41, *(_DWORD *)(4 * i + *(_DWORD *)(a1 + 48)));
                  *((_BYTE *)v17 + i) = 1;
                  break;
                }
                v33 = (_DWORD *)v33[3];
                ++v41;
              }
            }
            for ( i = 0; i < gTest_loop_id_array_size; ++i )
            {
              v45 = (v45 & *((_BYTE *)v17 + i)) != 0;
              if ( *((_BYTE *)v17 + i) != 1 )
                printf(
                  "can't find:: test_loop id: %d\n",
                  *(_DWORD *)(16 * (i + 2) + MES2Local_Config_Information + 192));
            }
            if ( v45 )
            {
              puts("find all test standard");
              return 1;
            }
          }
        }
      }
    }
LABEL_57:
    s1 = (char *)*((_DWORD *)s1 + 12);
    ++v44;
  }
  return 0;
}

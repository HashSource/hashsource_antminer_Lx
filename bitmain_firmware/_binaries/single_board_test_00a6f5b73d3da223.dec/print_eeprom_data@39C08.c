int print_eeprom_data()
{
  printf("algorithm_and_key_version:             0x%02x\n", (unsigned __int8)zhiju_eeprom_data);
  printf("zhiju_information_length:              %d\n", (unsigned __int8)byte_47BFC5);
  printf("zhiju_information_format_version:      %d\n", (unsigned __int8)byte_47BFC6);
  printf(
    "hashboard_sn:                          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    (unsigned __int8)dword_47BFC7,
    BYTE1(dword_47BFC7),
    BYTE2(dword_47BFC7),
    HIBYTE(dword_47BFC7),
    (unsigned __int8)dword_47BFCB,
    BYTE1(dword_47BFCB),
    BYTE2(dword_47BFCB),
    HIBYTE(dword_47BFCB),
    (unsigned __int8)dword_47BFCF,
    BYTE1(dword_47BFCF),
    BYTE2(dword_47BFCF),
    HIBYTE(dword_47BFCF),
    (unsigned __int8)dword_47BFD3,
    BYTE1(dword_47BFD3),
    BYTE2(dword_47BFD3),
    HIBYTE(dword_47BFD3),
    (unsigned __int8)byte_47BFD7);
  printf("chip_die:                              %c%c\n", (unsigned __int8)word_47BFD8, HIBYTE(word_47BFD8));
  printf(
    "chip_marking:                          %c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    (unsigned __int8)dword_47BFDA,
    BYTE1(dword_47BFDA),
    BYTE2(dword_47BFDA),
    HIBYTE(dword_47BFDA),
    (unsigned __int8)dword_47BFDE,
    BYTE1(dword_47BFDE),
    BYTE2(dword_47BFDE),
    HIBYTE(dword_47BFDE),
    (unsigned __int8)dword_47BFE2,
    BYTE1(dword_47BFE2),
    BYTE2(dword_47BFE2),
    HIBYTE(dword_47BFE2),
    (unsigned __int8)byte_47BFE6);
  printf("chip_bin:                              %d\n", (unsigned __int8)byte_47BFE7);
  printf(
    "chip_ft_program_version:               %c%c%c%c%c%c%c%c%c\n",
    (unsigned __int8)dword_47BFE8,
    BYTE1(dword_47BFE8),
    BYTE2(dword_47BFE8),
    HIBYTE(dword_47BFE8),
    (unsigned __int8)dword_47BFEC,
    BYTE1(dword_47BFEC),
    BYTE2(dword_47BFEC),
    HIBYTE(dword_47BFEC),
    (unsigned __int8)byte_47BFF0);
  printf("asic_sensor:                           0x%02x\n", (unsigned __int8)byte_47BFF1);
  printf(
    "asic_sensor_addr:                      %d, %d, %d, %d\n",
    (unsigned __int8)byte_47BFF2,
    (unsigned __int8)byte_47BFF3,
    (unsigned __int8)byte_47BFF4,
    (unsigned __int8)byte_47BFF5);
  printf("pic_sensor:                            0x%02x\n", (unsigned __int8)byte_47BFF6);
  printf("pic_sensor_addr:                       0x%02x\n", (unsigned __int8)byte_47BFF7);
  printf("pcb_version_v1:                        %d\n", (unsigned __int8)byte_47BFF8);
  printf("pcb_version_v2:                        %d\n", (unsigned __int8)byte_47BFF9);
  printf("bom_version_v1:                        %d\n", (unsigned __int8)byte_47BFFA);
  printf("bom_version_v2:                        %d\n", (unsigned __int8)byte_47BFFB);
  printf("chip_technology:                       %c%c\n", (unsigned __int8)byte_47BFFC, (unsigned __int8)byte_47BFFD);
  printf(
    "voltage:                               %d\n",
    (unsigned __int8)byte_47BFFF | ((unsigned __int8)byte_47BFFE << 8));
  printf(
    "frequency:                             %d\n",
    (unsigned __int8)byte_47C001 | ((unsigned __int8)byte_47C000 << 8));
  printf(
    "nonce_rate:                            %d\n",
    (unsigned __int8)byte_47C003 | ((unsigned __int8)byte_47C002 << 8));
  printf("pcb_temprature_in:                     %d\n", byte_47C004);
  printf("pcb_temprature_out:                    %d\n", byte_47C005);
  printf("test_version:                          %d\n", (unsigned __int8)byte_47C006);
  printf("test_standard:                         %d\n", (unsigned __int8)byte_47C007);
  printf("miner_type:                         %s\n", byte_47C008);
  return printf("zhiju_information_crc5:                0x%02x\n", (unsigned __int8)byte_47C015);
}

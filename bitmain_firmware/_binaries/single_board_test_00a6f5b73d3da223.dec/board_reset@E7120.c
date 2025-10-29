void board_reset()
{
  board_reset_low();
  usleep((__useconds_t)&stru_1869C.st_value);
  board_reset_high();
}

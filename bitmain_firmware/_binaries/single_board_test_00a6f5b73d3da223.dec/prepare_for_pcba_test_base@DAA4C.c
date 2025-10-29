int __fastcall prepare_for_pcba_test_base(int a1, unsigned int *a2)
{
  unsigned int v5; // [sp+Ch] [bp+Ch]

  v5 = *a2;
  if ( *a2 <= 4 )
  {
    printf("%s: start to do prepare for pcba test\n", "prepare_for_pcba_test_base");
    *(_DWORD *)(a1 + 240) = sub_D9ED8(*(_DWORD *)(a1 + 296), 8u);
    (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), 8);
    sub_759E8(a1, 8);
    setup_clk(a1);
    set_debug_ctrl(a1, 19);
    get_special_core_reg(a1);
    set_safe_mode(a1, 42);
    disable_mac(a1);
    set_logic_core_id(a1);
    setup_mac_lane_cross(a1);
    phy_power_reset(a1);
    if ( v5 == 2 || v5 != 4 && v5 )
      setup_serdes_phy(a1);
    membist1(a1);
    set_dag_node_num(a1, 100663198);
    set_start_delay(a1, 65554);
    set_reset_to_normal(a1, 2);
    reverse_start_nonce(a1, 0);
    set_data_preemptive(a1, 1);
    set_nonce_num(a1, 0);
    setup_mac(a1);
    open_core_clk(a1);
    set_work_mode(a1, 0);
    set_work_timeout(a1, 1);
    sub_76B94(a1, 255, 127);
    set_core_bus_reset(a1);
    setup_count_sync(a1, 255);
    set_ticketmask(a1, 63);
    open_cores_by_work_num(a1);
    set_ticketmask(a1, 29);
    *(_BYTE *)(a1 + 145) = 1;
    *(_BYTE *)(a1 + 146) = 1;
    printf("%s: do prepare finished\n", "prepare_for_pcba_test_base");
    return 0;
  }
  else
  {
    printf("%s: error! wrong PHY sequence parameter\n", "prepare_for_pcba_test_base");
    return 6;
  }
}

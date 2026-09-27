
undefined4 security_check(void)

{
  undefined4 uVar1;
  undefined4 local_28;
  
  *(undefined4 *)PTR_DAT_06002188 = *(undefined4 *)PTR_DAT_06002184;
  (**(code **)PTR_DAT_0600218c)(0x40,PTR_LAB_06002190);
  (**(code **)PTR_DAT_06002194)(0xfffffffe,0);
  FUN_0600255c();
  FUN_06002594();
  FUN_060023e6();
  FUN_0600245c((short *)PTR_DAT_06002198,(int)DAT_0600217a,0);
  (**(code **)(int)DAT_0600217c)();
  (**(code **)(int)DAT_0600217e)
            (PTR_s_PRODUCED_BY_or_UNDERLICENSE_FROM_060021a0,PTR_s_SEGA_ENTERPRISES_LTD__0600219c);
  (*(code *)PTR_FUN_060021ac)(PTR_DAT_060021a8,PTR_DAT_060021a4,(int)DAT_06002180);
  if ((*(uint *)PTR_DAT_060021b0 & (int)DAT_06002182) == 0) {
    local_28 = (short *)PTR_DAT_06002250;
  }
  else {
    local_28 = (short *)PTR_DAT_060021b4;
  }
  FUN_06002486(local_28,DAT_0600224c,0x12,6);
  FUN_06002404((undefined2 *)PTR_DAT_06002258,(undefined2 *)PTR_DAT_06002254,0x10);
  FUN_06002280();
  if ((*(uint *)PTR_DAT_06002260 & (int)DAT_0600224e) == 0) {
    **(undefined2 **)PTR_DAT_0600225c = (short)PTR_DAT_0600226c;
    *(undefined4 *)PTR_DAT_06002268 = 0x78;
  }
  else {
    **(undefined2 **)PTR_DAT_0600225c = (short)PTR_DAT_06002264;
    *(undefined4 *)PTR_DAT_06002268 = 100;
  }
  FUN_06002510(0x20);
  (**(code **)PTR_DAT_06002270)();
  while (*(int *)PTR_DAT_06002268 != 0) {
    FUN_060023e6();
  }
  (**(code **)PTR_DAT_06002274)(0xffffffff,1);
  (**(code **)PTR_DAT_06002278)(0x40,0);
  FUN_06002348();
  uVar1 = (*(code *)PTR_FUN_0600227c)();
  return uVar1;
}


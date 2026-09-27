
undefined4 FUN_06002594(void)

{
  short sVar1;
  int iVar2;
  undefined2 *local_30;
  undefined2 *puStack_2c;
  uint uStack_8;
  
  FUN_0600245c(*(short **)PTR_DAT_060025d4,(int)DAT_060025c6,0);
  iVar2 = *(int *)PTR_DAT_060025d4;
  *(undefined2 *)(iVar2 + 0x20) = 1;
  puStack_2c = (undefined2 *)PTR_DAT_060025d8;
  local_30 = (undefined2 *)(iVar2 + 0x10);
  for (uStack_8 = 0; uStack_8 < 8; uStack_8 = uStack_8 + 1) {
    *local_30 = *puStack_2c;
    local_30 = local_30 + 1;
    puStack_2c = puStack_2c + 1;
  }
  iVar2 = *(int *)PTR_DAT_060026b4;
  *(short *)(iVar2 + 0x30) = (short)PTR_DAT_060026b8;
  *(undefined2 *)(iVar2 + 0x40) = DAT_060026aa;
  *(undefined2 *)(iVar2 + 0x42) = DAT_060026aa;
  iVar2 = *(int *)PTR_DAT_060026b4;
  *(undefined **)(iVar2 + 0x78) = PTR_DAT_060026bc;
  *(undefined **)(iVar2 + 0x7c) = PTR_DAT_060026bc;
  *(undefined **)(iVar2 + 0x88) = PTR_DAT_060026bc;
  *(undefined **)(iVar2 + 0x8c) = PTR_DAT_060026bc;
  *(int *)(iVar2 + 0xac) = (int)DAT_060026ac;
  *(undefined2 *)PTR_DAT_060026c0 = 0;
  *(undefined2 *)(*(int *)PTR_DAT_060026b4 + (int)DAT_060026ae) = 0x20;
  *(undefined2 *)(*(int *)PTR_DAT_060026b4 + (int)DAT_060026b0 + 8) = 7;
  iVar2 = *(int *)PTR_DAT_060026b4 + (int)DAT_060026b2;
  *(undefined2 *)(iVar2 + 0x10) = 1;
  sVar1 = DAT_060026b2;
  *(short *)(iVar2 + 0x18) = DAT_060026b2;
  *(short *)(iVar2 + 0x16) = sVar1;
  *(short *)(iVar2 + 0x14) = sVar1;
  return 1;
}


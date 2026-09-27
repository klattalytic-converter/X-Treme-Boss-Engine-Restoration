
int FUN_0600b0fc(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = _SmpcStatusBuf();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
    if (param_1 < 0x11) {
      *PTR_DAT_0600b164 = (char)param_1;
      puVar3 = FUN_0600a870(param_1);
      uVar2 = 0xffffffff;
      if (((puVar3[3] & 1) != 0) &&
         ((((uint)PTR_DAT_0600b168 & Onchip_BCR1) == 0 || (uVar2 = 0xffffffff, (puVar3[3] & 2) != 0)
          ))) {
        uVar2 = (**(code **)((int)&PTR_LAB_0600b148 + (int)(char)puVar3[1]))();
      }
    }
    iVar1 = FUN_0600a6c2(uVar2);
  }
  return iVar1;
}



uint _slMakeKtable(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_gbr;
  
  *(uint **)(unaff_gbr + 0x218) = param_1;
  iVar3 = (int)DAT_0600b800;
  do {
    *param_1 = 0xff000000;
    uVar1 = DAT_0600b7fc;
    iVar3 = iVar3 + -1;
    param_1 = param_1 + 1;
  } while (iVar3 != 0);
  iVar5 = (int)DAT_0600b802;
  uVar6 = 0x7f000000;
  iVar4 = (int)DAT_0600b804;
  iVar3 = iVar5;
  do {
    iVar3 = iVar3 + iVar5;
    Onchip_DVDNTH = 1;
    Onchip_DVDNTL = 0;
    uVar2 = Onchip_DVDNTUL & uVar1;
    if (0x1fffff < (int)uVar6) {
      uVar6 = uVar6 - 0x200000;
      uVar2 = uVar2 | uVar6 & 0x7f000000;
    }
    Onchip_DVSR = iVar3;
    *param_1 = uVar2;
    iVar4 = iVar4 + -1;
    param_1 = param_1 + 1;
  } while (iVar4 != 0);
  return uVar2;
}


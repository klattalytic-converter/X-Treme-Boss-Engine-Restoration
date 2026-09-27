
undefined4 _slKtableRB(uint param_1,ushort param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_gbr;
  
  *(ushort *)(unaff_gbr + 0x174) = *(ushort *)(unaff_gbr + 0x174) & 0xff | param_2 << 8;
  *(ushort *)PTR_DAT_0600bac8 = param_2;
  *(uint *)PTR_DAT_0600bacc = param_1;
  uVar2 = param_1 >> 1;
  if ((param_2 & 2) == 0) {
    uVar2 = param_1 >> 2;
  }
  *(ushort *)(unaff_gbr + 0x176) =
       *(ushort *)(unaff_gbr + 0x176) & 0xff | (ushort)((uVar2 >> 0x10 & 7) << 8);
  uVar2 = param_1 >> 1;
  if ((param_2 & 2) == 0) {
    uVar2 = param_1 >> 2;
  }
  *(uint *)(unaff_gbr + 0x2d8) = uVar2 << 0x10;
  if ((param_2 & 0x20) != 0) {
    uVar1 = (*(code *)PTR_FUN_0600bad0)(param_1,1);
    return uVar1;
  }
  return 0x20;
}


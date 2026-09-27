
undefined4 _slKtableRA(uint param_1,ushort param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  int unaff_gbr;
  
  *(ushort *)(unaff_gbr + 0x174) = *(ushort *)(unaff_gbr + 0x174) & 0xff00 | param_2;
  *(ushort *)PTR_DAT_0600b9b0 = param_2;
  *(uint *)(unaff_gbr + 0x27c) = param_1;
  uVar1 = (ushort)(param_1 >> 0x10);
  uVar3 = uVar1 >> 1;
  if ((param_2 & 2) == 0) {
    uVar3 = uVar1 >> 2;
  }
  *(ushort *)(unaff_gbr + 0x176) = *(ushort *)(unaff_gbr + 0x176) & 0xff00 | uVar3 & 7;
  uVar4 = param_1 >> 1;
  if ((param_2 & 2) == 0) {
    uVar4 = param_1 >> 2;
  }
  *(uint *)(unaff_gbr + 0x270) = uVar4 << 0x10;
  if ((param_2 & 0x20) != 0) {
    uVar2 = (*(code *)PTR_FUN_0600b9b4)(param_1,1);
    return uVar2;
  }
  return 0x20;
}


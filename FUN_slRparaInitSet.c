
undefined4 _slRparaInitSet(uint param_1)

{
  undefined4 uVar1;
  int unaff_gbr;
  
  *(uint *)(unaff_gbr + 0x214) = param_1;
  *(uint *)(unaff_gbr + 0x17c) = param_1 >> 1;
  *(undefined **)(unaff_gbr + 0x1e0) = PTR_DAT_0600b744;
  FUN_0600b74c();
  uVar1 = FUN_0600b74c();
  return uVar1;
}


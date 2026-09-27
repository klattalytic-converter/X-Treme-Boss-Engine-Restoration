
uint FUN_0600a924(uint param_1)

{
  bool bVar1;
  
  bVar1 = FUN_0600a770();
  if (!bVar1) {
    param_1 = param_1 | 0x30;
  }
  bVar1 = FUN_0600a77a();
  if (!bVar1) {
    param_1 = param_1 | 0xffffffc0;
  }
  return param_1;
}


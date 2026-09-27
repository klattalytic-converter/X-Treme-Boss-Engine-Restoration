
uint FUN_0600abb0(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_0600abd4;
  uVar2 = (uint)(char)*PTR_SMPC_SR_0600ae74;
  if ((uVar2 & 0x10) != 0) {
    uVar2 = 3;
    uVar3 = (int)(char)*PTR_DAT_0600abd4 + 1;
    if (2 < uVar3) {
      uVar3 = 0;
      uVar2 = (int)(char)*PTR_DAT_0600ae84 | 1;
      *PTR_DAT_0600ae84 = (char)uVar2;
    }
    *puVar1 = (char)uVar3;
  }
  return uVar2;
}


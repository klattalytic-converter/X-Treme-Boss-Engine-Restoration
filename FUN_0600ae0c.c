
void FUN_0600ae0c(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = 0;
  puVar5 = (uint *)PTR_DAT_0600ae60;
  iVar1 = _SmpcStatusBuf();
  if (iVar1 == 0) {
    iVar1 = func_0x0600ab3e();
    uVar2 = *puVar5;
    if ((iVar1 == 0) || (*PTR_DAT_0600ae80 != '\0')) {
      while (param_1 = (uint)(char)PTR_DAT_0600ae5c[uVar2], param_1 != 0xffffffff) {
        *puVar5 = uVar2 + 1 & 0x1f;
        puVar3 = FUN_0600a870(param_1);
        FUN_0600ae90(puVar3,uVar4);
        uVar2 = *puVar5;
      }
    }
    FUN_0600abb0();
    FUN_0600a6c2(param_1);
  }
  return;
}



undefined4 FUN_0600aaea(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_DAT_0600ae5c;
  uVar5 = 0xffffffff;
  if (param_2 == 0) {
    iVar3 = *(int *)PTR_DAT_0600ae64;
    uVar4 = iVar3 + 1U & 0x1f;
    uVar5 = 0xffffffff;
    if (uVar4 != *(uint *)PTR_DAT_0600ae60) {
      *(uint *)PTR_DAT_0600ae64 = uVar4;
      puVar1 = PTR_DAT_0600ab24;
      puVar2[uVar4] = 0xff;
      uVar5 = 0;
      puVar2[iVar3] = puVar1[4];
    }
  }
  return uVar5;
}


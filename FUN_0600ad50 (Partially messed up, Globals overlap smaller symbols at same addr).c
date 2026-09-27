
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0600ad50(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  
  (**(code **)PTR_DAT_0600ae68)((int)DAT_0600ae6c,(int)DAT_0600ae6e);
  uVar5 = 0;
  puVar6 = (uint *)PTR_DAT_0600ae60;
  iVar2 = _SmpcStatusBuf();
  if (iVar2 != 0) {
    return;
  }
  uVar3 = *puVar6;
  while (puVar4 = (undefined *)(int)(char)PTR_DAT_0600ae5c[uVar3], puVar4 != (undefined *)0xffffffff
        ) {
    *puVar6 = uVar3 + 1 & 0x1f;
    puVar4 = FUN_0600a870((uint)puVar4);
    FUN_0600ae90(puVar4,uVar5);
    if (-0x35 < _Onchip_FTCSR_part_h) break;
    uVar3 = *puVar6;
  }
  pbVar7 = PTR_DAT_0600ae84;
  iVar2 = func_0x0600ab3e();
  cVar1 = *PTR_DAT_0600ae80;
  *PTR_DAT_0600ae80 = 0;
  if (iVar2 != 0) {
    *pbVar7 = *pbVar7 ^ 4;
    if (cVar1 == '\0') {
      *PTR_DAT_0600ae04 = 0;
      *PTR_DAT_0600ae08 = 0;
      goto LAB_0600adf6;
    }
    FUN_0600ac78();
  }
  *(undefined4 *)PTR_DAT_0600ae7c = 0;
  FUN_0600acda();
  iVar2 = FUN_0600ab4a();
  if (iVar2 != 0) {
    *pbVar7 = *pbVar7 | 4;
    puVar4 = PTR_DAT_0600ae8c;
    *(undefined4 *)PTR_DAT_0600ae78 = 0;
    *puVar4 = 0;
    puVar4 = FUN_0600a870((int)(char)*PTR_DAT_0600b098);
    FUN_0600ae90(puVar4,uVar5);
  }
LAB_0600adf6:
  FUN_0600a6c2(puVar4);
  return;
}


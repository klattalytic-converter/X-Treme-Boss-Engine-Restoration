
void FUN_0600ac78(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  
  puVar3 = PTR_DAT_0600ad44;
  puVar2 = PTR_DAT_0600ad40;
  iVar6 = *(int *)PTR_DAT_0600ad48;
  *(undefined4 *)PTR_DAT_0600ad40 = *(undefined4 *)PTR_DAT_0600ae70;
  puVar4 = PTR_DAT_0600ad4c;
  *(int *)puVar3 = iVar6;
  bVar1 = *PTR_DAT_0600ae88;
  iVar6 = iVar6 + (uint)*(ushort *)puVar4 * 0xf;
  uVar5 = 0;
  if ((bVar1 & 3) != 3) {
    iVar6 = FUN_0600abd8((undefined4 *)puVar2,(int *)puVar3);
    uVar5 = (undefined1)iVar6;
    iVar6 = *(int *)puVar3;
  }
  puVar4 = PTR_DAT_0600ae04;
  *(int *)puVar3 = iVar6;
  *puVar4 = uVar5;
  uVar5 = 0;
  if ((bVar1 & 0xc) != 0xc) {
    iVar6 = FUN_0600abd8((undefined4 *)puVar2,(int *)puVar3);
    uVar5 = (undefined1)iVar6;
  }
  *PTR_DAT_0600ae08 = uVar5;
  return;
}



void FUN_0600acda(void)

{
  undefined *puVar1;
  bool bVar3;
  int iVar2;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar6 = (int *)PTR_DAT_0600ad44;
  puVar5 = (undefined4 *)PTR_DAT_0600ad40;
  iVar4 = *(int *)PTR_DAT_0600ad48;
  *(uint *)PTR_DAT_0600ad40 = *(int *)PTR_DAT_0600ae70 + (DAT_0600ad3c >> 1);
  puVar1 = PTR_DAT_0600ad4c;
  *piVar6 = iVar4;
  iVar4 = iVar4 + (uint)*(ushort *)puVar1 * 0xf;
  bVar3 = FUN_0600a770();
  if (!bVar3) {
    iVar2 = FUN_0600abd8(puVar5,piVar6);
    iVar4 = *piVar6;
    *PTR_DAT_0600ae04 = (char)iVar2;
  }
  *piVar6 = iVar4;
  bVar3 = FUN_0600a77a();
  if (!bVar3) {
    iVar4 = FUN_0600abd8(puVar5,piVar6);
    *PTR_DAT_0600ae08 = (char)iVar4;
  }
  return;
}


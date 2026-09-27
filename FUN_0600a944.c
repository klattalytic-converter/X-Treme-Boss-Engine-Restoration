
void FUN_0600a944(undefined1 param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = DAT_0600a994;
  iVar5 = *(int *)PTR_DAT_0600a998;
  iVar6 = *(int *)PTR_DAT_0600ab2c;
  *(int *)PTR_DAT_0600a998 = iVar5 + 7;
  uVar4 = DAT_0600a9aa;
  puVar3 = PTR_VDP2_HCNT_0600a9a0;
  iVar5 = iVar6 + iVar5 + 7 + (uVar2 >> 1);
  if ((DAT_0600a9a8 & *(ushort *)PTR_VDP2_TVSTAT_0600a99c) == 0) {
    *(undefined1 *)(iVar5 + -1) = 0;
    *(undefined1 *)(iVar5 + -2) = 0;
    *(undefined1 *)(iVar5 + -3) = 0;
    *(undefined1 *)(iVar5 + -4) = 0;
  }
  else {
    uVar1 = *(ushort *)PTR_VDP2_VCNT_0600a9a4 & DAT_0600a9aa;
    *(char *)(iVar5 + -1) = (char)uVar1;
    *(char *)(iVar5 + -2) = (char)(uVar1 >> 8);
    uVar1 = *(ushort *)puVar3;
    *(char *)(iVar5 + -3) = (char)(uVar1 & uVar4);
    *(char *)(iVar5 + -4) = (char)((uVar1 & uVar4) >> 8);
  }
  *(undefined1 *)(iVar5 + -5) = param_1;
  *(undefined1 *)(iVar5 + -6) = 0x25;
  *(undefined1 *)(iVar5 + -7) = 0xf1;
  return;
}


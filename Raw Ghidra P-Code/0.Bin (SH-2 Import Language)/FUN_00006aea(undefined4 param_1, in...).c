
undefined4 FUN_00006aea(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_00006e5c;
  uVar5 = 0xffffffff;
  if (param_2 == 0) {
    uVar3 = *DAT_00006e64;
    uVar4 = uVar3 + 1 & 0x1f;
    uVar5 = 0xffffffff;
    if (uVar4 != *DAT_00006e60) {
      *DAT_00006e64 = uVar4;
      iVar1 = DAT_00006b24;
      *(undefined1 *)(iVar2 + uVar4) = 0xff;
      uVar5 = 0;
      *(undefined1 *)(iVar2 + uVar3) = *(undefined1 *)(iVar1 + 4);
    }
  }
  return uVar5;
}


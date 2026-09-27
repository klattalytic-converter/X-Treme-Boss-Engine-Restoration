
undefined4 _slPopMatrix(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int unaff_gbr;
  
  if (*(char *)(unaff_gbr + 0x20) < '\x14') {
    *(char *)(unaff_gbr + 0x20) = *(char *)(unaff_gbr + 0x20) + '\x01';
    puVar1 = *(undefined4 **)(unaff_gbr + 0x1c);
    puVar6 = puVar1 + 0xc;
    iVar7 = 3;
    do {
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar1 = puVar1 + 4;
      *puVar6 = uVar2;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + 4;
    } while (iVar7 != 0);
    *(undefined4 **)(unaff_gbr + 0x1c) = puVar1;
    return 1;
  }
  return 0;
}


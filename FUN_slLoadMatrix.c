
undefined4 * _slLoadMatrix(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_gbr;
  
  puVar1 = *(undefined4 **)(unaff_gbr + 0x1c);
  iVar5 = 4;
  do {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    param_1 = param_1 + 3;
    *puVar1 = uVar2;
    puVar1[4] = uVar3;
    puVar1[8] = uVar4;
    iVar5 = iVar5 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar5 != 0);
  return puVar1;
}


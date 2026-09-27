
undefined4 * _slGetMatrix(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_gbr;
  
  puVar1 = *(undefined4 **)(unaff_gbr + 0x1c);
  iVar6 = 3;
  do {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar1 = puVar1 + 4;
    *param_1 = uVar2;
    param_1[3] = uVar3;
    param_1[6] = uVar4;
    param_1[9] = uVar5;
    iVar6 = iVar6 + -1;
    param_1 = param_1 + 1;
  } while (iVar6 != 0);
  return puVar1;
}


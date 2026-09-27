
void _slLight(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gbr;
  
  puVar2 = *(undefined4 **)(unaff_gbr + 0x48);
  iVar3 = *param_1;
  iVar4 = param_1[1];
  iVar5 = param_1[2];
  puVar2[1] = -iVar3;
  *(int *)(unaff_gbr + 0x4c) = -iVar3;
  puVar2[2] = -iVar4;
  *(int *)(unaff_gbr + 0x50) = -iVar4;
  puVar2[3] = -iVar5;
  *(int *)(unaff_gbr + 0x54) = -iVar5;
  *puVar2 = 0x24;
  puVar2 = puVar2 + 4;
  *puVar2 = 0;
  puVar1 = PTR_DAT_060046fc;
  *(undefined4 **)(unaff_gbr + 0x48) = puVar2;
  *(short *)puVar1 = (short)puVar2;
  return;
}


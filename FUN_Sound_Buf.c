
void _Sound_Buf(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_gbr;
  
  do {
  } while ((*(ushort *)PTR_VDP2_TVSTAT_06008c50 & 2) == 0);
  *(char *)(unaff_gbr + 0x13) = *(char *)(unaff_gbr + 0x12) + -1;
  if ((*(byte *)(unaff_gbr + 0xb0) & 0x10) != 0) {
    FUN_06008a42();
    return;
  }
  *(undefined2 *)(PTR_VDP1_TVMR_06008b30 + 2) = 0;
  *(undefined1 *)(unaff_gbr + 0xa8) = 0;
  *(undefined1 *)(unaff_gbr + 0xa6) = 0;
  puVar2 = *(undefined4 **)(unaff_gbr + 0x48);
  *puVar2 = 4;
  puVar2[1] = 0x2c;
  puVar1 = PTR_DAT_06008b34;
  *(undefined4 **)(unaff_gbr + 0x48) = puVar2 + 1;
  *(short *)puVar1 = (short)(puVar2 + 1);
  FUN_06008b38();
  FUN_06008b56();
  FUN_06008bae();
  do {
    (**(code **)(unaff_gbr + 0x3b4))();
  } while (-1 < *(char *)(unaff_gbr + 0x13));
  uVar5 = *(uint *)PTR_PTR_06008c6c;
  iVar4 = *(int *)PTR_PTR_06008c70;
  uVar3 = *(uint *)(unaff_gbr + 0x40) ^ uVar5 >> 1;
  *(uint *)(unaff_gbr + 0x40) = uVar3;
  *(uint *)(unaff_gbr + 0x30) = uVar3 + iVar4 + (uVar5 >> 1) + -0x24;
  *(int *)(unaff_gbr + 0x24) = *(int *)PTR_PTR_06008c54 + 0x10;
  puVar1 = PTR_DAT_06008b34;
  uVar3 = *(uint *)PTR_PTR_06008c64 | (uint)PTR_DAT_06008c68;
  *(uint *)(unaff_gbr + 0x48) = uVar3;
  *(short *)puVar1 = (short)uVar3;
  *(undefined4 *)(unaff_gbr + 0x74) = 0;
  *(undefined2 *)(unaff_gbr + 0xaa) = 0;
  puVar1 = PTR_DAT_06008c58;
  *(int *)(unaff_gbr + 0x24) = *(int *)PTR_PTR_06008c54 + 0x10;
  uVar6 = *(uint *)(puVar1 + 0xc);
  *(char *)(unaff_gbr + 0xac) = (char)*(undefined2 *)(puVar1 + 0x1e);
  uVar7 = *(uint *)(puVar1 + 0x14);
  *(undefined2 *)(unaff_gbr + 0x70) = *(undefined2 *)(puVar1 + 0x1c);
  uVar5 = *(uint *)(puVar1 + 0x38);
  *(undefined4 *)(unaff_gbr + 0x68) = *(undefined4 *)(puVar1 + 0x24);
  uVar3 = *(uint *)(unaff_gbr + 0x304);
  iVar4 = (uVar5 >> 0x10) - (uVar6 >> 0x10);
  *(uint *)(unaff_gbr + 0x90) = iVar4 * 0x10000 | uVar5 - uVar6 & 0xffff;
  *(uint *)(unaff_gbr + 0x98) =
       (iVar4 + uVar3) * 0x10000 | uVar3 + (uVar5 - uVar6) * 0x10000 >> 0x10;
  *(undefined **)(unaff_gbr + 0x84) = &UNK_00010001 + (uVar7 - uVar6);
  *(undefined **)(unaff_gbr + 0x8c) =
       &UNK_00010001 + (uVar7 - uVar6) + (uVar3 << 0x10 | uVar3 >> 0x10) * 2;
  *(uint *)(unaff_gbr + 0x7c) =
       ((uVar7 >> 0x10) - (uVar5 >> 0x10)) * 0x10000 | uVar7 - uVar5 & 0xffff;
  *(uint *)(unaff_gbr + 0x78) =
       ((uVar6 >> 0x10) - (uVar5 >> 0x10)) * 0x10000 | uVar6 - uVar5 & 0xffff;
  *(undefined2 *)(unaff_gbr + 0x72) = 0;
  *(undefined2 *)(unaff_gbr + 0xa2) = 0;
  FUN_06008b56();
  *(char *)(unaff_gbr + 0x13) = *(char *)(unaff_gbr + 0x13) + *(char *)(unaff_gbr + 0x12);
  return;
}


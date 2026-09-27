
void _slMapNbg1(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  int unaff_gbr;
  
  *(uint *)(unaff_gbr + 0x200) = param_1;
  uVar4 = 0xb;
  bVar1 = (DAT_0600bba2 & *(ushort *)(unaff_gbr + 0xf2)) == 0;
  if (bVar1) {
    uVar4 = 0xc;
  }
  if (((uint)(int)*(short *)(unaff_gbr + 0xe8) >> 8 & 1) == 0) {
    uVar4 = uVar4 + 2;
  }
  uVar2 = uVar4 + 6;
  uVar3 = param_1;
  if ((uVar2 & 0x10) != 0) {
    uVar3 = param_1 >> 0x10;
  }
  if ((uVar2 & 8) != 0) {
    uVar3 = uVar3 >> 8;
  }
  if ((uVar2 & 4) != 0) {
    uVar3 = uVar3 >> 4;
  }
  if ((uVar2 & 2) != 0) {
    uVar3 = uVar3 >> 2;
  }
  if (!bVar1) {
    uVar3 = uVar3 >> 1;
  }
  *(byte *)(unaff_gbr + 0xfd) = *(byte *)(unaff_gbr + 0xfd) & 0xf | (byte)((uVar3 & 7) << 4);
  if ((uVar4 & 0x10) != 0) {
    param_1 = param_1 >> 0x10;
    param_2 = param_2 >> 0x10;
    param_3 = param_3 >> 0x10;
    param_4 = param_4 >> 0x10;
  }
  if ((uVar4 & 8) != 0) {
    param_1 = param_1 >> 8;
    param_2 = param_2 >> 8;
    param_3 = param_3 >> 8;
    param_4 = param_4 >> 8;
  }
  if ((uVar4 & 4) != 0) {
    param_1 = param_1 >> 4;
    param_2 = param_2 >> 4;
    param_3 = param_3 >> 4;
    param_4 = param_4 >> 4;
  }
  if ((uVar4 & 2) != 0) {
    param_1 = param_1 >> 2;
    param_2 = param_2 >> 2;
    param_3 = param_3 >> 2;
    param_4 = param_4 >> 2;
  }
  uVar6 = (ushort)param_3;
  uVar5 = (ushort)param_1;
  if (!bVar1) {
    uVar5 = (ushort)(param_1 >> 1);
    param_2 = param_2 >> 1;
    uVar6 = (ushort)(param_3 >> 1);
    param_4 = param_4 >> 1;
  }
  *(ushort *)(unaff_gbr + 0x104) = uVar5 & 0x3f | (ushort)((param_2 & 0x3f) << 8);
  *(ushort *)(unaff_gbr + 0x106) = uVar6 & 0x3f | (ushort)((param_4 & 0x3f) << 8);
  return;
}


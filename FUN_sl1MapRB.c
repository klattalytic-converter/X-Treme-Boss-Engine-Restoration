
void _sl1MapRB(uint param_1)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_gbr;
  
  *(uint *)(unaff_gbr + 0x210) = param_1;
  (*(code *)PTR_FUN_0600ba64)(param_1,2);
  uVar5 = 0xb;
  bVar1 = (DAT_0600ba60 & *(ushort *)(unaff_gbr + 0xf8)) == 0;
  if (bVar1) {
    uVar5 = 0xc;
  }
  if (((uint)(int)*(short *)(unaff_gbr + 0xea) >> 8 & 1) == 0) {
    uVar5 = uVar5 + 2;
  }
  uVar2 = uVar5 + 6;
  uVar4 = param_1;
  if ((uVar2 & 0x10) != 0) {
    uVar4 = param_1 >> 0x10;
  }
  if ((uVar2 & 8) != 0) {
    uVar4 = uVar4 >> 8;
  }
  if ((uVar2 & 4) != 0) {
    uVar4 = uVar4 >> 4;
  }
  if ((uVar2 & 2) != 0) {
    uVar4 = uVar4 >> 2;
  }
  if (!bVar1) {
    uVar4 = uVar4 >> 1;
  }
  *(byte *)(unaff_gbr + 0xff) = *(byte *)(unaff_gbr + 0xff) & 0xf | (byte)((uVar4 & 7) << 4);
  if ((uVar5 & 0x10) != 0) {
    param_1 = param_1 >> 0x10;
  }
  if ((uVar5 & 8) != 0) {
    param_1 = param_1 >> 8;
  }
  if ((uVar5 & 4) != 0) {
    param_1 = param_1 >> 4;
  }
  if ((uVar5 & 2) != 0) {
    param_1 = param_1 >> 2;
  }
  if (!bVar1) {
    param_1 = param_1 >> 1;
  }
  uVar3 = (ushort)((param_1 & 0x3f) << 8) | (ushort)(param_1 & 0x3f);
  *(ushort *)(unaff_gbr + 0x120) = uVar3;
  *(ushort *)(unaff_gbr + 0x122) = uVar3;
  *(ushort *)(unaff_gbr + 0x124) = uVar3;
  *(ushort *)(unaff_gbr + 0x126) = uVar3;
  *(ushort *)(unaff_gbr + 0x128) = uVar3;
  *(ushort *)(unaff_gbr + 0x12a) = uVar3;
  *(ushort *)(unaff_gbr + 300) = uVar3;
  *(ushort *)(unaff_gbr + 0x12e) = uVar3;
  return;
}



void rbank_set(uint param_1)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int unaff_gbr;
  
  *(uint *)(unaff_gbr + 0x20c) = param_1;
  FUN_0600b912(param_1,2);
  uVar6 = 0xb;
  bVar1 = (DAT_0600b910 & *(ushort *)(unaff_gbr + 0xf8)) == 0;
  if (bVar1) {
    uVar6 = 0xc;
  }
  if (((uint)(int)*(short *)(unaff_gbr + 0xea) >> 8 & 1) == 0) {
    uVar6 = uVar6 + 2;
  }
  uVar2 = uVar6 + 6;
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
  bVar5 = (byte)uVar4;
  if (!bVar1) {
    bVar5 = (byte)(uVar4 >> 1);
  }
  *(byte *)(unaff_gbr + 0xff) = *(byte *)(unaff_gbr + 0xff) & 0xf0 | bVar5 & 7;
  if ((uVar6 & 0x10) != 0) {
    param_1 = param_1 >> 0x10;
  }
  if ((uVar6 & 8) != 0) {
    param_1 = param_1 >> 8;
  }
  if ((uVar6 & 4) != 0) {
    param_1 = param_1 >> 4;
  }
  if ((uVar6 & 2) != 0) {
    param_1 = param_1 >> 2;
  }
  if (!bVar1) {
    param_1 = param_1 >> 1;
  }
  uVar3 = (ushort)((param_1 & 0x3f) << 8) | (ushort)(param_1 & 0x3f);
  *(ushort *)(unaff_gbr + 0x110) = uVar3;
  *(ushort *)(unaff_gbr + 0x112) = uVar3;
  *(ushort *)(unaff_gbr + 0x114) = uVar3;
  *(ushort *)(unaff_gbr + 0x116) = uVar3;
  *(ushort *)(unaff_gbr + 0x118) = uVar3;
  *(ushort *)(unaff_gbr + 0x11a) = uVar3;
  *(ushort *)(unaff_gbr + 0x11c) = uVar3;
  *(ushort *)(unaff_gbr + 0x11e) = uVar3;
  return;
}


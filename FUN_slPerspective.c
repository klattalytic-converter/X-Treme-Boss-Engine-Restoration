
void _slPerspective(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  int unaff_gbr;
  
  Onchip_DVSR = (*(code *)PTR__slTan_060089fc)(param_1 >> 1);
  if (Onchip_DVSR < 0) {
    Onchip_DVSR = -Onchip_DVSR;
  }
  Onchip_DVDNTH = (int)(short)(*(ushort *)(unaff_gbr + 0x80) >> 1);
  Onchip_DVDNTL = (uint)*(ushort *)(unaff_gbr + 0x80) << 0x1f;
  puVar2 = *(undefined4 **)(unaff_gbr + 0x48);
  *puVar2 = 0xc;
  uVar4 = Onchip_DVDNTUL;
  puVar2[1] = Onchip_DVDNTUL;
  *(uint *)(unaff_gbr + 0x68) = uVar4;
  puVar2 = puVar2 + 2;
  *puVar2 = 0;
  puVar1 = PTR_DAT_06008a04;
  *(undefined4 **)(unaff_gbr + 0x48) = puVar2;
  *(short *)puVar1 = (short)puVar2;
  puVar1 = PTR_DAT_06008a00;
  if ((*(byte *)(unaff_gbr + 0xb0) & 8) != 0) {
    uVar4 = uVar4 >> 1;
  }
  uVar3 = (undefined2)(uVar4 >> 0x10);
  *(undefined2 *)PTR_DAT_06008a00 = uVar3;
  *(undefined2 *)(puVar1 + 8) = uVar3;
  *(undefined2 *)(puVar1 + 0x68) = uVar3;
  *(undefined2 *)(puVar1 + 0x70) = uVar3;
  return;
}


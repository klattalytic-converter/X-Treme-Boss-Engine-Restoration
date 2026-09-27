
void _slPageNbg0(uint param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  int unaff_gbr;
  
  (*(code *)PTR_FUN_0600b870)(param_1,3);
  *(uint *)(PTR_DAT_0600b868 + 0x14) = param_1;
  uVar1 = param_2 >> 9;
  if (((uint)(int)*(short *)(unaff_gbr + 0xce) >> 8 & 0x20) != 0) {
    uVar1 = param_2 >> 10;
  }
  *(ushort *)(PTR_DAT_0600b86c + 0x38) =
       (ushort)((param_1 & 0x7fffffff) >> 0xf) & 0x1f | param_3 | (ushort)((uVar1 & 7) << 5);
  return;
}


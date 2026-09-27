
undefined4 _slUnitMatrix(void)

{
  int unaff_gbr;
  
  *(undefined1 *)(unaff_gbr + 0x20) = 0;
  *(undefined4 **)(unaff_gbr + 0x1c) = &DAT_06004130;
  DAT_06004130 = 0x10000;
  DAT_06004140 = 0;
  DAT_06004150 = 0;
  DAT_06004134 = 0;
  DAT_06004144 = 0x10000;
  DAT_06004154 = 0;
  DAT_06004138 = 0;
  DAT_06004148 = 0;
  DAT_06004158 = 0x10000;
  DAT_0600413c = 0;
  DAT_0600414c = 0;
  DAT_0600415c = 0;
  return 1;
}


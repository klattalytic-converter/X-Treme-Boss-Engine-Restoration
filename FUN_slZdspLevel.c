
undefined4 _slZdspLevel(uint param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int unaff_gbr;
  
  if ((0 < (int)param_1) && (param_1 < 8)) {
    *(char *)(unaff_gbr + 0xac) = (char)param_1;
    puVar2 = *(undefined4 **)(unaff_gbr + 0x48);
    *puVar2 = 0x34;
    puVar2[1] = param_1;
    puVar2 = puVar2 + 2;
    *puVar2 = 0;
    puVar1 = PTR_DAT_06008994;
    *(undefined4 **)(unaff_gbr + 0x48) = puVar2;
    *(short *)puVar1 = (short)puVar2;
    return 1;
  }
  return 0;
}


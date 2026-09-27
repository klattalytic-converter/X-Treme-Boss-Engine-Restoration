
void _slCurRpara(int param_1)

{
  undefined *puVar1;
  int unaff_gbr;
  
  puVar1 = PTR_DAT_06008de4;
  if (param_1 != 0) {
    puVar1 = PTR_DAT_06008de4 + 0x68;
  }
  *(undefined **)(unaff_gbr + 0x1e0) = puVar1;
  return;
}


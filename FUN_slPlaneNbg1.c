
void _slPlaneNbg1(char param_1)

{
  int unaff_gbr;
  
  *(byte *)(unaff_gbr + 0xfb) = *(byte *)(unaff_gbr + 0xfb) & 0xf3 | param_1 << 2;
  return;
}


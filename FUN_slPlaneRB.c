
void _slPlaneRB(char param_1)

{
  int unaff_gbr;
  
  *(byte *)(unaff_gbr + 0xfa) = *(byte *)(unaff_gbr + 0xfa) & 0xcf | param_1 << 4;
  return;
}


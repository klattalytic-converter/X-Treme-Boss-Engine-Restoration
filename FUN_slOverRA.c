
void _slOverRA(char param_1)

{
  int unaff_gbr;
  
  *(byte *)(unaff_gbr + 0xfa) = *(byte *)(unaff_gbr + 0xfa) & 0xf3 | param_1 << 2;
  return;
}


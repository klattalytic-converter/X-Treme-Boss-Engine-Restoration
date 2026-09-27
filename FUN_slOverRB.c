
void _slOverRB(char param_1)

{
  int unaff_gbr;
  
  *(byte *)(unaff_gbr + 0xfa) = *(byte *)(unaff_gbr + 0xfa) & 0x3f | param_1 << 6;
  return;
}


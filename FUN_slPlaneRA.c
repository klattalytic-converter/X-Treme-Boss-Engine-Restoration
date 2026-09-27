
void _slPlaneRA(byte param_1)

{
  int unaff_gbr;
  
  *(byte *)(unaff_gbr + 0xfa) = *(byte *)(unaff_gbr + 0xfa) & 0xfc | param_1;
  return;
}


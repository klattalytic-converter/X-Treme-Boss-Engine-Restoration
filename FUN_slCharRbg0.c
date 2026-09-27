
void _slCharRbg0(byte param_1,byte param_2)

{
  int unaff_gbr;
  
  *(byte *)(unaff_gbr + 0xea) = param_1 | param_2;
  return;
}


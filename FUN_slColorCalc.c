
void _slColorCalc(ushort param_1)

{
  int unaff_gbr;
  
  *(ushort *)(unaff_gbr + 0x1ac) = *(ushort *)(unaff_gbr + 0x1ac) & DAT_0600bbbc | param_1;
  return;
}


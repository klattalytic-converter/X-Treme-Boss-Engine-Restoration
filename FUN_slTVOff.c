
void _slTVOff(void)

{
  int unaff_gbr;
  
  *(ushort *)(unaff_gbr + 0xc0) = *(ushort *)(unaff_gbr + 0xc0) | DAT_06008a20;
  return;
}


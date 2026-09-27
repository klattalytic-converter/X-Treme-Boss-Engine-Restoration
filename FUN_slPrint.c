
undefined4 _slPrint(byte *param_1,ushort *param_2)

{
  byte bVar1;
  char cVar2;
  int unaff_gbr;
  
  cVar2 = *(char *)(unaff_gbr + 0x21);
  while( true ) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    if (bVar1 == 0) break;
    *param_2 = (ushort)bVar1 * 2 | (short)cVar2 << 8;
    param_2 = param_2 + 1;
  }
  return 0;
}


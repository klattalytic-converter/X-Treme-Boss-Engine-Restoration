
int _SmpcStatusBuf(void)

{
  byte bVar1;
  
  bVar1 = *PTR_DAT_0600a6cc;
  *PTR_DAT_0600a6cc = bVar1 | 0x80;
  return (bVar1 == 0) - 1;
}


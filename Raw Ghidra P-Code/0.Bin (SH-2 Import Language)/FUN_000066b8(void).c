
int FUN_000066b8(void)

{
  byte bVar1;
  
  bVar1 = *DAT_000066cc;
  *DAT_000066cc = bVar1 | 0x80;
  return (bVar1 == 0) - 1;
}


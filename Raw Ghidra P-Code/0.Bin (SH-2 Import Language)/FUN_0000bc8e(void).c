
undefined4 FUN_0000bc8e(void)

{
  byte bVar1;
  int iVar2;
  int unaff_gbr;
  
  bVar1 = *(byte *)(unaff_gbr + 0xbd);
  while (iVar2 = 0x30, (bVar1 & 4) == 0) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    bVar1 = *(byte *)(unaff_gbr + 0xbd);
  }
  return 0x30;
}


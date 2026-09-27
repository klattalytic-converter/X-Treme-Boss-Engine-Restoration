
undefined4 FUN_0600aa14(void)

{
  short sVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)PTR_DAT_0600ad48;
  sVar1 = *(short *)PTR_DAT_0600ad4c;
  iVar2 = 0x1e;
  do {
    *puVar3 = 0xff;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + sVar1;
  } while (iVar2 != 0);
  return 0xffffffff;
}


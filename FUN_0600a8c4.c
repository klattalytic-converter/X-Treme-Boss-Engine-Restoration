
undefined4 FUN_0600a8c4(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = FUN_0600a770();
  if (bVar1) {
    bVar2 = FUN_0600a6d0();
    if (bVar2 != 0) {
      return 0xffffffff;
    }
    bVar1 = FUN_0600a7f4();
    if (!bVar1) {
      return 0xffffffff;
    }
  }
  bVar1 = FUN_0600a77a();
  if (bVar1) {
    bVar2 = FUN_0600a6d8();
    if (bVar2 != 0) {
      return 0xffffffff;
    }
    bVar1 = FUN_0600a7fe();
    if (!bVar1) {
      return 0xffffffff;
    }
  }
  return 0;
}


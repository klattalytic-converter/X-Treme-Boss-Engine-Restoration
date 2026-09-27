
void FUN_0600a9ac(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = (int)(char)*PTR_DAT_0600aa10;
  bVar1 = FUN_0600a770();
  if (!bVar1) {
    if (iVar3 == 0) {
      FUN_0600a808(0);
    }
    else {
      FUN_0600a808(1);
      bVar2 = FUN_0600a744();
      FUN_0600a944(bVar2);
    }
  }
  bVar1 = FUN_0600a77a();
  if (!bVar1) {
    if (iVar3 == 1) {
      FUN_0600a838(0);
    }
    else {
      FUN_0600a838(1);
      bVar2 = FUN_0600a74c();
      FUN_0600a944(bVar2);
    }
  }
  return;
}


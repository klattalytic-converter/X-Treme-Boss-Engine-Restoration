
int FUN_0600a7b8(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = _SmpcStatusBuf();
  if (iVar2 == 0) {
    iVar2 = FUN_0600ab4a();
    puVar1 = PTR_SMPC_IOSEL1_0600a7f0;
    if (iVar2 == 0) {
      bVar3 = *PTR_DAT_0600a7ec | 2;
      if ((param_1 & 0xff) != 0) {
        bVar3 = bVar3 ^ 2;
      }
      *PTR_DAT_0600a7ec = bVar3;
      *puVar1 = bVar3;
      iVar2 = 0;
    }
    iVar2 = FUN_0600a6c2(iVar2);
  }
  return iVar2;
}


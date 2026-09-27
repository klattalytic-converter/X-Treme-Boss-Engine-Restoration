
int FUN_0600aef2(uint param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = _SmpcStatusBuf();
  if (iVar1 == 0) {
    bVar2 = *PTR_DAT_0600b0a0 | 2;
    if ((param_1 & 0xff) != 0) {
      bVar2 = bVar2 ^ 2;
    }
    *PTR_DAT_0600b0a0 = bVar2;
    iVar1 = FUN_0600a6c2(0);
  }
  return iVar1;
}


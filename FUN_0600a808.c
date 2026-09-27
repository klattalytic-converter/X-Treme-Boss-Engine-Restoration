
int FUN_0600a808(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = _SmpcStatusBuf();
  if (iVar2 == 0) {
    FUN_0600ab4a();
    puVar1 = PTR_SMPC_EXLE1_0600a86c;
    bVar3 = *PTR_DAT_0600a868 | 1;
    if ((param_1 & 0xff) != 0) {
      bVar3 = bVar3 ^ 1;
    }
    *PTR_DAT_0600a868 = bVar3;
    *puVar1 = bVar3;
    iVar2 = FUN_0600a6c2(0);
  }
  return iVar2;
}


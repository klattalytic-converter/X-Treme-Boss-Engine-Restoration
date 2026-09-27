
int FUN_0600a70a(byte param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = _SmpcStatusBuf();
  if (iVar2 == 0) {
    iVar2 = FUN_0600ab4a();
    puVar1 = PTR_SMPC_DDR2_0600a740;
    if (iVar2 == 0) {
      *PTR_DAT_0600a738 = param_1 & 0x7f;
      *puVar1 = param_1 & 0x7f;
      iVar2 = 0;
    }
    iVar2 = FUN_0600a6c2(iVar2);
  }
  return iVar2;
}


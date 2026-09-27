
int FUN_0600a6e0(byte param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = _SmpcStatusBuf();
  if (iVar2 == 0) {
    iVar2 = FUN_0600ab4a();
    puVar1 = PTR_SMPC_DDR1_0600a73c;
    if (iVar2 == 0) {
      *PTR_DAT_0600a734 = param_1 & 0x7f;
      *puVar1 = param_1 & 0x7f;
      iVar2 = 0;
    }
    iVar2 = FUN_0600a6c2(iVar2);
  }
  return iVar2;
}


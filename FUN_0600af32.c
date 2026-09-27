
int FUN_0600af32(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = _SmpcStatusBuf();
  if (iVar1 == 0) {
    uVar3 = param_1 & 0xff;
    uVar2 = 0xffffffff;
    if (uVar3 != 2) {
      if (3 < uVar3) {
        uVar3 = 0;
      }
      *PTR_DAT_0600b0a0 = *PTR_DAT_0600b0a0 & 0xcf | (byte)(uVar3 << 4) & 0x30;
      uVar2 = 0;
    }
    iVar1 = FUN_0600a6c2(uVar2);
  }
  return iVar1;
}


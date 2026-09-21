
uint FUN_00006bb0(void)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  pcVar1 = DAT_00006bd4;
  uVar2 = (uint)*DAT_00006e74;
  if ((uVar2 & 0x10) != 0) {
    uVar2 = 3;
    uVar3 = (int)*DAT_00006bd4 + 1;
    if (2 < uVar3) {
      uVar3 = 0;
      uVar2 = (int)*DAT_00006e84 | 1;
      *DAT_00006e84 = (char)uVar2;
    }
    *pcVar1 = (char)uVar3;
  }
  return uVar2;
}


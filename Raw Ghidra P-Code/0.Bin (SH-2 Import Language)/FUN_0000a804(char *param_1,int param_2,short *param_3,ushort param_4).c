
uint FUN_0000a804(char *param_1,int param_2,short *param_3,ushort param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar6 = 8;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar5 = 4;
      uVar4 = (int)cVar1 << 0x18;
      do {
        uVar2 = uVar4 & 0x80000000;
        uVar3 = uVar4 & 0x40000000;
        uVar4 = uVar4 << 2;
        *param_3 = (ushort)(uVar2 != 0) * 0x100 + param_4 * 0x100 + (ushort)(uVar3 != 0) +
                   (param_4 & 0xff);
        iVar5 = iVar5 + -1;
        param_3 = param_3 + 1;
      } while (iVar5 != 0);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return uVar4;
}


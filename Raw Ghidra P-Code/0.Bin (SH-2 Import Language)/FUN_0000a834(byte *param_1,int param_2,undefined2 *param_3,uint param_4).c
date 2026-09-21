
int FUN_0000a834(byte *param_1,int param_2,undefined2 *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  do {
    iVar4 = 8;
    do {
      iVar3 = 4;
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        iVar2 = ((int)(char)bVar1 & 0xfU | (uint)(bVar1 >> 4) << 8) +
                ((param_4 & 0xff) << 8 | param_4 & 0xff);
        *param_3 = (short)iVar2;
        iVar3 = iVar3 + -1;
        param_3 = param_3 + 1;
      } while (iVar3 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return iVar2;
}


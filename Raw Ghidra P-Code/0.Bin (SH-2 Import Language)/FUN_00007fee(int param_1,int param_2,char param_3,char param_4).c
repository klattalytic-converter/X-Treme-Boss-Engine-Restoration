
void FUN_00007fee(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char unaff_r8;
  char unaff_r9;
  char *unaff_r10;
  char *pcVar3;
  char unaff_r11;
  
  iVar2 = param_1;
  pcVar3 = unaff_r10;
  do {
    *pcVar3 = -2;
    pcVar3[1] = param_3;
    pcVar3[2] = param_4;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar3 + 4;
    iVar1 = param_2;
  } while (iVar2 != 0);
  do {
    do {
      *pcVar3 = (char)unaff_r10 - unaff_r11;
      pcVar3[1] = unaff_r8;
      pcVar3[2] = unaff_r9;
      iVar1 = iVar1 + -1;
      pcVar3 = pcVar3 + 4;
    } while (iVar1 != 0);
    param_1 = param_1 + -1;
    unaff_r10 = unaff_r10 + 4;
    iVar1 = param_2;
  } while (param_1 != 0);
  return;
}



int _slCheckOnScreen0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_gbr;
  int iVar4;
  
  iVar1 = *(int *)(unaff_gbr + 0x1c);
  uVar2 = *(uint *)(unaff_gbr + 0x68);
  Onchip_DVSR = *(int *)(iVar1 + 0x2c);
  iVar3 = (int)*(char *)(unaff_gbr + 0xac);
  Onchip_DVDNTH = (int)(short)(uVar2 >> 0x10);
  Onchip_DVDNTL = uVar2 << 0x10;
  do {
    iVar3 = iVar3 + -1;
    uVar2 = uVar2 >> 1;
  } while (iVar3 != 0);
  if ((int)uVar2 <= Onchip_DVSR) {
    if (Onchip_DVSR - uVar2 <= (uint)((int)*(short *)(unaff_gbr + 0x70) << 0x10)) {
      iVar4 = (int)((ulonglong)((longlong)Onchip_DVDNTUL * (longlong)(param_1 >> 1)) >> 0x20);
      iVar3 = (int)((ulonglong)((longlong)Onchip_DVDNTUL * (longlong)*(int *)(iVar1 + 0xc)) >> 0x20)
              - iVar4;
      if ((iVar3 <= *(short *)(unaff_gbr + 0x7c)) &&
         ((int)*(short *)(unaff_gbr + 0x78) <= iVar3 + iVar4 * 2)) {
        iVar1 = (int)((ulonglong)((longlong)Onchip_DVDNTUL * (longlong)*(int *)(iVar1 + 0x1c)) >>
                     0x20) - iVar4;
        if ((iVar1 <= *(short *)(unaff_gbr + 0x7e)) &&
           ((int)*(short *)(unaff_gbr + 0x7a) <= iVar1 + iVar4 * 2)) {
          return Onchip_DVSR;
        }
      }
    }
    return -2;
  }
  return -1;
}


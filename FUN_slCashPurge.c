
void _slCashPurge(uint param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  int unaff_gbr;
  
  if (param_3 != 0) {
    do {
    } while ((Onchip_CHCR0 & 3) == 1);
    uVar1 = param_1 | (uint)param_2 | param_3;
    if ((uVar1 & 0xf) == 0) {
      Onchip_CHCR0 = (uint)DAT_060040ae;
      param_3 = param_3 >> 2;
    }
    else if ((uVar1 & 3) == 0) {
      Onchip_CHCR0 = (uint)DAT_060040ac;
      param_3 = param_3 >> 2;
    }
    else if ((uVar1 & 1) == 0) {
      Onchip_CHCR0 = (uint)DAT_060040aa;
      param_3 = param_3 >> 1;
    }
    else {
      Onchip_CHCR0 = (uint)DAT_060040a8;
    }
    DAT_fffffe71 = 0;
    Onchip_SAR0 = param_1;
    Onchip_DAR0 = param_2;
    Onchip_TCR0 = param_3;
    *(undefined1 *)(unaff_gbr + 0xb9) = 0x10;
    Onchip_DMA0R = 9;
    if (param_2 < PTR_DAT_060040b0) {
      Onchip_CCR = 0x11;
    }
  }
  return;
}


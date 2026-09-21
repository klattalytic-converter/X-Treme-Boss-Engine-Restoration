
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000bc38(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *extraout_r3;
  uint *extraout_r3_00;
  uint *puVar4;
  byte *unaff_r8;
  int unaff_gbr;
  
  FUN_0000bc8e();
  extraout_r3[4] = 0;
  uVar2 = 7;
  puVar4 = extraout_r3;
  if (param_3 < param_4) {
    *extraout_r3 = (uint)&DAT_0000bda4;
    extraout_r3[1] = param_2 + param_3;
    extraout_r3[2] = param_4 - param_3;
    extraout_r3[3] = 1;
    *(undefined1 *)(unaff_gbr + 0xbd) = 8;
    uVar1 = (uint)DAT_0000bce8;
    extraout_r3[5] = 7;
    extraout_r3[4] = uVar1;
    FUN_0000bc8e();
    extraout_r3_00[4] = 0;
    puVar4 = extraout_r3_00;
    param_4 = param_3;
  }
  if (param_4 != 0) {
    if ((*unaff_r8 & 1) != 0) {
      do {
      } while ((_DAT_ffffff9c & 3) == 1);
      _DAT_ffffff98 = param_4 >> 1;
      iVar3 = 4;
      if (((param_4 | param_1) & 2) == 0) {
        _DAT_ffffff98 = param_4 >> 2;
        iVar3 = 8;
      }
      DAT_fffffe72 = 0;
      _DAT_ffffff9c = (int)DAT_0000bcea | iVar3 << 8;
      _DAT_ffffff90 = param_1;
      _DAT_ffffff94 = param_2;
      *(undefined1 *)(unaff_gbr + 0xba) = 8;
      _DAT_ffffffb0 = 9;
      return;
    }
    uVar1 = (uint)DAT_0000bce8;
    *puVar4 = param_1;
    puVar4[1] = param_2;
    puVar4[2] = param_4;
    puVar4[3] = uVar1;
    puVar4[5] = uVar2;
    puVar4[4] = uVar1;
    *(undefined1 *)(unaff_gbr + 0xbd) = 8;
  }
  return;
}


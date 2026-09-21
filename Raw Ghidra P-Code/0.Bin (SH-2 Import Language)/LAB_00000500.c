
undefined8
UndefinedFunction_00000500
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,uint param_6)

{
  longlong lVar1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *in_r0;
  uint in_sr;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar2;
  
  lVar1 = (longlong)(int)in_r0[2] * (longlong)param_2;
  uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  param_1 = -param_1;
  uVar10 = *in_r0;
  uVar7 = uVar10 ^ param_5;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
  }
  uVar8 = param_5;
  if ((int)param_5 < 0) {
    uVar8 = -param_5;
  }
  uVar13 = (uVar8 & 0xffff) * (uVar10 & 0xffff);
  iVar6 = (uVar8 >> 0x10) * (uVar10 & 0xffff);
  iVar4 = 0;
  uVar3 = iVar6 + (uVar8 & 0xffff) * (uVar10 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar12 = uVar13 + uVar3 * 0x10000;
  uVar10 = iVar4 + (uint)(uVar12 < uVar13) + (uVar3 >> 0x10) + (uVar8 >> 0x10) * (uVar10 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar10 = ~uVar10;
    if (uVar12 == 0) {
      uVar10 = uVar10 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar2 + uVar12;
    uVar9 = uVar10 + (uVar12 < uVar2) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar12 = uVar2 + uVar12;
    uVar9 = uVar10 + (uVar12 < uVar2) + uVar9;
  }
  lVar1 = (longlong)(int)in_r0[2] * (longlong)param_1;
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  uVar7 = *in_r0;
  uVar8 = uVar7 ^ param_6;
  if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
  }
  uVar3 = param_6;
  if ((int)param_6 < 0) {
    uVar3 = -param_6;
  }
  uVar5 = (uVar3 & 0xffff) * (uVar7 & 0xffff);
  iVar6 = (uVar3 >> 0x10) * (uVar7 & 0xffff);
  iVar4 = 0;
  uVar13 = iVar6 + (uVar3 & 0xffff) * (uVar7 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar11 = uVar5 + uVar13 * 0x10000;
  uVar7 = iVar4 + (uint)(uVar11 < uVar5) + (uVar13 >> 0x10) + (uVar3 >> 0x10) * (uVar7 >> 0x10);
  if ((int)-(uint)((int)uVar8 < 0) < 0) {
    uVar7 = ~uVar7;
    if (uVar11 == 0) {
      uVar7 = uVar7 + 1;
    }
    else {
      uVar11 = ~uVar11 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar11 = uVar2 + uVar11;
    uVar10 = uVar7 + (uVar11 < uVar2) + (uVar10 & 0xffff);
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar11 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar11 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  else {
    uVar11 = uVar2 + uVar11;
    uVar10 = uVar7 + (uVar11 < uVar2) + uVar10;
  }
  in_r0[2] = uVar9 << 0x10 | uVar12 >> 0x10;
  lVar1 = (longlong)(int)in_r0[6] * (longlong)param_2;
  uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  *in_r0 = uVar10 << 0x10 | uVar11 >> 0x10;
  uVar10 = in_r0[4];
  uVar7 = uVar10 ^ param_5;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
  }
  uVar8 = param_5;
  if ((int)param_5 < 0) {
    uVar8 = -param_5;
  }
  uVar13 = (uVar8 & 0xffff) * (uVar10 & 0xffff);
  iVar6 = (uVar8 >> 0x10) * (uVar10 & 0xffff);
  iVar4 = 0;
  uVar3 = iVar6 + (uVar8 & 0xffff) * (uVar10 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar12 = uVar13 + uVar3 * 0x10000;
  uVar10 = iVar4 + (uint)(uVar12 < uVar13) + (uVar3 >> 0x10) + (uVar8 >> 0x10) * (uVar10 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar10 = ~uVar10;
    if (uVar12 == 0) {
      uVar10 = uVar10 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar2 + uVar12;
    uVar9 = uVar10 + (uVar12 < uVar2) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar12 = uVar2 + uVar12;
    uVar9 = uVar10 + (uVar12 < uVar2) + uVar9;
  }
  lVar1 = (longlong)(int)in_r0[6] * (longlong)param_1;
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  in_r0[6] = uVar9 << 0x10 | uVar12 >> 0x10;
  uVar9 = in_r0[4];
  uVar7 = uVar9 ^ param_6;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar8 = param_6;
  if ((int)param_6 < 0) {
    uVar8 = -param_6;
  }
  uVar13 = (uVar8 & 0xffff) * (uVar9 & 0xffff);
  iVar6 = (uVar8 >> 0x10) * (uVar9 & 0xffff);
  iVar4 = 0;
  uVar3 = iVar6 + (uVar8 & 0xffff) * (uVar9 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar12 = uVar13 + uVar3 * 0x10000;
  uVar9 = iVar4 + (uint)(uVar12 < uVar13) + (uVar3 >> 0x10) + (uVar8 >> 0x10) * (uVar9 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar9 = ~uVar9;
    if (uVar12 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar2 + uVar12;
    uVar10 = uVar9 + (uVar12 < uVar2) + (uVar10 & 0xffff);
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  else {
    uVar12 = uVar2 + uVar12;
    uVar10 = uVar9 + (uVar12 < uVar2) + uVar10;
  }
  lVar1 = (longlong)(int)in_r0[10] * (longlong)param_2;
  uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  in_r0[4] = uVar10 << 0x10 | uVar12 >> 0x10;
  uVar10 = in_r0[8];
  uVar7 = uVar10 ^ param_5;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
  }
  if ((int)param_5 < 0) {
    param_5 = -param_5;
  }
  uVar3 = (param_5 & 0xffff) * (uVar10 & 0xffff);
  iVar6 = (param_5 >> 0x10) * (uVar10 & 0xffff);
  iVar4 = 0;
  uVar8 = iVar6 + (param_5 & 0xffff) * (uVar10 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar13 = uVar3 + uVar8 * 0x10000;
  uVar10 = iVar4 + (uint)(uVar13 < uVar3) + (uVar8 >> 0x10) + (param_5 >> 0x10) * (uVar10 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar10 = ~uVar10;
    if (uVar13 == 0) {
      uVar10 = uVar10 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar2 + uVar13;
    uVar9 = uVar10 + (uVar13 < uVar2) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar13 = uVar2 + uVar13;
    uVar9 = uVar10 + (uVar13 < uVar2) + uVar9;
  }
  lVar1 = (longlong)(int)in_r0[10] * (longlong)param_1;
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  in_r0[10] = uVar9 << 0x10 | uVar13 >> 0x10;
  uVar9 = in_r0[8];
  uVar7 = uVar9 ^ param_6;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  if ((int)param_6 < 0) {
    param_6 = -param_6;
  }
  uVar3 = (param_6 & 0xffff) * (uVar9 & 0xffff);
  iVar6 = (param_6 >> 0x10) * (uVar9 & 0xffff);
  iVar4 = 0;
  uVar8 = iVar6 + (param_6 & 0xffff) * (uVar9 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar13 = uVar3 + uVar8 * 0x10000;
  uVar9 = iVar4 + (uint)(uVar13 < uVar3) + (uVar8 >> 0x10) + (param_6 >> 0x10) * (uVar9 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar9 = ~uVar9;
    if (uVar13 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar2 + uVar13;
    uVar10 = uVar9 + (uVar13 < uVar2) + (uVar10 & 0xffff);
    if ((int)uVar10 < -0x8000) {
      uVar10 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar10) {
      uVar10 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar10 = uVar10 & 0xffff;
  }
  else {
    uVar13 = uVar2 + uVar13;
    uVar10 = uVar9 + (uVar13 < uVar2) + uVar10;
  }
  in_r0[8] = uVar10 << 0x10 | uVar13 >> 0x10;
  return CONCAT44(&stack0x00000008,in_r0 + 9);
}


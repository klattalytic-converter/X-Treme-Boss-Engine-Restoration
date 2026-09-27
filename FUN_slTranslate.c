
void _slTranslate(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint in_sr;
  int unaff_gbr;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  piVar6 = *(int **)(unaff_gbr + 0x1c);
  uVar7 = (uint)((ulonglong)((longlong)*piVar6 * (longlong)param_1) >> 0x20);
  uVar4 = (uint)((longlong)*piVar6 * (longlong)param_1);
  uVar8 = piVar6[1];
  uVar5 = uVar8 ^ param_2;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
  }
  uVar11 = (uVar1 & 0xffff) * (uVar8 & 0xffff);
  iVar3 = (uVar1 >> 0x10) * (uVar8 & 0xffff);
  iVar2 = 0;
  uVar13 = iVar3 + (uVar1 & 0xffff) * (uVar8 >> 0x10);
  if (iVar3 != 0) {
    iVar2 = 0x10000;
  }
  uVar9 = uVar11 + uVar13 * 0x10000;
  uVar8 = iVar2 + (uint)(uVar9 < uVar11) + (uVar13 >> 0x10) + (uVar1 >> 0x10) * (uVar8 >> 0x10);
  if ((int)-(uint)((int)uVar5 < 0) < 0) {
    uVar8 = ~uVar8;
    if (uVar9 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar9 = ~uVar9 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar9 = uVar4 + uVar9;
    uVar7 = uVar8 + (uVar9 < uVar4) + (uVar7 & 0xffff);
    if ((int)uVar7 < -0x8000) {
      uVar7 = 0xffff8000;
      uVar9 = 0;
    }
    if (0x7fff < (int)uVar7) {
      uVar7 = 0x7fff;
      uVar9 = 0xffffffff;
    }
    uVar7 = uVar7 & 0xffff;
  }
  else {
    uVar9 = uVar4 + uVar9;
    uVar7 = uVar8 + (uVar9 < uVar4) + uVar7;
  }
  uVar4 = piVar6[2];
  uVar8 = uVar4 ^ param_3;
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  uVar5 = param_3;
  if ((int)param_3 < 0) {
    uVar5 = -param_3;
  }
  uVar13 = (uVar5 & 0xffff) * (uVar4 & 0xffff);
  iVar3 = (uVar5 >> 0x10) * (uVar4 & 0xffff);
  iVar2 = 0;
  uVar1 = iVar3 + (uVar5 & 0xffff) * (uVar4 >> 0x10);
  if (iVar3 != 0) {
    iVar2 = 0x10000;
  }
  uVar11 = uVar13 + uVar1 * 0x10000;
  uVar4 = iVar2 + (uint)(uVar11 < uVar13) + (uVar1 >> 0x10) + (uVar5 >> 0x10) * (uVar4 >> 0x10);
  if ((int)-(uint)((int)uVar8 < 0) < 0) {
    uVar4 = ~uVar4;
    if (uVar11 == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar11 = ~uVar11 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar11 = uVar9 + uVar11;
    uVar7 = uVar4 + (uVar11 < uVar9) + (uVar7 & 0xffff);
    if ((int)uVar7 < -0x8000) {
      uVar7 = 0xffff8000;
      uVar11 = 0;
    }
    if (0x7fff < (int)uVar7) {
      uVar7 = 0x7fff;
      uVar11 = 0xffffffff;
    }
    uVar7 = uVar7 & 0xffff;
  }
  else {
    uVar11 = uVar9 + uVar11;
    uVar7 = uVar4 + (uVar11 < uVar9) + uVar7;
  }
  uVar8 = (uint)((ulonglong)((longlong)piVar6[4] * (longlong)param_1) >> 0x20);
  uVar4 = (uint)((longlong)piVar6[4] * (longlong)param_1);
  uVar5 = piVar6[5];
  uVar1 = uVar5 ^ param_2;
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
  }
  uVar13 = param_2;
  if ((int)param_2 < 0) {
    uVar13 = -param_2;
  }
  uVar12 = (uVar13 & 0xffff) * (uVar5 & 0xffff);
  iVar3 = (uVar13 >> 0x10) * (uVar5 & 0xffff);
  iVar2 = 0;
  uVar9 = iVar3 + (uVar13 & 0xffff) * (uVar5 >> 0x10);
  if (iVar3 != 0) {
    iVar2 = 0x10000;
  }
  uVar10 = uVar12 + uVar9 * 0x10000;
  uVar5 = iVar2 + (uint)(uVar10 < uVar12) + (uVar9 >> 0x10) + (uVar13 >> 0x10) * (uVar5 >> 0x10);
  if ((int)-(uint)((int)uVar1 < 0) < 0) {
    uVar5 = ~uVar5;
    if (uVar10 == 0) {
      uVar5 = uVar5 + 1;
    }
    else {
      uVar10 = ~uVar10 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar10 = uVar4 + uVar10;
    uVar8 = uVar5 + (uVar10 < uVar4) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar10 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar10 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar10 = uVar4 + uVar10;
    uVar8 = uVar5 + (uVar10 < uVar4) + uVar8;
  }
  piVar6[3] = (uVar7 << 0x10 | uVar11 >> 0x10) + piVar6[3];
  uVar4 = piVar6[6];
  uVar7 = uVar4 ^ param_3;
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  uVar5 = param_3;
  if ((int)param_3 < 0) {
    uVar5 = -param_3;
  }
  uVar13 = (uVar5 & 0xffff) * (uVar4 & 0xffff);
  iVar3 = (uVar5 >> 0x10) * (uVar4 & 0xffff);
  iVar2 = 0;
  uVar1 = iVar3 + (uVar5 & 0xffff) * (uVar4 >> 0x10);
  if (iVar3 != 0) {
    iVar2 = 0x10000;
  }
  uVar11 = uVar13 + uVar1 * 0x10000;
  uVar4 = iVar2 + (uint)(uVar11 < uVar13) + (uVar1 >> 0x10) + (uVar5 >> 0x10) * (uVar4 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar4 = ~uVar4;
    if (uVar11 == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar11 = ~uVar11 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar11 = uVar10 + uVar11;
    uVar8 = uVar4 + (uVar11 < uVar10) + (uVar8 & 0xffff);
    if ((int)uVar8 < -0x8000) {
      uVar8 = 0xffff8000;
      uVar11 = 0;
    }
    if (0x7fff < (int)uVar8) {
      uVar8 = 0x7fff;
      uVar11 = 0xffffffff;
    }
    uVar8 = uVar8 & 0xffff;
  }
  else {
    uVar11 = uVar10 + uVar11;
    uVar8 = uVar4 + (uVar11 < uVar10) + uVar8;
  }
  uVar7 = (uint)((ulonglong)((longlong)piVar6[8] * (longlong)param_1) >> 0x20);
  uVar4 = (uint)((longlong)piVar6[8] * (longlong)param_1);
  uVar5 = piVar6[9];
  uVar1 = uVar5 ^ param_2;
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  uVar9 = (param_2 & 0xffff) * (uVar5 & 0xffff);
  iVar3 = (param_2 >> 0x10) * (uVar5 & 0xffff);
  iVar2 = 0;
  uVar13 = iVar3 + (param_2 & 0xffff) * (uVar5 >> 0x10);
  if (iVar3 != 0) {
    iVar2 = 0x10000;
  }
  uVar12 = uVar9 + uVar13 * 0x10000;
  uVar5 = iVar2 + (uint)(uVar12 < uVar9) + (uVar13 >> 0x10) + (param_2 >> 0x10) * (uVar5 >> 0x10);
  if ((int)-(uint)((int)uVar1 < 0) < 0) {
    uVar5 = ~uVar5;
    if (uVar12 == 0) {
      uVar5 = uVar5 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar4 + uVar12;
    uVar7 = uVar5 + (uVar12 < uVar4) + (uVar7 & 0xffff);
    if ((int)uVar7 < -0x8000) {
      uVar7 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar7) {
      uVar7 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar7 = uVar7 & 0xffff;
  }
  else {
    uVar12 = uVar4 + uVar12;
    uVar7 = uVar5 + (uVar12 < uVar4) + uVar7;
  }
  piVar6[7] = (uVar8 << 0x10 | uVar11 >> 0x10) + piVar6[7];
  uVar4 = piVar6[10];
  uVar8 = uVar4 ^ param_3;
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  if ((int)param_3 < 0) {
    param_3 = -param_3;
  }
  uVar1 = (param_3 & 0xffff) * (uVar4 & 0xffff);
  iVar3 = (param_3 >> 0x10) * (uVar4 & 0xffff);
  iVar2 = 0;
  uVar5 = iVar3 + (param_3 & 0xffff) * (uVar4 >> 0x10);
  if (iVar3 != 0) {
    iVar2 = 0x10000;
  }
  uVar13 = uVar1 + uVar5 * 0x10000;
  uVar4 = iVar2 + (uint)(uVar13 < uVar1) + (uVar5 >> 0x10) + (param_3 >> 0x10) * (uVar4 >> 0x10);
  if ((int)-(uint)((int)uVar8 < 0) < 0) {
    uVar4 = ~uVar4;
    if (uVar13 == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar12 + uVar13;
    uVar7 = uVar4 + (uVar13 < uVar12) + (uVar7 & 0xffff);
    if ((int)uVar7 < -0x8000) {
      uVar7 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar7) {
      uVar7 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar7 = uVar7 & 0xffff;
  }
  else {
    uVar13 = uVar12 + uVar13;
    uVar7 = uVar4 + (uVar13 < uVar12) + uVar7;
  }
  piVar6[0xb] = (uVar7 << 0x10 | uVar13 >> 0x10) + piVar6[0xb];
  return;
}


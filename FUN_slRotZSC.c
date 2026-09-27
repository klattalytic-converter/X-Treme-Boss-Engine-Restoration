
undefined8 _slRotZSC(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint in_sr;
  int unaff_gbr;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar2;
  
  (*(code *)PTR_FUN_06004654)();
  puVar8 = *(uint **)(unaff_gbr + 0x1c);
  iVar9 = -param_1;
  lVar1 = (longlong)(int)*puVar8 * (longlong)(int)param_2;
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  uVar11 = puVar8[1];
  uVar7 = uVar11 ^ param_1;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  uVar13 = (uVar4 & 0xffff) * (uVar11 & 0xffff);
  iVar6 = (uVar4 >> 0x10) * (uVar11 & 0xffff);
  iVar5 = 0;
  uVar3 = iVar6 + (uVar4 & 0xffff) * (uVar11 >> 0x10);
  if (iVar6 != 0) {
    iVar5 = 0x10000;
  }
  uVar12 = uVar13 + uVar3 * 0x10000;
  uVar11 = iVar5 + (uint)(uVar12 < uVar13) + (uVar3 >> 0x10) + (uVar4 >> 0x10) * (uVar11 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar11 = ~uVar11;
    if (uVar12 == 0) {
      uVar11 = uVar11 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar2 + uVar12;
    uVar10 = uVar11 + (uVar12 < uVar2) + (uVar10 & 0xffff);
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
    uVar10 = uVar11 + (uVar12 < uVar2) + uVar10;
  }
  lVar1 = (longlong)(int)*puVar8 * (longlong)iVar9;
  uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  *puVar8 = uVar10 << 0x10 | uVar12 >> 0x10;
  uVar10 = puVar8[1];
  uVar7 = uVar10 ^ param_2;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
  }
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar13 = (uVar4 & 0xffff) * (uVar10 & 0xffff);
  iVar6 = (uVar4 >> 0x10) * (uVar10 & 0xffff);
  iVar5 = 0;
  uVar3 = iVar6 + (uVar4 & 0xffff) * (uVar10 >> 0x10);
  if (iVar6 != 0) {
    iVar5 = 0x10000;
  }
  uVar12 = uVar13 + uVar3 * 0x10000;
  uVar10 = iVar5 + (uint)(uVar12 < uVar13) + (uVar3 >> 0x10) + (uVar4 >> 0x10) * (uVar10 >> 0x10);
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
    uVar11 = uVar10 + (uVar12 < uVar2) + (uVar11 & 0xffff);
    if ((int)uVar11 < -0x8000) {
      uVar11 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar11) {
      uVar11 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar11 = uVar11 & 0xffff;
  }
  else {
    uVar12 = uVar2 + uVar12;
    uVar11 = uVar10 + (uVar12 < uVar2) + uVar11;
  }
  lVar1 = (longlong)(int)puVar8[4] * (longlong)(int)param_2;
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  puVar8[1] = uVar11 << 0x10 | uVar12 >> 0x10;
  uVar11 = puVar8[5];
  uVar7 = uVar11 ^ param_1;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  uVar13 = (uVar4 & 0xffff) * (uVar11 & 0xffff);
  iVar6 = (uVar4 >> 0x10) * (uVar11 & 0xffff);
  iVar5 = 0;
  uVar3 = iVar6 + (uVar4 & 0xffff) * (uVar11 >> 0x10);
  if (iVar6 != 0) {
    iVar5 = 0x10000;
  }
  uVar12 = uVar13 + uVar3 * 0x10000;
  uVar11 = iVar5 + (uint)(uVar12 < uVar13) + (uVar3 >> 0x10) + (uVar4 >> 0x10) * (uVar11 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar11 = ~uVar11;
    if (uVar12 == 0) {
      uVar11 = uVar11 + 1;
    }
    else {
      uVar12 = ~uVar12 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar2 + uVar12;
    uVar10 = uVar11 + (uVar12 < uVar2) + (uVar10 & 0xffff);
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
    uVar10 = uVar11 + (uVar12 < uVar2) + uVar10;
  }
  lVar1 = (longlong)(int)puVar8[4] * (longlong)iVar9;
  uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  puVar8[4] = uVar10 << 0x10 | uVar12 >> 0x10;
  uVar10 = puVar8[5];
  uVar7 = uVar10 ^ param_2;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
  }
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar13 = (uVar4 & 0xffff) * (uVar10 & 0xffff);
  iVar6 = (uVar4 >> 0x10) * (uVar10 & 0xffff);
  iVar5 = 0;
  uVar3 = iVar6 + (uVar4 & 0xffff) * (uVar10 >> 0x10);
  if (iVar6 != 0) {
    iVar5 = 0x10000;
  }
  uVar12 = uVar13 + uVar3 * 0x10000;
  uVar10 = iVar5 + (uint)(uVar12 < uVar13) + (uVar3 >> 0x10) + (uVar4 >> 0x10) * (uVar10 >> 0x10);
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
    uVar11 = uVar10 + (uVar12 < uVar2) + (uVar11 & 0xffff);
    if ((int)uVar11 < -0x8000) {
      uVar11 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar11) {
      uVar11 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar11 = uVar11 & 0xffff;
  }
  else {
    uVar12 = uVar2 + uVar12;
    uVar11 = uVar10 + (uVar12 < uVar2) + uVar11;
  }
  lVar1 = (longlong)(int)puVar8[8] * (longlong)(int)param_2;
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  puVar8[5] = uVar11 << 0x10 | uVar12 >> 0x10;
  uVar11 = puVar8[9];
  uVar7 = uVar11 ^ param_1;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
  }
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  uVar3 = (param_1 & 0xffff) * (uVar11 & 0xffff);
  iVar6 = (param_1 >> 0x10) * (uVar11 & 0xffff);
  iVar5 = 0;
  uVar4 = iVar6 + (param_1 & 0xffff) * (uVar11 >> 0x10);
  if (iVar6 != 0) {
    iVar5 = 0x10000;
  }
  uVar13 = uVar3 + uVar4 * 0x10000;
  uVar11 = iVar5 + (uint)(uVar13 < uVar3) + (uVar4 >> 0x10) + (param_1 >> 0x10) * (uVar11 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar11 = ~uVar11;
    if (uVar13 == 0) {
      uVar11 = uVar11 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar2 + uVar13;
    uVar10 = uVar11 + (uVar13 < uVar2) + (uVar10 & 0xffff);
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
    uVar10 = uVar11 + (uVar13 < uVar2) + uVar10;
  }
  lVar1 = (longlong)(int)puVar8[8] * (longlong)iVar9;
  uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  puVar8[8] = uVar10 << 0x10 | uVar13 >> 0x10;
  uVar10 = puVar8[9];
  uVar7 = uVar10 ^ param_2;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  uVar3 = (param_2 & 0xffff) * (uVar10 & 0xffff);
  iVar5 = (param_2 >> 0x10) * (uVar10 & 0xffff);
  iVar9 = 0;
  uVar4 = iVar5 + (param_2 & 0xffff) * (uVar10 >> 0x10);
  if (iVar5 != 0) {
    iVar9 = 0x10000;
  }
  uVar13 = uVar3 + uVar4 * 0x10000;
  uVar10 = iVar9 + (uint)(uVar13 < uVar3) + (uVar4 >> 0x10) + (param_2 >> 0x10) * (uVar10 >> 0x10);
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
    uVar11 = uVar10 + (uVar13 < uVar2) + (uVar11 & 0xffff);
    if ((int)uVar11 < -0x8000) {
      uVar11 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar11) {
      uVar11 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar11 = uVar11 & 0xffff;
  }
  else {
    uVar13 = uVar2 + uVar13;
    uVar11 = uVar10 + (uVar13 < uVar2) + uVar11;
  }
  puVar8[9] = uVar11 << 0x10 | uVar13 >> 0x10;
  return CONCAT44(&stack0x00000000,puVar8 + 10);
}


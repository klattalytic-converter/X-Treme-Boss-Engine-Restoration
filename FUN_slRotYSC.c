
undefined8 _slRotYSC(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint in_sr;
  int unaff_gbr;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar2;
  
  (*(code *)PTR_FUN_06004564)();
  puVar9 = *(uint **)(unaff_gbr + 0x1c);
  lVar1 = (longlong)(int)puVar9[2] * (longlong)(int)param_2;
  uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  iVar10 = -param_1;
  uVar12 = *puVar9;
  uVar7 = uVar12 ^ param_1;
  if ((int)uVar12 < 0) {
    uVar12 = -uVar12;
  }
  uVar8 = param_1;
  if ((int)param_1 < 0) {
    uVar8 = -param_1;
  }
  uVar15 = (uVar8 & 0xffff) * (uVar12 & 0xffff);
  iVar6 = (uVar8 >> 0x10) * (uVar12 & 0xffff);
  iVar4 = 0;
  uVar3 = iVar6 + (uVar8 & 0xffff) * (uVar12 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar14 = uVar15 + uVar3 * 0x10000;
  uVar12 = iVar4 + (uint)(uVar14 < uVar15) + (uVar3 >> 0x10) + (uVar8 >> 0x10) * (uVar12 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar12 = ~uVar12;
    if (uVar14 == 0) {
      uVar12 = uVar12 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar14 = uVar2 + uVar14;
    uVar11 = uVar12 + (uVar14 < uVar2) + (uVar11 & 0xffff);
    if ((int)uVar11 < -0x8000) {
      uVar11 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar11) {
      uVar11 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar11 = uVar11 & 0xffff;
  }
  else {
    uVar14 = uVar2 + uVar14;
    uVar11 = uVar12 + (uVar14 < uVar2) + uVar11;
  }
  lVar1 = (longlong)(int)puVar9[2] * (longlong)iVar10;
  uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  uVar7 = *puVar9;
  uVar8 = uVar7 ^ param_2;
  if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
  }
  uVar3 = param_2;
  if ((int)param_2 < 0) {
    uVar3 = -param_2;
  }
  uVar5 = (uVar3 & 0xffff) * (uVar7 & 0xffff);
  iVar6 = (uVar3 >> 0x10) * (uVar7 & 0xffff);
  iVar4 = 0;
  uVar15 = iVar6 + (uVar3 & 0xffff) * (uVar7 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar13 = uVar5 + uVar15 * 0x10000;
  uVar7 = iVar4 + (uint)(uVar13 < uVar5) + (uVar15 >> 0x10) + (uVar3 >> 0x10) * (uVar7 >> 0x10);
  if ((int)-(uint)((int)uVar8 < 0) < 0) {
    uVar7 = ~uVar7;
    if (uVar13 == 0) {
      uVar7 = uVar7 + 1;
    }
    else {
      uVar13 = ~uVar13 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar2 + uVar13;
    uVar12 = uVar7 + (uVar13 < uVar2) + (uVar12 & 0xffff);
    if ((int)uVar12 < -0x8000) {
      uVar12 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar12) {
      uVar12 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar12 = uVar12 & 0xffff;
  }
  else {
    uVar13 = uVar2 + uVar13;
    uVar12 = uVar7 + (uVar13 < uVar2) + uVar12;
  }
  puVar9[2] = uVar11 << 0x10 | uVar14 >> 0x10;
  lVar1 = (longlong)(int)puVar9[6] * (longlong)(int)param_2;
  uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  *puVar9 = uVar12 << 0x10 | uVar13 >> 0x10;
  uVar12 = puVar9[4];
  uVar7 = uVar12 ^ param_1;
  if ((int)uVar12 < 0) {
    uVar12 = -uVar12;
  }
  uVar8 = param_1;
  if ((int)param_1 < 0) {
    uVar8 = -param_1;
  }
  uVar15 = (uVar8 & 0xffff) * (uVar12 & 0xffff);
  iVar6 = (uVar8 >> 0x10) * (uVar12 & 0xffff);
  iVar4 = 0;
  uVar3 = iVar6 + (uVar8 & 0xffff) * (uVar12 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar14 = uVar15 + uVar3 * 0x10000;
  uVar12 = iVar4 + (uint)(uVar14 < uVar15) + (uVar3 >> 0x10) + (uVar8 >> 0x10) * (uVar12 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar12 = ~uVar12;
    if (uVar14 == 0) {
      uVar12 = uVar12 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar14 = uVar2 + uVar14;
    uVar11 = uVar12 + (uVar14 < uVar2) + (uVar11 & 0xffff);
    if ((int)uVar11 < -0x8000) {
      uVar11 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar11) {
      uVar11 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar11 = uVar11 & 0xffff;
  }
  else {
    uVar14 = uVar2 + uVar14;
    uVar11 = uVar12 + (uVar14 < uVar2) + uVar11;
  }
  lVar1 = (longlong)(int)puVar9[6] * (longlong)iVar10;
  uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  puVar9[6] = uVar11 << 0x10 | uVar14 >> 0x10;
  uVar11 = puVar9[4];
  uVar7 = uVar11 ^ param_2;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
  }
  uVar8 = param_2;
  if ((int)param_2 < 0) {
    uVar8 = -param_2;
  }
  uVar15 = (uVar8 & 0xffff) * (uVar11 & 0xffff);
  iVar6 = (uVar8 >> 0x10) * (uVar11 & 0xffff);
  iVar4 = 0;
  uVar3 = iVar6 + (uVar8 & 0xffff) * (uVar11 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar14 = uVar15 + uVar3 * 0x10000;
  uVar11 = iVar4 + (uint)(uVar14 < uVar15) + (uVar3 >> 0x10) + (uVar8 >> 0x10) * (uVar11 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar11 = ~uVar11;
    if (uVar14 == 0) {
      uVar11 = uVar11 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar14 = uVar2 + uVar14;
    uVar12 = uVar11 + (uVar14 < uVar2) + (uVar12 & 0xffff);
    if ((int)uVar12 < -0x8000) {
      uVar12 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar12) {
      uVar12 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar12 = uVar12 & 0xffff;
  }
  else {
    uVar14 = uVar2 + uVar14;
    uVar12 = uVar11 + (uVar14 < uVar2) + uVar12;
  }
  lVar1 = (longlong)(int)puVar9[10] * (longlong)(int)param_2;
  uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  puVar9[4] = uVar12 << 0x10 | uVar14 >> 0x10;
  uVar12 = puVar9[8];
  uVar7 = uVar12 ^ param_1;
  if ((int)uVar12 < 0) {
    uVar12 = -uVar12;
  }
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  uVar3 = (param_1 & 0xffff) * (uVar12 & 0xffff);
  iVar6 = (param_1 >> 0x10) * (uVar12 & 0xffff);
  iVar4 = 0;
  uVar8 = iVar6 + (param_1 & 0xffff) * (uVar12 >> 0x10);
  if (iVar6 != 0) {
    iVar4 = 0x10000;
  }
  uVar15 = uVar3 + uVar8 * 0x10000;
  uVar12 = iVar4 + (uint)(uVar15 < uVar3) + (uVar8 >> 0x10) + (param_1 >> 0x10) * (uVar12 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar12 = ~uVar12;
    if (uVar15 == 0) {
      uVar12 = uVar12 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar15 = uVar2 + uVar15;
    uVar11 = uVar12 + (uVar15 < uVar2) + (uVar11 & 0xffff);
    if ((int)uVar11 < -0x8000) {
      uVar11 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar11) {
      uVar11 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar11 = uVar11 & 0xffff;
  }
  else {
    uVar15 = uVar2 + uVar15;
    uVar11 = uVar12 + (uVar15 < uVar2) + uVar11;
  }
  lVar1 = (longlong)(int)puVar9[10] * (longlong)iVar10;
  uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  puVar9[10] = uVar11 << 0x10 | uVar15 >> 0x10;
  uVar11 = puVar9[8];
  uVar7 = uVar11 ^ param_2;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  uVar3 = (param_2 & 0xffff) * (uVar11 & 0xffff);
  iVar4 = (param_2 >> 0x10) * (uVar11 & 0xffff);
  iVar10 = 0;
  uVar8 = iVar4 + (param_2 & 0xffff) * (uVar11 >> 0x10);
  if (iVar4 != 0) {
    iVar10 = 0x10000;
  }
  uVar15 = uVar3 + uVar8 * 0x10000;
  uVar11 = iVar10 + (uint)(uVar15 < uVar3) + (uVar8 >> 0x10) + (param_2 >> 0x10) * (uVar11 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar11 = ~uVar11;
    if (uVar15 == 0) {
      uVar11 = uVar11 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar15 = uVar2 + uVar15;
    uVar12 = uVar11 + (uVar15 < uVar2) + (uVar12 & 0xffff);
    if ((int)uVar12 < -0x8000) {
      uVar12 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar12) {
      uVar12 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar12 = uVar12 & 0xffff;
  }
  else {
    uVar15 = uVar2 + uVar15;
    uVar12 = uVar11 + (uVar15 < uVar2) + uVar12;
  }
  puVar9[8] = uVar12 << 0x10 | uVar15 >> 0x10;
  return CONCAT44(&stack0x00000000,puVar9 + 9);
}


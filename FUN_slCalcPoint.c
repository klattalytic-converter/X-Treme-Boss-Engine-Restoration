
void _slCalcPoint(uint param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint in_sr;
  int unaff_gbr;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  puVar7 = *(uint **)(unaff_gbr + 0x1c);
  iVar9 = 3;
  do {
    uVar10 = *puVar7;
    uVar5 = uVar10 ^ param_1;
    if ((int)uVar10 < 0) {
      uVar10 = -uVar10;
    }
    uVar6 = param_1;
    if ((int)param_1 < 0) {
      uVar6 = -param_1;
    }
    uVar3 = (uVar6 & 0xffff) * (uVar10 & 0xffff);
    iVar4 = (uVar6 >> 0x10) * (uVar10 & 0xffff);
    iVar2 = 0;
    uVar1 = iVar4 + (uVar6 & 0xffff) * (uVar10 >> 0x10);
    if (iVar4 != 0) {
      iVar2 = 0x10000;
    }
    uVar11 = uVar3 + uVar1 * 0x10000;
    uVar10 = iVar2 + (uint)(uVar11 < uVar3) + (uVar1 >> 0x10) + (uVar6 >> 0x10) * (uVar10 >> 0x10);
    if ((int)-(uint)((int)uVar5 < 0) < 0) {
      uVar10 = ~uVar10;
      if (uVar11 == 0) {
        uVar10 = uVar10 + 1;
      }
      else {
        uVar11 = ~uVar11 + 1;
      }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
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
    uVar5 = puVar7[1];
    uVar6 = uVar5 ^ param_2;
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
    }
    uVar1 = param_2;
    if ((int)param_2 < 0) {
      uVar1 = -param_2;
    }
    uVar13 = (uVar1 & 0xffff) * (uVar5 & 0xffff);
    iVar4 = (uVar1 >> 0x10) * (uVar5 & 0xffff);
    iVar2 = 0;
    uVar3 = iVar4 + (uVar1 & 0xffff) * (uVar5 >> 0x10);
    if (iVar4 != 0) {
      iVar2 = 0x10000;
    }
    uVar12 = uVar13 + uVar3 * 0x10000;
    uVar5 = iVar2 + (uint)(uVar12 < uVar13) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar5 >> 0x10);
    if ((int)-(uint)((int)uVar6 < 0) < 0) {
      uVar5 = ~uVar5;
      if (uVar12 == 0) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar12 = ~uVar12 + 1;
      }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
      uVar12 = uVar11 + uVar12;
      uVar10 = uVar5 + (uVar12 < uVar11) + (uVar10 & 0xffff);
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
      uVar12 = uVar11 + uVar12;
      uVar10 = uVar5 + (uVar12 < uVar11) + uVar10;
    }
    uVar5 = puVar7[2];
    puVar8 = puVar7 + 3;
    uVar6 = uVar5 ^ param_3;
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
    }
    uVar1 = param_3;
    if ((int)param_3 < 0) {
      uVar1 = -param_3;
    }
    uVar11 = (uVar1 & 0xffff) * (uVar5 & 0xffff);
    iVar4 = (uVar1 >> 0x10) * (uVar5 & 0xffff);
    iVar2 = 0;
    uVar3 = iVar4 + (uVar1 & 0xffff) * (uVar5 >> 0x10);
    if (iVar4 != 0) {
      iVar2 = 0x10000;
    }
    uVar13 = uVar11 + uVar3 * 0x10000;
    uVar5 = iVar2 + (uint)(uVar13 < uVar11) + (uVar3 >> 0x10) + (uVar1 >> 0x10) * (uVar5 >> 0x10);
    if ((int)-(uint)((int)uVar6 < 0) < 0) {
      uVar5 = ~uVar5;
      if (uVar13 == 0) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar13 = ~uVar13 + 1;
      }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
      uVar13 = uVar12 + uVar13;
      uVar10 = uVar5 + (uVar13 < uVar12) + (uVar10 & 0xffff);
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
      uVar13 = uVar12 + uVar13;
      uVar10 = uVar5 + (uVar13 < uVar12) + uVar10;
    }
    puVar7 = puVar7 + 4;
    *param_4 = (uVar10 << 0x10 | uVar13 >> 0x10) + *puVar8;
    param_4 = param_4 + 1;
    iVar9 = iVar9 + -1;
    in_sr = in_sr & 0xfffffffe;
  } while (iVar9 != 0);
  return;
}


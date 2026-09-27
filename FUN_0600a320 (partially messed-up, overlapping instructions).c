
/* WARNING: Instruction at (ram,0x0600a328) overlaps instruction at (ram,0x0600a326)
    */

uint * FUN_0600a320(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r9;
  int unaff_r10;
  uint *puVar11;
  uint *puVar12;
  uint *unaff_r11;
  uint *puVar13;
  uint uVar14;
  uint in_sr;
  int unaff_gbr;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  if (unaff_r9 != 0) {
    uVar4 = *(undefined4 *)(unaff_gbr + 0x68);
    unaff_r11 = unaff_r11 + unaff_r9 * 4;
    iVar5 = (int)*(char *)(unaff_gbr + 0xac);
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar8 = unaff_r11[1];
    uVar14 = *(uint *)(unaff_gbr + 0x84) & 0xffff;
    uVar2 = *(uint *)(unaff_gbr + 0x84) >> 0x10;
    uVar10 = unaff_r11[2];
    *(uint **)(unaff_gbr + 0x24) = unaff_r11;
    puVar12 = (uint *)(unaff_r10 + unaff_r9 * 0xc);
    do {
      puVar13 = unaff_r11;
      iVar5 = Onchip_DVDNTUL;
      puVar11 = puVar12 + -3;
      uVar9 = param_3[8];
      uVar17 = *puVar11;
      uVar16 = uVar9 ^ uVar17;
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      if ((int)uVar17 < 0) {
        uVar17 = -uVar17;
      }
      uVar6 = (uVar17 & 0xffff) * (uVar9 & 0xffff);
      iVar7 = (uVar17 >> 0x10) * (uVar9 & 0xffff);
      iVar15 = 0;
      uVar3 = iVar7 + (uVar17 & 0xffff) * (uVar9 >> 0x10);
      if (iVar7 != 0) {
        iVar15 = 0x10000;
      }
      uVar21 = uVar6 + uVar3 * 0x10000;
      uVar17 = iVar15 + (uint)(uVar21 < uVar6) + (uVar3 >> 0x10) +
               (uVar17 >> 0x10) * (uVar9 >> 0x10);
      if ((int)-(uint)((int)uVar16 < 0) < 0) {
        uVar17 = ~uVar17;
        if (uVar21 == 0) {
          uVar17 = uVar17 + 1;
        }
        else {
          uVar21 = ~uVar21 + 1;
        }
      }
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int)uVar17 < -0x8000) {
          uVar17 = 0xffff8000;
          uVar21 = 0;
        }
        if (0x7fff < (int)uVar17) {
          uVar17 = 0x7fff;
          uVar21 = 0xffffffff;
        }
        uVar17 = uVar17 & 0xffff;
      }
      uVar16 = param_3[9];
      uVar9 = puVar12[-2];
      uVar3 = uVar16 ^ uVar9;
      if ((int)uVar16 < 0) {
        uVar16 = -uVar16;
      }
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      uVar19 = (uVar9 & 0xffff) * (uVar16 & 0xffff);
      iVar7 = (uVar9 >> 0x10) * (uVar16 & 0xffff);
      iVar15 = 0;
      uVar6 = iVar7 + (uVar9 & 0xffff) * (uVar16 >> 0x10);
      if (iVar7 != 0) {
        iVar15 = 0x10000;
      }
      uVar20 = uVar19 + uVar6 * 0x10000;
      uVar9 = iVar15 + (uint)(uVar20 < uVar19) + (uVar6 >> 0x10) +
              (uVar9 >> 0x10) * (uVar16 >> 0x10);
      if ((int)-(uint)((int)uVar3 < 0) < 0) {
        uVar9 = ~uVar9;
        if (uVar20 == 0) {
          uVar9 = uVar9 + 1;
        }
        else {
          uVar20 = ~uVar20 + 1;
        }
      }
      if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar20 = uVar21 + uVar20;
        uVar17 = uVar9 + (uVar20 < uVar21) + (uVar17 & 0xffff);
        if ((int)uVar17 < -0x8000) {
          uVar17 = 0xffff8000;
          uVar20 = 0;
        }
        if (0x7fff < (int)uVar17) {
          uVar17 = 0x7fff;
          uVar20 = 0xffffffff;
        }
        uVar17 = uVar17 & 0xffff;
      }
      else {
        uVar20 = uVar21 + uVar20;
        uVar17 = uVar9 + (uVar20 < uVar21) + uVar17;
      }
      uVar16 = param_3[10];
      uVar9 = puVar12[-1];
      uVar3 = uVar16 ^ uVar9;
      if ((int)uVar16 < 0) {
        uVar16 = -uVar16;
      }
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      uVar21 = (uVar9 & 0xffff) * (uVar16 & 0xffff);
      iVar7 = (uVar9 >> 0x10) * (uVar16 & 0xffff);
      iVar15 = 0;
      uVar6 = iVar7 + (uVar9 & 0xffff) * (uVar16 >> 0x10);
      if (iVar7 != 0) {
        iVar15 = 0x10000;
      }
      uVar19 = uVar21 + uVar6 * 0x10000;
      uVar9 = iVar15 + (uint)(uVar19 < uVar21) + (uVar6 >> 0x10) +
              (uVar9 >> 0x10) * (uVar16 >> 0x10);
      if ((int)-(uint)((int)uVar3 < 0) < 0) {
        uVar9 = ~uVar9;
        if (uVar19 == 0) {
          uVar9 = uVar9 + 1;
        }
        else {
          uVar19 = ~uVar19 + 1;
        }
      }
      if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar19 = uVar20 + uVar19;
        uVar17 = uVar9 + (uVar19 < uVar20) + (uVar17 & 0xffff);
        if ((int)uVar17 < -0x8000) {
          uVar17 = 0xffff8000;
          uVar19 = 0;
        }
        if (0x7fff < (int)uVar17) {
          uVar17 = 0x7fff;
          uVar19 = 0xffffffff;
        }
        uVar17 = uVar17 & 0xffff;
      }
      else {
        uVar19 = uVar20 + uVar19;
        uVar17 = uVar9 + (uVar19 < uVar20) + uVar17;
      }
      Onchip_DVSR = (uVar17 << 0x10 | uVar19 >> 0x10) + param_3[0xb];
      if ((int)Onchip_DVSR < 0) {
        Onchip_DVSR = 0;
      }
      unaff_r11 = puVar13 + -4;
      iVar15 = (int)((ulonglong)((longlong)Onchip_DVDNTUL * (longlong)(int)uVar8) >> 0x20);
      sVar1 = *(short *)(unaff_gbr + 0x90);
      Onchip_DVDNTH = (int)(short)((uint)uVar4 >> 0x10);
      Onchip_DVDNTL = (int)(short)uVar4;
      puVar13[-1] = Onchip_DVSR;
      uVar16 = (uint)((ulonglong)((longlong)iVar5 * (longlong)(int)uVar10) >> 0x20);
      puVar13[2] = uVar10;
      uVar9 = (uVar8 & 0xfffffffe) + (uint)(uVar2 <= (uint)(sVar1 + iVar15));
      uVar10 = *param_3;
      uVar8 = *puVar11;
      uVar17 = uVar10 ^ uVar8;
      if ((int)uVar10 < 0) {
        uVar10 = -uVar10;
      }
      if ((int)uVar8 < 0) {
        uVar8 = -uVar8;
      }
      uVar6 = (uVar8 & 0xffff) * (uVar10 & 0xffff);
      iVar7 = (uVar8 >> 0x10) * (uVar10 & 0xffff);
      iVar5 = 0;
      uVar3 = iVar7 + (uVar8 & 0xffff) * (uVar10 >> 0x10);
      if (iVar7 != 0) {
        iVar5 = 0x10000;
      }
      uVar21 = uVar6 + uVar3 * 0x10000;
      uVar10 = iVar5 + (uint)(uVar21 < uVar6) + (uVar3 >> 0x10) + (uVar8 >> 0x10) * (uVar10 >> 0x10)
      ;
      if ((int)-(uint)((int)uVar17 < 0) < 0) {
        uVar10 = ~uVar10;
        if (uVar21 == 0) {
          uVar10 = uVar10 + 1;
        }
        else {
          uVar21 = ~uVar21 + 1;
        }
      }
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int)uVar10 < -0x8000) {
          uVar10 = 0xffff8000;
          uVar21 = 0;
        }
        if (0x7fff < (int)uVar10) {
          uVar10 = 0x7fff;
          uVar21 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
      }
      uVar17 = param_3[1];
      uVar8 = puVar12[-2];
      uVar3 = uVar17 ^ uVar8;
      if ((int)uVar17 < 0) {
        uVar17 = -uVar17;
      }
      if ((int)uVar8 < 0) {
        uVar8 = -uVar8;
      }
      uVar19 = (uVar8 & 0xffff) * (uVar17 & 0xffff);
      iVar7 = (uVar8 >> 0x10) * (uVar17 & 0xffff);
      iVar5 = 0;
      uVar6 = iVar7 + (uVar8 & 0xffff) * (uVar17 >> 0x10);
      if (iVar7 != 0) {
        iVar5 = 0x10000;
      }
      uVar20 = uVar19 + uVar6 * 0x10000;
      uVar8 = iVar5 + (uint)(uVar20 < uVar19) + (uVar6 >> 0x10) + (uVar8 >> 0x10) * (uVar17 >> 0x10)
      ;
      if ((int)-(uint)((int)uVar3 < 0) < 0) {
        uVar8 = ~uVar8;
        if (uVar20 == 0) {
          uVar8 = uVar8 + 1;
        }
        else {
          uVar20 = ~uVar20 + 1;
        }
      }
      if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar20 = uVar21 + uVar20;
        uVar10 = uVar8 + (uVar20 < uVar21) + (uVar10 & 0xffff);
        if ((int)uVar10 < -0x8000) {
          uVar10 = 0xffff8000;
          uVar20 = 0;
        }
        if (0x7fff < (int)uVar10) {
          uVar10 = 0x7fff;
          uVar20 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
      }
      else {
        uVar20 = uVar21 + uVar20;
        uVar10 = uVar8 + (uVar20 < uVar21) + uVar10;
      }
      uVar6 = (uint)(uVar14 <= (int)*(short *)(unaff_gbr + 0x92) + uVar16);
      uVar17 = param_3[2];
      uVar8 = puVar12[-1];
      uVar3 = uVar17 ^ uVar8;
      if ((int)uVar17 < 0) {
        uVar17 = -uVar17;
      }
      if ((int)uVar8 < 0) {
        uVar8 = -uVar8;
      }
      uVar19 = (uVar8 & 0xffff) * (uVar17 & 0xffff);
      iVar7 = (uVar8 >> 0x10) * (uVar17 & 0xffff);
      iVar5 = 0;
      uVar21 = iVar7 + (uVar8 & 0xffff) * (uVar17 >> 0x10);
      if (iVar7 != 0) {
        iVar5 = 0x10000;
      }
      uVar18 = uVar19 + uVar21 * 0x10000;
      uVar8 = iVar5 + (uint)(uVar18 < uVar19) + (uVar21 >> 0x10) +
              (uVar8 >> 0x10) * (uVar17 >> 0x10);
      if ((int)-(uint)((int)uVar3 < 0) < 0) {
        uVar8 = ~uVar8;
        if (uVar18 == 0) {
          uVar8 = uVar8 + 1;
        }
        else {
          uVar18 = ~uVar18 + 1;
        }
      }
      if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar18 = uVar20 + uVar18;
        uVar10 = uVar8 + (uVar18 < uVar20) + (uVar10 & 0xffff);
        if ((int)uVar10 < -0x8000) {
          uVar10 = 0xffff8000;
          uVar18 = 0;
        }
        if (0x7fff < (int)uVar10) {
          uVar10 = 0x7fff;
          uVar18 = 0xffffffff;
        }
        uVar10 = uVar10 & 0xffff;
      }
      else {
        uVar18 = uVar20 + uVar18;
        uVar10 = uVar8 + (uVar18 < uVar20) + uVar10;
      }
      puVar13[1] = uVar9 | uVar6;
      uVar8 = param_3[3];
      if ((uVar9 & 1 | uVar6) == 1) {
        iVar5 = uVar2 << 1;
        iVar7 = uVar14 << 1;
        for (; iVar5 < iVar15; iVar15 = iVar15 >> 1) {
          uVar16 = (int)uVar16 >> 1;
        }
        for (; iVar7 < (int)uVar16; uVar16 = (int)uVar16 >> 1) {
          iVar15 = iVar15 >> 1;
        }
        while( true ) {
          iVar5 = -iVar5;
          iVar7 = -iVar7;
          if (iVar5 <= iVar15) break;
          iVar15 = iVar15 >> 1;
          uVar16 = (int)uVar16 >> 1;
        }
        for (; (int)uVar16 < iVar7; uVar16 = (int)uVar16 >> 1) {
          iVar15 = iVar15 >> 1;
        }
      }
      uVar9 = param_3[4];
      uVar17 = *puVar11;
      uVar3 = uVar9 ^ uVar17;
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      if ((int)uVar17 < 0) {
        uVar17 = -uVar17;
      }
      uVar21 = (uVar17 & 0xffff) * (uVar9 & 0xffff);
      iVar7 = (uVar17 >> 0x10) * (uVar9 & 0xffff);
      iVar5 = 0;
      uVar6 = iVar7 + (uVar17 & 0xffff) * (uVar9 >> 0x10);
      if (iVar7 != 0) {
        iVar5 = 0x10000;
      }
      uVar19 = uVar21 + uVar6 * 0x10000;
      uVar17 = iVar5 + (uint)(uVar19 < uVar21) + (uVar6 >> 0x10) +
               (uVar17 >> 0x10) * (uVar9 >> 0x10);
      if ((int)-(uint)((int)uVar3 < 0) < 0) {
        uVar17 = ~uVar17;
        if (uVar19 == 0) {
          uVar17 = uVar17 + 1;
        }
        else {
          uVar19 = ~uVar19 + 1;
        }
      }
      if (((byte)(in_sr >> 1) & 1) == 1) {
        if ((int)uVar17 < -0x8000) {
          uVar17 = 0xffff8000;
          uVar19 = 0;
        }
        if (0x7fff < (int)uVar17) {
          uVar17 = 0x7fff;
          uVar19 = 0xffffffff;
        }
        uVar17 = uVar17 & 0xffff;
      }
      *puVar13 = iVar15 << 0x10 | uVar16 & 0xffff;
      iVar5 = Onchip_DVDNTUL;
      uVar16 = param_3[5];
      uVar9 = puVar12[-2];
      uVar3 = uVar16 ^ uVar9;
      if ((int)uVar16 < 0) {
        uVar16 = -uVar16;
      }
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      uVar21 = (uVar9 & 0xffff) * (uVar16 & 0xffff);
      iVar7 = (uVar9 >> 0x10) * (uVar16 & 0xffff);
      iVar15 = 0;
      uVar6 = iVar7 + (uVar9 & 0xffff) * (uVar16 >> 0x10);
      if (iVar7 != 0) {
        iVar15 = 0x10000;
      }
      uVar20 = uVar21 + uVar6 * 0x10000;
      uVar9 = iVar15 + (uint)(uVar20 < uVar21) + (uVar6 >> 0x10) +
              (uVar9 >> 0x10) * (uVar16 >> 0x10);
      if ((int)-(uint)((int)uVar3 < 0) < 0) {
        uVar9 = ~uVar9;
        if (uVar20 == 0) {
          uVar9 = uVar9 + 1;
        }
        else {
          uVar20 = ~uVar20 + 1;
        }
      }
      if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar20 = uVar19 + uVar20;
        uVar17 = uVar9 + (uVar20 < uVar19) + (uVar17 & 0xffff);
        if ((int)uVar17 < -0x8000) {
          uVar17 = 0xffff8000;
          uVar20 = 0;
        }
        if (0x7fff < (int)uVar17) {
          uVar17 = 0x7fff;
          uVar20 = 0xffffffff;
        }
        uVar17 = uVar17 & 0xffff;
      }
      else {
        uVar20 = uVar19 + uVar20;
        uVar17 = uVar9 + (uVar20 < uVar19) + uVar17;
      }
      uVar8 = (uVar10 << 0x10 | uVar18 >> 0x10) + uVar8;
      uVar9 = param_3[6];
      uVar10 = puVar12[-1];
      uVar16 = uVar9 ^ uVar10;
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      if ((int)uVar10 < 0) {
        uVar10 = -uVar10;
      }
      uVar6 = (uVar10 & 0xffff) * (uVar9 & 0xffff);
      iVar7 = (uVar10 >> 0x10) * (uVar9 & 0xffff);
      iVar15 = 0;
      uVar3 = iVar7 + (uVar10 & 0xffff) * (uVar9 >> 0x10);
      if (iVar7 != 0) {
        iVar15 = 0x10000;
      }
      uVar21 = uVar6 + uVar3 * 0x10000;
      uVar10 = iVar15 + (uint)(uVar21 < uVar6) + (uVar3 >> 0x10) +
               (uVar10 >> 0x10) * (uVar9 >> 0x10);
      if ((int)-(uint)((int)uVar16 < 0) < 0) {
        uVar10 = ~uVar10;
        if (uVar21 == 0) {
          uVar10 = uVar10 + 1;
        }
        else {
          uVar21 = ~uVar21 + 1;
        }
      }
      if (((byte)(in_sr >> 1) & 1) == 1) {
        uVar21 = uVar20 + uVar21;
        uVar17 = uVar10 + (uVar21 < uVar20) + (uVar17 & 0xffff);
        if ((int)uVar17 < -0x8000) {
          uVar17 = 0xffff8000;
          uVar21 = 0;
        }
        if (0x7fff < (int)uVar17) {
          uVar17 = 0x7fff;
          uVar21 = 0xffffffff;
        }
        uVar17 = uVar17 & 0xffff;
      }
      else {
        uVar21 = uVar20 + uVar21;
        uVar17 = uVar10 + (uVar21 < uVar20) + uVar17;
      }
      unaff_r9 = unaff_r9 + -1;
      uVar10 = (uVar17 << 0x10 | uVar21 >> 0x10) + param_3[7];
      puVar12 = puVar11;
      in_sr = in_sr & 0xfffffffe;
    } while (unaff_r9 != 0);
    iVar15 = (int)((ulonglong)((longlong)Onchip_DVDNTUL * (longlong)(int)uVar8) >> 0x20);
    sVar1 = *(short *)(unaff_gbr + 0x90);
    puVar13[-2] = uVar10;
    uVar17 = (uint)((ulonglong)((longlong)iVar5 * (longlong)(int)uVar10) >> 0x20);
    uVar10 = (uVar8 & 0xfffffffe) + (uint)(uVar2 <= (uint)(sVar1 + iVar15));
    uVar8 = (uint)(uVar14 <= (int)*(short *)(unaff_gbr + 0x92) + uVar17);
    puVar13[-3] = uVar10 | uVar8;
    if ((uVar10 & 1 | uVar8) == 1) {
      iVar5 = uVar2 << 1;
      iVar7 = uVar14 << 1;
      for (; iVar5 < iVar15; iVar15 = iVar15 >> 1) {
        uVar17 = (int)uVar17 >> 1;
      }
      for (; iVar7 < (int)uVar17; uVar17 = (int)uVar17 >> 1) {
        iVar15 = iVar15 >> 1;
      }
      while( true ) {
        iVar5 = -iVar5;
        iVar7 = -iVar7;
        if (iVar5 <= iVar15) break;
        iVar15 = iVar15 >> 1;
        uVar17 = (int)uVar17 >> 1;
      }
      for (; (int)uVar17 < iVar7; uVar17 = (int)uVar17 >> 1) {
        iVar15 = iVar15 >> 1;
      }
    }
    *unaff_r11 = iVar15 << 0x10 | uVar17 & 0xffff;
  }
  return unaff_r11;
}


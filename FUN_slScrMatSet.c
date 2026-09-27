
void _slScrMatSet(void)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint in_sr;
  bool bVar18;
  int unaff_gbr;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  *(undefined1 *)(unaff_gbr + 0xcc) = 0;
  piVar5 = *(int **)(unaff_gbr + 0x1c);
  iVar6 = *(int *)(unaff_gbr + 0x1e0);
  *(int *)(iVar6 + 0x1c) = *piVar5;
  *(int *)(iVar6 + 0x20) = piVar5[1];
  *(int *)(iVar6 + 0x24) = piVar5[2];
  *(int *)(iVar6 + 0x28) = piVar5[4];
  *(int *)(iVar6 + 0x2c) = piVar5[5];
  *(int *)(iVar6 + 0x30) = piVar5[6];
  iVar7 = (int)*(short *)(iVar6 + 0x36);
  *(int *)(iVar6 + 0x44) = piVar5[3] + *(short *)(iVar6 + 0x34) * -0x10000;
  *(int *)(iVar6 + 0x48) = piVar5[7] + iVar7 * -0x10000;
  Onchip_DVSR = Onchip_DVDNTUL;
  lVar1 = (longlong)(*(short *)(iVar6 + 0x34) * -0x10000) * (longlong)piVar5[8];
  uVar19 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar12 = (uint)lVar1;
  uVar11 = iVar7 * -0x10000;
  uVar13 = piVar5[9];
  uVar2 = uVar13 ^ uVar11;
  if ((int)uVar13 < 0) {
    uVar13 = -uVar13;
  }
  if ((int)uVar11 < 0) {
    uVar11 = iVar7 * 0x10000;
  }
  uVar21 = (uVar11 >> 0x10) * (uVar13 & 0xffff);
  iVar7 = 0;
  if (uVar21 != 0) {
    iVar7 = 0x10000;
  }
  uVar20 = uVar21 * 0x10000;
  uVar11 = iVar7 + (uVar21 >> 0x10) + (uVar11 >> 0x10) * (uVar13 >> 0x10);
  if ((int)-(uint)((int)uVar2 < 0) < 0) {
    uVar11 = ~uVar11;
    if (uVar20 == 0) {
      uVar11 = uVar11 + 1;
    }
    else {
      uVar20 = ~uVar20 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar20 = uVar12 + uVar20;
    uVar19 = uVar11 + (uVar20 < uVar12) + (uVar19 & 0xffff);
    if ((int)uVar19 < -0x8000) {
      uVar19 = 0xffff8000;
      uVar20 = 0;
    }
    if (0x7fff < (int)uVar19) {
      uVar19 = 0x7fff;
      uVar20 = 0xffffffff;
    }
    uVar19 = uVar19 & 0xffff;
  }
  else {
    uVar20 = uVar12 + uVar20;
    uVar19 = uVar11 + (uVar20 < uVar12) + uVar19;
  }
  uVar12 = *(short *)(iVar6 + 0x38) * -0x10000;
  uVar11 = piVar5[10];
  uVar13 = uVar11 ^ uVar12;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
  }
  if ((int)uVar12 < 0) {
    uVar12 = *(short *)(iVar6 + 0x38) * 0x10000;
  }
  uVar2 = (uVar12 >> 0x10) * (uVar11 & 0xffff);
  iVar7 = 0;
  if (uVar2 != 0) {
    iVar7 = 0x10000;
  }
  uVar21 = uVar2 * 0x10000;
  uVar12 = iVar7 + (uVar2 >> 0x10) + (uVar12 >> 0x10) * (uVar11 >> 0x10);
  if ((int)-(uint)((int)uVar13 < 0) < 0) {
    uVar12 = ~uVar12;
    if (uVar21 == 0) {
      uVar12 = uVar12 + 1;
    }
    else {
      uVar21 = ~uVar21 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar21 = uVar20 + uVar21;
    uVar19 = uVar12 + (uVar21 < uVar20) + (uVar19 & 0xffff);
    if ((int)uVar19 < -0x8000) {
      uVar19 = 0xffff8000;
      uVar21 = 0;
    }
    if (0x7fff < (int)uVar19) {
      uVar19 = 0x7fff;
      uVar21 = 0xffffffff;
    }
    uVar19 = uVar19 & 0xffff;
  }
  else {
    uVar21 = uVar20 + uVar21;
    uVar19 = uVar12 + (uVar21 < uVar20) + uVar19;
  }
  uVar12 = uVar19 << 0x10 | uVar21 >> 0x10;
  iVar7 = piVar5[8];
  iVar8 = piVar5[9];
  puVar9 = *(uint **)(iVar6 + 0x60);
  uVar19 = -piVar5[0xb];
  if ((*(ushort *)(iVar6 + 100) & 0x40) == 0) {
    if ((*(ushort *)(iVar6 + 100) & 2) == 0) {
      if ((int)uVar19 < 0) {
        uVar12 = -uVar12;
        iVar7 = -iVar7;
        iVar8 = -iVar8;
      }
      uVar19 = (uint)*(short *)(unaff_gbr + 0x80);
      if ((*(byte *)(unaff_gbr + 0xb0) & 8) != 0) {
        uVar19 = uVar19 >> 1;
      }
      iVar7 = iVar7 * (uVar19 - 1);
      iVar16 = 0;
      if (iVar7 < 0) {
        iVar16 = iVar7;
      }
      uVar19 = (uint)*(short *)(unaff_gbr + 0x82);
      if ((*(byte *)(unaff_gbr + 0xb0) & 8) != 0) {
        uVar19 = uVar19 >> 1;
      }
      iVar7 = iVar8 * (uVar19 - 1);
      if (iVar7 < 0) {
        iVar16 = iVar16 + iVar7;
      }
      *(uint *)(iVar6 + 0x54) = (*(uint *)(iVar6 + 0x60) >> 2) * 0x10000 + Onchip_DVDNTUL;
      uVar19 = DAT_0600924c;
      iVar16 = uVar12 + iVar16;
      iVar7 = 0x200;
      do {
        if (iVar16 < 0) {
          uVar12 = 0x80000000;
        }
        else {
          uVar12 = Onchip_DVDNTUL & uVar19;
        }
        *puVar9 = uVar12;
        iVar16 = iVar16 + Onchip_DVSR;
        iVar7 = iVar7 + -1;
        puVar9 = puVar9 + 1;
      } while (iVar7 != 0);
      *(uint *)(iVar6 + 0x5c) = Onchip_DVDNTUL;
      Onchip_DVDNTH = (int)(short)((uint)iVar8 >> 0x10);
      Onchip_DVDNTL = iVar8 << 0x10;
      *(uint *)(iVar6 + 0x58) = Onchip_DVDNTUL;
    }
    else {
      if ((int)uVar19 < 0) {
        uVar12 = -uVar12;
        iVar7 = -iVar7;
        iVar8 = -iVar8;
      }
      uVar19 = (uint)*(short *)(unaff_gbr + 0x80);
      if ((*(byte *)(unaff_gbr + 0xb0) & 8) != 0) {
        uVar19 = uVar19 >> 1;
      }
      lVar1 = (longlong)iVar7 * (longlong)(int)((uVar19 - 1) * 0x10000);
      uVar19 = 0;
      uVar11 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
      if ((int)uVar11 < 0) {
        uVar19 = uVar11;
      }
      uVar11 = (uint)*(short *)(unaff_gbr + 0x82);
      if ((*(byte *)(unaff_gbr + 0xb0) & 0x10) != 0) {
        uVar11 = uVar11 >> 1;
      }
      lVar1 = (longlong)iVar8 * (longlong)(int)((uVar11 - 1) * 0x10000);
      uVar11 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
      if ((int)uVar11 < 0) {
        uVar19 = uVar19 + uVar11;
      }
      *(uint *)(iVar6 + 0x54) = (*(uint *)(iVar6 + 0x60) & 0xffff) * 0x4000 + Onchip_DVDNTUL;
      uVar4 = DAT_06009150;
      iVar16 = uVar12 + uVar19;
      iVar7 = (int)DAT_06009152;
      do {
        if (iVar16 < 0) {
          uVar10 = 0x8000;
        }
        else {
          uVar10 = (ushort)(Onchip_DVDNTUL >> 6) & uVar4;
        }
        *(ushort *)puVar9 = uVar10;
        iVar16 = iVar16 + Onchip_DVSR;
        iVar7 = iVar7 + -1;
        puVar9 = (uint *)((int)puVar9 + 2);
      } while (iVar7 != 0);
      *(uint *)(iVar6 + 0x5c) = Onchip_DVDNTUL;
      Onchip_DVDNTH = (int)(short)((uint)iVar8 >> 0x10);
      Onchip_DVDNTL = iVar8 << 0x10;
      *(uint *)(iVar6 + 0x58) = Onchip_DVDNTUL;
    }
  }
  else {
    Onchip_DVSR = uVar19;
    if ((int)uVar19 < 0) {
      uVar12 = -uVar12;
      iVar7 = -iVar7;
      iVar8 = -iVar8;
      Onchip_DVSR = piVar5[0xb];
    }
    Onchip_DVDNTH = (int)(short)((uint)PTR_DAT_060092e8 >> 0x10);
    Onchip_DVDNTL = (int)PTR_DAT_060092e8 << 0x10;
    uVar19 = (uint)*(short *)(unaff_gbr + 0x80);
    if ((*(byte *)(unaff_gbr + 0xb0) & 8) != 0) {
      uVar19 = uVar19 >> 1;
    }
    uVar19 = iVar7 * (uVar19 - 1);
    uVar11 = 0;
    if ((int)uVar19 < 0) {
      uVar11 = -uVar19;
      uVar19 = 0;
    }
    uVar13 = (uint)*(short *)(unaff_gbr + 0x82);
    if ((*(byte *)(unaff_gbr + 0xb0) & 8) != 0) {
      uVar13 = uVar13 >> 1;
    }
    iVar16 = iVar8 * (uVar13 - 1);
    if (iVar16 < 0) {
      uVar11 = uVar11 - iVar16;
    }
    else {
      uVar19 = uVar19 + iVar16;
    }
    if ((int)uVar12 < 0) {
      uVar11 = uVar11 - uVar12;
    }
    else {
      uVar19 = uVar19 + uVar12;
    }
    if (uVar19 < uVar11) {
      uVar19 = uVar11;
    }
    iVar16 = 0x11;
    bVar18 = true;
    do {
      bVar3 = (uVar19 & 0x80000000) != 0;
      uVar19 = uVar19 << 1 | (uint)bVar18;
      iVar16 = iVar16 + -1;
      bVar18 = bVar3;
    } while (!bVar3);
    iVar14 = 0x11;
    uVar19 = Onchip_DVDNTUL;
    bVar18 = true;
    do {
      bVar3 = (uVar19 & 0x80000000) != 0;
      uVar19 = uVar19 << 1 | (uint)bVar18;
      iVar14 = iVar14 + -1;
      bVar18 = bVar3;
    } while (!bVar3);
    uVar19 = 0;
    puVar9 = (uint *)(iVar6 + 0x1c);
    iVar15 = 6;
    do {
      uVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      if ((int)uVar11 < 0) {
        uVar11 = -uVar11;
      }
      uVar19 = uVar19 | uVar11;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    iVar15 = 0x1b;
    bVar18 = true;
    do {
      bVar3 = (uVar19 & 0x80000000) != 0;
      uVar19 = uVar19 << 1 | (uint)bVar18;
      iVar15 = iVar15 + -1;
      bVar18 = bVar3;
    } while (!bVar3);
    iVar17 = iVar16 + iVar14;
    if (iVar16 + iVar14 < iVar15) {
      iVar17 = iVar15;
    }
    uVar19 = Onchip_DVDNTUL;
    if (iVar17 + -0xd != 0) {
      iVar16 = *(int *)(&DAT_06009404 + (0xf - (iVar17 + -0xd)) * 4);
      uVar19 = (int)((ulonglong)((longlong)(int)Onchip_DVDNTUL * (longlong)iVar16) >> 0x20) << 0x10
               | (uint)((longlong)(int)Onchip_DVDNTUL * (longlong)iVar16) >> 0x10;
      *(uint *)(iVar6 + 0x1c) =
           (int)((ulonglong)((longlong)*piVar5 * (longlong)iVar16) >> 0x20) << 0x10 |
           (uint)((longlong)*piVar5 * (longlong)iVar16) >> 0x10;
      *(uint *)(iVar6 + 0x20) =
           (int)((ulonglong)((longlong)piVar5[1] * (longlong)iVar16) >> 0x20) << 0x10 |
           (uint)((longlong)piVar5[1] * (longlong)iVar16) >> 0x10;
      *(uint *)(iVar6 + 0x24) =
           (int)((ulonglong)((longlong)piVar5[2] * (longlong)iVar16) >> 0x20) << 0x10 |
           (uint)((longlong)piVar5[2] * (longlong)iVar16) >> 0x10;
      *(uint *)(iVar6 + 0x28) =
           (int)((ulonglong)((longlong)piVar5[4] * (longlong)iVar16) >> 0x20) << 0x10 |
           (uint)((longlong)piVar5[4] * (longlong)iVar16) >> 0x10;
      *(uint *)(iVar6 + 0x2c) =
           (int)((ulonglong)((longlong)piVar5[5] * (longlong)iVar16) >> 0x20) << 0x10 |
           (uint)((longlong)piVar5[5] * (longlong)iVar16) >> 0x10;
      *(uint *)(iVar6 + 0x30) =
           (int)((ulonglong)((longlong)piVar5[6] * (longlong)iVar16) >> 0x20) << 0x10 |
           (uint)((longlong)piVar5[6] * (longlong)iVar16) >> 0x10;
    }
    *(uint *)(iVar6 + 0x54) =
         (*(uint *)(iVar6 + 0x60) >> 2) * 0x10000 +
         ((int)((ulonglong)((longlong)(int)uVar12 * (longlong)(int)uVar19) >> 0x20) << 0x10 |
         (uint)((longlong)(int)uVar12 * (longlong)(int)uVar19) >> 0x10) + 0x40000000;
    *(uint *)(iVar6 + 0x5c) =
         (int)((ulonglong)((longlong)iVar7 * (longlong)(int)uVar19) >> 0x20) << 0x10 |
         (uint)((longlong)iVar7 * (longlong)(int)uVar19) >> 0x10;
    *(uint *)(iVar6 + 0x58) =
         (int)((ulonglong)((longlong)iVar8 * (longlong)(int)uVar19) >> 0x20) << 0x10 |
         (uint)((longlong)iVar8 * (longlong)(int)uVar19) >> 0x10;
  }
  *(undefined1 *)(unaff_gbr + 0xcc) = 1;
  return;
}


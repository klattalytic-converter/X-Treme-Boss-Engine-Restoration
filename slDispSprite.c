
/* WARNING: Instruction at (ram,0x060088c0) overlaps instruction at (ram,0x060088be)
    */

bool slDispSprite(undefined4 *pos,uint atrb,uint z_ang)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint extraout_r2;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int unaff_gbr;
  
  (*(code *)PTR_SpriteEntry_06008948)();
  iVar8 = pos[3];
  puVar7 = *(undefined4 **)(unaff_gbr + 0x48);
  if (iVar8 == 0) {
    return false;
  }
  puVar11 = (undefined2 *)(atrb & 0xfffffffe);
  puVar7[1] = (int)(short)puVar11[4] << 0x10 | extraout_r2 >> 0x10;
  if (iVar8 < 1) {
    lVar5 = (ulonglong)(uint)-iVar8 * (ulonglong)*(uint *)(unaff_gbr + 0x68);
    Onchip_DVDNTH = (int)(short)((ulonglong)lVar5 >> 0x20);
    Onchip_DVDNTL = (uint)lVar5 & 0xffff0000;
    uVar2 = *puVar11;
    uVar3 = puVar11[3];
    Onchip_DVSR = extraout_r2;
    puVar7[3] = *(undefined4 *)(puVar11 + 1);
    puVar7[2] = CONCAT22(uVar2,uVar3);
    puVar7[6] = Onchip_DVDNTUL;
  }
  else {
    puVar7[6] = iVar8;
    uVar2 = *puVar11;
    uVar3 = puVar11[3];
    puVar7[3] = *(undefined4 *)(puVar11 + 1);
    puVar7[2] = CONCAT22(uVar2,uVar3);
  }
  uVar9 = pos[1];
  puVar7[4] = *pos;
  uVar12 = z_ang & 0xffff;
  puVar7[5] = uVar9;
  if (uVar12 != 0) {
    uVar10 = ((z_ang & 0xff00) >> 8 & 0xc0) >> 4;
    uVar4 = *(ushort *)
             (PTR_DAT_06008950 + ((uVar12 ^ (int)(char)(&DAT_06008955)[uVar10]) & (int)DAT_06008964)
             );
    cVar1 = *(char *)((int)&PTR_DAT_06008957 + uVar10);
    puVar7[7] = *(ushort *)
                 (PTR_DAT_06008950 +
                 ((uVar12 ^ (int)(char)(&DAT_06008954)[uVar10]) & (int)DAT_06008964)) + 2 ^
                (int)(char)(&DAT_06008956)[uVar10];
    puVar7[8] = uVar4 + 2 ^ (int)cVar1;
    *puVar7 = 0x18;
    puVar7 = puVar7 + 9;
    *puVar7 = 0;
    puVar6 = PTR_DAT_0600894c;
    *(undefined4 **)(unaff_gbr + 0x48) = puVar7;
    *(short *)puVar6 = (short)puVar7;
    return SUB41(puVar7,0);
  }
  *puVar7 = 0x1c;
  puVar7 = puVar7 + 7;
  *puVar7 = 0;
  puVar6 = PTR_DAT_0600894c;
  *(undefined4 **)(unaff_gbr + 0x48) = puVar7;
  *(short *)puVar6 = (short)puVar7;
  return SUB41(puVar7,0);
}


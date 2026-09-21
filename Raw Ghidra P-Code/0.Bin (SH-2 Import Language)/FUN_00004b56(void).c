/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00004b56(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined1 *extraout_r2;
  char *pcVar7;
  int unaff_gbr;
  int local_8;
  
  pcVar7 = (char *)&DAT_00004cac;
  puVar3 = *(undefined1 **)(unaff_gbr + 0x370);
  iVar6 = 8;
  pcVar4 = *(code **)(unaff_gbr + 0x374);
  local_8 = 0;
  do {
    if (*pcVar7 == 'p') {
      cVar5 = pcVar7[1];
      FUN_00004c12(cVar5,*(int *)(pcVar7 + 8));
      puVar3[2] = (byte)((uint)(int)cVar5 >> 4) & 7;
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      *puVar3 = 0x86;
      (*pcVar4)();
      local_8 = local_8 + 1;
      puVar3 = extraout_r2;
    }
    uVar2 = DAT_00004c78;
    pcVar1 = DAT_00004c74;
    iVar6 = iVar6 + -1;
    pcVar7 = pcVar7 + 0x14;
  } while (iVar6 != 0);
  if (local_8 != 0) {
    cVar5 = *(char *)(unaff_gbr + 0xb5);
    iVar6 = (int)cVar5;
    if (0 < cVar5) {
      _DAT_ffffff88 = (int)cVar5 << 3;
      cVar5 = *DAT_00004c74;
      while (iVar6 = 0x30, cVar5 < '\0') {
        do {
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        cVar5 = *DAT_00004c74;
      }
      *(undefined **)(unaff_gbr + 0x370) = &DAT_00004d4c;
      do {
      } while ((_DAT_ffffff8c & 3) == 1);
      do {
      } while ((_DAT_ffffff8c & 3) == 1);
      DAT_fffffe71 = 0;
      _DAT_ffffff80 = &DAT_00004d4c;
      _DAT_ffffff84 = uVar2;
      _DAT_ffffff8c = (uint)DAT_00004c10;
      _DAT_ffffffb0 = 9;
      *pcVar1 = -0x80;
      iVar6 = 0;
      *(undefined1 *)(unaff_gbr + 0xb5) = 0;
    }
    return iVar6;
  }
  return 0;
}


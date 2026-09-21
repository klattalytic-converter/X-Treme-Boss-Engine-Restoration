
undefined4 * FUN_0000ab64(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = &DAT_0000ab7c;
  iVar2 = 8;
  puVar4 = DAT_0000ab78;
  do {
    uVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar4 = uVar3;
  } while (iVar2 != 0);
  return puVar1;
}


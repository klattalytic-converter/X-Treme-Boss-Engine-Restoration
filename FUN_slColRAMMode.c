
void _slColRAMMode(short param_1)

{
  undefined *puVar1;
  ushort uVar2;
  int unaff_gbr;
  
  puVar1 = PTR_VDP2_RAMCTL_0600b710;
  uVar2 = *(ushort *)(unaff_gbr + 0xce) & DAT_0600b714 | param_1 << 0xc;
  *(ushort *)(unaff_gbr + 0xce) = uVar2;
  *(ushort *)puVar1 = uVar2;
  return;
}


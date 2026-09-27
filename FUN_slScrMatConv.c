
void _slScrMatConv(void)

{
  int iVar1;
  int unaff_gbr;
  
  (*(code *)PTR__slInversMatrix_06008f98)();
  iVar1 = *(int *)(unaff_gbr + 0x1c);
  *(int *)(iVar1 + 8) = -*(int *)(iVar1 + 8);
  *(int *)(iVar1 + 0x18) = -*(int *)(iVar1 + 0x18);
  *(int *)(iVar1 + 0x28) = -*(int *)(iVar1 + 0x28);
  return;
}


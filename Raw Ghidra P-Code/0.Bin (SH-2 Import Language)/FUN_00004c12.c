/* WARNING: Instruction at (ram,0x00004c40) overlaps instruction at (ram,0x00004c3e)      
    */
void FUN_00004c12(char param_1,int param_2)

{
    uint uVar1;
    int iVar2;
    ushort uVar3;
    int unaff_gbr;

    uVar1 = ((int)param_1 & 3U) << 1 | (uint)(((int)param_1 & 0x80000000U) != 0);
    uVar3 = (ushort)(char)(&DAT_00004c90)[uVar1];
    for (iVar2 = (*(char *)(unaff_gbr + 0xb1) + -1) -
                 (((param_2 - *DAT_00004c84) + (int)*(short *)(&DAT_00004c98 + uVar1 * 2) &
                  0x1fffffffJ) >> 0xd & 0xf); iVar2 != 0; iVar2 = iVar2 + -1) {
     uVar3 = uVar3 << 1;
 }
 *(ushort *)(unaff_gbr + 0xb2) = *(ushort *)(unaff_gbr + 0xb2) & ~uVar3;
 return;
}

void _slLookAt(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  (*(code *)PTR__slRotZSC_06008ea4)(param_3);
  iVar3 = *param_1 - *param_2;
  iVar4 = param_2[2] - param_1[2];
  lVar5 = (longlong)iVar3 * (longlong)iVar3 + (longlong)iVar4 * (longlong)iVar4;
  iVar2 = param_2[1] - param_1[1];
  Onchip_DVSR = (*(code *)PTR_slSquartDbl_06008ea8)
                          ((int)((ulonglong)(lVar5 + (longlong)iVar2 * (longlong)iVar2) >> 0x20));
  Onchip_DVDNTH = (int)(short)((uint)iVar2 >> 0x10);
  Onchip_DVDNTL = iVar2 * 0x10000;
  uVar1 = (*(code *)PTR_slSquartDbl_06008ea8)((int)((ulonglong)lVar5 >> 0x20),(int)lVar5);
  Onchip_DVDNTH = (int)(short)((uint)iVar3 >> 0x10);
  Onchip_DVDNTL = iVar3 * 0x10000;
  Onchip_DVSR = uVar1;
  (*(code *)PTR_FUN_06008eac)(Onchip_DVDNTUL,Onchip_DVDNTUL);
  Onchip_DVDNTH = (int)(short)((uint)iVar4 >> 0x10);
  Onchip_DVDNTL = iVar4 * 0x10000;
  Onchip_DVSR = uVar1;
  (*(code *)PTR_FUN_06008eb0)(Onchip_DVDNTUL,Onchip_DVDNTUL);
  (*(code *)PTR__slTranslate_06008eb4)(-*param_1,-param_1[1],-param_1[2]);
  return;
}



int FUN_0600abd8(undefined4 *param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  pbVar5 = (byte *)*param_1;
  iVar6 = *param_2;
  sVar1 = *(short *)PTR_DAT_0600ad4c;
  uVar2 = (int)(char)*pbVar5 & 0xf;
  pbVar4 = pbVar5 + 1;
  if (((int)(char)*pbVar5 != 0xfffffff0) && (uVar2 == 0)) {
    *pbVar5 = (byte)((uint)(int)(char)*pbVar5 >> 4) | 0xf0;
    uVar2 = 1;
    pbVar4 = pbVar5;
  }
  iVar7 = 0xf;
  do {
    if (uVar2 == 0) {
      pbVar4 = pbVar4 + -1;
      uVar3 = 0xffffffff;
      *pbVar4 = 0xff;
    }
    else {
      uVar3 = (uint)(char)*pbVar4;
      uVar2 = uVar2 - 1;
      if (uVar3 != 0xffffffff) {
        iVar8 = iVar8 + 1;
      }
    }
    pbVar4 = (byte *)(**(code **)(PTR_PTR_0600ac70 +
                                 *(byte *)((uVar3 & 0xf) +
                                          *(int *)(PTR_PTR_0600ac74 + ((uVar3 & 0xf0) >> 2)))))
                               (pbVar4,iVar6,(int)sVar1);
    iVar6 = iVar6 + sVar1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *param_1 = pbVar4;
  *param_2 = iVar6;
  return iVar8;
}


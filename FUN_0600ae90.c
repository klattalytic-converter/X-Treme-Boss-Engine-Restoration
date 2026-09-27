
undefined4 FUN_0600ae90(undefined1 *param_1,uint param_2)

{
  char cVar1;
  byte *pbVar2;
  
  pbVar2 = PTR_SMPC_SF_0600aedc;
  do {
  } while ((*PTR_SMPC_SF_0600aedc & 1) != 0);
  cVar1 = param_1[2];
  *PTR_SMPC_SF_0600aedc = 1;
  if (*(code **)(&DAT_0600aecc + cVar1) != (code *)0x0) {
    (**(code **)(&DAT_0600aecc + cVar1))();
  }
  *PTR_SMPC_COMREG_0600aee4 = *param_1;
  if ((param_2 & 0xff) != 0) {
    do {
    } while ((*pbVar2 & 1) != 0);
  }
  return 0;
}


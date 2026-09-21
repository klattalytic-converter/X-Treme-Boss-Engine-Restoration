
undefined4 FUN_00006e90(undefined1 *param_1,uint param_2)

{
  char cVar1;
  byte *pbVar2;
  
  pbVar2 = DAT_00006edc;
  do {
  } while ((*DAT_00006edc & 1) != 0);
  cVar1 = param_1[2];
  *DAT_00006edc = 1;
  if (*(code **)(&DAT_00006ecc + cVar1) != (code *)0x0) {
    (**(code **)(&DAT_00006ecc + cVar1))();
  }
  *DAT_00006ee4 = *param_1;
  if ((param_2 & 0xff) != 0) {
    do {
    } while ((*pbVar2 & 1) != 0);
  }
  return 0;
}


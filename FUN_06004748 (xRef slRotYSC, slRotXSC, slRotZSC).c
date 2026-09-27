
undefined8 FUN_06004748(uint param_1)

{
  uint uVar1;
  
  uVar1 = ((param_1 & 0xff00) >> 8 & 0xe0) >> 2;
  return CONCAT44((int)*(char *)((int)&PTR_DAT_060047e3 + uVar1),(int)(char)(&DAT_060047e2)[uVar1]);
}


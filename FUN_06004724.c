
int FUN_06004724(uint param_1)

{
  uint uVar1;
  
  uVar1 = ((param_1 & 0xff00) >> 8 & 0xe0) >> 2;
  return ((uint)*(ushort *)
                 (((param_1 ^ (int)(char)(&DAT_060047a2)[uVar1]) & (int)DAT_06004788) +
                 *(int *)((int)&PTR_PTR_0600479c + uVar1)) ^ (int)(char)(&DAT_060047a0)[uVar1]) +
         (int)(char)(&DAT_060047a1)[uVar1];
}


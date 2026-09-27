
int _sin_tbl(uint param_1)

{
  uint uVar1;
  
  uVar1 = ((param_1 & 0xff00) >> 8 & 0xe0) >> 2;
  return ((uint)*(ushort *)
                 (((param_1 ^ (int)(char)(&DAT_06004792)[uVar1]) & (int)DAT_06004788) +
                 *(int *)((int)&PTR_DAT_0600478c + uVar1)) ^ (int)(char)(&DAT_06004790)[uVar1]) +
         (int)(char)(&DAT_06004791)[uVar1];
}


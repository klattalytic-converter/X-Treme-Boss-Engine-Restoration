
uint _slMulFX(int param_1,int param_2)

{
  return (int)((ulonglong)((longlong)param_2 * (longlong)param_1) >> 0x20) << 0x10 |
         (uint)((longlong)param_2 * (longlong)param_1) >> 0x10;
}


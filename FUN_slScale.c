
void _slScale(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int unaff_gbr;
  
  puVar1 = *(uint **)(unaff_gbr + 0x1c);
  *puVar1 = (int)((ulonglong)((longlong)(int)*puVar1 * (longlong)param_1) >> 0x20) << 0x10 |
            (uint)((longlong)(int)*puVar1 * (longlong)param_1) >> 0x10;
  puVar1[1] = (int)((ulonglong)((longlong)(int)puVar1[1] * (longlong)param_2) >> 0x20) << 0x10 |
              (uint)((longlong)(int)puVar1[1] * (longlong)param_2) >> 0x10;
  puVar1[2] = (int)((ulonglong)((longlong)(int)puVar1[2] * (longlong)param_3) >> 0x20) << 0x10 |
              (uint)((longlong)(int)puVar1[2] * (longlong)param_3) >> 0x10;
  puVar1[4] = (int)((ulonglong)((longlong)(int)puVar1[4] * (longlong)param_1) >> 0x20) << 0x10 |
              (uint)((longlong)(int)puVar1[4] * (longlong)param_1) >> 0x10;
  puVar1[5] = (int)((ulonglong)((longlong)(int)puVar1[5] * (longlong)param_2) >> 0x20) << 0x10 |
              (uint)((longlong)(int)puVar1[5] * (longlong)param_2) >> 0x10;
  puVar1[6] = (int)((ulonglong)((longlong)(int)puVar1[6] * (longlong)param_3) >> 0x20) << 0x10 |
              (uint)((longlong)(int)puVar1[6] * (longlong)param_3) >> 0x10;
  puVar1[8] = (int)((ulonglong)((longlong)(int)puVar1[8] * (longlong)param_1) >> 0x20) << 0x10 |
              (uint)((longlong)(int)puVar1[8] * (longlong)param_1) >> 0x10;
  puVar1[9] = (int)((ulonglong)((longlong)(int)puVar1[9] * (longlong)param_2) >> 0x20) << 0x10 |
              (uint)((longlong)(int)puVar1[9] * (longlong)param_2) >> 0x10;
  puVar1[10] = (int)((ulonglong)((longlong)(int)puVar1[10] * (longlong)param_3) >> 0x20) << 0x10 |
               (uint)((longlong)(int)puVar1[10] * (longlong)param_3) >> 0x10;
  return;
}


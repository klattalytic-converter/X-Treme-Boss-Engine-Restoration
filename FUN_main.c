
void main(void)

{
  Onchip_CCR = 0x11;
  (*(code *)PTR_FUN_06004024)();
  return;
}


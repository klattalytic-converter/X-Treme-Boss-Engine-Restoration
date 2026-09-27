
uint _slDMAWait(void)

{
  do {
  } while ((Onchip_CHCR0 & 3) == 1);
  return Onchip_CHCR0 & 3;
}


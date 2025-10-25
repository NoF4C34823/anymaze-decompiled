
void FUN_1405521e0(void)

{
  uint in_stack_00000050;
  
  if ((in_stack_00000050 & 0x100) != 0) {
    FUN_1405522e0();
    return;
  }
  if ((in_stack_00000050 & 0x20) == 0) {
    if ((in_stack_00000050 & 0x10) != 0) {
      FUN_140559000();
      return;
    }
    FUN_140d2ae60();
    return;
  }
  FUN_140555c00();
  return;
}


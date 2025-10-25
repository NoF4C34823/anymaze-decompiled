
void FUN_1405a9220(void)

{
  uint in_stack_00000050;
  
  if ((in_stack_00000050 & 0x100) != 0) {
    FUN_140d39e80();
    return;
  }
  if ((in_stack_00000050 & 0x20) == 0) {
    if ((in_stack_00000050 & 0x10) != 0) {
      FUN_140d367a0();
      return;
    }
    FUN_140d37f80();
    return;
  }
  FUN_140d38e40();
  return;
}


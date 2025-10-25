
void FUN_14046bec0(void)

{
  uint in_stack_00000050;
  
  if ((in_stack_00000050 & 0x100) != 0) {
    FUN_14046bfc0();
    return;
  }
  if ((in_stack_00000050 & 0x20) == 0) {
    if ((in_stack_00000050 & 0x10) != 0) {
      FUN_140471e80();
      return;
    }
    FUN_140d13980();
    return;
  }
  FUN_14046fbc0();
  return;
}


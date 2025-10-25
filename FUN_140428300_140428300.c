
void FUN_140428300(void)

{
  uint in_stack_00000050;
  
  if ((in_stack_00000050 & 0x100) != 0) {
    FUN_140428400();
    return;
  }
  if ((in_stack_00000050 & 0x20) == 0) {
    if ((in_stack_00000050 & 0x10) != 0) {
      FUN_14042e500();
      return;
    }
    FUN_140d0e5a0();
    return;
  }
  FUN_14042c020();
  return;
}


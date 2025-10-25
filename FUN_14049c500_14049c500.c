
void FUN_14049c500(void)

{
  uint in_stack_00000050;
  
  if ((in_stack_00000050 & 0x100) != 0) {
    FUN_14049c600();
    return;
  }
  if ((in_stack_00000050 & 0x20) == 0) {
    if ((in_stack_00000050 & 0x10) != 0) {
      FUN_1404a1ea0();
      return;
    }
    FUN_140d18d20();
    return;
  }
  FUN_14049fb20();
  return;
}


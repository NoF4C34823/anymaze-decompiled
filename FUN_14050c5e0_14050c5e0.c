
void FUN_14050c5e0(void)

{
  uint in_stack_00000050;
  
  if ((in_stack_00000050 & 0x100) != 0) {
    FUN_14050c6e0();
    return;
  }
  if ((in_stack_00000050 & 0x20) == 0) {
    if ((in_stack_00000050 & 0x10) != 0) {
      FUN_1405132e0();
      return;
    }
    FUN_140d24460();
    return;
  }
  FUN_14050ffe0();
  return;
}


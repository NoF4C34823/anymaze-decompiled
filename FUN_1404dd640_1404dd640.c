
void FUN_1404dd640(void)

{
  uint in_stack_00000050;
  
  if ((in_stack_00000050 & 0x100) != 0) {
    FUN_1404dd740();
    return;
  }
  if ((in_stack_00000050 & 0x20) == 0) {
    if ((in_stack_00000050 & 0x10) != 0) {
      FUN_1404e2e00();
      return;
    }
    FUN_140d1f660();
    return;
  }
  FUN_1404e0c60();
  return;
}


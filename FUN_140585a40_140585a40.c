
void FUN_140585a40(void)

{
  uint in_stack_00000050;
  
  if ((in_stack_00000050 & 0x100) != 0) {
    FUN_140d33620();
    return;
  }
  if ((in_stack_00000050 & 0x20) == 0) {
    if ((in_stack_00000050 & 0x10) != 0) {
      FUN_140d300a0();
      return;
    }
    FUN_140d31820();
    return;
  }
  FUN_140d326c0();
  return;
}


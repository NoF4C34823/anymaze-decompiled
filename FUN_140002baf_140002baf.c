
void FUN_140002baf(undefined8 param_1,int param_2,byte param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,int *param_7)

{
  int iVar1;
  
  if (param_7 != (int *)0x0) {
    if (param_2 == 1) {
      iVar1 = 0x100;
      if (param_3 != 0) {
        iVar1 = param_3 + 1;
      }
      *param_7 = iVar1;
      *(undefined8 *)(param_7 + 4) = param_4;
      *(undefined8 *)(param_7 + 6) = param_5;
    }
    else if (param_2 == 0) {
      *param_7 = 0;
    }
    if (*(longlong *)(param_7 + 10) != 0) {
      (*(code *)PTR__guard_dispatch_icall_142febe98)();
    }
  }
  return;
}



ulonglong FUN_140002f14(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  *param_1 = 0;
  if ((undefined2 *)param_1[2] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[2] = 0;
  }
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    cVar1 = FUN_140002e0a(param_1,param_3);
    if (cVar1 != '\0') {
      FUN_142c94b90(param_1[2],param_2,param_3 * 2);
      if (param_3 <= param_1[1]) {
        *param_1 = param_3;
        if (param_1[2] != 0) {
          *(undefined2 *)(param_1[2] + param_3 * 2) = 0;
        }
        goto LAB_140002f6a;
      }
    }
    uVar2 = 0;
  }
LAB_140002f6a:
  return uVar2 & 0xffffffff;
}


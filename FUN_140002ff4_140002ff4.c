
ulonglong FUN_140002ff4(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 != 0) {
    uVar2 = *param_1 + param_3;
    if (!CARRY8(*param_1,param_3)) {
      cVar1 = FUN_140002e0a(param_1,uVar2);
      if (cVar1 != '\0') {
        FUN_142c94b90(*param_1 * 2 + param_1[2],param_2,param_3 * 2);
        if (uVar2 <= param_1[1]) {
          *param_1 = uVar2;
          if (param_1[2] != 0) {
            *(undefined2 *)(param_1[2] + uVar2 * 2) = 0;
          }
          goto LAB_140003047;
        }
      }
    }
    uVar3 = 0;
  }
LAB_140003047:
  return uVar3 & 0xffffffff;
}


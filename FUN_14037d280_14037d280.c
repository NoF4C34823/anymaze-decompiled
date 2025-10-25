
void FUN_14037d280(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong param_7,undefined4 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  param_2 = param_2 >> 2;
  lVar3 = param_6[1];
  lVar2 = *param_6;
  lVar1 = *param_5;
  uVar5 = lVar1 + 7U & 0xfffffffffffffff8;
  param_1 = param_1 + ((longlong)(int)(lVar2 - 1U >> 1) + (int)(lVar3 - 1U >> 1) * param_2) * -4;
  if (param_7 == 0) {
    lVar6 = 0;
    lVar4 = param_9;
    if (0 < (longlong)(lVar3 - 1U)) {
      while( true ) {
        FUN_1403bffa0(param_1,lVar4,lVar1,lVar2,1);
        lVar3 = param_6[1];
        lVar6 = lVar6 + 1;
        param_1 = param_1 + param_2 * 4;
        lVar4 = lVar4 + uVar5 * 4;
        if (lVar3 + -1 <= lVar6) break;
        lVar2 = *param_6;
      }
    }
    lVar3 = lVar3 + -1;
    lVar2 = 0;
    if (0 < param_5[1]) {
      do {
        FUN_1403bffa0(param_1,lVar4,lVar1,*param_6,1);
        thunk_FUN_142d25930(param_9,uVar5,param_3,lVar1,param_6[1]);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + uVar5 * 4;
        if (param_6[1] <= lVar3) {
          lVar3 = 0;
          lVar4 = param_9;
        }
        param_1 = param_1 + param_2 * 4;
        param_3 = param_3 + (param_4 >> 2) * 4;
      } while (lVar2 < param_5[1]);
    }
  }
  else {
    FUN_1403d1560(param_1,param_2,param_3,param_4 >> 2,lVar1,param_5[1],lVar2,lVar3,param_7,param_8,
                  1);
  }
  return;
}


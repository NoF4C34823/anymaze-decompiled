
void FUN_1402fa8c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong param_7,undefined4 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_2 = param_2 >> 2;
  lVar4 = param_6[1];
  lVar6 = *param_6;
  lVar1 = *param_5;
  uVar3 = lVar1 + 7U & 0xfffffffffffffff8;
  param_1 = param_1 + ((longlong)(int)(lVar6 - 1U >> 1) + (int)(lVar4 - 1U >> 1) * param_2) * -4;
  if (param_7 == 0) {
    lVar5 = 0;
    lVar2 = param_9;
    if (0 < (longlong)(lVar4 - 1U)) {
      while( true ) {
        FUN_1402fd0c0(param_1,lVar2,lVar1,lVar6,1);
        lVar4 = param_6[1];
        lVar5 = lVar5 + 1;
        param_1 = param_1 + param_2 * 4;
        lVar2 = lVar2 + uVar3 * 4;
        if (lVar4 + -1 <= lVar5) break;
        lVar6 = *param_6;
      }
    }
    lVar4 = lVar4 + -1;
    lVar6 = 0;
    if (0 < param_5[1]) {
      do {
        FUN_1402fd0c0(param_1,lVar2,lVar1,*param_6,1);
        thunk_FUN_142d22130(param_9,uVar3,param_3,lVar1,param_6[1]);
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 1;
        param_1 = param_1 + param_2 * 4;
        param_3 = param_3 + (param_4 >> 2) * 4;
        lVar2 = lVar2 + uVar3 * 4;
        if (param_6[1] <= lVar4) {
          lVar4 = 0;
          lVar2 = param_9;
        }
      } while (lVar6 < param_5[1]);
    }
  }
  else {
    FUN_140311b40(param_1,param_2,param_3,param_4 >> 2,lVar1,param_5[1],lVar6,lVar4,param_7,param_8,
                  1);
  }
  return;
}


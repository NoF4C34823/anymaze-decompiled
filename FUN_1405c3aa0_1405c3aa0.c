
void FUN_1405c3aa0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong param_7,undefined4 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_2 = param_2 >> 1;
  lVar2 = param_6[1];
  lVar5 = *param_6;
  lVar1 = *param_5;
  uVar3 = lVar1 + 0xfU & 0xfffffffffffffff0;
  param_1 = param_1 + ((longlong)(int)(lVar5 - 1U >> 1) + (int)(lVar2 - 1U >> 1) * param_2) * -2;
  param_4 = param_4 >> 1;
  if (param_7 == 0) {
    if ((lVar5 == 3) && (lVar2 == 3)) {
      FUN_1405be600(param_1,param_2,param_3,param_4);
      return;
    }
    lVar4 = 0;
    lVar6 = param_9;
    if (0 < (longlong)(lVar2 - 1U)) {
      while( true ) {
        thunk_FUN_140d3bc20(param_1,lVar6,lVar1,lVar5,1);
        lVar2 = param_6[1];
        lVar4 = lVar4 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar6 = lVar6 + uVar3 * 2;
        if (lVar2 + -1 <= lVar4) break;
        lVar5 = *param_6;
      }
    }
    lVar5 = 0;
    lVar2 = lVar2 + -1;
    if (0 < param_5[1]) {
      do {
        thunk_FUN_140d3bc20(param_1,lVar6,lVar1,*param_6,1);
        thunk_FUN_140d3c160(param_9,uVar3,param_3,lVar1,param_6[1]);
        lVar2 = lVar2 + 1;
        lVar5 = lVar5 + 1;
        param_1 = param_1 + param_2 * 2;
        param_3 = param_3 + param_4 * 2;
        lVar6 = lVar6 + uVar3 * 2;
        if (param_6[1] <= lVar2) {
          lVar2 = 0;
          lVar6 = param_9;
        }
      } while (lVar5 < param_5[1]);
    }
  }
  else {
    thunk_FUN_140d3c3c0(param_1,param_2,param_3,param_4,lVar1,param_5[1],lVar5,lVar2,param_7,param_8
                        ,1);
  }
  return;
}


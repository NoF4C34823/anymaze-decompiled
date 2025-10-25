
void FUN_1405066e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong param_7,undefined4 param_8,
                  longlong param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  param_2 = param_2 >> 2;
  lVar4 = param_6[1];
  lVar1 = *param_5 * 3;
  lVar5 = *param_6;
  uVar2 = lVar1 + 7U & 0xfffffffffffffff8;
  param_1 = param_1 + ((longlong)(int)(lVar5 - 1U >> 1) * 3 + (int)(lVar4 - 1U >> 1) * param_2) * -4
  ;
  if (param_7 == 0) {
    if ((lVar5 == 3) && (lVar4 == 3)) {
      FUN_140547c60(param_1,param_2,param_3);
      return;
    }
    lVar6 = 0;
    lVar7 = 0;
    lVar3 = param_9;
    if (0 < (longlong)(lVar4 - 1U)) {
      while( true ) {
        thunk_FUN_140d29540(param_1,lVar3,lVar1,lVar5,3);
        lVar4 = param_6[1];
        lVar6 = lVar6 + 1;
        param_1 = param_1 + param_2 * 4;
        lVar3 = lVar3 + uVar2 * 4;
        if (lVar4 + -1 <= lVar6) break;
        lVar5 = *param_6;
      }
    }
    lVar4 = lVar4 + -1;
    if (0 < param_5[1]) {
      do {
        thunk_FUN_140d29540(param_1,lVar3,lVar1,*param_6,3);
        thunk_FUN_140d29b20(param_9,uVar2,param_3,lVar1,param_6[1]);
        lVar4 = lVar4 + 1;
        lVar7 = lVar7 + 1;
        param_1 = param_1 + param_2 * 4;
        param_3 = param_3 + (param_4 >> 2) * 4;
        lVar3 = lVar3 + uVar2 * 4;
        if (param_6[1] <= lVar4) {
          lVar4 = 0;
          lVar3 = param_9;
        }
      } while (lVar7 < param_5[1]);
    }
  }
  else {
    FUN_140546660(param_1,param_2,param_3,param_4 >> 2,lVar1,param_5[1],lVar5,lVar4,param_7,param_8,
                  3);
  }
  return;
}


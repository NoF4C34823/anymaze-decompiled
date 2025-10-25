
void FUN_1403c26a0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined4 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = (longlong)param_2 >> 2;
  lVar5 = (longlong)(int)param_5 * 4;
  uVar4 = lVar5 + 7U & 0xfffffffffffffff8;
  param_1 = param_1 + ((longlong)((int)param_6 + -1 >> 1) * 4 + (param_6._4_4_ + -1 >> 1) * lVar1) *
                      -4;
  if (param_7 == 0) {
    lVar6 = 0;
    lVar2 = (longlong)param_6._4_4_ + -1;
    lVar3 = param_9;
    if (lVar2 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_142d257a0(param_1,lVar3,lVar5,(longlong)(int)param_6 * 4,4);
        lVar6 = lVar6 + 1;
        param_1 = param_1 + lVar1 * 4;
        lVar3 = lVar3 + uVar4 * 4;
      } while (lVar6 < lVar2);
    }
    lVar6 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_142d257a0(param_1,lVar3,lVar5,(longlong)(int)param_6 * 4,4);
        thunk_FUN_142d25930(param_9,uVar4,param_3,lVar5,(longlong)param_6._4_4_);
        lVar2 = lVar2 + 1;
        lVar6 = lVar6 + 1;
        lVar3 = lVar3 + uVar4 * 4;
        if (param_6._4_4_ <= lVar2) {
          lVar2 = 0;
          lVar3 = param_9;
        }
        param_1 = param_1 + lVar1 * 4;
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
      } while (lVar6 < param_5._4_4_);
    }
  }
  else {
    FUN_1403d1560(param_1,lVar1,param_3,(longlong)param_4 >> 2,lVar5,(longlong)param_5._4_4_,
                  (longlong)(int)param_6,(longlong)param_6._4_4_,param_7,param_8,4);
  }
  return;
}


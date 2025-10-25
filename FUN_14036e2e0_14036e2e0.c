
void FUN_14036e2e0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = (longlong)param_2 >> 2;
  lVar1 = (longlong)(int)param_5 * 3;
  uVar5 = lVar1 + 7U & 0xfffffffffffffff8;
  param_1 = param_1 + ((longlong)((int)param_6 + -1 >> 1) * 3 + (param_6._4_4_ + -1 >> 1) * lVar2) *
                      -4;
  if (param_7 == 0) {
    lVar6 = 0;
    lVar4 = (longlong)param_6._4_4_ + -1;
    lVar3 = param_9;
    if (lVar4 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_1403bffa0(param_1,lVar3,lVar1,(longlong)(int)param_6,3);
        lVar6 = lVar6 + 1;
        param_1 = param_1 + lVar2 * 4;
        lVar3 = lVar3 + uVar5 * 4;
      } while (lVar6 < lVar4);
    }
    lVar6 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_1403bffa0(param_1,lVar3,lVar1,(longlong)(int)param_6,3);
        thunk_FUN_142d25930(param_9,uVar5,param_3,lVar1,(longlong)param_6._4_4_);
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 1;
        lVar3 = lVar3 + uVar5 * 4;
        if (param_6._4_4_ <= lVar4) {
          lVar4 = 0;
          lVar3 = param_9;
        }
        param_1 = param_1 + lVar2 * 4;
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
      } while (lVar6 < param_5._4_4_);
    }
  }
  else {
    FUN_1403d1560(param_1);
  }
  return;
}


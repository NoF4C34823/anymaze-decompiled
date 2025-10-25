
void FUN_140502e80(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = (longlong)param_6._4_4_;
  lVar2 = (longlong)param_2 >> 1;
  lVar1 = (longlong)(int)param_6;
  param_1 = param_1 + ((longlong)((int)param_6 + -1 >> 1) + (param_6._4_4_ + -1 >> 1) * lVar2) * -2;
  lVar5 = (longlong)(int)param_5;
  uVar4 = lVar5 + 0xfU & 0xfffffffffffffff0;
  if (param_7 == 0) {
    if ((lVar1 == 3) && (lVar6 == 3)) {
      FUN_14052f580(param_1);
      return;
    }
    lVar7 = 0;
    lVar8 = lVar6 + -1;
    lVar3 = param_9;
    if (lVar8 != 0 && 0 < lVar6) {
      do {
        thunk_FUN_140d28440(param_1,lVar3,lVar5,lVar1,1);
        lVar7 = lVar7 + 1;
        param_1 = param_1 + lVar2 * 2;
        lVar3 = lVar3 + uVar4 * 2;
      } while (lVar7 < lVar8);
    }
    lVar7 = 0;
    if (0 < (longlong)param_5._4_4_) {
      do {
        thunk_FUN_140d28440(param_1,lVar3,lVar5,lVar1,1);
        thunk_FUN_140d288e0(param_9,uVar4,param_3,lVar5,lVar6);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 1;
        lVar3 = lVar3 + uVar4 * 2;
        if (lVar6 <= lVar8) {
          lVar8 = 0;
          lVar3 = param_9;
        }
        param_1 = param_1 + lVar2 * 2;
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
      } while (lVar7 < param_5._4_4_);
    }
  }
  else {
    FUN_14052ea60(param_1);
  }
  return;
}


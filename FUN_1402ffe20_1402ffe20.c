
void FUN_1402ffe20(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = (longlong)param_6._4_4_;
  lVar2 = (longlong)param_2 >> 2;
  lVar1 = (longlong)(int)param_5 * 4;
  param_1 = param_1 + ((param_6._4_4_ + -1 >> 1) * lVar2 + (longlong)((int)param_6 + -1 >> 1) * 4) *
                      -4;
  uVar4 = (longlong)(int)param_5 * 4 + 7U & 0xfffffffffffffff8;
  if (param_7 == 0) {
    lVar7 = 0;
    lVar6 = lVar5 + -1;
    lVar3 = param_9;
    if (lVar6 != 0 && 0 < lVar5) {
      do {
        FUN_142d21fa0(param_1,lVar3,lVar1,(longlong)(int)param_6 * 4,4);
        lVar7 = lVar7 + 1;
        param_1 = param_1 + lVar2 * 4;
        lVar3 = lVar3 + uVar4 * 4;
      } while (lVar7 < lVar6);
    }
    lVar7 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_142d21fa0(param_1,lVar3,lVar1,(longlong)(int)param_6 << 2,4);
        thunk_FUN_142d22130(param_9,uVar4,param_3,lVar1,lVar5);
        lVar6 = lVar6 + 1;
        lVar3 = lVar3 + uVar4 * 4;
        if (lVar5 <= lVar6) {
          lVar3 = param_9;
        }
        param_1 = param_1 + lVar2 * 4;
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
        if (lVar5 <= lVar6) {
          lVar6 = 0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < param_5._4_4_);
    }
  }
  else {
    FUN_140311b40(param_1);
  }
  return;
}


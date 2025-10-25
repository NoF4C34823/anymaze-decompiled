
void FUN_140468260(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
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
  longlong lVar9;
  
  lVar2 = (longlong)param_2 >> 2;
  lVar6 = (longlong)param_6._4_4_;
  lVar1 = (longlong)(int)param_6;
  param_1 = param_1 + ((longlong)((int)param_6 + -1 >> 1) + (param_6._4_4_ + -1 >> 1) * lVar2) * -4;
  lVar5 = (longlong)(int)param_5;
  uVar4 = lVar5 + 7U & 0xfffffffffffffff8;
  if (param_7 == 0) {
    if ((lVar1 == 3) && (lVar6 == 3)) {
      FUN_140460980(param_1);
      return;
    }
    lVar7 = 0;
    lVar8 = lVar6 + -1;
    lVar3 = param_9;
    if (lVar8 != 0 && SCARRY8(lVar6,-1) == lVar8 < 0) {
      do {
        FUN_1404558a0(param_1,lVar3,lVar5,lVar1,1);
        lVar7 = lVar7 + 1;
        param_1 = param_1 + lVar2 * 4;
        lVar3 = lVar3 + uVar4 * 4;
      } while (lVar7 < lVar8);
    }
    lVar7 = 0;
    if (0 < (longlong)param_5._4_4_) {
      do {
        FUN_1404558a0(param_1,lVar3,lVar5,lVar1,1);
        thunk_FUN_142d29130(param_9,uVar4,param_3,lVar5,lVar6);
        lVar9 = lVar8 + 1;
        lVar7 = lVar7 + 1;
        lVar8 = lVar9;
        if (lVar6 <= lVar9) {
          lVar8 = 0;
        }
        param_1 = param_1 + lVar2 * 4;
        lVar3 = lVar3 + uVar4 * 4;
        if (lVar6 <= lVar9) {
          lVar3 = param_9;
        }
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
      } while (lVar7 < param_5._4_4_);
    }
  }
  else {
    FUN_14045fd20(param_1);
  }
  return;
}


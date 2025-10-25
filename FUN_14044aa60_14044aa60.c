
void FUN_14044aa60(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar2 = (longlong)param_2 >> 2;
  lVar8 = (longlong)param_6._4_4_;
  lVar5 = (longlong)(int)param_6;
  param_1 = param_1 + ((param_6._4_4_ + -1 >> 1) * lVar2 + (longlong)((int)param_6 + -1 >> 1) * 4) *
                      -4;
  uVar3 = (longlong)(int)param_5 * 4 + 7U & 0xfffffffffffffff8;
  lVar1 = (longlong)(int)param_5 * 4;
  if (param_7 == 0) {
    if ((lVar5 == 3) && (lVar8 == 3)) {
      FUN_140455320(param_1);
      return;
    }
    lVar9 = 0;
    lVar6 = lVar8 + -1;
    lVar4 = param_9;
    if (lVar6 != 0 && SCARRY8(lVar8,-1) == lVar6 < 0) {
      do {
        FUN_142d273a0(param_1,lVar4,lVar1,lVar5 * 4,4);
        lVar9 = lVar9 + 1;
        param_1 = param_1 + lVar2 * 4;
        lVar4 = lVar4 + uVar3 * 4;
      } while (lVar9 < lVar6);
    }
    lVar9 = 0;
    if (0 < (longlong)param_5._4_4_) {
      do {
        FUN_142d273a0(param_1,lVar4,lVar1,lVar5 << 2,4);
        thunk_FUN_142d27530(param_9,uVar3,param_3,lVar1,lVar8);
        lVar7 = lVar6 + 1;
        lVar9 = lVar9 + 1;
        lVar6 = lVar7;
        if (lVar8 <= lVar7) {
          lVar6 = 0;
        }
        param_1 = param_1 + lVar2 * 4;
        lVar4 = lVar4 + uVar3 * 4;
        if (lVar8 <= lVar7) {
          lVar4 = param_9;
        }
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
      } while (lVar9 < param_5._4_4_);
    }
  }
  else {
    FUN_140453bc0(param_1);
  }
  return;
}


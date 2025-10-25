
void FUN_1405a5c40(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = (longlong)param_6._4_4_;
  lVar3 = (longlong)param_2 >> 2;
  lVar2 = (longlong)(int)param_6;
  param_1 = param_1 + ((longlong)((int)param_6 + -1 >> 1) * 3 + (param_6._4_4_ + -1 >> 1) * lVar3) *
                      -4;
  lVar1 = (longlong)(int)param_5 * 3;
  uVar5 = lVar1 + 7U & 0xfffffffffffffff8;
  if (param_7 == 0) {
    if ((lVar2 == 3) && (lVar6 == 3)) {
      FUN_14059ec20(param_1);
      return;
    }
    lVar7 = 0;
    lVar8 = lVar6 + -1;
    lVar4 = param_9;
    if (lVar8 != 0 && 0 < lVar6) {
      do {
        FUN_14059d260(param_1,lVar4,lVar1,lVar2,3);
        lVar7 = lVar7 + 1;
        param_1 = param_1 + lVar3 * 4;
        lVar4 = lVar4 + uVar5 * 4;
      } while (lVar7 < lVar8);
    }
    lVar7 = 0;
    if (0 < (longlong)param_5._4_4_) {
      do {
        FUN_14059d260(param_1,lVar4,lVar1,lVar2,3);
        FUN_14059d660(param_9,uVar5,param_3,lVar1,lVar6);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 1;
        lVar4 = lVar4 + uVar5 * 4;
        if (lVar6 <= lVar8) {
          lVar8 = 0;
          lVar4 = param_9;
        }
        param_1 = param_1 + lVar3 * 4;
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
      } while (lVar7 < param_5._4_4_);
    }
  }
  else {
    FUN_14059da60(param_1);
  }
  return;
}


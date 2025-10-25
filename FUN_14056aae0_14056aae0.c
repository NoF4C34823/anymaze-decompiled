
void FUN_14056aae0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar7 = (longlong)param_6._4_4_;
  lVar3 = (longlong)param_2;
  lVar6 = (longlong)(int)param_6;
  lVar5 = (param_1 + (longlong)((int)param_6 + -1 >> 1) * -4) - (param_6._4_4_ + -1 >> 1) * lVar3;
  uVar2 = (longlong)(int)param_5 * 4 + 0x1fU & 0xffffffffffffffe0;
  lVar1 = (longlong)(int)param_5 * 4;
  if (param_7 == 0) {
    if ((lVar6 == 3) && (lVar7 == 3)) {
      FUN_1405187a0(lVar5);
      return;
    }
    lVar9 = 0;
    lVar8 = lVar7 + -1;
    lVar4 = param_9;
    if (lVar8 != 0 && 0 < lVar7) {
      do {
        thunk_FUN_140d23780(lVar5,lVar4,lVar1,lVar6,4);
        lVar9 = lVar9 + 1;
        lVar5 = lVar5 + lVar3;
        lVar4 = lVar4 + uVar2;
      } while (lVar9 < lVar8);
    }
    lVar9 = 0;
    if (0 < (longlong)param_5._4_4_) {
      do {
        thunk_FUN_140d23780(lVar5,lVar4,lVar1,lVar6,4);
        thunk_FUN_140d23d80(param_9,uVar2,param_3,lVar1,lVar7);
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 1;
        lVar4 = lVar4 + uVar2;
        if (lVar7 <= lVar8) {
          lVar8 = 0;
          lVar4 = param_9;
        }
        lVar5 = lVar5 + lVar3;
        param_3 = param_3 + param_4;
      } while (lVar9 < param_5._4_4_);
    }
  }
  else {
    FUN_14050c5e0(lVar5);
  }
  return;
}


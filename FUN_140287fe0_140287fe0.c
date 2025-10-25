
void FUN_140287fe0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar7 = (longlong)param_6._4_4_;
  lVar2 = (longlong)param_2;
  lVar6 = (longlong)(int)param_6;
  lVar5 = (longlong)(int)param_5;
  lVar4 = (param_1 - ((int)param_6 + -1 >> 1)) - (param_6._4_4_ + -1 >> 1) * lVar2;
  uVar1 = lVar5 + 0x1fU & 0xffffffffffffffe0;
  if (param_7 == 0) {
    if ((lVar6 == 3) && (lVar7 == 3)) {
      FUN_140516ec0(lVar4);
      return;
    }
    lVar9 = 0;
    lVar8 = lVar7 + -1;
    lVar3 = param_9;
    if (lVar8 != 0 && 0 < lVar7) {
      do {
        thunk_FUN_140d23780(lVar4,lVar3,lVar5,lVar6,1);
        lVar9 = lVar9 + 1;
        lVar4 = lVar4 + lVar2;
        lVar3 = lVar3 + uVar1;
      } while (lVar9 < lVar8);
    }
    lVar9 = 0;
    if (0 < (longlong)param_5._4_4_) {
      do {
        thunk_FUN_140d23780(lVar4,lVar3,lVar5,lVar6,1);
        thunk_FUN_140d23d80(param_9,uVar1,param_3,lVar5,lVar7);
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 1;
        lVar3 = lVar3 + uVar1;
        if (lVar7 <= lVar8) {
          lVar8 = 0;
          lVar3 = param_9;
        }
        lVar4 = lVar4 + lVar2;
        param_3 = param_3 + param_4;
      } while (lVar9 < param_5._4_4_);
    }
  }
  else {
    FUN_14050c5e0(lVar4);
  }
  return;
}


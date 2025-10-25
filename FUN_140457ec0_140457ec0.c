
longlong FUN_140457ec0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
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
  
  lVar3 = (longlong)param_2 >> 1;
  lVar5 = (longlong)param_6._4_4_;
  param_1 = param_1 + ((longlong)((int)param_6 + -1 >> 1) + (param_6._4_4_ + -1 >> 1) * lVar3) * -2;
  lVar1 = (longlong)(int)param_5;
  uVar2 = lVar1 + 0xfU & 0xfffffffffffffff0;
  if (param_7 == 0) {
    lVar8 = 0;
    lVar6 = lVar5 + -1;
    lVar4 = param_9;
    if (lVar6 != 0 && SCARRY8(lVar5,-1) == lVar6 < 0) {
      do {
        thunk_FUN_140d172c0(param_1,lVar4,lVar1,(longlong)(int)param_6,1);
        lVar8 = lVar8 + 1;
        param_1 = param_1 + lVar3 * 2;
        lVar4 = lVar4 + uVar2 * 2;
      } while (lVar8 < lVar6);
    }
    lVar8 = 0;
    if (0 < param_5._4_4_) {
      do {
        thunk_FUN_140d172c0(param_1,lVar4,(longlong)(int)param_5,(longlong)(int)param_6,1);
        thunk_FUN_140d177a0(param_9,uVar2,param_3,(longlong)(int)param_5,lVar5);
        lVar7 = lVar6 + 1;
        lVar8 = lVar8 + 1;
        param_1 = param_1 + lVar3 * 2;
        lVar6 = lVar7;
        if (lVar5 <= lVar7) {
          lVar6 = 0;
        }
        lVar1 = (longlong)param_5._4_4_;
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
        lVar4 = lVar4 + uVar2 * 2;
        if (lVar5 <= lVar7) {
          lVar4 = param_9;
        }
      } while (lVar8 < lVar1);
    }
  }
  else {
    lVar1 = FUN_140480860(param_1);
  }
  return lVar1;
}


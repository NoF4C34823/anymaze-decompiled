
longlong FUN_14030a0a0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                      undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = (longlong)param_6._4_4_;
  lVar3 = (longlong)param_2 >> 2;
  param_1 = param_1 + ((longlong)((int)param_6 + -1 >> 1) + (param_6._4_4_ + -1 >> 1) * lVar3) * -4;
  lVar1 = (longlong)(int)param_5;
  uVar2 = lVar1 + 7U & 0xfffffffffffffff8;
  if (param_7 == 0) {
    lVar7 = 0;
    lVar6 = lVar5 + -1;
    lVar4 = param_9;
    if (lVar6 != 0 && 0 < lVar5) {
      do {
        FUN_1402fd0c0(param_1,lVar4,lVar1,(longlong)(int)param_6,1);
        lVar7 = lVar7 + 1;
        param_1 = param_1 + lVar3 * 4;
        lVar4 = lVar4 + uVar2 * 4;
      } while (lVar7 < lVar6);
    }
    lVar7 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_1402fd0c0(param_1,lVar4,(longlong)(int)param_5,(longlong)(int)param_6,1);
        FUN_142d22130(param_9,uVar2,param_3,(longlong)(int)param_5,lVar5);
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + uVar2 * 4;
        if (lVar5 <= lVar6) {
          lVar4 = param_9;
        }
        param_1 = param_1 + lVar3 * 4;
        lVar1 = (longlong)param_5._4_4_;
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
        if (lVar5 <= lVar6) {
          lVar6 = 0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar1);
    }
  }
  else {
    lVar1 = FUN_140311b40(param_1);
  }
  return lVar1;
}


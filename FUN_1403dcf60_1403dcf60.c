
void FUN_1403dcf60(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined4 param_8,longlong param_9)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = (longlong)param_2 >> 2;
  lVar5 = (longlong)(int)param_5;
  uVar1 = lVar5 + 7U & 0xfffffffffffffff8;
  param_1 = param_1 + ((longlong)((int)param_6 + -1 >> 1) + (param_6._4_4_ + -1 >> 1) * lVar2) * -4;
  if (param_7 == 0) {
    lVar6 = 0;
    lVar4 = (longlong)param_6._4_4_ + -1;
    lVar3 = param_9;
    if (lVar4 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_1403a4f20(param_1,lVar3,lVar5,(longlong)(int)param_6,1);
        lVar6 = lVar6 + 1;
        param_1 = param_1 + lVar2 * 4;
        lVar3 = lVar3 + uVar1 * 4;
      } while (lVar6 < lVar4);
    }
    lVar6 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_1403a4f20(param_1,lVar3,lVar5,(longlong)(int)param_6,1);
        thunk_FUN_142d23d30(param_9,uVar1,param_3,lVar5,(longlong)param_6._4_4_);
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 1;
        lVar3 = lVar3 + uVar1 * 4;
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
    FUN_1403b64e0(param_1,lVar2,param_3,(longlong)param_4 >> 2,lVar5,(longlong)param_5._4_4_,
                  (longlong)(int)param_6,(longlong)param_6._4_4_,param_7,param_8,1);
  }
  return;
}


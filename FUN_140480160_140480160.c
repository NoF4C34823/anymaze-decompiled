
void FUN_140480160(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong param_7,undefined4 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar5 = *param_6;
  lVar4 = param_6[1];
  lVar1 = *param_5 * 4;
  uVar8 = *param_5 * 4 + 0x1fU & 0xffffffffffffffe0;
  lVar2 = (param_1 + (longlong)(int)(lVar5 - 1U >> 1) * -4) - (int)(lVar4 - 1U >> 1) * param_2;
  if (param_7 == 0) {
    if ((lVar5 == 3) && (lVar4 == 3)) {
      FUN_140475d40(lVar2,param_2,param_3);
      return;
    }
    lVar6 = 0;
    lVar7 = 0;
    lVar3 = param_9;
    if (0 < (longlong)(lVar4 - 1U)) {
      while( true ) {
        thunk_FUN_140d12e20(lVar2,lVar3,lVar1,lVar5,4);
        lVar4 = param_6[1];
        lVar6 = lVar6 + 1;
        lVar2 = lVar2 + param_2;
        lVar3 = lVar3 + uVar8;
        if (lVar4 + -1 <= lVar6) break;
        lVar5 = *param_6;
      }
    }
    lVar4 = lVar4 + -1;
    if (0 < param_5[1]) {
      do {
        thunk_FUN_140d12e20(lVar2,lVar3,lVar1,*param_6,4);
        thunk_FUN_140d13440(param_9,uVar8,param_3,lVar1,param_6[1]);
        lVar4 = lVar4 + 1;
        lVar7 = lVar7 + 1;
        lVar2 = lVar2 + param_2;
        param_3 = param_3 + param_4;
        lVar3 = lVar3 + uVar8;
        if (param_6[1] <= lVar4) {
          lVar4 = 0;
          lVar3 = param_9;
        }
      } while (lVar7 < param_5[1]);
    }
  }
  else {
    FUN_14046bec0(lVar2,param_2,param_3,param_4,lVar1,param_5[1],lVar5,lVar4,param_7,param_8,4);
  }
  return;
}



undefined8
FUN_1408a0140(longlong param_1,longlong param_2,longlong param_3,longlong param_4,ulonglong *param_5
             ,uint param_6,longlong param_7,uint *param_8,ulonglong param_9)

{
  ulonglong uVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 in_stack_fffffffffffffec0;
  undefined4 uVar13;
  ulonglong uStack_118;
  ulonglong uStack_110;
  int iStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  longlong lStack_e8;
  uint uStack_e0;
  code *pcStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  code *pcStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  uint uStack_98;
  undefined4 uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  uint uStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  
  if ((((param_1 == 0) || (param_3 == 0)) || (param_9 == 0)) || (param_8 == (uint *)0x0)) {
    return 0xfffffff8;
  }
  uVar1 = *param_5;
  if ((param_2 < (longlong)uVar1) || (param_4 < (longlong)uVar1)) {
    return 0xfffffff0;
  }
  if ((0 < (longlong)param_5[1]) && (0 < (longlong)uVar1)) {
    if (0xff < param_6) {
      return 0xffffff1f;
    }
    if ((param_6 & 0xf0) == 0xf0) {
      param_6 = 0xf0;
    }
    else {
      uVar3 = param_6 & 0xf;
      if (uVar3 == 6) {
        if (param_7 == 0) {
          return 0xfffffff8;
        }
      }
      else if (((param_6 != 0xf0) && (uVar3 != 1)) && (uVar3 != 3)) {
        return 0xffffff1f;
      }
    }
    uVar3 = *param_8;
    if ((2 < (int)uVar3) && ((uVar3 & 1) != 0)) {
      uStack_60 = 0;
      uStack_e0 = (int)uVar3 >> 1;
      lVar8 = param_5[1] * uVar1;
      lStack_e8 = (longlong)param_8 + (-((ulonglong)(param_8 + 5) & 0x3f) & 0x3f) + 0x14;
      uVar9 = (ulonglong)(int)uStack_e0;
      lStack_a8 = param_9 + (-(param_9 & 0x3f) & 0x3f);
      if (uVar3 == 3) {
        uVar7 = 0;
      }
      else if (uVar3 == 5) {
        uVar7 = 1;
      }
      else {
        uVar7 = (ulonglong)(uVar3 != 7) + 2;
      }
      pcStack_b0 = (code *)(&PTR_FUN_14308ccc0)[uVar7];
      if (0x7ffff < lVar8) {
        iStack_108 = 0;
        uStack_118 = uVar7;
        uStack_110 = lVar8;
        FUN_1420dd400();
        uStack_60 = (uint)((longlong)iStack_108 <= (longlong)uStack_110);
        uVar7 = uStack_118;
      }
      lVar8 = (longlong)(int)uVar3;
      pcVar2 = (code *)(&PTR_FUN_14308cbc0)[uVar7];
      uStack_90 = (undefined4)uVar7;
      uStack_80 = uVar1 * 4 + 0x3f & 0xffffffffffffffc0;
      lStack_b8 = lVar8 * uStack_80 + lStack_a8;
      uStack_50 = uVar1;
      pcStack_d8 = pcVar2;
      lStack_88 = lVar8;
      lStack_78 = param_4;
      lStack_70 = param_2;
      if (param_6 == 0xf0) {
        lVar8 = (longlong)(int)-uStack_e0;
        lVar11 = param_2 * lVar8 + param_1;
        lVar6 = param_1;
        lVar5 = lStack_e8;
        uVar12 = uStack_e0;
        lVar10 = lStack_a8;
        lVar4 = lStack_a0;
        for (; lStack_a0 = lVar6, lStack_e8 = lVar5, uStack_e0 = uVar12, lVar8 < (longlong)uVar9;
            lVar8 = lVar8 + 1) {
          lStack_58 = param_3;
          (*pcVar2)(lVar11,lVar10,*param_5,lVar5,uVar3);
          lVar11 = lVar11 + param_2;
          lVar10 = lVar10 + uStack_80;
          lVar6 = lStack_a0;
          param_3 = lStack_58;
          lVar5 = lStack_e8;
          uVar12 = uStack_e0;
          lVar4 = lStack_a0;
        }
        lVar11 = 0;
        lVar8 = lStack_88 + -1;
        if (0 < (longlong)param_5[1]) {
          lVar10 = lStack_a0 + uVar9 * param_2;
          lStack_a0 = lVar4;
          do {
            uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
            (*pcStack_d8)(lVar10,uStack_80 * lVar8 + lStack_a8,*param_5,lVar5,uVar3);
            in_stack_fffffffffffffec0 = CONCAT44(uVar13,uStack_60);
            (*pcStack_b0)(lStack_a8,uStack_80,uVar12,param_3,uStack_50,lVar5,uVar3,
                          in_stack_fffffffffffffec0);
            lVar8 = lVar8 + 1;
            if (lVar8 == lStack_88) {
              lVar8 = 0;
            }
            uVar12 = uVar12 + 1;
            if (uVar12 == uVar3) {
              uVar12 = 0;
            }
            lVar11 = lVar11 + 1;
            lVar10 = lVar10 + lStack_70;
            param_3 = param_3 + lStack_78;
          } while (lVar11 < (longlong)param_5[1]);
        }
      }
      else {
        uStack_118 = *param_5;
        uStack_110 = param_5[1];
        lVar5 = param_7;
        FUN_140894960(param_1,param_2,lStack_a8,uStack_80,&uStack_118,uVar7 & 0xffffffff,param_6,
                      param_7,lStack_e8,uVar3,lStack_b8);
        lVar11 = lStack_e8;
        lVar10 = 0;
        lVar4 = 0;
        lVar8 = lVar8 + -1;
        uVar7 = param_5[1];
        uStack_68 = uVar9;
        uVar12 = uStack_e0;
        lStack_100 = param_3;
        lStack_f8 = lVar8;
        uStack_f0 = uVar9;
        lStack_a0 = param_1;
        uStack_98 = param_6;
        lStack_58 = param_3;
        if ((param_6 & 0xc0) == 0xc0) {
          if (uVar7 != uVar9 && -1 < (longlong)(uVar7 - uVar9)) {
            lStack_100 = uVar9 * param_2 + param_1;
            lVar11 = lVar4;
            do {
              uVar13 = (undefined4)((ulonglong)lVar5 >> 0x20);
              (*pcStack_d8)(lStack_100 + lVar11,uStack_80 * lVar8 + lStack_a8,*param_5,lStack_e8,
                            uVar3);
              lVar5 = CONCAT44(uVar13,uStack_60);
              (*pcStack_b0)(lStack_a8,uStack_80,uVar12,lStack_58 + lVar4,uVar1,lStack_e8,uVar3,lVar5
                           );
              lVar8 = lVar8 + 1;
              uVar7 = param_5[1];
              if (lVar8 == lStack_88) {
                lVar8 = 0;
              }
              uVar12 = uVar12 + 1;
              if (uVar12 == uVar3) {
                uVar12 = 0;
              }
              lVar10 = lVar10 + 1;
              lVar11 = lVar11 + lStack_70;
              lVar4 = lVar4 + lStack_78;
              param_3 = lStack_58;
              param_2 = lStack_70;
              param_4 = lStack_78;
              param_1 = lStack_a0;
              param_6 = uStack_98;
            } while (lVar10 < (longlong)(uVar7 - uStack_68));
          }
        }
        else {
          lVar5 = param_3;
          if (0 < (longlong)(uVar7 - uVar9)) {
            do {
              pcStack_d8 = (code *)*param_5;
              uStack_d0 = param_5[1];
              FUN_140895600(lStack_a0,lStack_70,uVar9,uStack_80 * lVar8 + lStack_a8,&pcStack_d8,
                            uStack_90,uStack_98,param_7,lVar11,uVar3,lStack_b8);
              (*pcStack_b0)(lStack_a8,uStack_80,uVar12,lVar5,uStack_50,lVar11,uVar3,uStack_60);
              lVar8 = lVar8 + 1;
              uVar7 = param_5[1];
              if (lVar8 == lStack_88) {
                lVar8 = 0;
              }
              uVar12 = uVar12 + 1;
              if (uVar12 == uVar3) {
                uVar12 = 0;
              }
              lVar10 = lVar10 + 1;
              uVar9 = uVar9 + 1;
              param_3 = lStack_58;
              param_2 = lStack_70;
              param_4 = lStack_78;
              param_1 = lStack_a0;
              lVar5 = lVar5 + lStack_78;
              param_6 = uStack_98;
            } while (lVar10 < (longlong)(uVar7 - uStack_68));
          }
        }
        uStack_e0 = uVar12;
        lStack_f8 = lVar8;
        lVar11 = lStack_b8;
        lVar8 = lStack_e8;
        lVar4 = param_4 * lVar10;
        lVar5 = lStack_f8;
        uVar12 = uStack_e0;
        lStack_a0 = param_1;
        uStack_98 = param_6;
        lStack_78 = param_4;
        lStack_70 = param_2;
        lStack_58 = param_3;
        if (lVar10 < (longlong)uVar7) {
          do {
            uStack_c8 = *param_5;
            uStack_c0 = param_5[1];
            FUN_14088fd80(lStack_a0,lStack_70,uStack_68 + lVar10,uStack_80 * lVar5 + lStack_a8,
                          &uStack_c8,uStack_90,uStack_98,param_7,lVar8,uVar3,lVar11);
            (*pcStack_b0)(lStack_a8,uStack_80,uVar12,lStack_58 + lVar4,uStack_50,lVar8,uVar3,
                          uStack_60);
            lVar6 = lVar5 + 1;
            if (lVar5 + 1 == lStack_88) {
              lVar6 = 0;
            }
            uVar12 = uVar12 + 1;
            if (uVar12 == uVar3) {
              uVar12 = 0;
            }
            lVar10 = lVar10 + 1;
            lVar4 = lVar4 + lStack_78;
            lVar5 = lVar6;
          } while (lVar10 < (longlong)param_5[1]);
        }
      }
      return 0;
    }
    return 0xfffffffb;
  }
  return 0xfffffffa;
}


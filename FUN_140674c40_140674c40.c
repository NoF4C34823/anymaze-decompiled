
undefined8
FUN_140674c40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,ulonglong *param_5
             ,uint param_6,longlong param_7,uint *param_8,ulonglong param_9)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
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
  ulonglong uStack_b8;
  code *pcStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  uint uStack_98;
  undefined4 uStack_90;
  longlong lStack_88;
  longlong lStack_80;
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
      uVar4 = param_6 & 0xf;
      if (uVar4 == 6) {
        if (param_7 == 0) {
          return 0xfffffff8;
        }
      }
      else if (((param_6 != 0xf0) && (uVar4 != 1)) && (uVar4 != 3)) {
        return 0xffffff1f;
      }
    }
    uVar4 = *param_8;
    if ((2 < (int)uVar4) && ((uVar4 & 1) != 0)) {
      uStack_60 = 0;
      uStack_e0 = (int)uVar4 >> 1;
      lVar10 = param_5[1] * uVar1;
      lStack_e8 = (longlong)param_8 + (-((ulonglong)(param_8 + 5) & 0x3f) & 0x3f) + 0x14;
      uVar11 = (ulonglong)(int)uStack_e0;
      lStack_a8 = param_9 + (-(param_9 & 0x3f) & 0x3f);
      if (uVar4 == 3) {
        uVar9 = 0;
      }
      else if (uVar4 == 5) {
        uVar9 = 1;
      }
      else {
        uVar9 = (ulonglong)(uVar4 != 7) + 2;
      }
      pcStack_b0 = (code *)(&DAT_14308b7c0)[uVar9];
      if (0x7ffff < lVar10) {
        iStack_108 = 0;
        uStack_118 = uVar9;
        uStack_110 = lVar10;
        FUN_1420dd400();
        uStack_60 = (uint)((longlong)iStack_108 <= (longlong)uStack_110);
        uVar9 = uStack_118;
      }
      lVar10 = (longlong)(int)uVar4;
      pcVar2 = *(code **)(&DAT_14308b6c0 + uVar9 * 8);
      uStack_90 = (undefined4)uVar9;
      uStack_b8 = uVar1 * 4 + 0x3f & 0xffffffffffffffc0;
      lStack_88 = lVar10 * uStack_b8 + lStack_a8;
      uStack_50 = uVar1;
      pcStack_d8 = pcVar2;
      lStack_80 = lVar10;
      lStack_78 = param_4;
      lStack_70 = param_2;
      if (param_6 == 0xf0) {
        lVar10 = (longlong)(int)-uStack_e0;
        lVar8 = param_2 * lVar10 + param_1;
        lVar3 = param_1;
        lVar5 = lStack_e8;
        uVar12 = uStack_e0;
        lVar6 = lStack_a8;
        lVar7 = lStack_a0;
        for (; lStack_a0 = lVar3, lStack_e8 = lVar5, uStack_e0 = uVar12, lVar10 < (longlong)uVar11;
            lVar10 = lVar10 + 1) {
          lStack_58 = param_3;
          (*pcVar2)(lVar8,lVar6,*param_5,lVar5,uVar4);
          lVar8 = lVar8 + param_2;
          lVar6 = lVar6 + uStack_b8;
          lVar3 = lStack_a0;
          param_3 = lStack_58;
          lVar5 = lStack_e8;
          uVar12 = uStack_e0;
          lVar7 = lStack_a0;
        }
        lVar8 = 0;
        lVar10 = lStack_80 + -1;
        if (0 < (longlong)param_5[1]) {
          lVar6 = lStack_a0 + uVar11 * param_2;
          lStack_a0 = lVar7;
          do {
            uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
            (*pcStack_d8)(lVar6,uStack_b8 * lVar10 + lStack_a8,*param_5,lVar5,uVar4);
            in_stack_fffffffffffffec0 = CONCAT44(uVar13,uStack_60);
            (*pcStack_b0)(lStack_a8,uStack_b8,uVar12,param_3,uStack_50,lVar5,uVar4,
                          in_stack_fffffffffffffec0);
            lVar10 = lVar10 + 1;
            if (lVar10 == lStack_80) {
              lVar10 = 0;
            }
            uVar12 = uVar12 + 1;
            if (uVar12 == uVar4) {
              uVar12 = 0;
            }
            lVar8 = lVar8 + 1;
            lVar6 = lVar6 + lStack_70;
            param_3 = param_3 + lStack_78;
          } while (lVar8 < (longlong)param_5[1]);
        }
      }
      else {
        uStack_118 = *param_5;
        uStack_110 = param_5[1];
        lVar5 = param_7;
        FUN_14066afc0(param_1,param_2,lStack_a8,uStack_b8,&uStack_118,uVar9 & 0xffffffff,param_6,
                      param_7,lStack_e8,uVar4,lStack_88);
        lVar8 = lStack_e8;
        lVar6 = 0;
        lVar7 = 0;
        lVar10 = lVar10 + -1;
        uVar9 = param_5[1];
        uStack_68 = uVar11;
        uVar12 = uStack_e0;
        lStack_100 = param_3;
        lStack_f8 = lVar10;
        uStack_f0 = uVar11;
        lStack_a0 = param_1;
        uStack_98 = param_6;
        lStack_58 = param_3;
        if ((param_6 & 0xc0) == 0xc0) {
          if (uVar9 != uVar11 && -1 < (longlong)(uVar9 - uVar11)) {
            lStack_100 = uVar11 * param_2 + param_1;
            lVar8 = lVar7;
            do {
              uVar13 = (undefined4)((ulonglong)lVar5 >> 0x20);
              (*pcStack_d8)(lStack_100 + lVar8,uStack_b8 * lVar10 + lStack_a8,*param_5,lStack_e8,
                            uVar4);
              lVar5 = CONCAT44(uVar13,uStack_60);
              (*pcStack_b0)(lStack_a8,uStack_b8,uVar12,lStack_58 + lVar7,uVar1,lStack_e8,uVar4,lVar5
                           );
              lVar10 = lVar10 + 1;
              uVar9 = param_5[1];
              if (lVar10 == lStack_80) {
                lVar10 = 0;
              }
              uVar12 = uVar12 + 1;
              if (uVar12 == uVar4) {
                uVar12 = 0;
              }
              lVar6 = lVar6 + 1;
              lVar8 = lVar8 + lStack_70;
              lVar7 = lVar7 + lStack_78;
              param_3 = lStack_58;
              param_2 = lStack_70;
              param_4 = lStack_78;
              param_1 = lStack_a0;
              param_6 = uStack_98;
            } while (lVar6 < (longlong)(uVar9 - uStack_68));
          }
        }
        else {
          lVar5 = param_3;
          if (0 < (longlong)(uVar9 - uVar11)) {
            do {
              pcStack_d8 = (code *)*param_5;
              uStack_d0 = param_5[1];
              FUN_14066bba0(lStack_a0,lStack_70,uVar11,uStack_b8 * lVar10 + lStack_a8,&pcStack_d8,
                            uStack_90,uStack_98,param_7,lVar8,uVar4,lStack_88);
              (*pcStack_b0)(lStack_a8,uStack_b8,uVar12,lVar5,uStack_50,lVar8,uVar4,uStack_60);
              lVar10 = lVar10 + 1;
              uVar9 = param_5[1];
              if (lVar10 == lStack_80) {
                lVar10 = 0;
              }
              uVar12 = uVar12 + 1;
              if (uVar12 == uVar4) {
                uVar12 = 0;
              }
              lVar6 = lVar6 + 1;
              uVar11 = uVar11 + 1;
              param_3 = lStack_58;
              lVar5 = lVar5 + lStack_78;
              param_2 = lStack_70;
              param_4 = lStack_78;
              param_1 = lStack_a0;
              param_6 = uStack_98;
            } while (lVar6 < (longlong)(uVar9 - uStack_68));
          }
        }
        uStack_e0 = uVar12;
        lStack_f8 = lVar10;
        uVar1 = uStack_b8;
        lVar10 = lStack_e8;
        lVar5 = param_4 * lVar6;
        lVar8 = lStack_f8;
        uVar12 = uStack_e0;
        lStack_a0 = param_1;
        uStack_98 = param_6;
        lStack_78 = param_4;
        lStack_70 = param_2;
        lStack_58 = param_3;
        if (lVar6 < (longlong)uVar9) {
          do {
            uStack_c8 = *param_5;
            uStack_c0 = param_5[1];
            FUN_140667520(lStack_a0,lStack_70,uStack_68 + lVar6,uVar1 * lVar8 + lStack_a8,&uStack_c8
                          ,uStack_90,uStack_98,param_7,lVar10,uVar4,lStack_88);
            (*pcStack_b0)(lStack_a8,uVar1,uVar12,lStack_58 + lVar5,uStack_50,lVar10,uVar4,uStack_60)
            ;
            lVar7 = lVar8 + 1;
            if (lVar8 + 1 == lStack_80) {
              lVar7 = 0;
            }
            uVar12 = uVar12 + 1;
            if (uVar12 == uVar4) {
              uVar12 = 0;
            }
            lVar6 = lVar6 + 1;
            lVar5 = lVar5 + lStack_78;
            lVar8 = lVar7;
          } while (lVar6 < (longlong)param_5[1]);
        }
      }
      return 0;
    }
    return 0xfffffffb;
  }
  return 0xfffffffa;
}


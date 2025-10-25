
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403d8860(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar35;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar28 [16];
  
  auVar8 = _DAT_143089e20;
  param_2 = param_2 >> 2;
  uVar21 = param_6[1];
  uVar16 = *param_6;
  uVar4 = *param_5;
  uVar17 = uVar4 + 7 & 0xfffffffffffffff8;
  uVar23 = param_1 + ((longlong)(int)(uVar16 - 1 >> 1) + (int)(uVar21 - 1 >> 1) * param_2) * -4;
  if (param_7 == 0) {
    lVar9 = 0;
    lVar19 = param_9;
    if (0 < (longlong)(uVar21 - 1)) {
      while( true ) {
        FUN_1403bffa0(uVar23,lVar19,uVar4,uVar16,1);
        uVar21 = param_6[1];
        lVar9 = lVar9 + 1;
        uVar23 = uVar23 + param_2 * 4;
        lVar19 = lVar19 + uVar17 * 4;
        if ((longlong)(uVar21 - 1) <= lVar9) break;
        uVar16 = *param_6;
      }
    }
    lVar9 = uVar21 - 1;
    lVar10 = 0;
    if (0 < (longlong)param_5[1]) {
      do {
        FUN_1403bffa0(uVar23,lVar19,uVar4,*param_6,1);
        thunk_FUN_142d25930(param_9,uVar17,param_3,uVar4,param_6[1]);
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 1;
        lVar19 = lVar19 + uVar17 * 4;
        if ((longlong)param_6[1] <= lVar9) {
          lVar9 = 0;
          lVar19 = param_9;
        }
        uVar23 = uVar23 + param_2 * 4;
        param_3 = param_3 + (param_4 >> 2) * 4;
      } while (lVar10 < (longlong)param_5[1]);
    }
  }
  else {
    uVar17 = param_5[1];
    uVar12 = 0;
    if (0 < (longlong)uVar17) {
      lVar9 = 0;
      lVar19 = 0;
      do {
        uVar14 = 0;
        lVar10 = 0;
        if (0 < (longlong)uVar4) {
          uVar24 = uVar23;
          do {
            uVar18 = 0;
            lVar20 = 0;
            lVar11 = 0;
            auVar27 = ZEXT416(DAT_143089e30);
            if (0 < (longlong)uVar21) {
              lVar1 = uVar23 + lVar19 + lVar10;
              do {
                if (0 < (longlong)uVar16) {
                  if ((longlong)uVar16 < 8) {
                    uVar13 = 0;
                  }
                  else {
                    uVar15 = 0;
                    auVar38._0_4_ = auVar27._0_4_;
                    auVar38._4_4_ = auVar38._0_4_;
                    auVar38._8_4_ = auVar38._0_4_;
                    auVar38._12_4_ = auVar38._0_4_;
                    uVar13 = uVar16 & 0xfffffffffffffff8;
                    lVar2 = lVar1 + lVar11;
                    do {
                      uVar36 = *(undefined4 *)(uVar15 + param_7 + lVar20);
                      auVar26[0] = -((char)uVar36 == '\0');
                      auVar26[1] = -((char)((uint)uVar36 >> 8) == '\0');
                      auVar26[2] = -((char)((uint)uVar36 >> 0x10) == '\0');
                      auVar26[3] = -((char)((uint)uVar36 >> 0x18) == '\0');
                      auVar26[4] = 0xff;
                      auVar26[5] = 0xff;
                      auVar26[6] = 0xff;
                      auVar26[7] = 0xff;
                      auVar26[8] = 0xff;
                      auVar26[9] = 0xff;
                      auVar26[10] = 0xff;
                      auVar26[0xb] = 0xff;
                      auVar26[0xc] = 0xff;
                      auVar26[0xd] = 0xff;
                      auVar26[0xe] = 0xff;
                      auVar26[0xf] = 0xff;
                      auVar27 = pshufb(auVar26,auVar8);
                      uVar25 = auVar27._0_4_ ^ 0xffffffff;
                      auVar28._0_8_ = auVar27._0_8_ ^ 0xffffffffffffffff;
                      auVar28._8_4_ = auVar27._8_4_ ^ 0xffffffff;
                      auVar28._12_4_ = auVar27._12_4_ ^ 0xffffffff;
                      uVar22 = movmskps((int)uVar24,auVar28);
                      if ((uVar22 & 1) == 0) {
                        uVar36 = 0;
                      }
                      else {
                        uVar36 = *(undefined4 *)(lVar2 + uVar15 * 4);
                      }
                      if ((uVar22 & 2) == 0) {
                        uVar39 = 0;
                      }
                      else {
                        uVar39 = *(undefined4 *)(lVar2 + 4 + uVar15 * 4);
                      }
                      if ((uVar22 & 4) == 0) {
                        uVar41 = 0;
                      }
                      else {
                        uVar41 = *(undefined4 *)(lVar2 + 8 + uVar15 * 4);
                      }
                      if ((uVar22 & 8) == 0) {
                        uVar42 = 0;
                      }
                      else {
                        uVar42 = *(undefined4 *)(lVar2 + 0xc + uVar15 * 4);
                      }
                      auVar5._4_4_ = uVar39;
                      auVar5._0_4_ = uVar36;
                      auVar5._8_4_ = uVar41;
                      auVar5._12_4_ = uVar42;
                      auVar27 = minps(auVar38,auVar5);
                      auVar40._0_4_ = auVar27._0_4_ & uVar25;
                      uVar35 = (uint)(auVar28._0_8_ >> 0x20);
                      auVar40._4_4_ = auVar27._4_4_ & uVar35;
                      auVar40._8_4_ = auVar27._8_4_ & auVar28._8_4_;
                      auVar40._12_4_ = auVar27._12_4_ & auVar28._12_4_;
                      auVar29._0_4_ = ~uVar25 & auVar38._0_4_;
                      auVar29._4_4_ = ~uVar35 & auVar38._4_4_;
                      auVar29._8_4_ = ~auVar28._8_4_ & auVar38._8_4_;
                      auVar29._12_4_ = ~auVar28._12_4_ & auVar38._12_4_;
                      auVar40 = auVar40 | auVar29;
                      uVar36 = *(undefined4 *)(uVar15 + 4 + param_7 + lVar20);
                      auVar30[0] = -((char)uVar36 == '\0');
                      auVar30[1] = -((char)((uint)uVar36 >> 8) == '\0');
                      auVar30[2] = -((char)((uint)uVar36 >> 0x10) == '\0');
                      auVar30[3] = -((char)((uint)uVar36 >> 0x18) == '\0');
                      auVar30[4] = 0xff;
                      auVar30[5] = 0xff;
                      auVar30[6] = 0xff;
                      auVar30[7] = 0xff;
                      auVar30[8] = 0xff;
                      auVar30[9] = 0xff;
                      auVar30[10] = 0xff;
                      auVar30[0xb] = 0xff;
                      auVar30[0xc] = 0xff;
                      auVar30[0xd] = 0xff;
                      auVar30[0xe] = 0xff;
                      auVar30[0xf] = 0xff;
                      auVar27 = pshufb(auVar30,auVar8);
                      uVar25 = auVar27._0_4_ ^ 0xffffffff;
                      auVar31._0_8_ = auVar27._0_8_ ^ 0xffffffffffffffff;
                      auVar31._8_4_ = auVar27._8_4_ ^ 0xffffffff;
                      auVar31._12_4_ = auVar27._12_4_ ^ 0xffffffff;
                      uVar22 = movmskps(uVar22,auVar31);
                      uVar24 = (ulonglong)uVar22;
                      if ((uVar22 & 1) == 0) {
                        uVar36 = 0;
                      }
                      else {
                        uVar36 = *(undefined4 *)(lVar2 + 0x10 + uVar15 * 4);
                      }
                      if ((uVar22 & 2) == 0) {
                        uVar39 = 0;
                      }
                      else {
                        uVar39 = *(undefined4 *)(lVar2 + 0x14 + uVar15 * 4);
                      }
                      if ((uVar22 & 4) == 0) {
                        uVar41 = 0;
                      }
                      else {
                        uVar41 = *(undefined4 *)(lVar2 + 0x18 + uVar15 * 4);
                      }
                      if ((uVar22 & 8) == 0) {
                        uVar42 = 0;
                      }
                      else {
                        uVar42 = *(undefined4 *)(lVar2 + 0x1c + uVar15 * 4);
                      }
                      uVar15 = uVar15 + 8;
                      auVar6._4_4_ = uVar39;
                      auVar6._0_4_ = uVar36;
                      auVar6._8_4_ = uVar41;
                      auVar6._12_4_ = uVar42;
                      auVar27 = minps(auVar40,auVar6);
                      auVar37._0_4_ = auVar27._0_4_ & uVar25;
                      uVar22 = (uint)(auVar31._0_8_ >> 0x20);
                      auVar37._4_4_ = auVar27._4_4_ & uVar22;
                      auVar37._8_4_ = auVar27._8_4_ & auVar31._8_4_;
                      auVar37._12_4_ = auVar27._12_4_ & auVar31._12_4_;
                      auVar32._0_4_ = ~uVar25 & auVar40._0_4_;
                      auVar32._4_4_ = ~uVar22 & auVar40._4_4_;
                      auVar32._8_4_ = ~auVar31._8_4_ & auVar40._8_4_;
                      auVar32._12_4_ = ~auVar31._12_4_ & auVar40._12_4_;
                      auVar38 = auVar37 | auVar32;
                    } while (uVar15 < uVar13);
                    auVar7._4_8_ = auVar32._8_8_;
                    auVar7._0_4_ = auVar38._4_4_;
                    auVar33._0_8_ = auVar7._0_8_ << 0x20;
                    auVar33._8_4_ = auVar38._8_4_;
                    auVar33._12_4_ = auVar38._12_4_;
                    auVar34._8_8_ = auVar33._8_8_;
                    auVar34._0_8_ = auVar38._8_8_;
                    auVar27 = minps(auVar38,auVar34);
                    if (auVar27._4_4_ <= auVar27._0_4_) {
                      auVar27._0_4_ = auVar27._4_4_;
                    }
                  }
                  if (uVar13 < uVar16) {
                    do {
                      if ((*(char *)(uVar13 + param_7 + lVar20) != '\0') &&
                         (fVar3 = *(float *)(lVar1 + lVar11 + uVar13 * 4), fVar3 <= auVar27._0_4_))
                      {
                        auVar27._0_4_ = fVar3;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < uVar16);
                  }
                }
                uVar18 = uVar18 + 1;
                lVar20 = lVar20 + uVar16;
                lVar11 = lVar11 + param_2 * 4;
              } while (uVar18 < uVar21);
            }
            uVar14 = uVar14 + 1;
            *(int *)(lVar10 + param_3 + lVar9) = auVar27._0_4_;
            lVar10 = lVar10 + 4;
          } while (uVar14 < uVar4);
        }
        uVar12 = uVar12 + 1;
        lVar9 = lVar9 + (param_4 >> 2) * 4;
        lVar19 = lVar19 + param_2 * 4;
      } while (uVar12 < uVar17);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403d3ca0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,longlong param_9)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar33;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auVar26 [16];
  
  auVar5 = _DAT_143089e20;
  lVar19 = (longlong)param_2 >> 2;
  lVar17 = (longlong)(param_6._4_4_ + -1 >> 1);
  uVar11 = (longlong)(int)param_5 + 7U & 0xfffffffffffffff8;
  lVar6 = (longlong)((int)param_6 + -1 >> 1);
  lVar8 = (lVar19 * lVar17 + lVar6) * -4 + param_1;
  if (param_7 == 0) {
    lVar21 = 0;
    lVar17 = (longlong)param_6._4_4_ + -1;
    lVar6 = param_9;
    if (lVar17 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_1403bffa0(lVar8,lVar6,(longlong)(int)param_5,(longlong)(int)param_6,1);
        lVar21 = lVar21 + 1;
        lVar8 = lVar8 + lVar19 * 4;
        lVar6 = lVar6 + uVar11 * 4;
      } while (lVar21 < lVar17);
    }
    lVar21 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_1403bffa0(lVar8,lVar6,(longlong)(int)param_5,(longlong)(int)param_6,1);
        thunk_FUN_142d25930(param_9,uVar11,param_3,(longlong)(int)param_5,(longlong)param_6._4_4_);
        lVar17 = lVar17 + 1;
        lVar21 = lVar21 + 1;
        lVar6 = lVar6 + uVar11 * 4;
        if (param_6._4_4_ <= lVar17) {
          lVar17 = 0;
          lVar6 = param_9;
        }
        lVar8 = lVar8 + lVar19 * 4;
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
      } while (lVar21 < param_5._4_4_);
    }
  }
  else {
    uVar11 = 0;
    if (0 < param_5._4_4_) {
      lVar21 = lVar19 * 4;
      lVar17 = lVar17 * lVar19 * -4;
      param_1 = param_1 + lVar19 * -4;
      lVar6 = lVar6 * -4;
      lVar19 = 0;
      lVar8 = 0;
      do {
        uVar13 = 0;
        if (0 < (int)param_5) {
          uVar9 = (ulonglong)(int)param_6;
          do {
            uVar16 = 0;
            lVar18 = 0;
            lVar7 = 0;
            auVar25 = ZEXT416(DAT_143089e30);
            if (0 < (longlong)param_6._4_4_) {
              lVar14 = uVar13 * 4 + param_1 + lVar21 + lVar6 + lVar17 + lVar8;
              do {
                if (0 < (longlong)uVar9) {
                  if ((longlong)uVar9 < 8) {
                    uVar22 = 0;
                  }
                  else {
                    uVar22 = uVar9 & 0xfffffffffffffff8;
                    uVar15 = 0;
                    auVar36._0_4_ = auVar25._0_4_;
                    auVar36._4_4_ = auVar36._0_4_;
                    auVar36._8_4_ = auVar36._0_4_;
                    auVar36._12_4_ = auVar36._0_4_;
                    lVar20 = lVar6 + lVar21 + param_1 + lVar17 + lVar8 + uVar13 * 4 + lVar7;
                    uVar12 = param_7;
                    do {
                      uVar34 = *(undefined4 *)(uVar15 + param_7 + lVar18);
                      auVar24[0] = -((char)uVar34 == '\0');
                      auVar24[1] = -((char)((uint)uVar34 >> 8) == '\0');
                      auVar24[2] = -((char)((uint)uVar34 >> 0x10) == '\0');
                      auVar24[3] = -((char)((uint)uVar34 >> 0x18) == '\0');
                      auVar24[4] = 0xff;
                      auVar24[5] = 0xff;
                      auVar24[6] = 0xff;
                      auVar24[7] = 0xff;
                      auVar24[8] = 0xff;
                      auVar24[9] = 0xff;
                      auVar24[10] = 0xff;
                      auVar24[0xb] = 0xff;
                      auVar24[0xc] = 0xff;
                      auVar24[0xd] = 0xff;
                      auVar24[0xe] = 0xff;
                      auVar24[0xf] = 0xff;
                      auVar25 = pshufb(auVar24,auVar5);
                      uVar23 = auVar25._0_4_ ^ 0xffffffff;
                      auVar26._0_8_ = auVar25._0_8_ ^ 0xffffffffffffffff;
                      auVar26._8_4_ = auVar25._8_4_ ^ 0xffffffff;
                      auVar26._12_4_ = auVar25._12_4_ ^ 0xffffffff;
                      uVar10 = movmskps((int)uVar12,auVar26);
                      if ((uVar10 & 1) == 0) {
                        uVar34 = 0;
                      }
                      else {
                        uVar34 = *(undefined4 *)(lVar14 + lVar7 + uVar15 * 4);
                      }
                      if ((uVar10 & 2) == 0) {
                        uVar37 = 0;
                      }
                      else {
                        uVar37 = *(undefined4 *)(lVar20 + 4 + uVar15 * 4);
                      }
                      if ((uVar10 & 4) == 0) {
                        uVar39 = 0;
                      }
                      else {
                        uVar39 = *(undefined4 *)(lVar20 + 8 + uVar15 * 4);
                      }
                      if ((uVar10 & 8) == 0) {
                        uVar40 = 0;
                      }
                      else {
                        uVar40 = *(undefined4 *)(lVar20 + 0xc + uVar15 * 4);
                      }
                      auVar2._4_4_ = uVar37;
                      auVar2._0_4_ = uVar34;
                      auVar2._8_4_ = uVar39;
                      auVar2._12_4_ = uVar40;
                      auVar25 = minps(auVar36,auVar2);
                      auVar38._0_4_ = auVar25._0_4_ & uVar23;
                      uVar33 = (uint)(auVar26._0_8_ >> 0x20);
                      auVar38._4_4_ = auVar25._4_4_ & uVar33;
                      auVar38._8_4_ = auVar25._8_4_ & auVar26._8_4_;
                      auVar38._12_4_ = auVar25._12_4_ & auVar26._12_4_;
                      auVar27._0_4_ = ~uVar23 & auVar36._0_4_;
                      auVar27._4_4_ = ~uVar33 & auVar36._4_4_;
                      auVar27._8_4_ = ~auVar26._8_4_ & auVar36._8_4_;
                      auVar27._12_4_ = ~auVar26._12_4_ & auVar36._12_4_;
                      auVar38 = auVar38 | auVar27;
                      uVar34 = *(undefined4 *)(uVar15 + 4 + param_7 + lVar18);
                      auVar28[0] = -((char)uVar34 == '\0');
                      auVar28[1] = -((char)((uint)uVar34 >> 8) == '\0');
                      auVar28[2] = -((char)((uint)uVar34 >> 0x10) == '\0');
                      auVar28[3] = -((char)((uint)uVar34 >> 0x18) == '\0');
                      auVar28[4] = 0xff;
                      auVar28[5] = 0xff;
                      auVar28[6] = 0xff;
                      auVar28[7] = 0xff;
                      auVar28[8] = 0xff;
                      auVar28[9] = 0xff;
                      auVar28[10] = 0xff;
                      auVar28[0xb] = 0xff;
                      auVar28[0xc] = 0xff;
                      auVar28[0xd] = 0xff;
                      auVar28[0xe] = 0xff;
                      auVar28[0xf] = 0xff;
                      auVar25 = pshufb(auVar28,auVar5);
                      uVar23 = auVar25._0_4_ ^ 0xffffffff;
                      auVar29._0_8_ = auVar25._0_8_ ^ 0xffffffffffffffff;
                      auVar29._8_4_ = auVar25._8_4_ ^ 0xffffffff;
                      auVar29._12_4_ = auVar25._12_4_ ^ 0xffffffff;
                      uVar10 = movmskps(uVar10,auVar29);
                      uVar12 = (ulonglong)uVar10;
                      if ((uVar10 & 1) == 0) {
                        uVar34 = 0;
                      }
                      else {
                        uVar34 = *(undefined4 *)(lVar20 + 0x10 + uVar15 * 4);
                      }
                      if ((uVar10 & 2) == 0) {
                        uVar37 = 0;
                      }
                      else {
                        uVar37 = *(undefined4 *)(lVar20 + 0x14 + uVar15 * 4);
                      }
                      if ((uVar10 & 4) == 0) {
                        uVar39 = 0;
                      }
                      else {
                        uVar39 = *(undefined4 *)(lVar20 + 0x18 + uVar15 * 4);
                      }
                      if ((uVar10 & 8) == 0) {
                        uVar40 = 0;
                      }
                      else {
                        uVar40 = *(undefined4 *)(lVar20 + 0x1c + uVar15 * 4);
                      }
                      uVar15 = uVar15 + 8;
                      auVar3._4_4_ = uVar37;
                      auVar3._0_4_ = uVar34;
                      auVar3._8_4_ = uVar39;
                      auVar3._12_4_ = uVar40;
                      auVar25 = minps(auVar38,auVar3);
                      auVar35._0_4_ = auVar25._0_4_ & uVar23;
                      uVar10 = (uint)(auVar29._0_8_ >> 0x20);
                      auVar35._4_4_ = auVar25._4_4_ & uVar10;
                      auVar35._8_4_ = auVar25._8_4_ & auVar29._8_4_;
                      auVar35._12_4_ = auVar25._12_4_ & auVar29._12_4_;
                      auVar30._0_4_ = ~uVar23 & auVar38._0_4_;
                      auVar30._4_4_ = ~uVar10 & auVar38._4_4_;
                      auVar30._8_4_ = ~auVar29._8_4_ & auVar38._8_4_;
                      auVar30._12_4_ = ~auVar29._12_4_ & auVar38._12_4_;
                      auVar36 = auVar35 | auVar30;
                    } while (uVar15 < uVar22);
                    auVar4._4_8_ = auVar30._8_8_;
                    auVar4._0_4_ = auVar36._4_4_;
                    auVar31._0_8_ = auVar4._0_8_ << 0x20;
                    auVar31._8_4_ = auVar36._8_4_;
                    auVar31._12_4_ = auVar36._12_4_;
                    auVar32._8_8_ = auVar31._8_8_;
                    auVar32._0_8_ = auVar36._8_8_;
                    auVar25 = minps(auVar36,auVar32);
                    if (auVar25._4_4_ <= auVar25._0_4_) {
                      auVar25._0_4_ = auVar25._4_4_;
                    }
                  }
                  if (uVar22 < uVar9) {
                    do {
                      if ((*(char *)(uVar22 + param_7 + lVar18) != '\0') &&
                         (fVar1 = *(float *)(lVar14 + lVar7 + uVar22 * 4), fVar1 <= auVar25._0_4_))
                      {
                        auVar25._0_4_ = fVar1;
                      }
                      uVar22 = uVar22 + 1;
                    } while (uVar22 < uVar9);
                  }
                }
                uVar16 = uVar16 + 1;
                lVar18 = lVar18 + uVar9;
                lVar7 = lVar7 + lVar21;
              } while (uVar16 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(int *)(param_3 + lVar19 + uVar13 * 4) = auVar25._0_4_;
            uVar13 = uVar13 + 1;
          } while (uVar13 < (ulonglong)(longlong)(int)param_5);
        }
        uVar11 = uVar11 + 1;
        lVar19 = lVar19 + ((longlong)param_4 >> 2) * 4;
        lVar8 = lVar8 + lVar21;
      } while (uVar11 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}


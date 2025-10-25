
void FUN_1401c03c0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  short *psVar1;
  short *psVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong lStack_60;
  
  fVar4 = *param_4;
  auVar20 = ZEXT416((uint)fVar4);
  lVar14 = (longlong)(param_5 >> 1);
  lStack_60 = lVar14 * -2 + param_1;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 8) {
LAB_1401c0c8c:
      uVar11 = 0;
      if (param_3 == 0) goto LAB_1401c05e5;
      uVar13 = 0;
      uVar6 = param_3;
    }
    else {
      uVar6 = param_2 & 0xf;
      if (uVar6 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1401c0c8c;
        uVar6 = 0x10 - uVar6 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar6 + 8)) goto LAB_1401c0c8c;
      lVar15 = param_1 + lVar14 * 2;
      uVar13 = 0;
      uVar11 = param_3 - (param_3 - uVar6 & 7);
      lVar9 = lVar14 * -2 + param_1;
      if (uVar6 != 0) {
        do {
          *(float *)(param_2 + uVar13 * 4) =
               (float)((int)*(short *)(lVar9 + uVar13 * 2) + (int)*(short *)(lVar15 + uVar13 * 2)) *
               fVar4;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar6);
      }
      in_XMM0._4_4_ = fVar4;
      in_XMM0._0_4_ = fVar4;
      in_XMM0._8_4_ = fVar4;
      in_XMM0._12_4_ = fVar4;
      do {
        auVar22 = pmovsxwd(in_XMM3,*(undefined8 *)(lVar9 + uVar6 * 2));
        auVar21 = pmovsxwd(in_XMM2,*(undefined8 *)(lVar15 + uVar6 * 2));
        in_XMM4._0_4_ = (float)(auVar22._0_4_ + auVar21._0_4_) * fVar4;
        in_XMM4._4_4_ = (float)(auVar22._4_4_ + auVar21._4_4_) * fVar4;
        in_XMM4._8_4_ = (float)(auVar22._8_4_ + auVar21._8_4_) * fVar4;
        in_XMM4._12_4_ = (float)(auVar22._12_4_ + auVar21._12_4_) * fVar4;
        *(undefined1 (*) [16])(param_2 + uVar6 * 4) = in_XMM4;
        auVar21 = pmovsxwd(auVar21,*(undefined8 *)(lVar9 + 8 + uVar6 * 2));
        in_XMM5 = pmovsxwd(in_XMM5,*(undefined8 *)(lVar15 + 8 + uVar6 * 2));
        in_XMM2._0_4_ = auVar21._0_4_ + in_XMM5._0_4_;
        in_XMM2._4_4_ = auVar21._4_4_ + in_XMM5._4_4_;
        in_XMM2._8_4_ = auVar21._8_4_ + in_XMM5._8_4_;
        in_XMM2._12_4_ = auVar21._12_4_ + in_XMM5._12_4_;
        in_XMM3._0_4_ = (float)in_XMM2._0_4_ * fVar4;
        in_XMM3._4_4_ = (float)in_XMM2._4_4_ * fVar4;
        in_XMM3._8_4_ = (float)in_XMM2._8_4_ * fVar4;
        in_XMM3._12_4_ = (float)in_XMM2._12_4_ * fVar4;
        *(undefined1 (*) [16])(param_2 + 0x10 + uVar6 * 4) = in_XMM3;
        uVar6 = uVar6 + 8;
      } while (uVar6 < uVar11);
      if (param_3 < uVar11 + 1) goto LAB_1401c05e5;
      uVar6 = param_3 - uVar11;
      if ((longlong)uVar6 < 4) {
        uVar13 = 0;
      }
      else {
        uVar17 = 0;
        uVar13 = uVar6 & 0xfffffffffffffffc;
        lVar7 = 0;
        do {
          auVar21 = pmovsxwd(in_XMM3,*(undefined8 *)(lVar7 + lVar9 + uVar11 * 2));
          in_XMM2 = pmovsxwd(in_XMM2,*(undefined8 *)(lVar7 + lVar15 + uVar11 * 2));
          lVar7 = lVar7 + 8;
          in_XMM3._0_4_ = (float)(auVar21._0_4_ + in_XMM2._0_4_);
          in_XMM3._4_4_ = (float)(auVar21._4_4_ + in_XMM2._4_4_);
          in_XMM3._8_4_ = (float)(auVar21._8_4_ + in_XMM2._8_4_);
          in_XMM3._12_4_ = (float)(auVar21._12_4_ + in_XMM2._12_4_);
          in_XMM4._0_4_ = (float)(int)in_XMM3._0_4_ * fVar4;
          in_XMM4._4_4_ = (float)(int)in_XMM3._4_4_ * fVar4;
          in_XMM4._8_4_ = (float)(int)in_XMM3._8_4_ * fVar4;
          in_XMM4._12_4_ = (float)(int)in_XMM3._12_4_ * fVar4;
          *(undefined1 (*) [16])(param_2 + uVar11 * 4 + uVar17 * 4) = in_XMM4;
          uVar17 = uVar17 + 4;
        } while (uVar17 < uVar13);
      }
    }
    if (uVar13 < uVar6) {
      do {
        in_XMM0._0_4_ =
             (float)((int)*(short *)(lVar14 * -2 + param_1 + uVar11 * 2 + uVar13 * 2) +
                    (int)*(short *)(param_1 + lVar14 * 2 + uVar11 * 2 + uVar13 * 2)) * fVar4;
        *(float *)(param_2 + uVar11 * 4 + uVar13 * 4) = in_XMM0._0_4_;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar6);
    }
  }
LAB_1401c05e5:
  if (1 < lVar14) {
    lVar15 = 1;
    if (lVar14 - 1U >> 1 != 0) {
      uVar11 = param_2 & 0xf;
      lVar15 = param_1 + lVar14 * 2;
      uVar6 = 0;
      do {
        uVar13 = uVar6;
        lVar9 = lVar14 * -2 + param_1 + uVar13 * 4;
        fVar4 = param_4[uVar13 * 2 + 1];
        in_XMM4 = ZEXT416((uint)fVar4);
        fVar5 = param_4[uVar13 * 2 + 2];
        in_XMM5 = ZEXT416((uint)fVar5);
        lStack_60 = lVar9 + 4;
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 4) ||
             (((uVar6 = uVar11, uVar11 != 0 && (uVar6 = 0x10 - uVar11 >> 2, (param_2 & 3) != 0)) ||
              ((longlong)param_3 < (longlong)(uVar6 + 4))))) {
            uVar17 = 0;
          }
          else {
            uVar16 = 0;
            lVar18 = 0;
            uVar17 = param_3 - (param_3 - uVar6 & 3);
            lVar7 = lVar15;
            if (uVar6 != 0) {
              do {
                lVar10 = lVar18 + 2;
                lVar12 = lVar18 + 4;
                lVar18 = lVar18 + 2;
                in_XMM0._0_4_ =
                     (float)((int)*(short *)(lVar12 + lVar9) + (int)*(short *)(lVar7 + -4)) * fVar5;
                auVar20._0_4_ =
                     (float)((int)*(short *)(lVar10 + lVar9) + (int)*(short *)(lVar7 + -2)) * fVar4
                     + *(float *)(param_2 + uVar16 * 4) + in_XMM0._0_4_;
                *(float *)(param_2 + uVar16 * 4) = auVar20._0_4_;
                uVar16 = uVar16 + 1;
                lVar7 = lVar7 + 2;
              } while (uVar16 < uVar6);
            }
            lVar7 = uVar6 * 2;
            in_XMM3._4_4_ = fVar5;
            in_XMM3._0_4_ = fVar5;
            in_XMM3._8_4_ = fVar5;
            in_XMM3._12_4_ = fVar5;
            in_XMM2._4_4_ = (int)fVar4;
            in_XMM2._0_4_ = (int)fVar4;
            in_XMM2._8_4_ = (int)fVar4;
            in_XMM2._12_4_ = (int)fVar4;
            do {
              auVar21 = pmovsxwd(auVar20,*(undefined8 *)(lVar7 + 2 + lVar9));
              auVar20 = pmovsxwd(in_XMM0,*(undefined8 *)(lVar7 + -2 + lVar15));
              auVar22._0_4_ = auVar21._0_4_ + auVar20._0_4_;
              auVar22._4_4_ = auVar21._4_4_ + auVar20._4_4_;
              auVar22._8_4_ = auVar21._8_4_ + auVar20._8_4_;
              auVar22._12_4_ = auVar21._12_4_ + auVar20._12_4_;
              pfVar8 = (float *)(param_2 + uVar6 * 4);
              fVar23 = (float)auVar22._0_4_ * fVar4 + *pfVar8;
              fVar24 = (float)auVar22._4_4_ * fVar4 + pfVar8[1];
              fVar25 = (float)auVar22._8_4_ * fVar4 + pfVar8[2];
              fVar26 = (float)auVar22._12_4_ * fVar4 + pfVar8[3];
              pfVar8 = (float *)(param_2 + uVar6 * 4);
              *pfVar8 = fVar23;
              pfVar8[1] = fVar24;
              pfVar8[2] = fVar25;
              pfVar8[3] = fVar26;
              auVar21 = pmovsxwd(auVar20,*(undefined8 *)(lVar7 + 4 + lVar9));
              auVar20 = pmovsxwd(auVar22,*(undefined8 *)(lVar7 + -4 + lVar15));
              lVar7 = lVar7 + 8;
              in_XMM0._0_4_ = (float)(auVar21._0_4_ + auVar20._0_4_) * fVar5;
              in_XMM0._4_4_ = (float)(auVar21._4_4_ + auVar20._4_4_) * fVar5;
              in_XMM0._8_4_ = (float)(auVar21._8_4_ + auVar20._8_4_) * fVar5;
              in_XMM0._12_4_ = (float)(auVar21._12_4_ + auVar20._12_4_) * fVar5;
              pfVar8 = (float *)(param_2 + uVar6 * 4);
              *pfVar8 = fVar23 + in_XMM0._0_4_;
              pfVar8[1] = fVar24 + in_XMM0._4_4_;
              pfVar8[2] = fVar25 + in_XMM0._8_4_;
              pfVar8[3] = fVar26 + in_XMM0._12_4_;
              uVar6 = uVar6 + 4;
            } while (uVar6 < uVar17);
          }
          lVar7 = uVar17 * 2;
          if (uVar17 < param_3) {
            lVar18 = lVar15 + uVar17 * 2;
            do {
              lVar10 = lVar7 + 2;
              psVar1 = (short *)(lVar18 + -2);
              psVar2 = (short *)(lVar18 + -4);
              lVar18 = lVar18 + 2;
              lVar12 = lVar7 + 4;
              lVar7 = lVar7 + 2;
              in_XMM0._0_4_ = (float)((int)*(short *)(lVar12 + lVar9) + (int)*psVar2) * fVar5;
              auVar20._0_4_ =
                   (float)((int)*(short *)(lVar10 + lVar9) + (int)*psVar1) * fVar4 +
                   *(float *)(param_2 + uVar17 * 4) + in_XMM0._0_4_;
              *(float *)(param_2 + uVar17 * 4) = auVar20._0_4_;
              uVar17 = uVar17 + 1;
            } while (uVar17 < param_3);
          }
        }
        uVar6 = uVar13 + 1;
        lVar15 = lVar15 + -4;
      } while (uVar6 < lVar14 - 1U >> 1);
      lVar15 = uVar13 + 2 + uVar6;
    }
    if (lVar14 != lVar15) {
      lVar9 = lVar14 * -2;
      fVar4 = param_4[lVar15];
      lStack_60 = param_1 + lVar9 + lVar15 * 2;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 8) {
LAB_1401c0c66:
          uVar11 = 0;
          if (param_3 == 0) goto LAB_1401c0aad;
          uVar13 = 0;
          uVar6 = param_3;
        }
        else {
          uVar6 = param_2 & 0xf;
          if (uVar6 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1401c0c66;
            uVar6 = 0x10 - uVar6 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar6 + 8)) goto LAB_1401c0c66;
          uVar13 = 0;
          lVar7 = param_1 + lVar14 * 2 + lVar15 * -2;
          uVar11 = param_3 - (param_3 - uVar6 & 7);
          if (uVar6 != 0) {
            do {
              *(float *)(param_2 + uVar13 * 4) =
                   (float)((int)*(short *)(lStack_60 + uVar13 * 2) +
                          (int)*(short *)(lVar7 + uVar13 * 2)) * fVar4 +
                   *(float *)(param_2 + uVar13 * 4);
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar6);
          }
          lVar12 = lVar15 * -2 + lVar14 * 2 + param_1;
          lVar18 = uVar6 * 2;
          lVar10 = lVar9 + lVar15 * 2 + param_1;
          do {
            auVar21 = pmovsxwd(in_XMM3,*(undefined8 *)(lVar18 + lStack_60));
            auVar20 = pmovsxwd(in_XMM2,*(undefined8 *)(lVar18 + lVar7));
            pfVar8 = (float *)(param_2 + uVar6 * 4);
            in_XMM4._0_4_ = (float)(auVar21._0_4_ + auVar20._0_4_) * fVar4 + *pfVar8;
            in_XMM4._4_4_ = (float)(auVar21._4_4_ + auVar20._4_4_) * fVar4 + pfVar8[1];
            in_XMM4._8_4_ = (float)(auVar21._8_4_ + auVar20._8_4_) * fVar4 + pfVar8[2];
            in_XMM4._12_4_ = (float)(auVar21._12_4_ + auVar20._12_4_) * fVar4 + pfVar8[3];
            *(undefined1 (*) [16])(param_2 + uVar6 * 4) = in_XMM4;
            auVar20 = pmovsxwd(auVar20,*(undefined8 *)(lVar18 + 8 + lVar10));
            in_XMM5 = pmovsxwd(in_XMM5,*(undefined8 *)(lVar18 + 8 + lVar12));
            lVar18 = lVar18 + 0x10;
            in_XMM2._0_4_ = auVar20._0_4_ + in_XMM5._0_4_;
            in_XMM2._4_4_ = auVar20._4_4_ + in_XMM5._4_4_;
            in_XMM2._8_4_ = auVar20._8_4_ + in_XMM5._8_4_;
            in_XMM2._12_4_ = auVar20._12_4_ + in_XMM5._12_4_;
            pfVar8 = (float *)(param_2 + 0x10 + uVar6 * 4);
            in_XMM3._0_4_ = (float)in_XMM2._0_4_ * fVar4 + *pfVar8;
            in_XMM3._4_4_ = (float)in_XMM2._4_4_ * fVar4 + pfVar8[1];
            in_XMM3._8_4_ = (float)in_XMM2._8_4_ * fVar4 + pfVar8[2];
            in_XMM3._12_4_ = (float)in_XMM2._12_4_ * fVar4 + pfVar8[3];
            *(undefined1 (*) [16])(param_2 + 0x10 + uVar6 * 4) = in_XMM3;
            uVar6 = uVar6 + 8;
          } while (uVar6 < uVar11);
          if (param_3 < uVar11 + 1) goto LAB_1401c0aad;
          uVar6 = param_3 - uVar11;
          if ((longlong)uVar6 < 4) {
            uVar13 = 0;
          }
          else {
            uVar17 = 0;
            uVar13 = uVar6 & 0xfffffffffffffffc;
            lVar7 = 0;
            pauVar19 = (undefined1 (*) [16])(param_2 + uVar11 * 4);
            do {
              auVar20 = pmovsxwd(in_XMM3,*(undefined8 *)(lVar7 + lVar10 + uVar11 * 2));
              uVar17 = uVar17 + 4;
              in_XMM2 = pmovsxwd(in_XMM2,*(undefined8 *)(lVar7 + lVar12 + uVar11 * 2));
              lVar7 = lVar7 + 8;
              in_XMM3._0_4_ = (float)(auVar20._0_4_ + in_XMM2._0_4_);
              in_XMM3._4_4_ = (float)(auVar20._4_4_ + in_XMM2._4_4_);
              in_XMM3._8_4_ = (float)(auVar20._8_4_ + in_XMM2._8_4_);
              in_XMM3._12_4_ = (float)(auVar20._12_4_ + in_XMM2._12_4_);
              in_XMM4._0_4_ = (float)(int)in_XMM3._0_4_ * fVar4 + *(float *)*pauVar19;
              in_XMM4._4_4_ = (float)(int)in_XMM3._4_4_ * fVar4 + *(float *)(*pauVar19 + 4);
              in_XMM4._8_4_ = (float)(int)in_XMM3._8_4_ * fVar4 + *(float *)(*pauVar19 + 8);
              in_XMM4._12_4_ = (float)(int)in_XMM3._12_4_ * fVar4 + *(float *)(*pauVar19 + 0xc);
              *pauVar19 = in_XMM4;
              pauVar19 = pauVar19 + 1;
            } while (uVar17 < uVar13);
          }
        }
        if (uVar13 < uVar6) {
          pfVar8 = (float *)(param_2 + uVar11 * 4 + uVar13 * 4);
          do {
            lVar7 = uVar13 * 2;
            lVar18 = uVar13 * 2;
            uVar13 = uVar13 + 1;
            *pfVar8 = (float)((int)*(short *)(lVar9 + lVar15 * 2 + param_1 + uVar11 * 2 + lVar7) +
                             (int)*(short *)(param_1 + lVar15 * -2 + lVar14 * 2 + uVar11 * 2 +
                                            lVar18)) * fVar4 + *pfVar8;
            pfVar8 = pfVar8 + 1;
          } while (uVar13 < uVar6);
        }
      }
    }
  }
LAB_1401c0aad:
  fVar4 = param_4[lVar14];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 8) {
LAB_1401c0c53:
    uVar11 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar6 = param_2 & 0xf;
    if (uVar6 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1401c0c53;
      uVar6 = 0x10 - uVar6 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar6 + 8)) goto LAB_1401c0c53;
    uVar13 = 0;
    uVar11 = param_3 - (param_3 - uVar6 & 7);
    if (uVar6 != 0) {
      do {
        *(float *)(param_2 + uVar13 * 4) =
             (float)(int)*(short *)(lStack_60 + 2 + uVar13 * 2) * fVar4 +
             *(float *)(param_2 + uVar13 * 4);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar6);
    }
    do {
      in_XMM2 = pmovsxwd(in_XMM2,*(undefined8 *)(lStack_60 + 2 + uVar6 * 2));
      pfVar8 = (float *)(param_2 + uVar6 * 4);
      fVar5 = pfVar8[1];
      fVar23 = pfVar8[2];
      fVar24 = pfVar8[3];
      pfVar3 = (float *)(param_2 + uVar6 * 4);
      *pfVar3 = (float)in_XMM2._0_4_ * fVar4 + *pfVar8;
      pfVar3[1] = (float)in_XMM2._4_4_ * fVar4 + fVar5;
      pfVar3[2] = (float)in_XMM2._8_4_ * fVar4 + fVar23;
      pfVar3[3] = (float)in_XMM2._12_4_ * fVar4 + fVar24;
      in_XMM4 = pmovsxwd(in_XMM4,*(undefined8 *)(lStack_60 + 10 + uVar6 * 2));
      pfVar8 = (float *)(param_2 + 0x10 + uVar6 * 4);
      fVar5 = pfVar8[1];
      fVar23 = pfVar8[2];
      fVar24 = pfVar8[3];
      pfVar3 = (float *)(param_2 + 0x10 + uVar6 * 4);
      *pfVar3 = (float)in_XMM4._0_4_ * fVar4 + *pfVar8;
      pfVar3[1] = (float)in_XMM4._4_4_ * fVar4 + fVar5;
      pfVar3[2] = (float)in_XMM4._8_4_ * fVar4 + fVar23;
      pfVar3[3] = (float)in_XMM4._12_4_ * fVar4 + fVar24;
      uVar6 = uVar6 + 8;
    } while (uVar6 < uVar11);
    if (param_3 < uVar11 + 1) {
      return;
    }
    param_3 = param_3 - uVar11;
    if (3 < (longlong)param_3) {
      uVar13 = 0;
      uVar6 = param_3 & 0xfffffffffffffffc;
      pfVar8 = (float *)(param_2 + uVar11 * 4);
      lVar14 = 0;
      do {
        in_XMM2 = pmovsxwd(in_XMM2,*(undefined8 *)(lVar14 + 2 + lStack_60 + uVar11 * 2));
        uVar13 = uVar13 + 4;
        lVar14 = lVar14 + 8;
        *pfVar8 = (float)in_XMM2._0_4_ * fVar4 + *pfVar8;
        pfVar8[1] = (float)in_XMM2._4_4_ * fVar4 + pfVar8[1];
        pfVar8[2] = (float)in_XMM2._8_4_ * fVar4 + pfVar8[2];
        pfVar8[3] = (float)in_XMM2._12_4_ * fVar4 + pfVar8[3];
        pfVar8 = pfVar8 + 4;
      } while (uVar13 < uVar6);
      goto LAB_1401c0c06;
    }
  }
  uVar6 = 0;
LAB_1401c0c06:
  if (uVar6 < param_3) {
    pfVar8 = (float *)(param_2 + uVar11 * 4 + uVar6 * 4);
    do {
      lVar14 = uVar6 * 2;
      uVar6 = uVar6 + 1;
      *pfVar8 = (float)(int)*(short *)(lStack_60 + uVar11 * 2 + 2 + lVar14) * fVar4 + *pfVar8;
      pfVar8 = pfVar8 + 1;
    } while (uVar6 < param_3);
  }
  return;
}


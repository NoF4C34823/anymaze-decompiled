
void FUN_140775e20(longlong param_1,ulonglong param_2,longlong param_3,float *param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  float *pfVar3;
  ushort *puVar4;
  ushort *puVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  ulonglong uVar22;
  undefined1 in_XMM0 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong lStack_70;
  
  uVar16 = param_3 * 3;
  lVar19 = (longlong)(param_5 >> 1);
  fVar6 = *param_4;
  auVar23 = ZEXT416((uint)fVar6);
  lStack_70 = lVar19 * -6 + param_1;
  if (0 < (longlong)uVar16) {
    if ((longlong)uVar16 < 8) {
LAB_14077670c:
      uVar13 = 0;
      if (uVar16 == 0) goto LAB_140776045;
      uVar15 = 0;
      uVar8 = uVar16;
    }
    else {
      uVar8 = param_2 & 0xf;
      if (uVar8 != 0) {
        if ((param_2 & 3) != 0) goto LAB_14077670c;
        uVar8 = 0x10 - uVar8 >> 2;
      }
      if ((longlong)uVar16 < (longlong)(uVar8 + 8)) goto LAB_14077670c;
      uVar15 = 0;
      lVar17 = param_1 + lVar19 * 6;
      lVar11 = lVar19 * -6 + param_1;
      uVar13 = uVar16 - (uVar16 - uVar8 & 7);
      if (uVar8 != 0) {
        do {
          *(float *)(param_2 + uVar15 * 4) =
               (float)((uint)*(ushort *)(lVar11 + uVar15 * 2) +
                      (uint)*(ushort *)(lVar17 + uVar15 * 2)) * fVar6;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar8);
      }
      in_XMM0._4_4_ = fVar6;
      in_XMM0._0_4_ = fVar6;
      in_XMM0._8_4_ = fVar6;
      in_XMM0._12_4_ = fVar6;
      do {
        auVar25 = pmovzxwd(in_XMM3,*(undefined8 *)(lVar11 + uVar8 * 2));
        auVar24 = pmovzxwd(in_XMM2,*(undefined8 *)(lVar17 + uVar8 * 2));
        in_XMM4._0_4_ = (float)(auVar25._0_4_ + auVar24._0_4_) * fVar6;
        in_XMM4._4_4_ = (float)(auVar25._4_4_ + auVar24._4_4_) * fVar6;
        in_XMM4._8_4_ = (float)(auVar25._8_4_ + auVar24._8_4_) * fVar6;
        in_XMM4._12_4_ = (float)(auVar25._12_4_ + auVar24._12_4_) * fVar6;
        *(undefined1 (*) [16])(param_2 + uVar8 * 4) = in_XMM4;
        auVar24 = pmovzxwd(auVar24,*(undefined8 *)(lVar11 + 8 + uVar8 * 2));
        in_XMM5 = pmovzxwd(in_XMM5,*(undefined8 *)(lVar17 + 8 + uVar8 * 2));
        in_XMM2._0_4_ = auVar24._0_4_ + in_XMM5._0_4_;
        in_XMM2._4_4_ = auVar24._4_4_ + in_XMM5._4_4_;
        in_XMM2._8_4_ = auVar24._8_4_ + in_XMM5._8_4_;
        in_XMM2._12_4_ = auVar24._12_4_ + in_XMM5._12_4_;
        in_XMM3._0_4_ = (float)in_XMM2._0_4_ * fVar6;
        in_XMM3._4_4_ = (float)in_XMM2._4_4_ * fVar6;
        in_XMM3._8_4_ = (float)in_XMM2._8_4_ * fVar6;
        in_XMM3._12_4_ = (float)in_XMM2._12_4_ * fVar6;
        *(undefined1 (*) [16])(param_2 + 0x10 + uVar8 * 4) = in_XMM3;
        uVar8 = uVar8 + 8;
      } while (uVar8 < uVar13);
      if (uVar16 < uVar13 + 1) goto LAB_140776045;
      uVar8 = uVar16 - uVar13;
      if ((longlong)uVar8 < 4) {
        uVar15 = 0;
      }
      else {
        uVar18 = 0;
        uVar15 = uVar8 & 0xfffffffffffffffc;
        lVar9 = 0;
        do {
          auVar24 = pmovzxwd(in_XMM3,*(undefined8 *)(lVar9 + lVar11 + uVar13 * 2));
          in_XMM2 = pmovzxwd(in_XMM2,*(undefined8 *)(lVar9 + lVar17 + uVar13 * 2));
          lVar9 = lVar9 + 8;
          in_XMM3._0_4_ = (float)(auVar24._0_4_ + in_XMM2._0_4_);
          in_XMM3._4_4_ = (float)(auVar24._4_4_ + in_XMM2._4_4_);
          in_XMM3._8_4_ = (float)(auVar24._8_4_ + in_XMM2._8_4_);
          in_XMM3._12_4_ = (float)(auVar24._12_4_ + in_XMM2._12_4_);
          in_XMM4._0_4_ = (float)(int)in_XMM3._0_4_ * fVar6;
          in_XMM4._4_4_ = (float)(int)in_XMM3._4_4_ * fVar6;
          in_XMM4._8_4_ = (float)(int)in_XMM3._8_4_ * fVar6;
          in_XMM4._12_4_ = (float)(int)in_XMM3._12_4_ * fVar6;
          *(undefined1 (*) [16])(param_2 + uVar13 * 4 + uVar18 * 4) = in_XMM4;
          uVar18 = uVar18 + 4;
        } while (uVar18 < uVar15);
      }
    }
    if (uVar15 < uVar8) {
      do {
        in_XMM0._0_4_ =
             (float)((uint)*(ushort *)(lVar19 * -6 + param_1 + uVar13 * 2 + uVar15 * 2) +
                    (uint)*(ushort *)(param_1 + lVar19 * 6 + uVar13 * 2 + uVar15 * 2)) * fVar6;
        *(float *)(param_2 + uVar13 * 4 + uVar15 * 4) = in_XMM0._0_4_;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar8);
    }
  }
LAB_140776045:
  if (1 < lVar19) {
    lVar17 = 1;
    if (lVar19 - 1U >> 1 != 0) {
      uVar13 = param_2 & 0xf;
      lVar17 = param_1 + lVar19 * 6;
      lVar11 = lVar19 * -6 + param_1;
      uVar8 = 0;
      do {
        uVar15 = uVar8;
        fVar6 = param_4[uVar15 * 2 + 1];
        in_XMM4 = ZEXT416((uint)fVar6);
        fVar7 = param_4[uVar15 * 2 + 2];
        in_XMM5 = ZEXT416((uint)fVar7);
        lStack_70 = lVar11 + 0xc;
        if (0 < (longlong)uVar16) {
          if (((longlong)uVar16 < 4) ||
             (((uVar8 = uVar13, uVar13 != 0 && (uVar8 = 0x10 - uVar13 >> 2, (param_2 & 3) != 0)) ||
              ((longlong)uVar16 < (longlong)(uVar8 + 4))))) {
            uVar18 = 0;
          }
          else {
            uVar22 = 0;
            uVar18 = uVar16 - (uVar16 - uVar8 & 3);
            lVar9 = lVar17;
            lVar20 = lVar11;
            if (uVar8 != 0) {
              do {
                in_XMM0._0_4_ =
                     (float)((uint)*(ushort *)(lVar20 + 0xc) + (uint)*(ushort *)(lVar9 + -0xc)) *
                     fVar7;
                auVar23._0_4_ =
                     (float)((uint)*(ushort *)(lVar20 + 6) + (uint)*(ushort *)(lVar9 + -6)) * fVar6
                     + *(float *)(param_2 + uVar22 * 4) + in_XMM0._0_4_;
                *(float *)(param_2 + uVar22 * 4) = auVar23._0_4_;
                uVar22 = uVar22 + 1;
                lVar9 = lVar9 + 2;
                lVar20 = lVar20 + 2;
              } while (uVar22 < uVar8);
            }
            lVar9 = uVar8 * 2;
            in_XMM3._4_4_ = fVar7;
            in_XMM3._0_4_ = fVar7;
            in_XMM3._8_4_ = fVar7;
            in_XMM3._12_4_ = fVar7;
            in_XMM2._4_4_ = (int)fVar6;
            in_XMM2._0_4_ = (int)fVar6;
            in_XMM2._8_4_ = (int)fVar6;
            in_XMM2._12_4_ = (int)fVar6;
            do {
              auVar24 = pmovzxwd(auVar23,*(undefined8 *)(lVar9 + 6 + lVar11));
              auVar23 = pmovzxwd(in_XMM0,*(undefined8 *)(lVar9 + -6 + lVar17));
              auVar25._0_4_ = auVar24._0_4_ + auVar23._0_4_;
              auVar25._4_4_ = auVar24._4_4_ + auVar23._4_4_;
              auVar25._8_4_ = auVar24._8_4_ + auVar23._8_4_;
              auVar25._12_4_ = auVar24._12_4_ + auVar23._12_4_;
              pfVar10 = (float *)(param_2 + uVar8 * 4);
              fVar26 = (float)auVar25._0_4_ * fVar6 + *pfVar10;
              fVar27 = (float)auVar25._4_4_ * fVar6 + pfVar10[1];
              fVar28 = (float)auVar25._8_4_ * fVar6 + pfVar10[2];
              fVar29 = (float)auVar25._12_4_ * fVar6 + pfVar10[3];
              pfVar10 = (float *)(param_2 + uVar8 * 4);
              *pfVar10 = fVar26;
              pfVar10[1] = fVar27;
              pfVar10[2] = fVar28;
              pfVar10[3] = fVar29;
              auVar24 = pmovzxwd(auVar23,*(undefined8 *)(lVar9 + 0xc + lVar11));
              auVar23 = pmovzxwd(auVar25,*(undefined8 *)(lVar9 + -0xc + lVar17));
              lVar9 = lVar9 + 8;
              in_XMM0._0_4_ = (float)(auVar24._0_4_ + auVar23._0_4_) * fVar7;
              in_XMM0._4_4_ = (float)(auVar24._4_4_ + auVar23._4_4_) * fVar7;
              in_XMM0._8_4_ = (float)(auVar24._8_4_ + auVar23._8_4_) * fVar7;
              in_XMM0._12_4_ = (float)(auVar24._12_4_ + auVar23._12_4_) * fVar7;
              pfVar10 = (float *)(param_2 + uVar8 * 4);
              *pfVar10 = fVar26 + in_XMM0._0_4_;
              pfVar10[1] = fVar27 + in_XMM0._4_4_;
              pfVar10[2] = fVar28 + in_XMM0._8_4_;
              pfVar10[3] = fVar29 + in_XMM0._12_4_;
              uVar8 = uVar8 + 4;
            } while (uVar8 < uVar18);
          }
          lVar9 = lVar11 + uVar18 * 2;
          if (uVar18 < uVar16) {
            lVar20 = lVar17 + uVar18 * 2;
            do {
              puVar1 = (ushort *)(lVar9 + 6);
              puVar4 = (ushort *)(lVar20 + -6);
              puVar5 = (ushort *)(lVar20 + -0xc);
              lVar20 = lVar20 + 2;
              puVar2 = (ushort *)(lVar9 + 0xc);
              lVar9 = lVar9 + 2;
              in_XMM0._0_4_ = (float)((uint)*puVar2 + (uint)*puVar5) * fVar7;
              auVar23._0_4_ =
                   (float)((uint)*puVar1 + (uint)*puVar4) * fVar6 + *(float *)(param_2 + uVar18 * 4)
                   + in_XMM0._0_4_;
              *(float *)(param_2 + uVar18 * 4) = auVar23._0_4_;
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar16);
          }
        }
        uVar8 = uVar15 + 1;
        lVar17 = lVar17 + -0xc;
        lVar11 = lVar11 + 0xc;
      } while (uVar8 < lVar19 - 1U >> 1);
      lVar17 = uVar15 + 2 + uVar8;
    }
    if (lVar19 != lVar17) {
      fVar6 = param_4[lVar17];
      lVar11 = lVar19 * -6;
      lStack_70 = param_1 + lVar11 + lVar17 * 6;
      if (0 < (longlong)uVar16) {
        if ((longlong)uVar16 < 8) {
LAB_1407766e6:
          uVar13 = 0;
          if (uVar16 == 0) goto LAB_14077652d;
          uVar15 = 0;
          uVar8 = uVar16;
        }
        else {
          uVar8 = param_2 & 0xf;
          if (uVar8 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1407766e6;
            uVar8 = 0x10 - uVar8 >> 2;
          }
          if ((longlong)uVar16 < (longlong)(uVar8 + 8)) goto LAB_1407766e6;
          uVar15 = 0;
          lVar9 = param_1 + lVar19 * 6 + lVar17 * -6;
          uVar13 = uVar16 - (uVar16 - uVar8 & 7);
          if (uVar8 != 0) {
            do {
              *(float *)(param_2 + uVar15 * 4) =
                   (float)((uint)*(ushort *)(lStack_70 + uVar15 * 2) +
                          (uint)*(ushort *)(lVar9 + uVar15 * 2)) * fVar6 +
                   *(float *)(param_2 + uVar15 * 4);
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar8);
          }
          lVar20 = uVar8 * 2;
          lVar14 = lVar17 * -6 + lVar19 * 6 + param_1;
          lVar12 = lVar11 + lVar17 * 6 + param_1;
          do {
            auVar24 = pmovzxwd(in_XMM3,*(undefined8 *)(lVar20 + lStack_70));
            auVar23 = pmovzxwd(in_XMM2,*(undefined8 *)(lVar20 + lVar9));
            pfVar10 = (float *)(param_2 + uVar8 * 4);
            in_XMM4._0_4_ = (float)(auVar24._0_4_ + auVar23._0_4_) * fVar6 + *pfVar10;
            in_XMM4._4_4_ = (float)(auVar24._4_4_ + auVar23._4_4_) * fVar6 + pfVar10[1];
            in_XMM4._8_4_ = (float)(auVar24._8_4_ + auVar23._8_4_) * fVar6 + pfVar10[2];
            in_XMM4._12_4_ = (float)(auVar24._12_4_ + auVar23._12_4_) * fVar6 + pfVar10[3];
            *(undefined1 (*) [16])(param_2 + uVar8 * 4) = in_XMM4;
            auVar23 = pmovzxwd(auVar23,*(undefined8 *)(lVar20 + 8 + lVar12));
            in_XMM5 = pmovzxwd(in_XMM5,*(undefined8 *)(lVar20 + 8 + lVar14));
            lVar20 = lVar20 + 0x10;
            in_XMM2._0_4_ = auVar23._0_4_ + in_XMM5._0_4_;
            in_XMM2._4_4_ = auVar23._4_4_ + in_XMM5._4_4_;
            in_XMM2._8_4_ = auVar23._8_4_ + in_XMM5._8_4_;
            in_XMM2._12_4_ = auVar23._12_4_ + in_XMM5._12_4_;
            pfVar10 = (float *)(param_2 + 0x10 + uVar8 * 4);
            in_XMM3._0_4_ = (float)in_XMM2._0_4_ * fVar6 + *pfVar10;
            in_XMM3._4_4_ = (float)in_XMM2._4_4_ * fVar6 + pfVar10[1];
            in_XMM3._8_4_ = (float)in_XMM2._8_4_ * fVar6 + pfVar10[2];
            in_XMM3._12_4_ = (float)in_XMM2._12_4_ * fVar6 + pfVar10[3];
            *(undefined1 (*) [16])(param_2 + 0x10 + uVar8 * 4) = in_XMM3;
            uVar8 = uVar8 + 8;
          } while (uVar8 < uVar13);
          if (uVar16 < uVar13 + 1) goto LAB_14077652d;
          uVar8 = uVar16 - uVar13;
          if ((longlong)uVar8 < 4) {
            uVar15 = 0;
          }
          else {
            uVar22 = 0;
            pauVar21 = (undefined1 (*) [16])(param_2 + uVar13 * 4);
            uVar15 = uVar8 & 0xfffffffffffffffc;
            uVar18 = uVar22;
            do {
              auVar23 = pmovzxwd(in_XMM3,*(undefined8 *)(uVar22 + lVar12 + uVar13 * 2));
              uVar18 = uVar18 + 4;
              in_XMM2 = pmovzxwd(in_XMM2,*(undefined8 *)(uVar22 + lVar14 + uVar13 * 2));
              uVar22 = uVar22 + 8;
              in_XMM3._0_4_ = (float)(auVar23._0_4_ + in_XMM2._0_4_);
              in_XMM3._4_4_ = (float)(auVar23._4_4_ + in_XMM2._4_4_);
              in_XMM3._8_4_ = (float)(auVar23._8_4_ + in_XMM2._8_4_);
              in_XMM3._12_4_ = (float)(auVar23._12_4_ + in_XMM2._12_4_);
              in_XMM4._0_4_ = (float)(int)in_XMM3._0_4_ * fVar6 + *(float *)*pauVar21;
              in_XMM4._4_4_ = (float)(int)in_XMM3._4_4_ * fVar6 + *(float *)(*pauVar21 + 4);
              in_XMM4._8_4_ = (float)(int)in_XMM3._8_4_ * fVar6 + *(float *)(*pauVar21 + 8);
              in_XMM4._12_4_ = (float)(int)in_XMM3._12_4_ * fVar6 + *(float *)(*pauVar21 + 0xc);
              *pauVar21 = in_XMM4;
              pauVar21 = pauVar21 + 1;
            } while (uVar18 < uVar15);
          }
        }
        if (uVar15 < uVar8) {
          pfVar10 = (float *)(param_2 + uVar13 * 4 + uVar15 * 4);
          do {
            lVar9 = uVar15 * 2;
            lVar20 = uVar15 * 2;
            uVar15 = uVar15 + 1;
            *pfVar10 = (float)((uint)*(ushort *)(lVar11 + lVar17 * 6 + param_1 + uVar13 * 2 + lVar9)
                              + (uint)*(ushort *)
                                       (param_1 + lVar17 * -6 + lVar19 * 6 + uVar13 * 2 + lVar20)) *
                       fVar6 + *pfVar10;
            pfVar10 = pfVar10 + 1;
          } while (uVar15 < uVar8);
        }
      }
    }
  }
LAB_14077652d:
  fVar6 = param_4[lVar19];
  if ((longlong)uVar16 < 1) {
    return;
  }
  if ((longlong)uVar16 < 8) {
LAB_1407766d3:
    uVar13 = 0;
    if (uVar16 == 0) {
      return;
    }
  }
  else {
    uVar8 = param_2 & 0xf;
    if (uVar8 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1407766d3;
      uVar8 = 0x10 - uVar8 >> 2;
    }
    if ((longlong)uVar16 < (longlong)(uVar8 + 8)) goto LAB_1407766d3;
    uVar15 = 0;
    uVar13 = uVar16 - (uVar16 - uVar8 & 7);
    if (uVar8 != 0) {
      do {
        *(float *)(param_2 + uVar15 * 4) =
             (float)*(ushort *)(lStack_70 + 6 + uVar15 * 2) * fVar6 +
             *(float *)(param_2 + uVar15 * 4);
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar8);
    }
    do {
      in_XMM2 = pmovzxwd(in_XMM2,*(undefined8 *)(lStack_70 + 6 + uVar8 * 2));
      pfVar10 = (float *)(param_2 + uVar8 * 4);
      fVar7 = pfVar10[1];
      fVar26 = pfVar10[2];
      fVar27 = pfVar10[3];
      pfVar3 = (float *)(param_2 + uVar8 * 4);
      *pfVar3 = (float)in_XMM2._0_4_ * fVar6 + *pfVar10;
      pfVar3[1] = (float)in_XMM2._4_4_ * fVar6 + fVar7;
      pfVar3[2] = (float)in_XMM2._8_4_ * fVar6 + fVar26;
      pfVar3[3] = (float)in_XMM2._12_4_ * fVar6 + fVar27;
      in_XMM4 = pmovzxwd(in_XMM4,*(undefined8 *)(lStack_70 + 0xe + uVar8 * 2));
      pfVar10 = (float *)(param_2 + 0x10 + uVar8 * 4);
      fVar7 = pfVar10[1];
      fVar26 = pfVar10[2];
      fVar27 = pfVar10[3];
      pfVar3 = (float *)(param_2 + 0x10 + uVar8 * 4);
      *pfVar3 = (float)in_XMM4._0_4_ * fVar6 + *pfVar10;
      pfVar3[1] = (float)in_XMM4._4_4_ * fVar6 + fVar7;
      pfVar3[2] = (float)in_XMM4._8_4_ * fVar6 + fVar26;
      pfVar3[3] = (float)in_XMM4._12_4_ * fVar6 + fVar27;
      uVar8 = uVar8 + 8;
    } while (uVar8 < uVar13);
    if (uVar16 < uVar13 + 1) {
      return;
    }
    uVar16 = uVar16 - uVar13;
    if (3 < (longlong)uVar16) {
      uVar15 = 0;
      uVar8 = uVar16 & 0xfffffffffffffffc;
      pfVar10 = (float *)(param_2 + uVar13 * 4);
      lVar19 = 0;
      do {
        in_XMM2 = pmovzxwd(in_XMM2,*(undefined8 *)(lVar19 + 6 + lStack_70 + uVar13 * 2));
        uVar15 = uVar15 + 4;
        lVar19 = lVar19 + 8;
        *pfVar10 = (float)in_XMM2._0_4_ * fVar6 + *pfVar10;
        pfVar10[1] = (float)in_XMM2._4_4_ * fVar6 + pfVar10[1];
        pfVar10[2] = (float)in_XMM2._8_4_ * fVar6 + pfVar10[2];
        pfVar10[3] = (float)in_XMM2._12_4_ * fVar6 + pfVar10[3];
        pfVar10 = pfVar10 + 4;
      } while (uVar15 < uVar8);
      goto LAB_140776686;
    }
  }
  uVar8 = 0;
LAB_140776686:
  if (uVar8 < uVar16) {
    pfVar10 = (float *)(param_2 + uVar13 * 4 + uVar8 * 4);
    do {
      lVar19 = uVar8 * 2;
      uVar8 = uVar8 + 1;
      *pfVar10 = (float)*(ushort *)(lStack_70 + uVar13 * 2 + 6 + lVar19) * fVar6 + *pfVar10;
      pfVar10 = pfVar10 + 1;
    } while (uVar8 < uVar16);
  }
  return;
}


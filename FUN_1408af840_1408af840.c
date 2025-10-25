
void FUN_1408af840(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  
  lVar17 = (longlong)param_3;
  lVar9 = 0;
  uVar3 = *param_6;
  lVar8 = lVar17 + -2;
  if (SCARRY8(lVar17,-2) != lVar17 + -2 < 0) {
    lVar8 = lVar17 + 3;
  }
  fVar4 = (float)param_6[1];
  fVar5 = (float)param_6[2];
  lVar17 = (longlong)(int)lVar8 + 1;
  if (4 < lVar17) {
    lVar17 = lVar9;
  }
  lVar16 = (longlong)(int)lVar17 + 1;
  if (4 < lVar16) {
    lVar16 = lVar9;
  }
  lVar10 = (longlong)(int)lVar16 + 1;
  if (4 < lVar10) {
    lVar10 = lVar9;
  }
  lVar19 = (longlong)(int)lVar10 + 1;
  if (4 < lVar19) {
    lVar19 = lVar9;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_1408b001c:
      uVar13 = 0;
    }
    else {
      uVar12 = param_2 * 5 + param_1;
      if ((longlong)param_5 < 0x1d) {
        lStack_58 = param_2 * lVar8 + param_1;
        uVar13 = param_5 & 0xfffffffffffffff0;
        lStack_68 = param_2 * lVar19 + param_1;
        uVar11 = 0;
        lStack_60 = param_2 * lVar17 + param_1;
        lStack_70 = param_2 * lVar10 + param_1;
        lVar9 = param_2 * lVar16 + param_1;
      }
      else {
        uVar11 = uVar12 & 0x1f;
        if (uVar11 != 0) {
          if ((uVar12 & 3) != 0) goto LAB_1408b001c;
          uVar11 = 0x20 - uVar11 >> 2;
        }
        if ((longlong)param_5 < (longlong)(uVar11 + 0x10)) goto LAB_1408b001c;
        lStack_58 = param_2 * lVar8 + param_1;
        lStack_68 = param_2 * lVar19 + param_1;
        lStack_60 = param_2 * lVar17 + param_1;
        lStack_70 = param_2 * lVar10 + param_1;
        uVar13 = param_5 - (param_5 - uVar11 & 0xf);
        lVar9 = param_2 * lVar16 + param_1;
        if (uVar11 != 0) {
          uVar18 = 0;
          do {
            auVar20 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lStack_58 + uVar18 * 4) +
                                                    *(float *)(lStack_68 + uVar18 * 4))),
                                      ZEXT416(uVar3),
                                      ZEXT416((uint)(fVar5 * *(float *)(lVar9 + uVar18 * 4))));
            auVar20 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lStack_60 + uVar18 * 4) +
                                                    *(float *)(lStack_70 + uVar18 * 4))),
                                      ZEXT416((uint)fVar4),auVar20);
            *(int *)(uVar12 + uVar18 * 4) = auVar20._0_4_;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar11);
        }
      }
      auVar23._4_4_ = uVar3;
      auVar23._0_4_ = uVar3;
      auVar23._8_4_ = uVar3;
      auVar23._12_4_ = uVar3;
      auVar23._16_4_ = uVar3;
      auVar23._20_4_ = uVar3;
      auVar23._24_4_ = uVar3;
      auVar23._28_4_ = uVar3;
      auVar21._4_4_ = fVar5;
      auVar21._0_4_ = fVar5;
      auVar21._8_4_ = fVar5;
      auVar21._12_4_ = fVar5;
      auVar21._16_4_ = fVar5;
      auVar21._20_4_ = fVar5;
      auVar21._24_4_ = fVar5;
      auVar21._28_4_ = fVar5;
      do {
        pfVar1 = (float *)(lStack_58 + uVar11 * 4);
        pfVar2 = (float *)(lStack_68 + uVar11 * 4);
        auVar27._0_4_ = *pfVar1 + *pfVar2;
        auVar27._4_4_ = pfVar1[1] + pfVar2[1];
        auVar27._8_4_ = pfVar1[2] + pfVar2[2];
        auVar27._12_4_ = pfVar1[3] + pfVar2[3];
        auVar27._16_4_ = pfVar1[4] + pfVar2[4];
        auVar27._20_4_ = pfVar1[5] + pfVar2[5];
        auVar27._24_4_ = pfVar1[6] + pfVar2[6];
        auVar27._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar1 = (float *)(lStack_60 + uVar11 * 4);
        pfVar2 = (float *)(lStack_70 + uVar11 * 4);
        auVar6._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
        auVar6._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
        auVar6._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
        auVar6._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
        auVar6._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
        auVar6._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
        auVar6._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
        auVar6._28_4_ = pfVar1[7] + pfVar2[7];
        auVar20 = vfmadd231ps_fma(auVar6,auVar27,auVar23);
        auVar20 = vfmadd231ps_fma(ZEXT1632(auVar20),auVar21,
                                  *(undefined1 (*) [32])(lVar9 + uVar11 * 4));
        *(undefined1 (*) [32])(uVar12 + uVar11 * 4) = ZEXT1632(auVar20);
        pfVar1 = (float *)(lStack_58 + 0x20 + uVar11 * 4);
        pfVar2 = (float *)(lStack_68 + 0x20 + uVar11 * 4);
        auVar25._0_4_ = *pfVar1 + *pfVar2;
        auVar25._4_4_ = pfVar1[1] + pfVar2[1];
        auVar25._8_4_ = pfVar1[2] + pfVar2[2];
        auVar25._12_4_ = pfVar1[3] + pfVar2[3];
        auVar25._16_4_ = pfVar1[4] + pfVar2[4];
        auVar25._20_4_ = pfVar1[5] + pfVar2[5];
        auVar25._24_4_ = pfVar1[6] + pfVar2[6];
        auVar25._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar1 = (float *)(lStack_60 + 0x20 + uVar11 * 4);
        pfVar2 = (float *)(lStack_70 + 0x20 + uVar11 * 4);
        auVar7._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
        auVar7._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
        auVar7._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
        auVar7._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
        auVar7._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
        auVar7._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
        auVar7._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
        auVar7._28_4_ = pfVar1[7] + pfVar2[7];
        auVar20 = vfmadd231ps_fma(auVar7,auVar25,auVar23);
        auVar20 = vfmadd231ps_fma(ZEXT1632(auVar20),auVar21,
                                  *(undefined1 (*) [32])(lVar9 + 0x20 + uVar11 * 4));
        *(undefined1 (*) [32])(uVar12 + 0x20 + uVar11 * 4) = ZEXT1632(auVar20);
        uVar11 = uVar11 + 0x10;
      } while (uVar11 < uVar13);
    }
    if (uVar13 + 1 <= param_5) {
      uVar12 = param_5 - uVar13;
      if ((longlong)uVar12 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar12 & 0xfffffffffffffffc;
        auVar22._4_4_ = uVar3;
        auVar22._0_4_ = uVar3;
        auVar22._8_4_ = uVar3;
        auVar22._12_4_ = uVar3;
        auVar20._4_4_ = fVar5;
        auVar20._0_4_ = fVar5;
        auVar20._8_4_ = fVar5;
        auVar20._12_4_ = fVar5;
        uVar18 = 0;
        do {
          pfVar1 = (float *)(param_2 * lVar8 + param_1 + uVar13 * 4 + uVar18 * 4);
          pfVar2 = (float *)(param_2 * lVar19 + param_1 + uVar13 * 4 + uVar18 * 4);
          auVar24._0_4_ = *pfVar1 + *pfVar2;
          auVar24._4_4_ = pfVar1[1] + pfVar2[1];
          auVar24._8_4_ = pfVar1[2] + pfVar2[2];
          auVar24._12_4_ = pfVar1[3] + pfVar2[3];
          pfVar1 = (float *)(param_2 * lVar17 + param_1 + uVar13 * 4 + uVar18 * 4);
          pfVar2 = (float *)(param_2 * lVar10 + param_1 + uVar13 * 4 + uVar18 * 4);
          auVar26._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
          auVar26._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
          auVar26._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
          auVar26._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
          auVar24 = vfmadd231ps_fma(auVar26,auVar24,auVar22);
          auVar24 = vfmadd231ps_fma(auVar24,auVar20,
                                    *(undefined1 (*) [16])
                                     (param_2 * lVar16 + param_1 + uVar13 * 4 + uVar18 * 4));
          *(undefined1 (*) [16])(param_2 * 5 + param_1 + uVar13 * 4 + uVar18 * 4) = auVar24;
          uVar18 = uVar18 + 4;
        } while (uVar18 < uVar11);
      }
      if (uVar11 < uVar12) {
        do {
          auVar20 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar8 * param_2 + param_1 + uVar13 * 4
                                                             + uVar11 * 4) +
                                                  *(float *)(lVar19 * param_2 + param_1 + uVar13 * 4
                                                            + uVar11 * 4))),ZEXT416(uVar3),
                                    ZEXT416((uint)(fVar5 * *(float *)(lVar16 * param_2 + param_1 +
                                                                      uVar13 * 4 + uVar11 * 4))));
          auVar20 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar17 * param_2 + param_1 +
                                                              uVar13 * 4 + uVar11 * 4) +
                                                  *(float *)(lVar10 * param_2 + param_1 + uVar13 * 4
                                                            + uVar11 * 4))),ZEXT416((uint)fVar4),
                                    auVar20);
          *(int *)(param_2 * 5 + param_1 + uVar13 * 4 + uVar11 * 4) = auVar20._0_4_;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
    }
  }
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x10) {
LAB_1408b0081:
      uVar12 = 0;
    }
    else {
      if ((longlong)param_5 < 0x7b9) {
        uVar12 = param_5 & 0xfffffffffffffff0;
        uVar11 = 0;
        lVar8 = param_2 * 5 + param_1;
      }
      else {
        uVar11 = param_4 & 0x1f;
        if (uVar11 != 0) {
          if ((param_4 & 1) != 0) goto LAB_1408b0081;
          uVar11 = 0x20 - uVar11 >> 1;
        }
        if ((longlong)param_5 < (longlong)(uVar11 + 0x10)) goto LAB_1408b0081;
        lVar8 = param_2 * 5 + param_1;
        uVar13 = 0;
        uVar12 = param_5 - (param_5 - uVar11 & 0xf);
        if (uVar11 != 0) {
          do {
            iVar15 = (int)ROUND(*(float *)(lVar8 + uVar13 * 4));
            if (0xfffe < iVar15) {
              iVar15 = 0xffff;
            }
            uVar14 = (undefined2)iVar15;
            if (iVar15 < 1) {
              uVar14 = 0;
            }
            *(undefined2 *)(param_4 + uVar13 * 2) = uVar14;
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar11);
        }
      }
      do {
        auVar21 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar8 + uVar11 * 4));
        auVar23 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar8 + 0x20 + uVar11 * 4));
        auVar21 = vpackusdw_avx2(auVar21,auVar23);
        auVar21 = vpermq_avx2(auVar21,0xd8);
        *(undefined1 (*) [32])(param_4 + uVar11 * 2) = auVar21;
        uVar11 = uVar11 + 0x10;
      } while (uVar11 < uVar12);
    }
    if (param_5 < uVar12 + 1) {
      return;
    }
    param_5 = param_5 - uVar12;
    if ((longlong)param_5 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = param_5 & 0xfffffffffffffffc;
      uVar13 = 0;
      do {
        auVar20 = vcvtps2dq_avx(*(undefined1 (*) [16])
                                 (param_2 * 5 + param_1 + uVar12 * 4 + uVar13 * 4));
        auVar20 = vpackusdw_avx(auVar20,auVar20);
        *(longlong *)(param_4 + uVar12 * 2 + uVar13 * 2) = auVar20._0_8_;
        uVar13 = uVar13 + 4;
      } while (uVar13 < uVar11);
    }
    if (param_5 <= uVar11) {
      return;
    }
    do {
      iVar15 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar12 * 4 + uVar11 * 4));
      if (0xfffe < iVar15) {
        iVar15 = 0xffff;
      }
      uVar14 = (undefined2)iVar15;
      if (iVar15 < 1) {
        uVar14 = 0;
      }
      *(undefined2 *)(param_4 + uVar12 * 2 + uVar11 * 2) = uVar14;
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (0xf < (longlong)param_5) {
    uVar12 = param_4 & 0x1f;
    if (uVar12 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1408b00a4;
      uVar12 = 0x20 - uVar12 >> 1;
    }
    if ((longlong)(uVar12 + 0x10) <= (longlong)param_5) {
      lVar8 = param_2 * 5 + param_1;
      uVar13 = 0;
      uVar11 = param_5 - (param_5 - uVar12 & 0xf);
      if (uVar12 != 0) {
        do {
          iVar15 = (int)ROUND(*(float *)(lVar8 + uVar13 * 4));
          if (0xfffe < iVar15) {
            iVar15 = 0xffff;
          }
          uVar14 = (undefined2)iVar15;
          if (iVar15 < 1) {
            uVar14 = 0;
          }
          *(undefined2 *)(param_4 + uVar13 * 2) = uVar14;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar12);
      }
      do {
        auVar21 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar8 + uVar12 * 4));
        auVar23 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar8 + 0x20 + uVar12 * 4));
        auVar21 = vpackusdw_avx2(auVar21,auVar23);
        auVar21 = vpermq_avx2(auVar21,0xd8);
        auVar21 = vmovntdq_avx(auVar21);
        *(undefined1 (*) [32])(param_4 + uVar12 * 2) = auVar21;
        uVar12 = uVar12 + 0x10;
      } while (uVar12 < uVar11);
      goto LAB_1408aff65;
    }
  }
LAB_1408b00a4:
  uVar11 = 0;
LAB_1408aff65:
  if (uVar11 + 1 <= param_5) {
    param_5 = param_5 - uVar11;
    if ((longlong)param_5 < 4) {
      uVar12 = 0;
    }
    else {
      uVar12 = param_5 & 0xfffffffffffffffc;
      uVar13 = 0;
      do {
        auVar20 = vcvtps2dq_avx(*(undefined1 (*) [16])
                                 (param_2 * 5 + param_1 + uVar11 * 4 + uVar13 * 4));
        auVar20 = vpackusdw_avx(auVar20,auVar20);
        *(longlong *)(param_4 + uVar11 * 2 + uVar13 * 2) = auVar20._0_8_;
        uVar13 = uVar13 + 4;
      } while (uVar13 < uVar12);
    }
    if (uVar12 < param_5) {
      do {
        iVar15 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar11 * 4 + uVar12 * 4));
        if (0xfffe < iVar15) {
          iVar15 = 0xffff;
        }
        uVar14 = (undefined2)iVar15;
        if (iVar15 < 1) {
          uVar14 = 0;
        }
        *(undefined2 *)(param_4 + uVar11 * 2 + uVar12 * 2) = uVar14;
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_5);
    }
  }
  return;
}


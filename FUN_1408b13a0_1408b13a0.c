
void FUN_1408b13a0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined2 uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [16];
  undefined1 auVar24 [32];
  
  lVar11 = (longlong)param_3 + -1;
  if ((longlong)param_3 < 1) {
    lVar11 = 2;
  }
  lVar9 = (longlong)(int)lVar11 + 1;
  uVar3 = *param_6;
  fVar4 = (float)param_6[1];
  if (2 < lVar9) {
    lVar9 = 0;
  }
  lVar14 = (longlong)(int)lVar9 + 1;
  if (2 < lVar14) {
    lVar14 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_1408b197d:
      uVar10 = 0;
    }
    else {
      uVar17 = param_2 * 3 + param_1;
      if ((longlong)param_5 < 0x1d) {
        uVar10 = param_5 & 0xfffffffffffffff0;
        uVar18 = 0;
        lVar7 = param_2 * lVar11 + param_1;
        lVar16 = param_2 * lVar14 + param_1;
        lVar8 = param_2 * lVar9 + param_1;
      }
      else {
        uVar18 = uVar17 & 0x1f;
        if (uVar18 != 0) {
          if ((uVar17 & 3) != 0) goto LAB_1408b197d;
          uVar18 = 0x20 - uVar18 >> 2;
        }
        if ((longlong)param_5 < (longlong)(uVar18 + 0x10)) goto LAB_1408b197d;
        lVar7 = param_2 * lVar11 + param_1;
        lVar16 = param_2 * lVar14 + param_1;
        lVar8 = param_2 * lVar9 + param_1;
        uVar10 = param_5 - (param_5 - uVar18 & 0xf);
        if (uVar18 != 0) {
          uVar15 = 0;
          do {
            auVar19 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * *(float *)(lVar8 + uVar15 * 4))),
                                      ZEXT416((uint)(*(float *)(lVar7 + uVar15 * 4) +
                                                    *(float *)(lVar16 + uVar15 * 4))),ZEXT416(uVar3)
                                     );
            *(int *)(uVar17 + uVar15 * 4) = auVar19._0_4_;
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar18);
        }
      }
      auVar20._4_4_ = uVar3;
      auVar20._0_4_ = uVar3;
      auVar20._8_4_ = uVar3;
      auVar20._12_4_ = uVar3;
      auVar20._16_4_ = uVar3;
      auVar20._20_4_ = uVar3;
      auVar20._24_4_ = uVar3;
      auVar20._28_4_ = uVar3;
      do {
        pfVar1 = (float *)(lVar7 + uVar18 * 4);
        pfVar2 = (float *)(lVar16 + uVar18 * 4);
        auVar24._0_4_ = *pfVar1 + *pfVar2;
        auVar24._4_4_ = pfVar1[1] + pfVar2[1];
        auVar24._8_4_ = pfVar1[2] + pfVar2[2];
        auVar24._12_4_ = pfVar1[3] + pfVar2[3];
        auVar24._16_4_ = pfVar1[4] + pfVar2[4];
        auVar24._20_4_ = pfVar1[5] + pfVar2[5];
        auVar24._24_4_ = pfVar1[6] + pfVar2[6];
        auVar24._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar2 = (float *)(lVar8 + uVar18 * 4);
        auVar5._4_4_ = fVar4 * pfVar2[1];
        auVar5._0_4_ = fVar4 * *pfVar2;
        auVar5._8_4_ = fVar4 * pfVar2[2];
        auVar5._12_4_ = fVar4 * pfVar2[3];
        auVar5._16_4_ = fVar4 * pfVar2[4];
        auVar5._20_4_ = fVar4 * pfVar2[5];
        auVar5._24_4_ = fVar4 * pfVar2[6];
        auVar5._28_4_ = pfVar1[7];
        auVar19 = vfmadd231ps_fma(auVar5,auVar24,auVar20);
        *(undefined1 (*) [32])(uVar17 + uVar18 * 4) = ZEXT1632(auVar19);
        pfVar1 = (float *)(lVar7 + 0x20 + uVar18 * 4);
        pfVar2 = (float *)(lVar16 + 0x20 + uVar18 * 4);
        auVar22._0_4_ = *pfVar1 + *pfVar2;
        auVar22._4_4_ = pfVar1[1] + pfVar2[1];
        auVar22._8_4_ = pfVar1[2] + pfVar2[2];
        auVar22._12_4_ = pfVar1[3] + pfVar2[3];
        auVar22._16_4_ = pfVar1[4] + pfVar2[4];
        auVar22._20_4_ = pfVar1[5] + pfVar2[5];
        auVar22._24_4_ = pfVar1[6] + pfVar2[6];
        auVar22._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar2 = (float *)(lVar8 + 0x20 + uVar18 * 4);
        auVar6._4_4_ = fVar4 * pfVar2[1];
        auVar6._0_4_ = fVar4 * *pfVar2;
        auVar6._8_4_ = fVar4 * pfVar2[2];
        auVar6._12_4_ = fVar4 * pfVar2[3];
        auVar6._16_4_ = fVar4 * pfVar2[4];
        auVar6._20_4_ = fVar4 * pfVar2[5];
        auVar6._24_4_ = fVar4 * pfVar2[6];
        auVar6._28_4_ = pfVar1[7];
        auVar19 = vfmadd231ps_fma(auVar6,auVar22,auVar20);
        *(undefined1 (*) [32])(uVar17 + 0x20 + uVar18 * 4) = ZEXT1632(auVar19);
        uVar18 = uVar18 + 0x10;
      } while (uVar18 < uVar10);
    }
    if (uVar10 + 1 <= param_5) {
      uVar17 = param_5 - uVar10;
      if ((longlong)uVar17 < 4) {
        uVar18 = 0;
      }
      else {
        auVar19._4_4_ = uVar3;
        auVar19._0_4_ = uVar3;
        auVar19._8_4_ = uVar3;
        auVar19._12_4_ = uVar3;
        uVar18 = uVar17 & 0xfffffffffffffffc;
        uVar15 = 0;
        do {
          pfVar1 = (float *)(param_2 * lVar11 + param_1 + uVar10 * 4 + uVar15 * 4);
          pfVar2 = (float *)(param_2 * lVar14 + param_1 + uVar10 * 4 + uVar15 * 4);
          auVar23._0_4_ = *pfVar1 + *pfVar2;
          auVar23._4_4_ = pfVar1[1] + pfVar2[1];
          auVar23._8_4_ = pfVar1[2] + pfVar2[2];
          auVar23._12_4_ = pfVar1[3] + pfVar2[3];
          pfVar1 = (float *)(param_2 * lVar9 + param_1 + uVar10 * 4 + uVar15 * 4);
          auVar21._0_4_ = fVar4 * *pfVar1;
          auVar21._4_4_ = fVar4 * pfVar1[1];
          auVar21._8_4_ = fVar4 * pfVar1[2];
          auVar21._12_4_ = fVar4 * pfVar1[3];
          auVar21 = vfmadd231ps_fma(auVar21,auVar23,auVar19);
          *(undefined1 (*) [16])(param_2 * 3 + param_1 + uVar10 * 4 + uVar15 * 4) = auVar21;
          uVar15 = uVar15 + 4;
        } while (uVar15 < uVar18);
      }
      if (uVar18 < uVar17) {
        do {
          auVar19 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * *(float *)(lVar9 * param_2 + param_1 +
                                                                      uVar10 * 4 + uVar18 * 4))),
                                    ZEXT416((uint)(*(float *)(lVar11 * param_2 + param_1 +
                                                              uVar10 * 4 + uVar18 * 4) +
                                                  *(float *)(lVar14 * param_2 + param_1 + uVar10 * 4
                                                            + uVar18 * 4))),ZEXT416(uVar3));
          *(int *)(param_2 * 3 + param_1 + uVar10 * 4 + uVar18 * 4) = auVar19._0_4_;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar17);
      }
    }
  }
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x10) {
LAB_1408b19b8:
      uVar17 = 0;
    }
    else {
      if ((longlong)param_5 < 0x7b9) {
        uVar17 = param_5 & 0xfffffffffffffff0;
        uVar10 = 0;
        lVar11 = param_2 * 3 + param_1;
      }
      else {
        uVar10 = param_4 & 0x1f;
        if (uVar10 != 0) {
          if ((param_4 & 1) != 0) goto LAB_1408b19b8;
          uVar10 = 0x20 - uVar10 >> 1;
        }
        if ((longlong)param_5 < (longlong)(uVar10 + 0x10)) goto LAB_1408b19b8;
        lVar11 = param_2 * 3 + param_1;
        uVar18 = 0;
        uVar17 = param_5 - (param_5 - uVar10 & 0xf);
        if (uVar10 != 0) {
          do {
            iVar13 = (int)ROUND(*(float *)(lVar11 + uVar18 * 4));
            if (0x7ffe < iVar13) {
              iVar13 = 0x7fff;
            }
            uVar12 = (undefined2)iVar13;
            if (iVar13 < -0x7fff) {
              uVar12 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar18 * 2) = uVar12;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar10);
        }
      }
      do {
        auVar20 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar11 + uVar10 * 4));
        auVar5 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar11 + 0x20 + uVar10 * 4));
        auVar20 = vpackssdw_avx2(auVar20,auVar5);
        auVar20 = vpermq_avx2(auVar20,0xd8);
        *(undefined1 (*) [32])(param_4 + uVar10 * 2) = auVar20;
        uVar10 = uVar10 + 0x10;
      } while (uVar10 < uVar17);
    }
    if (param_5 < uVar17 + 1) {
      return;
    }
    param_5 = param_5 - uVar17;
    if ((longlong)param_5 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = param_5 & 0xfffffffffffffffc;
      uVar18 = 0;
      do {
        auVar19 = vcvtps2dq_avx(*(undefined1 (*) [16])
                                 (param_2 * 3 + param_1 + uVar17 * 4 + uVar18 * 4));
        auVar19 = vpackssdw_avx(auVar19,auVar19);
        *(longlong *)(param_4 + uVar17 * 2 + uVar18 * 2) = auVar19._0_8_;
        uVar18 = uVar18 + 4;
      } while (uVar18 < uVar10);
    }
    if (param_5 <= uVar10) {
      return;
    }
    do {
      iVar13 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar17 * 4 + uVar10 * 4));
      if (0x7ffe < iVar13) {
        iVar13 = 0x7fff;
      }
      uVar12 = (undefined2)iVar13;
      if (iVar13 < -0x7fff) {
        uVar12 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar17 * 2 + uVar10 * 2) = uVar12;
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (0xf < (longlong)param_5) {
    uVar17 = param_4 & 0x1f;
    if (uVar17 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1408b19dc;
      uVar17 = 0x20 - uVar17 >> 1;
    }
    if ((longlong)(uVar17 + 0x10) <= (longlong)param_5) {
      lVar11 = param_2 * 3 + param_1;
      uVar18 = 0;
      uVar10 = param_5 - (param_5 - uVar17 & 0xf);
      if (uVar17 != 0) {
        do {
          iVar13 = (int)ROUND(*(float *)(lVar11 + uVar18 * 4));
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          uVar12 = (undefined2)iVar13;
          if (iVar13 < -0x7fff) {
            uVar12 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar18 * 2) = uVar12;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar17);
      }
      do {
        auVar20 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar11 + uVar17 * 4));
        auVar5 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar11 + 0x20 + uVar17 * 4));
        auVar20 = vpackssdw_avx2(auVar20,auVar5);
        auVar20 = vpermq_avx2(auVar20,0xd8);
        auVar20 = vmovntdq_avx(auVar20);
        *(undefined1 (*) [32])(param_4 + uVar17 * 2) = auVar20;
        uVar17 = uVar17 + 0x10;
      } while (uVar17 < uVar10);
      goto LAB_1408b18c6;
    }
  }
LAB_1408b19dc:
  uVar10 = 0;
LAB_1408b18c6:
  if (uVar10 + 1 <= param_5) {
    param_5 = param_5 - uVar10;
    if ((longlong)param_5 < 4) {
      uVar17 = 0;
    }
    else {
      uVar17 = param_5 & 0xfffffffffffffffc;
      uVar18 = 0;
      do {
        auVar19 = vcvtps2dq_avx(*(undefined1 (*) [16])
                                 (param_2 * 3 + param_1 + uVar10 * 4 + uVar18 * 4));
        auVar19 = vpackssdw_avx(auVar19,auVar19);
        *(longlong *)(param_4 + uVar10 * 2 + uVar18 * 2) = auVar19._0_8_;
        uVar18 = uVar18 + 4;
      } while (uVar18 < uVar17);
    }
    if (uVar17 < param_5) {
      do {
        iVar13 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar10 * 4 + uVar17 * 4));
        if (0x7ffe < iVar13) {
          iVar13 = 0x7fff;
        }
        uVar12 = (undefined2)iVar13;
        if (iVar13 < -0x7fff) {
          uVar12 = 0x8000;
        }
        *(undefined2 *)(param_4 + uVar10 * 2 + uVar17 * 2) = uVar12;
        uVar17 = uVar17 + 1;
      } while (uVar17 < param_5);
    }
  }
  return;
}


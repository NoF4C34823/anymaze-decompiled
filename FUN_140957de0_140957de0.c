
void FUN_140957de0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined2 uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  lVar9 = 0;
  lVar21 = (longlong)param_3;
  lVar12 = lVar21 + -3;
  if (SCARRY8(lVar21,-3) != lVar21 + -3 < 0) {
    lVar12 = lVar21 + 4;
  }
  lVar21 = (longlong)(int)lVar12 + 1;
  if (6 < lVar21) {
    lVar21 = lVar9;
  }
  lVar14 = (longlong)(int)lVar21 + 1;
  uVar3 = *param_6;
  if (6 < lVar14) {
    lVar14 = lVar9;
  }
  lVar17 = (longlong)(int)lVar14 + 1;
  fVar4 = (float)param_6[1];
  if (6 < lVar17) {
    lVar17 = lVar9;
  }
  uVar5 = param_6[2];
  uVar6 = param_6[3];
  lVar20 = (longlong)(int)lVar17 + 1;
  if (6 < lVar20) {
    lVar20 = lVar9;
  }
  lVar16 = (longlong)(int)lVar20 + 1;
  if (6 < lVar16) {
    lVar16 = lVar9;
  }
  lVar15 = (longlong)(int)lVar16 + 1;
  if (6 < lVar15) {
    lVar15 = lVar9;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1409585e1:
      uVar13 = 0;
    }
    else {
      uVar10 = param_2 * 7 + param_1;
      if ((longlong)param_5 < 0x3fd) {
        lStack_78 = param_2 * lVar12 + param_1;
        uVar13 = param_5 & 0xfffffffffffffff8;
        lStack_58 = param_2 * lVar15 + param_1;
        uVar11 = 0;
        lStack_50 = param_2 * lVar21 + param_1;
        lStack_60 = param_2 * lVar16 + param_1;
        lStack_68 = param_2 * lVar14 + param_1;
        lStack_48 = param_2 * lVar20 + param_1;
        lStack_70 = param_2 * lVar17 + param_1;
      }
      else {
        uVar11 = uVar10 & 0x1f;
        if (uVar11 != 0) {
          if ((uVar10 & 3) != 0) goto LAB_1409585e1;
          uVar11 = 0x20 - uVar11 >> 2;
        }
        if ((longlong)param_5 < (longlong)(uVar11 + 8)) goto LAB_1409585e1;
        lStack_78 = param_2 * lVar12 + param_1;
        lStack_58 = param_2 * lVar15 + param_1;
        lStack_50 = param_2 * lVar21 + param_1;
        lStack_60 = param_2 * lVar16 + param_1;
        uVar13 = param_5 - (param_5 - uVar11 & 7);
        lStack_68 = param_2 * lVar14 + param_1;
        lStack_48 = param_2 * lVar20 + param_1;
        lStack_70 = param_2 * lVar17 + param_1;
        if (uVar11 != 0) {
          uVar22 = 0;
          do {
            auVar7 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (*(float *)(lStack_50 + uVar22 * 4) +
                                                            *(float *)(lStack_60 + uVar22 * 4)))),
                                     ZEXT416((uint)(*(float *)(lStack_78 + uVar22 * 4) +
                                                   *(float *)(lStack_58 + uVar22 * 4))),
                                     ZEXT416(uVar3));
            auVar7 = vfmadd231ss_fma(auVar7,ZEXT416((uint)(*(float *)(lStack_68 + uVar22 * 4) +
                                                          *(float *)(lStack_48 + uVar22 * 4))),
                                     ZEXT416(uVar5));
            auVar7 = vfmadd231ss_fma(auVar7,ZEXT416(uVar6),
                                     ZEXT416(*(uint *)(lStack_70 + uVar22 * 4)));
            *(int *)(uVar10 + uVar22 * 4) = auVar7._0_4_;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar11);
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
      auVar25._4_4_ = uVar5;
      auVar25._0_4_ = uVar5;
      auVar25._8_4_ = uVar5;
      auVar25._12_4_ = uVar5;
      auVar25._16_4_ = uVar5;
      auVar25._20_4_ = uVar5;
      auVar25._24_4_ = uVar5;
      auVar25._28_4_ = uVar5;
      auVar24._4_4_ = uVar6;
      auVar24._0_4_ = uVar6;
      auVar24._8_4_ = uVar6;
      auVar24._12_4_ = uVar6;
      auVar24._16_4_ = uVar6;
      auVar24._20_4_ = uVar6;
      auVar24._24_4_ = uVar6;
      auVar24._28_4_ = uVar6;
      do {
        pfVar1 = (float *)(lStack_78 + uVar11 * 4);
        pfVar2 = (float *)(lStack_58 + uVar11 * 4);
        auVar26._0_4_ = *pfVar1 + *pfVar2;
        auVar26._4_4_ = pfVar1[1] + pfVar2[1];
        auVar26._8_4_ = pfVar1[2] + pfVar2[2];
        auVar26._12_4_ = pfVar1[3] + pfVar2[3];
        auVar26._16_4_ = pfVar1[4] + pfVar2[4];
        auVar26._20_4_ = pfVar1[5] + pfVar2[5];
        auVar26._24_4_ = pfVar1[6] + pfVar2[6];
        auVar26._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar1 = (float *)(lStack_50 + uVar11 * 4);
        pfVar2 = (float *)(lStack_60 + uVar11 * 4);
        auVar8._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
        auVar8._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
        auVar8._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
        auVar8._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
        auVar8._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
        auVar8._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
        auVar8._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
        auVar8._28_4_ = pfVar1[7] + pfVar2[7];
        auVar7 = vfmadd231ps_fma(auVar8,auVar26,auVar23);
        pfVar1 = (float *)(lStack_68 + uVar11 * 4);
        pfVar2 = (float *)(lStack_48 + uVar11 * 4);
        auVar27._0_4_ = *pfVar1 + *pfVar2;
        auVar27._4_4_ = pfVar1[1] + pfVar2[1];
        auVar27._8_4_ = pfVar1[2] + pfVar2[2];
        auVar27._12_4_ = pfVar1[3] + pfVar2[3];
        auVar27._16_4_ = pfVar1[4] + pfVar2[4];
        auVar27._20_4_ = pfVar1[5] + pfVar2[5];
        auVar27._24_4_ = pfVar1[6] + pfVar2[6];
        auVar27._28_4_ = pfVar1[7] + pfVar2[7];
        auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar27,auVar25);
        auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar24,
                                 *(undefined1 (*) [32])(lStack_70 + uVar11 * 4));
        *(undefined1 (*) [32])(uVar10 + uVar11 * 4) = ZEXT1632(auVar7);
        uVar11 = uVar11 + 8;
      } while (uVar11 < uVar13);
    }
    if (uVar13 < param_5) {
      do {
        auVar7 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (*(float *)(lVar21 * param_2 + param_1 +
                                                                   uVar13 * 4) +
                                                        *(float *)(lVar16 * param_2 + param_1 +
                                                                  uVar13 * 4)))),
                                 ZEXT416((uint)(*(float *)(lVar12 * param_2 + param_1 + uVar13 * 4)
                                               + *(float *)(lVar15 * param_2 + param_1 + uVar13 * 4)
                                               )),ZEXT416(uVar3));
        auVar7 = vfmadd231ss_fma(auVar7,ZEXT416((uint)(*(float *)(lVar14 * param_2 + param_1 +
                                                                 uVar13 * 4) +
                                                      *(float *)(lVar20 * param_2 + param_1 +
                                                                uVar13 * 4))),ZEXT416(uVar5));
        auVar7 = vfmadd231ss_fma(auVar7,ZEXT416(uVar6),
                                 ZEXT416(*(uint *)(lVar17 * param_2 + param_1 + uVar13 * 4)));
        *(int *)(param_2 * 7 + param_1 + uVar13 * 4) = auVar7._0_4_;
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_5);
    }
  }
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x10) {
LAB_14095867b:
      uVar10 = 0;
    }
    else {
      if ((longlong)param_5 < 0x7b9) {
        uVar10 = param_5 & 0xfffffffffffffff0;
        uVar11 = 0;
        lVar12 = param_2 * 7 + param_1;
      }
      else {
        uVar11 = param_4 & 0x1f;
        if (uVar11 != 0) {
          if ((param_4 & 1) != 0) goto LAB_14095867b;
          uVar11 = 0x20 - uVar11 >> 1;
        }
        if ((longlong)param_5 < (longlong)(uVar11 + 0x10)) goto LAB_14095867b;
        lVar12 = param_2 * 7 + param_1;
        uVar13 = 0;
        uVar10 = param_5 - (param_5 - uVar11 & 0xf);
        if (uVar11 != 0) {
          do {
            iVar19 = (int)ROUND(*(float *)(lVar12 + uVar13 * 4));
            if (0xfffe < iVar19) {
              iVar19 = 0xffff;
            }
            uVar18 = (undefined2)iVar19;
            if (iVar19 < 1) {
              uVar18 = 0;
            }
            *(undefined2 *)(param_4 + uVar13 * 2) = uVar18;
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar11);
        }
      }
      do {
        auVar23 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar12 + uVar11 * 4));
        auVar24 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar12 + 0x20 + uVar11 * 4));
        auVar23 = vpackusdw_avx2(auVar23,auVar24);
        auVar23 = vpermq_avx2(auVar23,0xd8);
        *(undefined1 (*) [32])(param_4 + uVar11 * 2) = auVar23;
        uVar11 = uVar11 + 0x10;
      } while (uVar11 < uVar10);
    }
    if (param_5 < uVar10 + 1) {
      return;
    }
    param_5 = param_5 - uVar10;
    if ((longlong)param_5 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = param_5 & 0xfffffffffffffffc;
      uVar13 = 0;
      do {
        auVar7 = vcvtps2dq_avx(*(undefined1 (*) [16])
                                (param_2 * 7 + param_1 + uVar10 * 4 + uVar13 * 4));
        auVar7 = vpackusdw_avx(auVar7,auVar7);
        *(longlong *)(param_4 + uVar10 * 2 + uVar13 * 2) = auVar7._0_8_;
        uVar13 = uVar13 + 4;
      } while (uVar13 < uVar11);
    }
    if (param_5 <= uVar11) {
      return;
    }
    do {
      iVar19 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar10 * 4 + uVar11 * 4));
      if (0xfffe < iVar19) {
        iVar19 = 0xffff;
      }
      uVar18 = (undefined2)iVar19;
      if (iVar19 < 1) {
        uVar18 = 0;
      }
      *(undefined2 *)(param_4 + uVar10 * 2 + uVar11 * 2) = uVar18;
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (0xf < (longlong)param_5) {
    uVar10 = param_4 & 0x1f;
    if (uVar10 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1409586a6;
      uVar10 = 0x20 - uVar10 >> 1;
    }
    if ((longlong)(uVar10 + 0x10) <= (longlong)param_5) {
      lVar12 = param_2 * 7 + param_1;
      uVar13 = 0;
      uVar11 = param_5 - (param_5 - uVar10 & 0xf);
      if (uVar10 != 0) {
        do {
          iVar19 = (int)ROUND(*(float *)(lVar12 + uVar13 * 4));
          if (0xfffe < iVar19) {
            iVar19 = 0xffff;
          }
          uVar18 = (undefined2)iVar19;
          if (iVar19 < 1) {
            uVar18 = 0;
          }
          *(undefined2 *)(param_4 + uVar13 * 2) = uVar18;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar10);
      }
      do {
        auVar23 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar12 + uVar10 * 4));
        auVar24 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar12 + 0x20 + uVar10 * 4));
        auVar23 = vpackusdw_avx2(auVar23,auVar24);
        auVar23 = vpermq_avx2(auVar23,0xd8);
        auVar23 = vmovntdq_avx(auVar23);
        *(undefined1 (*) [32])(param_4 + uVar10 * 2) = auVar23;
        uVar10 = uVar10 + 0x10;
      } while (uVar10 < uVar11);
      goto LAB_140958507;
    }
  }
LAB_1409586a6:
  uVar11 = 0;
LAB_140958507:
  if (uVar11 + 1 <= param_5) {
    param_5 = param_5 - uVar11;
    if ((longlong)param_5 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = param_5 & 0xfffffffffffffffc;
      uVar13 = 0;
      do {
        auVar7 = vcvtps2dq_avx(*(undefined1 (*) [16])
                                (param_2 * 7 + param_1 + uVar11 * 4 + uVar13 * 4));
        auVar7 = vpackusdw_avx(auVar7,auVar7);
        *(longlong *)(param_4 + uVar11 * 2 + uVar13 * 2) = auVar7._0_8_;
        uVar13 = uVar13 + 4;
      } while (uVar13 < uVar10);
    }
    if (uVar10 < param_5) {
      do {
        iVar19 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar11 * 4 + uVar10 * 4));
        if (0xfffe < iVar19) {
          iVar19 = 0xffff;
        }
        uVar18 = (undefined2)iVar19;
        if (iVar19 < 1) {
          uVar18 = 0;
        }
        *(undefined2 *)(param_4 + uVar11 * 2 + uVar10 * 2) = uVar18;
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_5);
    }
  }
  return;
}


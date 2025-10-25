
void FUN_1408d8b00(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,int param_7,int param_8)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  float *pfVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  float in_register_0000131c;
  undefined1 auVar41 [32];
  
  uVar19 = (ulonglong)param_7;
  param_7 = param_7 >> 1;
  lVar24 = (longlong)param_3;
  lVar25 = lVar24 - param_7;
  lVar25 = (lVar25 >> 0x3f & uVar19) + lVar25;
  if (lVar25 == 0) {
    uVar34 = 0;
    uVar23 = uVar19;
  }
  else {
    uVar34 = (ulonglong)(int)lVar25;
    uVar23 = uVar34;
  }
  lVar32 = uVar23 - 1;
  uVar23 = uVar34 + 1;
  if (uVar34 + 1 == uVar19) {
    uVar23 = 0;
  }
  fVar4 = *param_6;
  uVar34 = (longlong)(int)lVar32;
  if ((longlong)(int)lVar32 < 1) {
    uVar34 = uVar19;
  }
  lVar22 = uVar34 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_1408d94fd:
      uVar33 = 0;
    }
    else {
      uVar34 = param_2 * lVar25 + param_1;
      uVar35 = uVar34 & 0x1f;
      if (uVar35 != 0) {
        if ((uVar34 & 3) != 0) goto LAB_1408d94fd;
        uVar35 = 0x20 - uVar35 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar35 + 0x10)) goto LAB_1408d94fd;
      lVar29 = param_2 * lVar32 + param_1;
      uVar26 = 0;
      uVar33 = param_5 - (param_5 - uVar35 & 0xf);
      if (uVar35 != 0) {
        do {
          *(float *)(uVar34 + uVar26 * 4) =
               fVar4 * (*(float *)(uVar34 + uVar26 * 4) + *(float *)(lVar29 + uVar26 * 4));
          uVar26 = uVar26 + 1;
        } while (uVar26 < uVar35);
      }
      do {
        pfVar27 = (float *)(uVar34 + uVar35 * 4);
        fVar7 = pfVar27[1];
        fVar8 = pfVar27[2];
        fVar9 = pfVar27[3];
        fVar10 = pfVar27[4];
        fVar11 = pfVar27[5];
        fVar12 = pfVar27[6];
        auVar37 = *(undefined1 (*) [32])(uVar34 + 0x20 + uVar35 * 4);
        pfVar1 = (float *)(lVar29 + uVar35 * 4);
        fVar13 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar15 = pfVar1[3];
        fVar16 = pfVar1[4];
        fVar17 = pfVar1[5];
        fVar18 = pfVar1[6];
        pfVar3 = (float *)(lVar29 + 0x20 + uVar35 * 4);
        auVar5._4_4_ = fVar4 * (auVar37._4_4_ + pfVar3[1]);
        auVar5._0_4_ = fVar4 * (auVar37._0_4_ + *pfVar3);
        auVar5._8_4_ = fVar4 * (auVar37._8_4_ + pfVar3[2]);
        auVar5._12_4_ = fVar4 * (auVar37._12_4_ + pfVar3[3]);
        auVar5._16_4_ = fVar4 * (auVar37._16_4_ + pfVar3[4]);
        auVar5._20_4_ = fVar4 * (auVar37._20_4_ + pfVar3[5]);
        auVar5._24_4_ = fVar4 * (auVar37._24_4_ + pfVar3[6]);
        auVar5._28_4_ = pfVar27[7] + pfVar1[7];
        pfVar3 = (float *)(uVar34 + uVar35 * 4);
        *pfVar3 = fVar4 * (*pfVar27 + *pfVar1);
        pfVar3[1] = fVar4 * (fVar7 + fVar13);
        pfVar3[2] = fVar4 * (fVar8 + fVar14);
        pfVar3[3] = fVar4 * (fVar9 + fVar15);
        pfVar3[4] = fVar4 * (fVar10 + fVar16);
        pfVar3[5] = fVar4 * (fVar11 + fVar17);
        pfVar3[6] = fVar4 * (fVar12 + fVar18);
        pfVar3[7] = in_register_0000131c;
        *(undefined1 (*) [32])(uVar34 + 0x20 + uVar35 * 4) = auVar5;
        uVar35 = uVar35 + 0x10;
      } while (uVar35 < uVar33);
    }
    if (uVar33 + 1 <= param_5) {
      uVar34 = param_5 - uVar33;
      if ((longlong)uVar34 < 4) {
        uVar35 = 0;
      }
      else {
        uVar35 = uVar34 & 0xfffffffffffffffc;
        lVar29 = param_2 * lVar25 + param_1 + uVar33 * 4;
        uVar26 = 0;
        do {
          auVar36 = *(undefined1 (*) [16])(lVar29 + uVar26 * 4);
          pfVar27 = (float *)(param_2 * lVar32 + param_1 + uVar33 * 4 + uVar26 * 4);
          fVar7 = pfVar27[1];
          fVar8 = pfVar27[2];
          fVar9 = pfVar27[3];
          pfVar1 = (float *)(lVar29 + uVar26 * 4);
          *pfVar1 = fVar4 * (auVar36._0_4_ + *pfVar27);
          pfVar1[1] = fVar4 * (auVar36._4_4_ + fVar7);
          pfVar1[2] = fVar4 * (auVar36._8_4_ + fVar8);
          pfVar1[3] = fVar4 * (auVar36._12_4_ + fVar9);
          uVar26 = uVar26 + 4;
        } while (uVar26 < uVar35);
      }
      if (uVar35 < uVar34) {
        lVar29 = param_2 * lVar25 + param_1 + uVar33 * 4;
        do {
          *(float *)(lVar29 + uVar35 * 4) =
               fVar4 * (*(float *)(lVar29 + uVar35 * 4) +
                       *(float *)(lVar32 * param_2 + param_1 + uVar33 * 4 + uVar35 * 4));
          uVar35 = uVar35 + 1;
        } while (uVar35 < uVar34);
      }
    }
  }
  if (1 < param_7) {
    uVar35 = param_2 * lVar25 + param_1;
    uVar34 = uVar35 & 0x1f;
    uVar28 = 0;
    pfVar27 = param_6;
    do {
      while( true ) {
        lVar32 = param_2 * uVar23;
        lVar29 = param_2 * lVar22;
        uVar23 = uVar23 + 1;
        if (uVar23 == uVar19) {
          uVar23 = 0;
        }
        lVar22 = lVar22 + -1;
        fVar4 = pfVar27[1];
        if (lVar22 < 0) {
          lVar22 = uVar19 - 1;
        }
        lVar32 = lVar32 + param_1;
        lVar29 = lVar29 + param_1;
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 0x10) ||
           (((uVar33 = uVar34, uVar34 != 0 && (uVar33 = 0x20 - uVar34 >> 2, (uVar35 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar33 + 0x10))))) {
          uVar26 = 0;
        }
        else {
          uVar20 = 0;
          uVar26 = param_5 - (param_5 - uVar33 & 0xf);
          if (uVar33 != 0) {
            do {
              auVar36 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar32 + uVar20 * 4) +
                                                      *(float *)(lVar29 + uVar20 * 4))),
                                        ZEXT416((uint)fVar4),ZEXT416(*(uint *)(uVar35 + uVar20 * 4))
                                       );
              *(int *)(uVar35 + uVar20 * 4) = auVar36._0_4_;
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar33);
          }
          auVar37._4_4_ = fVar4;
          auVar37._0_4_ = fVar4;
          auVar37._8_4_ = fVar4;
          auVar37._12_4_ = fVar4;
          auVar37._16_4_ = fVar4;
          auVar37._20_4_ = fVar4;
          auVar37._24_4_ = fVar4;
          auVar37._28_4_ = fVar4;
          do {
            auVar5 = *(undefined1 (*) [32])(lVar32 + uVar33 * 4);
            pfVar3 = (float *)(lVar32 + 0x20 + uVar33 * 4);
            pfVar1 = (float *)(lVar29 + uVar33 * 4);
            auVar40._0_4_ = auVar5._0_4_ + *pfVar1;
            auVar40._4_4_ = auVar5._4_4_ + pfVar1[1];
            auVar40._8_4_ = auVar5._8_4_ + pfVar1[2];
            auVar40._12_4_ = auVar5._12_4_ + pfVar1[3];
            auVar40._16_4_ = auVar5._16_4_ + pfVar1[4];
            auVar40._20_4_ = auVar5._20_4_ + pfVar1[5];
            auVar40._24_4_ = auVar5._24_4_ + pfVar1[6];
            auVar40._28_4_ = auVar5._28_4_ + pfVar1[7];
            pfVar1 = (float *)(lVar29 + 0x20 + uVar33 * 4);
            auVar41._0_4_ = *pfVar3 + *pfVar1;
            auVar41._4_4_ = pfVar3[1] + pfVar1[1];
            auVar41._8_4_ = pfVar3[2] + pfVar1[2];
            auVar41._12_4_ = pfVar3[3] + pfVar1[3];
            auVar41._16_4_ = pfVar3[4] + pfVar1[4];
            auVar41._20_4_ = pfVar3[5] + pfVar1[5];
            auVar41._24_4_ = pfVar3[6] + pfVar1[6];
            auVar41._28_4_ = pfVar3[7] + pfVar1[7];
            auVar36 = vfmadd213ps_fma(auVar40,auVar37,*(undefined1 (*) [32])(uVar35 + uVar33 * 4));
            auVar6 = vfmadd213ps_fma(auVar41,auVar37,
                                     *(undefined1 (*) [32])(uVar35 + 0x20 + uVar33 * 4));
            *(undefined1 (*) [32])(uVar35 + uVar33 * 4) = ZEXT1632(auVar36);
            *(undefined1 (*) [32])(uVar35 + 0x20 + uVar33 * 4) = ZEXT1632(auVar6);
            uVar33 = uVar33 + 0x10;
          } while (uVar33 < uVar26);
        }
        if (uVar26 + 1 <= param_5) {
          uVar33 = param_5 - uVar26;
          if ((longlong)uVar33 < 4) {
            uVar20 = 0;
          }
          else {
            auVar36._4_4_ = fVar4;
            auVar36._0_4_ = fVar4;
            auVar36._8_4_ = fVar4;
            auVar36._12_4_ = fVar4;
            uVar20 = uVar33 & 0xfffffffffffffffc;
            uVar21 = 0;
            lVar2 = uVar35 + uVar26 * 4;
            do {
              auVar6 = *(undefined1 (*) [16])(lVar32 + uVar26 * 4 + uVar21 * 4);
              pfVar1 = (float *)(lVar29 + uVar26 * 4 + uVar21 * 4);
              auVar39._0_4_ = auVar6._0_4_ + *pfVar1;
              auVar39._4_4_ = auVar6._4_4_ + pfVar1[1];
              auVar39._8_4_ = auVar6._8_4_ + pfVar1[2];
              auVar39._12_4_ = auVar6._12_4_ + pfVar1[3];
              auVar6 = vfmadd213ps_fma(auVar39,auVar36,*(undefined1 (*) [16])(lVar2 + uVar21 * 4));
              *(undefined1 (*) [16])(lVar2 + uVar21 * 4) = auVar6;
              uVar21 = uVar21 + 4;
            } while (uVar21 < uVar20);
          }
          if (uVar20 < uVar33) {
            lVar2 = uVar35 + uVar26 * 4;
            do {
              auVar36 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar32 + uVar26 * 4 + uVar20 * 4)
                                                      + *(float *)(lVar29 + uVar26 * 4 + uVar20 * 4)
                                                      )),ZEXT416((uint)fVar4),
                                        ZEXT416(*(uint *)(lVar2 + uVar20 * 4)));
              *(int *)(lVar2 + uVar20 * 4) = auVar36._0_4_;
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar33);
          }
        }
        uVar28 = uVar28 + 1;
        pfVar27 = pfVar27 + 1;
        if (param_7 - 1U <= uVar28) goto LAB_1408d9001;
      }
      uVar28 = uVar28 + 1;
      pfVar27 = pfVar27 + 1;
    } while (uVar28 < param_7 - 1U);
  }
LAB_1408d9001:
  fVar4 = param_6[param_7];
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1408d9494:
      uVar34 = 0;
    }
    else {
      uVar23 = param_2 * uVar19 + param_1;
      if ((longlong)param_5 < 0x15d) {
        uVar35 = 0;
        uVar34 = param_5 & 0xfffffffffffffff8;
        lVar32 = param_2 * lVar25 + param_1;
        lVar22 = param_2 * lVar24 + param_1;
      }
      else {
        uVar35 = uVar23 & 0x1f;
        if (uVar35 != 0) {
          if ((uVar23 & 3) != 0) goto LAB_1408d9494;
          uVar35 = 0x20 - uVar35 >> 2;
        }
        if ((longlong)param_5 < (longlong)(uVar35 + 8)) goto LAB_1408d9494;
        lVar32 = param_2 * lVar25 + param_1;
        lVar22 = param_2 * lVar24 + param_1;
        uVar33 = 0;
        uVar34 = param_5 - (param_5 - uVar35 & 7);
        if (uVar35 != 0) {
          do {
            auVar36 = vfmadd213ss_fma(ZEXT416(*(uint *)(lVar22 + uVar33 * 4)),ZEXT416((uint)fVar4),
                                      ZEXT416(*(uint *)(lVar32 + uVar33 * 4)));
            *(int *)(uVar23 + uVar33 * 4) = auVar36._0_4_;
            uVar33 = uVar33 + 1;
          } while (uVar33 < uVar35);
        }
      }
      auVar38._4_4_ = fVar4;
      auVar38._0_4_ = fVar4;
      auVar38._8_4_ = fVar4;
      auVar38._12_4_ = fVar4;
      auVar38._16_4_ = fVar4;
      auVar38._20_4_ = fVar4;
      auVar38._24_4_ = fVar4;
      auVar38._28_4_ = fVar4;
      do {
        auVar36 = vfmadd213ps_fma(*(undefined1 (*) [32])(lVar22 + uVar35 * 4),auVar38,
                                  *(undefined1 (*) [32])(lVar32 + uVar35 * 4));
        *(undefined1 (*) [32])(uVar23 + uVar35 * 4) = ZEXT1632(auVar36);
        uVar35 = uVar35 + 8;
      } while (uVar35 < uVar34);
    }
    uVar23 = 0;
    if (uVar34 + 1 <= param_5) {
      do {
        auVar36 = vfmadd213ss_fma(ZEXT416(*(uint *)(lVar24 * param_2 + param_1 + uVar34 * 4 +
                                                   uVar23 * 4)),ZEXT416((uint)fVar4),
                                  ZEXT416(*(uint *)(lVar25 * param_2 + param_1 + uVar34 * 4 +
                                                   uVar23 * 4)));
        *(int *)(param_2 * uVar19 + param_1 + uVar34 * 4 + uVar23 * 4) = auVar36._0_4_;
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_5 - uVar34);
    }
  }
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x20) {
LAB_1408d94c7:
      uVar34 = 0;
    }
    else {
      if ((longlong)param_5 < 0x12c0) {
        uVar34 = param_5 & 0xffffffffffffffe0;
        uVar23 = 0;
        lVar25 = param_2 * uVar19 + param_1;
      }
      else {
        uVar23 = param_4 & 0x1f;
        if (uVar23 != 0) {
          uVar23 = 0x20 - uVar23;
        }
        if ((longlong)param_5 < (longlong)(uVar23 + 0x20)) goto LAB_1408d94c7;
        lVar25 = param_2 * uVar19 + param_1;
        uVar35 = 0;
        uVar34 = param_5 - (param_5 - uVar23 & 0x1f);
        if (uVar23 != 0) {
          do {
            iVar31 = (int)ROUND(*(float *)(lVar25 + uVar35 * 4));
            if (0xfe < iVar31) {
              iVar31 = 0xff;
            }
            uVar30 = (undefined1)iVar31;
            if (iVar31 < 1) {
              uVar30 = 0;
            }
            *(undefined1 *)(uVar35 + param_4) = uVar30;
            uVar35 = uVar35 + 1;
          } while (uVar35 < uVar23);
        }
      }
      do {
        auVar37 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar25 + uVar23 * 4));
        auVar5 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar25 + 0x20 + uVar23 * 4));
        auVar40 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar25 + 0x40 + uVar23 * 4));
        auVar41 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar25 + 0x60 + uVar23 * 4));
        auVar37 = vpackssdw_avx2(auVar37,auVar5);
        auVar5 = vpackssdw_avx2(auVar40,auVar41);
        auVar37 = vpermq_avx2(auVar37,0xd8);
        auVar5 = vpermq_avx2(auVar5,0xd8);
        auVar37 = vpackuswb_avx2(auVar37,auVar5);
        auVar37 = vpermq_avx2(auVar37,0xd8);
        *(undefined1 (*) [32])(uVar23 + param_4) = auVar37;
        uVar23 = uVar23 + 0x20;
      } while (uVar23 < uVar34);
    }
    if (param_5 < uVar34 + 1) {
      return;
    }
    param_5 = param_5 - uVar34;
    if ((longlong)param_5 < 4) {
      uVar23 = 0;
    }
    else {
      uVar35 = 0;
      uVar23 = param_5 & 0xfffffffffffffffc;
      do {
        auVar36 = vcvtps2dq_avx(*(undefined1 (*) [16])
                                 (param_2 * uVar19 + param_1 + uVar34 * 4 + uVar35 * 4));
        auVar36 = vpackssdw_avx(auVar36,auVar36);
        auVar36 = vpackuswb_avx(auVar36,auVar36);
        *(int *)(uVar35 + param_4 + uVar34) = auVar36._0_4_;
        uVar35 = uVar35 + 4;
      } while (uVar35 < uVar23);
    }
    if (param_5 <= uVar23) {
      return;
    }
    do {
      iVar31 = (int)ROUND(*(float *)(param_1 + param_2 * uVar19 + uVar34 * 4 + uVar23 * 4));
      if (0xfe < iVar31) {
        iVar31 = 0xff;
      }
      uVar30 = (undefined1)iVar31;
      if (iVar31 < 1) {
        uVar30 = 0;
      }
      *(undefined1 *)(uVar23 + param_4 + uVar34) = uVar30;
      uVar23 = uVar23 + 1;
    } while (uVar23 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x20) {
LAB_1408d94e6:
    uVar34 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar23 = param_4 & 0x1f;
    if (uVar23 != 0) {
      uVar23 = 0x20 - uVar23;
    }
    if ((longlong)param_5 < (longlong)(uVar23 + 0x20)) goto LAB_1408d94e6;
    lVar25 = param_2 * uVar19 + param_1;
    uVar35 = 0;
    uVar34 = param_5 - (param_5 - uVar23 & 0x1f);
    if (uVar23 != 0) {
      do {
        iVar31 = (int)ROUND(*(float *)(lVar25 + uVar35 * 4));
        if (0xfe < iVar31) {
          iVar31 = 0xff;
        }
        uVar30 = (undefined1)iVar31;
        if (iVar31 < 1) {
          uVar30 = 0;
        }
        *(undefined1 *)(uVar35 + param_4) = uVar30;
        uVar35 = uVar35 + 1;
      } while (uVar35 < uVar23);
    }
    do {
      auVar37 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar25 + uVar23 * 4));
      auVar5 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar25 + 0x20 + uVar23 * 4));
      auVar40 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar25 + 0x40 + uVar23 * 4));
      auVar41 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar25 + 0x60 + uVar23 * 4));
      auVar37 = vpackssdw_avx2(auVar37,auVar5);
      auVar5 = vpackssdw_avx2(auVar40,auVar41);
      auVar37 = vpermq_avx2(auVar37,0xd8);
      auVar5 = vpermq_avx2(auVar5,0xd8);
      auVar37 = vpackuswb_avx2(auVar37,auVar5);
      auVar37 = vpermq_avx2(auVar37,0xd8);
      auVar37 = vmovntdq_avx(auVar37);
      *(undefined1 (*) [32])(uVar23 + param_4) = auVar37;
      uVar23 = uVar23 + 0x20;
    } while (uVar23 < uVar34);
    if (param_5 < uVar34 + 1) {
      return;
    }
    param_5 = param_5 - uVar34;
    if (3 < (longlong)param_5) {
      uVar35 = 0;
      uVar23 = param_5 & 0xfffffffffffffffc;
      do {
        auVar36 = vcvtps2dq_avx(*(undefined1 (*) [16])(lVar25 + uVar34 * 4 + uVar35 * 4));
        auVar36 = vpackssdw_avx(auVar36,auVar36);
        auVar36 = vpackuswb_avx(auVar36,auVar36);
        *(int *)(uVar35 + param_4 + uVar34) = auVar36._0_4_;
        uVar35 = uVar35 + 4;
      } while (uVar35 < uVar23);
      goto LAB_1408d943d;
    }
  }
  uVar23 = 0;
LAB_1408d943d:
  if (uVar23 < param_5) {
    do {
      iVar31 = (int)ROUND(*(float *)(param_1 + param_2 * uVar19 + uVar34 * 4 + uVar23 * 4));
      if (0xfe < iVar31) {
        iVar31 = 0xff;
      }
      uVar30 = (undefined1)iVar31;
      if (iVar31 < 1) {
        uVar30 = 0;
      }
      *(undefined1 *)(uVar23 + param_4 + uVar34) = uVar30;
      uVar23 = uVar23 + 1;
    } while (uVar23 < param_5);
  }
  return;
}


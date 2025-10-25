
void FUN_14095a760(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
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
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined2 uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  float in_register_0000131c;
  undefined1 auVar41 [32];
  
  uVar29 = (ulonglong)param_7;
  param_7 = param_7 >> 1;
  lVar20 = (longlong)param_3;
  lVar21 = lVar20 - param_7;
  lVar21 = (lVar21 >> 0x3f & uVar29) + lVar21;
  if (lVar21 == 0) {
    uVar32 = 0;
    uVar28 = uVar29;
  }
  else {
    uVar32 = (ulonglong)(int)lVar21;
    uVar28 = uVar32;
  }
  lVar22 = uVar28 - 1;
  uVar28 = uVar32 + 1;
  if (uVar32 + 1 == uVar29) {
    uVar28 = 0;
  }
  fVar4 = *param_6;
  uVar32 = (longlong)(int)lVar22;
  if ((longlong)(int)lVar22 < 1) {
    uVar32 = uVar29;
  }
  lVar27 = uVar32 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_14095b120:
      uVar25 = 0;
    }
    else {
      uVar33 = param_2 * lVar21 + param_1;
      uVar32 = uVar33 & 0x1f;
      if (uVar32 != 0) {
        if ((uVar33 & 3) != 0) goto LAB_14095b120;
        uVar32 = 0x20 - uVar32 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar32 + 0x10)) goto LAB_14095b120;
      lVar35 = param_2 * lVar22 + param_1;
      uVar34 = 0;
      uVar25 = param_5 - (param_5 - uVar32 & 0xf);
      if (uVar32 != 0) {
        do {
          *(float *)(uVar33 + uVar34 * 4) =
               fVar4 * (*(float *)(uVar33 + uVar34 * 4) + *(float *)(lVar35 + uVar34 * 4));
          uVar34 = uVar34 + 1;
        } while (uVar34 < uVar32);
      }
      do {
        pfVar26 = (float *)(uVar33 + uVar32 * 4);
        fVar7 = pfVar26[1];
        fVar8 = pfVar26[2];
        fVar9 = pfVar26[3];
        fVar10 = pfVar26[4];
        fVar11 = pfVar26[5];
        fVar12 = pfVar26[6];
        auVar37 = *(undefined1 (*) [32])(uVar33 + 0x20 + uVar32 * 4);
        pfVar1 = (float *)(lVar35 + uVar32 * 4);
        fVar13 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar15 = pfVar1[3];
        fVar16 = pfVar1[4];
        fVar17 = pfVar1[5];
        fVar18 = pfVar1[6];
        pfVar3 = (float *)(lVar35 + 0x20 + uVar32 * 4);
        auVar5._4_4_ = fVar4 * (auVar37._4_4_ + pfVar3[1]);
        auVar5._0_4_ = fVar4 * (auVar37._0_4_ + *pfVar3);
        auVar5._8_4_ = fVar4 * (auVar37._8_4_ + pfVar3[2]);
        auVar5._12_4_ = fVar4 * (auVar37._12_4_ + pfVar3[3]);
        auVar5._16_4_ = fVar4 * (auVar37._16_4_ + pfVar3[4]);
        auVar5._20_4_ = fVar4 * (auVar37._20_4_ + pfVar3[5]);
        auVar5._24_4_ = fVar4 * (auVar37._24_4_ + pfVar3[6]);
        auVar5._28_4_ = pfVar26[7] + pfVar1[7];
        pfVar3 = (float *)(uVar33 + uVar32 * 4);
        *pfVar3 = fVar4 * (*pfVar26 + *pfVar1);
        pfVar3[1] = fVar4 * (fVar7 + fVar13);
        pfVar3[2] = fVar4 * (fVar8 + fVar14);
        pfVar3[3] = fVar4 * (fVar9 + fVar15);
        pfVar3[4] = fVar4 * (fVar10 + fVar16);
        pfVar3[5] = fVar4 * (fVar11 + fVar17);
        pfVar3[6] = fVar4 * (fVar12 + fVar18);
        pfVar3[7] = in_register_0000131c;
        *(undefined1 (*) [32])(uVar33 + 0x20 + uVar32 * 4) = auVar5;
        uVar32 = uVar32 + 0x10;
      } while (uVar32 < uVar25);
    }
    if (uVar25 + 1 <= param_5) {
      uVar32 = param_5 - uVar25;
      if ((longlong)uVar32 < 4) {
        uVar33 = 0;
      }
      else {
        uVar34 = 0;
        uVar33 = uVar32 & 0xfffffffffffffffc;
        lVar35 = param_2 * lVar21 + param_1 + uVar25 * 4;
        do {
          auVar36 = *(undefined1 (*) [16])(lVar35 + uVar34 * 4);
          pfVar26 = (float *)(param_2 * lVar22 + param_1 + uVar25 * 4 + uVar34 * 4);
          fVar7 = pfVar26[1];
          fVar8 = pfVar26[2];
          fVar9 = pfVar26[3];
          pfVar1 = (float *)(lVar35 + uVar34 * 4);
          *pfVar1 = fVar4 * (auVar36._0_4_ + *pfVar26);
          pfVar1[1] = fVar4 * (auVar36._4_4_ + fVar7);
          pfVar1[2] = fVar4 * (auVar36._8_4_ + fVar8);
          pfVar1[3] = fVar4 * (auVar36._12_4_ + fVar9);
          uVar34 = uVar34 + 4;
        } while (uVar34 < uVar33);
      }
      if (uVar33 < uVar32) {
        lVar35 = param_2 * lVar21 + param_1 + uVar25 * 4;
        do {
          *(float *)(lVar35 + uVar33 * 4) =
               fVar4 * (*(float *)(lVar35 + uVar33 * 4) +
                       *(float *)(lVar22 * param_2 + param_1 + uVar25 * 4 + uVar33 * 4));
          uVar33 = uVar33 + 1;
        } while (uVar33 < uVar32);
      }
    }
  }
  if (1 < param_7) {
    uVar33 = param_2 * lVar21 + param_1;
    uVar19 = 0;
    uVar32 = uVar33 & 0x1f;
    pfVar26 = param_6;
    do {
      while( true ) {
        lVar22 = param_2 * uVar28;
        lVar35 = param_2 * lVar27;
        uVar28 = uVar28 + 1;
        if (uVar28 == uVar29) {
          uVar28 = 0;
        }
        lVar27 = lVar27 + -1;
        fVar4 = pfVar26[1];
        if (lVar27 < 0) {
          lVar27 = uVar29 - 1;
        }
        lVar22 = lVar22 + param_1;
        lVar35 = lVar35 + param_1;
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 0x10) ||
           (((uVar25 = uVar32, uVar32 != 0 && (uVar25 = 0x20 - uVar32 >> 2, (uVar33 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar25 + 0x10))))) {
          uVar34 = 0;
        }
        else {
          uVar23 = 0;
          uVar34 = param_5 - (param_5 - uVar25 & 0xf);
          if (uVar25 != 0) {
            do {
              auVar36 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar22 + uVar23 * 4) +
                                                      *(float *)(lVar35 + uVar23 * 4))),
                                        ZEXT416((uint)fVar4),ZEXT416(*(uint *)(uVar33 + uVar23 * 4))
                                       );
              *(int *)(uVar33 + uVar23 * 4) = auVar36._0_4_;
              uVar23 = uVar23 + 1;
            } while (uVar23 < uVar25);
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
            auVar5 = *(undefined1 (*) [32])(lVar22 + uVar25 * 4);
            pfVar3 = (float *)(lVar22 + 0x20 + uVar25 * 4);
            pfVar1 = (float *)(lVar35 + uVar25 * 4);
            auVar40._0_4_ = auVar5._0_4_ + *pfVar1;
            auVar40._4_4_ = auVar5._4_4_ + pfVar1[1];
            auVar40._8_4_ = auVar5._8_4_ + pfVar1[2];
            auVar40._12_4_ = auVar5._12_4_ + pfVar1[3];
            auVar40._16_4_ = auVar5._16_4_ + pfVar1[4];
            auVar40._20_4_ = auVar5._20_4_ + pfVar1[5];
            auVar40._24_4_ = auVar5._24_4_ + pfVar1[6];
            auVar40._28_4_ = auVar5._28_4_ + pfVar1[7];
            pfVar1 = (float *)(lVar35 + 0x20 + uVar25 * 4);
            auVar41._0_4_ = *pfVar3 + *pfVar1;
            auVar41._4_4_ = pfVar3[1] + pfVar1[1];
            auVar41._8_4_ = pfVar3[2] + pfVar1[2];
            auVar41._12_4_ = pfVar3[3] + pfVar1[3];
            auVar41._16_4_ = pfVar3[4] + pfVar1[4];
            auVar41._20_4_ = pfVar3[5] + pfVar1[5];
            auVar41._24_4_ = pfVar3[6] + pfVar1[6];
            auVar41._28_4_ = pfVar3[7] + pfVar1[7];
            auVar36 = vfmadd213ps_fma(auVar40,auVar37,*(undefined1 (*) [32])(uVar33 + uVar25 * 4));
            auVar6 = vfmadd213ps_fma(auVar41,auVar37,
                                     *(undefined1 (*) [32])(uVar33 + 0x20 + uVar25 * 4));
            *(undefined1 (*) [32])(uVar33 + uVar25 * 4) = ZEXT1632(auVar36);
            *(undefined1 (*) [32])(uVar33 + 0x20 + uVar25 * 4) = ZEXT1632(auVar6);
            uVar25 = uVar25 + 0x10;
          } while (uVar25 < uVar34);
        }
        if (uVar34 + 1 <= param_5) {
          uVar25 = param_5 - uVar34;
          if ((longlong)uVar25 < 4) {
            uVar23 = 0;
          }
          else {
            auVar36._4_4_ = fVar4;
            auVar36._0_4_ = fVar4;
            auVar36._8_4_ = fVar4;
            auVar36._12_4_ = fVar4;
            uVar23 = uVar25 & 0xfffffffffffffffc;
            uVar24 = 0;
            lVar2 = uVar33 + uVar34 * 4;
            do {
              auVar6 = *(undefined1 (*) [16])(lVar22 + uVar34 * 4 + uVar24 * 4);
              pfVar1 = (float *)(lVar35 + uVar34 * 4 + uVar24 * 4);
              auVar39._0_4_ = auVar6._0_4_ + *pfVar1;
              auVar39._4_4_ = auVar6._4_4_ + pfVar1[1];
              auVar39._8_4_ = auVar6._8_4_ + pfVar1[2];
              auVar39._12_4_ = auVar6._12_4_ + pfVar1[3];
              auVar6 = vfmadd213ps_fma(auVar39,auVar36,*(undefined1 (*) [16])(lVar2 + uVar24 * 4));
              *(undefined1 (*) [16])(lVar2 + uVar24 * 4) = auVar6;
              uVar24 = uVar24 + 4;
            } while (uVar24 < uVar23);
          }
          if (uVar23 < uVar25) {
            lVar2 = uVar33 + uVar34 * 4;
            do {
              auVar36 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar22 + uVar34 * 4 + uVar23 * 4)
                                                      + *(float *)(lVar35 + uVar34 * 4 + uVar23 * 4)
                                                      )),ZEXT416((uint)fVar4),
                                        ZEXT416(*(uint *)(lVar2 + uVar23 * 4)));
              *(int *)(lVar2 + uVar23 * 4) = auVar36._0_4_;
              uVar23 = uVar23 + 1;
            } while (uVar23 < uVar25);
          }
        }
        uVar19 = uVar19 + 1;
        pfVar26 = pfVar26 + 1;
        if (param_7 - 1U <= uVar19) goto LAB_14095ac39;
      }
      uVar19 = uVar19 + 1;
      pfVar26 = pfVar26 + 1;
    } while (uVar19 < param_7 - 1U);
  }
LAB_14095ac39:
  fVar4 = param_6[param_7];
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14095b0b9:
      uVar32 = 0;
    }
    else {
      uVar28 = param_2 * uVar29 + param_1;
      if ((longlong)param_5 < 0x15d) {
        uVar33 = 0;
        uVar32 = param_5 & 0xfffffffffffffff8;
        lVar22 = param_2 * lVar21 + param_1;
        lVar27 = param_2 * lVar20 + param_1;
      }
      else {
        uVar33 = uVar28 & 0x1f;
        if (uVar33 != 0) {
          if ((uVar28 & 3) != 0) goto LAB_14095b0b9;
          uVar33 = 0x20 - uVar33 >> 2;
        }
        if ((longlong)param_5 < (longlong)(uVar33 + 8)) goto LAB_14095b0b9;
        lVar22 = param_2 * lVar21 + param_1;
        lVar27 = param_2 * lVar20 + param_1;
        uVar25 = 0;
        uVar32 = param_5 - (param_5 - uVar33 & 7);
        if (uVar33 != 0) {
          do {
            auVar36 = vfmadd213ss_fma(ZEXT416(*(uint *)(lVar27 + uVar25 * 4)),ZEXT416((uint)fVar4),
                                      ZEXT416(*(uint *)(lVar22 + uVar25 * 4)));
            *(int *)(uVar28 + uVar25 * 4) = auVar36._0_4_;
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar33);
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
        auVar36 = vfmadd213ps_fma(*(undefined1 (*) [32])(lVar27 + uVar33 * 4),auVar38,
                                  *(undefined1 (*) [32])(lVar22 + uVar33 * 4));
        *(undefined1 (*) [32])(uVar28 + uVar33 * 4) = ZEXT1632(auVar36);
        uVar33 = uVar33 + 8;
      } while (uVar33 < uVar32);
    }
    uVar28 = 0;
    if (uVar32 + 1 <= param_5) {
      do {
        auVar36 = vfmadd213ss_fma(ZEXT416(*(uint *)(lVar20 * param_2 + param_1 + uVar32 * 4 +
                                                   uVar28 * 4)),ZEXT416((uint)fVar4),
                                  ZEXT416(*(uint *)(lVar21 * param_2 + param_1 + uVar32 * 4 +
                                                   uVar28 * 4)));
        *(int *)(param_2 * uVar29 + param_1 + uVar32 * 4 + uVar28 * 4) = auVar36._0_4_;
        uVar28 = uVar28 + 1;
      } while (uVar28 < param_5 - uVar32);
    }
  }
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 0x10) {
LAB_14095b0eb:
      uVar32 = 0;
    }
    else {
      if ((longlong)param_5 < 0x7b9) {
        uVar32 = param_5 & 0xfffffffffffffff0;
        uVar28 = 0;
        lVar20 = param_2 * uVar29 + param_1;
      }
      else {
        uVar28 = param_4 & 0x1f;
        if (uVar28 != 0) {
          if ((param_4 & 1) != 0) goto LAB_14095b0eb;
          uVar28 = 0x20 - uVar28 >> 1;
        }
        if ((longlong)param_5 < (longlong)(uVar28 + 0x10)) goto LAB_14095b0eb;
        lVar20 = param_2 * uVar29 + param_1;
        uVar33 = 0;
        uVar32 = param_5 - (param_5 - uVar28 & 0xf);
        if (uVar28 != 0) {
          do {
            iVar31 = (int)ROUND(*(float *)(lVar20 + uVar33 * 4));
            if (0x7ffe < iVar31) {
              iVar31 = 0x7fff;
            }
            uVar30 = (undefined2)iVar31;
            if (iVar31 < -0x7fff) {
              uVar30 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar33 * 2) = uVar30;
            uVar33 = uVar33 + 1;
          } while (uVar33 < uVar28);
        }
      }
      do {
        auVar37 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar20 + uVar28 * 4));
        auVar5 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar20 + 0x20 + uVar28 * 4));
        auVar37 = vpackssdw_avx2(auVar37,auVar5);
        auVar37 = vpermq_avx2(auVar37,0xd8);
        *(undefined1 (*) [32])(param_4 + uVar28 * 2) = auVar37;
        uVar28 = uVar28 + 0x10;
      } while (uVar28 < uVar32);
    }
    if (param_5 < uVar32 + 1) {
      return;
    }
    param_5 = param_5 - uVar32;
    if ((longlong)param_5 < 4) {
      uVar28 = 0;
    }
    else {
      uVar33 = 0;
      uVar28 = param_5 & 0xfffffffffffffffc;
      do {
        auVar36 = vcvtps2dq_avx(*(undefined1 (*) [16])
                                 (param_2 * uVar29 + param_1 + uVar32 * 4 + uVar33 * 4));
        auVar36 = vpackssdw_avx(auVar36,auVar36);
        *(longlong *)(param_4 + uVar32 * 2 + uVar33 * 2) = auVar36._0_8_;
        uVar33 = uVar33 + 4;
      } while (uVar33 < uVar28);
    }
    if (param_5 <= uVar28) {
      return;
    }
    do {
      iVar31 = (int)ROUND(*(float *)(param_1 + param_2 * uVar29 + uVar32 * 4 + uVar28 * 4));
      if (0x7ffe < iVar31) {
        iVar31 = 0x7fff;
      }
      uVar30 = (undefined2)iVar31;
      if (iVar31 < -0x7fff) {
        uVar30 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar32 * 2 + uVar28 * 2) = uVar30;
      uVar28 = uVar28 + 1;
    } while (uVar28 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (0xf < (longlong)param_5) {
    uVar28 = param_4 & 0x1f;
    if (uVar28 != 0) {
      if ((param_4 & 1) != 0) goto LAB_14095b111;
      uVar28 = 0x20 - uVar28 >> 1;
    }
    if ((longlong)(uVar28 + 0x10) <= (longlong)param_5) {
      lVar20 = param_2 * uVar29 + param_1;
      uVar33 = 0;
      uVar32 = param_5 - (param_5 - uVar28 & 0xf);
      if (uVar28 != 0) {
        do {
          iVar31 = (int)ROUND(*(float *)(lVar20 + uVar33 * 4));
          if (0x7ffe < iVar31) {
            iVar31 = 0x7fff;
          }
          uVar30 = (undefined2)iVar31;
          if (iVar31 < -0x7fff) {
            uVar30 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar33 * 2) = uVar30;
          uVar33 = uVar33 + 1;
        } while (uVar33 < uVar28);
      }
      do {
        auVar37 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar20 + uVar28 * 4));
        auVar5 = vcvtps2dq_avx(*(undefined1 (*) [32])(lVar20 + 0x20 + uVar28 * 4));
        auVar37 = vpackssdw_avx2(auVar37,auVar5);
        auVar37 = vpermq_avx2(auVar37,0xd8);
        auVar37 = vmovntdq_avx(auVar37);
        *(undefined1 (*) [32])(param_4 + uVar28 * 2) = auVar37;
        uVar28 = uVar28 + 0x10;
      } while (uVar28 < uVar32);
      goto LAB_14095b003;
    }
  }
LAB_14095b111:
  uVar32 = 0;
LAB_14095b003:
  if (uVar32 + 1 <= param_5) {
    param_5 = param_5 - uVar32;
    if ((longlong)param_5 < 4) {
      uVar28 = 0;
    }
    else {
      uVar33 = 0;
      uVar28 = param_5 & 0xfffffffffffffffc;
      do {
        auVar36 = vcvtps2dq_avx(*(undefined1 (*) [16])
                                 (param_2 * uVar29 + param_1 + uVar32 * 4 + uVar33 * 4));
        auVar36 = vpackssdw_avx(auVar36,auVar36);
        *(longlong *)(param_4 + uVar32 * 2 + uVar33 * 2) = auVar36._0_8_;
        uVar33 = uVar33 + 4;
      } while (uVar33 < uVar28);
    }
    if (uVar28 < param_5) {
      do {
        iVar31 = (int)ROUND(*(float *)(param_1 + param_2 * uVar29 + uVar32 * 4 + uVar28 * 4));
        if (0x7ffe < iVar31) {
          iVar31 = 0x7fff;
        }
        uVar30 = (undefined2)iVar31;
        if (iVar31 < -0x7fff) {
          uVar30 = 0x8000;
        }
        *(undefined2 *)(param_4 + uVar32 * 2 + uVar28 * 2) = uVar30;
        uVar28 = uVar28 + 1;
      } while (uVar28 < param_5);
    }
  }
  return;
}


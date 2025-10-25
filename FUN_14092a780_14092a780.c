
void FUN_14092a780(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,int param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
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
  float fVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  float in_register_0000131c;
  undefined1 auVar41 [32];
  
  uVar21 = (ulonglong)param_7;
  lVar27 = (longlong)param_3;
  lVar24 = (longlong)(param_7 >> 1);
  lVar25 = (lVar27 - lVar24 >> 0x3f & uVar21) + (lVar27 - lVar24);
  if (lVar25 == 0) {
    uVar30 = 0;
    uVar29 = uVar21;
  }
  else {
    uVar30 = (ulonglong)(int)lVar25;
    uVar29 = uVar30;
  }
  lVar20 = uVar29 - 1;
  uVar29 = uVar30 + 1;
  if (uVar30 + 1 == uVar21) {
    uVar29 = 0;
  }
  fVar5 = *param_6;
  uVar30 = (longlong)(int)lVar20;
  if ((longlong)(int)lVar20 < 1) {
    uVar30 = uVar21;
  }
  lVar28 = uVar30 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_14092aef7:
      uVar23 = 0;
    }
    else {
      uVar31 = param_2 * lVar25 + param_1;
      uVar30 = uVar31 & 0x1f;
      if (uVar30 != 0) {
        if ((uVar31 & 3) != 0) goto LAB_14092aef7;
        uVar30 = 0x20 - uVar30 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar30 + 0x10)) goto LAB_14092aef7;
      lVar33 = param_2 * lVar20 + param_1;
      uVar32 = 0;
      uVar23 = param_5 - (param_5 - uVar30 & 0xf);
      if (uVar30 != 0) {
        do {
          *(float *)(uVar31 + uVar32 * 4) =
               fVar5 * (*(float *)(uVar31 + uVar32 * 4) + *(float *)(lVar33 + uVar32 * 4));
          uVar32 = uVar32 + 1;
        } while (uVar32 < uVar30);
      }
      do {
        pfVar1 = (float *)(uVar31 + uVar30 * 4);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        fVar11 = pfVar1[4];
        fVar12 = pfVar1[5];
        fVar13 = pfVar1[6];
        auVar36 = *(undefined1 (*) [32])(uVar31 + 0x20 + uVar30 * 4);
        pfVar2 = (float *)(lVar33 + uVar30 * 4);
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        fVar17 = pfVar2[4];
        fVar18 = pfVar2[5];
        fVar19 = pfVar2[6];
        pfVar4 = (float *)(lVar33 + 0x20 + uVar30 * 4);
        auVar6._4_4_ = fVar5 * (auVar36._4_4_ + pfVar4[1]);
        auVar6._0_4_ = fVar5 * (auVar36._0_4_ + *pfVar4);
        auVar6._8_4_ = fVar5 * (auVar36._8_4_ + pfVar4[2]);
        auVar6._12_4_ = fVar5 * (auVar36._12_4_ + pfVar4[3]);
        auVar6._16_4_ = fVar5 * (auVar36._16_4_ + pfVar4[4]);
        auVar6._20_4_ = fVar5 * (auVar36._20_4_ + pfVar4[5]);
        auVar6._24_4_ = fVar5 * (auVar36._24_4_ + pfVar4[6]);
        auVar6._28_4_ = pfVar1[7] + pfVar2[7];
        pfVar4 = (float *)(uVar31 + uVar30 * 4);
        *pfVar4 = fVar5 * (*pfVar1 + *pfVar2);
        pfVar4[1] = fVar5 * (fVar8 + fVar14);
        pfVar4[2] = fVar5 * (fVar9 + fVar15);
        pfVar4[3] = fVar5 * (fVar10 + fVar16);
        pfVar4[4] = fVar5 * (fVar11 + fVar17);
        pfVar4[5] = fVar5 * (fVar12 + fVar18);
        pfVar4[6] = fVar5 * (fVar13 + fVar19);
        pfVar4[7] = in_register_0000131c;
        *(undefined1 (*) [32])(uVar31 + 0x20 + uVar30 * 4) = auVar6;
        uVar30 = uVar30 + 0x10;
      } while (uVar30 < uVar23);
    }
    if (uVar23 + 1 <= param_5) {
      uVar30 = param_5 - uVar23;
      if ((longlong)uVar30 < 4) {
        uVar31 = 0;
      }
      else {
        uVar32 = 0;
        uVar31 = uVar30 & 0xfffffffffffffffc;
        lVar33 = param_2 * lVar25 + param_1 + uVar23 * 4;
        do {
          auVar35 = *(undefined1 (*) [16])(lVar33 + uVar32 * 4);
          pfVar1 = (float *)(param_2 * lVar20 + param_1 + uVar23 * 4 + uVar32 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar33 + uVar32 * 4);
          *pfVar2 = fVar5 * (auVar35._0_4_ + *pfVar1);
          pfVar2[1] = fVar5 * (auVar35._4_4_ + fVar8);
          pfVar2[2] = fVar5 * (auVar35._8_4_ + fVar9);
          pfVar2[3] = fVar5 * (auVar35._12_4_ + fVar10);
          uVar32 = uVar32 + 4;
        } while (uVar32 < uVar31);
      }
      if (uVar31 < uVar30) {
        lVar33 = param_2 * lVar25 + param_1 + uVar23 * 4;
        do {
          *(float *)(lVar33 + uVar31 * 4) =
               fVar5 * (*(float *)(lVar33 + uVar31 * 4) +
                       *(float *)(lVar20 * param_2 + param_1 + uVar23 * 4 + uVar31 * 4));
          uVar31 = uVar31 + 1;
        } while (uVar31 < uVar30);
      }
    }
  }
  if (1 < lVar24) {
    uVar30 = param_2 * lVar25 + param_1;
    uVar31 = 0;
    uVar23 = uVar30 & 0x1f;
    do {
      fVar5 = param_6[uVar31 + 1];
      lVar20 = param_2 * lVar28;
      uVar32 = uVar29 + 1;
      lVar33 = param_2 * uVar29 + param_1;
      uVar29 = uVar32;
      if (uVar32 == uVar21) {
        uVar29 = 0;
      }
      lVar28 = lVar28 + -1;
      if (lVar28 < 0) {
        lVar28 = uVar21 - 1;
      }
      lVar20 = lVar20 + param_1;
      if (0 < (longlong)param_5) {
        if (((longlong)param_5 < 0x10) ||
           (((uVar32 = uVar23, uVar23 != 0 && (uVar32 = 0x20 - uVar23 >> 2, (uVar30 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar32 + 0x10))))) {
          uVar26 = 0;
        }
        else {
          uVar22 = 0;
          uVar26 = param_5 - (param_5 - uVar32 & 0xf);
          if (uVar32 != 0) {
            do {
              auVar35 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar33 + uVar22 * 4) +
                                                      *(float *)(lVar20 + uVar22 * 4))),
                                        ZEXT416((uint)fVar5),ZEXT416(*(uint *)(uVar30 + uVar22 * 4))
                                       );
              *(int *)(uVar30 + uVar22 * 4) = auVar35._0_4_;
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar32);
          }
          auVar36._4_4_ = fVar5;
          auVar36._0_4_ = fVar5;
          auVar36._8_4_ = fVar5;
          auVar36._12_4_ = fVar5;
          auVar36._16_4_ = fVar5;
          auVar36._20_4_ = fVar5;
          auVar36._24_4_ = fVar5;
          auVar36._28_4_ = fVar5;
          do {
            auVar6 = *(undefined1 (*) [32])(lVar33 + uVar32 * 4);
            pfVar1 = (float *)(lVar33 + 0x20 + uVar32 * 4);
            pfVar2 = (float *)(lVar20 + uVar32 * 4);
            auVar40._0_4_ = auVar6._0_4_ + *pfVar2;
            auVar40._4_4_ = auVar6._4_4_ + pfVar2[1];
            auVar40._8_4_ = auVar6._8_4_ + pfVar2[2];
            auVar40._12_4_ = auVar6._12_4_ + pfVar2[3];
            auVar40._16_4_ = auVar6._16_4_ + pfVar2[4];
            auVar40._20_4_ = auVar6._20_4_ + pfVar2[5];
            auVar40._24_4_ = auVar6._24_4_ + pfVar2[6];
            auVar40._28_4_ = auVar6._28_4_ + pfVar2[7];
            pfVar2 = (float *)(lVar20 + 0x20 + uVar32 * 4);
            auVar41._0_4_ = *pfVar1 + *pfVar2;
            auVar41._4_4_ = pfVar1[1] + pfVar2[1];
            auVar41._8_4_ = pfVar1[2] + pfVar2[2];
            auVar41._12_4_ = pfVar1[3] + pfVar2[3];
            auVar41._16_4_ = pfVar1[4] + pfVar2[4];
            auVar41._20_4_ = pfVar1[5] + pfVar2[5];
            auVar41._24_4_ = pfVar1[6] + pfVar2[6];
            auVar41._28_4_ = pfVar1[7] + pfVar2[7];
            auVar35 = vfmadd213ps_fma(auVar40,auVar36,*(undefined1 (*) [32])(uVar30 + uVar32 * 4));
            auVar7 = vfmadd213ps_fma(auVar41,auVar36,
                                     *(undefined1 (*) [32])(uVar30 + 0x20 + uVar32 * 4));
            *(undefined1 (*) [32])(uVar30 + uVar32 * 4) = ZEXT1632(auVar35);
            *(undefined1 (*) [32])(uVar30 + 0x20 + uVar32 * 4) = ZEXT1632(auVar7);
            uVar32 = uVar32 + 0x10;
          } while (uVar32 < uVar26);
        }
        if (uVar26 + 1 <= param_5) {
          uVar32 = param_5 - uVar26;
          if ((longlong)uVar32 < 4) {
            uVar22 = 0;
          }
          else {
            uVar34 = 0;
            auVar35._4_4_ = fVar5;
            auVar35._0_4_ = fVar5;
            auVar35._8_4_ = fVar5;
            auVar35._12_4_ = fVar5;
            uVar22 = uVar32 & 0xfffffffffffffffc;
            lVar3 = uVar30 + uVar26 * 4;
            do {
              auVar7 = *(undefined1 (*) [16])(lVar33 + uVar26 * 4 + uVar34 * 4);
              pfVar1 = (float *)(lVar20 + uVar26 * 4 + uVar34 * 4);
              auVar39._0_4_ = auVar7._0_4_ + *pfVar1;
              auVar39._4_4_ = auVar7._4_4_ + pfVar1[1];
              auVar39._8_4_ = auVar7._8_4_ + pfVar1[2];
              auVar39._12_4_ = auVar7._12_4_ + pfVar1[3];
              auVar7 = vfmadd213ps_fma(auVar39,auVar35,*(undefined1 (*) [16])(lVar3 + uVar34 * 4));
              *(undefined1 (*) [16])(lVar3 + uVar34 * 4) = auVar7;
              uVar34 = uVar34 + 4;
            } while (uVar34 < uVar22);
          }
          if (uVar22 < uVar32) {
            lVar3 = uVar30 + uVar26 * 4;
            do {
              auVar35 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar33 + uVar26 * 4 + uVar22 * 4)
                                                      + *(float *)(lVar20 + uVar26 * 4 + uVar22 * 4)
                                                      )),ZEXT416((uint)fVar5),
                                        ZEXT416(*(uint *)(lVar3 + uVar22 * 4)));
              *(int *)(lVar3 + uVar22 * 4) = auVar35._0_4_;
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar32);
          }
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 < lVar24 - 1U);
  }
  fVar5 = param_6[lVar24];
  auVar35 = ZEXT416((uint)fVar5);
  if (param_8 == 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if ((longlong)param_5 < 8) {
LAB_14092aefe:
      uVar21 = 0;
    }
    else {
      if ((longlong)param_5 < 0x15d) {
        uVar29 = 0;
        uVar21 = param_5 & 0xfffffffffffffff8;
        lVar20 = param_2 * lVar25 + param_1;
        lVar24 = param_2 * lVar27 + param_1;
      }
      else {
        uVar29 = param_4 & 0x1f;
        if (uVar29 != 0) {
          if ((param_4 & 3) != 0) goto LAB_14092aefe;
          uVar29 = 0x20 - uVar29 >> 2;
        }
        if ((longlong)param_5 < (longlong)(uVar29 + 8)) goto LAB_14092aefe;
        lVar20 = param_2 * lVar25 + param_1;
        lVar24 = param_2 * lVar27 + param_1;
        uVar30 = 0;
        uVar21 = param_5 - (param_5 - uVar29 & 7);
        if (uVar29 != 0) {
          do {
            auVar7 = vfmadd213ss_fma(ZEXT416(*(uint *)(lVar24 + uVar30 * 4)),auVar35,
                                     ZEXT416(*(uint *)(lVar20 + uVar30 * 4)));
            *(int *)(param_4 + uVar30 * 4) = auVar7._0_4_;
            uVar30 = uVar30 + 1;
          } while (uVar30 < uVar29);
        }
      }
      auVar37._4_4_ = fVar5;
      auVar37._0_4_ = fVar5;
      auVar37._8_4_ = fVar5;
      auVar37._12_4_ = fVar5;
      auVar37._16_4_ = fVar5;
      auVar37._20_4_ = fVar5;
      auVar37._24_4_ = fVar5;
      auVar37._28_4_ = fVar5;
      do {
        auVar7 = vfmadd213ps_fma(*(undefined1 (*) [32])(lVar24 + uVar29 * 4),auVar37,
                                 *(undefined1 (*) [32])(lVar20 + uVar29 * 4));
        *(undefined1 (*) [32])(param_4 + uVar29 * 4) = ZEXT1632(auVar7);
        uVar29 = uVar29 + 8;
      } while (uVar29 < uVar21);
    }
    uVar29 = 0;
    if (param_5 < uVar21 + 1) {
      return;
    }
    do {
      auVar7 = vfmadd213ss_fma(ZEXT416(*(uint *)(param_1 + param_2 * lVar27 + uVar21 * 4 +
                                                uVar29 * 4)),auVar35,
                               ZEXT416(*(uint *)(lVar25 * param_2 + param_1 + uVar21 * 4 +
                                                uVar29 * 4)));
      *(int *)(param_4 + uVar21 * 4 + uVar29 * 4) = auVar7._0_4_;
      uVar29 = uVar29 + 1;
    } while (uVar29 < param_5 - uVar21);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar21 = param_4 & 0x1f;
    if (uVar21 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14092af2a;
      uVar21 = 0x20 - uVar21 >> 2;
    }
    if ((longlong)(uVar21 + 8) <= (longlong)param_5) {
      lVar20 = param_2 * lVar25 + param_1;
      lVar24 = param_2 * lVar27 + param_1;
      uVar30 = 0;
      uVar29 = param_5 - (param_5 - uVar21 & 7);
      if (uVar21 != 0) {
        do {
          auVar7 = vfmadd213ss_fma(ZEXT416(*(uint *)(lVar24 + uVar30 * 4)),auVar35,
                                   ZEXT416(*(uint *)(lVar20 + uVar30 * 4)));
          *(int *)(param_4 + uVar30 * 4) = auVar7._0_4_;
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar21);
      }
      auVar38._4_4_ = fVar5;
      auVar38._0_4_ = fVar5;
      auVar38._8_4_ = fVar5;
      auVar38._12_4_ = fVar5;
      auVar38._16_4_ = fVar5;
      auVar38._20_4_ = fVar5;
      auVar38._24_4_ = fVar5;
      auVar38._28_4_ = fVar5;
      do {
        auVar7 = vfmadd213ps_fma(*(undefined1 (*) [32])(lVar24 + uVar21 * 4),auVar38,
                                 *(undefined1 (*) [32])(lVar20 + uVar21 * 4));
        auVar36 = vmovntps_avx(ZEXT1632(auVar7));
        *(undefined1 (*) [32])(param_4 + uVar21 * 4) = auVar36;
        uVar21 = uVar21 + 8;
      } while (uVar21 < uVar29);
      goto LAB_14092ae7b;
    }
  }
LAB_14092af2a:
  uVar29 = 0;
LAB_14092ae7b:
  uVar21 = 0;
  if (uVar29 + 1 <= param_5) {
    do {
      auVar7 = vfmadd213ss_fma(ZEXT416(*(uint *)(param_1 + param_2 * lVar27 + uVar29 * 4 +
                                                uVar21 * 4)),auVar35,
                               ZEXT416(*(uint *)(lVar25 * param_2 + param_1 + uVar29 * 4 +
                                                uVar21 * 4)));
      *(int *)(param_4 + uVar29 * 4 + uVar21 * 4) = auVar7._0_4_;
      uVar21 = uVar21 + 1;
    } while (uVar21 < param_5 - uVar29);
  }
  return;
}


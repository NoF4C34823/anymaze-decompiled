
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ba720(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  
  lVar28 = (longlong)param_3;
  lVar29 = lVar28 + -2;
  if (SCARRY8(lVar28,-2) != lVar28 + -2 < 0) {
    lVar29 = lVar28 + 3;
  }
  lVar28 = (longlong)(int)lVar29 + 1;
  fVar8 = *param_6;
  fVar9 = param_6[1];
  fVar10 = param_6[2];
  if (4 < lVar28) {
    lVar28 = 0;
  }
  lVar23 = (longlong)(int)lVar28 + 1;
  if (4 < lVar23) {
    lVar23 = 0;
  }
  lVar24 = (longlong)(int)lVar23 + 1;
  if (4 < lVar24) {
    lVar24 = 0;
  }
  lVar25 = (longlong)(int)lVar24 + 1;
  if (4 < lVar25) {
    lVar25 = 0;
  }
  auVar48 = ZEXT416((uint)fVar8);
  auVar50 = ZEXT416((uint)fVar9);
  auVar34 = ZEXT416((uint)fVar10);
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar32 = param_4 & 0x1f;
      if (uVar32 != 0) {
        if ((param_4 & 1) != 0) goto LAB_1400baf20;
        uVar32 = 0x20 - uVar32 >> 1;
      }
      if ((longlong)(uVar32 + 8) <= (longlong)param_5) {
        lVar20 = param_2 * lVar25 + param_1;
        lVar21 = param_2 * lVar24 + param_1;
        lVar31 = param_2 * lVar29 + param_1;
        lVar27 = param_2 * lVar28 + param_1;
        lVar22 = param_2 * lVar23 + param_1;
        uVar30 = param_5 - (param_5 - uVar32 & 7);
        if (uVar32 != 0) {
          uVar26 = 0;
          do {
            *(short *)(param_4 + uVar26 * 2) =
                 (short)(int)ROUND(fVar8 * (*(float *)(lVar31 + uVar26 * 4) +
                                           *(float *)(lVar20 + uVar26 * 4)) +
                                   fVar9 * (*(float *)(lVar27 + uVar26 * 4) +
                                           *(float *)(lVar21 + uVar26 * 4)) +
                                   fVar10 * *(float *)(lVar22 + uVar26 * 4));
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar32);
        }
        auVar19 = _DAT_143086c40;
        auVar48 = vshufps_avx(auVar48,auVar48,0);
        auVar50 = vshufps_avx(auVar50,auVar50,0);
        auVar34 = vshufps_avx(auVar34,auVar34,0);
        do {
          auVar11 = *(undefined1 (*) [16])(lVar31 + uVar32 * 4);
          auVar12 = *(undefined1 (*) [16])(lVar20 + uVar32 * 4);
          auVar13 = *(undefined1 (*) [16])(lVar31 + 0x10 + uVar32 * 4);
          auVar14 = *(undefined1 (*) [16])(lVar20 + 0x10 + uVar32 * 4);
          auVar15 = *(undefined1 (*) [16])(lVar27 + uVar32 * 4);
          auVar16 = *(undefined1 (*) [16])(lVar27 + 0x10 + uVar32 * 4);
          pfVar1 = (float *)(lVar21 + uVar32 * 4);
          lVar6 = lVar21 + 0x10 + uVar32 * 4;
          auVar17 = *(undefined1 (*) [16])(lVar22 + uVar32 * 4);
          auVar18 = *(undefined1 (*) [16])(lVar22 + 0x10 + uVar32 * 4);
          auVar46._0_4_ =
               auVar48._0_4_ * (auVar11._0_4_ + auVar12._0_4_) +
               auVar50._0_4_ * (auVar15._0_4_ + *pfVar1) + auVar34._0_4_ * auVar17._0_4_;
          auVar46._4_4_ =
               auVar48._4_4_ * (auVar11._4_4_ + auVar12._4_4_) +
               auVar50._4_4_ * (auVar15._4_4_ + pfVar1[1]) + auVar34._4_4_ * auVar17._4_4_;
          auVar46._8_4_ =
               auVar48._8_4_ * (auVar11._8_4_ + auVar12._8_4_) +
               auVar50._8_4_ * (auVar15._8_4_ + pfVar1[2]) + auVar34._8_4_ * auVar17._8_4_;
          auVar46._12_4_ =
               auVar48._12_4_ * (auVar11._12_4_ + auVar12._12_4_) +
               auVar50._12_4_ * (auVar15._12_4_ + pfVar1[3]) + auVar34._12_4_ * auVar17._12_4_;
          auVar46._16_4_ =
               auVar48._0_4_ * (auVar13._0_4_ + auVar14._0_4_) +
               auVar50._0_4_ * (auVar16._0_4_ + *(float *)(lVar6 + 0x10)) +
               auVar34._0_4_ * auVar18._0_4_;
          auVar46._20_4_ =
               auVar48._4_4_ * (auVar13._4_4_ + auVar14._4_4_) +
               auVar50._4_4_ * (auVar16._4_4_ + *(float *)(lVar6 + 0x14)) +
               auVar34._4_4_ * auVar18._4_4_;
          auVar46._24_4_ =
               auVar48._8_4_ * (auVar13._8_4_ + auVar14._8_4_) +
               auVar50._8_4_ * (auVar16._8_4_ + *(float *)(lVar6 + 0x18)) +
               auVar34._8_4_ * auVar18._8_4_;
          auVar46._28_4_ = *(float *)(lVar6 + 0x1c) + 0.0 + 0.0;
          auVar46 = vcvtps2dq_avx(auVar46);
          auVar11 = vpand_avx(auVar46._0_16_,auVar19);
          auVar12 = vpand_avx(auVar46._16_16_,auVar19);
          auVar11 = vpackusdw_avx(auVar11,auVar12);
          auVar11 = vmovntdq_avx(auVar11);
          *(undefined1 (*) [16])(param_4 + uVar32 * 2) = auVar11;
          uVar32 = uVar32 + 8;
        } while (uVar32 < uVar30);
        goto LAB_1400bae5c;
      }
    }
LAB_1400baf20:
    uVar30 = 0;
LAB_1400bae5c:
    if (param_5 <= uVar30) {
      return;
    }
    do {
      *(short *)(param_4 + uVar30 * 2) =
           (short)(int)ROUND(fVar8 * (*(float *)(lVar29 * param_2 + param_1 + uVar30 * 4) +
                                     *(float *)(lVar25 * param_2 + param_1 + uVar30 * 4)) +
                             fVar9 * (*(float *)(lVar28 * param_2 + param_1 + uVar30 * 4) +
                                     *(float *)(lVar24 * param_2 + param_1 + uVar30 * 4)) +
                             fVar10 * *(float *)(param_1 + param_2 * lVar23 + uVar30 * 4));
      uVar30 = uVar30 + 1;
    } while (uVar30 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x10) {
LAB_1400baf10:
    uVar30 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar32 = param_4 & 0x1f;
    if (uVar32 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1400baf10;
      uVar32 = 0x20 - uVar32 >> 1;
    }
    if ((longlong)param_5 < (longlong)(uVar32 + 0x10)) goto LAB_1400baf10;
    lVar20 = param_2 * lVar25 + param_1;
    lVar21 = param_2 * lVar24 + param_1;
    lVar31 = param_2 * lVar29 + param_1;
    lVar27 = param_2 * lVar28 + param_1;
    lVar22 = param_2 * lVar23 + param_1;
    uVar30 = param_5 - (param_5 - uVar32 & 0xf);
    if (uVar32 != 0) {
      uVar26 = 0;
      do {
        *(short *)(param_4 + uVar26 * 2) =
             (short)(int)ROUND(fVar8 * (*(float *)(lVar31 + uVar26 * 4) +
                                       *(float *)(lVar20 + uVar26 * 4)) +
                               fVar9 * (*(float *)(lVar27 + uVar26 * 4) +
                                       *(float *)(lVar21 + uVar26 * 4)) +
                               fVar10 * *(float *)(lVar22 + uVar26 * 4));
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar32);
    }
    auVar19 = _DAT_143086c40;
    auVar48 = vshufps_avx(auVar48,auVar48,0);
    auVar50 = vshufps_avx(auVar50,auVar50,0);
    auVar34 = vshufps_avx(auVar34,auVar34,0);
    do {
      auVar11 = *(undefined1 (*) [16])(lVar31 + uVar32 * 4);
      auVar12 = *(undefined1 (*) [16])(lVar20 + uVar32 * 4);
      auVar13 = *(undefined1 (*) [16])(lVar31 + 0x10 + uVar32 * 4);
      auVar14 = *(undefined1 (*) [16])(lVar20 + 0x10 + uVar32 * 4);
      fVar33 = auVar48._0_4_;
      fVar35 = auVar48._4_4_;
      fVar36 = auVar48._8_4_;
      fVar37 = auVar48._12_4_;
      auVar15 = *(undefined1 (*) [16])(lVar27 + uVar32 * 4);
      auVar16 = *(undefined1 (*) [16])(lVar27 + 0x10 + uVar32 * 4);
      pfVar1 = (float *)(lVar21 + uVar32 * 4);
      lVar6 = lVar21 + 0x10 + uVar32 * 4;
      fVar38 = auVar50._0_4_;
      fVar39 = auVar50._4_4_;
      fVar40 = auVar50._8_4_;
      fVar41 = auVar50._12_4_;
      pfVar2 = (float *)(lVar22 + uVar32 * 4);
      lVar7 = lVar22 + 0x10 + uVar32 * 4;
      fVar42 = auVar34._0_4_;
      fVar43 = auVar34._4_4_;
      fVar44 = auVar34._8_4_;
      fVar45 = auVar34._12_4_;
      auVar47._0_4_ =
           fVar33 * (auVar11._0_4_ + auVar12._0_4_) + fVar38 * (auVar15._0_4_ + *pfVar1) +
           fVar42 * *pfVar2;
      auVar47._4_4_ =
           fVar35 * (auVar11._4_4_ + auVar12._4_4_) + fVar39 * (auVar15._4_4_ + pfVar1[1]) +
           fVar43 * pfVar2[1];
      auVar47._8_4_ =
           fVar36 * (auVar11._8_4_ + auVar12._8_4_) + fVar40 * (auVar15._8_4_ + pfVar1[2]) +
           fVar44 * pfVar2[2];
      auVar47._12_4_ =
           fVar37 * (auVar11._12_4_ + auVar12._12_4_) + fVar41 * (auVar15._12_4_ + pfVar1[3]) +
           fVar45 * pfVar2[3];
      auVar47._16_4_ =
           fVar33 * (auVar13._0_4_ + auVar14._0_4_) +
           fVar38 * (auVar16._0_4_ + *(float *)(lVar6 + 0x10)) + fVar42 * *(float *)(lVar7 + 0x10);
      auVar47._20_4_ =
           fVar35 * (auVar13._4_4_ + auVar14._4_4_) +
           fVar39 * (auVar16._4_4_ + *(float *)(lVar6 + 0x14)) + fVar43 * *(float *)(lVar7 + 0x14);
      auVar47._24_4_ =
           fVar36 * (auVar13._8_4_ + auVar14._8_4_) +
           fVar40 * (auVar16._8_4_ + *(float *)(lVar6 + 0x18)) + fVar44 * *(float *)(lVar7 + 0x18);
      auVar47._28_4_ = *(float *)(lVar6 + 0x1c) + 0.0 + *(float *)(lVar7 + 0x1c);
      auVar46 = vcvtps2dq_avx(auVar47);
      auVar11 = vpand_avx(auVar46._0_16_,auVar19);
      auVar12 = vpand_avx(auVar46._16_16_,auVar19);
      auVar11 = vpackusdw_avx(auVar11,auVar12);
      *(undefined1 (*) [16])(param_4 + uVar32 * 2) = auVar11;
      auVar11 = *(undefined1 (*) [16])(lVar31 + 0x20 + uVar32 * 4);
      pfVar1 = (float *)(lVar20 + 0x20 + uVar32 * 4);
      auVar12 = *(undefined1 (*) [16])(lVar31 + 0x30 + uVar32 * 4);
      lVar6 = lVar20 + 0x30 + uVar32 * 4;
      auVar13 = *(undefined1 (*) [16])(lVar27 + 0x20 + uVar32 * 4);
      auVar14 = *(undefined1 (*) [16])(lVar27 + 0x30 + uVar32 * 4);
      pfVar2 = (float *)(lVar21 + 0x20 + uVar32 * 4);
      lVar7 = lVar21 + 0x30 + uVar32 * 4;
      auVar15 = *(undefined1 (*) [16])(lVar22 + 0x20 + uVar32 * 4);
      auVar16 = *(undefined1 (*) [16])(lVar22 + 0x30 + uVar32 * 4);
      auVar49._0_4_ =
           fVar33 * (auVar11._0_4_ + *pfVar1) + fVar38 * (auVar13._0_4_ + *pfVar2) +
           fVar42 * auVar15._0_4_;
      auVar49._4_4_ =
           fVar35 * (auVar11._4_4_ + pfVar1[1]) + fVar39 * (auVar13._4_4_ + pfVar2[1]) +
           fVar43 * auVar15._4_4_;
      auVar49._8_4_ =
           fVar36 * (auVar11._8_4_ + pfVar1[2]) + fVar40 * (auVar13._8_4_ + pfVar2[2]) +
           fVar44 * auVar15._8_4_;
      auVar49._12_4_ =
           fVar37 * (auVar11._12_4_ + pfVar1[3]) + fVar41 * (auVar13._12_4_ + pfVar2[3]) +
           fVar45 * auVar15._12_4_;
      auVar49._16_4_ =
           fVar33 * (auVar12._0_4_ + *(float *)(lVar6 + 0x10)) +
           fVar38 * (auVar14._0_4_ + *(float *)(lVar7 + 0x10)) + fVar42 * auVar16._0_4_;
      auVar49._20_4_ =
           fVar35 * (auVar12._4_4_ + *(float *)(lVar6 + 0x14)) +
           fVar39 * (auVar14._4_4_ + *(float *)(lVar7 + 0x14)) + fVar43 * auVar16._4_4_;
      auVar49._24_4_ =
           fVar36 * (auVar12._8_4_ + *(float *)(lVar6 + 0x18)) +
           fVar40 * (auVar14._8_4_ + *(float *)(lVar7 + 0x18)) + fVar44 * auVar16._8_4_;
      auVar49._28_4_ = *(float *)(lVar6 + 0x1c) + *(float *)(lVar7 + 0x1c) + 0.0;
      auVar46 = vcvtps2dq_avx(auVar49);
      auVar11 = vpand_avx(auVar46._0_16_,auVar19);
      auVar12 = vpand_avx(auVar46._16_16_,auVar19);
      auVar11 = vpackusdw_avx(auVar11,auVar12);
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar32 * 2) = auVar11;
      auVar11 = _DAT_143086c40;
      uVar32 = uVar32 + 0x10;
    } while (uVar32 < uVar30);
    if (param_5 < uVar30 + 1) {
      return;
    }
    param_5 = param_5 - uVar30;
    if (3 < (longlong)param_5) {
      uVar32 = param_5 & 0xfffffffffffffffc;
      uVar26 = 0;
      do {
        pfVar1 = (float *)(lVar31 + uVar30 * 4 + uVar26 * 4);
        pfVar2 = (float *)(lVar20 + uVar30 * 4 + uVar26 * 4);
        pfVar3 = (float *)(lVar27 + uVar30 * 4 + uVar26 * 4);
        pfVar4 = (float *)(lVar21 + uVar30 * 4 + uVar26 * 4);
        pfVar5 = (float *)(lVar22 + uVar30 * 4 + uVar26 * 4);
        auVar34._0_4_ =
             fVar33 * (*pfVar1 + *pfVar2) + fVar38 * (*pfVar3 + *pfVar4) + fVar42 * *pfVar5;
        auVar34._4_4_ =
             fVar35 * (pfVar1[1] + pfVar2[1]) + fVar39 * (pfVar3[1] + pfVar4[1]) +
             fVar43 * pfVar5[1];
        auVar34._8_4_ =
             fVar36 * (pfVar1[2] + pfVar2[2]) + fVar40 * (pfVar3[2] + pfVar4[2]) +
             fVar44 * pfVar5[2];
        auVar34._12_4_ =
             fVar37 * (pfVar1[3] + pfVar2[3]) + fVar41 * (pfVar3[3] + pfVar4[3]) +
             fVar45 * pfVar5[3];
        auVar34 = vcvtps2dq_avx(auVar34);
        auVar34 = vpand_avx(auVar34,auVar11);
        auVar34 = vpackusdw_avx(auVar34,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar30 * 2 + uVar26 * 2) = auVar34._0_8_;
        uVar26 = uVar26 + 4;
      } while (uVar26 < uVar32);
      goto LAB_1400baba4;
    }
  }
  uVar32 = 0;
LAB_1400baba4:
  if (uVar32 < param_5) {
    do {
      *(short *)(param_4 + uVar30 * 2 + uVar32 * 2) =
           (short)(int)ROUND(fVar8 * (*(float *)(lVar29 * param_2 + param_1 + uVar30 * 4 +
                                                uVar32 * 4) +
                                     *(float *)(lVar25 * param_2 + param_1 + uVar30 * 4 + uVar32 * 4
                                               )) +
                             fVar9 * (*(float *)(lVar28 * param_2 + param_1 + uVar30 * 4 +
                                                uVar32 * 4) +
                                     *(float *)(lVar24 * param_2 + param_1 + uVar30 * 4 + uVar32 * 4
                                               )) +
                             fVar10 * *(float *)(param_1 + param_2 * lVar23 + uVar30 * 4 +
                                                uVar32 * 4));
      uVar32 = uVar32 + 1;
    } while (uVar32 < param_5);
  }
  return;
}


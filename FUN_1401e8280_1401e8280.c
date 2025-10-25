
void FUN_1401e8280(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  longlong lVar54;
  longlong lVar55;
  ulonglong uVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  
  uVar64 = 0;
  lVar54 = (longlong)param_3;
  lVar55 = lVar54 + -3;
  if (SCARRY8(lVar54,-3) != lVar54 + -3 < 0) {
    lVar55 = lVar54 + 4;
  }
  uVar49 = (longlong)(int)lVar55 + 1;
  if (6 < (longlong)uVar49) {
    uVar49 = uVar64;
  }
  uVar48 = (longlong)(int)uVar49 + 1;
  if (6 < (longlong)uVar48) {
    uVar48 = uVar64;
  }
  uVar56 = (longlong)(int)uVar48 + 1;
  if (6 < (longlong)uVar56) {
    uVar56 = uVar64;
  }
  uVar51 = (longlong)(int)uVar56 + 1;
  if (6 < (longlong)uVar51) {
    uVar51 = uVar64;
  }
  uVar53 = (longlong)(int)uVar51 + 1;
  if (6 < (longlong)uVar53) {
    uVar53 = uVar64;
  }
  uVar52 = (longlong)(int)uVar53 + 1;
  if (6 < (longlong)uVar52) {
    uVar52 = uVar64;
  }
  auVar66 = ZEXT416(*param_6);
  auVar68 = ZEXT416(param_6[1]);
  auVar67 = ZEXT416(param_6[2]);
  auVar65 = ZEXT416(param_6[3]);
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar63 = param_4 & 0x1f;
      if (uVar63 != 0) {
        if ((param_4 & 3) != 0) goto LAB_1401e8a47;
        uVar63 = 0x20 - uVar63 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar63 + 8)) {
        uVar64 = 0;
      }
      else {
        lVar54 = param_2 * lVar55 + param_1;
        lVar57 = param_2 * uVar52 + param_1;
        lVar58 = param_2 * uVar49 + param_1;
        lVar59 = param_2 * uVar53 + param_1;
        uVar64 = param_5 - (param_5 - uVar63 & 7);
        lVar60 = param_2 * uVar48 + param_1;
        lVar61 = param_2 * uVar51 + param_1;
        lVar62 = param_2 * uVar56 + param_1;
        if (uVar63 != 0) {
          auVar17 = vunpcklps_avx(auVar66,auVar68);
          auVar18 = vunpcklps_avx(auVar67,auVar65);
          auVar17 = vmovlhps_avx(auVar17,auVar18);
          uVar50 = 0;
          do {
            auVar19 = vunpcklps_avx(ZEXT416((uint)(*(float *)(lVar54 + uVar50 * 4) +
                                                  *(float *)(lVar57 + uVar50 * 4))),
                                    ZEXT416((uint)(*(float *)(lVar58 + uVar50 * 4) +
                                                  *(float *)(lVar59 + uVar50 * 4))));
            auVar18 = vinsertps_avx(ZEXT416((uint)(*(float *)(lVar60 + uVar50 * 4) +
                                                  *(float *)(lVar61 + uVar50 * 4))),
                                    ZEXT416(*(uint *)(lVar62 + uVar50 * 4)),0x10);
            auVar18 = vmovlhps_avx(auVar19,auVar18);
            auVar18 = vdpps_avx(auVar17,auVar18,0xf1);
            *(int *)(param_4 + uVar50 * 4) = auVar18._0_4_;
            uVar50 = uVar50 + 1;
          } while (uVar50 < uVar63);
        }
        auVar17 = vshufps_avx(auVar66,auVar66,0);
        auVar18 = vshufps_avx(auVar68,auVar68,0);
        auVar19 = vshufps_avx(auVar67,auVar67,0);
        auVar16 = vshufps_avx(auVar65,auVar65,0);
        do {
          auVar10 = *(undefined1 (*) [16])(lVar54 + uVar63 * 4);
          auVar11 = *(undefined1 (*) [16])(lVar57 + uVar63 * 4);
          auVar12 = *(undefined1 (*) [16])(lVar54 + 0x10 + uVar63 * 4);
          auVar13 = *(undefined1 (*) [16])(lVar57 + 0x10 + uVar63 * 4);
          pfVar1 = (float *)(lVar58 + uVar63 * 4);
          pfVar2 = (float *)(lVar59 + uVar63 * 4);
          lVar6 = lVar59 + 0x10 + uVar63 * 4;
          lVar7 = lVar58 + 0x10 + uVar63 * 4;
          auVar14 = *(undefined1 (*) [16])(lVar60 + uVar63 * 4);
          pfVar4 = (float *)(lVar61 + uVar63 * 4);
          lVar8 = lVar61 + 0x10 + uVar63 * 4;
          auVar15 = *(undefined1 (*) [16])(lVar60 + 0x10 + uVar63 * 4);
          pfVar3 = (float *)(lVar62 + uVar63 * 4);
          lVar9 = lVar62 + 0x10 + uVar63 * 4;
          auVar69._0_4_ =
               auVar17._0_4_ * (auVar10._0_4_ + auVar11._0_4_) + auVar18._0_4_ * (*pfVar1 + *pfVar2)
               + auVar19._0_4_ * (auVar14._0_4_ + *pfVar4) + auVar16._0_4_ * *pfVar3;
          auVar69._4_4_ =
               auVar17._4_4_ * (auVar10._4_4_ + auVar11._4_4_) +
               auVar18._4_4_ * (pfVar1[1] + pfVar2[1]) + auVar19._4_4_ * (auVar14._4_4_ + pfVar4[1])
               + auVar16._4_4_ * pfVar3[1];
          auVar69._8_4_ =
               auVar17._8_4_ * (auVar10._8_4_ + auVar11._8_4_) +
               auVar18._8_4_ * (pfVar1[2] + pfVar2[2]) + auVar19._8_4_ * (auVar14._8_4_ + pfVar4[2])
               + auVar16._8_4_ * pfVar3[2];
          auVar69._12_4_ =
               auVar17._12_4_ * (auVar10._12_4_ + auVar11._12_4_) +
               auVar18._12_4_ * (pfVar1[3] + pfVar2[3]) +
               auVar19._12_4_ * (auVar14._12_4_ + pfVar4[3]) + auVar16._12_4_ * pfVar3[3];
          auVar69._16_4_ =
               auVar17._0_4_ * (auVar12._0_4_ + auVar13._0_4_) +
               auVar18._0_4_ * (*(float *)(lVar7 + 0x10) + *(float *)(lVar6 + 0x10)) +
               auVar19._0_4_ * (auVar15._0_4_ + *(float *)(lVar8 + 0x10)) +
               auVar16._0_4_ * *(float *)(lVar9 + 0x10);
          auVar69._20_4_ =
               auVar17._4_4_ * (auVar12._4_4_ + auVar13._4_4_) +
               auVar18._4_4_ * (*(float *)(lVar7 + 0x14) + *(float *)(lVar6 + 0x14)) +
               auVar19._4_4_ * (auVar15._4_4_ + *(float *)(lVar8 + 0x14)) +
               auVar16._4_4_ * *(float *)(lVar9 + 0x14);
          auVar69._24_4_ =
               auVar17._8_4_ * (auVar12._8_4_ + auVar13._8_4_) +
               auVar18._8_4_ * (*(float *)(lVar7 + 0x18) + *(float *)(lVar6 + 0x18)) +
               auVar19._8_4_ * (auVar15._8_4_ + *(float *)(lVar8 + 0x18)) +
               auVar16._8_4_ * *(float *)(lVar9 + 0x18);
          auVar69._28_4_ =
               *(float *)(lVar7 + 0x1c) + *(float *)(lVar6 + 0x1c) + 0.0 + *(float *)(lVar8 + 0x1c)
               + *(float *)(lVar9 + 0x1c);
          auVar69 = vmovntps_avx(auVar69);
          *(undefined1 (*) [32])(param_4 + uVar63 * 4) = auVar69;
          uVar63 = uVar63 + 8;
        } while (uVar63 < uVar64);
      }
    }
LAB_1401e8a47:
    if (param_5 <= uVar64) {
      return;
    }
    auVar66 = vunpcklps_avx(auVar66,auVar68);
    auVar65 = vunpcklps_avx(auVar67,auVar65);
    auVar65 = vmovlhps_avx(auVar66,auVar65);
    do {
      auVar67 = vunpcklps_avx(ZEXT416((uint)(*(float *)(lVar55 * param_2 + param_1 + uVar64 * 4) +
                                            *(float *)(uVar52 * param_2 + param_1 + uVar64 * 4))),
                              ZEXT416((uint)(*(float *)(uVar49 * param_2 + param_1 + uVar64 * 4) +
                                            *(float *)(uVar53 * param_2 + param_1 + uVar64 * 4))));
      auVar66 = vinsertps_avx(ZEXT416((uint)(*(float *)(uVar48 * param_2 + param_1 + uVar64 * 4) +
                                            *(float *)(uVar51 * param_2 + param_1 + uVar64 * 4))),
                              ZEXT416(*(uint *)(param_1 + param_2 * uVar56 + uVar64 * 4)),0x10);
      auVar66 = vmovlhps_avx(auVar67,auVar66);
      auVar66 = vdpps_avx(auVar65,auVar66,0xf1);
      *(int *)(param_4 + uVar64 * 4) = auVar66._0_4_;
      uVar64 = uVar64 + 1;
    } while (uVar64 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar64 = param_4 & 0x1f;
    if (uVar64 != 0) {
      if ((param_4 & 3) != 0) goto LAB_1401e8b22;
      uVar64 = 0x20 - uVar64 >> 2;
    }
    if ((longlong)(uVar64 + 8) <= (longlong)param_5) {
      lVar54 = param_2 * lVar55 + param_1;
      lVar57 = param_2 * uVar52 + param_1;
      lVar58 = param_2 * uVar49 + param_1;
      lVar59 = param_2 * uVar53 + param_1;
      uVar63 = param_5 - (param_5 - uVar64 & 7);
      lVar60 = param_2 * uVar48 + param_1;
      lVar61 = param_2 * uVar51 + param_1;
      lVar62 = param_2 * uVar56 + param_1;
      if (uVar64 != 0) {
        auVar17 = vunpcklps_avx(auVar66,auVar68);
        auVar18 = vunpcklps_avx(auVar67,auVar65);
        auVar17 = vmovlhps_avx(auVar17,auVar18);
        uVar50 = 0;
        do {
          auVar19 = vunpcklps_avx(ZEXT416((uint)(*(float *)(lVar54 + uVar50 * 4) +
                                                *(float *)(lVar57 + uVar50 * 4))),
                                  ZEXT416((uint)(*(float *)(lVar58 + uVar50 * 4) +
                                                *(float *)(lVar59 + uVar50 * 4))));
          auVar18 = vinsertps_avx(ZEXT416((uint)(*(float *)(lVar60 + uVar50 * 4) +
                                                *(float *)(lVar61 + uVar50 * 4))),
                                  ZEXT416(*(uint *)(lVar62 + uVar50 * 4)),0x10);
          auVar18 = vmovlhps_avx(auVar19,auVar18);
          auVar18 = vdpps_avx(auVar17,auVar18,0xf1);
          *(int *)(param_4 + uVar50 * 4) = auVar18._0_4_;
          uVar50 = uVar50 + 1;
        } while (uVar50 < uVar64);
      }
      auVar17 = vshufps_avx(auVar66,auVar66,0);
      auVar18 = vshufps_avx(auVar68,auVar68,0);
      auVar19 = vshufps_avx(auVar67,auVar67,0);
      auVar16 = vshufps_avx(auVar65,auVar65,0);
      do {
        auVar10 = *(undefined1 (*) [16])(lVar54 + uVar64 * 4);
        auVar11 = *(undefined1 (*) [16])(lVar57 + uVar64 * 4);
        auVar12 = *(undefined1 (*) [16])(lVar54 + 0x10 + uVar64 * 4);
        auVar13 = *(undefined1 (*) [16])(lVar57 + 0x10 + uVar64 * 4);
        pfVar1 = (float *)(lVar58 + uVar64 * 4);
        fVar20 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar22 = pfVar1[3];
        pfVar2 = (float *)(lVar59 + uVar64 * 4);
        fVar34 = pfVar2[1];
        fVar35 = pfVar2[2];
        fVar36 = pfVar2[3];
        lVar6 = lVar59 + 0x10 + uVar64 * 4;
        fVar37 = *(float *)(lVar6 + 0x10);
        fVar38 = *(float *)(lVar6 + 0x14);
        fVar39 = *(float *)(lVar6 + 0x18);
        fVar40 = *(float *)(lVar6 + 0x1c);
        lVar6 = lVar58 + 0x10 + uVar64 * 4;
        fVar23 = *(float *)(lVar6 + 0x10);
        fVar24 = *(float *)(lVar6 + 0x14);
        fVar25 = *(float *)(lVar6 + 0x18);
        fVar26 = *(float *)(lVar6 + 0x1c);
        auVar14 = *(undefined1 (*) [16])(lVar60 + uVar64 * 4);
        pfVar3 = (float *)(lVar61 + uVar64 * 4);
        fVar27 = pfVar3[1];
        fVar28 = pfVar3[2];
        fVar29 = pfVar3[3];
        lVar6 = lVar61 + 0x10 + uVar64 * 4;
        fVar30 = *(float *)(lVar6 + 0x10);
        fVar31 = *(float *)(lVar6 + 0x14);
        fVar32 = *(float *)(lVar6 + 0x18);
        fVar33 = *(float *)(lVar6 + 0x1c);
        auVar15 = *(undefined1 (*) [16])(lVar60 + 0x10 + uVar64 * 4);
        pfVar4 = (float *)(lVar62 + uVar64 * 4);
        fVar41 = pfVar4[1];
        fVar42 = pfVar4[2];
        fVar43 = pfVar4[3];
        lVar6 = lVar62 + 0x10 + uVar64 * 4;
        fVar44 = *(float *)(lVar6 + 0x10);
        fVar45 = *(float *)(lVar6 + 0x14);
        fVar46 = *(float *)(lVar6 + 0x18);
        fVar47 = *(float *)(lVar6 + 0x1c);
        pfVar5 = (float *)(param_4 + uVar64 * 4);
        *pfVar5 = auVar17._0_4_ * (auVar10._0_4_ + auVar11._0_4_) +
                  auVar18._0_4_ * (*pfVar1 + *pfVar2) + auVar19._0_4_ * (auVar14._0_4_ + *pfVar3) +
                  auVar16._0_4_ * *pfVar4;
        pfVar5[1] = auVar17._4_4_ * (auVar10._4_4_ + auVar11._4_4_) +
                    auVar18._4_4_ * (fVar20 + fVar34) + auVar19._4_4_ * (auVar14._4_4_ + fVar27) +
                    auVar16._4_4_ * fVar41;
        pfVar5[2] = auVar17._8_4_ * (auVar10._8_4_ + auVar11._8_4_) +
                    auVar18._8_4_ * (fVar21 + fVar35) + auVar19._8_4_ * (auVar14._8_4_ + fVar28) +
                    auVar16._8_4_ * fVar42;
        pfVar5[3] = auVar17._12_4_ * (auVar10._12_4_ + auVar11._12_4_) +
                    auVar18._12_4_ * (fVar22 + fVar36) + auVar19._12_4_ * (auVar14._12_4_ + fVar29)
                    + auVar16._12_4_ * fVar43;
        pfVar5[4] = auVar17._0_4_ * (auVar12._0_4_ + auVar13._0_4_) +
                    auVar18._0_4_ * (fVar23 + fVar37) + auVar19._0_4_ * (auVar15._0_4_ + fVar30) +
                    auVar16._0_4_ * fVar44;
        pfVar5[5] = auVar17._4_4_ * (auVar12._4_4_ + auVar13._4_4_) +
                    auVar18._4_4_ * (fVar24 + fVar38) + auVar19._4_4_ * (auVar15._4_4_ + fVar31) +
                    auVar16._4_4_ * fVar45;
        pfVar5[6] = auVar17._8_4_ * (auVar12._8_4_ + auVar13._8_4_) +
                    auVar18._8_4_ * (fVar25 + fVar39) + auVar19._8_4_ * (auVar15._8_4_ + fVar32) +
                    auVar16._8_4_ * fVar46;
        pfVar5[7] = fVar26 + fVar40 + 0.0 + fVar33 + fVar47;
        uVar64 = uVar64 + 8;
      } while (uVar64 < uVar63);
      goto LAB_1401e8667;
    }
  }
LAB_1401e8b22:
  uVar63 = 0;
LAB_1401e8667:
  if (uVar63 < param_5) {
    auVar66 = vunpcklps_avx(auVar66,auVar68);
    auVar65 = vunpcklps_avx(auVar67,auVar65);
    auVar65 = vmovlhps_avx(auVar66,auVar65);
    do {
      auVar67 = vunpcklps_avx(ZEXT416((uint)(*(float *)(lVar55 * param_2 + param_1 + uVar63 * 4) +
                                            *(float *)(uVar52 * param_2 + param_1 + uVar63 * 4))),
                              ZEXT416((uint)(*(float *)(uVar49 * param_2 + param_1 + uVar63 * 4) +
                                            *(float *)(uVar53 * param_2 + param_1 + uVar63 * 4))));
      auVar66 = vinsertps_avx(ZEXT416((uint)(*(float *)(uVar48 * param_2 + param_1 + uVar63 * 4) +
                                            *(float *)(uVar51 * param_2 + param_1 + uVar63 * 4))),
                              ZEXT416(*(uint *)(param_1 + param_2 * uVar56 + uVar63 * 4)),0x10);
      auVar66 = vmovlhps_avx(auVar67,auVar66);
      auVar66 = vdpps_avx(auVar65,auVar66,0xf1);
      *(int *)(param_4 + uVar63 * 4) = auVar66._0_4_;
      uVar63 = uVar63 + 1;
    } while (uVar63 < param_5);
  }
  return;
}



void FUN_14085b700(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  ulonglong uVar52;
  longlong lVar53;
  ulonglong uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar70 [32];
  
  lVar50 = (longlong)param_3;
  lVar51 = lVar50 + -2;
  if (SCARRY8(lVar50,-2) != lVar50 + -2 < 0) {
    lVar51 = lVar50 + 3;
  }
  lVar50 = (longlong)(int)lVar51 + 1;
  fVar10 = *param_6;
  fVar11 = param_6[1];
  fVar12 = param_6[2];
  if (4 < lVar50) {
    lVar50 = 0;
  }
  lVar45 = (longlong)(int)lVar50 + 1;
  if (4 < lVar45) {
    lVar45 = 0;
  }
  lVar47 = (longlong)(int)lVar45 + 1;
  if (4 < lVar47) {
    lVar47 = 0;
  }
  lVar48 = (longlong)(int)lVar47 + 1;
  if (4 < lVar48) {
    lVar48 = 0;
  }
  auVar57 = ZEXT416((uint)fVar10);
  auVar56 = ZEXT416((uint)fVar11);
  auVar55 = ZEXT416((uint)fVar12);
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar54 = param_4 & 0x1f;
      if (uVar54 != 0) {
        if ((param_4 & 3) != 0) goto LAB_14085be1f;
        uVar54 = 0x20 - uVar54 >> 2;
      }
      if ((longlong)(uVar54 + 8) <= (longlong)param_5) {
        lVar42 = param_2 * lVar48 + param_1;
        lVar43 = param_2 * lVar47 + param_1;
        lVar53 = param_2 * lVar51 + param_1;
        lVar49 = param_2 * lVar50 + param_1;
        lVar44 = param_2 * lVar45 + param_1;
        uVar52 = param_5 - (param_5 - uVar54 & 7);
        if (uVar54 != 0) {
          uVar46 = 0;
          do {
            *(float *)(param_4 + uVar46 * 4) =
                 fVar10 * (*(float *)(lVar53 + uVar46 * 4) + *(float *)(lVar42 + uVar46 * 4)) +
                 fVar11 * (*(float *)(lVar49 + uVar46 * 4) + *(float *)(lVar43 + uVar46 * 4)) +
                 fVar12 * *(float *)(lVar44 + uVar46 * 4);
            uVar46 = uVar46 + 1;
          } while (uVar46 < uVar54);
        }
        auVar57 = vshufps_avx(auVar57,auVar57,0);
        auVar56 = vshufps_avx(auVar56,auVar56,0);
        auVar55 = vshufps_avx(auVar55,auVar55,0);
        do {
          auVar13 = *(undefined1 (*) [16])(lVar53 + uVar54 * 4);
          pfVar1 = (float *)(lVar42 + uVar54 * 4);
          auVar14 = *(undefined1 (*) [16])(lVar53 + 0x10 + uVar54 * 4);
          lVar5 = lVar42 + 0x10 + uVar54 * 4;
          auVar15 = *(undefined1 (*) [16])(lVar49 + uVar54 * 4);
          auVar16 = *(undefined1 (*) [16])(lVar49 + 0x10 + uVar54 * 4);
          pfVar2 = (float *)(lVar43 + uVar54 * 4);
          lVar8 = lVar43 + 0x10 + uVar54 * 4;
          pfVar6 = (float *)(lVar44 + uVar54 * 4);
          lVar9 = lVar44 + 0x10 + uVar54 * 4;
          auVar70._0_4_ =
               auVar57._0_4_ * (auVar13._0_4_ + *pfVar1) + auVar56._0_4_ * (auVar15._0_4_ + *pfVar2)
               + auVar55._0_4_ * *pfVar6;
          auVar70._4_4_ =
               auVar57._4_4_ * (auVar13._4_4_ + pfVar1[1]) +
               auVar56._4_4_ * (auVar15._4_4_ + pfVar2[1]) + auVar55._4_4_ * pfVar6[1];
          auVar70._8_4_ =
               auVar57._8_4_ * (auVar13._8_4_ + pfVar1[2]) +
               auVar56._8_4_ * (auVar15._8_4_ + pfVar2[2]) + auVar55._8_4_ * pfVar6[2];
          auVar70._12_4_ =
               auVar57._12_4_ * (auVar13._12_4_ + pfVar1[3]) +
               auVar56._12_4_ * (auVar15._12_4_ + pfVar2[3]) + auVar55._12_4_ * pfVar6[3];
          auVar70._16_4_ =
               auVar57._0_4_ * (auVar14._0_4_ + *(float *)(lVar5 + 0x10)) +
               auVar56._0_4_ * (auVar16._0_4_ + *(float *)(lVar8 + 0x10)) +
               auVar55._0_4_ * *(float *)(lVar9 + 0x10);
          auVar70._20_4_ =
               auVar57._4_4_ * (auVar14._4_4_ + *(float *)(lVar5 + 0x14)) +
               auVar56._4_4_ * (auVar16._4_4_ + *(float *)(lVar8 + 0x14)) +
               auVar55._4_4_ * *(float *)(lVar9 + 0x14);
          auVar70._24_4_ =
               auVar57._8_4_ * (auVar14._8_4_ + *(float *)(lVar5 + 0x18)) +
               auVar56._8_4_ * (auVar16._8_4_ + *(float *)(lVar8 + 0x18)) +
               auVar55._8_4_ * *(float *)(lVar9 + 0x18);
          auVar70._28_4_ =
               *(float *)(lVar5 + 0x1c) + *(float *)(lVar8 + 0x1c) + *(float *)(lVar9 + 0x1c);
          auVar70 = vmovntps_avx(auVar70);
          *(undefined1 (*) [32])(param_4 + uVar54 * 4) = auVar70;
          uVar54 = uVar54 + 8;
        } while (uVar54 < uVar52);
        goto LAB_14085bd62;
      }
    }
LAB_14085be1f:
    uVar52 = 0;
LAB_14085bd62:
    if (param_5 <= uVar52) {
      return;
    }
    do {
      *(float *)(param_4 + uVar52 * 4) =
           fVar10 * (*(float *)(lVar51 * param_2 + param_1 + uVar52 * 4) +
                    *(float *)(lVar48 * param_2 + param_1 + uVar52 * 4)) +
           fVar11 * (*(float *)(lVar50 * param_2 + param_1 + uVar52 * 4) +
                    *(float *)(lVar47 * param_2 + param_1 + uVar52 * 4)) +
           fVar12 * *(float *)(param_1 + param_2 * lVar45 + uVar52 * 4);
      uVar52 = uVar52 + 1;
    } while (uVar52 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x10) {
LAB_14085be0f:
    uVar52 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar54 = param_4 & 0x1f;
    if (uVar54 != 0) {
      if ((param_4 & 3) != 0) goto LAB_14085be0f;
      uVar54 = 0x20 - uVar54 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar54 + 0x10)) goto LAB_14085be0f;
    lVar42 = param_2 * lVar50 + param_1;
    lVar43 = param_2 * lVar47 + param_1;
    lVar53 = param_2 * lVar51 + param_1;
    lVar49 = param_2 * lVar48 + param_1;
    lVar44 = param_2 * lVar45 + param_1;
    uVar52 = param_5 - (param_5 - uVar54 & 0xf);
    if (uVar54 != 0) {
      uVar46 = 0;
      do {
        *(float *)(param_4 + uVar46 * 4) =
             fVar10 * (*(float *)(lVar53 + uVar46 * 4) + *(float *)(lVar49 + uVar46 * 4)) +
             fVar11 * (*(float *)(lVar42 + uVar46 * 4) + *(float *)(lVar43 + uVar46 * 4)) +
             fVar12 * *(float *)(lVar44 + uVar46 * 4);
        uVar46 = uVar46 + 1;
      } while (uVar46 < uVar54);
    }
    auVar57 = vshufps_avx(auVar57,auVar57,0);
    auVar56 = vshufps_avx(auVar56,auVar56,0);
    auVar55 = vshufps_avx(auVar55,auVar55,0);
    do {
      auVar13 = *(undefined1 (*) [16])(lVar53 + uVar54 * 4);
      auVar14 = *(undefined1 (*) [16])(lVar49 + uVar54 * 4);
      auVar15 = *(undefined1 (*) [16])(lVar53 + 0x10 + uVar54 * 4);
      auVar16 = *(undefined1 (*) [16])(lVar49 + 0x10 + uVar54 * 4);
      fVar58 = auVar57._0_4_;
      fVar59 = auVar57._4_4_;
      fVar60 = auVar57._8_4_;
      fVar61 = auVar57._12_4_;
      auVar17 = *(undefined1 (*) [16])(lVar42 + uVar54 * 4);
      auVar18 = *(undefined1 (*) [16])(lVar42 + 0x10 + uVar54 * 4);
      pfVar1 = (float *)(lVar43 + uVar54 * 4);
      fVar21 = pfVar1[1];
      fVar22 = pfVar1[2];
      fVar23 = pfVar1[3];
      lVar5 = lVar43 + 0x10 + uVar54 * 4;
      fVar24 = *(float *)(lVar5 + 0x10);
      fVar25 = *(float *)(lVar5 + 0x14);
      fVar26 = *(float *)(lVar5 + 0x18);
      fVar27 = *(float *)(lVar5 + 0x1c);
      fVar62 = auVar56._0_4_;
      fVar63 = auVar56._4_4_;
      fVar64 = auVar56._8_4_;
      fVar65 = auVar56._12_4_;
      auVar19 = *(undefined1 (*) [16])(lVar44 + uVar54 * 4);
      auVar20 = *(undefined1 (*) [16])(lVar44 + 0x10 + uVar54 * 4);
      fVar66 = auVar55._0_4_;
      fVar67 = auVar55._4_4_;
      fVar68 = auVar55._8_4_;
      fVar69 = auVar55._12_4_;
      pfVar2 = (float *)(param_4 + uVar54 * 4);
      *pfVar2 = fVar58 * (auVar13._0_4_ + auVar14._0_4_) + fVar62 * (auVar17._0_4_ + *pfVar1) +
                fVar66 * auVar19._0_4_;
      pfVar2[1] = fVar59 * (auVar13._4_4_ + auVar14._4_4_) + fVar63 * (auVar17._4_4_ + fVar21) +
                  fVar67 * auVar19._4_4_;
      pfVar2[2] = fVar60 * (auVar13._8_4_ + auVar14._8_4_) + fVar64 * (auVar17._8_4_ + fVar22) +
                  fVar68 * auVar19._8_4_;
      pfVar2[3] = fVar61 * (auVar13._12_4_ + auVar14._12_4_) + fVar65 * (auVar17._12_4_ + fVar23) +
                  fVar69 * auVar19._12_4_;
      pfVar2[4] = fVar58 * (auVar15._0_4_ + auVar16._0_4_) + fVar62 * (auVar18._0_4_ + fVar24) +
                  fVar66 * auVar20._0_4_;
      pfVar2[5] = fVar59 * (auVar15._4_4_ + auVar16._4_4_) + fVar63 * (auVar18._4_4_ + fVar25) +
                  fVar67 * auVar20._4_4_;
      pfVar2[6] = fVar60 * (auVar15._8_4_ + auVar16._8_4_) + fVar64 * (auVar18._8_4_ + fVar26) +
                  fVar68 * auVar20._8_4_;
      pfVar2[7] = fVar27 + 0.0 + 0.0;
      auVar13 = *(undefined1 (*) [16])(lVar53 + 0x20 + uVar54 * 4);
      pfVar1 = (float *)(lVar49 + 0x20 + uVar54 * 4);
      fVar35 = pfVar1[1];
      fVar36 = pfVar1[2];
      fVar37 = pfVar1[3];
      lVar5 = lVar49 + 0x30 + uVar54 * 4;
      fVar38 = *(float *)(lVar5 + 0x10);
      fVar39 = *(float *)(lVar5 + 0x14);
      fVar40 = *(float *)(lVar5 + 0x18);
      fVar41 = *(float *)(lVar5 + 0x1c);
      auVar14 = *(undefined1 (*) [16])(lVar53 + 0x30 + uVar54 * 4);
      auVar15 = *(undefined1 (*) [16])(lVar42 + 0x20 + uVar54 * 4);
      auVar16 = *(undefined1 (*) [16])(lVar42 + 0x30 + uVar54 * 4);
      pfVar2 = (float *)(lVar43 + 0x20 + uVar54 * 4);
      fVar21 = pfVar2[1];
      fVar22 = pfVar2[2];
      fVar23 = pfVar2[3];
      lVar5 = lVar43 + 0x30 + uVar54 * 4;
      fVar24 = *(float *)(lVar5 + 0x10);
      fVar25 = *(float *)(lVar5 + 0x14);
      fVar26 = *(float *)(lVar5 + 0x18);
      fVar27 = *(float *)(lVar5 + 0x1c);
      pfVar6 = (float *)(lVar44 + 0x20 + uVar54 * 4);
      fVar28 = pfVar6[1];
      fVar29 = pfVar6[2];
      fVar30 = pfVar6[3];
      lVar5 = lVar44 + 0x30 + uVar54 * 4;
      fVar31 = *(float *)(lVar5 + 0x10);
      fVar32 = *(float *)(lVar5 + 0x14);
      fVar33 = *(float *)(lVar5 + 0x18);
      fVar34 = *(float *)(lVar5 + 0x1c);
      pfVar7 = (float *)(param_4 + 0x20 + uVar54 * 4);
      *pfVar7 = fVar58 * (auVar13._0_4_ + *pfVar1) + fVar62 * (auVar15._0_4_ + *pfVar2) +
                fVar66 * *pfVar6;
      pfVar7[1] = fVar59 * (auVar13._4_4_ + fVar35) + fVar63 * (auVar15._4_4_ + fVar21) +
                  fVar67 * fVar28;
      pfVar7[2] = fVar60 * (auVar13._8_4_ + fVar36) + fVar64 * (auVar15._8_4_ + fVar22) +
                  fVar68 * fVar29;
      pfVar7[3] = fVar61 * (auVar13._12_4_ + fVar37) + fVar65 * (auVar15._12_4_ + fVar23) +
                  fVar69 * fVar30;
      pfVar7[4] = fVar58 * (auVar14._0_4_ + fVar38) + fVar62 * (auVar16._0_4_ + fVar24) +
                  fVar66 * fVar31;
      pfVar7[5] = fVar59 * (auVar14._4_4_ + fVar39) + fVar63 * (auVar16._4_4_ + fVar25) +
                  fVar67 * fVar32;
      pfVar7[6] = fVar60 * (auVar14._8_4_ + fVar40) + fVar64 * (auVar16._8_4_ + fVar26) +
                  fVar68 * fVar33;
      pfVar7[7] = fVar41 + fVar27 + fVar34;
      uVar54 = uVar54 + 0x10;
    } while (uVar54 < uVar52);
    if (param_5 < uVar52 + 1) {
      return;
    }
    param_5 = param_5 - uVar52;
    if (3 < (longlong)param_5) {
      uVar54 = param_5 & 0xfffffffffffffffc;
      uVar46 = 0;
      do {
        pfVar1 = (float *)(lVar53 + uVar52 * 4 + uVar46 * 4);
        fVar21 = pfVar1[1];
        fVar22 = pfVar1[2];
        fVar23 = pfVar1[3];
        pfVar2 = (float *)(lVar49 + uVar52 * 4 + uVar46 * 4);
        fVar24 = pfVar2[1];
        fVar25 = pfVar2[2];
        fVar26 = pfVar2[3];
        pfVar6 = (float *)(lVar42 + uVar52 * 4 + uVar46 * 4);
        fVar27 = pfVar6[1];
        fVar28 = pfVar6[2];
        fVar29 = pfVar6[3];
        pfVar7 = (float *)(lVar43 + uVar52 * 4 + uVar46 * 4);
        fVar30 = pfVar7[1];
        fVar31 = pfVar7[2];
        fVar32 = pfVar7[3];
        pfVar3 = (float *)(lVar44 + uVar52 * 4 + uVar46 * 4);
        fVar33 = pfVar3[1];
        fVar34 = pfVar3[2];
        fVar35 = pfVar3[3];
        pfVar4 = (float *)(param_4 + uVar52 * 4 + uVar46 * 4);
        *pfVar4 = fVar58 * (*pfVar1 + *pfVar2) + fVar62 * (*pfVar6 + *pfVar7) + fVar66 * *pfVar3;
        pfVar4[1] = fVar59 * (fVar21 + fVar24) + fVar63 * (fVar27 + fVar30) + fVar67 * fVar33;
        pfVar4[2] = fVar60 * (fVar22 + fVar25) + fVar64 * (fVar28 + fVar31) + fVar68 * fVar34;
        pfVar4[3] = fVar61 * (fVar23 + fVar26) + fVar65 * (fVar29 + fVar32) + fVar69 * fVar35;
        uVar46 = uVar46 + 4;
      } while (uVar46 < uVar54);
      goto LAB_14085bb11;
    }
  }
  uVar54 = 0;
LAB_14085bb11:
  if (uVar54 < param_5) {
    do {
      *(float *)(param_4 + uVar52 * 4 + uVar54 * 4) =
           fVar10 * (*(float *)(lVar51 * param_2 + param_1 + uVar52 * 4 + uVar54 * 4) +
                    *(float *)(lVar48 * param_2 + param_1 + uVar52 * 4 + uVar54 * 4)) +
           fVar11 * (*(float *)(lVar50 * param_2 + param_1 + uVar52 * 4 + uVar54 * 4) +
                    *(float *)(lVar47 * param_2 + param_1 + uVar52 * 4 + uVar54 * 4)) +
           fVar12 * *(float *)(param_1 + param_2 * lVar45 + uVar52 * 4 + uVar54 * 4);
      uVar54 = uVar54 + 1;
    } while (uVar54 < param_5);
  }
  return;
}


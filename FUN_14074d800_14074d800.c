
void FUN_14074d800(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
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
  float fVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  undefined1 in_XMM0 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar44 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  
  fVar8 = *param_4;
  auVar48 = ZEXT416((uint)fVar8);
  lVar30 = (longlong)(param_5 >> 1);
  lVar21 = param_1 - lVar30;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 8) {
LAB_14074e4b6:
      uVar26 = 0;
    }
    else {
      uVar24 = param_2 & 0xf;
      if (uVar24 != 0) {
        if ((param_2 & 3) != 0) goto LAB_14074e4b6;
        uVar24 = 0x10 - uVar24 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar24 + 8)) goto LAB_14074e4b6;
      uVar28 = 0;
      uVar26 = param_3 - (param_3 - uVar24 & 7);
      if (uVar24 != 0) {
        do {
          *(float *)(param_2 + uVar28 * 4) =
               (float)((uint)*(byte *)(uVar28 + lVar21) + (uint)*(byte *)(uVar28 + lVar30 + param_1)
                      ) * fVar8;
          uVar28 = uVar28 + 1;
        } while (uVar28 < uVar24);
      }
      in_XMM0._4_4_ = fVar8;
      in_XMM0._0_4_ = fVar8;
      in_XMM0._8_4_ = fVar8;
      in_XMM0._12_4_ = fVar8;
      do {
        auVar45 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar24 + lVar21));
        auVar44 = pmovzxbw(in_XMM2,*(undefined8 *)(uVar24 + lVar30 + param_1));
        auVar40._0_2_ = auVar45._0_2_ + auVar44._0_2_;
        auVar40._2_2_ = auVar45._2_2_ + auVar44._2_2_;
        auVar40._4_2_ = auVar45._4_2_ + auVar44._4_2_;
        auVar40._6_2_ = auVar45._6_2_ + auVar44._6_2_;
        auVar40._8_2_ = auVar45._8_2_ + auVar44._8_2_;
        auVar40._10_2_ = auVar45._10_2_ + auVar44._10_2_;
        auVar40._12_2_ = auVar45._12_2_ + auVar44._12_2_;
        auVar40._14_2_ = auVar45._14_2_ + auVar44._14_2_;
        in_XMM3 = pmovzxwd(in_XMM3,auVar40);
        in_XMM4 = pmovzxwd(auVar40 >> 0x40,auVar40 >> 0x40);
        in_XMM5._0_4_ = (float)in_XMM3._0_4_ * fVar8;
        in_XMM5._4_4_ = (float)in_XMM3._4_4_ * fVar8;
        in_XMM5._8_4_ = (float)in_XMM3._8_4_ * fVar8;
        in_XMM5._12_4_ = (float)in_XMM3._12_4_ * fVar8;
        in_XMM2._0_4_ = (float)in_XMM4._0_4_ * fVar8;
        in_XMM2._4_4_ = (float)in_XMM4._4_4_ * fVar8;
        in_XMM2._8_4_ = (float)in_XMM4._8_4_ * fVar8;
        in_XMM2._12_4_ = (float)in_XMM4._12_4_ * fVar8;
        *(undefined1 (*) [16])(param_2 + uVar24 * 4) = in_XMM5;
        *(undefined1 (*) [16])(param_2 + 0x10 + uVar24 * 4) = in_XMM2;
        uVar24 = uVar24 + 8;
      } while (uVar24 < uVar26);
    }
    if (uVar26 < param_3) {
      do {
        in_XMM0._0_4_ =
             (float)((uint)*(byte *)(uVar26 + lVar21) + (uint)*(byte *)(uVar26 + lVar30 + param_1))
             * fVar8;
        *(float *)(param_2 + uVar26 * 4) = in_XMM0._0_4_;
        uVar26 = uVar26 + 1;
      } while (uVar26 < param_3);
    }
  }
  lVar33 = lVar21;
  if (1 < lVar30) {
    lVar34 = 1;
    lVar27 = 0;
    if (lVar30 - 1U >> 1 != 0) {
      uVar26 = param_2 & 0xf;
      lVar34 = lVar30 + param_1;
      uVar24 = 0;
      lVar29 = lVar21;
      do {
        uVar28 = uVar24;
        fVar8 = param_4[uVar28 * 2 + 1];
        in_XMM5 = ZEXT416((uint)fVar8);
        fVar9 = param_4[uVar28 * 2 + 2];
        in_XMM2 = ZEXT416((uint)fVar9);
        lVar33 = lVar29 + 2;
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 0x10) ||
             (((uVar24 = uVar26, uVar26 != 0 && (uVar24 = 0x10 - uVar26 >> 2, (param_2 & 3) != 0))
              || ((longlong)param_3 < (longlong)(uVar24 + 0x10))))) {
            uVar31 = 0;
            if (param_3 != 0) {
              uVar32 = 0;
              uVar24 = param_3;
              goto LAB_14074de8f;
            }
          }
          else {
            uVar32 = 0;
            uVar31 = param_3 - (param_3 - uVar24 & 0xf);
            lVar25 = lVar29;
            lVar23 = lVar34;
            if (uVar24 != 0) {
              do {
                in_XMM0._0_4_ =
                     (float)((uint)*(byte *)(lVar25 + 2) + (uint)*(byte *)(lVar23 + -2)) * fVar9;
                auVar48._0_4_ =
                     (float)((uint)*(byte *)(lVar25 + 1) + (uint)*(byte *)(lVar23 + -1)) * fVar8 +
                     *(float *)(param_2 + uVar32 * 4) + in_XMM0._0_4_;
                *(float *)(param_2 + uVar32 * 4) = auVar48._0_4_;
                uVar32 = uVar32 + 1;
                lVar25 = lVar25 + 1;
                lVar23 = lVar23 + 1;
              } while (uVar32 < uVar24);
            }
            if (((uVar24 - 1) + lVar34 & 0xf) == 0) {
              lVar25 = uVar24 + lVar27;
              do {
                auVar44 = pmovzxbw(in_XMM0,*(undefined8 *)((uVar24 - 1) + lVar34));
                auVar45 = pmovzxbw(auVar48,*(undefined8 *)(uVar24 + 7 + lVar34));
                lVar23 = param_1 - lVar30;
                auVar48 = pmovzxbw(unaff_XMM7,*(undefined8 *)(lVar25 + 1 + lVar23));
                auVar41._0_2_ = auVar48._0_2_ + auVar44._0_2_;
                auVar41._2_2_ = auVar48._2_2_ + auVar44._2_2_;
                auVar41._4_2_ = auVar48._4_2_ + auVar44._4_2_;
                auVar41._6_2_ = auVar48._6_2_ + auVar44._6_2_;
                auVar41._8_2_ = auVar48._8_2_ + auVar44._8_2_;
                auVar41._10_2_ = auVar48._10_2_ + auVar44._10_2_;
                auVar41._12_2_ = auVar48._12_2_ + auVar44._12_2_;
                auVar41._14_2_ = auVar48._14_2_ + auVar44._14_2_;
                auVar48 = pmovzxbw(auVar44,*(undefined8 *)(lVar25 + 9 + lVar23));
                auVar44._0_2_ = auVar48._0_2_ + auVar45._0_2_;
                auVar44._2_2_ = auVar48._2_2_ + auVar45._2_2_;
                auVar44._4_2_ = auVar48._4_2_ + auVar45._4_2_;
                auVar44._6_2_ = auVar48._6_2_ + auVar45._6_2_;
                auVar44._8_2_ = auVar48._8_2_ + auVar45._8_2_;
                auVar44._10_2_ = auVar48._10_2_ + auVar45._10_2_;
                auVar44._12_2_ = auVar48._12_2_ + auVar45._12_2_;
                auVar44._14_2_ = auVar48._14_2_ + auVar45._14_2_;
                auVar40 = pmovzxwd(auVar45,auVar41);
                auVar52 = pmovzxwd(auVar41 >> 0x40,auVar41 >> 0x40);
                auVar41 = pmovzxwd(auVar40,auVar44);
                auVar51 = pmovzxbw(auVar52,*(undefined8 *)((uVar24 - 2) + lVar34));
                auVar44 = pmovzxwd(auVar44 >> 0x40,auVar44 >> 0x40);
                auVar45 = pmovzxbw(auVar41,*(undefined8 *)(lVar25 + 2 + lVar23));
                auVar48 = pmovzxbw(auVar44,*(undefined8 *)(lVar25 + 10 + lVar23));
                lVar25 = lVar25 + 0x10;
                auVar50._0_2_ = auVar45._0_2_ + auVar51._0_2_;
                auVar50._2_2_ = auVar45._2_2_ + auVar51._2_2_;
                auVar50._4_2_ = auVar45._4_2_ + auVar51._4_2_;
                auVar50._6_2_ = auVar45._6_2_ + auVar51._6_2_;
                auVar50._8_2_ = auVar45._8_2_ + auVar51._8_2_;
                auVar50._10_2_ = auVar45._10_2_ + auVar51._10_2_;
                auVar50._12_2_ = auVar45._12_2_ + auVar51._12_2_;
                auVar50._14_2_ = auVar45._14_2_ + auVar51._14_2_;
                auVar51 = pmovzxbw(auVar51,*(undefined8 *)(uVar24 + 6 + lVar34));
                auVar45._0_2_ = auVar48._0_2_ + auVar51._0_2_;
                auVar45._2_2_ = auVar48._2_2_ + auVar51._2_2_;
                auVar45._4_2_ = auVar48._4_2_ + auVar51._4_2_;
                auVar45._6_2_ = auVar48._6_2_ + auVar51._6_2_;
                auVar45._8_2_ = auVar48._8_2_ + auVar51._8_2_;
                auVar45._10_2_ = auVar48._10_2_ + auVar51._10_2_;
                auVar45._12_2_ = auVar48._12_2_ + auVar51._12_2_;
                auVar45._14_2_ = auVar48._14_2_ + auVar51._14_2_;
                unaff_XMM7 = pmovzxwd(auVar51,auVar50);
                auVar50 = pmovzxwd(auVar50 >> 0x40,auVar50 >> 0x40);
                auVar48 = pmovzxwd(auVar50,auVar45);
                pfVar22 = (float *)(param_2 + uVar24 * 4);
                fVar53 = pfVar22[1];
                fVar54 = pfVar22[2];
                fVar55 = pfVar22[3];
                in_XMM0 = pmovzxwd(auVar45 >> 0x40,auVar45 >> 0x40);
                pfVar7 = (float *)(param_2 + 0x10 + uVar24 * 4);
                fVar56 = *pfVar7;
                fVar10 = pfVar7[1];
                fVar11 = pfVar7[2];
                fVar12 = pfVar7[3];
                pfVar7 = (float *)(param_2 + 0x20 + uVar24 * 4);
                fVar13 = *pfVar7;
                fVar14 = pfVar7[1];
                fVar15 = pfVar7[2];
                fVar16 = pfVar7[3];
                pfVar7 = (float *)(param_2 + 0x30 + uVar24 * 4);
                fVar17 = *pfVar7;
                fVar18 = pfVar7[1];
                fVar19 = pfVar7[2];
                fVar20 = pfVar7[3];
                pfVar7 = (float *)(param_2 + uVar24 * 4);
                *pfVar7 = (float)auVar40._0_4_ * fVar8 + *pfVar22 + (float)unaff_XMM7._0_4_ * fVar9;
                pfVar7[1] = (float)auVar40._4_4_ * fVar8 + fVar53 + (float)unaff_XMM7._4_4_ * fVar9;
                pfVar7[2] = (float)auVar40._8_4_ * fVar8 + fVar54 + (float)unaff_XMM7._8_4_ * fVar9;
                pfVar7[3] = (float)auVar40._12_4_ * fVar8 + fVar55 +
                            (float)unaff_XMM7._12_4_ * fVar9;
                pfVar22 = (float *)(param_2 + 0x10 + uVar24 * 4);
                *pfVar22 = (float)auVar52._0_4_ * fVar8 + fVar56 + (float)auVar50._0_4_ * fVar9;
                pfVar22[1] = (float)auVar52._4_4_ * fVar8 + fVar10 + (float)auVar50._4_4_ * fVar9;
                pfVar22[2] = (float)auVar52._8_4_ * fVar8 + fVar11 + (float)auVar50._8_4_ * fVar9;
                pfVar22[3] = (float)auVar52._12_4_ * fVar8 + fVar12 + (float)auVar50._12_4_ * fVar9;
                pfVar22 = (float *)(param_2 + 0x20 + uVar24 * 4);
                *pfVar22 = (float)auVar41._0_4_ * fVar8 + fVar13 + (float)auVar48._0_4_ * fVar9;
                pfVar22[1] = (float)auVar41._4_4_ * fVar8 + fVar14 + (float)auVar48._4_4_ * fVar9;
                pfVar22[2] = (float)auVar41._8_4_ * fVar8 + fVar15 + (float)auVar48._8_4_ * fVar9;
                pfVar22[3] = (float)auVar41._12_4_ * fVar8 + fVar16 + (float)auVar48._12_4_ * fVar9;
                pfVar22 = (float *)(param_2 + 0x30 + uVar24 * 4);
                *pfVar22 = (float)auVar44._0_4_ * fVar8 + fVar17 + (float)in_XMM0._0_4_ * fVar9;
                pfVar22[1] = (float)auVar44._4_4_ * fVar8 + fVar18 + (float)in_XMM0._4_4_ * fVar9;
                pfVar22[2] = (float)auVar44._8_4_ * fVar8 + fVar19 + (float)in_XMM0._8_4_ * fVar9;
                pfVar22[3] = (float)auVar44._12_4_ * fVar8 + fVar20 + (float)in_XMM0._12_4_ * fVar9;
                uVar24 = uVar24 + 0x10;
              } while (uVar24 < uVar31);
            }
            else {
              lVar25 = uVar24 + lVar27;
              do {
                auVar44 = pmovzxbw(in_XMM0,*(undefined8 *)((uVar24 - 1) + lVar34));
                auVar45 = pmovzxbw(auVar48,*(undefined8 *)(uVar24 + 7 + lVar34));
                lVar23 = param_1 - lVar30;
                auVar48 = pmovzxbw(unaff_XMM7,*(undefined8 *)(lVar25 + 1 + lVar23));
                auVar49._0_2_ = auVar48._0_2_ + auVar44._0_2_;
                auVar49._2_2_ = auVar48._2_2_ + auVar44._2_2_;
                auVar49._4_2_ = auVar48._4_2_ + auVar44._4_2_;
                auVar49._6_2_ = auVar48._6_2_ + auVar44._6_2_;
                auVar49._8_2_ = auVar48._8_2_ + auVar44._8_2_;
                auVar49._10_2_ = auVar48._10_2_ + auVar44._10_2_;
                auVar49._12_2_ = auVar48._12_2_ + auVar44._12_2_;
                auVar49._14_2_ = auVar48._14_2_ + auVar44._14_2_;
                auVar48 = pmovzxbw(auVar44,*(undefined8 *)(lVar25 + 9 + lVar23));
                auVar52._0_2_ = auVar48._0_2_ + auVar45._0_2_;
                auVar52._2_2_ = auVar48._2_2_ + auVar45._2_2_;
                auVar52._4_2_ = auVar48._4_2_ + auVar45._4_2_;
                auVar52._6_2_ = auVar48._6_2_ + auVar45._6_2_;
                auVar52._8_2_ = auVar48._8_2_ + auVar45._8_2_;
                auVar52._10_2_ = auVar48._10_2_ + auVar45._10_2_;
                auVar52._12_2_ = auVar48._12_2_ + auVar45._12_2_;
                auVar52._14_2_ = auVar48._14_2_ + auVar45._14_2_;
                auVar45 = pmovzxwd(auVar45,auVar49);
                auVar50 = pmovzxwd(auVar49 >> 0x40,auVar49 >> 0x40);
                auVar40 = pmovzxwd(auVar45,auVar52);
                auVar51 = pmovzxbw(auVar50,*(undefined8 *)((uVar24 - 2) + lVar34));
                auVar44 = pmovzxwd(auVar52 >> 0x40,auVar52 >> 0x40);
                auVar41 = pmovzxbw(auVar40,*(undefined8 *)(lVar25 + 2 + lVar23));
                auVar48 = pmovzxbw(auVar44,*(undefined8 *)(lVar25 + 10 + lVar23));
                lVar25 = lVar25 + 0x10;
                auVar42._0_2_ = auVar41._0_2_ + auVar51._0_2_;
                auVar42._2_2_ = auVar41._2_2_ + auVar51._2_2_;
                auVar42._4_2_ = auVar41._4_2_ + auVar51._4_2_;
                auVar42._6_2_ = auVar41._6_2_ + auVar51._6_2_;
                auVar42._8_2_ = auVar41._8_2_ + auVar51._8_2_;
                auVar42._10_2_ = auVar41._10_2_ + auVar51._10_2_;
                auVar42._12_2_ = auVar41._12_2_ + auVar51._12_2_;
                auVar42._14_2_ = auVar41._14_2_ + auVar51._14_2_;
                auVar41 = pmovzxbw(auVar51,*(undefined8 *)(uVar24 + 6 + lVar34));
                auVar51._0_2_ = auVar48._0_2_ + auVar41._0_2_;
                auVar51._2_2_ = auVar48._2_2_ + auVar41._2_2_;
                auVar51._4_2_ = auVar48._4_2_ + auVar41._4_2_;
                auVar51._6_2_ = auVar48._6_2_ + auVar41._6_2_;
                auVar51._8_2_ = auVar48._8_2_ + auVar41._8_2_;
                auVar51._10_2_ = auVar48._10_2_ + auVar41._10_2_;
                auVar51._12_2_ = auVar48._12_2_ + auVar41._12_2_;
                auVar51._14_2_ = auVar48._14_2_ + auVar41._14_2_;
                unaff_XMM7 = pmovzxwd(auVar41,auVar42);
                auVar41 = pmovzxwd(auVar42 >> 0x40,auVar42 >> 0x40);
                auVar48 = pmovzxwd(auVar41,auVar51);
                pfVar22 = (float *)(param_2 + uVar24 * 4);
                fVar53 = pfVar22[1];
                fVar54 = pfVar22[2];
                fVar55 = pfVar22[3];
                in_XMM0 = pmovzxwd(auVar51 >> 0x40,auVar51 >> 0x40);
                pfVar7 = (float *)(param_2 + 0x10 + uVar24 * 4);
                fVar56 = *pfVar7;
                fVar10 = pfVar7[1];
                fVar11 = pfVar7[2];
                fVar12 = pfVar7[3];
                pfVar7 = (float *)(param_2 + 0x20 + uVar24 * 4);
                fVar13 = *pfVar7;
                fVar14 = pfVar7[1];
                fVar15 = pfVar7[2];
                fVar16 = pfVar7[3];
                pfVar7 = (float *)(param_2 + 0x30 + uVar24 * 4);
                fVar17 = *pfVar7;
                fVar18 = pfVar7[1];
                fVar19 = pfVar7[2];
                fVar20 = pfVar7[3];
                pfVar7 = (float *)(param_2 + uVar24 * 4);
                *pfVar7 = (float)auVar45._0_4_ * fVar8 + *pfVar22 + (float)unaff_XMM7._0_4_ * fVar9;
                pfVar7[1] = (float)auVar45._4_4_ * fVar8 + fVar53 + (float)unaff_XMM7._4_4_ * fVar9;
                pfVar7[2] = (float)auVar45._8_4_ * fVar8 + fVar54 + (float)unaff_XMM7._8_4_ * fVar9;
                pfVar7[3] = (float)auVar45._12_4_ * fVar8 + fVar55 +
                            (float)unaff_XMM7._12_4_ * fVar9;
                pfVar22 = (float *)(param_2 + 0x10 + uVar24 * 4);
                *pfVar22 = (float)auVar50._0_4_ * fVar8 + fVar56 + (float)auVar41._0_4_ * fVar9;
                pfVar22[1] = (float)auVar50._4_4_ * fVar8 + fVar10 + (float)auVar41._4_4_ * fVar9;
                pfVar22[2] = (float)auVar50._8_4_ * fVar8 + fVar11 + (float)auVar41._8_4_ * fVar9;
                pfVar22[3] = (float)auVar50._12_4_ * fVar8 + fVar12 + (float)auVar41._12_4_ * fVar9;
                pfVar22 = (float *)(param_2 + 0x20 + uVar24 * 4);
                *pfVar22 = (float)auVar40._0_4_ * fVar8 + fVar13 + (float)auVar48._0_4_ * fVar9;
                pfVar22[1] = (float)auVar40._4_4_ * fVar8 + fVar14 + (float)auVar48._4_4_ * fVar9;
                pfVar22[2] = (float)auVar40._8_4_ * fVar8 + fVar15 + (float)auVar48._8_4_ * fVar9;
                pfVar22[3] = (float)auVar40._12_4_ * fVar8 + fVar16 + (float)auVar48._12_4_ * fVar9;
                pfVar22 = (float *)(param_2 + 0x30 + uVar24 * 4);
                *pfVar22 = (float)auVar44._0_4_ * fVar8 + fVar17 + (float)in_XMM0._0_4_ * fVar9;
                pfVar22[1] = (float)auVar44._4_4_ * fVar8 + fVar18 + (float)in_XMM0._4_4_ * fVar9;
                pfVar22[2] = (float)auVar44._8_4_ * fVar8 + fVar19 + (float)in_XMM0._8_4_ * fVar9;
                pfVar22[3] = (float)auVar44._12_4_ * fVar8 + fVar20 + (float)in_XMM0._12_4_ * fVar9;
                uVar24 = uVar24 + 0x10;
              } while (uVar24 < uVar31);
            }
            in_XMM4._4_4_ = fVar8;
            in_XMM4._0_4_ = fVar8;
            in_XMM3._4_4_ = fVar9;
            in_XMM3._0_4_ = fVar9;
            in_XMM4._8_4_ = fVar8;
            in_XMM3._8_4_ = fVar9;
            in_XMM4._12_4_ = fVar8;
            in_XMM3._12_4_ = fVar9;
            if (uVar31 + 1 <= param_3) {
              uVar24 = param_3 - uVar31;
              if ((longlong)uVar24 < 4) {
                uVar32 = 0;
              }
              else {
                uVar35 = 0;
                lVar25 = uVar31 + lVar29;
                uVar32 = uVar24 & 0xfffffffffffffffc;
                lVar23 = uVar31 + lVar34;
                pfVar22 = (float *)(param_2 + uVar31 * 4);
                do {
                  uVar35 = uVar35 + 4;
                  auVar48 = pmovzxbw(ZEXT416(*(uint *)(lVar25 + 1)),ZEXT416(*(uint *)(lVar25 + 1)));
                  auVar44 = pmovzxbw(ZEXT416(*(uint *)(lVar23 + -1)),ZEXT416(*(uint *)(lVar23 + -1))
                                    );
                  auVar43._0_2_ = auVar48._0_2_ + auVar44._0_2_;
                  auVar43._2_2_ = auVar48._2_2_ + auVar44._2_2_;
                  auVar43._4_2_ = auVar48._4_2_ + auVar44._4_2_;
                  auVar43._6_2_ = auVar48._6_2_ + auVar44._6_2_;
                  auVar43._8_2_ = auVar48._8_2_ + auVar44._8_2_;
                  auVar43._10_2_ = auVar48._10_2_ + auVar44._10_2_;
                  auVar43._12_2_ = auVar48._12_2_ + auVar44._12_2_;
                  auVar43._14_2_ = auVar48._14_2_ + auVar44._14_2_;
                  auVar48 = pmovzxwd(auVar43,auVar43);
                  fVar53 = (float)auVar48._0_4_ * fVar8 + *pfVar22;
                  fVar54 = (float)auVar48._4_4_ * fVar8 + pfVar22[1];
                  fVar55 = (float)auVar48._8_4_ * fVar8 + pfVar22[2];
                  fVar56 = (float)auVar48._12_4_ * fVar8 + pfVar22[3];
                  *pfVar22 = fVar53;
                  pfVar22[1] = fVar54;
                  pfVar22[2] = fVar55;
                  pfVar22[3] = fVar56;
                  puVar1 = (uint *)(lVar25 + 2);
                  lVar25 = lVar25 + 4;
                  puVar2 = (uint *)(lVar23 + -2);
                  auVar44 = pmovzxbw(ZEXT416(*puVar1),ZEXT416(*puVar1));
                  lVar23 = lVar23 + 4;
                  unaff_XMM7 = pmovzxbw(ZEXT416(*puVar2),ZEXT416(*puVar2));
                  auVar36._0_2_ = auVar44._0_2_ + unaff_XMM7._0_2_;
                  auVar36._2_2_ = auVar44._2_2_ + unaff_XMM7._2_2_;
                  auVar36._4_2_ = auVar44._4_2_ + unaff_XMM7._4_2_;
                  auVar36._6_2_ = auVar44._6_2_ + unaff_XMM7._6_2_;
                  auVar36._8_2_ = auVar44._8_2_ + unaff_XMM7._8_2_;
                  auVar36._10_2_ = auVar44._10_2_ + unaff_XMM7._10_2_;
                  auVar36._12_2_ = auVar44._12_2_ + unaff_XMM7._12_2_;
                  auVar36._14_2_ = auVar44._14_2_ + unaff_XMM7._14_2_;
                  in_XMM0 = pmovzxwd(auVar36,auVar36);
                  *pfVar22 = fVar53 + (float)in_XMM0._0_4_ * fVar9;
                  pfVar22[1] = fVar54 + (float)in_XMM0._4_4_ * fVar9;
                  pfVar22[2] = fVar55 + (float)in_XMM0._8_4_ * fVar9;
                  pfVar22[3] = fVar56 + (float)in_XMM0._12_4_ * fVar9;
                  pfVar22 = pfVar22 + 4;
                } while (uVar35 < uVar32);
              }
LAB_14074de8f:
              if (uVar32 < uVar24) {
                pfVar22 = (float *)(param_2 + uVar31 * 4 + uVar32 * 4);
                do {
                  lVar25 = uVar32 + 1;
                  lVar23 = uVar32 - 1;
                  lVar5 = uVar32 - 2;
                  lVar6 = uVar32 + 2;
                  uVar32 = uVar32 + 1;
                  in_XMM0._0_4_ =
                       (float)((uint)*(byte *)(lVar6 + uVar31 + lVar29) +
                              (uint)*(byte *)(lVar5 + uVar31 + lVar34)) * fVar9;
                  auVar48._0_4_ =
                       (float)((uint)*(byte *)(lVar25 + uVar31 + lVar29) +
                              (uint)*(byte *)(lVar23 + uVar31 + lVar34)) * fVar8 + *pfVar22 +
                       in_XMM0._0_4_;
                  *pfVar22 = auVar48._0_4_;
                  pfVar22 = pfVar22 + 1;
                } while (uVar32 < uVar24);
              }
            }
          }
        }
        uVar24 = uVar28 + 1;
        lVar29 = lVar29 + 2;
        lVar27 = lVar27 + 2;
        lVar34 = lVar34 + -2;
      } while (uVar24 < lVar30 - 1U >> 1);
      lVar34 = uVar28 + 2 + uVar24;
    }
    if (lVar30 != lVar34) {
      fVar8 = param_4[lVar34];
      in_XMM2 = ZEXT416((uint)fVar8);
      lVar33 = lVar34 + lVar21;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 0x10) {
LAB_14074e480:
          uVar26 = 0;
          if (param_3 == 0) goto LAB_14074e26d;
          uVar28 = 0;
          uVar24 = param_3;
        }
        else {
          uVar24 = param_2 & 0xf;
          if (uVar24 != 0) {
            if ((param_2 & 3) != 0) goto LAB_14074e480;
            uVar24 = 0x10 - uVar24 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar24 + 0x10)) goto LAB_14074e480;
          lVar21 = lVar21 + lVar34;
          lVar27 = (lVar30 + param_1) - lVar34;
          uVar28 = 0;
          uVar26 = param_3 - (param_3 - uVar24 & 0xf);
          if (uVar24 != 0) {
            do {
              in_XMM0._0_4_ =
                   (float)((uint)*(byte *)(uVar28 + lVar21) + (uint)*(byte *)(uVar28 + lVar27)) *
                   fVar8 + *(float *)(param_2 + uVar28 * 4);
              *(float *)(param_2 + uVar28 * 4) = in_XMM0._0_4_;
              uVar28 = uVar28 + 1;
            } while (uVar28 < uVar24);
          }
          if ((((lVar30 + param_1) - lVar34) + uVar24 & 0xf) == 0) {
            do {
              auVar45 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar24 + lVar21));
              auVar44 = pmovzxbw(auVar48,*(undefined8 *)(uVar24 + lVar27));
              auVar47._0_2_ = auVar45._0_2_ + auVar44._0_2_;
              auVar47._2_2_ = auVar45._2_2_ + auVar44._2_2_;
              auVar47._4_2_ = auVar45._4_2_ + auVar44._4_2_;
              auVar47._6_2_ = auVar45._6_2_ + auVar44._6_2_;
              auVar47._8_2_ = auVar45._8_2_ + auVar44._8_2_;
              auVar47._10_2_ = auVar45._10_2_ + auVar44._10_2_;
              auVar47._12_2_ = auVar45._12_2_ + auVar44._12_2_;
              auVar47._14_2_ = auVar45._14_2_ + auVar44._14_2_;
              auVar40 = pmovzxbw(in_XMM5,*(undefined8 *)(uVar24 + 8 + lVar27));
              auVar48 = pmovzxbw(in_XMM0,*(undefined8 *)(uVar24 + 8 + lVar21));
              auVar45 = pmovzxwd(auVar44,auVar47);
              auVar38._0_2_ = auVar48._0_2_ + auVar40._0_2_;
              auVar38._2_2_ = auVar48._2_2_ + auVar40._2_2_;
              auVar38._4_2_ = auVar48._4_2_ + auVar40._4_2_;
              auVar38._6_2_ = auVar48._6_2_ + auVar40._6_2_;
              auVar38._8_2_ = auVar48._8_2_ + auVar40._8_2_;
              auVar38._10_2_ = auVar48._10_2_ + auVar40._10_2_;
              auVar38._12_2_ = auVar48._12_2_ + auVar40._12_2_;
              auVar38._14_2_ = auVar48._14_2_ + auVar40._14_2_;
              auVar40 = pmovzxwd(auVar47 >> 0x40,auVar47 >> 0x40);
              auVar41 = pmovzxwd(auVar40,auVar38);
              auVar44 = pmovzxwd(auVar38 >> 0x40,auVar38 >> 0x40);
              pfVar22 = (float *)(param_2 + uVar24 * 4);
              auVar48._0_4_ = (float)auVar45._0_4_ * fVar8 + *pfVar22;
              auVar48._4_4_ = (float)auVar45._4_4_ * fVar8 + pfVar22[1];
              auVar48._8_4_ = (float)auVar45._8_4_ * fVar8 + pfVar22[2];
              auVar48._12_4_ = (float)auVar45._12_4_ * fVar8 + pfVar22[3];
              pfVar22 = (float *)(param_2 + 0x10 + uVar24 * 4);
              in_XMM5._0_4_ = (float)auVar40._0_4_ * fVar8 + *pfVar22;
              in_XMM5._4_4_ = (float)auVar40._4_4_ * fVar8 + pfVar22[1];
              in_XMM5._8_4_ = (float)auVar40._8_4_ * fVar8 + pfVar22[2];
              in_XMM5._12_4_ = (float)auVar40._12_4_ * fVar8 + pfVar22[3];
              pfVar22 = (float *)(param_2 + 0x20 + uVar24 * 4);
              in_XMM4._0_4_ = (float)auVar41._0_4_ * fVar8 + *pfVar22;
              in_XMM4._4_4_ = (float)auVar41._4_4_ * fVar8 + pfVar22[1];
              in_XMM4._8_4_ = (float)auVar41._8_4_ * fVar8 + pfVar22[2];
              in_XMM4._12_4_ = (float)auVar41._12_4_ * fVar8 + pfVar22[3];
              pfVar22 = (float *)(param_2 + 0x30 + uVar24 * 4);
              in_XMM0._0_4_ = (float)auVar44._0_4_ * fVar8 + *pfVar22;
              in_XMM0._4_4_ = (float)auVar44._4_4_ * fVar8 + pfVar22[1];
              in_XMM0._8_4_ = (float)auVar44._8_4_ * fVar8 + pfVar22[2];
              in_XMM0._12_4_ = (float)auVar44._12_4_ * fVar8 + pfVar22[3];
              *(undefined1 (*) [16])(param_2 + uVar24 * 4) = auVar48;
              *(undefined1 (*) [16])(param_2 + 0x10 + uVar24 * 4) = in_XMM5;
              *(undefined1 (*) [16])(param_2 + 0x20 + uVar24 * 4) = in_XMM4;
              *(undefined1 (*) [16])(param_2 + 0x30 + uVar24 * 4) = in_XMM0;
              uVar24 = uVar24 + 0x10;
            } while (uVar24 < uVar26);
          }
          else {
            do {
              auVar40 = lddqu(in_XMM5,*(undefined1 (*) [16])(uVar24 + lVar27));
              auVar45 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar24 + lVar21));
              auVar44 = pmovzxbw(auVar48,auVar40);
              auVar46._0_2_ = auVar45._0_2_ + auVar44._0_2_;
              auVar46._2_2_ = auVar45._2_2_ + auVar44._2_2_;
              auVar46._4_2_ = auVar45._4_2_ + auVar44._4_2_;
              auVar46._6_2_ = auVar45._6_2_ + auVar44._6_2_;
              auVar46._8_2_ = auVar45._8_2_ + auVar44._8_2_;
              auVar46._10_2_ = auVar45._10_2_ + auVar44._10_2_;
              auVar46._12_2_ = auVar45._12_2_ + auVar44._12_2_;
              auVar46._14_2_ = auVar45._14_2_ + auVar44._14_2_;
              auVar48 = pmovzxbw(in_XMM0,*(undefined8 *)(uVar24 + 8 + lVar21));
              auVar40 = pmovzxbw(auVar40 >> 0x40,auVar40 >> 0x40);
              auVar45 = pmovzxwd(auVar44,auVar46);
              auVar37._0_2_ = auVar48._0_2_ + auVar40._0_2_;
              auVar37._2_2_ = auVar48._2_2_ + auVar40._2_2_;
              auVar37._4_2_ = auVar48._4_2_ + auVar40._4_2_;
              auVar37._6_2_ = auVar48._6_2_ + auVar40._6_2_;
              auVar37._8_2_ = auVar48._8_2_ + auVar40._8_2_;
              auVar37._10_2_ = auVar48._10_2_ + auVar40._10_2_;
              auVar37._12_2_ = auVar48._12_2_ + auVar40._12_2_;
              auVar37._14_2_ = auVar48._14_2_ + auVar40._14_2_;
              auVar40 = pmovzxwd(auVar46 >> 0x40,auVar46 >> 0x40);
              auVar41 = pmovzxwd(auVar40,auVar37);
              auVar44 = pmovzxwd(auVar37 >> 0x40,auVar37 >> 0x40);
              pfVar22 = (float *)(param_2 + uVar24 * 4);
              auVar48._0_4_ = (float)auVar45._0_4_ * fVar8 + *pfVar22;
              auVar48._4_4_ = (float)auVar45._4_4_ * fVar8 + pfVar22[1];
              auVar48._8_4_ = (float)auVar45._8_4_ * fVar8 + pfVar22[2];
              auVar48._12_4_ = (float)auVar45._12_4_ * fVar8 + pfVar22[3];
              pfVar22 = (float *)(param_2 + 0x10 + uVar24 * 4);
              in_XMM5._0_4_ = (float)auVar40._0_4_ * fVar8 + *pfVar22;
              in_XMM5._4_4_ = (float)auVar40._4_4_ * fVar8 + pfVar22[1];
              in_XMM5._8_4_ = (float)auVar40._8_4_ * fVar8 + pfVar22[2];
              in_XMM5._12_4_ = (float)auVar40._12_4_ * fVar8 + pfVar22[3];
              pfVar22 = (float *)(param_2 + 0x20 + uVar24 * 4);
              in_XMM4._0_4_ = (float)auVar41._0_4_ * fVar8 + *pfVar22;
              in_XMM4._4_4_ = (float)auVar41._4_4_ * fVar8 + pfVar22[1];
              in_XMM4._8_4_ = (float)auVar41._8_4_ * fVar8 + pfVar22[2];
              in_XMM4._12_4_ = (float)auVar41._12_4_ * fVar8 + pfVar22[3];
              pfVar22 = (float *)(param_2 + 0x30 + uVar24 * 4);
              in_XMM0._0_4_ = (float)auVar44._0_4_ * fVar8 + *pfVar22;
              in_XMM0._4_4_ = (float)auVar44._4_4_ * fVar8 + pfVar22[1];
              in_XMM0._8_4_ = (float)auVar44._8_4_ * fVar8 + pfVar22[2];
              in_XMM0._12_4_ = (float)auVar44._12_4_ * fVar8 + pfVar22[3];
              *(undefined1 (*) [16])(param_2 + uVar24 * 4) = auVar48;
              *(undefined1 (*) [16])(param_2 + 0x10 + uVar24 * 4) = in_XMM5;
              *(undefined1 (*) [16])(param_2 + 0x20 + uVar24 * 4) = in_XMM4;
              *(undefined1 (*) [16])(param_2 + 0x30 + uVar24 * 4) = in_XMM0;
              uVar24 = uVar24 + 0x10;
            } while (uVar24 < uVar26);
          }
          in_XMM3._4_4_ = fVar8;
          in_XMM3._0_4_ = fVar8;
          in_XMM3._8_4_ = fVar8;
          in_XMM3._12_4_ = fVar8;
          if (param_3 < uVar26 + 1) goto LAB_14074e26d;
          uVar24 = param_3 - uVar26;
          if ((longlong)uVar24 < 4) {
            uVar28 = 0;
          }
          else {
            pfVar22 = (float *)(param_2 + uVar26 * 4);
            uVar31 = 0;
            uVar28 = uVar24 & 0xfffffffffffffffc;
            do {
              auVar48 = ZEXT416(*(uint *)(uVar31 + (param_1 - (lVar30 - lVar34)) + uVar26));
              auVar45 = ZEXT416(*(uint *)(uVar31 + (lVar30 - lVar34) + param_1 + uVar26));
              auVar44 = pmovzxbw(auVar48,auVar48);
              uVar31 = uVar31 + 4;
              auVar48 = pmovzxbw(auVar45,auVar45);
              auVar39._0_2_ = auVar44._0_2_ + auVar48._0_2_;
              auVar39._2_2_ = auVar44._2_2_ + auVar48._2_2_;
              auVar39._4_2_ = auVar44._4_2_ + auVar48._4_2_;
              auVar39._6_2_ = auVar44._6_2_ + auVar48._6_2_;
              auVar39._8_2_ = auVar44._8_2_ + auVar48._8_2_;
              auVar39._10_2_ = auVar44._10_2_ + auVar48._10_2_;
              auVar39._12_2_ = auVar44._12_2_ + auVar48._12_2_;
              auVar39._14_2_ = auVar44._14_2_ + auVar48._14_2_;
              auVar44 = pmovzxwd(auVar39,auVar39);
              *pfVar22 = (float)auVar44._0_4_ * fVar8 + *pfVar22;
              pfVar22[1] = (float)auVar44._4_4_ * fVar8 + pfVar22[1];
              pfVar22[2] = (float)auVar44._8_4_ * fVar8 + pfVar22[2];
              pfVar22[3] = (float)auVar44._12_4_ * fVar8 + pfVar22[3];
              pfVar22 = pfVar22 + 4;
            } while (uVar31 < uVar28);
          }
        }
        if (uVar28 < uVar24) {
          pfVar22 = (float *)(param_2 + uVar26 * 4 + uVar28 * 4);
          do {
            pbVar3 = (byte *)(uVar28 + (param_1 - (lVar30 - lVar34)) + uVar26);
            pbVar4 = (byte *)(uVar28 + uVar26 + param_1 + (lVar30 - lVar34));
            uVar28 = uVar28 + 1;
            *pfVar22 = (float)((uint)*pbVar3 + (uint)*pbVar4) * fVar8 + *pfVar22;
            pfVar22 = pfVar22 + 1;
          } while (uVar28 < uVar24);
        }
      }
    }
  }
LAB_14074e26d:
  fVar8 = param_4[lVar30];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (0xf < (longlong)param_3) {
    uVar24 = param_2 & 0xf;
    if (uVar24 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14074e475;
      uVar24 = 0x10 - uVar24 >> 2;
    }
    if ((longlong)(uVar24 + 0x10) <= (longlong)param_3) {
      uVar28 = 0;
      uVar26 = param_3 - (param_3 - uVar24 & 0xf);
      if (uVar24 != 0) {
        do {
          auVar48._0_4_ =
               (float)*(byte *)(uVar28 + 1 + lVar33) * fVar8 + *(float *)(param_2 + uVar28 * 4);
          *(float *)(param_2 + uVar28 * 4) = auVar48._0_4_;
          uVar28 = uVar28 + 1;
        } while (uVar28 < uVar24);
      }
      if ((lVar33 + 1 + uVar24 & 0xf) == 0) {
        do {
          auVar44 = *(undefined1 (*) [16])(uVar24 + 1 + lVar33);
          auVar41 = pmovzxbd(in_XMM3,auVar44);
          auVar40 = pmovzxbd(auVar44 >> 0x20,auVar44 >> 0x20);
          auVar45 = pmovzxbd(auVar48,auVar44 >> 0x40);
          auVar44 = pmovzxbd(auVar44 >> 0x60,auVar44 >> 0x60);
          pfVar22 = (float *)(param_2 + uVar24 * 4);
          in_XMM3._0_4_ = (float)auVar41._0_4_ * fVar8 + *pfVar22;
          in_XMM3._4_4_ = (float)auVar41._4_4_ * fVar8 + pfVar22[1];
          in_XMM3._8_4_ = (float)auVar41._8_4_ * fVar8 + pfVar22[2];
          in_XMM3._12_4_ = (float)auVar41._12_4_ * fVar8 + pfVar22[3];
          pfVar22 = (float *)(param_2 + 0x10 + uVar24 * 4);
          fVar9 = pfVar22[1];
          fVar53 = pfVar22[2];
          fVar54 = pfVar22[3];
          pfVar7 = (float *)(param_2 + 0x20 + uVar24 * 4);
          auVar48._0_4_ = (float)auVar45._0_4_ * fVar8 + *pfVar7;
          auVar48._4_4_ = (float)auVar45._4_4_ * fVar8 + pfVar7[1];
          auVar48._8_4_ = (float)auVar45._8_4_ * fVar8 + pfVar7[2];
          auVar48._12_4_ = (float)auVar45._12_4_ * fVar8 + pfVar7[3];
          pfVar7 = (float *)(param_2 + 0x30 + uVar24 * 4);
          fVar55 = *pfVar7;
          fVar56 = pfVar7[1];
          fVar10 = pfVar7[2];
          fVar11 = pfVar7[3];
          *(undefined1 (*) [16])(param_2 + uVar24 * 4) = in_XMM3;
          pfVar7 = (float *)(param_2 + 0x10 + uVar24 * 4);
          *pfVar7 = (float)auVar40._0_4_ * fVar8 + *pfVar22;
          pfVar7[1] = (float)auVar40._4_4_ * fVar8 + fVar9;
          pfVar7[2] = (float)auVar40._8_4_ * fVar8 + fVar53;
          pfVar7[3] = (float)auVar40._12_4_ * fVar8 + fVar54;
          *(undefined1 (*) [16])(param_2 + 0x20 + uVar24 * 4) = auVar48;
          pfVar22 = (float *)(param_2 + 0x30 + uVar24 * 4);
          *pfVar22 = (float)auVar44._0_4_ * fVar8 + fVar55;
          pfVar22[1] = (float)auVar44._4_4_ * fVar8 + fVar56;
          pfVar22[2] = (float)auVar44._8_4_ * fVar8 + fVar10;
          pfVar22[3] = (float)auVar44._12_4_ * fVar8 + fVar11;
          uVar24 = uVar24 + 0x10;
        } while (uVar24 < uVar26);
      }
      else {
        do {
          auVar45 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar24 + 1 + lVar33));
          auVar41 = pmovzxbd(in_XMM3,auVar45);
          auVar40 = pmovzxbd(auVar45 >> 0x20,auVar45 >> 0x20);
          auVar44 = pmovzxbd(auVar48,auVar45 >> 0x40);
          auVar45 = pmovzxbd(auVar45 >> 0x60,auVar45 >> 0x60);
          pfVar22 = (float *)(param_2 + uVar24 * 4);
          in_XMM3._0_4_ = (float)auVar41._0_4_ * fVar8 + *pfVar22;
          in_XMM3._4_4_ = (float)auVar41._4_4_ * fVar8 + pfVar22[1];
          in_XMM3._8_4_ = (float)auVar41._8_4_ * fVar8 + pfVar22[2];
          in_XMM3._12_4_ = (float)auVar41._12_4_ * fVar8 + pfVar22[3];
          pfVar22 = (float *)(param_2 + 0x10 + uVar24 * 4);
          in_XMM2._0_4_ = (float)auVar40._0_4_ * fVar8 + *pfVar22;
          in_XMM2._4_4_ = (float)auVar40._4_4_ * fVar8 + pfVar22[1];
          in_XMM2._8_4_ = (float)auVar40._8_4_ * fVar8 + pfVar22[2];
          in_XMM2._12_4_ = (float)auVar40._12_4_ * fVar8 + pfVar22[3];
          pfVar22 = (float *)(param_2 + 0x20 + uVar24 * 4);
          auVar48._0_4_ = (float)auVar44._0_4_ * fVar8 + *pfVar22;
          auVar48._4_4_ = (float)auVar44._4_4_ * fVar8 + pfVar22[1];
          auVar48._8_4_ = (float)auVar44._8_4_ * fVar8 + pfVar22[2];
          auVar48._12_4_ = (float)auVar44._12_4_ * fVar8 + pfVar22[3];
          pfVar22 = (float *)(param_2 + 0x30 + uVar24 * 4);
          fVar9 = pfVar22[1];
          fVar53 = pfVar22[2];
          fVar54 = pfVar22[3];
          *(undefined1 (*) [16])(param_2 + uVar24 * 4) = in_XMM3;
          *(undefined1 (*) [16])(param_2 + 0x10 + uVar24 * 4) = in_XMM2;
          *(undefined1 (*) [16])(param_2 + 0x20 + uVar24 * 4) = auVar48;
          pfVar7 = (float *)(param_2 + 0x30 + uVar24 * 4);
          *pfVar7 = (float)auVar45._0_4_ * fVar8 + *pfVar22;
          pfVar7[1] = (float)auVar45._4_4_ * fVar8 + fVar9;
          pfVar7[2] = (float)auVar45._8_4_ * fVar8 + fVar53;
          pfVar7[3] = (float)auVar45._12_4_ * fVar8 + fVar54;
          uVar24 = uVar24 + 0x10;
        } while (uVar24 < uVar26);
      }
      goto joined_r0x00014074e438;
    }
  }
LAB_14074e475:
  uVar26 = 0;
joined_r0x00014074e438:
  for (; uVar26 < param_3; uVar26 = uVar26 + 1) {
    *(float *)(param_2 + uVar26 * 4) =
         (float)*(byte *)(uVar26 + 1 + lVar33) * fVar8 + *(float *)(param_2 + uVar26 * 4);
  }
  return;
}


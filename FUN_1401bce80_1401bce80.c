
void FUN_1401bce80(longlong param_1,ulonglong param_2,longlong param_3,float *param_4,int param_5)

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
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined1 in_XMM0 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar46 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  
  fVar8 = *param_4;
  auVar50 = ZEXT416((uint)fVar8);
  lVar31 = (longlong)(param_5 >> 1);
  uVar11 = param_3 * 3;
  lVar10 = lVar31 * 3;
  lVar35 = param_1 + lVar31 * -3;
  if (0 < (longlong)uVar11) {
    if ((longlong)uVar11 < 8) {
LAB_1401bdbd8:
      uVar32 = 0;
    }
    else {
      uVar23 = param_2 & 0xf;
      if (uVar23 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1401bdbd8;
        uVar23 = 0x10 - uVar23 >> 2;
      }
      if ((longlong)uVar11 < (longlong)(uVar23 + 8)) goto LAB_1401bdbd8;
      lVar27 = lVar31 * -3 + param_1;
      uVar34 = 0;
      uVar32 = uVar11 - (uVar11 - uVar23 & 7);
      if (uVar23 != 0) {
        do {
          *(float *)(param_2 + uVar34 * 4) =
               (float)((uint)*(byte *)(uVar34 + lVar27) + (uint)*(byte *)(uVar34 + param_1 + lVar10)
                      ) * fVar8;
          uVar34 = uVar34 + 1;
        } while (uVar34 < uVar23);
      }
      in_XMM0._4_4_ = fVar8;
      in_XMM0._0_4_ = fVar8;
      in_XMM0._8_4_ = fVar8;
      in_XMM0._12_4_ = fVar8;
      do {
        auVar47 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar23 + lVar27));
        auVar46 = pmovzxbw(in_XMM2,*(undefined8 *)(uVar23 + param_1 + lVar10));
        auVar42._0_2_ = auVar47._0_2_ + auVar46._0_2_;
        auVar42._2_2_ = auVar47._2_2_ + auVar46._2_2_;
        auVar42._4_2_ = auVar47._4_2_ + auVar46._4_2_;
        auVar42._6_2_ = auVar47._6_2_ + auVar46._6_2_;
        auVar42._8_2_ = auVar47._8_2_ + auVar46._8_2_;
        auVar42._10_2_ = auVar47._10_2_ + auVar46._10_2_;
        auVar42._12_2_ = auVar47._12_2_ + auVar46._12_2_;
        auVar42._14_2_ = auVar47._14_2_ + auVar46._14_2_;
        in_XMM3 = pmovzxwd(in_XMM3,auVar42);
        in_XMM4 = pmovzxwd(auVar42 >> 0x40,auVar42 >> 0x40);
        in_XMM5._0_4_ = (float)in_XMM3._0_4_ * fVar8;
        in_XMM5._4_4_ = (float)in_XMM3._4_4_ * fVar8;
        in_XMM5._8_4_ = (float)in_XMM3._8_4_ * fVar8;
        in_XMM5._12_4_ = (float)in_XMM3._12_4_ * fVar8;
        in_XMM2._0_4_ = (float)in_XMM4._0_4_ * fVar8;
        in_XMM2._4_4_ = (float)in_XMM4._4_4_ * fVar8;
        in_XMM2._8_4_ = (float)in_XMM4._8_4_ * fVar8;
        in_XMM2._12_4_ = (float)in_XMM4._12_4_ * fVar8;
        *(undefined1 (*) [16])(param_2 + uVar23 * 4) = in_XMM5;
        *(undefined1 (*) [16])(param_2 + 0x10 + uVar23 * 4) = in_XMM2;
        uVar23 = uVar23 + 8;
      } while (uVar23 < uVar32);
    }
    if (uVar32 < uVar11) {
      do {
        in_XMM0._0_4_ =
             (float)((uint)*(byte *)(uVar32 + lVar31 * -3 + param_1) +
                    (uint)*(byte *)(uVar32 + param_1 + lVar10)) * fVar8;
        *(float *)(param_2 + uVar32 * 4) = in_XMM0._0_4_;
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar11);
    }
  }
  lVar27 = lVar35;
  if (1 < lVar31) {
    lVar28 = 1;
    lVar33 = 0;
    if (lVar31 - 1U >> 1 != 0) {
      uVar32 = param_2 & 0xf;
      lVar28 = param_1 + lVar10;
      lVar29 = lVar35;
      uVar23 = 0;
      do {
        uVar34 = uVar23;
        fVar8 = param_4[uVar34 * 2 + 1];
        in_XMM5 = ZEXT416((uint)fVar8);
        fVar9 = param_4[uVar34 * 2 + 2];
        in_XMM2 = ZEXT416((uint)fVar9);
        lVar27 = lVar29 + 6;
        if (0 < (longlong)uVar11) {
          if (((longlong)uVar11 < 0x10) ||
             (((uVar23 = uVar32, uVar32 != 0 && (uVar23 = 0x10 - uVar32 >> 2, (param_2 & 3) != 0))
              || ((longlong)uVar11 < (longlong)(uVar23 + 0x10))))) {
            uVar30 = 0;
            if (uVar11 != 0) {
              uVar36 = 0;
              uVar23 = uVar11;
              goto LAB_1401bd52f;
            }
          }
          else {
            uVar36 = 0;
            uVar30 = uVar11 - (uVar11 - uVar23 & 0xf);
            lVar26 = lVar29;
            lVar24 = lVar28;
            if (uVar23 != 0) {
              do {
                in_XMM0._0_4_ =
                     (float)((uint)*(byte *)(lVar26 + 6) + (uint)*(byte *)(lVar24 + -6)) * fVar9;
                auVar50._0_4_ =
                     (float)((uint)*(byte *)(lVar26 + 3) + (uint)*(byte *)(lVar24 + -3)) * fVar8 +
                     *(float *)(param_2 + uVar36 * 4) + in_XMM0._0_4_;
                *(float *)(param_2 + uVar36 * 4) = auVar50._0_4_;
                uVar36 = uVar36 + 1;
                lVar26 = lVar26 + 1;
                lVar24 = lVar24 + 1;
              } while (uVar36 < uVar23);
            }
            if (((uVar23 - 3) + lVar28 & 0xf) == 0) {
              lVar26 = uVar23 + lVar33;
              do {
                auVar46 = pmovzxbw(in_XMM0,*(undefined8 *)((uVar23 - 3) + lVar28));
                auVar47 = pmovzxbw(auVar50,*(undefined8 *)(uVar23 + 5 + lVar28));
                lVar24 = lVar31 * -3 + param_1;
                auVar50 = pmovzxbw(unaff_XMM7,*(undefined8 *)(lVar26 + 3 + lVar24));
                auVar43._0_2_ = auVar50._0_2_ + auVar46._0_2_;
                auVar43._2_2_ = auVar50._2_2_ + auVar46._2_2_;
                auVar43._4_2_ = auVar50._4_2_ + auVar46._4_2_;
                auVar43._6_2_ = auVar50._6_2_ + auVar46._6_2_;
                auVar43._8_2_ = auVar50._8_2_ + auVar46._8_2_;
                auVar43._10_2_ = auVar50._10_2_ + auVar46._10_2_;
                auVar43._12_2_ = auVar50._12_2_ + auVar46._12_2_;
                auVar43._14_2_ = auVar50._14_2_ + auVar46._14_2_;
                auVar50 = pmovzxbw(auVar46,*(undefined8 *)(lVar26 + 0xb + lVar24));
                auVar46._0_2_ = auVar50._0_2_ + auVar47._0_2_;
                auVar46._2_2_ = auVar50._2_2_ + auVar47._2_2_;
                auVar46._4_2_ = auVar50._4_2_ + auVar47._4_2_;
                auVar46._6_2_ = auVar50._6_2_ + auVar47._6_2_;
                auVar46._8_2_ = auVar50._8_2_ + auVar47._8_2_;
                auVar46._10_2_ = auVar50._10_2_ + auVar47._10_2_;
                auVar46._12_2_ = auVar50._12_2_ + auVar47._12_2_;
                auVar46._14_2_ = auVar50._14_2_ + auVar47._14_2_;
                auVar42 = pmovzxwd(auVar47,auVar43);
                auVar54 = pmovzxwd(auVar43 >> 0x40,auVar43 >> 0x40);
                auVar43 = pmovzxwd(auVar42,auVar46);
                auVar53 = pmovzxbw(auVar54,*(undefined8 *)((uVar23 - 6) + lVar28));
                auVar46 = pmovzxwd(auVar46 >> 0x40,auVar46 >> 0x40);
                auVar47 = pmovzxbw(auVar43,*(undefined8 *)(lVar26 + 6 + lVar24));
                auVar50 = pmovzxbw(auVar46,*(undefined8 *)(lVar26 + 0xe + lVar24));
                lVar26 = lVar26 + 0x10;
                auVar52._0_2_ = auVar47._0_2_ + auVar53._0_2_;
                auVar52._2_2_ = auVar47._2_2_ + auVar53._2_2_;
                auVar52._4_2_ = auVar47._4_2_ + auVar53._4_2_;
                auVar52._6_2_ = auVar47._6_2_ + auVar53._6_2_;
                auVar52._8_2_ = auVar47._8_2_ + auVar53._8_2_;
                auVar52._10_2_ = auVar47._10_2_ + auVar53._10_2_;
                auVar52._12_2_ = auVar47._12_2_ + auVar53._12_2_;
                auVar52._14_2_ = auVar47._14_2_ + auVar53._14_2_;
                auVar53 = pmovzxbw(auVar53,*(undefined8 *)(uVar23 + 2 + lVar28));
                auVar47._0_2_ = auVar50._0_2_ + auVar53._0_2_;
                auVar47._2_2_ = auVar50._2_2_ + auVar53._2_2_;
                auVar47._4_2_ = auVar50._4_2_ + auVar53._4_2_;
                auVar47._6_2_ = auVar50._6_2_ + auVar53._6_2_;
                auVar47._8_2_ = auVar50._8_2_ + auVar53._8_2_;
                auVar47._10_2_ = auVar50._10_2_ + auVar53._10_2_;
                auVar47._12_2_ = auVar50._12_2_ + auVar53._12_2_;
                auVar47._14_2_ = auVar50._14_2_ + auVar53._14_2_;
                unaff_XMM7 = pmovzxwd(auVar53,auVar52);
                auVar52 = pmovzxwd(auVar52 >> 0x40,auVar52 >> 0x40);
                auVar50 = pmovzxwd(auVar52,auVar47);
                pfVar25 = (float *)(param_2 + uVar23 * 4);
                fVar55 = pfVar25[1];
                fVar56 = pfVar25[2];
                fVar57 = pfVar25[3];
                in_XMM0 = pmovzxwd(auVar47 >> 0x40,auVar47 >> 0x40);
                pfVar7 = (float *)(param_2 + 0x10 + uVar23 * 4);
                fVar58 = *pfVar7;
                fVar12 = pfVar7[1];
                fVar13 = pfVar7[2];
                fVar14 = pfVar7[3];
                pfVar7 = (float *)(param_2 + 0x20 + uVar23 * 4);
                fVar15 = *pfVar7;
                fVar16 = pfVar7[1];
                fVar17 = pfVar7[2];
                fVar18 = pfVar7[3];
                pfVar7 = (float *)(param_2 + 0x30 + uVar23 * 4);
                fVar19 = *pfVar7;
                fVar20 = pfVar7[1];
                fVar21 = pfVar7[2];
                fVar22 = pfVar7[3];
                pfVar7 = (float *)(param_2 + uVar23 * 4);
                *pfVar7 = (float)auVar42._0_4_ * fVar8 + *pfVar25 + (float)unaff_XMM7._0_4_ * fVar9;
                pfVar7[1] = (float)auVar42._4_4_ * fVar8 + fVar55 + (float)unaff_XMM7._4_4_ * fVar9;
                pfVar7[2] = (float)auVar42._8_4_ * fVar8 + fVar56 + (float)unaff_XMM7._8_4_ * fVar9;
                pfVar7[3] = (float)auVar42._12_4_ * fVar8 + fVar57 +
                            (float)unaff_XMM7._12_4_ * fVar9;
                pfVar25 = (float *)(param_2 + 0x10 + uVar23 * 4);
                *pfVar25 = (float)auVar54._0_4_ * fVar8 + fVar58 + (float)auVar52._0_4_ * fVar9;
                pfVar25[1] = (float)auVar54._4_4_ * fVar8 + fVar12 + (float)auVar52._4_4_ * fVar9;
                pfVar25[2] = (float)auVar54._8_4_ * fVar8 + fVar13 + (float)auVar52._8_4_ * fVar9;
                pfVar25[3] = (float)auVar54._12_4_ * fVar8 + fVar14 + (float)auVar52._12_4_ * fVar9;
                pfVar25 = (float *)(param_2 + 0x20 + uVar23 * 4);
                *pfVar25 = (float)auVar43._0_4_ * fVar8 + fVar15 + (float)auVar50._0_4_ * fVar9;
                pfVar25[1] = (float)auVar43._4_4_ * fVar8 + fVar16 + (float)auVar50._4_4_ * fVar9;
                pfVar25[2] = (float)auVar43._8_4_ * fVar8 + fVar17 + (float)auVar50._8_4_ * fVar9;
                pfVar25[3] = (float)auVar43._12_4_ * fVar8 + fVar18 + (float)auVar50._12_4_ * fVar9;
                pfVar25 = (float *)(param_2 + 0x30 + uVar23 * 4);
                *pfVar25 = (float)auVar46._0_4_ * fVar8 + fVar19 + (float)in_XMM0._0_4_ * fVar9;
                pfVar25[1] = (float)auVar46._4_4_ * fVar8 + fVar20 + (float)in_XMM0._4_4_ * fVar9;
                pfVar25[2] = (float)auVar46._8_4_ * fVar8 + fVar21 + (float)in_XMM0._8_4_ * fVar9;
                pfVar25[3] = (float)auVar46._12_4_ * fVar8 + fVar22 + (float)in_XMM0._12_4_ * fVar9;
                uVar23 = uVar23 + 0x10;
              } while (uVar23 < uVar30);
            }
            else {
              lVar26 = uVar23 + lVar33;
              do {
                auVar46 = pmovzxbw(in_XMM0,*(undefined8 *)((uVar23 - 3) + lVar28));
                auVar47 = pmovzxbw(auVar50,*(undefined8 *)(uVar23 + 5 + lVar28));
                lVar24 = lVar31 * -3 + param_1;
                auVar50 = pmovzxbw(unaff_XMM7,*(undefined8 *)(lVar26 + 3 + lVar24));
                auVar51._0_2_ = auVar50._0_2_ + auVar46._0_2_;
                auVar51._2_2_ = auVar50._2_2_ + auVar46._2_2_;
                auVar51._4_2_ = auVar50._4_2_ + auVar46._4_2_;
                auVar51._6_2_ = auVar50._6_2_ + auVar46._6_2_;
                auVar51._8_2_ = auVar50._8_2_ + auVar46._8_2_;
                auVar51._10_2_ = auVar50._10_2_ + auVar46._10_2_;
                auVar51._12_2_ = auVar50._12_2_ + auVar46._12_2_;
                auVar51._14_2_ = auVar50._14_2_ + auVar46._14_2_;
                auVar50 = pmovzxbw(auVar46,*(undefined8 *)(lVar26 + 0xb + lVar24));
                auVar54._0_2_ = auVar50._0_2_ + auVar47._0_2_;
                auVar54._2_2_ = auVar50._2_2_ + auVar47._2_2_;
                auVar54._4_2_ = auVar50._4_2_ + auVar47._4_2_;
                auVar54._6_2_ = auVar50._6_2_ + auVar47._6_2_;
                auVar54._8_2_ = auVar50._8_2_ + auVar47._8_2_;
                auVar54._10_2_ = auVar50._10_2_ + auVar47._10_2_;
                auVar54._12_2_ = auVar50._12_2_ + auVar47._12_2_;
                auVar54._14_2_ = auVar50._14_2_ + auVar47._14_2_;
                auVar47 = pmovzxwd(auVar47,auVar51);
                auVar52 = pmovzxwd(auVar51 >> 0x40,auVar51 >> 0x40);
                auVar42 = pmovzxwd(auVar47,auVar54);
                auVar53 = pmovzxbw(auVar52,*(undefined8 *)((uVar23 - 6) + lVar28));
                auVar46 = pmovzxwd(auVar54 >> 0x40,auVar54 >> 0x40);
                auVar43 = pmovzxbw(auVar42,*(undefined8 *)(lVar26 + 6 + lVar24));
                auVar50 = pmovzxbw(auVar46,*(undefined8 *)(lVar26 + 0xe + lVar24));
                lVar26 = lVar26 + 0x10;
                auVar44._0_2_ = auVar43._0_2_ + auVar53._0_2_;
                auVar44._2_2_ = auVar43._2_2_ + auVar53._2_2_;
                auVar44._4_2_ = auVar43._4_2_ + auVar53._4_2_;
                auVar44._6_2_ = auVar43._6_2_ + auVar53._6_2_;
                auVar44._8_2_ = auVar43._8_2_ + auVar53._8_2_;
                auVar44._10_2_ = auVar43._10_2_ + auVar53._10_2_;
                auVar44._12_2_ = auVar43._12_2_ + auVar53._12_2_;
                auVar44._14_2_ = auVar43._14_2_ + auVar53._14_2_;
                auVar43 = pmovzxbw(auVar53,*(undefined8 *)(uVar23 + 2 + lVar28));
                auVar53._0_2_ = auVar50._0_2_ + auVar43._0_2_;
                auVar53._2_2_ = auVar50._2_2_ + auVar43._2_2_;
                auVar53._4_2_ = auVar50._4_2_ + auVar43._4_2_;
                auVar53._6_2_ = auVar50._6_2_ + auVar43._6_2_;
                auVar53._8_2_ = auVar50._8_2_ + auVar43._8_2_;
                auVar53._10_2_ = auVar50._10_2_ + auVar43._10_2_;
                auVar53._12_2_ = auVar50._12_2_ + auVar43._12_2_;
                auVar53._14_2_ = auVar50._14_2_ + auVar43._14_2_;
                unaff_XMM7 = pmovzxwd(auVar43,auVar44);
                auVar43 = pmovzxwd(auVar44 >> 0x40,auVar44 >> 0x40);
                auVar50 = pmovzxwd(auVar43,auVar53);
                pfVar25 = (float *)(param_2 + uVar23 * 4);
                fVar55 = pfVar25[1];
                fVar56 = pfVar25[2];
                fVar57 = pfVar25[3];
                in_XMM0 = pmovzxwd(auVar53 >> 0x40,auVar53 >> 0x40);
                pfVar7 = (float *)(param_2 + 0x10 + uVar23 * 4);
                fVar58 = *pfVar7;
                fVar12 = pfVar7[1];
                fVar13 = pfVar7[2];
                fVar14 = pfVar7[3];
                pfVar7 = (float *)(param_2 + 0x20 + uVar23 * 4);
                fVar15 = *pfVar7;
                fVar16 = pfVar7[1];
                fVar17 = pfVar7[2];
                fVar18 = pfVar7[3];
                pfVar7 = (float *)(param_2 + 0x30 + uVar23 * 4);
                fVar19 = *pfVar7;
                fVar20 = pfVar7[1];
                fVar21 = pfVar7[2];
                fVar22 = pfVar7[3];
                pfVar7 = (float *)(param_2 + uVar23 * 4);
                *pfVar7 = (float)auVar47._0_4_ * fVar8 + *pfVar25 + (float)unaff_XMM7._0_4_ * fVar9;
                pfVar7[1] = (float)auVar47._4_4_ * fVar8 + fVar55 + (float)unaff_XMM7._4_4_ * fVar9;
                pfVar7[2] = (float)auVar47._8_4_ * fVar8 + fVar56 + (float)unaff_XMM7._8_4_ * fVar9;
                pfVar7[3] = (float)auVar47._12_4_ * fVar8 + fVar57 +
                            (float)unaff_XMM7._12_4_ * fVar9;
                pfVar25 = (float *)(param_2 + 0x10 + uVar23 * 4);
                *pfVar25 = (float)auVar52._0_4_ * fVar8 + fVar58 + (float)auVar43._0_4_ * fVar9;
                pfVar25[1] = (float)auVar52._4_4_ * fVar8 + fVar12 + (float)auVar43._4_4_ * fVar9;
                pfVar25[2] = (float)auVar52._8_4_ * fVar8 + fVar13 + (float)auVar43._8_4_ * fVar9;
                pfVar25[3] = (float)auVar52._12_4_ * fVar8 + fVar14 + (float)auVar43._12_4_ * fVar9;
                pfVar25 = (float *)(param_2 + 0x20 + uVar23 * 4);
                *pfVar25 = (float)auVar42._0_4_ * fVar8 + fVar15 + (float)auVar50._0_4_ * fVar9;
                pfVar25[1] = (float)auVar42._4_4_ * fVar8 + fVar16 + (float)auVar50._4_4_ * fVar9;
                pfVar25[2] = (float)auVar42._8_4_ * fVar8 + fVar17 + (float)auVar50._8_4_ * fVar9;
                pfVar25[3] = (float)auVar42._12_4_ * fVar8 + fVar18 + (float)auVar50._12_4_ * fVar9;
                pfVar25 = (float *)(param_2 + 0x30 + uVar23 * 4);
                *pfVar25 = (float)auVar46._0_4_ * fVar8 + fVar19 + (float)in_XMM0._0_4_ * fVar9;
                pfVar25[1] = (float)auVar46._4_4_ * fVar8 + fVar20 + (float)in_XMM0._4_4_ * fVar9;
                pfVar25[2] = (float)auVar46._8_4_ * fVar8 + fVar21 + (float)in_XMM0._8_4_ * fVar9;
                pfVar25[3] = (float)auVar46._12_4_ * fVar8 + fVar22 + (float)in_XMM0._12_4_ * fVar9;
                uVar23 = uVar23 + 0x10;
              } while (uVar23 < uVar30);
            }
            in_XMM4._4_4_ = fVar8;
            in_XMM4._0_4_ = fVar8;
            in_XMM3._4_4_ = fVar9;
            in_XMM3._0_4_ = fVar9;
            in_XMM4._8_4_ = fVar8;
            in_XMM3._8_4_ = fVar9;
            in_XMM4._12_4_ = fVar8;
            in_XMM3._12_4_ = fVar9;
            if (uVar30 + 1 <= uVar11) {
              uVar23 = uVar11 - uVar30;
              if ((longlong)uVar23 < 4) {
                uVar36 = 0;
              }
              else {
                uVar37 = 0;
                lVar26 = uVar30 + lVar29;
                uVar36 = uVar23 & 0xfffffffffffffffc;
                lVar24 = uVar30 + lVar28;
                pfVar25 = (float *)(param_2 + uVar30 * 4);
                do {
                  uVar37 = uVar37 + 4;
                  auVar50 = pmovzxbw(ZEXT416(*(uint *)(lVar26 + 3)),ZEXT416(*(uint *)(lVar26 + 3)));
                  auVar46 = pmovzxbw(ZEXT416(*(uint *)(lVar24 + -3)),ZEXT416(*(uint *)(lVar24 + -3))
                                    );
                  auVar45._0_2_ = auVar50._0_2_ + auVar46._0_2_;
                  auVar45._2_2_ = auVar50._2_2_ + auVar46._2_2_;
                  auVar45._4_2_ = auVar50._4_2_ + auVar46._4_2_;
                  auVar45._6_2_ = auVar50._6_2_ + auVar46._6_2_;
                  auVar45._8_2_ = auVar50._8_2_ + auVar46._8_2_;
                  auVar45._10_2_ = auVar50._10_2_ + auVar46._10_2_;
                  auVar45._12_2_ = auVar50._12_2_ + auVar46._12_2_;
                  auVar45._14_2_ = auVar50._14_2_ + auVar46._14_2_;
                  auVar50 = pmovzxwd(auVar45,auVar45);
                  fVar55 = (float)auVar50._0_4_ * fVar8 + *pfVar25;
                  fVar56 = (float)auVar50._4_4_ * fVar8 + pfVar25[1];
                  fVar57 = (float)auVar50._8_4_ * fVar8 + pfVar25[2];
                  fVar58 = (float)auVar50._12_4_ * fVar8 + pfVar25[3];
                  *pfVar25 = fVar55;
                  pfVar25[1] = fVar56;
                  pfVar25[2] = fVar57;
                  pfVar25[3] = fVar58;
                  puVar1 = (uint *)(lVar26 + 6);
                  lVar26 = lVar26 + 4;
                  puVar2 = (uint *)(lVar24 + -6);
                  auVar46 = pmovzxbw(ZEXT416(*puVar1),ZEXT416(*puVar1));
                  lVar24 = lVar24 + 4;
                  unaff_XMM7 = pmovzxbw(ZEXT416(*puVar2),ZEXT416(*puVar2));
                  auVar38._0_2_ = auVar46._0_2_ + unaff_XMM7._0_2_;
                  auVar38._2_2_ = auVar46._2_2_ + unaff_XMM7._2_2_;
                  auVar38._4_2_ = auVar46._4_2_ + unaff_XMM7._4_2_;
                  auVar38._6_2_ = auVar46._6_2_ + unaff_XMM7._6_2_;
                  auVar38._8_2_ = auVar46._8_2_ + unaff_XMM7._8_2_;
                  auVar38._10_2_ = auVar46._10_2_ + unaff_XMM7._10_2_;
                  auVar38._12_2_ = auVar46._12_2_ + unaff_XMM7._12_2_;
                  auVar38._14_2_ = auVar46._14_2_ + unaff_XMM7._14_2_;
                  in_XMM0 = pmovzxwd(auVar38,auVar38);
                  *pfVar25 = fVar55 + (float)in_XMM0._0_4_ * fVar9;
                  pfVar25[1] = fVar56 + (float)in_XMM0._4_4_ * fVar9;
                  pfVar25[2] = fVar57 + (float)in_XMM0._8_4_ * fVar9;
                  pfVar25[3] = fVar58 + (float)in_XMM0._12_4_ * fVar9;
                  pfVar25 = pfVar25 + 4;
                } while (uVar37 < uVar36);
              }
LAB_1401bd52f:
              if (uVar36 < uVar23) {
                pfVar25 = (float *)(param_2 + uVar30 * 4 + uVar36 * 4);
                do {
                  lVar26 = uVar36 + 3;
                  lVar24 = uVar36 - 3;
                  lVar5 = uVar36 - 6;
                  lVar6 = uVar36 + 6;
                  uVar36 = uVar36 + 1;
                  in_XMM0._0_4_ =
                       (float)((uint)*(byte *)(lVar6 + uVar30 + lVar29) +
                              (uint)*(byte *)(lVar5 + uVar30 + lVar28)) * fVar9;
                  auVar50._0_4_ =
                       (float)((uint)*(byte *)(lVar26 + uVar30 + lVar29) +
                              (uint)*(byte *)(lVar24 + uVar30 + lVar28)) * fVar8 + *pfVar25 +
                       in_XMM0._0_4_;
                  *pfVar25 = auVar50._0_4_;
                  pfVar25 = pfVar25 + 1;
                } while (uVar36 < uVar23);
              }
            }
          }
        }
        uVar23 = uVar34 + 1;
        lVar29 = lVar29 + 6;
        lVar33 = lVar33 + 6;
        lVar28 = lVar28 + -6;
      } while (uVar23 < lVar31 - 1U >> 1);
      lVar28 = uVar34 + 2 + uVar23;
    }
    if (lVar31 != lVar28) {
      fVar8 = param_4[lVar28];
      in_XMM2 = ZEXT416((uint)fVar8);
      lVar27 = lVar35 + lVar28 * 3;
      if (0 < (longlong)uVar11) {
        if ((longlong)uVar11 < 0x10) {
LAB_1401bdba1:
          uVar32 = 0;
          if (uVar11 == 0) goto LAB_1401bd96d;
          uVar34 = 0;
          uVar23 = uVar11;
        }
        else {
          uVar23 = param_2 & 0xf;
          if (uVar23 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1401bdba1;
            uVar23 = 0x10 - uVar23 >> 2;
          }
          if ((longlong)uVar11 < (longlong)(uVar23 + 0x10)) goto LAB_1401bdba1;
          uVar34 = 0;
          lVar35 = param_1 + lVar10 + lVar28 * -3;
          uVar32 = uVar11 - (uVar11 - uVar23 & 0xf);
          if (uVar23 != 0) {
            do {
              in_XMM0._0_4_ =
                   (float)((uint)*(byte *)(uVar34 + lVar27) + (uint)*(byte *)(uVar34 + lVar35)) *
                   fVar8 + *(float *)(param_2 + uVar34 * 4);
              *(float *)(param_2 + uVar34 * 4) = in_XMM0._0_4_;
              uVar34 = uVar34 + 1;
            } while (uVar34 < uVar23);
          }
          if ((uVar23 + lVar35 & 0xf) == 0) {
            do {
              auVar47 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar23 + lVar27));
              auVar46 = pmovzxbw(auVar50,*(undefined8 *)(uVar23 + lVar35));
              auVar49._0_2_ = auVar47._0_2_ + auVar46._0_2_;
              auVar49._2_2_ = auVar47._2_2_ + auVar46._2_2_;
              auVar49._4_2_ = auVar47._4_2_ + auVar46._4_2_;
              auVar49._6_2_ = auVar47._6_2_ + auVar46._6_2_;
              auVar49._8_2_ = auVar47._8_2_ + auVar46._8_2_;
              auVar49._10_2_ = auVar47._10_2_ + auVar46._10_2_;
              auVar49._12_2_ = auVar47._12_2_ + auVar46._12_2_;
              auVar49._14_2_ = auVar47._14_2_ + auVar46._14_2_;
              auVar42 = pmovzxbw(in_XMM5,*(undefined8 *)(uVar23 + 8 + lVar35));
              auVar50 = pmovzxbw(in_XMM0,*(undefined8 *)(uVar23 + 8 + lVar27));
              auVar47 = pmovzxwd(auVar46,auVar49);
              auVar40._0_2_ = auVar50._0_2_ + auVar42._0_2_;
              auVar40._2_2_ = auVar50._2_2_ + auVar42._2_2_;
              auVar40._4_2_ = auVar50._4_2_ + auVar42._4_2_;
              auVar40._6_2_ = auVar50._6_2_ + auVar42._6_2_;
              auVar40._8_2_ = auVar50._8_2_ + auVar42._8_2_;
              auVar40._10_2_ = auVar50._10_2_ + auVar42._10_2_;
              auVar40._12_2_ = auVar50._12_2_ + auVar42._12_2_;
              auVar40._14_2_ = auVar50._14_2_ + auVar42._14_2_;
              auVar42 = pmovzxwd(auVar49 >> 0x40,auVar49 >> 0x40);
              auVar43 = pmovzxwd(auVar42,auVar40);
              auVar46 = pmovzxwd(auVar40 >> 0x40,auVar40 >> 0x40);
              pfVar25 = (float *)(param_2 + uVar23 * 4);
              auVar50._0_4_ = (float)auVar47._0_4_ * fVar8 + *pfVar25;
              auVar50._4_4_ = (float)auVar47._4_4_ * fVar8 + pfVar25[1];
              auVar50._8_4_ = (float)auVar47._8_4_ * fVar8 + pfVar25[2];
              auVar50._12_4_ = (float)auVar47._12_4_ * fVar8 + pfVar25[3];
              pfVar25 = (float *)(param_2 + 0x10 + uVar23 * 4);
              in_XMM5._0_4_ = (float)auVar42._0_4_ * fVar8 + *pfVar25;
              in_XMM5._4_4_ = (float)auVar42._4_4_ * fVar8 + pfVar25[1];
              in_XMM5._8_4_ = (float)auVar42._8_4_ * fVar8 + pfVar25[2];
              in_XMM5._12_4_ = (float)auVar42._12_4_ * fVar8 + pfVar25[3];
              pfVar25 = (float *)(param_2 + 0x20 + uVar23 * 4);
              in_XMM4._0_4_ = (float)auVar43._0_4_ * fVar8 + *pfVar25;
              in_XMM4._4_4_ = (float)auVar43._4_4_ * fVar8 + pfVar25[1];
              in_XMM4._8_4_ = (float)auVar43._8_4_ * fVar8 + pfVar25[2];
              in_XMM4._12_4_ = (float)auVar43._12_4_ * fVar8 + pfVar25[3];
              pfVar25 = (float *)(param_2 + 0x30 + uVar23 * 4);
              in_XMM0._0_4_ = (float)auVar46._0_4_ * fVar8 + *pfVar25;
              in_XMM0._4_4_ = (float)auVar46._4_4_ * fVar8 + pfVar25[1];
              in_XMM0._8_4_ = (float)auVar46._8_4_ * fVar8 + pfVar25[2];
              in_XMM0._12_4_ = (float)auVar46._12_4_ * fVar8 + pfVar25[3];
              *(undefined1 (*) [16])(param_2 + uVar23 * 4) = auVar50;
              *(undefined1 (*) [16])(param_2 + 0x10 + uVar23 * 4) = in_XMM5;
              *(undefined1 (*) [16])(param_2 + 0x20 + uVar23 * 4) = in_XMM4;
              *(undefined1 (*) [16])(param_2 + 0x30 + uVar23 * 4) = in_XMM0;
              uVar23 = uVar23 + 0x10;
            } while (uVar23 < uVar32);
          }
          else {
            do {
              auVar42 = lddqu(in_XMM5,*(undefined1 (*) [16])(uVar23 + lVar35));
              auVar47 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar23 + lVar27));
              auVar46 = pmovzxbw(auVar50,auVar42);
              auVar48._0_2_ = auVar47._0_2_ + auVar46._0_2_;
              auVar48._2_2_ = auVar47._2_2_ + auVar46._2_2_;
              auVar48._4_2_ = auVar47._4_2_ + auVar46._4_2_;
              auVar48._6_2_ = auVar47._6_2_ + auVar46._6_2_;
              auVar48._8_2_ = auVar47._8_2_ + auVar46._8_2_;
              auVar48._10_2_ = auVar47._10_2_ + auVar46._10_2_;
              auVar48._12_2_ = auVar47._12_2_ + auVar46._12_2_;
              auVar48._14_2_ = auVar47._14_2_ + auVar46._14_2_;
              auVar50 = pmovzxbw(in_XMM0,*(undefined8 *)(uVar23 + 8 + lVar27));
              auVar42 = pmovzxbw(auVar42 >> 0x40,auVar42 >> 0x40);
              auVar47 = pmovzxwd(auVar46,auVar48);
              auVar39._0_2_ = auVar50._0_2_ + auVar42._0_2_;
              auVar39._2_2_ = auVar50._2_2_ + auVar42._2_2_;
              auVar39._4_2_ = auVar50._4_2_ + auVar42._4_2_;
              auVar39._6_2_ = auVar50._6_2_ + auVar42._6_2_;
              auVar39._8_2_ = auVar50._8_2_ + auVar42._8_2_;
              auVar39._10_2_ = auVar50._10_2_ + auVar42._10_2_;
              auVar39._12_2_ = auVar50._12_2_ + auVar42._12_2_;
              auVar39._14_2_ = auVar50._14_2_ + auVar42._14_2_;
              auVar42 = pmovzxwd(auVar48 >> 0x40,auVar48 >> 0x40);
              auVar43 = pmovzxwd(auVar42,auVar39);
              auVar46 = pmovzxwd(auVar39 >> 0x40,auVar39 >> 0x40);
              pfVar25 = (float *)(param_2 + uVar23 * 4);
              auVar50._0_4_ = (float)auVar47._0_4_ * fVar8 + *pfVar25;
              auVar50._4_4_ = (float)auVar47._4_4_ * fVar8 + pfVar25[1];
              auVar50._8_4_ = (float)auVar47._8_4_ * fVar8 + pfVar25[2];
              auVar50._12_4_ = (float)auVar47._12_4_ * fVar8 + pfVar25[3];
              pfVar25 = (float *)(param_2 + 0x10 + uVar23 * 4);
              in_XMM5._0_4_ = (float)auVar42._0_4_ * fVar8 + *pfVar25;
              in_XMM5._4_4_ = (float)auVar42._4_4_ * fVar8 + pfVar25[1];
              in_XMM5._8_4_ = (float)auVar42._8_4_ * fVar8 + pfVar25[2];
              in_XMM5._12_4_ = (float)auVar42._12_4_ * fVar8 + pfVar25[3];
              pfVar25 = (float *)(param_2 + 0x20 + uVar23 * 4);
              in_XMM4._0_4_ = (float)auVar43._0_4_ * fVar8 + *pfVar25;
              in_XMM4._4_4_ = (float)auVar43._4_4_ * fVar8 + pfVar25[1];
              in_XMM4._8_4_ = (float)auVar43._8_4_ * fVar8 + pfVar25[2];
              in_XMM4._12_4_ = (float)auVar43._12_4_ * fVar8 + pfVar25[3];
              pfVar25 = (float *)(param_2 + 0x30 + uVar23 * 4);
              in_XMM0._0_4_ = (float)auVar46._0_4_ * fVar8 + *pfVar25;
              in_XMM0._4_4_ = (float)auVar46._4_4_ * fVar8 + pfVar25[1];
              in_XMM0._8_4_ = (float)auVar46._8_4_ * fVar8 + pfVar25[2];
              in_XMM0._12_4_ = (float)auVar46._12_4_ * fVar8 + pfVar25[3];
              *(undefined1 (*) [16])(param_2 + uVar23 * 4) = auVar50;
              *(undefined1 (*) [16])(param_2 + 0x10 + uVar23 * 4) = in_XMM5;
              *(undefined1 (*) [16])(param_2 + 0x20 + uVar23 * 4) = in_XMM4;
              *(undefined1 (*) [16])(param_2 + 0x30 + uVar23 * 4) = in_XMM0;
              uVar23 = uVar23 + 0x10;
            } while (uVar23 < uVar32);
          }
          in_XMM3._4_4_ = fVar8;
          in_XMM3._0_4_ = fVar8;
          in_XMM3._8_4_ = fVar8;
          in_XMM3._12_4_ = fVar8;
          if (uVar11 < uVar32 + 1) goto LAB_1401bd96d;
          uVar23 = uVar11 - uVar32;
          if ((longlong)uVar23 < 4) {
            uVar34 = 0;
          }
          else {
            pfVar25 = (float *)(param_2 + uVar32 * 4);
            uVar30 = 0;
            uVar34 = uVar23 & 0xfffffffffffffffc;
            do {
              auVar50 = ZEXT416(*(uint *)(uVar30 + (param_1 - (lVar10 + lVar28 * -3)) + uVar32));
              auVar47 = ZEXT416(*(uint *)(uVar30 + lVar28 * -3 + lVar10 + param_1 + uVar32));
              auVar46 = pmovzxbw(auVar50,auVar50);
              uVar30 = uVar30 + 4;
              auVar50 = pmovzxbw(auVar47,auVar47);
              auVar41._0_2_ = auVar46._0_2_ + auVar50._0_2_;
              auVar41._2_2_ = auVar46._2_2_ + auVar50._2_2_;
              auVar41._4_2_ = auVar46._4_2_ + auVar50._4_2_;
              auVar41._6_2_ = auVar46._6_2_ + auVar50._6_2_;
              auVar41._8_2_ = auVar46._8_2_ + auVar50._8_2_;
              auVar41._10_2_ = auVar46._10_2_ + auVar50._10_2_;
              auVar41._12_2_ = auVar46._12_2_ + auVar50._12_2_;
              auVar41._14_2_ = auVar46._14_2_ + auVar50._14_2_;
              auVar46 = pmovzxwd(auVar41,auVar41);
              *pfVar25 = (float)auVar46._0_4_ * fVar8 + *pfVar25;
              pfVar25[1] = (float)auVar46._4_4_ * fVar8 + pfVar25[1];
              pfVar25[2] = (float)auVar46._8_4_ * fVar8 + pfVar25[2];
              pfVar25[3] = (float)auVar46._12_4_ * fVar8 + pfVar25[3];
              pfVar25 = pfVar25 + 4;
            } while (uVar30 < uVar34);
          }
        }
        if (uVar34 < uVar23) {
          pfVar25 = (float *)(param_2 + uVar32 * 4 + uVar34 * 4);
          do {
            pbVar3 = (byte *)(uVar34 + (param_1 - (lVar28 * -3 + lVar10)) + uVar32);
            pbVar4 = (byte *)(uVar34 + param_1 + lVar10 + lVar28 * -3 + uVar32);
            uVar34 = uVar34 + 1;
            *pfVar25 = (float)((uint)*pbVar3 + (uint)*pbVar4) * fVar8 + *pfVar25;
            pfVar25 = pfVar25 + 1;
          } while (uVar34 < uVar23);
        }
      }
    }
  }
LAB_1401bd96d:
  fVar8 = param_4[lVar31];
  if ((longlong)uVar11 < 1) {
    return;
  }
  if (0xf < (longlong)uVar11) {
    uVar23 = param_2 & 0xf;
    if (uVar23 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1401bdb96;
      uVar23 = 0x10 - uVar23 >> 2;
    }
    if ((longlong)(uVar23 + 0x10) <= (longlong)uVar11) {
      uVar34 = 0;
      uVar32 = uVar11 - (uVar11 - uVar23 & 0xf);
      if (uVar23 != 0) {
        do {
          auVar50._0_4_ =
               (float)*(byte *)(uVar34 + 3 + lVar27) * fVar8 + *(float *)(param_2 + uVar34 * 4);
          *(float *)(param_2 + uVar34 * 4) = auVar50._0_4_;
          uVar34 = uVar34 + 1;
        } while (uVar34 < uVar23);
      }
      if ((lVar27 + 3 + uVar23 & 0xf) == 0) {
        do {
          auVar46 = *(undefined1 (*) [16])(uVar23 + 3 + lVar27);
          auVar43 = pmovzxbd(in_XMM3,auVar46);
          auVar42 = pmovzxbd(auVar46 >> 0x20,auVar46 >> 0x20);
          auVar47 = pmovzxbd(auVar50,auVar46 >> 0x40);
          auVar46 = pmovzxbd(auVar46 >> 0x60,auVar46 >> 0x60);
          pfVar25 = (float *)(param_2 + uVar23 * 4);
          in_XMM3._0_4_ = (float)auVar43._0_4_ * fVar8 + *pfVar25;
          in_XMM3._4_4_ = (float)auVar43._4_4_ * fVar8 + pfVar25[1];
          in_XMM3._8_4_ = (float)auVar43._8_4_ * fVar8 + pfVar25[2];
          in_XMM3._12_4_ = (float)auVar43._12_4_ * fVar8 + pfVar25[3];
          pfVar25 = (float *)(param_2 + 0x10 + uVar23 * 4);
          fVar9 = pfVar25[1];
          fVar55 = pfVar25[2];
          fVar56 = pfVar25[3];
          pfVar7 = (float *)(param_2 + 0x20 + uVar23 * 4);
          auVar50._0_4_ = (float)auVar47._0_4_ * fVar8 + *pfVar7;
          auVar50._4_4_ = (float)auVar47._4_4_ * fVar8 + pfVar7[1];
          auVar50._8_4_ = (float)auVar47._8_4_ * fVar8 + pfVar7[2];
          auVar50._12_4_ = (float)auVar47._12_4_ * fVar8 + pfVar7[3];
          pfVar7 = (float *)(param_2 + 0x30 + uVar23 * 4);
          fVar57 = *pfVar7;
          fVar58 = pfVar7[1];
          fVar12 = pfVar7[2];
          fVar13 = pfVar7[3];
          *(undefined1 (*) [16])(param_2 + uVar23 * 4) = in_XMM3;
          pfVar7 = (float *)(param_2 + 0x10 + uVar23 * 4);
          *pfVar7 = (float)auVar42._0_4_ * fVar8 + *pfVar25;
          pfVar7[1] = (float)auVar42._4_4_ * fVar8 + fVar9;
          pfVar7[2] = (float)auVar42._8_4_ * fVar8 + fVar55;
          pfVar7[3] = (float)auVar42._12_4_ * fVar8 + fVar56;
          *(undefined1 (*) [16])(param_2 + 0x20 + uVar23 * 4) = auVar50;
          pfVar25 = (float *)(param_2 + 0x30 + uVar23 * 4);
          *pfVar25 = (float)auVar46._0_4_ * fVar8 + fVar57;
          pfVar25[1] = (float)auVar46._4_4_ * fVar8 + fVar58;
          pfVar25[2] = (float)auVar46._8_4_ * fVar8 + fVar12;
          pfVar25[3] = (float)auVar46._12_4_ * fVar8 + fVar13;
          uVar23 = uVar23 + 0x10;
        } while (uVar23 < uVar32);
      }
      else {
        do {
          auVar47 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar23 + 3 + lVar27));
          auVar43 = pmovzxbd(in_XMM3,auVar47);
          auVar42 = pmovzxbd(auVar47 >> 0x20,auVar47 >> 0x20);
          auVar46 = pmovzxbd(auVar50,auVar47 >> 0x40);
          auVar47 = pmovzxbd(auVar47 >> 0x60,auVar47 >> 0x60);
          pfVar25 = (float *)(param_2 + uVar23 * 4);
          in_XMM3._0_4_ = (float)auVar43._0_4_ * fVar8 + *pfVar25;
          in_XMM3._4_4_ = (float)auVar43._4_4_ * fVar8 + pfVar25[1];
          in_XMM3._8_4_ = (float)auVar43._8_4_ * fVar8 + pfVar25[2];
          in_XMM3._12_4_ = (float)auVar43._12_4_ * fVar8 + pfVar25[3];
          pfVar25 = (float *)(param_2 + 0x10 + uVar23 * 4);
          in_XMM2._0_4_ = (float)auVar42._0_4_ * fVar8 + *pfVar25;
          in_XMM2._4_4_ = (float)auVar42._4_4_ * fVar8 + pfVar25[1];
          in_XMM2._8_4_ = (float)auVar42._8_4_ * fVar8 + pfVar25[2];
          in_XMM2._12_4_ = (float)auVar42._12_4_ * fVar8 + pfVar25[3];
          pfVar25 = (float *)(param_2 + 0x20 + uVar23 * 4);
          auVar50._0_4_ = (float)auVar46._0_4_ * fVar8 + *pfVar25;
          auVar50._4_4_ = (float)auVar46._4_4_ * fVar8 + pfVar25[1];
          auVar50._8_4_ = (float)auVar46._8_4_ * fVar8 + pfVar25[2];
          auVar50._12_4_ = (float)auVar46._12_4_ * fVar8 + pfVar25[3];
          pfVar25 = (float *)(param_2 + 0x30 + uVar23 * 4);
          fVar9 = pfVar25[1];
          fVar55 = pfVar25[2];
          fVar56 = pfVar25[3];
          *(undefined1 (*) [16])(param_2 + uVar23 * 4) = in_XMM3;
          *(undefined1 (*) [16])(param_2 + 0x10 + uVar23 * 4) = in_XMM2;
          *(undefined1 (*) [16])(param_2 + 0x20 + uVar23 * 4) = auVar50;
          pfVar7 = (float *)(param_2 + 0x30 + uVar23 * 4);
          *pfVar7 = (float)auVar47._0_4_ * fVar8 + *pfVar25;
          pfVar7[1] = (float)auVar47._4_4_ * fVar8 + fVar9;
          pfVar7[2] = (float)auVar47._8_4_ * fVar8 + fVar55;
          pfVar7[3] = (float)auVar47._12_4_ * fVar8 + fVar56;
          uVar23 = uVar23 + 0x10;
        } while (uVar23 < uVar32);
      }
      goto joined_r0x0001401bdb3f;
    }
  }
LAB_1401bdb96:
  uVar32 = 0;
joined_r0x0001401bdb3f:
  for (; uVar32 < uVar11; uVar32 = uVar32 + 1) {
    *(float *)(param_2 + uVar32 * 4) =
         (float)*(byte *)(uVar32 + 3 + lVar27) * fVar8 + *(float *)(param_2 + uVar32 * 4);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a76020(longlong param_1,ulonglong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  char *pcVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  undefined1 auVar27 [16];
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined1 uVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  int iVar37;
  ulonglong uVar38;
  longlong lVar39;
  int iVar40;
  longlong lVar41;
  longlong lVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  auVar27 = _DAT_14308f070;
  uVar35 = (ulonglong)(int)((ulonglong)param_4 >> 0x20);
  iVar28 = (int)param_4;
  uVar30 = 0;
  if (0 < (longlong)uVar35) {
    lVar41 = (longlong)iVar28;
    iVar29 = iVar28 + -0x10;
    uVar44 = (longlong)(((ulonglong)(lVar41 >> 3) >> 0x3c) + lVar41) >> 4;
    do {
      iVar37 = 0;
      lVar39 = *(longlong *)(param_1 + uVar30 * 8);
      lVar31 = *(longlong *)(param_1 + 8 + uVar30 * 8);
      lVar36 = *(longlong *)(param_1 + 0x10 + uVar30 * 8);
      lVar34 = *(longlong *)(param_1 + 0x18 + uVar30 * 8);
      lVar33 = *(longlong *)(param_1 + 0x20 + uVar30 * 8);
      if ((param_2 & 0xf) == 0) {
        if (param_6 == 0) {
          uVar38 = 0;
          lVar45 = 0;
          lVar42 = 0;
          if (-1 < iVar29) {
            do {
              psVar1 = (short *)(lVar42 + lVar39);
              uVar38 = uVar38 + 1;
              psVar7 = (short *)(lVar42 + 0x10 + lVar39);
              psVar2 = (short *)(lVar42 + lVar31);
              psVar8 = (short *)(lVar42 + 0x10 + lVar31);
              psVar3 = (short *)(lVar42 + lVar36);
              psVar9 = (short *)(lVar42 + 0x10 + lVar36);
              psVar4 = (short *)(lVar42 + lVar34);
              psVar10 = (short *)(lVar42 + 0x10 + lVar34);
              psVar5 = (short *)(lVar42 + lVar33);
              auVar51._0_2_ = *psVar1 + *psVar2 + *psVar3 + *psVar4 + *psVar5;
              auVar51._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + psVar4[1] + psVar5[1];
              auVar51._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + psVar4[2] + psVar5[2];
              auVar51._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + psVar4[3] + psVar5[3];
              auVar51._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + psVar4[4] + psVar5[4];
              auVar51._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + psVar4[5] + psVar5[5];
              auVar51._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + psVar4[6] + psVar5[6];
              auVar51._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + psVar4[7] + psVar5[7];
              psVar1 = (short *)(lVar42 + 0x10 + lVar33);
              auVar48._0_2_ = *psVar7 + *psVar8 + *psVar9 + *psVar10 + *psVar1;
              auVar48._2_2_ = psVar7[1] + psVar8[1] + psVar9[1] + psVar10[1] + psVar1[1];
              auVar48._4_2_ = psVar7[2] + psVar8[2] + psVar9[2] + psVar10[2] + psVar1[2];
              auVar48._6_2_ = psVar7[3] + psVar8[3] + psVar9[3] + psVar10[3] + psVar1[3];
              auVar48._8_2_ = psVar7[4] + psVar8[4] + psVar9[4] + psVar10[4] + psVar1[4];
              auVar48._10_2_ = psVar7[5] + psVar8[5] + psVar9[5] + psVar10[5] + psVar1[5];
              auVar48._12_2_ = psVar7[6] + psVar8[6] + psVar9[6] + psVar10[6] + psVar1[6];
              auVar48._14_2_ = psVar7[7] + psVar8[7] + psVar9[7] + psVar10[7] + psVar1[7];
              auVar50 = pmulhw(auVar51,auVar27);
              lVar42 = lVar42 + 0x20;
              auVar47 = pmulhw(auVar48,auVar27);
              sVar11 = auVar50._0_2_;
              sVar12 = auVar50._2_2_;
              sVar13 = auVar50._4_2_;
              sVar14 = auVar50._6_2_;
              sVar15 = auVar50._8_2_;
              sVar16 = auVar50._10_2_;
              sVar17 = auVar50._12_2_;
              sVar18 = auVar50._14_2_;
              sVar19 = auVar47._0_2_;
              sVar20 = auVar47._2_2_;
              sVar21 = auVar47._4_2_;
              sVar22 = auVar47._6_2_;
              sVar23 = auVar47._8_2_;
              sVar24 = auVar47._10_2_;
              sVar25 = auVar47._12_2_;
              sVar26 = auVar47._14_2_;
              pcVar6 = (char *)(lVar45 + param_2);
              *pcVar6 = (0 < sVar11) * (sVar11 < 0x100) * auVar50[0] - (0xff < sVar11);
              pcVar6[1] = (0 < sVar12) * (sVar12 < 0x100) * auVar50[2] - (0xff < sVar12);
              pcVar6[2] = (0 < sVar13) * (sVar13 < 0x100) * auVar50[4] - (0xff < sVar13);
              pcVar6[3] = (0 < sVar14) * (sVar14 < 0x100) * auVar50[6] - (0xff < sVar14);
              pcVar6[4] = (0 < sVar15) * (sVar15 < 0x100) * auVar50[8] - (0xff < sVar15);
              pcVar6[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar50[10] - (0xff < sVar16);
              pcVar6[6] = (0 < sVar17) * (sVar17 < 0x100) * auVar50[0xc] - (0xff < sVar17);
              pcVar6[7] = (0 < sVar18) * (sVar18 < 0x100) * auVar50[0xe] - (0xff < sVar18);
              pcVar6[8] = (0 < sVar19) * (sVar19 < 0x100) * auVar47[0] - (0xff < sVar19);
              pcVar6[9] = (0 < sVar20) * (sVar20 < 0x100) * auVar47[2] - (0xff < sVar20);
              pcVar6[10] = (0 < sVar21) * (sVar21 < 0x100) * auVar47[4] - (0xff < sVar21);
              pcVar6[0xb] = (0 < sVar22) * (sVar22 < 0x100) * auVar47[6] - (0xff < sVar22);
              pcVar6[0xc] = (0 < sVar23) * (sVar23 < 0x100) * auVar47[8] - (0xff < sVar23);
              pcVar6[0xd] = (0 < sVar24) * (sVar24 < 0x100) * auVar47[10] - (0xff < sVar24);
              pcVar6[0xe] = (0 < sVar25) * (sVar25 < 0x100) * auVar47[0xc] - (0xff < sVar25);
              pcVar6[0xf] = (0 < sVar26) * (sVar26 < 0x100) * auVar47[0xe] - (0xff < sVar26);
              lVar45 = lVar45 + 0x10;
            } while (uVar38 < uVar44);
            goto LAB_140a76284;
          }
        }
        else {
          uVar38 = 0;
          lVar45 = 0;
          lVar42 = 0;
          iVar37 = 0;
          if (-1 < iVar29) {
            do {
              psVar1 = (short *)(lVar42 + lVar39);
              uVar38 = uVar38 + 1;
              psVar7 = (short *)(lVar42 + 0x10 + lVar39);
              psVar2 = (short *)(lVar42 + lVar31);
              psVar8 = (short *)(lVar42 + 0x10 + lVar31);
              psVar3 = (short *)(lVar42 + lVar36);
              psVar9 = (short *)(lVar42 + 0x10 + lVar36);
              psVar4 = (short *)(lVar42 + lVar34);
              psVar10 = (short *)(lVar42 + 0x10 + lVar34);
              psVar5 = (short *)(lVar42 + lVar33);
              auVar49._0_2_ = *psVar1 + *psVar2 + *psVar3 + *psVar4 + *psVar5;
              auVar49._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + psVar4[1] + psVar5[1];
              auVar49._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + psVar4[2] + psVar5[2];
              auVar49._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + psVar4[3] + psVar5[3];
              auVar49._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + psVar4[4] + psVar5[4];
              auVar49._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + psVar4[5] + psVar5[5];
              auVar49._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + psVar4[6] + psVar5[6];
              auVar49._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + psVar4[7] + psVar5[7];
              psVar1 = (short *)(lVar42 + 0x10 + lVar33);
              auVar46._0_2_ = *psVar7 + *psVar8 + *psVar9 + *psVar10 + *psVar1;
              auVar46._2_2_ = psVar7[1] + psVar8[1] + psVar9[1] + psVar10[1] + psVar1[1];
              auVar46._4_2_ = psVar7[2] + psVar8[2] + psVar9[2] + psVar10[2] + psVar1[2];
              auVar46._6_2_ = psVar7[3] + psVar8[3] + psVar9[3] + psVar10[3] + psVar1[3];
              auVar46._8_2_ = psVar7[4] + psVar8[4] + psVar9[4] + psVar10[4] + psVar1[4];
              auVar46._10_2_ = psVar7[5] + psVar8[5] + psVar9[5] + psVar10[5] + psVar1[5];
              auVar46._12_2_ = psVar7[6] + psVar8[6] + psVar9[6] + psVar10[6] + psVar1[6];
              auVar46._14_2_ = psVar7[7] + psVar8[7] + psVar9[7] + psVar10[7] + psVar1[7];
              auVar50 = pmulhw(auVar49,auVar27);
              lVar42 = lVar42 + 0x20;
              auVar47 = pmulhw(auVar46,auVar27);
              sVar11 = auVar50._0_2_;
              sVar12 = auVar50._2_2_;
              sVar13 = auVar50._4_2_;
              sVar14 = auVar50._6_2_;
              sVar15 = auVar50._8_2_;
              sVar16 = auVar50._10_2_;
              sVar17 = auVar50._12_2_;
              sVar18 = auVar50._14_2_;
              sVar19 = auVar47._0_2_;
              sVar20 = auVar47._2_2_;
              sVar21 = auVar47._4_2_;
              sVar22 = auVar47._6_2_;
              sVar23 = auVar47._8_2_;
              sVar24 = auVar47._10_2_;
              sVar25 = auVar47._12_2_;
              sVar26 = auVar47._14_2_;
              pcVar6 = (char *)(lVar45 + param_2);
              *pcVar6 = (0 < sVar11) * (sVar11 < 0x100) * auVar50[0] - (0xff < sVar11);
              pcVar6[1] = (0 < sVar12) * (sVar12 < 0x100) * auVar50[2] - (0xff < sVar12);
              pcVar6[2] = (0 < sVar13) * (sVar13 < 0x100) * auVar50[4] - (0xff < sVar13);
              pcVar6[3] = (0 < sVar14) * (sVar14 < 0x100) * auVar50[6] - (0xff < sVar14);
              pcVar6[4] = (0 < sVar15) * (sVar15 < 0x100) * auVar50[8] - (0xff < sVar15);
              pcVar6[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar50[10] - (0xff < sVar16);
              pcVar6[6] = (0 < sVar17) * (sVar17 < 0x100) * auVar50[0xc] - (0xff < sVar17);
              pcVar6[7] = (0 < sVar18) * (sVar18 < 0x100) * auVar50[0xe] - (0xff < sVar18);
              pcVar6[8] = (0 < sVar19) * (sVar19 < 0x100) * auVar47[0] - (0xff < sVar19);
              pcVar6[9] = (0 < sVar20) * (sVar20 < 0x100) * auVar47[2] - (0xff < sVar20);
              pcVar6[10] = (0 < sVar21) * (sVar21 < 0x100) * auVar47[4] - (0xff < sVar21);
              pcVar6[0xb] = (0 < sVar22) * (sVar22 < 0x100) * auVar47[6] - (0xff < sVar22);
              pcVar6[0xc] = (0 < sVar23) * (sVar23 < 0x100) * auVar47[8] - (0xff < sVar23);
              pcVar6[0xd] = (0 < sVar24) * (sVar24 < 0x100) * auVar47[10] - (0xff < sVar24);
              pcVar6[0xe] = (0 < sVar25) * (sVar25 < 0x100) * auVar47[0xc] - (0xff < sVar25);
              pcVar6[0xf] = (0 < sVar26) * (sVar26 < 0x100) * auVar47[0xe] - (0xff < sVar26);
              lVar45 = lVar45 + 0x10;
            } while (uVar38 < uVar44);
LAB_140a76284:
            lVar42 = uVar38 * 0x20;
            iVar37 = (int)uVar38 << 4;
            lVar39 = lVar39 + lVar42;
            lVar31 = lVar31 + lVar42;
            lVar36 = lVar36 + lVar42;
            lVar34 = lVar34 + lVar42;
            lVar33 = lVar33 + lVar42;
          }
        }
      }
      else {
        uVar38 = 0;
        lVar45 = 0;
        lVar42 = 0;
        if (-1 < iVar29) {
          do {
            psVar1 = (short *)(lVar42 + lVar39);
            uVar38 = uVar38 + 1;
            psVar7 = (short *)(lVar42 + 0x10 + lVar39);
            psVar2 = (short *)(lVar42 + lVar31);
            psVar8 = (short *)(lVar42 + 0x10 + lVar31);
            psVar3 = (short *)(lVar42 + lVar36);
            psVar9 = (short *)(lVar42 + 0x10 + lVar36);
            psVar4 = (short *)(lVar42 + lVar34);
            psVar10 = (short *)(lVar42 + 0x10 + lVar34);
            psVar5 = (short *)(lVar42 + lVar33);
            auVar50._0_2_ = *psVar1 + *psVar2 + *psVar3 + *psVar4 + *psVar5;
            auVar50._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + psVar4[1] + psVar5[1];
            auVar50._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + psVar4[2] + psVar5[2];
            auVar50._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + psVar4[3] + psVar5[3];
            auVar50._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + psVar4[4] + psVar5[4];
            auVar50._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + psVar4[5] + psVar5[5];
            auVar50._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + psVar4[6] + psVar5[6];
            auVar50._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + psVar4[7] + psVar5[7];
            psVar1 = (short *)(lVar42 + 0x10 + lVar33);
            auVar47._0_2_ = *psVar7 + *psVar8 + *psVar9 + *psVar10 + *psVar1;
            auVar47._2_2_ = psVar7[1] + psVar8[1] + psVar9[1] + psVar10[1] + psVar1[1];
            auVar47._4_2_ = psVar7[2] + psVar8[2] + psVar9[2] + psVar10[2] + psVar1[2];
            auVar47._6_2_ = psVar7[3] + psVar8[3] + psVar9[3] + psVar10[3] + psVar1[3];
            auVar47._8_2_ = psVar7[4] + psVar8[4] + psVar9[4] + psVar10[4] + psVar1[4];
            auVar47._10_2_ = psVar7[5] + psVar8[5] + psVar9[5] + psVar10[5] + psVar1[5];
            auVar47._12_2_ = psVar7[6] + psVar8[6] + psVar9[6] + psVar10[6] + psVar1[6];
            auVar47._14_2_ = psVar7[7] + psVar8[7] + psVar9[7] + psVar10[7] + psVar1[7];
            auVar50 = pmulhw(auVar50,auVar27);
            lVar42 = lVar42 + 0x20;
            auVar47 = pmulhw(auVar47,auVar27);
            sVar11 = auVar50._0_2_;
            sVar12 = auVar50._2_2_;
            sVar13 = auVar50._4_2_;
            sVar14 = auVar50._6_2_;
            sVar15 = auVar50._8_2_;
            sVar16 = auVar50._10_2_;
            sVar17 = auVar50._12_2_;
            sVar18 = auVar50._14_2_;
            sVar19 = auVar47._0_2_;
            sVar20 = auVar47._2_2_;
            sVar21 = auVar47._4_2_;
            sVar22 = auVar47._6_2_;
            sVar23 = auVar47._8_2_;
            sVar24 = auVar47._10_2_;
            sVar25 = auVar47._12_2_;
            sVar26 = auVar47._14_2_;
            pcVar6 = (char *)(lVar45 + param_2);
            *pcVar6 = (0 < sVar11) * (sVar11 < 0x100) * auVar50[0] - (0xff < sVar11);
            pcVar6[1] = (0 < sVar12) * (sVar12 < 0x100) * auVar50[2] - (0xff < sVar12);
            pcVar6[2] = (0 < sVar13) * (sVar13 < 0x100) * auVar50[4] - (0xff < sVar13);
            pcVar6[3] = (0 < sVar14) * (sVar14 < 0x100) * auVar50[6] - (0xff < sVar14);
            pcVar6[4] = (0 < sVar15) * (sVar15 < 0x100) * auVar50[8] - (0xff < sVar15);
            pcVar6[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar50[10] - (0xff < sVar16);
            pcVar6[6] = (0 < sVar17) * (sVar17 < 0x100) * auVar50[0xc] - (0xff < sVar17);
            pcVar6[7] = (0 < sVar18) * (sVar18 < 0x100) * auVar50[0xe] - (0xff < sVar18);
            pcVar6[8] = (0 < sVar19) * (sVar19 < 0x100) * auVar47[0] - (0xff < sVar19);
            pcVar6[9] = (0 < sVar20) * (sVar20 < 0x100) * auVar47[2] - (0xff < sVar20);
            pcVar6[10] = (0 < sVar21) * (sVar21 < 0x100) * auVar47[4] - (0xff < sVar21);
            pcVar6[0xb] = (0 < sVar22) * (sVar22 < 0x100) * auVar47[6] - (0xff < sVar22);
            pcVar6[0xc] = (0 < sVar23) * (sVar23 < 0x100) * auVar47[8] - (0xff < sVar23);
            pcVar6[0xd] = (0 < sVar24) * (sVar24 < 0x100) * auVar47[10] - (0xff < sVar24);
            pcVar6[0xe] = (0 < sVar25) * (sVar25 < 0x100) * auVar47[0xc] - (0xff < sVar25);
            pcVar6[0xf] = (0 < sVar26) * (sVar26 < 0x100) * auVar47[0xe] - (0xff < sVar26);
            lVar45 = lVar45 + 0x10;
          } while (uVar38 < uVar44);
          goto LAB_140a76284;
        }
      }
      if (iVar37 < iVar28) {
        iVar40 = 1;
        uVar38 = 0;
        uVar43 = (uint)(iVar28 - iVar37) >> 2;
        lVar42 = (longlong)iVar37;
        if (uVar43 != 0) {
          lVar45 = param_2 + lVar42;
          do {
            iVar37 = ((int)*(short *)(lVar39 + uVar38 * 8) + (int)*(short *)(lVar31 + uVar38 * 8) +
                      (int)*(short *)(lVar36 + uVar38 * 8) +
                     (int)*(short *)(lVar34 + uVar38 * 8) + (int)*(short *)(lVar33 + uVar38 * 8)) *
                     0xa3d >> 0x10;
            if (iVar37 < 1) {
              iVar37 = 0;
            }
            uVar32 = (undefined1)iVar37;
            if (0xfe < iVar37) {
              uVar32 = 0xff;
            }
            *(undefined1 *)(lVar45 + uVar38 * 4) = uVar32;
            iVar37 = ((int)*(short *)(lVar39 + 2 + uVar38 * 8) +
                      (int)*(short *)(lVar31 + 2 + uVar38 * 8) +
                      (int)*(short *)(lVar36 + 2 + uVar38 * 8) +
                     (int)*(short *)(lVar34 + 2 + uVar38 * 8) +
                     (int)*(short *)(lVar33 + 2 + uVar38 * 8)) * 0xa3d >> 0x10;
            if (iVar37 < 1) {
              iVar37 = 0;
            }
            uVar32 = (undefined1)iVar37;
            if (0xfe < iVar37) {
              uVar32 = 0xff;
            }
            *(undefined1 *)(lVar45 + 1 + uVar38 * 4) = uVar32;
            iVar37 = ((int)*(short *)(lVar39 + 4 + uVar38 * 8) +
                      (int)*(short *)(lVar31 + 4 + uVar38 * 8) +
                      (int)*(short *)(lVar36 + 4 + uVar38 * 8) +
                     (int)*(short *)(lVar34 + 4 + uVar38 * 8) +
                     (int)*(short *)(lVar33 + 4 + uVar38 * 8)) * 0xa3d >> 0x10;
            if (iVar37 < 1) {
              iVar37 = 0;
            }
            uVar32 = (undefined1)iVar37;
            if (0xfe < iVar37) {
              uVar32 = 0xff;
            }
            *(undefined1 *)(lVar45 + 2 + uVar38 * 4) = uVar32;
            iVar37 = ((int)*(short *)(lVar39 + 6 + uVar38 * 8) +
                      (int)*(short *)(lVar31 + 6 + uVar38 * 8) +
                      (int)*(short *)(lVar36 + 6 + uVar38 * 8) +
                     (int)*(short *)(lVar34 + 6 + uVar38 * 8) +
                     (int)*(short *)(lVar33 + 6 + uVar38 * 8)) * 0xa3d >> 0x10;
            if (iVar37 < 1) {
              iVar37 = 0;
            }
            uVar32 = (undefined1)iVar37;
            if (0xfe < iVar37) {
              uVar32 = 0xff;
            }
            *(undefined1 *)(lVar45 + 3 + uVar38 * 4) = uVar32;
            uVar38 = uVar38 + 1;
          } while (uVar38 < uVar43);
          iVar40 = (int)uVar38 * 4 + 1;
        }
        uVar38 = (longlong)iVar40 - 1;
        if (uVar38 < (ulonglong)(lVar41 - lVar42)) {
          do {
            iVar37 = ((int)*(short *)(lVar39 + uVar38 * 2) + (int)*(short *)(lVar31 + uVar38 * 2) +
                      (int)*(short *)(lVar36 + uVar38 * 2) +
                     (int)*(short *)(lVar34 + uVar38 * 2) + (int)*(short *)(lVar33 + uVar38 * 2)) *
                     0xa3d >> 0x10;
            if (iVar37 < 1) {
              iVar37 = 0;
            }
            uVar32 = (undefined1)iVar37;
            if (0xfe < iVar37) {
              uVar32 = 0xff;
            }
            *(undefined1 *)(uVar38 + lVar42 + param_2) = uVar32;
            uVar38 = uVar38 + 1;
          } while (uVar38 < (ulonglong)(lVar41 - lVar42));
        }
      }
      uVar30 = uVar30 + 1;
      param_2 = param_2 + (longlong)param_3;
    } while (uVar30 < uVar35);
  }
  return;
}


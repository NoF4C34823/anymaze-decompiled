
void FUN_140a5aba6(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

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
  int iVar27;
  longlong lVar28;
  undefined1 uVar29;
  int unaff_EBP;
  longlong lVar30;
  longlong lVar31;
  int in_R10D;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  ulonglong in_R11;
  ulonglong uVar35;
  longlong lVar36;
  int unaff_R14D;
  int iVar37;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar40;
  longlong lVar41;
  undefined1 in_XMM0 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  lVar32 = (longlong)in_R10D;
  iVar27 = unaff_EBP + -0x10;
  uVar40 = (longlong)(((ulonglong)(lVar32 >> 3) >> 0x3c) + lVar32) >> 4;
  do {
    iVar34 = 0;
    lVar36 = *(longlong *)(param_1 + param_2 * 8);
    lVar28 = *(longlong *)(param_1 + 8 + param_2 * 8);
    lVar33 = *(longlong *)(param_1 + 0x10 + param_2 * 8);
    lVar31 = *(longlong *)(param_1 + 0x18 + param_2 * 8);
    lVar30 = *(longlong *)(param_1 + 0x20 + param_2 * 8);
    if ((param_4 & 0xf) == 0) {
      if (unaff_R14D == 0) {
        uVar35 = 0;
        lVar41 = 0;
        lVar38 = 0;
        if (-1 < iVar27) {
          do {
            psVar1 = (short *)(lVar38 + lVar36);
            uVar35 = uVar35 + 1;
            psVar7 = (short *)(lVar38 + 0x10 + lVar36);
            psVar2 = (short *)(lVar38 + lVar28);
            psVar8 = (short *)(lVar38 + 0x10 + lVar28);
            psVar3 = (short *)(lVar38 + lVar33);
            psVar9 = (short *)(lVar38 + 0x10 + lVar33);
            psVar4 = (short *)(lVar38 + lVar31);
            psVar10 = (short *)(lVar38 + 0x10 + lVar31);
            psVar5 = (short *)(lVar38 + lVar30);
            auVar47._0_2_ = *psVar1 + *psVar2 + *psVar3 + *psVar4 + *psVar5;
            auVar47._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + psVar4[1] + psVar5[1];
            auVar47._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + psVar4[2] + psVar5[2];
            auVar47._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + psVar4[3] + psVar5[3];
            auVar47._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + psVar4[4] + psVar5[4];
            auVar47._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + psVar4[5] + psVar5[5];
            auVar47._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + psVar4[6] + psVar5[6];
            auVar47._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + psVar4[7] + psVar5[7];
            psVar1 = (short *)(lVar38 + 0x10 + lVar30);
            auVar44._0_2_ = *psVar7 + *psVar8 + *psVar9 + *psVar10 + *psVar1;
            auVar44._2_2_ = psVar7[1] + psVar8[1] + psVar9[1] + psVar10[1] + psVar1[1];
            auVar44._4_2_ = psVar7[2] + psVar8[2] + psVar9[2] + psVar10[2] + psVar1[2];
            auVar44._6_2_ = psVar7[3] + psVar8[3] + psVar9[3] + psVar10[3] + psVar1[3];
            auVar44._8_2_ = psVar7[4] + psVar8[4] + psVar9[4] + psVar10[4] + psVar1[4];
            auVar44._10_2_ = psVar7[5] + psVar8[5] + psVar9[5] + psVar10[5] + psVar1[5];
            auVar44._12_2_ = psVar7[6] + psVar8[6] + psVar9[6] + psVar10[6] + psVar1[6];
            auVar44._14_2_ = psVar7[7] + psVar8[7] + psVar9[7] + psVar10[7] + psVar1[7];
            lVar38 = lVar38 + 0x20;
            auVar46 = pmulhw(auVar47,in_XMM0);
            auVar43 = pmulhw(auVar44,in_XMM0);
            sVar11 = auVar46._0_2_;
            sVar12 = auVar46._2_2_;
            sVar13 = auVar46._4_2_;
            sVar14 = auVar46._6_2_;
            sVar15 = auVar46._8_2_;
            sVar16 = auVar46._10_2_;
            sVar17 = auVar46._12_2_;
            sVar18 = auVar46._14_2_;
            sVar19 = auVar43._0_2_;
            sVar20 = auVar43._2_2_;
            sVar21 = auVar43._4_2_;
            sVar22 = auVar43._6_2_;
            sVar23 = auVar43._8_2_;
            sVar24 = auVar43._10_2_;
            sVar25 = auVar43._12_2_;
            sVar26 = auVar43._14_2_;
            pcVar6 = (char *)(lVar41 + param_4);
            *pcVar6 = (0 < sVar11) * (sVar11 < 0x100) * auVar46[0] - (0xff < sVar11);
            pcVar6[1] = (0 < sVar12) * (sVar12 < 0x100) * auVar46[2] - (0xff < sVar12);
            pcVar6[2] = (0 < sVar13) * (sVar13 < 0x100) * auVar46[4] - (0xff < sVar13);
            pcVar6[3] = (0 < sVar14) * (sVar14 < 0x100) * auVar46[6] - (0xff < sVar14);
            pcVar6[4] = (0 < sVar15) * (sVar15 < 0x100) * auVar46[8] - (0xff < sVar15);
            pcVar6[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar46[10] - (0xff < sVar16);
            pcVar6[6] = (0 < sVar17) * (sVar17 < 0x100) * auVar46[0xc] - (0xff < sVar17);
            pcVar6[7] = (0 < sVar18) * (sVar18 < 0x100) * auVar46[0xe] - (0xff < sVar18);
            pcVar6[8] = (0 < sVar19) * (sVar19 < 0x100) * auVar43[0] - (0xff < sVar19);
            pcVar6[9] = (0 < sVar20) * (sVar20 < 0x100) * auVar43[2] - (0xff < sVar20);
            pcVar6[10] = (0 < sVar21) * (sVar21 < 0x100) * auVar43[4] - (0xff < sVar21);
            pcVar6[0xb] = (0 < sVar22) * (sVar22 < 0x100) * auVar43[6] - (0xff < sVar22);
            pcVar6[0xc] = (0 < sVar23) * (sVar23 < 0x100) * auVar43[8] - (0xff < sVar23);
            pcVar6[0xd] = (0 < sVar24) * (sVar24 < 0x100) * auVar43[10] - (0xff < sVar24);
            pcVar6[0xe] = (0 < sVar25) * (sVar25 < 0x100) * auVar43[0xc] - (0xff < sVar25);
            pcVar6[0xf] = (0 < sVar26) * (sVar26 < 0x100) * auVar43[0xe] - (0xff < sVar26);
            lVar41 = lVar41 + 0x10;
          } while (uVar35 < uVar40);
          goto LAB_140a5adc3;
        }
      }
      else {
        uVar35 = 0;
        lVar41 = 0;
        lVar38 = 0;
        iVar34 = 0;
        if (-1 < iVar27) {
          do {
            psVar1 = (short *)(lVar38 + lVar36);
            uVar35 = uVar35 + 1;
            psVar7 = (short *)(lVar38 + 0x10 + lVar36);
            psVar2 = (short *)(lVar38 + lVar28);
            psVar8 = (short *)(lVar38 + 0x10 + lVar28);
            psVar3 = (short *)(lVar38 + lVar33);
            psVar9 = (short *)(lVar38 + 0x10 + lVar33);
            psVar4 = (short *)(lVar38 + lVar31);
            psVar10 = (short *)(lVar38 + 0x10 + lVar31);
            psVar5 = (short *)(lVar38 + lVar30);
            auVar45._0_2_ = *psVar1 + *psVar2 + *psVar3 + *psVar4 + *psVar5;
            auVar45._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + psVar4[1] + psVar5[1];
            auVar45._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + psVar4[2] + psVar5[2];
            auVar45._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + psVar4[3] + psVar5[3];
            auVar45._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + psVar4[4] + psVar5[4];
            auVar45._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + psVar4[5] + psVar5[5];
            auVar45._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + psVar4[6] + psVar5[6];
            auVar45._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + psVar4[7] + psVar5[7];
            psVar1 = (short *)(lVar38 + 0x10 + lVar30);
            auVar42._0_2_ = *psVar7 + *psVar8 + *psVar9 + *psVar10 + *psVar1;
            auVar42._2_2_ = psVar7[1] + psVar8[1] + psVar9[1] + psVar10[1] + psVar1[1];
            auVar42._4_2_ = psVar7[2] + psVar8[2] + psVar9[2] + psVar10[2] + psVar1[2];
            auVar42._6_2_ = psVar7[3] + psVar8[3] + psVar9[3] + psVar10[3] + psVar1[3];
            auVar42._8_2_ = psVar7[4] + psVar8[4] + psVar9[4] + psVar10[4] + psVar1[4];
            auVar42._10_2_ = psVar7[5] + psVar8[5] + psVar9[5] + psVar10[5] + psVar1[5];
            auVar42._12_2_ = psVar7[6] + psVar8[6] + psVar9[6] + psVar10[6] + psVar1[6];
            auVar42._14_2_ = psVar7[7] + psVar8[7] + psVar9[7] + psVar10[7] + psVar1[7];
            lVar38 = lVar38 + 0x20;
            auVar46 = pmulhw(auVar45,in_XMM0);
            auVar43 = pmulhw(auVar42,in_XMM0);
            sVar11 = auVar46._0_2_;
            sVar12 = auVar46._2_2_;
            sVar13 = auVar46._4_2_;
            sVar14 = auVar46._6_2_;
            sVar15 = auVar46._8_2_;
            sVar16 = auVar46._10_2_;
            sVar17 = auVar46._12_2_;
            sVar18 = auVar46._14_2_;
            sVar19 = auVar43._0_2_;
            sVar20 = auVar43._2_2_;
            sVar21 = auVar43._4_2_;
            sVar22 = auVar43._6_2_;
            sVar23 = auVar43._8_2_;
            sVar24 = auVar43._10_2_;
            sVar25 = auVar43._12_2_;
            sVar26 = auVar43._14_2_;
            pcVar6 = (char *)(lVar41 + param_4);
            *pcVar6 = (0 < sVar11) * (sVar11 < 0x100) * auVar46[0] - (0xff < sVar11);
            pcVar6[1] = (0 < sVar12) * (sVar12 < 0x100) * auVar46[2] - (0xff < sVar12);
            pcVar6[2] = (0 < sVar13) * (sVar13 < 0x100) * auVar46[4] - (0xff < sVar13);
            pcVar6[3] = (0 < sVar14) * (sVar14 < 0x100) * auVar46[6] - (0xff < sVar14);
            pcVar6[4] = (0 < sVar15) * (sVar15 < 0x100) * auVar46[8] - (0xff < sVar15);
            pcVar6[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar46[10] - (0xff < sVar16);
            pcVar6[6] = (0 < sVar17) * (sVar17 < 0x100) * auVar46[0xc] - (0xff < sVar17);
            pcVar6[7] = (0 < sVar18) * (sVar18 < 0x100) * auVar46[0xe] - (0xff < sVar18);
            pcVar6[8] = (0 < sVar19) * (sVar19 < 0x100) * auVar43[0] - (0xff < sVar19);
            pcVar6[9] = (0 < sVar20) * (sVar20 < 0x100) * auVar43[2] - (0xff < sVar20);
            pcVar6[10] = (0 < sVar21) * (sVar21 < 0x100) * auVar43[4] - (0xff < sVar21);
            pcVar6[0xb] = (0 < sVar22) * (sVar22 < 0x100) * auVar43[6] - (0xff < sVar22);
            pcVar6[0xc] = (0 < sVar23) * (sVar23 < 0x100) * auVar43[8] - (0xff < sVar23);
            pcVar6[0xd] = (0 < sVar24) * (sVar24 < 0x100) * auVar43[10] - (0xff < sVar24);
            pcVar6[0xe] = (0 < sVar25) * (sVar25 < 0x100) * auVar43[0xc] - (0xff < sVar25);
            pcVar6[0xf] = (0 < sVar26) * (sVar26 < 0x100) * auVar43[0xe] - (0xff < sVar26);
            lVar41 = lVar41 + 0x10;
          } while (uVar35 < uVar40);
LAB_140a5adc3:
          lVar38 = uVar35 * 0x20;
          iVar34 = (int)uVar35 << 4;
          lVar36 = lVar36 + lVar38;
          lVar28 = lVar28 + lVar38;
          lVar33 = lVar33 + lVar38;
          lVar31 = lVar31 + lVar38;
          lVar30 = lVar30 + lVar38;
        }
      }
    }
    else {
      uVar35 = 0;
      lVar41 = 0;
      lVar38 = 0;
      if (-1 < iVar27) {
        do {
          psVar1 = (short *)(lVar38 + lVar36);
          uVar35 = uVar35 + 1;
          psVar7 = (short *)(lVar38 + 0x10 + lVar36);
          psVar2 = (short *)(lVar38 + lVar28);
          psVar8 = (short *)(lVar38 + 0x10 + lVar28);
          psVar3 = (short *)(lVar38 + lVar33);
          psVar9 = (short *)(lVar38 + 0x10 + lVar33);
          psVar4 = (short *)(lVar38 + lVar31);
          psVar10 = (short *)(lVar38 + 0x10 + lVar31);
          psVar5 = (short *)(lVar38 + lVar30);
          auVar46._0_2_ = *psVar1 + *psVar2 + *psVar3 + *psVar4 + *psVar5;
          auVar46._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + psVar4[1] + psVar5[1];
          auVar46._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + psVar4[2] + psVar5[2];
          auVar46._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + psVar4[3] + psVar5[3];
          auVar46._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + psVar4[4] + psVar5[4];
          auVar46._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + psVar4[5] + psVar5[5];
          auVar46._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + psVar4[6] + psVar5[6];
          auVar46._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + psVar4[7] + psVar5[7];
          psVar1 = (short *)(lVar38 + 0x10 + lVar30);
          auVar43._0_2_ = *psVar7 + *psVar8 + *psVar9 + *psVar10 + *psVar1;
          auVar43._2_2_ = psVar7[1] + psVar8[1] + psVar9[1] + psVar10[1] + psVar1[1];
          auVar43._4_2_ = psVar7[2] + psVar8[2] + psVar9[2] + psVar10[2] + psVar1[2];
          auVar43._6_2_ = psVar7[3] + psVar8[3] + psVar9[3] + psVar10[3] + psVar1[3];
          auVar43._8_2_ = psVar7[4] + psVar8[4] + psVar9[4] + psVar10[4] + psVar1[4];
          auVar43._10_2_ = psVar7[5] + psVar8[5] + psVar9[5] + psVar10[5] + psVar1[5];
          auVar43._12_2_ = psVar7[6] + psVar8[6] + psVar9[6] + psVar10[6] + psVar1[6];
          auVar43._14_2_ = psVar7[7] + psVar8[7] + psVar9[7] + psVar10[7] + psVar1[7];
          lVar38 = lVar38 + 0x20;
          auVar46 = pmulhw(auVar46,in_XMM0);
          auVar43 = pmulhw(auVar43,in_XMM0);
          sVar11 = auVar46._0_2_;
          sVar12 = auVar46._2_2_;
          sVar13 = auVar46._4_2_;
          sVar14 = auVar46._6_2_;
          sVar15 = auVar46._8_2_;
          sVar16 = auVar46._10_2_;
          sVar17 = auVar46._12_2_;
          sVar18 = auVar46._14_2_;
          sVar19 = auVar43._0_2_;
          sVar20 = auVar43._2_2_;
          sVar21 = auVar43._4_2_;
          sVar22 = auVar43._6_2_;
          sVar23 = auVar43._8_2_;
          sVar24 = auVar43._10_2_;
          sVar25 = auVar43._12_2_;
          sVar26 = auVar43._14_2_;
          pcVar6 = (char *)(lVar41 + param_4);
          *pcVar6 = (0 < sVar11) * (sVar11 < 0x100) * auVar46[0] - (0xff < sVar11);
          pcVar6[1] = (0 < sVar12) * (sVar12 < 0x100) * auVar46[2] - (0xff < sVar12);
          pcVar6[2] = (0 < sVar13) * (sVar13 < 0x100) * auVar46[4] - (0xff < sVar13);
          pcVar6[3] = (0 < sVar14) * (sVar14 < 0x100) * auVar46[6] - (0xff < sVar14);
          pcVar6[4] = (0 < sVar15) * (sVar15 < 0x100) * auVar46[8] - (0xff < sVar15);
          pcVar6[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar46[10] - (0xff < sVar16);
          pcVar6[6] = (0 < sVar17) * (sVar17 < 0x100) * auVar46[0xc] - (0xff < sVar17);
          pcVar6[7] = (0 < sVar18) * (sVar18 < 0x100) * auVar46[0xe] - (0xff < sVar18);
          pcVar6[8] = (0 < sVar19) * (sVar19 < 0x100) * auVar43[0] - (0xff < sVar19);
          pcVar6[9] = (0 < sVar20) * (sVar20 < 0x100) * auVar43[2] - (0xff < sVar20);
          pcVar6[10] = (0 < sVar21) * (sVar21 < 0x100) * auVar43[4] - (0xff < sVar21);
          pcVar6[0xb] = (0 < sVar22) * (sVar22 < 0x100) * auVar43[6] - (0xff < sVar22);
          pcVar6[0xc] = (0 < sVar23) * (sVar23 < 0x100) * auVar43[8] - (0xff < sVar23);
          pcVar6[0xd] = (0 < sVar24) * (sVar24 < 0x100) * auVar43[10] - (0xff < sVar24);
          pcVar6[0xe] = (0 < sVar25) * (sVar25 < 0x100) * auVar43[0xc] - (0xff < sVar25);
          pcVar6[0xf] = (0 < sVar26) * (sVar26 < 0x100) * auVar43[0xe] - (0xff < sVar26);
          lVar41 = lVar41 + 0x10;
        } while (uVar35 < uVar40);
        goto LAB_140a5adc3;
      }
    }
    if (iVar34 < unaff_EBP) {
      iVar37 = 1;
      uVar35 = 0;
      uVar39 = (uint)(unaff_EBP - iVar34) >> 2;
      lVar38 = (longlong)iVar34;
      if (uVar39 != 0) {
        lVar41 = param_4 + lVar38;
        do {
          iVar34 = ((int)*(short *)(lVar36 + uVar35 * 8) + (int)*(short *)(lVar28 + uVar35 * 8) +
                    (int)*(short *)(lVar33 + uVar35 * 8) +
                   (int)*(short *)(lVar31 + uVar35 * 8) + (int)*(short *)(lVar30 + uVar35 * 8)) *
                   0xa3d >> 0x10;
          if (iVar34 < 1) {
            iVar34 = 0;
          }
          uVar29 = (undefined1)iVar34;
          if (0xfe < iVar34) {
            uVar29 = 0xff;
          }
          *(undefined1 *)(lVar41 + uVar35 * 4) = uVar29;
          iVar34 = ((int)*(short *)(lVar36 + 2 + uVar35 * 8) +
                    (int)*(short *)(lVar28 + 2 + uVar35 * 8) +
                    (int)*(short *)(lVar33 + 2 + uVar35 * 8) +
                   (int)*(short *)(lVar31 + 2 + uVar35 * 8) +
                   (int)*(short *)(lVar30 + 2 + uVar35 * 8)) * 0xa3d >> 0x10;
          if (iVar34 < 1) {
            iVar34 = 0;
          }
          uVar29 = (undefined1)iVar34;
          if (0xfe < iVar34) {
            uVar29 = 0xff;
          }
          *(undefined1 *)(lVar41 + 1 + uVar35 * 4) = uVar29;
          iVar34 = ((int)*(short *)(lVar36 + 4 + uVar35 * 8) +
                    (int)*(short *)(lVar28 + 4 + uVar35 * 8) +
                    (int)*(short *)(lVar33 + 4 + uVar35 * 8) +
                   (int)*(short *)(lVar31 + 4 + uVar35 * 8) +
                   (int)*(short *)(lVar30 + 4 + uVar35 * 8)) * 0xa3d >> 0x10;
          if (iVar34 < 1) {
            iVar34 = 0;
          }
          uVar29 = (undefined1)iVar34;
          if (0xfe < iVar34) {
            uVar29 = 0xff;
          }
          *(undefined1 *)(lVar41 + 2 + uVar35 * 4) = uVar29;
          iVar34 = ((int)*(short *)(lVar36 + 6 + uVar35 * 8) +
                    (int)*(short *)(lVar28 + 6 + uVar35 * 8) +
                    (int)*(short *)(lVar33 + 6 + uVar35 * 8) +
                   (int)*(short *)(lVar31 + 6 + uVar35 * 8) +
                   (int)*(short *)(lVar30 + 6 + uVar35 * 8)) * 0xa3d >> 0x10;
          if (iVar34 < 1) {
            iVar34 = 0;
          }
          uVar29 = (undefined1)iVar34;
          if (0xfe < iVar34) {
            uVar29 = 0xff;
          }
          *(undefined1 *)(lVar41 + 3 + uVar35 * 4) = uVar29;
          uVar35 = uVar35 + 1;
        } while (uVar35 < uVar39);
        iVar37 = (int)uVar35 * 4 + 1;
      }
      uVar35 = (longlong)iVar37 - 1;
      if (uVar35 < (ulonglong)(lVar32 - lVar38)) {
        do {
          iVar34 = ((int)*(short *)(lVar36 + uVar35 * 2) + (int)*(short *)(lVar28 + uVar35 * 2) +
                    (int)*(short *)(lVar33 + uVar35 * 2) +
                   (int)*(short *)(lVar31 + uVar35 * 2) + (int)*(short *)(lVar30 + uVar35 * 2)) *
                   0xa3d >> 0x10;
          if (iVar34 < 1) {
            iVar34 = 0;
          }
          uVar29 = (undefined1)iVar34;
          if (0xfe < iVar34) {
            uVar29 = 0xff;
          }
          *(undefined1 *)(uVar35 + lVar38 + param_4) = uVar29;
          uVar35 = uVar35 + 1;
        } while (uVar35 < (ulonglong)(lVar32 - lVar38));
      }
    }
    param_2 = param_2 + 1;
    param_4 = param_4 + param_3;
    if (in_R11 <= param_2) {
      return;
    }
  } while( true );
}


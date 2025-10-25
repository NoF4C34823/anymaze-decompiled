
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a755c0(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  undefined1 uVar39;
  int iVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  int iVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  uint uVar66;
  int iVar68;
  int iVar78;
  int iVar80;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  int iVar67;
  int iVar82;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  int iVar79;
  int iVar81;
  int iVar83;
  undefined1 auVar77 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  int iVar95;
  int iVar96;
  
  uVar24 = _UNK_14308f02c;
  uVar23 = _UNK_14308f024;
  auVar22 = _DAT_14308eff0;
  auVar21 = _DAT_14308efe0;
  uVar30 = (ulonglong)(int)((ulonglong)param_4 >> 0x20);
  iVar25 = (int)param_4;
  uVar37 = 0;
  lVar38 = 0;
  if (0 < (longlong)uVar30) {
    lVar26 = (longlong)iVar25;
    auVar69 = (undefined1  [16])0x0;
    auVar47._4_4_ = PTR_DAT_14308f000._4_4_;
    auVar47._0_4_ = (int)PTR_DAT_14308f000;
    auVar47._8_4_ = _UNK_14308f008;
    auVar47._12_4_ = _UNK_14308f00c;
    uVar44 = (longlong)(((ulonglong)(lVar26 >> 3) >> 0x3c) + lVar26) >> 4;
    iVar33 = iVar25 + -0x10;
    auVar48 = _DAT_14308f010;
    auVar55 = _DAT_14308eff0;
    auVar57 = _DAT_14308efe0;
    auVar46 = auVar47;
    auVar91 = _DAT_14308f010;
    do {
      auVar87 = _DAT_14308efd0;
      sVar20 = _UNK_14308efce;
      sVar19 = _UNK_14308efcc;
      sVar18 = _UNK_14308efca;
      sVar17 = _UNK_14308efc8;
      sVar16 = _UNK_14308efc6;
      sVar15 = _UNK_14308efc4;
      sVar14 = _UNK_14308efc2;
      sVar13 = _DAT_14308efc0;
      uVar36 = param_2 + lVar38;
      iVar43 = 0;
      lVar31 = *(longlong *)(param_1 + uVar37 * 8);
      lVar29 = *(longlong *)(param_1 + 8 + uVar37 * 8);
      lVar32 = *(longlong *)(param_1 + 0x10 + uVar37 * 8);
      if ((uVar36 & 0xf) == 0) {
        if (param_6 == 0) {
          uVar41 = 0;
          lVar34 = 0;
          lVar27 = 0;
          if (-1 < iVar33) {
            do {
              psVar1 = (short *)(lVar27 + lVar31);
              uVar41 = uVar41 + 1;
              psVar4 = (short *)(lVar27 + 0x10 + lVar31);
              psVar2 = (short *)(lVar27 + lVar29);
              psVar5 = (short *)(lVar27 + 0x10 + lVar29);
              psVar3 = (short *)(lVar27 + lVar32);
              psVar6 = (short *)(lVar27 + 0x10 + lVar32);
              auVar86._0_2_ = *psVar1 + *psVar2 + *psVar3 + sVar13;
              auVar86._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + sVar14;
              auVar86._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + sVar15;
              auVar86._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + sVar16;
              auVar86._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + sVar17;
              auVar86._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + sVar18;
              auVar86._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + sVar19;
              auVar86._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + sVar20;
              lVar27 = lVar27 + 0x20;
              auVar71._0_2_ = *psVar4 + *psVar5 + *psVar6 + sVar13;
              auVar71._2_2_ = psVar4[1] + psVar5[1] + psVar6[1] + sVar14;
              auVar71._4_2_ = psVar4[2] + psVar5[2] + psVar6[2] + sVar15;
              auVar71._6_2_ = psVar4[3] + psVar5[3] + psVar6[3] + sVar16;
              auVar71._8_2_ = psVar4[4] + psVar5[4] + psVar6[4] + sVar17;
              auVar71._10_2_ = psVar4[5] + psVar5[5] + psVar6[5] + sVar18;
              auVar71._12_2_ = psVar4[6] + psVar5[6] + psVar6[6] + sVar19;
              auVar71._14_2_ = psVar4[7] + psVar5[7] + psVar6[7] + sVar20;
              auVar85 = pmulhw(auVar86,auVar87);
              auVar69 = pmulhw(auVar71,auVar87);
              sVar7 = auVar85._0_2_;
              sVar8 = auVar85._2_2_;
              unaff_XMM6[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar85[2] - (0xff < sVar8);
              unaff_XMM6[0] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[0] - (0xff < sVar7);
              sVar7 = auVar85._4_2_;
              unaff_XMM6[2] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[4] - (0xff < sVar7);
              sVar7 = auVar85._6_2_;
              unaff_XMM6[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[6] - (0xff < sVar7);
              sVar7 = auVar85._8_2_;
              unaff_XMM6[4] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[8] - (0xff < sVar7);
              sVar7 = auVar85._10_2_;
              unaff_XMM6[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[10] - (0xff < sVar7);
              sVar7 = auVar85._12_2_;
              unaff_XMM6[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[0xc] - (0xff < sVar7);
              sVar7 = auVar85._14_2_;
              unaff_XMM6[7] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[0xe] - (0xff < sVar7);
              sVar7 = auVar69._0_2_;
              unaff_XMM6[8] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[0] - (0xff < sVar7);
              sVar7 = auVar69._2_2_;
              unaff_XMM6[9] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[2] - (0xff < sVar7);
              sVar7 = auVar69._4_2_;
              unaff_XMM6[10] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[4] - (0xff < sVar7);
              sVar7 = auVar69._6_2_;
              unaff_XMM6[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[6] - (0xff < sVar7);
              sVar7 = auVar69._8_2_;
              unaff_XMM6[0xc] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[8] - (0xff < sVar7);
              sVar7 = auVar69._10_2_;
              unaff_XMM6[0xd] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[10] - (0xff < sVar7);
              sVar7 = auVar69._12_2_;
              unaff_XMM6[0xe] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[0xc] - (0xff < sVar7);
              sVar7 = auVar69._14_2_;
              unaff_XMM6[0xf] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[0xe] - (0xff < sVar7);
              *(undefined1 (*) [16])(lVar34 + uVar36) = unaff_XMM6;
              lVar34 = lVar34 + 0x10;
            } while (uVar41 < uVar44);
            goto LAB_140a758af;
          }
        }
        else {
          uVar41 = 0;
          lVar34 = 0;
          lVar27 = 0;
          iVar43 = 0;
          if (-1 < iVar33) {
            do {
              psVar1 = (short *)(lVar27 + lVar31);
              uVar41 = uVar41 + 1;
              psVar4 = (short *)(lVar27 + 0x10 + lVar31);
              psVar2 = (short *)(lVar27 + lVar29);
              psVar5 = (short *)(lVar27 + 0x10 + lVar29);
              psVar3 = (short *)(lVar27 + lVar32);
              psVar6 = (short *)(lVar27 + 0x10 + lVar32);
              auVar84._0_2_ = *psVar1 + *psVar2 + *psVar3 + sVar13;
              auVar84._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + sVar14;
              auVar84._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + sVar15;
              auVar84._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + sVar16;
              auVar84._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + sVar17;
              auVar84._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + sVar18;
              auVar84._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + sVar19;
              auVar84._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + sVar20;
              lVar27 = lVar27 + 0x20;
              auVar70._0_2_ = *psVar4 + *psVar5 + *psVar6 + sVar13;
              auVar70._2_2_ = psVar4[1] + psVar5[1] + psVar6[1] + sVar14;
              auVar70._4_2_ = psVar4[2] + psVar5[2] + psVar6[2] + sVar15;
              auVar70._6_2_ = psVar4[3] + psVar5[3] + psVar6[3] + sVar16;
              auVar70._8_2_ = psVar4[4] + psVar5[4] + psVar6[4] + sVar17;
              auVar70._10_2_ = psVar4[5] + psVar5[5] + psVar6[5] + sVar18;
              auVar70._12_2_ = psVar4[6] + psVar5[6] + psVar6[6] + sVar19;
              auVar70._14_2_ = psVar4[7] + psVar5[7] + psVar6[7] + sVar20;
              auVar85 = pmulhw(auVar84,auVar87);
              auVar69 = pmulhw(auVar70,auVar87);
              sVar7 = auVar85._0_2_;
              sVar8 = auVar85._2_2_;
              unaff_XMM6[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar85[2] - (0xff < sVar8);
              unaff_XMM6[0] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[0] - (0xff < sVar7);
              sVar7 = auVar85._4_2_;
              unaff_XMM6[2] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[4] - (0xff < sVar7);
              sVar7 = auVar85._6_2_;
              unaff_XMM6[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[6] - (0xff < sVar7);
              sVar7 = auVar85._8_2_;
              unaff_XMM6[4] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[8] - (0xff < sVar7);
              sVar7 = auVar85._10_2_;
              unaff_XMM6[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[10] - (0xff < sVar7);
              sVar7 = auVar85._12_2_;
              unaff_XMM6[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[0xc] - (0xff < sVar7);
              sVar7 = auVar85._14_2_;
              unaff_XMM6[7] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[0xe] - (0xff < sVar7);
              sVar7 = auVar69._0_2_;
              unaff_XMM6[8] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[0] - (0xff < sVar7);
              sVar7 = auVar69._2_2_;
              unaff_XMM6[9] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[2] - (0xff < sVar7);
              sVar7 = auVar69._4_2_;
              unaff_XMM6[10] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[4] - (0xff < sVar7);
              sVar7 = auVar69._6_2_;
              unaff_XMM6[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[6] - (0xff < sVar7);
              sVar7 = auVar69._8_2_;
              unaff_XMM6[0xc] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[8] - (0xff < sVar7);
              sVar7 = auVar69._10_2_;
              unaff_XMM6[0xd] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[10] - (0xff < sVar7);
              sVar7 = auVar69._12_2_;
              unaff_XMM6[0xe] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[0xc] - (0xff < sVar7);
              sVar7 = auVar69._14_2_;
              unaff_XMM6[0xf] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[0xe] - (0xff < sVar7);
              *(undefined1 (*) [16])(lVar34 + uVar36) = unaff_XMM6;
              lVar34 = lVar34 + 0x10;
            } while (uVar41 < uVar44);
LAB_140a758af:
            lVar27 = uVar41 * 0x20;
            iVar43 = (int)uVar41 << 4;
            lVar31 = lVar31 + lVar27;
            lVar29 = lVar29 + lVar27;
            lVar32 = lVar32 + lVar27;
          }
        }
      }
      else {
        uVar41 = 0;
        lVar34 = 0;
        lVar27 = 0;
        if (-1 < iVar33) {
          do {
            psVar1 = (short *)(lVar27 + lVar31);
            uVar41 = uVar41 + 1;
            psVar4 = (short *)(lVar27 + 0x10 + lVar31);
            psVar2 = (short *)(lVar27 + lVar29);
            psVar5 = (short *)(lVar27 + 0x10 + lVar29);
            psVar3 = (short *)(lVar27 + lVar32);
            psVar6 = (short *)(lVar27 + 0x10 + lVar32);
            auVar85._0_2_ = *psVar1 + *psVar2 + *psVar3 + sVar13;
            auVar85._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + sVar14;
            auVar85._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + sVar15;
            auVar85._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + sVar16;
            auVar85._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + sVar17;
            auVar85._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + sVar18;
            auVar85._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + sVar19;
            auVar85._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + sVar20;
            lVar27 = lVar27 + 0x20;
            auVar69._0_2_ = *psVar4 + *psVar5 + *psVar6 + sVar13;
            auVar69._2_2_ = psVar4[1] + psVar5[1] + psVar6[1] + sVar14;
            auVar69._4_2_ = psVar4[2] + psVar5[2] + psVar6[2] + sVar15;
            auVar69._6_2_ = psVar4[3] + psVar5[3] + psVar6[3] + sVar16;
            auVar69._8_2_ = psVar4[4] + psVar5[4] + psVar6[4] + sVar17;
            auVar69._10_2_ = psVar4[5] + psVar5[5] + psVar6[5] + sVar18;
            auVar69._12_2_ = psVar4[6] + psVar5[6] + psVar6[6] + sVar19;
            auVar69._14_2_ = psVar4[7] + psVar5[7] + psVar6[7] + sVar20;
            auVar85 = pmulhw(auVar85,auVar87);
            auVar69 = pmulhw(auVar69,auVar87);
            sVar7 = auVar85._0_2_;
            sVar8 = auVar85._2_2_;
            unaff_XMM6[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar85[2] - (0xff < sVar8);
            unaff_XMM6[0] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[0] - (0xff < sVar7);
            sVar7 = auVar85._4_2_;
            unaff_XMM6[2] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[4] - (0xff < sVar7);
            sVar7 = auVar85._6_2_;
            unaff_XMM6[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[6] - (0xff < sVar7);
            sVar7 = auVar85._8_2_;
            unaff_XMM6[4] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[8] - (0xff < sVar7);
            sVar7 = auVar85._10_2_;
            unaff_XMM6[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[10] - (0xff < sVar7);
            sVar7 = auVar85._12_2_;
            unaff_XMM6[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[0xc] - (0xff < sVar7);
            sVar7 = auVar85._14_2_;
            unaff_XMM6[7] = (0 < sVar7) * (sVar7 < 0x100) * auVar85[0xe] - (0xff < sVar7);
            sVar7 = auVar69._0_2_;
            unaff_XMM6[8] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[0] - (0xff < sVar7);
            sVar7 = auVar69._2_2_;
            unaff_XMM6[9] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[2] - (0xff < sVar7);
            sVar7 = auVar69._4_2_;
            unaff_XMM6[10] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[4] - (0xff < sVar7);
            sVar7 = auVar69._6_2_;
            unaff_XMM6[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[6] - (0xff < sVar7);
            sVar7 = auVar69._8_2_;
            unaff_XMM6[0xc] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[8] - (0xff < sVar7);
            sVar7 = auVar69._10_2_;
            unaff_XMM6[0xd] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[10] - (0xff < sVar7);
            sVar7 = auVar69._12_2_;
            unaff_XMM6[0xe] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[0xc] - (0xff < sVar7);
            sVar7 = auVar69._14_2_;
            unaff_XMM6[0xf] = (0 < sVar7) * (sVar7 < 0x100) * auVar69[0xe] - (0xff < sVar7);
            *(undefined1 (*) [16])(lVar34 + uVar36) = unaff_XMM6;
            lVar34 = lVar34 + 0x10;
          } while (uVar41 < uVar44);
          goto LAB_140a758af;
        }
      }
      if (iVar43 < iVar25) {
        lVar35 = (longlong)iVar43;
        uVar36 = uVar36 + lVar35;
        lVar34 = lVar26 - lVar35;
        lVar27 = lVar34 * 2;
        if (((((longlong)(uVar36 - lVar31) < lVar27) && ((longlong)-(uVar36 - lVar31) < lVar34)) ||
            (((longlong)(uVar36 - lVar29) < lVar27 && ((longlong)-(uVar36 - lVar29) < lVar34)))) ||
           (((longlong)(uVar36 - lVar32) < lVar27 && ((longlong)-(uVar36 - lVar32) < lVar34)))) {
          iVar40 = 1;
          uVar66 = (uint)(iVar25 - iVar43) >> 1;
          uVar41 = 0;
          if (uVar66 != 0) {
            do {
              uVar28 = uVar41;
              iVar40 = ((int)*(short *)(lVar31 + uVar28 * 4) + (int)*(short *)(lVar29 + uVar28 * 4)
                       + (int)*(short *)(lVar32 + uVar28 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar40 < 1) {
                iVar40 = 0;
              }
              uVar39 = (undefined1)iVar40;
              if (0xfe < iVar40) {
                uVar39 = 0xff;
              }
              *(undefined1 *)(uVar36 + uVar28 * 2) = uVar39;
              iVar40 = ((int)*(short *)(lVar31 + 2 + uVar28 * 4) +
                        (int)*(short *)(lVar29 + 2 + uVar28 * 4) +
                       (int)*(short *)(lVar32 + 2 + uVar28 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar40 < 1) {
                iVar40 = 0;
              }
              uVar39 = (undefined1)iVar40;
              if (0xfe < iVar40) {
                uVar39 = 0xff;
              }
              *(undefined1 *)(uVar36 + 1 + uVar28 * 2) = uVar39;
              uVar41 = uVar28 + 1;
            } while (uVar41 < uVar66);
            iVar40 = (int)uVar28 + 2 + (int)uVar41;
          }
          if (iVar40 - 1U < (uint)(iVar25 - iVar43)) {
            lVar27 = (longlong)iVar40;
            iVar43 = ((int)*(short *)(lVar31 + -2 + lVar27 * 2) +
                      (int)*(short *)(lVar29 + -2 + lVar27 * 2) +
                     (int)*(short *)(lVar32 + -2 + lVar27 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar43 < 1) {
              iVar43 = 0;
            }
            uVar39 = 0xff;
            if (iVar43 < 0xff) {
              uVar39 = (undefined1)iVar43;
            }
            *(undefined1 *)(lVar35 + param_2 + lVar27 + -1 + lVar38) = uVar39;
          }
        }
        else {
          uVar41 = (lVar26 - (lVar35 + 1)) + 1;
          if ((longlong)uVar41 < 0x10) {
LAB_140a7600f:
            uVar45 = 0;
          }
          else {
            uVar28 = uVar36 & 0xf;
            if (uVar28 != 0) {
              uVar28 = 0x10 - uVar28;
            }
            if ((longlong)uVar41 < (longlong)(uVar28 + 0x10)) goto LAB_140a7600f;
            uVar42 = 0;
            uVar45 = (ulonglong)(int)((int)uVar41 - ((int)uVar41 - (int)uVar28 & 0xfU));
            if (uVar28 != 0) {
              do {
                iVar43 = ((int)*(short *)(lVar31 + uVar42 * 2) +
                          (int)*(short *)(lVar29 + uVar42 * 2) +
                         (int)*(short *)(lVar32 + uVar42 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
                if (iVar43 < 1) {
                  iVar43 = 0;
                }
                uVar39 = (undefined1)iVar43;
                if (0xfe < iVar43) {
                  uVar39 = 0xff;
                }
                *(undefined1 *)(uVar42 + uVar36) = uVar39;
                uVar42 = uVar42 + 1;
              } while (uVar42 < uVar28);
            }
            iVar43 = auVar22._0_4_;
            iVar95 = auVar22._8_4_;
            iVar96 = auVar22._12_4_;
            iVar40 = auVar22._4_4_;
            uVar66 = auVar21._0_4_;
            uVar42 = auVar21._8_8_;
            if ((lVar32 + uVar28 * 2 & 0xf) == 0) {
              do {
                auVar55 = pmovsxwd(auVar55,*(undefined8 *)(lVar31 + uVar28 * 2));
                auVar69 = pmovsxwd(auVar69,*(undefined8 *)(lVar29 + uVar28 * 2));
                auVar85 = pmovsxwd(unaff_XMM6,*(undefined8 *)(lVar29 + 8 + uVar28 * 2));
                auVar87 = pmovsxwd(auVar69,*(undefined8 *)(lVar32 + uVar28 * 2));
                auVar57 = pmovsxwd(auVar57,*(undefined8 *)(lVar31 + 8 + uVar28 * 2));
                auVar56._0_4_ = auVar55._0_4_ + auVar69._0_4_ + auVar87._0_4_;
                auVar56._4_4_ = auVar55._4_4_ + auVar69._4_4_ + auVar87._4_4_;
                auVar56._8_4_ = auVar55._8_4_ + auVar69._8_4_ + auVar87._8_4_;
                auVar56._12_4_ = auVar55._12_4_ + auVar69._12_4_ + auVar87._12_4_;
                auVar55 = pmovsxwd(auVar87,*(undefined8 *)(lVar32 + 8 + uVar28 * 2));
                auVar62._0_4_ = auVar57._0_4_ + auVar85._0_4_ + auVar55._0_4_;
                auVar62._4_4_ = auVar57._4_4_ + auVar85._4_4_ + auVar55._4_4_;
                auVar62._8_4_ = auVar57._8_4_ + auVar85._8_4_ + auVar55._8_4_;
                auVar62._12_4_ = auVar57._12_4_ + auVar85._12_4_ + auVar55._12_4_;
                auVar57 = pmovsxwd(auVar85,*(undefined8 *)(lVar31 + 0x10 + uVar28 * 2));
                auVar75._0_8_ = (ulonglong)uVar66 * (ulonglong)auVar62._0_4_;
                auVar75._8_8_ = (uVar42 & 0xffffffff) * (ulonglong)auVar62._8_4_;
                auVar48 = pmovsxwd(auVar48,*(undefined8 *)(lVar29 + 0x10 + uVar28 * 2));
                auVar55 = pmovsxwd(auVar47,*(undefined8 *)(lVar29 + 0x18 + uVar28 * 2));
                auVar47 = pmovsxwd(auVar48,*(undefined8 *)(lVar32 + 0x10 + uVar28 * 2));
                auVar88._0_4_ = auVar57._0_4_ + auVar48._0_4_ + auVar47._0_4_;
                auVar88._4_4_ = auVar57._4_4_ + auVar48._4_4_ + auVar47._4_4_;
                auVar88._8_4_ = auVar57._8_4_ + auVar48._8_4_ + auVar47._8_4_;
                auVar88._12_4_ = auVar57._12_4_ + auVar48._12_4_ + auVar47._12_4_;
                auVar47 = pmovsxwd(auVar47,*(undefined8 *)(lVar31 + 0x18 + uVar28 * 2));
                auVar76._0_8_ = (ulonglong)auVar62._4_4_ * (ulonglong)uVar23 << 0x20;
                auVar76._8_8_ = (auVar62._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
                auVar48 = pmovsxwd(auVar55,*(undefined8 *)(lVar32 + 0x18 + uVar28 * 2));
                auVar57._0_4_ = auVar47._0_4_ + auVar55._0_4_ + auVar48._0_4_;
                auVar57._4_4_ = auVar47._4_4_ + auVar55._4_4_ + auVar48._4_4_;
                auVar57._8_4_ = auVar47._8_4_ + auVar55._8_4_ + auVar48._8_4_;
                auVar57._12_4_ = auVar47._12_4_ + auVar55._12_4_ + auVar48._12_4_;
                auVar76 = auVar75 & auVar91 | auVar76;
                auVar63._0_8_ = (ulonglong)uVar66 * (ulonglong)auVar88._0_4_;
                auVar63._8_8_ = (uVar42 & 0xffffffff) * (ulonglong)auVar88._8_4_;
                auVar87._0_8_ = (ulonglong)uVar66 * (ulonglong)auVar56._0_4_;
                auVar87._8_8_ = (uVar42 & 0xffffffff) * (ulonglong)auVar56._8_4_;
                auVar64._0_8_ = (ulonglong)auVar88._4_4_ * (ulonglong)uVar23 << 0x20;
                auVar64._8_8_ = (auVar88._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
                auVar64 = auVar63 & auVar91 | auVar64;
                auVar89._0_8_ = (ulonglong)uVar66 * (ulonglong)auVar57._0_4_;
                auVar89._8_8_ = (uVar42 & 0xffffffff) * (ulonglong)auVar57._8_4_;
                auVar52._0_8_ = (ulonglong)auVar56._4_4_ * (ulonglong)uVar23 << 0x20;
                auVar52._8_8_ = (auVar56._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
                auVar52 = auVar87 & auVar91 | auVar52;
                auVar55 = (undefined1  [16])0x0;
                iVar82 = auVar52._0_4_ + iVar43 >> 0x10;
                iVar80 = auVar52._4_4_ + iVar40 >> 0x10;
                iVar78 = auVar52._8_4_ + iVar95 >> 0x10;
                iVar67 = auVar52._12_4_ + iVar96 >> 0x10;
                auVar48._0_8_ = (ulonglong)auVar57._4_4_ * (ulonglong)uVar23 << 0x20;
                auVar48._8_8_ = (auVar57._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
                iVar68 = auVar76._0_4_ + iVar43 >> 0x10;
                iVar79 = auVar76._4_4_ + iVar40 >> 0x10;
                iVar81 = auVar76._8_4_ + iVar95 >> 0x10;
                iVar83 = auVar76._12_4_ + iVar96 >> 0x10;
                iVar82 = (uint)(-1 < iVar82) * iVar82;
                iVar80 = (uint)(-1 < iVar80) * iVar80;
                iVar78 = (uint)(-1 < iVar78) * iVar78;
                iVar67 = (uint)(-1 < iVar67) * iVar67;
                iVar9 = auVar46._0_4_;
                auVar53._0_4_ = (uint)(iVar9 < iVar82) * iVar9 | (uint)(iVar9 >= iVar82) * iVar82;
                iVar10 = auVar46._4_4_;
                auVar53._4_4_ = (uint)(iVar10 < iVar80) * iVar10 | (uint)(iVar10 >= iVar80) * iVar80
                ;
                iVar11 = auVar46._8_4_;
                auVar53._8_4_ = (uint)(iVar11 < iVar78) * iVar11 | (uint)(iVar11 >= iVar78) * iVar78
                ;
                iVar12 = auVar46._12_4_;
                auVar53._12_4_ =
                     (uint)(iVar12 < iVar67) * iVar12 | (uint)(iVar12 >= iVar67) * iVar67;
                auVar57 = auVar89 & auVar91 | auVar48;
                iVar68 = (uint)(-1 < iVar68) * iVar68;
                iVar79 = (uint)(-1 < iVar79) * iVar79;
                iVar81 = (uint)(-1 < iVar81) * iVar81;
                iVar83 = (uint)(-1 < iVar83) * iVar83;
                auVar47 = pshufb(auVar53,_DAT_14308f030);
                iVar78 = auVar64._0_4_ + iVar43 >> 0x10;
                iVar67 = auVar64._4_4_ + iVar40 >> 0x10;
                iVar82 = auVar64._8_4_ + iVar95 >> 0x10;
                iVar80 = auVar64._12_4_ + iVar96 >> 0x10;
                auVar77._0_4_ = (uint)(iVar9 < iVar68) * iVar9 | (uint)(iVar9 >= iVar68) * iVar68;
                auVar77._4_4_ = (uint)(iVar10 < iVar79) * iVar10 | (uint)(iVar10 >= iVar79) * iVar79
                ;
                auVar77._8_4_ = (uint)(iVar11 < iVar81) * iVar11 | (uint)(iVar11 >= iVar81) * iVar81
                ;
                auVar77._12_4_ =
                     (uint)(iVar12 < iVar83) * iVar12 | (uint)(iVar12 >= iVar83) * iVar83;
                iVar81 = auVar57._0_4_ + iVar43 >> 0x10;
                iVar83 = auVar57._4_4_ + iVar40 >> 0x10;
                iVar68 = auVar57._8_4_ + iVar95 >> 0x10;
                iVar79 = auVar57._12_4_ + iVar96 >> 0x10;
                iVar78 = (uint)(-1 < iVar78) * iVar78;
                iVar67 = (uint)(-1 < iVar67) * iVar67;
                iVar82 = (uint)(-1 < iVar82) * iVar82;
                iVar80 = (uint)(-1 < iVar80) * iVar80;
                auVar65._0_4_ = (uint)(iVar9 < iVar78) * iVar9 | (uint)(iVar9 >= iVar78) * iVar78;
                auVar65._4_4_ = (uint)(iVar10 < iVar67) * iVar10 | (uint)(iVar10 >= iVar67) * iVar67
                ;
                auVar65._8_4_ = (uint)(iVar11 < iVar82) * iVar11 | (uint)(iVar11 >= iVar82) * iVar82
                ;
                auVar65._12_4_ =
                     (uint)(iVar12 < iVar80) * iVar12 | (uint)(iVar12 >= iVar80) * iVar80;
                iVar81 = (uint)(-1 < iVar81) * iVar81;
                iVar83 = (uint)(-1 < iVar83) * iVar83;
                iVar68 = (uint)(-1 < iVar68) * iVar68;
                iVar79 = (uint)(-1 < iVar79) * iVar79;
                auVar69 = pshufb(auVar77,_DAT_14308f040);
                auVar90._0_4_ = (uint)(iVar9 < iVar81) * iVar9 | (uint)(iVar9 >= iVar81) * iVar81;
                auVar90._4_4_ = (uint)(iVar10 < iVar83) * iVar10 | (uint)(iVar10 >= iVar83) * iVar83
                ;
                auVar90._8_4_ = (uint)(iVar11 < iVar68) * iVar11 | (uint)(iVar11 >= iVar68) * iVar68
                ;
                auVar90._12_4_ =
                     (uint)(iVar12 < iVar79) * iVar12 | (uint)(iVar12 >= iVar79) * iVar79;
                auVar57 = pshufb(auVar65,_DAT_14308f050);
                unaff_XMM6 = pshufb(auVar90,_DAT_14308f060);
                auVar47 = auVar47 | auVar69 | auVar57 | unaff_XMM6;
                *(undefined1 (*) [16])(uVar28 + uVar36) = auVar47;
                uVar28 = uVar28 + 0x10;
              } while (uVar28 < uVar45);
            }
            else {
              do {
                auVar91 = lddqu(auVar46,*(undefined1 (*) [16])(lVar32 + uVar28 * 2));
                auVar46 = pmovsxwd(auVar48,*(undefined8 *)(lVar31 + uVar28 * 2));
                auVar87 = pmovsxwd(unaff_XMM6,auVar91);
                auVar47 = pmovsxwd(auVar47,*(undefined8 *)(lVar29 + uVar28 * 2));
                auVar85 = pmovsxwd(auVar91 >> 0x40,auVar91 >> 0x40);
                auVar48 = pmovsxwd(auVar47,*(undefined8 *)(lVar29 + 8 + uVar28 * 2));
                auVar57 = pmovsxwd(auVar57,*(undefined8 *)(lVar31 + 8 + uVar28 * 2));
                auVar91._0_4_ = auVar46._0_4_ + auVar47._0_4_ + auVar87._0_4_;
                auVar91._4_4_ = auVar46._4_4_ + auVar47._4_4_ + auVar87._4_4_;
                auVar91._8_4_ = auVar46._8_4_ + auVar47._8_4_ + auVar87._8_4_;
                auVar91._12_4_ = auVar46._12_4_ + auVar47._12_4_ + auVar87._12_4_;
                auVar47 = pmovsxwd(auVar48,*(undefined8 *)(lVar31 + 0x10 + uVar28 * 2));
                auVar69 = lddqu(auVar69,*(undefined1 (*) [16])(lVar32 + 0x10 + uVar28 * 2));
                auVar58._0_4_ = auVar57._0_4_ + auVar48._0_4_ + auVar85._0_4_;
                auVar58._4_4_ = auVar57._4_4_ + auVar48._4_4_ + auVar85._4_4_;
                auVar58._8_4_ = auVar57._8_4_ + auVar48._8_4_ + auVar85._8_4_;
                auVar58._12_4_ = auVar57._12_4_ + auVar48._12_4_ + auVar85._12_4_;
                auVar57 = pmovsxwd(auVar85,*(undefined8 *)(lVar29 + 0x10 + uVar28 * 2));
                unaff_XMM6 = pmovsxwd(auVar87,*(undefined8 *)(lVar29 + 0x18 + uVar28 * 2));
                auVar87 = pmovsxwd(auVar57,auVar69);
                auVar46 = pmovsxwd(auVar55,*(undefined8 *)(lVar31 + 0x18 + uVar28 * 2));
                auVar48 = pmovsxwd(auVar69 >> 0x40,auVar69 >> 0x40);
                auVar49._0_4_ = auVar47._0_4_ + auVar57._0_4_ + auVar87._0_4_;
                auVar49._4_4_ = auVar47._4_4_ + auVar57._4_4_ + auVar87._4_4_;
                auVar49._8_4_ = auVar47._8_4_ + auVar57._8_4_ + auVar87._8_4_;
                auVar49._12_4_ = auVar47._12_4_ + auVar57._12_4_ + auVar87._12_4_;
                auVar54._0_4_ = auVar46._0_4_ + unaff_XMM6._0_4_ + auVar48._0_4_;
                auVar54._4_4_ = auVar46._4_4_ + unaff_XMM6._4_4_ + auVar48._4_4_;
                auVar54._8_4_ = auVar46._8_4_ + unaff_XMM6._8_4_ + auVar48._8_4_;
                auVar54._12_4_ = auVar46._12_4_ + unaff_XMM6._12_4_ + auVar48._12_4_;
                auVar72._0_8_ = (ulonglong)uVar66 * (ulonglong)auVar91._0_4_;
                auVar72._8_8_ = (uVar42 & 0xffffffff) * (ulonglong)auVar91._8_4_;
                auVar73._0_8_ = (ulonglong)auVar91._4_4_ * (ulonglong)uVar23 << 0x20;
                auVar73._8_8_ = (auVar91._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
                auVar73 = auVar72 & _DAT_14308f010 | auVar73;
                iVar67 = auVar73._0_4_ + iVar43 >> 0x10;
                iVar78 = auVar73._4_4_ + iVar40 >> 0x10;
                iVar80 = auVar73._8_4_ + iVar95 >> 0x10;
                iVar82 = auVar73._12_4_ + iVar96 >> 0x10;
                iVar67 = (uint)(-1 < iVar67) * iVar67;
                iVar78 = (uint)(-1 < iVar78) * iVar78;
                iVar80 = (uint)(-1 < iVar80) * iVar80;
                iVar82 = (uint)(-1 < iVar82) * iVar82;
                auVar92._0_8_ = (ulonglong)uVar66 * (ulonglong)auVar58._0_4_;
                auVar92._8_8_ = (uVar42 & 0xffffffff) * (ulonglong)auVar58._8_4_;
                auVar74._0_4_ =
                     (uint)((int)PTR_DAT_14308f000 < iVar67) * (int)PTR_DAT_14308f000 |
                     (uint)((int)PTR_DAT_14308f000 >= iVar67) * iVar67;
                auVar74._4_4_ =
                     (uint)(PTR_DAT_14308f000._4_4_ < iVar78) * PTR_DAT_14308f000._4_4_ |
                     (uint)(PTR_DAT_14308f000._4_4_ >= iVar78) * iVar78;
                auVar74._8_4_ =
                     (uint)(_UNK_14308f008 < iVar80) * _UNK_14308f008 |
                     (uint)(_UNK_14308f008 >= iVar80) * iVar80;
                auVar74._12_4_ =
                     (uint)(_UNK_14308f00c < iVar82) * _UNK_14308f00c |
                     (uint)(_UNK_14308f00c >= iVar82) * iVar82;
                auVar91 = pshufb(auVar74,_DAT_14308f030);
                auVar93._0_8_ = (ulonglong)auVar58._4_4_ * (ulonglong)uVar23 << 0x20;
                auVar93._8_8_ = (auVar58._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
                auVar93 = auVar92 & _DAT_14308f010 | auVar93;
                auVar59._0_8_ = (ulonglong)uVar66 * (ulonglong)auVar49._0_4_;
                auVar59._8_8_ = (uVar42 & 0xffffffff) * (ulonglong)auVar49._8_4_;
                iVar78 = auVar93._0_4_ + iVar43 >> 0x10;
                iVar80 = auVar93._4_4_ + iVar40 >> 0x10;
                iVar67 = auVar93._8_4_ + iVar95 >> 0x10;
                iVar82 = auVar93._12_4_ + iVar96 >> 0x10;
                auVar60._0_8_ = (ulonglong)auVar49._4_4_ * (ulonglong)uVar23 << 0x20;
                auVar60._8_8_ = (auVar49._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
                iVar78 = (uint)(-1 < iVar78) * iVar78;
                iVar80 = (uint)(-1 < iVar80) * iVar80;
                iVar67 = (uint)(-1 < iVar67) * iVar67;
                iVar82 = (uint)(-1 < iVar82) * iVar82;
                auVar60 = auVar59 & _DAT_14308f010 | auVar60;
                auVar94._0_4_ =
                     (uint)((int)PTR_DAT_14308f000 < iVar78) * (int)PTR_DAT_14308f000 |
                     (uint)((int)PTR_DAT_14308f000 >= iVar78) * iVar78;
                auVar94._4_4_ =
                     (uint)(PTR_DAT_14308f000._4_4_ < iVar80) * PTR_DAT_14308f000._4_4_ |
                     (uint)(PTR_DAT_14308f000._4_4_ >= iVar80) * iVar80;
                auVar94._8_4_ =
                     (uint)(_UNK_14308f008 < iVar67) * _UNK_14308f008 |
                     (uint)(_UNK_14308f008 >= iVar67) * iVar67;
                auVar94._12_4_ =
                     (uint)(_UNK_14308f00c < iVar82) * _UNK_14308f00c |
                     (uint)(_UNK_14308f00c >= iVar82) * iVar82;
                auVar50._0_8_ = (ulonglong)uVar66 * (ulonglong)auVar54._0_4_;
                auVar50._8_8_ = (uVar42 & 0xffffffff) * (ulonglong)auVar54._8_4_;
                auVar46 = pshufb(auVar94,_DAT_14308f040);
                iVar67 = auVar60._0_4_ + iVar43 >> 0x10;
                iVar78 = auVar60._4_4_ + iVar40 >> 0x10;
                iVar80 = auVar60._8_4_ + iVar95 >> 0x10;
                iVar82 = auVar60._12_4_ + iVar96 >> 0x10;
                auVar55._0_8_ = (ulonglong)auVar54._4_4_ * (ulonglong)uVar23 << 0x20;
                auVar55._8_8_ = (auVar54._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
                iVar67 = (uint)(-1 < iVar67) * iVar67;
                iVar78 = (uint)(-1 < iVar78) * iVar78;
                iVar80 = (uint)(-1 < iVar80) * iVar80;
                iVar82 = (uint)(-1 < iVar82) * iVar82;
                auVar48 = (undefined1  [16])0x0;
                auVar47 = auVar50 & _DAT_14308f010 | auVar55;
                auVar61._0_4_ =
                     (uint)((int)PTR_DAT_14308f000 < iVar67) * (int)PTR_DAT_14308f000 |
                     (uint)((int)PTR_DAT_14308f000 >= iVar67) * iVar67;
                auVar61._4_4_ =
                     (uint)(PTR_DAT_14308f000._4_4_ < iVar78) * PTR_DAT_14308f000._4_4_ |
                     (uint)(PTR_DAT_14308f000._4_4_ >= iVar78) * iVar78;
                auVar61._8_4_ =
                     (uint)(_UNK_14308f008 < iVar80) * _UNK_14308f008 |
                     (uint)(_UNK_14308f008 >= iVar80) * iVar80;
                auVar61._12_4_ =
                     (uint)(_UNK_14308f00c < iVar82) * _UNK_14308f00c |
                     (uint)(_UNK_14308f00c >= iVar82) * iVar82;
                auVar57 = pshufb(auVar61,_DAT_14308f050);
                iVar67 = auVar47._0_4_ + iVar43 >> 0x10;
                iVar78 = auVar47._4_4_ + iVar40 >> 0x10;
                iVar80 = auVar47._8_4_ + iVar95 >> 0x10;
                iVar82 = auVar47._12_4_ + iVar96 >> 0x10;
                iVar67 = (uint)(-1 < iVar67) * iVar67;
                iVar78 = (uint)(-1 < iVar78) * iVar78;
                iVar80 = (uint)(-1 < iVar80) * iVar80;
                iVar82 = (uint)(-1 < iVar82) * iVar82;
                auVar51._0_4_ =
                     (uint)((int)PTR_DAT_14308f000 < iVar67) * (int)PTR_DAT_14308f000 |
                     (uint)((int)PTR_DAT_14308f000 >= iVar67) * iVar67;
                auVar51._4_4_ =
                     (uint)(PTR_DAT_14308f000._4_4_ < iVar78) * PTR_DAT_14308f000._4_4_ |
                     (uint)(PTR_DAT_14308f000._4_4_ >= iVar78) * iVar78;
                auVar51._8_4_ =
                     (uint)(_UNK_14308f008 < iVar80) * _UNK_14308f008 |
                     (uint)(_UNK_14308f008 >= iVar80) * iVar80;
                auVar51._12_4_ =
                     (uint)(_UNK_14308f00c < iVar82) * _UNK_14308f00c |
                     (uint)(_UNK_14308f00c >= iVar82) * iVar82;
                auVar47 = pshufb(auVar51,_DAT_14308f060);
                auVar69 = auVar91 | auVar46 | auVar57 | auVar47;
                *(undefined1 (*) [16])(uVar28 + uVar36) = auVar69;
                uVar28 = uVar28 + 0x10;
              } while (uVar28 < uVar45);
              auVar46._4_4_ = PTR_DAT_14308f000._4_4_;
              auVar46._0_4_ = (int)PTR_DAT_14308f000;
              auVar46._8_4_ = _UNK_14308f008;
              auVar46._12_4_ = _UNK_14308f00c;
              auVar91 = _DAT_14308f010;
            }
          }
          for (; uVar45 < uVar41; uVar45 = uVar45 + 1) {
            iVar43 = ((int)*(short *)(lVar31 + uVar45 * 2) + (int)*(short *)(lVar29 + uVar45 * 2) +
                     (int)*(short *)(lVar32 + uVar45 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar43 < 1) {
              iVar43 = 0;
            }
            if (0xfe < iVar43) {
              iVar43 = 0xff;
            }
            *(char *)(uVar45 + uVar36) = (char)iVar43;
          }
        }
      }
      uVar37 = uVar37 + 1;
      lVar38 = lVar38 + param_3;
    } while (uVar37 < uVar30);
  }
  return;
}


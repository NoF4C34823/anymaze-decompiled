
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a75608(int param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

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
  int in_EAX;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong in_R10;
  undefined1 uVar35;
  int in_R11D;
  int iVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong unaff_R13;
  longlong unaff_R14;
  int iVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
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
  uint uVar62;
  int iVar64;
  int iVar74;
  int iVar76;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  int iVar63;
  int iVar78;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  int iVar75;
  int iVar77;
  int iVar79;
  undefined1 auVar73 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  int iVar91;
  int iVar92;
  
  uVar24 = _UNK_14308f02c;
  uVar23 = _UNK_14308f024;
  auVar22 = _DAT_14308eff0;
  auVar21 = _DAT_14308efe0;
  lVar25 = (longlong)in_EAX;
  auVar65 = (undefined1  [16])0x0;
  auVar43._4_4_ = PTR_DAT_14308f000._4_4_;
  auVar43._0_4_ = (int)PTR_DAT_14308f000;
  auVar43._8_4_ = _UNK_14308f008;
  auVar43._12_4_ = _UNK_14308f00c;
  uVar40 = (longlong)(((ulonglong)(lVar25 >> 3) >> 0x3c) + lVar25) >> 4;
  iVar31 = in_R11D + -0x10;
  auVar44 = _DAT_14308f010;
  auVar51 = _DAT_14308eff0;
  auVar53 = _DAT_14308efe0;
  auVar42 = auVar43;
  auVar87 = _DAT_14308f010;
  do {
    auVar83 = _DAT_14308efd0;
    sVar20 = _UNK_14308efce;
    sVar19 = _UNK_14308efcc;
    sVar18 = _UNK_14308efca;
    sVar17 = _UNK_14308efc8;
    sVar16 = _UNK_14308efc6;
    sVar15 = _UNK_14308efc4;
    sVar14 = _UNK_14308efc2;
    sVar13 = _DAT_14308efc0;
    uVar34 = unaff_R13 + in_R10;
    iVar39 = 0;
    lVar29 = *(longlong *)(param_3 + param_4 * 8);
    lVar28 = *(longlong *)(param_3 + 8 + param_4 * 8);
    lVar30 = *(longlong *)(param_3 + 0x10 + param_4 * 8);
    if ((uVar34 & 0xf) == 0) {
      if (param_1 == 0) {
        uVar37 = 0;
        lVar32 = 0;
        lVar26 = 0;
        if (-1 < iVar31) {
          do {
            psVar1 = (short *)(lVar26 + lVar29);
            uVar37 = uVar37 + 1;
            psVar4 = (short *)(lVar26 + 0x10 + lVar29);
            psVar2 = (short *)(lVar26 + lVar28);
            psVar5 = (short *)(lVar26 + 0x10 + lVar28);
            psVar3 = (short *)(lVar26 + lVar30);
            psVar6 = (short *)(lVar26 + 0x10 + lVar30);
            auVar82._0_2_ = *psVar1 + *psVar2 + *psVar3 + sVar13;
            auVar82._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + sVar14;
            auVar82._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + sVar15;
            auVar82._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + sVar16;
            auVar82._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + sVar17;
            auVar82._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + sVar18;
            auVar82._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + sVar19;
            auVar82._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + sVar20;
            lVar26 = lVar26 + 0x20;
            auVar67._0_2_ = *psVar4 + *psVar5 + *psVar6 + sVar13;
            auVar67._2_2_ = psVar4[1] + psVar5[1] + psVar6[1] + sVar14;
            auVar67._4_2_ = psVar4[2] + psVar5[2] + psVar6[2] + sVar15;
            auVar67._6_2_ = psVar4[3] + psVar5[3] + psVar6[3] + sVar16;
            auVar67._8_2_ = psVar4[4] + psVar5[4] + psVar6[4] + sVar17;
            auVar67._10_2_ = psVar4[5] + psVar5[5] + psVar6[5] + sVar18;
            auVar67._12_2_ = psVar4[6] + psVar5[6] + psVar6[6] + sVar19;
            auVar67._14_2_ = psVar4[7] + psVar5[7] + psVar6[7] + sVar20;
            auVar81 = pmulhw(auVar82,auVar83);
            auVar65 = pmulhw(auVar67,auVar83);
            sVar7 = auVar81._0_2_;
            sVar8 = auVar81._2_2_;
            unaff_XMM6[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar81[2] - (0xff < sVar8);
            unaff_XMM6[0] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[0] - (0xff < sVar7);
            sVar7 = auVar81._4_2_;
            unaff_XMM6[2] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[4] - (0xff < sVar7);
            sVar7 = auVar81._6_2_;
            unaff_XMM6[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[6] - (0xff < sVar7);
            sVar7 = auVar81._8_2_;
            unaff_XMM6[4] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[8] - (0xff < sVar7);
            sVar7 = auVar81._10_2_;
            unaff_XMM6[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[10] - (0xff < sVar7);
            sVar7 = auVar81._12_2_;
            unaff_XMM6[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[0xc] - (0xff < sVar7);
            sVar7 = auVar81._14_2_;
            unaff_XMM6[7] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[0xe] - (0xff < sVar7);
            sVar7 = auVar65._0_2_;
            unaff_XMM6[8] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[0] - (0xff < sVar7);
            sVar7 = auVar65._2_2_;
            unaff_XMM6[9] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[2] - (0xff < sVar7);
            sVar7 = auVar65._4_2_;
            unaff_XMM6[10] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[4] - (0xff < sVar7);
            sVar7 = auVar65._6_2_;
            unaff_XMM6[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[6] - (0xff < sVar7);
            sVar7 = auVar65._8_2_;
            unaff_XMM6[0xc] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[8] - (0xff < sVar7);
            sVar7 = auVar65._10_2_;
            unaff_XMM6[0xd] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[10] - (0xff < sVar7);
            sVar7 = auVar65._12_2_;
            unaff_XMM6[0xe] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[0xc] - (0xff < sVar7);
            sVar7 = auVar65._14_2_;
            unaff_XMM6[0xf] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[0xe] - (0xff < sVar7);
            *(undefined1 (*) [16])(lVar32 + uVar34) = unaff_XMM6;
            lVar32 = lVar32 + 0x10;
          } while (uVar37 < uVar40);
          goto LAB_140a758af;
        }
      }
      else {
        uVar37 = 0;
        lVar32 = 0;
        lVar26 = 0;
        iVar39 = 0;
        if (-1 < iVar31) {
          do {
            psVar1 = (short *)(lVar26 + lVar29);
            uVar37 = uVar37 + 1;
            psVar4 = (short *)(lVar26 + 0x10 + lVar29);
            psVar2 = (short *)(lVar26 + lVar28);
            psVar5 = (short *)(lVar26 + 0x10 + lVar28);
            psVar3 = (short *)(lVar26 + lVar30);
            psVar6 = (short *)(lVar26 + 0x10 + lVar30);
            auVar80._0_2_ = *psVar1 + *psVar2 + *psVar3 + sVar13;
            auVar80._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + sVar14;
            auVar80._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + sVar15;
            auVar80._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + sVar16;
            auVar80._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + sVar17;
            auVar80._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + sVar18;
            auVar80._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + sVar19;
            auVar80._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + sVar20;
            lVar26 = lVar26 + 0x20;
            auVar66._0_2_ = *psVar4 + *psVar5 + *psVar6 + sVar13;
            auVar66._2_2_ = psVar4[1] + psVar5[1] + psVar6[1] + sVar14;
            auVar66._4_2_ = psVar4[2] + psVar5[2] + psVar6[2] + sVar15;
            auVar66._6_2_ = psVar4[3] + psVar5[3] + psVar6[3] + sVar16;
            auVar66._8_2_ = psVar4[4] + psVar5[4] + psVar6[4] + sVar17;
            auVar66._10_2_ = psVar4[5] + psVar5[5] + psVar6[5] + sVar18;
            auVar66._12_2_ = psVar4[6] + psVar5[6] + psVar6[6] + sVar19;
            auVar66._14_2_ = psVar4[7] + psVar5[7] + psVar6[7] + sVar20;
            auVar81 = pmulhw(auVar80,auVar83);
            auVar65 = pmulhw(auVar66,auVar83);
            sVar7 = auVar81._0_2_;
            sVar8 = auVar81._2_2_;
            unaff_XMM6[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar81[2] - (0xff < sVar8);
            unaff_XMM6[0] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[0] - (0xff < sVar7);
            sVar7 = auVar81._4_2_;
            unaff_XMM6[2] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[4] - (0xff < sVar7);
            sVar7 = auVar81._6_2_;
            unaff_XMM6[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[6] - (0xff < sVar7);
            sVar7 = auVar81._8_2_;
            unaff_XMM6[4] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[8] - (0xff < sVar7);
            sVar7 = auVar81._10_2_;
            unaff_XMM6[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[10] - (0xff < sVar7);
            sVar7 = auVar81._12_2_;
            unaff_XMM6[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[0xc] - (0xff < sVar7);
            sVar7 = auVar81._14_2_;
            unaff_XMM6[7] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[0xe] - (0xff < sVar7);
            sVar7 = auVar65._0_2_;
            unaff_XMM6[8] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[0] - (0xff < sVar7);
            sVar7 = auVar65._2_2_;
            unaff_XMM6[9] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[2] - (0xff < sVar7);
            sVar7 = auVar65._4_2_;
            unaff_XMM6[10] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[4] - (0xff < sVar7);
            sVar7 = auVar65._6_2_;
            unaff_XMM6[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[6] - (0xff < sVar7);
            sVar7 = auVar65._8_2_;
            unaff_XMM6[0xc] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[8] - (0xff < sVar7);
            sVar7 = auVar65._10_2_;
            unaff_XMM6[0xd] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[10] - (0xff < sVar7);
            sVar7 = auVar65._12_2_;
            unaff_XMM6[0xe] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[0xc] - (0xff < sVar7);
            sVar7 = auVar65._14_2_;
            unaff_XMM6[0xf] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[0xe] - (0xff < sVar7);
            *(undefined1 (*) [16])(lVar32 + uVar34) = unaff_XMM6;
            lVar32 = lVar32 + 0x10;
          } while (uVar37 < uVar40);
LAB_140a758af:
          lVar26 = uVar37 * 0x20;
          iVar39 = (int)uVar37 << 4;
          lVar29 = lVar29 + lVar26;
          lVar28 = lVar28 + lVar26;
          lVar30 = lVar30 + lVar26;
        }
      }
    }
    else {
      uVar37 = 0;
      lVar32 = 0;
      lVar26 = 0;
      if (-1 < iVar31) {
        do {
          psVar1 = (short *)(lVar26 + lVar29);
          uVar37 = uVar37 + 1;
          psVar4 = (short *)(lVar26 + 0x10 + lVar29);
          psVar2 = (short *)(lVar26 + lVar28);
          psVar5 = (short *)(lVar26 + 0x10 + lVar28);
          psVar3 = (short *)(lVar26 + lVar30);
          psVar6 = (short *)(lVar26 + 0x10 + lVar30);
          auVar81._0_2_ = *psVar1 + *psVar2 + *psVar3 + sVar13;
          auVar81._2_2_ = psVar1[1] + psVar2[1] + psVar3[1] + sVar14;
          auVar81._4_2_ = psVar1[2] + psVar2[2] + psVar3[2] + sVar15;
          auVar81._6_2_ = psVar1[3] + psVar2[3] + psVar3[3] + sVar16;
          auVar81._8_2_ = psVar1[4] + psVar2[4] + psVar3[4] + sVar17;
          auVar81._10_2_ = psVar1[5] + psVar2[5] + psVar3[5] + sVar18;
          auVar81._12_2_ = psVar1[6] + psVar2[6] + psVar3[6] + sVar19;
          auVar81._14_2_ = psVar1[7] + psVar2[7] + psVar3[7] + sVar20;
          lVar26 = lVar26 + 0x20;
          auVar65._0_2_ = *psVar4 + *psVar5 + *psVar6 + sVar13;
          auVar65._2_2_ = psVar4[1] + psVar5[1] + psVar6[1] + sVar14;
          auVar65._4_2_ = psVar4[2] + psVar5[2] + psVar6[2] + sVar15;
          auVar65._6_2_ = psVar4[3] + psVar5[3] + psVar6[3] + sVar16;
          auVar65._8_2_ = psVar4[4] + psVar5[4] + psVar6[4] + sVar17;
          auVar65._10_2_ = psVar4[5] + psVar5[5] + psVar6[5] + sVar18;
          auVar65._12_2_ = psVar4[6] + psVar5[6] + psVar6[6] + sVar19;
          auVar65._14_2_ = psVar4[7] + psVar5[7] + psVar6[7] + sVar20;
          auVar81 = pmulhw(auVar81,auVar83);
          auVar65 = pmulhw(auVar65,auVar83);
          sVar7 = auVar81._0_2_;
          sVar8 = auVar81._2_2_;
          unaff_XMM6[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar81[2] - (0xff < sVar8);
          unaff_XMM6[0] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[0] - (0xff < sVar7);
          sVar7 = auVar81._4_2_;
          unaff_XMM6[2] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[4] - (0xff < sVar7);
          sVar7 = auVar81._6_2_;
          unaff_XMM6[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[6] - (0xff < sVar7);
          sVar7 = auVar81._8_2_;
          unaff_XMM6[4] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[8] - (0xff < sVar7);
          sVar7 = auVar81._10_2_;
          unaff_XMM6[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[10] - (0xff < sVar7);
          sVar7 = auVar81._12_2_;
          unaff_XMM6[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[0xc] - (0xff < sVar7);
          sVar7 = auVar81._14_2_;
          unaff_XMM6[7] = (0 < sVar7) * (sVar7 < 0x100) * auVar81[0xe] - (0xff < sVar7);
          sVar7 = auVar65._0_2_;
          unaff_XMM6[8] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[0] - (0xff < sVar7);
          sVar7 = auVar65._2_2_;
          unaff_XMM6[9] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[2] - (0xff < sVar7);
          sVar7 = auVar65._4_2_;
          unaff_XMM6[10] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[4] - (0xff < sVar7);
          sVar7 = auVar65._6_2_;
          unaff_XMM6[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[6] - (0xff < sVar7);
          sVar7 = auVar65._8_2_;
          unaff_XMM6[0xc] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[8] - (0xff < sVar7);
          sVar7 = auVar65._10_2_;
          unaff_XMM6[0xd] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[10] - (0xff < sVar7);
          sVar7 = auVar65._12_2_;
          unaff_XMM6[0xe] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[0xc] - (0xff < sVar7);
          sVar7 = auVar65._14_2_;
          unaff_XMM6[0xf] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[0xe] - (0xff < sVar7);
          *(undefined1 (*) [16])(lVar32 + uVar34) = unaff_XMM6;
          lVar32 = lVar32 + 0x10;
        } while (uVar37 < uVar40);
        goto LAB_140a758af;
      }
    }
    if (iVar39 < in_R11D) {
      lVar33 = (longlong)iVar39;
      uVar34 = uVar34 + lVar33;
      lVar32 = lVar25 - lVar33;
      lVar26 = lVar32 * 2;
      if (((((longlong)(uVar34 - lVar29) < lVar26) && ((longlong)-(uVar34 - lVar29) < lVar32)) ||
          (((longlong)(uVar34 - lVar28) < lVar26 && ((longlong)-(uVar34 - lVar28) < lVar32)))) ||
         (((longlong)(uVar34 - lVar30) < lVar26 && ((longlong)-(uVar34 - lVar30) < lVar32)))) {
        iVar36 = 1;
        uVar62 = (uint)(in_R11D - iVar39) >> 1;
        uVar37 = 0;
        if (uVar62 != 0) {
          do {
            uVar27 = uVar37;
            iVar36 = ((int)*(short *)(lVar29 + uVar27 * 4) + (int)*(short *)(lVar28 + uVar27 * 4) +
                     (int)*(short *)(lVar30 + uVar27 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar36 < 1) {
              iVar36 = 0;
            }
            uVar35 = (undefined1)iVar36;
            if (0xfe < iVar36) {
              uVar35 = 0xff;
            }
            *(undefined1 *)(uVar34 + uVar27 * 2) = uVar35;
            iVar36 = ((int)*(short *)(lVar29 + 2 + uVar27 * 4) +
                      (int)*(short *)(lVar28 + 2 + uVar27 * 4) +
                     (int)*(short *)(lVar30 + 2 + uVar27 * 4)) * 0x1c70 + 0x8e30 >> 0x10;
            if (iVar36 < 1) {
              iVar36 = 0;
            }
            uVar35 = (undefined1)iVar36;
            if (0xfe < iVar36) {
              uVar35 = 0xff;
            }
            *(undefined1 *)(uVar34 + 1 + uVar27 * 2) = uVar35;
            uVar37 = uVar27 + 1;
          } while (uVar37 < uVar62);
          iVar36 = (int)uVar27 + 2 + (int)uVar37;
        }
        if (iVar36 - 1U < (uint)(in_R11D - iVar39)) {
          lVar26 = (longlong)iVar36;
          iVar39 = ((int)*(short *)(lVar29 + -2 + lVar26 * 2) +
                    (int)*(short *)(lVar28 + -2 + lVar26 * 2) +
                   (int)*(short *)(lVar30 + -2 + lVar26 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
          if (iVar39 < 1) {
            iVar39 = 0;
          }
          uVar35 = 0xff;
          if (iVar39 < 0xff) {
            uVar35 = (undefined1)iVar39;
          }
          *(undefined1 *)(lVar33 + unaff_R13 + lVar26 + -1 + in_R10) = uVar35;
        }
      }
      else {
        uVar37 = (lVar25 - (lVar33 + 1)) + 1;
        if ((longlong)uVar37 < 0x10) {
LAB_140a7600f:
          uVar41 = 0;
        }
        else {
          uVar27 = uVar34 & 0xf;
          if (uVar27 != 0) {
            uVar27 = 0x10 - uVar27;
          }
          if ((longlong)uVar37 < (longlong)(uVar27 + 0x10)) goto LAB_140a7600f;
          uVar38 = 0;
          uVar41 = (ulonglong)(int)((int)uVar37 - ((int)uVar37 - (int)uVar27 & 0xfU));
          if (uVar27 != 0) {
            do {
              iVar39 = ((int)*(short *)(lVar29 + uVar38 * 2) + (int)*(short *)(lVar28 + uVar38 * 2)
                       + (int)*(short *)(lVar30 + uVar38 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
              if (iVar39 < 1) {
                iVar39 = 0;
              }
              uVar35 = (undefined1)iVar39;
              if (0xfe < iVar39) {
                uVar35 = 0xff;
              }
              *(undefined1 *)(uVar38 + uVar34) = uVar35;
              uVar38 = uVar38 + 1;
            } while (uVar38 < uVar27);
          }
          iVar39 = auVar22._0_4_;
          iVar91 = auVar22._8_4_;
          iVar92 = auVar22._12_4_;
          iVar36 = auVar22._4_4_;
          uVar62 = auVar21._0_4_;
          uVar38 = auVar21._8_8_;
          if ((lVar30 + uVar27 * 2 & 0xf) == 0) {
            do {
              auVar51 = pmovsxwd(auVar51,*(undefined8 *)(lVar29 + uVar27 * 2));
              auVar65 = pmovsxwd(auVar65,*(undefined8 *)(lVar28 + uVar27 * 2));
              auVar81 = pmovsxwd(unaff_XMM6,*(undefined8 *)(lVar28 + 8 + uVar27 * 2));
              auVar83 = pmovsxwd(auVar65,*(undefined8 *)(lVar30 + uVar27 * 2));
              auVar53 = pmovsxwd(auVar53,*(undefined8 *)(lVar29 + 8 + uVar27 * 2));
              auVar52._0_4_ = auVar51._0_4_ + auVar65._0_4_ + auVar83._0_4_;
              auVar52._4_4_ = auVar51._4_4_ + auVar65._4_4_ + auVar83._4_4_;
              auVar52._8_4_ = auVar51._8_4_ + auVar65._8_4_ + auVar83._8_4_;
              auVar52._12_4_ = auVar51._12_4_ + auVar65._12_4_ + auVar83._12_4_;
              auVar51 = pmovsxwd(auVar83,*(undefined8 *)(lVar30 + 8 + uVar27 * 2));
              auVar58._0_4_ = auVar53._0_4_ + auVar81._0_4_ + auVar51._0_4_;
              auVar58._4_4_ = auVar53._4_4_ + auVar81._4_4_ + auVar51._4_4_;
              auVar58._8_4_ = auVar53._8_4_ + auVar81._8_4_ + auVar51._8_4_;
              auVar58._12_4_ = auVar53._12_4_ + auVar81._12_4_ + auVar51._12_4_;
              auVar53 = pmovsxwd(auVar81,*(undefined8 *)(lVar29 + 0x10 + uVar27 * 2));
              auVar71._0_8_ = (ulonglong)uVar62 * (ulonglong)auVar58._0_4_;
              auVar71._8_8_ = (uVar38 & 0xffffffff) * (ulonglong)auVar58._8_4_;
              auVar44 = pmovsxwd(auVar44,*(undefined8 *)(lVar28 + 0x10 + uVar27 * 2));
              auVar51 = pmovsxwd(auVar43,*(undefined8 *)(lVar28 + 0x18 + uVar27 * 2));
              auVar43 = pmovsxwd(auVar44,*(undefined8 *)(lVar30 + 0x10 + uVar27 * 2));
              auVar84._0_4_ = auVar53._0_4_ + auVar44._0_4_ + auVar43._0_4_;
              auVar84._4_4_ = auVar53._4_4_ + auVar44._4_4_ + auVar43._4_4_;
              auVar84._8_4_ = auVar53._8_4_ + auVar44._8_4_ + auVar43._8_4_;
              auVar84._12_4_ = auVar53._12_4_ + auVar44._12_4_ + auVar43._12_4_;
              auVar43 = pmovsxwd(auVar43,*(undefined8 *)(lVar29 + 0x18 + uVar27 * 2));
              auVar72._0_8_ = (ulonglong)auVar58._4_4_ * (ulonglong)uVar23 << 0x20;
              auVar72._8_8_ = (auVar58._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
              auVar44 = pmovsxwd(auVar51,*(undefined8 *)(lVar30 + 0x18 + uVar27 * 2));
              auVar53._0_4_ = auVar43._0_4_ + auVar51._0_4_ + auVar44._0_4_;
              auVar53._4_4_ = auVar43._4_4_ + auVar51._4_4_ + auVar44._4_4_;
              auVar53._8_4_ = auVar43._8_4_ + auVar51._8_4_ + auVar44._8_4_;
              auVar53._12_4_ = auVar43._12_4_ + auVar51._12_4_ + auVar44._12_4_;
              auVar72 = auVar71 & auVar87 | auVar72;
              auVar59._0_8_ = (ulonglong)uVar62 * (ulonglong)auVar84._0_4_;
              auVar59._8_8_ = (uVar38 & 0xffffffff) * (ulonglong)auVar84._8_4_;
              auVar83._0_8_ = (ulonglong)uVar62 * (ulonglong)auVar52._0_4_;
              auVar83._8_8_ = (uVar38 & 0xffffffff) * (ulonglong)auVar52._8_4_;
              auVar60._0_8_ = (ulonglong)auVar84._4_4_ * (ulonglong)uVar23 << 0x20;
              auVar60._8_8_ = (auVar84._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
              auVar60 = auVar59 & auVar87 | auVar60;
              auVar85._0_8_ = (ulonglong)uVar62 * (ulonglong)auVar53._0_4_;
              auVar85._8_8_ = (uVar38 & 0xffffffff) * (ulonglong)auVar53._8_4_;
              auVar48._0_8_ = (ulonglong)auVar52._4_4_ * (ulonglong)uVar23 << 0x20;
              auVar48._8_8_ = (auVar52._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
              auVar48 = auVar83 & auVar87 | auVar48;
              auVar51 = (undefined1  [16])0x0;
              iVar78 = auVar48._0_4_ + iVar39 >> 0x10;
              iVar76 = auVar48._4_4_ + iVar36 >> 0x10;
              iVar74 = auVar48._8_4_ + iVar91 >> 0x10;
              iVar63 = auVar48._12_4_ + iVar92 >> 0x10;
              auVar44._0_8_ = (ulonglong)auVar53._4_4_ * (ulonglong)uVar23 << 0x20;
              auVar44._8_8_ = (auVar53._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
              iVar64 = auVar72._0_4_ + iVar39 >> 0x10;
              iVar75 = auVar72._4_4_ + iVar36 >> 0x10;
              iVar77 = auVar72._8_4_ + iVar91 >> 0x10;
              iVar79 = auVar72._12_4_ + iVar92 >> 0x10;
              iVar78 = (uint)(-1 < iVar78) * iVar78;
              iVar76 = (uint)(-1 < iVar76) * iVar76;
              iVar74 = (uint)(-1 < iVar74) * iVar74;
              iVar63 = (uint)(-1 < iVar63) * iVar63;
              iVar9 = auVar42._0_4_;
              auVar49._0_4_ = (uint)(iVar9 < iVar78) * iVar9 | (uint)(iVar9 >= iVar78) * iVar78;
              iVar10 = auVar42._4_4_;
              auVar49._4_4_ = (uint)(iVar10 < iVar76) * iVar10 | (uint)(iVar10 >= iVar76) * iVar76;
              iVar11 = auVar42._8_4_;
              auVar49._8_4_ = (uint)(iVar11 < iVar74) * iVar11 | (uint)(iVar11 >= iVar74) * iVar74;
              iVar12 = auVar42._12_4_;
              auVar49._12_4_ = (uint)(iVar12 < iVar63) * iVar12 | (uint)(iVar12 >= iVar63) * iVar63;
              auVar53 = auVar85 & auVar87 | auVar44;
              iVar64 = (uint)(-1 < iVar64) * iVar64;
              iVar75 = (uint)(-1 < iVar75) * iVar75;
              iVar77 = (uint)(-1 < iVar77) * iVar77;
              iVar79 = (uint)(-1 < iVar79) * iVar79;
              auVar43 = pshufb(auVar49,_DAT_14308f030);
              iVar74 = auVar60._0_4_ + iVar39 >> 0x10;
              iVar63 = auVar60._4_4_ + iVar36 >> 0x10;
              iVar78 = auVar60._8_4_ + iVar91 >> 0x10;
              iVar76 = auVar60._12_4_ + iVar92 >> 0x10;
              auVar73._0_4_ = (uint)(iVar9 < iVar64) * iVar9 | (uint)(iVar9 >= iVar64) * iVar64;
              auVar73._4_4_ = (uint)(iVar10 < iVar75) * iVar10 | (uint)(iVar10 >= iVar75) * iVar75;
              auVar73._8_4_ = (uint)(iVar11 < iVar77) * iVar11 | (uint)(iVar11 >= iVar77) * iVar77;
              auVar73._12_4_ = (uint)(iVar12 < iVar79) * iVar12 | (uint)(iVar12 >= iVar79) * iVar79;
              iVar77 = auVar53._0_4_ + iVar39 >> 0x10;
              iVar79 = auVar53._4_4_ + iVar36 >> 0x10;
              iVar64 = auVar53._8_4_ + iVar91 >> 0x10;
              iVar75 = auVar53._12_4_ + iVar92 >> 0x10;
              iVar74 = (uint)(-1 < iVar74) * iVar74;
              iVar63 = (uint)(-1 < iVar63) * iVar63;
              iVar78 = (uint)(-1 < iVar78) * iVar78;
              iVar76 = (uint)(-1 < iVar76) * iVar76;
              auVar61._0_4_ = (uint)(iVar9 < iVar74) * iVar9 | (uint)(iVar9 >= iVar74) * iVar74;
              auVar61._4_4_ = (uint)(iVar10 < iVar63) * iVar10 | (uint)(iVar10 >= iVar63) * iVar63;
              auVar61._8_4_ = (uint)(iVar11 < iVar78) * iVar11 | (uint)(iVar11 >= iVar78) * iVar78;
              auVar61._12_4_ = (uint)(iVar12 < iVar76) * iVar12 | (uint)(iVar12 >= iVar76) * iVar76;
              iVar77 = (uint)(-1 < iVar77) * iVar77;
              iVar79 = (uint)(-1 < iVar79) * iVar79;
              iVar64 = (uint)(-1 < iVar64) * iVar64;
              iVar75 = (uint)(-1 < iVar75) * iVar75;
              auVar65 = pshufb(auVar73,_DAT_14308f040);
              auVar86._0_4_ = (uint)(iVar9 < iVar77) * iVar9 | (uint)(iVar9 >= iVar77) * iVar77;
              auVar86._4_4_ = (uint)(iVar10 < iVar79) * iVar10 | (uint)(iVar10 >= iVar79) * iVar79;
              auVar86._8_4_ = (uint)(iVar11 < iVar64) * iVar11 | (uint)(iVar11 >= iVar64) * iVar64;
              auVar86._12_4_ = (uint)(iVar12 < iVar75) * iVar12 | (uint)(iVar12 >= iVar75) * iVar75;
              auVar53 = pshufb(auVar61,_DAT_14308f050);
              unaff_XMM6 = pshufb(auVar86,_DAT_14308f060);
              auVar43 = auVar43 | auVar65 | auVar53 | unaff_XMM6;
              *(undefined1 (*) [16])(uVar27 + uVar34) = auVar43;
              uVar27 = uVar27 + 0x10;
            } while (uVar27 < uVar41);
          }
          else {
            do {
              auVar87 = lddqu(auVar42,*(undefined1 (*) [16])(lVar30 + uVar27 * 2));
              auVar42 = pmovsxwd(auVar44,*(undefined8 *)(lVar29 + uVar27 * 2));
              auVar83 = pmovsxwd(unaff_XMM6,auVar87);
              auVar43 = pmovsxwd(auVar43,*(undefined8 *)(lVar28 + uVar27 * 2));
              auVar81 = pmovsxwd(auVar87 >> 0x40,auVar87 >> 0x40);
              auVar44 = pmovsxwd(auVar43,*(undefined8 *)(lVar28 + 8 + uVar27 * 2));
              auVar53 = pmovsxwd(auVar53,*(undefined8 *)(lVar29 + 8 + uVar27 * 2));
              auVar87._0_4_ = auVar42._0_4_ + auVar43._0_4_ + auVar83._0_4_;
              auVar87._4_4_ = auVar42._4_4_ + auVar43._4_4_ + auVar83._4_4_;
              auVar87._8_4_ = auVar42._8_4_ + auVar43._8_4_ + auVar83._8_4_;
              auVar87._12_4_ = auVar42._12_4_ + auVar43._12_4_ + auVar83._12_4_;
              auVar43 = pmovsxwd(auVar44,*(undefined8 *)(lVar29 + 0x10 + uVar27 * 2));
              auVar65 = lddqu(auVar65,*(undefined1 (*) [16])(lVar30 + 0x10 + uVar27 * 2));
              auVar54._0_4_ = auVar53._0_4_ + auVar44._0_4_ + auVar81._0_4_;
              auVar54._4_4_ = auVar53._4_4_ + auVar44._4_4_ + auVar81._4_4_;
              auVar54._8_4_ = auVar53._8_4_ + auVar44._8_4_ + auVar81._8_4_;
              auVar54._12_4_ = auVar53._12_4_ + auVar44._12_4_ + auVar81._12_4_;
              auVar53 = pmovsxwd(auVar81,*(undefined8 *)(lVar28 + 0x10 + uVar27 * 2));
              unaff_XMM6 = pmovsxwd(auVar83,*(undefined8 *)(lVar28 + 0x18 + uVar27 * 2));
              auVar83 = pmovsxwd(auVar53,auVar65);
              auVar42 = pmovsxwd(auVar51,*(undefined8 *)(lVar29 + 0x18 + uVar27 * 2));
              auVar44 = pmovsxwd(auVar65 >> 0x40,auVar65 >> 0x40);
              auVar45._0_4_ = auVar43._0_4_ + auVar53._0_4_ + auVar83._0_4_;
              auVar45._4_4_ = auVar43._4_4_ + auVar53._4_4_ + auVar83._4_4_;
              auVar45._8_4_ = auVar43._8_4_ + auVar53._8_4_ + auVar83._8_4_;
              auVar45._12_4_ = auVar43._12_4_ + auVar53._12_4_ + auVar83._12_4_;
              auVar50._0_4_ = auVar42._0_4_ + unaff_XMM6._0_4_ + auVar44._0_4_;
              auVar50._4_4_ = auVar42._4_4_ + unaff_XMM6._4_4_ + auVar44._4_4_;
              auVar50._8_4_ = auVar42._8_4_ + unaff_XMM6._8_4_ + auVar44._8_4_;
              auVar50._12_4_ = auVar42._12_4_ + unaff_XMM6._12_4_ + auVar44._12_4_;
              auVar68._0_8_ = (ulonglong)uVar62 * (ulonglong)auVar87._0_4_;
              auVar68._8_8_ = (uVar38 & 0xffffffff) * (ulonglong)auVar87._8_4_;
              auVar69._0_8_ = (ulonglong)auVar87._4_4_ * (ulonglong)uVar23 << 0x20;
              auVar69._8_8_ = (auVar87._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
              auVar69 = auVar68 & _DAT_14308f010 | auVar69;
              iVar63 = auVar69._0_4_ + iVar39 >> 0x10;
              iVar74 = auVar69._4_4_ + iVar36 >> 0x10;
              iVar76 = auVar69._8_4_ + iVar91 >> 0x10;
              iVar78 = auVar69._12_4_ + iVar92 >> 0x10;
              iVar63 = (uint)(-1 < iVar63) * iVar63;
              iVar74 = (uint)(-1 < iVar74) * iVar74;
              iVar76 = (uint)(-1 < iVar76) * iVar76;
              iVar78 = (uint)(-1 < iVar78) * iVar78;
              auVar88._0_8_ = (ulonglong)uVar62 * (ulonglong)auVar54._0_4_;
              auVar88._8_8_ = (uVar38 & 0xffffffff) * (ulonglong)auVar54._8_4_;
              auVar70._0_4_ =
                   (uint)((int)PTR_DAT_14308f000 < iVar63) * (int)PTR_DAT_14308f000 |
                   (uint)((int)PTR_DAT_14308f000 >= iVar63) * iVar63;
              auVar70._4_4_ =
                   (uint)(PTR_DAT_14308f000._4_4_ < iVar74) * PTR_DAT_14308f000._4_4_ |
                   (uint)(PTR_DAT_14308f000._4_4_ >= iVar74) * iVar74;
              auVar70._8_4_ =
                   (uint)(_UNK_14308f008 < iVar76) * _UNK_14308f008 |
                   (uint)(_UNK_14308f008 >= iVar76) * iVar76;
              auVar70._12_4_ =
                   (uint)(_UNK_14308f00c < iVar78) * _UNK_14308f00c |
                   (uint)(_UNK_14308f00c >= iVar78) * iVar78;
              auVar87 = pshufb(auVar70,_DAT_14308f030);
              auVar89._0_8_ = (ulonglong)auVar54._4_4_ * (ulonglong)uVar23 << 0x20;
              auVar89._8_8_ = (auVar54._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
              auVar89 = auVar88 & _DAT_14308f010 | auVar89;
              auVar55._0_8_ = (ulonglong)uVar62 * (ulonglong)auVar45._0_4_;
              auVar55._8_8_ = (uVar38 & 0xffffffff) * (ulonglong)auVar45._8_4_;
              iVar74 = auVar89._0_4_ + iVar39 >> 0x10;
              iVar76 = auVar89._4_4_ + iVar36 >> 0x10;
              iVar63 = auVar89._8_4_ + iVar91 >> 0x10;
              iVar78 = auVar89._12_4_ + iVar92 >> 0x10;
              auVar56._0_8_ = (ulonglong)auVar45._4_4_ * (ulonglong)uVar23 << 0x20;
              auVar56._8_8_ = (auVar45._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
              iVar74 = (uint)(-1 < iVar74) * iVar74;
              iVar76 = (uint)(-1 < iVar76) * iVar76;
              iVar63 = (uint)(-1 < iVar63) * iVar63;
              iVar78 = (uint)(-1 < iVar78) * iVar78;
              auVar56 = auVar55 & _DAT_14308f010 | auVar56;
              auVar90._0_4_ =
                   (uint)((int)PTR_DAT_14308f000 < iVar74) * (int)PTR_DAT_14308f000 |
                   (uint)((int)PTR_DAT_14308f000 >= iVar74) * iVar74;
              auVar90._4_4_ =
                   (uint)(PTR_DAT_14308f000._4_4_ < iVar76) * PTR_DAT_14308f000._4_4_ |
                   (uint)(PTR_DAT_14308f000._4_4_ >= iVar76) * iVar76;
              auVar90._8_4_ =
                   (uint)(_UNK_14308f008 < iVar63) * _UNK_14308f008 |
                   (uint)(_UNK_14308f008 >= iVar63) * iVar63;
              auVar90._12_4_ =
                   (uint)(_UNK_14308f00c < iVar78) * _UNK_14308f00c |
                   (uint)(_UNK_14308f00c >= iVar78) * iVar78;
              auVar46._0_8_ = (ulonglong)uVar62 * (ulonglong)auVar50._0_4_;
              auVar46._8_8_ = (uVar38 & 0xffffffff) * (ulonglong)auVar50._8_4_;
              auVar42 = pshufb(auVar90,_DAT_14308f040);
              iVar63 = auVar56._0_4_ + iVar39 >> 0x10;
              iVar74 = auVar56._4_4_ + iVar36 >> 0x10;
              iVar76 = auVar56._8_4_ + iVar91 >> 0x10;
              iVar78 = auVar56._12_4_ + iVar92 >> 0x10;
              auVar51._0_8_ = (ulonglong)auVar50._4_4_ * (ulonglong)uVar23 << 0x20;
              auVar51._8_8_ = (auVar50._8_8_ >> 0x20) * (ulonglong)uVar24 << 0x20;
              iVar63 = (uint)(-1 < iVar63) * iVar63;
              iVar74 = (uint)(-1 < iVar74) * iVar74;
              iVar76 = (uint)(-1 < iVar76) * iVar76;
              iVar78 = (uint)(-1 < iVar78) * iVar78;
              auVar44 = (undefined1  [16])0x0;
              auVar43 = auVar46 & _DAT_14308f010 | auVar51;
              auVar57._0_4_ =
                   (uint)((int)PTR_DAT_14308f000 < iVar63) * (int)PTR_DAT_14308f000 |
                   (uint)((int)PTR_DAT_14308f000 >= iVar63) * iVar63;
              auVar57._4_4_ =
                   (uint)(PTR_DAT_14308f000._4_4_ < iVar74) * PTR_DAT_14308f000._4_4_ |
                   (uint)(PTR_DAT_14308f000._4_4_ >= iVar74) * iVar74;
              auVar57._8_4_ =
                   (uint)(_UNK_14308f008 < iVar76) * _UNK_14308f008 |
                   (uint)(_UNK_14308f008 >= iVar76) * iVar76;
              auVar57._12_4_ =
                   (uint)(_UNK_14308f00c < iVar78) * _UNK_14308f00c |
                   (uint)(_UNK_14308f00c >= iVar78) * iVar78;
              auVar53 = pshufb(auVar57,_DAT_14308f050);
              iVar63 = auVar43._0_4_ + iVar39 >> 0x10;
              iVar74 = auVar43._4_4_ + iVar36 >> 0x10;
              iVar76 = auVar43._8_4_ + iVar91 >> 0x10;
              iVar78 = auVar43._12_4_ + iVar92 >> 0x10;
              iVar63 = (uint)(-1 < iVar63) * iVar63;
              iVar74 = (uint)(-1 < iVar74) * iVar74;
              iVar76 = (uint)(-1 < iVar76) * iVar76;
              iVar78 = (uint)(-1 < iVar78) * iVar78;
              auVar47._0_4_ =
                   (uint)((int)PTR_DAT_14308f000 < iVar63) * (int)PTR_DAT_14308f000 |
                   (uint)((int)PTR_DAT_14308f000 >= iVar63) * iVar63;
              auVar47._4_4_ =
                   (uint)(PTR_DAT_14308f000._4_4_ < iVar74) * PTR_DAT_14308f000._4_4_ |
                   (uint)(PTR_DAT_14308f000._4_4_ >= iVar74) * iVar74;
              auVar47._8_4_ =
                   (uint)(_UNK_14308f008 < iVar76) * _UNK_14308f008 |
                   (uint)(_UNK_14308f008 >= iVar76) * iVar76;
              auVar47._12_4_ =
                   (uint)(_UNK_14308f00c < iVar78) * _UNK_14308f00c |
                   (uint)(_UNK_14308f00c >= iVar78) * iVar78;
              auVar43 = pshufb(auVar47,_DAT_14308f060);
              auVar65 = auVar87 | auVar42 | auVar53 | auVar43;
              *(undefined1 (*) [16])(uVar27 + uVar34) = auVar65;
              uVar27 = uVar27 + 0x10;
            } while (uVar27 < uVar41);
            auVar42._4_4_ = PTR_DAT_14308f000._4_4_;
            auVar42._0_4_ = (int)PTR_DAT_14308f000;
            auVar42._8_4_ = _UNK_14308f008;
            auVar42._12_4_ = _UNK_14308f00c;
            auVar87 = _DAT_14308f010;
          }
        }
        for (; uVar41 < uVar37; uVar41 = uVar41 + 1) {
          iVar39 = ((int)*(short *)(lVar29 + uVar41 * 2) + (int)*(short *)(lVar28 + uVar41 * 2) +
                   (int)*(short *)(lVar30 + uVar41 * 2)) * 0x1c70 + 0x8e30 >> 0x10;
          if (iVar39 < 1) {
            iVar39 = 0;
          }
          if (0xfe < iVar39) {
            iVar39 = 0xff;
          }
          *(char *)(uVar41 + uVar34) = (char)iVar39;
        }
      }
    }
    param_4 = param_4 + 1;
    in_R10 = in_R10 + unaff_R14;
    if (param_2 <= param_4) {
      return;
    }
  } while( true );
}


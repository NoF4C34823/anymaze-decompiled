
void FUN_140447f80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  ushort uVar66;
  ushort uVar67;
  ushort uVar68;
  ushort uVar69;
  ushort uVar70;
  ushort uVar71;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  ushort uVar75;
  ushort uVar76;
  ushort uVar77;
  ushort uVar78;
  ushort uVar79;
  ushort uVar80;
  ushort uVar81;
  ushort uVar82;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  
  lVar31 = 0;
  param_9 = param_7 * param_8 + param_9;
  if (0 < param_6) {
    lVar3 = param_7 * 2 + 2;
    lVar33 = 0;
    lVar32 = 0;
    do {
      lVar34 = param_1 + lVar32;
      lVar23 = 0;
      puVar22 = (ushort *)(param_3 + lVar33);
      if (0 < (longlong)(param_5 & 0xffffffffffffffc0)) {
        do {
          auStack_58._0_2_ = 0;
          auStack_58._2_2_ = 0;
          auStack_58._4_2_ = 0;
          auStack_58._6_2_ = 0;
          auStack_58._8_2_ = 0;
          auStack_58._10_2_ = 0;
          auStack_58._12_2_ = 0;
          auStack_58._14_2_ = 0;
          lVar28 = 0;
          uVar43 = 0;
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar47 = 0;
          uVar48 = 0;
          uVar49 = 0;
          uVar50 = 0;
          lVar29 = 0;
          lVar25 = 0;
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
          uVar58 = 0;
          lVar26 = 0;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          uVar67 = 0;
          uVar68 = 0;
          uVar69 = 0;
          uVar70 = 0;
          uVar71 = 0;
          uVar72 = 0;
          uVar73 = 0;
          uVar74 = 0;
          uVar75 = 0;
          uVar76 = 0;
          uVar77 = 0;
          uVar78 = 0;
          uVar79 = 0;
          uVar80 = 0;
          uVar81 = 0;
          uVar82 = 0;
          uVar35 = 0;
          uVar36 = 0;
          uVar37 = 0;
          uVar38 = 0;
          uVar39 = 0;
          uVar40 = 0;
          uVar41 = 0;
          uVar42 = 0;
          auStack_68._0_8_ = 0;
          auStack_68._8_8_ = 0;
          if (0 < param_8) {
            auStack_68 = (undefined1  [16])0x0;
            auStack_58 = (undefined1  [16])0x0;
            do {
              uVar30 = (ulonglong)*(ushort *)(param_9 + lVar29 * 2);
              lVar27 = 0;
              if (uVar30 != 0) {
                lVar1 = lVar34 + lVar25;
                do {
                  uVar24 = (ulonglong)*(ushort *)(param_9 + lVar26 + 2 + lVar27 * 2);
                  lVar27 = lVar27 + 1;
                  puVar2 = (ushort *)(lVar1 + uVar24 * 2);
                  uVar6 = *puVar2;
                  uVar7 = puVar2[1];
                  uVar8 = puVar2[2];
                  uVar9 = puVar2[3];
                  uVar10 = puVar2[4];
                  uVar11 = puVar2[5];
                  uVar12 = puVar2[6];
                  uVar13 = puVar2[7];
                  puVar2 = (ushort *)(lVar1 + 0x10 + uVar24 * 2);
                  uVar14 = *puVar2;
                  uVar15 = puVar2[1];
                  uVar16 = puVar2[2];
                  uVar17 = puVar2[3];
                  uVar18 = puVar2[4];
                  uVar19 = puVar2[5];
                  uVar20 = puVar2[6];
                  uVar21 = puVar2[7];
                  auStack_58._2_2_ =
                       ((ushort)auStack_58._2_2_ < uVar7) * uVar7 |
                       (ushort)((ushort)auStack_58._2_2_ >= uVar7) * auStack_58._2_2_;
                  auStack_58._0_2_ =
                       ((ushort)auStack_58._0_2_ < uVar6) * uVar6 |
                       (ushort)((ushort)auStack_58._0_2_ >= uVar6) * auStack_58._0_2_;
                  auStack_58._4_2_ =
                       ((ushort)auStack_58._4_2_ < uVar8) * uVar8 |
                       (ushort)((ushort)auStack_58._4_2_ >= uVar8) * auStack_58._4_2_;
                  auStack_58._6_2_ =
                       ((ushort)auStack_58._6_2_ < uVar9) * uVar9 |
                       (ushort)((ushort)auStack_58._6_2_ >= uVar9) * auStack_58._6_2_;
                  auStack_58._8_2_ =
                       ((ushort)auStack_58._8_2_ < uVar10) * uVar10 |
                       (ushort)((ushort)auStack_58._8_2_ >= uVar10) * auStack_58._8_2_;
                  auStack_58._10_2_ =
                       ((ushort)auStack_58._10_2_ < uVar11) * uVar11 |
                       (ushort)((ushort)auStack_58._10_2_ >= uVar11) * auStack_58._10_2_;
                  auStack_58._12_2_ =
                       ((ushort)auStack_58._12_2_ < uVar12) * uVar12 |
                       (ushort)((ushort)auStack_58._12_2_ >= uVar12) * auStack_58._12_2_;
                  auStack_58._14_2_ =
                       ((ushort)auStack_58._14_2_ < uVar13) * uVar13 |
                       (ushort)((ushort)auStack_58._14_2_ >= uVar13) * auStack_58._14_2_;
                  uVar43 = (uVar43 < uVar14) * uVar14 | (uVar43 >= uVar14) * uVar43;
                  uVar44 = (uVar44 < uVar15) * uVar15 | (uVar44 >= uVar15) * uVar44;
                  uVar45 = (uVar45 < uVar16) * uVar16 | (uVar45 >= uVar16) * uVar45;
                  uVar46 = (uVar46 < uVar17) * uVar17 | (uVar46 >= uVar17) * uVar46;
                  uVar47 = (uVar47 < uVar18) * uVar18 | (uVar47 >= uVar18) * uVar47;
                  uVar48 = (uVar48 < uVar19) * uVar19 | (uVar48 >= uVar19) * uVar48;
                  uVar49 = (uVar49 < uVar20) * uVar20 | (uVar49 >= uVar20) * uVar49;
                  uVar50 = (uVar50 < uVar21) * uVar21 | (uVar50 >= uVar21) * uVar50;
                  puVar2 = (ushort *)(lVar1 + 0x20 + uVar24 * 2);
                  uVar6 = *puVar2;
                  uVar7 = puVar2[1];
                  uVar8 = puVar2[2];
                  uVar9 = puVar2[3];
                  uVar10 = puVar2[4];
                  uVar11 = puVar2[5];
                  uVar12 = puVar2[6];
                  uVar13 = puVar2[7];
                  puVar2 = (ushort *)(lVar1 + 0x30 + uVar24 * 2);
                  uVar14 = *puVar2;
                  uVar15 = puVar2[1];
                  uVar16 = puVar2[2];
                  uVar17 = puVar2[3];
                  uVar18 = puVar2[4];
                  uVar19 = puVar2[5];
                  uVar20 = puVar2[6];
                  uVar21 = puVar2[7];
                  uVar51 = (uVar51 < uVar6) * uVar6 | (uVar51 >= uVar6) * uVar51;
                  uVar52 = (uVar52 < uVar7) * uVar7 | (uVar52 >= uVar7) * uVar52;
                  uVar53 = (uVar53 < uVar8) * uVar8 | (uVar53 >= uVar8) * uVar53;
                  uVar54 = (uVar54 < uVar9) * uVar9 | (uVar54 >= uVar9) * uVar54;
                  uVar55 = (uVar55 < uVar10) * uVar10 | (uVar55 >= uVar10) * uVar55;
                  uVar56 = (uVar56 < uVar11) * uVar11 | (uVar56 >= uVar11) * uVar56;
                  uVar57 = (uVar57 < uVar12) * uVar12 | (uVar57 >= uVar12) * uVar57;
                  uVar58 = (uVar58 < uVar13) * uVar13 | (uVar58 >= uVar13) * uVar58;
                  puVar2 = (ushort *)(lVar1 + 0x40 + uVar24 * 2);
                  uVar6 = *puVar2;
                  uVar7 = puVar2[1];
                  uVar8 = puVar2[2];
                  uVar9 = puVar2[3];
                  uVar10 = puVar2[4];
                  uVar11 = puVar2[5];
                  uVar12 = puVar2[6];
                  uVar13 = puVar2[7];
                  uVar59 = (uVar59 < uVar14) * uVar14 | (uVar59 >= uVar14) * uVar59;
                  uVar60 = (uVar60 < uVar15) * uVar15 | (uVar60 >= uVar15) * uVar60;
                  uVar61 = (uVar61 < uVar16) * uVar16 | (uVar61 >= uVar16) * uVar61;
                  uVar62 = (uVar62 < uVar17) * uVar17 | (uVar62 >= uVar17) * uVar62;
                  uVar63 = (uVar63 < uVar18) * uVar18 | (uVar63 >= uVar18) * uVar63;
                  uVar64 = (uVar64 < uVar19) * uVar19 | (uVar64 >= uVar19) * uVar64;
                  uVar65 = (uVar65 < uVar20) * uVar20 | (uVar65 >= uVar20) * uVar65;
                  uVar66 = (uVar66 < uVar21) * uVar21 | (uVar66 >= uVar21) * uVar66;
                  puVar2 = (ushort *)(lVar1 + 0x50 + uVar24 * 2);
                  uVar14 = *puVar2;
                  uVar15 = puVar2[1];
                  uVar16 = puVar2[2];
                  uVar17 = puVar2[3];
                  uVar18 = puVar2[4];
                  uVar19 = puVar2[5];
                  uVar20 = puVar2[6];
                  uVar21 = puVar2[7];
                  uVar67 = (uVar67 < uVar6) * uVar6 | (uVar67 >= uVar6) * uVar67;
                  uVar68 = (uVar68 < uVar7) * uVar7 | (uVar68 >= uVar7) * uVar68;
                  uVar69 = (uVar69 < uVar8) * uVar8 | (uVar69 >= uVar8) * uVar69;
                  uVar70 = (uVar70 < uVar9) * uVar9 | (uVar70 >= uVar9) * uVar70;
                  uVar71 = (uVar71 < uVar10) * uVar10 | (uVar71 >= uVar10) * uVar71;
                  uVar72 = (uVar72 < uVar11) * uVar11 | (uVar72 >= uVar11) * uVar72;
                  uVar73 = (uVar73 < uVar12) * uVar12 | (uVar73 >= uVar12) * uVar73;
                  uVar74 = (uVar74 < uVar13) * uVar13 | (uVar74 >= uVar13) * uVar74;
                  puVar2 = (ushort *)(lVar1 + 0x60 + uVar24 * 2);
                  uVar6 = *puVar2;
                  uVar7 = puVar2[1];
                  uVar8 = puVar2[2];
                  uVar9 = puVar2[3];
                  uVar10 = puVar2[4];
                  uVar11 = puVar2[5];
                  uVar12 = puVar2[6];
                  uVar13 = puVar2[7];
                  uVar75 = (uVar75 < uVar14) * uVar14 | (uVar75 >= uVar14) * uVar75;
                  uVar76 = (uVar76 < uVar15) * uVar15 | (uVar76 >= uVar15) * uVar76;
                  uVar77 = (uVar77 < uVar16) * uVar16 | (uVar77 >= uVar16) * uVar77;
                  uVar78 = (uVar78 < uVar17) * uVar17 | (uVar78 >= uVar17) * uVar78;
                  uVar79 = (uVar79 < uVar18) * uVar18 | (uVar79 >= uVar18) * uVar79;
                  uVar80 = (uVar80 < uVar19) * uVar19 | (uVar80 >= uVar19) * uVar80;
                  uVar81 = (uVar81 < uVar20) * uVar20 | (uVar81 >= uVar20) * uVar81;
                  uVar82 = (uVar82 < uVar21) * uVar21 | (uVar82 >= uVar21) * uVar82;
                  puVar2 = (ushort *)(lVar1 + 0x70 + uVar24 * 2);
                  uVar14 = *puVar2;
                  uVar15 = puVar2[1];
                  uVar16 = puVar2[2];
                  uVar17 = puVar2[3];
                  uVar18 = puVar2[4];
                  uVar19 = puVar2[5];
                  uVar20 = puVar2[6];
                  uVar21 = puVar2[7];
                  uVar35 = (uVar35 < uVar6) * uVar6 | (uVar35 >= uVar6) * uVar35;
                  uVar36 = (uVar36 < uVar7) * uVar7 | (uVar36 >= uVar7) * uVar36;
                  uVar37 = (uVar37 < uVar8) * uVar8 | (uVar37 >= uVar8) * uVar37;
                  uVar38 = (uVar38 < uVar9) * uVar9 | (uVar38 >= uVar9) * uVar38;
                  uVar39 = (uVar39 < uVar10) * uVar10 | (uVar39 >= uVar10) * uVar39;
                  uVar40 = (uVar40 < uVar11) * uVar11 | (uVar40 >= uVar11) * uVar40;
                  uVar41 = (uVar41 < uVar12) * uVar12 | (uVar41 >= uVar12) * uVar41;
                  uVar42 = (uVar42 < uVar13) * uVar13 | (uVar42 >= uVar13) * uVar42;
                  auStack_68._2_2_ =
                       ((ushort)auStack_68._2_2_ < uVar15) * uVar15 |
                       (ushort)((ushort)auStack_68._2_2_ >= uVar15) * auStack_68._2_2_;
                  auStack_68._0_2_ =
                       ((ushort)auStack_68._0_2_ < uVar14) * uVar14 |
                       (ushort)((ushort)auStack_68._0_2_ >= uVar14) * auStack_68._0_2_;
                  auStack_68._4_2_ =
                       ((ushort)auStack_68._4_2_ < uVar16) * uVar16 |
                       (ushort)((ushort)auStack_68._4_2_ >= uVar16) * auStack_68._4_2_;
                  auStack_68._6_2_ =
                       ((ushort)auStack_68._6_2_ < uVar17) * uVar17 |
                       (ushort)((ushort)auStack_68._6_2_ >= uVar17) * auStack_68._6_2_;
                  auStack_68._8_2_ =
                       ((ushort)auStack_68._8_2_ < uVar18) * uVar18 |
                       (ushort)((ushort)auStack_68._8_2_ >= uVar18) * auStack_68._8_2_;
                  auStack_68._10_2_ =
                       ((ushort)auStack_68._10_2_ < uVar19) * uVar19 |
                       (ushort)((ushort)auStack_68._10_2_ >= uVar19) * auStack_68._10_2_;
                  auStack_68._12_2_ =
                       ((ushort)auStack_68._12_2_ < uVar20) * uVar20 |
                       (ushort)((ushort)auStack_68._12_2_ >= uVar20) * auStack_68._12_2_;
                  auStack_68._14_2_ =
                       ((ushort)auStack_68._14_2_ < uVar21) * uVar21 |
                       (ushort)((ushort)auStack_68._14_2_ >= uVar21) * auStack_68._14_2_;
                } while (lVar27 < (longlong)uVar30);
              }
              lVar28 = lVar28 + 1;
              lVar26 = lVar26 + lVar3;
              lVar29 = lVar29 + 1 + param_7;
              lVar25 = lVar25 + param_2 * 2;
            } while (lVar28 < param_8);
          }
          lVar23 = lVar23 + 0x40;
          *puVar22 = auStack_58._0_2_;
          puVar22[1] = auStack_58._2_2_;
          puVar22[2] = auStack_58._4_2_;
          puVar22[3] = auStack_58._6_2_;
          puVar22[4] = auStack_58._8_2_;
          puVar22[5] = auStack_58._10_2_;
          puVar22[6] = auStack_58._12_2_;
          puVar22[7] = auStack_58._14_2_;
          lVar34 = lVar34 + 0x80;
          puVar22[8] = uVar43;
          puVar22[9] = uVar44;
          puVar22[10] = uVar45;
          puVar22[0xb] = uVar46;
          puVar22[0xc] = uVar47;
          puVar22[0xd] = uVar48;
          puVar22[0xe] = uVar49;
          puVar22[0xf] = uVar50;
          puVar22[0x10] = uVar51;
          puVar22[0x11] = uVar52;
          puVar22[0x12] = uVar53;
          puVar22[0x13] = uVar54;
          puVar22[0x14] = uVar55;
          puVar22[0x15] = uVar56;
          puVar22[0x16] = uVar57;
          puVar22[0x17] = uVar58;
          puVar22[0x18] = uVar59;
          puVar22[0x19] = uVar60;
          puVar22[0x1a] = uVar61;
          puVar22[0x1b] = uVar62;
          puVar22[0x1c] = uVar63;
          puVar22[0x1d] = uVar64;
          puVar22[0x1e] = uVar65;
          puVar22[0x1f] = uVar66;
          puVar22[0x20] = uVar67;
          puVar22[0x21] = uVar68;
          puVar22[0x22] = uVar69;
          puVar22[0x23] = uVar70;
          puVar22[0x24] = uVar71;
          puVar22[0x25] = uVar72;
          puVar22[0x26] = uVar73;
          puVar22[0x27] = uVar74;
          puVar22[0x28] = uVar75;
          puVar22[0x29] = uVar76;
          puVar22[0x2a] = uVar77;
          puVar22[0x2b] = uVar78;
          puVar22[0x2c] = uVar79;
          puVar22[0x2d] = uVar80;
          puVar22[0x2e] = uVar81;
          puVar22[0x2f] = uVar82;
          puVar22[0x30] = uVar35;
          puVar22[0x31] = uVar36;
          puVar22[0x32] = uVar37;
          puVar22[0x33] = uVar38;
          puVar22[0x34] = uVar39;
          puVar22[0x35] = uVar40;
          puVar22[0x36] = uVar41;
          puVar22[0x37] = uVar42;
          *(undefined8 *)(puVar22 + 0x38) = auStack_68._0_8_;
          *(undefined8 *)(puVar22 + 0x3c) = auStack_68._8_8_;
          puVar22 = puVar22 + 0x40;
        } while (lVar23 < (longlong)(param_5 & 0xffffffffffffffc0));
      }
      for (; lVar23 < (longlong)(param_5 & 0xffffffffffffffe0); lVar23 = lVar23 + 0x20) {
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        lVar28 = 0;
        lVar29 = 0;
        uVar51 = 0;
        uVar52 = 0;
        uVar53 = 0;
        uVar54 = 0;
        uVar55 = 0;
        uVar56 = 0;
        uVar57 = 0;
        uVar58 = 0;
        lVar25 = 0;
        lVar26 = 0;
        uVar59 = 0;
        uVar60 = 0;
        uVar61 = 0;
        uVar62 = 0;
        uVar63 = 0;
        uVar64 = 0;
        uVar65 = 0;
        uVar66 = 0;
        uVar43 = 0;
        uVar44 = 0;
        uVar45 = 0;
        uVar46 = 0;
        uVar47 = 0;
        uVar48 = 0;
        uVar49 = 0;
        uVar50 = 0;
        if (0 < param_8) {
          do {
            uVar30 = (ulonglong)*(ushort *)(param_9 + lVar29 * 2);
            lVar27 = 0;
            if (uVar30 != 0) {
              lVar1 = lVar34 + lVar25;
              do {
                uVar24 = (ulonglong)*(ushort *)(param_9 + lVar26 + 2 + lVar27 * 2);
                lVar27 = lVar27 + 1;
                puVar2 = (ushort *)(lVar1 + uVar24 * 2);
                uVar67 = *puVar2;
                uVar68 = puVar2[1];
                uVar69 = puVar2[2];
                uVar70 = puVar2[3];
                uVar71 = puVar2[4];
                uVar72 = puVar2[5];
                uVar73 = puVar2[6];
                uVar74 = puVar2[7];
                puVar2 = (ushort *)(lVar1 + 0x10 + uVar24 * 2);
                uVar75 = *puVar2;
                uVar76 = puVar2[1];
                uVar77 = puVar2[2];
                uVar78 = puVar2[3];
                uVar79 = puVar2[4];
                uVar80 = puVar2[5];
                uVar81 = puVar2[6];
                uVar82 = puVar2[7];
                uVar35 = (uVar35 < uVar67) * uVar67 | (uVar35 >= uVar67) * uVar35;
                uVar36 = (uVar36 < uVar68) * uVar68 | (uVar36 >= uVar68) * uVar36;
                uVar37 = (uVar37 < uVar69) * uVar69 | (uVar37 >= uVar69) * uVar37;
                uVar38 = (uVar38 < uVar70) * uVar70 | (uVar38 >= uVar70) * uVar38;
                uVar39 = (uVar39 < uVar71) * uVar71 | (uVar39 >= uVar71) * uVar39;
                uVar40 = (uVar40 < uVar72) * uVar72 | (uVar40 >= uVar72) * uVar40;
                uVar41 = (uVar41 < uVar73) * uVar73 | (uVar41 >= uVar73) * uVar41;
                uVar42 = (uVar42 < uVar74) * uVar74 | (uVar42 >= uVar74) * uVar42;
                puVar2 = (ushort *)(lVar1 + 0x20 + uVar24 * 2);
                uVar67 = *puVar2;
                uVar68 = puVar2[1];
                uVar69 = puVar2[2];
                uVar70 = puVar2[3];
                uVar71 = puVar2[4];
                uVar72 = puVar2[5];
                uVar73 = puVar2[6];
                uVar74 = puVar2[7];
                uVar51 = (uVar51 < uVar75) * uVar75 | (uVar51 >= uVar75) * uVar51;
                uVar52 = (uVar52 < uVar76) * uVar76 | (uVar52 >= uVar76) * uVar52;
                uVar53 = (uVar53 < uVar77) * uVar77 | (uVar53 >= uVar77) * uVar53;
                uVar54 = (uVar54 < uVar78) * uVar78 | (uVar54 >= uVar78) * uVar54;
                uVar55 = (uVar55 < uVar79) * uVar79 | (uVar55 >= uVar79) * uVar55;
                uVar56 = (uVar56 < uVar80) * uVar80 | (uVar56 >= uVar80) * uVar56;
                uVar57 = (uVar57 < uVar81) * uVar81 | (uVar57 >= uVar81) * uVar57;
                uVar58 = (uVar58 < uVar82) * uVar82 | (uVar58 >= uVar82) * uVar58;
                puVar2 = (ushort *)(lVar1 + 0x30 + uVar24 * 2);
                uVar75 = *puVar2;
                uVar76 = puVar2[1];
                uVar77 = puVar2[2];
                uVar78 = puVar2[3];
                uVar79 = puVar2[4];
                uVar80 = puVar2[5];
                uVar81 = puVar2[6];
                uVar82 = puVar2[7];
                uVar59 = (uVar59 < uVar67) * uVar67 | (uVar59 >= uVar67) * uVar59;
                uVar60 = (uVar60 < uVar68) * uVar68 | (uVar60 >= uVar68) * uVar60;
                uVar61 = (uVar61 < uVar69) * uVar69 | (uVar61 >= uVar69) * uVar61;
                uVar62 = (uVar62 < uVar70) * uVar70 | (uVar62 >= uVar70) * uVar62;
                uVar63 = (uVar63 < uVar71) * uVar71 | (uVar63 >= uVar71) * uVar63;
                uVar64 = (uVar64 < uVar72) * uVar72 | (uVar64 >= uVar72) * uVar64;
                uVar65 = (uVar65 < uVar73) * uVar73 | (uVar65 >= uVar73) * uVar65;
                uVar66 = (uVar66 < uVar74) * uVar74 | (uVar66 >= uVar74) * uVar66;
                uVar43 = (uVar43 < uVar75) * uVar75 | (uVar43 >= uVar75) * uVar43;
                uVar44 = (uVar44 < uVar76) * uVar76 | (uVar44 >= uVar76) * uVar44;
                uVar45 = (uVar45 < uVar77) * uVar77 | (uVar45 >= uVar77) * uVar45;
                uVar46 = (uVar46 < uVar78) * uVar78 | (uVar46 >= uVar78) * uVar46;
                uVar47 = (uVar47 < uVar79) * uVar79 | (uVar47 >= uVar79) * uVar47;
                uVar48 = (uVar48 < uVar80) * uVar80 | (uVar48 >= uVar80) * uVar48;
                uVar49 = (uVar49 < uVar81) * uVar81 | (uVar49 >= uVar81) * uVar49;
                uVar50 = (uVar50 < uVar82) * uVar82 | (uVar50 >= uVar82) * uVar50;
              } while (lVar27 < (longlong)uVar30);
            }
            lVar28 = lVar28 + 1;
            lVar26 = lVar26 + lVar3;
            lVar29 = lVar29 + 1 + param_7;
            lVar25 = lVar25 + param_2 * 2;
          } while (lVar28 < param_8);
        }
        *puVar22 = uVar35;
        puVar22[1] = uVar36;
        puVar22[2] = uVar37;
        puVar22[3] = uVar38;
        puVar22[4] = uVar39;
        puVar22[5] = uVar40;
        puVar22[6] = uVar41;
        puVar22[7] = uVar42;
        lVar34 = lVar34 + 0x40;
        puVar22[8] = uVar51;
        puVar22[9] = uVar52;
        puVar22[10] = uVar53;
        puVar22[0xb] = uVar54;
        puVar22[0xc] = uVar55;
        puVar22[0xd] = uVar56;
        puVar22[0xe] = uVar57;
        puVar22[0xf] = uVar58;
        puVar22[0x10] = uVar59;
        puVar22[0x11] = uVar60;
        puVar22[0x12] = uVar61;
        puVar22[0x13] = uVar62;
        puVar22[0x14] = uVar63;
        puVar22[0x15] = uVar64;
        puVar22[0x16] = uVar65;
        puVar22[0x17] = uVar66;
        puVar22[0x18] = uVar43;
        puVar22[0x19] = uVar44;
        puVar22[0x1a] = uVar45;
        puVar22[0x1b] = uVar46;
        puVar22[0x1c] = uVar47;
        puVar22[0x1d] = uVar48;
        puVar22[0x1e] = uVar49;
        puVar22[0x1f] = uVar50;
        puVar22 = puVar22 + 0x20;
      }
      for (; lVar23 < (longlong)(param_5 & 0xfffffffffffffff8); lVar23 = lVar23 + 8) {
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        lVar28 = 0;
        lVar29 = 0;
        lVar25 = 0;
        lVar26 = 0;
        if (0 < param_8) {
          do {
            uVar30 = (ulonglong)*(ushort *)(param_9 + lVar29 * 2);
            lVar27 = 0;
            if (uVar30 != 0) {
              do {
                lVar1 = lVar27 * 2;
                lVar27 = lVar27 + 1;
                puVar2 = (ushort *)
                         (lVar34 + lVar25 + (ulonglong)*(ushort *)(param_9 + lVar26 + 2 + lVar1) * 2
                         );
                uVar43 = *puVar2;
                uVar44 = puVar2[1];
                uVar45 = puVar2[2];
                uVar46 = puVar2[3];
                uVar47 = puVar2[4];
                uVar48 = puVar2[5];
                uVar49 = puVar2[6];
                uVar50 = puVar2[7];
                uVar35 = (uVar35 < uVar43) * uVar43 | (uVar35 >= uVar43) * uVar35;
                uVar36 = (uVar36 < uVar44) * uVar44 | (uVar36 >= uVar44) * uVar36;
                uVar37 = (uVar37 < uVar45) * uVar45 | (uVar37 >= uVar45) * uVar37;
                uVar38 = (uVar38 < uVar46) * uVar46 | (uVar38 >= uVar46) * uVar38;
                uVar39 = (uVar39 < uVar47) * uVar47 | (uVar39 >= uVar47) * uVar39;
                uVar40 = (uVar40 < uVar48) * uVar48 | (uVar40 >= uVar48) * uVar40;
                uVar41 = (uVar41 < uVar49) * uVar49 | (uVar41 >= uVar49) * uVar41;
                uVar42 = (uVar42 < uVar50) * uVar50 | (uVar42 >= uVar50) * uVar42;
              } while (lVar27 < (longlong)uVar30);
            }
            lVar28 = lVar28 + 1;
            lVar26 = lVar26 + lVar3;
            lVar29 = lVar29 + 1 + param_7;
            lVar25 = lVar25 + param_2 * 2;
          } while (lVar28 < param_8);
        }
        *puVar22 = uVar35;
        puVar22[1] = uVar36;
        puVar22[2] = uVar37;
        puVar22[3] = uVar38;
        puVar22[4] = uVar39;
        puVar22[5] = uVar40;
        puVar22[6] = uVar41;
        puVar22[7] = uVar42;
        lVar34 = lVar34 + 0x10;
        puVar22 = puVar22 + 8;
      }
      for (; lVar23 < (longlong)(param_5 & 0xfffffffffffffffc); lVar23 = lVar23 + 4) {
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        lVar28 = 0;
        lVar29 = 0;
        lVar25 = 0;
        lVar26 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        if (0 < param_8) {
          do {
            uVar42 = uVar38;
            uVar41 = uVar37;
            uVar40 = uVar36;
            uVar39 = uVar35;
            uVar30 = (ulonglong)*(ushort *)(param_9 + lVar29 * 2);
            lVar27 = 0;
            if (uVar30 != 0) {
              do {
                lVar1 = lVar27 * 2;
                lVar27 = lVar27 + 1;
                uVar4 = *(undefined8 *)
                         (lVar34 + lVar25 + (ulonglong)*(ushort *)(param_9 + lVar26 + 2 + lVar1) * 2
                         );
                uVar35 = (ushort)uVar4;
                uVar39 = (uVar39 < uVar35) * uVar35 | (uVar39 >= uVar35) * uVar39;
                uVar35 = (ushort)((ulonglong)uVar4 >> 0x10);
                uVar40 = (uVar40 < uVar35) * uVar35 | (uVar40 >= uVar35) * uVar40;
                uVar35 = (ushort)((ulonglong)uVar4 >> 0x20);
                uVar41 = (uVar41 < uVar35) * uVar35 | (uVar41 >= uVar35) * uVar41;
                uVar35 = (ushort)((ulonglong)uVar4 >> 0x30);
                uVar42 = (uVar42 < uVar35) * uVar35 | (uVar42 >= uVar35) * uVar42;
              } while (lVar27 < (longlong)uVar30);
            }
            lVar28 = lVar28 + 1;
            lVar26 = lVar26 + lVar3;
            lVar29 = lVar29 + 1 + param_7;
            lVar25 = lVar25 + param_2 * 2;
            uVar35 = uVar39;
            uVar36 = uVar40;
            uVar37 = uVar41;
            uVar38 = uVar42;
          } while (lVar28 < param_8);
        }
        *puVar22 = uVar39;
        puVar22[1] = uVar40;
        puVar22[2] = uVar41;
        puVar22[3] = uVar42;
        lVar34 = lVar34 + 8;
        puVar22 = puVar22 + 4;
      }
      for (; lVar23 < (longlong)(param_5 & 0xfffffffffffffffe); lVar23 = lVar23 + 2) {
        uVar35 = 0;
        uVar36 = 0;
        lVar28 = 0;
        lVar29 = 0;
        lVar25 = 0;
        lVar26 = 0;
        if (0 < param_8) {
          do {
            uVar30 = (ulonglong)*(ushort *)(param_9 + lVar29 * 2);
            lVar27 = 0;
            if (uVar30 != 0) {
              do {
                lVar1 = lVar27 * 2;
                lVar27 = lVar27 + 1;
                uVar5 = *(undefined4 *)
                         (lVar34 + lVar25 + (ulonglong)*(ushort *)(param_9 + lVar26 + 2 + lVar1) * 2
                         );
                uVar37 = (ushort)uVar5;
                uVar35 = (uVar35 < uVar37) * uVar37 | (uVar35 >= uVar37) * uVar35;
                uVar37 = (ushort)((uint)uVar5 >> 0x10);
                uVar36 = (uVar36 < uVar37) * uVar37 | (uVar36 >= uVar37) * uVar36;
              } while (lVar27 < (longlong)uVar30);
            }
            lVar28 = lVar28 + 1;
            lVar26 = lVar26 + lVar3;
            lVar29 = lVar29 + 1 + param_7;
            lVar25 = lVar25 + param_2 * 2;
          } while (lVar28 < param_8);
        }
        *puVar22 = uVar35;
        puVar22[1] = uVar36;
        lVar34 = lVar34 + 4;
        puVar22 = puVar22 + 2;
      }
      for (; lVar23 < (longlong)param_5; lVar23 = lVar23 + 1) {
        uVar35 = 0;
        lVar28 = 0;
        lVar29 = 0;
        lVar25 = 0;
        lVar26 = 0;
        if (0 < param_8) {
          do {
            uVar30 = (ulonglong)*(ushort *)(param_9 + lVar29 * 2);
            lVar27 = 0;
            if (uVar30 != 0) {
              do {
                lVar1 = lVar27 * 2;
                lVar27 = lVar27 + 1;
                uVar36 = *(ushort *)
                          (lVar34 + lVar25 +
                          (ulonglong)*(ushort *)(param_9 + lVar26 + 2 + lVar1) * 2);
                uVar35 = (uVar35 < uVar36) * uVar36 | (uVar35 >= uVar36) * uVar35;
              } while (lVar27 < (longlong)uVar30);
            }
            lVar28 = lVar28 + 1;
            lVar26 = lVar26 + lVar3;
            lVar29 = lVar29 + 1 + param_7;
            lVar25 = lVar25 + param_2 * 2;
          } while (lVar28 < param_8);
        }
        *puVar22 = uVar35;
        lVar34 = lVar34 + 2;
        puVar22 = puVar22 + 1;
      }
      lVar31 = lVar31 + 1;
      lVar32 = lVar32 + param_2 * 2;
      lVar33 = lVar33 + param_4 * 2;
    } while (lVar31 < param_6);
  }
  return;
}


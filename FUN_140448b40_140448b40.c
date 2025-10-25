
void FUN_140448b40(ushort *param_1,longlong param_2,ushort *param_3,longlong param_4,
                  ulonglong param_5,longlong param_6)

{
  ushort *puVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort *puVar7;
  ulonglong uVar8;
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
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  
  lVar5 = 0;
  if (0 < param_6 + -1) {
    do {
      uVar6 = ((ulonglong)param_3 & 0xf) >> 1;
      puVar2 = param_1;
      puVar7 = param_3;
      uVar8 = param_5;
      if (uVar6 != 0) {
        uVar6 = 8 - uVar6;
        if ((longlong)param_5 <= (longlong)uVar6) {
          uVar6 = param_5;
        }
        FUN_140448fe0(param_1,param_2,param_3,uVar6,1);
        puVar2 = param_1 + uVar6;
        puVar7 = param_3 + uVar6;
        uVar8 = param_5 - uVar6;
      }
      uVar6 = (longlong)uVar8 >> 3;
      if (uVar6 != 0) {
        uVar18 = *puVar2;
        uVar20 = puVar2[1];
        uVar22 = puVar2[2];
        uVar24 = puVar2[3];
        uVar26 = puVar2[4];
        uVar28 = puVar2[5];
        uVar30 = puVar2[6];
        uVar32 = puVar2[7];
        lVar3 = 0;
        puVar1 = puVar2 + param_2;
        uVar17 = *puVar1;
        uVar19 = puVar1[1];
        uVar21 = puVar1[2];
        uVar23 = puVar1[3];
        uVar25 = puVar1[4];
        uVar27 = puVar1[5];
        uVar29 = puVar1[6];
        uVar31 = puVar1[7];
        uVar17 = (uVar18 < uVar17) * uVar17 | (uVar18 >= uVar17) * uVar18;
        uVar19 = (uVar20 < uVar19) * uVar19 | (uVar20 >= uVar19) * uVar20;
        uVar21 = (uVar22 < uVar21) * uVar21 | (uVar22 >= uVar21) * uVar22;
        uVar23 = (uVar24 < uVar23) * uVar23 | (uVar24 >= uVar23) * uVar24;
        uVar25 = (uVar26 < uVar25) * uVar25 | (uVar26 >= uVar25) * uVar26;
        uVar27 = (uVar28 < uVar27) * uVar27 | (uVar28 >= uVar27) * uVar28;
        uVar29 = (uVar30 < uVar29) * uVar29 | (uVar30 >= uVar29) * uVar30;
        uVar31 = (uVar32 < uVar31) * uVar31 | (uVar32 >= uVar31) * uVar32;
        puVar1 = puVar2 + param_2 * 2;
        uVar18 = *puVar1;
        uVar20 = puVar1[1];
        uVar22 = puVar1[2];
        uVar24 = puVar1[3];
        uVar26 = puVar1[4];
        uVar28 = puVar1[5];
        uVar30 = puVar1[6];
        uVar32 = puVar1[7];
        uVar18 = (uVar17 < uVar18) * uVar18 | (uVar17 >= uVar18) * uVar17;
        uVar20 = (uVar19 < uVar20) * uVar20 | (uVar19 >= uVar20) * uVar19;
        uVar22 = (uVar21 < uVar22) * uVar22 | (uVar21 >= uVar22) * uVar21;
        uVar24 = (uVar23 < uVar24) * uVar24 | (uVar23 >= uVar24) * uVar23;
        uVar26 = (uVar25 < uVar26) * uVar26 | (uVar25 >= uVar26) * uVar25;
        uVar28 = (uVar27 < uVar28) * uVar28 | (uVar27 >= uVar28) * uVar27;
        uVar30 = (uVar29 < uVar30) * uVar30 | (uVar29 >= uVar30) * uVar29;
        uVar32 = (uVar31 < uVar32) * uVar32 | (uVar31 >= uVar32) * uVar31;
        if (0 < (longlong)(uVar6 & 0xfffffffffffffffe)) {
          do {
            uVar17 = puVar2[8];
            uVar19 = puVar2[9];
            uVar21 = puVar2[10];
            uVar23 = puVar2[0xb];
            uVar25 = puVar2[0xc];
            uVar27 = puVar2[0xd];
            uVar29 = puVar2[0xe];
            uVar31 = puVar2[0xf];
            lVar3 = lVar3 + 2;
            puVar1 = puVar2 + param_2 + 8;
            uVar9 = *puVar1;
            uVar10 = puVar1[1];
            uVar11 = puVar1[2];
            uVar12 = puVar1[3];
            uVar13 = puVar1[4];
            uVar14 = puVar1[5];
            uVar15 = puVar1[6];
            uVar16 = puVar1[7];
            uVar9 = (uVar17 < uVar9) * uVar9 | (uVar17 >= uVar9) * uVar17;
            uVar10 = (uVar19 < uVar10) * uVar10 | (uVar19 >= uVar10) * uVar19;
            uVar11 = (uVar21 < uVar11) * uVar11 | (uVar21 >= uVar11) * uVar21;
            uVar12 = (uVar23 < uVar12) * uVar12 | (uVar23 >= uVar12) * uVar23;
            uVar13 = (uVar25 < uVar13) * uVar13 | (uVar25 >= uVar13) * uVar25;
            uVar14 = (uVar27 < uVar14) * uVar14 | (uVar27 >= uVar14) * uVar27;
            uVar15 = (uVar29 < uVar15) * uVar15 | (uVar29 >= uVar15) * uVar29;
            uVar16 = (uVar31 < uVar16) * uVar16 | (uVar31 >= uVar16) * uVar31;
            puVar1 = puVar2 + param_2 * 2 + 8;
            uVar17 = *puVar1;
            uVar19 = puVar1[1];
            uVar21 = puVar1[2];
            uVar23 = puVar1[3];
            uVar25 = puVar1[4];
            uVar27 = puVar1[5];
            uVar29 = puVar1[6];
            uVar31 = puVar1[7];
            uVar9 = (uVar9 < uVar17) * uVar17 | (uVar9 >= uVar17) * uVar9;
            uVar10 = (uVar10 < uVar19) * uVar19 | (uVar10 >= uVar19) * uVar10;
            uVar11 = (uVar11 < uVar21) * uVar21 | (uVar11 >= uVar21) * uVar11;
            uVar12 = (uVar12 < uVar23) * uVar23 | (uVar12 >= uVar23) * uVar12;
            uVar13 = (uVar13 < uVar25) * uVar25 | (uVar13 >= uVar25) * uVar13;
            uVar14 = (uVar14 < uVar27) * uVar27 | (uVar14 >= uVar27) * uVar14;
            uVar15 = (uVar15 < uVar29) * uVar29 | (uVar15 >= uVar29) * uVar15;
            uVar16 = (uVar16 < uVar31) * uVar31 | (uVar16 >= uVar31) * uVar16;
            uVar18 = (uVar20 < uVar18) * uVar18 | (uVar20 >= uVar18) * uVar20;
            uVar20 = (uVar22 < uVar20) * uVar20 | (uVar22 >= uVar20) * uVar22;
            uVar17 = (uVar24 < uVar22) * uVar22 | (uVar24 >= uVar22) * uVar24;
            uVar19 = (uVar26 < uVar24) * uVar24 | (uVar26 >= uVar24) * uVar26;
            uVar21 = (uVar28 < uVar26) * uVar26 | (uVar28 >= uVar26) * uVar28;
            uVar23 = (uVar30 < uVar28) * uVar28 | (uVar30 >= uVar28) * uVar30;
            uVar25 = (uVar32 < uVar30) * uVar30 | (uVar32 >= uVar30) * uVar32;
            uVar27 = (uVar9 < uVar32) * uVar32 | (uVar9 >= uVar32) * uVar9;
            *puVar7 = (uVar22 < uVar18) * uVar18 | (uVar22 >= uVar18) * uVar22;
            puVar7[1] = (uVar24 < uVar20) * uVar20 | (uVar24 >= uVar20) * uVar24;
            puVar7[2] = (uVar26 < uVar17) * uVar17 | (uVar26 >= uVar17) * uVar26;
            puVar7[3] = (uVar28 < uVar19) * uVar19 | (uVar28 >= uVar19) * uVar28;
            puVar7[4] = (uVar30 < uVar21) * uVar21 | (uVar30 >= uVar21) * uVar30;
            puVar7[5] = (uVar32 < uVar23) * uVar23 | (uVar32 >= uVar23) * uVar32;
            puVar7[6] = (uVar9 < uVar25) * uVar25 | (uVar9 >= uVar25) * uVar9;
            puVar7[7] = (uVar10 < uVar27) * uVar27 | (uVar10 >= uVar27) * uVar10;
            uVar18 = puVar2[0x10];
            uVar20 = puVar2[0x11];
            uVar22 = puVar2[0x12];
            uVar24 = puVar2[0x13];
            uVar26 = puVar2[0x14];
            uVar28 = puVar2[0x15];
            uVar30 = puVar2[0x16];
            uVar32 = puVar2[0x17];
            puVar1 = puVar2 + param_2 + 0x10;
            uVar17 = *puVar1;
            uVar19 = puVar1[1];
            uVar21 = puVar1[2];
            uVar23 = puVar1[3];
            uVar25 = puVar1[4];
            uVar27 = puVar1[5];
            uVar29 = puVar1[6];
            uVar31 = puVar1[7];
            uVar17 = (uVar18 < uVar17) * uVar17 | (uVar18 >= uVar17) * uVar18;
            uVar19 = (uVar20 < uVar19) * uVar19 | (uVar20 >= uVar19) * uVar20;
            uVar21 = (uVar22 < uVar21) * uVar21 | (uVar22 >= uVar21) * uVar22;
            uVar23 = (uVar24 < uVar23) * uVar23 | (uVar24 >= uVar23) * uVar24;
            uVar25 = (uVar26 < uVar25) * uVar25 | (uVar26 >= uVar25) * uVar26;
            uVar27 = (uVar28 < uVar27) * uVar27 | (uVar28 >= uVar27) * uVar28;
            uVar29 = (uVar30 < uVar29) * uVar29 | (uVar30 >= uVar29) * uVar30;
            uVar31 = (uVar32 < uVar31) * uVar31 | (uVar32 >= uVar31) * uVar32;
            puVar1 = puVar2 + param_2 * 2 + 0x10;
            uVar18 = *puVar1;
            uVar20 = puVar1[1];
            uVar22 = puVar1[2];
            uVar24 = puVar1[3];
            uVar26 = puVar1[4];
            uVar28 = puVar1[5];
            uVar30 = puVar1[6];
            uVar32 = puVar1[7];
            puVar2 = puVar2 + 0x10;
            uVar18 = (uVar17 < uVar18) * uVar18 | (uVar17 >= uVar18) * uVar17;
            uVar20 = (uVar19 < uVar20) * uVar20 | (uVar19 >= uVar20) * uVar19;
            uVar22 = (uVar21 < uVar22) * uVar22 | (uVar21 >= uVar22) * uVar21;
            uVar24 = (uVar23 < uVar24) * uVar24 | (uVar23 >= uVar24) * uVar23;
            uVar26 = (uVar25 < uVar26) * uVar26 | (uVar25 >= uVar26) * uVar25;
            uVar28 = (uVar27 < uVar28) * uVar28 | (uVar27 >= uVar28) * uVar27;
            uVar30 = (uVar29 < uVar30) * uVar30 | (uVar29 >= uVar30) * uVar29;
            uVar32 = (uVar31 < uVar32) * uVar32 | (uVar31 >= uVar32) * uVar31;
            uVar17 = (uVar10 < uVar9) * uVar9 | (uVar10 >= uVar9) * uVar10;
            uVar19 = (uVar11 < uVar10) * uVar10 | (uVar11 >= uVar10) * uVar11;
            uVar21 = (uVar12 < uVar11) * uVar11 | (uVar12 >= uVar11) * uVar12;
            uVar23 = (uVar13 < uVar12) * uVar12 | (uVar13 >= uVar12) * uVar13;
            uVar25 = (uVar14 < uVar13) * uVar13 | (uVar14 >= uVar13) * uVar14;
            uVar27 = (uVar15 < uVar14) * uVar14 | (uVar15 >= uVar14) * uVar15;
            uVar29 = (uVar16 < uVar15) * uVar15 | (uVar16 >= uVar15) * uVar16;
            uVar31 = (uVar18 < uVar16) * uVar16 | (uVar18 >= uVar16) * uVar18;
            puVar7[8] = (uVar11 < uVar17) * uVar17 | (uVar11 >= uVar17) * uVar11;
            puVar7[9] = (uVar12 < uVar19) * uVar19 | (uVar12 >= uVar19) * uVar12;
            puVar7[10] = (uVar13 < uVar21) * uVar21 | (uVar13 >= uVar21) * uVar13;
            puVar7[0xb] = (uVar14 < uVar23) * uVar23 | (uVar14 >= uVar23) * uVar14;
            puVar7[0xc] = (uVar15 < uVar25) * uVar25 | (uVar15 >= uVar25) * uVar15;
            puVar7[0xd] = (uVar16 < uVar27) * uVar27 | (uVar16 >= uVar27) * uVar16;
            puVar7[0xe] = (uVar18 < uVar29) * uVar29 | (uVar18 >= uVar29) * uVar18;
            puVar7[0xf] = (uVar20 < uVar31) * uVar31 | (uVar20 >= uVar31) * uVar20;
            puVar7 = puVar7 + 0x10;
          } while (lVar3 < (longlong)(uVar6 & 0xfffffffffffffffe));
        }
        for (; lVar3 < (longlong)uVar6; lVar3 = lVar3 + 1) {
          uVar17 = puVar2[8];
          uVar19 = puVar2[9];
          uVar21 = puVar2[10];
          uVar23 = puVar2[0xb];
          uVar25 = puVar2[0xc];
          uVar27 = puVar2[0xd];
          uVar29 = puVar2[0xe];
          uVar31 = puVar2[0xf];
          puVar1 = puVar2 + param_2 + 8;
          uVar9 = *puVar1;
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          uVar12 = puVar1[3];
          uVar13 = puVar1[4];
          uVar14 = puVar1[5];
          uVar15 = puVar1[6];
          uVar16 = puVar1[7];
          uVar9 = (uVar17 < uVar9) * uVar9 | (uVar17 >= uVar9) * uVar17;
          uVar10 = (uVar19 < uVar10) * uVar10 | (uVar19 >= uVar10) * uVar19;
          uVar33 = (uVar21 < uVar11) * uVar11 | (uVar21 >= uVar11) * uVar21;
          uVar34 = (uVar23 < uVar12) * uVar12 | (uVar23 >= uVar12) * uVar23;
          uVar35 = (uVar25 < uVar13) * uVar13 | (uVar25 >= uVar13) * uVar25;
          uVar36 = (uVar27 < uVar14) * uVar14 | (uVar27 >= uVar14) * uVar27;
          uVar15 = (uVar29 < uVar15) * uVar15 | (uVar29 >= uVar15) * uVar29;
          uVar16 = (uVar31 < uVar16) * uVar16 | (uVar31 >= uVar16) * uVar31;
          puVar1 = puVar2 + param_2 * 2 + 8;
          uVar17 = *puVar1;
          uVar19 = puVar1[1];
          uVar21 = puVar1[2];
          uVar23 = puVar1[3];
          uVar25 = puVar1[4];
          uVar27 = puVar1[5];
          uVar29 = puVar1[6];
          uVar31 = puVar1[7];
          puVar2 = puVar2 + 8;
          uVar13 = (uVar9 < uVar17) * uVar17 | (uVar9 >= uVar17) * uVar9;
          uVar14 = (uVar10 < uVar19) * uVar19 | (uVar10 >= uVar19) * uVar10;
          uVar18 = (uVar20 < uVar18) * uVar18 | (uVar20 >= uVar18) * uVar20;
          uVar20 = (uVar22 < uVar20) * uVar20 | (uVar22 >= uVar20) * uVar22;
          uVar17 = (uVar24 < uVar22) * uVar22 | (uVar24 >= uVar22) * uVar24;
          uVar19 = (uVar26 < uVar24) * uVar24 | (uVar26 >= uVar24) * uVar26;
          uVar9 = (uVar28 < uVar26) * uVar26 | (uVar28 >= uVar26) * uVar28;
          uVar10 = (uVar30 < uVar28) * uVar28 | (uVar30 >= uVar28) * uVar30;
          uVar11 = (uVar32 < uVar30) * uVar30 | (uVar32 >= uVar30) * uVar32;
          uVar12 = (uVar13 < uVar32) * uVar32 | (uVar13 >= uVar32) * uVar13;
          *puVar7 = (uVar22 < uVar18) * uVar18 | (uVar22 >= uVar18) * uVar22;
          puVar7[1] = (uVar24 < uVar20) * uVar20 | (uVar24 >= uVar20) * uVar24;
          puVar7[2] = (uVar26 < uVar17) * uVar17 | (uVar26 >= uVar17) * uVar26;
          puVar7[3] = (uVar28 < uVar19) * uVar19 | (uVar28 >= uVar19) * uVar28;
          puVar7[4] = (uVar30 < uVar9) * uVar9 | (uVar30 >= uVar9) * uVar30;
          puVar7[5] = (uVar32 < uVar10) * uVar10 | (uVar32 >= uVar10) * uVar32;
          puVar7[6] = (uVar13 < uVar11) * uVar11 | (uVar13 >= uVar11) * uVar13;
          puVar7[7] = (uVar14 < uVar12) * uVar12 | (uVar14 >= uVar12) * uVar14;
          puVar7 = puVar7 + 8;
          uVar18 = uVar13;
          uVar20 = uVar14;
          uVar22 = (uVar33 < uVar21) * uVar21 | (uVar33 >= uVar21) * uVar33;
          uVar24 = (uVar34 < uVar23) * uVar23 | (uVar34 >= uVar23) * uVar34;
          uVar26 = (uVar35 < uVar25) * uVar25 | (uVar35 >= uVar25) * uVar35;
          uVar28 = (uVar36 < uVar27) * uVar27 | (uVar36 >= uVar27) * uVar36;
          uVar30 = (uVar15 < uVar29) * uVar29 | (uVar15 >= uVar29) * uVar15;
          uVar32 = (uVar16 < uVar31) * uVar31 | (uVar16 >= uVar31) * uVar16;
        }
      }
      if ((uVar8 & 7) != 0) {
        FUN_140448fe0(puVar2,param_2,puVar7,uVar8 & 7,1);
      }
      lVar5 = lVar5 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (lVar5 < param_6 + -1);
  }
  for (; lVar5 < param_6; lVar5 = lVar5 + 1) {
    uVar6 = ((ulonglong)param_3 & 0xf) >> 1;
    puVar2 = param_1;
    puVar7 = param_3;
    uVar8 = param_5;
    if (uVar6 != 0) {
      uVar6 = 8 - uVar6;
      if ((longlong)param_5 <= (longlong)uVar6) {
        uVar6 = param_5;
      }
      FUN_140448fe0(param_1,param_2,param_3,uVar6,1);
      puVar2 = param_1 + uVar6;
      uVar8 = param_5 - uVar6;
      puVar7 = param_3 + uVar6;
    }
    lVar3 = (longlong)uVar8 >> 3;
    if (lVar3 != 0) {
      uVar18 = *puVar2;
      uVar20 = puVar2[1];
      uVar22 = puVar2[2];
      uVar24 = puVar2[3];
      uVar26 = puVar2[4];
      uVar28 = puVar2[5];
      uVar30 = puVar2[6];
      uVar32 = puVar2[7];
      lVar4 = 0;
      puVar1 = puVar2 + param_2;
      uVar17 = *puVar1;
      uVar19 = puVar1[1];
      uVar21 = puVar1[2];
      uVar23 = puVar1[3];
      uVar25 = puVar1[4];
      uVar27 = puVar1[5];
      uVar29 = puVar1[6];
      uVar31 = puVar1[7];
      uVar17 = (uVar18 < uVar17) * uVar17 | (uVar18 >= uVar17) * uVar18;
      uVar19 = (uVar20 < uVar19) * uVar19 | (uVar20 >= uVar19) * uVar20;
      uVar21 = (uVar22 < uVar21) * uVar21 | (uVar22 >= uVar21) * uVar22;
      uVar23 = (uVar24 < uVar23) * uVar23 | (uVar24 >= uVar23) * uVar24;
      uVar25 = (uVar26 < uVar25) * uVar25 | (uVar26 >= uVar25) * uVar26;
      uVar27 = (uVar28 < uVar27) * uVar27 | (uVar28 >= uVar27) * uVar28;
      uVar29 = (uVar30 < uVar29) * uVar29 | (uVar30 >= uVar29) * uVar30;
      uVar31 = (uVar32 < uVar31) * uVar31 | (uVar32 >= uVar31) * uVar32;
      puVar1 = puVar2 + param_2 * 2;
      uVar18 = *puVar1;
      uVar20 = puVar1[1];
      uVar22 = puVar1[2];
      uVar24 = puVar1[3];
      uVar26 = puVar1[4];
      uVar28 = puVar1[5];
      uVar30 = puVar1[6];
      uVar32 = puVar1[7];
      uVar18 = (uVar17 < uVar18) * uVar18 | (uVar17 >= uVar18) * uVar17;
      uVar20 = (uVar19 < uVar20) * uVar20 | (uVar19 >= uVar20) * uVar19;
      uVar22 = (uVar21 < uVar22) * uVar22 | (uVar21 >= uVar22) * uVar21;
      uVar24 = (uVar23 < uVar24) * uVar24 | (uVar23 >= uVar24) * uVar23;
      uVar26 = (uVar25 < uVar26) * uVar26 | (uVar25 >= uVar26) * uVar25;
      uVar28 = (uVar27 < uVar28) * uVar28 | (uVar27 >= uVar28) * uVar27;
      uVar30 = (uVar29 < uVar30) * uVar30 | (uVar29 >= uVar30) * uVar29;
      uVar32 = (uVar31 < uVar32) * uVar32 | (uVar31 >= uVar32) * uVar31;
      if (lVar3 != 2 && SCARRY8(lVar3,-2) == lVar3 + -2 < 0) {
        do {
          uVar17 = puVar2[8];
          uVar19 = puVar2[9];
          uVar21 = puVar2[10];
          uVar23 = puVar2[0xb];
          uVar25 = puVar2[0xc];
          uVar27 = puVar2[0xd];
          uVar29 = puVar2[0xe];
          uVar31 = puVar2[0xf];
          lVar4 = lVar4 + 2;
          puVar1 = puVar2 + param_2 + 8;
          uVar9 = *puVar1;
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          uVar12 = puVar1[3];
          uVar13 = puVar1[4];
          uVar14 = puVar1[5];
          uVar15 = puVar1[6];
          uVar16 = puVar1[7];
          uVar9 = (uVar17 < uVar9) * uVar9 | (uVar17 >= uVar9) * uVar17;
          uVar10 = (uVar19 < uVar10) * uVar10 | (uVar19 >= uVar10) * uVar19;
          uVar11 = (uVar21 < uVar11) * uVar11 | (uVar21 >= uVar11) * uVar21;
          uVar12 = (uVar23 < uVar12) * uVar12 | (uVar23 >= uVar12) * uVar23;
          uVar13 = (uVar25 < uVar13) * uVar13 | (uVar25 >= uVar13) * uVar25;
          uVar14 = (uVar27 < uVar14) * uVar14 | (uVar27 >= uVar14) * uVar27;
          uVar15 = (uVar29 < uVar15) * uVar15 | (uVar29 >= uVar15) * uVar29;
          uVar16 = (uVar31 < uVar16) * uVar16 | (uVar31 >= uVar16) * uVar31;
          puVar1 = puVar2 + param_2 * 2 + 8;
          uVar17 = *puVar1;
          uVar19 = puVar1[1];
          uVar21 = puVar1[2];
          uVar23 = puVar1[3];
          uVar25 = puVar1[4];
          uVar27 = puVar1[5];
          uVar29 = puVar1[6];
          uVar31 = puVar1[7];
          uVar9 = (uVar9 < uVar17) * uVar17 | (uVar9 >= uVar17) * uVar9;
          uVar10 = (uVar10 < uVar19) * uVar19 | (uVar10 >= uVar19) * uVar10;
          uVar11 = (uVar11 < uVar21) * uVar21 | (uVar11 >= uVar21) * uVar11;
          uVar12 = (uVar12 < uVar23) * uVar23 | (uVar12 >= uVar23) * uVar12;
          uVar13 = (uVar13 < uVar25) * uVar25 | (uVar13 >= uVar25) * uVar13;
          uVar14 = (uVar14 < uVar27) * uVar27 | (uVar14 >= uVar27) * uVar14;
          uVar15 = (uVar15 < uVar29) * uVar29 | (uVar15 >= uVar29) * uVar15;
          uVar16 = (uVar16 < uVar31) * uVar31 | (uVar16 >= uVar31) * uVar16;
          uVar18 = (uVar20 < uVar18) * uVar18 | (uVar20 >= uVar18) * uVar20;
          uVar20 = (uVar22 < uVar20) * uVar20 | (uVar22 >= uVar20) * uVar22;
          uVar17 = (uVar24 < uVar22) * uVar22 | (uVar24 >= uVar22) * uVar24;
          uVar19 = (uVar26 < uVar24) * uVar24 | (uVar26 >= uVar24) * uVar26;
          uVar21 = (uVar28 < uVar26) * uVar26 | (uVar28 >= uVar26) * uVar28;
          uVar23 = (uVar30 < uVar28) * uVar28 | (uVar30 >= uVar28) * uVar30;
          uVar25 = (uVar32 < uVar30) * uVar30 | (uVar32 >= uVar30) * uVar32;
          uVar27 = (uVar9 < uVar32) * uVar32 | (uVar9 >= uVar32) * uVar9;
          *puVar7 = (uVar22 < uVar18) * uVar18 | (uVar22 >= uVar18) * uVar22;
          puVar7[1] = (uVar24 < uVar20) * uVar20 | (uVar24 >= uVar20) * uVar24;
          puVar7[2] = (uVar26 < uVar17) * uVar17 | (uVar26 >= uVar17) * uVar26;
          puVar7[3] = (uVar28 < uVar19) * uVar19 | (uVar28 >= uVar19) * uVar28;
          puVar7[4] = (uVar30 < uVar21) * uVar21 | (uVar30 >= uVar21) * uVar30;
          puVar7[5] = (uVar32 < uVar23) * uVar23 | (uVar32 >= uVar23) * uVar32;
          puVar7[6] = (uVar9 < uVar25) * uVar25 | (uVar9 >= uVar25) * uVar9;
          puVar7[7] = (uVar10 < uVar27) * uVar27 | (uVar10 >= uVar27) * uVar10;
          uVar18 = puVar2[0x10];
          uVar20 = puVar2[0x11];
          uVar22 = puVar2[0x12];
          uVar24 = puVar2[0x13];
          uVar26 = puVar2[0x14];
          uVar28 = puVar2[0x15];
          uVar30 = puVar2[0x16];
          uVar32 = puVar2[0x17];
          puVar1 = puVar2 + param_2 + 0x10;
          uVar17 = *puVar1;
          uVar19 = puVar1[1];
          uVar21 = puVar1[2];
          uVar23 = puVar1[3];
          uVar25 = puVar1[4];
          uVar27 = puVar1[5];
          uVar29 = puVar1[6];
          uVar31 = puVar1[7];
          uVar17 = (uVar18 < uVar17) * uVar17 | (uVar18 >= uVar17) * uVar18;
          uVar19 = (uVar20 < uVar19) * uVar19 | (uVar20 >= uVar19) * uVar20;
          uVar21 = (uVar22 < uVar21) * uVar21 | (uVar22 >= uVar21) * uVar22;
          uVar23 = (uVar24 < uVar23) * uVar23 | (uVar24 >= uVar23) * uVar24;
          uVar25 = (uVar26 < uVar25) * uVar25 | (uVar26 >= uVar25) * uVar26;
          uVar27 = (uVar28 < uVar27) * uVar27 | (uVar28 >= uVar27) * uVar28;
          uVar29 = (uVar30 < uVar29) * uVar29 | (uVar30 >= uVar29) * uVar30;
          uVar31 = (uVar32 < uVar31) * uVar31 | (uVar32 >= uVar31) * uVar32;
          puVar1 = puVar2 + param_2 * 2 + 0x10;
          uVar18 = *puVar1;
          uVar20 = puVar1[1];
          uVar22 = puVar1[2];
          uVar24 = puVar1[3];
          uVar26 = puVar1[4];
          uVar28 = puVar1[5];
          uVar30 = puVar1[6];
          uVar32 = puVar1[7];
          puVar2 = puVar2 + 0x10;
          uVar18 = (uVar17 < uVar18) * uVar18 | (uVar17 >= uVar18) * uVar17;
          uVar20 = (uVar19 < uVar20) * uVar20 | (uVar19 >= uVar20) * uVar19;
          uVar22 = (uVar21 < uVar22) * uVar22 | (uVar21 >= uVar22) * uVar21;
          uVar24 = (uVar23 < uVar24) * uVar24 | (uVar23 >= uVar24) * uVar23;
          uVar26 = (uVar25 < uVar26) * uVar26 | (uVar25 >= uVar26) * uVar25;
          uVar28 = (uVar27 < uVar28) * uVar28 | (uVar27 >= uVar28) * uVar27;
          uVar30 = (uVar29 < uVar30) * uVar30 | (uVar29 >= uVar30) * uVar29;
          uVar32 = (uVar31 < uVar32) * uVar32 | (uVar31 >= uVar32) * uVar31;
          uVar17 = (uVar10 < uVar9) * uVar9 | (uVar10 >= uVar9) * uVar10;
          uVar19 = (uVar11 < uVar10) * uVar10 | (uVar11 >= uVar10) * uVar11;
          uVar21 = (uVar12 < uVar11) * uVar11 | (uVar12 >= uVar11) * uVar12;
          uVar23 = (uVar13 < uVar12) * uVar12 | (uVar13 >= uVar12) * uVar13;
          uVar25 = (uVar14 < uVar13) * uVar13 | (uVar14 >= uVar13) * uVar14;
          uVar27 = (uVar15 < uVar14) * uVar14 | (uVar15 >= uVar14) * uVar15;
          uVar29 = (uVar16 < uVar15) * uVar15 | (uVar16 >= uVar15) * uVar16;
          uVar31 = (uVar18 < uVar16) * uVar16 | (uVar18 >= uVar16) * uVar18;
          puVar7[8] = (uVar11 < uVar17) * uVar17 | (uVar11 >= uVar17) * uVar11;
          puVar7[9] = (uVar12 < uVar19) * uVar19 | (uVar12 >= uVar19) * uVar12;
          puVar7[10] = (uVar13 < uVar21) * uVar21 | (uVar13 >= uVar21) * uVar13;
          puVar7[0xb] = (uVar14 < uVar23) * uVar23 | (uVar14 >= uVar23) * uVar14;
          puVar7[0xc] = (uVar15 < uVar25) * uVar25 | (uVar15 >= uVar25) * uVar15;
          puVar7[0xd] = (uVar16 < uVar27) * uVar27 | (uVar16 >= uVar27) * uVar16;
          puVar7[0xe] = (uVar18 < uVar29) * uVar29 | (uVar18 >= uVar29) * uVar18;
          puVar7[0xf] = (uVar20 < uVar31) * uVar31 | (uVar20 >= uVar31) * uVar20;
          puVar7 = puVar7 + 0x10;
        } while (lVar4 < lVar3 + -2);
      }
      for (; lVar4 < lVar3 + -1; lVar4 = lVar4 + 1) {
        uVar17 = puVar2[8];
        uVar19 = puVar2[9];
        uVar21 = puVar2[10];
        uVar23 = puVar2[0xb];
        uVar25 = puVar2[0xc];
        uVar27 = puVar2[0xd];
        uVar29 = puVar2[0xe];
        uVar31 = puVar2[0xf];
        puVar1 = puVar2 + param_2 + 8;
        uVar9 = *puVar1;
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar12 = puVar1[3];
        uVar13 = puVar1[4];
        uVar14 = puVar1[5];
        uVar15 = puVar1[6];
        uVar16 = puVar1[7];
        uVar9 = (uVar17 < uVar9) * uVar9 | (uVar17 >= uVar9) * uVar17;
        uVar10 = (uVar19 < uVar10) * uVar10 | (uVar19 >= uVar10) * uVar19;
        uVar33 = (uVar21 < uVar11) * uVar11 | (uVar21 >= uVar11) * uVar21;
        uVar34 = (uVar23 < uVar12) * uVar12 | (uVar23 >= uVar12) * uVar23;
        uVar35 = (uVar25 < uVar13) * uVar13 | (uVar25 >= uVar13) * uVar25;
        uVar36 = (uVar27 < uVar14) * uVar14 | (uVar27 >= uVar14) * uVar27;
        uVar15 = (uVar29 < uVar15) * uVar15 | (uVar29 >= uVar15) * uVar29;
        uVar16 = (uVar31 < uVar16) * uVar16 | (uVar31 >= uVar16) * uVar31;
        puVar1 = puVar2 + param_2 * 2 + 8;
        uVar17 = *puVar1;
        uVar19 = puVar1[1];
        uVar21 = puVar1[2];
        uVar23 = puVar1[3];
        uVar25 = puVar1[4];
        uVar27 = puVar1[5];
        uVar29 = puVar1[6];
        uVar31 = puVar1[7];
        puVar2 = puVar2 + 8;
        uVar13 = (uVar9 < uVar17) * uVar17 | (uVar9 >= uVar17) * uVar9;
        uVar14 = (uVar10 < uVar19) * uVar19 | (uVar10 >= uVar19) * uVar10;
        uVar18 = (uVar20 < uVar18) * uVar18 | (uVar20 >= uVar18) * uVar20;
        uVar20 = (uVar22 < uVar20) * uVar20 | (uVar22 >= uVar20) * uVar22;
        uVar17 = (uVar24 < uVar22) * uVar22 | (uVar24 >= uVar22) * uVar24;
        uVar19 = (uVar26 < uVar24) * uVar24 | (uVar26 >= uVar24) * uVar26;
        uVar9 = (uVar28 < uVar26) * uVar26 | (uVar28 >= uVar26) * uVar28;
        uVar10 = (uVar30 < uVar28) * uVar28 | (uVar30 >= uVar28) * uVar30;
        uVar11 = (uVar32 < uVar30) * uVar30 | (uVar32 >= uVar30) * uVar32;
        uVar12 = (uVar13 < uVar32) * uVar32 | (uVar13 >= uVar32) * uVar13;
        *puVar7 = (uVar22 < uVar18) * uVar18 | (uVar22 >= uVar18) * uVar22;
        puVar7[1] = (uVar24 < uVar20) * uVar20 | (uVar24 >= uVar20) * uVar24;
        puVar7[2] = (uVar26 < uVar17) * uVar17 | (uVar26 >= uVar17) * uVar26;
        puVar7[3] = (uVar28 < uVar19) * uVar19 | (uVar28 >= uVar19) * uVar28;
        puVar7[4] = (uVar30 < uVar9) * uVar9 | (uVar30 >= uVar9) * uVar30;
        puVar7[5] = (uVar32 < uVar10) * uVar10 | (uVar32 >= uVar10) * uVar32;
        puVar7[6] = (uVar13 < uVar11) * uVar11 | (uVar13 >= uVar11) * uVar13;
        puVar7[7] = (uVar14 < uVar12) * uVar12 | (uVar14 >= uVar12) * uVar14;
        puVar7 = puVar7 + 8;
        uVar18 = uVar13;
        uVar20 = uVar14;
        uVar22 = (uVar33 < uVar21) * uVar21 | (uVar33 >= uVar21) * uVar33;
        uVar24 = (uVar34 < uVar23) * uVar23 | (uVar34 >= uVar23) * uVar34;
        uVar26 = (uVar35 < uVar25) * uVar25 | (uVar35 >= uVar25) * uVar35;
        uVar28 = (uVar36 < uVar27) * uVar27 | (uVar36 >= uVar27) * uVar36;
        uVar30 = (uVar15 < uVar29) * uVar29 | (uVar15 >= uVar29) * uVar15;
        uVar32 = (uVar16 < uVar31) * uVar31 | (uVar16 >= uVar31) * uVar16;
      }
      uVar17 = (ushort)*(undefined4 *)(puVar2 + param_2 + 8);
      uVar21 = (ushort)*(undefined4 *)(puVar2 + 8);
      uVar19 = (ushort)((uint)*(undefined4 *)(puVar2 + 8) >> 0x10);
      uVar21 = (uVar21 < uVar17) * uVar17 | (uVar21 >= uVar17) * uVar21;
      uVar17 = (ushort)((uint)*(undefined4 *)(puVar2 + param_2 + 8) >> 0x10);
      uVar23 = (uVar19 < uVar17) * uVar17 | (uVar19 >= uVar17) * uVar19;
      puVar1 = puVar2 + param_2 * 2 + 8;
      puVar2 = puVar2 + 8;
      uVar17 = (ushort)*(undefined4 *)puVar1;
      uVar19 = (uVar21 < uVar17) * uVar17 | (uVar21 >= uVar17) * uVar21;
      uVar17 = (ushort)((uint)*(undefined4 *)puVar1 >> 0x10);
      uVar17 = (uVar23 < uVar17) * uVar17 | (uVar23 >= uVar17) * uVar23;
      uVar18 = (uVar20 < uVar18) * uVar18 | (uVar20 >= uVar18) * uVar20;
      uVar20 = (uVar22 < uVar20) * uVar20 | (uVar22 >= uVar20) * uVar22;
      uVar21 = (uVar24 < uVar22) * uVar22 | (uVar24 >= uVar22) * uVar24;
      uVar23 = (uVar26 < uVar24) * uVar24 | (uVar26 >= uVar24) * uVar26;
      uVar25 = (uVar28 < uVar26) * uVar26 | (uVar28 >= uVar26) * uVar28;
      uVar27 = (uVar30 < uVar28) * uVar28 | (uVar30 >= uVar28) * uVar30;
      uVar29 = (uVar32 < uVar30) * uVar30 | (uVar32 >= uVar30) * uVar32;
      uVar31 = (uVar19 < uVar32) * uVar32 | (uVar19 >= uVar32) * uVar19;
      *puVar7 = (uVar22 < uVar18) * uVar18 | (uVar22 >= uVar18) * uVar22;
      puVar7[1] = (uVar24 < uVar20) * uVar20 | (uVar24 >= uVar20) * uVar24;
      puVar7[2] = (uVar26 < uVar21) * uVar21 | (uVar26 >= uVar21) * uVar26;
      puVar7[3] = (uVar28 < uVar23) * uVar23 | (uVar28 >= uVar23) * uVar28;
      puVar7[4] = (uVar30 < uVar25) * uVar25 | (uVar30 >= uVar25) * uVar30;
      puVar7[5] = (uVar32 < uVar27) * uVar27 | (uVar32 >= uVar27) * uVar32;
      puVar7[6] = (uVar19 < uVar29) * uVar29 | (uVar19 >= uVar29) * uVar19;
      puVar7[7] = (uVar17 < uVar31) * uVar31 | (uVar17 >= uVar31) * uVar17;
      puVar7 = puVar7 + 8;
    }
    if ((uVar8 & 7) != 0) {
      FUN_140448fe0(puVar2,param_2,puVar7,uVar8 & 7,1);
    }
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
  }
  return;
}


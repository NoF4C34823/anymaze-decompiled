
void FUN_14048c460(ushort *param_1,longlong param_2,ushort *param_3,longlong param_4,
                  ulonglong param_5,longlong param_6)

{
  ushort *puVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ushort *puVar10;
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
  ushort uVar37;
  ushort uVar38;
  
  lVar5 = 0;
  if (0 < param_6 + -1) {
    do {
      uVar6 = ((ulonglong)param_3 & 0xf) >> 1;
      puVar3 = param_1;
      puVar8 = param_3;
      uVar9 = param_5;
      if (uVar6 != 0) {
        uVar6 = 8 - uVar6;
        if ((longlong)param_5 <= (longlong)uVar6) {
          uVar6 = param_5;
        }
        FUN_14048c860(param_1,param_2,param_3,uVar6,1);
        puVar3 = param_1 + uVar6;
        puVar8 = param_3 + uVar6;
        uVar9 = param_5 - uVar6;
      }
      uVar6 = (longlong)uVar9 >> 3;
      if (uVar6 != 0) {
        uVar20 = *puVar3;
        uVar22 = puVar3[1];
        uVar24 = puVar3[2];
        uVar26 = puVar3[3];
        uVar28 = puVar3[4];
        uVar30 = puVar3[5];
        uVar32 = puVar3[6];
        uVar34 = puVar3[7];
        lVar4 = 0;
        puVar10 = puVar3 + param_2;
        uVar19 = *puVar10;
        uVar21 = puVar10[1];
        uVar23 = puVar10[2];
        uVar25 = puVar10[3];
        uVar27 = puVar10[4];
        uVar29 = puVar10[5];
        uVar31 = puVar10[6];
        uVar33 = puVar10[7];
        uVar19 = (uVar19 < uVar20) * uVar19 | (uVar19 >= uVar20) * uVar20;
        uVar21 = (uVar21 < uVar22) * uVar21 | (uVar21 >= uVar22) * uVar22;
        uVar23 = (uVar23 < uVar24) * uVar23 | (uVar23 >= uVar24) * uVar24;
        uVar25 = (uVar25 < uVar26) * uVar25 | (uVar25 >= uVar26) * uVar26;
        uVar27 = (uVar27 < uVar28) * uVar27 | (uVar27 >= uVar28) * uVar28;
        uVar29 = (uVar29 < uVar30) * uVar29 | (uVar29 >= uVar30) * uVar30;
        uVar31 = (uVar31 < uVar32) * uVar31 | (uVar31 >= uVar32) * uVar32;
        uVar33 = (uVar33 < uVar34) * uVar33 | (uVar33 >= uVar34) * uVar34;
        puVar10 = puVar3 + param_2 * 2;
        uVar20 = *puVar10;
        uVar22 = puVar10[1];
        uVar24 = puVar10[2];
        uVar26 = puVar10[3];
        uVar28 = puVar10[4];
        uVar30 = puVar10[5];
        uVar32 = puVar10[6];
        uVar34 = puVar10[7];
        uVar20 = (uVar20 < uVar19) * uVar20 | (uVar20 >= uVar19) * uVar19;
        uVar22 = (uVar22 < uVar21) * uVar22 | (uVar22 >= uVar21) * uVar21;
        uVar24 = (uVar24 < uVar23) * uVar24 | (uVar24 >= uVar23) * uVar23;
        uVar26 = (uVar26 < uVar25) * uVar26 | (uVar26 >= uVar25) * uVar25;
        uVar28 = (uVar28 < uVar27) * uVar28 | (uVar28 >= uVar27) * uVar27;
        uVar30 = (uVar30 < uVar29) * uVar30 | (uVar30 >= uVar29) * uVar29;
        uVar32 = (uVar32 < uVar31) * uVar32 | (uVar32 >= uVar31) * uVar31;
        uVar34 = (uVar34 < uVar33) * uVar34 | (uVar34 >= uVar33) * uVar33;
        if (0 < (longlong)(uVar6 & 0xfffffffffffffffe)) {
          do {
            uVar19 = puVar3[8];
            uVar21 = puVar3[9];
            uVar23 = puVar3[10];
            uVar25 = puVar3[0xb];
            uVar27 = puVar3[0xc];
            uVar29 = puVar3[0xd];
            uVar31 = puVar3[0xe];
            uVar33 = puVar3[0xf];
            lVar4 = lVar4 + 2;
            puVar10 = puVar3 + param_2 + 8;
            uVar11 = *puVar10;
            uVar12 = puVar10[1];
            uVar13 = puVar10[2];
            uVar14 = puVar10[3];
            uVar15 = puVar10[4];
            uVar16 = puVar10[5];
            uVar17 = puVar10[6];
            uVar18 = puVar10[7];
            uVar11 = (uVar11 < uVar19) * uVar11 | (uVar11 >= uVar19) * uVar19;
            uVar12 = (uVar12 < uVar21) * uVar12 | (uVar12 >= uVar21) * uVar21;
            uVar13 = (uVar13 < uVar23) * uVar13 | (uVar13 >= uVar23) * uVar23;
            uVar14 = (uVar14 < uVar25) * uVar14 | (uVar14 >= uVar25) * uVar25;
            uVar15 = (uVar15 < uVar27) * uVar15 | (uVar15 >= uVar27) * uVar27;
            uVar16 = (uVar16 < uVar29) * uVar16 | (uVar16 >= uVar29) * uVar29;
            uVar17 = (uVar17 < uVar31) * uVar17 | (uVar17 >= uVar31) * uVar31;
            uVar18 = (uVar18 < uVar33) * uVar18 | (uVar18 >= uVar33) * uVar33;
            puVar10 = puVar3 + param_2 * 2 + 8;
            uVar19 = *puVar10;
            uVar21 = puVar10[1];
            uVar23 = puVar10[2];
            uVar25 = puVar10[3];
            uVar27 = puVar10[4];
            uVar29 = puVar10[5];
            uVar31 = puVar10[6];
            uVar33 = puVar10[7];
            uVar11 = (uVar19 < uVar11) * uVar19 | (uVar19 >= uVar11) * uVar11;
            uVar12 = (uVar21 < uVar12) * uVar21 | (uVar21 >= uVar12) * uVar12;
            uVar13 = (uVar23 < uVar13) * uVar23 | (uVar23 >= uVar13) * uVar13;
            uVar14 = (uVar25 < uVar14) * uVar25 | (uVar25 >= uVar14) * uVar14;
            uVar15 = (uVar27 < uVar15) * uVar27 | (uVar27 >= uVar15) * uVar15;
            uVar16 = (uVar29 < uVar16) * uVar29 | (uVar29 >= uVar16) * uVar16;
            uVar17 = (uVar31 < uVar17) * uVar31 | (uVar31 >= uVar17) * uVar17;
            uVar18 = (uVar33 < uVar18) * uVar33 | (uVar33 >= uVar18) * uVar18;
            uVar20 = (uVar20 < uVar22) * uVar20 | (uVar20 >= uVar22) * uVar22;
            uVar22 = (uVar22 < uVar24) * uVar22 | (uVar22 >= uVar24) * uVar24;
            uVar19 = (uVar24 < uVar26) * uVar24 | (uVar24 >= uVar26) * uVar26;
            uVar21 = (uVar26 < uVar28) * uVar26 | (uVar26 >= uVar28) * uVar28;
            uVar23 = (uVar28 < uVar30) * uVar28 | (uVar28 >= uVar30) * uVar30;
            uVar25 = (uVar30 < uVar32) * uVar30 | (uVar30 >= uVar32) * uVar32;
            uVar27 = (uVar32 < uVar34) * uVar32 | (uVar32 >= uVar34) * uVar34;
            uVar29 = (uVar34 < uVar11) * uVar34 | (uVar34 >= uVar11) * uVar11;
            *puVar8 = (uVar20 < uVar24) * uVar20 | (uVar20 >= uVar24) * uVar24;
            puVar8[1] = (uVar22 < uVar26) * uVar22 | (uVar22 >= uVar26) * uVar26;
            puVar8[2] = (uVar19 < uVar28) * uVar19 | (uVar19 >= uVar28) * uVar28;
            puVar8[3] = (uVar21 < uVar30) * uVar21 | (uVar21 >= uVar30) * uVar30;
            puVar8[4] = (uVar23 < uVar32) * uVar23 | (uVar23 >= uVar32) * uVar32;
            puVar8[5] = (uVar25 < uVar34) * uVar25 | (uVar25 >= uVar34) * uVar34;
            puVar8[6] = (uVar27 < uVar11) * uVar27 | (uVar27 >= uVar11) * uVar11;
            puVar8[7] = (uVar29 < uVar12) * uVar29 | (uVar29 >= uVar12) * uVar12;
            uVar20 = puVar3[0x10];
            uVar22 = puVar3[0x11];
            uVar24 = puVar3[0x12];
            uVar26 = puVar3[0x13];
            uVar28 = puVar3[0x14];
            uVar30 = puVar3[0x15];
            uVar32 = puVar3[0x16];
            uVar34 = puVar3[0x17];
            puVar10 = puVar3 + param_2 + 0x10;
            uVar19 = *puVar10;
            uVar21 = puVar10[1];
            uVar23 = puVar10[2];
            uVar25 = puVar10[3];
            uVar27 = puVar10[4];
            uVar29 = puVar10[5];
            uVar31 = puVar10[6];
            uVar33 = puVar10[7];
            uVar19 = (uVar19 < uVar20) * uVar19 | (uVar19 >= uVar20) * uVar20;
            uVar21 = (uVar21 < uVar22) * uVar21 | (uVar21 >= uVar22) * uVar22;
            uVar23 = (uVar23 < uVar24) * uVar23 | (uVar23 >= uVar24) * uVar24;
            uVar25 = (uVar25 < uVar26) * uVar25 | (uVar25 >= uVar26) * uVar26;
            uVar27 = (uVar27 < uVar28) * uVar27 | (uVar27 >= uVar28) * uVar28;
            uVar29 = (uVar29 < uVar30) * uVar29 | (uVar29 >= uVar30) * uVar30;
            uVar31 = (uVar31 < uVar32) * uVar31 | (uVar31 >= uVar32) * uVar32;
            uVar33 = (uVar33 < uVar34) * uVar33 | (uVar33 >= uVar34) * uVar34;
            puVar10 = puVar3 + param_2 * 2 + 0x10;
            uVar20 = *puVar10;
            uVar22 = puVar10[1];
            uVar24 = puVar10[2];
            uVar26 = puVar10[3];
            uVar28 = puVar10[4];
            uVar30 = puVar10[5];
            uVar32 = puVar10[6];
            uVar34 = puVar10[7];
            puVar3 = puVar3 + 0x10;
            uVar20 = (uVar20 < uVar19) * uVar20 | (uVar20 >= uVar19) * uVar19;
            uVar22 = (uVar22 < uVar21) * uVar22 | (uVar22 >= uVar21) * uVar21;
            uVar24 = (uVar24 < uVar23) * uVar24 | (uVar24 >= uVar23) * uVar23;
            uVar26 = (uVar26 < uVar25) * uVar26 | (uVar26 >= uVar25) * uVar25;
            uVar28 = (uVar28 < uVar27) * uVar28 | (uVar28 >= uVar27) * uVar27;
            uVar30 = (uVar30 < uVar29) * uVar30 | (uVar30 >= uVar29) * uVar29;
            uVar32 = (uVar32 < uVar31) * uVar32 | (uVar32 >= uVar31) * uVar31;
            uVar34 = (uVar34 < uVar33) * uVar34 | (uVar34 >= uVar33) * uVar33;
            uVar19 = (uVar11 < uVar12) * uVar11 | (uVar11 >= uVar12) * uVar12;
            uVar21 = (uVar12 < uVar13) * uVar12 | (uVar12 >= uVar13) * uVar13;
            uVar23 = (uVar13 < uVar14) * uVar13 | (uVar13 >= uVar14) * uVar14;
            uVar25 = (uVar14 < uVar15) * uVar14 | (uVar14 >= uVar15) * uVar15;
            uVar27 = (uVar15 < uVar16) * uVar15 | (uVar15 >= uVar16) * uVar16;
            uVar29 = (uVar16 < uVar17) * uVar16 | (uVar16 >= uVar17) * uVar17;
            uVar31 = (uVar17 < uVar18) * uVar17 | (uVar17 >= uVar18) * uVar18;
            uVar33 = (uVar18 < uVar20) * uVar18 | (uVar18 >= uVar20) * uVar20;
            puVar8[8] = (uVar19 < uVar13) * uVar19 | (uVar19 >= uVar13) * uVar13;
            puVar8[9] = (uVar21 < uVar14) * uVar21 | (uVar21 >= uVar14) * uVar14;
            puVar8[10] = (uVar23 < uVar15) * uVar23 | (uVar23 >= uVar15) * uVar15;
            puVar8[0xb] = (uVar25 < uVar16) * uVar25 | (uVar25 >= uVar16) * uVar16;
            puVar8[0xc] = (uVar27 < uVar17) * uVar27 | (uVar27 >= uVar17) * uVar17;
            puVar8[0xd] = (uVar29 < uVar18) * uVar29 | (uVar29 >= uVar18) * uVar18;
            puVar8[0xe] = (uVar31 < uVar20) * uVar31 | (uVar31 >= uVar20) * uVar20;
            puVar8[0xf] = (uVar33 < uVar22) * uVar33 | (uVar33 >= uVar22) * uVar22;
            puVar8 = puVar8 + 0x10;
          } while (lVar4 < (longlong)(uVar6 & 0xfffffffffffffffe));
        }
        for (; lVar4 < (longlong)uVar6; lVar4 = lVar4 + 1) {
          uVar19 = puVar3[8];
          uVar21 = puVar3[9];
          uVar23 = puVar3[10];
          uVar25 = puVar3[0xb];
          uVar27 = puVar3[0xc];
          uVar29 = puVar3[0xd];
          uVar31 = puVar3[0xe];
          uVar33 = puVar3[0xf];
          puVar10 = puVar3 + param_2 + 8;
          uVar11 = *puVar10;
          uVar12 = puVar10[1];
          uVar13 = puVar10[2];
          uVar14 = puVar10[3];
          uVar15 = puVar10[4];
          uVar16 = puVar10[5];
          uVar17 = puVar10[6];
          uVar18 = puVar10[7];
          uVar11 = (uVar11 < uVar19) * uVar11 | (uVar11 >= uVar19) * uVar19;
          uVar12 = (uVar12 < uVar21) * uVar12 | (uVar12 >= uVar21) * uVar21;
          uVar35 = (uVar13 < uVar23) * uVar13 | (uVar13 >= uVar23) * uVar23;
          uVar36 = (uVar14 < uVar25) * uVar14 | (uVar14 >= uVar25) * uVar25;
          uVar37 = (uVar15 < uVar27) * uVar15 | (uVar15 >= uVar27) * uVar27;
          uVar38 = (uVar16 < uVar29) * uVar16 | (uVar16 >= uVar29) * uVar29;
          uVar17 = (uVar17 < uVar31) * uVar17 | (uVar17 >= uVar31) * uVar31;
          uVar18 = (uVar18 < uVar33) * uVar18 | (uVar18 >= uVar33) * uVar33;
          puVar10 = puVar3 + param_2 * 2 + 8;
          uVar19 = *puVar10;
          uVar21 = puVar10[1];
          uVar23 = puVar10[2];
          uVar25 = puVar10[3];
          uVar27 = puVar10[4];
          uVar29 = puVar10[5];
          uVar31 = puVar10[6];
          uVar33 = puVar10[7];
          puVar3 = puVar3 + 8;
          uVar15 = (uVar19 < uVar11) * uVar19 | (uVar19 >= uVar11) * uVar11;
          uVar16 = (uVar21 < uVar12) * uVar21 | (uVar21 >= uVar12) * uVar12;
          uVar20 = (uVar20 < uVar22) * uVar20 | (uVar20 >= uVar22) * uVar22;
          uVar22 = (uVar22 < uVar24) * uVar22 | (uVar22 >= uVar24) * uVar24;
          uVar19 = (uVar24 < uVar26) * uVar24 | (uVar24 >= uVar26) * uVar26;
          uVar21 = (uVar26 < uVar28) * uVar26 | (uVar26 >= uVar28) * uVar28;
          uVar11 = (uVar28 < uVar30) * uVar28 | (uVar28 >= uVar30) * uVar30;
          uVar12 = (uVar30 < uVar32) * uVar30 | (uVar30 >= uVar32) * uVar32;
          uVar13 = (uVar32 < uVar34) * uVar32 | (uVar32 >= uVar34) * uVar34;
          uVar14 = (uVar34 < uVar15) * uVar34 | (uVar34 >= uVar15) * uVar15;
          *puVar8 = (uVar20 < uVar24) * uVar20 | (uVar20 >= uVar24) * uVar24;
          puVar8[1] = (uVar22 < uVar26) * uVar22 | (uVar22 >= uVar26) * uVar26;
          puVar8[2] = (uVar19 < uVar28) * uVar19 | (uVar19 >= uVar28) * uVar28;
          puVar8[3] = (uVar21 < uVar30) * uVar21 | (uVar21 >= uVar30) * uVar30;
          puVar8[4] = (uVar11 < uVar32) * uVar11 | (uVar11 >= uVar32) * uVar32;
          puVar8[5] = (uVar12 < uVar34) * uVar12 | (uVar12 >= uVar34) * uVar34;
          puVar8[6] = (uVar13 < uVar15) * uVar13 | (uVar13 >= uVar15) * uVar15;
          puVar8[7] = (uVar14 < uVar16) * uVar14 | (uVar14 >= uVar16) * uVar16;
          puVar8 = puVar8 + 8;
          uVar20 = uVar15;
          uVar22 = uVar16;
          uVar24 = (uVar23 < uVar35) * uVar23 | (uVar23 >= uVar35) * uVar35;
          uVar26 = (uVar25 < uVar36) * uVar25 | (uVar25 >= uVar36) * uVar36;
          uVar28 = (uVar27 < uVar37) * uVar27 | (uVar27 >= uVar37) * uVar37;
          uVar30 = (uVar29 < uVar38) * uVar29 | (uVar29 >= uVar38) * uVar38;
          uVar32 = (uVar31 < uVar17) * uVar31 | (uVar31 >= uVar17) * uVar17;
          uVar34 = (uVar33 < uVar18) * uVar33 | (uVar33 >= uVar18) * uVar18;
        }
      }
      if ((uVar9 & 7) != 0) {
        FUN_14048c860(puVar3,param_2,puVar8,uVar9 & 7,1);
      }
      lVar5 = lVar5 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (lVar5 < param_6 + -1);
  }
  for (; lVar5 < param_6; lVar5 = lVar5 + 1) {
    uVar6 = ((ulonglong)param_3 & 0xf) >> 1;
    puVar3 = param_1;
    puVar8 = param_3;
    uVar9 = param_5;
    if (uVar6 != 0) {
      uVar6 = 8 - uVar6;
      if ((longlong)param_5 <= (longlong)uVar6) {
        uVar6 = param_5;
      }
      FUN_14048c860(param_1,param_2,param_3,uVar6,1);
      puVar3 = param_1 + uVar6;
      puVar8 = param_3 + uVar6;
      uVar9 = param_5 - uVar6;
    }
    lVar4 = (longlong)uVar9 >> 3;
    if (lVar4 != 0) {
      uVar20 = *puVar3;
      uVar22 = puVar3[1];
      uVar24 = puVar3[2];
      uVar26 = puVar3[3];
      uVar28 = puVar3[4];
      uVar30 = puVar3[5];
      uVar32 = puVar3[6];
      uVar34 = puVar3[7];
      lVar2 = 0;
      puVar10 = puVar3 + param_2;
      uVar19 = *puVar10;
      uVar21 = puVar10[1];
      uVar23 = puVar10[2];
      uVar25 = puVar10[3];
      uVar27 = puVar10[4];
      uVar29 = puVar10[5];
      uVar31 = puVar10[6];
      uVar33 = puVar10[7];
      uVar19 = (uVar19 < uVar20) * uVar19 | (uVar19 >= uVar20) * uVar20;
      uVar21 = (uVar21 < uVar22) * uVar21 | (uVar21 >= uVar22) * uVar22;
      uVar23 = (uVar23 < uVar24) * uVar23 | (uVar23 >= uVar24) * uVar24;
      uVar25 = (uVar25 < uVar26) * uVar25 | (uVar25 >= uVar26) * uVar26;
      uVar27 = (uVar27 < uVar28) * uVar27 | (uVar27 >= uVar28) * uVar28;
      uVar29 = (uVar29 < uVar30) * uVar29 | (uVar29 >= uVar30) * uVar30;
      uVar31 = (uVar31 < uVar32) * uVar31 | (uVar31 >= uVar32) * uVar32;
      uVar33 = (uVar33 < uVar34) * uVar33 | (uVar33 >= uVar34) * uVar34;
      puVar10 = puVar3 + param_2 * 2;
      uVar20 = *puVar10;
      uVar22 = puVar10[1];
      uVar24 = puVar10[2];
      uVar26 = puVar10[3];
      uVar28 = puVar10[4];
      uVar30 = puVar10[5];
      uVar32 = puVar10[6];
      uVar34 = puVar10[7];
      uVar20 = (uVar20 < uVar19) * uVar20 | (uVar20 >= uVar19) * uVar19;
      uVar22 = (uVar22 < uVar21) * uVar22 | (uVar22 >= uVar21) * uVar21;
      uVar24 = (uVar24 < uVar23) * uVar24 | (uVar24 >= uVar23) * uVar23;
      uVar26 = (uVar26 < uVar25) * uVar26 | (uVar26 >= uVar25) * uVar25;
      uVar28 = (uVar28 < uVar27) * uVar28 | (uVar28 >= uVar27) * uVar27;
      uVar30 = (uVar30 < uVar29) * uVar30 | (uVar30 >= uVar29) * uVar29;
      uVar32 = (uVar32 < uVar31) * uVar32 | (uVar32 >= uVar31) * uVar31;
      uVar34 = (uVar34 < uVar33) * uVar34 | (uVar34 >= uVar33) * uVar33;
      puVar10 = puVar3 + param_2 * 2;
      uVar19 = uVar20;
      uVar21 = uVar22;
      uVar23 = uVar24;
      uVar25 = uVar26;
      uVar27 = uVar28;
      uVar29 = uVar30;
      uVar31 = uVar32;
      uVar33 = uVar34;
      if (lVar4 != 1 && SCARRY8(lVar4,-1) == lVar4 + -1 < 0) {
        do {
          uVar19 = puVar3[8];
          uVar21 = puVar3[9];
          uVar23 = puVar3[10];
          uVar25 = puVar3[0xb];
          uVar27 = puVar3[0xc];
          uVar29 = puVar3[0xd];
          uVar31 = puVar3[0xe];
          uVar33 = puVar3[0xf];
          lVar2 = lVar2 + 1;
          puVar10 = puVar3 + param_2 + 8;
          uVar11 = *puVar10;
          uVar12 = puVar10[1];
          uVar13 = puVar10[2];
          uVar14 = puVar10[3];
          uVar15 = puVar10[4];
          uVar16 = puVar10[5];
          uVar17 = puVar10[6];
          uVar18 = puVar10[7];
          uVar11 = (uVar11 < uVar19) * uVar11 | (uVar11 >= uVar19) * uVar19;
          uVar12 = (uVar12 < uVar21) * uVar12 | (uVar12 >= uVar21) * uVar21;
          uVar13 = (uVar13 < uVar23) * uVar13 | (uVar13 >= uVar23) * uVar23;
          uVar14 = (uVar14 < uVar25) * uVar14 | (uVar14 >= uVar25) * uVar25;
          uVar15 = (uVar15 < uVar27) * uVar15 | (uVar15 >= uVar27) * uVar27;
          uVar16 = (uVar16 < uVar29) * uVar16 | (uVar16 >= uVar29) * uVar29;
          uVar17 = (uVar17 < uVar31) * uVar17 | (uVar17 >= uVar31) * uVar31;
          uVar18 = (uVar18 < uVar33) * uVar18 | (uVar18 >= uVar33) * uVar33;
          puVar10 = puVar3 + param_2 * 2 + 8;
          uVar19 = *puVar10;
          uVar21 = puVar10[1];
          uVar23 = puVar10[2];
          uVar25 = puVar10[3];
          uVar27 = puVar10[4];
          uVar29 = puVar10[5];
          uVar31 = puVar10[6];
          uVar33 = puVar10[7];
          puVar3 = puVar3 + 8;
          uVar19 = (uVar19 < uVar11) * uVar19 | (uVar19 >= uVar11) * uVar11;
          uVar21 = (uVar21 < uVar12) * uVar21 | (uVar21 >= uVar12) * uVar12;
          uVar23 = (uVar23 < uVar13) * uVar23 | (uVar23 >= uVar13) * uVar13;
          uVar25 = (uVar25 < uVar14) * uVar25 | (uVar25 >= uVar14) * uVar14;
          uVar27 = (uVar27 < uVar15) * uVar27 | (uVar27 >= uVar15) * uVar15;
          uVar29 = (uVar29 < uVar16) * uVar29 | (uVar29 >= uVar16) * uVar16;
          uVar31 = (uVar31 < uVar17) * uVar31 | (uVar31 >= uVar17) * uVar17;
          uVar33 = (uVar33 < uVar18) * uVar33 | (uVar33 >= uVar18) * uVar18;
          uVar20 = (uVar20 < uVar22) * uVar20 | (uVar20 >= uVar22) * uVar22;
          uVar22 = (uVar22 < uVar24) * uVar22 | (uVar22 >= uVar24) * uVar24;
          uVar11 = (uVar24 < uVar26) * uVar24 | (uVar24 >= uVar26) * uVar26;
          uVar12 = (uVar26 < uVar28) * uVar26 | (uVar26 >= uVar28) * uVar28;
          uVar13 = (uVar28 < uVar30) * uVar28 | (uVar28 >= uVar30) * uVar30;
          uVar14 = (uVar30 < uVar32) * uVar30 | (uVar30 >= uVar32) * uVar32;
          uVar15 = (uVar32 < uVar34) * uVar32 | (uVar32 >= uVar34) * uVar34;
          uVar16 = (uVar34 < uVar19) * uVar34 | (uVar34 >= uVar19) * uVar19;
          *puVar8 = (uVar20 < uVar24) * uVar20 | (uVar20 >= uVar24) * uVar24;
          puVar8[1] = (uVar22 < uVar26) * uVar22 | (uVar22 >= uVar26) * uVar26;
          puVar8[2] = (uVar11 < uVar28) * uVar11 | (uVar11 >= uVar28) * uVar28;
          puVar8[3] = (uVar12 < uVar30) * uVar12 | (uVar12 >= uVar30) * uVar30;
          puVar8[4] = (uVar13 < uVar32) * uVar13 | (uVar13 >= uVar32) * uVar32;
          puVar8[5] = (uVar14 < uVar34) * uVar14 | (uVar14 >= uVar34) * uVar34;
          puVar8[6] = (uVar15 < uVar19) * uVar15 | (uVar15 >= uVar19) * uVar19;
          puVar8[7] = (uVar16 < uVar21) * uVar16 | (uVar16 >= uVar21) * uVar21;
          puVar8 = puVar8 + 8;
          uVar20 = uVar19;
          uVar22 = uVar21;
          uVar24 = uVar23;
          uVar26 = uVar25;
          uVar28 = uVar27;
          uVar30 = uVar29;
          uVar32 = uVar31;
          uVar34 = uVar33;
        } while (lVar2 < lVar4 + -1);
        puVar10 = puVar3 + param_2 * 2;
      }
      puVar7 = puVar3 + param_2;
      puVar1 = puVar3 + 8;
      puVar3 = puVar3 + 8;
      uVar20 = (ushort)*(undefined4 *)(puVar7 + 8);
      uVar24 = (ushort)*(undefined4 *)puVar1;
      uVar22 = (ushort)((uint)*(undefined4 *)puVar1 >> 0x10);
      uVar24 = (uVar20 < uVar24) * uVar20 | (uVar20 >= uVar24) * uVar24;
      uVar20 = (ushort)((uint)*(undefined4 *)(puVar7 + 8) >> 0x10);
      uVar26 = (uVar20 < uVar22) * uVar20 | (uVar20 >= uVar22) * uVar22;
      uVar20 = (ushort)*(undefined4 *)(puVar10 + 8);
      uVar22 = (uVar20 < uVar24) * uVar20 | (uVar20 >= uVar24) * uVar24;
      uVar20 = (ushort)((uint)*(undefined4 *)(puVar10 + 8) >> 0x10);
      uVar24 = (uVar20 < uVar26) * uVar20 | (uVar20 >= uVar26) * uVar26;
      uVar20 = (uVar19 < uVar21) * uVar19 | (uVar19 >= uVar21) * uVar21;
      uVar26 = (uVar21 < uVar23) * uVar21 | (uVar21 >= uVar23) * uVar23;
      uVar28 = (uVar23 < uVar25) * uVar23 | (uVar23 >= uVar25) * uVar25;
      uVar30 = (uVar25 < uVar27) * uVar25 | (uVar25 >= uVar27) * uVar27;
      uVar32 = (uVar27 < uVar29) * uVar27 | (uVar27 >= uVar29) * uVar29;
      uVar34 = (uVar29 < uVar31) * uVar29 | (uVar29 >= uVar31) * uVar31;
      uVar19 = (uVar31 < uVar33) * uVar31 | (uVar31 >= uVar33) * uVar33;
      uVar21 = (uVar33 < uVar22) * uVar33 | (uVar33 >= uVar22) * uVar22;
      *puVar8 = (uVar20 < uVar23) * uVar20 | (uVar20 >= uVar23) * uVar23;
      puVar8[1] = (uVar26 < uVar25) * uVar26 | (uVar26 >= uVar25) * uVar25;
      puVar8[2] = (uVar28 < uVar27) * uVar28 | (uVar28 >= uVar27) * uVar27;
      puVar8[3] = (uVar30 < uVar29) * uVar30 | (uVar30 >= uVar29) * uVar29;
      puVar8[4] = (uVar32 < uVar31) * uVar32 | (uVar32 >= uVar31) * uVar31;
      puVar8[5] = (uVar34 < uVar33) * uVar34 | (uVar34 >= uVar33) * uVar33;
      puVar8[6] = (uVar19 < uVar22) * uVar19 | (uVar19 >= uVar22) * uVar22;
      puVar8[7] = (uVar21 < uVar24) * uVar21 | (uVar21 >= uVar24) * uVar24;
      puVar8 = puVar8 + 8;
    }
    if ((uVar9 & 7) != 0) {
      FUN_14048c860(puVar3,param_2,puVar8,uVar9 & 7,1);
    }
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
  }
  return;
}


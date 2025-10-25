
void FUN_1404756c0(byte *param_1,longlong param_2,byte *param_3,longlong param_4,ulonglong param_5,
                  longlong param_6)

{
  undefined6 uVar1;
  undefined6 uVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  
  lVar7 = 0;
  if (0 < param_6 + -1) {
    do {
      pbVar4 = param_1;
      uVar11 = param_5;
      pbVar8 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar11 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar11) {
          uVar11 = param_5;
        }
        FUN_140475ac0(param_1,param_2,param_3,uVar11);
        pbVar4 = param_1 + uVar11;
        pbVar8 = param_3 + uVar11;
        uVar11 = param_5 - uVar11;
      }
      uVar5 = (longlong)uVar11 >> 4;
      if (uVar5 != 0) {
        bVar29 = *pbVar4;
        bVar31 = pbVar4[1];
        bVar33 = pbVar4[2];
        bVar35 = pbVar4[3];
        bVar37 = pbVar4[4];
        bVar39 = pbVar4[5];
        bVar41 = pbVar4[6];
        bVar43 = pbVar4[7];
        bVar45 = pbVar4[8];
        bVar47 = pbVar4[9];
        bVar49 = pbVar4[10];
        bVar51 = pbVar4[0xb];
        bVar53 = pbVar4[0xc];
        bVar55 = pbVar4[0xd];
        bVar57 = pbVar4[0xe];
        bVar59 = pbVar4[0xf];
        lVar3 = 0;
        pbVar6 = pbVar4 + param_2;
        bVar28 = *pbVar6;
        bVar30 = pbVar6[1];
        bVar32 = pbVar6[2];
        bVar34 = pbVar6[3];
        bVar36 = pbVar6[4];
        bVar38 = pbVar6[5];
        bVar40 = pbVar6[6];
        bVar42 = pbVar6[7];
        bVar44 = pbVar6[8];
        bVar46 = pbVar6[9];
        bVar48 = pbVar6[10];
        bVar50 = pbVar6[0xb];
        bVar52 = pbVar6[0xc];
        bVar54 = pbVar6[0xd];
        bVar56 = pbVar6[0xe];
        bVar58 = pbVar6[0xf];
        bVar28 = (bVar28 < bVar29) * bVar28 | (bVar28 >= bVar29) * bVar29;
        bVar30 = (bVar30 < bVar31) * bVar30 | (bVar30 >= bVar31) * bVar31;
        bVar32 = (bVar32 < bVar33) * bVar32 | (bVar32 >= bVar33) * bVar33;
        bVar34 = (bVar34 < bVar35) * bVar34 | (bVar34 >= bVar35) * bVar35;
        bVar36 = (bVar36 < bVar37) * bVar36 | (bVar36 >= bVar37) * bVar37;
        bVar38 = (bVar38 < bVar39) * bVar38 | (bVar38 >= bVar39) * bVar39;
        bVar40 = (bVar40 < bVar41) * bVar40 | (bVar40 >= bVar41) * bVar41;
        bVar42 = (bVar42 < bVar43) * bVar42 | (bVar42 >= bVar43) * bVar43;
        bVar44 = (bVar44 < bVar45) * bVar44 | (bVar44 >= bVar45) * bVar45;
        bVar46 = (bVar46 < bVar47) * bVar46 | (bVar46 >= bVar47) * bVar47;
        bVar48 = (bVar48 < bVar49) * bVar48 | (bVar48 >= bVar49) * bVar49;
        bVar50 = (bVar50 < bVar51) * bVar50 | (bVar50 >= bVar51) * bVar51;
        bVar52 = (bVar52 < bVar53) * bVar52 | (bVar52 >= bVar53) * bVar53;
        bVar54 = (bVar54 < bVar55) * bVar54 | (bVar54 >= bVar55) * bVar55;
        bVar56 = (bVar56 < bVar57) * bVar56 | (bVar56 >= bVar57) * bVar57;
        bVar58 = (bVar58 < bVar59) * bVar58 | (bVar58 >= bVar59) * bVar59;
        pbVar6 = pbVar4 + param_2 * 2;
        bVar29 = *pbVar6;
        bVar31 = pbVar6[1];
        bVar33 = pbVar6[2];
        bVar35 = pbVar6[3];
        bVar37 = pbVar6[4];
        bVar39 = pbVar6[5];
        bVar41 = pbVar6[6];
        bVar43 = pbVar6[7];
        bVar45 = pbVar6[8];
        bVar47 = pbVar6[9];
        bVar49 = pbVar6[10];
        bVar51 = pbVar6[0xb];
        bVar53 = pbVar6[0xc];
        bVar55 = pbVar6[0xd];
        bVar57 = pbVar6[0xe];
        bVar59 = pbVar6[0xf];
        bVar29 = (bVar29 < bVar28) * bVar29 | (bVar29 >= bVar28) * bVar28;
        bVar31 = (bVar31 < bVar30) * bVar31 | (bVar31 >= bVar30) * bVar30;
        bVar33 = (bVar33 < bVar32) * bVar33 | (bVar33 >= bVar32) * bVar32;
        bVar35 = (bVar35 < bVar34) * bVar35 | (bVar35 >= bVar34) * bVar34;
        bVar37 = (bVar37 < bVar36) * bVar37 | (bVar37 >= bVar36) * bVar36;
        bVar39 = (bVar39 < bVar38) * bVar39 | (bVar39 >= bVar38) * bVar38;
        bVar41 = (bVar41 < bVar40) * bVar41 | (bVar41 >= bVar40) * bVar40;
        bVar43 = (bVar43 < bVar42) * bVar43 | (bVar43 >= bVar42) * bVar42;
        bVar45 = (bVar45 < bVar44) * bVar45 | (bVar45 >= bVar44) * bVar44;
        bVar47 = (bVar47 < bVar46) * bVar47 | (bVar47 >= bVar46) * bVar46;
        bVar49 = (bVar49 < bVar48) * bVar49 | (bVar49 >= bVar48) * bVar48;
        bVar51 = (bVar51 < bVar50) * bVar51 | (bVar51 >= bVar50) * bVar50;
        bVar53 = (bVar53 < bVar52) * bVar53 | (bVar53 >= bVar52) * bVar52;
        bVar55 = (bVar55 < bVar54) * bVar55 | (bVar55 >= bVar54) * bVar54;
        bVar57 = (bVar57 < bVar56) * bVar57 | (bVar57 >= bVar56) * bVar56;
        bVar59 = (bVar59 < bVar58) * bVar59 | (bVar59 >= bVar58) * bVar58;
        if (0 < (longlong)(uVar5 & 0xfffffffffffffffe)) {
          do {
            bVar28 = pbVar4[0x10];
            bVar30 = pbVar4[0x11];
            bVar32 = pbVar4[0x12];
            bVar34 = pbVar4[0x13];
            bVar36 = pbVar4[0x14];
            bVar38 = pbVar4[0x15];
            bVar40 = pbVar4[0x16];
            bVar42 = pbVar4[0x17];
            bVar44 = pbVar4[0x18];
            bVar46 = pbVar4[0x19];
            bVar48 = pbVar4[0x1a];
            bVar50 = pbVar4[0x1b];
            bVar52 = pbVar4[0x1c];
            bVar54 = pbVar4[0x1d];
            bVar56 = pbVar4[0x1e];
            bVar58 = pbVar4[0x1f];
            lVar3 = lVar3 + 2;
            pbVar6 = pbVar4 + param_2 + 0x10;
            bVar12 = *pbVar6;
            bVar13 = pbVar6[1];
            bVar14 = pbVar6[2];
            bVar15 = pbVar6[3];
            bVar16 = pbVar6[4];
            bVar17 = pbVar6[5];
            bVar18 = pbVar6[6];
            bVar19 = pbVar6[7];
            bVar20 = pbVar6[8];
            bVar21 = pbVar6[9];
            bVar22 = pbVar6[10];
            bVar23 = pbVar6[0xb];
            bVar24 = pbVar6[0xc];
            bVar25 = pbVar6[0xd];
            bVar26 = pbVar6[0xe];
            bVar27 = pbVar6[0xf];
            bVar12 = (bVar12 < bVar28) * bVar12 | (bVar12 >= bVar28) * bVar28;
            bVar13 = (bVar13 < bVar30) * bVar13 | (bVar13 >= bVar30) * bVar30;
            bVar14 = (bVar14 < bVar32) * bVar14 | (bVar14 >= bVar32) * bVar32;
            bVar15 = (bVar15 < bVar34) * bVar15 | (bVar15 >= bVar34) * bVar34;
            bVar16 = (bVar16 < bVar36) * bVar16 | (bVar16 >= bVar36) * bVar36;
            bVar17 = (bVar17 < bVar38) * bVar17 | (bVar17 >= bVar38) * bVar38;
            bVar18 = (bVar18 < bVar40) * bVar18 | (bVar18 >= bVar40) * bVar40;
            bVar19 = (bVar19 < bVar42) * bVar19 | (bVar19 >= bVar42) * bVar42;
            bVar20 = (bVar20 < bVar44) * bVar20 | (bVar20 >= bVar44) * bVar44;
            bVar21 = (bVar21 < bVar46) * bVar21 | (bVar21 >= bVar46) * bVar46;
            bVar22 = (bVar22 < bVar48) * bVar22 | (bVar22 >= bVar48) * bVar48;
            bVar23 = (bVar23 < bVar50) * bVar23 | (bVar23 >= bVar50) * bVar50;
            bVar24 = (bVar24 < bVar52) * bVar24 | (bVar24 >= bVar52) * bVar52;
            bVar25 = (bVar25 < bVar54) * bVar25 | (bVar25 >= bVar54) * bVar54;
            bVar26 = (bVar26 < bVar56) * bVar26 | (bVar26 >= bVar56) * bVar56;
            bVar27 = (bVar27 < bVar58) * bVar27 | (bVar27 >= bVar58) * bVar58;
            pbVar6 = pbVar4 + param_2 * 2 + 0x10;
            bVar28 = *pbVar6;
            bVar30 = pbVar6[1];
            bVar32 = pbVar6[2];
            bVar34 = pbVar6[3];
            bVar36 = pbVar6[4];
            bVar38 = pbVar6[5];
            bVar40 = pbVar6[6];
            bVar42 = pbVar6[7];
            bVar44 = pbVar6[8];
            bVar46 = pbVar6[9];
            bVar48 = pbVar6[10];
            bVar50 = pbVar6[0xb];
            bVar52 = pbVar6[0xc];
            bVar54 = pbVar6[0xd];
            bVar56 = pbVar6[0xe];
            bVar58 = pbVar6[0xf];
            bVar12 = (bVar28 < bVar12) * bVar28 | (bVar28 >= bVar12) * bVar12;
            bVar13 = (bVar30 < bVar13) * bVar30 | (bVar30 >= bVar13) * bVar13;
            bVar14 = (bVar32 < bVar14) * bVar32 | (bVar32 >= bVar14) * bVar14;
            bVar15 = (bVar34 < bVar15) * bVar34 | (bVar34 >= bVar15) * bVar15;
            bVar16 = (bVar36 < bVar16) * bVar36 | (bVar36 >= bVar16) * bVar16;
            bVar17 = (bVar38 < bVar17) * bVar38 | (bVar38 >= bVar17) * bVar17;
            bVar18 = (bVar40 < bVar18) * bVar40 | (bVar40 >= bVar18) * bVar18;
            bVar19 = (bVar42 < bVar19) * bVar42 | (bVar42 >= bVar19) * bVar19;
            bVar20 = (bVar44 < bVar20) * bVar44 | (bVar44 >= bVar20) * bVar20;
            bVar21 = (bVar46 < bVar21) * bVar46 | (bVar46 >= bVar21) * bVar21;
            bVar22 = (bVar48 < bVar22) * bVar48 | (bVar48 >= bVar22) * bVar22;
            bVar23 = (bVar50 < bVar23) * bVar50 | (bVar50 >= bVar23) * bVar23;
            bVar24 = (bVar52 < bVar24) * bVar52 | (bVar52 >= bVar24) * bVar24;
            bVar25 = (bVar54 < bVar25) * bVar54 | (bVar54 >= bVar25) * bVar25;
            bVar26 = (bVar56 < bVar26) * bVar56 | (bVar56 >= bVar26) * bVar26;
            bVar27 = (bVar58 < bVar27) * bVar58 | (bVar58 >= bVar27) * bVar27;
            bVar29 = (bVar29 < bVar35) * bVar29 | (bVar29 >= bVar35) * bVar35;
            bVar31 = (bVar31 < bVar37) * bVar31 | (bVar31 >= bVar37) * bVar37;
            bVar33 = (bVar33 < bVar39) * bVar33 | (bVar33 >= bVar39) * bVar39;
            bVar35 = (bVar35 < bVar41) * bVar35 | (bVar35 >= bVar41) * bVar41;
            bVar37 = (bVar37 < bVar43) * bVar37 | (bVar37 >= bVar43) * bVar43;
            bVar39 = (bVar39 < bVar45) * bVar39 | (bVar39 >= bVar45) * bVar45;
            bVar28 = (bVar41 < bVar47) * bVar41 | (bVar41 >= bVar47) * bVar47;
            bVar30 = (bVar43 < bVar49) * bVar43 | (bVar43 >= bVar49) * bVar49;
            bVar32 = (bVar45 < bVar51) * bVar45 | (bVar45 >= bVar51) * bVar51;
            bVar34 = (bVar47 < bVar53) * bVar47 | (bVar47 >= bVar53) * bVar53;
            bVar36 = (bVar49 < bVar55) * bVar49 | (bVar49 >= bVar55) * bVar55;
            bVar38 = (bVar51 < bVar57) * bVar51 | (bVar51 >= bVar57) * bVar57;
            bVar40 = (bVar53 < bVar59) * bVar53 | (bVar53 >= bVar59) * bVar59;
            bVar42 = (bVar55 < bVar12) * bVar55 | (bVar55 >= bVar12) * bVar12;
            bVar44 = (bVar57 < bVar13) * bVar57 | (bVar57 >= bVar13) * bVar13;
            bVar46 = (bVar59 < bVar14) * bVar59 | (bVar59 >= bVar14) * bVar14;
            *pbVar8 = (bVar29 < bVar41) * bVar29 | (bVar29 >= bVar41) * bVar41;
            pbVar8[1] = (bVar31 < bVar43) * bVar31 | (bVar31 >= bVar43) * bVar43;
            pbVar8[2] = (bVar33 < bVar45) * bVar33 | (bVar33 >= bVar45) * bVar45;
            pbVar8[3] = (bVar35 < bVar47) * bVar35 | (bVar35 >= bVar47) * bVar47;
            pbVar8[4] = (bVar37 < bVar49) * bVar37 | (bVar37 >= bVar49) * bVar49;
            pbVar8[5] = (bVar39 < bVar51) * bVar39 | (bVar39 >= bVar51) * bVar51;
            pbVar8[6] = (bVar28 < bVar53) * bVar28 | (bVar28 >= bVar53) * bVar53;
            pbVar8[7] = (bVar30 < bVar55) * bVar30 | (bVar30 >= bVar55) * bVar55;
            pbVar8[8] = (bVar32 < bVar57) * bVar32 | (bVar32 >= bVar57) * bVar57;
            pbVar8[9] = (bVar34 < bVar59) * bVar34 | (bVar34 >= bVar59) * bVar59;
            pbVar8[10] = (bVar36 < bVar12) * bVar36 | (bVar36 >= bVar12) * bVar12;
            pbVar8[0xb] = (bVar38 < bVar13) * bVar38 | (bVar38 >= bVar13) * bVar13;
            pbVar8[0xc] = (bVar40 < bVar14) * bVar40 | (bVar40 >= bVar14) * bVar14;
            pbVar8[0xd] = (bVar42 < bVar15) * bVar42 | (bVar42 >= bVar15) * bVar15;
            pbVar8[0xe] = (bVar44 < bVar16) * bVar44 | (bVar44 >= bVar16) * bVar16;
            pbVar8[0xf] = (bVar46 < bVar17) * bVar46 | (bVar46 >= bVar17) * bVar17;
            bVar29 = pbVar4[0x20];
            bVar31 = pbVar4[0x21];
            bVar33 = pbVar4[0x22];
            bVar35 = pbVar4[0x23];
            bVar37 = pbVar4[0x24];
            bVar39 = pbVar4[0x25];
            bVar41 = pbVar4[0x26];
            bVar43 = pbVar4[0x27];
            bVar45 = pbVar4[0x28];
            bVar47 = pbVar4[0x29];
            bVar49 = pbVar4[0x2a];
            bVar51 = pbVar4[0x2b];
            bVar53 = pbVar4[0x2c];
            bVar55 = pbVar4[0x2d];
            bVar57 = pbVar4[0x2e];
            bVar59 = pbVar4[0x2f];
            pbVar6 = pbVar4 + param_2 + 0x20;
            bVar28 = *pbVar6;
            bVar30 = pbVar6[1];
            bVar32 = pbVar6[2];
            bVar34 = pbVar6[3];
            bVar36 = pbVar6[4];
            bVar38 = pbVar6[5];
            bVar40 = pbVar6[6];
            bVar42 = pbVar6[7];
            bVar44 = pbVar6[8];
            bVar46 = pbVar6[9];
            bVar48 = pbVar6[10];
            bVar50 = pbVar6[0xb];
            bVar52 = pbVar6[0xc];
            bVar54 = pbVar6[0xd];
            bVar56 = pbVar6[0xe];
            bVar58 = pbVar6[0xf];
            bVar28 = (bVar28 < bVar29) * bVar28 | (bVar28 >= bVar29) * bVar29;
            bVar30 = (bVar30 < bVar31) * bVar30 | (bVar30 >= bVar31) * bVar31;
            bVar32 = (bVar32 < bVar33) * bVar32 | (bVar32 >= bVar33) * bVar33;
            bVar34 = (bVar34 < bVar35) * bVar34 | (bVar34 >= bVar35) * bVar35;
            bVar36 = (bVar36 < bVar37) * bVar36 | (bVar36 >= bVar37) * bVar37;
            bVar38 = (bVar38 < bVar39) * bVar38 | (bVar38 >= bVar39) * bVar39;
            bVar40 = (bVar40 < bVar41) * bVar40 | (bVar40 >= bVar41) * bVar41;
            bVar42 = (bVar42 < bVar43) * bVar42 | (bVar42 >= bVar43) * bVar43;
            bVar44 = (bVar44 < bVar45) * bVar44 | (bVar44 >= bVar45) * bVar45;
            bVar46 = (bVar46 < bVar47) * bVar46 | (bVar46 >= bVar47) * bVar47;
            bVar48 = (bVar48 < bVar49) * bVar48 | (bVar48 >= bVar49) * bVar49;
            bVar50 = (bVar50 < bVar51) * bVar50 | (bVar50 >= bVar51) * bVar51;
            bVar52 = (bVar52 < bVar53) * bVar52 | (bVar52 >= bVar53) * bVar53;
            bVar54 = (bVar54 < bVar55) * bVar54 | (bVar54 >= bVar55) * bVar55;
            bVar56 = (bVar56 < bVar57) * bVar56 | (bVar56 >= bVar57) * bVar57;
            bVar58 = (bVar58 < bVar59) * bVar58 | (bVar58 >= bVar59) * bVar59;
            pbVar6 = pbVar4 + param_2 * 2 + 0x20;
            bVar29 = *pbVar6;
            bVar31 = pbVar6[1];
            bVar33 = pbVar6[2];
            bVar35 = pbVar6[3];
            bVar37 = pbVar6[4];
            bVar39 = pbVar6[5];
            bVar41 = pbVar6[6];
            bVar43 = pbVar6[7];
            bVar45 = pbVar6[8];
            bVar47 = pbVar6[9];
            bVar49 = pbVar6[10];
            bVar51 = pbVar6[0xb];
            bVar53 = pbVar6[0xc];
            bVar55 = pbVar6[0xd];
            bVar57 = pbVar6[0xe];
            bVar59 = pbVar6[0xf];
            pbVar4 = pbVar4 + 0x20;
            bVar29 = (bVar29 < bVar28) * bVar29 | (bVar29 >= bVar28) * bVar28;
            bVar31 = (bVar31 < bVar30) * bVar31 | (bVar31 >= bVar30) * bVar30;
            bVar33 = (bVar33 < bVar32) * bVar33 | (bVar33 >= bVar32) * bVar32;
            bVar35 = (bVar35 < bVar34) * bVar35 | (bVar35 >= bVar34) * bVar34;
            bVar37 = (bVar37 < bVar36) * bVar37 | (bVar37 >= bVar36) * bVar36;
            bVar39 = (bVar39 < bVar38) * bVar39 | (bVar39 >= bVar38) * bVar38;
            bVar41 = (bVar41 < bVar40) * bVar41 | (bVar41 >= bVar40) * bVar40;
            bVar43 = (bVar43 < bVar42) * bVar43 | (bVar43 >= bVar42) * bVar42;
            bVar45 = (bVar45 < bVar44) * bVar45 | (bVar45 >= bVar44) * bVar44;
            bVar47 = (bVar47 < bVar46) * bVar47 | (bVar47 >= bVar46) * bVar46;
            bVar49 = (bVar49 < bVar48) * bVar49 | (bVar49 >= bVar48) * bVar48;
            bVar51 = (bVar51 < bVar50) * bVar51 | (bVar51 >= bVar50) * bVar50;
            bVar53 = (bVar53 < bVar52) * bVar53 | (bVar53 >= bVar52) * bVar52;
            bVar55 = (bVar55 < bVar54) * bVar55 | (bVar55 >= bVar54) * bVar54;
            bVar57 = (bVar57 < bVar56) * bVar57 | (bVar57 >= bVar56) * bVar56;
            bVar59 = (bVar59 < bVar58) * bVar59 | (bVar59 >= bVar58) * bVar58;
            bVar28 = (bVar12 < bVar15) * bVar12 | (bVar12 >= bVar15) * bVar15;
            bVar30 = (bVar13 < bVar16) * bVar13 | (bVar13 >= bVar16) * bVar16;
            bVar32 = (bVar14 < bVar17) * bVar14 | (bVar14 >= bVar17) * bVar17;
            bVar34 = (bVar15 < bVar18) * bVar15 | (bVar15 >= bVar18) * bVar18;
            bVar36 = (bVar16 < bVar19) * bVar16 | (bVar16 >= bVar19) * bVar19;
            bVar38 = (bVar17 < bVar20) * bVar17 | (bVar17 >= bVar20) * bVar20;
            bVar40 = (bVar18 < bVar21) * bVar18 | (bVar18 >= bVar21) * bVar21;
            bVar42 = (bVar19 < bVar22) * bVar19 | (bVar19 >= bVar22) * bVar22;
            bVar44 = (bVar20 < bVar23) * bVar20 | (bVar20 >= bVar23) * bVar23;
            bVar46 = (bVar21 < bVar24) * bVar21 | (bVar21 >= bVar24) * bVar24;
            bVar48 = (bVar22 < bVar25) * bVar22 | (bVar22 >= bVar25) * bVar25;
            bVar50 = (bVar23 < bVar26) * bVar23 | (bVar23 >= bVar26) * bVar26;
            bVar52 = (bVar24 < bVar27) * bVar24 | (bVar24 >= bVar27) * bVar27;
            bVar54 = (bVar25 < bVar29) * bVar25 | (bVar25 >= bVar29) * bVar29;
            bVar56 = (bVar26 < bVar31) * bVar26 | (bVar26 >= bVar31) * bVar31;
            bVar58 = (bVar27 < bVar33) * bVar27 | (bVar27 >= bVar33) * bVar33;
            pbVar8[0x10] = (bVar28 < bVar18) * bVar28 | (bVar28 >= bVar18) * bVar18;
            pbVar8[0x11] = (bVar30 < bVar19) * bVar30 | (bVar30 >= bVar19) * bVar19;
            pbVar8[0x12] = (bVar32 < bVar20) * bVar32 | (bVar32 >= bVar20) * bVar20;
            pbVar8[0x13] = (bVar34 < bVar21) * bVar34 | (bVar34 >= bVar21) * bVar21;
            pbVar8[0x14] = (bVar36 < bVar22) * bVar36 | (bVar36 >= bVar22) * bVar22;
            pbVar8[0x15] = (bVar38 < bVar23) * bVar38 | (bVar38 >= bVar23) * bVar23;
            pbVar8[0x16] = (bVar40 < bVar24) * bVar40 | (bVar40 >= bVar24) * bVar24;
            pbVar8[0x17] = (bVar42 < bVar25) * bVar42 | (bVar42 >= bVar25) * bVar25;
            pbVar8[0x18] = (bVar44 < bVar26) * bVar44 | (bVar44 >= bVar26) * bVar26;
            pbVar8[0x19] = (bVar46 < bVar27) * bVar46 | (bVar46 >= bVar27) * bVar27;
            pbVar8[0x1a] = (bVar48 < bVar29) * bVar48 | (bVar48 >= bVar29) * bVar29;
            pbVar8[0x1b] = (bVar50 < bVar31) * bVar50 | (bVar50 >= bVar31) * bVar31;
            pbVar8[0x1c] = (bVar52 < bVar33) * bVar52 | (bVar52 >= bVar33) * bVar33;
            pbVar8[0x1d] = (bVar54 < bVar35) * bVar54 | (bVar54 >= bVar35) * bVar35;
            pbVar8[0x1e] = (bVar56 < bVar37) * bVar56 | (bVar56 >= bVar37) * bVar37;
            pbVar8[0x1f] = (bVar58 < bVar39) * bVar58 | (bVar58 >= bVar39) * bVar39;
            pbVar8 = pbVar8 + 0x20;
          } while (lVar3 < (longlong)(uVar5 & 0xfffffffffffffffe));
        }
        for (; lVar3 < (longlong)uVar5; lVar3 = lVar3 + 1) {
          bVar28 = pbVar4[0x10];
          bVar30 = pbVar4[0x11];
          bVar32 = pbVar4[0x12];
          bVar34 = pbVar4[0x13];
          bVar36 = pbVar4[0x14];
          bVar38 = pbVar4[0x15];
          bVar40 = pbVar4[0x16];
          bVar42 = pbVar4[0x17];
          bVar44 = pbVar4[0x18];
          bVar46 = pbVar4[0x19];
          bVar48 = pbVar4[0x1a];
          bVar50 = pbVar4[0x1b];
          bVar52 = pbVar4[0x1c];
          bVar54 = pbVar4[0x1d];
          bVar56 = pbVar4[0x1e];
          bVar58 = pbVar4[0x1f];
          pbVar6 = pbVar4 + param_2 + 0x10;
          bVar12 = *pbVar6;
          bVar13 = pbVar6[1];
          bVar14 = pbVar6[2];
          bVar15 = pbVar6[3];
          bVar16 = pbVar6[4];
          bVar17 = pbVar6[5];
          bVar18 = pbVar6[6];
          bVar19 = pbVar6[7];
          bVar20 = pbVar6[8];
          bVar21 = pbVar6[9];
          bVar22 = pbVar6[10];
          bVar23 = pbVar6[0xb];
          bVar24 = pbVar6[0xc];
          bVar25 = pbVar6[0xd];
          bVar26 = pbVar6[0xe];
          bVar27 = pbVar6[0xf];
          bVar12 = (bVar12 < bVar28) * bVar12 | (bVar12 >= bVar28) * bVar28;
          bVar13 = (bVar13 < bVar30) * bVar13 | (bVar13 >= bVar30) * bVar30;
          bVar14 = (bVar14 < bVar32) * bVar14 | (bVar14 >= bVar32) * bVar32;
          bVar15 = (bVar15 < bVar34) * bVar15 | (bVar15 >= bVar34) * bVar34;
          bVar60 = (bVar16 < bVar36) * bVar16 | (bVar16 >= bVar36) * bVar36;
          bVar61 = (bVar17 < bVar38) * bVar17 | (bVar17 >= bVar38) * bVar38;
          bVar62 = (bVar18 < bVar40) * bVar18 | (bVar18 >= bVar40) * bVar40;
          bVar63 = (bVar19 < bVar42) * bVar19 | (bVar19 >= bVar42) * bVar42;
          bVar64 = (bVar20 < bVar44) * bVar20 | (bVar20 >= bVar44) * bVar44;
          bVar65 = (bVar21 < bVar46) * bVar21 | (bVar21 >= bVar46) * bVar46;
          bVar22 = (bVar22 < bVar48) * bVar22 | (bVar22 >= bVar48) * bVar48;
          bVar23 = (bVar23 < bVar50) * bVar23 | (bVar23 >= bVar50) * bVar50;
          bVar24 = (bVar24 < bVar52) * bVar24 | (bVar24 >= bVar52) * bVar52;
          bVar25 = (bVar25 < bVar54) * bVar25 | (bVar25 >= bVar54) * bVar54;
          bVar26 = (bVar26 < bVar56) * bVar26 | (bVar26 >= bVar56) * bVar56;
          bVar27 = (bVar27 < bVar58) * bVar27 | (bVar27 >= bVar58) * bVar58;
          pbVar6 = pbVar4 + param_2 * 2 + 0x10;
          bVar28 = *pbVar6;
          bVar30 = pbVar6[1];
          bVar32 = pbVar6[2];
          bVar34 = pbVar6[3];
          bVar36 = pbVar6[4];
          bVar38 = pbVar6[5];
          bVar40 = pbVar6[6];
          bVar42 = pbVar6[7];
          bVar44 = pbVar6[8];
          bVar46 = pbVar6[9];
          bVar48 = pbVar6[10];
          bVar50 = pbVar6[0xb];
          bVar52 = pbVar6[0xc];
          bVar54 = pbVar6[0xd];
          bVar56 = pbVar6[0xe];
          bVar58 = pbVar6[0xf];
          pbVar4 = pbVar4 + 0x10;
          bVar16 = (bVar28 < bVar12) * bVar28 | (bVar28 >= bVar12) * bVar12;
          bVar17 = (bVar30 < bVar13) * bVar30 | (bVar30 >= bVar13) * bVar13;
          bVar18 = (bVar32 < bVar14) * bVar32 | (bVar32 >= bVar14) * bVar14;
          bVar19 = (bVar34 < bVar15) * bVar34 | (bVar34 >= bVar15) * bVar15;
          bVar20 = (bVar36 < bVar60) * bVar36 | (bVar36 >= bVar60) * bVar60;
          bVar21 = (bVar38 < bVar61) * bVar38 | (bVar38 >= bVar61) * bVar61;
          bVar29 = (bVar29 < bVar35) * bVar29 | (bVar29 >= bVar35) * bVar35;
          bVar31 = (bVar31 < bVar37) * bVar31 | (bVar31 >= bVar37) * bVar37;
          bVar33 = (bVar33 < bVar39) * bVar33 | (bVar33 >= bVar39) * bVar39;
          bVar35 = (bVar35 < bVar41) * bVar35 | (bVar35 >= bVar41) * bVar41;
          bVar37 = (bVar37 < bVar43) * bVar37 | (bVar37 >= bVar43) * bVar43;
          bVar39 = (bVar39 < bVar45) * bVar39 | (bVar39 >= bVar45) * bVar45;
          bVar28 = (bVar41 < bVar47) * bVar41 | (bVar41 >= bVar47) * bVar47;
          bVar30 = (bVar43 < bVar49) * bVar43 | (bVar43 >= bVar49) * bVar49;
          bVar32 = (bVar45 < bVar51) * bVar45 | (bVar45 >= bVar51) * bVar51;
          bVar34 = (bVar47 < bVar53) * bVar47 | (bVar47 >= bVar53) * bVar53;
          bVar36 = (bVar49 < bVar55) * bVar49 | (bVar49 >= bVar55) * bVar55;
          bVar38 = (bVar51 < bVar57) * bVar51 | (bVar51 >= bVar57) * bVar57;
          bVar12 = (bVar53 < bVar59) * bVar53 | (bVar53 >= bVar59) * bVar59;
          bVar13 = (bVar55 < bVar16) * bVar55 | (bVar55 >= bVar16) * bVar16;
          bVar14 = (bVar57 < bVar17) * bVar57 | (bVar57 >= bVar17) * bVar17;
          bVar15 = (bVar59 < bVar18) * bVar59 | (bVar59 >= bVar18) * bVar18;
          *pbVar8 = (bVar29 < bVar41) * bVar29 | (bVar29 >= bVar41) * bVar41;
          pbVar8[1] = (bVar31 < bVar43) * bVar31 | (bVar31 >= bVar43) * bVar43;
          pbVar8[2] = (bVar33 < bVar45) * bVar33 | (bVar33 >= bVar45) * bVar45;
          pbVar8[3] = (bVar35 < bVar47) * bVar35 | (bVar35 >= bVar47) * bVar47;
          pbVar8[4] = (bVar37 < bVar49) * bVar37 | (bVar37 >= bVar49) * bVar49;
          pbVar8[5] = (bVar39 < bVar51) * bVar39 | (bVar39 >= bVar51) * bVar51;
          pbVar8[6] = (bVar28 < bVar53) * bVar28 | (bVar28 >= bVar53) * bVar53;
          pbVar8[7] = (bVar30 < bVar55) * bVar30 | (bVar30 >= bVar55) * bVar55;
          pbVar8[8] = (bVar32 < bVar57) * bVar32 | (bVar32 >= bVar57) * bVar57;
          pbVar8[9] = (bVar34 < bVar59) * bVar34 | (bVar34 >= bVar59) * bVar59;
          pbVar8[10] = (bVar36 < bVar16) * bVar36 | (bVar36 >= bVar16) * bVar16;
          pbVar8[0xb] = (bVar38 < bVar17) * bVar38 | (bVar38 >= bVar17) * bVar17;
          pbVar8[0xc] = (bVar12 < bVar18) * bVar12 | (bVar12 >= bVar18) * bVar18;
          pbVar8[0xd] = (bVar13 < bVar19) * bVar13 | (bVar13 >= bVar19) * bVar19;
          pbVar8[0xe] = (bVar14 < bVar20) * bVar14 | (bVar14 >= bVar20) * bVar20;
          pbVar8[0xf] = (bVar15 < bVar21) * bVar15 | (bVar15 >= bVar21) * bVar21;
          pbVar8 = pbVar8 + 0x10;
          bVar29 = bVar16;
          bVar31 = bVar17;
          bVar33 = bVar18;
          bVar35 = bVar19;
          bVar37 = bVar20;
          bVar39 = bVar21;
          bVar41 = (bVar40 < bVar62) * bVar40 | (bVar40 >= bVar62) * bVar62;
          bVar43 = (bVar42 < bVar63) * bVar42 | (bVar42 >= bVar63) * bVar63;
          bVar45 = (bVar44 < bVar64) * bVar44 | (bVar44 >= bVar64) * bVar64;
          bVar47 = (bVar46 < bVar65) * bVar46 | (bVar46 >= bVar65) * bVar65;
          bVar49 = (bVar48 < bVar22) * bVar48 | (bVar48 >= bVar22) * bVar22;
          bVar51 = (bVar50 < bVar23) * bVar50 | (bVar50 >= bVar23) * bVar23;
          bVar53 = (bVar52 < bVar24) * bVar52 | (bVar52 >= bVar24) * bVar24;
          bVar55 = (bVar54 < bVar25) * bVar54 | (bVar54 >= bVar25) * bVar25;
          bVar57 = (bVar56 < bVar26) * bVar56 | (bVar56 >= bVar26) * bVar26;
          bVar59 = (bVar58 < bVar27) * bVar58 | (bVar58 >= bVar27) * bVar27;
        }
      }
      if ((uVar11 & 0xf) != 0) {
        FUN_140475ac0(pbVar4,param_2);
      }
      lVar7 = lVar7 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (lVar7 < param_6 + -1);
  }
  if (lVar7 < param_6) {
    do {
      uVar11 = param_5;
      pbVar4 = param_1;
      pbVar8 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar11 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar11) {
          uVar11 = param_5;
        }
        FUN_140475ac0(param_1,param_2,param_3,uVar11);
        pbVar4 = param_1 + uVar11;
        pbVar8 = param_3 + uVar11;
        uVar11 = param_5 - uVar11;
      }
      lVar3 = (longlong)uVar11 >> 4;
      if (lVar3 != 0) {
        pbVar6 = pbVar4 + param_2;
        lVar10 = 0;
        bVar29 = *pbVar4;
        bVar31 = pbVar4[1];
        bVar33 = pbVar4[2];
        bVar35 = pbVar4[3];
        bVar37 = pbVar4[4];
        bVar39 = pbVar4[5];
        bVar41 = pbVar4[6];
        bVar43 = pbVar4[7];
        bVar45 = pbVar4[8];
        bVar47 = pbVar4[9];
        bVar49 = pbVar4[10];
        bVar51 = pbVar4[0xb];
        bVar53 = pbVar4[0xc];
        bVar55 = pbVar4[0xd];
        bVar57 = pbVar4[0xe];
        bVar59 = pbVar4[0xf];
        bVar28 = *pbVar6;
        bVar30 = pbVar6[1];
        bVar32 = pbVar6[2];
        bVar34 = pbVar6[3];
        bVar36 = pbVar6[4];
        bVar38 = pbVar6[5];
        bVar40 = pbVar6[6];
        bVar42 = pbVar6[7];
        bVar44 = pbVar6[8];
        bVar46 = pbVar6[9];
        bVar48 = pbVar6[10];
        bVar50 = pbVar6[0xb];
        bVar52 = pbVar6[0xc];
        bVar54 = pbVar6[0xd];
        bVar56 = pbVar6[0xe];
        bVar58 = pbVar6[0xf];
        pbVar9 = pbVar4 + param_2 * 2;
        bVar12 = *pbVar9;
        bVar13 = pbVar9[1];
        bVar14 = pbVar9[2];
        bVar15 = pbVar9[3];
        bVar16 = pbVar9[4];
        bVar17 = pbVar9[5];
        bVar18 = pbVar9[6];
        bVar19 = pbVar9[7];
        bVar20 = pbVar9[8];
        bVar21 = pbVar9[9];
        bVar22 = pbVar9[10];
        bVar23 = pbVar9[0xb];
        bVar24 = pbVar9[0xc];
        bVar25 = pbVar9[0xd];
        bVar26 = pbVar9[0xe];
        bVar27 = pbVar9[0xf];
        bVar29 = (bVar28 < bVar29) * bVar28 | (bVar28 >= bVar29) * bVar29;
        bVar31 = (bVar30 < bVar31) * bVar30 | (bVar30 >= bVar31) * bVar31;
        bVar33 = (bVar32 < bVar33) * bVar32 | (bVar32 >= bVar33) * bVar33;
        bVar35 = (bVar34 < bVar35) * bVar34 | (bVar34 >= bVar35) * bVar35;
        bVar37 = (bVar36 < bVar37) * bVar36 | (bVar36 >= bVar37) * bVar37;
        bVar39 = (bVar38 < bVar39) * bVar38 | (bVar38 >= bVar39) * bVar39;
        bVar41 = (bVar40 < bVar41) * bVar40 | (bVar40 >= bVar41) * bVar41;
        bVar43 = (bVar42 < bVar43) * bVar42 | (bVar42 >= bVar43) * bVar43;
        bVar45 = (bVar44 < bVar45) * bVar44 | (bVar44 >= bVar45) * bVar45;
        bVar47 = (bVar46 < bVar47) * bVar46 | (bVar46 >= bVar47) * bVar47;
        bVar49 = (bVar48 < bVar49) * bVar48 | (bVar48 >= bVar49) * bVar49;
        bVar51 = (bVar50 < bVar51) * bVar50 | (bVar50 >= bVar51) * bVar51;
        bVar53 = (bVar52 < bVar53) * bVar52 | (bVar52 >= bVar53) * bVar53;
        bVar55 = (bVar54 < bVar55) * bVar54 | (bVar54 >= bVar55) * bVar55;
        bVar57 = (bVar56 < bVar57) * bVar56 | (bVar56 >= bVar57) * bVar57;
        bVar59 = (bVar58 < bVar59) * bVar58 | (bVar58 >= bVar59) * bVar59;
        bVar29 = (bVar12 < bVar29) * bVar12 | (bVar12 >= bVar29) * bVar29;
        bVar31 = (bVar13 < bVar31) * bVar13 | (bVar13 >= bVar31) * bVar31;
        bVar33 = (bVar14 < bVar33) * bVar14 | (bVar14 >= bVar33) * bVar33;
        bVar35 = (bVar15 < bVar35) * bVar15 | (bVar15 >= bVar35) * bVar35;
        bVar37 = (bVar16 < bVar37) * bVar16 | (bVar16 >= bVar37) * bVar37;
        bVar39 = (bVar17 < bVar39) * bVar17 | (bVar17 >= bVar39) * bVar39;
        bVar41 = (bVar18 < bVar41) * bVar18 | (bVar18 >= bVar41) * bVar41;
        bVar43 = (bVar19 < bVar43) * bVar19 | (bVar19 >= bVar43) * bVar43;
        bVar45 = (bVar20 < bVar45) * bVar20 | (bVar20 >= bVar45) * bVar45;
        bVar47 = (bVar21 < bVar47) * bVar21 | (bVar21 >= bVar47) * bVar47;
        bVar49 = (bVar22 < bVar49) * bVar22 | (bVar22 >= bVar49) * bVar49;
        bVar51 = (bVar23 < bVar51) * bVar23 | (bVar23 >= bVar51) * bVar51;
        bVar53 = (bVar24 < bVar53) * bVar24 | (bVar24 >= bVar53) * bVar53;
        bVar55 = (bVar25 < bVar55) * bVar25 | (bVar25 >= bVar55) * bVar55;
        bVar57 = (bVar26 < bVar57) * bVar26 | (bVar26 >= bVar57) * bVar57;
        bVar59 = (bVar27 < bVar59) * bVar27 | (bVar27 >= bVar59) * bVar59;
        pbVar9 = pbVar4 + param_2 * 2;
        bVar28 = bVar29;
        bVar30 = bVar31;
        bVar32 = bVar33;
        bVar34 = bVar35;
        bVar36 = bVar37;
        bVar38 = bVar39;
        bVar40 = bVar41;
        bVar42 = bVar43;
        bVar44 = bVar45;
        bVar46 = bVar47;
        bVar48 = bVar49;
        bVar50 = bVar51;
        bVar52 = bVar53;
        bVar54 = bVar55;
        bVar56 = bVar57;
        bVar58 = bVar59;
        if (lVar3 != 1 && SCARRY8(lVar3,-1) == lVar3 + -1 < 0) {
          do {
            bVar28 = pbVar4[0x10];
            bVar30 = pbVar4[0x11];
            bVar32 = pbVar4[0x12];
            bVar34 = pbVar4[0x13];
            bVar36 = pbVar4[0x14];
            bVar38 = pbVar4[0x15];
            bVar40 = pbVar4[0x16];
            bVar42 = pbVar4[0x17];
            bVar44 = pbVar4[0x18];
            bVar46 = pbVar4[0x19];
            bVar48 = pbVar4[0x1a];
            bVar50 = pbVar4[0x1b];
            bVar52 = pbVar4[0x1c];
            bVar54 = pbVar4[0x1d];
            bVar56 = pbVar4[0x1e];
            bVar58 = pbVar4[0x1f];
            lVar10 = lVar10 + 1;
            pbVar6 = pbVar4 + param_2 + 0x10;
            bVar12 = *pbVar6;
            bVar13 = pbVar6[1];
            bVar14 = pbVar6[2];
            bVar15 = pbVar6[3];
            bVar16 = pbVar6[4];
            bVar17 = pbVar6[5];
            bVar18 = pbVar6[6];
            bVar19 = pbVar6[7];
            bVar20 = pbVar6[8];
            bVar21 = pbVar6[9];
            bVar22 = pbVar6[10];
            bVar23 = pbVar6[0xb];
            bVar24 = pbVar6[0xc];
            bVar25 = pbVar6[0xd];
            bVar26 = pbVar6[0xe];
            bVar27 = pbVar6[0xf];
            bVar12 = (bVar12 < bVar28) * bVar12 | (bVar12 >= bVar28) * bVar28;
            bVar13 = (bVar13 < bVar30) * bVar13 | (bVar13 >= bVar30) * bVar30;
            bVar14 = (bVar14 < bVar32) * bVar14 | (bVar14 >= bVar32) * bVar32;
            bVar15 = (bVar15 < bVar34) * bVar15 | (bVar15 >= bVar34) * bVar34;
            bVar16 = (bVar16 < bVar36) * bVar16 | (bVar16 >= bVar36) * bVar36;
            bVar17 = (bVar17 < bVar38) * bVar17 | (bVar17 >= bVar38) * bVar38;
            bVar18 = (bVar18 < bVar40) * bVar18 | (bVar18 >= bVar40) * bVar40;
            bVar19 = (bVar19 < bVar42) * bVar19 | (bVar19 >= bVar42) * bVar42;
            bVar20 = (bVar20 < bVar44) * bVar20 | (bVar20 >= bVar44) * bVar44;
            bVar21 = (bVar21 < bVar46) * bVar21 | (bVar21 >= bVar46) * bVar46;
            bVar22 = (bVar22 < bVar48) * bVar22 | (bVar22 >= bVar48) * bVar48;
            bVar23 = (bVar23 < bVar50) * bVar23 | (bVar23 >= bVar50) * bVar50;
            bVar24 = (bVar24 < bVar52) * bVar24 | (bVar24 >= bVar52) * bVar52;
            bVar25 = (bVar25 < bVar54) * bVar25 | (bVar25 >= bVar54) * bVar54;
            bVar26 = (bVar26 < bVar56) * bVar26 | (bVar26 >= bVar56) * bVar56;
            bVar27 = (bVar27 < bVar58) * bVar27 | (bVar27 >= bVar58) * bVar58;
            pbVar6 = pbVar4 + param_2 * 2 + 0x10;
            bVar28 = *pbVar6;
            bVar30 = pbVar6[1];
            bVar32 = pbVar6[2];
            bVar34 = pbVar6[3];
            bVar36 = pbVar6[4];
            bVar38 = pbVar6[5];
            bVar40 = pbVar6[6];
            bVar42 = pbVar6[7];
            bVar44 = pbVar6[8];
            bVar46 = pbVar6[9];
            bVar48 = pbVar6[10];
            bVar50 = pbVar6[0xb];
            bVar52 = pbVar6[0xc];
            bVar54 = pbVar6[0xd];
            bVar56 = pbVar6[0xe];
            bVar58 = pbVar6[0xf];
            pbVar4 = pbVar4 + 0x10;
            bVar28 = (bVar28 < bVar12) * bVar28 | (bVar28 >= bVar12) * bVar12;
            bVar30 = (bVar30 < bVar13) * bVar30 | (bVar30 >= bVar13) * bVar13;
            bVar32 = (bVar32 < bVar14) * bVar32 | (bVar32 >= bVar14) * bVar14;
            bVar34 = (bVar34 < bVar15) * bVar34 | (bVar34 >= bVar15) * bVar15;
            bVar36 = (bVar36 < bVar16) * bVar36 | (bVar36 >= bVar16) * bVar16;
            bVar38 = (bVar38 < bVar17) * bVar38 | (bVar38 >= bVar17) * bVar17;
            bVar40 = (bVar40 < bVar18) * bVar40 | (bVar40 >= bVar18) * bVar18;
            bVar42 = (bVar42 < bVar19) * bVar42 | (bVar42 >= bVar19) * bVar19;
            bVar44 = (bVar44 < bVar20) * bVar44 | (bVar44 >= bVar20) * bVar20;
            bVar46 = (bVar46 < bVar21) * bVar46 | (bVar46 >= bVar21) * bVar21;
            bVar48 = (bVar48 < bVar22) * bVar48 | (bVar48 >= bVar22) * bVar22;
            bVar50 = (bVar50 < bVar23) * bVar50 | (bVar50 >= bVar23) * bVar23;
            bVar52 = (bVar52 < bVar24) * bVar52 | (bVar52 >= bVar24) * bVar24;
            bVar54 = (bVar54 < bVar25) * bVar54 | (bVar54 >= bVar25) * bVar25;
            bVar56 = (bVar56 < bVar26) * bVar56 | (bVar56 >= bVar26) * bVar26;
            bVar58 = (bVar58 < bVar27) * bVar58 | (bVar58 >= bVar27) * bVar27;
            bVar29 = (bVar29 < bVar35) * bVar29 | (bVar29 >= bVar35) * bVar35;
            bVar31 = (bVar31 < bVar37) * bVar31 | (bVar31 >= bVar37) * bVar37;
            bVar33 = (bVar33 < bVar39) * bVar33 | (bVar33 >= bVar39) * bVar39;
            bVar35 = (bVar35 < bVar41) * bVar35 | (bVar35 >= bVar41) * bVar41;
            bVar37 = (bVar37 < bVar43) * bVar37 | (bVar37 >= bVar43) * bVar43;
            bVar39 = (bVar39 < bVar45) * bVar39 | (bVar39 >= bVar45) * bVar45;
            bVar12 = (bVar41 < bVar47) * bVar41 | (bVar41 >= bVar47) * bVar47;
            bVar13 = (bVar43 < bVar49) * bVar43 | (bVar43 >= bVar49) * bVar49;
            bVar14 = (bVar45 < bVar51) * bVar45 | (bVar45 >= bVar51) * bVar51;
            bVar15 = (bVar47 < bVar53) * bVar47 | (bVar47 >= bVar53) * bVar53;
            bVar16 = (bVar49 < bVar55) * bVar49 | (bVar49 >= bVar55) * bVar55;
            bVar17 = (bVar51 < bVar57) * bVar51 | (bVar51 >= bVar57) * bVar57;
            bVar18 = (bVar53 < bVar59) * bVar53 | (bVar53 >= bVar59) * bVar59;
            bVar19 = (bVar55 < bVar28) * bVar55 | (bVar55 >= bVar28) * bVar28;
            bVar20 = (bVar57 < bVar30) * bVar57 | (bVar57 >= bVar30) * bVar30;
            bVar21 = (bVar59 < bVar32) * bVar59 | (bVar59 >= bVar32) * bVar32;
            *pbVar8 = (bVar29 < bVar41) * bVar29 | (bVar29 >= bVar41) * bVar41;
            pbVar8[1] = (bVar31 < bVar43) * bVar31 | (bVar31 >= bVar43) * bVar43;
            pbVar8[2] = (bVar33 < bVar45) * bVar33 | (bVar33 >= bVar45) * bVar45;
            pbVar8[3] = (bVar35 < bVar47) * bVar35 | (bVar35 >= bVar47) * bVar47;
            pbVar8[4] = (bVar37 < bVar49) * bVar37 | (bVar37 >= bVar49) * bVar49;
            pbVar8[5] = (bVar39 < bVar51) * bVar39 | (bVar39 >= bVar51) * bVar51;
            pbVar8[6] = (bVar12 < bVar53) * bVar12 | (bVar12 >= bVar53) * bVar53;
            pbVar8[7] = (bVar13 < bVar55) * bVar13 | (bVar13 >= bVar55) * bVar55;
            pbVar8[8] = (bVar14 < bVar57) * bVar14 | (bVar14 >= bVar57) * bVar57;
            pbVar8[9] = (bVar15 < bVar59) * bVar15 | (bVar15 >= bVar59) * bVar59;
            pbVar8[10] = (bVar16 < bVar28) * bVar16 | (bVar16 >= bVar28) * bVar28;
            pbVar8[0xb] = (bVar17 < bVar30) * bVar17 | (bVar17 >= bVar30) * bVar30;
            pbVar8[0xc] = (bVar18 < bVar32) * bVar18 | (bVar18 >= bVar32) * bVar32;
            pbVar8[0xd] = (bVar19 < bVar34) * bVar19 | (bVar19 >= bVar34) * bVar34;
            pbVar8[0xe] = (bVar20 < bVar36) * bVar20 | (bVar20 >= bVar36) * bVar36;
            pbVar8[0xf] = (bVar21 < bVar38) * bVar21 | (bVar21 >= bVar38) * bVar38;
            pbVar8 = pbVar8 + 0x10;
            bVar29 = bVar28;
            bVar31 = bVar30;
            bVar33 = bVar32;
            bVar35 = bVar34;
            bVar37 = bVar36;
            bVar39 = bVar38;
            bVar41 = bVar40;
            bVar43 = bVar42;
            bVar45 = bVar44;
            bVar47 = bVar46;
            bVar49 = bVar48;
            bVar51 = bVar50;
            bVar53 = bVar52;
            bVar55 = bVar54;
            bVar57 = bVar56;
            bVar59 = bVar58;
          } while (lVar10 < lVar3 + -1);
          pbVar6 = pbVar4 + param_2;
          pbVar9 = pbVar4 + param_2 * 2;
        }
        uVar1 = *(undefined6 *)(pbVar4 + 0x10);
        pbVar4 = pbVar4 + 0x10;
        uVar2 = *(undefined6 *)(pbVar6 + 0x10);
        bVar29 = (byte)uVar2;
        bVar31 = (byte)uVar1;
        bVar31 = (bVar29 < bVar31) * bVar29 | (bVar29 >= bVar31) * bVar31;
        bVar29 = (byte)((uint6)uVar2 >> 8);
        bVar33 = (byte)((uint6)uVar1 >> 8);
        bVar33 = (bVar29 < bVar33) * bVar29 | (bVar29 >= bVar33) * bVar33;
        bVar29 = (byte)((uint6)uVar2 >> 0x10);
        bVar35 = (byte)((uint6)uVar1 >> 0x10);
        bVar35 = (bVar29 < bVar35) * bVar29 | (bVar29 >= bVar35) * bVar35;
        bVar29 = (byte)((uint6)uVar2 >> 0x18);
        bVar37 = (byte)((uint6)uVar1 >> 0x18);
        bVar39 = (bVar29 < bVar37) * bVar29 | (bVar29 >= bVar37) * bVar37;
        bVar29 = (byte)((uint6)uVar2 >> 0x20);
        bVar37 = (byte)((uint6)uVar1 >> 0x20);
        bVar43 = (bVar29 < bVar37) * bVar29 | (bVar29 >= bVar37) * bVar37;
        bVar29 = (byte)((uint6)uVar2 >> 0x28);
        bVar37 = (byte)((uint6)uVar1 >> 0x28);
        bVar47 = (bVar29 < bVar37) * bVar29 | (bVar29 >= bVar37) * bVar37;
        uVar1 = *(undefined6 *)(pbVar9 + 0x10);
        bVar29 = (byte)uVar1;
        bVar31 = (bVar29 < bVar31) * bVar29 | (bVar29 >= bVar31) * bVar31;
        bVar29 = (byte)((uint6)uVar1 >> 8);
        bVar33 = (bVar29 < bVar33) * bVar29 | (bVar29 >= bVar33) * bVar33;
        bVar29 = (byte)((uint6)uVar1 >> 0x10);
        bVar37 = (bVar29 < bVar35) * bVar29 | (bVar29 >= bVar35) * bVar35;
        bVar29 = (byte)((uint6)uVar1 >> 0x18);
        bVar41 = (bVar29 < bVar39) * bVar29 | (bVar29 >= bVar39) * bVar39;
        bVar29 = (byte)((uint6)uVar1 >> 0x20);
        bVar45 = (bVar29 < bVar43) * bVar29 | (bVar29 >= bVar43) * bVar43;
        bVar29 = (byte)((uint6)uVar1 >> 0x28);
        bVar49 = (bVar29 < bVar47) * bVar29 | (bVar29 >= bVar47) * bVar47;
        bVar29 = (bVar28 < bVar34) * bVar28 | (bVar28 >= bVar34) * bVar34;
        bVar35 = (bVar30 < bVar36) * bVar30 | (bVar30 >= bVar36) * bVar36;
        bVar39 = (bVar32 < bVar38) * bVar32 | (bVar32 >= bVar38) * bVar38;
        bVar43 = (bVar34 < bVar40) * bVar34 | (bVar34 >= bVar40) * bVar40;
        bVar47 = (bVar36 < bVar42) * bVar36 | (bVar36 >= bVar42) * bVar42;
        bVar51 = (bVar38 < bVar44) * bVar38 | (bVar38 >= bVar44) * bVar44;
        bVar53 = (bVar40 < bVar46) * bVar40 | (bVar40 >= bVar46) * bVar46;
        bVar55 = (bVar42 < bVar48) * bVar42 | (bVar42 >= bVar48) * bVar48;
        bVar57 = (bVar44 < bVar50) * bVar44 | (bVar44 >= bVar50) * bVar50;
        bVar59 = (bVar46 < bVar52) * bVar46 | (bVar46 >= bVar52) * bVar52;
        bVar28 = (bVar48 < bVar54) * bVar48 | (bVar48 >= bVar54) * bVar54;
        bVar30 = (bVar50 < bVar56) * bVar50 | (bVar50 >= bVar56) * bVar56;
        bVar32 = (bVar52 < bVar58) * bVar52 | (bVar52 >= bVar58) * bVar58;
        bVar34 = (bVar54 < bVar31) * bVar54 | (bVar54 >= bVar31) * bVar31;
        bVar36 = (bVar56 < bVar33) * bVar56 | (bVar56 >= bVar33) * bVar33;
        bVar38 = (bVar58 < bVar37) * bVar58 | (bVar58 >= bVar37) * bVar37;
        *pbVar8 = (bVar29 < bVar40) * bVar29 | (bVar29 >= bVar40) * bVar40;
        pbVar8[1] = (bVar35 < bVar42) * bVar35 | (bVar35 >= bVar42) * bVar42;
        pbVar8[2] = (bVar39 < bVar44) * bVar39 | (bVar39 >= bVar44) * bVar44;
        pbVar8[3] = (bVar43 < bVar46) * bVar43 | (bVar43 >= bVar46) * bVar46;
        pbVar8[4] = (bVar47 < bVar48) * bVar47 | (bVar47 >= bVar48) * bVar48;
        pbVar8[5] = (bVar51 < bVar50) * bVar51 | (bVar51 >= bVar50) * bVar50;
        pbVar8[6] = (bVar53 < bVar52) * bVar53 | (bVar53 >= bVar52) * bVar52;
        pbVar8[7] = (bVar55 < bVar54) * bVar55 | (bVar55 >= bVar54) * bVar54;
        pbVar8[8] = (bVar57 < bVar56) * bVar57 | (bVar57 >= bVar56) * bVar56;
        pbVar8[9] = (bVar59 < bVar58) * bVar59 | (bVar59 >= bVar58) * bVar58;
        pbVar8[10] = (bVar28 < bVar31) * bVar28 | (bVar28 >= bVar31) * bVar31;
        pbVar8[0xb] = (bVar30 < bVar33) * bVar30 | (bVar30 >= bVar33) * bVar33;
        pbVar8[0xc] = (bVar32 < bVar37) * bVar32 | (bVar32 >= bVar37) * bVar37;
        pbVar8[0xd] = (bVar34 < bVar41) * bVar34 | (bVar34 >= bVar41) * bVar41;
        pbVar8[0xe] = (bVar36 < bVar45) * bVar36 | (bVar36 >= bVar45) * bVar45;
        pbVar8[0xf] = (bVar38 < bVar49) * bVar38 | (bVar38 >= bVar49) * bVar49;
        pbVar8 = pbVar8 + 0x10;
      }
      if ((uVar11 & 0xf) != 0) {
        FUN_140475ac0(pbVar4,param_2,pbVar8);
      }
      lVar7 = lVar7 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (lVar7 < param_6);
  }
  return;
}


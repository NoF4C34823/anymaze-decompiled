
void FUN_140432440(byte *param_1,longlong param_2,byte *param_3,longlong param_4,ulonglong param_5,
                  longlong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
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
  
  lVar8 = 0;
  if (0 < param_6 + -1) {
    do {
      pbVar5 = param_1;
      uVar12 = param_5;
      pbVar9 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar12 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar12) {
          uVar12 = param_5;
        }
        FUN_140432820(param_1,param_2,param_3,uVar12);
        pbVar5 = param_1 + uVar12;
        pbVar9 = param_3 + uVar12;
        uVar12 = param_5 - uVar12;
      }
      uVar6 = (longlong)uVar12 >> 4;
      if (uVar6 != 0) {
        bVar30 = *pbVar5;
        bVar32 = pbVar5[1];
        bVar34 = pbVar5[2];
        bVar36 = pbVar5[3];
        bVar38 = pbVar5[4];
        bVar40 = pbVar5[5];
        bVar42 = pbVar5[6];
        bVar44 = pbVar5[7];
        bVar46 = pbVar5[8];
        bVar48 = pbVar5[9];
        bVar50 = pbVar5[10];
        bVar52 = pbVar5[0xb];
        bVar54 = pbVar5[0xc];
        bVar56 = pbVar5[0xd];
        bVar58 = pbVar5[0xe];
        bVar60 = pbVar5[0xf];
        lVar4 = 0;
        pbVar7 = pbVar5 + param_2;
        bVar29 = *pbVar7;
        bVar31 = pbVar7[1];
        bVar33 = pbVar7[2];
        bVar35 = pbVar7[3];
        bVar37 = pbVar7[4];
        bVar39 = pbVar7[5];
        bVar41 = pbVar7[6];
        bVar43 = pbVar7[7];
        bVar45 = pbVar7[8];
        bVar47 = pbVar7[9];
        bVar49 = pbVar7[10];
        bVar51 = pbVar7[0xb];
        bVar53 = pbVar7[0xc];
        bVar55 = pbVar7[0xd];
        bVar57 = pbVar7[0xe];
        bVar59 = pbVar7[0xf];
        bVar29 = (bVar30 < bVar29) * bVar29 | (bVar30 >= bVar29) * bVar30;
        bVar31 = (bVar32 < bVar31) * bVar31 | (bVar32 >= bVar31) * bVar32;
        bVar33 = (bVar34 < bVar33) * bVar33 | (bVar34 >= bVar33) * bVar34;
        bVar35 = (bVar36 < bVar35) * bVar35 | (bVar36 >= bVar35) * bVar36;
        bVar37 = (bVar38 < bVar37) * bVar37 | (bVar38 >= bVar37) * bVar38;
        bVar39 = (bVar40 < bVar39) * bVar39 | (bVar40 >= bVar39) * bVar40;
        bVar41 = (bVar42 < bVar41) * bVar41 | (bVar42 >= bVar41) * bVar42;
        bVar43 = (bVar44 < bVar43) * bVar43 | (bVar44 >= bVar43) * bVar44;
        bVar45 = (bVar46 < bVar45) * bVar45 | (bVar46 >= bVar45) * bVar46;
        bVar47 = (bVar48 < bVar47) * bVar47 | (bVar48 >= bVar47) * bVar48;
        bVar49 = (bVar50 < bVar49) * bVar49 | (bVar50 >= bVar49) * bVar50;
        bVar51 = (bVar52 < bVar51) * bVar51 | (bVar52 >= bVar51) * bVar52;
        bVar53 = (bVar54 < bVar53) * bVar53 | (bVar54 >= bVar53) * bVar54;
        bVar55 = (bVar56 < bVar55) * bVar55 | (bVar56 >= bVar55) * bVar56;
        bVar57 = (bVar58 < bVar57) * bVar57 | (bVar58 >= bVar57) * bVar58;
        bVar59 = (bVar60 < bVar59) * bVar59 | (bVar60 >= bVar59) * bVar60;
        pbVar7 = pbVar5 + param_2 * 2;
        bVar30 = *pbVar7;
        bVar32 = pbVar7[1];
        bVar34 = pbVar7[2];
        bVar36 = pbVar7[3];
        bVar38 = pbVar7[4];
        bVar40 = pbVar7[5];
        bVar42 = pbVar7[6];
        bVar44 = pbVar7[7];
        bVar46 = pbVar7[8];
        bVar48 = pbVar7[9];
        bVar50 = pbVar7[10];
        bVar52 = pbVar7[0xb];
        bVar54 = pbVar7[0xc];
        bVar56 = pbVar7[0xd];
        bVar58 = pbVar7[0xe];
        bVar60 = pbVar7[0xf];
        bVar30 = (bVar29 < bVar30) * bVar30 | (bVar29 >= bVar30) * bVar29;
        bVar32 = (bVar31 < bVar32) * bVar32 | (bVar31 >= bVar32) * bVar31;
        bVar34 = (bVar33 < bVar34) * bVar34 | (bVar33 >= bVar34) * bVar33;
        bVar36 = (bVar35 < bVar36) * bVar36 | (bVar35 >= bVar36) * bVar35;
        bVar38 = (bVar37 < bVar38) * bVar38 | (bVar37 >= bVar38) * bVar37;
        bVar40 = (bVar39 < bVar40) * bVar40 | (bVar39 >= bVar40) * bVar39;
        bVar42 = (bVar41 < bVar42) * bVar42 | (bVar41 >= bVar42) * bVar41;
        bVar44 = (bVar43 < bVar44) * bVar44 | (bVar43 >= bVar44) * bVar43;
        bVar46 = (bVar45 < bVar46) * bVar46 | (bVar45 >= bVar46) * bVar45;
        bVar48 = (bVar47 < bVar48) * bVar48 | (bVar47 >= bVar48) * bVar47;
        bVar50 = (bVar49 < bVar50) * bVar50 | (bVar49 >= bVar50) * bVar49;
        bVar52 = (bVar51 < bVar52) * bVar52 | (bVar51 >= bVar52) * bVar51;
        bVar54 = (bVar53 < bVar54) * bVar54 | (bVar53 >= bVar54) * bVar53;
        bVar56 = (bVar55 < bVar56) * bVar56 | (bVar55 >= bVar56) * bVar55;
        bVar58 = (bVar57 < bVar58) * bVar58 | (bVar57 >= bVar58) * bVar57;
        bVar60 = (bVar59 < bVar60) * bVar60 | (bVar59 >= bVar60) * bVar59;
        if (0 < (longlong)(uVar6 & 0xfffffffffffffffe)) {
          do {
            bVar29 = pbVar5[0x10];
            bVar31 = pbVar5[0x11];
            bVar33 = pbVar5[0x12];
            bVar35 = pbVar5[0x13];
            bVar37 = pbVar5[0x14];
            bVar39 = pbVar5[0x15];
            bVar41 = pbVar5[0x16];
            bVar43 = pbVar5[0x17];
            bVar45 = pbVar5[0x18];
            bVar47 = pbVar5[0x19];
            bVar49 = pbVar5[0x1a];
            bVar51 = pbVar5[0x1b];
            bVar53 = pbVar5[0x1c];
            bVar55 = pbVar5[0x1d];
            bVar57 = pbVar5[0x1e];
            bVar59 = pbVar5[0x1f];
            lVar4 = lVar4 + 2;
            pbVar7 = pbVar5 + param_2 + 0x10;
            bVar13 = *pbVar7;
            bVar14 = pbVar7[1];
            bVar15 = pbVar7[2];
            bVar16 = pbVar7[3];
            bVar17 = pbVar7[4];
            bVar18 = pbVar7[5];
            bVar19 = pbVar7[6];
            bVar20 = pbVar7[7];
            bVar21 = pbVar7[8];
            bVar22 = pbVar7[9];
            bVar23 = pbVar7[10];
            bVar24 = pbVar7[0xb];
            bVar25 = pbVar7[0xc];
            bVar26 = pbVar7[0xd];
            bVar27 = pbVar7[0xe];
            bVar28 = pbVar7[0xf];
            bVar13 = (bVar29 < bVar13) * bVar13 | (bVar29 >= bVar13) * bVar29;
            bVar14 = (bVar31 < bVar14) * bVar14 | (bVar31 >= bVar14) * bVar31;
            bVar15 = (bVar33 < bVar15) * bVar15 | (bVar33 >= bVar15) * bVar33;
            bVar16 = (bVar35 < bVar16) * bVar16 | (bVar35 >= bVar16) * bVar35;
            bVar17 = (bVar37 < bVar17) * bVar17 | (bVar37 >= bVar17) * bVar37;
            bVar18 = (bVar39 < bVar18) * bVar18 | (bVar39 >= bVar18) * bVar39;
            bVar19 = (bVar41 < bVar19) * bVar19 | (bVar41 >= bVar19) * bVar41;
            bVar20 = (bVar43 < bVar20) * bVar20 | (bVar43 >= bVar20) * bVar43;
            bVar21 = (bVar45 < bVar21) * bVar21 | (bVar45 >= bVar21) * bVar45;
            bVar22 = (bVar47 < bVar22) * bVar22 | (bVar47 >= bVar22) * bVar47;
            bVar23 = (bVar49 < bVar23) * bVar23 | (bVar49 >= bVar23) * bVar49;
            bVar24 = (bVar51 < bVar24) * bVar24 | (bVar51 >= bVar24) * bVar51;
            bVar25 = (bVar53 < bVar25) * bVar25 | (bVar53 >= bVar25) * bVar53;
            bVar26 = (bVar55 < bVar26) * bVar26 | (bVar55 >= bVar26) * bVar55;
            bVar27 = (bVar57 < bVar27) * bVar27 | (bVar57 >= bVar27) * bVar57;
            bVar28 = (bVar59 < bVar28) * bVar28 | (bVar59 >= bVar28) * bVar59;
            pbVar7 = pbVar5 + param_2 * 2 + 0x10;
            bVar29 = *pbVar7;
            bVar31 = pbVar7[1];
            bVar33 = pbVar7[2];
            bVar35 = pbVar7[3];
            bVar37 = pbVar7[4];
            bVar39 = pbVar7[5];
            bVar41 = pbVar7[6];
            bVar43 = pbVar7[7];
            bVar45 = pbVar7[8];
            bVar47 = pbVar7[9];
            bVar49 = pbVar7[10];
            bVar51 = pbVar7[0xb];
            bVar53 = pbVar7[0xc];
            bVar55 = pbVar7[0xd];
            bVar57 = pbVar7[0xe];
            bVar59 = pbVar7[0xf];
            bVar13 = (bVar13 < bVar29) * bVar29 | (bVar13 >= bVar29) * bVar13;
            bVar14 = (bVar14 < bVar31) * bVar31 | (bVar14 >= bVar31) * bVar14;
            bVar15 = (bVar15 < bVar33) * bVar33 | (bVar15 >= bVar33) * bVar15;
            bVar16 = (bVar16 < bVar35) * bVar35 | (bVar16 >= bVar35) * bVar16;
            bVar17 = (bVar17 < bVar37) * bVar37 | (bVar17 >= bVar37) * bVar17;
            bVar18 = (bVar18 < bVar39) * bVar39 | (bVar18 >= bVar39) * bVar18;
            bVar19 = (bVar19 < bVar41) * bVar41 | (bVar19 >= bVar41) * bVar19;
            bVar20 = (bVar20 < bVar43) * bVar43 | (bVar20 >= bVar43) * bVar20;
            bVar21 = (bVar21 < bVar45) * bVar45 | (bVar21 >= bVar45) * bVar21;
            bVar22 = (bVar22 < bVar47) * bVar47 | (bVar22 >= bVar47) * bVar22;
            bVar23 = (bVar23 < bVar49) * bVar49 | (bVar23 >= bVar49) * bVar23;
            bVar24 = (bVar24 < bVar51) * bVar51 | (bVar24 >= bVar51) * bVar24;
            bVar25 = (bVar25 < bVar53) * bVar53 | (bVar25 >= bVar53) * bVar25;
            bVar26 = (bVar26 < bVar55) * bVar55 | (bVar26 >= bVar55) * bVar26;
            bVar27 = (bVar27 < bVar57) * bVar57 | (bVar27 >= bVar57) * bVar27;
            bVar28 = (bVar28 < bVar59) * bVar59 | (bVar28 >= bVar59) * bVar28;
            bVar30 = (bVar38 < bVar30) * bVar30 | (bVar38 >= bVar30) * bVar38;
            bVar32 = (bVar40 < bVar32) * bVar32 | (bVar40 >= bVar32) * bVar40;
            bVar34 = (bVar42 < bVar34) * bVar34 | (bVar42 >= bVar34) * bVar42;
            bVar36 = (bVar44 < bVar36) * bVar36 | (bVar44 >= bVar36) * bVar44;
            bVar38 = (bVar46 < bVar38) * bVar38 | (bVar46 >= bVar38) * bVar46;
            bVar40 = (bVar48 < bVar40) * bVar40 | (bVar48 >= bVar40) * bVar48;
            bVar42 = (bVar50 < bVar42) * bVar42 | (bVar50 >= bVar42) * bVar50;
            bVar44 = (bVar52 < bVar44) * bVar44 | (bVar52 >= bVar44) * bVar52;
            bVar29 = (bVar54 < bVar46) * bVar46 | (bVar54 >= bVar46) * bVar54;
            bVar31 = (bVar56 < bVar48) * bVar48 | (bVar56 >= bVar48) * bVar56;
            bVar33 = (bVar58 < bVar50) * bVar50 | (bVar58 >= bVar50) * bVar58;
            bVar35 = (bVar60 < bVar52) * bVar52 | (bVar60 >= bVar52) * bVar60;
            bVar37 = (bVar13 < bVar54) * bVar54 | (bVar13 >= bVar54) * bVar13;
            bVar39 = (bVar14 < bVar56) * bVar56 | (bVar14 >= bVar56) * bVar14;
            bVar41 = (bVar15 < bVar58) * bVar58 | (bVar15 >= bVar58) * bVar15;
            bVar43 = (bVar16 < bVar60) * bVar60 | (bVar16 >= bVar60) * bVar16;
            *pbVar9 = (bVar46 < bVar30) * bVar30 | (bVar46 >= bVar30) * bVar46;
            pbVar9[1] = (bVar48 < bVar32) * bVar32 | (bVar48 >= bVar32) * bVar48;
            pbVar9[2] = (bVar50 < bVar34) * bVar34 | (bVar50 >= bVar34) * bVar50;
            pbVar9[3] = (bVar52 < bVar36) * bVar36 | (bVar52 >= bVar36) * bVar52;
            pbVar9[4] = (bVar54 < bVar38) * bVar38 | (bVar54 >= bVar38) * bVar54;
            pbVar9[5] = (bVar56 < bVar40) * bVar40 | (bVar56 >= bVar40) * bVar56;
            pbVar9[6] = (bVar58 < bVar42) * bVar42 | (bVar58 >= bVar42) * bVar58;
            pbVar9[7] = (bVar60 < bVar44) * bVar44 | (bVar60 >= bVar44) * bVar60;
            pbVar9[8] = (bVar13 < bVar29) * bVar29 | (bVar13 >= bVar29) * bVar13;
            pbVar9[9] = (bVar14 < bVar31) * bVar31 | (bVar14 >= bVar31) * bVar14;
            pbVar9[10] = (bVar15 < bVar33) * bVar33 | (bVar15 >= bVar33) * bVar15;
            pbVar9[0xb] = (bVar16 < bVar35) * bVar35 | (bVar16 >= bVar35) * bVar16;
            pbVar9[0xc] = (bVar17 < bVar37) * bVar37 | (bVar17 >= bVar37) * bVar17;
            pbVar9[0xd] = (bVar18 < bVar39) * bVar39 | (bVar18 >= bVar39) * bVar18;
            pbVar9[0xe] = (bVar19 < bVar41) * bVar41 | (bVar19 >= bVar41) * bVar19;
            pbVar9[0xf] = (bVar20 < bVar43) * bVar43 | (bVar20 >= bVar43) * bVar20;
            bVar30 = pbVar5[0x20];
            bVar32 = pbVar5[0x21];
            bVar34 = pbVar5[0x22];
            bVar36 = pbVar5[0x23];
            bVar38 = pbVar5[0x24];
            bVar40 = pbVar5[0x25];
            bVar42 = pbVar5[0x26];
            bVar44 = pbVar5[0x27];
            bVar46 = pbVar5[0x28];
            bVar48 = pbVar5[0x29];
            bVar50 = pbVar5[0x2a];
            bVar52 = pbVar5[0x2b];
            bVar54 = pbVar5[0x2c];
            bVar56 = pbVar5[0x2d];
            bVar58 = pbVar5[0x2e];
            bVar60 = pbVar5[0x2f];
            pbVar7 = pbVar5 + param_2 + 0x20;
            bVar29 = *pbVar7;
            bVar31 = pbVar7[1];
            bVar33 = pbVar7[2];
            bVar35 = pbVar7[3];
            bVar37 = pbVar7[4];
            bVar39 = pbVar7[5];
            bVar41 = pbVar7[6];
            bVar43 = pbVar7[7];
            bVar45 = pbVar7[8];
            bVar47 = pbVar7[9];
            bVar49 = pbVar7[10];
            bVar51 = pbVar7[0xb];
            bVar53 = pbVar7[0xc];
            bVar55 = pbVar7[0xd];
            bVar57 = pbVar7[0xe];
            bVar59 = pbVar7[0xf];
            bVar29 = (bVar30 < bVar29) * bVar29 | (bVar30 >= bVar29) * bVar30;
            bVar31 = (bVar32 < bVar31) * bVar31 | (bVar32 >= bVar31) * bVar32;
            bVar33 = (bVar34 < bVar33) * bVar33 | (bVar34 >= bVar33) * bVar34;
            bVar35 = (bVar36 < bVar35) * bVar35 | (bVar36 >= bVar35) * bVar36;
            bVar37 = (bVar38 < bVar37) * bVar37 | (bVar38 >= bVar37) * bVar38;
            bVar39 = (bVar40 < bVar39) * bVar39 | (bVar40 >= bVar39) * bVar40;
            bVar41 = (bVar42 < bVar41) * bVar41 | (bVar42 >= bVar41) * bVar42;
            bVar43 = (bVar44 < bVar43) * bVar43 | (bVar44 >= bVar43) * bVar44;
            bVar45 = (bVar46 < bVar45) * bVar45 | (bVar46 >= bVar45) * bVar46;
            bVar47 = (bVar48 < bVar47) * bVar47 | (bVar48 >= bVar47) * bVar48;
            bVar49 = (bVar50 < bVar49) * bVar49 | (bVar50 >= bVar49) * bVar50;
            bVar51 = (bVar52 < bVar51) * bVar51 | (bVar52 >= bVar51) * bVar52;
            bVar53 = (bVar54 < bVar53) * bVar53 | (bVar54 >= bVar53) * bVar54;
            bVar55 = (bVar56 < bVar55) * bVar55 | (bVar56 >= bVar55) * bVar56;
            bVar57 = (bVar58 < bVar57) * bVar57 | (bVar58 >= bVar57) * bVar58;
            bVar59 = (bVar60 < bVar59) * bVar59 | (bVar60 >= bVar59) * bVar60;
            pbVar7 = pbVar5 + param_2 * 2 + 0x20;
            bVar30 = *pbVar7;
            bVar32 = pbVar7[1];
            bVar34 = pbVar7[2];
            bVar36 = pbVar7[3];
            bVar38 = pbVar7[4];
            bVar40 = pbVar7[5];
            bVar42 = pbVar7[6];
            bVar44 = pbVar7[7];
            bVar46 = pbVar7[8];
            bVar48 = pbVar7[9];
            bVar50 = pbVar7[10];
            bVar52 = pbVar7[0xb];
            bVar54 = pbVar7[0xc];
            bVar56 = pbVar7[0xd];
            bVar58 = pbVar7[0xe];
            bVar60 = pbVar7[0xf];
            pbVar5 = pbVar5 + 0x20;
            bVar30 = (bVar29 < bVar30) * bVar30 | (bVar29 >= bVar30) * bVar29;
            bVar32 = (bVar31 < bVar32) * bVar32 | (bVar31 >= bVar32) * bVar31;
            bVar34 = (bVar33 < bVar34) * bVar34 | (bVar33 >= bVar34) * bVar33;
            bVar36 = (bVar35 < bVar36) * bVar36 | (bVar35 >= bVar36) * bVar35;
            bVar38 = (bVar37 < bVar38) * bVar38 | (bVar37 >= bVar38) * bVar37;
            bVar40 = (bVar39 < bVar40) * bVar40 | (bVar39 >= bVar40) * bVar39;
            bVar42 = (bVar41 < bVar42) * bVar42 | (bVar41 >= bVar42) * bVar41;
            bVar44 = (bVar43 < bVar44) * bVar44 | (bVar43 >= bVar44) * bVar43;
            bVar46 = (bVar45 < bVar46) * bVar46 | (bVar45 >= bVar46) * bVar45;
            bVar48 = (bVar47 < bVar48) * bVar48 | (bVar47 >= bVar48) * bVar47;
            bVar50 = (bVar49 < bVar50) * bVar50 | (bVar49 >= bVar50) * bVar49;
            bVar52 = (bVar51 < bVar52) * bVar52 | (bVar51 >= bVar52) * bVar51;
            bVar54 = (bVar53 < bVar54) * bVar54 | (bVar53 >= bVar54) * bVar53;
            bVar56 = (bVar55 < bVar56) * bVar56 | (bVar55 >= bVar56) * bVar55;
            bVar58 = (bVar57 < bVar58) * bVar58 | (bVar57 >= bVar58) * bVar57;
            bVar60 = (bVar59 < bVar60) * bVar60 | (bVar59 >= bVar60) * bVar59;
            bVar29 = (bVar17 < bVar13) * bVar13 | (bVar17 >= bVar13) * bVar17;
            bVar31 = (bVar18 < bVar14) * bVar14 | (bVar18 >= bVar14) * bVar18;
            bVar33 = (bVar19 < bVar15) * bVar15 | (bVar19 >= bVar15) * bVar19;
            bVar35 = (bVar20 < bVar16) * bVar16 | (bVar20 >= bVar16) * bVar20;
            bVar37 = (bVar21 < bVar17) * bVar17 | (bVar21 >= bVar17) * bVar21;
            bVar39 = (bVar22 < bVar18) * bVar18 | (bVar22 >= bVar18) * bVar22;
            bVar41 = (bVar23 < bVar19) * bVar19 | (bVar23 >= bVar19) * bVar23;
            bVar43 = (bVar24 < bVar20) * bVar20 | (bVar24 >= bVar20) * bVar24;
            bVar45 = (bVar25 < bVar21) * bVar21 | (bVar25 >= bVar21) * bVar25;
            bVar47 = (bVar26 < bVar22) * bVar22 | (bVar26 >= bVar22) * bVar26;
            bVar49 = (bVar27 < bVar23) * bVar23 | (bVar27 >= bVar23) * bVar27;
            bVar51 = (bVar28 < bVar24) * bVar24 | (bVar28 >= bVar24) * bVar28;
            bVar53 = (bVar30 < bVar25) * bVar25 | (bVar30 >= bVar25) * bVar30;
            bVar55 = (bVar32 < bVar26) * bVar26 | (bVar32 >= bVar26) * bVar32;
            bVar57 = (bVar34 < bVar27) * bVar27 | (bVar34 >= bVar27) * bVar34;
            bVar59 = (bVar36 < bVar28) * bVar28 | (bVar36 >= bVar28) * bVar36;
            pbVar9[0x10] = (bVar21 < bVar29) * bVar29 | (bVar21 >= bVar29) * bVar21;
            pbVar9[0x11] = (bVar22 < bVar31) * bVar31 | (bVar22 >= bVar31) * bVar22;
            pbVar9[0x12] = (bVar23 < bVar33) * bVar33 | (bVar23 >= bVar33) * bVar23;
            pbVar9[0x13] = (bVar24 < bVar35) * bVar35 | (bVar24 >= bVar35) * bVar24;
            pbVar9[0x14] = (bVar25 < bVar37) * bVar37 | (bVar25 >= bVar37) * bVar25;
            pbVar9[0x15] = (bVar26 < bVar39) * bVar39 | (bVar26 >= bVar39) * bVar26;
            pbVar9[0x16] = (bVar27 < bVar41) * bVar41 | (bVar27 >= bVar41) * bVar27;
            pbVar9[0x17] = (bVar28 < bVar43) * bVar43 | (bVar28 >= bVar43) * bVar28;
            pbVar9[0x18] = (bVar30 < bVar45) * bVar45 | (bVar30 >= bVar45) * bVar30;
            pbVar9[0x19] = (bVar32 < bVar47) * bVar47 | (bVar32 >= bVar47) * bVar32;
            pbVar9[0x1a] = (bVar34 < bVar49) * bVar49 | (bVar34 >= bVar49) * bVar34;
            pbVar9[0x1b] = (bVar36 < bVar51) * bVar51 | (bVar36 >= bVar51) * bVar36;
            pbVar9[0x1c] = (bVar38 < bVar53) * bVar53 | (bVar38 >= bVar53) * bVar38;
            pbVar9[0x1d] = (bVar40 < bVar55) * bVar55 | (bVar40 >= bVar55) * bVar40;
            pbVar9[0x1e] = (bVar42 < bVar57) * bVar57 | (bVar42 >= bVar57) * bVar42;
            pbVar9[0x1f] = (bVar44 < bVar59) * bVar59 | (bVar44 >= bVar59) * bVar44;
            pbVar9 = pbVar9 + 0x20;
          } while (lVar4 < (longlong)(uVar6 & 0xfffffffffffffffe));
        }
        for (; lVar4 < (longlong)uVar6; lVar4 = lVar4 + 1) {
          bVar29 = pbVar5[0x10];
          bVar31 = pbVar5[0x11];
          bVar33 = pbVar5[0x12];
          bVar35 = pbVar5[0x13];
          bVar37 = pbVar5[0x14];
          bVar39 = pbVar5[0x15];
          bVar41 = pbVar5[0x16];
          bVar43 = pbVar5[0x17];
          bVar45 = pbVar5[0x18];
          bVar47 = pbVar5[0x19];
          bVar49 = pbVar5[0x1a];
          bVar51 = pbVar5[0x1b];
          bVar53 = pbVar5[0x1c];
          bVar55 = pbVar5[0x1d];
          bVar57 = pbVar5[0x1e];
          bVar59 = pbVar5[0x1f];
          pbVar7 = pbVar5 + param_2 + 0x10;
          bVar13 = *pbVar7;
          bVar14 = pbVar7[1];
          bVar15 = pbVar7[2];
          bVar16 = pbVar7[3];
          bVar17 = pbVar7[4];
          bVar18 = pbVar7[5];
          bVar19 = pbVar7[6];
          bVar20 = pbVar7[7];
          bVar21 = pbVar7[8];
          bVar22 = pbVar7[9];
          bVar23 = pbVar7[10];
          bVar24 = pbVar7[0xb];
          bVar25 = pbVar7[0xc];
          bVar26 = pbVar7[0xd];
          bVar27 = pbVar7[0xe];
          bVar28 = pbVar7[0xf];
          bVar13 = (bVar29 < bVar13) * bVar13 | (bVar29 >= bVar13) * bVar29;
          bVar14 = (bVar31 < bVar14) * bVar14 | (bVar31 >= bVar14) * bVar31;
          bVar15 = (bVar33 < bVar15) * bVar15 | (bVar33 >= bVar15) * bVar33;
          bVar16 = (bVar35 < bVar16) * bVar16 | (bVar35 >= bVar16) * bVar35;
          bVar17 = (bVar37 < bVar17) * bVar17 | (bVar37 >= bVar17) * bVar37;
          bVar18 = (bVar39 < bVar18) * bVar18 | (bVar39 >= bVar18) * bVar39;
          bVar19 = (bVar41 < bVar19) * bVar19 | (bVar41 >= bVar19) * bVar41;
          bVar20 = (bVar43 < bVar20) * bVar20 | (bVar43 >= bVar20) * bVar43;
          bVar21 = (bVar45 < bVar21) * bVar21 | (bVar45 >= bVar21) * bVar45;
          bVar22 = (bVar47 < bVar22) * bVar22 | (bVar47 >= bVar22) * bVar47;
          bVar23 = (bVar49 < bVar23) * bVar23 | (bVar49 >= bVar23) * bVar49;
          bVar24 = (bVar51 < bVar24) * bVar24 | (bVar51 >= bVar24) * bVar51;
          bVar25 = (bVar53 < bVar25) * bVar25 | (bVar53 >= bVar25) * bVar53;
          bVar26 = (bVar55 < bVar26) * bVar26 | (bVar55 >= bVar26) * bVar55;
          bVar27 = (bVar57 < bVar27) * bVar27 | (bVar57 >= bVar27) * bVar57;
          bVar28 = (bVar59 < bVar28) * bVar28 | (bVar59 >= bVar28) * bVar59;
          pbVar7 = pbVar5 + param_2 * 2 + 0x10;
          bVar29 = *pbVar7;
          bVar31 = pbVar7[1];
          bVar33 = pbVar7[2];
          bVar35 = pbVar7[3];
          bVar37 = pbVar7[4];
          bVar39 = pbVar7[5];
          bVar41 = pbVar7[6];
          bVar43 = pbVar7[7];
          bVar45 = pbVar7[8];
          bVar47 = pbVar7[9];
          bVar49 = pbVar7[10];
          bVar51 = pbVar7[0xb];
          bVar53 = pbVar7[0xc];
          bVar55 = pbVar7[0xd];
          bVar57 = pbVar7[0xe];
          bVar59 = pbVar7[0xf];
          pbVar5 = pbVar5 + 0x10;
          bVar13 = (bVar13 < bVar29) * bVar29 | (bVar13 >= bVar29) * bVar13;
          bVar14 = (bVar14 < bVar31) * bVar31 | (bVar14 >= bVar31) * bVar14;
          bVar15 = (bVar15 < bVar33) * bVar33 | (bVar15 >= bVar33) * bVar15;
          bVar16 = (bVar16 < bVar35) * bVar35 | (bVar16 >= bVar35) * bVar16;
          bVar17 = (bVar17 < bVar37) * bVar37 | (bVar17 >= bVar37) * bVar17;
          bVar18 = (bVar18 < bVar39) * bVar39 | (bVar18 >= bVar39) * bVar18;
          bVar19 = (bVar19 < bVar41) * bVar41 | (bVar19 >= bVar41) * bVar19;
          bVar20 = (bVar20 < bVar43) * bVar43 | (bVar20 >= bVar43) * bVar20;
          bVar30 = (bVar38 < bVar30) * bVar30 | (bVar38 >= bVar30) * bVar38;
          bVar32 = (bVar40 < bVar32) * bVar32 | (bVar40 >= bVar32) * bVar40;
          bVar34 = (bVar42 < bVar34) * bVar34 | (bVar42 >= bVar34) * bVar42;
          bVar36 = (bVar44 < bVar36) * bVar36 | (bVar44 >= bVar36) * bVar44;
          bVar38 = (bVar46 < bVar38) * bVar38 | (bVar46 >= bVar38) * bVar46;
          bVar40 = (bVar48 < bVar40) * bVar40 | (bVar48 >= bVar40) * bVar48;
          bVar42 = (bVar50 < bVar42) * bVar42 | (bVar50 >= bVar42) * bVar50;
          bVar44 = (bVar52 < bVar44) * bVar44 | (bVar52 >= bVar44) * bVar52;
          bVar29 = (bVar54 < bVar46) * bVar46 | (bVar54 >= bVar46) * bVar54;
          bVar31 = (bVar56 < bVar48) * bVar48 | (bVar56 >= bVar48) * bVar56;
          bVar33 = (bVar58 < bVar50) * bVar50 | (bVar58 >= bVar50) * bVar58;
          bVar35 = (bVar60 < bVar52) * bVar52 | (bVar60 >= bVar52) * bVar60;
          bVar37 = (bVar13 < bVar54) * bVar54 | (bVar13 >= bVar54) * bVar13;
          bVar39 = (bVar14 < bVar56) * bVar56 | (bVar14 >= bVar56) * bVar14;
          bVar41 = (bVar15 < bVar58) * bVar58 | (bVar15 >= bVar58) * bVar15;
          bVar43 = (bVar16 < bVar60) * bVar60 | (bVar16 >= bVar60) * bVar16;
          *pbVar9 = (bVar46 < bVar30) * bVar30 | (bVar46 >= bVar30) * bVar46;
          pbVar9[1] = (bVar48 < bVar32) * bVar32 | (bVar48 >= bVar32) * bVar48;
          pbVar9[2] = (bVar50 < bVar34) * bVar34 | (bVar50 >= bVar34) * bVar50;
          pbVar9[3] = (bVar52 < bVar36) * bVar36 | (bVar52 >= bVar36) * bVar52;
          pbVar9[4] = (bVar54 < bVar38) * bVar38 | (bVar54 >= bVar38) * bVar54;
          pbVar9[5] = (bVar56 < bVar40) * bVar40 | (bVar56 >= bVar40) * bVar56;
          pbVar9[6] = (bVar58 < bVar42) * bVar42 | (bVar58 >= bVar42) * bVar58;
          pbVar9[7] = (bVar60 < bVar44) * bVar44 | (bVar60 >= bVar44) * bVar60;
          pbVar9[8] = (bVar13 < bVar29) * bVar29 | (bVar13 >= bVar29) * bVar13;
          pbVar9[9] = (bVar14 < bVar31) * bVar31 | (bVar14 >= bVar31) * bVar14;
          pbVar9[10] = (bVar15 < bVar33) * bVar33 | (bVar15 >= bVar33) * bVar15;
          pbVar9[0xb] = (bVar16 < bVar35) * bVar35 | (bVar16 >= bVar35) * bVar16;
          pbVar9[0xc] = (bVar17 < bVar37) * bVar37 | (bVar17 >= bVar37) * bVar17;
          pbVar9[0xd] = (bVar18 < bVar39) * bVar39 | (bVar18 >= bVar39) * bVar18;
          pbVar9[0xe] = (bVar19 < bVar41) * bVar41 | (bVar19 >= bVar41) * bVar19;
          pbVar9[0xf] = (bVar20 < bVar43) * bVar43 | (bVar20 >= bVar43) * bVar20;
          pbVar9 = pbVar9 + 0x10;
          bVar30 = bVar13;
          bVar32 = bVar14;
          bVar34 = bVar15;
          bVar36 = bVar16;
          bVar38 = bVar17;
          bVar40 = bVar18;
          bVar42 = bVar19;
          bVar44 = bVar20;
          bVar46 = (bVar21 < bVar45) * bVar45 | (bVar21 >= bVar45) * bVar21;
          bVar48 = (bVar22 < bVar47) * bVar47 | (bVar22 >= bVar47) * bVar22;
          bVar50 = (bVar23 < bVar49) * bVar49 | (bVar23 >= bVar49) * bVar23;
          bVar52 = (bVar24 < bVar51) * bVar51 | (bVar24 >= bVar51) * bVar24;
          bVar54 = (bVar25 < bVar53) * bVar53 | (bVar25 >= bVar53) * bVar25;
          bVar56 = (bVar26 < bVar55) * bVar55 | (bVar26 >= bVar55) * bVar26;
          bVar58 = (bVar27 < bVar57) * bVar57 | (bVar27 >= bVar57) * bVar27;
          bVar60 = (bVar28 < bVar59) * bVar59 | (bVar28 >= bVar59) * bVar28;
        }
      }
      if ((uVar12 & 0xf) != 0) {
        FUN_140432820(pbVar5,param_2);
      }
      lVar8 = lVar8 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (lVar8 < param_6 + -1);
  }
  if (lVar8 < param_6) {
    do {
      uVar12 = param_5;
      pbVar5 = param_1;
      pbVar9 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar12 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar12) {
          uVar12 = param_5;
        }
        FUN_140432820(param_1,param_2,param_3,uVar12);
        pbVar5 = param_1 + uVar12;
        pbVar9 = param_3 + uVar12;
        uVar12 = param_5 - uVar12;
      }
      lVar4 = (longlong)uVar12 >> 4;
      if (lVar4 != 0) {
        pbVar7 = pbVar5 + param_2;
        lVar11 = 0;
        bVar30 = *pbVar5;
        bVar32 = pbVar5[1];
        bVar34 = pbVar5[2];
        bVar36 = pbVar5[3];
        bVar38 = pbVar5[4];
        bVar40 = pbVar5[5];
        bVar42 = pbVar5[6];
        bVar44 = pbVar5[7];
        bVar46 = pbVar5[8];
        bVar48 = pbVar5[9];
        bVar50 = pbVar5[10];
        bVar52 = pbVar5[0xb];
        bVar54 = pbVar5[0xc];
        bVar56 = pbVar5[0xd];
        bVar58 = pbVar5[0xe];
        bVar60 = pbVar5[0xf];
        bVar29 = *pbVar7;
        bVar31 = pbVar7[1];
        bVar33 = pbVar7[2];
        bVar35 = pbVar7[3];
        bVar37 = pbVar7[4];
        bVar39 = pbVar7[5];
        bVar41 = pbVar7[6];
        bVar43 = pbVar7[7];
        bVar45 = pbVar7[8];
        bVar47 = pbVar7[9];
        bVar49 = pbVar7[10];
        bVar51 = pbVar7[0xb];
        bVar53 = pbVar7[0xc];
        bVar55 = pbVar7[0xd];
        bVar57 = pbVar7[0xe];
        bVar59 = pbVar7[0xf];
        pbVar10 = pbVar5 + param_2 * 2;
        bVar13 = *pbVar10;
        bVar14 = pbVar10[1];
        bVar15 = pbVar10[2];
        bVar16 = pbVar10[3];
        bVar17 = pbVar10[4];
        bVar18 = pbVar10[5];
        bVar19 = pbVar10[6];
        bVar20 = pbVar10[7];
        bVar21 = pbVar10[8];
        bVar22 = pbVar10[9];
        bVar23 = pbVar10[10];
        bVar24 = pbVar10[0xb];
        bVar25 = pbVar10[0xc];
        bVar26 = pbVar10[0xd];
        bVar27 = pbVar10[0xe];
        bVar28 = pbVar10[0xf];
        bVar30 = (bVar30 < bVar29) * bVar29 | (bVar30 >= bVar29) * bVar30;
        bVar32 = (bVar32 < bVar31) * bVar31 | (bVar32 >= bVar31) * bVar32;
        bVar34 = (bVar34 < bVar33) * bVar33 | (bVar34 >= bVar33) * bVar34;
        bVar36 = (bVar36 < bVar35) * bVar35 | (bVar36 >= bVar35) * bVar36;
        bVar38 = (bVar38 < bVar37) * bVar37 | (bVar38 >= bVar37) * bVar38;
        bVar40 = (bVar40 < bVar39) * bVar39 | (bVar40 >= bVar39) * bVar40;
        bVar42 = (bVar42 < bVar41) * bVar41 | (bVar42 >= bVar41) * bVar42;
        bVar44 = (bVar44 < bVar43) * bVar43 | (bVar44 >= bVar43) * bVar44;
        bVar46 = (bVar46 < bVar45) * bVar45 | (bVar46 >= bVar45) * bVar46;
        bVar48 = (bVar48 < bVar47) * bVar47 | (bVar48 >= bVar47) * bVar48;
        bVar50 = (bVar50 < bVar49) * bVar49 | (bVar50 >= bVar49) * bVar50;
        bVar52 = (bVar52 < bVar51) * bVar51 | (bVar52 >= bVar51) * bVar52;
        bVar54 = (bVar54 < bVar53) * bVar53 | (bVar54 >= bVar53) * bVar54;
        bVar56 = (bVar56 < bVar55) * bVar55 | (bVar56 >= bVar55) * bVar56;
        bVar58 = (bVar58 < bVar57) * bVar57 | (bVar58 >= bVar57) * bVar58;
        bVar60 = (bVar60 < bVar59) * bVar59 | (bVar60 >= bVar59) * bVar60;
        bVar30 = (bVar30 < bVar13) * bVar13 | (bVar30 >= bVar13) * bVar30;
        bVar32 = (bVar32 < bVar14) * bVar14 | (bVar32 >= bVar14) * bVar32;
        bVar34 = (bVar34 < bVar15) * bVar15 | (bVar34 >= bVar15) * bVar34;
        bVar36 = (bVar36 < bVar16) * bVar16 | (bVar36 >= bVar16) * bVar36;
        bVar38 = (bVar38 < bVar17) * bVar17 | (bVar38 >= bVar17) * bVar38;
        bVar40 = (bVar40 < bVar18) * bVar18 | (bVar40 >= bVar18) * bVar40;
        bVar42 = (bVar42 < bVar19) * bVar19 | (bVar42 >= bVar19) * bVar42;
        bVar44 = (bVar44 < bVar20) * bVar20 | (bVar44 >= bVar20) * bVar44;
        bVar46 = (bVar46 < bVar21) * bVar21 | (bVar46 >= bVar21) * bVar46;
        bVar48 = (bVar48 < bVar22) * bVar22 | (bVar48 >= bVar22) * bVar48;
        bVar50 = (bVar50 < bVar23) * bVar23 | (bVar50 >= bVar23) * bVar50;
        bVar52 = (bVar52 < bVar24) * bVar24 | (bVar52 >= bVar24) * bVar52;
        bVar54 = (bVar54 < bVar25) * bVar25 | (bVar54 >= bVar25) * bVar54;
        bVar56 = (bVar56 < bVar26) * bVar26 | (bVar56 >= bVar26) * bVar56;
        bVar58 = (bVar58 < bVar27) * bVar27 | (bVar58 >= bVar27) * bVar58;
        bVar60 = (bVar60 < bVar28) * bVar28 | (bVar60 >= bVar28) * bVar60;
        pbVar10 = pbVar5 + param_2 * 2;
        bVar29 = bVar30;
        bVar31 = bVar32;
        bVar33 = bVar34;
        bVar35 = bVar36;
        bVar37 = bVar38;
        bVar39 = bVar40;
        bVar41 = bVar42;
        bVar43 = bVar44;
        bVar45 = bVar46;
        bVar47 = bVar48;
        bVar49 = bVar50;
        bVar51 = bVar52;
        bVar53 = bVar54;
        bVar55 = bVar56;
        bVar57 = bVar58;
        bVar59 = bVar60;
        if (lVar4 != 1 && SCARRY8(lVar4,-1) == lVar4 + -1 < 0) {
          do {
            bVar29 = pbVar5[0x10];
            bVar31 = pbVar5[0x11];
            bVar33 = pbVar5[0x12];
            bVar35 = pbVar5[0x13];
            bVar37 = pbVar5[0x14];
            bVar39 = pbVar5[0x15];
            bVar41 = pbVar5[0x16];
            bVar43 = pbVar5[0x17];
            bVar45 = pbVar5[0x18];
            bVar47 = pbVar5[0x19];
            bVar49 = pbVar5[0x1a];
            bVar51 = pbVar5[0x1b];
            bVar53 = pbVar5[0x1c];
            bVar55 = pbVar5[0x1d];
            bVar57 = pbVar5[0x1e];
            bVar59 = pbVar5[0x1f];
            lVar11 = lVar11 + 1;
            pbVar7 = pbVar5 + param_2 + 0x10;
            bVar13 = *pbVar7;
            bVar14 = pbVar7[1];
            bVar15 = pbVar7[2];
            bVar16 = pbVar7[3];
            bVar17 = pbVar7[4];
            bVar18 = pbVar7[5];
            bVar19 = pbVar7[6];
            bVar20 = pbVar7[7];
            bVar21 = pbVar7[8];
            bVar22 = pbVar7[9];
            bVar23 = pbVar7[10];
            bVar24 = pbVar7[0xb];
            bVar25 = pbVar7[0xc];
            bVar26 = pbVar7[0xd];
            bVar27 = pbVar7[0xe];
            bVar28 = pbVar7[0xf];
            bVar13 = (bVar29 < bVar13) * bVar13 | (bVar29 >= bVar13) * bVar29;
            bVar14 = (bVar31 < bVar14) * bVar14 | (bVar31 >= bVar14) * bVar31;
            bVar15 = (bVar33 < bVar15) * bVar15 | (bVar33 >= bVar15) * bVar33;
            bVar16 = (bVar35 < bVar16) * bVar16 | (bVar35 >= bVar16) * bVar35;
            bVar17 = (bVar37 < bVar17) * bVar17 | (bVar37 >= bVar17) * bVar37;
            bVar18 = (bVar39 < bVar18) * bVar18 | (bVar39 >= bVar18) * bVar39;
            bVar19 = (bVar41 < bVar19) * bVar19 | (bVar41 >= bVar19) * bVar41;
            bVar20 = (bVar43 < bVar20) * bVar20 | (bVar43 >= bVar20) * bVar43;
            bVar21 = (bVar45 < bVar21) * bVar21 | (bVar45 >= bVar21) * bVar45;
            bVar22 = (bVar47 < bVar22) * bVar22 | (bVar47 >= bVar22) * bVar47;
            bVar23 = (bVar49 < bVar23) * bVar23 | (bVar49 >= bVar23) * bVar49;
            bVar24 = (bVar51 < bVar24) * bVar24 | (bVar51 >= bVar24) * bVar51;
            bVar25 = (bVar53 < bVar25) * bVar25 | (bVar53 >= bVar25) * bVar53;
            bVar26 = (bVar55 < bVar26) * bVar26 | (bVar55 >= bVar26) * bVar55;
            bVar27 = (bVar57 < bVar27) * bVar27 | (bVar57 >= bVar27) * bVar57;
            bVar28 = (bVar59 < bVar28) * bVar28 | (bVar59 >= bVar28) * bVar59;
            pbVar7 = pbVar5 + param_2 * 2 + 0x10;
            bVar29 = *pbVar7;
            bVar31 = pbVar7[1];
            bVar33 = pbVar7[2];
            bVar35 = pbVar7[3];
            bVar37 = pbVar7[4];
            bVar39 = pbVar7[5];
            bVar41 = pbVar7[6];
            bVar43 = pbVar7[7];
            bVar45 = pbVar7[8];
            bVar47 = pbVar7[9];
            bVar49 = pbVar7[10];
            bVar51 = pbVar7[0xb];
            bVar53 = pbVar7[0xc];
            bVar55 = pbVar7[0xd];
            bVar57 = pbVar7[0xe];
            bVar59 = pbVar7[0xf];
            pbVar5 = pbVar5 + 0x10;
            bVar29 = (bVar13 < bVar29) * bVar29 | (bVar13 >= bVar29) * bVar13;
            bVar31 = (bVar14 < bVar31) * bVar31 | (bVar14 >= bVar31) * bVar14;
            bVar33 = (bVar15 < bVar33) * bVar33 | (bVar15 >= bVar33) * bVar15;
            bVar35 = (bVar16 < bVar35) * bVar35 | (bVar16 >= bVar35) * bVar16;
            bVar37 = (bVar17 < bVar37) * bVar37 | (bVar17 >= bVar37) * bVar17;
            bVar39 = (bVar18 < bVar39) * bVar39 | (bVar18 >= bVar39) * bVar18;
            bVar41 = (bVar19 < bVar41) * bVar41 | (bVar19 >= bVar41) * bVar19;
            bVar43 = (bVar20 < bVar43) * bVar43 | (bVar20 >= bVar43) * bVar20;
            bVar45 = (bVar21 < bVar45) * bVar45 | (bVar21 >= bVar45) * bVar21;
            bVar47 = (bVar22 < bVar47) * bVar47 | (bVar22 >= bVar47) * bVar22;
            bVar49 = (bVar23 < bVar49) * bVar49 | (bVar23 >= bVar49) * bVar23;
            bVar51 = (bVar24 < bVar51) * bVar51 | (bVar24 >= bVar51) * bVar24;
            bVar53 = (bVar25 < bVar53) * bVar53 | (bVar25 >= bVar53) * bVar25;
            bVar55 = (bVar26 < bVar55) * bVar55 | (bVar26 >= bVar55) * bVar26;
            bVar57 = (bVar27 < bVar57) * bVar57 | (bVar27 >= bVar57) * bVar27;
            bVar59 = (bVar28 < bVar59) * bVar59 | (bVar28 >= bVar59) * bVar28;
            bVar30 = (bVar38 < bVar30) * bVar30 | (bVar38 >= bVar30) * bVar38;
            bVar32 = (bVar40 < bVar32) * bVar32 | (bVar40 >= bVar32) * bVar40;
            bVar34 = (bVar42 < bVar34) * bVar34 | (bVar42 >= bVar34) * bVar42;
            bVar36 = (bVar44 < bVar36) * bVar36 | (bVar44 >= bVar36) * bVar44;
            bVar38 = (bVar46 < bVar38) * bVar38 | (bVar46 >= bVar38) * bVar46;
            bVar40 = (bVar48 < bVar40) * bVar40 | (bVar48 >= bVar40) * bVar48;
            bVar42 = (bVar50 < bVar42) * bVar42 | (bVar50 >= bVar42) * bVar50;
            bVar44 = (bVar52 < bVar44) * bVar44 | (bVar52 >= bVar44) * bVar52;
            bVar13 = (bVar54 < bVar46) * bVar46 | (bVar54 >= bVar46) * bVar54;
            bVar14 = (bVar56 < bVar48) * bVar48 | (bVar56 >= bVar48) * bVar56;
            bVar15 = (bVar58 < bVar50) * bVar50 | (bVar58 >= bVar50) * bVar58;
            bVar16 = (bVar60 < bVar52) * bVar52 | (bVar60 >= bVar52) * bVar60;
            bVar17 = (bVar29 < bVar54) * bVar54 | (bVar29 >= bVar54) * bVar29;
            bVar18 = (bVar31 < bVar56) * bVar56 | (bVar31 >= bVar56) * bVar31;
            bVar19 = (bVar33 < bVar58) * bVar58 | (bVar33 >= bVar58) * bVar33;
            bVar20 = (bVar35 < bVar60) * bVar60 | (bVar35 >= bVar60) * bVar35;
            *pbVar9 = (bVar46 < bVar30) * bVar30 | (bVar46 >= bVar30) * bVar46;
            pbVar9[1] = (bVar48 < bVar32) * bVar32 | (bVar48 >= bVar32) * bVar48;
            pbVar9[2] = (bVar50 < bVar34) * bVar34 | (bVar50 >= bVar34) * bVar50;
            pbVar9[3] = (bVar52 < bVar36) * bVar36 | (bVar52 >= bVar36) * bVar52;
            pbVar9[4] = (bVar54 < bVar38) * bVar38 | (bVar54 >= bVar38) * bVar54;
            pbVar9[5] = (bVar56 < bVar40) * bVar40 | (bVar56 >= bVar40) * bVar56;
            pbVar9[6] = (bVar58 < bVar42) * bVar42 | (bVar58 >= bVar42) * bVar58;
            pbVar9[7] = (bVar60 < bVar44) * bVar44 | (bVar60 >= bVar44) * bVar60;
            pbVar9[8] = (bVar29 < bVar13) * bVar13 | (bVar29 >= bVar13) * bVar29;
            pbVar9[9] = (bVar31 < bVar14) * bVar14 | (bVar31 >= bVar14) * bVar31;
            pbVar9[10] = (bVar33 < bVar15) * bVar15 | (bVar33 >= bVar15) * bVar33;
            pbVar9[0xb] = (bVar35 < bVar16) * bVar16 | (bVar35 >= bVar16) * bVar35;
            pbVar9[0xc] = (bVar37 < bVar17) * bVar17 | (bVar37 >= bVar17) * bVar37;
            pbVar9[0xd] = (bVar39 < bVar18) * bVar18 | (bVar39 >= bVar18) * bVar39;
            pbVar9[0xe] = (bVar41 < bVar19) * bVar19 | (bVar41 >= bVar19) * bVar41;
            pbVar9[0xf] = (bVar43 < bVar20) * bVar20 | (bVar43 >= bVar20) * bVar43;
            pbVar9 = pbVar9 + 0x10;
            bVar30 = bVar29;
            bVar32 = bVar31;
            bVar34 = bVar33;
            bVar36 = bVar35;
            bVar38 = bVar37;
            bVar40 = bVar39;
            bVar42 = bVar41;
            bVar44 = bVar43;
            bVar46 = bVar45;
            bVar48 = bVar47;
            bVar50 = bVar49;
            bVar52 = bVar51;
            bVar54 = bVar53;
            bVar56 = bVar55;
            bVar58 = bVar57;
            bVar60 = bVar59;
          } while (lVar11 < lVar4 + -1);
          pbVar7 = pbVar5 + param_2;
          pbVar10 = pbVar5 + param_2 * 2;
        }
        uVar1 = *(undefined8 *)(pbVar7 + 0x10);
        uVar2 = *(undefined8 *)(pbVar5 + 0x10);
        pbVar5 = pbVar5 + 0x10;
        uVar3 = *(undefined8 *)(pbVar10 + 0x10);
        bVar30 = (byte)uVar1;
        bVar32 = (byte)uVar2;
        bVar34 = (bVar32 < bVar30) * bVar30 | (bVar32 >= bVar30) * bVar32;
        bVar30 = (byte)((ulonglong)uVar1 >> 8);
        bVar32 = (byte)((ulonglong)uVar2 >> 8);
        bVar36 = (bVar32 < bVar30) * bVar30 | (bVar32 >= bVar30) * bVar32;
        bVar30 = (byte)((ulonglong)uVar1 >> 0x10);
        bVar32 = (byte)((ulonglong)uVar2 >> 0x10);
        bVar38 = (bVar32 < bVar30) * bVar30 | (bVar32 >= bVar30) * bVar32;
        bVar30 = (byte)((ulonglong)uVar1 >> 0x18);
        bVar32 = (byte)((ulonglong)uVar2 >> 0x18);
        bVar40 = (bVar32 < bVar30) * bVar30 | (bVar32 >= bVar30) * bVar32;
        bVar30 = (byte)((ulonglong)uVar1 >> 0x20);
        bVar32 = (byte)((ulonglong)uVar2 >> 0x20);
        bVar44 = (bVar32 < bVar30) * bVar30 | (bVar32 >= bVar30) * bVar32;
        bVar30 = (byte)((ulonglong)uVar1 >> 0x28);
        bVar32 = (byte)((ulonglong)uVar2 >> 0x28);
        bVar48 = (bVar32 < bVar30) * bVar30 | (bVar32 >= bVar30) * bVar32;
        bVar30 = (byte)((ulonglong)uVar1 >> 0x30);
        bVar42 = (byte)((ulonglong)uVar2 >> 0x30);
        bVar32 = (byte)((ulonglong)uVar2 >> 0x38);
        bVar52 = (bVar42 < bVar30) * bVar30 | (bVar42 >= bVar30) * bVar42;
        bVar30 = (byte)((ulonglong)uVar1 >> 0x38);
        bVar56 = (bVar32 < bVar30) * bVar30 | (bVar32 >= bVar30) * bVar32;
        bVar30 = (byte)uVar3;
        bVar32 = (bVar34 < bVar30) * bVar30 | (bVar34 >= bVar30) * bVar34;
        bVar30 = (byte)((ulonglong)uVar3 >> 8);
        bVar34 = (bVar36 < bVar30) * bVar30 | (bVar36 >= bVar30) * bVar36;
        bVar30 = (byte)((ulonglong)uVar3 >> 0x10);
        bVar38 = (bVar38 < bVar30) * bVar30 | (bVar38 >= bVar30) * bVar38;
        bVar30 = (byte)((ulonglong)uVar3 >> 0x18);
        bVar42 = (bVar40 < bVar30) * bVar30 | (bVar40 >= bVar30) * bVar40;
        bVar30 = (byte)((ulonglong)uVar3 >> 0x20);
        bVar46 = (bVar44 < bVar30) * bVar30 | (bVar44 >= bVar30) * bVar44;
        bVar30 = (byte)((ulonglong)uVar3 >> 0x28);
        bVar50 = (bVar48 < bVar30) * bVar30 | (bVar48 >= bVar30) * bVar48;
        bVar30 = (byte)((ulonglong)uVar3 >> 0x30);
        bVar54 = (bVar52 < bVar30) * bVar30 | (bVar52 >= bVar30) * bVar52;
        bVar30 = (byte)((ulonglong)uVar3 >> 0x38);
        bVar58 = (bVar56 < bVar30) * bVar30 | (bVar56 >= bVar30) * bVar56;
        bVar30 = (bVar37 < bVar29) * bVar29 | (bVar37 >= bVar29) * bVar37;
        bVar36 = (bVar39 < bVar31) * bVar31 | (bVar39 >= bVar31) * bVar39;
        bVar40 = (bVar41 < bVar33) * bVar33 | (bVar41 >= bVar33) * bVar41;
        bVar44 = (bVar43 < bVar35) * bVar35 | (bVar43 >= bVar35) * bVar43;
        bVar48 = (bVar45 < bVar37) * bVar37 | (bVar45 >= bVar37) * bVar45;
        bVar52 = (bVar47 < bVar39) * bVar39 | (bVar47 >= bVar39) * bVar47;
        bVar56 = (bVar49 < bVar41) * bVar41 | (bVar49 >= bVar41) * bVar49;
        bVar60 = (bVar51 < bVar43) * bVar43 | (bVar51 >= bVar43) * bVar51;
        bVar29 = (bVar53 < bVar45) * bVar45 | (bVar53 >= bVar45) * bVar53;
        bVar31 = (bVar55 < bVar47) * bVar47 | (bVar55 >= bVar47) * bVar55;
        bVar33 = (bVar57 < bVar49) * bVar49 | (bVar57 >= bVar49) * bVar57;
        bVar35 = (bVar59 < bVar51) * bVar51 | (bVar59 >= bVar51) * bVar59;
        bVar37 = (bVar32 < bVar53) * bVar53 | (bVar32 >= bVar53) * bVar32;
        bVar39 = (bVar34 < bVar55) * bVar55 | (bVar34 >= bVar55) * bVar34;
        bVar41 = (bVar38 < bVar57) * bVar57 | (bVar38 >= bVar57) * bVar38;
        bVar43 = (bVar42 < bVar59) * bVar59 | (bVar42 >= bVar59) * bVar42;
        *pbVar9 = (bVar45 < bVar30) * bVar30 | (bVar45 >= bVar30) * bVar45;
        pbVar9[1] = (bVar47 < bVar36) * bVar36 | (bVar47 >= bVar36) * bVar47;
        pbVar9[2] = (bVar49 < bVar40) * bVar40 | (bVar49 >= bVar40) * bVar49;
        pbVar9[3] = (bVar51 < bVar44) * bVar44 | (bVar51 >= bVar44) * bVar51;
        pbVar9[4] = (bVar53 < bVar48) * bVar48 | (bVar53 >= bVar48) * bVar53;
        pbVar9[5] = (bVar55 < bVar52) * bVar52 | (bVar55 >= bVar52) * bVar55;
        pbVar9[6] = (bVar57 < bVar56) * bVar56 | (bVar57 >= bVar56) * bVar57;
        pbVar9[7] = (bVar59 < bVar60) * bVar60 | (bVar59 >= bVar60) * bVar59;
        pbVar9[8] = (bVar32 < bVar29) * bVar29 | (bVar32 >= bVar29) * bVar32;
        pbVar9[9] = (bVar34 < bVar31) * bVar31 | (bVar34 >= bVar31) * bVar34;
        pbVar9[10] = (bVar38 < bVar33) * bVar33 | (bVar38 >= bVar33) * bVar38;
        pbVar9[0xb] = (bVar42 < bVar35) * bVar35 | (bVar42 >= bVar35) * bVar42;
        pbVar9[0xc] = (bVar46 < bVar37) * bVar37 | (bVar46 >= bVar37) * bVar46;
        pbVar9[0xd] = (bVar50 < bVar39) * bVar39 | (bVar50 >= bVar39) * bVar50;
        pbVar9[0xe] = (bVar54 < bVar41) * bVar41 | (bVar54 >= bVar41) * bVar54;
        pbVar9[0xf] = (bVar58 < bVar43) * bVar43 | (bVar58 >= bVar43) * bVar58;
        pbVar9 = pbVar9 + 0x10;
      }
      if ((uVar12 & 0xf) != 0) {
        FUN_140432820(pbVar5,param_2,pbVar9);
      }
      lVar8 = lVar8 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (lVar8 < param_6);
  }
  return;
}


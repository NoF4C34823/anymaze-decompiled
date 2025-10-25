
void FUN_140474e60(byte *param_1,longlong param_2,byte *param_3,longlong param_4,ulonglong param_5,
                  longlong param_6)

{
  byte *pbVar1;
  longlong lVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
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
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  
  lVar6 = 0;
  if (0 < param_6 + -1) {
    do {
      pbVar3 = param_1;
      uVar10 = param_5;
      pbVar7 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar10 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar10) {
          uVar10 = param_5;
        }
        FUN_140475240(param_1,param_2,param_3,uVar10);
        pbVar3 = param_1 + uVar10;
        pbVar7 = param_3 + uVar10;
        uVar10 = param_5 - uVar10;
      }
      uVar4 = (longlong)uVar10 >> 4;
      if (uVar4 != 0) {
        bVar28 = *pbVar3;
        bVar30 = pbVar3[1];
        bVar32 = pbVar3[2];
        bVar34 = pbVar3[3];
        bVar36 = pbVar3[4];
        bVar38 = pbVar3[5];
        bVar40 = pbVar3[6];
        bVar42 = pbVar3[7];
        bVar44 = pbVar3[8];
        bVar46 = pbVar3[9];
        bVar48 = pbVar3[10];
        bVar50 = pbVar3[0xb];
        bVar52 = pbVar3[0xc];
        bVar54 = pbVar3[0xd];
        bVar56 = pbVar3[0xe];
        bVar58 = pbVar3[0xf];
        lVar2 = 0;
        pbVar5 = pbVar3 + param_2;
        bVar27 = *pbVar5;
        bVar29 = pbVar5[1];
        bVar31 = pbVar5[2];
        bVar33 = pbVar5[3];
        bVar35 = pbVar5[4];
        bVar37 = pbVar5[5];
        bVar39 = pbVar5[6];
        bVar41 = pbVar5[7];
        bVar43 = pbVar5[8];
        bVar45 = pbVar5[9];
        bVar47 = pbVar5[10];
        bVar49 = pbVar5[0xb];
        bVar51 = pbVar5[0xc];
        bVar53 = pbVar5[0xd];
        bVar55 = pbVar5[0xe];
        bVar57 = pbVar5[0xf];
        bVar27 = (bVar27 < bVar28) * bVar27 | (bVar27 >= bVar28) * bVar28;
        bVar29 = (bVar29 < bVar30) * bVar29 | (bVar29 >= bVar30) * bVar30;
        bVar31 = (bVar31 < bVar32) * bVar31 | (bVar31 >= bVar32) * bVar32;
        bVar33 = (bVar33 < bVar34) * bVar33 | (bVar33 >= bVar34) * bVar34;
        bVar35 = (bVar35 < bVar36) * bVar35 | (bVar35 >= bVar36) * bVar36;
        bVar37 = (bVar37 < bVar38) * bVar37 | (bVar37 >= bVar38) * bVar38;
        bVar39 = (bVar39 < bVar40) * bVar39 | (bVar39 >= bVar40) * bVar40;
        bVar41 = (bVar41 < bVar42) * bVar41 | (bVar41 >= bVar42) * bVar42;
        bVar43 = (bVar43 < bVar44) * bVar43 | (bVar43 >= bVar44) * bVar44;
        bVar45 = (bVar45 < bVar46) * bVar45 | (bVar45 >= bVar46) * bVar46;
        bVar47 = (bVar47 < bVar48) * bVar47 | (bVar47 >= bVar48) * bVar48;
        bVar49 = (bVar49 < bVar50) * bVar49 | (bVar49 >= bVar50) * bVar50;
        bVar51 = (bVar51 < bVar52) * bVar51 | (bVar51 >= bVar52) * bVar52;
        bVar53 = (bVar53 < bVar54) * bVar53 | (bVar53 >= bVar54) * bVar54;
        bVar55 = (bVar55 < bVar56) * bVar55 | (bVar55 >= bVar56) * bVar56;
        bVar57 = (bVar57 < bVar58) * bVar57 | (bVar57 >= bVar58) * bVar58;
        pbVar5 = pbVar3 + param_2 * 2;
        bVar28 = *pbVar5;
        bVar30 = pbVar5[1];
        bVar32 = pbVar5[2];
        bVar34 = pbVar5[3];
        bVar36 = pbVar5[4];
        bVar38 = pbVar5[5];
        bVar40 = pbVar5[6];
        bVar42 = pbVar5[7];
        bVar44 = pbVar5[8];
        bVar46 = pbVar5[9];
        bVar48 = pbVar5[10];
        bVar50 = pbVar5[0xb];
        bVar52 = pbVar5[0xc];
        bVar54 = pbVar5[0xd];
        bVar56 = pbVar5[0xe];
        bVar58 = pbVar5[0xf];
        bVar28 = (bVar28 < bVar27) * bVar28 | (bVar28 >= bVar27) * bVar27;
        bVar30 = (bVar30 < bVar29) * bVar30 | (bVar30 >= bVar29) * bVar29;
        bVar32 = (bVar32 < bVar31) * bVar32 | (bVar32 >= bVar31) * bVar31;
        bVar34 = (bVar34 < bVar33) * bVar34 | (bVar34 >= bVar33) * bVar33;
        bVar36 = (bVar36 < bVar35) * bVar36 | (bVar36 >= bVar35) * bVar35;
        bVar38 = (bVar38 < bVar37) * bVar38 | (bVar38 >= bVar37) * bVar37;
        bVar40 = (bVar40 < bVar39) * bVar40 | (bVar40 >= bVar39) * bVar39;
        bVar42 = (bVar42 < bVar41) * bVar42 | (bVar42 >= bVar41) * bVar41;
        bVar44 = (bVar44 < bVar43) * bVar44 | (bVar44 >= bVar43) * bVar43;
        bVar46 = (bVar46 < bVar45) * bVar46 | (bVar46 >= bVar45) * bVar45;
        bVar48 = (bVar48 < bVar47) * bVar48 | (bVar48 >= bVar47) * bVar47;
        bVar50 = (bVar50 < bVar49) * bVar50 | (bVar50 >= bVar49) * bVar49;
        bVar52 = (bVar52 < bVar51) * bVar52 | (bVar52 >= bVar51) * bVar51;
        bVar54 = (bVar54 < bVar53) * bVar54 | (bVar54 >= bVar53) * bVar53;
        bVar56 = (bVar56 < bVar55) * bVar56 | (bVar56 >= bVar55) * bVar55;
        bVar58 = (bVar58 < bVar57) * bVar58 | (bVar58 >= bVar57) * bVar57;
        if (0 < (longlong)(uVar4 & 0xfffffffffffffffe)) {
          do {
            bVar27 = pbVar3[0x10];
            bVar29 = pbVar3[0x11];
            bVar31 = pbVar3[0x12];
            bVar33 = pbVar3[0x13];
            bVar35 = pbVar3[0x14];
            bVar37 = pbVar3[0x15];
            bVar39 = pbVar3[0x16];
            bVar41 = pbVar3[0x17];
            bVar43 = pbVar3[0x18];
            bVar45 = pbVar3[0x19];
            bVar47 = pbVar3[0x1a];
            bVar49 = pbVar3[0x1b];
            bVar51 = pbVar3[0x1c];
            bVar53 = pbVar3[0x1d];
            bVar55 = pbVar3[0x1e];
            bVar57 = pbVar3[0x1f];
            lVar2 = lVar2 + 2;
            pbVar5 = pbVar3 + param_2 + 0x10;
            bVar11 = *pbVar5;
            bVar12 = pbVar5[1];
            bVar13 = pbVar5[2];
            bVar14 = pbVar5[3];
            bVar15 = pbVar5[4];
            bVar16 = pbVar5[5];
            bVar17 = pbVar5[6];
            bVar18 = pbVar5[7];
            bVar19 = pbVar5[8];
            bVar20 = pbVar5[9];
            bVar21 = pbVar5[10];
            bVar22 = pbVar5[0xb];
            bVar23 = pbVar5[0xc];
            bVar24 = pbVar5[0xd];
            bVar25 = pbVar5[0xe];
            bVar26 = pbVar5[0xf];
            bVar11 = (bVar11 < bVar27) * bVar11 | (bVar11 >= bVar27) * bVar27;
            bVar12 = (bVar12 < bVar29) * bVar12 | (bVar12 >= bVar29) * bVar29;
            bVar13 = (bVar13 < bVar31) * bVar13 | (bVar13 >= bVar31) * bVar31;
            bVar14 = (bVar14 < bVar33) * bVar14 | (bVar14 >= bVar33) * bVar33;
            bVar15 = (bVar15 < bVar35) * bVar15 | (bVar15 >= bVar35) * bVar35;
            bVar16 = (bVar16 < bVar37) * bVar16 | (bVar16 >= bVar37) * bVar37;
            bVar17 = (bVar17 < bVar39) * bVar17 | (bVar17 >= bVar39) * bVar39;
            bVar18 = (bVar18 < bVar41) * bVar18 | (bVar18 >= bVar41) * bVar41;
            bVar19 = (bVar19 < bVar43) * bVar19 | (bVar19 >= bVar43) * bVar43;
            bVar20 = (bVar20 < bVar45) * bVar20 | (bVar20 >= bVar45) * bVar45;
            bVar21 = (bVar21 < bVar47) * bVar21 | (bVar21 >= bVar47) * bVar47;
            bVar22 = (bVar22 < bVar49) * bVar22 | (bVar22 >= bVar49) * bVar49;
            bVar23 = (bVar23 < bVar51) * bVar23 | (bVar23 >= bVar51) * bVar51;
            bVar24 = (bVar24 < bVar53) * bVar24 | (bVar24 >= bVar53) * bVar53;
            bVar25 = (bVar25 < bVar55) * bVar25 | (bVar25 >= bVar55) * bVar55;
            bVar26 = (bVar26 < bVar57) * bVar26 | (bVar26 >= bVar57) * bVar57;
            pbVar5 = pbVar3 + param_2 * 2 + 0x10;
            bVar27 = *pbVar5;
            bVar29 = pbVar5[1];
            bVar31 = pbVar5[2];
            bVar33 = pbVar5[3];
            bVar35 = pbVar5[4];
            bVar37 = pbVar5[5];
            bVar39 = pbVar5[6];
            bVar41 = pbVar5[7];
            bVar43 = pbVar5[8];
            bVar45 = pbVar5[9];
            bVar47 = pbVar5[10];
            bVar49 = pbVar5[0xb];
            bVar51 = pbVar5[0xc];
            bVar53 = pbVar5[0xd];
            bVar55 = pbVar5[0xe];
            bVar57 = pbVar5[0xf];
            bVar11 = (bVar27 < bVar11) * bVar27 | (bVar27 >= bVar11) * bVar11;
            bVar12 = (bVar29 < bVar12) * bVar29 | (bVar29 >= bVar12) * bVar12;
            bVar13 = (bVar31 < bVar13) * bVar31 | (bVar31 >= bVar13) * bVar13;
            bVar14 = (bVar33 < bVar14) * bVar33 | (bVar33 >= bVar14) * bVar14;
            bVar15 = (bVar35 < bVar15) * bVar35 | (bVar35 >= bVar15) * bVar15;
            bVar16 = (bVar37 < bVar16) * bVar37 | (bVar37 >= bVar16) * bVar16;
            bVar17 = (bVar39 < bVar17) * bVar39 | (bVar39 >= bVar17) * bVar17;
            bVar18 = (bVar41 < bVar18) * bVar41 | (bVar41 >= bVar18) * bVar18;
            bVar19 = (bVar43 < bVar19) * bVar43 | (bVar43 >= bVar19) * bVar19;
            bVar20 = (bVar45 < bVar20) * bVar45 | (bVar45 >= bVar20) * bVar20;
            bVar21 = (bVar47 < bVar21) * bVar47 | (bVar47 >= bVar21) * bVar21;
            bVar22 = (bVar49 < bVar22) * bVar49 | (bVar49 >= bVar22) * bVar22;
            bVar23 = (bVar51 < bVar23) * bVar51 | (bVar51 >= bVar23) * bVar23;
            bVar24 = (bVar53 < bVar24) * bVar53 | (bVar53 >= bVar24) * bVar24;
            bVar25 = (bVar55 < bVar25) * bVar55 | (bVar55 >= bVar25) * bVar25;
            bVar26 = (bVar57 < bVar26) * bVar57 | (bVar57 >= bVar26) * bVar26;
            bVar28 = (bVar28 < bVar30) * bVar28 | (bVar28 >= bVar30) * bVar30;
            bVar30 = (bVar30 < bVar32) * bVar30 | (bVar30 >= bVar32) * bVar32;
            bVar27 = (bVar32 < bVar34) * bVar32 | (bVar32 >= bVar34) * bVar34;
            bVar29 = (bVar34 < bVar36) * bVar34 | (bVar34 >= bVar36) * bVar36;
            bVar31 = (bVar36 < bVar38) * bVar36 | (bVar36 >= bVar38) * bVar38;
            bVar33 = (bVar38 < bVar40) * bVar38 | (bVar38 >= bVar40) * bVar40;
            bVar35 = (bVar40 < bVar42) * bVar40 | (bVar40 >= bVar42) * bVar42;
            bVar37 = (bVar42 < bVar44) * bVar42 | (bVar42 >= bVar44) * bVar44;
            bVar39 = (bVar44 < bVar46) * bVar44 | (bVar44 >= bVar46) * bVar46;
            bVar41 = (bVar46 < bVar48) * bVar46 | (bVar46 >= bVar48) * bVar48;
            bVar43 = (bVar48 < bVar50) * bVar48 | (bVar48 >= bVar50) * bVar50;
            bVar45 = (bVar50 < bVar52) * bVar50 | (bVar50 >= bVar52) * bVar52;
            bVar47 = (bVar52 < bVar54) * bVar52 | (bVar52 >= bVar54) * bVar54;
            bVar49 = (bVar54 < bVar56) * bVar54 | (bVar54 >= bVar56) * bVar56;
            bVar51 = (bVar56 < bVar58) * bVar56 | (bVar56 >= bVar58) * bVar58;
            bVar53 = (bVar58 < bVar11) * bVar58 | (bVar58 >= bVar11) * bVar11;
            *pbVar7 = (bVar28 < bVar32) * bVar28 | (bVar28 >= bVar32) * bVar32;
            pbVar7[1] = (bVar30 < bVar34) * bVar30 | (bVar30 >= bVar34) * bVar34;
            pbVar7[2] = (bVar27 < bVar36) * bVar27 | (bVar27 >= bVar36) * bVar36;
            pbVar7[3] = (bVar29 < bVar38) * bVar29 | (bVar29 >= bVar38) * bVar38;
            pbVar7[4] = (bVar31 < bVar40) * bVar31 | (bVar31 >= bVar40) * bVar40;
            pbVar7[5] = (bVar33 < bVar42) * bVar33 | (bVar33 >= bVar42) * bVar42;
            pbVar7[6] = (bVar35 < bVar44) * bVar35 | (bVar35 >= bVar44) * bVar44;
            pbVar7[7] = (bVar37 < bVar46) * bVar37 | (bVar37 >= bVar46) * bVar46;
            pbVar7[8] = (bVar39 < bVar48) * bVar39 | (bVar39 >= bVar48) * bVar48;
            pbVar7[9] = (bVar41 < bVar50) * bVar41 | (bVar41 >= bVar50) * bVar50;
            pbVar7[10] = (bVar43 < bVar52) * bVar43 | (bVar43 >= bVar52) * bVar52;
            pbVar7[0xb] = (bVar45 < bVar54) * bVar45 | (bVar45 >= bVar54) * bVar54;
            pbVar7[0xc] = (bVar47 < bVar56) * bVar47 | (bVar47 >= bVar56) * bVar56;
            pbVar7[0xd] = (bVar49 < bVar58) * bVar49 | (bVar49 >= bVar58) * bVar58;
            pbVar7[0xe] = (bVar51 < bVar11) * bVar51 | (bVar51 >= bVar11) * bVar11;
            pbVar7[0xf] = (bVar53 < bVar12) * bVar53 | (bVar53 >= bVar12) * bVar12;
            bVar28 = pbVar3[0x20];
            bVar30 = pbVar3[0x21];
            bVar32 = pbVar3[0x22];
            bVar34 = pbVar3[0x23];
            bVar36 = pbVar3[0x24];
            bVar38 = pbVar3[0x25];
            bVar40 = pbVar3[0x26];
            bVar42 = pbVar3[0x27];
            bVar44 = pbVar3[0x28];
            bVar46 = pbVar3[0x29];
            bVar48 = pbVar3[0x2a];
            bVar50 = pbVar3[0x2b];
            bVar52 = pbVar3[0x2c];
            bVar54 = pbVar3[0x2d];
            bVar56 = pbVar3[0x2e];
            bVar58 = pbVar3[0x2f];
            pbVar5 = pbVar3 + param_2 + 0x20;
            bVar27 = *pbVar5;
            bVar29 = pbVar5[1];
            bVar31 = pbVar5[2];
            bVar33 = pbVar5[3];
            bVar35 = pbVar5[4];
            bVar37 = pbVar5[5];
            bVar39 = pbVar5[6];
            bVar41 = pbVar5[7];
            bVar43 = pbVar5[8];
            bVar45 = pbVar5[9];
            bVar47 = pbVar5[10];
            bVar49 = pbVar5[0xb];
            bVar51 = pbVar5[0xc];
            bVar53 = pbVar5[0xd];
            bVar55 = pbVar5[0xe];
            bVar57 = pbVar5[0xf];
            bVar27 = (bVar27 < bVar28) * bVar27 | (bVar27 >= bVar28) * bVar28;
            bVar29 = (bVar29 < bVar30) * bVar29 | (bVar29 >= bVar30) * bVar30;
            bVar31 = (bVar31 < bVar32) * bVar31 | (bVar31 >= bVar32) * bVar32;
            bVar33 = (bVar33 < bVar34) * bVar33 | (bVar33 >= bVar34) * bVar34;
            bVar35 = (bVar35 < bVar36) * bVar35 | (bVar35 >= bVar36) * bVar36;
            bVar37 = (bVar37 < bVar38) * bVar37 | (bVar37 >= bVar38) * bVar38;
            bVar39 = (bVar39 < bVar40) * bVar39 | (bVar39 >= bVar40) * bVar40;
            bVar41 = (bVar41 < bVar42) * bVar41 | (bVar41 >= bVar42) * bVar42;
            bVar43 = (bVar43 < bVar44) * bVar43 | (bVar43 >= bVar44) * bVar44;
            bVar45 = (bVar45 < bVar46) * bVar45 | (bVar45 >= bVar46) * bVar46;
            bVar47 = (bVar47 < bVar48) * bVar47 | (bVar47 >= bVar48) * bVar48;
            bVar49 = (bVar49 < bVar50) * bVar49 | (bVar49 >= bVar50) * bVar50;
            bVar51 = (bVar51 < bVar52) * bVar51 | (bVar51 >= bVar52) * bVar52;
            bVar53 = (bVar53 < bVar54) * bVar53 | (bVar53 >= bVar54) * bVar54;
            bVar55 = (bVar55 < bVar56) * bVar55 | (bVar55 >= bVar56) * bVar56;
            bVar57 = (bVar57 < bVar58) * bVar57 | (bVar57 >= bVar58) * bVar58;
            pbVar5 = pbVar3 + param_2 * 2 + 0x20;
            bVar28 = *pbVar5;
            bVar30 = pbVar5[1];
            bVar32 = pbVar5[2];
            bVar34 = pbVar5[3];
            bVar36 = pbVar5[4];
            bVar38 = pbVar5[5];
            bVar40 = pbVar5[6];
            bVar42 = pbVar5[7];
            bVar44 = pbVar5[8];
            bVar46 = pbVar5[9];
            bVar48 = pbVar5[10];
            bVar50 = pbVar5[0xb];
            bVar52 = pbVar5[0xc];
            bVar54 = pbVar5[0xd];
            bVar56 = pbVar5[0xe];
            bVar58 = pbVar5[0xf];
            pbVar3 = pbVar3 + 0x20;
            bVar28 = (bVar28 < bVar27) * bVar28 | (bVar28 >= bVar27) * bVar27;
            bVar30 = (bVar30 < bVar29) * bVar30 | (bVar30 >= bVar29) * bVar29;
            bVar32 = (bVar32 < bVar31) * bVar32 | (bVar32 >= bVar31) * bVar31;
            bVar34 = (bVar34 < bVar33) * bVar34 | (bVar34 >= bVar33) * bVar33;
            bVar36 = (bVar36 < bVar35) * bVar36 | (bVar36 >= bVar35) * bVar35;
            bVar38 = (bVar38 < bVar37) * bVar38 | (bVar38 >= bVar37) * bVar37;
            bVar40 = (bVar40 < bVar39) * bVar40 | (bVar40 >= bVar39) * bVar39;
            bVar42 = (bVar42 < bVar41) * bVar42 | (bVar42 >= bVar41) * bVar41;
            bVar44 = (bVar44 < bVar43) * bVar44 | (bVar44 >= bVar43) * bVar43;
            bVar46 = (bVar46 < bVar45) * bVar46 | (bVar46 >= bVar45) * bVar45;
            bVar48 = (bVar48 < bVar47) * bVar48 | (bVar48 >= bVar47) * bVar47;
            bVar50 = (bVar50 < bVar49) * bVar50 | (bVar50 >= bVar49) * bVar49;
            bVar52 = (bVar52 < bVar51) * bVar52 | (bVar52 >= bVar51) * bVar51;
            bVar54 = (bVar54 < bVar53) * bVar54 | (bVar54 >= bVar53) * bVar53;
            bVar56 = (bVar56 < bVar55) * bVar56 | (bVar56 >= bVar55) * bVar55;
            bVar58 = (bVar58 < bVar57) * bVar58 | (bVar58 >= bVar57) * bVar57;
            bVar27 = (bVar11 < bVar12) * bVar11 | (bVar11 >= bVar12) * bVar12;
            bVar29 = (bVar12 < bVar13) * bVar12 | (bVar12 >= bVar13) * bVar13;
            bVar31 = (bVar13 < bVar14) * bVar13 | (bVar13 >= bVar14) * bVar14;
            bVar33 = (bVar14 < bVar15) * bVar14 | (bVar14 >= bVar15) * bVar15;
            bVar35 = (bVar15 < bVar16) * bVar15 | (bVar15 >= bVar16) * bVar16;
            bVar37 = (bVar16 < bVar17) * bVar16 | (bVar16 >= bVar17) * bVar17;
            bVar39 = (bVar17 < bVar18) * bVar17 | (bVar17 >= bVar18) * bVar18;
            bVar41 = (bVar18 < bVar19) * bVar18 | (bVar18 >= bVar19) * bVar19;
            bVar43 = (bVar19 < bVar20) * bVar19 | (bVar19 >= bVar20) * bVar20;
            bVar45 = (bVar20 < bVar21) * bVar20 | (bVar20 >= bVar21) * bVar21;
            bVar47 = (bVar21 < bVar22) * bVar21 | (bVar21 >= bVar22) * bVar22;
            bVar49 = (bVar22 < bVar23) * bVar22 | (bVar22 >= bVar23) * bVar23;
            bVar51 = (bVar23 < bVar24) * bVar23 | (bVar23 >= bVar24) * bVar24;
            bVar53 = (bVar24 < bVar25) * bVar24 | (bVar24 >= bVar25) * bVar25;
            bVar55 = (bVar25 < bVar26) * bVar25 | (bVar25 >= bVar26) * bVar26;
            bVar57 = (bVar26 < bVar28) * bVar26 | (bVar26 >= bVar28) * bVar28;
            pbVar7[0x10] = (bVar27 < bVar13) * bVar27 | (bVar27 >= bVar13) * bVar13;
            pbVar7[0x11] = (bVar29 < bVar14) * bVar29 | (bVar29 >= bVar14) * bVar14;
            pbVar7[0x12] = (bVar31 < bVar15) * bVar31 | (bVar31 >= bVar15) * bVar15;
            pbVar7[0x13] = (bVar33 < bVar16) * bVar33 | (bVar33 >= bVar16) * bVar16;
            pbVar7[0x14] = (bVar35 < bVar17) * bVar35 | (bVar35 >= bVar17) * bVar17;
            pbVar7[0x15] = (bVar37 < bVar18) * bVar37 | (bVar37 >= bVar18) * bVar18;
            pbVar7[0x16] = (bVar39 < bVar19) * bVar39 | (bVar39 >= bVar19) * bVar19;
            pbVar7[0x17] = (bVar41 < bVar20) * bVar41 | (bVar41 >= bVar20) * bVar20;
            pbVar7[0x18] = (bVar43 < bVar21) * bVar43 | (bVar43 >= bVar21) * bVar21;
            pbVar7[0x19] = (bVar45 < bVar22) * bVar45 | (bVar45 >= bVar22) * bVar22;
            pbVar7[0x1a] = (bVar47 < bVar23) * bVar47 | (bVar47 >= bVar23) * bVar23;
            pbVar7[0x1b] = (bVar49 < bVar24) * bVar49 | (bVar49 >= bVar24) * bVar24;
            pbVar7[0x1c] = (bVar51 < bVar25) * bVar51 | (bVar51 >= bVar25) * bVar25;
            pbVar7[0x1d] = (bVar53 < bVar26) * bVar53 | (bVar53 >= bVar26) * bVar26;
            pbVar7[0x1e] = (bVar55 < bVar28) * bVar55 | (bVar55 >= bVar28) * bVar28;
            pbVar7[0x1f] = (bVar57 < bVar30) * bVar57 | (bVar57 >= bVar30) * bVar30;
            pbVar7 = pbVar7 + 0x20;
          } while (lVar2 < (longlong)(uVar4 & 0xfffffffffffffffe));
        }
        for (; lVar2 < (longlong)uVar4; lVar2 = lVar2 + 1) {
          bVar27 = pbVar3[0x10];
          bVar29 = pbVar3[0x11];
          bVar31 = pbVar3[0x12];
          bVar33 = pbVar3[0x13];
          bVar35 = pbVar3[0x14];
          bVar37 = pbVar3[0x15];
          bVar39 = pbVar3[0x16];
          bVar41 = pbVar3[0x17];
          bVar43 = pbVar3[0x18];
          bVar45 = pbVar3[0x19];
          bVar47 = pbVar3[0x1a];
          bVar49 = pbVar3[0x1b];
          bVar51 = pbVar3[0x1c];
          bVar53 = pbVar3[0x1d];
          bVar55 = pbVar3[0x1e];
          bVar57 = pbVar3[0x1f];
          pbVar5 = pbVar3 + param_2 + 0x10;
          bVar11 = *pbVar5;
          bVar12 = pbVar5[1];
          bVar13 = pbVar5[2];
          bVar14 = pbVar5[3];
          bVar15 = pbVar5[4];
          bVar16 = pbVar5[5];
          bVar17 = pbVar5[6];
          bVar18 = pbVar5[7];
          bVar19 = pbVar5[8];
          bVar20 = pbVar5[9];
          bVar21 = pbVar5[10];
          bVar22 = pbVar5[0xb];
          bVar23 = pbVar5[0xc];
          bVar24 = pbVar5[0xd];
          bVar25 = pbVar5[0xe];
          bVar26 = pbVar5[0xf];
          bVar11 = (bVar11 < bVar27) * bVar11 | (bVar11 >= bVar27) * bVar27;
          bVar12 = (bVar12 < bVar29) * bVar12 | (bVar12 >= bVar29) * bVar29;
          bVar59 = (bVar13 < bVar31) * bVar13 | (bVar13 >= bVar31) * bVar31;
          bVar60 = (bVar14 < bVar33) * bVar14 | (bVar14 >= bVar33) * bVar33;
          bVar61 = (bVar15 < bVar35) * bVar15 | (bVar15 >= bVar35) * bVar35;
          bVar62 = (bVar16 < bVar37) * bVar16 | (bVar16 >= bVar37) * bVar37;
          bVar63 = (bVar17 < bVar39) * bVar17 | (bVar17 >= bVar39) * bVar39;
          bVar64 = (bVar18 < bVar41) * bVar18 | (bVar18 >= bVar41) * bVar41;
          bVar65 = (bVar19 < bVar43) * bVar19 | (bVar19 >= bVar43) * bVar43;
          bVar66 = (bVar20 < bVar45) * bVar20 | (bVar20 >= bVar45) * bVar45;
          bVar67 = (bVar21 < bVar47) * bVar21 | (bVar21 >= bVar47) * bVar47;
          bVar68 = (bVar22 < bVar49) * bVar22 | (bVar22 >= bVar49) * bVar49;
          bVar69 = (bVar23 < bVar51) * bVar23 | (bVar23 >= bVar51) * bVar51;
          bVar70 = (bVar24 < bVar53) * bVar24 | (bVar24 >= bVar53) * bVar53;
          bVar25 = (bVar25 < bVar55) * bVar25 | (bVar25 >= bVar55) * bVar55;
          bVar26 = (bVar26 < bVar57) * bVar26 | (bVar26 >= bVar57) * bVar57;
          pbVar5 = pbVar3 + param_2 * 2 + 0x10;
          bVar27 = *pbVar5;
          bVar29 = pbVar5[1];
          bVar31 = pbVar5[2];
          bVar33 = pbVar5[3];
          bVar35 = pbVar5[4];
          bVar37 = pbVar5[5];
          bVar39 = pbVar5[6];
          bVar41 = pbVar5[7];
          bVar43 = pbVar5[8];
          bVar45 = pbVar5[9];
          bVar47 = pbVar5[10];
          bVar49 = pbVar5[0xb];
          bVar51 = pbVar5[0xc];
          bVar53 = pbVar5[0xd];
          bVar55 = pbVar5[0xe];
          bVar57 = pbVar5[0xf];
          pbVar3 = pbVar3 + 0x10;
          bVar23 = (bVar27 < bVar11) * bVar27 | (bVar27 >= bVar11) * bVar11;
          bVar24 = (bVar29 < bVar12) * bVar29 | (bVar29 >= bVar12) * bVar12;
          bVar28 = (bVar28 < bVar30) * bVar28 | (bVar28 >= bVar30) * bVar30;
          bVar30 = (bVar30 < bVar32) * bVar30 | (bVar30 >= bVar32) * bVar32;
          bVar27 = (bVar32 < bVar34) * bVar32 | (bVar32 >= bVar34) * bVar34;
          bVar29 = (bVar34 < bVar36) * bVar34 | (bVar34 >= bVar36) * bVar36;
          bVar11 = (bVar36 < bVar38) * bVar36 | (bVar36 >= bVar38) * bVar38;
          bVar12 = (bVar38 < bVar40) * bVar38 | (bVar38 >= bVar40) * bVar40;
          bVar13 = (bVar40 < bVar42) * bVar40 | (bVar40 >= bVar42) * bVar42;
          bVar14 = (bVar42 < bVar44) * bVar42 | (bVar42 >= bVar44) * bVar44;
          bVar15 = (bVar44 < bVar46) * bVar44 | (bVar44 >= bVar46) * bVar46;
          bVar16 = (bVar46 < bVar48) * bVar46 | (bVar46 >= bVar48) * bVar48;
          bVar17 = (bVar48 < bVar50) * bVar48 | (bVar48 >= bVar50) * bVar50;
          bVar18 = (bVar50 < bVar52) * bVar50 | (bVar50 >= bVar52) * bVar52;
          bVar19 = (bVar52 < bVar54) * bVar52 | (bVar52 >= bVar54) * bVar54;
          bVar20 = (bVar54 < bVar56) * bVar54 | (bVar54 >= bVar56) * bVar56;
          bVar21 = (bVar56 < bVar58) * bVar56 | (bVar56 >= bVar58) * bVar58;
          bVar22 = (bVar58 < bVar23) * bVar58 | (bVar58 >= bVar23) * bVar23;
          *pbVar7 = (bVar28 < bVar32) * bVar28 | (bVar28 >= bVar32) * bVar32;
          pbVar7[1] = (bVar30 < bVar34) * bVar30 | (bVar30 >= bVar34) * bVar34;
          pbVar7[2] = (bVar27 < bVar36) * bVar27 | (bVar27 >= bVar36) * bVar36;
          pbVar7[3] = (bVar29 < bVar38) * bVar29 | (bVar29 >= bVar38) * bVar38;
          pbVar7[4] = (bVar11 < bVar40) * bVar11 | (bVar11 >= bVar40) * bVar40;
          pbVar7[5] = (bVar12 < bVar42) * bVar12 | (bVar12 >= bVar42) * bVar42;
          pbVar7[6] = (bVar13 < bVar44) * bVar13 | (bVar13 >= bVar44) * bVar44;
          pbVar7[7] = (bVar14 < bVar46) * bVar14 | (bVar14 >= bVar46) * bVar46;
          pbVar7[8] = (bVar15 < bVar48) * bVar15 | (bVar15 >= bVar48) * bVar48;
          pbVar7[9] = (bVar16 < bVar50) * bVar16 | (bVar16 >= bVar50) * bVar50;
          pbVar7[10] = (bVar17 < bVar52) * bVar17 | (bVar17 >= bVar52) * bVar52;
          pbVar7[0xb] = (bVar18 < bVar54) * bVar18 | (bVar18 >= bVar54) * bVar54;
          pbVar7[0xc] = (bVar19 < bVar56) * bVar19 | (bVar19 >= bVar56) * bVar56;
          pbVar7[0xd] = (bVar20 < bVar58) * bVar20 | (bVar20 >= bVar58) * bVar58;
          pbVar7[0xe] = (bVar21 < bVar23) * bVar21 | (bVar21 >= bVar23) * bVar23;
          pbVar7[0xf] = (bVar22 < bVar24) * bVar22 | (bVar22 >= bVar24) * bVar24;
          pbVar7 = pbVar7 + 0x10;
          bVar28 = bVar23;
          bVar30 = bVar24;
          bVar32 = (bVar31 < bVar59) * bVar31 | (bVar31 >= bVar59) * bVar59;
          bVar34 = (bVar33 < bVar60) * bVar33 | (bVar33 >= bVar60) * bVar60;
          bVar36 = (bVar35 < bVar61) * bVar35 | (bVar35 >= bVar61) * bVar61;
          bVar38 = (bVar37 < bVar62) * bVar37 | (bVar37 >= bVar62) * bVar62;
          bVar40 = (bVar39 < bVar63) * bVar39 | (bVar39 >= bVar63) * bVar63;
          bVar42 = (bVar41 < bVar64) * bVar41 | (bVar41 >= bVar64) * bVar64;
          bVar44 = (bVar43 < bVar65) * bVar43 | (bVar43 >= bVar65) * bVar65;
          bVar46 = (bVar45 < bVar66) * bVar45 | (bVar45 >= bVar66) * bVar66;
          bVar48 = (bVar47 < bVar67) * bVar47 | (bVar47 >= bVar67) * bVar67;
          bVar50 = (bVar49 < bVar68) * bVar49 | (bVar49 >= bVar68) * bVar68;
          bVar52 = (bVar51 < bVar69) * bVar51 | (bVar51 >= bVar69) * bVar69;
          bVar54 = (bVar53 < bVar70) * bVar53 | (bVar53 >= bVar70) * bVar70;
          bVar56 = (bVar55 < bVar25) * bVar55 | (bVar55 >= bVar25) * bVar25;
          bVar58 = (bVar57 < bVar26) * bVar57 | (bVar57 >= bVar26) * bVar26;
        }
      }
      if ((uVar10 & 0xf) != 0) {
        FUN_140475240(pbVar3,param_2);
      }
      lVar6 = lVar6 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (lVar6 < param_6 + -1);
  }
  if (lVar6 < param_6) {
    do {
      uVar10 = param_5;
      pbVar3 = param_1;
      pbVar7 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar10 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar10) {
          uVar10 = param_5;
        }
        FUN_140475240(param_1,param_2,param_3,uVar10);
        pbVar3 = param_1 + uVar10;
        pbVar7 = param_3 + uVar10;
        uVar10 = param_5 - uVar10;
      }
      lVar2 = (longlong)uVar10 >> 4;
      if (lVar2 != 0) {
        pbVar5 = pbVar3 + param_2;
        lVar9 = 0;
        bVar28 = *pbVar3;
        bVar30 = pbVar3[1];
        bVar32 = pbVar3[2];
        bVar34 = pbVar3[3];
        bVar36 = pbVar3[4];
        bVar38 = pbVar3[5];
        bVar40 = pbVar3[6];
        bVar42 = pbVar3[7];
        bVar44 = pbVar3[8];
        bVar46 = pbVar3[9];
        bVar48 = pbVar3[10];
        bVar50 = pbVar3[0xb];
        bVar52 = pbVar3[0xc];
        bVar54 = pbVar3[0xd];
        bVar56 = pbVar3[0xe];
        bVar58 = pbVar3[0xf];
        bVar27 = *pbVar5;
        bVar29 = pbVar5[1];
        bVar31 = pbVar5[2];
        bVar33 = pbVar5[3];
        bVar35 = pbVar5[4];
        bVar37 = pbVar5[5];
        bVar39 = pbVar5[6];
        bVar41 = pbVar5[7];
        bVar43 = pbVar5[8];
        bVar45 = pbVar5[9];
        bVar47 = pbVar5[10];
        bVar49 = pbVar5[0xb];
        bVar51 = pbVar5[0xc];
        bVar53 = pbVar5[0xd];
        bVar55 = pbVar5[0xe];
        bVar57 = pbVar5[0xf];
        pbVar8 = pbVar3 + param_2 * 2;
        bVar11 = *pbVar8;
        bVar12 = pbVar8[1];
        bVar13 = pbVar8[2];
        bVar14 = pbVar8[3];
        bVar15 = pbVar8[4];
        bVar16 = pbVar8[5];
        bVar17 = pbVar8[6];
        bVar18 = pbVar8[7];
        bVar19 = pbVar8[8];
        bVar20 = pbVar8[9];
        bVar21 = pbVar8[10];
        bVar22 = pbVar8[0xb];
        bVar23 = pbVar8[0xc];
        bVar24 = pbVar8[0xd];
        bVar25 = pbVar8[0xe];
        bVar26 = pbVar8[0xf];
        bVar28 = (bVar27 < bVar28) * bVar27 | (bVar27 >= bVar28) * bVar28;
        bVar30 = (bVar29 < bVar30) * bVar29 | (bVar29 >= bVar30) * bVar30;
        bVar32 = (bVar31 < bVar32) * bVar31 | (bVar31 >= bVar32) * bVar32;
        bVar34 = (bVar33 < bVar34) * bVar33 | (bVar33 >= bVar34) * bVar34;
        bVar36 = (bVar35 < bVar36) * bVar35 | (bVar35 >= bVar36) * bVar36;
        bVar38 = (bVar37 < bVar38) * bVar37 | (bVar37 >= bVar38) * bVar38;
        bVar40 = (bVar39 < bVar40) * bVar39 | (bVar39 >= bVar40) * bVar40;
        bVar42 = (bVar41 < bVar42) * bVar41 | (bVar41 >= bVar42) * bVar42;
        bVar44 = (bVar43 < bVar44) * bVar43 | (bVar43 >= bVar44) * bVar44;
        bVar46 = (bVar45 < bVar46) * bVar45 | (bVar45 >= bVar46) * bVar46;
        bVar48 = (bVar47 < bVar48) * bVar47 | (bVar47 >= bVar48) * bVar48;
        bVar50 = (bVar49 < bVar50) * bVar49 | (bVar49 >= bVar50) * bVar50;
        bVar52 = (bVar51 < bVar52) * bVar51 | (bVar51 >= bVar52) * bVar52;
        bVar54 = (bVar53 < bVar54) * bVar53 | (bVar53 >= bVar54) * bVar54;
        bVar56 = (bVar55 < bVar56) * bVar55 | (bVar55 >= bVar56) * bVar56;
        bVar58 = (bVar57 < bVar58) * bVar57 | (bVar57 >= bVar58) * bVar58;
        bVar28 = (bVar11 < bVar28) * bVar11 | (bVar11 >= bVar28) * bVar28;
        bVar30 = (bVar12 < bVar30) * bVar12 | (bVar12 >= bVar30) * bVar30;
        bVar32 = (bVar13 < bVar32) * bVar13 | (bVar13 >= bVar32) * bVar32;
        bVar34 = (bVar14 < bVar34) * bVar14 | (bVar14 >= bVar34) * bVar34;
        bVar36 = (bVar15 < bVar36) * bVar15 | (bVar15 >= bVar36) * bVar36;
        bVar38 = (bVar16 < bVar38) * bVar16 | (bVar16 >= bVar38) * bVar38;
        bVar40 = (bVar17 < bVar40) * bVar17 | (bVar17 >= bVar40) * bVar40;
        bVar42 = (bVar18 < bVar42) * bVar18 | (bVar18 >= bVar42) * bVar42;
        bVar44 = (bVar19 < bVar44) * bVar19 | (bVar19 >= bVar44) * bVar44;
        bVar46 = (bVar20 < bVar46) * bVar20 | (bVar20 >= bVar46) * bVar46;
        bVar48 = (bVar21 < bVar48) * bVar21 | (bVar21 >= bVar48) * bVar48;
        bVar50 = (bVar22 < bVar50) * bVar22 | (bVar22 >= bVar50) * bVar50;
        bVar52 = (bVar23 < bVar52) * bVar23 | (bVar23 >= bVar52) * bVar52;
        bVar54 = (bVar24 < bVar54) * bVar24 | (bVar24 >= bVar54) * bVar54;
        bVar56 = (bVar25 < bVar56) * bVar25 | (bVar25 >= bVar56) * bVar56;
        bVar58 = (bVar26 < bVar58) * bVar26 | (bVar26 >= bVar58) * bVar58;
        pbVar8 = pbVar3 + param_2 * 2;
        bVar27 = bVar28;
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
        if (lVar2 != 1 && SCARRY8(lVar2,-1) == lVar2 + -1 < 0) {
          do {
            bVar27 = pbVar3[0x10];
            bVar29 = pbVar3[0x11];
            bVar31 = pbVar3[0x12];
            bVar33 = pbVar3[0x13];
            bVar35 = pbVar3[0x14];
            bVar37 = pbVar3[0x15];
            bVar39 = pbVar3[0x16];
            bVar41 = pbVar3[0x17];
            bVar43 = pbVar3[0x18];
            bVar45 = pbVar3[0x19];
            bVar47 = pbVar3[0x1a];
            bVar49 = pbVar3[0x1b];
            bVar51 = pbVar3[0x1c];
            bVar53 = pbVar3[0x1d];
            bVar55 = pbVar3[0x1e];
            bVar57 = pbVar3[0x1f];
            lVar9 = lVar9 + 1;
            pbVar5 = pbVar3 + param_2 + 0x10;
            bVar11 = *pbVar5;
            bVar12 = pbVar5[1];
            bVar13 = pbVar5[2];
            bVar14 = pbVar5[3];
            bVar15 = pbVar5[4];
            bVar16 = pbVar5[5];
            bVar17 = pbVar5[6];
            bVar18 = pbVar5[7];
            bVar19 = pbVar5[8];
            bVar20 = pbVar5[9];
            bVar21 = pbVar5[10];
            bVar22 = pbVar5[0xb];
            bVar23 = pbVar5[0xc];
            bVar24 = pbVar5[0xd];
            bVar25 = pbVar5[0xe];
            bVar26 = pbVar5[0xf];
            bVar11 = (bVar11 < bVar27) * bVar11 | (bVar11 >= bVar27) * bVar27;
            bVar12 = (bVar12 < bVar29) * bVar12 | (bVar12 >= bVar29) * bVar29;
            bVar13 = (bVar13 < bVar31) * bVar13 | (bVar13 >= bVar31) * bVar31;
            bVar14 = (bVar14 < bVar33) * bVar14 | (bVar14 >= bVar33) * bVar33;
            bVar15 = (bVar15 < bVar35) * bVar15 | (bVar15 >= bVar35) * bVar35;
            bVar16 = (bVar16 < bVar37) * bVar16 | (bVar16 >= bVar37) * bVar37;
            bVar17 = (bVar17 < bVar39) * bVar17 | (bVar17 >= bVar39) * bVar39;
            bVar18 = (bVar18 < bVar41) * bVar18 | (bVar18 >= bVar41) * bVar41;
            bVar19 = (bVar19 < bVar43) * bVar19 | (bVar19 >= bVar43) * bVar43;
            bVar20 = (bVar20 < bVar45) * bVar20 | (bVar20 >= bVar45) * bVar45;
            bVar21 = (bVar21 < bVar47) * bVar21 | (bVar21 >= bVar47) * bVar47;
            bVar22 = (bVar22 < bVar49) * bVar22 | (bVar22 >= bVar49) * bVar49;
            bVar23 = (bVar23 < bVar51) * bVar23 | (bVar23 >= bVar51) * bVar51;
            bVar24 = (bVar24 < bVar53) * bVar24 | (bVar24 >= bVar53) * bVar53;
            bVar25 = (bVar25 < bVar55) * bVar25 | (bVar25 >= bVar55) * bVar55;
            bVar26 = (bVar26 < bVar57) * bVar26 | (bVar26 >= bVar57) * bVar57;
            pbVar5 = pbVar3 + param_2 * 2 + 0x10;
            bVar27 = *pbVar5;
            bVar29 = pbVar5[1];
            bVar31 = pbVar5[2];
            bVar33 = pbVar5[3];
            bVar35 = pbVar5[4];
            bVar37 = pbVar5[5];
            bVar39 = pbVar5[6];
            bVar41 = pbVar5[7];
            bVar43 = pbVar5[8];
            bVar45 = pbVar5[9];
            bVar47 = pbVar5[10];
            bVar49 = pbVar5[0xb];
            bVar51 = pbVar5[0xc];
            bVar53 = pbVar5[0xd];
            bVar55 = pbVar5[0xe];
            bVar57 = pbVar5[0xf];
            pbVar3 = pbVar3 + 0x10;
            bVar27 = (bVar27 < bVar11) * bVar27 | (bVar27 >= bVar11) * bVar11;
            bVar29 = (bVar29 < bVar12) * bVar29 | (bVar29 >= bVar12) * bVar12;
            bVar31 = (bVar31 < bVar13) * bVar31 | (bVar31 >= bVar13) * bVar13;
            bVar33 = (bVar33 < bVar14) * bVar33 | (bVar33 >= bVar14) * bVar14;
            bVar35 = (bVar35 < bVar15) * bVar35 | (bVar35 >= bVar15) * bVar15;
            bVar37 = (bVar37 < bVar16) * bVar37 | (bVar37 >= bVar16) * bVar16;
            bVar39 = (bVar39 < bVar17) * bVar39 | (bVar39 >= bVar17) * bVar17;
            bVar41 = (bVar41 < bVar18) * bVar41 | (bVar41 >= bVar18) * bVar18;
            bVar43 = (bVar43 < bVar19) * bVar43 | (bVar43 >= bVar19) * bVar19;
            bVar45 = (bVar45 < bVar20) * bVar45 | (bVar45 >= bVar20) * bVar20;
            bVar47 = (bVar47 < bVar21) * bVar47 | (bVar47 >= bVar21) * bVar21;
            bVar49 = (bVar49 < bVar22) * bVar49 | (bVar49 >= bVar22) * bVar22;
            bVar51 = (bVar51 < bVar23) * bVar51 | (bVar51 >= bVar23) * bVar23;
            bVar53 = (bVar53 < bVar24) * bVar53 | (bVar53 >= bVar24) * bVar24;
            bVar55 = (bVar55 < bVar25) * bVar55 | (bVar55 >= bVar25) * bVar25;
            bVar57 = (bVar57 < bVar26) * bVar57 | (bVar57 >= bVar26) * bVar26;
            bVar28 = (bVar28 < bVar30) * bVar28 | (bVar28 >= bVar30) * bVar30;
            bVar30 = (bVar30 < bVar32) * bVar30 | (bVar30 >= bVar32) * bVar32;
            bVar11 = (bVar32 < bVar34) * bVar32 | (bVar32 >= bVar34) * bVar34;
            bVar12 = (bVar34 < bVar36) * bVar34 | (bVar34 >= bVar36) * bVar36;
            bVar13 = (bVar36 < bVar38) * bVar36 | (bVar36 >= bVar38) * bVar38;
            bVar14 = (bVar38 < bVar40) * bVar38 | (bVar38 >= bVar40) * bVar40;
            bVar15 = (bVar40 < bVar42) * bVar40 | (bVar40 >= bVar42) * bVar42;
            bVar16 = (bVar42 < bVar44) * bVar42 | (bVar42 >= bVar44) * bVar44;
            bVar17 = (bVar44 < bVar46) * bVar44 | (bVar44 >= bVar46) * bVar46;
            bVar18 = (bVar46 < bVar48) * bVar46 | (bVar46 >= bVar48) * bVar48;
            bVar19 = (bVar48 < bVar50) * bVar48 | (bVar48 >= bVar50) * bVar50;
            bVar20 = (bVar50 < bVar52) * bVar50 | (bVar50 >= bVar52) * bVar52;
            bVar21 = (bVar52 < bVar54) * bVar52 | (bVar52 >= bVar54) * bVar54;
            bVar22 = (bVar54 < bVar56) * bVar54 | (bVar54 >= bVar56) * bVar56;
            bVar23 = (bVar56 < bVar58) * bVar56 | (bVar56 >= bVar58) * bVar58;
            bVar24 = (bVar58 < bVar27) * bVar58 | (bVar58 >= bVar27) * bVar27;
            *pbVar7 = (bVar28 < bVar32) * bVar28 | (bVar28 >= bVar32) * bVar32;
            pbVar7[1] = (bVar30 < bVar34) * bVar30 | (bVar30 >= bVar34) * bVar34;
            pbVar7[2] = (bVar11 < bVar36) * bVar11 | (bVar11 >= bVar36) * bVar36;
            pbVar7[3] = (bVar12 < bVar38) * bVar12 | (bVar12 >= bVar38) * bVar38;
            pbVar7[4] = (bVar13 < bVar40) * bVar13 | (bVar13 >= bVar40) * bVar40;
            pbVar7[5] = (bVar14 < bVar42) * bVar14 | (bVar14 >= bVar42) * bVar42;
            pbVar7[6] = (bVar15 < bVar44) * bVar15 | (bVar15 >= bVar44) * bVar44;
            pbVar7[7] = (bVar16 < bVar46) * bVar16 | (bVar16 >= bVar46) * bVar46;
            pbVar7[8] = (bVar17 < bVar48) * bVar17 | (bVar17 >= bVar48) * bVar48;
            pbVar7[9] = (bVar18 < bVar50) * bVar18 | (bVar18 >= bVar50) * bVar50;
            pbVar7[10] = (bVar19 < bVar52) * bVar19 | (bVar19 >= bVar52) * bVar52;
            pbVar7[0xb] = (bVar20 < bVar54) * bVar20 | (bVar20 >= bVar54) * bVar54;
            pbVar7[0xc] = (bVar21 < bVar56) * bVar21 | (bVar21 >= bVar56) * bVar56;
            pbVar7[0xd] = (bVar22 < bVar58) * bVar22 | (bVar22 >= bVar58) * bVar58;
            pbVar7[0xe] = (bVar23 < bVar27) * bVar23 | (bVar23 >= bVar27) * bVar27;
            pbVar7[0xf] = (bVar24 < bVar29) * bVar24 | (bVar24 >= bVar29) * bVar29;
            pbVar7 = pbVar7 + 0x10;
            bVar28 = bVar27;
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
          } while (lVar9 < lVar2 + -1);
          pbVar5 = pbVar3 + param_2;
          pbVar8 = pbVar3 + param_2 * 2;
        }
        pbVar1 = pbVar3 + 0x10;
        pbVar3 = pbVar3 + 0x10;
        bVar28 = (byte)*(undefined2 *)(pbVar5 + 0x10);
        bVar32 = (byte)*(undefined2 *)pbVar1;
        bVar30 = (byte)((ushort)*(undefined2 *)pbVar1 >> 8);
        bVar32 = (bVar28 < bVar32) * bVar28 | (bVar28 >= bVar32) * bVar32;
        bVar28 = (byte)((ushort)*(undefined2 *)(pbVar5 + 0x10) >> 8);
        bVar34 = (bVar28 < bVar30) * bVar28 | (bVar28 >= bVar30) * bVar30;
        bVar28 = (byte)*(undefined2 *)(pbVar8 + 0x10);
        bVar30 = (bVar28 < bVar32) * bVar28 | (bVar28 >= bVar32) * bVar32;
        bVar28 = (byte)((ushort)*(undefined2 *)(pbVar8 + 0x10) >> 8);
        bVar32 = (bVar28 < bVar34) * bVar28 | (bVar28 >= bVar34) * bVar34;
        bVar28 = (bVar27 < bVar29) * bVar27 | (bVar27 >= bVar29) * bVar29;
        bVar34 = (bVar29 < bVar31) * bVar29 | (bVar29 >= bVar31) * bVar31;
        bVar36 = (bVar31 < bVar33) * bVar31 | (bVar31 >= bVar33) * bVar33;
        bVar38 = (bVar33 < bVar35) * bVar33 | (bVar33 >= bVar35) * bVar35;
        bVar40 = (bVar35 < bVar37) * bVar35 | (bVar35 >= bVar37) * bVar37;
        bVar42 = (bVar37 < bVar39) * bVar37 | (bVar37 >= bVar39) * bVar39;
        bVar44 = (bVar39 < bVar41) * bVar39 | (bVar39 >= bVar41) * bVar41;
        bVar46 = (bVar41 < bVar43) * bVar41 | (bVar41 >= bVar43) * bVar43;
        bVar48 = (bVar43 < bVar45) * bVar43 | (bVar43 >= bVar45) * bVar45;
        bVar50 = (bVar45 < bVar47) * bVar45 | (bVar45 >= bVar47) * bVar47;
        bVar52 = (bVar47 < bVar49) * bVar47 | (bVar47 >= bVar49) * bVar49;
        bVar54 = (bVar49 < bVar51) * bVar49 | (bVar49 >= bVar51) * bVar51;
        bVar56 = (bVar51 < bVar53) * bVar51 | (bVar51 >= bVar53) * bVar53;
        bVar58 = (bVar53 < bVar55) * bVar53 | (bVar53 >= bVar55) * bVar55;
        bVar27 = (bVar55 < bVar57) * bVar55 | (bVar55 >= bVar57) * bVar57;
        bVar29 = (bVar57 < bVar30) * bVar57 | (bVar57 >= bVar30) * bVar30;
        *pbVar7 = (bVar28 < bVar31) * bVar28 | (bVar28 >= bVar31) * bVar31;
        pbVar7[1] = (bVar34 < bVar33) * bVar34 | (bVar34 >= bVar33) * bVar33;
        pbVar7[2] = (bVar36 < bVar35) * bVar36 | (bVar36 >= bVar35) * bVar35;
        pbVar7[3] = (bVar38 < bVar37) * bVar38 | (bVar38 >= bVar37) * bVar37;
        pbVar7[4] = (bVar40 < bVar39) * bVar40 | (bVar40 >= bVar39) * bVar39;
        pbVar7[5] = (bVar42 < bVar41) * bVar42 | (bVar42 >= bVar41) * bVar41;
        pbVar7[6] = (bVar44 < bVar43) * bVar44 | (bVar44 >= bVar43) * bVar43;
        pbVar7[7] = (bVar46 < bVar45) * bVar46 | (bVar46 >= bVar45) * bVar45;
        pbVar7[8] = (bVar48 < bVar47) * bVar48 | (bVar48 >= bVar47) * bVar47;
        pbVar7[9] = (bVar50 < bVar49) * bVar50 | (bVar50 >= bVar49) * bVar49;
        pbVar7[10] = (bVar52 < bVar51) * bVar52 | (bVar52 >= bVar51) * bVar51;
        pbVar7[0xb] = (bVar54 < bVar53) * bVar54 | (bVar54 >= bVar53) * bVar53;
        pbVar7[0xc] = (bVar56 < bVar55) * bVar56 | (bVar56 >= bVar55) * bVar55;
        pbVar7[0xd] = (bVar58 < bVar57) * bVar58 | (bVar58 >= bVar57) * bVar57;
        pbVar7[0xe] = (bVar27 < bVar30) * bVar27 | (bVar27 >= bVar30) * bVar30;
        pbVar7[0xf] = (bVar29 < bVar32) * bVar29 | (bVar29 >= bVar32) * bVar32;
        pbVar7 = pbVar7 + 0x10;
      }
      if ((uVar10 & 0xf) != 0) {
        FUN_140475240(pbVar3,param_2,pbVar7);
      }
      lVar6 = lVar6 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (lVar6 < param_6);
  }
  return;
}


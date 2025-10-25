
void FUN_1404314c0(byte *param_1,longlong param_2,byte *param_3,longlong param_4,ulonglong param_5,
                  longlong param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  byte bVar10;
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
  
  lVar6 = 0;
  if (0 < param_6 + -1) {
    do {
      uVar7 = param_5;
      pbVar5 = param_1;
      pbVar8 = param_3;
      if (((ulonglong)param_3 & 0xf) != 0) {
        uVar7 = 0x10 - ((ulonglong)param_3 & 0xf);
        if ((longlong)param_5 <= (longlong)uVar7) {
          uVar7 = param_5;
        }
        FUN_140431940(param_1,param_2,param_3,uVar7);
        pbVar5 = param_1 + uVar7;
        pbVar8 = param_3 + uVar7;
        uVar7 = param_5 - uVar7;
      }
      lVar4 = (longlong)uVar7 >> 4;
      if (lVar4 != 0) {
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
        lVar9 = 0;
        pbVar1 = pbVar5 + param_2;
        bVar26 = *pbVar1;
        bVar28 = pbVar1[1];
        bVar30 = pbVar1[2];
        bVar32 = pbVar1[3];
        bVar34 = pbVar1[4];
        bVar36 = pbVar1[5];
        bVar38 = pbVar1[6];
        bVar40 = pbVar1[7];
        bVar42 = pbVar1[8];
        bVar44 = pbVar1[9];
        bVar46 = pbVar1[10];
        bVar48 = pbVar1[0xb];
        bVar50 = pbVar1[0xc];
        bVar52 = pbVar1[0xd];
        bVar54 = pbVar1[0xe];
        bVar56 = pbVar1[0xf];
        bVar26 = (bVar27 < bVar26) * bVar26 | (bVar27 >= bVar26) * bVar27;
        bVar28 = (bVar29 < bVar28) * bVar28 | (bVar29 >= bVar28) * bVar29;
        bVar30 = (bVar31 < bVar30) * bVar30 | (bVar31 >= bVar30) * bVar31;
        bVar32 = (bVar33 < bVar32) * bVar32 | (bVar33 >= bVar32) * bVar33;
        bVar34 = (bVar35 < bVar34) * bVar34 | (bVar35 >= bVar34) * bVar35;
        bVar36 = (bVar37 < bVar36) * bVar36 | (bVar37 >= bVar36) * bVar37;
        bVar38 = (bVar39 < bVar38) * bVar38 | (bVar39 >= bVar38) * bVar39;
        bVar40 = (bVar41 < bVar40) * bVar40 | (bVar41 >= bVar40) * bVar41;
        bVar42 = (bVar43 < bVar42) * bVar42 | (bVar43 >= bVar42) * bVar43;
        bVar44 = (bVar45 < bVar44) * bVar44 | (bVar45 >= bVar44) * bVar45;
        bVar46 = (bVar47 < bVar46) * bVar46 | (bVar47 >= bVar46) * bVar47;
        bVar48 = (bVar49 < bVar48) * bVar48 | (bVar49 >= bVar48) * bVar49;
        bVar50 = (bVar51 < bVar50) * bVar50 | (bVar51 >= bVar50) * bVar51;
        bVar52 = (bVar53 < bVar52) * bVar52 | (bVar53 >= bVar52) * bVar53;
        bVar54 = (bVar55 < bVar54) * bVar54 | (bVar55 >= bVar54) * bVar55;
        bVar56 = (bVar57 < bVar56) * bVar56 | (bVar57 >= bVar56) * bVar57;
        pbVar1 = pbVar5 + param_2 * 2;
        bVar27 = *pbVar1;
        bVar29 = pbVar1[1];
        bVar31 = pbVar1[2];
        bVar33 = pbVar1[3];
        bVar35 = pbVar1[4];
        bVar37 = pbVar1[5];
        bVar39 = pbVar1[6];
        bVar41 = pbVar1[7];
        bVar43 = pbVar1[8];
        bVar45 = pbVar1[9];
        bVar47 = pbVar1[10];
        bVar49 = pbVar1[0xb];
        bVar51 = pbVar1[0xc];
        bVar53 = pbVar1[0xd];
        bVar55 = pbVar1[0xe];
        bVar57 = pbVar1[0xf];
        bVar27 = (bVar26 < bVar27) * bVar27 | (bVar26 >= bVar27) * bVar26;
        bVar29 = (bVar28 < bVar29) * bVar29 | (bVar28 >= bVar29) * bVar28;
        bVar31 = (bVar30 < bVar31) * bVar31 | (bVar30 >= bVar31) * bVar30;
        bVar33 = (bVar32 < bVar33) * bVar33 | (bVar32 >= bVar33) * bVar32;
        bVar35 = (bVar34 < bVar35) * bVar35 | (bVar34 >= bVar35) * bVar34;
        bVar37 = (bVar36 < bVar37) * bVar37 | (bVar36 >= bVar37) * bVar36;
        bVar39 = (bVar38 < bVar39) * bVar39 | (bVar38 >= bVar39) * bVar38;
        bVar41 = (bVar40 < bVar41) * bVar41 | (bVar40 >= bVar41) * bVar40;
        bVar43 = (bVar42 < bVar43) * bVar43 | (bVar42 >= bVar43) * bVar42;
        bVar45 = (bVar44 < bVar45) * bVar45 | (bVar44 >= bVar45) * bVar44;
        bVar47 = (bVar46 < bVar47) * bVar47 | (bVar46 >= bVar47) * bVar46;
        bVar49 = (bVar48 < bVar49) * bVar49 | (bVar48 >= bVar49) * bVar48;
        bVar51 = (bVar50 < bVar51) * bVar51 | (bVar50 >= bVar51) * bVar50;
        bVar53 = (bVar52 < bVar53) * bVar53 | (bVar52 >= bVar53) * bVar52;
        bVar55 = (bVar54 < bVar55) * bVar55 | (bVar54 >= bVar55) * bVar54;
        bVar57 = (bVar56 < bVar57) * bVar57 | (bVar56 >= bVar57) * bVar56;
        if (lVar4 != 1 && SCARRY8(lVar4,-1) == lVar4 + -1 < 0) {
          do {
            bVar26 = pbVar5[0x10];
            bVar28 = pbVar5[0x11];
            bVar30 = pbVar5[0x12];
            bVar32 = pbVar5[0x13];
            bVar34 = pbVar5[0x14];
            bVar36 = pbVar5[0x15];
            bVar38 = pbVar5[0x16];
            bVar40 = pbVar5[0x17];
            bVar42 = pbVar5[0x18];
            bVar44 = pbVar5[0x19];
            bVar46 = pbVar5[0x1a];
            bVar48 = pbVar5[0x1b];
            bVar50 = pbVar5[0x1c];
            bVar52 = pbVar5[0x1d];
            bVar54 = pbVar5[0x1e];
            bVar56 = pbVar5[0x1f];
            lVar9 = lVar9 + 2;
            pbVar1 = pbVar5 + param_2 + 0x10;
            bVar10 = *pbVar1;
            bVar11 = pbVar1[1];
            bVar12 = pbVar1[2];
            bVar13 = pbVar1[3];
            bVar14 = pbVar1[4];
            bVar15 = pbVar1[5];
            bVar16 = pbVar1[6];
            bVar17 = pbVar1[7];
            bVar18 = pbVar1[8];
            bVar19 = pbVar1[9];
            bVar20 = pbVar1[10];
            bVar21 = pbVar1[0xb];
            bVar22 = pbVar1[0xc];
            bVar23 = pbVar1[0xd];
            bVar24 = pbVar1[0xe];
            bVar25 = pbVar1[0xf];
            bVar10 = (bVar26 < bVar10) * bVar10 | (bVar26 >= bVar10) * bVar26;
            bVar11 = (bVar28 < bVar11) * bVar11 | (bVar28 >= bVar11) * bVar28;
            bVar12 = (bVar30 < bVar12) * bVar12 | (bVar30 >= bVar12) * bVar30;
            bVar13 = (bVar32 < bVar13) * bVar13 | (bVar32 >= bVar13) * bVar32;
            bVar14 = (bVar34 < bVar14) * bVar14 | (bVar34 >= bVar14) * bVar34;
            bVar15 = (bVar36 < bVar15) * bVar15 | (bVar36 >= bVar15) * bVar36;
            bVar16 = (bVar38 < bVar16) * bVar16 | (bVar38 >= bVar16) * bVar38;
            bVar17 = (bVar40 < bVar17) * bVar17 | (bVar40 >= bVar17) * bVar40;
            bVar18 = (bVar42 < bVar18) * bVar18 | (bVar42 >= bVar18) * bVar42;
            bVar19 = (bVar44 < bVar19) * bVar19 | (bVar44 >= bVar19) * bVar44;
            bVar20 = (bVar46 < bVar20) * bVar20 | (bVar46 >= bVar20) * bVar46;
            bVar21 = (bVar48 < bVar21) * bVar21 | (bVar48 >= bVar21) * bVar48;
            bVar22 = (bVar50 < bVar22) * bVar22 | (bVar50 >= bVar22) * bVar50;
            bVar23 = (bVar52 < bVar23) * bVar23 | (bVar52 >= bVar23) * bVar52;
            bVar24 = (bVar54 < bVar24) * bVar24 | (bVar54 >= bVar24) * bVar54;
            bVar25 = (bVar56 < bVar25) * bVar25 | (bVar56 >= bVar25) * bVar56;
            pbVar1 = pbVar5 + param_2 * 2 + 0x10;
            bVar26 = *pbVar1;
            bVar28 = pbVar1[1];
            bVar30 = pbVar1[2];
            bVar32 = pbVar1[3];
            bVar34 = pbVar1[4];
            bVar36 = pbVar1[5];
            bVar38 = pbVar1[6];
            bVar40 = pbVar1[7];
            bVar42 = pbVar1[8];
            bVar44 = pbVar1[9];
            bVar46 = pbVar1[10];
            bVar48 = pbVar1[0xb];
            bVar50 = pbVar1[0xc];
            bVar52 = pbVar1[0xd];
            bVar54 = pbVar1[0xe];
            bVar56 = pbVar1[0xf];
            bVar10 = (bVar10 < bVar26) * bVar26 | (bVar10 >= bVar26) * bVar10;
            bVar11 = (bVar11 < bVar28) * bVar28 | (bVar11 >= bVar28) * bVar11;
            bVar12 = (bVar12 < bVar30) * bVar30 | (bVar12 >= bVar30) * bVar12;
            bVar13 = (bVar13 < bVar32) * bVar32 | (bVar13 >= bVar32) * bVar13;
            bVar14 = (bVar14 < bVar34) * bVar34 | (bVar14 >= bVar34) * bVar14;
            bVar15 = (bVar15 < bVar36) * bVar36 | (bVar15 >= bVar36) * bVar15;
            bVar16 = (bVar16 < bVar38) * bVar38 | (bVar16 >= bVar38) * bVar16;
            bVar17 = (bVar17 < bVar40) * bVar40 | (bVar17 >= bVar40) * bVar17;
            bVar18 = (bVar18 < bVar42) * bVar42 | (bVar18 >= bVar42) * bVar18;
            bVar19 = (bVar19 < bVar44) * bVar44 | (bVar19 >= bVar44) * bVar19;
            bVar20 = (bVar20 < bVar46) * bVar46 | (bVar20 >= bVar46) * bVar20;
            bVar21 = (bVar21 < bVar48) * bVar48 | (bVar21 >= bVar48) * bVar21;
            bVar22 = (bVar22 < bVar50) * bVar50 | (bVar22 >= bVar50) * bVar22;
            bVar23 = (bVar23 < bVar52) * bVar52 | (bVar23 >= bVar52) * bVar23;
            bVar24 = (bVar24 < bVar54) * bVar54 | (bVar24 >= bVar54) * bVar24;
            bVar25 = (bVar25 < bVar56) * bVar56 | (bVar25 >= bVar56) * bVar25;
            bVar27 = (bVar29 < bVar27) * bVar27 | (bVar29 >= bVar27) * bVar29;
            bVar29 = (bVar31 < bVar29) * bVar29 | (bVar31 >= bVar29) * bVar31;
            bVar26 = (bVar33 < bVar31) * bVar31 | (bVar33 >= bVar31) * bVar33;
            bVar28 = (bVar35 < bVar33) * bVar33 | (bVar35 >= bVar33) * bVar35;
            bVar30 = (bVar37 < bVar35) * bVar35 | (bVar37 >= bVar35) * bVar37;
            bVar32 = (bVar39 < bVar37) * bVar37 | (bVar39 >= bVar37) * bVar39;
            bVar34 = (bVar41 < bVar39) * bVar39 | (bVar41 >= bVar39) * bVar41;
            bVar36 = (bVar43 < bVar41) * bVar41 | (bVar43 >= bVar41) * bVar43;
            bVar38 = (bVar45 < bVar43) * bVar43 | (bVar45 >= bVar43) * bVar45;
            bVar40 = (bVar47 < bVar45) * bVar45 | (bVar47 >= bVar45) * bVar47;
            bVar42 = (bVar49 < bVar47) * bVar47 | (bVar49 >= bVar47) * bVar49;
            bVar44 = (bVar51 < bVar49) * bVar49 | (bVar51 >= bVar49) * bVar51;
            bVar46 = (bVar53 < bVar51) * bVar51 | (bVar53 >= bVar51) * bVar53;
            bVar48 = (bVar55 < bVar53) * bVar53 | (bVar55 >= bVar53) * bVar55;
            bVar50 = (bVar57 < bVar55) * bVar55 | (bVar57 >= bVar55) * bVar57;
            bVar52 = (bVar10 < bVar57) * bVar57 | (bVar10 >= bVar57) * bVar10;
            *pbVar8 = (bVar31 < bVar27) * bVar27 | (bVar31 >= bVar27) * bVar31;
            pbVar8[1] = (bVar33 < bVar29) * bVar29 | (bVar33 >= bVar29) * bVar33;
            pbVar8[2] = (bVar35 < bVar26) * bVar26 | (bVar35 >= bVar26) * bVar35;
            pbVar8[3] = (bVar37 < bVar28) * bVar28 | (bVar37 >= bVar28) * bVar37;
            pbVar8[4] = (bVar39 < bVar30) * bVar30 | (bVar39 >= bVar30) * bVar39;
            pbVar8[5] = (bVar41 < bVar32) * bVar32 | (bVar41 >= bVar32) * bVar41;
            pbVar8[6] = (bVar43 < bVar34) * bVar34 | (bVar43 >= bVar34) * bVar43;
            pbVar8[7] = (bVar45 < bVar36) * bVar36 | (bVar45 >= bVar36) * bVar45;
            pbVar8[8] = (bVar47 < bVar38) * bVar38 | (bVar47 >= bVar38) * bVar47;
            pbVar8[9] = (bVar49 < bVar40) * bVar40 | (bVar49 >= bVar40) * bVar49;
            pbVar8[10] = (bVar51 < bVar42) * bVar42 | (bVar51 >= bVar42) * bVar51;
            pbVar8[0xb] = (bVar53 < bVar44) * bVar44 | (bVar53 >= bVar44) * bVar53;
            pbVar8[0xc] = (bVar55 < bVar46) * bVar46 | (bVar55 >= bVar46) * bVar55;
            pbVar8[0xd] = (bVar57 < bVar48) * bVar48 | (bVar57 >= bVar48) * bVar57;
            pbVar8[0xe] = (bVar10 < bVar50) * bVar50 | (bVar10 >= bVar50) * bVar10;
            pbVar8[0xf] = (bVar11 < bVar52) * bVar52 | (bVar11 >= bVar52) * bVar11;
            bVar27 = pbVar5[0x20];
            bVar29 = pbVar5[0x21];
            bVar31 = pbVar5[0x22];
            bVar33 = pbVar5[0x23];
            bVar35 = pbVar5[0x24];
            bVar37 = pbVar5[0x25];
            bVar39 = pbVar5[0x26];
            bVar41 = pbVar5[0x27];
            bVar43 = pbVar5[0x28];
            bVar45 = pbVar5[0x29];
            bVar47 = pbVar5[0x2a];
            bVar49 = pbVar5[0x2b];
            bVar51 = pbVar5[0x2c];
            bVar53 = pbVar5[0x2d];
            bVar55 = pbVar5[0x2e];
            bVar57 = pbVar5[0x2f];
            pbVar1 = pbVar5 + param_2 + 0x20;
            bVar26 = *pbVar1;
            bVar28 = pbVar1[1];
            bVar30 = pbVar1[2];
            bVar32 = pbVar1[3];
            bVar34 = pbVar1[4];
            bVar36 = pbVar1[5];
            bVar38 = pbVar1[6];
            bVar40 = pbVar1[7];
            bVar42 = pbVar1[8];
            bVar44 = pbVar1[9];
            bVar46 = pbVar1[10];
            bVar48 = pbVar1[0xb];
            bVar50 = pbVar1[0xc];
            bVar52 = pbVar1[0xd];
            bVar54 = pbVar1[0xe];
            bVar56 = pbVar1[0xf];
            bVar26 = (bVar27 < bVar26) * bVar26 | (bVar27 >= bVar26) * bVar27;
            bVar28 = (bVar29 < bVar28) * bVar28 | (bVar29 >= bVar28) * bVar29;
            bVar30 = (bVar31 < bVar30) * bVar30 | (bVar31 >= bVar30) * bVar31;
            bVar32 = (bVar33 < bVar32) * bVar32 | (bVar33 >= bVar32) * bVar33;
            bVar34 = (bVar35 < bVar34) * bVar34 | (bVar35 >= bVar34) * bVar35;
            bVar36 = (bVar37 < bVar36) * bVar36 | (bVar37 >= bVar36) * bVar37;
            bVar38 = (bVar39 < bVar38) * bVar38 | (bVar39 >= bVar38) * bVar39;
            bVar40 = (bVar41 < bVar40) * bVar40 | (bVar41 >= bVar40) * bVar41;
            bVar42 = (bVar43 < bVar42) * bVar42 | (bVar43 >= bVar42) * bVar43;
            bVar44 = (bVar45 < bVar44) * bVar44 | (bVar45 >= bVar44) * bVar45;
            bVar46 = (bVar47 < bVar46) * bVar46 | (bVar47 >= bVar46) * bVar47;
            bVar48 = (bVar49 < bVar48) * bVar48 | (bVar49 >= bVar48) * bVar49;
            bVar50 = (bVar51 < bVar50) * bVar50 | (bVar51 >= bVar50) * bVar51;
            bVar52 = (bVar53 < bVar52) * bVar52 | (bVar53 >= bVar52) * bVar53;
            bVar54 = (bVar55 < bVar54) * bVar54 | (bVar55 >= bVar54) * bVar55;
            bVar56 = (bVar57 < bVar56) * bVar56 | (bVar57 >= bVar56) * bVar57;
            pbVar1 = pbVar5 + param_2 * 2 + 0x20;
            bVar27 = *pbVar1;
            bVar29 = pbVar1[1];
            bVar31 = pbVar1[2];
            bVar33 = pbVar1[3];
            bVar35 = pbVar1[4];
            bVar37 = pbVar1[5];
            bVar39 = pbVar1[6];
            bVar41 = pbVar1[7];
            bVar43 = pbVar1[8];
            bVar45 = pbVar1[9];
            bVar47 = pbVar1[10];
            bVar49 = pbVar1[0xb];
            bVar51 = pbVar1[0xc];
            bVar53 = pbVar1[0xd];
            bVar55 = pbVar1[0xe];
            bVar57 = pbVar1[0xf];
            pbVar5 = pbVar5 + 0x20;
            bVar27 = (bVar26 < bVar27) * bVar27 | (bVar26 >= bVar27) * bVar26;
            bVar29 = (bVar28 < bVar29) * bVar29 | (bVar28 >= bVar29) * bVar28;
            bVar31 = (bVar30 < bVar31) * bVar31 | (bVar30 >= bVar31) * bVar30;
            bVar33 = (bVar32 < bVar33) * bVar33 | (bVar32 >= bVar33) * bVar32;
            bVar35 = (bVar34 < bVar35) * bVar35 | (bVar34 >= bVar35) * bVar34;
            bVar37 = (bVar36 < bVar37) * bVar37 | (bVar36 >= bVar37) * bVar36;
            bVar39 = (bVar38 < bVar39) * bVar39 | (bVar38 >= bVar39) * bVar38;
            bVar41 = (bVar40 < bVar41) * bVar41 | (bVar40 >= bVar41) * bVar40;
            bVar43 = (bVar42 < bVar43) * bVar43 | (bVar42 >= bVar43) * bVar42;
            bVar45 = (bVar44 < bVar45) * bVar45 | (bVar44 >= bVar45) * bVar44;
            bVar47 = (bVar46 < bVar47) * bVar47 | (bVar46 >= bVar47) * bVar46;
            bVar49 = (bVar48 < bVar49) * bVar49 | (bVar48 >= bVar49) * bVar48;
            bVar51 = (bVar50 < bVar51) * bVar51 | (bVar50 >= bVar51) * bVar50;
            bVar53 = (bVar52 < bVar53) * bVar53 | (bVar52 >= bVar53) * bVar52;
            bVar55 = (bVar54 < bVar55) * bVar55 | (bVar54 >= bVar55) * bVar54;
            bVar57 = (bVar56 < bVar57) * bVar57 | (bVar56 >= bVar57) * bVar56;
            bVar26 = (bVar11 < bVar10) * bVar10 | (bVar11 >= bVar10) * bVar11;
            bVar28 = (bVar12 < bVar11) * bVar11 | (bVar12 >= bVar11) * bVar12;
            bVar30 = (bVar13 < bVar12) * bVar12 | (bVar13 >= bVar12) * bVar13;
            bVar32 = (bVar14 < bVar13) * bVar13 | (bVar14 >= bVar13) * bVar14;
            bVar34 = (bVar15 < bVar14) * bVar14 | (bVar15 >= bVar14) * bVar15;
            bVar36 = (bVar16 < bVar15) * bVar15 | (bVar16 >= bVar15) * bVar16;
            bVar38 = (bVar17 < bVar16) * bVar16 | (bVar17 >= bVar16) * bVar17;
            bVar40 = (bVar18 < bVar17) * bVar17 | (bVar18 >= bVar17) * bVar18;
            bVar42 = (bVar19 < bVar18) * bVar18 | (bVar19 >= bVar18) * bVar19;
            bVar44 = (bVar20 < bVar19) * bVar19 | (bVar20 >= bVar19) * bVar20;
            bVar46 = (bVar21 < bVar20) * bVar20 | (bVar21 >= bVar20) * bVar21;
            bVar48 = (bVar22 < bVar21) * bVar21 | (bVar22 >= bVar21) * bVar22;
            bVar50 = (bVar23 < bVar22) * bVar22 | (bVar23 >= bVar22) * bVar23;
            bVar52 = (bVar24 < bVar23) * bVar23 | (bVar24 >= bVar23) * bVar24;
            bVar54 = (bVar25 < bVar24) * bVar24 | (bVar25 >= bVar24) * bVar25;
            bVar56 = (bVar27 < bVar25) * bVar25 | (bVar27 >= bVar25) * bVar27;
            pbVar8[0x10] = (bVar12 < bVar26) * bVar26 | (bVar12 >= bVar26) * bVar12;
            pbVar8[0x11] = (bVar13 < bVar28) * bVar28 | (bVar13 >= bVar28) * bVar13;
            pbVar8[0x12] = (bVar14 < bVar30) * bVar30 | (bVar14 >= bVar30) * bVar14;
            pbVar8[0x13] = (bVar15 < bVar32) * bVar32 | (bVar15 >= bVar32) * bVar15;
            pbVar8[0x14] = (bVar16 < bVar34) * bVar34 | (bVar16 >= bVar34) * bVar16;
            pbVar8[0x15] = (bVar17 < bVar36) * bVar36 | (bVar17 >= bVar36) * bVar17;
            pbVar8[0x16] = (bVar18 < bVar38) * bVar38 | (bVar18 >= bVar38) * bVar18;
            pbVar8[0x17] = (bVar19 < bVar40) * bVar40 | (bVar19 >= bVar40) * bVar19;
            pbVar8[0x18] = (bVar20 < bVar42) * bVar42 | (bVar20 >= bVar42) * bVar20;
            pbVar8[0x19] = (bVar21 < bVar44) * bVar44 | (bVar21 >= bVar44) * bVar21;
            pbVar8[0x1a] = (bVar22 < bVar46) * bVar46 | (bVar22 >= bVar46) * bVar22;
            pbVar8[0x1b] = (bVar23 < bVar48) * bVar48 | (bVar23 >= bVar48) * bVar23;
            pbVar8[0x1c] = (bVar24 < bVar50) * bVar50 | (bVar24 >= bVar50) * bVar24;
            pbVar8[0x1d] = (bVar25 < bVar52) * bVar52 | (bVar25 >= bVar52) * bVar25;
            pbVar8[0x1e] = (bVar27 < bVar54) * bVar54 | (bVar27 >= bVar54) * bVar27;
            pbVar8[0x1f] = (bVar29 < bVar56) * bVar56 | (bVar29 >= bVar56) * bVar29;
            pbVar8 = pbVar8 + 0x20;
          } while (lVar9 < lVar4 + -1);
        }
        for (; lVar9 < lVar4; lVar9 = lVar9 + 1) {
          bVar26 = pbVar5[0x10];
          bVar28 = pbVar5[0x11];
          bVar30 = pbVar5[0x12];
          bVar32 = pbVar5[0x13];
          bVar34 = pbVar5[0x14];
          bVar36 = pbVar5[0x15];
          bVar38 = pbVar5[0x16];
          bVar40 = pbVar5[0x17];
          bVar42 = pbVar5[0x18];
          bVar44 = pbVar5[0x19];
          bVar46 = pbVar5[0x1a];
          bVar48 = pbVar5[0x1b];
          bVar50 = pbVar5[0x1c];
          bVar52 = pbVar5[0x1d];
          bVar54 = pbVar5[0x1e];
          bVar56 = pbVar5[0x1f];
          pbVar1 = pbVar5 + param_2 + 0x10;
          bVar10 = *pbVar1;
          bVar11 = pbVar1[1];
          bVar12 = pbVar1[2];
          bVar13 = pbVar1[3];
          bVar14 = pbVar1[4];
          bVar15 = pbVar1[5];
          bVar16 = pbVar1[6];
          bVar17 = pbVar1[7];
          bVar18 = pbVar1[8];
          bVar19 = pbVar1[9];
          bVar20 = pbVar1[10];
          bVar21 = pbVar1[0xb];
          bVar22 = pbVar1[0xc];
          bVar23 = pbVar1[0xd];
          bVar24 = pbVar1[0xe];
          bVar25 = pbVar1[0xf];
          bVar10 = (bVar26 < bVar10) * bVar10 | (bVar26 >= bVar10) * bVar26;
          bVar11 = (bVar28 < bVar11) * bVar11 | (bVar28 >= bVar11) * bVar28;
          bVar58 = (bVar30 < bVar12) * bVar12 | (bVar30 >= bVar12) * bVar30;
          bVar59 = (bVar32 < bVar13) * bVar13 | (bVar32 >= bVar13) * bVar32;
          bVar60 = (bVar34 < bVar14) * bVar14 | (bVar34 >= bVar14) * bVar34;
          bVar61 = (bVar36 < bVar15) * bVar15 | (bVar36 >= bVar15) * bVar36;
          bVar62 = (bVar38 < bVar16) * bVar16 | (bVar38 >= bVar16) * bVar38;
          bVar63 = (bVar40 < bVar17) * bVar17 | (bVar40 >= bVar17) * bVar40;
          bVar64 = (bVar42 < bVar18) * bVar18 | (bVar42 >= bVar18) * bVar42;
          bVar65 = (bVar44 < bVar19) * bVar19 | (bVar44 >= bVar19) * bVar44;
          bVar66 = (bVar46 < bVar20) * bVar20 | (bVar46 >= bVar20) * bVar46;
          bVar67 = (bVar48 < bVar21) * bVar21 | (bVar48 >= bVar21) * bVar48;
          bVar68 = (bVar50 < bVar22) * bVar22 | (bVar50 >= bVar22) * bVar50;
          bVar69 = (bVar52 < bVar23) * bVar23 | (bVar52 >= bVar23) * bVar52;
          bVar24 = (bVar54 < bVar24) * bVar24 | (bVar54 >= bVar24) * bVar54;
          bVar25 = (bVar56 < bVar25) * bVar25 | (bVar56 >= bVar25) * bVar56;
          pbVar1 = pbVar5 + param_2 * 2 + 0x10;
          bVar26 = *pbVar1;
          bVar28 = pbVar1[1];
          bVar30 = pbVar1[2];
          bVar32 = pbVar1[3];
          bVar34 = pbVar1[4];
          bVar36 = pbVar1[5];
          bVar38 = pbVar1[6];
          bVar40 = pbVar1[7];
          bVar42 = pbVar1[8];
          bVar44 = pbVar1[9];
          bVar46 = pbVar1[10];
          bVar48 = pbVar1[0xb];
          bVar50 = pbVar1[0xc];
          bVar52 = pbVar1[0xd];
          bVar54 = pbVar1[0xe];
          bVar56 = pbVar1[0xf];
          pbVar5 = pbVar5 + 0x10;
          bVar22 = (bVar10 < bVar26) * bVar26 | (bVar10 >= bVar26) * bVar10;
          bVar23 = (bVar11 < bVar28) * bVar28 | (bVar11 >= bVar28) * bVar11;
          bVar27 = (bVar29 < bVar27) * bVar27 | (bVar29 >= bVar27) * bVar29;
          bVar29 = (bVar31 < bVar29) * bVar29 | (bVar31 >= bVar29) * bVar31;
          bVar26 = (bVar33 < bVar31) * bVar31 | (bVar33 >= bVar31) * bVar33;
          bVar28 = (bVar35 < bVar33) * bVar33 | (bVar35 >= bVar33) * bVar35;
          bVar10 = (bVar37 < bVar35) * bVar35 | (bVar37 >= bVar35) * bVar37;
          bVar11 = (bVar39 < bVar37) * bVar37 | (bVar39 >= bVar37) * bVar39;
          bVar12 = (bVar41 < bVar39) * bVar39 | (bVar41 >= bVar39) * bVar41;
          bVar13 = (bVar43 < bVar41) * bVar41 | (bVar43 >= bVar41) * bVar43;
          bVar14 = (bVar45 < bVar43) * bVar43 | (bVar45 >= bVar43) * bVar45;
          bVar15 = (bVar47 < bVar45) * bVar45 | (bVar47 >= bVar45) * bVar47;
          bVar16 = (bVar49 < bVar47) * bVar47 | (bVar49 >= bVar47) * bVar49;
          bVar17 = (bVar51 < bVar49) * bVar49 | (bVar51 >= bVar49) * bVar51;
          bVar18 = (bVar53 < bVar51) * bVar51 | (bVar53 >= bVar51) * bVar53;
          bVar19 = (bVar55 < bVar53) * bVar53 | (bVar55 >= bVar53) * bVar55;
          bVar20 = (bVar57 < bVar55) * bVar55 | (bVar57 >= bVar55) * bVar57;
          bVar21 = (bVar22 < bVar57) * bVar57 | (bVar22 >= bVar57) * bVar22;
          *pbVar8 = (bVar31 < bVar27) * bVar27 | (bVar31 >= bVar27) * bVar31;
          pbVar8[1] = (bVar33 < bVar29) * bVar29 | (bVar33 >= bVar29) * bVar33;
          pbVar8[2] = (bVar35 < bVar26) * bVar26 | (bVar35 >= bVar26) * bVar35;
          pbVar8[3] = (bVar37 < bVar28) * bVar28 | (bVar37 >= bVar28) * bVar37;
          pbVar8[4] = (bVar39 < bVar10) * bVar10 | (bVar39 >= bVar10) * bVar39;
          pbVar8[5] = (bVar41 < bVar11) * bVar11 | (bVar41 >= bVar11) * bVar41;
          pbVar8[6] = (bVar43 < bVar12) * bVar12 | (bVar43 >= bVar12) * bVar43;
          pbVar8[7] = (bVar45 < bVar13) * bVar13 | (bVar45 >= bVar13) * bVar45;
          pbVar8[8] = (bVar47 < bVar14) * bVar14 | (bVar47 >= bVar14) * bVar47;
          pbVar8[9] = (bVar49 < bVar15) * bVar15 | (bVar49 >= bVar15) * bVar49;
          pbVar8[10] = (bVar51 < bVar16) * bVar16 | (bVar51 >= bVar16) * bVar51;
          pbVar8[0xb] = (bVar53 < bVar17) * bVar17 | (bVar53 >= bVar17) * bVar53;
          pbVar8[0xc] = (bVar55 < bVar18) * bVar18 | (bVar55 >= bVar18) * bVar55;
          pbVar8[0xd] = (bVar57 < bVar19) * bVar19 | (bVar57 >= bVar19) * bVar57;
          pbVar8[0xe] = (bVar22 < bVar20) * bVar20 | (bVar22 >= bVar20) * bVar22;
          pbVar8[0xf] = (bVar23 < bVar21) * bVar21 | (bVar23 >= bVar21) * bVar23;
          pbVar8 = pbVar8 + 0x10;
          bVar27 = bVar22;
          bVar29 = bVar23;
          bVar31 = (bVar58 < bVar30) * bVar30 | (bVar58 >= bVar30) * bVar58;
          bVar33 = (bVar59 < bVar32) * bVar32 | (bVar59 >= bVar32) * bVar59;
          bVar35 = (bVar60 < bVar34) * bVar34 | (bVar60 >= bVar34) * bVar60;
          bVar37 = (bVar61 < bVar36) * bVar36 | (bVar61 >= bVar36) * bVar61;
          bVar39 = (bVar62 < bVar38) * bVar38 | (bVar62 >= bVar38) * bVar62;
          bVar41 = (bVar63 < bVar40) * bVar40 | (bVar63 >= bVar40) * bVar63;
          bVar43 = (bVar64 < bVar42) * bVar42 | (bVar64 >= bVar42) * bVar64;
          bVar45 = (bVar65 < bVar44) * bVar44 | (bVar65 >= bVar44) * bVar65;
          bVar47 = (bVar66 < bVar46) * bVar46 | (bVar66 >= bVar46) * bVar66;
          bVar49 = (bVar67 < bVar48) * bVar48 | (bVar67 >= bVar48) * bVar67;
          bVar51 = (bVar68 < bVar50) * bVar50 | (bVar68 >= bVar50) * bVar68;
          bVar53 = (bVar69 < bVar52) * bVar52 | (bVar69 >= bVar52) * bVar69;
          bVar55 = (bVar24 < bVar54) * bVar54 | (bVar24 >= bVar54) * bVar24;
          bVar57 = (bVar25 < bVar56) * bVar56 | (bVar25 >= bVar56) * bVar25;
        }
      }
      if ((uVar7 & 0xf) != 0) {
        FUN_140431940(pbVar5,param_2);
      }
      lVar6 = lVar6 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (lVar6 < param_6 + -1);
  }
  for (; lVar6 < param_6; lVar6 = lVar6 + 1) {
    uVar7 = param_5;
    pbVar5 = param_1;
    pbVar8 = param_3;
    if (((ulonglong)param_3 & 0xf) != 0) {
      uVar7 = 0x10 - ((ulonglong)param_3 & 0xf);
      if ((longlong)param_5 <= (longlong)uVar7) {
        uVar7 = param_5;
      }
      FUN_140431940(param_1,param_2,param_3,uVar7);
      pbVar5 = param_1 + uVar7;
      pbVar8 = param_3 + uVar7;
      uVar7 = param_5 - uVar7;
    }
    lVar4 = (longlong)uVar7 >> 4;
    if (lVar4 != 0) {
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
      lVar9 = 0;
      pbVar1 = pbVar5 + param_2;
      bVar26 = *pbVar1;
      bVar28 = pbVar1[1];
      bVar30 = pbVar1[2];
      bVar32 = pbVar1[3];
      bVar34 = pbVar1[4];
      bVar36 = pbVar1[5];
      bVar38 = pbVar1[6];
      bVar40 = pbVar1[7];
      bVar42 = pbVar1[8];
      bVar44 = pbVar1[9];
      bVar46 = pbVar1[10];
      bVar48 = pbVar1[0xb];
      bVar50 = pbVar1[0xc];
      bVar52 = pbVar1[0xd];
      bVar54 = pbVar1[0xe];
      bVar56 = pbVar1[0xf];
      bVar26 = (bVar27 < bVar26) * bVar26 | (bVar27 >= bVar26) * bVar27;
      bVar28 = (bVar29 < bVar28) * bVar28 | (bVar29 >= bVar28) * bVar29;
      bVar30 = (bVar31 < bVar30) * bVar30 | (bVar31 >= bVar30) * bVar31;
      bVar32 = (bVar33 < bVar32) * bVar32 | (bVar33 >= bVar32) * bVar33;
      bVar34 = (bVar35 < bVar34) * bVar34 | (bVar35 >= bVar34) * bVar35;
      bVar36 = (bVar37 < bVar36) * bVar36 | (bVar37 >= bVar36) * bVar37;
      bVar38 = (bVar39 < bVar38) * bVar38 | (bVar39 >= bVar38) * bVar39;
      bVar40 = (bVar41 < bVar40) * bVar40 | (bVar41 >= bVar40) * bVar41;
      bVar42 = (bVar43 < bVar42) * bVar42 | (bVar43 >= bVar42) * bVar43;
      bVar44 = (bVar45 < bVar44) * bVar44 | (bVar45 >= bVar44) * bVar45;
      bVar46 = (bVar47 < bVar46) * bVar46 | (bVar47 >= bVar46) * bVar47;
      bVar48 = (bVar49 < bVar48) * bVar48 | (bVar49 >= bVar48) * bVar49;
      bVar50 = (bVar51 < bVar50) * bVar50 | (bVar51 >= bVar50) * bVar51;
      bVar52 = (bVar53 < bVar52) * bVar52 | (bVar53 >= bVar52) * bVar53;
      bVar54 = (bVar55 < bVar54) * bVar54 | (bVar55 >= bVar54) * bVar55;
      bVar56 = (bVar57 < bVar56) * bVar56 | (bVar57 >= bVar56) * bVar57;
      pbVar1 = pbVar5 + param_2 * 2;
      bVar27 = *pbVar1;
      bVar29 = pbVar1[1];
      bVar31 = pbVar1[2];
      bVar33 = pbVar1[3];
      bVar35 = pbVar1[4];
      bVar37 = pbVar1[5];
      bVar39 = pbVar1[6];
      bVar41 = pbVar1[7];
      bVar43 = pbVar1[8];
      bVar45 = pbVar1[9];
      bVar47 = pbVar1[10];
      bVar49 = pbVar1[0xb];
      bVar51 = pbVar1[0xc];
      bVar53 = pbVar1[0xd];
      bVar55 = pbVar1[0xe];
      bVar57 = pbVar1[0xf];
      bVar27 = (bVar26 < bVar27) * bVar27 | (bVar26 >= bVar27) * bVar26;
      bVar29 = (bVar28 < bVar29) * bVar29 | (bVar28 >= bVar29) * bVar28;
      bVar31 = (bVar30 < bVar31) * bVar31 | (bVar30 >= bVar31) * bVar30;
      bVar33 = (bVar32 < bVar33) * bVar33 | (bVar32 >= bVar33) * bVar32;
      bVar35 = (bVar34 < bVar35) * bVar35 | (bVar34 >= bVar35) * bVar34;
      bVar37 = (bVar36 < bVar37) * bVar37 | (bVar36 >= bVar37) * bVar36;
      bVar39 = (bVar38 < bVar39) * bVar39 | (bVar38 >= bVar39) * bVar38;
      bVar41 = (bVar40 < bVar41) * bVar41 | (bVar40 >= bVar41) * bVar40;
      bVar43 = (bVar42 < bVar43) * bVar43 | (bVar42 >= bVar43) * bVar42;
      bVar45 = (bVar44 < bVar45) * bVar45 | (bVar44 >= bVar45) * bVar44;
      bVar47 = (bVar46 < bVar47) * bVar47 | (bVar46 >= bVar47) * bVar46;
      bVar49 = (bVar48 < bVar49) * bVar49 | (bVar48 >= bVar49) * bVar48;
      bVar51 = (bVar50 < bVar51) * bVar51 | (bVar50 >= bVar51) * bVar50;
      bVar53 = (bVar52 < bVar53) * bVar53 | (bVar52 >= bVar53) * bVar52;
      bVar55 = (bVar54 < bVar55) * bVar55 | (bVar54 >= bVar55) * bVar54;
      bVar57 = (bVar56 < bVar57) * bVar57 | (bVar56 >= bVar57) * bVar56;
      if (lVar4 != 2 && SCARRY8(lVar4,-2) == lVar4 + -2 < 0) {
        do {
          bVar26 = pbVar5[0x10];
          bVar28 = pbVar5[0x11];
          bVar30 = pbVar5[0x12];
          bVar32 = pbVar5[0x13];
          bVar34 = pbVar5[0x14];
          bVar36 = pbVar5[0x15];
          bVar38 = pbVar5[0x16];
          bVar40 = pbVar5[0x17];
          bVar42 = pbVar5[0x18];
          bVar44 = pbVar5[0x19];
          bVar46 = pbVar5[0x1a];
          bVar48 = pbVar5[0x1b];
          bVar50 = pbVar5[0x1c];
          bVar52 = pbVar5[0x1d];
          bVar54 = pbVar5[0x1e];
          bVar56 = pbVar5[0x1f];
          lVar9 = lVar9 + 2;
          pbVar1 = pbVar5 + param_2 + 0x10;
          bVar10 = *pbVar1;
          bVar11 = pbVar1[1];
          bVar12 = pbVar1[2];
          bVar13 = pbVar1[3];
          bVar14 = pbVar1[4];
          bVar15 = pbVar1[5];
          bVar16 = pbVar1[6];
          bVar17 = pbVar1[7];
          bVar18 = pbVar1[8];
          bVar19 = pbVar1[9];
          bVar20 = pbVar1[10];
          bVar21 = pbVar1[0xb];
          bVar22 = pbVar1[0xc];
          bVar23 = pbVar1[0xd];
          bVar24 = pbVar1[0xe];
          bVar25 = pbVar1[0xf];
          bVar10 = (bVar26 < bVar10) * bVar10 | (bVar26 >= bVar10) * bVar26;
          bVar11 = (bVar28 < bVar11) * bVar11 | (bVar28 >= bVar11) * bVar28;
          bVar12 = (bVar30 < bVar12) * bVar12 | (bVar30 >= bVar12) * bVar30;
          bVar13 = (bVar32 < bVar13) * bVar13 | (bVar32 >= bVar13) * bVar32;
          bVar14 = (bVar34 < bVar14) * bVar14 | (bVar34 >= bVar14) * bVar34;
          bVar15 = (bVar36 < bVar15) * bVar15 | (bVar36 >= bVar15) * bVar36;
          bVar16 = (bVar38 < bVar16) * bVar16 | (bVar38 >= bVar16) * bVar38;
          bVar17 = (bVar40 < bVar17) * bVar17 | (bVar40 >= bVar17) * bVar40;
          bVar18 = (bVar42 < bVar18) * bVar18 | (bVar42 >= bVar18) * bVar42;
          bVar19 = (bVar44 < bVar19) * bVar19 | (bVar44 >= bVar19) * bVar44;
          bVar20 = (bVar46 < bVar20) * bVar20 | (bVar46 >= bVar20) * bVar46;
          bVar21 = (bVar48 < bVar21) * bVar21 | (bVar48 >= bVar21) * bVar48;
          bVar22 = (bVar50 < bVar22) * bVar22 | (bVar50 >= bVar22) * bVar50;
          bVar23 = (bVar52 < bVar23) * bVar23 | (bVar52 >= bVar23) * bVar52;
          bVar24 = (bVar54 < bVar24) * bVar24 | (bVar54 >= bVar24) * bVar54;
          bVar25 = (bVar56 < bVar25) * bVar25 | (bVar56 >= bVar25) * bVar56;
          pbVar1 = pbVar5 + param_2 * 2 + 0x10;
          bVar26 = *pbVar1;
          bVar28 = pbVar1[1];
          bVar30 = pbVar1[2];
          bVar32 = pbVar1[3];
          bVar34 = pbVar1[4];
          bVar36 = pbVar1[5];
          bVar38 = pbVar1[6];
          bVar40 = pbVar1[7];
          bVar42 = pbVar1[8];
          bVar44 = pbVar1[9];
          bVar46 = pbVar1[10];
          bVar48 = pbVar1[0xb];
          bVar50 = pbVar1[0xc];
          bVar52 = pbVar1[0xd];
          bVar54 = pbVar1[0xe];
          bVar56 = pbVar1[0xf];
          bVar10 = (bVar10 < bVar26) * bVar26 | (bVar10 >= bVar26) * bVar10;
          bVar11 = (bVar11 < bVar28) * bVar28 | (bVar11 >= bVar28) * bVar11;
          bVar12 = (bVar12 < bVar30) * bVar30 | (bVar12 >= bVar30) * bVar12;
          bVar13 = (bVar13 < bVar32) * bVar32 | (bVar13 >= bVar32) * bVar13;
          bVar14 = (bVar14 < bVar34) * bVar34 | (bVar14 >= bVar34) * bVar14;
          bVar15 = (bVar15 < bVar36) * bVar36 | (bVar15 >= bVar36) * bVar15;
          bVar16 = (bVar16 < bVar38) * bVar38 | (bVar16 >= bVar38) * bVar16;
          bVar17 = (bVar17 < bVar40) * bVar40 | (bVar17 >= bVar40) * bVar17;
          bVar18 = (bVar18 < bVar42) * bVar42 | (bVar18 >= bVar42) * bVar18;
          bVar19 = (bVar19 < bVar44) * bVar44 | (bVar19 >= bVar44) * bVar19;
          bVar20 = (bVar20 < bVar46) * bVar46 | (bVar20 >= bVar46) * bVar20;
          bVar21 = (bVar21 < bVar48) * bVar48 | (bVar21 >= bVar48) * bVar21;
          bVar22 = (bVar22 < bVar50) * bVar50 | (bVar22 >= bVar50) * bVar22;
          bVar23 = (bVar23 < bVar52) * bVar52 | (bVar23 >= bVar52) * bVar23;
          bVar24 = (bVar24 < bVar54) * bVar54 | (bVar24 >= bVar54) * bVar24;
          bVar25 = (bVar25 < bVar56) * bVar56 | (bVar25 >= bVar56) * bVar25;
          bVar27 = (bVar29 < bVar27) * bVar27 | (bVar29 >= bVar27) * bVar29;
          bVar29 = (bVar31 < bVar29) * bVar29 | (bVar31 >= bVar29) * bVar31;
          bVar26 = (bVar33 < bVar31) * bVar31 | (bVar33 >= bVar31) * bVar33;
          bVar28 = (bVar35 < bVar33) * bVar33 | (bVar35 >= bVar33) * bVar35;
          bVar30 = (bVar37 < bVar35) * bVar35 | (bVar37 >= bVar35) * bVar37;
          bVar32 = (bVar39 < bVar37) * bVar37 | (bVar39 >= bVar37) * bVar39;
          bVar34 = (bVar41 < bVar39) * bVar39 | (bVar41 >= bVar39) * bVar41;
          bVar36 = (bVar43 < bVar41) * bVar41 | (bVar43 >= bVar41) * bVar43;
          bVar38 = (bVar45 < bVar43) * bVar43 | (bVar45 >= bVar43) * bVar45;
          bVar40 = (bVar47 < bVar45) * bVar45 | (bVar47 >= bVar45) * bVar47;
          bVar42 = (bVar49 < bVar47) * bVar47 | (bVar49 >= bVar47) * bVar49;
          bVar44 = (bVar51 < bVar49) * bVar49 | (bVar51 >= bVar49) * bVar51;
          bVar46 = (bVar53 < bVar51) * bVar51 | (bVar53 >= bVar51) * bVar53;
          bVar48 = (bVar55 < bVar53) * bVar53 | (bVar55 >= bVar53) * bVar55;
          bVar50 = (bVar57 < bVar55) * bVar55 | (bVar57 >= bVar55) * bVar57;
          bVar52 = (bVar10 < bVar57) * bVar57 | (bVar10 >= bVar57) * bVar10;
          *pbVar8 = (bVar31 < bVar27) * bVar27 | (bVar31 >= bVar27) * bVar31;
          pbVar8[1] = (bVar33 < bVar29) * bVar29 | (bVar33 >= bVar29) * bVar33;
          pbVar8[2] = (bVar35 < bVar26) * bVar26 | (bVar35 >= bVar26) * bVar35;
          pbVar8[3] = (bVar37 < bVar28) * bVar28 | (bVar37 >= bVar28) * bVar37;
          pbVar8[4] = (bVar39 < bVar30) * bVar30 | (bVar39 >= bVar30) * bVar39;
          pbVar8[5] = (bVar41 < bVar32) * bVar32 | (bVar41 >= bVar32) * bVar41;
          pbVar8[6] = (bVar43 < bVar34) * bVar34 | (bVar43 >= bVar34) * bVar43;
          pbVar8[7] = (bVar45 < bVar36) * bVar36 | (bVar45 >= bVar36) * bVar45;
          pbVar8[8] = (bVar47 < bVar38) * bVar38 | (bVar47 >= bVar38) * bVar47;
          pbVar8[9] = (bVar49 < bVar40) * bVar40 | (bVar49 >= bVar40) * bVar49;
          pbVar8[10] = (bVar51 < bVar42) * bVar42 | (bVar51 >= bVar42) * bVar51;
          pbVar8[0xb] = (bVar53 < bVar44) * bVar44 | (bVar53 >= bVar44) * bVar53;
          pbVar8[0xc] = (bVar55 < bVar46) * bVar46 | (bVar55 >= bVar46) * bVar55;
          pbVar8[0xd] = (bVar57 < bVar48) * bVar48 | (bVar57 >= bVar48) * bVar57;
          pbVar8[0xe] = (bVar10 < bVar50) * bVar50 | (bVar10 >= bVar50) * bVar10;
          pbVar8[0xf] = (bVar11 < bVar52) * bVar52 | (bVar11 >= bVar52) * bVar11;
          bVar27 = pbVar5[0x20];
          bVar29 = pbVar5[0x21];
          bVar31 = pbVar5[0x22];
          bVar33 = pbVar5[0x23];
          bVar35 = pbVar5[0x24];
          bVar37 = pbVar5[0x25];
          bVar39 = pbVar5[0x26];
          bVar41 = pbVar5[0x27];
          bVar43 = pbVar5[0x28];
          bVar45 = pbVar5[0x29];
          bVar47 = pbVar5[0x2a];
          bVar49 = pbVar5[0x2b];
          bVar51 = pbVar5[0x2c];
          bVar53 = pbVar5[0x2d];
          bVar55 = pbVar5[0x2e];
          bVar57 = pbVar5[0x2f];
          pbVar1 = pbVar5 + param_2 + 0x20;
          bVar26 = *pbVar1;
          bVar28 = pbVar1[1];
          bVar30 = pbVar1[2];
          bVar32 = pbVar1[3];
          bVar34 = pbVar1[4];
          bVar36 = pbVar1[5];
          bVar38 = pbVar1[6];
          bVar40 = pbVar1[7];
          bVar42 = pbVar1[8];
          bVar44 = pbVar1[9];
          bVar46 = pbVar1[10];
          bVar48 = pbVar1[0xb];
          bVar50 = pbVar1[0xc];
          bVar52 = pbVar1[0xd];
          bVar54 = pbVar1[0xe];
          bVar56 = pbVar1[0xf];
          bVar26 = (bVar27 < bVar26) * bVar26 | (bVar27 >= bVar26) * bVar27;
          bVar28 = (bVar29 < bVar28) * bVar28 | (bVar29 >= bVar28) * bVar29;
          bVar30 = (bVar31 < bVar30) * bVar30 | (bVar31 >= bVar30) * bVar31;
          bVar32 = (bVar33 < bVar32) * bVar32 | (bVar33 >= bVar32) * bVar33;
          bVar34 = (bVar35 < bVar34) * bVar34 | (bVar35 >= bVar34) * bVar35;
          bVar36 = (bVar37 < bVar36) * bVar36 | (bVar37 >= bVar36) * bVar37;
          bVar38 = (bVar39 < bVar38) * bVar38 | (bVar39 >= bVar38) * bVar39;
          bVar40 = (bVar41 < bVar40) * bVar40 | (bVar41 >= bVar40) * bVar41;
          bVar42 = (bVar43 < bVar42) * bVar42 | (bVar43 >= bVar42) * bVar43;
          bVar44 = (bVar45 < bVar44) * bVar44 | (bVar45 >= bVar44) * bVar45;
          bVar46 = (bVar47 < bVar46) * bVar46 | (bVar47 >= bVar46) * bVar47;
          bVar48 = (bVar49 < bVar48) * bVar48 | (bVar49 >= bVar48) * bVar49;
          bVar50 = (bVar51 < bVar50) * bVar50 | (bVar51 >= bVar50) * bVar51;
          bVar52 = (bVar53 < bVar52) * bVar52 | (bVar53 >= bVar52) * bVar53;
          bVar54 = (bVar55 < bVar54) * bVar54 | (bVar55 >= bVar54) * bVar55;
          bVar56 = (bVar57 < bVar56) * bVar56 | (bVar57 >= bVar56) * bVar57;
          pbVar1 = pbVar5 + param_2 * 2 + 0x20;
          bVar27 = *pbVar1;
          bVar29 = pbVar1[1];
          bVar31 = pbVar1[2];
          bVar33 = pbVar1[3];
          bVar35 = pbVar1[4];
          bVar37 = pbVar1[5];
          bVar39 = pbVar1[6];
          bVar41 = pbVar1[7];
          bVar43 = pbVar1[8];
          bVar45 = pbVar1[9];
          bVar47 = pbVar1[10];
          bVar49 = pbVar1[0xb];
          bVar51 = pbVar1[0xc];
          bVar53 = pbVar1[0xd];
          bVar55 = pbVar1[0xe];
          bVar57 = pbVar1[0xf];
          pbVar5 = pbVar5 + 0x20;
          bVar27 = (bVar26 < bVar27) * bVar27 | (bVar26 >= bVar27) * bVar26;
          bVar29 = (bVar28 < bVar29) * bVar29 | (bVar28 >= bVar29) * bVar28;
          bVar31 = (bVar30 < bVar31) * bVar31 | (bVar30 >= bVar31) * bVar30;
          bVar33 = (bVar32 < bVar33) * bVar33 | (bVar32 >= bVar33) * bVar32;
          bVar35 = (bVar34 < bVar35) * bVar35 | (bVar34 >= bVar35) * bVar34;
          bVar37 = (bVar36 < bVar37) * bVar37 | (bVar36 >= bVar37) * bVar36;
          bVar39 = (bVar38 < bVar39) * bVar39 | (bVar38 >= bVar39) * bVar38;
          bVar41 = (bVar40 < bVar41) * bVar41 | (bVar40 >= bVar41) * bVar40;
          bVar43 = (bVar42 < bVar43) * bVar43 | (bVar42 >= bVar43) * bVar42;
          bVar45 = (bVar44 < bVar45) * bVar45 | (bVar44 >= bVar45) * bVar44;
          bVar47 = (bVar46 < bVar47) * bVar47 | (bVar46 >= bVar47) * bVar46;
          bVar49 = (bVar48 < bVar49) * bVar49 | (bVar48 >= bVar49) * bVar48;
          bVar51 = (bVar50 < bVar51) * bVar51 | (bVar50 >= bVar51) * bVar50;
          bVar53 = (bVar52 < bVar53) * bVar53 | (bVar52 >= bVar53) * bVar52;
          bVar55 = (bVar54 < bVar55) * bVar55 | (bVar54 >= bVar55) * bVar54;
          bVar57 = (bVar56 < bVar57) * bVar57 | (bVar56 >= bVar57) * bVar56;
          bVar26 = (bVar11 < bVar10) * bVar10 | (bVar11 >= bVar10) * bVar11;
          bVar28 = (bVar12 < bVar11) * bVar11 | (bVar12 >= bVar11) * bVar12;
          bVar30 = (bVar13 < bVar12) * bVar12 | (bVar13 >= bVar12) * bVar13;
          bVar32 = (bVar14 < bVar13) * bVar13 | (bVar14 >= bVar13) * bVar14;
          bVar34 = (bVar15 < bVar14) * bVar14 | (bVar15 >= bVar14) * bVar15;
          bVar36 = (bVar16 < bVar15) * bVar15 | (bVar16 >= bVar15) * bVar16;
          bVar38 = (bVar17 < bVar16) * bVar16 | (bVar17 >= bVar16) * bVar17;
          bVar40 = (bVar18 < bVar17) * bVar17 | (bVar18 >= bVar17) * bVar18;
          bVar42 = (bVar19 < bVar18) * bVar18 | (bVar19 >= bVar18) * bVar19;
          bVar44 = (bVar20 < bVar19) * bVar19 | (bVar20 >= bVar19) * bVar20;
          bVar46 = (bVar21 < bVar20) * bVar20 | (bVar21 >= bVar20) * bVar21;
          bVar48 = (bVar22 < bVar21) * bVar21 | (bVar22 >= bVar21) * bVar22;
          bVar50 = (bVar23 < bVar22) * bVar22 | (bVar23 >= bVar22) * bVar23;
          bVar52 = (bVar24 < bVar23) * bVar23 | (bVar24 >= bVar23) * bVar24;
          bVar54 = (bVar25 < bVar24) * bVar24 | (bVar25 >= bVar24) * bVar25;
          bVar56 = (bVar27 < bVar25) * bVar25 | (bVar27 >= bVar25) * bVar27;
          pbVar8[0x10] = (bVar12 < bVar26) * bVar26 | (bVar12 >= bVar26) * bVar12;
          pbVar8[0x11] = (bVar13 < bVar28) * bVar28 | (bVar13 >= bVar28) * bVar13;
          pbVar8[0x12] = (bVar14 < bVar30) * bVar30 | (bVar14 >= bVar30) * bVar14;
          pbVar8[0x13] = (bVar15 < bVar32) * bVar32 | (bVar15 >= bVar32) * bVar15;
          pbVar8[0x14] = (bVar16 < bVar34) * bVar34 | (bVar16 >= bVar34) * bVar16;
          pbVar8[0x15] = (bVar17 < bVar36) * bVar36 | (bVar17 >= bVar36) * bVar17;
          pbVar8[0x16] = (bVar18 < bVar38) * bVar38 | (bVar18 >= bVar38) * bVar18;
          pbVar8[0x17] = (bVar19 < bVar40) * bVar40 | (bVar19 >= bVar40) * bVar19;
          pbVar8[0x18] = (bVar20 < bVar42) * bVar42 | (bVar20 >= bVar42) * bVar20;
          pbVar8[0x19] = (bVar21 < bVar44) * bVar44 | (bVar21 >= bVar44) * bVar21;
          pbVar8[0x1a] = (bVar22 < bVar46) * bVar46 | (bVar22 >= bVar46) * bVar22;
          pbVar8[0x1b] = (bVar23 < bVar48) * bVar48 | (bVar23 >= bVar48) * bVar23;
          pbVar8[0x1c] = (bVar24 < bVar50) * bVar50 | (bVar24 >= bVar50) * bVar24;
          pbVar8[0x1d] = (bVar25 < bVar52) * bVar52 | (bVar25 >= bVar52) * bVar25;
          pbVar8[0x1e] = (bVar27 < bVar54) * bVar54 | (bVar27 >= bVar54) * bVar27;
          pbVar8[0x1f] = (bVar29 < bVar56) * bVar56 | (bVar29 >= bVar56) * bVar29;
          pbVar8 = pbVar8 + 0x20;
        } while (lVar9 < lVar4 + -2);
      }
      for (; lVar9 < lVar4 + -1; lVar9 = lVar9 + 1) {
        bVar26 = pbVar5[0x10];
        bVar28 = pbVar5[0x11];
        bVar30 = pbVar5[0x12];
        bVar32 = pbVar5[0x13];
        bVar34 = pbVar5[0x14];
        bVar36 = pbVar5[0x15];
        bVar38 = pbVar5[0x16];
        bVar40 = pbVar5[0x17];
        bVar42 = pbVar5[0x18];
        bVar44 = pbVar5[0x19];
        bVar46 = pbVar5[0x1a];
        bVar48 = pbVar5[0x1b];
        bVar50 = pbVar5[0x1c];
        bVar52 = pbVar5[0x1d];
        bVar54 = pbVar5[0x1e];
        bVar56 = pbVar5[0x1f];
        pbVar1 = pbVar5 + param_2 + 0x10;
        bVar10 = *pbVar1;
        bVar11 = pbVar1[1];
        bVar12 = pbVar1[2];
        bVar13 = pbVar1[3];
        bVar14 = pbVar1[4];
        bVar15 = pbVar1[5];
        bVar16 = pbVar1[6];
        bVar17 = pbVar1[7];
        bVar18 = pbVar1[8];
        bVar19 = pbVar1[9];
        bVar20 = pbVar1[10];
        bVar21 = pbVar1[0xb];
        bVar22 = pbVar1[0xc];
        bVar23 = pbVar1[0xd];
        bVar24 = pbVar1[0xe];
        bVar25 = pbVar1[0xf];
        bVar10 = (bVar26 < bVar10) * bVar10 | (bVar26 >= bVar10) * bVar26;
        bVar11 = (bVar28 < bVar11) * bVar11 | (bVar28 >= bVar11) * bVar28;
        bVar58 = (bVar30 < bVar12) * bVar12 | (bVar30 >= bVar12) * bVar30;
        bVar59 = (bVar32 < bVar13) * bVar13 | (bVar32 >= bVar13) * bVar32;
        bVar60 = (bVar34 < bVar14) * bVar14 | (bVar34 >= bVar14) * bVar34;
        bVar61 = (bVar36 < bVar15) * bVar15 | (bVar36 >= bVar15) * bVar36;
        bVar62 = (bVar38 < bVar16) * bVar16 | (bVar38 >= bVar16) * bVar38;
        bVar63 = (bVar40 < bVar17) * bVar17 | (bVar40 >= bVar17) * bVar40;
        bVar64 = (bVar42 < bVar18) * bVar18 | (bVar42 >= bVar18) * bVar42;
        bVar65 = (bVar44 < bVar19) * bVar19 | (bVar44 >= bVar19) * bVar44;
        bVar66 = (bVar46 < bVar20) * bVar20 | (bVar46 >= bVar20) * bVar46;
        bVar67 = (bVar48 < bVar21) * bVar21 | (bVar48 >= bVar21) * bVar48;
        bVar68 = (bVar50 < bVar22) * bVar22 | (bVar50 >= bVar22) * bVar50;
        bVar69 = (bVar52 < bVar23) * bVar23 | (bVar52 >= bVar23) * bVar52;
        bVar24 = (bVar54 < bVar24) * bVar24 | (bVar54 >= bVar24) * bVar54;
        bVar25 = (bVar56 < bVar25) * bVar25 | (bVar56 >= bVar25) * bVar56;
        pbVar1 = pbVar5 + param_2 * 2 + 0x10;
        bVar26 = *pbVar1;
        bVar28 = pbVar1[1];
        bVar30 = pbVar1[2];
        bVar32 = pbVar1[3];
        bVar34 = pbVar1[4];
        bVar36 = pbVar1[5];
        bVar38 = pbVar1[6];
        bVar40 = pbVar1[7];
        bVar42 = pbVar1[8];
        bVar44 = pbVar1[9];
        bVar46 = pbVar1[10];
        bVar48 = pbVar1[0xb];
        bVar50 = pbVar1[0xc];
        bVar52 = pbVar1[0xd];
        bVar54 = pbVar1[0xe];
        bVar56 = pbVar1[0xf];
        pbVar5 = pbVar5 + 0x10;
        bVar22 = (bVar10 < bVar26) * bVar26 | (bVar10 >= bVar26) * bVar10;
        bVar23 = (bVar11 < bVar28) * bVar28 | (bVar11 >= bVar28) * bVar11;
        bVar27 = (bVar29 < bVar27) * bVar27 | (bVar29 >= bVar27) * bVar29;
        bVar29 = (bVar31 < bVar29) * bVar29 | (bVar31 >= bVar29) * bVar31;
        bVar26 = (bVar33 < bVar31) * bVar31 | (bVar33 >= bVar31) * bVar33;
        bVar28 = (bVar35 < bVar33) * bVar33 | (bVar35 >= bVar33) * bVar35;
        bVar10 = (bVar37 < bVar35) * bVar35 | (bVar37 >= bVar35) * bVar37;
        bVar11 = (bVar39 < bVar37) * bVar37 | (bVar39 >= bVar37) * bVar39;
        bVar12 = (bVar41 < bVar39) * bVar39 | (bVar41 >= bVar39) * bVar41;
        bVar13 = (bVar43 < bVar41) * bVar41 | (bVar43 >= bVar41) * bVar43;
        bVar14 = (bVar45 < bVar43) * bVar43 | (bVar45 >= bVar43) * bVar45;
        bVar15 = (bVar47 < bVar45) * bVar45 | (bVar47 >= bVar45) * bVar47;
        bVar16 = (bVar49 < bVar47) * bVar47 | (bVar49 >= bVar47) * bVar49;
        bVar17 = (bVar51 < bVar49) * bVar49 | (bVar51 >= bVar49) * bVar51;
        bVar18 = (bVar53 < bVar51) * bVar51 | (bVar53 >= bVar51) * bVar53;
        bVar19 = (bVar55 < bVar53) * bVar53 | (bVar55 >= bVar53) * bVar55;
        bVar20 = (bVar57 < bVar55) * bVar55 | (bVar57 >= bVar55) * bVar57;
        bVar21 = (bVar22 < bVar57) * bVar57 | (bVar22 >= bVar57) * bVar22;
        *pbVar8 = (bVar31 < bVar27) * bVar27 | (bVar31 >= bVar27) * bVar31;
        pbVar8[1] = (bVar33 < bVar29) * bVar29 | (bVar33 >= bVar29) * bVar33;
        pbVar8[2] = (bVar35 < bVar26) * bVar26 | (bVar35 >= bVar26) * bVar35;
        pbVar8[3] = (bVar37 < bVar28) * bVar28 | (bVar37 >= bVar28) * bVar37;
        pbVar8[4] = (bVar39 < bVar10) * bVar10 | (bVar39 >= bVar10) * bVar39;
        pbVar8[5] = (bVar41 < bVar11) * bVar11 | (bVar41 >= bVar11) * bVar41;
        pbVar8[6] = (bVar43 < bVar12) * bVar12 | (bVar43 >= bVar12) * bVar43;
        pbVar8[7] = (bVar45 < bVar13) * bVar13 | (bVar45 >= bVar13) * bVar45;
        pbVar8[8] = (bVar47 < bVar14) * bVar14 | (bVar47 >= bVar14) * bVar47;
        pbVar8[9] = (bVar49 < bVar15) * bVar15 | (bVar49 >= bVar15) * bVar49;
        pbVar8[10] = (bVar51 < bVar16) * bVar16 | (bVar51 >= bVar16) * bVar51;
        pbVar8[0xb] = (bVar53 < bVar17) * bVar17 | (bVar53 >= bVar17) * bVar53;
        pbVar8[0xc] = (bVar55 < bVar18) * bVar18 | (bVar55 >= bVar18) * bVar55;
        pbVar8[0xd] = (bVar57 < bVar19) * bVar19 | (bVar57 >= bVar19) * bVar57;
        pbVar8[0xe] = (bVar22 < bVar20) * bVar20 | (bVar22 >= bVar20) * bVar22;
        pbVar8[0xf] = (bVar23 < bVar21) * bVar21 | (bVar23 >= bVar21) * bVar23;
        pbVar8 = pbVar8 + 0x10;
        bVar27 = bVar22;
        bVar29 = bVar23;
        bVar31 = (bVar58 < bVar30) * bVar30 | (bVar58 >= bVar30) * bVar58;
        bVar33 = (bVar59 < bVar32) * bVar32 | (bVar59 >= bVar32) * bVar59;
        bVar35 = (bVar60 < bVar34) * bVar34 | (bVar60 >= bVar34) * bVar60;
        bVar37 = (bVar61 < bVar36) * bVar36 | (bVar61 >= bVar36) * bVar61;
        bVar39 = (bVar62 < bVar38) * bVar38 | (bVar62 >= bVar38) * bVar62;
        bVar41 = (bVar63 < bVar40) * bVar40 | (bVar63 >= bVar40) * bVar63;
        bVar43 = (bVar64 < bVar42) * bVar42 | (bVar64 >= bVar42) * bVar64;
        bVar45 = (bVar65 < bVar44) * bVar44 | (bVar65 >= bVar44) * bVar65;
        bVar47 = (bVar66 < bVar46) * bVar46 | (bVar66 >= bVar46) * bVar66;
        bVar49 = (bVar67 < bVar48) * bVar48 | (bVar67 >= bVar48) * bVar67;
        bVar51 = (bVar68 < bVar50) * bVar50 | (bVar68 >= bVar50) * bVar68;
        bVar53 = (bVar69 < bVar52) * bVar52 | (bVar69 >= bVar52) * bVar69;
        bVar55 = (bVar24 < bVar54) * bVar54 | (bVar24 >= bVar54) * bVar24;
        bVar57 = (bVar25 < bVar56) * bVar56 | (bVar25 >= bVar56) * bVar25;
      }
      pbVar1 = pbVar5 + 0x10;
      pbVar2 = pbVar5 + param_2 + 0x10;
      pbVar3 = pbVar5 + param_2 * 2 + 0x10;
      pbVar5 = pbVar5 + 0x10;
      bVar26 = (byte)*(undefined2 *)pbVar2;
      bVar30 = (byte)*(undefined2 *)pbVar1;
      bVar28 = (byte)((ushort)*(undefined2 *)pbVar1 >> 8);
      bVar30 = (bVar30 < bVar26) * bVar26 | (bVar30 >= bVar26) * bVar30;
      bVar26 = (byte)((ushort)*(undefined2 *)pbVar2 >> 8);
      bVar32 = (bVar28 < bVar26) * bVar26 | (bVar28 >= bVar26) * bVar28;
      bVar26 = (byte)*(undefined2 *)pbVar3;
      bVar28 = (bVar30 < bVar26) * bVar26 | (bVar30 >= bVar26) * bVar30;
      bVar26 = (byte)((ushort)*(undefined2 *)pbVar3 >> 8);
      bVar26 = (bVar32 < bVar26) * bVar26 | (bVar32 >= bVar26) * bVar32;
      bVar27 = (bVar29 < bVar27) * bVar27 | (bVar29 >= bVar27) * bVar29;
      bVar29 = (bVar31 < bVar29) * bVar29 | (bVar31 >= bVar29) * bVar31;
      bVar30 = (bVar33 < bVar31) * bVar31 | (bVar33 >= bVar31) * bVar33;
      bVar32 = (bVar35 < bVar33) * bVar33 | (bVar35 >= bVar33) * bVar35;
      bVar34 = (bVar37 < bVar35) * bVar35 | (bVar37 >= bVar35) * bVar37;
      bVar36 = (bVar39 < bVar37) * bVar37 | (bVar39 >= bVar37) * bVar39;
      bVar38 = (bVar41 < bVar39) * bVar39 | (bVar41 >= bVar39) * bVar41;
      bVar40 = (bVar43 < bVar41) * bVar41 | (bVar43 >= bVar41) * bVar43;
      bVar42 = (bVar45 < bVar43) * bVar43 | (bVar45 >= bVar43) * bVar45;
      bVar44 = (bVar47 < bVar45) * bVar45 | (bVar47 >= bVar45) * bVar47;
      bVar46 = (bVar49 < bVar47) * bVar47 | (bVar49 >= bVar47) * bVar49;
      bVar48 = (bVar51 < bVar49) * bVar49 | (bVar51 >= bVar49) * bVar51;
      bVar50 = (bVar53 < bVar51) * bVar51 | (bVar53 >= bVar51) * bVar53;
      bVar52 = (bVar55 < bVar53) * bVar53 | (bVar55 >= bVar53) * bVar55;
      bVar54 = (bVar57 < bVar55) * bVar55 | (bVar57 >= bVar55) * bVar57;
      bVar56 = (bVar28 < bVar57) * bVar57 | (bVar28 >= bVar57) * bVar28;
      *pbVar8 = (bVar31 < bVar27) * bVar27 | (bVar31 >= bVar27) * bVar31;
      pbVar8[1] = (bVar33 < bVar29) * bVar29 | (bVar33 >= bVar29) * bVar33;
      pbVar8[2] = (bVar35 < bVar30) * bVar30 | (bVar35 >= bVar30) * bVar35;
      pbVar8[3] = (bVar37 < bVar32) * bVar32 | (bVar37 >= bVar32) * bVar37;
      pbVar8[4] = (bVar39 < bVar34) * bVar34 | (bVar39 >= bVar34) * bVar39;
      pbVar8[5] = (bVar41 < bVar36) * bVar36 | (bVar41 >= bVar36) * bVar41;
      pbVar8[6] = (bVar43 < bVar38) * bVar38 | (bVar43 >= bVar38) * bVar43;
      pbVar8[7] = (bVar45 < bVar40) * bVar40 | (bVar45 >= bVar40) * bVar45;
      pbVar8[8] = (bVar47 < bVar42) * bVar42 | (bVar47 >= bVar42) * bVar47;
      pbVar8[9] = (bVar49 < bVar44) * bVar44 | (bVar49 >= bVar44) * bVar49;
      pbVar8[10] = (bVar51 < bVar46) * bVar46 | (bVar51 >= bVar46) * bVar51;
      pbVar8[0xb] = (bVar53 < bVar48) * bVar48 | (bVar53 >= bVar48) * bVar53;
      pbVar8[0xc] = (bVar55 < bVar50) * bVar50 | (bVar55 >= bVar50) * bVar55;
      pbVar8[0xd] = (bVar57 < bVar52) * bVar52 | (bVar57 >= bVar52) * bVar57;
      pbVar8[0xe] = (bVar28 < bVar54) * bVar54 | (bVar28 >= bVar54) * bVar28;
      pbVar8[0xf] = (bVar26 < bVar56) * bVar56 | (bVar26 >= bVar56) * bVar26;
      pbVar8 = pbVar8 + 0x10;
    }
    if ((uVar7 & 0xf) != 0) {
      FUN_140431940(pbVar5,param_2,pbVar8);
    }
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
  }
  return;
}


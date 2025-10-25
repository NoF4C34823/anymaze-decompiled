
void FUN_1403e2c80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,ulonglong param_7,undefined8 param_8,
                  byte *param_9)

{
  byte *pbVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  byte bVar9;
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
  byte *pbVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  byte *pbVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
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
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar57;
  undefined1 auVar58 [16];
  
  uVar32 = 0;
  uVar36 = *param_6;
  uVar34 = param_6[1];
  uVar4 = *param_5;
  uVar30 = uVar34 - 1;
  uVar37 = uVar4 + 0x1f & 0xffffffffffffffe0;
  lVar23 = (param_1 - (int)(uVar30 >> 1) * param_2) - (longlong)(int)(uVar36 - 1 >> 1);
  lVar28 = 0;
  lVar35 = 0;
  lVar25 = 0;
  if (param_7 == 0) {
    lVar28 = lVar23;
    pbVar27 = param_9;
    if (0 < (longlong)uVar30) {
      uVar33 = 0;
      do {
        if (0 < (longlong)uVar4) {
          uVar26 = lVar23 + lVar35;
          uVar38 = uVar33;
          do {
            bVar39 = 0xff;
            if (0 < (longlong)uVar36) {
              uVar29 = uVar33;
              if (0xf < (longlong)uVar36) {
                uVar24 = uVar26 & 0xf;
                if (uVar24 != 0) {
                  uVar24 = 0x10 - uVar24;
                }
                if ((longlong)(uVar24 + 0x10) <= (longlong)uVar36) {
                  uVar29 = uVar36 - (uVar36 - uVar24 & 0xf);
                  uVar31 = uVar33;
                  bVar40 = bVar39;
                  bVar41 = bVar39;
                  bVar42 = bVar39;
                  bVar43 = bVar39;
                  bVar44 = bVar39;
                  bVar45 = bVar39;
                  bVar46 = bVar39;
                  bVar47 = bVar39;
                  bVar48 = bVar39;
                  bVar49 = bVar39;
                  bVar50 = bVar39;
                  bVar51 = bVar39;
                  bVar52 = bVar39;
                  bVar53 = bVar39;
                  bVar54 = bVar39;
                  if (uVar24 != 0) {
                    do {
                      if (*(byte *)(uVar31 + uVar26) < bVar39) {
                        bVar39 = *(byte *)(uVar31 + uVar26);
                      }
                      uVar31 = uVar31 + 1;
                      bVar40 = bVar39;
                      bVar41 = bVar39;
                      bVar42 = bVar39;
                      bVar43 = bVar39;
                      bVar44 = bVar39;
                      bVar45 = bVar39;
                      bVar46 = bVar39;
                      bVar47 = bVar39;
                      bVar48 = bVar39;
                      bVar49 = bVar39;
                      bVar50 = bVar39;
                      bVar51 = bVar39;
                      bVar52 = bVar39;
                      bVar53 = bVar39;
                      bVar54 = bVar39;
                    } while (uVar31 < uVar24);
                  }
                  do {
                    pbVar27 = (byte *)(uVar26 + uVar24);
                    bVar5 = *pbVar27;
                    bVar7 = pbVar27[1];
                    bVar8 = pbVar27[2];
                    bVar9 = pbVar27[3];
                    bVar10 = pbVar27[4];
                    bVar11 = pbVar27[5];
                    bVar12 = pbVar27[6];
                    bVar13 = pbVar27[7];
                    bVar14 = pbVar27[8];
                    bVar15 = pbVar27[9];
                    bVar16 = pbVar27[10];
                    bVar17 = pbVar27[0xb];
                    bVar18 = pbVar27[0xc];
                    bVar19 = pbVar27[0xd];
                    bVar20 = pbVar27[0xe];
                    bVar21 = pbVar27[0xf];
                    bVar39 = (bVar5 < bVar39) * bVar5 | (bVar5 >= bVar39) * bVar39;
                    bVar40 = (bVar7 < bVar40) * bVar7 | (bVar7 >= bVar40) * bVar40;
                    bVar41 = (bVar8 < bVar41) * bVar8 | (bVar8 >= bVar41) * bVar41;
                    bVar42 = (bVar9 < bVar42) * bVar9 | (bVar9 >= bVar42) * bVar42;
                    bVar43 = (bVar10 < bVar43) * bVar10 | (bVar10 >= bVar43) * bVar43;
                    bVar44 = (bVar11 < bVar44) * bVar11 | (bVar11 >= bVar44) * bVar44;
                    bVar45 = (bVar12 < bVar45) * bVar12 | (bVar12 >= bVar45) * bVar45;
                    bVar46 = (bVar13 < bVar46) * bVar13 | (bVar13 >= bVar46) * bVar46;
                    bVar47 = (bVar14 < bVar47) * bVar14 | (bVar14 >= bVar47) * bVar47;
                    bVar48 = (bVar15 < bVar48) * bVar15 | (bVar15 >= bVar48) * bVar48;
                    bVar49 = (bVar16 < bVar49) * bVar16 | (bVar16 >= bVar49) * bVar49;
                    bVar50 = (bVar17 < bVar50) * bVar17 | (bVar17 >= bVar50) * bVar50;
                    bVar51 = (bVar18 < bVar51) * bVar18 | (bVar18 >= bVar51) * bVar51;
                    bVar52 = (bVar19 < bVar52) * bVar19 | (bVar19 >= bVar52) * bVar52;
                    bVar53 = (bVar20 < bVar53) * bVar20 | (bVar20 >= bVar53) * bVar53;
                    bVar54 = (bVar21 < bVar54) * bVar21 | (bVar21 >= bVar54) * bVar54;
                    uVar24 = uVar24 + 0x10;
                  } while (uVar24 < uVar29);
                  bVar39 = (bVar47 < bVar39) * bVar47 | (bVar47 >= bVar39) * bVar39;
                  bVar40 = (bVar48 < bVar40) * bVar48 | (bVar48 >= bVar40) * bVar40;
                  bVar41 = (bVar49 < bVar41) * bVar49 | (bVar49 >= bVar41) * bVar41;
                  bVar42 = (bVar50 < bVar42) * bVar50 | (bVar50 >= bVar42) * bVar42;
                  bVar43 = (bVar51 < bVar43) * bVar51 | (bVar51 >= bVar43) * bVar43;
                  bVar44 = (bVar52 < bVar44) * bVar52 | (bVar52 >= bVar44) * bVar44;
                  bVar45 = (bVar53 < bVar45) * bVar53 | (bVar53 >= bVar45) * bVar45;
                  bVar46 = (bVar54 < bVar46) * bVar54 | (bVar54 >= bVar46) * bVar46;
                  bVar39 = (bVar43 < bVar39) * bVar43 | (bVar43 >= bVar39) * bVar39;
                  bVar40 = (bVar44 < bVar40) * bVar44 | (bVar44 >= bVar40) * bVar40;
                  bVar41 = (bVar45 < bVar41) * bVar45 | (bVar45 >= bVar41) * bVar41;
                  bVar42 = (bVar46 < bVar42) * bVar46 | (bVar46 >= bVar42) * bVar42;
                  bVar39 = (bVar41 < bVar39) * bVar41 | (bVar41 >= bVar39) * bVar39;
                  bVar40 = (bVar42 < bVar40) * bVar42 | (bVar42 >= bVar40) * bVar40;
                  bVar39 = (bVar40 < bVar39) * bVar40 | (bVar40 >= bVar39) * bVar39;
                }
              }
              for (; uVar29 < uVar36; uVar29 = uVar29 + 1) {
                if (*(byte *)(uVar29 + uVar26) < bVar39) {
                  bVar39 = *(byte *)(uVar29 + uVar26);
                }
              }
            }
            param_9[uVar38 + lVar25] = bVar39;
            uVar38 = uVar38 + 1;
            uVar26 = uVar26 + 1;
          } while (uVar38 < uVar4);
        }
        uVar32 = uVar32 + 1;
        lVar28 = lVar35 + param_2 + lVar23;
        lVar35 = lVar35 + param_2;
        pbVar27 = param_9 + lVar25 + uVar37;
        lVar25 = lVar25 + uVar37;
      } while (uVar32 < uVar30);
    }
    if (0 < (longlong)param_5[1]) {
      lVar23 = 0;
      param_3 = param_3 - param_4;
      lVar25 = 0;
      do {
        param_3 = param_3 + param_4;
        lVar23 = lVar23 + 1;
        lVar25 = lVar25 + param_2;
        uVar36 = 0;
        if (0 < (longlong)uVar4) {
          uVar33 = (lVar25 - param_2) + lVar28;
          uVar32 = *param_6;
          uVar26 = 0;
          pbVar22 = pbVar27;
          do {
            bVar39 = 0xff;
            if (0 < (longlong)uVar32) {
              uVar38 = uVar26;
              if (0xf < (longlong)uVar32) {
                uVar29 = uVar33 & 0xf;
                if (uVar29 != 0) {
                  uVar29 = 0x10 - uVar29;
                }
                if ((longlong)(uVar29 + 0x10) <= (longlong)uVar32) {
                  uVar38 = uVar32 - (uVar32 - uVar29 & 0xf);
                  uVar24 = uVar26;
                  bVar40 = bVar39;
                  bVar41 = bVar39;
                  bVar42 = bVar39;
                  bVar43 = bVar39;
                  bVar44 = bVar39;
                  bVar45 = bVar39;
                  bVar46 = bVar39;
                  bVar47 = bVar39;
                  bVar48 = bVar39;
                  bVar49 = bVar39;
                  bVar50 = bVar39;
                  bVar51 = bVar39;
                  bVar52 = bVar39;
                  bVar53 = bVar39;
                  bVar54 = bVar39;
                  if (uVar29 != 0) {
                    do {
                      if (*(byte *)(uVar24 + uVar33) < bVar39) {
                        bVar39 = *(byte *)(uVar24 + uVar33);
                      }
                      uVar24 = uVar24 + 1;
                      bVar40 = bVar39;
                      bVar41 = bVar39;
                      bVar42 = bVar39;
                      bVar43 = bVar39;
                      bVar44 = bVar39;
                      bVar45 = bVar39;
                      bVar46 = bVar39;
                      bVar47 = bVar39;
                      bVar48 = bVar39;
                      bVar49 = bVar39;
                      bVar50 = bVar39;
                      bVar51 = bVar39;
                      bVar52 = bVar39;
                      bVar53 = bVar39;
                      bVar54 = bVar39;
                    } while (uVar24 < uVar29);
                  }
                  do {
                    pbVar1 = (byte *)(uVar33 + uVar29);
                    bVar5 = *pbVar1;
                    bVar7 = pbVar1[1];
                    bVar8 = pbVar1[2];
                    bVar9 = pbVar1[3];
                    bVar10 = pbVar1[4];
                    bVar11 = pbVar1[5];
                    bVar12 = pbVar1[6];
                    bVar13 = pbVar1[7];
                    bVar14 = pbVar1[8];
                    bVar15 = pbVar1[9];
                    bVar16 = pbVar1[10];
                    bVar17 = pbVar1[0xb];
                    bVar18 = pbVar1[0xc];
                    bVar19 = pbVar1[0xd];
                    bVar20 = pbVar1[0xe];
                    bVar21 = pbVar1[0xf];
                    bVar39 = (bVar5 < bVar39) * bVar5 | (bVar5 >= bVar39) * bVar39;
                    bVar40 = (bVar7 < bVar40) * bVar7 | (bVar7 >= bVar40) * bVar40;
                    bVar41 = (bVar8 < bVar41) * bVar8 | (bVar8 >= bVar41) * bVar41;
                    bVar42 = (bVar9 < bVar42) * bVar9 | (bVar9 >= bVar42) * bVar42;
                    bVar43 = (bVar10 < bVar43) * bVar10 | (bVar10 >= bVar43) * bVar43;
                    bVar44 = (bVar11 < bVar44) * bVar11 | (bVar11 >= bVar44) * bVar44;
                    bVar45 = (bVar12 < bVar45) * bVar12 | (bVar12 >= bVar45) * bVar45;
                    bVar46 = (bVar13 < bVar46) * bVar13 | (bVar13 >= bVar46) * bVar46;
                    bVar47 = (bVar14 < bVar47) * bVar14 | (bVar14 >= bVar47) * bVar47;
                    bVar48 = (bVar15 < bVar48) * bVar15 | (bVar15 >= bVar48) * bVar48;
                    bVar49 = (bVar16 < bVar49) * bVar16 | (bVar16 >= bVar49) * bVar49;
                    bVar50 = (bVar17 < bVar50) * bVar17 | (bVar17 >= bVar50) * bVar50;
                    bVar51 = (bVar18 < bVar51) * bVar18 | (bVar18 >= bVar51) * bVar51;
                    bVar52 = (bVar19 < bVar52) * bVar19 | (bVar19 >= bVar52) * bVar52;
                    bVar53 = (bVar20 < bVar53) * bVar20 | (bVar20 >= bVar53) * bVar53;
                    bVar54 = (bVar21 < bVar54) * bVar21 | (bVar21 >= bVar54) * bVar54;
                    uVar29 = uVar29 + 0x10;
                  } while (uVar29 < uVar38);
                  bVar39 = (bVar47 < bVar39) * bVar47 | (bVar47 >= bVar39) * bVar39;
                  bVar40 = (bVar48 < bVar40) * bVar48 | (bVar48 >= bVar40) * bVar40;
                  bVar41 = (bVar49 < bVar41) * bVar49 | (bVar49 >= bVar41) * bVar41;
                  bVar42 = (bVar50 < bVar42) * bVar50 | (bVar50 >= bVar42) * bVar42;
                  bVar43 = (bVar51 < bVar43) * bVar51 | (bVar51 >= bVar43) * bVar43;
                  bVar44 = (bVar52 < bVar44) * bVar52 | (bVar52 >= bVar44) * bVar44;
                  bVar45 = (bVar53 < bVar45) * bVar53 | (bVar53 >= bVar45) * bVar45;
                  bVar46 = (bVar54 < bVar46) * bVar54 | (bVar54 >= bVar46) * bVar46;
                  bVar39 = (bVar43 < bVar39) * bVar43 | (bVar43 >= bVar39) * bVar39;
                  bVar40 = (bVar44 < bVar40) * bVar44 | (bVar44 >= bVar40) * bVar40;
                  bVar41 = (bVar45 < bVar41) * bVar45 | (bVar45 >= bVar41) * bVar41;
                  bVar42 = (bVar46 < bVar42) * bVar46 | (bVar46 >= bVar42) * bVar42;
                  bVar39 = (bVar41 < bVar39) * bVar41 | (bVar41 >= bVar39) * bVar39;
                  bVar40 = (bVar42 < bVar40) * bVar42 | (bVar42 >= bVar40) * bVar40;
                  bVar39 = (bVar40 < bVar39) * bVar40 | (bVar40 >= bVar39) * bVar39;
                }
              }
              for (; uVar38 < uVar32; uVar38 = uVar38 + 1) {
                if (*(byte *)(uVar38 + uVar33) < bVar39) {
                  bVar39 = *(byte *)(uVar38 + uVar33);
                }
              }
            }
            uVar36 = uVar36 + 1;
            uVar33 = uVar33 + 1;
            *pbVar22 = bVar39;
            pbVar22 = pbVar22 + 1;
          } while (uVar36 < uVar4);
        }
        FUN_1403e4f20(param_9,uVar37,param_3,uVar4,uVar34);
        uVar30 = uVar30 + 1;
        uVar34 = param_6[1];
        pbVar27 = pbVar27 + uVar37;
        if ((longlong)param_6[1] <= (longlong)uVar30) {
          uVar30 = 0;
          pbVar27 = param_9;
        }
      } while (lVar23 < (longlong)param_5[1]);
    }
  }
  else {
    uVar30 = param_5[1];
    if (0 < (longlong)uVar30) {
      do {
        uVar37 = 0;
        if (0 < (longlong)uVar4) {
          do {
            uVar33 = 0;
            bVar39 = 0xff;
            if (0 < (longlong)uVar34) {
              lVar25 = lVar23 + lVar35 + uVar37;
              uVar26 = uVar33;
              uVar38 = param_7;
              bVar39 = 0xff;
              do {
                uVar29 = 0;
                if (0 < (longlong)uVar36) {
                  if (0xf < (longlong)uVar36) {
                    uVar24 = uVar38 & 0xf;
                    if (uVar24 != 0) {
                      uVar24 = 0x10 - uVar24;
                    }
                    if ((longlong)(uVar24 + 0x10) <= (longlong)uVar36) {
                      uVar31 = uVar36 - (uVar36 - uVar24 & 0xf);
                      if (uVar24 != 0) {
                        do {
                          if ((*(char *)(uVar29 + uVar38) != '\0') &&
                             (*(byte *)(lVar25 + uVar33 + uVar29) < bVar39)) {
                            bVar39 = *(byte *)(lVar25 + uVar33 + uVar29);
                          }
                          uVar29 = uVar29 + 1;
                        } while (uVar29 < uVar24);
                      }
                      lVar2 = lVar25 + uVar33;
                      uVar57 = CONCAT22(CONCAT11(bVar39,bVar39),CONCAT11(bVar39,bVar39));
                      auVar58._0_8_ = CONCAT44(uVar57,uVar57);
                      auVar58._8_8_ = auVar58._0_8_;
                      do {
                        pcVar3 = (char *)(uVar38 + uVar24);
                        auVar55[0] = -(*pcVar3 == '\0');
                        auVar55[1] = -(pcVar3[1] == '\0');
                        auVar55[2] = -(pcVar3[2] == '\0');
                        auVar55[3] = -(pcVar3[3] == '\0');
                        auVar55[4] = -(pcVar3[4] == '\0');
                        auVar55[5] = -(pcVar3[5] == '\0');
                        auVar55[6] = -(pcVar3[6] == '\0');
                        auVar55[7] = -(pcVar3[7] == '\0');
                        auVar55[8] = -(pcVar3[8] == '\0');
                        auVar55[9] = -(pcVar3[9] == '\0');
                        auVar55[10] = -(pcVar3[10] == '\0');
                        auVar55[0xb] = -(pcVar3[0xb] == '\0');
                        auVar55[0xc] = -(pcVar3[0xc] == '\0');
                        auVar55[0xd] = -(pcVar3[0xd] == '\0');
                        auVar55[0xe] = -(pcVar3[0xe] == '\0');
                        auVar55[0xf] = -(pcVar3[0xf] == '\0');
                        auVar6._8_4_ = 0xffffffff;
                        auVar6._0_8_ = 0xffffffffffffffff;
                        auVar6._12_4_ = 0xffffffff;
                        auVar55 = auVar55 ^ auVar6;
                        if ((auVar55 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar39 = 0;
                        }
                        else {
                          bVar39 = *(byte *)(uVar24 + lVar2);
                        }
                        if ((auVar55 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar40 = 0;
                        }
                        else {
                          bVar40 = *(byte *)(uVar24 + 1 + lVar2);
                        }
                        if ((auVar55 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar41 = 0;
                        }
                        else {
                          bVar41 = *(byte *)(uVar24 + 2 + lVar2);
                        }
                        if ((auVar55 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar42 = 0;
                        }
                        else {
                          bVar42 = *(byte *)(uVar24 + 3 + lVar2);
                        }
                        if ((auVar55 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar43 = 0;
                        }
                        else {
                          bVar43 = *(byte *)(uVar24 + 4 + lVar2);
                        }
                        if ((auVar55 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar44 = 0;
                        }
                        else {
                          bVar44 = *(byte *)(uVar24 + 5 + lVar2);
                        }
                        if ((auVar55 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar45 = 0;
                        }
                        else {
                          bVar45 = *(byte *)(uVar24 + 6 + lVar2);
                        }
                        if ((auVar55 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar46 = 0;
                        }
                        else {
                          bVar46 = *(byte *)(uVar24 + 7 + lVar2);
                        }
                        if ((auVar55 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar47 = 0;
                        }
                        else {
                          bVar47 = *(byte *)(uVar24 + 8 + lVar2);
                        }
                        if ((auVar55 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar48 = 0;
                        }
                        else {
                          bVar48 = *(byte *)(uVar24 + 9 + lVar2);
                        }
                        if ((auVar55 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar49 = 0;
                        }
                        else {
                          bVar49 = *(byte *)(uVar24 + 10 + lVar2);
                        }
                        if ((auVar55 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar50 = 0;
                        }
                        else {
                          bVar50 = *(byte *)(uVar24 + 0xb + lVar2);
                        }
                        if ((auVar55 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar51 = 0;
                        }
                        else {
                          bVar51 = *(byte *)(uVar24 + 0xc + lVar2);
                        }
                        if ((auVar55 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar52 = 0;
                        }
                        else {
                          bVar52 = *(byte *)(uVar24 + 0xd + lVar2);
                        }
                        if ((auVar55 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar53 = 0;
                        }
                        else {
                          bVar53 = *(byte *)(uVar24 + 0xe + lVar2);
                        }
                        if (auVar55[0xf] < '\0') {
                          bVar54 = *(byte *)(uVar24 + 0xf + lVar2);
                        }
                        else {
                          bVar54 = 0;
                        }
                        uVar24 = uVar24 + 0x10;
                        bVar5 = auVar58[0];
                        auVar56[0] = (bVar5 < bVar39) * bVar5 | (bVar5 >= bVar39) * bVar39;
                        bVar39 = auVar58[1];
                        auVar56[1] = (bVar39 < bVar40) * bVar39 | (bVar39 >= bVar40) * bVar40;
                        bVar39 = auVar58[2];
                        auVar56[2] = (bVar39 < bVar41) * bVar39 | (bVar39 >= bVar41) * bVar41;
                        bVar39 = auVar58[3];
                        auVar56[3] = (bVar39 < bVar42) * bVar39 | (bVar39 >= bVar42) * bVar42;
                        bVar39 = auVar58[4];
                        auVar56[4] = (bVar39 < bVar43) * bVar39 | (bVar39 >= bVar43) * bVar43;
                        bVar39 = auVar58[5];
                        auVar56[5] = (bVar39 < bVar44) * bVar39 | (bVar39 >= bVar44) * bVar44;
                        bVar39 = auVar58[6];
                        auVar56[6] = (bVar39 < bVar45) * bVar39 | (bVar39 >= bVar45) * bVar45;
                        bVar39 = auVar58[7];
                        auVar56[7] = (bVar39 < bVar46) * bVar39 | (bVar39 >= bVar46) * bVar46;
                        bVar39 = auVar58[8];
                        auVar56[8] = (bVar39 < bVar47) * bVar39 | (bVar39 >= bVar47) * bVar47;
                        bVar39 = auVar58[9];
                        auVar56[9] = (bVar39 < bVar48) * bVar39 | (bVar39 >= bVar48) * bVar48;
                        bVar39 = auVar58[10];
                        auVar56[10] = (bVar39 < bVar49) * bVar39 | (bVar39 >= bVar49) * bVar49;
                        bVar39 = auVar58[0xb];
                        auVar56[0xb] = (bVar39 < bVar50) * bVar39 | (bVar39 >= bVar50) * bVar50;
                        bVar39 = auVar58[0xc];
                        auVar56[0xc] = (bVar39 < bVar51) * bVar39 | (bVar39 >= bVar51) * bVar51;
                        bVar39 = auVar58[0xd];
                        auVar56[0xd] = (bVar39 < bVar52) * bVar39 | (bVar39 >= bVar52) * bVar52;
                        bVar39 = auVar58[0xe];
                        auVar56[0xe] = (bVar39 < bVar53) * bVar39 | (bVar39 >= bVar53) * bVar53;
                        bVar39 = auVar58[0xf];
                        auVar56[0xf] = (bVar39 < bVar54) * bVar39 | (bVar39 >= bVar54) * bVar54;
                        auVar58 = auVar56 & auVar55 | ~auVar55 & auVar58;
                      } while (uVar24 < uVar31);
                      bVar39 = auVar58[8];
                      bVar40 = auVar58[0];
                      bVar40 = (bVar39 < bVar40) * bVar39 | (bVar39 >= bVar40) * bVar40;
                      bVar39 = auVar58[9];
                      bVar41 = auVar58[1];
                      bVar41 = (bVar39 < bVar41) * bVar39 | (bVar39 >= bVar41) * bVar41;
                      bVar39 = auVar58[10];
                      bVar42 = auVar58[2];
                      bVar42 = (bVar39 < bVar42) * bVar39 | (bVar39 >= bVar42) * bVar42;
                      bVar39 = auVar58[0xb];
                      bVar43 = auVar58[3];
                      bVar43 = (bVar39 < bVar43) * bVar39 | (bVar39 >= bVar43) * bVar43;
                      bVar39 = auVar58[0xc];
                      bVar44 = auVar58[4];
                      bVar44 = (bVar39 < bVar44) * bVar39 | (bVar39 >= bVar44) * bVar44;
                      bVar39 = auVar58[0xd];
                      bVar45 = auVar58[5];
                      bVar45 = (bVar39 < bVar45) * bVar39 | (bVar39 >= bVar45) * bVar45;
                      bVar39 = auVar58[0xe];
                      bVar46 = auVar58[6];
                      bVar46 = (bVar39 < bVar46) * bVar39 | (bVar39 >= bVar46) * bVar46;
                      bVar39 = auVar58[0xf];
                      bVar47 = auVar58[7];
                      bVar47 = (bVar39 < bVar47) * bVar39 | (bVar39 >= bVar47) * bVar47;
                      bVar39 = (bVar44 < bVar40) * bVar44 | (bVar44 >= bVar40) * bVar40;
                      bVar40 = (bVar45 < bVar41) * bVar45 | (bVar45 >= bVar41) * bVar41;
                      bVar41 = (bVar46 < bVar42) * bVar46 | (bVar46 >= bVar42) * bVar42;
                      bVar42 = (bVar47 < bVar43) * bVar47 | (bVar47 >= bVar43) * bVar43;
                      bVar39 = (bVar41 < bVar39) * bVar41 | (bVar41 >= bVar39) * bVar39;
                      bVar40 = (bVar42 < bVar40) * bVar42 | (bVar42 >= bVar40) * bVar40;
                      bVar39 = (bVar40 < bVar39) * bVar40 | (bVar40 >= bVar39) * bVar39;
                      uVar29 = uVar31;
                    }
                  }
                  for (; uVar29 < uVar36; uVar29 = uVar29 + 1) {
                    if ((*(char *)(uVar29 + uVar38) != '\0') &&
                       (*(byte *)(lVar25 + uVar33 + uVar29) < bVar39)) {
                      bVar39 = *(byte *)(lVar25 + uVar33 + uVar29);
                    }
                  }
                }
                uVar26 = uVar26 + 1;
                uVar33 = uVar33 + param_2;
                uVar38 = uVar38 + uVar36;
              } while (uVar26 < uVar34);
            }
            *(byte *)(uVar37 + param_3 + lVar28) = bVar39;
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar4);
        }
        uVar32 = uVar32 + 1;
        lVar28 = lVar28 + param_4;
        lVar35 = lVar35 + param_2;
      } while (uVar32 < uVar30);
    }
  }
  return;
}


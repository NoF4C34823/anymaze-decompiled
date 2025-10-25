
void FUN_14029fca0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,ulonglong param_7,undefined8 param_8,
                  byte *param_9)

{
  byte *pbVar1;
  char *pcVar2;
  longlong lVar3;
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
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  byte *pbVar34;
  ulonglong uVar35;
  byte *pbVar36;
  longlong lVar37;
  longlong lVar38;
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
  
  uVar31 = 0;
  uVar25 = *param_6;
  uVar33 = param_6[1];
  uVar4 = *param_5;
  uVar28 = uVar33 - 1;
  uVar29 = uVar4 + 0x1f & 0xffffffffffffffe0;
  lVar37 = 0;
  lVar22 = (param_1 - (int)(uVar28 >> 1) * param_2) - (longlong)(int)(uVar25 - 1 >> 1);
  lVar38 = 0;
  lVar26 = 0;
  if (param_7 == 0) {
    lVar37 = lVar22;
    pbVar36 = param_9;
    if (0 < (longlong)uVar28) {
      uVar23 = 0;
      do {
        if (0 < (longlong)uVar4) {
          uVar35 = lVar22 + lVar38;
          uVar32 = uVar23;
          do {
            bVar39 = 0;
            if (0 < (longlong)uVar25) {
              uVar27 = uVar23;
              bVar40 = 0;
              if (0xf < (longlong)uVar25) {
                uVar24 = uVar35 & 0xf;
                if (uVar24 != 0) {
                  uVar24 = 0x10 - uVar24;
                }
                if ((longlong)(uVar24 + 0x10) <= (longlong)uVar25) {
                  uVar27 = uVar25 - (uVar25 - uVar24 & 0xf);
                  uVar30 = uVar23;
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
                      if (bVar39 < *(byte *)(uVar30 + uVar35)) {
                        bVar39 = *(byte *)(uVar30 + uVar35);
                      }
                      uVar30 = uVar30 + 1;
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
                    } while (uVar30 < uVar24);
                  }
                  do {
                    pbVar36 = (byte *)(uVar35 + uVar24);
                    bVar5 = *pbVar36;
                    bVar7 = pbVar36[1];
                    bVar8 = pbVar36[2];
                    bVar9 = pbVar36[3];
                    bVar10 = pbVar36[4];
                    bVar11 = pbVar36[5];
                    bVar12 = pbVar36[6];
                    bVar13 = pbVar36[7];
                    bVar14 = pbVar36[8];
                    bVar15 = pbVar36[9];
                    bVar16 = pbVar36[10];
                    bVar17 = pbVar36[0xb];
                    bVar18 = pbVar36[0xc];
                    bVar19 = pbVar36[0xd];
                    bVar20 = pbVar36[0xe];
                    bVar21 = pbVar36[0xf];
                    bVar39 = (bVar39 < bVar5) * bVar5 | (bVar39 >= bVar5) * bVar39;
                    bVar40 = (bVar40 < bVar7) * bVar7 | (bVar40 >= bVar7) * bVar40;
                    bVar41 = (bVar41 < bVar8) * bVar8 | (bVar41 >= bVar8) * bVar41;
                    bVar42 = (bVar42 < bVar9) * bVar9 | (bVar42 >= bVar9) * bVar42;
                    bVar43 = (bVar43 < bVar10) * bVar10 | (bVar43 >= bVar10) * bVar43;
                    bVar44 = (bVar44 < bVar11) * bVar11 | (bVar44 >= bVar11) * bVar44;
                    bVar45 = (bVar45 < bVar12) * bVar12 | (bVar45 >= bVar12) * bVar45;
                    bVar46 = (bVar46 < bVar13) * bVar13 | (bVar46 >= bVar13) * bVar46;
                    bVar47 = (bVar47 < bVar14) * bVar14 | (bVar47 >= bVar14) * bVar47;
                    bVar48 = (bVar48 < bVar15) * bVar15 | (bVar48 >= bVar15) * bVar48;
                    bVar49 = (bVar49 < bVar16) * bVar16 | (bVar49 >= bVar16) * bVar49;
                    bVar50 = (bVar50 < bVar17) * bVar17 | (bVar50 >= bVar17) * bVar50;
                    bVar51 = (bVar51 < bVar18) * bVar18 | (bVar51 >= bVar18) * bVar51;
                    bVar52 = (bVar52 < bVar19) * bVar19 | (bVar52 >= bVar19) * bVar52;
                    bVar53 = (bVar53 < bVar20) * bVar20 | (bVar53 >= bVar20) * bVar53;
                    bVar54 = (bVar54 < bVar21) * bVar21 | (bVar54 >= bVar21) * bVar54;
                    uVar24 = uVar24 + 0x10;
                  } while (uVar24 < uVar27);
                  bVar39 = (bVar39 < bVar47) * bVar47 | (bVar39 >= bVar47) * bVar39;
                  bVar40 = (bVar40 < bVar48) * bVar48 | (bVar40 >= bVar48) * bVar40;
                  bVar41 = (bVar41 < bVar49) * bVar49 | (bVar41 >= bVar49) * bVar41;
                  bVar42 = (bVar42 < bVar50) * bVar50 | (bVar42 >= bVar50) * bVar42;
                  bVar43 = (bVar43 < bVar51) * bVar51 | (bVar43 >= bVar51) * bVar43;
                  bVar44 = (bVar44 < bVar52) * bVar52 | (bVar44 >= bVar52) * bVar44;
                  bVar45 = (bVar45 < bVar53) * bVar53 | (bVar45 >= bVar53) * bVar45;
                  bVar46 = (bVar46 < bVar54) * bVar54 | (bVar46 >= bVar54) * bVar46;
                  bVar39 = (bVar39 < bVar43) * bVar43 | (bVar39 >= bVar43) * bVar39;
                  bVar40 = (bVar40 < bVar44) * bVar44 | (bVar40 >= bVar44) * bVar40;
                  bVar41 = (bVar41 < bVar45) * bVar45 | (bVar41 >= bVar45) * bVar41;
                  bVar42 = (bVar42 < bVar46) * bVar46 | (bVar42 >= bVar46) * bVar42;
                  bVar39 = (bVar39 < bVar41) * bVar41 | (bVar39 >= bVar41) * bVar39;
                  bVar40 = (bVar40 < bVar42) * bVar42 | (bVar40 >= bVar42) * bVar40;
                  bVar40 = (bVar39 < bVar40) * bVar40 | (bVar39 >= bVar40) * bVar39;
                }
              }
              for (; bVar39 = bVar40, uVar27 < uVar25; uVar27 = uVar27 + 1) {
                bVar40 = *(byte *)(uVar27 + uVar35);
                if (*(byte *)(uVar27 + uVar35) <= bVar39) {
                  bVar40 = bVar39;
                }
              }
            }
            param_9[uVar32 + lVar26] = bVar39;
            uVar32 = uVar32 + 1;
            uVar35 = uVar35 + 1;
          } while (uVar32 < uVar4);
        }
        lVar38 = lVar38 + param_2;
        uVar31 = uVar31 + 1;
        pbVar36 = param_9 + lVar26 + uVar29;
        lVar26 = lVar26 + uVar29;
        lVar37 = lVar22 + lVar38;
      } while (uVar31 < uVar28);
    }
    if (0 < (longlong)param_5[1]) {
      lVar22 = 0;
      param_3 = param_3 - param_4;
      lVar26 = 0;
      do {
        param_3 = param_3 + param_4;
        lVar22 = lVar22 + 1;
        lVar26 = lVar26 + param_2;
        uVar25 = 0;
        if (0 < (longlong)uVar4) {
          uVar23 = (lVar26 - param_2) + lVar37;
          uVar31 = *param_6;
          uVar35 = 0;
          pbVar34 = pbVar36;
          do {
            bVar39 = 0;
            if (0 < (longlong)uVar31) {
              uVar32 = uVar35;
              bVar40 = 0;
              if (0xf < (longlong)uVar31) {
                uVar27 = uVar23 & 0xf;
                if (uVar27 != 0) {
                  uVar27 = 0x10 - uVar27;
                }
                if ((longlong)(uVar27 + 0x10) <= (longlong)uVar31) {
                  uVar32 = uVar31 - (uVar31 - uVar27 & 0xf);
                  uVar24 = uVar35;
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
                  if (uVar27 != 0) {
                    do {
                      if (bVar39 < *(byte *)(uVar24 + uVar23)) {
                        bVar39 = *(byte *)(uVar24 + uVar23);
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
                    } while (uVar24 < uVar27);
                  }
                  do {
                    pbVar1 = (byte *)(uVar23 + uVar27);
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
                    bVar39 = (bVar39 < bVar5) * bVar5 | (bVar39 >= bVar5) * bVar39;
                    bVar40 = (bVar40 < bVar7) * bVar7 | (bVar40 >= bVar7) * bVar40;
                    bVar41 = (bVar41 < bVar8) * bVar8 | (bVar41 >= bVar8) * bVar41;
                    bVar42 = (bVar42 < bVar9) * bVar9 | (bVar42 >= bVar9) * bVar42;
                    bVar43 = (bVar43 < bVar10) * bVar10 | (bVar43 >= bVar10) * bVar43;
                    bVar44 = (bVar44 < bVar11) * bVar11 | (bVar44 >= bVar11) * bVar44;
                    bVar45 = (bVar45 < bVar12) * bVar12 | (bVar45 >= bVar12) * bVar45;
                    bVar46 = (bVar46 < bVar13) * bVar13 | (bVar46 >= bVar13) * bVar46;
                    bVar47 = (bVar47 < bVar14) * bVar14 | (bVar47 >= bVar14) * bVar47;
                    bVar48 = (bVar48 < bVar15) * bVar15 | (bVar48 >= bVar15) * bVar48;
                    bVar49 = (bVar49 < bVar16) * bVar16 | (bVar49 >= bVar16) * bVar49;
                    bVar50 = (bVar50 < bVar17) * bVar17 | (bVar50 >= bVar17) * bVar50;
                    bVar51 = (bVar51 < bVar18) * bVar18 | (bVar51 >= bVar18) * bVar51;
                    bVar52 = (bVar52 < bVar19) * bVar19 | (bVar52 >= bVar19) * bVar52;
                    bVar53 = (bVar53 < bVar20) * bVar20 | (bVar53 >= bVar20) * bVar53;
                    bVar54 = (bVar54 < bVar21) * bVar21 | (bVar54 >= bVar21) * bVar54;
                    uVar27 = uVar27 + 0x10;
                  } while (uVar27 < uVar32);
                  bVar39 = (bVar39 < bVar47) * bVar47 | (bVar39 >= bVar47) * bVar39;
                  bVar40 = (bVar40 < bVar48) * bVar48 | (bVar40 >= bVar48) * bVar40;
                  bVar41 = (bVar41 < bVar49) * bVar49 | (bVar41 >= bVar49) * bVar41;
                  bVar42 = (bVar42 < bVar50) * bVar50 | (bVar42 >= bVar50) * bVar42;
                  bVar43 = (bVar43 < bVar51) * bVar51 | (bVar43 >= bVar51) * bVar43;
                  bVar44 = (bVar44 < bVar52) * bVar52 | (bVar44 >= bVar52) * bVar44;
                  bVar45 = (bVar45 < bVar53) * bVar53 | (bVar45 >= bVar53) * bVar45;
                  bVar46 = (bVar46 < bVar54) * bVar54 | (bVar46 >= bVar54) * bVar46;
                  bVar39 = (bVar39 < bVar43) * bVar43 | (bVar39 >= bVar43) * bVar39;
                  bVar40 = (bVar40 < bVar44) * bVar44 | (bVar40 >= bVar44) * bVar40;
                  bVar41 = (bVar41 < bVar45) * bVar45 | (bVar41 >= bVar45) * bVar41;
                  bVar42 = (bVar42 < bVar46) * bVar46 | (bVar42 >= bVar46) * bVar42;
                  bVar39 = (bVar39 < bVar41) * bVar41 | (bVar39 >= bVar41) * bVar39;
                  bVar40 = (bVar40 < bVar42) * bVar42 | (bVar40 >= bVar42) * bVar40;
                  bVar40 = (bVar39 < bVar40) * bVar40 | (bVar39 >= bVar40) * bVar39;
                }
              }
              for (; bVar39 = bVar40, uVar32 < uVar31; uVar32 = uVar32 + 1) {
                bVar40 = *(byte *)(uVar32 + uVar23);
                if (*(byte *)(uVar32 + uVar23) <= bVar39) {
                  bVar40 = bVar39;
                }
              }
            }
            uVar25 = uVar25 + 1;
            uVar23 = uVar23 + 1;
            *pbVar34 = bVar39;
            pbVar34 = pbVar34 + 1;
          } while (uVar25 < uVar4);
        }
        FUN_1402a53a0(param_9,uVar29,param_3,uVar4,uVar33);
        uVar28 = uVar28 + 1;
        uVar33 = param_6[1];
        pbVar36 = pbVar36 + uVar29;
        if ((longlong)uVar33 <= (longlong)uVar28) {
          pbVar36 = param_9;
          uVar28 = 0;
        }
      } while (lVar22 < (longlong)param_5[1]);
    }
  }
  else {
    uVar28 = param_5[1];
    if (0 < (longlong)uVar28) {
      do {
        uVar29 = 0;
        if (0 < (longlong)uVar4) {
          do {
            uVar23 = 0;
            bVar39 = 0;
            if (0 < (longlong)uVar33) {
              lVar26 = lVar22 + lVar38 + uVar29;
              uVar35 = uVar23;
              uVar32 = param_7;
              bVar39 = 0;
              do {
                uVar27 = 0;
                if (0 < (longlong)uVar25) {
                  if (0xf < (longlong)uVar25) {
                    uVar24 = uVar32 & 0xf;
                    if (uVar24 != 0) {
                      uVar24 = 0x10 - uVar24;
                    }
                    if ((longlong)(uVar24 + 0x10) <= (longlong)uVar25) {
                      uVar30 = uVar25 - (uVar25 - uVar24 & 0xf);
                      if (uVar24 != 0) {
                        do {
                          if ((*(char *)(uVar27 + uVar32) != '\0') &&
                             (bVar40 = *(byte *)(lVar26 + uVar23 + uVar27), bVar39 < bVar40)) {
                            bVar39 = bVar40;
                          }
                          uVar27 = uVar27 + 1;
                        } while (uVar27 < uVar24);
                      }
                      lVar3 = lVar26 + uVar23;
                      uVar57 = CONCAT22(CONCAT11(bVar39,bVar39),CONCAT11(bVar39,bVar39));
                      auVar58._0_8_ = CONCAT44(uVar57,uVar57);
                      auVar58._8_8_ = auVar58._0_8_;
                      do {
                        pcVar2 = (char *)(uVar32 + uVar24);
                        auVar55[0] = -(*pcVar2 == '\0');
                        auVar55[1] = -(pcVar2[1] == '\0');
                        auVar55[2] = -(pcVar2[2] == '\0');
                        auVar55[3] = -(pcVar2[3] == '\0');
                        auVar55[4] = -(pcVar2[4] == '\0');
                        auVar55[5] = -(pcVar2[5] == '\0');
                        auVar55[6] = -(pcVar2[6] == '\0');
                        auVar55[7] = -(pcVar2[7] == '\0');
                        auVar55[8] = -(pcVar2[8] == '\0');
                        auVar55[9] = -(pcVar2[9] == '\0');
                        auVar55[10] = -(pcVar2[10] == '\0');
                        auVar55[0xb] = -(pcVar2[0xb] == '\0');
                        auVar55[0xc] = -(pcVar2[0xc] == '\0');
                        auVar55[0xd] = -(pcVar2[0xd] == '\0');
                        auVar55[0xe] = -(pcVar2[0xe] == '\0');
                        auVar55[0xf] = -(pcVar2[0xf] == '\0');
                        auVar6._8_4_ = 0xffffffff;
                        auVar6._0_8_ = 0xffffffffffffffff;
                        auVar6._12_4_ = 0xffffffff;
                        auVar55 = auVar55 ^ auVar6;
                        if ((auVar55 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar39 = 0;
                        }
                        else {
                          bVar39 = *(byte *)(uVar24 + lVar3);
                        }
                        if ((auVar55 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar40 = 0;
                        }
                        else {
                          bVar40 = *(byte *)(uVar24 + 1 + lVar3);
                        }
                        if ((auVar55 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar41 = 0;
                        }
                        else {
                          bVar41 = *(byte *)(uVar24 + 2 + lVar3);
                        }
                        if ((auVar55 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar42 = 0;
                        }
                        else {
                          bVar42 = *(byte *)(uVar24 + 3 + lVar3);
                        }
                        if ((auVar55 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar43 = 0;
                        }
                        else {
                          bVar43 = *(byte *)(uVar24 + 4 + lVar3);
                        }
                        if ((auVar55 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar44 = 0;
                        }
                        else {
                          bVar44 = *(byte *)(uVar24 + 5 + lVar3);
                        }
                        if ((auVar55 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar45 = 0;
                        }
                        else {
                          bVar45 = *(byte *)(uVar24 + 6 + lVar3);
                        }
                        if ((auVar55 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar46 = 0;
                        }
                        else {
                          bVar46 = *(byte *)(uVar24 + 7 + lVar3);
                        }
                        if ((auVar55 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar47 = 0;
                        }
                        else {
                          bVar47 = *(byte *)(uVar24 + 8 + lVar3);
                        }
                        if ((auVar55 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar48 = 0;
                        }
                        else {
                          bVar48 = *(byte *)(uVar24 + 9 + lVar3);
                        }
                        if ((auVar55 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar49 = 0;
                        }
                        else {
                          bVar49 = *(byte *)(uVar24 + 10 + lVar3);
                        }
                        if ((auVar55 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar50 = 0;
                        }
                        else {
                          bVar50 = *(byte *)(uVar24 + 0xb + lVar3);
                        }
                        if ((auVar55 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar51 = 0;
                        }
                        else {
                          bVar51 = *(byte *)(uVar24 + 0xc + lVar3);
                        }
                        if ((auVar55 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar52 = 0;
                        }
                        else {
                          bVar52 = *(byte *)(uVar24 + 0xd + lVar3);
                        }
                        if ((auVar55 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar53 = 0;
                        }
                        else {
                          bVar53 = *(byte *)(uVar24 + 0xe + lVar3);
                        }
                        if (auVar55[0xf] < '\0') {
                          bVar54 = *(byte *)(uVar24 + 0xf + lVar3);
                        }
                        else {
                          bVar54 = 0;
                        }
                        uVar24 = uVar24 + 0x10;
                        bVar5 = auVar58[0];
                        auVar56[0] = (bVar39 < bVar5) * bVar5 | (bVar39 >= bVar5) * bVar39;
                        bVar39 = auVar58[1];
                        auVar56[1] = (bVar40 < bVar39) * bVar39 | (bVar40 >= bVar39) * bVar40;
                        bVar39 = auVar58[2];
                        auVar56[2] = (bVar41 < bVar39) * bVar39 | (bVar41 >= bVar39) * bVar41;
                        bVar39 = auVar58[3];
                        auVar56[3] = (bVar42 < bVar39) * bVar39 | (bVar42 >= bVar39) * bVar42;
                        bVar39 = auVar58[4];
                        auVar56[4] = (bVar43 < bVar39) * bVar39 | (bVar43 >= bVar39) * bVar43;
                        bVar39 = auVar58[5];
                        auVar56[5] = (bVar44 < bVar39) * bVar39 | (bVar44 >= bVar39) * bVar44;
                        bVar39 = auVar58[6];
                        auVar56[6] = (bVar45 < bVar39) * bVar39 | (bVar45 >= bVar39) * bVar45;
                        bVar39 = auVar58[7];
                        auVar56[7] = (bVar46 < bVar39) * bVar39 | (bVar46 >= bVar39) * bVar46;
                        bVar39 = auVar58[8];
                        auVar56[8] = (bVar47 < bVar39) * bVar39 | (bVar47 >= bVar39) * bVar47;
                        bVar39 = auVar58[9];
                        auVar56[9] = (bVar48 < bVar39) * bVar39 | (bVar48 >= bVar39) * bVar48;
                        bVar39 = auVar58[10];
                        auVar56[10] = (bVar49 < bVar39) * bVar39 | (bVar49 >= bVar39) * bVar49;
                        bVar39 = auVar58[0xb];
                        auVar56[0xb] = (bVar50 < bVar39) * bVar39 | (bVar50 >= bVar39) * bVar50;
                        bVar39 = auVar58[0xc];
                        auVar56[0xc] = (bVar51 < bVar39) * bVar39 | (bVar51 >= bVar39) * bVar51;
                        bVar39 = auVar58[0xd];
                        auVar56[0xd] = (bVar52 < bVar39) * bVar39 | (bVar52 >= bVar39) * bVar52;
                        bVar39 = auVar58[0xe];
                        auVar56[0xe] = (bVar53 < bVar39) * bVar39 | (bVar53 >= bVar39) * bVar53;
                        bVar39 = auVar58[0xf];
                        auVar56[0xf] = (bVar54 < bVar39) * bVar39 | (bVar54 >= bVar39) * bVar54;
                        auVar58 = auVar56 & auVar55 | ~auVar55 & auVar58;
                      } while (uVar24 < uVar30);
                      bVar39 = auVar58[8];
                      bVar40 = auVar58[0];
                      bVar40 = (bVar40 < bVar39) * bVar39 | (bVar40 >= bVar39) * bVar40;
                      bVar39 = auVar58[9];
                      bVar41 = auVar58[1];
                      bVar41 = (bVar41 < bVar39) * bVar39 | (bVar41 >= bVar39) * bVar41;
                      bVar39 = auVar58[10];
                      bVar42 = auVar58[2];
                      bVar42 = (bVar42 < bVar39) * bVar39 | (bVar42 >= bVar39) * bVar42;
                      bVar39 = auVar58[0xb];
                      bVar43 = auVar58[3];
                      bVar43 = (bVar43 < bVar39) * bVar39 | (bVar43 >= bVar39) * bVar43;
                      bVar39 = auVar58[0xc];
                      bVar44 = auVar58[4];
                      bVar44 = (bVar44 < bVar39) * bVar39 | (bVar44 >= bVar39) * bVar44;
                      bVar39 = auVar58[0xd];
                      bVar45 = auVar58[5];
                      bVar45 = (bVar45 < bVar39) * bVar39 | (bVar45 >= bVar39) * bVar45;
                      bVar39 = auVar58[0xe];
                      bVar46 = auVar58[6];
                      bVar46 = (bVar46 < bVar39) * bVar39 | (bVar46 >= bVar39) * bVar46;
                      bVar39 = auVar58[0xf];
                      bVar47 = auVar58[7];
                      bVar47 = (bVar47 < bVar39) * bVar39 | (bVar47 >= bVar39) * bVar47;
                      bVar39 = (bVar40 < bVar44) * bVar44 | (bVar40 >= bVar44) * bVar40;
                      bVar40 = (bVar41 < bVar45) * bVar45 | (bVar41 >= bVar45) * bVar41;
                      bVar41 = (bVar42 < bVar46) * bVar46 | (bVar42 >= bVar46) * bVar42;
                      bVar42 = (bVar43 < bVar47) * bVar47 | (bVar43 >= bVar47) * bVar43;
                      bVar39 = (bVar39 < bVar41) * bVar41 | (bVar39 >= bVar41) * bVar39;
                      bVar40 = (bVar40 < bVar42) * bVar42 | (bVar40 >= bVar42) * bVar40;
                      bVar39 = (bVar39 < bVar40) * bVar40 | (bVar39 >= bVar40) * bVar39;
                      uVar27 = uVar30;
                    }
                  }
                  for (; uVar27 < uVar25; uVar27 = uVar27 + 1) {
                    if ((*(char *)(uVar27 + uVar32) != '\0') &&
                       (bVar40 = *(byte *)(lVar26 + uVar23 + uVar27), bVar39 < bVar40)) {
                      bVar39 = bVar40;
                    }
                  }
                }
                uVar35 = uVar35 + 1;
                uVar23 = uVar23 + param_2;
                uVar32 = uVar32 + uVar25;
              } while (uVar35 < uVar33);
            }
            *(byte *)(uVar29 + param_3 + lVar37) = bVar39;
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar4);
        }
        uVar31 = uVar31 + 1;
        lVar37 = lVar37 + param_4;
        lVar38 = lVar38 + param_2;
      } while (uVar31 < uVar28);
    }
  }
  return;
}


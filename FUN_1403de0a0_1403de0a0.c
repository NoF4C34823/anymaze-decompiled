
ulonglong FUN_1403de0a0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5
                       ,undefined8 param_6,ulonglong param_7,undefined8 param_8,byte *param_9)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
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
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  byte *pbVar33;
  longlong lVar34;
  ulonglong uVar35;
  byte *pbVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong lVar40;
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
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar59;
  undefined1 auVar60 [16];
  
  lVar25 = (longlong)param_2;
  uVar23 = 0;
  lVar37 = 0;
  lVar40 = (param_6._4_4_ + -1 >> 1) * lVar25;
  lVar34 = 0;
  lVar38 = (longlong)((int)param_6 + -1 >> 1);
  uVar20 = (longlong)(int)param_5 + 0x1fU & 0xffffffffffffffe0;
  lVar27 = param_1 - lVar38;
  lVar32 = 0;
  lVar30 = lVar27 - lVar40;
  if (param_7 == 0) {
    uVar26 = (longlong)param_6._4_4_ - 1;
    lVar37 = lVar30;
    pbVar36 = param_9;
    if (uVar26 != 0 && 0 < (longlong)param_6._4_4_) {
      uVar22 = 0;
      do {
        if (0 < (longlong)(int)param_5) {
          uVar29 = lVar30 + lVar34;
          uVar31 = (ulonglong)(int)param_6;
          uVar35 = uVar22;
          do {
            bVar41 = 0xff;
            if (0 < (longlong)uVar31) {
              uVar28 = uVar22;
              if (0xf < (longlong)uVar31) {
                uVar21 = uVar29 & 0xf;
                if (uVar21 != 0) {
                  uVar21 = 0x10 - uVar21;
                }
                if ((longlong)(uVar21 + 0x10) <= (longlong)uVar31) {
                  uVar28 = uVar31 - (uVar31 - uVar21 & 0xf);
                  uVar24 = uVar22;
                  bVar42 = bVar41;
                  bVar43 = bVar41;
                  bVar44 = bVar41;
                  bVar45 = bVar41;
                  bVar46 = bVar41;
                  bVar47 = bVar41;
                  bVar48 = bVar41;
                  bVar49 = bVar41;
                  bVar50 = bVar41;
                  bVar51 = bVar41;
                  bVar52 = bVar41;
                  bVar53 = bVar41;
                  bVar54 = bVar41;
                  bVar55 = bVar41;
                  bVar56 = bVar41;
                  if (uVar21 != 0) {
                    do {
                      if (*(byte *)(uVar24 + uVar29) < bVar41) {
                        bVar41 = *(byte *)(uVar24 + uVar29);
                      }
                      uVar24 = uVar24 + 1;
                      bVar42 = bVar41;
                      bVar43 = bVar41;
                      bVar44 = bVar41;
                      bVar45 = bVar41;
                      bVar46 = bVar41;
                      bVar47 = bVar41;
                      bVar48 = bVar41;
                      bVar49 = bVar41;
                      bVar50 = bVar41;
                      bVar51 = bVar41;
                      bVar52 = bVar41;
                      bVar53 = bVar41;
                      bVar54 = bVar41;
                      bVar55 = bVar41;
                      bVar56 = bVar41;
                    } while (uVar24 < uVar21);
                  }
                  do {
                    pbVar36 = (byte *)(uVar29 + uVar21);
                    bVar3 = *pbVar36;
                    bVar5 = pbVar36[1];
                    bVar6 = pbVar36[2];
                    bVar7 = pbVar36[3];
                    bVar8 = pbVar36[4];
                    bVar9 = pbVar36[5];
                    bVar10 = pbVar36[6];
                    bVar11 = pbVar36[7];
                    bVar12 = pbVar36[8];
                    bVar13 = pbVar36[9];
                    bVar14 = pbVar36[10];
                    bVar15 = pbVar36[0xb];
                    bVar16 = pbVar36[0xc];
                    bVar17 = pbVar36[0xd];
                    bVar18 = pbVar36[0xe];
                    bVar19 = pbVar36[0xf];
                    bVar41 = (bVar3 < bVar41) * bVar3 | (bVar3 >= bVar41) * bVar41;
                    bVar42 = (bVar5 < bVar42) * bVar5 | (bVar5 >= bVar42) * bVar42;
                    bVar43 = (bVar6 < bVar43) * bVar6 | (bVar6 >= bVar43) * bVar43;
                    bVar44 = (bVar7 < bVar44) * bVar7 | (bVar7 >= bVar44) * bVar44;
                    bVar45 = (bVar8 < bVar45) * bVar8 | (bVar8 >= bVar45) * bVar45;
                    bVar46 = (bVar9 < bVar46) * bVar9 | (bVar9 >= bVar46) * bVar46;
                    bVar47 = (bVar10 < bVar47) * bVar10 | (bVar10 >= bVar47) * bVar47;
                    bVar48 = (bVar11 < bVar48) * bVar11 | (bVar11 >= bVar48) * bVar48;
                    bVar49 = (bVar12 < bVar49) * bVar12 | (bVar12 >= bVar49) * bVar49;
                    bVar50 = (bVar13 < bVar50) * bVar13 | (bVar13 >= bVar50) * bVar50;
                    bVar51 = (bVar14 < bVar51) * bVar14 | (bVar14 >= bVar51) * bVar51;
                    bVar52 = (bVar15 < bVar52) * bVar15 | (bVar15 >= bVar52) * bVar52;
                    bVar53 = (bVar16 < bVar53) * bVar16 | (bVar16 >= bVar53) * bVar53;
                    bVar54 = (bVar17 < bVar54) * bVar17 | (bVar17 >= bVar54) * bVar54;
                    bVar55 = (bVar18 < bVar55) * bVar18 | (bVar18 >= bVar55) * bVar55;
                    bVar56 = (bVar19 < bVar56) * bVar19 | (bVar19 >= bVar56) * bVar56;
                    uVar21 = uVar21 + 0x10;
                  } while (uVar21 < uVar28);
                  bVar41 = (bVar49 < bVar41) * bVar49 | (bVar49 >= bVar41) * bVar41;
                  bVar42 = (bVar50 < bVar42) * bVar50 | (bVar50 >= bVar42) * bVar42;
                  bVar43 = (bVar51 < bVar43) * bVar51 | (bVar51 >= bVar43) * bVar43;
                  bVar44 = (bVar52 < bVar44) * bVar52 | (bVar52 >= bVar44) * bVar44;
                  bVar45 = (bVar53 < bVar45) * bVar53 | (bVar53 >= bVar45) * bVar45;
                  bVar46 = (bVar54 < bVar46) * bVar54 | (bVar54 >= bVar46) * bVar46;
                  bVar47 = (bVar55 < bVar47) * bVar55 | (bVar55 >= bVar47) * bVar47;
                  bVar48 = (bVar56 < bVar48) * bVar56 | (bVar56 >= bVar48) * bVar48;
                  bVar41 = (bVar45 < bVar41) * bVar45 | (bVar45 >= bVar41) * bVar41;
                  bVar42 = (bVar46 < bVar42) * bVar46 | (bVar46 >= bVar42) * bVar42;
                  bVar43 = (bVar47 < bVar43) * bVar47 | (bVar47 >= bVar43) * bVar43;
                  bVar44 = (bVar48 < bVar44) * bVar48 | (bVar48 >= bVar44) * bVar44;
                  bVar41 = (bVar43 < bVar41) * bVar43 | (bVar43 >= bVar41) * bVar41;
                  bVar42 = (bVar44 < bVar42) * bVar44 | (bVar44 >= bVar42) * bVar42;
                  bVar41 = (bVar42 < bVar41) * bVar42 | (bVar42 >= bVar41) * bVar41;
                }
              }
              for (; uVar28 < uVar31; uVar28 = uVar28 + 1) {
                if (*(byte *)(uVar28 + uVar29) < bVar41) {
                  bVar41 = *(byte *)(uVar28 + uVar29);
                }
              }
            }
            param_9[uVar35 + lVar32] = bVar41;
            uVar35 = uVar35 + 1;
            uVar29 = uVar29 + 1;
          } while (uVar35 < (ulonglong)(longlong)(int)param_5);
        }
        uVar23 = uVar23 + 1;
        lVar37 = ((lVar27 + lVar25) - lVar40) + lVar34;
        lVar34 = lVar34 + lVar25;
        pbVar36 = param_9 + lVar32 + uVar20;
        lVar32 = lVar32 + uVar20;
      } while (uVar23 < uVar26);
    }
    uVar23 = 0;
    lVar27 = 0;
    uVar22 = uVar20;
    if (0 < param_5._4_4_) {
      uVar29 = (ulonglong)(int)param_5;
      do {
        uVar22 = 0;
        if (0 < (longlong)uVar29) {
          uVar28 = (ulonglong)(int)param_6;
          uVar35 = lVar37 + lVar27;
          uVar31 = uVar22;
          pbVar33 = pbVar36;
          do {
            bVar41 = 0xff;
            if (0 < (longlong)uVar28) {
              uVar21 = uVar22;
              if (0xf < (longlong)uVar28) {
                uVar24 = uVar35 & 0xf;
                if (uVar24 != 0) {
                  uVar24 = 0x10 - uVar24;
                }
                if ((longlong)(uVar24 + 0x10) <= (longlong)uVar28) {
                  uVar21 = uVar28 - (uVar28 - uVar24 & 0xf);
                  uVar39 = uVar22;
                  bVar42 = bVar41;
                  bVar43 = bVar41;
                  bVar44 = bVar41;
                  bVar45 = bVar41;
                  bVar46 = bVar41;
                  bVar47 = bVar41;
                  bVar48 = bVar41;
                  bVar49 = bVar41;
                  bVar50 = bVar41;
                  bVar51 = bVar41;
                  bVar52 = bVar41;
                  bVar53 = bVar41;
                  bVar54 = bVar41;
                  bVar55 = bVar41;
                  bVar56 = bVar41;
                  if (uVar24 != 0) {
                    do {
                      if (*(byte *)(uVar39 + uVar35) < bVar41) {
                        bVar41 = *(byte *)(uVar39 + uVar35);
                      }
                      uVar39 = uVar39 + 1;
                      bVar42 = bVar41;
                      bVar43 = bVar41;
                      bVar44 = bVar41;
                      bVar45 = bVar41;
                      bVar46 = bVar41;
                      bVar47 = bVar41;
                      bVar48 = bVar41;
                      bVar49 = bVar41;
                      bVar50 = bVar41;
                      bVar51 = bVar41;
                      bVar52 = bVar41;
                      bVar53 = bVar41;
                      bVar54 = bVar41;
                      bVar55 = bVar41;
                      bVar56 = bVar41;
                    } while (uVar39 < uVar24);
                  }
                  do {
                    pbVar1 = (byte *)(uVar35 + uVar24);
                    bVar3 = *pbVar1;
                    bVar5 = pbVar1[1];
                    bVar6 = pbVar1[2];
                    bVar7 = pbVar1[3];
                    bVar8 = pbVar1[4];
                    bVar9 = pbVar1[5];
                    bVar10 = pbVar1[6];
                    bVar11 = pbVar1[7];
                    bVar12 = pbVar1[8];
                    bVar13 = pbVar1[9];
                    bVar14 = pbVar1[10];
                    bVar15 = pbVar1[0xb];
                    bVar16 = pbVar1[0xc];
                    bVar17 = pbVar1[0xd];
                    bVar18 = pbVar1[0xe];
                    bVar19 = pbVar1[0xf];
                    bVar41 = (bVar3 < bVar41) * bVar3 | (bVar3 >= bVar41) * bVar41;
                    bVar42 = (bVar5 < bVar42) * bVar5 | (bVar5 >= bVar42) * bVar42;
                    bVar43 = (bVar6 < bVar43) * bVar6 | (bVar6 >= bVar43) * bVar43;
                    bVar44 = (bVar7 < bVar44) * bVar7 | (bVar7 >= bVar44) * bVar44;
                    bVar45 = (bVar8 < bVar45) * bVar8 | (bVar8 >= bVar45) * bVar45;
                    bVar46 = (bVar9 < bVar46) * bVar9 | (bVar9 >= bVar46) * bVar46;
                    bVar47 = (bVar10 < bVar47) * bVar10 | (bVar10 >= bVar47) * bVar47;
                    bVar48 = (bVar11 < bVar48) * bVar11 | (bVar11 >= bVar48) * bVar48;
                    bVar49 = (bVar12 < bVar49) * bVar12 | (bVar12 >= bVar49) * bVar49;
                    bVar50 = (bVar13 < bVar50) * bVar13 | (bVar13 >= bVar50) * bVar50;
                    bVar51 = (bVar14 < bVar51) * bVar14 | (bVar14 >= bVar51) * bVar51;
                    bVar52 = (bVar15 < bVar52) * bVar15 | (bVar15 >= bVar52) * bVar52;
                    bVar53 = (bVar16 < bVar53) * bVar16 | (bVar16 >= bVar53) * bVar53;
                    bVar54 = (bVar17 < bVar54) * bVar17 | (bVar17 >= bVar54) * bVar54;
                    bVar55 = (bVar18 < bVar55) * bVar18 | (bVar18 >= bVar55) * bVar55;
                    bVar56 = (bVar19 < bVar56) * bVar19 | (bVar19 >= bVar56) * bVar56;
                    uVar24 = uVar24 + 0x10;
                  } while (uVar24 < uVar21);
                  bVar41 = (bVar49 < bVar41) * bVar49 | (bVar49 >= bVar41) * bVar41;
                  bVar42 = (bVar50 < bVar42) * bVar50 | (bVar50 >= bVar42) * bVar42;
                  bVar43 = (bVar51 < bVar43) * bVar51 | (bVar51 >= bVar43) * bVar43;
                  bVar44 = (bVar52 < bVar44) * bVar52 | (bVar52 >= bVar44) * bVar44;
                  bVar45 = (bVar53 < bVar45) * bVar53 | (bVar53 >= bVar45) * bVar45;
                  bVar46 = (bVar54 < bVar46) * bVar54 | (bVar54 >= bVar46) * bVar46;
                  bVar47 = (bVar55 < bVar47) * bVar55 | (bVar55 >= bVar47) * bVar47;
                  bVar48 = (bVar56 < bVar48) * bVar56 | (bVar56 >= bVar48) * bVar48;
                  bVar41 = (bVar45 < bVar41) * bVar45 | (bVar45 >= bVar41) * bVar41;
                  bVar42 = (bVar46 < bVar42) * bVar46 | (bVar46 >= bVar42) * bVar42;
                  bVar43 = (bVar47 < bVar43) * bVar47 | (bVar47 >= bVar43) * bVar43;
                  bVar44 = (bVar48 < bVar44) * bVar48 | (bVar48 >= bVar44) * bVar44;
                  bVar41 = (bVar43 < bVar41) * bVar43 | (bVar43 >= bVar41) * bVar41;
                  bVar42 = (bVar44 < bVar42) * bVar44 | (bVar44 >= bVar42) * bVar42;
                  bVar41 = (bVar42 < bVar41) * bVar42 | (bVar42 >= bVar41) * bVar41;
                }
              }
              for (; uVar21 < uVar28; uVar21 = uVar21 + 1) {
                if (*(byte *)(uVar21 + uVar35) < bVar41) {
                  bVar41 = *(byte *)(uVar21 + uVar35);
                }
              }
            }
            uVar31 = uVar31 + 1;
            uVar35 = uVar35 + 1;
            *pbVar33 = bVar41;
            pbVar33 = pbVar33 + 1;
          } while (uVar31 < uVar29);
        }
        FUN_1403e4f20(param_9,uVar20,param_3,uVar29,(longlong)param_6._4_4_);
        uVar26 = uVar26 + 1;
        uVar23 = uVar23 + 1;
        uVar22 = 0;
        pbVar36 = pbVar36 + uVar20;
        if ((longlong)param_6._4_4_ <= (longlong)uVar26) {
          uVar26 = uVar22;
          pbVar36 = param_9;
        }
        param_3 = param_3 + param_4;
        lVar27 = lVar27 + lVar25;
      } while (uVar23 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else {
    uVar22 = (ulonglong)param_5._4_4_;
    if (0 < (longlong)uVar22) {
      uVar22 = (ulonglong)(int)param_6;
      do {
        uVar20 = 0;
        if (0 < (int)param_5) {
          uVar22 = ((param_1 - lVar38) - lVar40) + lVar34;
          do {
            uVar26 = 0;
            bVar41 = 0xff;
            if (0 < param_6._4_4_) {
              lVar27 = uVar22 + uVar20;
              uVar29 = param_7;
              uVar35 = uVar26;
              do {
                lVar30 = (longlong)(int)param_6;
                uVar31 = 0;
                if (0 < lVar30) {
                  if (0xf < lVar30) {
                    uVar28 = uVar29 & 0xf;
                    if (uVar28 != 0) {
                      uVar28 = 0x10 - uVar28;
                    }
                    if ((longlong)(uVar28 + 0x10) <= lVar30) {
                      uVar21 = lVar30 - (lVar30 - uVar28 & 0xf);
                      if (uVar28 != 0) {
                        do {
                          if ((*(char *)(uVar31 + uVar29) != '\0') &&
                             (*(byte *)(lVar27 + uVar26 + uVar31) < bVar41)) {
                            bVar41 = *(byte *)(lVar27 + uVar26 + uVar31);
                          }
                          uVar31 = uVar31 + 1;
                        } while (uVar31 < uVar28);
                      }
                      lVar30 = lVar27 + uVar26;
                      uVar59 = CONCAT22(CONCAT11(bVar41,bVar41),CONCAT11(bVar41,bVar41));
                      auVar60._0_8_ = CONCAT44(uVar59,uVar59);
                      auVar60._8_8_ = auVar60._0_8_;
                      do {
                        pcVar2 = (char *)(uVar29 + uVar28);
                        auVar57[0] = -(*pcVar2 == '\0');
                        auVar57[1] = -(pcVar2[1] == '\0');
                        auVar57[2] = -(pcVar2[2] == '\0');
                        auVar57[3] = -(pcVar2[3] == '\0');
                        auVar57[4] = -(pcVar2[4] == '\0');
                        auVar57[5] = -(pcVar2[5] == '\0');
                        auVar57[6] = -(pcVar2[6] == '\0');
                        auVar57[7] = -(pcVar2[7] == '\0');
                        auVar57[8] = -(pcVar2[8] == '\0');
                        auVar57[9] = -(pcVar2[9] == '\0');
                        auVar57[10] = -(pcVar2[10] == '\0');
                        auVar57[0xb] = -(pcVar2[0xb] == '\0');
                        auVar57[0xc] = -(pcVar2[0xc] == '\0');
                        auVar57[0xd] = -(pcVar2[0xd] == '\0');
                        auVar57[0xe] = -(pcVar2[0xe] == '\0');
                        auVar57[0xf] = -(pcVar2[0xf] == '\0');
                        auVar4._8_4_ = 0xffffffff;
                        auVar4._0_8_ = 0xffffffffffffffff;
                        auVar4._12_4_ = 0xffffffff;
                        auVar57 = auVar57 ^ auVar4;
                        if ((auVar57 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar41 = 0;
                        }
                        else {
                          bVar41 = *(byte *)(uVar28 + lVar30);
                        }
                        if ((auVar57 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar42 = 0;
                        }
                        else {
                          bVar42 = *(byte *)(uVar28 + 1 + lVar30);
                        }
                        if ((auVar57 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar43 = 0;
                        }
                        else {
                          bVar43 = *(byte *)(uVar28 + 2 + lVar30);
                        }
                        if ((auVar57 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar44 = 0;
                        }
                        else {
                          bVar44 = *(byte *)(uVar28 + 3 + lVar30);
                        }
                        if ((auVar57 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar45 = 0;
                        }
                        else {
                          bVar45 = *(byte *)(uVar28 + 4 + lVar30);
                        }
                        if ((auVar57 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar46 = 0;
                        }
                        else {
                          bVar46 = *(byte *)(uVar28 + 5 + lVar30);
                        }
                        if ((auVar57 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar47 = 0;
                        }
                        else {
                          bVar47 = *(byte *)(uVar28 + 6 + lVar30);
                        }
                        if ((auVar57 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar48 = 0;
                        }
                        else {
                          bVar48 = *(byte *)(uVar28 + 7 + lVar30);
                        }
                        if ((auVar57 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar49 = 0;
                        }
                        else {
                          bVar49 = *(byte *)(uVar28 + 8 + lVar30);
                        }
                        if ((auVar57 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar50 = 0;
                        }
                        else {
                          bVar50 = *(byte *)(uVar28 + 9 + lVar30);
                        }
                        if ((auVar57 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar51 = 0;
                        }
                        else {
                          bVar51 = *(byte *)(uVar28 + 10 + lVar30);
                        }
                        if ((auVar57 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar52 = 0;
                        }
                        else {
                          bVar52 = *(byte *)(uVar28 + 0xb + lVar30);
                        }
                        if ((auVar57 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar53 = 0;
                        }
                        else {
                          bVar53 = *(byte *)(uVar28 + 0xc + lVar30);
                        }
                        if ((auVar57 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar54 = 0;
                        }
                        else {
                          bVar54 = *(byte *)(uVar28 + 0xd + lVar30);
                        }
                        if ((auVar57 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar55 = 0;
                        }
                        else {
                          bVar55 = *(byte *)(uVar28 + 0xe + lVar30);
                        }
                        if (auVar57[0xf] < '\0') {
                          bVar56 = *(byte *)(uVar28 + 0xf + lVar30);
                        }
                        else {
                          bVar56 = 0;
                        }
                        uVar28 = uVar28 + 0x10;
                        bVar3 = auVar60[0];
                        auVar58[0] = (bVar3 < bVar41) * bVar3 | (bVar3 >= bVar41) * bVar41;
                        bVar41 = auVar60[1];
                        auVar58[1] = (bVar41 < bVar42) * bVar41 | (bVar41 >= bVar42) * bVar42;
                        bVar41 = auVar60[2];
                        auVar58[2] = (bVar41 < bVar43) * bVar41 | (bVar41 >= bVar43) * bVar43;
                        bVar41 = auVar60[3];
                        auVar58[3] = (bVar41 < bVar44) * bVar41 | (bVar41 >= bVar44) * bVar44;
                        bVar41 = auVar60[4];
                        auVar58[4] = (bVar41 < bVar45) * bVar41 | (bVar41 >= bVar45) * bVar45;
                        bVar41 = auVar60[5];
                        auVar58[5] = (bVar41 < bVar46) * bVar41 | (bVar41 >= bVar46) * bVar46;
                        bVar41 = auVar60[6];
                        auVar58[6] = (bVar41 < bVar47) * bVar41 | (bVar41 >= bVar47) * bVar47;
                        bVar41 = auVar60[7];
                        auVar58[7] = (bVar41 < bVar48) * bVar41 | (bVar41 >= bVar48) * bVar48;
                        bVar41 = auVar60[8];
                        auVar58[8] = (bVar41 < bVar49) * bVar41 | (bVar41 >= bVar49) * bVar49;
                        bVar41 = auVar60[9];
                        auVar58[9] = (bVar41 < bVar50) * bVar41 | (bVar41 >= bVar50) * bVar50;
                        bVar41 = auVar60[10];
                        auVar58[10] = (bVar41 < bVar51) * bVar41 | (bVar41 >= bVar51) * bVar51;
                        bVar41 = auVar60[0xb];
                        auVar58[0xb] = (bVar41 < bVar52) * bVar41 | (bVar41 >= bVar52) * bVar52;
                        bVar41 = auVar60[0xc];
                        auVar58[0xc] = (bVar41 < bVar53) * bVar41 | (bVar41 >= bVar53) * bVar53;
                        bVar41 = auVar60[0xd];
                        auVar58[0xd] = (bVar41 < bVar54) * bVar41 | (bVar41 >= bVar54) * bVar54;
                        bVar41 = auVar60[0xe];
                        auVar58[0xe] = (bVar41 < bVar55) * bVar41 | (bVar41 >= bVar55) * bVar55;
                        bVar41 = auVar60[0xf];
                        auVar58[0xf] = (bVar41 < bVar56) * bVar41 | (bVar41 >= bVar56) * bVar56;
                        auVar60 = auVar58 & auVar57 | ~auVar57 & auVar60;
                      } while (uVar28 < uVar21);
                      bVar41 = auVar60[8];
                      bVar42 = auVar60[0];
                      bVar42 = (bVar41 < bVar42) * bVar41 | (bVar41 >= bVar42) * bVar42;
                      bVar41 = auVar60[9];
                      bVar43 = auVar60[1];
                      bVar43 = (bVar41 < bVar43) * bVar41 | (bVar41 >= bVar43) * bVar43;
                      bVar41 = auVar60[10];
                      bVar44 = auVar60[2];
                      bVar44 = (bVar41 < bVar44) * bVar41 | (bVar41 >= bVar44) * bVar44;
                      bVar41 = auVar60[0xb];
                      bVar45 = auVar60[3];
                      bVar45 = (bVar41 < bVar45) * bVar41 | (bVar41 >= bVar45) * bVar45;
                      bVar41 = auVar60[0xc];
                      bVar46 = auVar60[4];
                      bVar46 = (bVar41 < bVar46) * bVar41 | (bVar41 >= bVar46) * bVar46;
                      bVar41 = auVar60[0xd];
                      bVar47 = auVar60[5];
                      bVar47 = (bVar41 < bVar47) * bVar41 | (bVar41 >= bVar47) * bVar47;
                      bVar41 = auVar60[0xe];
                      bVar48 = auVar60[6];
                      bVar48 = (bVar41 < bVar48) * bVar41 | (bVar41 >= bVar48) * bVar48;
                      bVar41 = auVar60[0xf];
                      bVar49 = auVar60[7];
                      bVar49 = (bVar41 < bVar49) * bVar41 | (bVar41 >= bVar49) * bVar49;
                      bVar41 = (bVar46 < bVar42) * bVar46 | (bVar46 >= bVar42) * bVar42;
                      bVar42 = (bVar47 < bVar43) * bVar47 | (bVar47 >= bVar43) * bVar43;
                      bVar43 = (bVar48 < bVar44) * bVar48 | (bVar48 >= bVar44) * bVar44;
                      bVar44 = (bVar49 < bVar45) * bVar49 | (bVar49 >= bVar45) * bVar45;
                      bVar41 = (bVar43 < bVar41) * bVar43 | (bVar43 >= bVar41) * bVar41;
                      bVar42 = (bVar44 < bVar42) * bVar44 | (bVar44 >= bVar42) * bVar42;
                      bVar41 = (bVar42 < bVar41) * bVar42 | (bVar42 >= bVar41) * bVar41;
                      uVar31 = uVar21;
                    }
                  }
                  for (; uVar31 < (ulonglong)(longlong)(int)param_6; uVar31 = uVar31 + 1) {
                    if ((*(char *)(uVar31 + uVar29) != '\0') &&
                       (*(byte *)(lVar27 + uVar26 + uVar31) < bVar41)) {
                      bVar41 = *(byte *)(lVar27 + uVar26 + uVar31);
                    }
                  }
                }
                uVar35 = uVar35 + 1;
                uVar26 = uVar26 + lVar25;
                uVar29 = uVar29 + (longlong)(int)param_6;
              } while (uVar35 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(byte *)(uVar20 + param_3 + lVar37) = bVar41;
            uVar20 = uVar20 + 1;
          } while (uVar20 < (ulonglong)(longlong)(int)param_5);
        }
        uVar23 = uVar23 + 1;
        lVar37 = lVar37 + param_4;
        lVar34 = lVar34 + lVar25;
      } while (uVar23 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return uVar22;
}


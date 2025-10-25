
void FUN_140299f00(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,byte *param_9)

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
  longlong lVar23;
  ulonglong uVar24;
  byte *pbVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  byte *pbVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
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
  
  uVar38 = 0;
  lVar23 = (longlong)param_2;
  lVar29 = (param_6._4_4_ + -1 >> 1) * lVar23;
  uVar20 = (longlong)(int)param_5 + 0x1fU & 0xffffffffffffffe0;
  param_1 = param_1 - ((int)param_6 + -1 >> 1);
  lVar27 = 0;
  lVar30 = 0;
  lVar40 = param_1 - lVar29;
  lVar35 = 0;
  if (param_7 == 0) {
    lVar28 = (longlong)param_6._4_4_;
    uVar26 = lVar28 - 1;
    lVar27 = lVar40;
    pbVar34 = param_9;
    if (uVar26 != 0 && 0 < lVar28) {
      uVar31 = (ulonglong)(int)param_6;
      uVar36 = 0;
      do {
        if (0 < (longlong)(int)param_5) {
          uVar32 = lVar40 + lVar30;
          uVar33 = uVar36;
          do {
            bVar41 = 0;
            if (0 < (longlong)uVar31) {
              uVar21 = uVar36;
              bVar42 = 0;
              if (0xf < (longlong)uVar31) {
                uVar24 = uVar32 & 0xf;
                if (uVar24 != 0) {
                  uVar24 = 0x10 - uVar24;
                }
                if ((longlong)(uVar24 + 0x10) <= (longlong)uVar31) {
                  uVar21 = uVar31 - (uVar31 - uVar24 & 0xf);
                  uVar37 = uVar36;
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
                      if (bVar41 < *(byte *)(uVar37 + uVar32)) {
                        bVar41 = *(byte *)(uVar37 + uVar32);
                      }
                      uVar37 = uVar37 + 1;
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
                    } while (uVar37 < uVar24);
                  }
                  do {
                    pbVar34 = (byte *)(uVar32 + uVar24);
                    bVar3 = *pbVar34;
                    bVar5 = pbVar34[1];
                    bVar6 = pbVar34[2];
                    bVar7 = pbVar34[3];
                    bVar8 = pbVar34[4];
                    bVar9 = pbVar34[5];
                    bVar10 = pbVar34[6];
                    bVar11 = pbVar34[7];
                    bVar12 = pbVar34[8];
                    bVar13 = pbVar34[9];
                    bVar14 = pbVar34[10];
                    bVar15 = pbVar34[0xb];
                    bVar16 = pbVar34[0xc];
                    bVar17 = pbVar34[0xd];
                    bVar18 = pbVar34[0xe];
                    bVar19 = pbVar34[0xf];
                    bVar41 = (bVar41 < bVar3) * bVar3 | (bVar41 >= bVar3) * bVar41;
                    bVar42 = (bVar42 < bVar5) * bVar5 | (bVar42 >= bVar5) * bVar42;
                    bVar43 = (bVar43 < bVar6) * bVar6 | (bVar43 >= bVar6) * bVar43;
                    bVar44 = (bVar44 < bVar7) * bVar7 | (bVar44 >= bVar7) * bVar44;
                    bVar45 = (bVar45 < bVar8) * bVar8 | (bVar45 >= bVar8) * bVar45;
                    bVar46 = (bVar46 < bVar9) * bVar9 | (bVar46 >= bVar9) * bVar46;
                    bVar47 = (bVar47 < bVar10) * bVar10 | (bVar47 >= bVar10) * bVar47;
                    bVar48 = (bVar48 < bVar11) * bVar11 | (bVar48 >= bVar11) * bVar48;
                    bVar49 = (bVar49 < bVar12) * bVar12 | (bVar49 >= bVar12) * bVar49;
                    bVar50 = (bVar50 < bVar13) * bVar13 | (bVar50 >= bVar13) * bVar50;
                    bVar51 = (bVar51 < bVar14) * bVar14 | (bVar51 >= bVar14) * bVar51;
                    bVar52 = (bVar52 < bVar15) * bVar15 | (bVar52 >= bVar15) * bVar52;
                    bVar53 = (bVar53 < bVar16) * bVar16 | (bVar53 >= bVar16) * bVar53;
                    bVar54 = (bVar54 < bVar17) * bVar17 | (bVar54 >= bVar17) * bVar54;
                    bVar55 = (bVar55 < bVar18) * bVar18 | (bVar55 >= bVar18) * bVar55;
                    bVar56 = (bVar56 < bVar19) * bVar19 | (bVar56 >= bVar19) * bVar56;
                    uVar24 = uVar24 + 0x10;
                  } while (uVar24 < uVar21);
                  bVar41 = (bVar41 < bVar49) * bVar49 | (bVar41 >= bVar49) * bVar41;
                  bVar42 = (bVar42 < bVar50) * bVar50 | (bVar42 >= bVar50) * bVar42;
                  bVar43 = (bVar43 < bVar51) * bVar51 | (bVar43 >= bVar51) * bVar43;
                  bVar44 = (bVar44 < bVar52) * bVar52 | (bVar44 >= bVar52) * bVar44;
                  bVar45 = (bVar45 < bVar53) * bVar53 | (bVar45 >= bVar53) * bVar45;
                  bVar46 = (bVar46 < bVar54) * bVar54 | (bVar46 >= bVar54) * bVar46;
                  bVar47 = (bVar47 < bVar55) * bVar55 | (bVar47 >= bVar55) * bVar47;
                  bVar48 = (bVar48 < bVar56) * bVar56 | (bVar48 >= bVar56) * bVar48;
                  bVar41 = (bVar41 < bVar45) * bVar45 | (bVar41 >= bVar45) * bVar41;
                  bVar42 = (bVar42 < bVar46) * bVar46 | (bVar42 >= bVar46) * bVar42;
                  bVar43 = (bVar43 < bVar47) * bVar47 | (bVar43 >= bVar47) * bVar43;
                  bVar44 = (bVar44 < bVar48) * bVar48 | (bVar44 >= bVar48) * bVar44;
                  bVar41 = (bVar41 < bVar43) * bVar43 | (bVar41 >= bVar43) * bVar41;
                  bVar42 = (bVar42 < bVar44) * bVar44 | (bVar42 >= bVar44) * bVar42;
                  bVar42 = (bVar41 < bVar42) * bVar42 | (bVar41 >= bVar42) * bVar41;
                }
              }
              for (; bVar41 = bVar42, uVar21 < uVar31; uVar21 = uVar21 + 1) {
                bVar42 = *(byte *)(uVar21 + uVar32);
                if (*(byte *)(uVar21 + uVar32) <= bVar41) {
                  bVar42 = bVar41;
                }
              }
            }
            param_9[uVar33 + lVar35] = bVar41;
            uVar33 = uVar33 + 1;
            uVar32 = uVar32 + 1;
          } while (uVar33 < (ulonglong)(longlong)(int)param_5);
        }
        uVar38 = uVar38 + 1;
        lVar27 = ((param_1 + lVar23) - lVar29) + lVar30;
        lVar30 = lVar30 + lVar23;
        pbVar34 = param_9 + lVar35 + uVar20;
        lVar35 = lVar35 + uVar20;
      } while (uVar38 < uVar26);
    }
    uVar38 = 0;
    if (0 < param_5._4_4_) {
      uVar31 = (ulonglong)(int)param_6;
      uVar32 = (ulonglong)(int)param_5;
      uVar36 = uVar38;
      do {
        uVar33 = 0;
        if (0 < (longlong)uVar32) {
          uVar24 = lVar27 + uVar38;
          pbVar25 = pbVar34;
          uVar21 = uVar33;
          do {
            bVar41 = 0;
            if (0 < (longlong)uVar31) {
              uVar37 = uVar33;
              bVar42 = 0;
              if (0xf < (longlong)uVar31) {
                uVar22 = uVar24 & 0xf;
                if (uVar22 != 0) {
                  uVar22 = 0x10 - uVar22;
                }
                if ((longlong)(uVar22 + 0x10) <= (longlong)uVar31) {
                  uVar37 = uVar31 - (uVar31 - uVar22 & 0xf);
                  uVar39 = uVar33;
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
                  if (uVar22 != 0) {
                    do {
                      if (bVar41 < *(byte *)(uVar39 + uVar24)) {
                        bVar41 = *(byte *)(uVar39 + uVar24);
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
                    } while (uVar39 < uVar22);
                  }
                  do {
                    pbVar1 = (byte *)(uVar24 + uVar22);
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
                    bVar41 = (bVar41 < bVar3) * bVar3 | (bVar41 >= bVar3) * bVar41;
                    bVar42 = (bVar42 < bVar5) * bVar5 | (bVar42 >= bVar5) * bVar42;
                    bVar43 = (bVar43 < bVar6) * bVar6 | (bVar43 >= bVar6) * bVar43;
                    bVar44 = (bVar44 < bVar7) * bVar7 | (bVar44 >= bVar7) * bVar44;
                    bVar45 = (bVar45 < bVar8) * bVar8 | (bVar45 >= bVar8) * bVar45;
                    bVar46 = (bVar46 < bVar9) * bVar9 | (bVar46 >= bVar9) * bVar46;
                    bVar47 = (bVar47 < bVar10) * bVar10 | (bVar47 >= bVar10) * bVar47;
                    bVar48 = (bVar48 < bVar11) * bVar11 | (bVar48 >= bVar11) * bVar48;
                    bVar49 = (bVar49 < bVar12) * bVar12 | (bVar49 >= bVar12) * bVar49;
                    bVar50 = (bVar50 < bVar13) * bVar13 | (bVar50 >= bVar13) * bVar50;
                    bVar51 = (bVar51 < bVar14) * bVar14 | (bVar51 >= bVar14) * bVar51;
                    bVar52 = (bVar52 < bVar15) * bVar15 | (bVar52 >= bVar15) * bVar52;
                    bVar53 = (bVar53 < bVar16) * bVar16 | (bVar53 >= bVar16) * bVar53;
                    bVar54 = (bVar54 < bVar17) * bVar17 | (bVar54 >= bVar17) * bVar54;
                    bVar55 = (bVar55 < bVar18) * bVar18 | (bVar55 >= bVar18) * bVar55;
                    bVar56 = (bVar56 < bVar19) * bVar19 | (bVar56 >= bVar19) * bVar56;
                    uVar22 = uVar22 + 0x10;
                  } while (uVar22 < uVar37);
                  bVar41 = (bVar41 < bVar49) * bVar49 | (bVar41 >= bVar49) * bVar41;
                  bVar42 = (bVar42 < bVar50) * bVar50 | (bVar42 >= bVar50) * bVar42;
                  bVar43 = (bVar43 < bVar51) * bVar51 | (bVar43 >= bVar51) * bVar43;
                  bVar44 = (bVar44 < bVar52) * bVar52 | (bVar44 >= bVar52) * bVar44;
                  bVar45 = (bVar45 < bVar53) * bVar53 | (bVar45 >= bVar53) * bVar45;
                  bVar46 = (bVar46 < bVar54) * bVar54 | (bVar46 >= bVar54) * bVar46;
                  bVar47 = (bVar47 < bVar55) * bVar55 | (bVar47 >= bVar55) * bVar47;
                  bVar48 = (bVar48 < bVar56) * bVar56 | (bVar48 >= bVar56) * bVar48;
                  bVar41 = (bVar41 < bVar45) * bVar45 | (bVar41 >= bVar45) * bVar41;
                  bVar42 = (bVar42 < bVar46) * bVar46 | (bVar42 >= bVar46) * bVar42;
                  bVar43 = (bVar43 < bVar47) * bVar47 | (bVar43 >= bVar47) * bVar43;
                  bVar44 = (bVar44 < bVar48) * bVar48 | (bVar44 >= bVar48) * bVar44;
                  bVar41 = (bVar41 < bVar43) * bVar43 | (bVar41 >= bVar43) * bVar41;
                  bVar42 = (bVar42 < bVar44) * bVar44 | (bVar42 >= bVar44) * bVar42;
                  bVar42 = (bVar41 < bVar42) * bVar42 | (bVar41 >= bVar42) * bVar41;
                }
              }
              for (; bVar41 = bVar42, uVar37 < uVar31; uVar37 = uVar37 + 1) {
                bVar42 = *(byte *)(uVar37 + uVar24);
                if (*(byte *)(uVar37 + uVar24) <= bVar41) {
                  bVar42 = bVar41;
                }
              }
            }
            uVar21 = uVar21 + 1;
            uVar24 = uVar24 + 1;
            *pbVar25 = bVar41;
            pbVar25 = pbVar25 + 1;
          } while (uVar21 < uVar32);
        }
        FUN_1402a53a0(param_9,uVar20,param_3,uVar32,lVar28);
        uVar26 = uVar26 + 1;
        uVar36 = uVar36 + 1;
        pbVar34 = pbVar34 + uVar20;
        if (lVar28 <= (longlong)uVar26) {
          uVar26 = 0;
          pbVar34 = param_9;
        }
        param_3 = param_3 + param_4;
        uVar38 = uVar38 + lVar23;
      } while (uVar36 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    uVar20 = (ulonglong)(int)param_6;
    do {
      uVar26 = 0;
      if (0 < (int)param_5) {
        do {
          uVar36 = 0;
          bVar41 = 0;
          if (0 < param_6._4_4_) {
            lVar29 = lVar40 + lVar30 + uVar26;
            uVar31 = uVar36;
            uVar32 = param_7;
            bVar41 = 0;
            do {
              uVar33 = 0;
              if (0 < (longlong)uVar20) {
                if (0xf < (longlong)uVar20) {
                  uVar21 = uVar32 & 0xf;
                  if (uVar21 != 0) {
                    uVar21 = 0x10 - uVar21;
                  }
                  if ((longlong)(uVar21 + 0x10) <= (longlong)uVar20) {
                    uVar24 = uVar20 - (uVar20 - uVar21 & 0xf);
                    if (uVar21 != 0) {
                      do {
                        if ((*(char *)(uVar33 + uVar32) != '\0') &&
                           (bVar42 = *(byte *)(lVar29 + uVar36 + uVar33), bVar41 < bVar42)) {
                          bVar41 = bVar42;
                        }
                        uVar33 = uVar33 + 1;
                      } while (uVar33 < uVar21);
                    }
                    lVar35 = lVar29 + uVar36;
                    uVar59 = CONCAT22(CONCAT11(bVar41,bVar41),CONCAT11(bVar41,bVar41));
                    auVar60._0_8_ = CONCAT44(uVar59,uVar59);
                    auVar60._8_8_ = auVar60._0_8_;
                    do {
                      pcVar2 = (char *)(uVar32 + uVar21);
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
                        bVar41 = *(byte *)(uVar21 + lVar35);
                      }
                      if ((auVar57 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar42 = 0;
                      }
                      else {
                        bVar42 = *(byte *)(uVar21 + 1 + lVar35);
                      }
                      if ((auVar57 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar43 = 0;
                      }
                      else {
                        bVar43 = *(byte *)(uVar21 + 2 + lVar35);
                      }
                      if ((auVar57 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar44 = 0;
                      }
                      else {
                        bVar44 = *(byte *)(uVar21 + 3 + lVar35);
                      }
                      if ((auVar57 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar45 = 0;
                      }
                      else {
                        bVar45 = *(byte *)(uVar21 + 4 + lVar35);
                      }
                      if ((auVar57 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar46 = 0;
                      }
                      else {
                        bVar46 = *(byte *)(uVar21 + 5 + lVar35);
                      }
                      if ((auVar57 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar47 = 0;
                      }
                      else {
                        bVar47 = *(byte *)(uVar21 + 6 + lVar35);
                      }
                      if ((auVar57 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar48 = 0;
                      }
                      else {
                        bVar48 = *(byte *)(uVar21 + 7 + lVar35);
                      }
                      if ((auVar57 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar49 = 0;
                      }
                      else {
                        bVar49 = *(byte *)(uVar21 + 8 + lVar35);
                      }
                      if ((auVar57 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar50 = 0;
                      }
                      else {
                        bVar50 = *(byte *)(uVar21 + 9 + lVar35);
                      }
                      if ((auVar57 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar51 = 0;
                      }
                      else {
                        bVar51 = *(byte *)(uVar21 + 10 + lVar35);
                      }
                      if ((auVar57 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar52 = 0;
                      }
                      else {
                        bVar52 = *(byte *)(uVar21 + 0xb + lVar35);
                      }
                      if ((auVar57 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar53 = 0;
                      }
                      else {
                        bVar53 = *(byte *)(uVar21 + 0xc + lVar35);
                      }
                      if ((auVar57 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar54 = 0;
                      }
                      else {
                        bVar54 = *(byte *)(uVar21 + 0xd + lVar35);
                      }
                      if ((auVar57 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar55 = 0;
                      }
                      else {
                        bVar55 = *(byte *)(uVar21 + 0xe + lVar35);
                      }
                      if (auVar57[0xf] < '\0') {
                        bVar56 = *(byte *)(uVar21 + 0xf + lVar35);
                      }
                      else {
                        bVar56 = 0;
                      }
                      uVar21 = uVar21 + 0x10;
                      bVar3 = auVar60[0];
                      auVar58[0] = (bVar41 < bVar3) * bVar3 | (bVar41 >= bVar3) * bVar41;
                      bVar41 = auVar60[1];
                      auVar58[1] = (bVar42 < bVar41) * bVar41 | (bVar42 >= bVar41) * bVar42;
                      bVar41 = auVar60[2];
                      auVar58[2] = (bVar43 < bVar41) * bVar41 | (bVar43 >= bVar41) * bVar43;
                      bVar41 = auVar60[3];
                      auVar58[3] = (bVar44 < bVar41) * bVar41 | (bVar44 >= bVar41) * bVar44;
                      bVar41 = auVar60[4];
                      auVar58[4] = (bVar45 < bVar41) * bVar41 | (bVar45 >= bVar41) * bVar45;
                      bVar41 = auVar60[5];
                      auVar58[5] = (bVar46 < bVar41) * bVar41 | (bVar46 >= bVar41) * bVar46;
                      bVar41 = auVar60[6];
                      auVar58[6] = (bVar47 < bVar41) * bVar41 | (bVar47 >= bVar41) * bVar47;
                      bVar41 = auVar60[7];
                      auVar58[7] = (bVar48 < bVar41) * bVar41 | (bVar48 >= bVar41) * bVar48;
                      bVar41 = auVar60[8];
                      auVar58[8] = (bVar49 < bVar41) * bVar41 | (bVar49 >= bVar41) * bVar49;
                      bVar41 = auVar60[9];
                      auVar58[9] = (bVar50 < bVar41) * bVar41 | (bVar50 >= bVar41) * bVar50;
                      bVar41 = auVar60[10];
                      auVar58[10] = (bVar51 < bVar41) * bVar41 | (bVar51 >= bVar41) * bVar51;
                      bVar41 = auVar60[0xb];
                      auVar58[0xb] = (bVar52 < bVar41) * bVar41 | (bVar52 >= bVar41) * bVar52;
                      bVar41 = auVar60[0xc];
                      auVar58[0xc] = (bVar53 < bVar41) * bVar41 | (bVar53 >= bVar41) * bVar53;
                      bVar41 = auVar60[0xd];
                      auVar58[0xd] = (bVar54 < bVar41) * bVar41 | (bVar54 >= bVar41) * bVar54;
                      bVar41 = auVar60[0xe];
                      auVar58[0xe] = (bVar55 < bVar41) * bVar41 | (bVar55 >= bVar41) * bVar55;
                      bVar41 = auVar60[0xf];
                      auVar58[0xf] = (bVar56 < bVar41) * bVar41 | (bVar56 >= bVar41) * bVar56;
                      auVar60 = auVar58 & auVar57 | ~auVar57 & auVar60;
                    } while (uVar21 < uVar24);
                    bVar41 = auVar60[8];
                    bVar42 = auVar60[0];
                    bVar42 = (bVar42 < bVar41) * bVar41 | (bVar42 >= bVar41) * bVar42;
                    bVar41 = auVar60[9];
                    bVar43 = auVar60[1];
                    bVar43 = (bVar43 < bVar41) * bVar41 | (bVar43 >= bVar41) * bVar43;
                    bVar41 = auVar60[10];
                    bVar44 = auVar60[2];
                    bVar44 = (bVar44 < bVar41) * bVar41 | (bVar44 >= bVar41) * bVar44;
                    bVar41 = auVar60[0xb];
                    bVar45 = auVar60[3];
                    bVar45 = (bVar45 < bVar41) * bVar41 | (bVar45 >= bVar41) * bVar45;
                    bVar41 = auVar60[0xc];
                    bVar46 = auVar60[4];
                    bVar46 = (bVar46 < bVar41) * bVar41 | (bVar46 >= bVar41) * bVar46;
                    bVar41 = auVar60[0xd];
                    bVar47 = auVar60[5];
                    bVar47 = (bVar47 < bVar41) * bVar41 | (bVar47 >= bVar41) * bVar47;
                    bVar41 = auVar60[0xe];
                    bVar48 = auVar60[6];
                    bVar48 = (bVar48 < bVar41) * bVar41 | (bVar48 >= bVar41) * bVar48;
                    bVar41 = auVar60[0xf];
                    bVar49 = auVar60[7];
                    bVar49 = (bVar49 < bVar41) * bVar41 | (bVar49 >= bVar41) * bVar49;
                    bVar41 = (bVar42 < bVar46) * bVar46 | (bVar42 >= bVar46) * bVar42;
                    bVar42 = (bVar43 < bVar47) * bVar47 | (bVar43 >= bVar47) * bVar43;
                    bVar43 = (bVar44 < bVar48) * bVar48 | (bVar44 >= bVar48) * bVar44;
                    bVar44 = (bVar45 < bVar49) * bVar49 | (bVar45 >= bVar49) * bVar45;
                    bVar41 = (bVar41 < bVar43) * bVar43 | (bVar41 >= bVar43) * bVar41;
                    bVar42 = (bVar42 < bVar44) * bVar44 | (bVar42 >= bVar44) * bVar42;
                    bVar41 = (bVar41 < bVar42) * bVar42 | (bVar41 >= bVar42) * bVar41;
                    uVar33 = uVar24;
                  }
                }
                for (; uVar33 < uVar20; uVar33 = uVar33 + 1) {
                  if ((*(char *)(uVar33 + uVar32) != '\0') &&
                     (bVar42 = *(byte *)(lVar29 + uVar36 + uVar33), bVar41 < bVar42)) {
                    bVar41 = bVar42;
                  }
                }
              }
              uVar31 = uVar31 + 1;
              uVar36 = uVar36 + lVar23;
              uVar32 = uVar32 + uVar20;
            } while (uVar31 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(byte *)(uVar26 + param_3 + lVar27) = bVar41;
          uVar26 = uVar26 + 1;
        } while (uVar26 < (ulonglong)(longlong)(int)param_5);
      }
      uVar38 = uVar38 + 1;
      lVar27 = lVar27 + param_4;
      lVar30 = lVar30 + lVar23;
    } while (uVar38 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}


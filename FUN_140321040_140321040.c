
void FUN_140321040(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,byte *param_9)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  byte bVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  byte *pbVar24;
  ulonglong uVar25;
  longlong lVar26;
  byte *pbVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  byte bVar34;
  byte bVar35;
  byte bVar38;
  byte bVar39;
  undefined4 uVar36;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar37 [16];
  ulonglong uStack_68;
  
  uVar31 = 0;
  lVar26 = (longlong)param_2;
  lVar16 = 0;
  lVar29 = 0;
  lVar10 = (longlong)((int)param_6 + -1 >> 1);
  lVar28 = 0;
  uVar6 = (longlong)(int)param_5 * 3;
  uVar8 = uVar6 + 0x1f & 0xffffffffffffffe0;
  lVar18 = lVar10 * -3 + param_1;
  lVar11 = (param_6._4_4_ + -1 >> 1) * lVar26;
  lVar14 = lVar18 - lVar11;
  if (param_7 == 0) {
    lVar16 = (longlong)param_6._4_4_;
    uVar25 = lVar16 - 1;
    lVar10 = lVar14;
    pbVar24 = param_9;
    if (uVar25 != 0 && 0 < lVar16) {
      uVar22 = (ulonglong)(longlong)(int)param_6 >> 1;
      uVar12 = 0;
      do {
        if (0 < (longlong)uVar6) {
          lVar10 = lVar14 + lVar29;
          uVar23 = uVar12;
          do {
            bVar35 = 0xff;
            if (0 < (int)param_6) {
              lVar30 = 1;
              if (uVar22 != 0) {
                lVar30 = lVar10 + uVar23;
                uVar9 = uVar12;
                uVar19 = uVar12;
                do {
                  uVar17 = uVar19;
                  bVar34 = *(byte *)(uVar9 + lVar30);
                  bVar38 = *(byte *)(uVar9 + 3 + lVar30);
                  if (bVar35 <= bVar34) {
                    bVar34 = bVar35;
                  }
                  bVar35 = bVar34;
                  if (bVar38 < bVar34) {
                    bVar35 = bVar38;
                  }
                  uVar19 = uVar17 + 1;
                  uVar9 = uVar9 + 6;
                } while (uVar19 < uVar22);
                lVar30 = uVar17 + 2 + uVar19;
              }
              if ((lVar30 - 1U < (ulonglong)(longlong)(int)param_6) &&
                 (bVar34 = *(byte *)(lVar30 * 3 + -3 + lVar10 + uVar23), bVar34 < bVar35)) {
                bVar35 = bVar34;
              }
            }
            param_9[uVar23 + lVar28] = bVar35;
            uVar23 = uVar23 + 1;
          } while (uVar23 < uVar6);
        }
        uVar31 = uVar31 + 1;
        lVar10 = ((lVar18 + lVar26) - lVar11) + lVar29;
        lVar29 = lVar29 + lVar26;
        pbVar24 = param_9 + lVar28 + uVar8;
        lVar28 = lVar28 + uVar8;
      } while (uVar31 < uVar25);
    }
    uVar31 = 0;
    lVar11 = 0;
    if (0 < param_5._4_4_) {
      uVar12 = (ulonglong)(longlong)(int)param_6 >> 1;
      do {
        uVar22 = 0;
        if (0 < (longlong)uVar6) {
          pbVar27 = pbVar24;
          uVar23 = uVar22;
          do {
            bVar35 = 0xff;
            if (0 < (int)param_6) {
              lVar14 = 1;
              if (uVar12 != 0) {
                lVar14 = lVar10 + lVar11 + uVar23;
                uVar9 = uVar22;
                uVar19 = uVar22;
                do {
                  uVar17 = uVar19;
                  bVar34 = *(byte *)(uVar9 + lVar14);
                  bVar38 = *(byte *)(uVar9 + 3 + lVar14);
                  if (bVar35 <= bVar34) {
                    bVar34 = bVar35;
                  }
                  bVar35 = bVar34;
                  if (bVar38 < bVar34) {
                    bVar35 = bVar38;
                  }
                  uVar19 = uVar17 + 1;
                  uVar9 = uVar9 + 6;
                } while (uVar19 < uVar12);
                lVar14 = uVar17 + 2 + uVar19;
              }
              if ((lVar14 - 1U < (ulonglong)(longlong)(int)param_6) &&
                 (bVar34 = *(byte *)(lVar14 * 3 + -3 + lVar10 + lVar11 + uVar23), bVar34 < bVar35))
              {
                bVar35 = bVar34;
              }
            }
            uVar23 = uVar23 + 1;
            *pbVar27 = bVar35;
            pbVar27 = pbVar27 + 1;
          } while (uVar23 < uVar6);
        }
        FUN_140328840(param_9,uVar8,param_3,uVar6,lVar16);
        uVar25 = uVar25 + 1;
        uVar31 = uVar31 + 1;
        pbVar24 = pbVar24 + uVar8;
        if (lVar16 <= (longlong)uVar25) {
          uVar25 = 0;
          pbVar24 = param_9;
        }
        param_3 = param_3 + param_4;
        lVar11 = lVar11 + lVar26;
      } while (uVar31 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    uVar8 = (ulonglong)(int)param_6;
    do {
      uVar25 = 0;
      if (0 < (longlong)uVar6) {
        do {
          uVar12 = 0;
          bVar35 = 0xff;
          if (0 < param_6._4_4_) {
            lVar14 = ((param_1 + lVar10 * -3) - lVar11) + lVar29 + uVar25;
            uVar22 = param_7;
            uVar23 = uVar12;
            bVar35 = 0xff;
            do {
              uVar9 = 0;
              if (0 < (longlong)uVar8) {
                if (0xf < (longlong)uVar8) {
                  uStack_68 = uVar22 & 0xf;
                  if (uStack_68 != 0) {
                    uStack_68 = 0x10 - uStack_68;
                  }
                  if ((longlong)(uStack_68 + 0x10) <= (longlong)uVar8) {
                    uVar19 = uVar8 - (uVar8 - uStack_68 & 0xf);
                    if (uStack_68 != 0) {
                      do {
                        if ((*(char *)(uVar9 + uVar22) != '\0') &&
                           (bVar34 = *(byte *)(lVar14 + uVar9 * 3 + uVar12), bVar34 < bVar35)) {
                          bVar35 = bVar34;
                        }
                        uVar9 = uVar9 + 1;
                      } while (uVar9 < uStack_68);
                    }
                    lVar28 = uStack_68 * 3;
                    lVar18 = lVar14 + uVar12;
                    uVar36 = CONCAT22(CONCAT11(bVar35,bVar35),CONCAT11(bVar35,bVar35));
                    auVar37._0_8_ = CONCAT44(uVar36,uVar36);
                    auVar37._8_8_ = auVar37._0_8_;
                    do {
                      pcVar1 = (char *)(uVar22 + uStack_68);
                      auVar32[0] = -(*pcVar1 == '\0');
                      auVar32[1] = -(pcVar1[1] == '\0');
                      auVar32[2] = -(pcVar1[2] == '\0');
                      auVar32[3] = -(pcVar1[3] == '\0');
                      auVar32[4] = -(pcVar1[4] == '\0');
                      auVar32[5] = -(pcVar1[5] == '\0');
                      auVar32[6] = -(pcVar1[6] == '\0');
                      auVar32[7] = -(pcVar1[7] == '\0');
                      auVar32[8] = -(pcVar1[8] == '\0');
                      auVar32[9] = -(pcVar1[9] == '\0');
                      auVar32[10] = -(pcVar1[10] == '\0');
                      auVar32[0xb] = -(pcVar1[0xb] == '\0');
                      auVar32[0xc] = -(pcVar1[0xc] == '\0');
                      auVar32[0xd] = -(pcVar1[0xd] == '\0');
                      auVar32[0xe] = -(pcVar1[0xe] == '\0');
                      auVar32[0xf] = -(pcVar1[0xf] == '\0');
                      auVar5._8_4_ = 0xffffffff;
                      auVar5._0_8_ = 0xffffffffffffffff;
                      auVar5._12_4_ = 0xffffffff;
                      auVar32 = auVar32 ^ auVar5;
                      if ((((((((((((((((auVar32 >> 7 & (undefined1  [16])0x1) !=
                                        (undefined1  [16])0x0 ||
                                       (auVar32 >> 0xf & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                      (auVar32 >> 0x17 & (undefined1  [16])0x1) !=
                                      (undefined1  [16])0x0) ||
                                     (auVar32 >> 0x1f & (undefined1  [16])0x1) !=
                                     (undefined1  [16])0x0) ||
                                    (auVar32 >> 0x27 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                                   (auVar32 >> 0x2f & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                                  (auVar32 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                  ) || (auVar32 >> 0x3f & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                (auVar32 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                               || (auVar32 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0
                               ) || (auVar32 >> 0x57 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                             (auVar32 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar32 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar32 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar32 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          auVar32[0xf] < '\0') {
                        if ((auVar32 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar35 = 0;
                        }
                        else {
                          bVar35 = *(byte *)(lVar28 + lVar18);
                        }
                        if ((auVar32 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar34 = 0;
                        }
                        else {
                          bVar34 = *(byte *)(lVar28 + 3 + lVar18);
                        }
                        if ((auVar32 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar38 = 0;
                        }
                        else {
                          bVar38 = *(byte *)(lVar28 + 6 + lVar18);
                        }
                        if ((auVar32 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar39 = 0;
                        }
                        else {
                          bVar39 = *(byte *)(lVar28 + 9 + lVar18);
                        }
                        if ((auVar32 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar40 = 0;
                        }
                        else {
                          bVar40 = *(byte *)(lVar28 + 0xc + lVar18);
                        }
                        if ((auVar32 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar41 = 0;
                        }
                        else {
                          bVar41 = *(byte *)(lVar28 + 0xf + lVar18);
                        }
                        if ((auVar32 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar42 = 0;
                        }
                        else {
                          bVar42 = *(byte *)(lVar28 + 0x12 + lVar18);
                        }
                        if ((auVar32 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar43 = 0;
                        }
                        else {
                          bVar43 = *(byte *)(lVar28 + 0x15 + lVar18);
                        }
                        if ((auVar32 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar44 = 0;
                        }
                        else {
                          bVar44 = *(byte *)(lVar28 + 0x18 + lVar18);
                        }
                        if ((auVar32 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar15 = 0;
                        }
                        else {
                          bVar15 = *(byte *)(lVar28 + 0x1b + lVar18);
                        }
                        if ((auVar32 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar20 = 0;
                        }
                        else {
                          bVar20 = *(byte *)(lVar28 + 0x1e + lVar18);
                        }
                        if ((auVar32 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar2 = 0;
                        }
                        else {
                          bVar2 = *(byte *)(lVar28 + 0x21 + lVar18);
                        }
                        if ((auVar32 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar3 = 0;
                        }
                        else {
                          bVar3 = *(byte *)(lVar28 + 0x24 + lVar18);
                        }
                        if ((auVar32 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar7 = 0;
                        }
                        else {
                          bVar7 = *(byte *)(lVar28 + 0x27 + lVar18);
                        }
                        if ((auVar32 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar13 = 0;
                        }
                        else {
                          bVar13 = *(byte *)(lVar28 + 0x2a + lVar18);
                        }
                        if (auVar32[0xf] < '\0') {
                          bVar21 = *(byte *)(lVar28 + 0x2d + lVar18);
                        }
                        else {
                          bVar21 = 0;
                        }
                        bVar4 = auVar37[0];
                        auVar33[0] = (bVar4 < bVar35) * bVar4 | (bVar4 >= bVar35) * bVar35;
                        bVar35 = auVar37[1];
                        auVar33[1] = (bVar35 < bVar34) * bVar35 | (bVar35 >= bVar34) * bVar34;
                        bVar35 = auVar37[2];
                        auVar33[2] = (bVar35 < bVar38) * bVar35 | (bVar35 >= bVar38) * bVar38;
                        bVar35 = auVar37[3];
                        auVar33[3] = (bVar35 < bVar39) * bVar35 | (bVar35 >= bVar39) * bVar39;
                        bVar35 = auVar37[4];
                        auVar33[4] = (bVar35 < bVar40) * bVar35 | (bVar35 >= bVar40) * bVar40;
                        bVar35 = auVar37[5];
                        auVar33[5] = (bVar35 < bVar41) * bVar35 | (bVar35 >= bVar41) * bVar41;
                        bVar35 = auVar37[6];
                        auVar33[6] = (bVar35 < bVar42) * bVar35 | (bVar35 >= bVar42) * bVar42;
                        bVar35 = auVar37[7];
                        auVar33[7] = (bVar35 < bVar43) * bVar35 | (bVar35 >= bVar43) * bVar43;
                        bVar35 = auVar37[8];
                        auVar33[8] = (bVar35 < bVar44) * bVar35 | (bVar35 >= bVar44) * bVar44;
                        bVar35 = auVar37[9];
                        auVar33[9] = (bVar35 < bVar15) * bVar35 | (bVar35 >= bVar15) * bVar15;
                        bVar35 = auVar37[10];
                        auVar33[10] = (bVar35 < bVar20) * bVar35 | (bVar35 >= bVar20) * bVar20;
                        bVar35 = auVar37[0xb];
                        auVar33[0xb] = (bVar35 < bVar2) * bVar35 | (bVar35 >= bVar2) * bVar2;
                        bVar35 = auVar37[0xc];
                        auVar33[0xc] = (bVar35 < bVar3) * bVar35 | (bVar35 >= bVar3) * bVar3;
                        bVar35 = auVar37[0xd];
                        auVar33[0xd] = (bVar35 < bVar7) * bVar35 | (bVar35 >= bVar7) * bVar7;
                        bVar35 = auVar37[0xe];
                        auVar33[0xe] = (bVar35 < bVar13) * bVar35 | (bVar35 >= bVar13) * bVar13;
                        bVar35 = auVar37[0xf];
                        auVar33[0xf] = (bVar35 < bVar21) * bVar35 | (bVar35 >= bVar21) * bVar21;
                        auVar37 = auVar33 & auVar32 | ~auVar32 & auVar37;
                      }
                      lVar28 = lVar28 + 0x30;
                      uStack_68 = uStack_68 + 0x10;
                    } while (uStack_68 < uVar19);
                    bVar35 = auVar37[8];
                    bVar34 = auVar37[0];
                    bVar34 = (bVar35 < bVar34) * bVar35 | (bVar35 >= bVar34) * bVar34;
                    bVar35 = auVar37[9];
                    bVar38 = auVar37[1];
                    bVar38 = (bVar35 < bVar38) * bVar35 | (bVar35 >= bVar38) * bVar38;
                    bVar35 = auVar37[10];
                    bVar39 = auVar37[2];
                    bVar39 = (bVar35 < bVar39) * bVar35 | (bVar35 >= bVar39) * bVar39;
                    bVar35 = auVar37[0xb];
                    bVar40 = auVar37[3];
                    bVar40 = (bVar35 < bVar40) * bVar35 | (bVar35 >= bVar40) * bVar40;
                    bVar35 = auVar37[0xc];
                    bVar41 = auVar37[4];
                    bVar41 = (bVar35 < bVar41) * bVar35 | (bVar35 >= bVar41) * bVar41;
                    bVar35 = auVar37[0xd];
                    bVar42 = auVar37[5];
                    bVar42 = (bVar35 < bVar42) * bVar35 | (bVar35 >= bVar42) * bVar42;
                    bVar35 = auVar37[0xe];
                    bVar43 = auVar37[6];
                    bVar43 = (bVar35 < bVar43) * bVar35 | (bVar35 >= bVar43) * bVar43;
                    bVar35 = auVar37[0xf];
                    bVar44 = auVar37[7];
                    bVar44 = (bVar35 < bVar44) * bVar35 | (bVar35 >= bVar44) * bVar44;
                    bVar35 = (bVar41 < bVar34) * bVar41 | (bVar41 >= bVar34) * bVar34;
                    bVar34 = (bVar42 < bVar38) * bVar42 | (bVar42 >= bVar38) * bVar38;
                    bVar38 = (bVar43 < bVar39) * bVar43 | (bVar43 >= bVar39) * bVar39;
                    bVar39 = (bVar44 < bVar40) * bVar44 | (bVar44 >= bVar40) * bVar40;
                    bVar35 = (bVar38 < bVar35) * bVar38 | (bVar38 >= bVar35) * bVar35;
                    bVar34 = (bVar39 < bVar34) * bVar39 | (bVar39 >= bVar34) * bVar34;
                    bVar35 = (bVar34 < bVar35) * bVar34 | (bVar34 >= bVar35) * bVar35;
                    uVar9 = uVar19;
                  }
                }
                for (; uVar9 < uVar8; uVar9 = uVar9 + 1) {
                  if ((*(char *)(uVar9 + uVar22) != '\0') &&
                     (bVar34 = *(byte *)(lVar14 + uVar9 * 3 + uVar12), bVar34 < bVar35)) {
                    bVar35 = bVar34;
                  }
                }
              }
              uVar23 = uVar23 + 1;
              uVar22 = uVar22 + uVar8;
              uVar12 = uVar12 + lVar26;
            } while (uVar23 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(byte *)(uVar25 + param_3 + lVar16) = bVar35;
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar6);
      }
      uVar31 = uVar31 + 1;
      lVar16 = lVar16 + param_4;
      lVar29 = lVar29 + lVar26;
    } while (uVar31 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}


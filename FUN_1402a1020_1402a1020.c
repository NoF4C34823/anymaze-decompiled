
void FUN_1402a1020(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ulonglong *param_6,ulonglong param_7,undefined8 param_8,
                  byte *param_9)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  ulonglong uVar17;
  byte *pbVar18;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar32;
  byte bVar33;
  byte bVar36;
  byte bVar37;
  undefined4 uVar34;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar35 [16];
  
  uVar21 = 0;
  lVar22 = *param_5;
  uVar10 = *param_6;
  uVar7 = param_6[1];
  uVar26 = lVar22 * 4 + 0x1fU & 0xffffffffffffffe0;
  uVar28 = uVar7 - 1;
  uVar24 = lVar22 * 4;
  lVar27 = 0;
  lVar29 = 0;
  lVar9 = (param_1 - (int)(uVar28 >> 1) * param_2) + (longlong)(int)(uVar10 - 1 >> 1) * -4;
  lVar14 = 0;
  if (param_7 == 0) {
    lVar27 = lVar9;
    pbVar18 = param_9;
    if (0 < (longlong)uVar28) {
      do {
        uVar17 = 0;
        if (0 < (longlong)uVar24) {
          do {
            bVar33 = 0;
            if (0 < (longlong)uVar10) {
              lVar27 = 1;
              if (uVar10 >> 1 != 0) {
                lVar27 = lVar9 + lVar29 + uVar17;
                uVar12 = 0;
                do {
                  uVar20 = uVar12;
                  bVar32 = *(byte *)(lVar27 + uVar20 * 8);
                  bVar36 = *(byte *)(lVar27 + 4 + uVar20 * 8);
                  if (bVar32 <= bVar33) {
                    bVar32 = bVar33;
                  }
                  bVar33 = bVar32;
                  if (bVar32 < bVar36) {
                    bVar33 = bVar36;
                  }
                  uVar12 = uVar20 + 1;
                } while (uVar12 < uVar10 >> 1);
                lVar27 = uVar20 + 2 + uVar12;
              }
              if ((lVar27 - 1U < uVar10) &&
                 (bVar32 = *(byte *)(lVar9 + lVar29 + -4 + lVar27 * 4 + uVar17), bVar33 < bVar32)) {
                bVar33 = bVar32;
              }
            }
            param_9[uVar17 + lVar14] = bVar33;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar24);
        }
        lVar29 = lVar29 + param_2;
        uVar21 = uVar21 + 1;
        pbVar18 = param_9 + lVar14 + uVar26;
        lVar14 = lVar14 + uVar26;
        lVar27 = lVar9 + lVar29;
      } while (uVar21 < uVar28);
    }
    if (0 < param_5[1]) {
      lVar9 = 0;
      param_3 = param_3 - param_4;
      lVar14 = 0;
      uVar24 = lVar22 << 2;
      do {
        param_3 = param_3 + param_4;
        lVar9 = lVar9 + 1;
        lVar14 = lVar14 + param_2;
        uVar10 = 0;
        if (0 < (longlong)uVar24) {
          uVar21 = *param_6;
          lVar22 = (lVar14 - param_2) + lVar27;
          pbVar13 = pbVar18;
          do {
            bVar33 = 0;
            if (0 < (longlong)uVar21) {
              lVar29 = 1;
              if (uVar21 >> 1 != 0) {
                lVar29 = lVar22 + uVar10;
                uVar17 = 0;
                do {
                  uVar12 = uVar17;
                  bVar32 = *(byte *)(lVar29 + uVar12 * 8);
                  bVar36 = *(byte *)(lVar29 + 4 + uVar12 * 8);
                  if (bVar32 <= bVar33) {
                    bVar32 = bVar33;
                  }
                  bVar33 = bVar32;
                  if (bVar32 < bVar36) {
                    bVar33 = bVar36;
                  }
                  uVar17 = uVar12 + 1;
                } while (uVar17 < uVar21 >> 1);
                lVar29 = uVar12 + 2 + uVar17;
              }
              if ((lVar29 - 1U < uVar21) &&
                 (bVar32 = *(byte *)(lVar22 + -4 + lVar29 * 4 + uVar10), bVar33 < bVar32)) {
                bVar33 = bVar32;
              }
            }
            uVar10 = uVar10 + 1;
            *pbVar13 = bVar33;
            pbVar13 = pbVar13 + 1;
          } while (uVar10 < uVar24);
        }
        FUN_1402a53a0(param_9,uVar26,param_3,uVar24,uVar7);
        uVar28 = uVar28 + 1;
        uVar7 = param_6[1];
        pbVar18 = pbVar18 + uVar26;
        if ((longlong)uVar7 <= (longlong)uVar28) {
          pbVar18 = param_9;
          uVar28 = 0;
        }
      } while (lVar9 < param_5[1]);
    }
  }
  else {
    uVar28 = param_5[1];
    if (0 < (longlong)uVar28) {
      do {
        uVar26 = 0;
        if (0 < (longlong)uVar24) {
          do {
            uVar17 = 0;
            bVar33 = 0;
            if (0 < (longlong)uVar7) {
              lVar22 = lVar9 + lVar29 + uVar26;
              uVar12 = uVar17;
              uVar20 = param_7;
              bVar33 = 0;
              do {
                uVar25 = 0;
                if (0 < (longlong)uVar10) {
                  if (0xf < (longlong)uVar10) {
                    uVar15 = uVar20 & 0xf;
                    if (uVar15 != 0) {
                      uVar15 = 0x10 - uVar15;
                    }
                    if ((longlong)(uVar15 + 0x10) <= (longlong)uVar10) {
                      uVar23 = uVar10 - (uVar10 - uVar15 & 0xf);
                      if (uVar15 != 0) {
                        do {
                          if ((*(char *)(uVar25 + uVar20) != '\0') &&
                             (bVar32 = *(byte *)(lVar22 + uVar17 + uVar25 * 4), bVar33 < bVar32)) {
                            bVar33 = bVar32;
                          }
                          uVar25 = uVar25 + 1;
                        } while (uVar25 < uVar15);
                      }
                      lVar14 = lVar22 + uVar17;
                      uVar34 = CONCAT22(CONCAT11(bVar33,bVar33),CONCAT11(bVar33,bVar33));
                      auVar35._0_8_ = CONCAT44(uVar34,uVar34);
                      auVar35._8_8_ = auVar35._0_8_;
                      do {
                        pcVar1 = (char *)(uVar20 + uVar15);
                        auVar30[0] = -(*pcVar1 == '\0');
                        auVar30[1] = -(pcVar1[1] == '\0');
                        auVar30[2] = -(pcVar1[2] == '\0');
                        auVar30[3] = -(pcVar1[3] == '\0');
                        auVar30[4] = -(pcVar1[4] == '\0');
                        auVar30[5] = -(pcVar1[5] == '\0');
                        auVar30[6] = -(pcVar1[6] == '\0');
                        auVar30[7] = -(pcVar1[7] == '\0');
                        auVar30[8] = -(pcVar1[8] == '\0');
                        auVar30[9] = -(pcVar1[9] == '\0');
                        auVar30[10] = -(pcVar1[10] == '\0');
                        auVar30[0xb] = -(pcVar1[0xb] == '\0');
                        auVar30[0xc] = -(pcVar1[0xc] == '\0');
                        auVar30[0xd] = -(pcVar1[0xd] == '\0');
                        auVar30[0xe] = -(pcVar1[0xe] == '\0');
                        auVar30[0xf] = -(pcVar1[0xf] == '\0');
                        auVar5._8_4_ = 0xffffffff;
                        auVar5._0_8_ = 0xffffffffffffffff;
                        auVar5._12_4_ = 0xffffffff;
                        auVar30 = auVar30 ^ auVar5;
                        if ((((((((((((((((auVar30 >> 7 & (undefined1  [16])0x1) !=
                                          (undefined1  [16])0x0 ||
                                         (auVar30 >> 0xf & (undefined1  [16])0x1) !=
                                         (undefined1  [16])0x0) ||
                                        (auVar30 >> 0x17 & (undefined1  [16])0x1) !=
                                        (undefined1  [16])0x0) ||
                                       (auVar30 >> 0x1f & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                      (auVar30 >> 0x27 & (undefined1  [16])0x1) !=
                                      (undefined1  [16])0x0) ||
                                     (auVar30 >> 0x2f & (undefined1  [16])0x1) !=
                                     (undefined1  [16])0x0) ||
                                    (auVar30 >> 0x37 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                                   (auVar30 >> 0x3f & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                                  (auVar30 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                  ) || (auVar30 >> 0x4f & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                (auVar30 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                               || (auVar30 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0
                               ) || (auVar30 >> 0x67 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                             (auVar30 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar30 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            auVar30[0xf] < '\0') {
                          if ((auVar30 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar33 = 0;
                          }
                          else {
                            bVar33 = *(byte *)(lVar14 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar32 = 0;
                          }
                          else {
                            bVar32 = *(byte *)(lVar14 + 4 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar36 = 0;
                          }
                          else {
                            bVar36 = *(byte *)(lVar14 + 8 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar37 = 0;
                          }
                          else {
                            bVar37 = *(byte *)(lVar14 + 0xc + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar38 = 0;
                          }
                          else {
                            bVar38 = *(byte *)(lVar14 + 0x10 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar39 = 0;
                          }
                          else {
                            bVar39 = *(byte *)(lVar14 + 0x14 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar40 = 0;
                          }
                          else {
                            bVar40 = *(byte *)(lVar14 + 0x18 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar41 = 0;
                          }
                          else {
                            bVar41 = *(byte *)(lVar14 + 0x1c + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar42 = 0;
                          }
                          else {
                            bVar42 = *(byte *)(lVar14 + 0x20 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar2 = 0;
                          }
                          else {
                            bVar2 = *(byte *)(lVar14 + 0x24 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar3 = 0;
                          }
                          else {
                            bVar3 = *(byte *)(lVar14 + 0x28 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar6 = 0;
                          }
                          else {
                            bVar6 = *(byte *)(lVar14 + 0x2c + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar11 = 0;
                          }
                          else {
                            bVar11 = *(byte *)(lVar14 + 0x30 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar8 = 0;
                          }
                          else {
                            bVar8 = *(byte *)(lVar14 + 0x34 + uVar15 * 4);
                          }
                          if ((auVar30 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar16 = 0;
                          }
                          else {
                            bVar16 = *(byte *)(lVar14 + 0x38 + uVar15 * 4);
                          }
                          if (auVar30[0xf] < '\0') {
                            bVar19 = *(byte *)(lVar14 + 0x3c + uVar15 * 4);
                          }
                          else {
                            bVar19 = 0;
                          }
                          bVar4 = auVar35[0];
                          auVar31[0] = (bVar33 < bVar4) * bVar4 | (bVar33 >= bVar4) * bVar33;
                          bVar33 = auVar35[1];
                          auVar31[1] = (bVar32 < bVar33) * bVar33 | (bVar32 >= bVar33) * bVar32;
                          bVar33 = auVar35[2];
                          auVar31[2] = (bVar36 < bVar33) * bVar33 | (bVar36 >= bVar33) * bVar36;
                          bVar33 = auVar35[3];
                          auVar31[3] = (bVar37 < bVar33) * bVar33 | (bVar37 >= bVar33) * bVar37;
                          bVar33 = auVar35[4];
                          auVar31[4] = (bVar38 < bVar33) * bVar33 | (bVar38 >= bVar33) * bVar38;
                          bVar33 = auVar35[5];
                          auVar31[5] = (bVar39 < bVar33) * bVar33 | (bVar39 >= bVar33) * bVar39;
                          bVar33 = auVar35[6];
                          auVar31[6] = (bVar40 < bVar33) * bVar33 | (bVar40 >= bVar33) * bVar40;
                          bVar33 = auVar35[7];
                          auVar31[7] = (bVar41 < bVar33) * bVar33 | (bVar41 >= bVar33) * bVar41;
                          bVar33 = auVar35[8];
                          auVar31[8] = (bVar42 < bVar33) * bVar33 | (bVar42 >= bVar33) * bVar42;
                          bVar33 = auVar35[9];
                          auVar31[9] = (bVar2 < bVar33) * bVar33 | (bVar2 >= bVar33) * bVar2;
                          bVar33 = auVar35[10];
                          auVar31[10] = (bVar3 < bVar33) * bVar33 | (bVar3 >= bVar33) * bVar3;
                          bVar33 = auVar35[0xb];
                          auVar31[0xb] = (bVar6 < bVar33) * bVar33 | (bVar6 >= bVar33) * bVar6;
                          bVar33 = auVar35[0xc];
                          auVar31[0xc] = (bVar11 < bVar33) * bVar33 | (bVar11 >= bVar33) * bVar11;
                          bVar33 = auVar35[0xd];
                          auVar31[0xd] = (bVar8 < bVar33) * bVar33 | (bVar8 >= bVar33) * bVar8;
                          bVar33 = auVar35[0xe];
                          auVar31[0xe] = (bVar16 < bVar33) * bVar33 | (bVar16 >= bVar33) * bVar16;
                          bVar33 = auVar35[0xf];
                          auVar31[0xf] = (bVar19 < bVar33) * bVar33 | (bVar19 >= bVar33) * bVar19;
                          auVar35 = auVar31 & auVar30 | ~auVar30 & auVar35;
                        }
                        uVar15 = uVar15 + 0x10;
                      } while (uVar15 < uVar23);
                      bVar33 = auVar35[8];
                      bVar32 = auVar35[0];
                      bVar32 = (bVar32 < bVar33) * bVar33 | (bVar32 >= bVar33) * bVar32;
                      bVar33 = auVar35[9];
                      bVar36 = auVar35[1];
                      bVar36 = (bVar36 < bVar33) * bVar33 | (bVar36 >= bVar33) * bVar36;
                      bVar33 = auVar35[10];
                      bVar37 = auVar35[2];
                      bVar37 = (bVar37 < bVar33) * bVar33 | (bVar37 >= bVar33) * bVar37;
                      bVar33 = auVar35[0xb];
                      bVar38 = auVar35[3];
                      bVar38 = (bVar38 < bVar33) * bVar33 | (bVar38 >= bVar33) * bVar38;
                      bVar33 = auVar35[0xc];
                      bVar39 = auVar35[4];
                      bVar39 = (bVar39 < bVar33) * bVar33 | (bVar39 >= bVar33) * bVar39;
                      bVar33 = auVar35[0xd];
                      bVar40 = auVar35[5];
                      bVar40 = (bVar40 < bVar33) * bVar33 | (bVar40 >= bVar33) * bVar40;
                      bVar33 = auVar35[0xe];
                      bVar41 = auVar35[6];
                      bVar41 = (bVar41 < bVar33) * bVar33 | (bVar41 >= bVar33) * bVar41;
                      bVar33 = auVar35[0xf];
                      bVar42 = auVar35[7];
                      bVar42 = (bVar42 < bVar33) * bVar33 | (bVar42 >= bVar33) * bVar42;
                      bVar33 = (bVar32 < bVar39) * bVar39 | (bVar32 >= bVar39) * bVar32;
                      bVar32 = (bVar36 < bVar40) * bVar40 | (bVar36 >= bVar40) * bVar36;
                      bVar36 = (bVar37 < bVar41) * bVar41 | (bVar37 >= bVar41) * bVar37;
                      bVar37 = (bVar38 < bVar42) * bVar42 | (bVar38 >= bVar42) * bVar38;
                      bVar33 = (bVar33 < bVar36) * bVar36 | (bVar33 >= bVar36) * bVar33;
                      bVar32 = (bVar32 < bVar37) * bVar37 | (bVar32 >= bVar37) * bVar32;
                      bVar33 = (bVar33 < bVar32) * bVar32 | (bVar33 >= bVar32) * bVar33;
                      uVar25 = uVar23;
                    }
                  }
                  for (; uVar25 < uVar10; uVar25 = uVar25 + 1) {
                    if ((*(char *)(uVar25 + uVar20) != '\0') &&
                       (bVar32 = *(byte *)(lVar22 + uVar17 + uVar25 * 4), bVar33 < bVar32)) {
                      bVar33 = bVar32;
                    }
                  }
                }
                uVar12 = uVar12 + 1;
                uVar17 = uVar17 + param_2;
                uVar20 = uVar20 + uVar10;
              } while (uVar12 < uVar7);
            }
            *(byte *)(uVar26 + param_3 + lVar27) = bVar33;
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar24);
        }
        uVar21 = uVar21 + 1;
        lVar27 = lVar27 + param_4;
        lVar29 = lVar29 + param_2;
      } while (uVar21 < uVar28);
    }
  }
  return;
}


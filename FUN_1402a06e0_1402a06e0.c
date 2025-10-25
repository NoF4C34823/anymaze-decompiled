
void FUN_1402a06e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ulonglong *param_6,ulonglong param_7,undefined8 param_8,
                  byte *param_9)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  byte *pbVar14;
  byte bVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  byte *pbVar29;
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
  ulonglong uStack_60;
  
  uVar24 = 0;
  uVar6 = *param_5 * 3;
  uVar11 = *param_6;
  uVar25 = param_6[1];
  uVar22 = uVar6 + 0x1f & 0xffffffffffffffe0;
  uVar19 = uVar25 - 1;
  lVar23 = 0;
  lVar27 = 0;
  lVar10 = (param_1 - (int)(uVar19 >> 1) * param_2) + (longlong)(int)(uVar11 - 1 >> 1) * -3;
  lVar17 = 0;
  if (param_7 == 0) {
    lVar23 = lVar10;
    pbVar29 = param_9;
    if (0 < (longlong)uVar19) {
      do {
        uVar28 = 0;
        if (0 < (longlong)uVar6) {
          do {
            bVar33 = 0;
            if (0 < (longlong)uVar11) {
              lVar23 = 1;
              if (uVar11 >> 1 != 0) {
                lVar23 = lVar10 + lVar27 + uVar28;
                uVar13 = 0;
                uVar16 = 0;
                do {
                  uVar7 = uVar16;
                  bVar32 = *(byte *)(uVar13 + lVar23);
                  bVar36 = *(byte *)(uVar13 + 3 + lVar23);
                  if (bVar32 <= bVar33) {
                    bVar32 = bVar33;
                  }
                  bVar33 = bVar32;
                  if (bVar32 < bVar36) {
                    bVar33 = bVar36;
                  }
                  uVar16 = uVar7 + 1;
                  uVar13 = uVar13 + 6;
                } while (uVar16 < uVar11 >> 1);
                lVar23 = uVar7 + 2 + uVar16;
              }
              if ((lVar23 - 1U < uVar11) &&
                 (bVar32 = *(byte *)(lVar23 * 3 + -3 + lVar10 + lVar27 + uVar28), bVar33 < bVar32))
              {
                bVar33 = bVar32;
              }
            }
            param_9[uVar28 + lVar17] = bVar33;
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar6);
        }
        lVar27 = lVar27 + param_2;
        uVar24 = uVar24 + 1;
        pbVar29 = param_9 + lVar17 + uVar22;
        lVar17 = lVar17 + uVar22;
        lVar23 = lVar10 + lVar27;
      } while (uVar24 < uVar19);
    }
    if (0 < param_5[1]) {
      lVar17 = 0;
      param_3 = param_3 - param_4;
      lVar10 = 0;
      do {
        param_3 = param_3 + param_4;
        lVar17 = lVar17 + 1;
        lVar10 = lVar10 + param_2;
        uVar11 = 0;
        if (0 < (longlong)uVar6) {
          uVar24 = *param_6;
          lVar27 = (lVar10 - param_2) + lVar23;
          pbVar14 = pbVar29;
          do {
            bVar33 = 0;
            if (0 < (longlong)uVar24) {
              lVar26 = 1;
              if (uVar24 >> 1 != 0) {
                lVar26 = lVar27 + uVar11;
                uVar28 = 0;
                uVar13 = 0;
                do {
                  uVar16 = uVar13;
                  bVar32 = *(byte *)(uVar28 + lVar26);
                  bVar36 = *(byte *)(uVar28 + 3 + lVar26);
                  if (bVar32 <= bVar33) {
                    bVar32 = bVar33;
                  }
                  bVar33 = bVar32;
                  if (bVar32 < bVar36) {
                    bVar33 = bVar36;
                  }
                  uVar13 = uVar16 + 1;
                  uVar28 = uVar28 + 6;
                } while (uVar13 < uVar24 >> 1);
                lVar26 = uVar16 + 2 + uVar13;
              }
              if ((lVar26 - 1U < uVar24) &&
                 (bVar32 = *(byte *)(lVar26 * 3 + -3 + lVar27 + uVar11), bVar33 < bVar32)) {
                bVar33 = bVar32;
              }
            }
            uVar11 = uVar11 + 1;
            *pbVar14 = bVar33;
            pbVar14 = pbVar14 + 1;
          } while (uVar11 < uVar6);
        }
        FUN_1402a53a0(param_9,uVar22,param_3,uVar6,uVar25);
        uVar19 = uVar19 + 1;
        uVar25 = param_6[1];
        pbVar29 = pbVar29 + uVar22;
        if ((longlong)uVar25 <= (longlong)uVar19) {
          pbVar29 = param_9;
          uVar19 = 0;
        }
      } while (lVar17 < param_5[1]);
    }
  }
  else {
    uVar19 = param_5[1];
    if (0 < (longlong)uVar19) {
      do {
        uVar22 = 0;
        if (0 < (longlong)uVar6) {
          do {
            uVar28 = 0;
            bVar33 = 0;
            if (0 < (longlong)uVar25) {
              lVar17 = lVar10 + lVar27 + uVar22;
              uVar13 = param_7;
              uVar16 = uVar28;
              bVar33 = 0;
              do {
                uVar7 = 0;
                if (0 < (longlong)uVar11) {
                  if (0xf < (longlong)uVar11) {
                    uStack_60 = uVar13 & 0xf;
                    if (uStack_60 != 0) {
                      uStack_60 = 0x10 - uStack_60;
                    }
                    if ((longlong)(uStack_60 + 0x10) <= (longlong)uVar11) {
                      uVar20 = uVar11 - (uVar11 - uStack_60 & 0xf);
                      if (uStack_60 != 0) {
                        do {
                          if ((*(char *)(uVar7 + uVar13) != '\0') &&
                             (bVar32 = *(byte *)(lVar17 + uVar7 * 3 + uVar28), bVar33 < bVar32)) {
                            bVar33 = bVar32;
                          }
                          uVar7 = uVar7 + 1;
                        } while (uVar7 < uStack_60);
                      }
                      lVar8 = uStack_60 * 3;
                      lVar26 = lVar17 + uVar28;
                      uVar34 = CONCAT22(CONCAT11(bVar33,bVar33),CONCAT11(bVar33,bVar33));
                      auVar35._0_8_ = CONCAT44(uVar34,uVar34);
                      auVar35._8_8_ = auVar35._0_8_;
                      do {
                        pcVar1 = (char *)(uVar13 + uStack_60);
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
                            bVar33 = *(byte *)(lVar8 + lVar26);
                          }
                          if ((auVar30 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar32 = 0;
                          }
                          else {
                            bVar32 = *(byte *)(lVar8 + 3 + lVar26);
                          }
                          if ((auVar30 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar36 = 0;
                          }
                          else {
                            bVar36 = *(byte *)(lVar8 + 6 + lVar26);
                          }
                          if ((auVar30 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar37 = 0;
                          }
                          else {
                            bVar37 = *(byte *)(lVar8 + 9 + lVar26);
                          }
                          if ((auVar30 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar38 = 0;
                          }
                          else {
                            bVar38 = *(byte *)(lVar8 + 0xc + lVar26);
                          }
                          if ((auVar30 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar39 = 0;
                          }
                          else {
                            bVar39 = *(byte *)(lVar8 + 0xf + lVar26);
                          }
                          if ((auVar30 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar40 = 0;
                          }
                          else {
                            bVar40 = *(byte *)(lVar8 + 0x12 + lVar26);
                          }
                          if ((auVar30 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar41 = 0;
                          }
                          else {
                            bVar41 = *(byte *)(lVar8 + 0x15 + lVar26);
                          }
                          if ((auVar30 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar42 = 0;
                          }
                          else {
                            bVar42 = *(byte *)(lVar8 + 0x18 + lVar26);
                          }
                          if ((auVar30 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar15 = 0;
                          }
                          else {
                            bVar15 = *(byte *)(lVar8 + 0x1b + lVar26);
                          }
                          if ((auVar30 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar18 = 0;
                          }
                          else {
                            bVar18 = *(byte *)(lVar8 + 0x1e + lVar26);
                          }
                          if ((auVar30 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar2 = 0;
                          }
                          else {
                            bVar2 = *(byte *)(lVar8 + 0x21 + lVar26);
                          }
                          if ((auVar30 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar3 = 0;
                          }
                          else {
                            bVar3 = *(byte *)(lVar8 + 0x24 + lVar26);
                          }
                          if ((auVar30 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar12 = 0;
                          }
                          else {
                            bVar12 = *(byte *)(lVar8 + 0x27 + lVar26);
                          }
                          if ((auVar30 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                            bVar9 = 0;
                          }
                          else {
                            bVar9 = *(byte *)(lVar8 + 0x2a + lVar26);
                          }
                          if (auVar30[0xf] < '\0') {
                            bVar21 = *(byte *)(lVar8 + 0x2d + lVar26);
                          }
                          else {
                            bVar21 = 0;
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
                          auVar31[9] = (bVar15 < bVar33) * bVar33 | (bVar15 >= bVar33) * bVar15;
                          bVar33 = auVar35[10];
                          auVar31[10] = (bVar18 < bVar33) * bVar33 | (bVar18 >= bVar33) * bVar18;
                          bVar33 = auVar35[0xb];
                          auVar31[0xb] = (bVar2 < bVar33) * bVar33 | (bVar2 >= bVar33) * bVar2;
                          bVar33 = auVar35[0xc];
                          auVar31[0xc] = (bVar3 < bVar33) * bVar33 | (bVar3 >= bVar33) * bVar3;
                          bVar33 = auVar35[0xd];
                          auVar31[0xd] = (bVar12 < bVar33) * bVar33 | (bVar12 >= bVar33) * bVar12;
                          bVar33 = auVar35[0xe];
                          auVar31[0xe] = (bVar9 < bVar33) * bVar33 | (bVar9 >= bVar33) * bVar9;
                          bVar33 = auVar35[0xf];
                          auVar31[0xf] = (bVar21 < bVar33) * bVar33 | (bVar21 >= bVar33) * bVar21;
                          auVar35 = auVar31 & auVar30 | ~auVar30 & auVar35;
                        }
                        lVar8 = lVar8 + 0x30;
                        uStack_60 = uStack_60 + 0x10;
                      } while (uStack_60 < uVar20);
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
                      uVar7 = uVar20;
                    }
                  }
                  for (; uVar7 < uVar11; uVar7 = uVar7 + 1) {
                    if ((*(char *)(uVar7 + uVar13) != '\0') &&
                       (bVar32 = *(byte *)(lVar17 + uVar7 * 3 + uVar28), bVar33 < bVar32)) {
                      bVar33 = bVar32;
                    }
                  }
                }
                uVar16 = uVar16 + 1;
                uVar28 = uVar28 + param_2;
                uVar13 = uVar13 + uVar11;
              } while (uVar16 < uVar25);
            }
            *(byte *)(uVar22 + param_3 + lVar23) = bVar33;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar6);
        }
        uVar24 = uVar24 + 1;
        lVar23 = lVar23 + param_4;
        lVar27 = lVar27 + param_2;
      } while (uVar24 < uVar19);
    }
  }
  return;
}



void FUN_14032d3c0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,longlong param_9)

{
  char *pcVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  longlong lVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte bVar29;
  byte bVar30;
  byte bVar33;
  byte bVar34;
  undefined4 uVar31;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined1 auVar32 [16];
  
  uVar24 = (ulonglong)param_6._4_4_;
  lVar11 = (longlong)param_2;
  param_1 = param_1 - (param_6._4_4_ + -1 >> 1) * lVar11;
  lVar23 = (longlong)((int)param_6 + -1 >> 1);
  uVar19 = (longlong)(int)param_5 * 4 + 0x1fU & 0xffffffffffffffe0;
  uVar2 = (longlong)(int)param_5 * 4;
  lVar17 = lVar23 * -4 + param_1;
  if (param_7 == 0) {
    lVar25 = 0;
    lVar14 = uVar24 - 1;
    lVar23 = param_9;
    if (lVar14 != 0 && 0 < (longlong)uVar24) {
      do {
        FUN_14031cfa0(lVar17,lVar23,uVar2,(longlong)(int)param_6,4);
        lVar25 = lVar25 + 1;
        lVar17 = lVar17 + lVar11;
        lVar23 = lVar23 + uVar19;
      } while (lVar25 < lVar14);
    }
    uVar26 = 0;
    lVar25 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_14031cfa0(lVar17,lVar23,uVar2,(longlong)(int)param_6,4);
        uVar21 = 0;
        if (0 < (longlong)uVar2) {
          do {
            bVar30 = 0xff;
            if (0 < (longlong)uVar24) {
              uVar18 = 0;
              uVar12 = 1;
              lVar15 = 0;
              if (uVar24 >> 3 != 0) {
                do {
                  uVar18 = uVar18 + 1;
                  bVar29 = *(byte *)(param_9 + uVar19 + uVar21 + lVar15 * 8);
                  bVar33 = *(byte *)(param_9 + uVar19 * 2 + uVar21 + lVar15 * 8);
                  bVar34 = *(byte *)(param_9 + uVar19 * 6 + uVar21 + lVar15 * 8);
                  bVar35 = *(byte *)(param_9 + uVar19 * 3 + uVar21 + lVar15 * 8);
                  bVar36 = *(byte *)(param_9 + uVar21 + lVar15 * 8);
                  if (bVar30 <= bVar36) {
                    bVar36 = bVar30;
                  }
                  bVar30 = *(byte *)(param_9 + uVar19 * 4 + uVar21 + lVar15 * 8);
                  if (bVar36 <= bVar29) {
                    bVar29 = bVar36;
                  }
                  bVar36 = *(byte *)(uVar19 * 5 + param_9 + uVar21 + lVar15 * 8);
                  if (bVar29 <= bVar33) {
                    bVar33 = bVar29;
                  }
                  bVar29 = *(byte *)(uVar19 * 7 + param_9 + uVar21 + lVar15 * 8);
                  if (bVar33 <= bVar35) {
                    bVar35 = bVar33;
                  }
                  if (bVar35 <= bVar30) {
                    bVar30 = bVar35;
                  }
                  if (bVar30 <= bVar36) {
                    bVar36 = bVar30;
                  }
                  if (bVar36 <= bVar34) {
                    bVar34 = bVar36;
                  }
                  bVar30 = bVar34;
                  if (bVar29 < bVar34) {
                    bVar30 = bVar29;
                  }
                  lVar15 = lVar15 + uVar19;
                } while (uVar18 < uVar24 >> 3);
                uVar12 = uVar18 * 8 + 1;
              }
              if (uVar12 <= uVar24) {
                    /* WARNING: Could not recover jumptable at 0x00014032d7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_14032d7ce +
                          (byte)(&DAT_143089c80)[(uint)(param_6._4_4_ - (int)uVar12)]))();
                return;
              }
            }
            *(byte *)(uVar21 + param_3 + lVar25) = bVar30;
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar2);
        }
        lVar14 = lVar14 + 1;
        lVar23 = lVar23 + uVar19;
        if ((longlong)uVar24 <= lVar14) {
          lVar14 = 0;
          lVar23 = param_9;
        }
        uVar26 = uVar26 + 1;
        lVar17 = lVar17 + lVar11;
        lVar25 = lVar25 + param_4;
      } while (uVar26 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else {
    uVar19 = 0;
    lVar14 = 0;
    lVar17 = 0;
    if (0 < param_5._4_4_) {
      do {
        uVar26 = 0;
        if (0 < (longlong)uVar2) {
          do {
            uVar21 = 0;
            bVar30 = 0xff;
            lVar25 = 0;
            if (0 < (longlong)uVar24) {
              lVar15 = param_1 + lVar23 * -4 + lVar17 + uVar26;
              uVar12 = param_7;
              bVar30 = 0xff;
              do {
                lVar8 = (longlong)(int)param_6;
                if (0 < lVar8) {
                  if (lVar8 < 0x10) {
LAB_14032de4e:
                    uVar22 = 0;
                  }
                  else {
                    uVar18 = uVar12 & 0xf;
                    if (uVar18 != 0) {
                      uVar18 = 0x10 - uVar18;
                    }
                    if (lVar8 < (longlong)(uVar18 + 0x10)) goto LAB_14032de4e;
                    uVar20 = 0;
                    uVar22 = lVar8 - (lVar8 - uVar18 & 0xf);
                    if (uVar18 != 0) {
                      do {
                        if ((*(char *)(uVar20 + uVar12) != '\0') &&
                           (bVar29 = *(byte *)(lVar15 + lVar25 + uVar20 * 4), bVar29 < bVar30)) {
                          bVar30 = bVar29;
                        }
                        uVar20 = uVar20 + 1;
                      } while (uVar20 < uVar18);
                    }
                    lVar8 = lVar15 + lVar25;
                    uVar31 = CONCAT22(CONCAT11(bVar30,bVar30),CONCAT11(bVar30,bVar30));
                    auVar32._0_8_ = CONCAT44(uVar31,uVar31);
                    auVar32._8_8_ = auVar32._0_8_;
                    do {
                      pcVar1 = (char *)(uVar12 + uVar18);
                      auVar27[0] = -(*pcVar1 == '\0');
                      auVar27[1] = -(pcVar1[1] == '\0');
                      auVar27[2] = -(pcVar1[2] == '\0');
                      auVar27[3] = -(pcVar1[3] == '\0');
                      auVar27[4] = -(pcVar1[4] == '\0');
                      auVar27[5] = -(pcVar1[5] == '\0');
                      auVar27[6] = -(pcVar1[6] == '\0');
                      auVar27[7] = -(pcVar1[7] == '\0');
                      auVar27[8] = -(pcVar1[8] == '\0');
                      auVar27[9] = -(pcVar1[9] == '\0');
                      auVar27[10] = -(pcVar1[10] == '\0');
                      auVar27[0xb] = -(pcVar1[0xb] == '\0');
                      auVar27[0xc] = -(pcVar1[0xc] == '\0');
                      auVar27[0xd] = -(pcVar1[0xd] == '\0');
                      auVar27[0xe] = -(pcVar1[0xe] == '\0');
                      auVar27[0xf] = -(pcVar1[0xf] == '\0');
                      auVar6._8_4_ = 0xffffffff;
                      auVar6._0_8_ = 0xffffffffffffffff;
                      auVar6._12_4_ = 0xffffffff;
                      auVar27 = auVar27 ^ auVar6;
                      if ((((((((((((((((auVar27 >> 7 & (undefined1  [16])0x1) !=
                                        (undefined1  [16])0x0 ||
                                       (auVar27 >> 0xf & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                      (auVar27 >> 0x17 & (undefined1  [16])0x1) !=
                                      (undefined1  [16])0x0) ||
                                     (auVar27 >> 0x1f & (undefined1  [16])0x1) !=
                                     (undefined1  [16])0x0) ||
                                    (auVar27 >> 0x27 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                                   (auVar27 >> 0x2f & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                                  (auVar27 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                  ) || (auVar27 >> 0x3f & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                (auVar27 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                               || (auVar27 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0
                               ) || (auVar27 >> 0x57 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                             (auVar27 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar27 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar27 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar27 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          auVar27[0xf] < '\0') {
                        if ((auVar27 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar30 = 0;
                        }
                        else {
                          bVar30 = *(byte *)(lVar8 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar29 = 0;
                        }
                        else {
                          bVar29 = *(byte *)(lVar8 + 4 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar33 = 0;
                        }
                        else {
                          bVar33 = *(byte *)(lVar8 + 8 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar34 = 0;
                        }
                        else {
                          bVar34 = *(byte *)(lVar8 + 0xc + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar35 = 0;
                        }
                        else {
                          bVar35 = *(byte *)(lVar8 + 0x10 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar36 = 0;
                        }
                        else {
                          bVar36 = *(byte *)(lVar8 + 0x14 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar37 = 0;
                        }
                        else {
                          bVar37 = *(byte *)(lVar8 + 0x18 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar38 = 0;
                        }
                        else {
                          bVar38 = *(byte *)(lVar8 + 0x1c + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar39 = 0;
                        }
                        else {
                          bVar39 = *(byte *)(lVar8 + 0x20 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar3 = 0;
                        }
                        else {
                          bVar3 = *(byte *)(lVar8 + 0x24 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar4 = 0;
                        }
                        else {
                          bVar4 = *(byte *)(lVar8 + 0x28 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar7 = 0;
                        }
                        else {
                          bVar7 = *(byte *)(lVar8 + 0x2c + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar10 = 0;
                        }
                        else {
                          bVar10 = *(byte *)(lVar8 + 0x30 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar9 = 0;
                        }
                        else {
                          bVar9 = *(byte *)(lVar8 + 0x34 + uVar18 * 4);
                        }
                        if ((auVar27 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar13 = 0;
                        }
                        else {
                          bVar13 = *(byte *)(lVar8 + 0x38 + uVar18 * 4);
                        }
                        if (auVar27[0xf] < '\0') {
                          bVar16 = *(byte *)(lVar8 + 0x3c + uVar18 * 4);
                        }
                        else {
                          bVar16 = 0;
                        }
                        bVar5 = auVar32[0];
                        auVar28[0] = (bVar5 < bVar30) * bVar5 | (bVar5 >= bVar30) * bVar30;
                        bVar30 = auVar32[1];
                        auVar28[1] = (bVar30 < bVar29) * bVar30 | (bVar30 >= bVar29) * bVar29;
                        bVar30 = auVar32[2];
                        auVar28[2] = (bVar30 < bVar33) * bVar30 | (bVar30 >= bVar33) * bVar33;
                        bVar30 = auVar32[3];
                        auVar28[3] = (bVar30 < bVar34) * bVar30 | (bVar30 >= bVar34) * bVar34;
                        bVar30 = auVar32[4];
                        auVar28[4] = (bVar30 < bVar35) * bVar30 | (bVar30 >= bVar35) * bVar35;
                        bVar30 = auVar32[5];
                        auVar28[5] = (bVar30 < bVar36) * bVar30 | (bVar30 >= bVar36) * bVar36;
                        bVar30 = auVar32[6];
                        auVar28[6] = (bVar30 < bVar37) * bVar30 | (bVar30 >= bVar37) * bVar37;
                        bVar30 = auVar32[7];
                        auVar28[7] = (bVar30 < bVar38) * bVar30 | (bVar30 >= bVar38) * bVar38;
                        bVar30 = auVar32[8];
                        auVar28[8] = (bVar30 < bVar39) * bVar30 | (bVar30 >= bVar39) * bVar39;
                        bVar30 = auVar32[9];
                        auVar28[9] = (bVar30 < bVar3) * bVar30 | (bVar30 >= bVar3) * bVar3;
                        bVar30 = auVar32[10];
                        auVar28[10] = (bVar30 < bVar4) * bVar30 | (bVar30 >= bVar4) * bVar4;
                        bVar30 = auVar32[0xb];
                        auVar28[0xb] = (bVar30 < bVar7) * bVar30 | (bVar30 >= bVar7) * bVar7;
                        bVar30 = auVar32[0xc];
                        auVar28[0xc] = (bVar30 < bVar10) * bVar30 | (bVar30 >= bVar10) * bVar10;
                        bVar30 = auVar32[0xd];
                        auVar28[0xd] = (bVar30 < bVar9) * bVar30 | (bVar30 >= bVar9) * bVar9;
                        bVar30 = auVar32[0xe];
                        auVar28[0xe] = (bVar30 < bVar13) * bVar30 | (bVar30 >= bVar13) * bVar13;
                        bVar30 = auVar32[0xf];
                        auVar28[0xf] = (bVar30 < bVar16) * bVar30 | (bVar30 >= bVar16) * bVar16;
                        auVar32 = auVar28 & auVar27 | ~auVar27 & auVar32;
                      }
                      uVar18 = uVar18 + 0x10;
                    } while (uVar18 < uVar22);
                    bVar30 = auVar32[8];
                    bVar29 = auVar32[0];
                    bVar29 = (bVar30 < bVar29) * bVar30 | (bVar30 >= bVar29) * bVar29;
                    bVar30 = auVar32[9];
                    bVar33 = auVar32[1];
                    bVar33 = (bVar30 < bVar33) * bVar30 | (bVar30 >= bVar33) * bVar33;
                    bVar30 = auVar32[10];
                    bVar34 = auVar32[2];
                    bVar34 = (bVar30 < bVar34) * bVar30 | (bVar30 >= bVar34) * bVar34;
                    bVar30 = auVar32[0xb];
                    bVar35 = auVar32[3];
                    bVar35 = (bVar30 < bVar35) * bVar30 | (bVar30 >= bVar35) * bVar35;
                    bVar30 = auVar32[0xc];
                    bVar36 = auVar32[4];
                    bVar36 = (bVar30 < bVar36) * bVar30 | (bVar30 >= bVar36) * bVar36;
                    bVar30 = auVar32[0xd];
                    bVar37 = auVar32[5];
                    bVar37 = (bVar30 < bVar37) * bVar30 | (bVar30 >= bVar37) * bVar37;
                    bVar30 = auVar32[0xe];
                    bVar38 = auVar32[6];
                    bVar38 = (bVar30 < bVar38) * bVar30 | (bVar30 >= bVar38) * bVar38;
                    bVar30 = auVar32[0xf];
                    bVar39 = auVar32[7];
                    bVar39 = (bVar30 < bVar39) * bVar30 | (bVar30 >= bVar39) * bVar39;
                    bVar30 = (bVar36 < bVar29) * bVar36 | (bVar36 >= bVar29) * bVar29;
                    bVar29 = (bVar37 < bVar33) * bVar37 | (bVar37 >= bVar33) * bVar33;
                    bVar33 = (bVar38 < bVar34) * bVar38 | (bVar38 >= bVar34) * bVar34;
                    bVar34 = (bVar39 < bVar35) * bVar39 | (bVar39 >= bVar35) * bVar35;
                    bVar30 = (bVar33 < bVar30) * bVar33 | (bVar33 >= bVar30) * bVar30;
                    bVar29 = (bVar34 < bVar29) * bVar34 | (bVar34 >= bVar29) * bVar29;
                    bVar30 = (bVar29 < bVar30) * bVar29 | (bVar29 >= bVar30) * bVar30;
                  }
                  for (; uVar22 < (ulonglong)(longlong)(int)param_6; uVar22 = uVar22 + 1) {
                    if ((*(char *)(uVar22 + uVar12) != '\0') &&
                       (bVar29 = *(byte *)(lVar15 + lVar25 + uVar22 * 4), bVar29 < bVar30)) {
                      bVar30 = bVar29;
                    }
                  }
                }
                uVar21 = uVar21 + 1;
                lVar25 = lVar25 + lVar11;
                uVar12 = uVar12 + (longlong)(int)param_6;
              } while (uVar21 < uVar24);
            }
            *(byte *)(uVar26 + param_3 + lVar14) = bVar30;
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar2);
        }
        uVar19 = uVar19 + 1;
        lVar14 = lVar14 + param_4;
        lVar17 = lVar17 + lVar11;
      } while (uVar19 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}


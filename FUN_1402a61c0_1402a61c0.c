
void FUN_1402a61c0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,longlong param_9)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
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
  longlong lVar21;
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
  ulonglong uStack_b8;
  
  uVar24 = (ulonglong)param_6._4_4_;
  lVar11 = (longlong)param_2;
  param_1 = param_1 - (param_6._4_4_ + -1 >> 1) * lVar11;
  lVar23 = (longlong)((int)param_6 + -1 >> 1);
  uVar6 = (longlong)(int)param_5 * 3;
  uVar19 = uVar6 + 0x1f & 0xffffffffffffffe0;
  lVar17 = lVar23 * -3 + param_1;
  if (param_7 == 0) {
    lVar25 = 0;
    lVar14 = uVar24 - 1;
    lVar23 = param_9;
    if (lVar14 != 0 && 0 < (longlong)uVar24) {
      do {
        FUN_140299b60(lVar17,lVar23,uVar6,(longlong)(int)param_6,3);
        lVar25 = lVar25 + 1;
        lVar17 = lVar17 + lVar11;
        lVar23 = lVar23 + uVar19;
      } while (lVar25 < lVar14);
    }
    uVar26 = 0;
    lVar25 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_140299b60(lVar17,lVar23,uVar6,(longlong)(int)param_6,3);
        uVar22 = 0;
        if (0 < (longlong)uVar6) {
          do {
            bVar30 = 0;
            if (0 < (longlong)uVar24) {
              uVar18 = 0;
              uVar12 = 1;
              lVar15 = 0;
              if (uVar24 >> 3 != 0) {
                do {
                  uVar18 = uVar18 + 1;
                  bVar29 = *(byte *)(param_9 + uVar19 + uVar22 + lVar15 * 8);
                  bVar33 = *(byte *)(param_9 + uVar19 * 2 + uVar22 + lVar15 * 8);
                  bVar34 = *(byte *)(param_9 + uVar19 * 6 + uVar22 + lVar15 * 8);
                  bVar35 = *(byte *)(param_9 + uVar19 * 3 + uVar22 + lVar15 * 8);
                  bVar36 = *(byte *)(param_9 + uVar22 + lVar15 * 8);
                  if (bVar36 <= bVar30) {
                    bVar36 = bVar30;
                  }
                  bVar30 = *(byte *)(param_9 + uVar19 * 4 + uVar22 + lVar15 * 8);
                  if (bVar29 <= bVar36) {
                    bVar29 = bVar36;
                  }
                  bVar36 = *(byte *)(uVar19 * 5 + param_9 + uVar22 + lVar15 * 8);
                  if (bVar33 <= bVar29) {
                    bVar33 = bVar29;
                  }
                  bVar29 = *(byte *)(uVar19 * 7 + param_9 + uVar22 + lVar15 * 8);
                  if (bVar35 <= bVar33) {
                    bVar35 = bVar33;
                  }
                  if (bVar30 <= bVar35) {
                    bVar30 = bVar35;
                  }
                  if (bVar36 <= bVar30) {
                    bVar36 = bVar30;
                  }
                  if (bVar34 <= bVar36) {
                    bVar34 = bVar36;
                  }
                  bVar30 = bVar34;
                  if (bVar34 < bVar29) {
                    bVar30 = bVar29;
                  }
                  lVar15 = lVar15 + uVar19;
                } while (uVar18 < uVar24 >> 3);
                uVar12 = uVar18 * 8 + 1;
              }
              if (uVar12 <= uVar24) {
                    /* WARNING: Could not recover jumptable at 0x0001402a65cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_1402a65ce +
                          (byte)(&UNK_143089b30)[(uint)(param_6._4_4_ - (int)uVar12)]))();
                return;
              }
            }
            *(byte *)(uVar22 + param_3 + lVar25) = bVar30;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar6);
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
        if (0 < (longlong)uVar6) {
          do {
            uVar22 = 0;
            bVar30 = 0;
            lVar25 = 0;
            if (0 < (longlong)uVar24) {
              lVar15 = param_1 + lVar23 * -3 + lVar17 + uVar26;
              uVar12 = param_7;
              bVar30 = 0;
              do {
                lVar8 = (longlong)(int)param_6;
                if (0 < lVar8) {
                  if (lVar8 < 0x10) {
LAB_1402a6c91:
                    uVar18 = 0;
                  }
                  else {
                    uStack_b8 = uVar12 & 0xf;
                    if (uStack_b8 != 0) {
                      uStack_b8 = 0x10 - uStack_b8;
                    }
                    if (lVar8 < (longlong)(uStack_b8 + 0x10)) goto LAB_1402a6c91;
                    uVar20 = 0;
                    uVar18 = lVar8 - (lVar8 - uStack_b8 & 0xf);
                    if (uStack_b8 != 0) {
                      do {
                        if ((*(char *)(uVar20 + uVar12) != '\0') &&
                           (bVar29 = *(byte *)(lVar15 + uVar20 * 3 + lVar25), bVar30 < bVar29)) {
                          bVar30 = bVar29;
                        }
                        uVar20 = uVar20 + 1;
                      } while (uVar20 < uStack_b8);
                    }
                    lVar21 = uStack_b8 * 3;
                    lVar8 = lVar15 + lVar25;
                    uVar31 = CONCAT22(CONCAT11(bVar30,bVar30),CONCAT11(bVar30,bVar30));
                    auVar32._0_8_ = CONCAT44(uVar31,uVar31);
                    auVar32._8_8_ = auVar32._0_8_;
                    do {
                      pcVar1 = (char *)(uVar12 + uStack_b8);
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
                      auVar5._8_4_ = 0xffffffff;
                      auVar5._0_8_ = 0xffffffffffffffff;
                      auVar5._12_4_ = 0xffffffff;
                      auVar27 = auVar27 ^ auVar5;
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
                          bVar30 = *(byte *)(lVar21 + lVar8);
                        }
                        if ((auVar27 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar29 = 0;
                        }
                        else {
                          bVar29 = *(byte *)(lVar21 + 3 + lVar8);
                        }
                        if ((auVar27 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar33 = 0;
                        }
                        else {
                          bVar33 = *(byte *)(lVar21 + 6 + lVar8);
                        }
                        if ((auVar27 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar34 = 0;
                        }
                        else {
                          bVar34 = *(byte *)(lVar21 + 9 + lVar8);
                        }
                        if ((auVar27 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar35 = 0;
                        }
                        else {
                          bVar35 = *(byte *)(lVar21 + 0xc + lVar8);
                        }
                        if ((auVar27 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar36 = 0;
                        }
                        else {
                          bVar36 = *(byte *)(lVar21 + 0xf + lVar8);
                        }
                        if ((auVar27 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar37 = 0;
                        }
                        else {
                          bVar37 = *(byte *)(lVar21 + 0x12 + lVar8);
                        }
                        if ((auVar27 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar38 = 0;
                        }
                        else {
                          bVar38 = *(byte *)(lVar21 + 0x15 + lVar8);
                        }
                        if ((auVar27 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar39 = 0;
                        }
                        else {
                          bVar39 = *(byte *)(lVar21 + 0x18 + lVar8);
                        }
                        if ((auVar27 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar9 = 0;
                        }
                        else {
                          bVar9 = *(byte *)(lVar21 + 0x1b + lVar8);
                        }
                        if ((auVar27 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar13 = 0;
                        }
                        else {
                          bVar13 = *(byte *)(lVar21 + 0x1e + lVar8);
                        }
                        if ((auVar27 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar2 = 0;
                        }
                        else {
                          bVar2 = *(byte *)(lVar21 + 0x21 + lVar8);
                        }
                        if ((auVar27 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar3 = 0;
                        }
                        else {
                          bVar3 = *(byte *)(lVar21 + 0x24 + lVar8);
                        }
                        if ((auVar27 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar7 = 0;
                        }
                        else {
                          bVar7 = *(byte *)(lVar21 + 0x27 + lVar8);
                        }
                        if ((auVar27 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar10 = 0;
                        }
                        else {
                          bVar10 = *(byte *)(lVar21 + 0x2a + lVar8);
                        }
                        if (auVar27[0xf] < '\0') {
                          bVar16 = *(byte *)(lVar21 + 0x2d + lVar8);
                        }
                        else {
                          bVar16 = 0;
                        }
                        bVar4 = auVar32[0];
                        auVar28[0] = (bVar30 < bVar4) * bVar4 | (bVar30 >= bVar4) * bVar30;
                        bVar30 = auVar32[1];
                        auVar28[1] = (bVar29 < bVar30) * bVar30 | (bVar29 >= bVar30) * bVar29;
                        bVar30 = auVar32[2];
                        auVar28[2] = (bVar33 < bVar30) * bVar30 | (bVar33 >= bVar30) * bVar33;
                        bVar30 = auVar32[3];
                        auVar28[3] = (bVar34 < bVar30) * bVar30 | (bVar34 >= bVar30) * bVar34;
                        bVar30 = auVar32[4];
                        auVar28[4] = (bVar35 < bVar30) * bVar30 | (bVar35 >= bVar30) * bVar35;
                        bVar30 = auVar32[5];
                        auVar28[5] = (bVar36 < bVar30) * bVar30 | (bVar36 >= bVar30) * bVar36;
                        bVar30 = auVar32[6];
                        auVar28[6] = (bVar37 < bVar30) * bVar30 | (bVar37 >= bVar30) * bVar37;
                        bVar30 = auVar32[7];
                        auVar28[7] = (bVar38 < bVar30) * bVar30 | (bVar38 >= bVar30) * bVar38;
                        bVar30 = auVar32[8];
                        auVar28[8] = (bVar39 < bVar30) * bVar30 | (bVar39 >= bVar30) * bVar39;
                        bVar30 = auVar32[9];
                        auVar28[9] = (bVar9 < bVar30) * bVar30 | (bVar9 >= bVar30) * bVar9;
                        bVar30 = auVar32[10];
                        auVar28[10] = (bVar13 < bVar30) * bVar30 | (bVar13 >= bVar30) * bVar13;
                        bVar30 = auVar32[0xb];
                        auVar28[0xb] = (bVar2 < bVar30) * bVar30 | (bVar2 >= bVar30) * bVar2;
                        bVar30 = auVar32[0xc];
                        auVar28[0xc] = (bVar3 < bVar30) * bVar30 | (bVar3 >= bVar30) * bVar3;
                        bVar30 = auVar32[0xd];
                        auVar28[0xd] = (bVar7 < bVar30) * bVar30 | (bVar7 >= bVar30) * bVar7;
                        bVar30 = auVar32[0xe];
                        auVar28[0xe] = (bVar10 < bVar30) * bVar30 | (bVar10 >= bVar30) * bVar10;
                        bVar30 = auVar32[0xf];
                        auVar28[0xf] = (bVar16 < bVar30) * bVar30 | (bVar16 >= bVar30) * bVar16;
                        auVar32 = auVar28 & auVar27 | ~auVar27 & auVar32;
                      }
                      lVar21 = lVar21 + 0x30;
                      uStack_b8 = uStack_b8 + 0x10;
                    } while (uStack_b8 < uVar18);
                    bVar30 = auVar32[8];
                    bVar29 = auVar32[0];
                    bVar29 = (bVar29 < bVar30) * bVar30 | (bVar29 >= bVar30) * bVar29;
                    bVar30 = auVar32[9];
                    bVar33 = auVar32[1];
                    bVar33 = (bVar33 < bVar30) * bVar30 | (bVar33 >= bVar30) * bVar33;
                    bVar30 = auVar32[10];
                    bVar34 = auVar32[2];
                    bVar34 = (bVar34 < bVar30) * bVar30 | (bVar34 >= bVar30) * bVar34;
                    bVar30 = auVar32[0xb];
                    bVar35 = auVar32[3];
                    bVar35 = (bVar35 < bVar30) * bVar30 | (bVar35 >= bVar30) * bVar35;
                    bVar30 = auVar32[0xc];
                    bVar36 = auVar32[4];
                    bVar36 = (bVar36 < bVar30) * bVar30 | (bVar36 >= bVar30) * bVar36;
                    bVar30 = auVar32[0xd];
                    bVar37 = auVar32[5];
                    bVar37 = (bVar37 < bVar30) * bVar30 | (bVar37 >= bVar30) * bVar37;
                    bVar30 = auVar32[0xe];
                    bVar38 = auVar32[6];
                    bVar38 = (bVar38 < bVar30) * bVar30 | (bVar38 >= bVar30) * bVar38;
                    bVar30 = auVar32[0xf];
                    bVar39 = auVar32[7];
                    bVar39 = (bVar39 < bVar30) * bVar30 | (bVar39 >= bVar30) * bVar39;
                    bVar30 = (bVar29 < bVar36) * bVar36 | (bVar29 >= bVar36) * bVar29;
                    bVar29 = (bVar33 < bVar37) * bVar37 | (bVar33 >= bVar37) * bVar33;
                    bVar33 = (bVar34 < bVar38) * bVar38 | (bVar34 >= bVar38) * bVar34;
                    bVar34 = (bVar35 < bVar39) * bVar39 | (bVar35 >= bVar39) * bVar35;
                    bVar30 = (bVar30 < bVar33) * bVar33 | (bVar30 >= bVar33) * bVar30;
                    bVar29 = (bVar29 < bVar34) * bVar34 | (bVar29 >= bVar34) * bVar29;
                    bVar30 = (bVar30 < bVar29) * bVar29 | (bVar30 >= bVar29) * bVar30;
                  }
                  for (; uVar18 < (ulonglong)(longlong)(int)param_6; uVar18 = uVar18 + 1) {
                    if ((*(char *)(uVar18 + uVar12) != '\0') &&
                       (bVar29 = *(byte *)(lVar15 + uVar18 * 3 + lVar25), bVar30 < bVar29)) {
                      bVar30 = bVar29;
                    }
                  }
                }
                uVar22 = uVar22 + 1;
                lVar25 = lVar25 + lVar11;
                uVar12 = uVar12 + (longlong)(int)param_6;
              } while (uVar22 < uVar24);
            }
            *(byte *)(uVar26 + param_3 + lVar14) = bVar30;
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar6);
        }
        uVar19 = uVar19 + 1;
        lVar14 = lVar14 + param_4;
        lVar17 = lVar17 + lVar11;
      } while (uVar19 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}


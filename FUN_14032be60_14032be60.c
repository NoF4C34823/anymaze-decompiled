
void FUN_14032be60(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
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
  
  uVar26 = (ulonglong)param_6._4_4_;
  lVar9 = (longlong)param_2;
  uVar12 = (ulonglong)(int)param_6;
  lVar24 = (param_1 - ((int)param_6 + -1 >> 1)) - (param_6._4_4_ + -1 >> 1) * lVar9;
  uVar25 = (longlong)(int)param_5 + 0x1fU & 0xffffffffffffffe0;
  if (param_7 == 0) {
    lVar17 = 0;
    lVar13 = uVar26 - 1;
    lVar22 = param_9;
    if (lVar13 != 0 && 0 < (longlong)uVar26) {
      do {
        FUN_14031cfa0(lVar24,lVar22,(longlong)(int)param_5,uVar12,1);
        lVar17 = lVar17 + 1;
        lVar24 = lVar24 + lVar9;
        lVar22 = lVar22 + uVar25;
      } while (lVar17 < lVar13);
    }
    uVar19 = 0;
    lVar17 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_14031cfa0(lVar24,lVar22,(longlong)(int)param_5,uVar12,1);
        uVar23 = 0;
        if (0 < (longlong)(int)param_5) {
          do {
            bVar30 = 0xff;
            if (0 < (longlong)uVar26) {
              uVar18 = 0;
              uVar10 = 1;
              lVar14 = 0;
              if (uVar26 >> 3 != 0) {
                do {
                  uVar18 = uVar18 + 1;
                  bVar29 = *(byte *)(param_9 + uVar25 + uVar23 + lVar14 * 8);
                  bVar33 = *(byte *)(param_9 + uVar25 * 2 + uVar23 + lVar14 * 8);
                  bVar34 = *(byte *)(param_9 + uVar25 * 6 + uVar23 + lVar14 * 8);
                  bVar35 = *(byte *)(param_9 + uVar25 * 3 + uVar23 + lVar14 * 8);
                  bVar36 = *(byte *)(param_9 + uVar23 + lVar14 * 8);
                  if (bVar30 <= bVar36) {
                    bVar36 = bVar30;
                  }
                  bVar30 = *(byte *)(param_9 + uVar25 * 4 + uVar23 + lVar14 * 8);
                  if (bVar36 <= bVar29) {
                    bVar29 = bVar36;
                  }
                  bVar36 = *(byte *)(uVar25 * 5 + param_9 + uVar23 + lVar14 * 8);
                  if (bVar29 <= bVar33) {
                    bVar33 = bVar29;
                  }
                  bVar29 = *(byte *)(uVar25 * 7 + param_9 + uVar23 + lVar14 * 8);
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
                  lVar14 = lVar14 + uVar25;
                } while (uVar18 < uVar26 >> 3);
                uVar10 = uVar18 * 8 + 1;
              }
              if (uVar10 <= uVar26) {
                    /* WARNING: Could not recover jumptable at 0x00014032c26d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_14032c26f +
                          (byte)(&DAT_143089c70)[(uint)(param_6._4_4_ - (int)uVar10)]))();
                return;
              }
            }
            *(byte *)(uVar23 + param_3 + lVar17) = bVar30;
            uVar23 = uVar23 + 1;
          } while (uVar23 < (ulonglong)(longlong)(int)param_5);
        }
        lVar13 = lVar13 + 1;
        lVar22 = lVar22 + uVar25;
        if ((longlong)uVar26 <= lVar13) {
          lVar13 = 0;
          lVar22 = param_9;
        }
        uVar19 = uVar19 + 1;
        lVar24 = lVar24 + lVar9;
        lVar17 = lVar17 + param_4;
      } while (uVar19 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else {
    uVar25 = 0;
    lVar13 = 0;
    lVar22 = 0;
    if (0 < param_5._4_4_) {
      do {
        uVar19 = 0;
        if (0 < (int)param_5) {
          do {
            uVar23 = 0;
            bVar30 = 0xff;
            lVar17 = 0;
            if (0 < (longlong)uVar26) {
              lVar14 = lVar24 + lVar22 + uVar19;
              uVar10 = param_7;
              bVar30 = 0xff;
              do {
                if (0 < (longlong)uVar12) {
                  if ((longlong)uVar12 < 0x10) {
LAB_14032c8d1:
                    uVar20 = 0;
                  }
                  else {
                    uVar18 = uVar10 & 0xf;
                    if (uVar18 != 0) {
                      uVar18 = 0x10 - uVar18;
                    }
                    if ((longlong)uVar12 < (longlong)(uVar18 + 0x10)) goto LAB_14032c8d1;
                    uVar15 = 0;
                    uVar20 = uVar12 - (uVar12 - uVar18 & 0xf);
                    if (uVar18 != 0) {
                      do {
                        if ((*(char *)(uVar15 + uVar10) != '\0') &&
                           (bVar29 = *(byte *)(lVar14 + lVar17 + uVar15), bVar29 < bVar30)) {
                          bVar30 = bVar29;
                        }
                        uVar15 = uVar15 + 1;
                      } while (uVar15 < uVar18);
                    }
                    lVar1 = lVar14 + lVar17;
                    uVar31 = CONCAT22(CONCAT11(bVar30,bVar30),CONCAT11(bVar30,bVar30));
                    auVar32._0_8_ = CONCAT44(uVar31,uVar31);
                    auVar32._8_8_ = auVar32._0_8_;
                    do {
                      pcVar2 = (char *)(uVar10 + uVar18);
                      auVar27[0] = -(*pcVar2 == '\0');
                      auVar27[1] = -(pcVar2[1] == '\0');
                      auVar27[2] = -(pcVar2[2] == '\0');
                      auVar27[3] = -(pcVar2[3] == '\0');
                      auVar27[4] = -(pcVar2[4] == '\0');
                      auVar27[5] = -(pcVar2[5] == '\0');
                      auVar27[6] = -(pcVar2[6] == '\0');
                      auVar27[7] = -(pcVar2[7] == '\0');
                      auVar27[8] = -(pcVar2[8] == '\0');
                      auVar27[9] = -(pcVar2[9] == '\0');
                      auVar27[10] = -(pcVar2[10] == '\0');
                      auVar27[0xb] = -(pcVar2[0xb] == '\0');
                      auVar27[0xc] = -(pcVar2[0xc] == '\0');
                      auVar27[0xd] = -(pcVar2[0xd] == '\0');
                      auVar27[0xe] = -(pcVar2[0xe] == '\0');
                      auVar27[0xf] = -(pcVar2[0xf] == '\0');
                      auVar6._8_4_ = 0xffffffff;
                      auVar6._0_8_ = 0xffffffffffffffff;
                      auVar6._12_4_ = 0xffffffff;
                      auVar27 = auVar27 ^ auVar6;
                      if ((auVar27 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar30 = 0;
                      }
                      else {
                        bVar30 = *(byte *)(uVar18 + lVar1);
                      }
                      if ((auVar27 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar29 = 0;
                      }
                      else {
                        bVar29 = *(byte *)(uVar18 + 1 + lVar1);
                      }
                      if ((auVar27 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar33 = 0;
                      }
                      else {
                        bVar33 = *(byte *)(uVar18 + 2 + lVar1);
                      }
                      if ((auVar27 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar34 = 0;
                      }
                      else {
                        bVar34 = *(byte *)(uVar18 + 3 + lVar1);
                      }
                      if ((auVar27 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar35 = 0;
                      }
                      else {
                        bVar35 = *(byte *)(uVar18 + 4 + lVar1);
                      }
                      if ((auVar27 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar36 = 0;
                      }
                      else {
                        bVar36 = *(byte *)(uVar18 + 5 + lVar1);
                      }
                      if ((auVar27 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar37 = 0;
                      }
                      else {
                        bVar37 = *(byte *)(uVar18 + 6 + lVar1);
                      }
                      if ((auVar27 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar38 = 0;
                      }
                      else {
                        bVar38 = *(byte *)(uVar18 + 7 + lVar1);
                      }
                      if ((auVar27 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar39 = 0;
                      }
                      else {
                        bVar39 = *(byte *)(uVar18 + 8 + lVar1);
                      }
                      if ((auVar27 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar3 = 0;
                      }
                      else {
                        bVar3 = *(byte *)(uVar18 + 9 + lVar1);
                      }
                      if ((auVar27 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar4 = 0;
                      }
                      else {
                        bVar4 = *(byte *)(uVar18 + 10 + lVar1);
                      }
                      if ((auVar27 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar8 = 0;
                      }
                      else {
                        bVar8 = *(byte *)(uVar18 + 0xb + lVar1);
                      }
                      if ((auVar27 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar7 = 0;
                      }
                      else {
                        bVar7 = *(byte *)(uVar18 + 0xc + lVar1);
                      }
                      if ((auVar27 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar11 = 0;
                      }
                      else {
                        bVar11 = *(byte *)(uVar18 + 0xd + lVar1);
                      }
                      if ((auVar27 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar16 = 0;
                      }
                      else {
                        bVar16 = *(byte *)(uVar18 + 0xe + lVar1);
                      }
                      if (auVar27[0xf] < '\0') {
                        bVar21 = *(byte *)(uVar18 + 0xf + lVar1);
                      }
                      else {
                        bVar21 = 0;
                      }
                      uVar18 = uVar18 + 0x10;
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
                      auVar28[0xb] = (bVar30 < bVar8) * bVar30 | (bVar30 >= bVar8) * bVar8;
                      bVar30 = auVar32[0xc];
                      auVar28[0xc] = (bVar30 < bVar7) * bVar30 | (bVar30 >= bVar7) * bVar7;
                      bVar30 = auVar32[0xd];
                      auVar28[0xd] = (bVar30 < bVar11) * bVar30 | (bVar30 >= bVar11) * bVar11;
                      bVar30 = auVar32[0xe];
                      auVar28[0xe] = (bVar30 < bVar16) * bVar30 | (bVar30 >= bVar16) * bVar16;
                      bVar30 = auVar32[0xf];
                      auVar28[0xf] = (bVar30 < bVar21) * bVar30 | (bVar30 >= bVar21) * bVar21;
                      auVar32 = auVar28 & auVar27 | ~auVar27 & auVar32;
                    } while (uVar18 < uVar20);
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
                  for (; uVar20 < uVar12; uVar20 = uVar20 + 1) {
                    if ((*(char *)(uVar20 + uVar10) != '\0') &&
                       (bVar29 = *(byte *)(lVar14 + lVar17 + uVar20), bVar29 < bVar30)) {
                      bVar30 = bVar29;
                    }
                  }
                }
                uVar23 = uVar23 + 1;
                lVar17 = lVar17 + lVar9;
                uVar10 = uVar10 + uVar12;
              } while (uVar23 < uVar26);
            }
            *(byte *)(uVar19 + param_3 + lVar13) = bVar30;
            uVar19 = uVar19 + 1;
          } while (uVar19 < (ulonglong)(longlong)(int)param_5);
        }
        uVar25 = uVar25 + 1;
        lVar13 = lVar13 + param_4;
        lVar22 = lVar22 + lVar9;
      } while (uVar25 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}


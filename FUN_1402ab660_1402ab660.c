
void FUN_1402ab660(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,ulonglong param_7,undefined8 param_8,
                  longlong param_9)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  ulonglong uVar15;
  byte bVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte bVar30;
  byte bVar31;
  byte bVar34;
  byte bVar35;
  undefined4 uVar32;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar33 [16];
  
  uVar23 = param_6[1];
  uVar22 = *param_6;
  uVar4 = *param_5;
  uVar25 = uVar4 + 0x1f & 0xffffffffffffffe0;
  lVar17 = (param_1 - (int)(uVar22 - 1 >> 1)) - (int)(uVar23 - 1 >> 1) * param_2;
  if (param_7 == 0) {
    lVar26 = 0;
    lVar12 = param_9;
    if (0 < (longlong)(uVar23 - 1)) {
      while( true ) {
        FUN_140299b60(lVar17,lVar12,uVar4,uVar22,1);
        uVar23 = param_6[1];
        lVar26 = lVar26 + 1;
        lVar17 = lVar17 + param_2;
        lVar12 = lVar12 + uVar25;
        if ((longlong)(uVar23 - 1) <= lVar26) break;
        uVar22 = *param_6;
      }
    }
    lVar26 = uVar23 - 1;
    if (0 < (longlong)param_5[1]) {
      lVar24 = 0;
      lVar17 = lVar17 - param_2;
      lVar27 = lVar24;
      do {
        lVar17 = lVar17 + param_2;
        lVar27 = lVar27 + 1;
        lVar24 = lVar24 + param_4;
        FUN_140299b60(lVar17,lVar12,uVar4,*param_6,1);
        uVar23 = param_6[1];
        if (0 < (longlong)uVar4) {
          uVar22 = 0;
          do {
            bVar31 = 0;
            if (0 < (longlong)uVar23) {
              uVar21 = 0;
              uVar9 = 1;
              lVar18 = 0;
              if (uVar23 >> 3 != 0) {
                do {
                  uVar21 = uVar21 + 1;
                  bVar30 = *(byte *)(param_9 + uVar25 + uVar22 + lVar18 * 8);
                  bVar34 = *(byte *)(param_9 + uVar25 * 2 + uVar22 + lVar18 * 8);
                  bVar35 = *(byte *)(param_9 + uVar25 * 6 + uVar22 + lVar18 * 8);
                  bVar36 = *(byte *)(param_9 + uVar25 * 3 + uVar22 + lVar18 * 8);
                  bVar37 = *(byte *)(param_9 + uVar22 + lVar18 * 8);
                  if (bVar37 <= bVar31) {
                    bVar37 = bVar31;
                  }
                  bVar31 = *(byte *)(param_9 + uVar25 * 4 + uVar22 + lVar18 * 8);
                  if (bVar30 <= bVar37) {
                    bVar30 = bVar37;
                  }
                  bVar37 = *(byte *)(uVar25 * 5 + param_9 + uVar22 + lVar18 * 8);
                  if (bVar34 <= bVar30) {
                    bVar34 = bVar30;
                  }
                  bVar30 = *(byte *)(uVar25 * 7 + param_9 + uVar22 + lVar18 * 8);
                  if (bVar36 <= bVar34) {
                    bVar36 = bVar34;
                  }
                  if (bVar31 <= bVar36) {
                    bVar31 = bVar36;
                  }
                  if (bVar37 <= bVar31) {
                    bVar37 = bVar31;
                  }
                  if (bVar35 <= bVar37) {
                    bVar35 = bVar37;
                  }
                  bVar31 = bVar35;
                  if (bVar35 < bVar30) {
                    bVar31 = bVar30;
                  }
                  lVar18 = lVar18 + uVar25;
                } while (uVar21 < uVar23 >> 3);
                uVar9 = uVar21 * 8 + 1;
              }
              if (uVar9 <= uVar23) {
                    /* WARNING: Could not recover jumptable at 0x0001402aba8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_1402aba8e + (byte)(&UNK_143089b50)[(uint)((int)uVar23 - (int)uVar9)]
                          ))();
                return;
              }
            }
            *(byte *)(uVar22 + (param_3 - param_4) + lVar24) = bVar31;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar4);
        }
        lVar26 = lVar26 + 1;
        lVar12 = lVar12 + uVar25;
        if ((longlong)uVar23 <= lVar26) {
          lVar26 = 0;
          lVar12 = param_9;
        }
      } while (lVar27 < (longlong)param_5[1]);
    }
  }
  else {
    uVar9 = 0;
    lVar26 = 0;
    uVar25 = param_5[1];
    lVar12 = 0;
    if (0 < (longlong)uVar25) {
      do {
        uVar21 = 0;
        if (0 < (longlong)uVar4) {
          do {
            uVar10 = 0;
            bVar31 = 0;
            lVar27 = 0;
            if (0 < (longlong)uVar23) {
              lVar24 = lVar17 + lVar12 + uVar21;
              uVar19 = param_7;
              bVar31 = 0;
              do {
                if (0 < (longlong)uVar22) {
                  if ((longlong)uVar22 < 0x10) {
LAB_1402ac10f:
                    uVar15 = 0;
                  }
                  else {
                    uVar11 = uVar19 & 0xf;
                    if (uVar11 != 0) {
                      uVar11 = 0x10 - uVar11;
                    }
                    if ((longlong)uVar22 < (longlong)(uVar11 + 0x10)) goto LAB_1402ac10f;
                    uVar13 = 0;
                    uVar15 = uVar22 - (uVar22 - uVar11 & 0xf);
                    if (uVar11 != 0) {
                      do {
                        if ((*(char *)(uVar13 + uVar19) != '\0') &&
                           (bVar30 = *(byte *)(lVar24 + lVar27 + uVar13), bVar31 < bVar30)) {
                          bVar31 = bVar30;
                        }
                        uVar13 = uVar13 + 1;
                      } while (uVar13 < uVar11);
                    }
                    lVar18 = lVar24 + lVar27;
                    uVar32 = CONCAT22(CONCAT11(bVar31,bVar31),CONCAT11(bVar31,bVar31));
                    auVar33._0_8_ = CONCAT44(uVar32,uVar32);
                    auVar33._8_8_ = auVar33._0_8_;
                    do {
                      pcVar1 = (char *)(uVar19 + uVar11);
                      auVar28[0] = -(*pcVar1 == '\0');
                      auVar28[1] = -(pcVar1[1] == '\0');
                      auVar28[2] = -(pcVar1[2] == '\0');
                      auVar28[3] = -(pcVar1[3] == '\0');
                      auVar28[4] = -(pcVar1[4] == '\0');
                      auVar28[5] = -(pcVar1[5] == '\0');
                      auVar28[6] = -(pcVar1[6] == '\0');
                      auVar28[7] = -(pcVar1[7] == '\0');
                      auVar28[8] = -(pcVar1[8] == '\0');
                      auVar28[9] = -(pcVar1[9] == '\0');
                      auVar28[10] = -(pcVar1[10] == '\0');
                      auVar28[0xb] = -(pcVar1[0xb] == '\0');
                      auVar28[0xc] = -(pcVar1[0xc] == '\0');
                      auVar28[0xd] = -(pcVar1[0xd] == '\0');
                      auVar28[0xe] = -(pcVar1[0xe] == '\0');
                      auVar28[0xf] = -(pcVar1[0xf] == '\0');
                      auVar6._8_4_ = 0xffffffff;
                      auVar6._0_8_ = 0xffffffffffffffff;
                      auVar6._12_4_ = 0xffffffff;
                      auVar28 = auVar28 ^ auVar6;
                      if ((auVar28 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar31 = 0;
                      }
                      else {
                        bVar31 = *(byte *)(uVar11 + lVar18);
                      }
                      if ((auVar28 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar30 = 0;
                      }
                      else {
                        bVar30 = *(byte *)(uVar11 + 1 + lVar18);
                      }
                      if ((auVar28 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar34 = 0;
                      }
                      else {
                        bVar34 = *(byte *)(uVar11 + 2 + lVar18);
                      }
                      if ((auVar28 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar35 = 0;
                      }
                      else {
                        bVar35 = *(byte *)(uVar11 + 3 + lVar18);
                      }
                      if ((auVar28 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar36 = 0;
                      }
                      else {
                        bVar36 = *(byte *)(uVar11 + 4 + lVar18);
                      }
                      if ((auVar28 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar37 = 0;
                      }
                      else {
                        bVar37 = *(byte *)(uVar11 + 5 + lVar18);
                      }
                      if ((auVar28 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar38 = 0;
                      }
                      else {
                        bVar38 = *(byte *)(uVar11 + 6 + lVar18);
                      }
                      if ((auVar28 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar39 = 0;
                      }
                      else {
                        bVar39 = *(byte *)(uVar11 + 7 + lVar18);
                      }
                      if ((auVar28 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar40 = 0;
                      }
                      else {
                        bVar40 = *(byte *)(uVar11 + 8 + lVar18);
                      }
                      if ((auVar28 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar2 = 0;
                      }
                      else {
                        bVar2 = *(byte *)(uVar11 + 9 + lVar18);
                      }
                      if ((auVar28 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar3 = 0;
                      }
                      else {
                        bVar3 = *(byte *)(uVar11 + 10 + lVar18);
                      }
                      if ((auVar28 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar7 = 0;
                      }
                      else {
                        bVar7 = *(byte *)(uVar11 + 0xb + lVar18);
                      }
                      if ((auVar28 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar8 = 0;
                      }
                      else {
                        bVar8 = *(byte *)(uVar11 + 0xc + lVar18);
                      }
                      if ((auVar28 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar14 = 0;
                      }
                      else {
                        bVar14 = *(byte *)(uVar11 + 0xd + lVar18);
                      }
                      if ((auVar28 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar16 = 0;
                      }
                      else {
                        bVar16 = *(byte *)(uVar11 + 0xe + lVar18);
                      }
                      if (auVar28[0xf] < '\0') {
                        bVar20 = *(byte *)(uVar11 + 0xf + lVar18);
                      }
                      else {
                        bVar20 = 0;
                      }
                      uVar11 = uVar11 + 0x10;
                      bVar5 = auVar33[0];
                      auVar29[0] = (bVar31 < bVar5) * bVar5 | (bVar31 >= bVar5) * bVar31;
                      bVar31 = auVar33[1];
                      auVar29[1] = (bVar30 < bVar31) * bVar31 | (bVar30 >= bVar31) * bVar30;
                      bVar31 = auVar33[2];
                      auVar29[2] = (bVar34 < bVar31) * bVar31 | (bVar34 >= bVar31) * bVar34;
                      bVar31 = auVar33[3];
                      auVar29[3] = (bVar35 < bVar31) * bVar31 | (bVar35 >= bVar31) * bVar35;
                      bVar31 = auVar33[4];
                      auVar29[4] = (bVar36 < bVar31) * bVar31 | (bVar36 >= bVar31) * bVar36;
                      bVar31 = auVar33[5];
                      auVar29[5] = (bVar37 < bVar31) * bVar31 | (bVar37 >= bVar31) * bVar37;
                      bVar31 = auVar33[6];
                      auVar29[6] = (bVar38 < bVar31) * bVar31 | (bVar38 >= bVar31) * bVar38;
                      bVar31 = auVar33[7];
                      auVar29[7] = (bVar39 < bVar31) * bVar31 | (bVar39 >= bVar31) * bVar39;
                      bVar31 = auVar33[8];
                      auVar29[8] = (bVar40 < bVar31) * bVar31 | (bVar40 >= bVar31) * bVar40;
                      bVar31 = auVar33[9];
                      auVar29[9] = (bVar2 < bVar31) * bVar31 | (bVar2 >= bVar31) * bVar2;
                      bVar31 = auVar33[10];
                      auVar29[10] = (bVar3 < bVar31) * bVar31 | (bVar3 >= bVar31) * bVar3;
                      bVar31 = auVar33[0xb];
                      auVar29[0xb] = (bVar7 < bVar31) * bVar31 | (bVar7 >= bVar31) * bVar7;
                      bVar31 = auVar33[0xc];
                      auVar29[0xc] = (bVar8 < bVar31) * bVar31 | (bVar8 >= bVar31) * bVar8;
                      bVar31 = auVar33[0xd];
                      auVar29[0xd] = (bVar14 < bVar31) * bVar31 | (bVar14 >= bVar31) * bVar14;
                      bVar31 = auVar33[0xe];
                      auVar29[0xe] = (bVar16 < bVar31) * bVar31 | (bVar16 >= bVar31) * bVar16;
                      bVar31 = auVar33[0xf];
                      auVar29[0xf] = (bVar20 < bVar31) * bVar31 | (bVar20 >= bVar31) * bVar20;
                      auVar33 = auVar29 & auVar28 | ~auVar28 & auVar33;
                    } while (uVar11 < uVar15);
                    bVar31 = auVar33[8];
                    bVar30 = auVar33[0];
                    bVar30 = (bVar30 < bVar31) * bVar31 | (bVar30 >= bVar31) * bVar30;
                    bVar31 = auVar33[9];
                    bVar34 = auVar33[1];
                    bVar34 = (bVar34 < bVar31) * bVar31 | (bVar34 >= bVar31) * bVar34;
                    bVar31 = auVar33[10];
                    bVar35 = auVar33[2];
                    bVar35 = (bVar35 < bVar31) * bVar31 | (bVar35 >= bVar31) * bVar35;
                    bVar31 = auVar33[0xb];
                    bVar36 = auVar33[3];
                    bVar36 = (bVar36 < bVar31) * bVar31 | (bVar36 >= bVar31) * bVar36;
                    bVar31 = auVar33[0xc];
                    bVar37 = auVar33[4];
                    bVar37 = (bVar37 < bVar31) * bVar31 | (bVar37 >= bVar31) * bVar37;
                    bVar31 = auVar33[0xd];
                    bVar38 = auVar33[5];
                    bVar38 = (bVar38 < bVar31) * bVar31 | (bVar38 >= bVar31) * bVar38;
                    bVar31 = auVar33[0xe];
                    bVar39 = auVar33[6];
                    bVar39 = (bVar39 < bVar31) * bVar31 | (bVar39 >= bVar31) * bVar39;
                    bVar31 = auVar33[0xf];
                    bVar40 = auVar33[7];
                    bVar40 = (bVar40 < bVar31) * bVar31 | (bVar40 >= bVar31) * bVar40;
                    bVar31 = (bVar30 < bVar37) * bVar37 | (bVar30 >= bVar37) * bVar30;
                    bVar30 = (bVar34 < bVar38) * bVar38 | (bVar34 >= bVar38) * bVar34;
                    bVar34 = (bVar35 < bVar39) * bVar39 | (bVar35 >= bVar39) * bVar35;
                    bVar35 = (bVar36 < bVar40) * bVar40 | (bVar36 >= bVar40) * bVar36;
                    bVar31 = (bVar31 < bVar34) * bVar34 | (bVar31 >= bVar34) * bVar31;
                    bVar30 = (bVar30 < bVar35) * bVar35 | (bVar30 >= bVar35) * bVar30;
                    bVar31 = (bVar31 < bVar30) * bVar30 | (bVar31 >= bVar30) * bVar31;
                  }
                  for (; uVar15 < uVar22; uVar15 = uVar15 + 1) {
                    if ((*(char *)(uVar15 + uVar19) != '\0') &&
                       (bVar30 = *(byte *)(lVar24 + lVar27 + uVar15), bVar31 < bVar30)) {
                      bVar31 = bVar30;
                    }
                  }
                }
                uVar10 = uVar10 + 1;
                lVar27 = lVar27 + param_2;
                uVar19 = uVar19 + uVar22;
              } while (uVar10 < uVar23);
            }
            *(byte *)(uVar21 + param_3 + lVar26) = bVar31;
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar4);
        }
        uVar9 = uVar9 + 1;
        lVar26 = lVar26 + param_4;
        lVar12 = lVar12 + param_2;
      } while (uVar9 < uVar25);
    }
  }
  return;
}


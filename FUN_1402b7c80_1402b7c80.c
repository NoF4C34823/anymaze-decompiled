
void FUN_1402b7c80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ulonglong *param_6,ulonglong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  byte bVar9;
  byte bVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
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
  
  uVar21 = *param_6;
  uVar26 = param_6[1];
  uVar4 = *param_5 * 4;
  uVar11 = *param_5 * 4 + 0x1fU & 0xffffffffffffffe0;
  lVar27 = (param_1 + (longlong)(int)(uVar21 - 1 >> 1) * -4) - (int)(uVar26 - 1 >> 1) * param_2;
  if (param_7 == 0) {
    lVar23 = 0;
    lVar15 = param_9;
    if (0 < (longlong)(uVar26 - 1)) {
      while( true ) {
        FUN_140299b60(lVar27,lVar15,uVar4,uVar21,4);
        uVar26 = param_6[1];
        lVar23 = lVar23 + 1;
        lVar27 = lVar27 + param_2;
        lVar15 = lVar15 + uVar11;
        if ((longlong)(uVar26 - 1) <= lVar23) break;
        uVar21 = *param_6;
      }
    }
    lVar23 = uVar26 - 1;
    lVar24 = 0;
    if (0 < param_5[1]) {
      do {
        FUN_140299b60(lVar27,lVar15,uVar4,*param_6,4);
        FUN_1402a53a0(param_9,uVar11,param_3,uVar4,param_6[1]);
        lVar23 = lVar23 + 1;
        lVar24 = lVar24 + 1;
        lVar15 = lVar15 + uVar11;
        if ((longlong)param_6[1] <= lVar23) {
          lVar15 = param_9;
          lVar23 = 0;
        }
        lVar27 = lVar27 + param_2;
        param_3 = param_3 + param_4;
      } while (lVar24 < param_5[1]);
    }
  }
  else {
    uVar25 = 0;
    lVar15 = 0;
    uVar11 = param_5[1];
    lVar23 = 0;
    if (0 < (longlong)uVar11) {
      do {
        uVar20 = 0;
        if (0 < (longlong)uVar4) {
          do {
            uVar16 = 0;
            bVar31 = 0;
            lVar24 = 0;
            if (0 < (longlong)uVar26) {
              lVar1 = lVar27 + lVar23 + uVar20;
              uVar22 = param_7;
              bVar31 = 0;
              do {
                if (0 < (longlong)uVar21) {
                  if ((longlong)uVar21 < 0x10) {
LAB_1402b8391:
                    uVar19 = 0;
                  }
                  else {
                    uVar13 = uVar22 & 0xf;
                    if (uVar13 != 0) {
                      uVar13 = 0x10 - uVar13;
                    }
                    if ((longlong)uVar21 < (longlong)(uVar13 + 0x10)) goto LAB_1402b8391;
                    uVar17 = 0;
                    uVar19 = uVar21 - (uVar21 - uVar13 & 0xf);
                    if (uVar13 != 0) {
                      do {
                        if ((*(char *)(uVar17 + uVar22) != '\0') &&
                           (bVar30 = *(byte *)(lVar1 + lVar24 + uVar17 * 4), bVar31 < bVar30)) {
                          bVar31 = bVar30;
                        }
                        uVar17 = uVar17 + 1;
                      } while (uVar17 < uVar13);
                    }
                    lVar2 = lVar1 + lVar24;
                    uVar32 = CONCAT22(CONCAT11(bVar31,bVar31),CONCAT11(bVar31,bVar31));
                    auVar33._0_8_ = CONCAT44(uVar32,uVar32);
                    auVar33._8_8_ = auVar33._0_8_;
                    do {
                      pcVar3 = (char *)(uVar22 + uVar13);
                      auVar28[0] = -(*pcVar3 == '\0');
                      auVar28[1] = -(pcVar3[1] == '\0');
                      auVar28[2] = -(pcVar3[2] == '\0');
                      auVar28[3] = -(pcVar3[3] == '\0');
                      auVar28[4] = -(pcVar3[4] == '\0');
                      auVar28[5] = -(pcVar3[5] == '\0');
                      auVar28[6] = -(pcVar3[6] == '\0');
                      auVar28[7] = -(pcVar3[7] == '\0');
                      auVar28[8] = -(pcVar3[8] == '\0');
                      auVar28[9] = -(pcVar3[9] == '\0');
                      auVar28[10] = -(pcVar3[10] == '\0');
                      auVar28[0xb] = -(pcVar3[0xb] == '\0');
                      auVar28[0xc] = -(pcVar3[0xc] == '\0');
                      auVar28[0xd] = -(pcVar3[0xd] == '\0');
                      auVar28[0xe] = -(pcVar3[0xe] == '\0');
                      auVar28[0xf] = -(pcVar3[0xf] == '\0');
                      auVar8._8_4_ = 0xffffffff;
                      auVar8._0_8_ = 0xffffffffffffffff;
                      auVar8._12_4_ = 0xffffffff;
                      auVar28 = auVar28 ^ auVar8;
                      if ((((((((((((((((auVar28 >> 7 & (undefined1  [16])0x1) !=
                                        (undefined1  [16])0x0 ||
                                       (auVar28 >> 0xf & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                      (auVar28 >> 0x17 & (undefined1  [16])0x1) !=
                                      (undefined1  [16])0x0) ||
                                     (auVar28 >> 0x1f & (undefined1  [16])0x1) !=
                                     (undefined1  [16])0x0) ||
                                    (auVar28 >> 0x27 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                                   (auVar28 >> 0x2f & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                                  (auVar28 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                  ) || (auVar28 >> 0x3f & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                (auVar28 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                               || (auVar28 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0
                               ) || (auVar28 >> 0x57 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                             (auVar28 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar28 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar28 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar28 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          auVar28[0xf] < '\0') {
                        if ((auVar28 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar31 = 0;
                        }
                        else {
                          bVar31 = *(byte *)(lVar2 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar30 = 0;
                        }
                        else {
                          bVar30 = *(byte *)(lVar2 + 4 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar34 = 0;
                        }
                        else {
                          bVar34 = *(byte *)(lVar2 + 8 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar35 = 0;
                        }
                        else {
                          bVar35 = *(byte *)(lVar2 + 0xc + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar36 = 0;
                        }
                        else {
                          bVar36 = *(byte *)(lVar2 + 0x10 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar37 = 0;
                        }
                        else {
                          bVar37 = *(byte *)(lVar2 + 0x14 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar38 = 0;
                        }
                        else {
                          bVar38 = *(byte *)(lVar2 + 0x18 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar39 = 0;
                        }
                        else {
                          bVar39 = *(byte *)(lVar2 + 0x1c + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar40 = 0;
                        }
                        else {
                          bVar40 = *(byte *)(lVar2 + 0x20 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar5 = 0;
                        }
                        else {
                          bVar5 = *(byte *)(lVar2 + 0x24 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar6 = 0;
                        }
                        else {
                          bVar6 = *(byte *)(lVar2 + 0x28 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar9 = 0;
                        }
                        else {
                          bVar9 = *(byte *)(lVar2 + 0x2c + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar12 = 0;
                        }
                        else {
                          bVar12 = *(byte *)(lVar2 + 0x30 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar10 = 0;
                        }
                        else {
                          bVar10 = *(byte *)(lVar2 + 0x34 + uVar13 * 4);
                        }
                        if ((auVar28 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar14 = 0;
                        }
                        else {
                          bVar14 = *(byte *)(lVar2 + 0x38 + uVar13 * 4);
                        }
                        if (auVar28[0xf] < '\0') {
                          bVar18 = *(byte *)(lVar2 + 0x3c + uVar13 * 4);
                        }
                        else {
                          bVar18 = 0;
                        }
                        bVar7 = auVar33[0];
                        auVar29[0] = (bVar31 < bVar7) * bVar7 | (bVar31 >= bVar7) * bVar31;
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
                        auVar29[9] = (bVar5 < bVar31) * bVar31 | (bVar5 >= bVar31) * bVar5;
                        bVar31 = auVar33[10];
                        auVar29[10] = (bVar6 < bVar31) * bVar31 | (bVar6 >= bVar31) * bVar6;
                        bVar31 = auVar33[0xb];
                        auVar29[0xb] = (bVar9 < bVar31) * bVar31 | (bVar9 >= bVar31) * bVar9;
                        bVar31 = auVar33[0xc];
                        auVar29[0xc] = (bVar12 < bVar31) * bVar31 | (bVar12 >= bVar31) * bVar12;
                        bVar31 = auVar33[0xd];
                        auVar29[0xd] = (bVar10 < bVar31) * bVar31 | (bVar10 >= bVar31) * bVar10;
                        bVar31 = auVar33[0xe];
                        auVar29[0xe] = (bVar14 < bVar31) * bVar31 | (bVar14 >= bVar31) * bVar14;
                        bVar31 = auVar33[0xf];
                        auVar29[0xf] = (bVar18 < bVar31) * bVar31 | (bVar18 >= bVar31) * bVar18;
                        auVar33 = auVar29 & auVar28 | ~auVar28 & auVar33;
                      }
                      uVar13 = uVar13 + 0x10;
                    } while (uVar13 < uVar19);
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
                  for (; uVar19 < uVar21; uVar19 = uVar19 + 1) {
                    if ((*(char *)(uVar19 + uVar22) != '\0') &&
                       (bVar30 = *(byte *)(lVar1 + lVar24 + uVar19 * 4), bVar31 < bVar30)) {
                      bVar31 = bVar30;
                    }
                  }
                }
                uVar16 = uVar16 + 1;
                uVar22 = uVar22 + uVar21;
                lVar24 = lVar24 + param_2;
              } while (uVar16 < uVar26);
            }
            *(byte *)(uVar20 + param_3 + lVar15) = bVar31;
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar4);
        }
        uVar25 = uVar25 + 1;
        lVar15 = lVar15 + param_4;
        lVar23 = lVar23 + param_2;
      } while (uVar25 < uVar11);
    }
  }
  return;
}


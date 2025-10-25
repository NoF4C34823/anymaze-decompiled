
void FUN_1403358c0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  byte bVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  byte bVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
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
  
  uVar9 = (ulonglong)param_6._4_4_;
  lVar13 = (longlong)param_2;
  param_1 = param_1 - (param_6._4_4_ + -1 >> 1) * lVar13;
  lVar24 = (longlong)((int)param_6 + -1 >> 1);
  uVar3 = (longlong)(int)param_5 * 4;
  uVar22 = (longlong)(int)param_5 * 4 + 0x1fU & 0xffffffffffffffe0;
  lVar11 = lVar24 * -4 + param_1;
  if (param_7 == 0) {
    lVar25 = 0;
    lVar26 = uVar9 - 1;
    lVar24 = param_9;
    if (lVar26 != 0 && 0 < (longlong)uVar9) {
      do {
        FUN_140299b60(lVar11,lVar24,uVar3,(longlong)(int)param_6,4);
        lVar25 = lVar25 + 1;
        lVar11 = lVar11 + lVar13;
        lVar24 = lVar24 + uVar22;
      } while (lVar25 < lVar26);
    }
    lVar25 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_140299b60(lVar11,lVar24,uVar3,(longlong)(int)param_6,4);
        FUN_1402a53a0(param_9,uVar22,param_3,uVar3,uVar9);
        lVar26 = lVar26 + 1;
        lVar24 = lVar24 + uVar22;
        if ((longlong)uVar9 <= lVar26) {
          lVar26 = 0;
          lVar24 = param_9;
        }
        lVar25 = lVar25 + 1;
        lVar11 = lVar11 + lVar13;
        param_3 = param_3 + param_4;
      } while (lVar25 < param_5._4_4_);
    }
  }
  else {
    lVar11 = 0;
    lVar26 = 0;
    uVar22 = 0;
    if (0 < param_5._4_4_) {
      do {
        uVar20 = 0;
        if (0 < (longlong)uVar3) {
          do {
            uVar16 = 0;
            bVar30 = 0;
            lVar25 = 0;
            if (0 < (longlong)uVar9) {
              lVar1 = param_1 + lVar24 * -4 + lVar26 + uVar20;
              uVar21 = param_7;
              bVar30 = 0;
              do {
                lVar23 = (longlong)(int)param_6;
                if (0 < lVar23) {
                  if (lVar23 < 0x10) {
LAB_140335ff1:
                    uVar19 = 0;
                  }
                  else {
                    uVar14 = uVar21 & 0xf;
                    if (uVar14 != 0) {
                      uVar14 = 0x10 - uVar14;
                    }
                    if (lVar23 < (longlong)(uVar14 + 0x10)) goto LAB_140335ff1;
                    uVar17 = 0;
                    uVar19 = lVar23 - (lVar23 - uVar14 & 0xf);
                    if (uVar14 != 0) {
                      do {
                        if ((*(char *)(uVar17 + uVar21) != '\0') &&
                           (bVar29 = *(byte *)(lVar1 + lVar25 + uVar17 * 4), bVar30 < bVar29)) {
                          bVar30 = bVar29;
                        }
                        uVar17 = uVar17 + 1;
                      } while (uVar17 < uVar14);
                    }
                    lVar23 = lVar1 + lVar25;
                    uVar31 = CONCAT22(CONCAT11(bVar30,bVar30),CONCAT11(bVar30,bVar30));
                    auVar32._0_8_ = CONCAT44(uVar31,uVar31);
                    auVar32._8_8_ = auVar32._0_8_;
                    do {
                      pcVar2 = (char *)(uVar21 + uVar14);
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
                      auVar7._8_4_ = 0xffffffff;
                      auVar7._0_8_ = 0xffffffffffffffff;
                      auVar7._12_4_ = 0xffffffff;
                      auVar27 = auVar27 ^ auVar7;
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
                          bVar30 = *(byte *)(lVar23 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar29 = 0;
                        }
                        else {
                          bVar29 = *(byte *)(lVar23 + 4 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar33 = 0;
                        }
                        else {
                          bVar33 = *(byte *)(lVar23 + 8 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar34 = 0;
                        }
                        else {
                          bVar34 = *(byte *)(lVar23 + 0xc + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar35 = 0;
                        }
                        else {
                          bVar35 = *(byte *)(lVar23 + 0x10 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar36 = 0;
                        }
                        else {
                          bVar36 = *(byte *)(lVar23 + 0x14 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar37 = 0;
                        }
                        else {
                          bVar37 = *(byte *)(lVar23 + 0x18 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar38 = 0;
                        }
                        else {
                          bVar38 = *(byte *)(lVar23 + 0x1c + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar39 = 0;
                        }
                        else {
                          bVar39 = *(byte *)(lVar23 + 0x20 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar4 = 0;
                        }
                        else {
                          bVar4 = *(byte *)(lVar23 + 0x24 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar5 = 0;
                        }
                        else {
                          bVar5 = *(byte *)(lVar23 + 0x28 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar8 = 0;
                        }
                        else {
                          bVar8 = *(byte *)(lVar23 + 0x2c + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar12 = 0;
                        }
                        else {
                          bVar12 = *(byte *)(lVar23 + 0x30 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar10 = 0;
                        }
                        else {
                          bVar10 = *(byte *)(lVar23 + 0x34 + uVar14 * 4);
                        }
                        if ((auVar27 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar15 = 0;
                        }
                        else {
                          bVar15 = *(byte *)(lVar23 + 0x38 + uVar14 * 4);
                        }
                        if (auVar27[0xf] < '\0') {
                          bVar18 = *(byte *)(lVar23 + 0x3c + uVar14 * 4);
                        }
                        else {
                          bVar18 = 0;
                        }
                        bVar6 = auVar32[0];
                        auVar28[0] = (bVar30 < bVar6) * bVar6 | (bVar30 >= bVar6) * bVar30;
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
                        auVar28[9] = (bVar4 < bVar30) * bVar30 | (bVar4 >= bVar30) * bVar4;
                        bVar30 = auVar32[10];
                        auVar28[10] = (bVar5 < bVar30) * bVar30 | (bVar5 >= bVar30) * bVar5;
                        bVar30 = auVar32[0xb];
                        auVar28[0xb] = (bVar8 < bVar30) * bVar30 | (bVar8 >= bVar30) * bVar8;
                        bVar30 = auVar32[0xc];
                        auVar28[0xc] = (bVar12 < bVar30) * bVar30 | (bVar12 >= bVar30) * bVar12;
                        bVar30 = auVar32[0xd];
                        auVar28[0xd] = (bVar10 < bVar30) * bVar30 | (bVar10 >= bVar30) * bVar10;
                        bVar30 = auVar32[0xe];
                        auVar28[0xe] = (bVar15 < bVar30) * bVar30 | (bVar15 >= bVar30) * bVar15;
                        bVar30 = auVar32[0xf];
                        auVar28[0xf] = (bVar18 < bVar30) * bVar30 | (bVar18 >= bVar30) * bVar18;
                        auVar32 = auVar28 & auVar27 | ~auVar27 & auVar32;
                      }
                      uVar14 = uVar14 + 0x10;
                    } while (uVar14 < uVar19);
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
                  for (; uVar19 < (ulonglong)(longlong)(int)param_6; uVar19 = uVar19 + 1) {
                    if ((*(char *)(uVar19 + uVar21) != '\0') &&
                       (bVar29 = *(byte *)(lVar1 + lVar25 + uVar19 * 4), bVar30 < bVar29)) {
                      bVar30 = bVar29;
                    }
                  }
                }
                uVar16 = uVar16 + 1;
                uVar21 = uVar21 + (longlong)(int)param_6;
                lVar25 = lVar25 + lVar13;
              } while (uVar16 < uVar9);
            }
            *(byte *)(uVar20 + param_3 + lVar11) = bVar30;
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar3);
        }
        uVar22 = uVar22 + 1;
        lVar11 = lVar11 + param_4;
        lVar26 = lVar26 + lVar13;
      } while (uVar22 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}



void FUN_140315ea0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte bVar17;
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
  ulonglong uStack_60;
  
  uVar9 = (ulonglong)param_6._4_4_;
  lVar14 = (longlong)param_2;
  param_1 = param_1 - (param_6._4_4_ + -1 >> 1) * lVar14;
  lVar24 = (longlong)((int)param_6 + -1 >> 1);
  uVar7 = (longlong)(int)param_5 * 3;
  uVar22 = uVar7 + 0x1f & 0xffffffffffffffe0;
  lVar11 = lVar24 * -3 + param_1;
  if (param_7 == 0) {
    lVar25 = 0;
    lVar26 = uVar9 - 1;
    lVar24 = param_9;
    if (lVar26 != 0 && 0 < (longlong)uVar9) {
      do {
        FUN_14031cfa0(lVar11,lVar24,uVar7,(longlong)(int)param_6,3);
        lVar25 = lVar25 + 1;
        lVar11 = lVar11 + lVar14;
        lVar24 = lVar24 + uVar22;
      } while (lVar25 < lVar26);
    }
    lVar25 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_14031cfa0(lVar11,lVar24,uVar7,(longlong)(int)param_6,3);
        FUN_140328840(param_9,uVar22,param_3,uVar7,uVar9);
        lVar26 = lVar26 + 1;
        lVar24 = lVar24 + uVar22;
        if ((longlong)uVar9 <= lVar26) {
          lVar26 = 0;
          lVar24 = param_9;
        }
        lVar25 = lVar25 + 1;
        lVar11 = lVar11 + lVar14;
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
        if (0 < (longlong)uVar7) {
          do {
            uVar21 = 0;
            bVar30 = 0xff;
            lVar25 = 0;
            if (0 < (longlong)uVar9) {
              lVar1 = param_1 + lVar24 * -3 + lVar26 + uVar20;
              uVar12 = param_7;
              bVar30 = 0xff;
              do {
                lVar23 = (longlong)(int)param_6;
                if (0 < lVar23) {
                  if (lVar23 < 0x10) {
LAB_140316613:
                    uVar19 = 0;
                  }
                  else {
                    uStack_60 = uVar12 & 0xf;
                    if (uStack_60 != 0) {
                      uStack_60 = 0x10 - uStack_60;
                    }
                    if (lVar23 < (longlong)(uStack_60 + 0x10)) goto LAB_140316613;
                    uVar15 = 0;
                    uVar19 = lVar23 - (lVar23 - uStack_60 & 0xf);
                    if (uStack_60 != 0) {
                      do {
                        if ((*(char *)(uVar15 + uVar12) != '\0') &&
                           (bVar29 = *(byte *)(lVar1 + uVar15 * 3 + lVar25), bVar29 < bVar30)) {
                          bVar30 = bVar29;
                        }
                        uVar15 = uVar15 + 1;
                      } while (uVar15 < uStack_60);
                    }
                    lVar16 = uStack_60 * 3;
                    lVar23 = lVar1 + lVar25;
                    uVar31 = CONCAT22(CONCAT11(bVar30,bVar30),CONCAT11(bVar30,bVar30));
                    auVar32._0_8_ = CONCAT44(uVar31,uVar31);
                    auVar32._8_8_ = auVar32._0_8_;
                    do {
                      pcVar2 = (char *)(uVar12 + uStack_60);
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
                          bVar30 = *(byte *)(lVar16 + lVar23);
                        }
                        if ((auVar27 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar29 = 0;
                        }
                        else {
                          bVar29 = *(byte *)(lVar16 + 3 + lVar23);
                        }
                        if ((auVar27 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar33 = 0;
                        }
                        else {
                          bVar33 = *(byte *)(lVar16 + 6 + lVar23);
                        }
                        if ((auVar27 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar34 = 0;
                        }
                        else {
                          bVar34 = *(byte *)(lVar16 + 9 + lVar23);
                        }
                        if ((auVar27 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar35 = 0;
                        }
                        else {
                          bVar35 = *(byte *)(lVar16 + 0xc + lVar23);
                        }
                        if ((auVar27 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar36 = 0;
                        }
                        else {
                          bVar36 = *(byte *)(lVar16 + 0xf + lVar23);
                        }
                        if ((auVar27 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar37 = 0;
                        }
                        else {
                          bVar37 = *(byte *)(lVar16 + 0x12 + lVar23);
                        }
                        if ((auVar27 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar38 = 0;
                        }
                        else {
                          bVar38 = *(byte *)(lVar16 + 0x15 + lVar23);
                        }
                        if ((auVar27 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar39 = 0;
                        }
                        else {
                          bVar39 = *(byte *)(lVar16 + 0x18 + lVar23);
                        }
                        if ((auVar27 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar10 = 0;
                        }
                        else {
                          bVar10 = *(byte *)(lVar16 + 0x1b + lVar23);
                        }
                        if ((auVar27 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar17 = 0;
                        }
                        else {
                          bVar17 = *(byte *)(lVar16 + 0x1e + lVar23);
                        }
                        if ((auVar27 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar3 = 0;
                        }
                        else {
                          bVar3 = *(byte *)(lVar16 + 0x21 + lVar23);
                        }
                        if ((auVar27 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar4 = 0;
                        }
                        else {
                          bVar4 = *(byte *)(lVar16 + 0x24 + lVar23);
                        }
                        if ((auVar27 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar8 = 0;
                        }
                        else {
                          bVar8 = *(byte *)(lVar16 + 0x27 + lVar23);
                        }
                        if ((auVar27 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar13 = 0;
                        }
                        else {
                          bVar13 = *(byte *)(lVar16 + 0x2a + lVar23);
                        }
                        if (auVar27[0xf] < '\0') {
                          bVar18 = *(byte *)(lVar16 + 0x2d + lVar23);
                        }
                        else {
                          bVar18 = 0;
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
                        auVar28[9] = (bVar30 < bVar10) * bVar30 | (bVar30 >= bVar10) * bVar10;
                        bVar30 = auVar32[10];
                        auVar28[10] = (bVar30 < bVar17) * bVar30 | (bVar30 >= bVar17) * bVar17;
                        bVar30 = auVar32[0xb];
                        auVar28[0xb] = (bVar30 < bVar3) * bVar30 | (bVar30 >= bVar3) * bVar3;
                        bVar30 = auVar32[0xc];
                        auVar28[0xc] = (bVar30 < bVar4) * bVar30 | (bVar30 >= bVar4) * bVar4;
                        bVar30 = auVar32[0xd];
                        auVar28[0xd] = (bVar30 < bVar8) * bVar30 | (bVar30 >= bVar8) * bVar8;
                        bVar30 = auVar32[0xe];
                        auVar28[0xe] = (bVar30 < bVar13) * bVar30 | (bVar30 >= bVar13) * bVar13;
                        bVar30 = auVar32[0xf];
                        auVar28[0xf] = (bVar30 < bVar18) * bVar30 | (bVar30 >= bVar18) * bVar18;
                        auVar32 = auVar28 & auVar27 | ~auVar27 & auVar32;
                      }
                      lVar16 = lVar16 + 0x30;
                      uStack_60 = uStack_60 + 0x10;
                    } while (uStack_60 < uVar19);
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
                  for (; uVar19 < (ulonglong)(longlong)(int)param_6; uVar19 = uVar19 + 1) {
                    if ((*(char *)(uVar19 + uVar12) != '\0') &&
                       (bVar29 = *(byte *)(lVar1 + uVar19 * 3 + lVar25), bVar29 < bVar30)) {
                      bVar30 = bVar29;
                    }
                  }
                }
                uVar21 = uVar21 + 1;
                uVar12 = uVar12 + (longlong)(int)param_6;
                lVar25 = lVar25 + lVar14;
              } while (uVar21 < uVar9);
            }
            *(byte *)(uVar20 + param_3 + lVar11) = bVar30;
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar7);
        }
        uVar22 = uVar22 + 1;
        lVar11 = lVar11 + param_4;
        lVar26 = lVar26 + lVar14;
      } while (uVar22 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}



void FUN_14029b3a0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,byte *param_9)

{
  char *pcVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  byte bVar16;
  ulonglong uVar17;
  byte bVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  byte *pbVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte bVar31;
  byte bVar32;
  byte bVar35;
  byte bVar36;
  undefined4 uVar33;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar34 [16];
  byte *pbStack_d8;
  
  uVar28 = 0;
  lVar24 = (longlong)param_2;
  lVar20 = 0;
  lVar26 = 0;
  lVar22 = (param_6._4_4_ + -1 >> 1) * lVar24;
  uVar2 = (longlong)(int)param_5 * 4;
  lVar19 = (longlong)((int)param_6 + -1 >> 1);
  uVar12 = (longlong)(int)param_5 * 4 + 0x1fU & 0xffffffffffffffe0;
  lVar27 = 0;
  lVar8 = (param_1 + lVar19 * -4) - lVar22;
  if (param_7 == 0) {
    lVar20 = (longlong)param_6._4_4_;
    pbStack_d8 = param_9;
    uVar17 = lVar20 - 1;
    if (uVar17 != 0 && 0 < lVar20) {
      param_1 = param_1 + lVar19 * -4;
      uVar9 = (ulonglong)(longlong)(int)param_6 >> 1;
      do {
        if (0 < (longlong)uVar2) {
          lVar8 = (param_1 - lVar22) + lVar26;
          uVar23 = 0;
          do {
            bVar32 = 0;
            if (0 < (int)param_6) {
              lVar19 = 1;
              if (uVar9 != 0) {
                lVar19 = lVar8 + uVar23;
                uVar13 = 0;
                do {
                  uVar11 = uVar13;
                  bVar31 = *(byte *)(lVar19 + uVar11 * 8);
                  bVar35 = *(byte *)(lVar19 + 4 + uVar11 * 8);
                  if (bVar31 <= bVar32) {
                    bVar31 = bVar32;
                  }
                  bVar32 = bVar31;
                  if (bVar31 < bVar35) {
                    bVar32 = bVar35;
                  }
                  uVar13 = uVar11 + 1;
                } while (uVar13 < uVar9);
                lVar19 = uVar11 + 2 + uVar13;
              }
              if ((lVar19 - 1U < (ulonglong)(longlong)(int)param_6) &&
                 (bVar31 = *(byte *)(lVar8 + -4 + lVar19 * 4 + uVar23), bVar32 < bVar31)) {
                bVar32 = bVar31;
              }
            }
            param_9[uVar23 + lVar27] = bVar32;
            uVar23 = uVar23 + 1;
          } while (uVar23 < uVar2);
        }
        uVar28 = uVar28 + 1;
        lVar8 = ((lVar24 + param_1) - lVar22) + lVar26;
        lVar26 = lVar26 + lVar24;
        pbStack_d8 = param_9 + lVar27 + uVar12;
        lVar27 = lVar27 + uVar12;
      } while (uVar28 < uVar17);
    }
    uVar28 = 0;
    if (0 < param_5._4_4_) {
      uVar23 = (ulonglong)(longlong)(int)param_6 >> 1;
      uVar9 = uVar28;
      do {
        if (0 < (longlong)uVar2) {
          uVar13 = 0;
          pbVar25 = pbStack_d8;
          do {
            bVar32 = 0;
            if (0 < (int)param_6) {
              lVar19 = 1;
              if (uVar23 != 0) {
                lVar19 = lVar8 + uVar28 + uVar13;
                uVar11 = 0;
                do {
                  uVar14 = uVar11;
                  bVar31 = *(byte *)(lVar19 + uVar14 * 8);
                  bVar35 = *(byte *)(lVar19 + 4 + uVar14 * 8);
                  if (bVar31 <= bVar32) {
                    bVar31 = bVar32;
                  }
                  bVar32 = bVar31;
                  if (bVar31 < bVar35) {
                    bVar32 = bVar35;
                  }
                  uVar11 = uVar14 + 1;
                } while (uVar11 < uVar23);
                lVar19 = uVar14 + 2 + uVar11;
              }
              if ((lVar19 - 1U < (ulonglong)(longlong)(int)param_6) &&
                 (bVar31 = *(byte *)(lVar8 + uVar28 + -4 + lVar19 * 4 + uVar13), bVar32 < bVar31)) {
                bVar32 = bVar31;
              }
            }
            uVar13 = uVar13 + 1;
            *pbVar25 = bVar32;
            pbVar25 = pbVar25 + 1;
          } while (uVar13 < uVar2);
        }
        FUN_1402a53a0(param_9,uVar12,param_3,uVar2,lVar20);
        uVar17 = uVar17 + 1;
        uVar9 = uVar9 + 1;
        pbStack_d8 = pbStack_d8 + uVar12;
        if (lVar20 <= (longlong)uVar17) {
          uVar17 = 0;
          pbStack_d8 = param_9;
        }
        param_3 = param_3 + param_4;
        uVar28 = uVar28 + lVar24;
      } while (uVar9 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    uVar12 = (ulonglong)(int)param_6;
    do {
      uVar17 = 0;
      if (0 < (longlong)uVar2) {
        do {
          uVar9 = 0;
          bVar32 = 0;
          if (0 < param_6._4_4_) {
            lVar8 = ((param_1 + lVar19 * -4) - lVar22) + lVar26 + uVar17;
            uVar23 = uVar9;
            uVar13 = param_7;
            bVar32 = 0;
            do {
              uVar11 = 0;
              if (0 < (longlong)uVar12) {
                if (0xf < (longlong)uVar12) {
                  uVar14 = uVar13 & 0xf;
                  if (uVar14 != 0) {
                    uVar14 = 0x10 - uVar14;
                  }
                  if ((longlong)(uVar14 + 0x10) <= (longlong)uVar12) {
                    uVar21 = uVar12 - (uVar12 - uVar14 & 0xf);
                    if (uVar14 != 0) {
                      do {
                        if ((*(char *)(uVar11 + uVar13) != '\0') &&
                           (bVar31 = *(byte *)(lVar8 + uVar9 + uVar11 * 4), bVar32 < bVar31)) {
                          bVar32 = bVar31;
                        }
                        uVar11 = uVar11 + 1;
                      } while (uVar11 < uVar14);
                    }
                    lVar27 = lVar8 + uVar9;
                    uVar33 = CONCAT22(CONCAT11(bVar32,bVar32),CONCAT11(bVar32,bVar32));
                    auVar34._0_8_ = CONCAT44(uVar33,uVar33);
                    auVar34._8_8_ = auVar34._0_8_;
                    do {
                      pcVar1 = (char *)(uVar13 + uVar14);
                      auVar29[0] = -(*pcVar1 == '\0');
                      auVar29[1] = -(pcVar1[1] == '\0');
                      auVar29[2] = -(pcVar1[2] == '\0');
                      auVar29[3] = -(pcVar1[3] == '\0');
                      auVar29[4] = -(pcVar1[4] == '\0');
                      auVar29[5] = -(pcVar1[5] == '\0');
                      auVar29[6] = -(pcVar1[6] == '\0');
                      auVar29[7] = -(pcVar1[7] == '\0');
                      auVar29[8] = -(pcVar1[8] == '\0');
                      auVar29[9] = -(pcVar1[9] == '\0');
                      auVar29[10] = -(pcVar1[10] == '\0');
                      auVar29[0xb] = -(pcVar1[0xb] == '\0');
                      auVar29[0xc] = -(pcVar1[0xc] == '\0');
                      auVar29[0xd] = -(pcVar1[0xd] == '\0');
                      auVar29[0xe] = -(pcVar1[0xe] == '\0');
                      auVar29[0xf] = -(pcVar1[0xf] == '\0');
                      auVar6._8_4_ = 0xffffffff;
                      auVar6._0_8_ = 0xffffffffffffffff;
                      auVar6._12_4_ = 0xffffffff;
                      auVar29 = auVar29 ^ auVar6;
                      if ((((((((((((((((auVar29 >> 7 & (undefined1  [16])0x1) !=
                                        (undefined1  [16])0x0 ||
                                       (auVar29 >> 0xf & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                      (auVar29 >> 0x17 & (undefined1  [16])0x1) !=
                                      (undefined1  [16])0x0) ||
                                     (auVar29 >> 0x1f & (undefined1  [16])0x1) !=
                                     (undefined1  [16])0x0) ||
                                    (auVar29 >> 0x27 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                                   (auVar29 >> 0x2f & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                                  (auVar29 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                  ) || (auVar29 >> 0x3f & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                (auVar29 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                               || (auVar29 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0
                               ) || (auVar29 >> 0x57 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                             (auVar29 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar29 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar29 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          auVar29[0xf] < '\0') {
                        if ((auVar29 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar32 = 0;
                        }
                        else {
                          bVar32 = *(byte *)(lVar27 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar31 = 0;
                        }
                        else {
                          bVar31 = *(byte *)(lVar27 + 4 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar35 = 0;
                        }
                        else {
                          bVar35 = *(byte *)(lVar27 + 8 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar36 = 0;
                        }
                        else {
                          bVar36 = *(byte *)(lVar27 + 0xc + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar37 = 0;
                        }
                        else {
                          bVar37 = *(byte *)(lVar27 + 0x10 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar38 = 0;
                        }
                        else {
                          bVar38 = *(byte *)(lVar27 + 0x14 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar39 = 0;
                        }
                        else {
                          bVar39 = *(byte *)(lVar27 + 0x18 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar40 = 0;
                        }
                        else {
                          bVar40 = *(byte *)(lVar27 + 0x1c + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar41 = 0;
                        }
                        else {
                          bVar41 = *(byte *)(lVar27 + 0x20 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar3 = 0;
                        }
                        else {
                          bVar3 = *(byte *)(lVar27 + 0x24 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar4 = 0;
                        }
                        else {
                          bVar4 = *(byte *)(lVar27 + 0x28 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar7 = 0;
                        }
                        else {
                          bVar7 = *(byte *)(lVar27 + 0x2c + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar10 = 0;
                        }
                        else {
                          bVar10 = *(byte *)(lVar27 + 0x30 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar15 = 0;
                        }
                        else {
                          bVar15 = *(byte *)(lVar27 + 0x34 + uVar14 * 4);
                        }
                        if ((auVar29 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                          bVar16 = 0;
                        }
                        else {
                          bVar16 = *(byte *)(lVar27 + 0x38 + uVar14 * 4);
                        }
                        if (auVar29[0xf] < '\0') {
                          bVar18 = *(byte *)(lVar27 + 0x3c + uVar14 * 4);
                        }
                        else {
                          bVar18 = 0;
                        }
                        bVar5 = auVar34[0];
                        auVar30[0] = (bVar32 < bVar5) * bVar5 | (bVar32 >= bVar5) * bVar32;
                        bVar32 = auVar34[1];
                        auVar30[1] = (bVar31 < bVar32) * bVar32 | (bVar31 >= bVar32) * bVar31;
                        bVar32 = auVar34[2];
                        auVar30[2] = (bVar35 < bVar32) * bVar32 | (bVar35 >= bVar32) * bVar35;
                        bVar32 = auVar34[3];
                        auVar30[3] = (bVar36 < bVar32) * bVar32 | (bVar36 >= bVar32) * bVar36;
                        bVar32 = auVar34[4];
                        auVar30[4] = (bVar37 < bVar32) * bVar32 | (bVar37 >= bVar32) * bVar37;
                        bVar32 = auVar34[5];
                        auVar30[5] = (bVar38 < bVar32) * bVar32 | (bVar38 >= bVar32) * bVar38;
                        bVar32 = auVar34[6];
                        auVar30[6] = (bVar39 < bVar32) * bVar32 | (bVar39 >= bVar32) * bVar39;
                        bVar32 = auVar34[7];
                        auVar30[7] = (bVar40 < bVar32) * bVar32 | (bVar40 >= bVar32) * bVar40;
                        bVar32 = auVar34[8];
                        auVar30[8] = (bVar41 < bVar32) * bVar32 | (bVar41 >= bVar32) * bVar41;
                        bVar32 = auVar34[9];
                        auVar30[9] = (bVar3 < bVar32) * bVar32 | (bVar3 >= bVar32) * bVar3;
                        bVar32 = auVar34[10];
                        auVar30[10] = (bVar4 < bVar32) * bVar32 | (bVar4 >= bVar32) * bVar4;
                        bVar32 = auVar34[0xb];
                        auVar30[0xb] = (bVar7 < bVar32) * bVar32 | (bVar7 >= bVar32) * bVar7;
                        bVar32 = auVar34[0xc];
                        auVar30[0xc] = (bVar10 < bVar32) * bVar32 | (bVar10 >= bVar32) * bVar10;
                        bVar32 = auVar34[0xd];
                        auVar30[0xd] = (bVar15 < bVar32) * bVar32 | (bVar15 >= bVar32) * bVar15;
                        bVar32 = auVar34[0xe];
                        auVar30[0xe] = (bVar16 < bVar32) * bVar32 | (bVar16 >= bVar32) * bVar16;
                        bVar32 = auVar34[0xf];
                        auVar30[0xf] = (bVar18 < bVar32) * bVar32 | (bVar18 >= bVar32) * bVar18;
                        auVar34 = auVar30 & auVar29 | ~auVar29 & auVar34;
                      }
                      uVar14 = uVar14 + 0x10;
                    } while (uVar14 < uVar21);
                    bVar32 = auVar34[8];
                    bVar31 = auVar34[0];
                    bVar31 = (bVar31 < bVar32) * bVar32 | (bVar31 >= bVar32) * bVar31;
                    bVar32 = auVar34[9];
                    bVar35 = auVar34[1];
                    bVar35 = (bVar35 < bVar32) * bVar32 | (bVar35 >= bVar32) * bVar35;
                    bVar32 = auVar34[10];
                    bVar36 = auVar34[2];
                    bVar36 = (bVar36 < bVar32) * bVar32 | (bVar36 >= bVar32) * bVar36;
                    bVar32 = auVar34[0xb];
                    bVar37 = auVar34[3];
                    bVar37 = (bVar37 < bVar32) * bVar32 | (bVar37 >= bVar32) * bVar37;
                    bVar32 = auVar34[0xc];
                    bVar38 = auVar34[4];
                    bVar38 = (bVar38 < bVar32) * bVar32 | (bVar38 >= bVar32) * bVar38;
                    bVar32 = auVar34[0xd];
                    bVar39 = auVar34[5];
                    bVar39 = (bVar39 < bVar32) * bVar32 | (bVar39 >= bVar32) * bVar39;
                    bVar32 = auVar34[0xe];
                    bVar40 = auVar34[6];
                    bVar40 = (bVar40 < bVar32) * bVar32 | (bVar40 >= bVar32) * bVar40;
                    bVar32 = auVar34[0xf];
                    bVar41 = auVar34[7];
                    bVar41 = (bVar41 < bVar32) * bVar32 | (bVar41 >= bVar32) * bVar41;
                    bVar32 = (bVar31 < bVar38) * bVar38 | (bVar31 >= bVar38) * bVar31;
                    bVar31 = (bVar35 < bVar39) * bVar39 | (bVar35 >= bVar39) * bVar35;
                    bVar35 = (bVar36 < bVar40) * bVar40 | (bVar36 >= bVar40) * bVar36;
                    bVar36 = (bVar37 < bVar41) * bVar41 | (bVar37 >= bVar41) * bVar37;
                    bVar32 = (bVar32 < bVar35) * bVar35 | (bVar32 >= bVar35) * bVar32;
                    bVar31 = (bVar31 < bVar36) * bVar36 | (bVar31 >= bVar36) * bVar31;
                    bVar32 = (bVar32 < bVar31) * bVar31 | (bVar32 >= bVar31) * bVar32;
                    uVar11 = uVar21;
                  }
                }
                for (; uVar11 < uVar12; uVar11 = uVar11 + 1) {
                  if ((*(char *)(uVar11 + uVar13) != '\0') &&
                     (bVar31 = *(byte *)(lVar8 + uVar9 + uVar11 * 4), bVar32 < bVar31)) {
                    bVar32 = bVar31;
                  }
                }
              }
              uVar23 = uVar23 + 1;
              uVar13 = uVar13 + uVar12;
              uVar9 = uVar9 + lVar24;
            } while (uVar23 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(byte *)(uVar17 + param_3 + lVar20) = bVar32;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar2);
      }
      uVar28 = uVar28 + 1;
      lVar20 = lVar20 + param_4;
      lVar26 = lVar26 + lVar24;
    } while (uVar28 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}


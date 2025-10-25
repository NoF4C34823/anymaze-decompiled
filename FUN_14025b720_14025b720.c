
void FUN_14025b720(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
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
  longlong lVar16;
  ulonglong uVar17;
  byte bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
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
  
  uVar22 = (ulonglong)(int)param_6;
  lVar13 = (longlong)param_2;
  uVar9 = (ulonglong)param_6._4_4_;
  lVar11 = (param_1 - ((int)param_6 + -1 >> 1)) - (param_6._4_4_ + -1 >> 1) * lVar13;
  uVar23 = (longlong)(int)param_5 + 0x1fU & 0xffffffffffffffe0;
  if (param_7 == 0) {
    lVar26 = 0;
    lVar25 = uVar9 - 1;
    lVar16 = param_9;
    if (lVar25 != 0 && 0 < (longlong)uVar9) {
      do {
        FUN_140299b60(lVar11,lVar16,(longlong)(int)param_5,uVar22,1);
        lVar26 = lVar26 + 1;
        lVar11 = lVar11 + lVar13;
        lVar16 = lVar16 + uVar23;
      } while (lVar26 < lVar25);
    }
    lVar26 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_140299b60(lVar11,lVar16,(longlong)(int)param_5,uVar22,1);
        FUN_1402a53a0(param_9,uVar23,param_3,(longlong)(int)param_5,uVar9);
        lVar25 = lVar25 + 1;
        lVar16 = lVar16 + uVar23;
        if ((longlong)uVar9 <= lVar25) {
          lVar25 = 0;
          lVar16 = param_9;
        }
        lVar26 = lVar26 + 1;
        lVar11 = lVar11 + lVar13;
        param_3 = param_3 + param_4;
      } while (lVar26 < param_5._4_4_);
    }
  }
  else {
    lVar25 = 0;
    lVar16 = 0;
    uVar23 = 0;
    if (0 < param_5._4_4_) {
      do {
        uVar20 = 0;
        if (0 < (int)param_5) {
          do {
            uVar17 = 0;
            bVar30 = 0;
            lVar26 = 0;
            if (0 < (longlong)uVar9) {
              lVar1 = lVar11 + lVar16 + uVar20;
              uVar21 = param_7;
              bVar30 = 0;
              do {
                if (0 < (longlong)uVar22) {
                  if ((longlong)uVar22 < 0x10) {
LAB_14025be71:
                    uVar19 = 0;
                  }
                  else {
                    uVar14 = uVar21 & 0xf;
                    if (uVar14 != 0) {
                      uVar14 = 0x10 - uVar14;
                    }
                    if ((longlong)uVar22 < (longlong)(uVar14 + 0x10)) goto LAB_14025be71;
                    uVar24 = 0;
                    uVar19 = uVar22 - (uVar22 - uVar14 & 0xf);
                    if (uVar14 != 0) {
                      do {
                        if ((*(char *)(uVar24 + uVar21) != '\0') &&
                           (bVar29 = *(byte *)(lVar1 + lVar26 + uVar24), bVar30 < bVar29)) {
                          bVar30 = bVar29;
                        }
                        uVar24 = uVar24 + 1;
                      } while (uVar24 < uVar14);
                    }
                    lVar2 = lVar1 + lVar26;
                    uVar31 = CONCAT22(CONCAT11(bVar30,bVar30),CONCAT11(bVar30,bVar30));
                    auVar32._0_8_ = CONCAT44(uVar31,uVar31);
                    auVar32._8_8_ = auVar32._0_8_;
                    do {
                      pcVar3 = (char *)(uVar21 + uVar14);
                      auVar27[0] = -(*pcVar3 == '\0');
                      auVar27[1] = -(pcVar3[1] == '\0');
                      auVar27[2] = -(pcVar3[2] == '\0');
                      auVar27[3] = -(pcVar3[3] == '\0');
                      auVar27[4] = -(pcVar3[4] == '\0');
                      auVar27[5] = -(pcVar3[5] == '\0');
                      auVar27[6] = -(pcVar3[6] == '\0');
                      auVar27[7] = -(pcVar3[7] == '\0');
                      auVar27[8] = -(pcVar3[8] == '\0');
                      auVar27[9] = -(pcVar3[9] == '\0');
                      auVar27[10] = -(pcVar3[10] == '\0');
                      auVar27[0xb] = -(pcVar3[0xb] == '\0');
                      auVar27[0xc] = -(pcVar3[0xc] == '\0');
                      auVar27[0xd] = -(pcVar3[0xd] == '\0');
                      auVar27[0xe] = -(pcVar3[0xe] == '\0');
                      auVar27[0xf] = -(pcVar3[0xf] == '\0');
                      auVar7._8_4_ = 0xffffffff;
                      auVar7._0_8_ = 0xffffffffffffffff;
                      auVar7._12_4_ = 0xffffffff;
                      auVar27 = auVar27 ^ auVar7;
                      if ((auVar27 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar30 = 0;
                      }
                      else {
                        bVar30 = *(byte *)(uVar14 + lVar2);
                      }
                      if ((auVar27 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar29 = 0;
                      }
                      else {
                        bVar29 = *(byte *)(uVar14 + 1 + lVar2);
                      }
                      if ((auVar27 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar33 = 0;
                      }
                      else {
                        bVar33 = *(byte *)(uVar14 + 2 + lVar2);
                      }
                      if ((auVar27 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar34 = 0;
                      }
                      else {
                        bVar34 = *(byte *)(uVar14 + 3 + lVar2);
                      }
                      if ((auVar27 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar35 = 0;
                      }
                      else {
                        bVar35 = *(byte *)(uVar14 + 4 + lVar2);
                      }
                      if ((auVar27 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar36 = 0;
                      }
                      else {
                        bVar36 = *(byte *)(uVar14 + 5 + lVar2);
                      }
                      if ((auVar27 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar37 = 0;
                      }
                      else {
                        bVar37 = *(byte *)(uVar14 + 6 + lVar2);
                      }
                      if ((auVar27 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar38 = 0;
                      }
                      else {
                        bVar38 = *(byte *)(uVar14 + 7 + lVar2);
                      }
                      if ((auVar27 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar39 = 0;
                      }
                      else {
                        bVar39 = *(byte *)(uVar14 + 8 + lVar2);
                      }
                      if ((auVar27 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar4 = 0;
                      }
                      else {
                        bVar4 = *(byte *)(uVar14 + 9 + lVar2);
                      }
                      if ((auVar27 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar5 = 0;
                      }
                      else {
                        bVar5 = *(byte *)(uVar14 + 10 + lVar2);
                      }
                      if ((auVar27 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar8 = 0;
                      }
                      else {
                        bVar8 = *(byte *)(uVar14 + 0xb + lVar2);
                      }
                      if ((auVar27 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar12 = 0;
                      }
                      else {
                        bVar12 = *(byte *)(uVar14 + 0xc + lVar2);
                      }
                      if ((auVar27 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar10 = 0;
                      }
                      else {
                        bVar10 = *(byte *)(uVar14 + 0xd + lVar2);
                      }
                      if ((auVar27 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar15 = 0;
                      }
                      else {
                        bVar15 = *(byte *)(uVar14 + 0xe + lVar2);
                      }
                      if (auVar27[0xf] < '\0') {
                        bVar18 = *(byte *)(uVar14 + 0xf + lVar2);
                      }
                      else {
                        bVar18 = 0;
                      }
                      uVar14 = uVar14 + 0x10;
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
                  for (; uVar19 < uVar22; uVar19 = uVar19 + 1) {
                    if ((*(char *)(uVar19 + uVar21) != '\0') &&
                       (bVar29 = *(byte *)(lVar1 + lVar26 + uVar19), bVar30 < bVar29)) {
                      bVar30 = bVar29;
                    }
                  }
                }
                uVar17 = uVar17 + 1;
                lVar26 = lVar26 + lVar13;
                uVar21 = uVar21 + uVar22;
              } while (uVar17 < uVar9);
            }
            *(byte *)(uVar20 + param_3 + lVar25) = bVar30;
            uVar20 = uVar20 + 1;
          } while (uVar20 < (ulonglong)(longlong)(int)param_5);
        }
        uVar23 = uVar23 + 1;
        lVar25 = lVar25 + param_4;
        lVar16 = lVar16 + lVar13;
      } while (uVar23 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}


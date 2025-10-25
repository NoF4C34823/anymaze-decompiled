
void FUN_1403efac0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte bVar28;
  byte bVar29;
  byte bVar32;
  byte bVar33;
  undefined4 uVar30;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar31 [16];
  
  lVar8 = (longlong)param_2;
  lVar17 = (param_6._4_4_ + -1 >> 1) * lVar8;
  lVar23 = (longlong)((int)param_6 + -1 >> 1);
  uVar13 = (longlong)(int)param_5 + 0x1fU & 0xffffffffffffffe0;
  lVar10 = (param_1 - lVar23) - lVar17;
  if (param_7 == 0) {
    lVar25 = 0;
    lVar23 = (longlong)param_6._4_4_ + -1;
    lVar17 = param_9;
    if (lVar23 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_14036ade0(lVar10,lVar17,(longlong)(int)param_5,(longlong)(int)param_6,1);
        lVar25 = lVar25 + 1;
        lVar10 = lVar10 + lVar8;
        lVar17 = lVar17 + uVar13;
      } while (lVar25 < lVar23);
    }
    lVar25 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_14036ade0(lVar10,lVar17,(longlong)(int)param_5,(longlong)(int)param_6,1);
        FUN_140374ca0(param_9,uVar13,param_3,(longlong)(int)param_5,(longlong)param_6._4_4_);
        lVar23 = lVar23 + 1;
        lVar17 = lVar17 + uVar13;
        if (param_6._4_4_ <= lVar23) {
          lVar23 = 0;
          lVar17 = param_9;
        }
        lVar25 = lVar25 + 1;
        lVar10 = lVar10 + lVar8;
        param_3 = param_3 + param_4;
      } while (lVar25 < param_5._4_4_);
    }
  }
  else {
    uVar13 = 0;
    lVar25 = 0;
    lVar10 = 0;
    if (0 < param_5._4_4_) {
      do {
        uVar21 = 0;
        if (0 < (int)param_5) {
          do {
            uVar11 = 0;
            bVar29 = 0;
            lVar14 = 0;
            if (0 < param_6._4_4_) {
              lVar1 = ((param_1 - lVar23) - lVar17) + lVar10 + uVar21;
              uVar22 = param_7;
              bVar29 = 0;
              do {
                lVar24 = (longlong)(int)param_6;
                if (0 < lVar24) {
                  if (lVar24 < 0x10) {
LAB_1403f01d1:
                    uVar20 = 0;
                  }
                  else {
                    uVar15 = uVar22 & 0xf;
                    if (uVar15 != 0) {
                      uVar15 = 0x10 - uVar15;
                    }
                    if (lVar24 < (longlong)(uVar15 + 0x10)) goto LAB_1403f01d1;
                    uVar18 = 0;
                    uVar20 = lVar24 - (lVar24 - uVar15 & 0xf);
                    if (uVar15 != 0) {
                      do {
                        if ((*(char *)(uVar18 + uVar22) != '\0') &&
                           (bVar29 < *(byte *)(lVar1 + lVar14 + uVar18))) {
                          bVar29 = *(byte *)(lVar1 + lVar14 + uVar18);
                        }
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < uVar15);
                    }
                    lVar24 = lVar1 + lVar14;
                    uVar30 = CONCAT22(CONCAT11(bVar29,bVar29),CONCAT11(bVar29,bVar29));
                    auVar31._0_8_ = CONCAT44(uVar30,uVar30);
                    auVar31._8_8_ = auVar31._0_8_;
                    do {
                      pcVar2 = (char *)(uVar22 + uVar15);
                      auVar26[0] = -(*pcVar2 == '\0');
                      auVar26[1] = -(pcVar2[1] == '\0');
                      auVar26[2] = -(pcVar2[2] == '\0');
                      auVar26[3] = -(pcVar2[3] == '\0');
                      auVar26[4] = -(pcVar2[4] == '\0');
                      auVar26[5] = -(pcVar2[5] == '\0');
                      auVar26[6] = -(pcVar2[6] == '\0');
                      auVar26[7] = -(pcVar2[7] == '\0');
                      auVar26[8] = -(pcVar2[8] == '\0');
                      auVar26[9] = -(pcVar2[9] == '\0');
                      auVar26[10] = -(pcVar2[10] == '\0');
                      auVar26[0xb] = -(pcVar2[0xb] == '\0');
                      auVar26[0xc] = -(pcVar2[0xc] == '\0');
                      auVar26[0xd] = -(pcVar2[0xd] == '\0');
                      auVar26[0xe] = -(pcVar2[0xe] == '\0');
                      auVar26[0xf] = -(pcVar2[0xf] == '\0');
                      auVar6._8_4_ = 0xffffffff;
                      auVar6._0_8_ = 0xffffffffffffffff;
                      auVar6._12_4_ = 0xffffffff;
                      auVar26 = auVar26 ^ auVar6;
                      if ((auVar26 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar29 = 0;
                      }
                      else {
                        bVar29 = *(byte *)(uVar15 + lVar24);
                      }
                      if ((auVar26 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar28 = 0;
                      }
                      else {
                        bVar28 = *(byte *)(uVar15 + 1 + lVar24);
                      }
                      if ((auVar26 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar32 = 0;
                      }
                      else {
                        bVar32 = *(byte *)(uVar15 + 2 + lVar24);
                      }
                      if ((auVar26 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar33 = 0;
                      }
                      else {
                        bVar33 = *(byte *)(uVar15 + 3 + lVar24);
                      }
                      if ((auVar26 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar34 = 0;
                      }
                      else {
                        bVar34 = *(byte *)(uVar15 + 4 + lVar24);
                      }
                      if ((auVar26 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar35 = 0;
                      }
                      else {
                        bVar35 = *(byte *)(uVar15 + 5 + lVar24);
                      }
                      if ((auVar26 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar36 = 0;
                      }
                      else {
                        bVar36 = *(byte *)(uVar15 + 6 + lVar24);
                      }
                      if ((auVar26 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar37 = 0;
                      }
                      else {
                        bVar37 = *(byte *)(uVar15 + 7 + lVar24);
                      }
                      if ((auVar26 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar38 = 0;
                      }
                      else {
                        bVar38 = *(byte *)(uVar15 + 8 + lVar24);
                      }
                      if ((auVar26 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar3 = 0;
                      }
                      else {
                        bVar3 = *(byte *)(uVar15 + 9 + lVar24);
                      }
                      if ((auVar26 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar4 = 0;
                      }
                      else {
                        bVar4 = *(byte *)(uVar15 + 10 + lVar24);
                      }
                      if ((auVar26 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar7 = 0;
                      }
                      else {
                        bVar7 = *(byte *)(uVar15 + 0xb + lVar24);
                      }
                      if ((auVar26 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar12 = 0;
                      }
                      else {
                        bVar12 = *(byte *)(uVar15 + 0xc + lVar24);
                      }
                      if ((auVar26 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar9 = 0;
                      }
                      else {
                        bVar9 = *(byte *)(uVar15 + 0xd + lVar24);
                      }
                      if ((auVar26 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar16 = 0;
                      }
                      else {
                        bVar16 = *(byte *)(uVar15 + 0xe + lVar24);
                      }
                      if (auVar26[0xf] < '\0') {
                        bVar19 = *(byte *)(uVar15 + 0xf + lVar24);
                      }
                      else {
                        bVar19 = 0;
                      }
                      uVar15 = uVar15 + 0x10;
                      bVar5 = auVar31[0];
                      auVar27[0] = (bVar29 < bVar5) * bVar5 | (bVar29 >= bVar5) * bVar29;
                      bVar29 = auVar31[1];
                      auVar27[1] = (bVar28 < bVar29) * bVar29 | (bVar28 >= bVar29) * bVar28;
                      bVar29 = auVar31[2];
                      auVar27[2] = (bVar32 < bVar29) * bVar29 | (bVar32 >= bVar29) * bVar32;
                      bVar29 = auVar31[3];
                      auVar27[3] = (bVar33 < bVar29) * bVar29 | (bVar33 >= bVar29) * bVar33;
                      bVar29 = auVar31[4];
                      auVar27[4] = (bVar34 < bVar29) * bVar29 | (bVar34 >= bVar29) * bVar34;
                      bVar29 = auVar31[5];
                      auVar27[5] = (bVar35 < bVar29) * bVar29 | (bVar35 >= bVar29) * bVar35;
                      bVar29 = auVar31[6];
                      auVar27[6] = (bVar36 < bVar29) * bVar29 | (bVar36 >= bVar29) * bVar36;
                      bVar29 = auVar31[7];
                      auVar27[7] = (bVar37 < bVar29) * bVar29 | (bVar37 >= bVar29) * bVar37;
                      bVar29 = auVar31[8];
                      auVar27[8] = (bVar38 < bVar29) * bVar29 | (bVar38 >= bVar29) * bVar38;
                      bVar29 = auVar31[9];
                      auVar27[9] = (bVar3 < bVar29) * bVar29 | (bVar3 >= bVar29) * bVar3;
                      bVar29 = auVar31[10];
                      auVar27[10] = (bVar4 < bVar29) * bVar29 | (bVar4 >= bVar29) * bVar4;
                      bVar29 = auVar31[0xb];
                      auVar27[0xb] = (bVar7 < bVar29) * bVar29 | (bVar7 >= bVar29) * bVar7;
                      bVar29 = auVar31[0xc];
                      auVar27[0xc] = (bVar12 < bVar29) * bVar29 | (bVar12 >= bVar29) * bVar12;
                      bVar29 = auVar31[0xd];
                      auVar27[0xd] = (bVar9 < bVar29) * bVar29 | (bVar9 >= bVar29) * bVar9;
                      bVar29 = auVar31[0xe];
                      auVar27[0xe] = (bVar16 < bVar29) * bVar29 | (bVar16 >= bVar29) * bVar16;
                      bVar29 = auVar31[0xf];
                      auVar27[0xf] = (bVar19 < bVar29) * bVar29 | (bVar19 >= bVar29) * bVar19;
                      auVar31 = auVar27 & auVar26 | ~auVar26 & auVar31;
                    } while (uVar15 < uVar20);
                    bVar29 = auVar31[8];
                    bVar28 = auVar31[0];
                    bVar28 = (bVar28 < bVar29) * bVar29 | (bVar28 >= bVar29) * bVar28;
                    bVar29 = auVar31[9];
                    bVar32 = auVar31[1];
                    bVar32 = (bVar32 < bVar29) * bVar29 | (bVar32 >= bVar29) * bVar32;
                    bVar29 = auVar31[10];
                    bVar33 = auVar31[2];
                    bVar33 = (bVar33 < bVar29) * bVar29 | (bVar33 >= bVar29) * bVar33;
                    bVar29 = auVar31[0xb];
                    bVar34 = auVar31[3];
                    bVar34 = (bVar34 < bVar29) * bVar29 | (bVar34 >= bVar29) * bVar34;
                    bVar29 = auVar31[0xc];
                    bVar35 = auVar31[4];
                    bVar35 = (bVar35 < bVar29) * bVar29 | (bVar35 >= bVar29) * bVar35;
                    bVar29 = auVar31[0xd];
                    bVar36 = auVar31[5];
                    bVar36 = (bVar36 < bVar29) * bVar29 | (bVar36 >= bVar29) * bVar36;
                    bVar29 = auVar31[0xe];
                    bVar37 = auVar31[6];
                    bVar37 = (bVar37 < bVar29) * bVar29 | (bVar37 >= bVar29) * bVar37;
                    bVar29 = auVar31[0xf];
                    bVar38 = auVar31[7];
                    bVar38 = (bVar38 < bVar29) * bVar29 | (bVar38 >= bVar29) * bVar38;
                    bVar29 = (bVar28 < bVar35) * bVar35 | (bVar28 >= bVar35) * bVar28;
                    bVar28 = (bVar32 < bVar36) * bVar36 | (bVar32 >= bVar36) * bVar32;
                    bVar32 = (bVar33 < bVar37) * bVar37 | (bVar33 >= bVar37) * bVar33;
                    bVar33 = (bVar34 < bVar38) * bVar38 | (bVar34 >= bVar38) * bVar34;
                    bVar29 = (bVar29 < bVar32) * bVar32 | (bVar29 >= bVar32) * bVar29;
                    bVar28 = (bVar28 < bVar33) * bVar33 | (bVar28 >= bVar33) * bVar28;
                    bVar29 = (bVar29 < bVar28) * bVar28 | (bVar29 >= bVar28) * bVar29;
                  }
                  for (; uVar20 < (ulonglong)(longlong)(int)param_6; uVar20 = uVar20 + 1) {
                    if ((*(char *)(uVar20 + uVar22) != '\0') &&
                       (bVar29 < *(byte *)(lVar1 + lVar14 + uVar20))) {
                      bVar29 = *(byte *)(lVar1 + lVar14 + uVar20);
                    }
                  }
                }
                uVar11 = uVar11 + 1;
                lVar14 = lVar14 + lVar8;
                uVar22 = uVar22 + (longlong)(int)param_6;
              } while (uVar11 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(byte *)(uVar21 + param_3 + lVar25) = bVar29;
            uVar21 = uVar21 + 1;
          } while (uVar21 < (ulonglong)(longlong)(int)param_5);
        }
        uVar13 = uVar13 + 1;
        lVar25 = lVar25 + param_4;
        lVar10 = lVar10 + lVar8;
      } while (uVar13 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}


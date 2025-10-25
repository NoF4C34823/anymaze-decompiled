
void FUN_140375080(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  byte bVar13;
  longlong lVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  byte bVar33;
  byte bVar34;
  byte bVar37;
  byte bVar38;
  undefined4 uVar35;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar36 [16];
  
  lVar28 = (longlong)param_2;
  uVar27 = (longlong)(int)param_5 + 0x1fU & 0xffffffffffffffe0;
  lVar24 = (param_6._4_4_ + -1 >> 1) * lVar28;
  lVar26 = (longlong)((int)param_6 + -1 >> 1);
  lVar22 = (param_1 - lVar26) - lVar24;
  if (param_7 == 0) {
    lVar18 = 0;
    lVar26 = (longlong)param_6._4_4_ + -1;
    lVar24 = param_9;
    if (lVar26 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_14036ade0(lVar22,lVar24,(longlong)(int)param_5,(longlong)(int)param_6,1);
        lVar18 = lVar18 + 1;
        lVar22 = lVar22 + lVar28;
        lVar24 = lVar24 + uVar27;
      } while (lVar18 < lVar26);
    }
    uVar20 = 0;
    lVar18 = 0;
    if (0 < param_5._4_4_) {
      uVar30 = (ulonglong)(longlong)param_6._4_4_ >> 3;
      do {
        FUN_14036ade0(lVar22,lVar24,(longlong)(int)param_5,(longlong)(int)param_6,1);
        uVar23 = 0;
        if (0 < (longlong)(int)param_5) {
          do {
            bVar34 = 0;
            if (0 < param_6._4_4_) {
              uVar29 = 0;
              uVar19 = 1;
              lVar12 = 0;
              bVar34 = 0;
              if (uVar30 != 0) {
                lVar1 = uVar27 * 7 + param_9 + uVar23;
                lVar5 = uVar27 * 5 + param_9 + uVar23;
                lVar14 = uVar27 * 4 + param_9 + uVar23;
                lVar6 = uVar27 * 3 + param_9 + uVar23;
                lVar2 = uVar27 * 6 + param_9 + uVar23;
                lVar3 = uVar27 * 2 + param_9 + uVar23;
                lVar7 = param_9 + uVar27 + uVar23;
                bVar34 = 0;
                do {
                  if (bVar34 < *(byte *)(param_9 + uVar23 + lVar12 * 8)) {
                    bVar34 = *(byte *)(param_9 + uVar23 + lVar12 * 8);
                  }
                  if (bVar34 < *(byte *)(lVar7 + lVar12 * 8)) {
                    bVar34 = *(byte *)(lVar7 + lVar12 * 8);
                  }
                  if (bVar34 < *(byte *)(lVar3 + lVar12 * 8)) {
                    bVar34 = *(byte *)(lVar3 + lVar12 * 8);
                  }
                  if (bVar34 < *(byte *)(lVar6 + lVar12 * 8)) {
                    bVar34 = *(byte *)(lVar6 + lVar12 * 8);
                  }
                  if (bVar34 < *(byte *)(lVar14 + lVar12 * 8)) {
                    bVar34 = *(byte *)(lVar14 + lVar12 * 8);
                  }
                  if (bVar34 < *(byte *)(lVar5 + lVar12 * 8)) {
                    bVar34 = *(byte *)(lVar5 + lVar12 * 8);
                  }
                  if (bVar34 < *(byte *)(lVar2 + lVar12 * 8)) {
                    bVar34 = *(byte *)(lVar2 + lVar12 * 8);
                  }
                  if (bVar34 < *(byte *)(lVar1 + lVar12 * 8)) {
                    bVar34 = *(byte *)(lVar1 + lVar12 * 8);
                  }
                  uVar29 = uVar29 + 1;
                  lVar12 = lVar12 + uVar27;
                } while (uVar29 < uVar30);
                uVar19 = uVar29 * 8 + 1;
              }
              if (uVar19 <= (ulonglong)(longlong)param_6._4_4_) {
                    /* WARNING: Could not recover jumptable at 0x00014037552d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_14037552f +
                          (byte)(&DAT_143089d18)[(uint)(param_6._4_4_ - (int)uVar19)]))
                          (uVar30,param_9 - uVar27);
                return;
              }
            }
            *(byte *)(uVar23 + param_3 + lVar18) = bVar34;
            uVar23 = uVar23 + 1;
          } while (uVar23 < (ulonglong)(longlong)(int)param_5);
        }
        lVar26 = lVar26 + 1;
        lVar24 = lVar24 + uVar27;
        if (param_6._4_4_ <= lVar26) {
          lVar26 = 0;
          lVar24 = param_9;
        }
        uVar20 = uVar20 + 1;
        lVar22 = lVar22 + lVar28;
        lVar18 = lVar18 + param_4;
      } while (uVar20 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else {
    uVar27 = 0;
    lVar18 = 0;
    lVar22 = 0;
    if (0 < param_5._4_4_) {
      do {
        uVar20 = 0;
        if (0 < (int)param_5) {
          do {
            uVar30 = 0;
            bVar34 = 0;
            lVar12 = 0;
            if (0 < param_6._4_4_) {
              lVar1 = ((param_1 - lVar26) - lVar24) + lVar22 + uVar20;
              uVar23 = param_7;
              bVar34 = 0;
              do {
                lVar14 = (longlong)(int)param_6;
                if (0 < lVar14) {
                  if (lVar14 < 0x10) {
LAB_140375bae:
                    uVar29 = 0;
                  }
                  else {
                    uVar19 = uVar23 & 0xf;
                    if (uVar19 != 0) {
                      uVar19 = 0x10 - uVar19;
                    }
                    if (lVar14 < (longlong)(uVar19 + 0x10)) goto LAB_140375bae;
                    uVar25 = 0;
                    uVar29 = lVar14 - (lVar14 - uVar19 & 0xf);
                    if (uVar19 != 0) {
                      do {
                        if ((*(char *)(uVar25 + uVar23) != '\0') &&
                           (bVar34 < *(byte *)(lVar1 + lVar12 + uVar25))) {
                          bVar34 = *(byte *)(lVar1 + lVar12 + uVar25);
                        }
                        uVar25 = uVar25 + 1;
                      } while (uVar25 < uVar19);
                    }
                    lVar14 = lVar1 + lVar12;
                    uVar35 = CONCAT22(CONCAT11(bVar34,bVar34),CONCAT11(bVar34,bVar34));
                    auVar36._0_8_ = CONCAT44(uVar35,uVar35);
                    auVar36._8_8_ = auVar36._0_8_;
                    do {
                      pcVar4 = (char *)(uVar23 + uVar19);
                      auVar31[0] = -(*pcVar4 == '\0');
                      auVar31[1] = -(pcVar4[1] == '\0');
                      auVar31[2] = -(pcVar4[2] == '\0');
                      auVar31[3] = -(pcVar4[3] == '\0');
                      auVar31[4] = -(pcVar4[4] == '\0');
                      auVar31[5] = -(pcVar4[5] == '\0');
                      auVar31[6] = -(pcVar4[6] == '\0');
                      auVar31[7] = -(pcVar4[7] == '\0');
                      auVar31[8] = -(pcVar4[8] == '\0');
                      auVar31[9] = -(pcVar4[9] == '\0');
                      auVar31[10] = -(pcVar4[10] == '\0');
                      auVar31[0xb] = -(pcVar4[0xb] == '\0');
                      auVar31[0xc] = -(pcVar4[0xc] == '\0');
                      auVar31[0xd] = -(pcVar4[0xd] == '\0');
                      auVar31[0xe] = -(pcVar4[0xe] == '\0');
                      auVar31[0xf] = -(pcVar4[0xf] == '\0');
                      auVar11._8_4_ = 0xffffffff;
                      auVar11._0_8_ = 0xffffffffffffffff;
                      auVar11._12_4_ = 0xffffffff;
                      auVar31 = auVar31 ^ auVar11;
                      if ((auVar31 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar34 = 0;
                      }
                      else {
                        bVar34 = *(byte *)(uVar19 + lVar14);
                      }
                      if ((auVar31 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar33 = 0;
                      }
                      else {
                        bVar33 = *(byte *)(uVar19 + 1 + lVar14);
                      }
                      if ((auVar31 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar37 = 0;
                      }
                      else {
                        bVar37 = *(byte *)(uVar19 + 2 + lVar14);
                      }
                      if ((auVar31 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar38 = 0;
                      }
                      else {
                        bVar38 = *(byte *)(uVar19 + 3 + lVar14);
                      }
                      if ((auVar31 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar39 = 0;
                      }
                      else {
                        bVar39 = *(byte *)(uVar19 + 4 + lVar14);
                      }
                      if ((auVar31 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar40 = 0;
                      }
                      else {
                        bVar40 = *(byte *)(uVar19 + 5 + lVar14);
                      }
                      if ((auVar31 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar41 = 0;
                      }
                      else {
                        bVar41 = *(byte *)(uVar19 + 6 + lVar14);
                      }
                      if ((auVar31 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar42 = 0;
                      }
                      else {
                        bVar42 = *(byte *)(uVar19 + 7 + lVar14);
                      }
                      if ((auVar31 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar43 = 0;
                      }
                      else {
                        bVar43 = *(byte *)(uVar19 + 8 + lVar14);
                      }
                      if ((auVar31 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar8 = 0;
                      }
                      else {
                        bVar8 = *(byte *)(uVar19 + 9 + lVar14);
                      }
                      if ((auVar31 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar9 = 0;
                      }
                      else {
                        bVar9 = *(byte *)(uVar19 + 10 + lVar14);
                      }
                      if ((auVar31 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar15 = 0;
                      }
                      else {
                        bVar15 = *(byte *)(uVar19 + 0xb + lVar14);
                      }
                      if ((auVar31 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar13 = 0;
                      }
                      else {
                        bVar13 = *(byte *)(uVar19 + 0xc + lVar14);
                      }
                      if ((auVar31 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar16 = 0;
                      }
                      else {
                        bVar16 = *(byte *)(uVar19 + 0xd + lVar14);
                      }
                      if ((auVar31 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar17 = 0;
                      }
                      else {
                        bVar17 = *(byte *)(uVar19 + 0xe + lVar14);
                      }
                      if (auVar31[0xf] < '\0') {
                        bVar21 = *(byte *)(uVar19 + 0xf + lVar14);
                      }
                      else {
                        bVar21 = 0;
                      }
                      uVar19 = uVar19 + 0x10;
                      bVar10 = auVar36[0];
                      auVar32[0] = (bVar34 < bVar10) * bVar10 | (bVar34 >= bVar10) * bVar34;
                      bVar34 = auVar36[1];
                      auVar32[1] = (bVar33 < bVar34) * bVar34 | (bVar33 >= bVar34) * bVar33;
                      bVar34 = auVar36[2];
                      auVar32[2] = (bVar37 < bVar34) * bVar34 | (bVar37 >= bVar34) * bVar37;
                      bVar34 = auVar36[3];
                      auVar32[3] = (bVar38 < bVar34) * bVar34 | (bVar38 >= bVar34) * bVar38;
                      bVar34 = auVar36[4];
                      auVar32[4] = (bVar39 < bVar34) * bVar34 | (bVar39 >= bVar34) * bVar39;
                      bVar34 = auVar36[5];
                      auVar32[5] = (bVar40 < bVar34) * bVar34 | (bVar40 >= bVar34) * bVar40;
                      bVar34 = auVar36[6];
                      auVar32[6] = (bVar41 < bVar34) * bVar34 | (bVar41 >= bVar34) * bVar41;
                      bVar34 = auVar36[7];
                      auVar32[7] = (bVar42 < bVar34) * bVar34 | (bVar42 >= bVar34) * bVar42;
                      bVar34 = auVar36[8];
                      auVar32[8] = (bVar43 < bVar34) * bVar34 | (bVar43 >= bVar34) * bVar43;
                      bVar34 = auVar36[9];
                      auVar32[9] = (bVar8 < bVar34) * bVar34 | (bVar8 >= bVar34) * bVar8;
                      bVar34 = auVar36[10];
                      auVar32[10] = (bVar9 < bVar34) * bVar34 | (bVar9 >= bVar34) * bVar9;
                      bVar34 = auVar36[0xb];
                      auVar32[0xb] = (bVar15 < bVar34) * bVar34 | (bVar15 >= bVar34) * bVar15;
                      bVar34 = auVar36[0xc];
                      auVar32[0xc] = (bVar13 < bVar34) * bVar34 | (bVar13 >= bVar34) * bVar13;
                      bVar34 = auVar36[0xd];
                      auVar32[0xd] = (bVar16 < bVar34) * bVar34 | (bVar16 >= bVar34) * bVar16;
                      bVar34 = auVar36[0xe];
                      auVar32[0xe] = (bVar17 < bVar34) * bVar34 | (bVar17 >= bVar34) * bVar17;
                      bVar34 = auVar36[0xf];
                      auVar32[0xf] = (bVar21 < bVar34) * bVar34 | (bVar21 >= bVar34) * bVar21;
                      auVar36 = auVar32 & auVar31 | ~auVar31 & auVar36;
                    } while (uVar19 < uVar29);
                    bVar34 = auVar36[8];
                    bVar33 = auVar36[0];
                    bVar33 = (bVar33 < bVar34) * bVar34 | (bVar33 >= bVar34) * bVar33;
                    bVar34 = auVar36[9];
                    bVar37 = auVar36[1];
                    bVar37 = (bVar37 < bVar34) * bVar34 | (bVar37 >= bVar34) * bVar37;
                    bVar34 = auVar36[10];
                    bVar38 = auVar36[2];
                    bVar38 = (bVar38 < bVar34) * bVar34 | (bVar38 >= bVar34) * bVar38;
                    bVar34 = auVar36[0xb];
                    bVar39 = auVar36[3];
                    bVar39 = (bVar39 < bVar34) * bVar34 | (bVar39 >= bVar34) * bVar39;
                    bVar34 = auVar36[0xc];
                    bVar40 = auVar36[4];
                    bVar40 = (bVar40 < bVar34) * bVar34 | (bVar40 >= bVar34) * bVar40;
                    bVar34 = auVar36[0xd];
                    bVar41 = auVar36[5];
                    bVar41 = (bVar41 < bVar34) * bVar34 | (bVar41 >= bVar34) * bVar41;
                    bVar34 = auVar36[0xe];
                    bVar42 = auVar36[6];
                    bVar42 = (bVar42 < bVar34) * bVar34 | (bVar42 >= bVar34) * bVar42;
                    bVar34 = auVar36[0xf];
                    bVar43 = auVar36[7];
                    bVar43 = (bVar43 < bVar34) * bVar34 | (bVar43 >= bVar34) * bVar43;
                    bVar34 = (bVar33 < bVar40) * bVar40 | (bVar33 >= bVar40) * bVar33;
                    bVar33 = (bVar37 < bVar41) * bVar41 | (bVar37 >= bVar41) * bVar37;
                    bVar37 = (bVar38 < bVar42) * bVar42 | (bVar38 >= bVar42) * bVar38;
                    bVar38 = (bVar39 < bVar43) * bVar43 | (bVar39 >= bVar43) * bVar39;
                    bVar34 = (bVar34 < bVar37) * bVar37 | (bVar34 >= bVar37) * bVar34;
                    bVar33 = (bVar33 < bVar38) * bVar38 | (bVar33 >= bVar38) * bVar33;
                    bVar34 = (bVar34 < bVar33) * bVar33 | (bVar34 >= bVar33) * bVar34;
                  }
                  for (; uVar29 < (ulonglong)(longlong)(int)param_6; uVar29 = uVar29 + 1) {
                    if ((*(char *)(uVar29 + uVar23) != '\0') &&
                       (bVar34 < *(byte *)(lVar1 + lVar12 + uVar29))) {
                      bVar34 = *(byte *)(lVar1 + lVar12 + uVar29);
                    }
                  }
                }
                uVar30 = uVar30 + 1;
                lVar12 = lVar12 + lVar28;
                uVar23 = uVar23 + (longlong)(int)param_6;
              } while (uVar30 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(byte *)(uVar20 + param_3 + lVar18) = bVar34;
            uVar20 = uVar20 + 1;
          } while (uVar20 < (ulonglong)(longlong)(int)param_5);
        }
        uVar27 = uVar27 + 1;
        lVar18 = lVar18 + param_4;
        lVar22 = lVar22 + lVar28;
      } while (uVar27 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}


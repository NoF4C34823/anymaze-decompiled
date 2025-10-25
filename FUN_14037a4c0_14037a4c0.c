
void FUN_14037a4c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,ulonglong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  byte bVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  byte bVar14;
  longlong lVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte bVar21;
  ulonglong uVar22;
  byte bVar23;
  ulonglong uVar24;
  byte bVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  byte bVar37;
  byte bVar38;
  byte bVar41;
  byte bVar42;
  undefined4 uVar39;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar40 [16];
  
  uVar24 = param_6[1];
  uVar29 = *param_6;
  uVar11 = *param_5;
  uVar31 = uVar11 + 0x1f & 0xffffffffffffffe0;
  lVar30 = (param_1 - (int)(uVar29 - 1 >> 1)) - (int)(uVar24 - 1 >> 1) * param_2;
  if (param_7 == 0) {
    lVar32 = 0;
    lVar19 = param_9;
    if (0 < (longlong)(uVar24 - 1)) {
      while( true ) {
        FUN_14036ade0(lVar30,lVar19,uVar11,uVar29,1);
        uVar24 = param_6[1];
        lVar32 = lVar32 + 1;
        lVar30 = lVar30 + param_2;
        lVar19 = lVar19 + uVar31;
        if ((longlong)(uVar24 - 1) <= lVar32) break;
        uVar29 = *param_6;
      }
    }
    lVar32 = uVar24 - 1;
    if (0 < (longlong)param_5[1]) {
      lVar26 = 0;
      lVar30 = lVar30 - param_2;
      lVar33 = lVar26;
      do {
        lVar30 = lVar30 + param_2;
        lVar33 = lVar33 + 1;
        lVar26 = lVar26 + param_4;
        FUN_14036ade0(lVar30,lVar19,uVar11,*param_6,1);
        uVar24 = param_6[1];
        if (0 < (longlong)uVar11) {
          uVar29 = 0;
          do {
            bVar38 = 0;
            if (0 < (longlong)uVar24) {
              uVar34 = 0;
              uVar22 = 1;
              lVar15 = 0;
              bVar38 = 0;
              if (uVar24 >> 3 != 0) {
                lVar1 = uVar31 * 7 + param_9 + uVar29;
                lVar2 = uVar31 * 5 + param_9 + uVar29;
                lVar3 = uVar31 * 4 + param_9 + uVar29;
                lVar7 = uVar31 * 3 + param_9 + uVar29;
                lVar4 = uVar31 * 6 + param_9 + uVar29;
                lVar5 = uVar31 * 2 + param_9 + uVar29;
                lVar8 = param_9 + uVar31 + uVar29;
                bVar38 = 0;
                do {
                  if (bVar38 < *(byte *)(param_9 + uVar29 + lVar15 * 8)) {
                    bVar38 = *(byte *)(param_9 + uVar29 + lVar15 * 8);
                  }
                  if (bVar38 < *(byte *)(lVar8 + lVar15 * 8)) {
                    bVar38 = *(byte *)(lVar8 + lVar15 * 8);
                  }
                  if (bVar38 < *(byte *)(lVar5 + lVar15 * 8)) {
                    bVar38 = *(byte *)(lVar5 + lVar15 * 8);
                  }
                  if (bVar38 < *(byte *)(lVar7 + lVar15 * 8)) {
                    bVar38 = *(byte *)(lVar7 + lVar15 * 8);
                  }
                  if (bVar38 < *(byte *)(lVar3 + lVar15 * 8)) {
                    bVar38 = *(byte *)(lVar3 + lVar15 * 8);
                  }
                  if (bVar38 < *(byte *)(lVar2 + lVar15 * 8)) {
                    bVar38 = *(byte *)(lVar2 + lVar15 * 8);
                  }
                  if (bVar38 < *(byte *)(lVar4 + lVar15 * 8)) {
                    bVar38 = *(byte *)(lVar4 + lVar15 * 8);
                  }
                  if (bVar38 < *(byte *)(lVar1 + lVar15 * 8)) {
                    bVar38 = *(byte *)(lVar1 + lVar15 * 8);
                  }
                  uVar34 = uVar34 + 1;
                  lVar15 = lVar15 + uVar31;
                } while (uVar34 < uVar24 >> 3);
                uVar22 = uVar34 * 8 + 1;
              }
              if (uVar22 <= uVar24) {
                    /* WARNING: Could not recover jumptable at 0x00014037a94d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_14037a94f +
                          (byte)(&DAT_143089d40)[(uint)((int)uVar24 - (int)uVar22)]))
                          (param_9 - uVar31);
                return;
              }
            }
            *(byte *)(uVar29 + (param_3 - param_4) + lVar26) = bVar38;
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar11);
        }
        lVar32 = lVar32 + 1;
        lVar19 = lVar19 + uVar31;
        if ((longlong)uVar24 <= lVar32) {
          lVar32 = 0;
          lVar19 = param_9;
        }
      } while (lVar33 < (longlong)param_5[1]);
    }
  }
  else {
    uVar22 = 0;
    lVar32 = 0;
    uVar31 = param_5[1];
    lVar19 = 0;
    if (0 < (longlong)uVar31) {
      do {
        uVar34 = 0;
        if (0 < (longlong)uVar11) {
          do {
            uVar17 = 0;
            bVar38 = 0;
            lVar33 = 0;
            if (0 < (longlong)uVar24) {
              lVar26 = lVar30 + lVar19 + uVar34;
              uVar27 = param_7;
              do {
                if (0 < (longlong)uVar29) {
                  if ((longlong)uVar29 < 0x10) {
LAB_14037afae:
                    uVar28 = 0;
                  }
                  else {
                    uVar18 = uVar27 & 0xf;
                    if (uVar18 != 0) {
                      uVar18 = 0x10 - uVar18;
                    }
                    if ((longlong)uVar29 < (longlong)(uVar18 + 0x10)) goto LAB_14037afae;
                    uVar20 = 0;
                    uVar28 = uVar29 - (uVar29 - uVar18 & 0xf);
                    if (uVar18 != 0) {
                      do {
                        if ((*(char *)(uVar20 + uVar27) != '\0') &&
                           (bVar38 < *(byte *)(lVar26 + lVar33 + uVar20))) {
                          bVar38 = *(byte *)(lVar26 + lVar33 + uVar20);
                        }
                        uVar20 = uVar20 + 1;
                      } while (uVar20 < uVar18);
                    }
                    lVar15 = lVar26 + lVar33;
                    uVar39 = CONCAT22(CONCAT11(bVar38,bVar38),CONCAT11(bVar38,bVar38));
                    auVar40._0_8_ = CONCAT44(uVar39,uVar39);
                    auVar40._8_8_ = auVar40._0_8_;
                    do {
                      pcVar6 = (char *)(uVar27 + uVar18);
                      auVar35[0] = -(*pcVar6 == '\0');
                      auVar35[1] = -(pcVar6[1] == '\0');
                      auVar35[2] = -(pcVar6[2] == '\0');
                      auVar35[3] = -(pcVar6[3] == '\0');
                      auVar35[4] = -(pcVar6[4] == '\0');
                      auVar35[5] = -(pcVar6[5] == '\0');
                      auVar35[6] = -(pcVar6[6] == '\0');
                      auVar35[7] = -(pcVar6[7] == '\0');
                      auVar35[8] = -(pcVar6[8] == '\0');
                      auVar35[9] = -(pcVar6[9] == '\0');
                      auVar35[10] = -(pcVar6[10] == '\0');
                      auVar35[0xb] = -(pcVar6[0xb] == '\0');
                      auVar35[0xc] = -(pcVar6[0xc] == '\0');
                      auVar35[0xd] = -(pcVar6[0xd] == '\0');
                      auVar35[0xe] = -(pcVar6[0xe] == '\0');
                      auVar35[0xf] = -(pcVar6[0xf] == '\0');
                      auVar13._8_4_ = 0xffffffff;
                      auVar13._0_8_ = 0xffffffffffffffff;
                      auVar13._12_4_ = 0xffffffff;
                      auVar35 = auVar35 ^ auVar13;
                      if ((auVar35 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar38 = 0;
                      }
                      else {
                        bVar38 = *(byte *)(uVar18 + lVar15);
                      }
                      if ((auVar35 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar37 = 0;
                      }
                      else {
                        bVar37 = *(byte *)(uVar18 + 1 + lVar15);
                      }
                      if ((auVar35 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar41 = 0;
                      }
                      else {
                        bVar41 = *(byte *)(uVar18 + 2 + lVar15);
                      }
                      if ((auVar35 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar42 = 0;
                      }
                      else {
                        bVar42 = *(byte *)(uVar18 + 3 + lVar15);
                      }
                      if ((auVar35 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar43 = 0;
                      }
                      else {
                        bVar43 = *(byte *)(uVar18 + 4 + lVar15);
                      }
                      if ((auVar35 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar44 = 0;
                      }
                      else {
                        bVar44 = *(byte *)(uVar18 + 5 + lVar15);
                      }
                      if ((auVar35 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar45 = 0;
                      }
                      else {
                        bVar45 = *(byte *)(uVar18 + 6 + lVar15);
                      }
                      if ((auVar35 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar46 = 0;
                      }
                      else {
                        bVar46 = *(byte *)(uVar18 + 7 + lVar15);
                      }
                      if ((auVar35 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar47 = 0;
                      }
                      else {
                        bVar47 = *(byte *)(uVar18 + 8 + lVar15);
                      }
                      if ((auVar35 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar9 = 0;
                      }
                      else {
                        bVar9 = *(byte *)(uVar18 + 9 + lVar15);
                      }
                      if ((auVar35 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar10 = 0;
                      }
                      else {
                        bVar10 = *(byte *)(uVar18 + 10 + lVar15);
                      }
                      if ((auVar35 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar14 = 0;
                      }
                      else {
                        bVar14 = *(byte *)(uVar18 + 0xb + lVar15);
                      }
                      if ((auVar35 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar16 = 0;
                      }
                      else {
                        bVar16 = *(byte *)(uVar18 + 0xc + lVar15);
                      }
                      if ((auVar35 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar21 = 0;
                      }
                      else {
                        bVar21 = *(byte *)(uVar18 + 0xd + lVar15);
                      }
                      if ((auVar35 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        bVar23 = 0;
                      }
                      else {
                        bVar23 = *(byte *)(uVar18 + 0xe + lVar15);
                      }
                      if (auVar35[0xf] < '\0') {
                        bVar25 = *(byte *)(uVar18 + 0xf + lVar15);
                      }
                      else {
                        bVar25 = 0;
                      }
                      uVar18 = uVar18 + 0x10;
                      bVar12 = auVar40[0];
                      auVar36[0] = (bVar38 < bVar12) * bVar12 | (bVar38 >= bVar12) * bVar38;
                      bVar38 = auVar40[1];
                      auVar36[1] = (bVar37 < bVar38) * bVar38 | (bVar37 >= bVar38) * bVar37;
                      bVar38 = auVar40[2];
                      auVar36[2] = (bVar41 < bVar38) * bVar38 | (bVar41 >= bVar38) * bVar41;
                      bVar38 = auVar40[3];
                      auVar36[3] = (bVar42 < bVar38) * bVar38 | (bVar42 >= bVar38) * bVar42;
                      bVar38 = auVar40[4];
                      auVar36[4] = (bVar43 < bVar38) * bVar38 | (bVar43 >= bVar38) * bVar43;
                      bVar38 = auVar40[5];
                      auVar36[5] = (bVar44 < bVar38) * bVar38 | (bVar44 >= bVar38) * bVar44;
                      bVar38 = auVar40[6];
                      auVar36[6] = (bVar45 < bVar38) * bVar38 | (bVar45 >= bVar38) * bVar45;
                      bVar38 = auVar40[7];
                      auVar36[7] = (bVar46 < bVar38) * bVar38 | (bVar46 >= bVar38) * bVar46;
                      bVar38 = auVar40[8];
                      auVar36[8] = (bVar47 < bVar38) * bVar38 | (bVar47 >= bVar38) * bVar47;
                      bVar38 = auVar40[9];
                      auVar36[9] = (bVar9 < bVar38) * bVar38 | (bVar9 >= bVar38) * bVar9;
                      bVar38 = auVar40[10];
                      auVar36[10] = (bVar10 < bVar38) * bVar38 | (bVar10 >= bVar38) * bVar10;
                      bVar38 = auVar40[0xb];
                      auVar36[0xb] = (bVar14 < bVar38) * bVar38 | (bVar14 >= bVar38) * bVar14;
                      bVar38 = auVar40[0xc];
                      auVar36[0xc] = (bVar16 < bVar38) * bVar38 | (bVar16 >= bVar38) * bVar16;
                      bVar38 = auVar40[0xd];
                      auVar36[0xd] = (bVar21 < bVar38) * bVar38 | (bVar21 >= bVar38) * bVar21;
                      bVar38 = auVar40[0xe];
                      auVar36[0xe] = (bVar23 < bVar38) * bVar38 | (bVar23 >= bVar38) * bVar23;
                      bVar38 = auVar40[0xf];
                      auVar36[0xf] = (bVar25 < bVar38) * bVar38 | (bVar25 >= bVar38) * bVar25;
                      auVar40 = auVar36 & auVar35 | ~auVar35 & auVar40;
                    } while (uVar18 < uVar28);
                    bVar38 = auVar40[8];
                    bVar37 = auVar40[0];
                    bVar37 = (bVar37 < bVar38) * bVar38 | (bVar37 >= bVar38) * bVar37;
                    bVar38 = auVar40[9];
                    bVar41 = auVar40[1];
                    bVar41 = (bVar41 < bVar38) * bVar38 | (bVar41 >= bVar38) * bVar41;
                    bVar38 = auVar40[10];
                    bVar42 = auVar40[2];
                    bVar42 = (bVar42 < bVar38) * bVar38 | (bVar42 >= bVar38) * bVar42;
                    bVar38 = auVar40[0xb];
                    bVar43 = auVar40[3];
                    bVar43 = (bVar43 < bVar38) * bVar38 | (bVar43 >= bVar38) * bVar43;
                    bVar38 = auVar40[0xc];
                    bVar44 = auVar40[4];
                    bVar44 = (bVar44 < bVar38) * bVar38 | (bVar44 >= bVar38) * bVar44;
                    bVar38 = auVar40[0xd];
                    bVar45 = auVar40[5];
                    bVar45 = (bVar45 < bVar38) * bVar38 | (bVar45 >= bVar38) * bVar45;
                    bVar38 = auVar40[0xe];
                    bVar46 = auVar40[6];
                    bVar46 = (bVar46 < bVar38) * bVar38 | (bVar46 >= bVar38) * bVar46;
                    bVar38 = auVar40[0xf];
                    bVar47 = auVar40[7];
                    bVar47 = (bVar47 < bVar38) * bVar38 | (bVar47 >= bVar38) * bVar47;
                    bVar38 = (bVar37 < bVar44) * bVar44 | (bVar37 >= bVar44) * bVar37;
                    bVar37 = (bVar41 < bVar45) * bVar45 | (bVar41 >= bVar45) * bVar41;
                    bVar41 = (bVar42 < bVar46) * bVar46 | (bVar42 >= bVar46) * bVar42;
                    bVar42 = (bVar43 < bVar47) * bVar47 | (bVar43 >= bVar47) * bVar43;
                    bVar38 = (bVar38 < bVar41) * bVar41 | (bVar38 >= bVar41) * bVar38;
                    bVar37 = (bVar37 < bVar42) * bVar42 | (bVar37 >= bVar42) * bVar37;
                    bVar38 = (bVar38 < bVar37) * bVar37 | (bVar38 >= bVar37) * bVar38;
                  }
                  for (; uVar28 < uVar29; uVar28 = uVar28 + 1) {
                    if ((*(char *)(uVar28 + uVar27) != '\0') &&
                       (bVar38 < *(byte *)(lVar26 + lVar33 + uVar28))) {
                      bVar38 = *(byte *)(lVar26 + lVar33 + uVar28);
                    }
                  }
                }
                uVar17 = uVar17 + 1;
                lVar33 = lVar33 + param_2;
                uVar27 = uVar27 + uVar29;
              } while (uVar17 < uVar24);
            }
            *(byte *)(uVar34 + param_3 + lVar32) = bVar38;
            uVar34 = uVar34 + 1;
          } while (uVar34 < uVar11);
        }
        uVar22 = uVar22 + 1;
        lVar32 = lVar32 + param_4;
        lVar19 = lVar19 + param_2;
      } while (uVar22 < uVar31);
    }
  }
  return;
}



void FUN_1406ed080(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined2 uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  lVar22 = (longlong)param_3 + -1;
  if ((longlong)param_3 < 1) {
    lVar22 = 2;
  }
  lVar26 = (longlong)(int)lVar22 + 1;
  if (2 < lVar26) {
    lVar26 = 0;
  }
  lVar27 = (longlong)(int)lVar26 + 1;
  fVar5 = *param_6;
  auVar31 = ZEXT416((uint)fVar5);
  fVar6 = param_6[1];
  auVar29 = ZEXT416((uint)fVar6);
  if (2 < lVar27) {
    lVar27 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1406ed5d2:
      uVar25 = 0;
    }
    else {
      uVar20 = param_2 * 3 + param_1;
      uVar21 = uVar20 & 0xf;
      if (uVar21 != 0) {
        if ((uVar20 & 3) != 0) goto LAB_1406ed5d2;
        uVar21 = 0x10 - uVar21 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar21 + 8)) goto LAB_1406ed5d2;
      lVar19 = param_2 * lVar26 + param_1;
      lVar18 = param_2 * lVar22 + param_1;
      lVar17 = param_2 * lVar27 + param_1;
      uVar25 = param_5 - (param_5 - uVar21 & 7);
      uVar28 = 0;
      if (uVar21 != 0) {
        do {
          *(float *)(uVar20 + uVar28 * 4) =
               (*(float *)(lVar18 + uVar28 * 4) + *(float *)(lVar17 + uVar28 * 4)) * fVar5 +
               *(float *)(lVar19 + uVar28 * 4) * fVar6;
          uVar28 = uVar28 + 1;
        } while (uVar28 < uVar21);
      }
      if ((uVar21 * 4 + lVar19 & 0xf) == 0) {
        do {
          pfVar4 = (float *)(lVar18 + uVar21 * 4);
          fVar8 = pfVar4[1];
          fVar9 = pfVar4[2];
          fVar10 = pfVar4[3];
          pfVar1 = (float *)(lVar17 + uVar21 * 4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(lVar19 + uVar21 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(uVar20 + uVar21 * 4);
          *pfVar3 = (*pfVar4 + *pfVar1) * fVar5 + *pfVar2 * fVar6;
          pfVar3[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar3[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar3[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
          pfVar1 = (float *)(lVar18 + 0x10 + uVar21 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar17 + 0x10 + uVar21 * 4);
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar3 = (float *)(lVar19 + 0x10 + uVar21 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(uVar20 + 0x10 + uVar21 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar4[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
          uVar21 = uVar21 + 8;
        } while (uVar21 < uVar25);
      }
      else {
        do {
          pfVar4 = (float *)(lVar18 + uVar21 * 4);
          fVar8 = pfVar4[1];
          fVar9 = pfVar4[2];
          fVar10 = pfVar4[3];
          pfVar1 = (float *)(lVar17 + uVar21 * 4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(lVar19 + uVar21 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(uVar20 + uVar21 * 4);
          *pfVar3 = (*pfVar4 + *pfVar1) * fVar5 + *pfVar2 * fVar6;
          pfVar3[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar3[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar3[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
          pfVar1 = (float *)(lVar18 + 0x10 + uVar21 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar17 + 0x10 + uVar21 * 4);
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar3 = (float *)(lVar19 + 0x10 + uVar21 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(uVar20 + 0x10 + uVar21 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar4[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
          uVar21 = uVar21 + 8;
        } while (uVar21 < uVar25);
      }
    }
    uVar21 = 0;
    if (uVar25 + 1 <= param_5) {
      lVar17 = uVar25 * 4;
      do {
        *(float *)(param_2 * 3 + param_1 + lVar17 + uVar21 * 4) =
             (*(float *)(lVar22 * param_2 + param_1 + lVar17 + uVar21 * 4) +
             *(float *)(lVar27 * param_2 + param_1 + lVar17 + uVar21 * 4)) * fVar5 +
             *(float *)(lVar26 * param_2 + param_1 + lVar17 + uVar21 * 4) * fVar6;
        uVar21 = uVar21 + 1;
      } while (uVar21 < param_5 - uVar25);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar21 = param_4 & 0xf;
      if (uVar21 != 0) {
        if ((param_4 & 1) != 0) goto LAB_1406ed5e1;
        uVar21 = 0x10 - uVar21 >> 1;
      }
      if ((longlong)(uVar21 + 8) <= (longlong)param_5) {
        lVar22 = param_2 * 3 + param_1;
        uVar25 = 0;
        uVar20 = param_5 - (param_5 - uVar21 & 7);
        if (uVar21 != 0) {
          do {
            iVar24 = (int)ROUND(*(float *)(lVar22 + uVar25 * 4));
            if (0x7ffe < iVar24) {
              iVar24 = 0x7fff;
            }
            uVar23 = (undefined2)iVar24;
            if (iVar24 < -0x7fff) {
              uVar23 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar25 * 2) = uVar23;
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar21);
        }
        if ((uVar21 * 4 + lVar22 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar22 + uVar21 * 4);
            auVar31._0_4_ = (int)*pfVar1;
            auVar31._4_4_ = (int)pfVar1[1];
            auVar31._8_4_ = (int)pfVar1[2];
            auVar31._12_4_ = (int)pfVar1[3];
            pfVar1 = (float *)(lVar22 + 0x10 + uVar21 * 4);
            auVar29._0_4_ = (int)*pfVar1;
            auVar29._4_4_ = (int)pfVar1[1];
            auVar29._8_4_ = (int)pfVar1[2];
            auVar29._12_4_ = (int)pfVar1[3];
            auVar29 = packssdw(auVar31,auVar29);
            *(undefined1 (*) [16])(param_4 + uVar21 * 2) = auVar29;
            uVar21 = uVar21 + 8;
          } while (uVar21 < uVar20);
        }
        else {
          do {
            auVar29 = lddqu(auVar29,*(undefined1 (*) [16])(lVar22 + uVar21 * 4));
            auVar31 = lddqu(auVar31,*(undefined1 (*) [16])(lVar22 + 0x10 + uVar21 * 4));
            auVar35._0_4_ = (int)auVar29._0_4_;
            auVar35._4_4_ = (int)auVar29._4_4_;
            auVar35._8_4_ = (int)auVar29._8_4_;
            auVar35._12_4_ = (int)auVar29._12_4_;
            auVar34._4_4_ = (int)auVar31._4_4_;
            auVar34._0_4_ = (int)auVar31._0_4_;
            auVar34._8_4_ = (int)auVar31._8_4_;
            auVar34._12_4_ = (int)auVar31._12_4_;
            auVar34 = packssdw(auVar35,auVar34);
            *(undefined1 (*) [16])(param_4 + uVar21 * 2) = auVar34;
            uVar21 = uVar21 + 8;
          } while (uVar21 < uVar20);
        }
        goto LAB_1406ed580;
      }
    }
LAB_1406ed5e1:
    uVar20 = 0;
LAB_1406ed580:
    if (param_5 <= uVar20) {
      return;
    }
    do {
      iVar24 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar20 * 4));
      if (0x7ffe < iVar24) {
        iVar24 = 0x7fff;
      }
      uVar23 = (undefined2)iVar24;
      if (iVar24 < -0x7fff) {
        uVar23 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar20 * 2) = uVar23;
      uVar20 = uVar20 + 1;
    } while (uVar20 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar21 = param_4 & 0xf;
    if (uVar21 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1406ed5da;
      uVar21 = 0x10 - uVar21 >> 1;
    }
    if ((longlong)(uVar21 + 8) <= (longlong)param_5) {
      lVar22 = param_2 * 3 + param_1;
      uVar25 = 0;
      uVar20 = param_5 - (param_5 - uVar21 & 7);
      if (uVar21 != 0) {
        do {
          iVar24 = (int)ROUND(*(float *)(lVar22 + uVar25 * 4));
          if (0x7ffe < iVar24) {
            iVar24 = 0x7fff;
          }
          uVar23 = (undefined2)iVar24;
          if (iVar24 < -0x7fff) {
            uVar23 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar25 * 2) = uVar23;
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar21);
      }
      if ((uVar21 * 4 + lVar22 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar22 + uVar21 * 4);
          auVar32._0_4_ = (int)*pfVar1;
          auVar32._4_4_ = (int)pfVar1[1];
          auVar32._8_4_ = (int)pfVar1[2];
          auVar32._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(lVar22 + 0x10 + uVar21 * 4);
          auVar30._0_4_ = (int)*pfVar1;
          auVar30._4_4_ = (int)pfVar1[1];
          auVar30._8_4_ = (int)pfVar1[2];
          auVar30._12_4_ = (int)pfVar1[3];
          auVar29 = packssdw(auVar32,auVar30);
          *(undefined1 (*) [16])(param_4 + uVar21 * 2) = auVar29;
          uVar21 = uVar21 + 8;
        } while (uVar21 < uVar20);
      }
      else {
        do {
          auVar29 = lddqu(auVar29,*(undefined1 (*) [16])(lVar22 + uVar21 * 4));
          auVar31 = lddqu(auVar31,*(undefined1 (*) [16])(lVar22 + 0x10 + uVar21 * 4));
          auVar33._0_4_ = (int)auVar29._0_4_;
          auVar33._4_4_ = (int)auVar29._4_4_;
          auVar33._8_4_ = (int)auVar29._8_4_;
          auVar33._12_4_ = (int)auVar29._12_4_;
          auVar7._4_4_ = (int)auVar31._4_4_;
          auVar7._0_4_ = (int)auVar31._0_4_;
          auVar7._8_4_ = (int)auVar31._8_4_;
          auVar7._12_4_ = (int)auVar31._12_4_;
          auVar34 = packssdw(auVar33,auVar7);
          *(undefined1 (*) [16])(param_4 + uVar21 * 2) = auVar34;
          uVar21 = uVar21 + 8;
        } while (uVar21 < uVar20);
      }
      goto LAB_1406ed420;
    }
  }
LAB_1406ed5da:
  uVar20 = 0;
LAB_1406ed420:
  if (uVar20 < param_5) {
    do {
      iVar24 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar20 * 4));
      if (0x7ffe < iVar24) {
        iVar24 = 0x7fff;
      }
      uVar23 = (undefined2)iVar24;
      if (iVar24 < -0x7fff) {
        uVar23 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar20 * 2) = uVar23;
      uVar20 = uVar20 + 1;
    } while (uVar20 < param_5);
  }
  return;
}



void FUN_1401c7d60(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
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
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined2 uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  lVar27 = (longlong)param_3 + -1;
  if (SCARRY8((longlong)param_3,-1) != lVar27 < 0) {
    lVar27 = 2;
  }
  fVar5 = *param_6;
  auVar30 = ZEXT416((uint)fVar5);
  fVar6 = param_6[1];
  auVar32 = ZEXT416((uint)fVar6);
  lVar26 = (longlong)(int)lVar27 + 1;
  if (2 < lVar26) {
    lVar26 = 0;
  }
  lVar22 = (longlong)(int)lVar26 + 1;
  if (2 < lVar22) {
    lVar22 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1401c82da:
      uVar25 = 0;
      if (param_5 == 0) goto LAB_1401c8009;
      uVar21 = 0;
      uVar19 = param_5;
    }
    else {
      uVar18 = param_2 * 3 + param_1;
      uVar19 = uVar18 & 0xf;
      if (uVar19 != 0) {
        if ((uVar18 & 3) != 0) goto LAB_1401c82da;
        uVar19 = 0x10 - uVar19 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar19 + 8)) goto LAB_1401c82da;
      uVar25 = param_5 - (param_5 - uVar19 & 7);
      lVar20 = param_2 * lVar26 + param_1;
      lVar28 = param_2 * lVar27 + param_1;
      lVar17 = param_2 * lVar22 + param_1;
      uVar21 = 0;
      if (uVar19 != 0) {
        do {
          *(float *)(uVar18 + uVar21 * 4) =
               (*(float *)(lVar28 + uVar21 * 4) + *(float *)(lVar17 + uVar21 * 4)) * fVar5 +
               *(float *)(lVar20 + uVar21 * 4) * fVar6;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar19);
      }
      if ((lVar20 + uVar19 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar28 + uVar19 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar17 + uVar19 * 4);
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar3 = (float *)(lVar20 + uVar19 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(uVar18 + uVar19 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar4[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
          pfVar1 = (float *)(lVar28 + 0x10 + uVar19 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar17 + 0x10 + uVar19 * 4);
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar3 = (float *)(lVar20 + 0x10 + uVar19 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(uVar18 + 0x10 + uVar19 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar4[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
          uVar19 = uVar19 + 8;
        } while (uVar19 < uVar25);
      }
      else {
        do {
          pfVar1 = (float *)(lVar28 + uVar19 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar17 + uVar19 * 4);
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar3 = (float *)(lVar20 + uVar19 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(uVar18 + uVar19 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar4[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
          pfVar1 = (float *)(lVar28 + 0x10 + uVar19 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar17 + 0x10 + uVar19 * 4);
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar3 = (float *)(lVar20 + 0x10 + uVar19 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(uVar18 + 0x10 + uVar19 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar4[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
          uVar19 = uVar19 + 8;
        } while (uVar19 < uVar25);
      }
      if (param_5 < uVar25 + 1) goto LAB_1401c8009;
      uVar19 = param_5 - uVar25;
      if ((longlong)uVar19 < 4) {
        uVar21 = 0;
      }
      else {
        uVar29 = 0;
        uVar21 = uVar19 & 0xfffffffffffffffc;
        do {
          pfVar1 = (float *)(lVar28 + uVar25 * 4 + uVar29 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar17 + uVar25 * 4 + uVar29 * 4);
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar3 = (float *)(lVar20 + uVar25 * 4 + uVar29 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(uVar18 + uVar25 * 4 + uVar29 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[2] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar4[3] = (fVar10 + fVar13) * fVar5 + fVar16 * fVar6;
          uVar29 = uVar29 + 4;
        } while (uVar29 < uVar21);
      }
    }
    if (uVar21 < uVar19) {
      do {
        *(float *)(param_2 * 3 + param_1 + uVar25 * 4 + uVar21 * 4) =
             (*(float *)(lVar27 * param_2 + param_1 + uVar25 * 4 + uVar21 * 4) +
             *(float *)(lVar22 * param_2 + param_1 + uVar25 * 4 + uVar21 * 4)) * fVar5 +
             *(float *)(lVar26 * param_2 + param_1 + uVar25 * 4 + uVar21 * 4) * fVar6;
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar19);
    }
  }
LAB_1401c8009:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar18 = param_4 & 0xf;
      if (uVar18 != 0) {
        if ((param_4 & 1) != 0) goto LAB_1401c82f7;
        uVar18 = 0x10 - uVar18 >> 1;
      }
      if ((longlong)(uVar18 + 8) <= (longlong)param_5) {
        uVar25 = 0;
        lVar27 = param_2 * 3 + param_1;
        uVar19 = param_5 - (param_5 - uVar18 & 7);
        if (uVar18 != 0) {
          do {
            iVar24 = (int)ROUND(*(float *)(lVar27 + uVar25 * 4));
            if (0x7ffe < iVar24) {
              iVar24 = 0x7fff;
            }
            uVar23 = (undefined2)iVar24;
            if (iVar24 < -0x7fff) {
              uVar23 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar25 * 2) = uVar23;
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar18);
        }
        if ((lVar27 + uVar18 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar27 + uVar18 * 4);
            auVar32._0_4_ = (int)*pfVar1;
            auVar32._4_4_ = (int)pfVar1[1];
            auVar32._8_4_ = (int)pfVar1[2];
            auVar32._12_4_ = (int)pfVar1[3];
            pfVar1 = (float *)(lVar27 + 0x10 + uVar18 * 4);
            auVar30._0_4_ = (int)*pfVar1;
            auVar30._4_4_ = (int)pfVar1[1];
            auVar30._8_4_ = (int)pfVar1[2];
            auVar30._12_4_ = (int)pfVar1[3];
            auVar30 = packssdw(auVar32,auVar30);
            *(undefined1 (*) [16])(param_4 + uVar18 * 2) = auVar30;
            uVar18 = uVar18 + 8;
          } while (uVar18 < uVar19);
        }
        else {
          do {
            auVar30 = lddqu(auVar30,*(undefined1 (*) [16])(lVar27 + uVar18 * 4));
            auVar32 = lddqu(auVar32,*(undefined1 (*) [16])(lVar27 + 0x10 + uVar18 * 4));
            auVar36._0_4_ = (int)auVar30._0_4_;
            auVar36._4_4_ = (int)auVar30._4_4_;
            auVar36._8_4_ = (int)auVar30._8_4_;
            auVar36._12_4_ = (int)auVar30._12_4_;
            auVar35._4_4_ = (int)auVar32._4_4_;
            auVar35._0_4_ = (int)auVar32._0_4_;
            auVar35._8_4_ = (int)auVar32._8_4_;
            auVar35._12_4_ = (int)auVar32._12_4_;
            auVar35 = packssdw(auVar36,auVar35);
            *(undefined1 (*) [16])(param_4 + uVar18 * 2) = auVar35;
            uVar18 = uVar18 + 8;
          } while (uVar18 < uVar19);
        }
        goto LAB_1401c827f;
      }
    }
LAB_1401c82f7:
    uVar19 = 0;
LAB_1401c827f:
    if (param_5 <= uVar19) {
      return;
    }
    do {
      iVar24 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar19 * 4));
      if (0x7ffe < iVar24) {
        iVar24 = 0x7fff;
      }
      uVar23 = (undefined2)iVar24;
      if (iVar24 < -0x7fff) {
        uVar23 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar19 * 2) = uVar23;
      uVar19 = uVar19 + 1;
    } while (uVar19 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar18 = param_4 & 0xf;
    if (uVar18 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1401c82f0;
      uVar18 = 0x10 - uVar18 >> 1;
    }
    if ((longlong)(uVar18 + 8) <= (longlong)param_5) {
      uVar25 = 0;
      lVar27 = param_2 * 3 + param_1;
      uVar19 = param_5 - (param_5 - uVar18 & 7);
      if (uVar18 != 0) {
        do {
          iVar24 = (int)ROUND(*(float *)(lVar27 + uVar25 * 4));
          if (0x7ffe < iVar24) {
            iVar24 = 0x7fff;
          }
          uVar23 = (undefined2)iVar24;
          if (iVar24 < -0x7fff) {
            uVar23 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar25 * 2) = uVar23;
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar18);
      }
      if ((lVar27 + uVar18 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar27 + uVar18 * 4);
          auVar33._0_4_ = (int)*pfVar1;
          auVar33._4_4_ = (int)pfVar1[1];
          auVar33._8_4_ = (int)pfVar1[2];
          auVar33._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(lVar27 + 0x10 + uVar18 * 4);
          auVar31._0_4_ = (int)*pfVar1;
          auVar31._4_4_ = (int)pfVar1[1];
          auVar31._8_4_ = (int)pfVar1[2];
          auVar31._12_4_ = (int)pfVar1[3];
          auVar30 = packssdw(auVar33,auVar31);
          *(undefined1 (*) [16])(param_4 + uVar18 * 2) = auVar30;
          uVar18 = uVar18 + 8;
        } while (uVar18 < uVar19);
      }
      else {
        do {
          auVar30 = lddqu(auVar30,*(undefined1 (*) [16])(lVar27 + uVar18 * 4));
          auVar32 = lddqu(auVar32,*(undefined1 (*) [16])(lVar27 + 0x10 + uVar18 * 4));
          auVar34._0_4_ = (int)auVar30._0_4_;
          auVar34._4_4_ = (int)auVar30._4_4_;
          auVar34._8_4_ = (int)auVar30._8_4_;
          auVar34._12_4_ = (int)auVar30._12_4_;
          auVar7._4_4_ = (int)auVar32._4_4_;
          auVar7._0_4_ = (int)auVar32._0_4_;
          auVar7._8_4_ = (int)auVar32._8_4_;
          auVar7._12_4_ = (int)auVar32._12_4_;
          auVar35 = packssdw(auVar34,auVar7);
          *(undefined1 (*) [16])(param_4 + uVar18 * 2) = auVar35;
          uVar18 = uVar18 + 8;
        } while (uVar18 < uVar19);
      }
      goto LAB_1401c811f;
    }
  }
LAB_1401c82f0:
  uVar19 = 0;
LAB_1401c811f:
  if (uVar19 < param_5) {
    do {
      iVar24 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar19 * 4));
      if (0x7ffe < iVar24) {
        iVar24 = 0x7fff;
      }
      uVar23 = (undefined2)iVar24;
      if (iVar24 < -0x7fff) {
        uVar23 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar19 * 2) = uVar23;
      uVar19 = uVar19 + 1;
    } while (uVar19 < param_5);
  }
  return;
}


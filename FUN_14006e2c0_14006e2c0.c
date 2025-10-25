
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006e2c0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined2 uVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  lVar24 = (longlong)param_3 + -1;
  if ((longlong)param_3 < 1) {
    lVar24 = 2;
  }
  lVar29 = (longlong)(int)lVar24 + 1;
  if (2 < lVar29) {
    lVar29 = 0;
  }
  lVar27 = (longlong)(int)lVar29 + 1;
  fVar5 = *param_6;
  fVar6 = param_6[1];
  if (2 < lVar27) {
    lVar27 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14006e86e:
      uVar28 = 0;
    }
    else {
      uVar23 = param_2 * 3 + param_1;
      uVar21 = uVar23 & 0xf;
      if (uVar21 != 0) {
        if ((uVar23 & 3) != 0) goto LAB_14006e86e;
        uVar21 = 0x10 - uVar21 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar21 + 8)) goto LAB_14006e86e;
      lVar20 = param_2 * lVar29 + param_1;
      lVar19 = param_2 * lVar24 + param_1;
      lVar18 = param_2 * lVar27 + param_1;
      uVar28 = param_5 - (param_5 - uVar21 & 7);
      uVar22 = 0;
      if (uVar21 != 0) {
        do {
          *(float *)(uVar23 + uVar22 * 4) =
               (*(float *)(lVar19 + uVar22 * 4) + *(float *)(lVar18 + uVar22 * 4)) * fVar5 +
               *(float *)(lVar20 + uVar22 * 4) * fVar6;
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar21);
      }
      if ((uVar21 * 4 + lVar20 & 0xf) == 0) {
        do {
          pfVar4 = (float *)(lVar19 + uVar21 * 4);
          fVar7 = pfVar4[1];
          fVar8 = pfVar4[2];
          fVar9 = pfVar4[3];
          pfVar1 = (float *)(lVar18 + uVar21 * 4);
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + uVar21 * 4);
          fVar13 = pfVar2[1];
          fVar14 = pfVar2[2];
          fVar15 = pfVar2[3];
          pfVar3 = (float *)(uVar23 + uVar21 * 4);
          *pfVar3 = (*pfVar4 + *pfVar1) * fVar5 + *pfVar2 * fVar6;
          pfVar3[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar3[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar3[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar1 = (float *)(lVar19 + 0x10 + uVar21 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar18 + 0x10 + uVar21 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar20 + 0x10 + uVar21 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(uVar23 + 0x10 + uVar21 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          uVar21 = uVar21 + 8;
        } while (uVar21 < uVar28);
      }
      else {
        do {
          pfVar4 = (float *)(lVar19 + uVar21 * 4);
          fVar7 = pfVar4[1];
          fVar8 = pfVar4[2];
          fVar9 = pfVar4[3];
          pfVar1 = (float *)(lVar18 + uVar21 * 4);
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + uVar21 * 4);
          fVar13 = pfVar2[1];
          fVar14 = pfVar2[2];
          fVar15 = pfVar2[3];
          pfVar3 = (float *)(uVar23 + uVar21 * 4);
          *pfVar3 = (*pfVar4 + *pfVar1) * fVar5 + *pfVar2 * fVar6;
          pfVar3[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar3[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar3[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar1 = (float *)(lVar19 + 0x10 + uVar21 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar18 + 0x10 + uVar21 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar20 + 0x10 + uVar21 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(uVar23 + 0x10 + uVar21 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          uVar21 = uVar21 + 8;
        } while (uVar21 < uVar28);
      }
    }
    uVar21 = 0;
    if (uVar28 + 1 <= param_5) {
      lVar18 = uVar28 * 4;
      do {
        *(float *)(param_2 * 3 + param_1 + lVar18 + uVar21 * 4) =
             (*(float *)(lVar24 * param_2 + param_1 + lVar18 + uVar21 * 4) +
             *(float *)(lVar27 * param_2 + param_1 + lVar18 + uVar21 * 4)) * fVar5 +
             *(float *)(lVar29 * param_2 + param_1 + lVar18 + uVar21 * 4) * fVar6;
        uVar21 = uVar21 + 1;
      } while (uVar21 < param_5 - uVar28);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar23 = param_2 * 3 + param_1;
      uVar21 = uVar23 & 0xf;
      if (uVar21 != 0) {
        if ((uVar23 & 3) != 0) goto LAB_14006e87d;
        uVar21 = 0x10 - uVar21 >> 2;
      }
      if ((longlong)(uVar21 + 4) <= (longlong)param_5) {
        uVar22 = 0;
        uVar28 = param_5 - (param_5 - uVar21 & 3);
        if (uVar21 != 0) {
          do {
            iVar26 = (int)ROUND(*(float *)(uVar23 + uVar22 * 4));
            if (0xfffe < iVar26) {
              iVar26 = 0xffff;
            }
            uVar25 = (undefined2)iVar26;
            if (iVar26 < 1) {
              uVar25 = 0;
            }
            *(undefined2 *)(param_4 + uVar22 * 2) = uVar25;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar21);
        }
        auVar17 = _DAT_143086a00;
        auVar16 = _DAT_1430869f0;
        lVar24 = uVar21 * 2;
        do {
          pfVar1 = (float *)(uVar23 + uVar21 * 4);
          auVar35._0_4_ = (int)*pfVar1;
          auVar35._4_4_ = (int)pfVar1[1];
          auVar35._8_4_ = (int)pfVar1[2];
          auVar35._12_4_ = (int)pfVar1[3];
          auVar38._0_4_ = -(uint)(auVar16._0_4_ < auVar35._0_4_);
          auVar38._4_4_ = -(uint)(auVar16._4_4_ < auVar35._4_4_);
          auVar38._8_4_ = -(uint)(auVar16._8_4_ < auVar35._8_4_);
          auVar38._12_4_ = -(uint)(auVar16._12_4_ < auVar35._12_4_);
          uVar21 = uVar21 + 4;
          auVar35 = auVar38 & (auVar16 ^ auVar35) ^ auVar35;
          auVar36._0_4_ = -(uint)(0 < auVar35._0_4_);
          auVar36._4_4_ = -(uint)(0 < auVar35._4_4_);
          auVar36._8_4_ = -(uint)(0 < auVar35._8_4_);
          auVar36._12_4_ = -(uint)(0 < auVar35._12_4_);
          auVar38 = pshufb(auVar36 & auVar35,auVar17);
          *(longlong *)(lVar24 + param_4) = auVar38._0_8_;
          lVar24 = lVar24 + 8;
        } while (uVar21 < uVar28);
        goto LAB_14006e80b;
      }
    }
LAB_14006e87d:
    uVar28 = 0;
LAB_14006e80b:
    if (param_5 <= uVar28) {
      return;
    }
    do {
      iVar26 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar28 * 4));
      if (0xfffe < iVar26) {
        iVar26 = 0xffff;
      }
      uVar25 = (undefined2)iVar26;
      if (iVar26 < 1) {
        uVar25 = 0;
      }
      *(undefined2 *)(param_4 + uVar28 * 2) = uVar25;
      uVar28 = uVar28 + 1;
    } while (uVar28 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar23 = param_2 * 3 + param_1;
    uVar21 = uVar23 & 0xf;
    if (uVar21 != 0) {
      if ((uVar23 & 3) != 0) goto LAB_14006e876;
      uVar21 = 0x10 - uVar21 >> 2;
    }
    if ((longlong)(uVar21 + 8) <= (longlong)param_5) {
      uVar22 = 0;
      uVar28 = param_5 - (param_5 - uVar21 & 7);
      if (uVar21 != 0) {
        do {
          iVar26 = (int)ROUND(*(float *)(uVar23 + uVar22 * 4));
          if (0xfffe < iVar26) {
            iVar26 = 0xffff;
          }
          uVar25 = (undefined2)iVar26;
          if (iVar26 < 1) {
            uVar25 = 0;
          }
          *(undefined2 *)(param_4 + uVar22 * 2) = uVar25;
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar21);
      }
      auVar17 = _DAT_143086a00;
      auVar16 = _DAT_1430869f0;
      lVar24 = uVar21 * 2;
      do {
        pfVar1 = (float *)(uVar23 + uVar21 * 4);
        auVar33._0_4_ = (int)*pfVar1;
        auVar33._4_4_ = (int)pfVar1[1];
        auVar33._8_4_ = (int)pfVar1[2];
        auVar33._12_4_ = (int)pfVar1[3];
        auVar32._0_4_ = -(uint)(auVar16._0_4_ < auVar33._0_4_);
        auVar32._4_4_ = -(uint)(auVar16._4_4_ < auVar33._4_4_);
        auVar32._8_4_ = -(uint)(auVar16._8_4_ < auVar33._8_4_);
        auVar32._12_4_ = -(uint)(auVar16._12_4_ < auVar33._12_4_);
        auVar33 = auVar32 & (auVar16 ^ auVar33) ^ auVar33;
        auVar37._0_4_ = -(uint)(0 < auVar33._0_4_);
        auVar37._4_4_ = -(uint)(0 < auVar33._4_4_);
        auVar37._8_4_ = -(uint)(0 < auVar33._8_4_);
        auVar37._12_4_ = -(uint)(0 < auVar33._12_4_);
        auVar38 = pshufb(auVar37 & auVar33,auVar17);
        *(longlong *)(lVar24 + param_4) = auVar38._0_8_;
        pfVar1 = (float *)(uVar23 + 0x10 + uVar21 * 4);
        auVar31._0_4_ = (int)*pfVar1;
        auVar31._4_4_ = (int)pfVar1[1];
        auVar31._8_4_ = (int)pfVar1[2];
        auVar31._12_4_ = (int)pfVar1[3];
        auVar30._0_4_ = -(uint)(auVar16._0_4_ < auVar31._0_4_);
        auVar30._4_4_ = -(uint)(auVar16._4_4_ < auVar31._4_4_);
        auVar30._8_4_ = -(uint)(auVar16._8_4_ < auVar31._8_4_);
        auVar30._12_4_ = -(uint)(auVar16._12_4_ < auVar31._12_4_);
        uVar21 = uVar21 + 8;
        auVar31 = auVar30 & (auVar16 ^ auVar31) ^ auVar31;
        auVar34._0_4_ = -(uint)(0 < auVar31._0_4_);
        auVar34._4_4_ = -(uint)(0 < auVar31._4_4_);
        auVar34._8_4_ = -(uint)(0 < auVar31._8_4_);
        auVar34._12_4_ = -(uint)(0 < auVar31._12_4_);
        auVar38 = pshufb(auVar34 & auVar31,auVar17);
        *(longlong *)(lVar24 + 8 + param_4) = auVar38._0_8_;
        lVar24 = lVar24 + 0x10;
      } while (uVar21 < uVar28);
      goto LAB_14006e68e;
    }
  }
LAB_14006e876:
  uVar28 = 0;
LAB_14006e68e:
  uVar21 = 0;
  if (uVar28 + 1 <= param_5) {
    do {
      iVar26 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar28 * 4 + uVar21 * 4));
      if (0xfffe < iVar26) {
        iVar26 = 0xffff;
      }
      uVar25 = (undefined2)iVar26;
      if (iVar26 < 1) {
        uVar25 = 0;
      }
      *(undefined2 *)(param_4 + uVar28 * 2 + uVar21 * 2) = uVar25;
      uVar21 = uVar21 + 1;
    } while (uVar21 < param_5 - uVar28);
  }
  return;
}


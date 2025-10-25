
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004b880(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
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
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined2 uVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  fVar5 = *param_6;
  fVar6 = param_6[1];
  lVar30 = 2;
  if (0 < (longlong)param_3) {
    lVar30 = (longlong)param_3 + -1;
  }
  lVar29 = (longlong)(int)lVar30 + 1;
  if (2 < lVar29) {
    lVar29 = 0;
  }
  lVar27 = (longlong)(int)lVar29 + 1;
  if (2 < lVar27) {
    lVar27 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14004be19:
      uVar28 = 0;
      if (param_5 == 0) goto LAB_14004bb28;
      uVar24 = 0;
      uVar22 = param_5;
    }
    else {
      uVar21 = param_2 * 3 + param_1;
      uVar22 = uVar21 & 0xf;
      if (uVar22 != 0) {
        if ((uVar21 & 3) != 0) goto LAB_14004be19;
        uVar22 = 0x10 - uVar22 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar22 + 8)) goto LAB_14004be19;
      lVar23 = param_2 * lVar29 + param_1;
      lVar31 = param_2 * lVar30 + param_1;
      lVar20 = param_2 * lVar27 + param_1;
      uVar28 = param_5 - (param_5 - uVar22 & 7);
      uVar24 = 0;
      if (uVar22 != 0) {
        do {
          *(float *)(uVar21 + uVar24 * 4) =
               (*(float *)(lVar31 + uVar24 * 4) + *(float *)(lVar20 + uVar24 * 4)) * fVar5 +
               *(float *)(lVar23 + uVar24 * 4) * fVar6;
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar22);
      }
      if ((lVar23 + uVar22 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar31 + uVar22 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + uVar22 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar23 + uVar22 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(uVar21 + uVar22 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar1 = (float *)(lVar31 + 0x10 + uVar22 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + 0x10 + uVar22 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar23 + 0x10 + uVar22 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(uVar21 + 0x10 + uVar22 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          uVar22 = uVar22 + 8;
        } while (uVar22 < uVar28);
      }
      else {
        do {
          pfVar1 = (float *)(lVar31 + uVar22 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + uVar22 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar23 + uVar22 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(uVar21 + uVar22 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          pfVar1 = (float *)(lVar31 + 0x10 + uVar22 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + 0x10 + uVar22 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar23 + 0x10 + uVar22 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(uVar21 + 0x10 + uVar22 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          uVar22 = uVar22 + 8;
        } while (uVar22 < uVar28);
      }
      if (param_5 < uVar28 + 1) goto LAB_14004bb28;
      uVar22 = param_5 - uVar28;
      if ((longlong)uVar22 < 4) {
        uVar24 = 0;
      }
      else {
        uVar32 = 0;
        uVar24 = uVar22 & 0xfffffffffffffffc;
        do {
          pfVar1 = (float *)(lVar31 + uVar28 * 4 + uVar32 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar20 + uVar28 * 4 + uVar32 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(lVar23 + uVar28 * 4 + uVar32 * 4);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar4 = (float *)(uVar21 + uVar28 * 4 + uVar32 * 4);
          *pfVar4 = (*pfVar1 + *pfVar2) * fVar5 + *pfVar3 * fVar6;
          pfVar4[1] = (fVar7 + fVar10) * fVar5 + fVar13 * fVar6;
          pfVar4[2] = (fVar8 + fVar11) * fVar5 + fVar14 * fVar6;
          pfVar4[3] = (fVar9 + fVar12) * fVar5 + fVar15 * fVar6;
          uVar32 = uVar32 + 4;
        } while (uVar32 < uVar24);
      }
    }
    if (uVar24 < uVar22) {
      do {
        *(float *)(param_2 * 3 + param_1 + uVar28 * 4 + uVar24 * 4) =
             (*(float *)(lVar30 * param_2 + param_1 + uVar28 * 4 + uVar24 * 4) +
             *(float *)(lVar27 * param_2 + param_1 + uVar28 * 4 + uVar24 * 4)) * fVar5 +
             *(float *)(lVar29 * param_2 + param_1 + uVar28 * 4 + uVar24 * 4) * fVar6;
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar22);
    }
  }
LAB_14004bb28:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar22 = param_2 * 3 + param_1;
      uVar21 = uVar22 & 0xf;
      if (uVar21 != 0) {
        if ((uVar22 & 3) != 0) goto LAB_14004be36;
        uVar21 = 0x10 - uVar21 >> 2;
      }
      if ((longlong)(uVar21 + 4) <= (longlong)param_5) {
        uVar24 = 0;
        uVar28 = param_5 - (param_5 - uVar21 & 3);
        uVar16 = _UNK_1430868cc;
        uVar17 = _UNK_1430868c8;
        uVar18 = _UNK_1430868c4;
        uVar19 = _DAT_1430868c0;
        if (uVar21 != 0) {
          do {
            iVar26 = (int)ROUND(*(float *)(uVar22 + uVar24 * 4));
            if (0xfffe < iVar26) {
              iVar26 = 0xffff;
            }
            uVar25 = (undefined2)iVar26;
            if (iVar26 < 1) {
              uVar25 = 0;
            }
            *(undefined2 *)(param_4 + uVar24 * 2) = uVar25;
            uVar24 = uVar24 + 1;
            uVar16 = _UNK_1430868cc;
            uVar17 = _UNK_1430868c8;
            uVar18 = _UNK_1430868c4;
            uVar19 = _DAT_1430868c0;
          } while (uVar24 < uVar21);
        }
        do {
          pfVar1 = (float *)(uVar22 + uVar21 * 4);
          uVar34 = (uint)*pfVar1;
          uVar35 = (uint)pfVar1[1];
          uVar36 = (uint)pfVar1[2];
          uVar37 = (uint)pfVar1[3];
          uVar34 = -(uint)((int)uVar19 < (int)uVar34) & (uVar19 ^ uVar34) ^ uVar34;
          uVar35 = -(uint)((int)uVar18 < (int)uVar35) & (uVar18 ^ uVar35) ^ uVar35;
          uVar36 = -(uint)((int)uVar17 < (int)uVar36) & (uVar17 ^ uVar36) ^ uVar36;
          uVar37 = -(uint)((int)uVar16 < (int)uVar37) & (uVar16 ^ uVar37) ^ uVar37;
          auVar39._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar34) & (ushort)uVar34);
          auVar39._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar35) & (ushort)uVar35);
          auVar39._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar36) & (ushort)uVar36);
          auVar39._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar37) & (ushort)uVar37);
          auVar39 = packssdw(auVar39,(undefined1  [16])0x0);
          *(longlong *)(param_4 + uVar21 * 2) = auVar39._0_8_;
          uVar21 = uVar21 + 4;
        } while (uVar21 < uVar28);
        goto LAB_14004bdcf;
      }
    }
LAB_14004be36:
    uVar28 = 0;
LAB_14004bdcf:
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
    uVar22 = param_2 * 3 + param_1;
    uVar21 = uVar22 & 0xf;
    if (uVar21 != 0) {
      if ((uVar22 & 3) != 0) goto LAB_14004be2f;
      uVar21 = 0x10 - uVar21 >> 2;
    }
    if ((longlong)(uVar21 + 8) <= (longlong)param_5) {
      uVar24 = 0;
      uVar28 = param_5 - (param_5 - uVar21 & 7);
      uVar16 = _UNK_1430868cc;
      uVar17 = _UNK_1430868c8;
      uVar18 = _UNK_1430868c4;
      uVar19 = _DAT_1430868c0;
      if (uVar21 != 0) {
        do {
          iVar26 = (int)ROUND(*(float *)(uVar22 + uVar24 * 4));
          if (0xfffe < iVar26) {
            iVar26 = 0xffff;
          }
          uVar25 = (undefined2)iVar26;
          if (iVar26 < 1) {
            uVar25 = 0;
          }
          *(undefined2 *)(param_4 + uVar24 * 2) = uVar25;
          uVar24 = uVar24 + 1;
          uVar16 = _UNK_1430868cc;
          uVar17 = _UNK_1430868c8;
          uVar18 = _UNK_1430868c4;
          uVar19 = _DAT_1430868c0;
        } while (uVar24 < uVar21);
      }
      do {
        pfVar1 = (float *)(uVar22 + uVar21 * 4);
        uVar34 = (uint)*pfVar1;
        uVar35 = (uint)pfVar1[1];
        uVar36 = (uint)pfVar1[2];
        uVar37 = (uint)pfVar1[3];
        uVar34 = -(uint)((int)uVar19 < (int)uVar34) & (uVar19 ^ uVar34) ^ uVar34;
        uVar35 = -(uint)((int)uVar18 < (int)uVar35) & (uVar18 ^ uVar35) ^ uVar35;
        uVar36 = -(uint)((int)uVar17 < (int)uVar36) & (uVar17 ^ uVar36) ^ uVar36;
        uVar37 = -(uint)((int)uVar16 < (int)uVar37) & (uVar16 ^ uVar37) ^ uVar37;
        auVar38._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar34) & (ushort)uVar34);
        auVar38._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar35) & (ushort)uVar35);
        auVar38._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar36) & (ushort)uVar36);
        auVar38._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar37) & (ushort)uVar37);
        auVar39 = packssdw(auVar38,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar21 * 2) = auVar39._0_8_;
        pfVar1 = (float *)(uVar22 + 0x10 + uVar21 * 4);
        uVar34 = (uint)*pfVar1;
        uVar35 = (uint)pfVar1[1];
        uVar36 = (uint)pfVar1[2];
        uVar37 = (uint)pfVar1[3];
        uVar34 = -(uint)((int)uVar19 < (int)uVar34) & (uVar19 ^ uVar34) ^ uVar34;
        uVar35 = -(uint)((int)uVar18 < (int)uVar35) & (uVar18 ^ uVar35) ^ uVar35;
        uVar36 = -(uint)((int)uVar17 < (int)uVar36) & (uVar17 ^ uVar36) ^ uVar36;
        uVar37 = -(uint)((int)uVar16 < (int)uVar37) & (uVar16 ^ uVar37) ^ uVar37;
        auVar33._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar34) & (ushort)uVar34);
        auVar33._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar35) & (ushort)uVar35);
        auVar33._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar36) & (ushort)uVar36);
        auVar33._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar37) & (ushort)uVar37);
        auVar39 = packssdw(auVar33,(undefined1  [16])0x0);
        *(longlong *)(param_4 + 8 + uVar21 * 2) = auVar39._0_8_;
        uVar21 = uVar21 + 8;
      } while (uVar21 < uVar28);
      goto LAB_14004bc7a;
    }
  }
LAB_14004be2f:
  uVar28 = 0;
LAB_14004bc7a:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14063bc20(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined2 uVar33;
  int iVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined1 auVar46 [16];
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  lVar29 = 0;
  lVar36 = (longlong)param_3;
  fVar7 = *param_6;
  fVar8 = param_6[1];
  lVar32 = lVar36 + 3;
  if (SCARRY8(lVar36,-2) == lVar36 + -2 < 0) {
    lVar32 = lVar36 + -2;
  }
  lVar36 = (longlong)(int)lVar32 + 1;
  fVar9 = param_6[2];
  if (4 < lVar36) {
    lVar36 = lVar29;
  }
  lVar30 = (longlong)(int)lVar36 + 1;
  if (4 < lVar30) {
    lVar30 = lVar29;
  }
  lVar38 = (longlong)(int)lVar30 + 1;
  if (4 < lVar38) {
    lVar38 = lVar29;
  }
  lVar37 = (longlong)(int)lVar38 + 1;
  if (4 < lVar37) {
    lVar37 = lVar29;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14063c45f:
      uVar35 = 0;
      if (param_5 == 0) goto LAB_14063c11d;
      uVar31 = 0;
      uVar45 = param_5;
    }
    else {
      uVar44 = param_2 * 5 + param_1;
      uVar45 = uVar44 & 0xf;
      if (uVar45 != 0) {
        if ((uVar44 & 3) != 0) goto LAB_14063c45f;
        uVar45 = 0x10 - uVar45 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar45 + 8)) goto LAB_14063c45f;
      lVar39 = param_2 * lVar32 + param_1;
      lVar29 = param_2 * lVar30 + param_1;
      lVar41 = param_2 * lVar37 + param_1;
      lVar40 = param_2 * lVar36 + param_1;
      uVar35 = param_5 - (param_5 - uVar45 & 7);
      lVar42 = param_2 * lVar38 + param_1;
      uVar31 = 0;
      if (uVar45 != 0) {
        do {
          *(float *)(uVar44 + uVar31 * 4) =
               (*(float *)(lVar39 + uVar31 * 4) + *(float *)(lVar41 + uVar31 * 4)) * fVar7 +
               (*(float *)(lVar40 + uVar31 * 4) + *(float *)(lVar42 + uVar31 * 4)) * fVar8 +
               *(float *)(lVar29 + uVar31 * 4) * fVar9;
          uVar31 = uVar31 + 1;
        } while (uVar31 < uVar45);
      }
      if ((lVar29 + uVar45 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar39 + uVar45 * 4);
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar6 = (float *)(lVar41 + uVar45 * 4);
          fVar13 = pfVar6[1];
          fVar14 = pfVar6[2];
          fVar15 = pfVar6[3];
          pfVar2 = (float *)(lVar42 + uVar45 * 4);
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar3 = (float *)(lVar40 + uVar45 * 4);
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar4 = (float *)(lVar29 + uVar45 * 4);
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar5 = (float *)(uVar44 + uVar45 * 4);
          *pfVar5 = (*pfVar1 + *pfVar6) * fVar7 + (*pfVar3 + *pfVar2) * fVar8 + *pfVar4 * fVar9;
          pfVar5[1] = (fVar10 + fVar13) * fVar7 + (fVar19 + fVar16) * fVar8 + fVar22 * fVar9;
          pfVar5[2] = (fVar11 + fVar14) * fVar7 + (fVar20 + fVar17) * fVar8 + fVar23 * fVar9;
          pfVar5[3] = (fVar12 + fVar15) * fVar7 + (fVar21 + fVar18) * fVar8 + fVar24 * fVar9;
          pfVar1 = (float *)(lVar39 + 0x10 + uVar45 * 4);
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar2 = (float *)(lVar41 + 0x10 + uVar45 * 4);
          fVar13 = pfVar2[1];
          fVar14 = pfVar2[2];
          fVar15 = pfVar2[3];
          pfVar3 = (float *)(lVar40 + 0x10 + uVar45 * 4);
          fVar16 = pfVar3[1];
          fVar17 = pfVar3[2];
          fVar18 = pfVar3[3];
          pfVar4 = (float *)(lVar42 + 0x10 + uVar45 * 4);
          fVar19 = pfVar4[1];
          fVar20 = pfVar4[2];
          fVar21 = pfVar4[3];
          pfVar5 = (float *)(lVar29 + 0x10 + uVar45 * 4);
          fVar22 = pfVar5[1];
          fVar23 = pfVar5[2];
          fVar24 = pfVar5[3];
          pfVar6 = (float *)(uVar44 + 0x10 + uVar45 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
          pfVar6[1] = (fVar10 + fVar13) * fVar7 + (fVar16 + fVar19) * fVar8 + fVar22 * fVar9;
          pfVar6[2] = (fVar11 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
          pfVar6[3] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
          uVar45 = uVar45 + 8;
        } while (uVar45 < uVar35);
      }
      else {
        do {
          pfVar1 = (float *)(lVar39 + uVar45 * 4);
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar6 = (float *)(lVar41 + uVar45 * 4);
          fVar13 = pfVar6[1];
          fVar14 = pfVar6[2];
          fVar15 = pfVar6[3];
          pfVar2 = (float *)(lVar42 + uVar45 * 4);
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar3 = (float *)(lVar40 + uVar45 * 4);
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar4 = (float *)(lVar29 + uVar45 * 4);
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar5 = (float *)(uVar44 + uVar45 * 4);
          *pfVar5 = (*pfVar1 + *pfVar6) * fVar7 + (*pfVar3 + *pfVar2) * fVar8 + *pfVar4 * fVar9;
          pfVar5[1] = (fVar10 + fVar13) * fVar7 + (fVar19 + fVar16) * fVar8 + fVar22 * fVar9;
          pfVar5[2] = (fVar11 + fVar14) * fVar7 + (fVar20 + fVar17) * fVar8 + fVar23 * fVar9;
          pfVar5[3] = (fVar12 + fVar15) * fVar7 + (fVar21 + fVar18) * fVar8 + fVar24 * fVar9;
          pfVar1 = (float *)(lVar39 + 0x10 + uVar45 * 4);
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar2 = (float *)(lVar41 + 0x10 + uVar45 * 4);
          fVar13 = pfVar2[1];
          fVar14 = pfVar2[2];
          fVar15 = pfVar2[3];
          pfVar3 = (float *)(lVar40 + 0x10 + uVar45 * 4);
          fVar16 = pfVar3[1];
          fVar17 = pfVar3[2];
          fVar18 = pfVar3[3];
          pfVar4 = (float *)(lVar42 + 0x10 + uVar45 * 4);
          fVar19 = pfVar4[1];
          fVar20 = pfVar4[2];
          fVar21 = pfVar4[3];
          pfVar5 = (float *)(lVar29 + 0x10 + uVar45 * 4);
          fVar22 = pfVar5[1];
          fVar23 = pfVar5[2];
          fVar24 = pfVar5[3];
          pfVar6 = (float *)(uVar44 + 0x10 + uVar45 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
          pfVar6[1] = (fVar10 + fVar13) * fVar7 + (fVar16 + fVar19) * fVar8 + fVar22 * fVar9;
          pfVar6[2] = (fVar11 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
          pfVar6[3] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
          uVar45 = uVar45 + 8;
        } while (uVar45 < uVar35);
      }
      if (param_5 < uVar35 + 1) goto LAB_14063c11d;
      uVar45 = param_5 - uVar35;
      if ((longlong)uVar45 < 4) {
        uVar31 = 0;
      }
      else {
        uVar43 = 0;
        uVar31 = uVar45 & 0xfffffffffffffffc;
        do {
          pfVar1 = (float *)(lVar39 + uVar35 * 4 + uVar43 * 4);
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar2 = (float *)(lVar41 + uVar35 * 4 + uVar43 * 4);
          fVar13 = pfVar2[1];
          fVar14 = pfVar2[2];
          fVar15 = pfVar2[3];
          pfVar3 = (float *)(lVar42 + uVar35 * 4 + uVar43 * 4);
          fVar16 = pfVar3[1];
          fVar17 = pfVar3[2];
          fVar18 = pfVar3[3];
          pfVar6 = (float *)(lVar40 + uVar35 * 4 + uVar43 * 4);
          fVar19 = pfVar6[1];
          fVar20 = pfVar6[2];
          fVar21 = pfVar6[3];
          pfVar4 = (float *)(lVar29 + uVar35 * 4 + uVar43 * 4);
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar5 = (float *)(uVar44 + uVar35 * 4 + uVar43 * 4);
          *pfVar5 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar6 + *pfVar3) * fVar8 + *pfVar4 * fVar9;
          pfVar5[1] = (fVar10 + fVar13) * fVar7 + (fVar19 + fVar16) * fVar8 + fVar22 * fVar9;
          pfVar5[2] = (fVar11 + fVar14) * fVar7 + (fVar20 + fVar17) * fVar8 + fVar23 * fVar9;
          pfVar5[3] = (fVar12 + fVar15) * fVar7 + (fVar21 + fVar18) * fVar8 + fVar24 * fVar9;
          uVar43 = uVar43 + 4;
        } while (uVar43 < uVar31);
      }
    }
    if (uVar31 < uVar45) {
      do {
        *(float *)(param_2 * 5 + param_1 + uVar35 * 4 + uVar31 * 4) =
             (*(float *)(lVar32 * param_2 + param_1 + uVar35 * 4 + uVar31 * 4) +
             *(float *)(lVar37 * param_2 + param_1 + uVar35 * 4 + uVar31 * 4)) * fVar7 +
             (*(float *)(lVar36 * param_2 + param_1 + uVar35 * 4 + uVar31 * 4) +
             *(float *)(lVar38 * param_2 + param_1 + uVar35 * 4 + uVar31 * 4)) * fVar8 +
             *(float *)(lVar30 * param_2 + param_1 + uVar35 * 4 + uVar31 * 4) * fVar9;
        uVar31 = uVar31 + 1;
      } while (uVar31 < uVar45);
    }
  }
LAB_14063c11d:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar45 = param_2 * 5 + param_1;
      uVar44 = uVar45 & 0xf;
      if (uVar44 != 0) {
        if ((uVar45 & 3) != 0) goto LAB_14063c47c;
        uVar44 = 0x10 - uVar44 >> 2;
      }
      if ((longlong)(uVar44 + 4) <= (longlong)param_5) {
        uVar31 = 0;
        uVar35 = param_5 - (param_5 - uVar44 & 3);
        uVar25 = _UNK_14308b6ac;
        uVar26 = _UNK_14308b6a8;
        uVar27 = _UNK_14308b6a4;
        uVar28 = _DAT_14308b6a0;
        if (uVar44 != 0) {
          do {
            iVar34 = (int)ROUND(*(float *)(uVar45 + uVar31 * 4));
            if (0xfffe < iVar34) {
              iVar34 = 0xffff;
            }
            uVar33 = (undefined2)iVar34;
            if (iVar34 < 1) {
              uVar33 = 0;
            }
            *(undefined2 *)(param_4 + uVar31 * 2) = uVar33;
            uVar31 = uVar31 + 1;
            uVar25 = _UNK_14308b6ac;
            uVar26 = _UNK_14308b6a8;
            uVar27 = _UNK_14308b6a4;
            uVar28 = _DAT_14308b6a0;
          } while (uVar31 < uVar44);
        }
        do {
          pfVar1 = (float *)(uVar45 + uVar44 * 4);
          uVar47 = (uint)*pfVar1;
          uVar48 = (uint)pfVar1[1];
          uVar49 = (uint)pfVar1[2];
          uVar50 = (uint)pfVar1[3];
          uVar47 = -(uint)((int)uVar28 < (int)uVar47) & (uVar28 ^ uVar47) ^ uVar47;
          uVar48 = -(uint)((int)uVar27 < (int)uVar48) & (uVar27 ^ uVar48) ^ uVar48;
          uVar49 = -(uint)((int)uVar26 < (int)uVar49) & (uVar26 ^ uVar49) ^ uVar49;
          uVar50 = -(uint)((int)uVar25 < (int)uVar50) & (uVar25 ^ uVar50) ^ uVar50;
          auVar52._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar47) & (ushort)uVar47);
          auVar52._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar48) & (ushort)uVar48);
          auVar52._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar49) & (ushort)uVar49);
          auVar52._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar50) & (ushort)uVar50);
          auVar52 = packssdw(auVar52,(undefined1  [16])0x0);
          *(longlong *)(param_4 + uVar44 * 2) = auVar52._0_8_;
          uVar44 = uVar44 + 4;
        } while (uVar44 < uVar35);
        goto LAB_14063c3ed;
      }
    }
LAB_14063c47c:
    uVar35 = 0;
LAB_14063c3ed:
    if (param_5 <= uVar35) {
      return;
    }
    do {
      iVar34 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar35 * 4));
      if (0xfffe < iVar34) {
        iVar34 = 0xffff;
      }
      uVar33 = (undefined2)iVar34;
      if (iVar34 < 1) {
        uVar33 = 0;
      }
      *(undefined2 *)(param_4 + uVar35 * 2) = uVar33;
      uVar35 = uVar35 + 1;
    } while (uVar35 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar45 = param_2 * 5 + param_1;
    uVar44 = uVar45 & 0xf;
    if (uVar44 != 0) {
      if ((uVar45 & 3) != 0) goto LAB_14063c475;
      uVar44 = 0x10 - uVar44 >> 2;
    }
    if ((longlong)(uVar44 + 8) <= (longlong)param_5) {
      uVar31 = 0;
      uVar35 = param_5 - (param_5 - uVar44 & 7);
      uVar25 = _UNK_14308b6ac;
      uVar26 = _UNK_14308b6a8;
      uVar27 = _UNK_14308b6a4;
      uVar28 = _DAT_14308b6a0;
      if (uVar44 != 0) {
        do {
          iVar34 = (int)ROUND(*(float *)(uVar45 + uVar31 * 4));
          if (0xfffe < iVar34) {
            iVar34 = 0xffff;
          }
          uVar33 = (undefined2)iVar34;
          if (iVar34 < 1) {
            uVar33 = 0;
          }
          *(undefined2 *)(param_4 + uVar31 * 2) = uVar33;
          uVar31 = uVar31 + 1;
          uVar25 = _UNK_14308b6ac;
          uVar26 = _UNK_14308b6a8;
          uVar27 = _UNK_14308b6a4;
          uVar28 = _DAT_14308b6a0;
        } while (uVar31 < uVar44);
      }
      do {
        pfVar1 = (float *)(uVar45 + uVar44 * 4);
        uVar47 = (uint)*pfVar1;
        uVar48 = (uint)pfVar1[1];
        uVar49 = (uint)pfVar1[2];
        uVar50 = (uint)pfVar1[3];
        uVar47 = -(uint)((int)uVar28 < (int)uVar47) & (uVar28 ^ uVar47) ^ uVar47;
        uVar48 = -(uint)((int)uVar27 < (int)uVar48) & (uVar27 ^ uVar48) ^ uVar48;
        uVar49 = -(uint)((int)uVar26 < (int)uVar49) & (uVar26 ^ uVar49) ^ uVar49;
        uVar50 = -(uint)((int)uVar25 < (int)uVar50) & (uVar25 ^ uVar50) ^ uVar50;
        auVar51._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar47) & (ushort)uVar47);
        auVar51._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar48) & (ushort)uVar48);
        auVar51._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar49) & (ushort)uVar49);
        auVar51._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar50) & (ushort)uVar50);
        auVar52 = packssdw(auVar51,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar44 * 2) = auVar52._0_8_;
        pfVar1 = (float *)(uVar45 + 0x10 + uVar44 * 4);
        uVar47 = (uint)*pfVar1;
        uVar48 = (uint)pfVar1[1];
        uVar49 = (uint)pfVar1[2];
        uVar50 = (uint)pfVar1[3];
        uVar47 = -(uint)((int)uVar28 < (int)uVar47) & (uVar28 ^ uVar47) ^ uVar47;
        uVar48 = -(uint)((int)uVar27 < (int)uVar48) & (uVar27 ^ uVar48) ^ uVar48;
        uVar49 = -(uint)((int)uVar26 < (int)uVar49) & (uVar26 ^ uVar49) ^ uVar49;
        uVar50 = -(uint)((int)uVar25 < (int)uVar50) & (uVar25 ^ uVar50) ^ uVar50;
        auVar46._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar47) & (ushort)uVar47);
        auVar46._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar48) & (ushort)uVar48);
        auVar46._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar49) & (ushort)uVar49);
        auVar46._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar50) & (ushort)uVar50);
        auVar52 = packssdw(auVar46,(undefined1  [16])0x0);
        *(longlong *)(param_4 + 8 + uVar44 * 2) = auVar52._0_8_;
        uVar44 = uVar44 + 8;
      } while (uVar44 < uVar35);
      goto LAB_14063c277;
    }
  }
LAB_14063c475:
  uVar35 = 0;
LAB_14063c277:
  uVar44 = 0;
  if (uVar35 + 1 <= param_5) {
    do {
      iVar34 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar35 * 4 + uVar44 * 4));
      if (0xfffe < iVar34) {
        iVar34 = 0xffff;
      }
      uVar33 = (undefined2)iVar34;
      if (iVar34 < 1) {
        uVar33 = 0;
      }
      *(undefined2 *)(param_4 + uVar35 * 2 + uVar44 * 2) = uVar33;
      uVar44 = uVar44 + 1;
    } while (uVar44 < param_5 - uVar35);
  }
  return;
}


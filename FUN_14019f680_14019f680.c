
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019f680(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
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
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined2 uVar35;
  int iVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  ulonglong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  lVar28 = 0;
  lVar38 = (longlong)param_3;
  fVar8 = *param_6;
  fVar9 = param_6[1];
  lVar31 = lVar38 + -2;
  if (SCARRY8(lVar38,-2) != lVar38 + -2 < 0) {
    lVar31 = lVar38 + 3;
  }
  lVar38 = (longlong)(int)lVar31 + 1;
  fVar10 = param_6[2];
  if (4 < lVar38) {
    lVar38 = lVar28;
  }
  lVar37 = (longlong)(int)lVar38 + 1;
  if (4 < lVar37) {
    lVar37 = lVar28;
  }
  lVar43 = (longlong)(int)lVar37 + 1;
  if (4 < lVar43) {
    lVar43 = lVar28;
  }
  lVar42 = (longlong)(int)lVar43 + 1;
  if (4 < lVar42) {
    lVar42 = lVar28;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14019ff5e:
      uVar39 = 0;
      if (param_5 == 0) goto LAB_14019fba0;
      uVar32 = 0;
      uVar33 = param_5;
    }
    else {
      uVar30 = param_2 * 5 + param_1;
      uVar32 = uVar30 & 0xf;
      if (uVar32 != 0) {
        if ((uVar30 & 3) != 0) goto LAB_14019ff5e;
        uVar32 = 0x10 - uVar32 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar32 + 8)) goto LAB_14019ff5e;
      lVar28 = param_2 * lVar31 + param_1;
      lVar40 = param_2 * lVar42 + param_1;
      lVar34 = param_2 * lVar37 + param_1;
      lVar29 = param_2 * lVar38 + param_1;
      lVar41 = param_2 * lVar43 + param_1;
      uVar39 = param_5 - (param_5 - uVar32 & 7);
      uVar33 = 0;
      if (uVar32 != 0) {
        do {
          *(float *)(uVar30 + uVar33 * 4) =
               (*(float *)(lVar28 + uVar33 * 4) + *(float *)(lVar40 + uVar33 * 4)) * fVar8 +
               (*(float *)(lVar29 + uVar33 * 4) + *(float *)(lVar41 + uVar33 * 4)) * fVar9 +
               *(float *)(lVar34 + uVar33 * 4) * fVar10;
          uVar33 = uVar33 + 1;
        } while (uVar33 < uVar32);
      }
      if ((uVar32 * 4 + lVar34 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar28 + uVar32 * 4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(lVar40 + uVar32 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(lVar41 + uVar32 * 4);
          fVar17 = pfVar3[1];
          fVar18 = pfVar3[2];
          fVar19 = pfVar3[3];
          pfVar4 = (float *)(lVar29 + uVar32 * 4);
          fVar20 = pfVar4[1];
          fVar21 = pfVar4[2];
          fVar22 = pfVar4[3];
          pfVar5 = (float *)(lVar34 + uVar32 * 4);
          fVar23 = pfVar5[1];
          fVar24 = pfVar5[2];
          fVar25 = pfVar5[3];
          pfVar6 = (float *)(uVar30 + uVar32 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar4 + *pfVar3) * fVar9 + *pfVar5 * fVar10;
          pfVar6[1] = (fVar11 + fVar14) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar23 * fVar10;
          pfVar6[2] = (fVar12 + fVar15) * fVar8 + (fVar21 + fVar18) * fVar9 + fVar24 * fVar10;
          pfVar6[3] = (fVar13 + fVar16) * fVar8 + (fVar22 + fVar19) * fVar9 + fVar25 * fVar10;
          pfVar1 = (float *)(lVar28 + 0x10 + uVar32 * 4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(lVar40 + 0x10 + uVar32 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(lVar29 + 0x10 + uVar32 * 4);
          fVar17 = pfVar3[1];
          fVar18 = pfVar3[2];
          fVar19 = pfVar3[3];
          pfVar4 = (float *)(lVar41 + 0x10 + uVar32 * 4);
          fVar20 = pfVar4[1];
          fVar21 = pfVar4[2];
          fVar22 = pfVar4[3];
          pfVar5 = (float *)(lVar34 + 0x10 + uVar32 * 4);
          fVar23 = pfVar5[1];
          fVar24 = pfVar5[2];
          fVar25 = pfVar5[3];
          pfVar6 = (float *)(uVar30 + 0x10 + uVar32 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar3 + *pfVar4) * fVar9 + *pfVar5 * fVar10;
          pfVar6[1] = (fVar11 + fVar14) * fVar8 + (fVar17 + fVar20) * fVar9 + fVar23 * fVar10;
          pfVar6[2] = (fVar12 + fVar15) * fVar8 + (fVar18 + fVar21) * fVar9 + fVar24 * fVar10;
          pfVar6[3] = (fVar13 + fVar16) * fVar8 + (fVar19 + fVar22) * fVar9 + fVar25 * fVar10;
          uVar32 = uVar32 + 8;
        } while (uVar32 < uVar39);
      }
      else {
        do {
          pfVar1 = (float *)(lVar28 + uVar32 * 4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(lVar40 + uVar32 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(lVar41 + uVar32 * 4);
          fVar17 = pfVar3[1];
          fVar18 = pfVar3[2];
          fVar19 = pfVar3[3];
          pfVar4 = (float *)(lVar29 + uVar32 * 4);
          fVar20 = pfVar4[1];
          fVar21 = pfVar4[2];
          fVar22 = pfVar4[3];
          pfVar5 = (float *)(lVar34 + uVar32 * 4);
          fVar23 = pfVar5[1];
          fVar24 = pfVar5[2];
          fVar25 = pfVar5[3];
          pfVar6 = (float *)(uVar30 + uVar32 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar4 + *pfVar3) * fVar9 + *pfVar5 * fVar10;
          pfVar6[1] = (fVar11 + fVar14) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar23 * fVar10;
          pfVar6[2] = (fVar12 + fVar15) * fVar8 + (fVar21 + fVar18) * fVar9 + fVar24 * fVar10;
          pfVar6[3] = (fVar13 + fVar16) * fVar8 + (fVar22 + fVar19) * fVar9 + fVar25 * fVar10;
          pfVar1 = (float *)(lVar28 + 0x10 + uVar32 * 4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(lVar40 + 0x10 + uVar32 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(lVar29 + 0x10 + uVar32 * 4);
          fVar17 = pfVar3[1];
          fVar18 = pfVar3[2];
          fVar19 = pfVar3[3];
          pfVar4 = (float *)(lVar41 + 0x10 + uVar32 * 4);
          fVar20 = pfVar4[1];
          fVar21 = pfVar4[2];
          fVar22 = pfVar4[3];
          pfVar5 = (float *)(lVar34 + 0x10 + uVar32 * 4);
          fVar23 = pfVar5[1];
          fVar24 = pfVar5[2];
          fVar25 = pfVar5[3];
          pfVar6 = (float *)(uVar30 + 0x10 + uVar32 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar8 + (*pfVar3 + *pfVar4) * fVar9 + *pfVar5 * fVar10;
          pfVar6[1] = (fVar11 + fVar14) * fVar8 + (fVar17 + fVar20) * fVar9 + fVar23 * fVar10;
          pfVar6[2] = (fVar12 + fVar15) * fVar8 + (fVar18 + fVar21) * fVar9 + fVar24 * fVar10;
          pfVar6[3] = (fVar13 + fVar16) * fVar8 + (fVar19 + fVar22) * fVar9 + fVar25 * fVar10;
          uVar32 = uVar32 + 8;
        } while (uVar32 < uVar39);
      }
      if (param_5 < uVar39 + 1) goto LAB_14019fba0;
      uVar33 = param_5 - uVar39;
      if ((longlong)uVar33 < 4) {
        uVar32 = 0;
      }
      else {
        lVar7 = uVar39 * 4;
        uVar32 = uVar33 & 0xfffffffffffffffc;
        uVar44 = 0;
        do {
          pfVar6 = (float *)(lVar28 + uVar39 * 4 + uVar44 * 4);
          fVar11 = pfVar6[1];
          fVar12 = pfVar6[2];
          fVar13 = pfVar6[3];
          pfVar1 = (float *)(lVar40 + uVar39 * 4 + uVar44 * 4);
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar2 = (float *)(lVar41 + lVar7 + uVar44 * 4);
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar3 = (float *)(lVar29 + lVar7 + uVar44 * 4);
          fVar20 = pfVar3[1];
          fVar21 = pfVar3[2];
          fVar22 = pfVar3[3];
          pfVar4 = (float *)(lVar34 + lVar7 + uVar44 * 4);
          fVar23 = pfVar4[1];
          fVar24 = pfVar4[2];
          fVar25 = pfVar4[3];
          pfVar5 = (float *)(uVar30 + lVar7 + uVar44 * 4);
          *pfVar5 = (*pfVar6 + *pfVar1) * fVar8 + (*pfVar3 + *pfVar2) * fVar9 + *pfVar4 * fVar10;
          pfVar5[1] = (fVar11 + fVar14) * fVar8 + (fVar20 + fVar17) * fVar9 + fVar23 * fVar10;
          pfVar5[2] = (fVar12 + fVar15) * fVar8 + (fVar21 + fVar18) * fVar9 + fVar24 * fVar10;
          pfVar5[3] = (fVar13 + fVar16) * fVar8 + (fVar22 + fVar19) * fVar9 + fVar25 * fVar10;
          uVar44 = uVar44 + 4;
        } while (uVar44 < uVar32);
      }
    }
    if (uVar32 < uVar33) {
      lVar28 = uVar39 * 4;
      do {
        *(float *)(param_2 * 5 + param_1 + lVar28 + uVar32 * 4) =
             (*(float *)(lVar31 * param_2 + param_1 + lVar28 + uVar32 * 4) +
             *(float *)(lVar42 * param_2 + param_1 + lVar28 + uVar32 * 4)) * fVar8 +
             (*(float *)(lVar38 * param_2 + param_1 + lVar28 + uVar32 * 4) +
             *(float *)(lVar43 * param_2 + param_1 + lVar28 + uVar32 * 4)) * fVar9 +
             *(float *)(lVar37 * param_2 + param_1 + lVar28 + uVar32 * 4) * fVar10;
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar33);
    }
  }
LAB_14019fba0:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar30 = param_2 * 5 + param_1;
      uVar32 = uVar30 & 0xf;
      if (uVar32 != 0) {
        if ((uVar30 & 3) != 0) goto LAB_14019ff81;
        uVar32 = 0x10 - uVar32 >> 2;
      }
      if ((longlong)(uVar32 + 4) <= (longlong)param_5) {
        uVar33 = 0;
        uVar39 = param_5 - (param_5 - uVar32 & 3);
        if (uVar32 != 0) {
          do {
            iVar36 = (int)ROUND(*(float *)(uVar30 + uVar33 * 4));
            if (0xfffe < iVar36) {
              iVar36 = 0xffff;
            }
            uVar35 = (undefined2)iVar36;
            if (iVar36 < 1) {
              uVar35 = 0;
            }
            *(undefined2 *)(param_4 + uVar33 * 2) = uVar35;
            uVar33 = uVar33 + 1;
          } while (uVar33 < uVar32);
        }
        auVar27 = _DAT_143087f60;
        auVar26 = _DAT_143087f50;
        lVar31 = uVar32 * 2;
        do {
          pfVar1 = (float *)(uVar30 + uVar32 * 4);
          auVar50._0_4_ = (int)*pfVar1;
          auVar50._4_4_ = (int)pfVar1[1];
          auVar50._8_4_ = (int)pfVar1[2];
          auVar50._12_4_ = (int)pfVar1[3];
          auVar53._0_4_ = -(uint)(auVar26._0_4_ < auVar50._0_4_);
          auVar53._4_4_ = -(uint)(auVar26._4_4_ < auVar50._4_4_);
          auVar53._8_4_ = -(uint)(auVar26._8_4_ < auVar50._8_4_);
          auVar53._12_4_ = -(uint)(auVar26._12_4_ < auVar50._12_4_);
          uVar32 = uVar32 + 4;
          auVar50 = auVar53 & (auVar26 ^ auVar50) ^ auVar50;
          auVar51._0_4_ = -(uint)(0 < auVar50._0_4_);
          auVar51._4_4_ = -(uint)(0 < auVar50._4_4_);
          auVar51._8_4_ = -(uint)(0 < auVar50._8_4_);
          auVar51._12_4_ = -(uint)(0 < auVar50._12_4_);
          auVar53 = pshufb(auVar51 & auVar50,auVar27);
          *(longlong *)(lVar31 + param_4) = auVar53._0_8_;
          lVar31 = lVar31 + 8;
        } while (uVar32 < uVar39);
        goto LAB_14019fee8;
      }
    }
LAB_14019ff81:
    uVar39 = 0;
LAB_14019fee8:
    if (param_5 <= uVar39) {
      return;
    }
    do {
      iVar36 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar39 * 4));
      if (0xfffe < iVar36) {
        iVar36 = 0xffff;
      }
      uVar35 = (undefined2)iVar36;
      if (iVar36 < 1) {
        uVar35 = 0;
      }
      *(undefined2 *)(param_4 + uVar39 * 2) = uVar35;
      uVar39 = uVar39 + 1;
    } while (uVar39 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar30 = param_2 * 5 + param_1;
    uVar32 = uVar30 & 0xf;
    if (uVar32 != 0) {
      if ((uVar30 & 3) != 0) goto LAB_14019ff7a;
      uVar32 = 0x10 - uVar32 >> 2;
    }
    if ((longlong)(uVar32 + 8) <= (longlong)param_5) {
      uVar33 = 0;
      uVar39 = param_5 - (param_5 - uVar32 & 7);
      if (uVar32 != 0) {
        do {
          iVar36 = (int)ROUND(*(float *)(uVar30 + uVar33 * 4));
          if (0xfffe < iVar36) {
            iVar36 = 0xffff;
          }
          uVar35 = (undefined2)iVar36;
          if (iVar36 < 1) {
            uVar35 = 0;
          }
          *(undefined2 *)(param_4 + uVar33 * 2) = uVar35;
          uVar33 = uVar33 + 1;
        } while (uVar33 < uVar32);
      }
      auVar27 = _DAT_143087f60;
      auVar26 = _DAT_143087f50;
      lVar31 = uVar32 * 2;
      do {
        pfVar1 = (float *)(uVar30 + uVar32 * 4);
        auVar48._0_4_ = (int)*pfVar1;
        auVar48._4_4_ = (int)pfVar1[1];
        auVar48._8_4_ = (int)pfVar1[2];
        auVar48._12_4_ = (int)pfVar1[3];
        auVar47._0_4_ = -(uint)(auVar26._0_4_ < auVar48._0_4_);
        auVar47._4_4_ = -(uint)(auVar26._4_4_ < auVar48._4_4_);
        auVar47._8_4_ = -(uint)(auVar26._8_4_ < auVar48._8_4_);
        auVar47._12_4_ = -(uint)(auVar26._12_4_ < auVar48._12_4_);
        auVar48 = auVar47 & (auVar26 ^ auVar48) ^ auVar48;
        auVar52._0_4_ = -(uint)(0 < auVar48._0_4_);
        auVar52._4_4_ = -(uint)(0 < auVar48._4_4_);
        auVar52._8_4_ = -(uint)(0 < auVar48._8_4_);
        auVar52._12_4_ = -(uint)(0 < auVar48._12_4_);
        auVar53 = pshufb(auVar52 & auVar48,auVar27);
        *(longlong *)(lVar31 + param_4) = auVar53._0_8_;
        pfVar1 = (float *)(uVar30 + 0x10 + uVar32 * 4);
        auVar46._0_4_ = (int)*pfVar1;
        auVar46._4_4_ = (int)pfVar1[1];
        auVar46._8_4_ = (int)pfVar1[2];
        auVar46._12_4_ = (int)pfVar1[3];
        auVar45._0_4_ = -(uint)(auVar26._0_4_ < auVar46._0_4_);
        auVar45._4_4_ = -(uint)(auVar26._4_4_ < auVar46._4_4_);
        auVar45._8_4_ = -(uint)(auVar26._8_4_ < auVar46._8_4_);
        auVar45._12_4_ = -(uint)(auVar26._12_4_ < auVar46._12_4_);
        uVar32 = uVar32 + 8;
        auVar46 = auVar45 & (auVar26 ^ auVar46) ^ auVar46;
        auVar49._0_4_ = -(uint)(0 < auVar46._0_4_);
        auVar49._4_4_ = -(uint)(0 < auVar46._4_4_);
        auVar49._8_4_ = -(uint)(0 < auVar46._8_4_);
        auVar49._12_4_ = -(uint)(0 < auVar46._12_4_);
        auVar53 = pshufb(auVar49 & auVar46,auVar27);
        *(longlong *)(lVar31 + 8 + param_4) = auVar53._0_8_;
        lVar31 = lVar31 + 0x10;
      } while (uVar32 < uVar39);
      goto LAB_14019fd29;
    }
  }
LAB_14019ff7a:
  uVar39 = 0;
LAB_14019fd29:
  uVar32 = 0;
  if (uVar39 + 1 <= param_5) {
    do {
      iVar36 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar39 * 4 + uVar32 * 4));
      if (0xfffe < iVar36) {
        iVar36 = 0xffff;
      }
      uVar35 = (undefined2)iVar36;
      if (iVar36 < 1) {
        uVar35 = 0;
      }
      *(undefined2 *)(param_4 + uVar39 * 2 + uVar32 * 2) = uVar35;
      uVar32 = uVar32 + 1;
    } while (uVar32 < param_5 - uVar39);
  }
  return;
}


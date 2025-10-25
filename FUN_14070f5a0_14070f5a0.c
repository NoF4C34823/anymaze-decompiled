
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14070f5a0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,int param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
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
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  float *pfVar36;
  undefined2 uVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong uVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  uVar43 = (ulonglong)param_7;
  lVar40 = (longlong)param_3;
  iVar30 = param_7 >> 1;
  lVar42 = lVar40 - iVar30;
  lVar42 = (lVar42 >> 0x3f & uVar43) + lVar42;
  if (lVar42 == 0) {
    uVar35 = 0;
    uVar31 = uVar43;
  }
  else {
    uVar35 = (ulonglong)(int)lVar42;
    uVar31 = uVar35;
  }
  lVar44 = uVar31 - 1;
  uVar31 = uVar35 + 1;
  if (uVar35 + 1 == uVar43) {
    uVar31 = 0;
  }
  fVar6 = *param_6;
  uVar35 = (longlong)(int)lVar44;
  if ((longlong)(int)lVar44 < 1) {
    uVar35 = uVar43;
  }
  lVar33 = uVar35 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14070ffa6:
      uVar45 = 0;
    }
    else {
      uVar39 = param_2 * lVar42 + param_1;
      uVar35 = uVar39 & 0xf;
      if (uVar35 != 0) {
        if ((uVar39 & 3) != 0) goto LAB_14070ffa6;
        uVar35 = 0x10 - uVar35 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar35 + 8)) goto LAB_14070ffa6;
      lVar34 = param_2 * lVar44 + param_1;
      uVar41 = 0;
      uVar45 = param_5 - (param_5 - uVar35 & 7);
      if (uVar35 != 0) {
        do {
          *(float *)(uVar39 + uVar41 * 4) =
               (*(float *)(uVar39 + uVar41 * 4) + *(float *)(lVar34 + uVar41 * 4)) * fVar6;
          uVar41 = uVar41 + 1;
        } while (uVar41 < uVar35);
      }
      if ((uVar35 * 4 + lVar34 & 0xf) == 0) {
        do {
          pfVar36 = (float *)(uVar39 + uVar35 * 4);
          fVar7 = pfVar36[1];
          fVar8 = pfVar36[2];
          fVar9 = pfVar36[3];
          pfVar1 = (float *)(uVar39 + 0x10 + uVar35 * 4);
          fVar10 = *pfVar1;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar3 = (float *)(lVar34 + uVar35 * 4);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar1 = (float *)(lVar34 + 0x10 + uVar35 * 4);
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar1 = (float *)(uVar39 + uVar35 * 4);
          *pfVar1 = (*pfVar36 + *pfVar3) * fVar6;
          pfVar1[1] = (fVar7 + fVar14) * fVar6;
          pfVar1[2] = (fVar8 + fVar15) * fVar6;
          pfVar1[3] = (fVar9 + fVar16) * fVar6;
          pfVar36 = (float *)(uVar39 + 0x10 + uVar35 * 4);
          *pfVar36 = (fVar10 + fVar17) * fVar6;
          pfVar36[1] = (fVar11 + fVar18) * fVar6;
          pfVar36[2] = (fVar12 + fVar19) * fVar6;
          pfVar36[3] = (fVar13 + fVar20) * fVar6;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar45);
      }
      else {
        do {
          pfVar3 = (float *)(lVar34 + uVar35 * 4);
          fVar7 = pfVar3[1];
          fVar8 = pfVar3[2];
          fVar9 = pfVar3[3];
          pfVar36 = (float *)(lVar34 + 0x10 + uVar35 * 4);
          fVar10 = *pfVar36;
          fVar11 = pfVar36[1];
          fVar12 = pfVar36[2];
          fVar13 = pfVar36[3];
          pfVar36 = (float *)(uVar39 + uVar35 * 4);
          fVar14 = pfVar36[1];
          fVar15 = pfVar36[2];
          fVar16 = pfVar36[3];
          pfVar1 = (float *)(uVar39 + 0x10 + uVar35 * 4);
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar1 = (float *)(uVar39 + uVar35 * 4);
          *pfVar1 = (*pfVar3 + *pfVar36) * fVar6;
          pfVar1[1] = (fVar7 + fVar14) * fVar6;
          pfVar1[2] = (fVar8 + fVar15) * fVar6;
          pfVar1[3] = (fVar9 + fVar16) * fVar6;
          pfVar36 = (float *)(uVar39 + 0x10 + uVar35 * 4);
          *pfVar36 = (fVar10 + fVar17) * fVar6;
          pfVar36[1] = (fVar11 + fVar18) * fVar6;
          pfVar36[2] = (fVar12 + fVar19) * fVar6;
          pfVar36[3] = (fVar13 + fVar20) * fVar6;
          uVar35 = uVar35 + 8;
        } while (uVar35 < uVar45);
      }
    }
    uVar35 = 0;
    if (uVar45 + 1 <= param_5) {
      lVar34 = param_2 * lVar42 + param_1 + uVar45 * 4;
      do {
        *(float *)(lVar34 + uVar35 * 4) =
             (*(float *)(lVar34 + uVar35 * 4) +
             *(float *)(lVar44 * param_2 + param_1 + uVar45 * 4 + uVar35 * 4)) * fVar6;
        uVar35 = uVar35 + 1;
      } while (uVar35 < param_5 - uVar45);
    }
  }
  if (1 < iVar30) {
    uVar35 = param_2 * lVar42 + param_1;
    uVar38 = 0;
    uVar39 = uVar35 & 0xf;
    pfVar36 = param_6;
    do {
      while( true ) {
        lVar44 = param_2 * uVar31;
        lVar34 = param_2 * lVar33;
        uVar31 = uVar31 + 1;
        fVar6 = pfVar36[1];
        if (uVar31 == (longlong)param_7) {
          uVar31 = 0;
        }
        lVar33 = lVar33 + -1;
        if (lVar33 < 0) {
          lVar33 = uVar43 - 1;
        }
        lVar44 = lVar44 + param_1;
        lVar34 = lVar34 + param_1;
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 8) ||
           (((uVar45 = uVar39, uVar39 != 0 && (uVar45 = 0x10 - uVar39 >> 2, (uVar35 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar45 + 8))))) {
          uVar41 = 0;
          if (param_5 != 0) {
            uVar45 = 0;
            uVar32 = param_5;
            goto LAB_14070fa24;
          }
        }
        else {
          uVar32 = 0;
          uVar41 = param_5 - (param_5 - uVar45 & 7);
          if (uVar45 != 0) {
            do {
              *(float *)(uVar35 + uVar32 * 4) =
                   (*(float *)(lVar44 + uVar32 * 4) + *(float *)(lVar34 + uVar32 * 4)) * fVar6 +
                   *(float *)(uVar35 + uVar32 * 4);
              uVar32 = uVar32 + 1;
            } while (uVar32 < uVar45);
          }
          if ((uVar45 * 4 + lVar34 & 0xf) == 0) {
            do {
              pfVar1 = (float *)(lVar44 + uVar45 * 4);
              fVar7 = pfVar1[1];
              fVar8 = pfVar1[2];
              fVar9 = pfVar1[3];
              pfVar3 = (float *)(lVar44 + 0x10 + uVar45 * 4);
              fVar10 = *pfVar3;
              fVar11 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              pfVar3 = (float *)(lVar34 + uVar45 * 4);
              fVar14 = pfVar3[1];
              fVar15 = pfVar3[2];
              fVar16 = pfVar3[3];
              pfVar2 = (float *)(lVar34 + 0x10 + uVar45 * 4);
              fVar17 = *pfVar2;
              fVar18 = pfVar2[1];
              fVar19 = pfVar2[2];
              fVar20 = pfVar2[3];
              pfVar4 = (float *)(uVar35 + uVar45 * 4);
              fVar21 = pfVar4[1];
              fVar22 = pfVar4[2];
              fVar23 = pfVar4[3];
              pfVar2 = (float *)(uVar35 + 0x10 + uVar45 * 4);
              fVar24 = *pfVar2;
              fVar25 = pfVar2[1];
              fVar26 = pfVar2[2];
              fVar27 = pfVar2[3];
              pfVar2 = (float *)(uVar35 + uVar45 * 4);
              *pfVar2 = (*pfVar1 + *pfVar3) * fVar6 + *pfVar4;
              pfVar2[1] = (fVar7 + fVar14) * fVar6 + fVar21;
              pfVar2[2] = (fVar8 + fVar15) * fVar6 + fVar22;
              pfVar2[3] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar1 = (float *)(uVar35 + 0x10 + uVar45 * 4);
              *pfVar1 = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar1[1] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar1[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar1[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              uVar45 = uVar45 + 8;
            } while (uVar45 < uVar41);
          }
          else {
            do {
              pfVar1 = (float *)(lVar44 + uVar45 * 4);
              fVar7 = pfVar1[1];
              fVar8 = pfVar1[2];
              fVar9 = pfVar1[3];
              pfVar3 = (float *)(lVar44 + 0x10 + uVar45 * 4);
              fVar10 = *pfVar3;
              fVar11 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              pfVar3 = (float *)(lVar34 + uVar45 * 4);
              fVar14 = pfVar3[1];
              fVar15 = pfVar3[2];
              fVar16 = pfVar3[3];
              pfVar2 = (float *)(lVar34 + 0x10 + uVar45 * 4);
              fVar17 = *pfVar2;
              fVar18 = pfVar2[1];
              fVar19 = pfVar2[2];
              fVar20 = pfVar2[3];
              pfVar4 = (float *)(uVar35 + uVar45 * 4);
              fVar21 = pfVar4[1];
              fVar22 = pfVar4[2];
              fVar23 = pfVar4[3];
              pfVar2 = (float *)(uVar35 + 0x10 + uVar45 * 4);
              fVar24 = *pfVar2;
              fVar25 = pfVar2[1];
              fVar26 = pfVar2[2];
              fVar27 = pfVar2[3];
              pfVar2 = (float *)(uVar35 + uVar45 * 4);
              *pfVar2 = (*pfVar1 + *pfVar3) * fVar6 + *pfVar4;
              pfVar2[1] = (fVar7 + fVar14) * fVar6 + fVar21;
              pfVar2[2] = (fVar8 + fVar15) * fVar6 + fVar22;
              pfVar2[3] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar1 = (float *)(uVar35 + 0x10 + uVar45 * 4);
              *pfVar1 = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar1[1] = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar1[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar1[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              uVar45 = uVar45 + 8;
            } while (uVar45 < uVar41);
          }
          if (uVar41 + 1 <= param_5) {
            uVar32 = param_5 - uVar41;
            if ((longlong)uVar32 < 4) {
              uVar45 = 0;
            }
            else {
              uVar45 = uVar32 & 0xfffffffffffffffc;
              uVar46 = 0;
              lVar5 = uVar35 + uVar41 * 4;
              do {
                pfVar4 = (float *)(lVar44 + uVar41 * 4 + uVar46 * 4);
                fVar10 = pfVar4[1];
                fVar11 = pfVar4[2];
                fVar12 = pfVar4[3];
                pfVar1 = (float *)(uVar41 * 4 + lVar34 + uVar46 * 4);
                fVar7 = pfVar1[1];
                fVar8 = pfVar1[2];
                fVar9 = pfVar1[3];
                pfVar3 = (float *)(lVar5 + uVar46 * 4);
                fVar13 = pfVar3[1];
                fVar14 = pfVar3[2];
                fVar15 = pfVar3[3];
                pfVar2 = (float *)(lVar5 + uVar46 * 4);
                *pfVar2 = (*pfVar4 + *pfVar1) * fVar6 + *pfVar3;
                pfVar2[1] = (fVar10 + fVar7) * fVar6 + fVar13;
                pfVar2[2] = (fVar11 + fVar8) * fVar6 + fVar14;
                pfVar2[3] = (fVar12 + fVar9) * fVar6 + fVar15;
                uVar46 = uVar46 + 4;
              } while (uVar46 < uVar45);
            }
LAB_14070fa24:
            if (uVar45 < uVar32) {
              lVar5 = uVar35 + uVar41 * 4;
              do {
                *(float *)(lVar5 + uVar45 * 4) =
                     (*(float *)(lVar44 + uVar41 * 4 + uVar45 * 4) +
                     *(float *)(lVar34 + uVar41 * 4 + uVar45 * 4)) * fVar6 +
                     *(float *)(lVar5 + uVar45 * 4);
                uVar45 = uVar45 + 1;
              } while (uVar45 < uVar32);
            }
          }
        }
        uVar38 = uVar38 + 1;
        pfVar36 = pfVar36 + 1;
        if (iVar30 - 1U <= uVar38) goto LAB_14070faa3;
      }
      uVar38 = uVar38 + 1;
      pfVar36 = pfVar36 + 1;
    } while (uVar38 < iVar30 - 1U);
  }
LAB_14070faa3:
  lVar44 = (longlong)param_7;
  fVar6 = param_6[iVar30];
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14070ff94:
      uVar35 = 0;
    }
    else {
      uVar31 = lVar44 * param_2 + param_1;
      uVar43 = uVar31 & 0xf;
      if (uVar43 != 0) {
        if ((uVar31 & 3) != 0) goto LAB_14070ff94;
        uVar43 = 0x10 - uVar43 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar43 + 8)) goto LAB_14070ff94;
      lVar34 = param_2 * lVar40 + param_1;
      lVar33 = param_2 * lVar42 + param_1;
      uVar39 = 0;
      uVar35 = param_5 - (param_5 - uVar43 & 7);
      if (uVar43 != 0) {
        do {
          *(float *)(uVar31 + uVar39 * 4) =
               *(float *)(lVar34 + uVar39 * 4) * fVar6 + *(float *)(lVar33 + uVar39 * 4);
          uVar39 = uVar39 + 1;
        } while (uVar39 < uVar43);
      }
      if ((uVar43 * 4 + lVar34 & 0xf) == 0) {
        do {
          pfVar3 = (float *)(lVar34 + uVar43 * 4);
          fVar7 = pfVar3[1];
          fVar8 = pfVar3[2];
          fVar9 = pfVar3[3];
          pfVar36 = (float *)(lVar34 + 0x10 + uVar43 * 4);
          fVar10 = *pfVar36;
          fVar11 = pfVar36[1];
          fVar12 = pfVar36[2];
          fVar13 = pfVar36[3];
          pfVar36 = (float *)(lVar33 + uVar43 * 4);
          fVar14 = pfVar36[1];
          fVar15 = pfVar36[2];
          fVar16 = pfVar36[3];
          pfVar1 = (float *)(lVar33 + 0x10 + uVar43 * 4);
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar1 = (float *)(uVar31 + uVar43 * 4);
          *pfVar1 = *pfVar36 + *pfVar3 * fVar6;
          pfVar1[1] = fVar14 + fVar7 * fVar6;
          pfVar1[2] = fVar15 + fVar8 * fVar6;
          pfVar1[3] = fVar16 + fVar9 * fVar6;
          pfVar36 = (float *)(uVar31 + 0x10 + uVar43 * 4);
          *pfVar36 = fVar17 + fVar10 * fVar6;
          pfVar36[1] = fVar18 + fVar11 * fVar6;
          pfVar36[2] = fVar19 + fVar12 * fVar6;
          pfVar36[3] = fVar20 + fVar13 * fVar6;
          uVar43 = uVar43 + 8;
        } while (uVar43 < uVar35);
      }
      else {
        do {
          pfVar3 = (float *)(lVar34 + uVar43 * 4);
          fVar7 = pfVar3[1];
          fVar8 = pfVar3[2];
          fVar9 = pfVar3[3];
          pfVar36 = (float *)(lVar34 + 0x10 + uVar43 * 4);
          fVar10 = *pfVar36;
          fVar11 = pfVar36[1];
          fVar12 = pfVar36[2];
          fVar13 = pfVar36[3];
          pfVar36 = (float *)(lVar33 + uVar43 * 4);
          fVar14 = pfVar36[1];
          fVar15 = pfVar36[2];
          fVar16 = pfVar36[3];
          pfVar1 = (float *)(lVar33 + 0x10 + uVar43 * 4);
          fVar17 = *pfVar1;
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar1 = (float *)(uVar31 + uVar43 * 4);
          *pfVar1 = *pfVar36 + *pfVar3 * fVar6;
          pfVar1[1] = fVar14 + fVar7 * fVar6;
          pfVar1[2] = fVar15 + fVar8 * fVar6;
          pfVar1[3] = fVar16 + fVar9 * fVar6;
          pfVar36 = (float *)(uVar31 + 0x10 + uVar43 * 4);
          *pfVar36 = fVar17 + fVar10 * fVar6;
          pfVar36[1] = fVar18 + fVar11 * fVar6;
          pfVar36[2] = fVar19 + fVar12 * fVar6;
          pfVar36[3] = fVar20 + fVar13 * fVar6;
          uVar43 = uVar43 + 8;
        } while (uVar43 < uVar35);
      }
    }
    if (uVar35 < param_5) {
      do {
        *(float *)(lVar44 * param_2 + param_1 + uVar35 * 4) =
             *(float *)(lVar40 * param_2 + param_1 + uVar35 * 4) * fVar6 +
             *(float *)(lVar42 * param_2 + param_1 + uVar35 * 4);
        uVar35 = uVar35 + 1;
      } while (uVar35 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar43 = lVar44 * param_2 + param_1;
      uVar31 = uVar43 & 0xf;
      if (uVar31 != 0) {
        if ((uVar43 & 3) != 0) goto LAB_14070ffa2;
        uVar31 = 0x10 - uVar31 >> 2;
      }
      if ((longlong)(uVar31 + 4) <= (longlong)param_5) {
        uVar39 = 0;
        uVar35 = param_5 - (param_5 - uVar31 & 3);
        if (uVar31 != 0) {
          do {
            iVar30 = (int)ROUND(*(float *)(uVar43 + uVar39 * 4));
            if (0xfffe < iVar30) {
              iVar30 = 0xffff;
            }
            uVar37 = (short)iVar30;
            if (iVar30 < 1) {
              uVar37 = 0;
            }
            *(undefined2 *)(param_4 + uVar39 * 2) = uVar37;
            uVar39 = uVar39 + 1;
          } while (uVar39 < uVar31);
        }
        auVar29 = _DAT_14308bf00;
        auVar28 = _DAT_14308bef0;
        lVar42 = uVar31 * 2;
        do {
          pfVar36 = (float *)(uVar43 + uVar31 * 4);
          auVar52._0_4_ = (int)*pfVar36;
          auVar52._4_4_ = (int)pfVar36[1];
          auVar52._8_4_ = (int)pfVar36[2];
          auVar52._12_4_ = (int)pfVar36[3];
          auVar55._0_4_ = -(uint)(auVar28._0_4_ < auVar52._0_4_);
          auVar55._4_4_ = -(uint)(auVar28._4_4_ < auVar52._4_4_);
          auVar55._8_4_ = -(uint)(auVar28._8_4_ < auVar52._8_4_);
          auVar55._12_4_ = -(uint)(auVar28._12_4_ < auVar52._12_4_);
          uVar31 = uVar31 + 4;
          auVar52 = auVar55 & (auVar28 ^ auVar52) ^ auVar52;
          auVar53._0_4_ = -(uint)(0 < auVar52._0_4_);
          auVar53._4_4_ = -(uint)(0 < auVar52._4_4_);
          auVar53._8_4_ = -(uint)(0 < auVar52._8_4_);
          auVar53._12_4_ = -(uint)(0 < auVar52._12_4_);
          auVar55 = pshufb(auVar53 & auVar52,auVar29);
          *(longlong *)(lVar42 + param_4) = auVar55._0_8_;
          lVar42 = lVar42 + 8;
        } while (uVar31 < uVar35);
        goto LAB_14070ff28;
      }
    }
LAB_14070ffa2:
    uVar35 = 0;
LAB_14070ff28:
    if (param_5 <= uVar35) {
      return;
    }
    do {
      iVar30 = (int)ROUND(*(float *)(param_1 + param_2 * lVar44 + uVar35 * 4));
      if (0xfffe < iVar30) {
        iVar30 = 0xffff;
      }
      uVar37 = (undefined2)iVar30;
      if (iVar30 < 1) {
        uVar37 = 0;
      }
      *(undefined2 *)(param_4 + uVar35 * 2) = uVar37;
      uVar35 = uVar35 + 1;
    } while (uVar35 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar43 = lVar44 * param_2 + param_1;
    uVar31 = uVar43 & 0xf;
    if (uVar31 != 0) {
      if ((uVar43 & 3) != 0) goto LAB_14070ff9b;
      uVar31 = 0x10 - uVar31 >> 2;
    }
    if ((longlong)(uVar31 + 8) <= (longlong)param_5) {
      uVar39 = 0;
      uVar35 = param_5 - (param_5 - uVar31 & 7);
      if (uVar31 != 0) {
        do {
          iVar30 = (int)ROUND(*(float *)(uVar43 + uVar39 * 4));
          if (0xfffe < iVar30) {
            iVar30 = 0xffff;
          }
          uVar37 = (short)iVar30;
          if (iVar30 < 1) {
            uVar37 = 0;
          }
          *(undefined2 *)(param_4 + uVar39 * 2) = uVar37;
          uVar39 = uVar39 + 1;
        } while (uVar39 < uVar31);
      }
      auVar29 = _DAT_14308bf00;
      auVar28 = _DAT_14308bef0;
      lVar42 = uVar31 * 2;
      do {
        pfVar36 = (float *)(uVar43 + uVar31 * 4);
        auVar50._0_4_ = (int)*pfVar36;
        auVar50._4_4_ = (int)pfVar36[1];
        auVar50._8_4_ = (int)pfVar36[2];
        auVar50._12_4_ = (int)pfVar36[3];
        auVar49._0_4_ = -(uint)(auVar28._0_4_ < auVar50._0_4_);
        auVar49._4_4_ = -(uint)(auVar28._4_4_ < auVar50._4_4_);
        auVar49._8_4_ = -(uint)(auVar28._8_4_ < auVar50._8_4_);
        auVar49._12_4_ = -(uint)(auVar28._12_4_ < auVar50._12_4_);
        auVar50 = auVar49 & (auVar28 ^ auVar50) ^ auVar50;
        auVar54._0_4_ = -(uint)(0 < auVar50._0_4_);
        auVar54._4_4_ = -(uint)(0 < auVar50._4_4_);
        auVar54._8_4_ = -(uint)(0 < auVar50._8_4_);
        auVar54._12_4_ = -(uint)(0 < auVar50._12_4_);
        auVar55 = pshufb(auVar54 & auVar50,auVar29);
        *(longlong *)(lVar42 + param_4) = auVar55._0_8_;
        pfVar36 = (float *)(uVar43 + 0x10 + uVar31 * 4);
        auVar48._0_4_ = (int)*pfVar36;
        auVar48._4_4_ = (int)pfVar36[1];
        auVar48._8_4_ = (int)pfVar36[2];
        auVar48._12_4_ = (int)pfVar36[3];
        auVar47._0_4_ = -(uint)(auVar28._0_4_ < auVar48._0_4_);
        auVar47._4_4_ = -(uint)(auVar28._4_4_ < auVar48._4_4_);
        auVar47._8_4_ = -(uint)(auVar28._8_4_ < auVar48._8_4_);
        auVar47._12_4_ = -(uint)(auVar28._12_4_ < auVar48._12_4_);
        uVar31 = uVar31 + 8;
        auVar48 = auVar47 & (auVar28 ^ auVar48) ^ auVar48;
        auVar51._0_4_ = -(uint)(0 < auVar48._0_4_);
        auVar51._4_4_ = -(uint)(0 < auVar48._4_4_);
        auVar51._8_4_ = -(uint)(0 < auVar48._8_4_);
        auVar51._12_4_ = -(uint)(0 < auVar48._12_4_);
        auVar55 = pshufb(auVar51 & auVar48,auVar29);
        *(longlong *)(lVar42 + 8 + param_4) = auVar55._0_8_;
        lVar42 = lVar42 + 0x10;
      } while (uVar31 < uVar35);
      goto LAB_14070fd89;
    }
  }
LAB_14070ff9b:
  uVar35 = 0;
LAB_14070fd89:
  uVar43 = 0;
  if (uVar35 + 1 <= param_5) {
    do {
      iVar30 = (int)ROUND(*(float *)(param_1 + param_2 * lVar44 + uVar35 * 4 + uVar43 * 4));
      if (0xfffe < iVar30) {
        iVar30 = 0xffff;
      }
      uVar37 = (undefined2)iVar30;
      if (iVar30 < 1) {
        uVar37 = 0;
      }
      *(undefined2 *)(param_4 + uVar35 * 2 + uVar43 * 2) = uVar37;
      uVar43 = uVar43 + 1;
    } while (uVar43 < param_5 - uVar35);
  }
  return;
}


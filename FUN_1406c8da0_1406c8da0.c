
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406c8da0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  undefined2 uVar45;
  int iVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  lVar37 = 0;
  lVar49 = (longlong)param_3;
  fVar9 = *param_6;
  fVar10 = param_6[1];
  lVar39 = lVar49 + -3;
  if (SCARRY8(lVar49,-3) != lVar49 + -3 < 0) {
    lVar39 = lVar49 + 4;
  }
  lVar49 = (longlong)(int)lVar39 + 1;
  fVar11 = param_6[2];
  if (6 < lVar49) {
    lVar49 = lVar37;
  }
  lVar47 = (longlong)(int)lVar49 + 1;
  fVar12 = param_6[3];
  if (6 < lVar47) {
    lVar47 = lVar37;
  }
  lVar43 = (longlong)(int)lVar47 + 1;
  if (6 < lVar43) {
    lVar43 = lVar37;
  }
  lVar48 = (longlong)(int)lVar43 + 1;
  if (6 < lVar48) {
    lVar48 = lVar37;
  }
  lVar42 = (longlong)(int)lVar48 + 1;
  if (6 < lVar42) {
    lVar42 = lVar37;
  }
  lVar44 = (longlong)(int)lVar42 + 1;
  if (6 < lVar44) {
    lVar44 = lVar37;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 4) {
LAB_1406c96c2:
      uVar38 = 0;
    }
    else {
      uVar40 = param_2 * 7 + param_1;
      uVar41 = uVar40 & 0xf;
      if (uVar41 != 0) {
        if ((uVar40 & 3) != 0) goto LAB_1406c96c2;
        uVar41 = 0x10 - uVar41 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar41 + 4)) goto LAB_1406c96c2;
      lVar50 = param_2 * lVar39 + param_1;
      lVar51 = param_2 * lVar44 + param_1;
      lVar52 = param_2 * lVar49 + param_1;
      lVar53 = param_2 * lVar42 + param_1;
      lVar54 = param_2 * lVar47 + param_1;
      uVar38 = param_5 - (param_5 - uVar41 & 3);
      lVar37 = param_2 * lVar43 + param_1;
      lVar55 = param_2 * lVar48 + param_1;
      if (uVar41 != 0) {
        uVar36 = 0;
        do {
          *(float *)(uVar40 + uVar36 * 4) =
               (*(float *)(lVar50 + uVar36 * 4) + *(float *)(lVar51 + uVar36 * 4)) * fVar9 +
               (*(float *)(lVar52 + uVar36 * 4) + *(float *)(lVar53 + uVar36 * 4)) * fVar10 +
               (*(float *)(lVar54 + uVar36 * 4) + *(float *)(lVar55 + uVar36 * 4)) * fVar11 +
               *(float *)(lVar37 + uVar36 * 4) * fVar12;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar41);
      }
      if ((uVar41 * 4 + lVar37 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar50 + uVar41 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar8 = (float *)(lVar51 + uVar41 * 4);
          fVar16 = pfVar8[1];
          fVar17 = pfVar8[2];
          fVar18 = pfVar8[3];
          pfVar2 = (float *)(lVar53 + uVar41 * 4);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar3 = (float *)(lVar52 + uVar41 * 4);
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar4 = (float *)(lVar55 + uVar41 * 4);
          fVar25 = pfVar4[1];
          fVar26 = pfVar4[2];
          fVar27 = pfVar4[3];
          pfVar5 = (float *)(lVar54 + uVar41 * 4);
          fVar28 = pfVar5[1];
          fVar29 = pfVar5[2];
          fVar30 = pfVar5[3];
          pfVar6 = (float *)(lVar37 + uVar41 * 4);
          fVar31 = pfVar6[1];
          fVar32 = pfVar6[2];
          fVar33 = pfVar6[3];
          pfVar7 = (float *)(uVar40 + uVar41 * 4);
          *pfVar7 = (*pfVar1 + *pfVar8) * fVar9 + (*pfVar3 + *pfVar2) * fVar10 +
                    (*pfVar5 + *pfVar4) * fVar11 + *pfVar6 * fVar12;
          pfVar7[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                      (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
          pfVar7[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                      (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
          pfVar7[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                      (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
          uVar41 = uVar41 + 4;
        } while (uVar41 < uVar38);
      }
      else {
        do {
          pfVar1 = (float *)(lVar50 + uVar41 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar8 = (float *)(lVar51 + uVar41 * 4);
          fVar16 = pfVar8[1];
          fVar17 = pfVar8[2];
          fVar18 = pfVar8[3];
          pfVar2 = (float *)(lVar53 + uVar41 * 4);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar3 = (float *)(lVar52 + uVar41 * 4);
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar4 = (float *)(lVar55 + uVar41 * 4);
          fVar25 = pfVar4[1];
          fVar26 = pfVar4[2];
          fVar27 = pfVar4[3];
          pfVar5 = (float *)(lVar54 + uVar41 * 4);
          fVar28 = pfVar5[1];
          fVar29 = pfVar5[2];
          fVar30 = pfVar5[3];
          pfVar6 = (float *)(lVar37 + uVar41 * 4);
          fVar31 = pfVar6[1];
          fVar32 = pfVar6[2];
          fVar33 = pfVar6[3];
          pfVar7 = (float *)(uVar40 + uVar41 * 4);
          *pfVar7 = (*pfVar1 + *pfVar8) * fVar9 + (*pfVar3 + *pfVar2) * fVar10 +
                    (*pfVar5 + *pfVar4) * fVar11 + *pfVar6 * fVar12;
          pfVar7[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                      (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
          pfVar7[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                      (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
          pfVar7[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                      (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
          uVar41 = uVar41 + 4;
        } while (uVar41 < uVar38);
      }
    }
    if (uVar38 < param_5) {
      do {
        *(float *)(param_2 * 7 + param_1 + uVar38 * 4) =
             (*(float *)(lVar39 * param_2 + param_1 + uVar38 * 4) +
             *(float *)(lVar44 * param_2 + param_1 + uVar38 * 4)) * fVar9 +
             (*(float *)(lVar49 * param_2 + param_1 + uVar38 * 4) +
             *(float *)(lVar42 * param_2 + param_1 + uVar38 * 4)) * fVar10 +
             (*(float *)(lVar47 * param_2 + param_1 + uVar38 * 4) +
             *(float *)(lVar48 * param_2 + param_1 + uVar38 * 4)) * fVar11 +
             *(float *)(lVar43 * param_2 + param_1 + uVar38 * 4) * fVar12;
        uVar38 = uVar38 + 1;
      } while (uVar38 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar40 = param_2 * 7 + param_1;
      uVar41 = uVar40 & 0xf;
      if (uVar41 != 0) {
        if ((uVar40 & 3) != 0) goto LAB_1406c96d0;
        uVar41 = 0x10 - uVar41 >> 2;
      }
      if ((longlong)(uVar41 + 4) <= (longlong)param_5) {
        uVar36 = 0;
        uVar38 = param_5 - (param_5 - uVar41 & 3);
        if (uVar41 != 0) {
          do {
            iVar46 = (int)ROUND(*(float *)(uVar40 + uVar36 * 4));
            if (0xfffe < iVar46) {
              iVar46 = 0xffff;
            }
            uVar45 = (undefined2)iVar46;
            if (iVar46 < 1) {
              uVar45 = 0;
            }
            *(undefined2 *)(param_4 + uVar36 * 2) = uVar45;
            uVar36 = uVar36 + 1;
          } while (uVar36 < uVar41);
        }
        auVar35 = _DAT_14308bc00;
        auVar34 = _DAT_14308bbf0;
        lVar39 = uVar41 * 2;
        do {
          pfVar1 = (float *)(uVar40 + uVar41 * 4);
          auVar63._0_4_ = (int)*pfVar1;
          auVar63._4_4_ = (int)pfVar1[1];
          auVar63._8_4_ = (int)pfVar1[2];
          auVar63._12_4_ = (int)pfVar1[3];
          auVar61._0_4_ = -(uint)(auVar34._0_4_ < auVar63._0_4_);
          auVar61._4_4_ = -(uint)(auVar34._4_4_ < auVar63._4_4_);
          auVar61._8_4_ = -(uint)(auVar34._8_4_ < auVar63._8_4_);
          auVar61._12_4_ = -(uint)(auVar34._12_4_ < auVar63._12_4_);
          uVar41 = uVar41 + 4;
          auVar63 = auVar61 & (auVar34 ^ auVar63) ^ auVar63;
          auVar64._0_4_ = -(uint)(0 < auVar63._0_4_);
          auVar64._4_4_ = -(uint)(0 < auVar63._4_4_);
          auVar64._8_4_ = -(uint)(0 < auVar63._8_4_);
          auVar64._12_4_ = -(uint)(0 < auVar63._12_4_);
          auVar63 = pshufb(auVar64 & auVar63,auVar35);
          *(longlong *)(lVar39 + param_4) = auVar63._0_8_;
          lVar39 = lVar39 + 8;
        } while (uVar41 < uVar38);
        goto LAB_1406c9650;
      }
    }
LAB_1406c96d0:
    uVar38 = 0;
LAB_1406c9650:
    if (param_5 <= uVar38) {
      return;
    }
    do {
      iVar46 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar38 * 4));
      if (0xfffe < iVar46) {
        iVar46 = 0xffff;
      }
      uVar45 = (undefined2)iVar46;
      if (iVar46 < 1) {
        uVar45 = 0;
      }
      *(undefined2 *)(param_4 + uVar38 * 2) = uVar45;
      uVar38 = uVar38 + 1;
    } while (uVar38 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar40 = param_2 * 7 + param_1;
    uVar41 = uVar40 & 0xf;
    if (uVar41 != 0) {
      if ((uVar40 & 3) != 0) goto LAB_1406c96c9;
      uVar41 = 0x10 - uVar41 >> 2;
    }
    if ((longlong)(uVar41 + 8) <= (longlong)param_5) {
      uVar36 = 0;
      uVar38 = param_5 - (param_5 - uVar41 & 7);
      if (uVar41 != 0) {
        do {
          iVar46 = (int)ROUND(*(float *)(uVar40 + uVar36 * 4));
          if (0xfffe < iVar46) {
            iVar46 = 0xffff;
          }
          uVar45 = (undefined2)iVar46;
          if (iVar46 < 1) {
            uVar45 = 0;
          }
          *(undefined2 *)(param_4 + uVar36 * 2) = uVar45;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar41);
      }
      auVar35 = _DAT_14308bc00;
      auVar34 = _DAT_14308bbf0;
      lVar39 = uVar41 * 2;
      do {
        pfVar1 = (float *)(uVar40 + uVar41 * 4);
        auVar59._0_4_ = (int)*pfVar1;
        auVar59._4_4_ = (int)pfVar1[1];
        auVar59._8_4_ = (int)pfVar1[2];
        auVar59._12_4_ = (int)pfVar1[3];
        auVar58._0_4_ = -(uint)(auVar34._0_4_ < auVar59._0_4_);
        auVar58._4_4_ = -(uint)(auVar34._4_4_ < auVar59._4_4_);
        auVar58._8_4_ = -(uint)(auVar34._8_4_ < auVar59._8_4_);
        auVar58._12_4_ = -(uint)(auVar34._12_4_ < auVar59._12_4_);
        auVar59 = auVar58 & (auVar34 ^ auVar59) ^ auVar59;
        auVar62._0_4_ = -(uint)(0 < auVar59._0_4_);
        auVar62._4_4_ = -(uint)(0 < auVar59._4_4_);
        auVar62._8_4_ = -(uint)(0 < auVar59._8_4_);
        auVar62._12_4_ = -(uint)(0 < auVar59._12_4_);
        auVar63 = pshufb(auVar62 & auVar59,auVar35);
        *(longlong *)(lVar39 + param_4) = auVar63._0_8_;
        pfVar1 = (float *)(uVar40 + 0x10 + uVar41 * 4);
        auVar57._0_4_ = (int)*pfVar1;
        auVar57._4_4_ = (int)pfVar1[1];
        auVar57._8_4_ = (int)pfVar1[2];
        auVar57._12_4_ = (int)pfVar1[3];
        auVar56._0_4_ = -(uint)(auVar34._0_4_ < auVar57._0_4_);
        auVar56._4_4_ = -(uint)(auVar34._4_4_ < auVar57._4_4_);
        auVar56._8_4_ = -(uint)(auVar34._8_4_ < auVar57._8_4_);
        auVar56._12_4_ = -(uint)(auVar34._12_4_ < auVar57._12_4_);
        uVar41 = uVar41 + 8;
        auVar57 = auVar56 & (auVar34 ^ auVar57) ^ auVar57;
        auVar60._0_4_ = -(uint)(0 < auVar57._0_4_);
        auVar60._4_4_ = -(uint)(0 < auVar57._4_4_);
        auVar60._8_4_ = -(uint)(0 < auVar57._8_4_);
        auVar60._12_4_ = -(uint)(0 < auVar57._12_4_);
        auVar63 = pshufb(auVar60 & auVar57,auVar35);
        *(longlong *)(lVar39 + 8 + param_4) = auVar63._0_8_;
        lVar39 = lVar39 + 0x10;
      } while (uVar41 < uVar38);
      goto LAB_1406c94d6;
    }
  }
LAB_1406c96c9:
  uVar38 = 0;
LAB_1406c94d6:
  uVar41 = 0;
  if (uVar38 + 1 <= param_5) {
    do {
      iVar46 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar38 * 4 + uVar41 * 4));
      if (0xfffe < iVar46) {
        iVar46 = 0xffff;
      }
      uVar45 = (undefined2)iVar46;
      if (iVar46 < 1) {
        uVar45 = 0;
      }
      *(undefined2 *)(param_4 + uVar38 * 2 + uVar41 * 2) = uVar45;
      uVar41 = uVar41 + 1;
    } while (uVar41 < param_5 - uVar38);
  }
  return;
}


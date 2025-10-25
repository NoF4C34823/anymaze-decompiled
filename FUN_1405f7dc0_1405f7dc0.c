
void FUN_1405f7dc0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

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
  undefined1 auVar13 [16];
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
  float fVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  undefined2 uVar46;
  int iVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  
  lVar36 = 0;
  lVar44 = (longlong)param_3;
  fVar9 = *param_6;
  auVar57 = ZEXT416((uint)fVar9);
  lVar43 = lVar44 + 4;
  if (SCARRY8(lVar44,-3) == lVar44 + -3 < 0) {
    lVar43 = lVar44 + -3;
  }
  lVar44 = (longlong)(int)lVar43 + 1;
  fVar10 = param_6[1];
  if (6 < lVar44) {
    lVar44 = lVar36;
  }
  lVar49 = (longlong)(int)lVar44 + 1;
  fVar11 = param_6[2];
  auVar55 = ZEXT416((uint)fVar11);
  if (6 < lVar49) {
    lVar49 = lVar36;
  }
  lVar45 = (longlong)(int)lVar49 + 1;
  fVar12 = param_6[3];
  if (6 < lVar45) {
    lVar45 = lVar36;
  }
  lVar50 = (longlong)(int)lVar45 + 1;
  if (6 < lVar50) {
    lVar50 = lVar36;
  }
  lVar51 = (longlong)(int)lVar50 + 1;
  if (6 < lVar51) {
    lVar51 = lVar36;
  }
  lVar48 = (longlong)(int)lVar51 + 1;
  if (6 < lVar48) {
    lVar48 = lVar36;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 4) {
LAB_1405f8687:
      uVar40 = 0;
    }
    else {
      uVar41 = param_2 * 7 + param_1;
      uVar42 = uVar41 & 0xf;
      if (uVar42 != 0) {
        if ((uVar41 & 3) != 0) goto LAB_1405f8687;
        uVar42 = 0x10 - uVar42 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar42 + 4)) goto LAB_1405f8687;
      lVar36 = param_2 * lVar43 + param_1;
      lVar52 = param_2 * lVar48 + param_1;
      lVar37 = param_2 * lVar44 + param_1;
      lVar53 = param_2 * lVar51 + param_1;
      lVar39 = param_2 * lVar45 + param_1;
      lVar38 = param_2 * lVar49 + param_1;
      lVar54 = param_2 * lVar50 + param_1;
      uVar40 = param_5 - (param_5 - uVar42 & 3);
      if (uVar42 != 0) {
        uVar35 = 0;
        do {
          *(float *)(uVar41 + uVar35 * 4) =
               (*(float *)(lVar36 + uVar35 * 4) + *(float *)(lVar52 + uVar35 * 4)) * fVar9 +
               (*(float *)(lVar37 + uVar35 * 4) + *(float *)(lVar53 + uVar35 * 4)) * fVar10 +
               (*(float *)(lVar38 + uVar35 * 4) + *(float *)(lVar54 + uVar35 * 4)) * fVar11 +
               *(float *)(lVar39 + uVar35 * 4) * fVar12;
          uVar35 = uVar35 + 1;
        } while (uVar35 < uVar42);
      }
      if ((lVar39 + uVar42 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar36 + uVar42 * 4);
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar2 = (float *)(lVar52 + uVar42 * 4);
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar3 = (float *)(lVar53 + uVar42 * 4);
          fVar20 = pfVar3[1];
          fVar21 = pfVar3[2];
          fVar22 = pfVar3[3];
          pfVar4 = (float *)(lVar37 + uVar42 * 4);
          fVar23 = pfVar4[1];
          fVar24 = pfVar4[2];
          fVar25 = pfVar4[3];
          pfVar5 = (float *)(lVar54 + uVar42 * 4);
          fVar26 = pfVar5[1];
          fVar27 = pfVar5[2];
          fVar28 = pfVar5[3];
          pfVar6 = (float *)(lVar38 + uVar42 * 4);
          fVar29 = pfVar6[1];
          fVar30 = pfVar6[2];
          fVar31 = pfVar6[3];
          pfVar8 = (float *)(lVar39 + uVar42 * 4);
          fVar32 = pfVar8[1];
          fVar33 = pfVar8[2];
          fVar34 = pfVar8[3];
          pfVar7 = (float *)(uVar41 + uVar42 * 4);
          *pfVar7 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                    (*pfVar6 + *pfVar5) * fVar11 + *pfVar8 * fVar12;
          pfVar7[1] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                      (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
          pfVar7[2] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                      (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
          pfVar7[3] = (fVar16 + fVar19) * fVar9 + (fVar25 + fVar22) * fVar10 +
                      (fVar31 + fVar28) * fVar11 + fVar34 * fVar12;
          uVar42 = uVar42 + 4;
        } while (uVar42 < uVar40);
      }
      else {
        do {
          pfVar1 = (float *)(lVar36 + uVar42 * 4);
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar2 = (float *)(lVar52 + uVar42 * 4);
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar3 = (float *)(lVar53 + uVar42 * 4);
          fVar20 = pfVar3[1];
          fVar21 = pfVar3[2];
          fVar22 = pfVar3[3];
          pfVar4 = (float *)(lVar37 + uVar42 * 4);
          fVar23 = pfVar4[1];
          fVar24 = pfVar4[2];
          fVar25 = pfVar4[3];
          pfVar5 = (float *)(lVar54 + uVar42 * 4);
          fVar26 = pfVar5[1];
          fVar27 = pfVar5[2];
          fVar28 = pfVar5[3];
          pfVar6 = (float *)(lVar38 + uVar42 * 4);
          fVar29 = pfVar6[1];
          fVar30 = pfVar6[2];
          fVar31 = pfVar6[3];
          pfVar8 = (float *)(lVar39 + uVar42 * 4);
          fVar32 = pfVar8[1];
          fVar33 = pfVar8[2];
          fVar34 = pfVar8[3];
          pfVar7 = (float *)(uVar41 + uVar42 * 4);
          *pfVar7 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                    (*pfVar6 + *pfVar5) * fVar11 + *pfVar8 * fVar12;
          pfVar7[1] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                      (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
          pfVar7[2] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                      (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
          pfVar7[3] = (fVar16 + fVar19) * fVar9 + (fVar25 + fVar22) * fVar10 +
                      (fVar31 + fVar28) * fVar11 + fVar34 * fVar12;
          uVar42 = uVar42 + 4;
        } while (uVar42 < uVar40);
      }
    }
    if (uVar40 < param_5) {
      do {
        *(float *)(param_2 * 7 + param_1 + uVar40 * 4) =
             (*(float *)(lVar43 * param_2 + param_1 + uVar40 * 4) +
             *(float *)(lVar48 * param_2 + param_1 + uVar40 * 4)) * fVar9 +
             (*(float *)(lVar44 * param_2 + param_1 + uVar40 * 4) +
             *(float *)(lVar51 * param_2 + param_1 + uVar40 * 4)) * fVar10 +
             (*(float *)(lVar49 * param_2 + param_1 + uVar40 * 4) +
             *(float *)(lVar50 * param_2 + param_1 + uVar40 * 4)) * fVar11 +
             *(float *)(lVar45 * param_2 + param_1 + uVar40 * 4) * fVar12;
        uVar40 = uVar40 + 1;
      } while (uVar40 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar41 = param_4 & 0xf;
      if (uVar41 != 0) {
        if ((param_4 & 1) != 0) goto LAB_1405f8695;
        uVar41 = 0x10 - uVar41 >> 1;
      }
      if ((longlong)(uVar41 + 8) <= (longlong)param_5) {
        lVar43 = param_2 * 7 + param_1;
        uVar40 = 0;
        uVar42 = param_5 - (param_5 - uVar41 & 7);
        if (uVar41 != 0) {
          do {
            iVar47 = (int)ROUND(*(float *)(lVar43 + uVar40 * 4));
            if (0x7ffe < iVar47) {
              iVar47 = 0x7fff;
            }
            uVar46 = (undefined2)iVar47;
            if (iVar47 < -0x7fff) {
              uVar46 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar40 * 2) = uVar46;
            uVar40 = uVar40 + 1;
          } while (uVar40 < uVar41);
        }
        if ((lVar43 + uVar41 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar43 + uVar41 * 4);
            auVar55._0_4_ = (int)*pfVar1;
            auVar55._4_4_ = (int)pfVar1[1];
            auVar55._8_4_ = (int)pfVar1[2];
            auVar55._12_4_ = (int)pfVar1[3];
            pfVar1 = (float *)(lVar43 + 0x10 + uVar41 * 4);
            auVar57._0_4_ = (int)*pfVar1;
            auVar57._4_4_ = (int)pfVar1[1];
            auVar57._8_4_ = (int)pfVar1[2];
            auVar57._12_4_ = (int)pfVar1[3];
            auVar57 = packssdw(auVar55,auVar57);
            *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar57;
            uVar41 = uVar41 + 8;
          } while (uVar41 < uVar42);
        }
        else {
          do {
            auVar55 = lddqu(auVar55,*(undefined1 (*) [16])(lVar43 + uVar41 * 4));
            auVar57 = lddqu(auVar57,*(undefined1 (*) [16])(lVar43 + 0x10 + uVar41 * 4));
            auVar61._0_4_ = (int)auVar55._0_4_;
            auVar61._4_4_ = (int)auVar55._4_4_;
            auVar61._8_4_ = (int)auVar55._8_4_;
            auVar61._12_4_ = (int)auVar55._12_4_;
            auVar60._4_4_ = (int)auVar57._4_4_;
            auVar60._0_4_ = (int)auVar57._0_4_;
            auVar60._8_4_ = (int)auVar57._8_4_;
            auVar60._12_4_ = (int)auVar57._12_4_;
            auVar60 = packssdw(auVar61,auVar60);
            *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar60;
            uVar41 = uVar41 + 8;
          } while (uVar41 < uVar42);
        }
        goto LAB_1405f8601;
      }
    }
LAB_1405f8695:
    uVar42 = 0;
LAB_1405f8601:
    if (param_5 <= uVar42) {
      return;
    }
    do {
      iVar47 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar42 * 4));
      if (0x7ffe < iVar47) {
        iVar47 = 0x7fff;
      }
      uVar46 = (undefined2)iVar47;
      if (iVar47 < -0x7fff) {
        uVar46 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar42 * 2) = uVar46;
      uVar42 = uVar42 + 1;
    } while (uVar42 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar41 = param_4 & 0xf;
    if (uVar41 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1405f868e;
      uVar41 = 0x10 - uVar41 >> 1;
    }
    if ((longlong)(uVar41 + 8) <= (longlong)param_5) {
      lVar43 = param_2 * 7 + param_1;
      uVar40 = 0;
      uVar42 = param_5 - (param_5 - uVar41 & 7);
      if (uVar41 != 0) {
        do {
          iVar47 = (int)ROUND(*(float *)(lVar43 + uVar40 * 4));
          if (0x7ffe < iVar47) {
            iVar47 = 0x7fff;
          }
          uVar46 = (undefined2)iVar47;
          if (iVar47 < -0x7fff) {
            uVar46 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar40 * 2) = uVar46;
          uVar40 = uVar40 + 1;
        } while (uVar40 < uVar41);
      }
      if ((lVar43 + uVar41 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar43 + uVar41 * 4);
          auVar58._0_4_ = (int)*pfVar1;
          auVar58._4_4_ = (int)pfVar1[1];
          auVar58._8_4_ = (int)pfVar1[2];
          auVar58._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(lVar43 + 0x10 + uVar41 * 4);
          auVar56._0_4_ = (int)*pfVar1;
          auVar56._4_4_ = (int)pfVar1[1];
          auVar56._8_4_ = (int)pfVar1[2];
          auVar56._12_4_ = (int)pfVar1[3];
          auVar57 = packssdw(auVar58,auVar56);
          *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar57;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar42);
      }
      else {
        do {
          auVar55 = lddqu(auVar55,*(undefined1 (*) [16])(lVar43 + uVar41 * 4));
          auVar57 = lddqu(auVar57,*(undefined1 (*) [16])(lVar43 + 0x10 + uVar41 * 4));
          auVar59._0_4_ = (int)auVar55._0_4_;
          auVar59._4_4_ = (int)auVar55._4_4_;
          auVar59._8_4_ = (int)auVar55._8_4_;
          auVar59._12_4_ = (int)auVar55._12_4_;
          auVar13._4_4_ = (int)auVar57._4_4_;
          auVar13._0_4_ = (int)auVar57._0_4_;
          auVar13._8_4_ = (int)auVar57._8_4_;
          auVar13._12_4_ = (int)auVar57._12_4_;
          auVar60 = packssdw(auVar59,auVar13);
          *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar60;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar42);
      }
      goto LAB_1405f8441;
    }
  }
LAB_1405f868e:
  uVar42 = 0;
LAB_1405f8441:
  if (uVar42 < param_5) {
    do {
      iVar47 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar42 * 4));
      if (0x7ffe < iVar47) {
        iVar47 = 0x7fff;
      }
      uVar46 = (undefined2)iVar47;
      if (iVar47 < -0x7fff) {
        uVar46 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar42 * 2) = uVar46;
      uVar42 = uVar42 + 1;
    } while (uVar42 < param_5);
  }
  return;
}


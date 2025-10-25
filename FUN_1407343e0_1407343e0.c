
void FUN_1407343e0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  undefined2 uVar32;
  int iVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 in_XMM1 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  lVar34 = (longlong)param_3;
  lVar31 = lVar34 + -2;
  if (SCARRY8(lVar34,-2) != lVar34 + -2 < 0) {
    lVar31 = lVar34 + 3;
  }
  lVar26 = 0;
  fVar7 = *param_6;
  auVar43 = ZEXT416((uint)fVar7);
  lVar34 = (longlong)(int)lVar31 + 1;
  fVar8 = param_6[1];
  fVar9 = param_6[2];
  if (4 < lVar34) {
    lVar34 = lVar26;
  }
  lVar27 = (longlong)(int)lVar34 + 1;
  if (4 < lVar27) {
    lVar27 = lVar26;
  }
  lVar35 = (longlong)(int)lVar27 + 1;
  if (4 < lVar35) {
    lVar35 = lVar26;
  }
  lVar30 = (longlong)(int)lVar35 + 1;
  if (4 < lVar30) {
    lVar30 = lVar26;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_140734bbb:
      uVar29 = 0;
      if (param_5 == 0) goto LAB_1407348de;
      uVar28 = 0;
      uVar42 = param_5;
    }
    else {
      uVar41 = param_2 * 5 + param_1;
      uVar42 = uVar41 & 0xf;
      if (uVar42 != 0) {
        if ((uVar41 & 3) != 0) goto LAB_140734bbb;
        uVar42 = 0x10 - uVar42 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar42 + 8)) goto LAB_140734bbb;
      lVar36 = param_2 * lVar31 + param_1;
      lVar26 = param_2 * lVar27 + param_1;
      uVar29 = param_5 - (param_5 - uVar42 & 7);
      lVar38 = param_2 * lVar30 + param_1;
      lVar37 = param_2 * lVar34 + param_1;
      lVar39 = param_2 * lVar35 + param_1;
      uVar28 = 0;
      if (uVar42 != 0) {
        do {
          *(float *)(uVar41 + uVar28 * 4) =
               (*(float *)(lVar36 + uVar28 * 4) + *(float *)(lVar38 + uVar28 * 4)) * fVar7 +
               (*(float *)(lVar37 + uVar28 * 4) + *(float *)(lVar39 + uVar28 * 4)) * fVar8 +
               *(float *)(lVar26 + uVar28 * 4) * fVar9;
          uVar28 = uVar28 + 1;
        } while (uVar28 < uVar42);
      }
      if ((lVar26 + uVar42 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar36 + uVar42 * 4);
          fVar45 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar6 = (float *)(lVar38 + uVar42 * 4);
          fVar14 = pfVar6[1];
          fVar15 = pfVar6[2];
          fVar16 = pfVar6[3];
          pfVar2 = (float *)(lVar37 + uVar42 * 4);
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar3 = (float *)(lVar39 + uVar42 * 4);
          fVar20 = pfVar3[1];
          fVar21 = pfVar3[2];
          fVar22 = pfVar3[3];
          pfVar4 = (float *)(lVar26 + uVar42 * 4);
          fVar23 = pfVar4[1];
          fVar24 = pfVar4[2];
          fVar25 = pfVar4[3];
          pfVar5 = (float *)(uVar41 + uVar42 * 4);
          *pfVar5 = (*pfVar1 + *pfVar6) * fVar7 + (*pfVar2 + *pfVar3) * fVar8 + *pfVar4 * fVar9;
          pfVar5[1] = (fVar45 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
          pfVar5[2] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
          pfVar5[3] = (fVar13 + fVar16) * fVar7 + (fVar19 + fVar22) * fVar8 + fVar25 * fVar9;
          pfVar1 = (float *)(lVar36 + 0x10 + uVar42 * 4);
          fVar45 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(lVar38 + 0x10 + uVar42 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(lVar37 + 0x10 + uVar42 * 4);
          fVar17 = pfVar3[1];
          fVar18 = pfVar3[2];
          fVar19 = pfVar3[3];
          pfVar4 = (float *)(lVar39 + 0x10 + uVar42 * 4);
          fVar20 = pfVar4[1];
          fVar21 = pfVar4[2];
          fVar22 = pfVar4[3];
          pfVar5 = (float *)(lVar26 + 0x10 + uVar42 * 4);
          fVar23 = pfVar5[1];
          fVar24 = pfVar5[2];
          fVar25 = pfVar5[3];
          pfVar6 = (float *)(uVar41 + 0x10 + uVar42 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
          pfVar6[1] = (fVar45 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
          pfVar6[2] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
          pfVar6[3] = (fVar13 + fVar16) * fVar7 + (fVar19 + fVar22) * fVar8 + fVar25 * fVar9;
          uVar42 = uVar42 + 8;
        } while (uVar42 < uVar29);
      }
      else {
        do {
          pfVar1 = (float *)(lVar36 + uVar42 * 4);
          fVar45 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar6 = (float *)(lVar38 + uVar42 * 4);
          fVar14 = pfVar6[1];
          fVar15 = pfVar6[2];
          fVar16 = pfVar6[3];
          pfVar2 = (float *)(lVar37 + uVar42 * 4);
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar3 = (float *)(lVar39 + uVar42 * 4);
          fVar20 = pfVar3[1];
          fVar21 = pfVar3[2];
          fVar22 = pfVar3[3];
          pfVar4 = (float *)(lVar26 + uVar42 * 4);
          fVar23 = pfVar4[1];
          fVar24 = pfVar4[2];
          fVar25 = pfVar4[3];
          pfVar5 = (float *)(uVar41 + uVar42 * 4);
          *pfVar5 = (*pfVar1 + *pfVar6) * fVar7 + (*pfVar2 + *pfVar3) * fVar8 + *pfVar4 * fVar9;
          pfVar5[1] = (fVar45 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
          pfVar5[2] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
          pfVar5[3] = (fVar13 + fVar16) * fVar7 + (fVar19 + fVar22) * fVar8 + fVar25 * fVar9;
          pfVar1 = (float *)(lVar36 + 0x10 + uVar42 * 4);
          fVar45 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(lVar38 + 0x10 + uVar42 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(lVar37 + 0x10 + uVar42 * 4);
          fVar17 = pfVar3[1];
          fVar18 = pfVar3[2];
          fVar19 = pfVar3[3];
          pfVar4 = (float *)(lVar39 + 0x10 + uVar42 * 4);
          fVar20 = pfVar4[1];
          fVar21 = pfVar4[2];
          fVar22 = pfVar4[3];
          pfVar5 = (float *)(lVar26 + 0x10 + uVar42 * 4);
          fVar23 = pfVar5[1];
          fVar24 = pfVar5[2];
          fVar25 = pfVar5[3];
          pfVar6 = (float *)(uVar41 + 0x10 + uVar42 * 4);
          *pfVar6 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar3 + *pfVar4) * fVar8 + *pfVar5 * fVar9;
          pfVar6[1] = (fVar45 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
          pfVar6[2] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
          pfVar6[3] = (fVar13 + fVar16) * fVar7 + (fVar19 + fVar22) * fVar8 + fVar25 * fVar9;
          uVar42 = uVar42 + 8;
        } while (uVar42 < uVar29);
      }
      in_XMM1._4_4_ = fVar8;
      in_XMM1._0_4_ = fVar8;
      in_XMM1._8_4_ = fVar8;
      in_XMM1._12_4_ = fVar8;
      if (param_5 < uVar29 + 1) goto LAB_1407348de;
      uVar42 = param_5 - uVar29;
      if ((longlong)uVar42 < 4) {
        uVar28 = 0;
      }
      else {
        uVar28 = uVar42 & 0xfffffffffffffffc;
        uVar40 = 0;
        do {
          pfVar1 = (float *)(lVar36 + uVar29 * 4 + uVar40 * 4);
          fVar45 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(lVar38 + uVar29 * 4 + uVar40 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar6 = (float *)(lVar37 + uVar29 * 4 + uVar40 * 4);
          fVar17 = pfVar6[1];
          fVar18 = pfVar6[2];
          fVar19 = pfVar6[3];
          pfVar3 = (float *)(lVar39 + uVar29 * 4 + uVar40 * 4);
          fVar20 = pfVar3[1];
          fVar21 = pfVar3[2];
          fVar22 = pfVar3[3];
          pfVar4 = (float *)(lVar26 + uVar29 * 4 + uVar40 * 4);
          fVar23 = pfVar4[1];
          fVar24 = pfVar4[2];
          fVar25 = pfVar4[3];
          pfVar5 = (float *)(uVar41 + uVar29 * 4 + uVar40 * 4);
          *pfVar5 = (*pfVar1 + *pfVar2) * fVar7 + (*pfVar6 + *pfVar3) * fVar8 + *pfVar4 * fVar9;
          pfVar5[1] = (fVar45 + fVar14) * fVar7 + (fVar17 + fVar20) * fVar8 + fVar23 * fVar9;
          pfVar5[2] = (fVar12 + fVar15) * fVar7 + (fVar18 + fVar21) * fVar8 + fVar24 * fVar9;
          pfVar5[3] = (fVar13 + fVar16) * fVar7 + (fVar19 + fVar22) * fVar8 + fVar25 * fVar9;
          uVar40 = uVar40 + 4;
        } while (uVar40 < uVar28);
      }
    }
    if (uVar28 < uVar42) {
      do {
        fVar45 = (*(float *)(lVar34 * param_2 + param_1 + uVar29 * 4 + uVar28 * 4) +
                 *(float *)(lVar35 * param_2 + param_1 + uVar29 * 4 + uVar28 * 4)) * fVar8;
        in_XMM1 = ZEXT416((uint)fVar45);
        *(float *)(param_2 * 5 + param_1 + uVar29 * 4 + uVar28 * 4) =
             (*(float *)(lVar31 * param_2 + param_1 + uVar29 * 4 + uVar28 * 4) +
             *(float *)(lVar30 * param_2 + param_1 + uVar29 * 4 + uVar28 * 4)) * fVar7 + fVar45 +
             *(float *)(lVar27 * param_2 + param_1 + uVar29 * 4 + uVar28 * 4) * fVar9;
        uVar28 = uVar28 + 1;
      } while (uVar28 < uVar42);
    }
  }
LAB_1407348de:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar41 = param_4 & 0xf;
      if (uVar41 != 0) {
        if ((param_4 & 1) != 0) goto LAB_140734bd8;
        uVar41 = 0x10 - uVar41 >> 1;
      }
      if ((longlong)(uVar41 + 8) <= (longlong)param_5) {
        uVar29 = 0;
        lVar31 = param_2 * 5 + param_1;
        uVar42 = param_5 - (param_5 - uVar41 & 7);
        if (uVar41 != 0) {
          do {
            iVar33 = (int)ROUND(*(float *)(lVar31 + uVar29 * 4));
            if (0xfffe < iVar33) {
              iVar33 = 0xffff;
            }
            uVar32 = (undefined2)iVar33;
            if (iVar33 < 1) {
              uVar32 = 0;
            }
            *(undefined2 *)(param_4 + uVar29 * 2) = uVar32;
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar41);
        }
        if ((lVar31 + uVar41 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar31 + uVar41 * 4);
            auVar48._0_4_ = (int)*pfVar1;
            auVar48._4_4_ = (int)pfVar1[1];
            auVar48._8_4_ = (int)pfVar1[2];
            auVar48._12_4_ = (int)pfVar1[3];
            pfVar1 = (float *)(lVar31 + 0x10 + uVar41 * 4);
            auVar43._0_4_ = (int)*pfVar1;
            auVar43._4_4_ = (int)pfVar1[1];
            auVar43._8_4_ = (int)pfVar1[2];
            auVar43._12_4_ = (int)pfVar1[3];
            auVar43 = packusdw(auVar48,auVar43);
            *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar43;
            uVar41 = uVar41 + 8;
          } while (uVar41 < uVar42);
        }
        else {
          do {
            auVar43 = lddqu(auVar43,*(undefined1 (*) [16])(lVar31 + uVar41 * 4));
            in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(lVar31 + 0x10 + uVar41 * 4));
            auVar49._0_4_ = (int)auVar43._0_4_;
            auVar49._4_4_ = (int)auVar43._4_4_;
            auVar49._8_4_ = (int)auVar43._8_4_;
            auVar49._12_4_ = (int)auVar43._12_4_;
            auVar11._4_4_ = (int)in_XMM1._4_4_;
            auVar11._0_4_ = (int)in_XMM1._0_4_;
            auVar11._8_4_ = (int)in_XMM1._8_4_;
            auVar11._12_4_ = (int)in_XMM1._12_4_;
            auVar48 = packusdw(auVar49,auVar11);
            *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar48;
            uVar41 = uVar41 + 8;
          } while (uVar41 < uVar42);
        }
        goto LAB_140734b5e;
      }
    }
LAB_140734bd8:
    uVar42 = 0;
LAB_140734b5e:
    if (param_5 <= uVar42) {
      return;
    }
    do {
      iVar33 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar42 * 4));
      if (0xfffe < iVar33) {
        iVar33 = 0xffff;
      }
      uVar32 = (undefined2)iVar33;
      if (iVar33 < 1) {
        uVar32 = 0;
      }
      *(undefined2 *)(param_4 + uVar42 * 2) = uVar32;
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
      if ((param_4 & 1) != 0) goto LAB_140734bd1;
      uVar41 = 0x10 - uVar41 >> 1;
    }
    if ((longlong)(uVar41 + 8) <= (longlong)param_5) {
      uVar29 = 0;
      lVar31 = param_2 * 5 + param_1;
      uVar42 = param_5 - (param_5 - uVar41 & 7);
      if (uVar41 != 0) {
        do {
          iVar33 = (int)ROUND(*(float *)(lVar31 + uVar29 * 4));
          if (0xfffe < iVar33) {
            iVar33 = 0xffff;
          }
          uVar32 = (undefined2)iVar33;
          if (iVar33 < 1) {
            uVar32 = 0;
          }
          *(undefined2 *)(param_4 + uVar29 * 2) = uVar32;
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar41);
      }
      if ((lVar31 + uVar41 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar31 + uVar41 * 4);
          auVar46._0_4_ = (int)*pfVar1;
          auVar46._4_4_ = (int)pfVar1[1];
          auVar46._8_4_ = (int)pfVar1[2];
          auVar46._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(lVar31 + 0x10 + uVar41 * 4);
          auVar44._0_4_ = (int)*pfVar1;
          auVar44._4_4_ = (int)pfVar1[1];
          auVar44._8_4_ = (int)pfVar1[2];
          auVar44._12_4_ = (int)pfVar1[3];
          auVar43 = packusdw(auVar46,auVar44);
          *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar43;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar42);
      }
      else {
        do {
          auVar43 = lddqu(auVar43,*(undefined1 (*) [16])(lVar31 + uVar41 * 4));
          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(lVar31 + 0x10 + uVar41 * 4));
          auVar47._0_4_ = (int)auVar43._0_4_;
          auVar47._4_4_ = (int)auVar43._4_4_;
          auVar47._8_4_ = (int)auVar43._8_4_;
          auVar47._12_4_ = (int)auVar43._12_4_;
          auVar10._4_4_ = (int)in_XMM1._4_4_;
          auVar10._0_4_ = (int)in_XMM1._0_4_;
          auVar10._8_4_ = (int)in_XMM1._8_4_;
          auVar10._12_4_ = (int)in_XMM1._12_4_;
          auVar48 = packusdw(auVar47,auVar10);
          *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar48;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar42);
      }
      goto LAB_1407349fe;
    }
  }
LAB_140734bd1:
  uVar42 = 0;
LAB_1407349fe:
  if (uVar42 < param_5) {
    do {
      iVar33 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar42 * 4));
      if (0xfffe < iVar33) {
        iVar33 = 0xffff;
      }
      uVar32 = (undefined2)iVar33;
      if (iVar33 < 1) {
        uVar32 = 0;
      }
      *(undefined2 *)(param_4 + uVar42 * 2) = uVar32;
      uVar42 = uVar42 + 1;
    } while (uVar42 < param_5);
  }
  return;
}


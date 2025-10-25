
void FUN_1400948c0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  float fVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  longlong lVar46;
  undefined2 uVar47;
  int iVar48;
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
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  undefined1 unaff_XMM12 [16];
  undefined1 unaff_XMM13 [16];
  
  lVar49 = (longlong)param_3;
  uVar37 = 0;
  lVar46 = lVar49 + -3;
  if (SCARRY8(lVar49,-3) != lVar49 + -3 < 0) {
    lVar46 = lVar49 + 4;
  }
  lVar49 = (longlong)(int)lVar46 + 1;
  fVar68 = *param_6;
  fVar9 = param_6[1];
  uVar14 = *(undefined8 *)param_6;
  uVar13 = *(undefined8 *)param_6;
  if (6 < lVar49) {
    lVar49 = 0;
  }
  fVar10 = param_6[2];
  fVar11 = param_6[3];
  uVar12 = *(undefined8 *)(param_6 + 2);
  lVar51 = (longlong)(int)lVar49 + 1;
  if (6 < lVar51) {
    lVar51 = 0;
  }
  lVar38 = (longlong)(int)lVar51 + 1;
  if (6 < lVar38) {
    lVar38 = 0;
  }
  lVar50 = (longlong)(int)lVar38 + 1;
  if (6 < lVar50) {
    lVar50 = 0;
  }
  lVar52 = (longlong)(int)lVar50 + 1;
  if (6 < lVar52) {
    lVar52 = 0;
  }
  lVar45 = (longlong)(int)lVar52 + 1;
  if (6 < lVar45) {
    lVar45 = 0;
  }
  if (0 < (longlong)param_5) {
    if (3 < (longlong)param_5) {
      uVar43 = param_2 * 7 + param_1;
      uVar44 = uVar43 & 0xf;
      if (uVar44 != 0) {
        if ((uVar43 & 3) != 0) goto LAB_140094d85;
        uVar44 = 0x10 - uVar44 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar44 + 4)) {
        uVar37 = 0;
      }
      else {
        lVar40 = param_2 * lVar46 + param_1;
        lVar53 = param_2 * lVar45 + param_1;
        lVar41 = param_2 * lVar49 + param_1;
        lVar54 = param_2 * lVar51 + param_1;
        uVar37 = param_5 - (param_5 - uVar44 & 3);
        lVar39 = param_2 * lVar38 + param_1;
        lVar42 = param_2 * lVar52 + param_1;
        lVar55 = param_2 * lVar50 + param_1;
        if (uVar44 != 0) {
          uVar36 = 0;
          do {
            auVar66._8_4_ = fVar10;
            auVar66._0_8_ = uVar13;
            auVar66._12_4_ = fVar11;
            auVar65._0_4_ = *(float *)(lVar40 + uVar36 * 4) + *(float *)(lVar53 + uVar36 * 4);
            auVar65._4_4_ = *(float *)(lVar41 + uVar36 * 4) + *(float *)(lVar42 + uVar36 * 4);
            auVar56 = insertps(ZEXT416((uint)(*(float *)(lVar54 + uVar36 * 4) +
                                             *(float *)(lVar55 + uVar36 * 4))),
                               *(undefined4 *)(lVar39 + uVar36 * 4),0x10);
            auVar65._8_8_ = auVar56._0_8_;
            auVar56 = dpps(auVar66,auVar65,0xf1);
            *(int *)(uVar43 + uVar36 * 4) = auVar56._0_4_;
            uVar36 = uVar36 + 1;
          } while (uVar36 < uVar44);
        }
        if ((lVar39 + uVar44 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar40 + uVar44 * 4);
            fVar15 = pfVar1[1];
            fVar16 = pfVar1[2];
            fVar17 = pfVar1[3];
            pfVar2 = (float *)(lVar53 + uVar44 * 4);
            fVar18 = pfVar2[1];
            fVar19 = pfVar2[2];
            fVar20 = pfVar2[3];
            pfVar8 = (float *)(lVar41 + uVar44 * 4);
            fVar21 = pfVar8[1];
            fVar22 = pfVar8[2];
            fVar23 = pfVar8[3];
            pfVar3 = (float *)(lVar42 + uVar44 * 4);
            fVar24 = pfVar3[1];
            fVar25 = pfVar3[2];
            fVar26 = pfVar3[3];
            pfVar4 = (float *)(lVar55 + uVar44 * 4);
            fVar27 = pfVar4[1];
            fVar28 = pfVar4[2];
            fVar29 = pfVar4[3];
            pfVar5 = (float *)(lVar54 + uVar44 * 4);
            fVar30 = pfVar5[1];
            fVar31 = pfVar5[2];
            fVar32 = pfVar5[3];
            pfVar6 = (float *)(lVar39 + uVar44 * 4);
            fVar33 = pfVar6[1];
            fVar34 = pfVar6[2];
            fVar35 = pfVar6[3];
            pfVar7 = (float *)(uVar43 + uVar44 * 4);
            *pfVar7 = (*pfVar1 + *pfVar2) * fVar68 + (*pfVar8 + *pfVar3) * fVar9 +
                      (*pfVar5 + *pfVar4) * fVar10 + *pfVar6 * fVar11;
            pfVar7[1] = (fVar15 + fVar18) * fVar68 + (fVar21 + fVar24) * fVar9 +
                        (fVar30 + fVar27) * fVar10 + fVar33 * fVar11;
            pfVar7[2] = (fVar16 + fVar19) * fVar68 + (fVar22 + fVar25) * fVar9 +
                        (fVar31 + fVar28) * fVar10 + fVar34 * fVar11;
            pfVar7[3] = (fVar17 + fVar20) * fVar68 + (fVar23 + fVar26) * fVar9 +
                        (fVar32 + fVar29) * fVar10 + fVar35 * fVar11;
            uVar44 = uVar44 + 4;
          } while (uVar44 < uVar37);
        }
        else {
          do {
            pfVar1 = (float *)(lVar40 + uVar44 * 4);
            fVar15 = pfVar1[1];
            fVar16 = pfVar1[2];
            fVar17 = pfVar1[3];
            pfVar2 = (float *)(lVar53 + uVar44 * 4);
            fVar18 = pfVar2[1];
            fVar19 = pfVar2[2];
            fVar20 = pfVar2[3];
            pfVar8 = (float *)(lVar41 + uVar44 * 4);
            fVar21 = pfVar8[1];
            fVar22 = pfVar8[2];
            fVar23 = pfVar8[3];
            pfVar3 = (float *)(lVar42 + uVar44 * 4);
            fVar24 = pfVar3[1];
            fVar25 = pfVar3[2];
            fVar26 = pfVar3[3];
            pfVar4 = (float *)(lVar55 + uVar44 * 4);
            fVar27 = pfVar4[1];
            fVar28 = pfVar4[2];
            fVar29 = pfVar4[3];
            pfVar5 = (float *)(lVar54 + uVar44 * 4);
            fVar30 = pfVar5[1];
            fVar31 = pfVar5[2];
            fVar32 = pfVar5[3];
            pfVar6 = (float *)(lVar39 + uVar44 * 4);
            fVar33 = pfVar6[1];
            fVar34 = pfVar6[2];
            fVar35 = pfVar6[3];
            pfVar7 = (float *)(uVar43 + uVar44 * 4);
            *pfVar7 = (*pfVar1 + *pfVar2) * fVar68 + (*pfVar8 + *pfVar3) * fVar9 +
                      (*pfVar5 + *pfVar4) * fVar10 + *pfVar6 * fVar11;
            pfVar7[1] = (fVar15 + fVar18) * fVar68 + (fVar21 + fVar24) * fVar9 +
                        (fVar30 + fVar27) * fVar10 + fVar33 * fVar11;
            pfVar7[2] = (fVar16 + fVar19) * fVar68 + (fVar22 + fVar25) * fVar9 +
                        (fVar31 + fVar28) * fVar10 + fVar34 * fVar11;
            pfVar7[3] = (fVar17 + fVar20) * fVar68 + (fVar23 + fVar26) * fVar9 +
                        (fVar32 + fVar29) * fVar10 + fVar35 * fVar11;
            uVar44 = uVar44 + 4;
          } while (uVar44 < uVar37);
        }
        unaff_XMM13._4_4_ = fVar9;
        unaff_XMM13._0_4_ = fVar9;
        unaff_XMM13._8_4_ = fVar9;
        unaff_XMM13._12_4_ = fVar9;
        unaff_XMM12._4_4_ = fVar68;
        unaff_XMM12._0_4_ = fVar68;
        unaff_XMM12._8_4_ = fVar68;
        unaff_XMM12._12_4_ = fVar68;
      }
    }
LAB_140094d85:
    if (uVar37 < param_5) {
      do {
        auVar67._8_4_ = (int)uVar12;
        auVar67._0_8_ = uVar14;
        auVar67._12_4_ = (int)((ulonglong)uVar12 >> 0x20);
        auVar56._0_4_ =
             *(float *)(lVar46 * param_2 + param_1 + uVar37 * 4) +
             *(float *)(lVar45 * param_2 + param_1 + uVar37 * 4);
        fVar68 = *(float *)(lVar49 * param_2 + param_1 + uVar37 * 4) +
                 *(float *)(lVar52 * param_2 + param_1 + uVar37 * 4);
        unaff_XMM12 = ZEXT416((uint)fVar68);
        auVar56._4_4_ = fVar68;
        auVar66 = insertps(ZEXT416((uint)(*(float *)(lVar51 * param_2 + param_1 + uVar37 * 4) +
                                         *(float *)(lVar50 * param_2 + param_1 + uVar37 * 4))),
                           *(undefined4 *)(lVar38 * param_2 + param_1 + uVar37 * 4),0x10);
        auVar56._8_8_ = auVar66._0_8_;
        auVar56 = dpps(auVar67,auVar56,0xf1);
        *(int *)(param_2 * 7 + param_1 + uVar37 * 4) = auVar56._0_4_;
        uVar37 = uVar37 + 1;
      } while (uVar37 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar37 = param_4 & 0xf;
      if (uVar37 != 0) {
        if ((param_4 & 1) != 0) goto LAB_140095178;
        uVar37 = 0x10 - uVar37 >> 1;
      }
      if ((longlong)(uVar37 + 8) <= (longlong)param_5) {
        uVar44 = 0;
        lVar46 = param_2 * 7 + param_1;
        uVar43 = param_5 - (param_5 - uVar37 & 7);
        if (uVar37 != 0) {
          do {
            iVar48 = (int)ROUND(*(float *)(lVar46 + uVar44 * 4));
            if (0xfffe < iVar48) {
              iVar48 = 0xffff;
            }
            uVar47 = (undefined2)iVar48;
            if (iVar48 < 1) {
              uVar47 = 0;
            }
            *(undefined2 *)(param_4 + uVar44 * 2) = uVar47;
            uVar44 = uVar44 + 1;
          } while (uVar44 < uVar37);
        }
        if ((lVar46 + uVar37 * 4 & 0xf) == 0) {
          do {
            pfVar1 = (float *)(lVar46 + uVar37 * 4);
            auVar64._0_4_ = (int)*pfVar1;
            auVar64._4_4_ = (int)pfVar1[1];
            auVar64._8_4_ = (int)pfVar1[2];
            auVar64._12_4_ = (int)pfVar1[3];
            pfVar1 = (float *)(lVar46 + 0x10 + uVar37 * 4);
            auVar60._0_4_ = (int)*pfVar1;
            auVar60._4_4_ = (int)pfVar1[1];
            auVar60._8_4_ = (int)pfVar1[2];
            auVar60._12_4_ = (int)pfVar1[3];
            auVar56 = packusdw(auVar64,auVar60);
            *(undefined1 (*) [16])(param_4 + uVar37 * 2) = auVar56;
            uVar37 = uVar37 + 8;
          } while (uVar37 < uVar43);
        }
        else {
          do {
            unaff_XMM12 = lddqu(unaff_XMM12,*(undefined1 (*) [16])(lVar46 + uVar37 * 4));
            unaff_XMM13 = lddqu(unaff_XMM13,*(undefined1 (*) [16])(lVar46 + 0x10 + uVar37 * 4));
            auVar63._0_4_ = (int)unaff_XMM12._0_4_;
            auVar63._4_4_ = (int)unaff_XMM12._4_4_;
            auVar63._8_4_ = (int)unaff_XMM12._8_4_;
            auVar63._12_4_ = (int)unaff_XMM12._12_4_;
            auVar59._0_4_ = (int)unaff_XMM13._0_4_;
            auVar59._4_4_ = (int)unaff_XMM13._4_4_;
            auVar59._8_4_ = (int)unaff_XMM13._8_4_;
            auVar59._12_4_ = (int)unaff_XMM13._12_4_;
            auVar56 = packusdw(auVar63,auVar59);
            *(undefined1 (*) [16])(param_4 + uVar37 * 2) = auVar56;
            uVar37 = uVar37 + 8;
          } while (uVar37 < uVar43);
        }
        goto LAB_1400950e0;
      }
    }
LAB_140095178:
    uVar43 = 0;
LAB_1400950e0:
    if (param_5 <= uVar43) {
      return;
    }
    do {
      iVar48 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar43 * 4));
      if (0xfffe < iVar48) {
        iVar48 = 0xffff;
      }
      uVar47 = (undefined2)iVar48;
      if (iVar48 < 1) {
        uVar47 = 0;
      }
      *(undefined2 *)(param_4 + uVar43 * 2) = uVar47;
      uVar43 = uVar43 + 1;
    } while (uVar43 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar37 = param_4 & 0xf;
    if (uVar37 != 0) {
      if ((param_4 & 1) != 0) goto LAB_140095171;
      uVar37 = 0x10 - uVar37 >> 1;
    }
    if ((longlong)(uVar37 + 8) <= (longlong)param_5) {
      uVar44 = 0;
      lVar46 = param_2 * 7 + param_1;
      uVar43 = param_5 - (param_5 - uVar37 & 7);
      if (uVar37 != 0) {
        do {
          iVar48 = (int)ROUND(*(float *)(lVar46 + uVar44 * 4));
          if (0xfffe < iVar48) {
            iVar48 = 0xffff;
          }
          uVar47 = (undefined2)iVar48;
          if (iVar48 < 1) {
            uVar47 = 0;
          }
          *(undefined2 *)(param_4 + uVar44 * 2) = uVar47;
          uVar44 = uVar44 + 1;
        } while (uVar44 < uVar37);
      }
      if ((lVar46 + uVar37 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar46 + uVar37 * 4);
          auVar62._0_4_ = (int)*pfVar1;
          auVar62._4_4_ = (int)pfVar1[1];
          auVar62._8_4_ = (int)pfVar1[2];
          auVar62._12_4_ = (int)pfVar1[3];
          pfVar1 = (float *)(lVar46 + 0x10 + uVar37 * 4);
          auVar58._0_4_ = (int)*pfVar1;
          auVar58._4_4_ = (int)pfVar1[1];
          auVar58._8_4_ = (int)pfVar1[2];
          auVar58._12_4_ = (int)pfVar1[3];
          auVar56 = packusdw(auVar62,auVar58);
          *(undefined1 (*) [16])(param_4 + uVar37 * 2) = auVar56;
          uVar37 = uVar37 + 8;
        } while (uVar37 < uVar43);
      }
      else {
        do {
          unaff_XMM12 = lddqu(unaff_XMM12,*(undefined1 (*) [16])(lVar46 + uVar37 * 4));
          unaff_XMM13 = lddqu(unaff_XMM13,*(undefined1 (*) [16])(lVar46 + 0x10 + uVar37 * 4));
          auVar61._0_4_ = (int)unaff_XMM12._0_4_;
          auVar61._4_4_ = (int)unaff_XMM12._4_4_;
          auVar61._8_4_ = (int)unaff_XMM12._8_4_;
          auVar61._12_4_ = (int)unaff_XMM12._12_4_;
          auVar57._0_4_ = (int)unaff_XMM13._0_4_;
          auVar57._4_4_ = (int)unaff_XMM13._4_4_;
          auVar57._8_4_ = (int)unaff_XMM13._8_4_;
          auVar57._12_4_ = (int)unaff_XMM13._12_4_;
          auVar56 = packusdw(auVar61,auVar57);
          *(undefined1 (*) [16])(param_4 + uVar37 * 2) = auVar56;
          uVar37 = uVar37 + 8;
        } while (uVar37 < uVar43);
      }
      goto LAB_140094f60;
    }
  }
LAB_140095171:
  uVar43 = 0;
LAB_140094f60:
  if (uVar43 < param_5) {
    do {
      iVar48 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar43 * 4));
      if (0xfffe < iVar48) {
        iVar48 = 0xffff;
      }
      uVar47 = (undefined2)iVar48;
      if (iVar48 < 1) {
        uVar47 = 0;
      }
      *(undefined2 *)(param_4 + uVar43 * 2) = uVar47;
      uVar43 = uVar43 + 1;
    } while (uVar43 < param_5);
  }
  return;
}



void FUN_1401ea160(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  uint *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  undefined1 uVar54;
  int iVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  
  lVar59 = 0;
  lVar57 = (longlong)param_3;
  lVar58 = lVar57 + -3;
  if (SCARRY8(lVar57,-3) != lVar57 + -3 < 0) {
    lVar58 = lVar57 + 4;
  }
  lVar57 = (longlong)(int)lVar58 + 1;
  if (6 < lVar57) {
    lVar57 = lVar59;
  }
  lVar50 = (longlong)(int)lVar57 + 1;
  if (6 < lVar50) {
    lVar50 = lVar59;
  }
  lVar53 = (longlong)(int)lVar50 + 1;
  if (6 < lVar53) {
    lVar53 = lVar59;
  }
  lVar56 = (longlong)(int)lVar53 + 1;
  if (6 < lVar56) {
    lVar56 = lVar59;
  }
  lVar52 = (longlong)(int)lVar56 + 1;
  if (6 < lVar52) {
    lVar52 = lVar59;
  }
  lVar51 = (longlong)(int)lVar52 + 1;
  if (6 < lVar51) {
    lVar51 = lVar59;
  }
  if (0 < (longlong)param_5) {
    auVar66 = ZEXT416(param_6[1]);
    auVar67 = ZEXT416(*param_6);
    auVar68 = ZEXT416(param_6[3]);
    auVar69 = ZEXT416(param_6[2]);
    if ((longlong)param_5 < 8) {
LAB_1401ea94c:
      uVar49 = 0;
    }
    else {
      uVar47 = param_2 * 7 + param_1;
      uVar48 = uVar47 & 0x1f;
      if (uVar48 != 0) {
        if ((uVar47 & 3) != 0) goto LAB_1401ea94c;
        uVar48 = 0x20 - uVar48 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar48 + 8)) goto LAB_1401ea94c;
      lVar59 = param_2 * lVar58 + param_1;
      lVar60 = param_2 * lVar51 + param_1;
      lVar61 = param_2 * lVar57 + param_1;
      lVar62 = param_2 * lVar52 + param_1;
      uVar49 = param_5 - (param_5 - uVar48 & 7);
      lVar63 = param_2 * lVar50 + param_1;
      lVar64 = param_2 * lVar56 + param_1;
      lVar65 = param_2 * lVar53 + param_1;
      if (uVar48 != 0) {
        auVar15 = vunpcklps_avx(auVar67,auVar66);
        auVar16 = vunpcklps_avx(auVar69,auVar68);
        auVar15 = vmovlhps_avx(auVar15,auVar16);
        uVar46 = 0;
        do {
          auVar17 = vunpcklps_avx(ZEXT416((uint)(*(float *)(lVar59 + uVar46 * 4) +
                                                *(float *)(lVar60 + uVar46 * 4))),
                                  ZEXT416((uint)(*(float *)(lVar61 + uVar46 * 4) +
                                                *(float *)(lVar62 + uVar46 * 4))));
          auVar16 = vinsertps_avx(ZEXT416((uint)(*(float *)(lVar63 + uVar46 * 4) +
                                                *(float *)(lVar64 + uVar46 * 4))),
                                  ZEXT416(*(uint *)(lVar65 + uVar46 * 4)),0x10);
          auVar16 = vmovlhps_avx(auVar17,auVar16);
          auVar16 = vdpps_avx(auVar15,auVar16,0xf1);
          *(int *)(uVar47 + uVar46 * 4) = auVar16._0_4_;
          uVar46 = uVar46 + 1;
        } while (uVar46 < uVar48);
      }
      auVar15 = vshufps_avx(auVar67,auVar67,0);
      auVar16 = vshufps_avx(auVar66,auVar66,0);
      auVar17 = vshufps_avx(auVar69,auVar69,0);
      auVar14 = vshufps_avx(auVar68,auVar68,0);
      do {
        auVar7 = *(undefined1 (*) [16])(lVar59 + uVar48 * 4);
        auVar8 = *(undefined1 (*) [16])(lVar60 + uVar48 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar59 + 0x10 + uVar48 * 4);
        auVar10 = *(undefined1 (*) [16])(lVar60 + 0x10 + uVar48 * 4);
        pfVar1 = (float *)(lVar61 + uVar48 * 4);
        fVar18 = pfVar1[1];
        fVar19 = pfVar1[2];
        fVar20 = pfVar1[3];
        pfVar2 = (float *)(lVar62 + uVar48 * 4);
        fVar32 = pfVar2[1];
        fVar33 = pfVar2[2];
        fVar34 = pfVar2[3];
        lVar6 = lVar62 + 0x10 + uVar48 * 4;
        fVar35 = *(float *)(lVar6 + 0x10);
        fVar36 = *(float *)(lVar6 + 0x14);
        fVar37 = *(float *)(lVar6 + 0x18);
        fVar38 = *(float *)(lVar6 + 0x1c);
        lVar6 = lVar61 + 0x10 + uVar48 * 4;
        fVar21 = *(float *)(lVar6 + 0x10);
        fVar22 = *(float *)(lVar6 + 0x14);
        fVar23 = *(float *)(lVar6 + 0x18);
        fVar24 = *(float *)(lVar6 + 0x1c);
        auVar11 = *(undefined1 (*) [16])(lVar63 + uVar48 * 4);
        pfVar3 = (float *)(lVar64 + uVar48 * 4);
        fVar25 = pfVar3[1];
        fVar26 = pfVar3[2];
        fVar27 = pfVar3[3];
        lVar6 = lVar64 + 0x10 + uVar48 * 4;
        fVar28 = *(float *)(lVar6 + 0x10);
        fVar29 = *(float *)(lVar6 + 0x14);
        fVar30 = *(float *)(lVar6 + 0x18);
        fVar31 = *(float *)(lVar6 + 0x1c);
        auVar12 = *(undefined1 (*) [16])(lVar63 + 0x10 + uVar48 * 4);
        pfVar4 = (float *)(lVar65 + uVar48 * 4);
        fVar39 = pfVar4[1];
        fVar40 = pfVar4[2];
        fVar41 = pfVar4[3];
        lVar6 = lVar65 + 0x10 + uVar48 * 4;
        fVar42 = *(float *)(lVar6 + 0x10);
        fVar43 = *(float *)(lVar6 + 0x14);
        fVar44 = *(float *)(lVar6 + 0x18);
        fVar45 = *(float *)(lVar6 + 0x1c);
        pfVar5 = (float *)(uVar47 + uVar48 * 4);
        *pfVar5 = auVar15._0_4_ * (auVar7._0_4_ + auVar8._0_4_) +
                  auVar16._0_4_ * (*pfVar1 + *pfVar2) + auVar17._0_4_ * (auVar11._0_4_ + *pfVar3) +
                  auVar14._0_4_ * *pfVar4;
        pfVar5[1] = auVar15._4_4_ * (auVar7._4_4_ + auVar8._4_4_) +
                    auVar16._4_4_ * (fVar18 + fVar32) + auVar17._4_4_ * (auVar11._4_4_ + fVar25) +
                    auVar14._4_4_ * fVar39;
        pfVar5[2] = auVar15._8_4_ * (auVar7._8_4_ + auVar8._8_4_) +
                    auVar16._8_4_ * (fVar19 + fVar33) + auVar17._8_4_ * (auVar11._8_4_ + fVar26) +
                    auVar14._8_4_ * fVar40;
        pfVar5[3] = auVar15._12_4_ * (auVar7._12_4_ + auVar8._12_4_) +
                    auVar16._12_4_ * (fVar20 + fVar34) + auVar17._12_4_ * (auVar11._12_4_ + fVar27)
                    + auVar14._12_4_ * fVar41;
        pfVar5[4] = auVar15._0_4_ * (auVar9._0_4_ + auVar10._0_4_) +
                    auVar16._0_4_ * (fVar21 + fVar35) + auVar17._0_4_ * (auVar12._0_4_ + fVar28) +
                    auVar14._0_4_ * fVar42;
        pfVar5[5] = auVar15._4_4_ * (auVar9._4_4_ + auVar10._4_4_) +
                    auVar16._4_4_ * (fVar22 + fVar36) + auVar17._4_4_ * (auVar12._4_4_ + fVar29) +
                    auVar14._4_4_ * fVar43;
        pfVar5[6] = auVar15._8_4_ * (auVar9._8_4_ + auVar10._8_4_) +
                    auVar16._8_4_ * (fVar23 + fVar37) + auVar17._8_4_ * (auVar12._8_4_ + fVar30) +
                    auVar14._8_4_ * fVar44;
        pfVar5[7] = fVar24 + fVar38 + 0.0 + fVar31 + fVar45;
        uVar48 = uVar48 + 8;
      } while (uVar48 < uVar49);
    }
    if (uVar49 < param_5) {
      auVar66 = vunpcklps_avx(auVar67,auVar66);
      auVar67 = vunpcklps_avx(auVar69,auVar68);
      auVar66 = vmovlhps_avx(auVar66,auVar67);
      do {
        auVar68 = vunpcklps_avx(ZEXT416((uint)(*(float *)(lVar58 * param_2 + param_1 + uVar49 * 4) +
                                              *(float *)(lVar51 * param_2 + param_1 + uVar49 * 4))),
                                ZEXT416((uint)(*(float *)(lVar57 * param_2 + param_1 + uVar49 * 4) +
                                              *(float *)(lVar52 * param_2 + param_1 + uVar49 * 4))))
        ;
        auVar67 = vinsertps_avx(ZEXT416((uint)(*(float *)(lVar50 * param_2 + param_1 + uVar49 * 4) +
                                              *(float *)(lVar56 * param_2 + param_1 + uVar49 * 4))),
                                ZEXT416(*(uint *)(lVar53 * param_2 + param_1 + uVar49 * 4)),0x10);
        auVar67 = vmovlhps_avx(auVar68,auVar67);
        auVar67 = vdpps_avx(auVar66,auVar67,0xf1);
        *(int *)(param_2 * 7 + param_1 + uVar49 * 4) = auVar67._0_4_;
        uVar49 = uVar49 + 1;
      } while (uVar49 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar48 = param_2 * 7 + param_1;
      uVar47 = uVar48 & 0xf;
      if (uVar47 != 0) {
        if ((uVar48 & 3) != 0) goto LAB_1401ea95a;
        uVar47 = 0x10 - uVar47 >> 2;
      }
      if ((longlong)(uVar47 + 8) <= (longlong)param_5) {
        uVar46 = 0;
        uVar49 = param_5 - (param_5 - uVar47 & 7);
        if (uVar47 != 0) {
          do {
            iVar55 = (int)ROUND(*(float *)(uVar48 + uVar46 * 4));
            if (0xfe < iVar55) {
              iVar55 = 0xff;
            }
            uVar54 = (undefined1)iVar55;
            if (iVar55 < 1) {
              uVar54 = 0;
            }
            *(undefined1 *)(uVar46 + param_4) = uVar54;
            uVar46 = uVar46 + 1;
          } while (uVar46 < uVar47);
        }
        do {
          auVar13 = vcvtps2dq_avx(*(undefined1 (*) [32])(uVar48 + uVar47 * 4));
          auVar66 = vpackssdw_avx(auVar13._0_16_,auVar13._16_16_);
          auVar66 = vpackuswb_avx(auVar66,auVar66);
          *(longlong *)(uVar47 + param_4) = auVar66._0_8_;
          uVar47 = uVar47 + 8;
        } while (uVar47 < uVar49);
        goto LAB_1401ea8c3;
      }
    }
LAB_1401ea95a:
    uVar49 = 0;
LAB_1401ea8c3:
    if (param_5 <= uVar49) {
      return;
    }
    do {
      iVar55 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar49 * 4));
      if (0xfe < iVar55) {
        iVar55 = 0xff;
      }
      uVar54 = (undefined1)iVar55;
      if (iVar55 < 1) {
        uVar54 = 0;
      }
      *(undefined1 *)(uVar49 + param_4) = uVar54;
      uVar49 = uVar49 + 1;
    } while (uVar49 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar48 = param_2 * 7 + param_1;
    uVar47 = uVar48 & 0xf;
    if (uVar47 != 0) {
      if ((uVar48 & 3) != 0) goto LAB_1401ea953;
      uVar47 = 0x10 - uVar47 >> 2;
    }
    if ((longlong)(uVar47 + 8) <= (longlong)param_5) {
      uVar46 = 0;
      uVar49 = param_5 - (param_5 - uVar47 & 7);
      if (uVar47 != 0) {
        do {
          iVar55 = (int)ROUND(*(float *)(uVar48 + uVar46 * 4));
          if (0xfe < iVar55) {
            iVar55 = 0xff;
          }
          uVar54 = (undefined1)iVar55;
          if (iVar55 < 1) {
            uVar54 = 0;
          }
          *(undefined1 *)(uVar46 + param_4) = uVar54;
          uVar46 = uVar46 + 1;
        } while (uVar46 < uVar47);
      }
      do {
        auVar13 = vcvtps2dq_avx(*(undefined1 (*) [32])(uVar48 + uVar47 * 4));
        auVar66 = vpackssdw_avx(auVar13._0_16_,auVar13._16_16_);
        auVar66 = vpackuswb_avx(auVar66,auVar66);
        *(longlong *)(uVar47 + param_4) = auVar66._0_8_;
        uVar47 = uVar47 + 8;
      } while (uVar47 < uVar49);
      goto LAB_1401ea783;
    }
  }
LAB_1401ea953:
  uVar49 = 0;
LAB_1401ea783:
  if (uVar49 < param_5) {
    do {
      iVar55 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar49 * 4));
      if (0xfe < iVar55) {
        iVar55 = 0xff;
      }
      uVar54 = (undefined1)iVar55;
      if (iVar55 < 1) {
        uVar54 = 0;
      }
      *(undefined1 *)(uVar49 + param_4) = uVar54;
      uVar49 = uVar49 + 1;
    } while (uVar49 < param_5);
  }
  return;
}


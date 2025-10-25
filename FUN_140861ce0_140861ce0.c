
void FUN_140861ce0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  undefined2 uVar53;
  int iVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  
  lVar58 = 0;
  lVar56 = (longlong)param_3;
  lVar57 = lVar56 + -3;
  if (SCARRY8(lVar56,-3) != lVar56 + -3 < 0) {
    lVar57 = lVar56 + 4;
  }
  lVar56 = (longlong)(int)lVar57 + 1;
  if (6 < lVar56) {
    lVar56 = lVar58;
  }
  lVar49 = (longlong)(int)lVar56 + 1;
  if (6 < lVar49) {
    lVar49 = lVar58;
  }
  lVar52 = (longlong)(int)lVar49 + 1;
  if (6 < lVar52) {
    lVar52 = lVar58;
  }
  lVar55 = (longlong)(int)lVar52 + 1;
  if (6 < lVar55) {
    lVar55 = lVar58;
  }
  lVar51 = (longlong)(int)lVar55 + 1;
  if (6 < lVar51) {
    lVar51 = lVar58;
  }
  lVar50 = (longlong)(int)lVar51 + 1;
  if (6 < lVar50) {
    lVar50 = lVar58;
  }
  if (0 < (longlong)param_5) {
    auVar65 = ZEXT416(param_6[1]);
    auVar66 = ZEXT416(*param_6);
    auVar67 = ZEXT416(param_6[3]);
    auVar68 = ZEXT416(param_6[2]);
    if ((longlong)param_5 < 8) {
LAB_1408624b0:
      uVar48 = 0;
    }
    else {
      uVar46 = param_2 * 7 + param_1;
      uVar47 = uVar46 & 0x1f;
      if (uVar47 != 0) {
        if ((uVar46 & 3) != 0) goto LAB_1408624b0;
        uVar47 = 0x20 - uVar47 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar47 + 8)) goto LAB_1408624b0;
      lVar58 = param_2 * lVar57 + param_1;
      lVar59 = param_2 * lVar50 + param_1;
      lVar60 = param_2 * lVar56 + param_1;
      lVar61 = param_2 * lVar51 + param_1;
      uVar48 = param_5 - (param_5 - uVar47 & 7);
      lVar62 = param_2 * lVar49 + param_1;
      lVar63 = param_2 * lVar55 + param_1;
      lVar64 = param_2 * lVar52 + param_1;
      if (uVar47 != 0) {
        auVar14 = vunpcklps_avx(auVar66,auVar65);
        auVar15 = vunpcklps_avx(auVar68,auVar67);
        auVar14 = vmovlhps_avx(auVar14,auVar15);
        uVar45 = 0;
        do {
          auVar16 = vunpcklps_avx(ZEXT416((uint)(*(float *)(lVar58 + uVar45 * 4) +
                                                *(float *)(lVar59 + uVar45 * 4))),
                                  ZEXT416((uint)(*(float *)(lVar60 + uVar45 * 4) +
                                                *(float *)(lVar61 + uVar45 * 4))));
          auVar15 = vinsertps_avx(ZEXT416((uint)(*(float *)(lVar62 + uVar45 * 4) +
                                                *(float *)(lVar63 + uVar45 * 4))),
                                  ZEXT416(*(uint *)(lVar64 + uVar45 * 4)),0x10);
          auVar15 = vmovlhps_avx(auVar16,auVar15);
          auVar15 = vdpps_avx(auVar14,auVar15,0xf1);
          *(int *)(uVar46 + uVar45 * 4) = auVar15._0_4_;
          uVar45 = uVar45 + 1;
        } while (uVar45 < uVar47);
      }
      auVar14 = vshufps_avx(auVar66,auVar66,0);
      auVar15 = vshufps_avx(auVar65,auVar65,0);
      auVar16 = vshufps_avx(auVar68,auVar68,0);
      auVar13 = vshufps_avx(auVar67,auVar67,0);
      do {
        auVar7 = *(undefined1 (*) [16])(lVar58 + uVar47 * 4);
        auVar8 = *(undefined1 (*) [16])(lVar59 + uVar47 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar58 + 0x10 + uVar47 * 4);
        auVar10 = *(undefined1 (*) [16])(lVar59 + 0x10 + uVar47 * 4);
        pfVar1 = (float *)(lVar60 + uVar47 * 4);
        fVar17 = pfVar1[1];
        fVar18 = pfVar1[2];
        fVar19 = pfVar1[3];
        pfVar2 = (float *)(lVar61 + uVar47 * 4);
        fVar31 = pfVar2[1];
        fVar32 = pfVar2[2];
        fVar33 = pfVar2[3];
        lVar6 = lVar61 + 0x10 + uVar47 * 4;
        fVar34 = *(float *)(lVar6 + 0x10);
        fVar35 = *(float *)(lVar6 + 0x14);
        fVar36 = *(float *)(lVar6 + 0x18);
        fVar37 = *(float *)(lVar6 + 0x1c);
        lVar6 = lVar60 + 0x10 + uVar47 * 4;
        fVar20 = *(float *)(lVar6 + 0x10);
        fVar21 = *(float *)(lVar6 + 0x14);
        fVar22 = *(float *)(lVar6 + 0x18);
        fVar23 = *(float *)(lVar6 + 0x1c);
        auVar11 = *(undefined1 (*) [16])(lVar62 + uVar47 * 4);
        pfVar3 = (float *)(lVar63 + uVar47 * 4);
        fVar24 = pfVar3[1];
        fVar25 = pfVar3[2];
        fVar26 = pfVar3[3];
        lVar6 = lVar63 + 0x10 + uVar47 * 4;
        fVar27 = *(float *)(lVar6 + 0x10);
        fVar28 = *(float *)(lVar6 + 0x14);
        fVar29 = *(float *)(lVar6 + 0x18);
        fVar30 = *(float *)(lVar6 + 0x1c);
        auVar12 = *(undefined1 (*) [16])(lVar62 + 0x10 + uVar47 * 4);
        pfVar4 = (float *)(lVar64 + uVar47 * 4);
        fVar38 = pfVar4[1];
        fVar39 = pfVar4[2];
        fVar40 = pfVar4[3];
        lVar6 = lVar64 + 0x10 + uVar47 * 4;
        fVar41 = *(float *)(lVar6 + 0x10);
        fVar42 = *(float *)(lVar6 + 0x14);
        fVar43 = *(float *)(lVar6 + 0x18);
        fVar44 = *(float *)(lVar6 + 0x1c);
        pfVar5 = (float *)(uVar46 + uVar47 * 4);
        *pfVar5 = auVar14._0_4_ * (auVar7._0_4_ + auVar8._0_4_) +
                  auVar15._0_4_ * (*pfVar1 + *pfVar2) + auVar16._0_4_ * (auVar11._0_4_ + *pfVar3) +
                  auVar13._0_4_ * *pfVar4;
        pfVar5[1] = auVar14._4_4_ * (auVar7._4_4_ + auVar8._4_4_) +
                    auVar15._4_4_ * (fVar17 + fVar31) + auVar16._4_4_ * (auVar11._4_4_ + fVar24) +
                    auVar13._4_4_ * fVar38;
        pfVar5[2] = auVar14._8_4_ * (auVar7._8_4_ + auVar8._8_4_) +
                    auVar15._8_4_ * (fVar18 + fVar32) + auVar16._8_4_ * (auVar11._8_4_ + fVar25) +
                    auVar13._8_4_ * fVar39;
        pfVar5[3] = auVar14._12_4_ * (auVar7._12_4_ + auVar8._12_4_) +
                    auVar15._12_4_ * (fVar19 + fVar33) + auVar16._12_4_ * (auVar11._12_4_ + fVar26)
                    + auVar13._12_4_ * fVar40;
        pfVar5[4] = auVar14._0_4_ * (auVar9._0_4_ + auVar10._0_4_) +
                    auVar15._0_4_ * (fVar20 + fVar34) + auVar16._0_4_ * (auVar12._0_4_ + fVar27) +
                    auVar13._0_4_ * fVar41;
        pfVar5[5] = auVar14._4_4_ * (auVar9._4_4_ + auVar10._4_4_) +
                    auVar15._4_4_ * (fVar21 + fVar35) + auVar16._4_4_ * (auVar12._4_4_ + fVar28) +
                    auVar13._4_4_ * fVar42;
        pfVar5[6] = auVar14._8_4_ * (auVar9._8_4_ + auVar10._8_4_) +
                    auVar15._8_4_ * (fVar22 + fVar36) + auVar16._8_4_ * (auVar12._8_4_ + fVar29) +
                    auVar13._8_4_ * fVar43;
        pfVar5[7] = fVar23 + fVar37 + 0.0 + fVar30 + fVar44;
        uVar47 = uVar47 + 8;
      } while (uVar47 < uVar48);
    }
    if (uVar48 < param_5) {
      auVar65 = vunpcklps_avx(auVar66,auVar65);
      auVar66 = vunpcklps_avx(auVar68,auVar67);
      auVar65 = vmovlhps_avx(auVar65,auVar66);
      do {
        auVar67 = vunpcklps_avx(ZEXT416((uint)(*(float *)(lVar57 * param_2 + param_1 + uVar48 * 4) +
                                              *(float *)(lVar50 * param_2 + param_1 + uVar48 * 4))),
                                ZEXT416((uint)(*(float *)(lVar56 * param_2 + param_1 + uVar48 * 4) +
                                              *(float *)(lVar51 * param_2 + param_1 + uVar48 * 4))))
        ;
        auVar66 = vinsertps_avx(ZEXT416((uint)(*(float *)(lVar49 * param_2 + param_1 + uVar48 * 4) +
                                              *(float *)(lVar55 * param_2 + param_1 + uVar48 * 4))),
                                ZEXT416(*(uint *)(lVar52 * param_2 + param_1 + uVar48 * 4)),0x10);
        auVar66 = vmovlhps_avx(auVar67,auVar66);
        auVar66 = vdpps_avx(auVar65,auVar66,0xf1);
        *(int *)(param_2 * 7 + param_1 + uVar48 * 4) = auVar66._0_4_;
        uVar48 = uVar48 + 1;
      } while (uVar48 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar47 = param_2 * 7 + param_1;
      uVar46 = uVar47 & 0xf;
      if (uVar46 != 0) {
        if ((uVar47 & 3) != 0) goto LAB_1408624be;
        uVar46 = 0x10 - uVar46 >> 2;
      }
      if ((longlong)(uVar46 + 4) <= (longlong)param_5) {
        uVar45 = 0;
        uVar48 = param_5 - (param_5 - uVar46 & 3);
        if (uVar46 != 0) {
          do {
            iVar54 = (int)ROUND(*(float *)(uVar47 + uVar45 * 4));
            if (0x7ffe < iVar54) {
              iVar54 = 0x7fff;
            }
            uVar53 = (undefined2)iVar54;
            if (iVar54 < -0x7fff) {
              uVar53 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar45 * 2) = uVar53;
            uVar45 = uVar45 + 1;
          } while (uVar45 < uVar46);
        }
        do {
          auVar65 = vcvtps2dq_avx(*(undefined1 (*) [16])(uVar47 + uVar46 * 4));
          auVar65 = vpackssdw_avx(auVar65,auVar65);
          *(longlong *)(param_4 + uVar46 * 2) = auVar65._0_8_;
          uVar46 = uVar46 + 4;
        } while (uVar46 < uVar48);
        goto LAB_14086243a;
      }
    }
LAB_1408624be:
    uVar48 = 0;
LAB_14086243a:
    if (param_5 <= uVar48) {
      return;
    }
    do {
      iVar54 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar48 * 4));
      if (0x7ffe < iVar54) {
        iVar54 = 0x7fff;
      }
      uVar53 = (undefined2)iVar54;
      if (iVar54 < -0x7fff) {
        uVar53 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar48 * 2) = uVar53;
      uVar48 = uVar48 + 1;
    } while (uVar48 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar47 = param_2 * 7 + param_1;
    uVar46 = uVar47 & 0xf;
    if (uVar46 != 0) {
      if ((uVar47 & 3) != 0) goto LAB_1408624b7;
      uVar46 = 0x10 - uVar46 >> 2;
    }
    if ((longlong)(uVar46 + 8) <= (longlong)param_5) {
      uVar45 = 0;
      uVar48 = param_5 - (param_5 - uVar46 & 7);
      if (uVar46 != 0) {
        do {
          iVar54 = (int)ROUND(*(float *)(uVar47 + uVar45 * 4));
          if (0x7ffe < iVar54) {
            iVar54 = 0x7fff;
          }
          uVar53 = (undefined2)iVar54;
          if (iVar54 < -0x7fff) {
            uVar53 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar45 * 2) = uVar53;
          uVar45 = uVar45 + 1;
        } while (uVar45 < uVar46);
      }
      do {
        auVar65 = vcvtps2dq_avx(*(undefined1 (*) [16])(uVar47 + uVar46 * 4));
        auVar65 = vpackssdw_avx(auVar65,auVar65);
        *(longlong *)(param_4 + uVar46 * 2) = auVar65._0_8_;
        auVar65 = vcvtps2dq_avx(*(undefined1 (*) [16])(uVar47 + 0x10 + uVar46 * 4));
        auVar65 = vpackssdw_avx(auVar65,auVar65);
        *(longlong *)(param_4 + 8 + uVar46 * 2) = auVar65._0_8_;
        uVar46 = uVar46 + 8;
      } while (uVar46 < uVar48);
      goto LAB_14086230c;
    }
  }
LAB_1408624b7:
  uVar48 = 0;
LAB_14086230c:
  if (uVar48 < param_5) {
    do {
      iVar54 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar48 * 4));
      if (0x7ffe < iVar54) {
        iVar54 = 0x7fff;
      }
      uVar53 = (undefined2)iVar54;
      if (iVar54 < -0x7fff) {
        uVar53 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar48 * 2) = uVar53;
      uVar48 = uVar48 + 1;
    } while (uVar48 < param_5);
  }
  return;
}


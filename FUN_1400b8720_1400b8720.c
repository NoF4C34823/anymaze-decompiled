
void FUN_1400b8720(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  longlong lVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  undefined2 uVar52;
  int iVar53;
  ulonglong uVar54;
  longlong lVar55;
  ulonglong uVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  
  lVar55 = (longlong)param_3;
  lVar50 = lVar55 + -2;
  if (SCARRY8(lVar55,-2) != lVar55 + -2 < 0) {
    lVar50 = lVar55 + 3;
  }
  lVar55 = (longlong)(int)lVar50 + 1;
  fVar8 = *param_6;
  fVar9 = param_6[1];
  fVar10 = param_6[2];
  if (4 < lVar55) {
    lVar55 = 0;
  }
  lVar51 = (longlong)(int)lVar55 + 1;
  if (4 < lVar51) {
    lVar51 = 0;
  }
  lVar46 = (longlong)(int)lVar51 + 1;
  if (4 < lVar46) {
    lVar46 = 0;
  }
  lVar47 = (longlong)(int)lVar46 + 1;
  if (4 < lVar47) {
    lVar47 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_1400b8f10:
      uVar56 = 0;
      if (param_5 == 0) goto LAB_1400b8c5e;
      uVar54 = 0;
      uVar49 = param_5;
    }
    else {
      uVar48 = param_2 * 5 + param_1;
      uVar49 = uVar48 & 0x1f;
      if (uVar49 != 0) {
        if ((uVar48 & 3) != 0) goto LAB_1400b8f10;
        uVar49 = 0x20 - uVar49 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar49 + 0x10)) goto LAB_1400b8f10;
      lVar57 = param_2 * lVar50 + param_1;
      lVar43 = param_2 * lVar55 + param_1;
      lVar58 = param_2 * lVar47 + param_1;
      lVar59 = param_2 * lVar46 + param_1;
      lVar44 = param_2 * lVar51 + param_1;
      uVar56 = param_5 - (param_5 - uVar49 & 0xf);
      if (uVar49 != 0) {
        uVar54 = 0;
        do {
          *(float *)(uVar48 + uVar54 * 4) =
               fVar8 * (*(float *)(lVar57 + uVar54 * 4) + *(float *)(lVar58 + uVar54 * 4)) +
               fVar9 * (*(float *)(lVar43 + uVar54 * 4) + *(float *)(lVar59 + uVar54 * 4)) +
               fVar10 * *(float *)(lVar44 + uVar54 * 4);
          uVar54 = uVar54 + 1;
        } while (uVar54 < uVar49);
      }
      auVar19 = vshufps_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),0);
      auVar20 = vshufps_avx(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),0);
      auVar21 = vshufps_avx(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10),0);
      do {
        auVar11 = *(undefined1 (*) [16])(lVar57 + uVar49 * 4);
        auVar12 = *(undefined1 (*) [16])(lVar58 + uVar49 * 4);
        auVar13 = *(undefined1 (*) [16])(lVar57 + 0x10 + uVar49 * 4);
        auVar14 = *(undefined1 (*) [16])(lVar58 + 0x10 + uVar49 * 4);
        fVar62 = auVar19._0_4_;
        fVar63 = auVar19._4_4_;
        fVar64 = auVar19._8_4_;
        fVar65 = auVar19._12_4_;
        auVar15 = *(undefined1 (*) [16])(lVar43 + uVar49 * 4);
        auVar16 = *(undefined1 (*) [16])(lVar43 + 0x10 + uVar49 * 4);
        pfVar1 = (float *)(lVar59 + uVar49 * 4);
        fVar22 = pfVar1[1];
        fVar23 = pfVar1[2];
        fVar24 = pfVar1[3];
        lVar5 = lVar59 + 0x10 + uVar49 * 4;
        fVar25 = *(float *)(lVar5 + 0x10);
        fVar26 = *(float *)(lVar5 + 0x14);
        fVar27 = *(float *)(lVar5 + 0x18);
        fVar28 = *(float *)(lVar5 + 0x1c);
        fVar66 = auVar20._0_4_;
        fVar67 = auVar20._4_4_;
        fVar68 = auVar20._8_4_;
        fVar69 = auVar20._12_4_;
        auVar17 = *(undefined1 (*) [16])(lVar44 + uVar49 * 4);
        auVar18 = *(undefined1 (*) [16])(lVar44 + 0x10 + uVar49 * 4);
        fVar70 = auVar21._0_4_;
        fVar71 = auVar21._4_4_;
        fVar72 = auVar21._8_4_;
        fVar73 = auVar21._12_4_;
        pfVar2 = (float *)(uVar48 + uVar49 * 4);
        *pfVar2 = fVar62 * (auVar11._0_4_ + auVar12._0_4_) + fVar66 * (auVar15._0_4_ + *pfVar1) +
                  fVar70 * auVar17._0_4_;
        pfVar2[1] = fVar63 * (auVar11._4_4_ + auVar12._4_4_) + fVar67 * (auVar15._4_4_ + fVar22) +
                    fVar71 * auVar17._4_4_;
        pfVar2[2] = fVar64 * (auVar11._8_4_ + auVar12._8_4_) + fVar68 * (auVar15._8_4_ + fVar23) +
                    fVar72 * auVar17._8_4_;
        pfVar2[3] = fVar65 * (auVar11._12_4_ + auVar12._12_4_) + fVar69 * (auVar15._12_4_ + fVar24)
                    + fVar73 * auVar17._12_4_;
        pfVar2[4] = fVar62 * (auVar13._0_4_ + auVar14._0_4_) + fVar66 * (auVar16._0_4_ + fVar25) +
                    fVar70 * auVar18._0_4_;
        pfVar2[5] = fVar63 * (auVar13._4_4_ + auVar14._4_4_) + fVar67 * (auVar16._4_4_ + fVar26) +
                    fVar71 * auVar18._4_4_;
        pfVar2[6] = fVar64 * (auVar13._8_4_ + auVar14._8_4_) + fVar68 * (auVar16._8_4_ + fVar27) +
                    fVar72 * auVar18._8_4_;
        pfVar2[7] = fVar28 + 0.0 + 0.0;
        auVar11 = *(undefined1 (*) [16])(lVar57 + 0x20 + uVar49 * 4);
        pfVar1 = (float *)(lVar58 + 0x20 + uVar49 * 4);
        fVar36 = pfVar1[1];
        fVar37 = pfVar1[2];
        fVar38 = pfVar1[3];
        lVar5 = lVar58 + 0x30 + uVar49 * 4;
        fVar39 = *(float *)(lVar5 + 0x10);
        fVar40 = *(float *)(lVar5 + 0x14);
        fVar41 = *(float *)(lVar5 + 0x18);
        fVar42 = *(float *)(lVar5 + 0x1c);
        auVar12 = *(undefined1 (*) [16])(lVar57 + 0x30 + uVar49 * 4);
        auVar13 = *(undefined1 (*) [16])(lVar43 + 0x20 + uVar49 * 4);
        auVar14 = *(undefined1 (*) [16])(lVar43 + 0x30 + uVar49 * 4);
        pfVar2 = (float *)(lVar59 + 0x20 + uVar49 * 4);
        fVar22 = pfVar2[1];
        fVar23 = pfVar2[2];
        fVar24 = pfVar2[3];
        lVar5 = lVar59 + 0x30 + uVar49 * 4;
        fVar25 = *(float *)(lVar5 + 0x10);
        fVar26 = *(float *)(lVar5 + 0x14);
        fVar27 = *(float *)(lVar5 + 0x18);
        fVar28 = *(float *)(lVar5 + 0x1c);
        pfVar6 = (float *)(lVar44 + 0x20 + uVar49 * 4);
        fVar29 = pfVar6[1];
        fVar30 = pfVar6[2];
        fVar31 = pfVar6[3];
        lVar5 = lVar44 + 0x30 + uVar49 * 4;
        fVar32 = *(float *)(lVar5 + 0x10);
        fVar33 = *(float *)(lVar5 + 0x14);
        fVar34 = *(float *)(lVar5 + 0x18);
        fVar35 = *(float *)(lVar5 + 0x1c);
        pfVar7 = (float *)(uVar48 + 0x20 + uVar49 * 4);
        *pfVar7 = fVar62 * (auVar11._0_4_ + *pfVar1) + fVar66 * (auVar13._0_4_ + *pfVar2) +
                  fVar70 * *pfVar6;
        pfVar7[1] = fVar63 * (auVar11._4_4_ + fVar36) + fVar67 * (auVar13._4_4_ + fVar22) +
                    fVar71 * fVar29;
        pfVar7[2] = fVar64 * (auVar11._8_4_ + fVar37) + fVar68 * (auVar13._8_4_ + fVar23) +
                    fVar72 * fVar30;
        pfVar7[3] = fVar65 * (auVar11._12_4_ + fVar38) + fVar69 * (auVar13._12_4_ + fVar24) +
                    fVar73 * fVar31;
        pfVar7[4] = fVar62 * (auVar12._0_4_ + fVar39) + fVar66 * (auVar14._0_4_ + fVar25) +
                    fVar70 * fVar32;
        pfVar7[5] = fVar63 * (auVar12._4_4_ + fVar40) + fVar67 * (auVar14._4_4_ + fVar26) +
                    fVar71 * fVar33;
        pfVar7[6] = fVar64 * (auVar12._8_4_ + fVar41) + fVar68 * (auVar14._8_4_ + fVar27) +
                    fVar72 * fVar34;
        pfVar7[7] = fVar42 + fVar28 + fVar35;
        uVar49 = uVar49 + 0x10;
      } while (uVar49 < uVar56);
      if (param_5 < uVar56 + 1) goto LAB_1400b8c5e;
      uVar49 = param_5 - uVar56;
      if ((longlong)uVar49 < 4) {
        uVar54 = 0;
      }
      else {
        uVar54 = uVar49 & 0xfffffffffffffffc;
        uVar45 = 0;
        do {
          pfVar1 = (float *)(lVar57 + uVar56 * 4 + uVar45 * 4);
          fVar22 = pfVar1[1];
          fVar23 = pfVar1[2];
          fVar24 = pfVar1[3];
          pfVar2 = (float *)(lVar58 + uVar56 * 4 + uVar45 * 4);
          fVar25 = pfVar2[1];
          fVar26 = pfVar2[2];
          fVar27 = pfVar2[3];
          pfVar6 = (float *)(lVar43 + uVar56 * 4 + uVar45 * 4);
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar30 = pfVar6[3];
          pfVar7 = (float *)(lVar59 + uVar56 * 4 + uVar45 * 4);
          fVar31 = pfVar7[1];
          fVar32 = pfVar7[2];
          fVar33 = pfVar7[3];
          pfVar3 = (float *)(lVar44 + uVar56 * 4 + uVar45 * 4);
          fVar34 = pfVar3[1];
          fVar35 = pfVar3[2];
          fVar36 = pfVar3[3];
          pfVar4 = (float *)(uVar48 + uVar56 * 4 + uVar45 * 4);
          *pfVar4 = fVar62 * (*pfVar1 + *pfVar2) + fVar66 * (*pfVar6 + *pfVar7) + fVar70 * *pfVar3;
          pfVar4[1] = fVar63 * (fVar22 + fVar25) + fVar67 * (fVar28 + fVar31) + fVar71 * fVar34;
          pfVar4[2] = fVar64 * (fVar23 + fVar26) + fVar68 * (fVar29 + fVar32) + fVar72 * fVar35;
          pfVar4[3] = fVar65 * (fVar24 + fVar27) + fVar69 * (fVar30 + fVar33) + fVar73 * fVar36;
          uVar45 = uVar45 + 4;
        } while (uVar45 < uVar54);
      }
    }
    if (uVar54 < uVar49) {
      do {
        *(float *)(param_2 * 5 + param_1 + uVar56 * 4 + uVar54 * 4) =
             fVar8 * (*(float *)(lVar50 * param_2 + param_1 + uVar56 * 4 + uVar54 * 4) +
                     *(float *)(lVar47 * param_2 + param_1 + uVar56 * 4 + uVar54 * 4)) +
             fVar9 * (*(float *)(lVar55 * param_2 + param_1 + uVar56 * 4 + uVar54 * 4) +
                     *(float *)(lVar46 * param_2 + param_1 + uVar56 * 4 + uVar54 * 4)) +
             fVar10 * *(float *)(lVar51 * param_2 + param_1 + uVar56 * 4 + uVar54 * 4);
        uVar54 = uVar54 + 1;
      } while (uVar54 < uVar49);
    }
  }
LAB_1400b8c5e:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar48 = param_4 & 0x1f;
      if (uVar48 != 0) {
        if ((param_4 & 1) != 0) goto LAB_1400b8f2f;
        uVar48 = 0x20 - uVar48 >> 1;
      }
      if ((longlong)(uVar48 + 8) <= (longlong)param_5) {
        lVar50 = param_2 * 5 + param_1;
        uVar56 = 0;
        uVar49 = param_5 - (param_5 - uVar48 & 7);
        if (uVar48 != 0) {
          do {
            iVar53 = (int)ROUND(*(float *)(lVar50 + uVar56 * 4));
            if (0xfffe < iVar53) {
              iVar53 = 0xffff;
            }
            uVar52 = (undefined2)iVar53;
            if (iVar53 < 1) {
              uVar52 = 0;
            }
            *(undefined2 *)(param_4 + uVar56 * 2) = uVar52;
            uVar56 = uVar56 + 1;
          } while (uVar56 < uVar48);
        }
        do {
          auVar61._16_16_ = *(undefined1 (*) [16])(lVar50 + 0x10 + uVar48 * 4);
          auVar61._0_16_ = *(undefined1 (*) [16])(lVar50 + uVar48 * 4);
          auVar61 = vcvtps2dq_avx(auVar61);
          auVar19 = vpackusdw_avx(auVar61._0_16_,auVar61._16_16_);
          auVar19 = vmovntdq_avx(auVar19);
          *(undefined1 (*) [16])(param_4 + uVar48 * 2) = auVar19;
          uVar48 = uVar48 + 8;
        } while (uVar48 < uVar49);
        goto LAB_1400b8e8b;
      }
    }
LAB_1400b8f2f:
    uVar49 = 0;
LAB_1400b8e8b:
    if (param_5 <= uVar49) {
      return;
    }
    do {
      iVar53 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar49 * 4));
      if (0xfffe < iVar53) {
        iVar53 = 0xffff;
      }
      uVar52 = (undefined2)iVar53;
      if (iVar53 < 1) {
        uVar52 = 0;
      }
      *(undefined2 *)(param_4 + uVar49 * 2) = uVar52;
      uVar49 = uVar49 + 1;
    } while (uVar49 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar48 = param_4 & 0xf;
    if (uVar48 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1400b8f28;
      uVar48 = 0x10 - uVar48 >> 1;
    }
    if ((longlong)(uVar48 + 8) <= (longlong)param_5) {
      lVar50 = param_2 * 5 + param_1;
      uVar56 = 0;
      uVar49 = param_5 - (param_5 - uVar48 & 7);
      if (uVar48 != 0) {
        do {
          iVar53 = (int)ROUND(*(float *)(lVar50 + uVar56 * 4));
          if (0xfffe < iVar53) {
            iVar53 = 0xffff;
          }
          uVar52 = (undefined2)iVar53;
          if (iVar53 < 1) {
            uVar52 = 0;
          }
          *(undefined2 *)(param_4 + uVar56 * 2) = uVar52;
          uVar56 = uVar56 + 1;
        } while (uVar56 < uVar48);
      }
      do {
        auVar60._16_16_ = *(undefined1 (*) [16])(lVar50 + 0x10 + uVar48 * 4);
        auVar60._0_16_ = *(undefined1 (*) [16])(lVar50 + uVar48 * 4);
        auVar61 = vcvtps2dq_avx(auVar60);
        auVar19 = vpackusdw_avx(auVar61._0_16_,auVar61._16_16_);
        *(undefined1 (*) [16])(param_4 + uVar48 * 2) = auVar19;
        uVar48 = uVar48 + 8;
      } while (uVar48 < uVar49);
      goto LAB_1400b8d4b;
    }
  }
LAB_1400b8f28:
  uVar49 = 0;
LAB_1400b8d4b:
  if (uVar49 < param_5) {
    do {
      iVar53 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar49 * 4));
      if (0xfffe < iVar53) {
        iVar53 = 0xffff;
      }
      uVar52 = (undefined2)iVar53;
      if (iVar53 < 1) {
        uVar52 = 0;
      }
      *(undefined2 *)(param_4 + uVar49 * 2) = uVar52;
      uVar49 = uVar49 + 1;
    } while (uVar49 < param_5);
  }
  return;
}


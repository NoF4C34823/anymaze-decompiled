
void FUN_14080ee80(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

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
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  longlong lVar47;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar51;
  undefined1 uVar52;
  int iVar53;
  ulonglong uVar54;
  longlong lVar55;
  longlong lVar56;
  ulonglong uVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  float fVar61;
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
  
  lVar55 = (longlong)param_3;
  lVar56 = lVar55 + -2;
  if (SCARRY8(lVar55,-2) != lVar55 + -2 < 0) {
    lVar56 = lVar55 + 3;
  }
  lVar55 = (longlong)(int)lVar56 + 1;
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
  lVar47 = (longlong)(int)lVar51 + 1;
  if (4 < lVar47) {
    lVar47 = 0;
  }
  lVar48 = (longlong)(int)lVar47 + 1;
  if (4 < lVar48) {
    lVar48 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_14080f66e:
      uVar57 = 0;
      if (param_5 == 0) goto LAB_14080f3dd;
      uVar54 = 0;
      uVar50 = param_5;
    }
    else {
      uVar49 = param_2 * 5 + param_1;
      uVar50 = uVar49 & 0x1f;
      if (uVar50 != 0) {
        if ((uVar49 & 3) != 0) goto LAB_14080f66e;
        uVar50 = 0x20 - uVar50 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar50 + 0x10)) goto LAB_14080f66e;
      lVar44 = param_2 * lVar56 + param_1;
      lVar58 = param_2 * lVar48 + param_1;
      lVar60 = param_2 * lVar55 + param_1;
      lVar45 = param_2 * lVar47 + param_1;
      lVar59 = param_2 * lVar51 + param_1;
      uVar57 = param_5 - (param_5 - uVar50 & 0xf);
      if (uVar50 != 0) {
        uVar54 = 0;
        do {
          *(float *)(uVar49 + uVar54 * 4) =
               fVar8 * (*(float *)(lVar44 + uVar54 * 4) + *(float *)(lVar58 + uVar54 * 4)) +
               fVar9 * (*(float *)(lVar60 + uVar54 * 4) + *(float *)(lVar45 + uVar54 * 4)) +
               fVar10 * *(float *)(lVar59 + uVar54 * 4);
          uVar54 = uVar54 + 1;
        } while (uVar54 < uVar50);
      }
      auVar20 = vshufps_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),0);
      auVar21 = vshufps_avx(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),0);
      auVar22 = vshufps_avx(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10),0);
      do {
        auVar11 = *(undefined1 (*) [16])(lVar44 + uVar50 * 4);
        auVar12 = *(undefined1 (*) [16])(lVar58 + uVar50 * 4);
        auVar13 = *(undefined1 (*) [16])(lVar44 + 0x10 + uVar50 * 4);
        auVar14 = *(undefined1 (*) [16])(lVar58 + 0x10 + uVar50 * 4);
        fVar61 = auVar20._0_4_;
        fVar62 = auVar20._4_4_;
        fVar63 = auVar20._8_4_;
        fVar64 = auVar20._12_4_;
        auVar15 = *(undefined1 (*) [16])(lVar60 + uVar50 * 4);
        auVar16 = *(undefined1 (*) [16])(lVar60 + 0x10 + uVar50 * 4);
        pfVar1 = (float *)(lVar45 + uVar50 * 4);
        fVar23 = pfVar1[1];
        fVar24 = pfVar1[2];
        fVar25 = pfVar1[3];
        lVar5 = lVar45 + 0x10 + uVar50 * 4;
        fVar26 = *(float *)(lVar5 + 0x10);
        fVar27 = *(float *)(lVar5 + 0x14);
        fVar28 = *(float *)(lVar5 + 0x18);
        fVar29 = *(float *)(lVar5 + 0x1c);
        fVar65 = auVar21._0_4_;
        fVar66 = auVar21._4_4_;
        fVar67 = auVar21._8_4_;
        fVar68 = auVar21._12_4_;
        auVar17 = *(undefined1 (*) [16])(lVar59 + uVar50 * 4);
        auVar18 = *(undefined1 (*) [16])(lVar59 + 0x10 + uVar50 * 4);
        fVar69 = auVar22._0_4_;
        fVar70 = auVar22._4_4_;
        fVar71 = auVar22._8_4_;
        fVar72 = auVar22._12_4_;
        pfVar2 = (float *)(uVar49 + uVar50 * 4);
        *pfVar2 = fVar61 * (auVar11._0_4_ + auVar12._0_4_) + fVar65 * (auVar15._0_4_ + *pfVar1) +
                  fVar69 * auVar17._0_4_;
        pfVar2[1] = fVar62 * (auVar11._4_4_ + auVar12._4_4_) + fVar66 * (auVar15._4_4_ + fVar23) +
                    fVar70 * auVar17._4_4_;
        pfVar2[2] = fVar63 * (auVar11._8_4_ + auVar12._8_4_) + fVar67 * (auVar15._8_4_ + fVar24) +
                    fVar71 * auVar17._8_4_;
        pfVar2[3] = fVar64 * (auVar11._12_4_ + auVar12._12_4_) + fVar68 * (auVar15._12_4_ + fVar25)
                    + fVar72 * auVar17._12_4_;
        pfVar2[4] = fVar61 * (auVar13._0_4_ + auVar14._0_4_) + fVar65 * (auVar16._0_4_ + fVar26) +
                    fVar69 * auVar18._0_4_;
        pfVar2[5] = fVar62 * (auVar13._4_4_ + auVar14._4_4_) + fVar66 * (auVar16._4_4_ + fVar27) +
                    fVar70 * auVar18._4_4_;
        pfVar2[6] = fVar63 * (auVar13._8_4_ + auVar14._8_4_) + fVar67 * (auVar16._8_4_ + fVar28) +
                    fVar71 * auVar18._8_4_;
        pfVar2[7] = fVar29 + 0.0 + 0.0;
        auVar11 = *(undefined1 (*) [16])(lVar44 + 0x20 + uVar50 * 4);
        pfVar1 = (float *)(lVar58 + 0x20 + uVar50 * 4);
        fVar37 = pfVar1[1];
        fVar38 = pfVar1[2];
        fVar39 = pfVar1[3];
        lVar5 = lVar58 + 0x30 + uVar50 * 4;
        fVar40 = *(float *)(lVar5 + 0x10);
        fVar41 = *(float *)(lVar5 + 0x14);
        fVar42 = *(float *)(lVar5 + 0x18);
        fVar43 = *(float *)(lVar5 + 0x1c);
        auVar12 = *(undefined1 (*) [16])(lVar44 + 0x30 + uVar50 * 4);
        auVar13 = *(undefined1 (*) [16])(lVar60 + 0x20 + uVar50 * 4);
        auVar14 = *(undefined1 (*) [16])(lVar60 + 0x30 + uVar50 * 4);
        pfVar2 = (float *)(lVar45 + 0x20 + uVar50 * 4);
        fVar23 = pfVar2[1];
        fVar24 = pfVar2[2];
        fVar25 = pfVar2[3];
        lVar5 = lVar45 + 0x30 + uVar50 * 4;
        fVar26 = *(float *)(lVar5 + 0x10);
        fVar27 = *(float *)(lVar5 + 0x14);
        fVar28 = *(float *)(lVar5 + 0x18);
        fVar29 = *(float *)(lVar5 + 0x1c);
        pfVar6 = (float *)(lVar59 + 0x20 + uVar50 * 4);
        fVar30 = pfVar6[1];
        fVar31 = pfVar6[2];
        fVar32 = pfVar6[3];
        lVar5 = lVar59 + 0x30 + uVar50 * 4;
        fVar33 = *(float *)(lVar5 + 0x10);
        fVar34 = *(float *)(lVar5 + 0x14);
        fVar35 = *(float *)(lVar5 + 0x18);
        fVar36 = *(float *)(lVar5 + 0x1c);
        pfVar7 = (float *)(uVar49 + 0x20 + uVar50 * 4);
        *pfVar7 = fVar61 * (auVar11._0_4_ + *pfVar1) + fVar65 * (auVar13._0_4_ + *pfVar2) +
                  fVar69 * *pfVar6;
        pfVar7[1] = fVar62 * (auVar11._4_4_ + fVar37) + fVar66 * (auVar13._4_4_ + fVar23) +
                    fVar70 * fVar30;
        pfVar7[2] = fVar63 * (auVar11._8_4_ + fVar38) + fVar67 * (auVar13._8_4_ + fVar24) +
                    fVar71 * fVar31;
        pfVar7[3] = fVar64 * (auVar11._12_4_ + fVar39) + fVar68 * (auVar13._12_4_ + fVar25) +
                    fVar72 * fVar32;
        pfVar7[4] = fVar61 * (auVar12._0_4_ + fVar40) + fVar65 * (auVar14._0_4_ + fVar26) +
                    fVar69 * fVar33;
        pfVar7[5] = fVar62 * (auVar12._4_4_ + fVar41) + fVar66 * (auVar14._4_4_ + fVar27) +
                    fVar70 * fVar34;
        pfVar7[6] = fVar63 * (auVar12._8_4_ + fVar42) + fVar67 * (auVar14._8_4_ + fVar28) +
                    fVar71 * fVar35;
        pfVar7[7] = fVar43 + fVar29 + fVar36;
        uVar50 = uVar50 + 0x10;
      } while (uVar50 < uVar57);
      if (param_5 < uVar57 + 1) goto LAB_14080f3dd;
      uVar50 = param_5 - uVar57;
      if ((longlong)uVar50 < 4) {
        uVar54 = 0;
      }
      else {
        uVar46 = 0;
        uVar54 = uVar50 & 0xfffffffffffffffc;
        do {
          pfVar1 = (float *)(lVar44 + uVar57 * 4 + uVar46 * 4);
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar2 = (float *)(lVar58 + uVar57 * 4 + uVar46 * 4);
          fVar26 = pfVar2[1];
          fVar27 = pfVar2[2];
          fVar28 = pfVar2[3];
          pfVar6 = (float *)(lVar60 + uVar57 * 4 + uVar46 * 4);
          fVar29 = pfVar6[1];
          fVar30 = pfVar6[2];
          fVar31 = pfVar6[3];
          pfVar7 = (float *)(lVar45 + uVar57 * 4 + uVar46 * 4);
          fVar32 = pfVar7[1];
          fVar33 = pfVar7[2];
          fVar34 = pfVar7[3];
          pfVar3 = (float *)(lVar59 + uVar57 * 4 + uVar46 * 4);
          fVar35 = pfVar3[1];
          fVar36 = pfVar3[2];
          fVar37 = pfVar3[3];
          pfVar4 = (float *)(uVar49 + uVar57 * 4 + uVar46 * 4);
          *pfVar4 = fVar61 * (*pfVar1 + *pfVar2) + fVar65 * (*pfVar6 + *pfVar7) + fVar69 * *pfVar3;
          pfVar4[1] = fVar62 * (fVar23 + fVar26) + fVar66 * (fVar29 + fVar32) + fVar70 * fVar35;
          pfVar4[2] = fVar63 * (fVar24 + fVar27) + fVar67 * (fVar30 + fVar33) + fVar71 * fVar36;
          pfVar4[3] = fVar64 * (fVar25 + fVar28) + fVar68 * (fVar31 + fVar34) + fVar72 * fVar37;
          uVar46 = uVar46 + 4;
        } while (uVar46 < uVar54);
      }
    }
    if (uVar54 < uVar50) {
      do {
        *(float *)(param_2 * 5 + param_1 + uVar57 * 4 + uVar54 * 4) =
             fVar8 * (*(float *)(lVar56 * param_2 + param_1 + uVar57 * 4 + uVar54 * 4) +
                     *(float *)(lVar48 * param_2 + param_1 + uVar57 * 4 + uVar54 * 4)) +
             fVar9 * (*(float *)(lVar55 * param_2 + param_1 + uVar57 * 4 + uVar54 * 4) +
                     *(float *)(lVar47 * param_2 + param_1 + uVar57 * 4 + uVar54 * 4)) +
             fVar10 * *(float *)(lVar51 * param_2 + param_1 + uVar57 * 4 + uVar54 * 4);
        uVar54 = uVar54 + 1;
      } while (uVar54 < uVar50);
    }
  }
LAB_14080f3dd:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar50 = param_2 * 5 + param_1;
      uVar49 = uVar50 & 0xf;
      if (uVar49 != 0) {
        if ((uVar50 & 3) != 0) goto LAB_14080f68d;
        uVar49 = 0x10 - uVar49 >> 2;
      }
      if ((longlong)(uVar49 + 8) <= (longlong)param_5) {
        uVar54 = 0;
        uVar57 = param_5 - (param_5 - uVar49 & 7);
        if (uVar49 != 0) {
          do {
            iVar53 = (int)ROUND(*(float *)(uVar50 + uVar54 * 4));
            if (0xfe < iVar53) {
              iVar53 = 0xff;
            }
            uVar52 = (undefined1)iVar53;
            if (iVar53 < 1) {
              uVar52 = 0;
            }
            *(undefined1 *)(uVar54 + param_4) = uVar52;
            uVar54 = uVar54 + 1;
          } while (uVar54 < uVar49);
        }
        do {
          auVar19 = vcvtps2dq_avx(*(undefined1 (*) [32])(uVar50 + uVar49 * 4));
          auVar20 = vpackssdw_avx(auVar19._0_16_,auVar19._16_16_);
          auVar20 = vpackuswb_avx(auVar20,auVar20);
          *(longlong *)(uVar49 + param_4) = auVar20._0_8_;
          uVar49 = uVar49 + 8;
        } while (uVar49 < uVar57);
        goto LAB_14080f602;
      }
    }
LAB_14080f68d:
    uVar57 = 0;
LAB_14080f602:
    if (param_5 <= uVar57) {
      return;
    }
    do {
      iVar53 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar57 * 4));
      if (0xfe < iVar53) {
        iVar53 = 0xff;
      }
      uVar52 = (undefined1)iVar53;
      if (iVar53 < 1) {
        uVar52 = 0;
      }
      *(undefined1 *)(uVar57 + param_4) = uVar52;
      uVar57 = uVar57 + 1;
    } while (uVar57 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar50 = param_2 * 5 + param_1;
    uVar49 = uVar50 & 0xf;
    if (uVar49 != 0) {
      if ((uVar50 & 3) != 0) goto LAB_14080f686;
      uVar49 = 0x10 - uVar49 >> 2;
    }
    if ((longlong)(uVar49 + 8) <= (longlong)param_5) {
      uVar54 = 0;
      uVar57 = param_5 - (param_5 - uVar49 & 7);
      if (uVar49 != 0) {
        do {
          iVar53 = (int)ROUND(*(float *)(uVar50 + uVar54 * 4));
          if (0xfe < iVar53) {
            iVar53 = 0xff;
          }
          uVar52 = (undefined1)iVar53;
          if (iVar53 < 1) {
            uVar52 = 0;
          }
          *(undefined1 *)(uVar54 + param_4) = uVar52;
          uVar54 = uVar54 + 1;
        } while (uVar54 < uVar49);
      }
      do {
        auVar19 = vcvtps2dq_avx(*(undefined1 (*) [32])(uVar50 + uVar49 * 4));
        auVar20 = vpackssdw_avx(auVar19._0_16_,auVar19._16_16_);
        auVar20 = vpackuswb_avx(auVar20,auVar20);
        *(longlong *)(uVar49 + param_4) = auVar20._0_8_;
        uVar49 = uVar49 + 8;
      } while (uVar49 < uVar57);
      goto LAB_14080f4c2;
    }
  }
LAB_14080f686:
  uVar57 = 0;
LAB_14080f4c2:
  if (uVar57 < param_5) {
    do {
      iVar53 = (int)ROUND(*(float *)(param_1 + param_2 * 5 + uVar57 * 4));
      if (0xfe < iVar53) {
        iVar53 = 0xff;
      }
      uVar52 = (undefined1)iVar53;
      if (iVar53 < 1) {
        uVar52 = 0;
      }
      *(undefined1 *)(uVar57 + param_4) = uVar52;
      uVar57 = uVar57 + 1;
    } while (uVar57 < param_5);
  }
  return;
}



void FUN_1400b6200(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 uVar33;
  int iVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  
  lVar35 = (longlong)param_3 + -1;
  if ((longlong)param_3 < 1) {
    lVar35 = 2;
  }
  lVar31 = (longlong)(int)lVar35 + 1;
  if (2 < lVar31) {
    lVar31 = 0;
  }
  fVar6 = *param_6;
  fVar7 = param_6[1];
  lVar37 = (longlong)(int)lVar31 + 1;
  if (2 < lVar37) {
    lVar37 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_1400b6739:
      uVar36 = 0;
      if (param_5 == 0) goto LAB_1400b64e9;
      uVar38 = 0;
      uVar32 = param_5;
    }
    else {
      uVar39 = param_2 * 3 + param_1;
      uVar32 = uVar39 & 0x1f;
      if (uVar32 != 0) {
        if ((uVar39 & 3) != 0) goto LAB_1400b6739;
        uVar32 = 0x20 - uVar32 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar32 + 0x10)) goto LAB_1400b6739;
      lVar27 = param_2 * lVar35 + param_1;
      lVar28 = param_2 * lVar37 + param_1;
      lVar30 = param_2 * lVar31 + param_1;
      uVar36 = param_5 - (param_5 - uVar32 & 0xf);
      uVar38 = 0;
      if (uVar32 != 0) {
        do {
          *(float *)(uVar39 + uVar38 * 4) =
               fVar6 * (*(float *)(lVar27 + uVar38 * 4) + *(float *)(lVar28 + uVar38 * 4)) +
               fVar7 * *(float *)(lVar30 + uVar38 * 4);
          uVar38 = uVar38 + 1;
        } while (uVar38 < uVar32);
      }
      auVar11 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
      auVar12 = vshufps_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),0);
      do {
        auVar8 = *(undefined1 (*) [16])(lVar27 + uVar32 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar27 + 0x10 + uVar32 * 4);
        pfVar1 = (float *)(lVar28 + uVar32 * 4);
        fVar13 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar15 = pfVar1[3];
        lVar5 = lVar28 + 0x10 + uVar32 * 4;
        fVar16 = *(float *)(lVar5 + 0x10);
        fVar17 = *(float *)(lVar5 + 0x14);
        fVar18 = *(float *)(lVar5 + 0x18);
        fVar19 = *(float *)(lVar5 + 0x1c);
        fVar40 = auVar11._0_4_;
        fVar41 = auVar11._4_4_;
        fVar42 = auVar11._8_4_;
        fVar43 = auVar11._12_4_;
        pfVar2 = (float *)(lVar30 + uVar32 * 4);
        fVar20 = pfVar2[1];
        fVar21 = pfVar2[2];
        fVar22 = pfVar2[3];
        lVar5 = lVar30 + 0x10 + uVar32 * 4;
        fVar23 = *(float *)(lVar5 + 0x10);
        fVar24 = *(float *)(lVar5 + 0x14);
        fVar25 = *(float *)(lVar5 + 0x18);
        fVar26 = *(float *)(lVar5 + 0x1c);
        fVar44 = auVar12._0_4_;
        fVar45 = auVar12._4_4_;
        fVar46 = auVar12._8_4_;
        fVar47 = auVar12._12_4_;
        pfVar3 = (float *)(uVar39 + uVar32 * 4);
        *pfVar3 = fVar40 * (auVar8._0_4_ + *pfVar1) + fVar44 * *pfVar2;
        pfVar3[1] = fVar41 * (auVar8._4_4_ + fVar13) + fVar45 * fVar20;
        pfVar3[2] = fVar42 * (auVar8._8_4_ + fVar14) + fVar46 * fVar21;
        pfVar3[3] = fVar43 * (auVar8._12_4_ + fVar15) + fVar47 * fVar22;
        pfVar3[4] = fVar40 * (auVar9._0_4_ + fVar16) + fVar44 * fVar23;
        pfVar3[5] = fVar41 * (auVar9._4_4_ + fVar17) + fVar45 * fVar24;
        pfVar3[6] = fVar42 * (auVar9._8_4_ + fVar18) + fVar46 * fVar25;
        pfVar3[7] = fVar19 + fVar26;
        auVar8 = *(undefined1 (*) [16])(lVar27 + 0x20 + uVar32 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar27 + 0x30 + uVar32 * 4);
        pfVar1 = (float *)(lVar28 + 0x20 + uVar32 * 4);
        fVar13 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar15 = pfVar1[3];
        lVar5 = lVar28 + 0x30 + uVar32 * 4;
        fVar16 = *(float *)(lVar5 + 0x10);
        fVar17 = *(float *)(lVar5 + 0x14);
        fVar18 = *(float *)(lVar5 + 0x18);
        fVar19 = *(float *)(lVar5 + 0x1c);
        pfVar2 = (float *)(lVar30 + 0x20 + uVar32 * 4);
        fVar20 = pfVar2[1];
        fVar21 = pfVar2[2];
        fVar22 = pfVar2[3];
        lVar5 = lVar30 + 0x30 + uVar32 * 4;
        fVar23 = *(float *)(lVar5 + 0x10);
        fVar24 = *(float *)(lVar5 + 0x14);
        fVar25 = *(float *)(lVar5 + 0x18);
        fVar26 = *(float *)(lVar5 + 0x1c);
        pfVar3 = (float *)(uVar39 + 0x20 + uVar32 * 4);
        *pfVar3 = fVar40 * (auVar8._0_4_ + *pfVar1) + fVar44 * *pfVar2;
        pfVar3[1] = fVar41 * (auVar8._4_4_ + fVar13) + fVar45 * fVar20;
        pfVar3[2] = fVar42 * (auVar8._8_4_ + fVar14) + fVar46 * fVar21;
        pfVar3[3] = fVar43 * (auVar8._12_4_ + fVar15) + fVar47 * fVar22;
        pfVar3[4] = fVar40 * (auVar9._0_4_ + fVar16) + fVar44 * fVar23;
        pfVar3[5] = fVar41 * (auVar9._4_4_ + fVar17) + fVar45 * fVar24;
        pfVar3[6] = fVar42 * (auVar9._8_4_ + fVar18) + fVar46 * fVar25;
        pfVar3[7] = fVar19 + fVar26;
        uVar32 = uVar32 + 0x10;
      } while (uVar32 < uVar36);
      if (param_5 < uVar36 + 1) goto LAB_1400b64e9;
      uVar32 = param_5 - uVar36;
      if ((longlong)uVar32 < 4) {
        uVar38 = 0;
      }
      else {
        uVar38 = uVar32 & 0xfffffffffffffffc;
        uVar29 = 0;
        do {
          pfVar1 = (float *)(lVar27 + uVar36 * 4 + uVar29 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar2 = (float *)(lVar28 + uVar36 * 4 + uVar29 * 4);
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar3 = (float *)(lVar30 + uVar36 * 4 + uVar29 * 4);
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar4 = (float *)(uVar39 + uVar36 * 4 + uVar29 * 4);
          *pfVar4 = fVar40 * (*pfVar1 + *pfVar2) + fVar44 * *pfVar3;
          pfVar4[1] = fVar41 * (fVar13 + fVar16) + fVar45 * fVar19;
          pfVar4[2] = fVar42 * (fVar14 + fVar17) + fVar46 * fVar20;
          pfVar4[3] = fVar43 * (fVar15 + fVar18) + fVar47 * fVar21;
          uVar29 = uVar29 + 4;
        } while (uVar29 < uVar38);
      }
    }
    if (uVar38 < uVar32) {
      do {
        *(float *)(param_2 * 3 + param_1 + uVar36 * 4 + uVar38 * 4) =
             fVar6 * (*(float *)(lVar35 * param_2 + param_1 + uVar36 * 4 + uVar38 * 4) +
                     *(float *)(lVar37 * param_2 + param_1 + uVar36 * 4 + uVar38 * 4)) +
             fVar7 * *(float *)(lVar31 * param_2 + param_1 + uVar36 * 4 + uVar38 * 4);
        uVar38 = uVar38 + 1;
      } while (uVar38 < uVar32);
    }
  }
LAB_1400b64e9:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar39 = param_2 * 3 + param_1;
      uVar32 = uVar39 & 0xf;
      if (uVar32 != 0) {
        if ((uVar39 & 3) != 0) goto LAB_1400b6758;
        uVar32 = 0x10 - uVar32 >> 2;
      }
      if ((longlong)(uVar32 + 8) <= (longlong)param_5) {
        uVar38 = 0;
        uVar36 = param_5 - (param_5 - uVar32 & 7);
        if (uVar32 != 0) {
          do {
            iVar34 = (int)ROUND(*(float *)(uVar39 + uVar38 * 4));
            if (0xfe < iVar34) {
              iVar34 = 0xff;
            }
            uVar33 = (undefined1)iVar34;
            if (iVar34 < 1) {
              uVar33 = 0;
            }
            *(undefined1 *)(uVar38 + param_4) = uVar33;
            uVar38 = uVar38 + 1;
          } while (uVar38 < uVar32);
        }
        do {
          auVar10 = vcvtps2dq_avx(*(undefined1 (*) [32])(uVar39 + uVar32 * 4));
          auVar11 = vpackssdw_avx(auVar10._0_16_,auVar10._16_16_);
          auVar11 = vpackuswb_avx(auVar11,auVar11);
          *(longlong *)(uVar32 + param_4) = auVar11._0_8_;
          uVar32 = uVar32 + 8;
        } while (uVar32 < uVar36);
        goto LAB_1400b66e1;
      }
    }
LAB_1400b6758:
    uVar36 = 0;
LAB_1400b66e1:
    if (param_5 <= uVar36) {
      return;
    }
    do {
      iVar34 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar36 * 4));
      if (0xfe < iVar34) {
        iVar34 = 0xff;
      }
      uVar33 = (undefined1)iVar34;
      if (iVar34 < 1) {
        uVar33 = 0;
      }
      *(undefined1 *)(uVar36 + param_4) = uVar33;
      uVar36 = uVar36 + 1;
    } while (uVar36 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar39 = param_2 * 3 + param_1;
    uVar32 = uVar39 & 0xf;
    if (uVar32 != 0) {
      if ((uVar39 & 3) != 0) goto LAB_1400b6751;
      uVar32 = 0x10 - uVar32 >> 2;
    }
    if ((longlong)(uVar32 + 8) <= (longlong)param_5) {
      uVar38 = 0;
      uVar36 = param_5 - (param_5 - uVar32 & 7);
      if (uVar32 != 0) {
        do {
          iVar34 = (int)ROUND(*(float *)(uVar39 + uVar38 * 4));
          if (0xfe < iVar34) {
            iVar34 = 0xff;
          }
          uVar33 = (undefined1)iVar34;
          if (iVar34 < 1) {
            uVar33 = 0;
          }
          *(undefined1 *)(uVar38 + param_4) = uVar33;
          uVar38 = uVar38 + 1;
        } while (uVar38 < uVar32);
      }
      do {
        auVar10 = vcvtps2dq_avx(*(undefined1 (*) [32])(uVar39 + uVar32 * 4));
        auVar11 = vpackssdw_avx(auVar10._0_16_,auVar10._16_16_);
        auVar11 = vpackuswb_avx(auVar11,auVar11);
        *(longlong *)(uVar32 + param_4) = auVar11._0_8_;
        uVar32 = uVar32 + 8;
      } while (uVar32 < uVar36);
      goto LAB_1400b65c1;
    }
  }
LAB_1400b6751:
  uVar36 = 0;
LAB_1400b65c1:
  if (uVar36 < param_5) {
    do {
      iVar34 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar36 * 4));
      if (0xfe < iVar34) {
        iVar34 = 0xff;
      }
      uVar33 = (undefined1)iVar34;
      if (iVar34 < 1) {
        uVar33 = 0;
      }
      *(undefined1 *)(uVar36 + param_4) = uVar33;
      uVar36 = uVar36 + 1;
    } while (uVar36 < param_5);
  }
  return;
}


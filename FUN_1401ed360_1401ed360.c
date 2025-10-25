
void FUN_1401ed360(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
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
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined2 uVar32;
  int iVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  
  lVar34 = (longlong)param_3 + -1;
  if ((longlong)param_3 < 1) {
    lVar34 = 2;
  }
  lVar30 = (longlong)(int)lVar34 + 1;
  if (2 < lVar30) {
    lVar30 = 0;
  }
  fVar6 = *param_6;
  fVar7 = param_6[1];
  lVar36 = (longlong)(int)lVar30 + 1;
  if (2 < lVar36) {
    lVar36 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_1401ed8bf:
      uVar35 = 0;
      if (param_5 == 0) goto LAB_1401ed649;
      uVar37 = 0;
      uVar31 = param_5;
    }
    else {
      uVar38 = param_2 * 3 + param_1;
      uVar31 = uVar38 & 0x1f;
      if (uVar31 != 0) {
        if ((uVar38 & 3) != 0) goto LAB_1401ed8bf;
        uVar31 = 0x20 - uVar31 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar31 + 0x10)) goto LAB_1401ed8bf;
      lVar26 = param_2 * lVar34 + param_1;
      lVar27 = param_2 * lVar36 + param_1;
      lVar29 = param_2 * lVar30 + param_1;
      uVar35 = param_5 - (param_5 - uVar31 & 0xf);
      uVar37 = 0;
      if (uVar31 != 0) {
        do {
          *(float *)(uVar38 + uVar37 * 4) =
               fVar6 * (*(float *)(lVar26 + uVar37 * 4) + *(float *)(lVar27 + uVar37 * 4)) +
               fVar7 * *(float *)(lVar29 + uVar37 * 4);
          uVar37 = uVar37 + 1;
        } while (uVar37 < uVar31);
      }
      auVar10 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
      auVar11 = vshufps_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),0);
      do {
        auVar8 = *(undefined1 (*) [16])(lVar26 + uVar31 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar26 + 0x10 + uVar31 * 4);
        pfVar1 = (float *)(lVar27 + uVar31 * 4);
        fVar12 = pfVar1[1];
        fVar13 = pfVar1[2];
        fVar14 = pfVar1[3];
        lVar5 = lVar27 + 0x10 + uVar31 * 4;
        fVar15 = *(float *)(lVar5 + 0x10);
        fVar16 = *(float *)(lVar5 + 0x14);
        fVar17 = *(float *)(lVar5 + 0x18);
        fVar18 = *(float *)(lVar5 + 0x1c);
        fVar39 = auVar10._0_4_;
        fVar40 = auVar10._4_4_;
        fVar41 = auVar10._8_4_;
        fVar42 = auVar10._12_4_;
        pfVar2 = (float *)(lVar29 + uVar31 * 4);
        fVar19 = pfVar2[1];
        fVar20 = pfVar2[2];
        fVar21 = pfVar2[3];
        lVar5 = lVar29 + 0x10 + uVar31 * 4;
        fVar22 = *(float *)(lVar5 + 0x10);
        fVar23 = *(float *)(lVar5 + 0x14);
        fVar24 = *(float *)(lVar5 + 0x18);
        fVar25 = *(float *)(lVar5 + 0x1c);
        fVar43 = auVar11._0_4_;
        fVar44 = auVar11._4_4_;
        fVar45 = auVar11._8_4_;
        fVar46 = auVar11._12_4_;
        pfVar3 = (float *)(uVar38 + uVar31 * 4);
        *pfVar3 = fVar39 * (auVar8._0_4_ + *pfVar1) + fVar43 * *pfVar2;
        pfVar3[1] = fVar40 * (auVar8._4_4_ + fVar12) + fVar44 * fVar19;
        pfVar3[2] = fVar41 * (auVar8._8_4_ + fVar13) + fVar45 * fVar20;
        pfVar3[3] = fVar42 * (auVar8._12_4_ + fVar14) + fVar46 * fVar21;
        pfVar3[4] = fVar39 * (auVar9._0_4_ + fVar15) + fVar43 * fVar22;
        pfVar3[5] = fVar40 * (auVar9._4_4_ + fVar16) + fVar44 * fVar23;
        pfVar3[6] = fVar41 * (auVar9._8_4_ + fVar17) + fVar45 * fVar24;
        pfVar3[7] = fVar18 + fVar25;
        auVar8 = *(undefined1 (*) [16])(lVar26 + 0x20 + uVar31 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar26 + 0x30 + uVar31 * 4);
        pfVar1 = (float *)(lVar27 + 0x20 + uVar31 * 4);
        fVar12 = pfVar1[1];
        fVar13 = pfVar1[2];
        fVar14 = pfVar1[3];
        lVar5 = lVar27 + 0x30 + uVar31 * 4;
        fVar15 = *(float *)(lVar5 + 0x10);
        fVar16 = *(float *)(lVar5 + 0x14);
        fVar17 = *(float *)(lVar5 + 0x18);
        fVar18 = *(float *)(lVar5 + 0x1c);
        pfVar2 = (float *)(lVar29 + 0x20 + uVar31 * 4);
        fVar19 = pfVar2[1];
        fVar20 = pfVar2[2];
        fVar21 = pfVar2[3];
        lVar5 = lVar29 + 0x30 + uVar31 * 4;
        fVar22 = *(float *)(lVar5 + 0x10);
        fVar23 = *(float *)(lVar5 + 0x14);
        fVar24 = *(float *)(lVar5 + 0x18);
        fVar25 = *(float *)(lVar5 + 0x1c);
        pfVar3 = (float *)(uVar38 + 0x20 + uVar31 * 4);
        *pfVar3 = fVar39 * (auVar8._0_4_ + *pfVar1) + fVar43 * *pfVar2;
        pfVar3[1] = fVar40 * (auVar8._4_4_ + fVar12) + fVar44 * fVar19;
        pfVar3[2] = fVar41 * (auVar8._8_4_ + fVar13) + fVar45 * fVar20;
        pfVar3[3] = fVar42 * (auVar8._12_4_ + fVar14) + fVar46 * fVar21;
        pfVar3[4] = fVar39 * (auVar9._0_4_ + fVar15) + fVar43 * fVar22;
        pfVar3[5] = fVar40 * (auVar9._4_4_ + fVar16) + fVar44 * fVar23;
        pfVar3[6] = fVar41 * (auVar9._8_4_ + fVar17) + fVar45 * fVar24;
        pfVar3[7] = fVar18 + fVar25;
        uVar31 = uVar31 + 0x10;
      } while (uVar31 < uVar35);
      if (param_5 < uVar35 + 1) goto LAB_1401ed649;
      uVar31 = param_5 - uVar35;
      if ((longlong)uVar31 < 4) {
        uVar37 = 0;
      }
      else {
        uVar37 = uVar31 & 0xfffffffffffffffc;
        uVar28 = 0;
        do {
          pfVar1 = (float *)(lVar26 + uVar35 * 4 + uVar28 * 4);
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar14 = pfVar1[3];
          pfVar2 = (float *)(lVar27 + uVar35 * 4 + uVar28 * 4);
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          fVar17 = pfVar2[3];
          pfVar3 = (float *)(lVar29 + uVar35 * 4 + uVar28 * 4);
          fVar18 = pfVar3[1];
          fVar19 = pfVar3[2];
          fVar20 = pfVar3[3];
          pfVar4 = (float *)(uVar38 + uVar35 * 4 + uVar28 * 4);
          *pfVar4 = fVar39 * (*pfVar1 + *pfVar2) + fVar43 * *pfVar3;
          pfVar4[1] = fVar40 * (fVar12 + fVar15) + fVar44 * fVar18;
          pfVar4[2] = fVar41 * (fVar13 + fVar16) + fVar45 * fVar19;
          pfVar4[3] = fVar42 * (fVar14 + fVar17) + fVar46 * fVar20;
          uVar28 = uVar28 + 4;
        } while (uVar28 < uVar37);
      }
    }
    if (uVar37 < uVar31) {
      do {
        *(float *)(param_2 * 3 + param_1 + uVar35 * 4 + uVar37 * 4) =
             fVar6 * (*(float *)(lVar34 * param_2 + param_1 + uVar35 * 4 + uVar37 * 4) +
                     *(float *)(lVar36 * param_2 + param_1 + uVar35 * 4 + uVar37 * 4)) +
             fVar7 * *(float *)(lVar30 * param_2 + param_1 + uVar35 * 4 + uVar37 * 4);
        uVar37 = uVar37 + 1;
      } while (uVar37 < uVar31);
    }
  }
LAB_1401ed649:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar38 = param_2 * 3 + param_1;
      uVar31 = uVar38 & 0xf;
      if (uVar31 != 0) {
        if ((uVar38 & 3) != 0) goto LAB_1401ed8de;
        uVar31 = 0x10 - uVar31 >> 2;
      }
      if ((longlong)(uVar31 + 4) <= (longlong)param_5) {
        uVar37 = 0;
        uVar35 = param_5 - (param_5 - uVar31 & 3);
        if (uVar31 != 0) {
          do {
            iVar33 = (int)ROUND(*(float *)(uVar38 + uVar37 * 4));
            if (0x7ffe < iVar33) {
              iVar33 = 0x7fff;
            }
            uVar32 = (undefined2)iVar33;
            if (iVar33 < -0x7fff) {
              uVar32 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar37 * 2) = uVar32;
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar31);
        }
        do {
          auVar10 = vcvtps2dq_avx(*(undefined1 (*) [16])(uVar38 + uVar31 * 4));
          auVar10 = vpackssdw_avx(auVar10,auVar10);
          *(longlong *)(param_4 + uVar31 * 2) = auVar10._0_8_;
          uVar31 = uVar31 + 4;
        } while (uVar31 < uVar35);
        goto LAB_1401ed857;
      }
    }
LAB_1401ed8de:
    uVar35 = 0;
LAB_1401ed857:
    if (param_5 <= uVar35) {
      return;
    }
    do {
      iVar33 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar35 * 4));
      if (0x7ffe < iVar33) {
        iVar33 = 0x7fff;
      }
      uVar32 = (undefined2)iVar33;
      if (iVar33 < -0x7fff) {
        uVar32 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar35 * 2) = uVar32;
      uVar35 = uVar35 + 1;
    } while (uVar35 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar38 = param_2 * 3 + param_1;
    uVar31 = uVar38 & 0xf;
    if (uVar31 != 0) {
      if ((uVar38 & 3) != 0) goto LAB_1401ed8d7;
      uVar31 = 0x10 - uVar31 >> 2;
    }
    if ((longlong)(uVar31 + 8) <= (longlong)param_5) {
      uVar37 = 0;
      uVar35 = param_5 - (param_5 - uVar31 & 7);
      if (uVar31 != 0) {
        do {
          iVar33 = (int)ROUND(*(float *)(uVar38 + uVar37 * 4));
          if (0x7ffe < iVar33) {
            iVar33 = 0x7fff;
          }
          uVar32 = (undefined2)iVar33;
          if (iVar33 < -0x7fff) {
            uVar32 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar37 * 2) = uVar32;
          uVar37 = uVar37 + 1;
        } while (uVar37 < uVar31);
      }
      do {
        auVar10 = vcvtps2dq_avx(*(undefined1 (*) [16])(uVar38 + uVar31 * 4));
        auVar10 = vpackssdw_avx(auVar10,auVar10);
        *(longlong *)(param_4 + uVar31 * 2) = auVar10._0_8_;
        auVar10 = vcvtps2dq_avx(*(undefined1 (*) [16])(uVar38 + 0x10 + uVar31 * 4));
        auVar10 = vpackssdw_avx(auVar10,auVar10);
        *(longlong *)(param_4 + 8 + uVar31 * 2) = auVar10._0_8_;
        uVar31 = uVar31 + 8;
      } while (uVar31 < uVar35);
      goto LAB_1401ed727;
    }
  }
LAB_1401ed8d7:
  uVar35 = 0;
LAB_1401ed727:
  if (uVar35 < param_5) {
    do {
      iVar33 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar35 * 4));
      if (0x7ffe < iVar33) {
        iVar33 = 0x7fff;
      }
      uVar32 = (undefined2)iVar33;
      if (iVar33 < -0x7fff) {
        uVar32 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar35 * 2) = uVar32;
      uVar35 = uVar35 + 1;
    } while (uVar35 < param_5);
  }
  return;
}


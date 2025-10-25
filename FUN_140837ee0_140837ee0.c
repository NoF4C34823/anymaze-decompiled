
void FUN_140837ee0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,undefined8 param_7,int param_8)

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
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined2 uVar32;
  int iVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  float fVar39;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  lVar35 = (longlong)param_3 + -1;
  if ((longlong)param_3 < 1) {
    lVar35 = 2;
  }
  lVar27 = (longlong)(int)lVar35 + 1;
  fVar6 = *param_6;
  fVar7 = param_6[1];
  if (2 < lVar27) {
    lVar27 = 0;
  }
  lVar36 = (longlong)(int)lVar27 + 1;
  if (2 < lVar36) {
    lVar36 = 0;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_14083845b:
      uVar34 = 0;
      if (param_5 == 0) goto LAB_1408381c8;
      uVar31 = 0;
      uVar30 = param_5;
    }
    else {
      uVar37 = param_2 * 3 + param_1;
      uVar30 = uVar37 & 0x1f;
      if (uVar30 != 0) {
        if ((uVar37 & 3) != 0) goto LAB_14083845b;
        uVar30 = 0x20 - uVar30 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar30 + 0x10)) goto LAB_14083845b;
      lVar38 = param_2 * lVar35 + param_1;
      lVar26 = param_2 * lVar36 + param_1;
      lVar28 = param_2 * lVar27 + param_1;
      uVar34 = param_5 - (param_5 - uVar30 & 0xf);
      uVar31 = 0;
      if (uVar30 != 0) {
        do {
          *(float *)(uVar37 + uVar31 * 4) =
               fVar6 * (*(float *)(lVar38 + uVar31 * 4) + *(float *)(lVar26 + uVar31 * 4)) +
               fVar7 * *(float *)(lVar28 + uVar31 * 4);
          uVar31 = uVar31 + 1;
        } while (uVar31 < uVar30);
      }
      auVar10 = vshufps_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),0);
      auVar11 = vshufps_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),0);
      do {
        auVar8 = *(undefined1 (*) [16])(lVar38 + uVar30 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar38 + 0x10 + uVar30 * 4);
        pfVar1 = (float *)(lVar26 + uVar30 * 4);
        fVar12 = pfVar1[1];
        fVar13 = pfVar1[2];
        fVar14 = pfVar1[3];
        lVar5 = lVar26 + 0x10 + uVar30 * 4;
        fVar15 = *(float *)(lVar5 + 0x10);
        fVar16 = *(float *)(lVar5 + 0x14);
        fVar17 = *(float *)(lVar5 + 0x18);
        fVar18 = *(float *)(lVar5 + 0x1c);
        fVar39 = auVar10._0_4_;
        fVar42 = auVar10._4_4_;
        fVar43 = auVar10._8_4_;
        fVar44 = auVar10._12_4_;
        pfVar2 = (float *)(lVar28 + uVar30 * 4);
        fVar19 = pfVar2[1];
        fVar20 = pfVar2[2];
        fVar21 = pfVar2[3];
        lVar5 = lVar28 + 0x10 + uVar30 * 4;
        fVar22 = *(float *)(lVar5 + 0x10);
        fVar23 = *(float *)(lVar5 + 0x14);
        fVar24 = *(float *)(lVar5 + 0x18);
        fVar25 = *(float *)(lVar5 + 0x1c);
        fVar45 = auVar11._0_4_;
        fVar46 = auVar11._4_4_;
        fVar47 = auVar11._8_4_;
        fVar48 = auVar11._12_4_;
        pfVar3 = (float *)(uVar37 + uVar30 * 4);
        *pfVar3 = fVar39 * (auVar8._0_4_ + *pfVar1) + fVar45 * *pfVar2;
        pfVar3[1] = fVar42 * (auVar8._4_4_ + fVar12) + fVar46 * fVar19;
        pfVar3[2] = fVar43 * (auVar8._8_4_ + fVar13) + fVar47 * fVar20;
        pfVar3[3] = fVar44 * (auVar8._12_4_ + fVar14) + fVar48 * fVar21;
        pfVar3[4] = fVar39 * (auVar9._0_4_ + fVar15) + fVar45 * fVar22;
        pfVar3[5] = fVar42 * (auVar9._4_4_ + fVar16) + fVar46 * fVar23;
        pfVar3[6] = fVar43 * (auVar9._8_4_ + fVar17) + fVar47 * fVar24;
        pfVar3[7] = fVar18 + fVar25;
        auVar8 = *(undefined1 (*) [16])(lVar38 + 0x20 + uVar30 * 4);
        auVar9 = *(undefined1 (*) [16])(lVar38 + 0x30 + uVar30 * 4);
        pfVar1 = (float *)(lVar26 + 0x20 + uVar30 * 4);
        fVar12 = pfVar1[1];
        fVar13 = pfVar1[2];
        fVar14 = pfVar1[3];
        lVar5 = lVar26 + 0x30 + uVar30 * 4;
        fVar15 = *(float *)(lVar5 + 0x10);
        fVar16 = *(float *)(lVar5 + 0x14);
        fVar17 = *(float *)(lVar5 + 0x18);
        fVar18 = *(float *)(lVar5 + 0x1c);
        pfVar2 = (float *)(lVar28 + 0x20 + uVar30 * 4);
        fVar19 = pfVar2[1];
        fVar20 = pfVar2[2];
        fVar21 = pfVar2[3];
        lVar5 = lVar28 + 0x30 + uVar30 * 4;
        fVar22 = *(float *)(lVar5 + 0x10);
        fVar23 = *(float *)(lVar5 + 0x14);
        fVar24 = *(float *)(lVar5 + 0x18);
        fVar25 = *(float *)(lVar5 + 0x1c);
        pfVar3 = (float *)(uVar37 + 0x20 + uVar30 * 4);
        *pfVar3 = fVar39 * (auVar8._0_4_ + *pfVar1) + fVar45 * *pfVar2;
        pfVar3[1] = fVar42 * (auVar8._4_4_ + fVar12) + fVar46 * fVar19;
        pfVar3[2] = fVar43 * (auVar8._8_4_ + fVar13) + fVar47 * fVar20;
        pfVar3[3] = fVar44 * (auVar8._12_4_ + fVar14) + fVar48 * fVar21;
        pfVar3[4] = fVar39 * (auVar9._0_4_ + fVar15) + fVar45 * fVar22;
        pfVar3[5] = fVar42 * (auVar9._4_4_ + fVar16) + fVar46 * fVar23;
        pfVar3[6] = fVar43 * (auVar9._8_4_ + fVar17) + fVar47 * fVar24;
        pfVar3[7] = fVar18 + fVar25;
        uVar30 = uVar30 + 0x10;
      } while (uVar30 < uVar34);
      if (param_5 < uVar34 + 1) goto LAB_1408381c8;
      uVar30 = param_5 - uVar34;
      if ((longlong)uVar30 < 4) {
        uVar31 = 0;
      }
      else {
        uVar31 = uVar30 & 0xfffffffffffffffc;
        uVar29 = 0;
        do {
          pfVar1 = (float *)(lVar38 + uVar34 * 4 + uVar29 * 4);
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar14 = pfVar1[3];
          pfVar2 = (float *)(lVar26 + uVar34 * 4 + uVar29 * 4);
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          fVar17 = pfVar2[3];
          pfVar3 = (float *)(lVar28 + uVar34 * 4 + uVar29 * 4);
          fVar18 = pfVar3[1];
          fVar19 = pfVar3[2];
          fVar20 = pfVar3[3];
          pfVar4 = (float *)(uVar37 + uVar34 * 4 + uVar29 * 4);
          *pfVar4 = fVar39 * (*pfVar1 + *pfVar2) + fVar45 * *pfVar3;
          pfVar4[1] = fVar42 * (fVar12 + fVar15) + fVar46 * fVar18;
          pfVar4[2] = fVar43 * (fVar13 + fVar16) + fVar47 * fVar19;
          pfVar4[3] = fVar44 * (fVar14 + fVar17) + fVar48 * fVar20;
          uVar29 = uVar29 + 4;
        } while (uVar29 < uVar31);
      }
    }
    if (uVar31 < uVar30) {
      do {
        *(float *)(param_2 * 3 + param_1 + uVar34 * 4 + uVar31 * 4) =
             fVar6 * (*(float *)(lVar35 * param_2 + param_1 + uVar34 * 4 + uVar31 * 4) +
                     *(float *)(lVar36 * param_2 + param_1 + uVar34 * 4 + uVar31 * 4)) +
             fVar7 * *(float *)(lVar27 * param_2 + param_1 + uVar34 * 4 + uVar31 * 4);
        uVar31 = uVar31 + 1;
      } while (uVar31 < uVar30);
    }
  }
LAB_1408381c8:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar30 = param_4 & 0x1f;
      if (uVar30 != 0) {
        if ((param_4 & 1) != 0) goto LAB_140838479;
        uVar30 = 0x20 - uVar30 >> 1;
      }
      if ((longlong)(uVar30 + 8) <= (longlong)param_5) {
        lVar35 = param_2 * 3 + param_1;
        uVar34 = 0;
        uVar37 = param_5 - (param_5 - uVar30 & 7);
        if (uVar30 != 0) {
          do {
            iVar33 = (int)ROUND(*(float *)(lVar35 + uVar34 * 4));
            if (0xfffe < iVar33) {
              iVar33 = 0xffff;
            }
            uVar32 = (undefined2)iVar33;
            if (iVar33 < 1) {
              uVar32 = 0;
            }
            *(undefined2 *)(param_4 + uVar34 * 2) = uVar32;
            uVar34 = uVar34 + 1;
          } while (uVar34 < uVar30);
        }
        do {
          auVar41._16_16_ = *(undefined1 (*) [16])(lVar35 + 0x10 + uVar30 * 4);
          auVar41._0_16_ = *(undefined1 (*) [16])(lVar35 + uVar30 * 4);
          auVar41 = vcvtps2dq_avx(auVar41);
          auVar10 = vpackusdw_avx(auVar41._0_16_,auVar41._16_16_);
          auVar10 = vmovntdq_avx(auVar10);
          *(undefined1 (*) [16])(param_4 + uVar30 * 2) = auVar10;
          uVar30 = uVar30 + 8;
        } while (uVar30 < uVar37);
        goto LAB_1408383eb;
      }
    }
LAB_140838479:
    uVar37 = 0;
LAB_1408383eb:
    if (param_5 <= uVar37) {
      return;
    }
    do {
      iVar33 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar37 * 4));
      if (0xfffe < iVar33) {
        iVar33 = 0xffff;
      }
      uVar32 = (undefined2)iVar33;
      if (iVar33 < 1) {
        uVar32 = 0;
      }
      *(undefined2 *)(param_4 + uVar37 * 2) = uVar32;
      uVar37 = uVar37 + 1;
    } while (uVar37 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar30 = param_4 & 0xf;
    if (uVar30 != 0) {
      if ((param_4 & 1) != 0) goto LAB_140838472;
      uVar30 = 0x10 - uVar30 >> 1;
    }
    if ((longlong)(uVar30 + 8) <= (longlong)param_5) {
      lVar35 = param_2 * 3 + param_1;
      uVar34 = 0;
      uVar37 = param_5 - (param_5 - uVar30 & 7);
      if (uVar30 != 0) {
        do {
          iVar33 = (int)ROUND(*(float *)(lVar35 + uVar34 * 4));
          if (0xfffe < iVar33) {
            iVar33 = 0xffff;
          }
          uVar32 = (undefined2)iVar33;
          if (iVar33 < 1) {
            uVar32 = 0;
          }
          *(undefined2 *)(param_4 + uVar34 * 2) = uVar32;
          uVar34 = uVar34 + 1;
        } while (uVar34 < uVar30);
      }
      do {
        auVar40._16_16_ = *(undefined1 (*) [16])(lVar35 + 0x10 + uVar30 * 4);
        auVar40._0_16_ = *(undefined1 (*) [16])(lVar35 + uVar30 * 4);
        auVar41 = vcvtps2dq_avx(auVar40);
        auVar10 = vpackusdw_avx(auVar41._0_16_,auVar41._16_16_);
        *(undefined1 (*) [16])(param_4 + uVar30 * 2) = auVar10;
        uVar30 = uVar30 + 8;
      } while (uVar30 < uVar37);
      goto LAB_1408382ab;
    }
  }
LAB_140838472:
  uVar37 = 0;
LAB_1408382ab:
  if (uVar37 < param_5) {
    do {
      iVar33 = (int)ROUND(*(float *)(param_1 + param_2 * 3 + uVar37 * 4));
      if (0xfffe < iVar33) {
        iVar33 = 0xffff;
      }
      uVar32 = (undefined2)iVar33;
      if (iVar33 < 1) {
        uVar32 = 0;
      }
      *(undefined2 *)(param_4 + uVar37 * 2) = uVar32;
      uVar37 = uVar37 + 1;
    } while (uVar37 < param_5);
  }
  return;
}


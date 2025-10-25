
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140137c20(longlong param_1,int param_2,longlong param_3,uint param_4,undefined8 param_5,
             ulonglong param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  float *pfVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 (*pauVar31) [32];
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  uint uVar44;
  int iVar45;
  ulonglong uVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  int iVar53;
  ulonglong *puVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  ulonglong uStack_138;
  undefined4 *puStack_130;
  uint uStack_118;
  undefined4 *puStack_108;
  longlong lStack_c8;
  longlong lStack_98;
  ulonglong uStack_90;
  
  uVar19 = _DAT_143087970;
  lVar22 = (longlong)param_2;
  lVar20 = -lVar22;
  uVar33 = param_5._4_4_ + 3 & 0xfffffffc;
  lVar30 = (longlong)(int)((uint)param_5 + 3 & 0xfffffffc);
  lVar41 = (longlong)(int)uVar33;
  if (((param_1 == 0) || (param_3 == 0)) || (param_6 == 0)) {
    return 0xfffffff8;
  }
  if (((int)(uint)param_5 < 1) || ((int)param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  uVar26 = (ulonglong)(int)(uint)param_5;
  if ((lVar22 < (longlong)uVar26) || ((int)param_4 < (int)((uint)param_5 * 4))) {
    return 0xfffffff0;
  }
  if ((param_4 & 3) != 0) {
    return 0xffffff94;
  }
  lVar38 = (longlong)(int)((ulonglong)(longlong)(int)param_4 >> 2);
  lVar39 = (-(param_6 & 0x1f) & 0x1f) + param_6;
  lVar29 = lVar39 + (longlong)(int)(uVar33 * 2) * 4;
  uVar21 = (ulonglong)(int)param_5._4_4_;
  if ((int)param_5._4_4_ < 0x10) {
LAB_140139cad:
    uVar33 = 0;
    auVar64 = _DAT_143087880;
  }
  else {
    uVar46 = lVar39 + uVar21 * 4;
    if ((int)param_5._4_4_ < 0x1d) {
      iVar50 = 0;
      uVar33 = param_5._4_4_ & 0xfffffff0;
      uVar36 = 0;
    }
    else {
      uVar36 = uVar46 & 0x1f;
      if ((int)uVar36 != 0) {
        if ((uVar46 & 3) != 0) goto LAB_140139cad;
        uVar36 = (ulonglong)(0x20U - (int)uVar36 >> 2);
      }
      iVar50 = (int)uVar36;
      if ((int)param_5._4_4_ < iVar50 + 0x10) goto LAB_140139cad;
      uVar28 = 0;
      uVar33 = param_5._4_4_ - (param_5._4_4_ - iVar50 & 0xf);
      if (iVar50 != 0) {
        do {
          *(float *)(lVar39 + uVar28 * 4) = (float)((int)uVar28 * (int)uVar28);
          *(undefined4 *)(uVar46 + uVar28 * 4) = uVar19;
          uVar28 = uVar28 + 1;
        } while (uVar28 < uVar36);
      }
    }
    auVar64 = _DAT_1430878c0;
    auVar62 = _DAT_1430878a0;
    auVar60._4_4_ = iVar50;
    auVar60._0_4_ = iVar50;
    auVar60._8_4_ = iVar50;
    auVar60._12_4_ = iVar50;
    auVar60._16_4_ = iVar50;
    auVar60._20_4_ = iVar50;
    auVar60._24_4_ = iVar50;
    auVar60._28_4_ = iVar50;
    auVar60 = vpaddd_avx2(auVar60,_DAT_143087920);
    do {
      auVar61 = vpmulld_avx2(auVar60,auVar60);
      auVar61 = vcvtdq2ps_avx(auVar61);
      auVar63 = vpaddd_avx2(auVar60,auVar62);
      *(undefined1 (*) [32])(lVar39 + uVar36 * 4) = auVar61;
      *(undefined1 (*) [32])(uVar46 + uVar36 * 4) = auVar64;
      auVar60 = vpmulld_avx2(auVar63,auVar63);
      auVar60 = vcvtdq2ps_avx(auVar60);
      *(undefined1 (*) [32])(lVar39 + 0x20 + uVar36 * 4) = auVar60;
      *(undefined1 (*) [32])(uVar46 + 0x20 + uVar36 * 4) = auVar64;
      auVar60 = vpaddd_avx2(auVar63,auVar62);
      uVar36 = uVar36 + 0x10;
    } while (uVar36 < (ulonglong)(longlong)(int)uVar33);
  }
  uVar18 = _UNK_143087958;
  uVar17 = _DAT_143087950;
  auVar7 = _DAT_143087940;
  if (uVar33 + 1 <= param_5._4_4_) {
    uVar34 = param_5._4_4_ - uVar33;
    if ((int)uVar34 < 4) {
      uVar46 = 0;
    }
    else {
      auVar8 = vpunpckldq_avx(ZEXT416(uVar33),ZEXT416(uVar33 + 1));
      auVar9 = vpunpckldq_avx(ZEXT416(uVar33 + 2),ZEXT416(uVar33 + 3));
      uVar36 = 0;
      uVar46 = (ulonglong)(int)(uVar34 & 0xfffffffc);
      auVar8 = vpunpcklqdq_avx(auVar8,auVar9);
      do {
        auVar9 = vpmulld_avx(auVar8,auVar8);
        auVar8 = vpaddd_avx(auVar8,auVar7);
        auVar9 = vcvtdq2ps_avx(auVar9);
        *(undefined1 (*) [16])(lVar39 + (longlong)(int)uVar33 * 4 + uVar36 * 4) = auVar9;
        puVar5 = (undefined8 *)(lVar39 + uVar21 * 4 + (longlong)(int)uVar33 * 4 + uVar36 * 4);
        *puVar5 = uVar17;
        puVar5[1] = uVar18;
        uVar36 = uVar36 + 4;
      } while (uVar36 < uVar46);
    }
    iVar50 = uVar33 + (uint)uVar46;
    if ((uint)uVar46 < uVar34) {
      uVar36 = uVar46 & 0xffffffff;
      do {
        uVar51 = (int)uVar36 + 1;
        uVar36 = (ulonglong)uVar51;
        *(float *)(lVar39 + (longlong)(int)uVar33 * 4 + uVar46 * 4) = (float)(iVar50 * iVar50);
        iVar50 = iVar50 + 1;
        *(undefined4 *)(lVar39 + uVar21 * 4 + (longlong)(int)uVar33 * 4 + uVar46 * 4) = uVar19;
        uVar46 = uVar46 + 1;
      } while (uVar51 < uVar34);
    }
  }
  uVar51 = 0;
  uVar33 = param_5._4_4_ * 2;
  uVar34 = uVar51;
  if (0 < (int)uVar33) {
    uVar44 = uVar51;
    if (0xf < (int)uVar33) {
      uVar46 = lVar39 + lVar41 * 0x28;
      if ((int)uVar33 < 0x1d) {
        uVar36 = 0;
        uVar44 = uVar33 & 0xfffffff0;
      }
      else {
        uVar34 = (uint)uVar46 & 0x1f;
        if ((uVar46 & 0x1f) != 0) {
          if ((uVar46 & 3) != 0) goto LAB_1401380a2;
          uVar34 = 0x20 - uVar34 >> 2;
        }
        if ((int)uVar33 < (int)(uVar34 + 0x10)) goto LAB_1401380a2;
        uVar44 = uVar33 - (uVar33 - uVar34 & 0xf);
        uVar36 = (ulonglong)uVar34;
        uVar28 = 0;
        if (uVar34 != 0) {
          do {
            *(undefined4 *)(uVar46 + uVar28 * 4) = 0;
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar36);
        }
      }
      do {
        *(undefined1 (*) [32])(uVar46 + uVar36 * 4) = (undefined1  [32])0x0;
        *(undefined1 (*) [32])(uVar46 + 0x20 + uVar36 * 4) = (undefined1  [32])0x0;
        uVar36 = uVar36 + 0x10;
      } while (uVar36 < (ulonglong)(longlong)(int)uVar44);
    }
LAB_1401380a2:
    uVar34 = uVar44;
    if (uVar44 + 1 <= uVar33) {
      lVar47 = (longlong)(int)uVar44;
      uVar46 = (int)uVar33 - lVar47;
      if ((longlong)uVar46 < 4) {
        uVar23 = 0;
      }
      else {
        uVar23 = (uint)uVar46 & 0xfffffffc;
        uVar36 = 0;
        do {
          *(undefined1 (*) [16])(lVar39 + lVar41 * 0x28 + lVar47 * 4 + uVar36 * 4) =
               (undefined1  [16])0x0;
          uVar36 = uVar36 + 4;
        } while (uVar36 < (ulonglong)(longlong)(int)uVar23);
        uVar34 = uVar44 + uVar23;
      }
      uVar36 = (ulonglong)(int)uVar23;
      if (uVar36 < uVar46) {
        do {
          *(undefined4 *)(lVar39 + lVar41 * 0x28 + lVar47 * 4 + uVar36 * 4) = 0;
          uVar36 = uVar36 + 1;
        } while (uVar36 < uVar46);
        uVar34 = (int)uVar36 + uVar44;
      }
    }
  }
  iVar50 = param_5._4_4_ * 3;
  if ((int)uVar34 <= iVar50) {
    uVar44 = (iVar50 - uVar34) + 1;
    if ((int)uVar44 < 8) {
LAB_140139c56:
      uStack_138 = 0;
    }
    else {
      uVar46 = lVar39 + lVar41 * 0x28 + (longlong)(int)uVar34 * 4;
      if ((int)uVar44 < 0x9d) {
        uStack_138 = (ulonglong)(int)(uVar44 & 0xfffffff8);
        uVar36 = 0;
      }
      else {
        uVar23 = (uint)uVar46 & 0x1f;
        if ((uVar46 & 0x1f) != 0) {
          if ((uVar46 & 3) != 0) goto LAB_140139c56;
          uVar23 = 0x20 - uVar23 >> 2;
        }
        uVar36 = (ulonglong)uVar23;
        if ((int)uVar44 < (int)(uVar23 + 8)) goto LAB_140139c56;
        uStack_138 = (longlong)(int)uVar44 - (ulonglong)(uVar44 - uVar23 & 7);
        if (uVar23 != 0) {
          iVar52 = uVar34 + param_5._4_4_ * -2;
          lVar47 = 0;
          do {
            uVar51 = uVar51 + 1;
            *(int *)(uVar46 + lVar47 * 4) = iVar52;
            lVar47 = lVar47 + 1;
            iVar52 = iVar52 + 1;
          } while (uVar51 < uVar23);
        }
      }
      auVar62 = _DAT_1430878a0;
      iVar52 = param_5._4_4_ * -2 + uVar34 + (int)uVar36;
      auVar61._4_4_ = iVar52;
      auVar61._0_4_ = iVar52;
      auVar61._8_4_ = iVar52;
      auVar61._12_4_ = iVar52;
      auVar61._16_4_ = iVar52;
      auVar61._20_4_ = iVar52;
      auVar61._24_4_ = iVar52;
      auVar61._28_4_ = iVar52;
      auVar60 = vpaddd_avx2(auVar61,_DAT_143087920);
      do {
        *(undefined1 (*) [32])(uVar46 + uVar36 * 4) = auVar60;
        uVar36 = uVar36 + 8;
        auVar60 = vpaddd_avx2(auVar60,auVar62);
      } while (uVar36 < uStack_138);
    }
    uVar51 = (uint)uStack_138;
    lVar47 = (longlong)(int)uVar51;
    if (uVar51 < uVar44) {
      iVar52 = uVar34 + param_5._4_4_ * -2 + uVar51;
      do {
        uVar51 = uVar51 + 1;
        *(int *)(lVar39 + lVar41 * 0x28 + (longlong)(int)uVar34 * 4 + lVar47 * 4) = iVar52;
        lVar47 = lVar47 + 1;
        iVar52 = iVar52 + 1;
      } while (uVar51 < uVar44);
    }
  }
  auVar60 = _DAT_1430878e0;
  uVar34 = param_5._4_4_ - 1;
  lVar48 = (longlong)(int)((uint)param_5 & 0xfffffff8);
  param_1 = param_1 + (int)(param_2 * uVar34);
  lVar47 = lVar38 * 4;
  auVar62._4_4_ = uVar34;
  auVar62._0_4_ = uVar34;
  auVar62._8_4_ = uVar34;
  auVar62._12_4_ = uVar34;
  auVar62._16_4_ = uVar34;
  auVar62._20_4_ = uVar34;
  auVar62._24_4_ = uVar34;
  auVar62._28_4_ = uVar34;
  lVar24 = 0;
  uVar46 = uVar21;
  lVar40 = lVar47;
  if (0 < lVar48) {
    do {
      puVar54 = (ulonglong *)(param_1 + lVar24);
      pauVar31 = (undefined1 (*) [32])(param_3 + lVar24 * 4);
      lVar40 = (longlong)(int)(param_5._4_4_ * 8 + -8);
      auVar61 = auVar62;
      for (uVar51 = uVar34; -1 < (int)uVar51; uVar51 = uVar51 - 1) {
        auVar61 = vpaddd_avx2(auVar61,auVar60);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *puVar54;
        auVar63 = vpmovzxbd_avx2(auVar7);
        puVar54 = (ulonglong *)((longlong)puVar54 - lVar22);
        auVar63 = vpcmpgtd_avx2(auVar63,(undefined1  [32])0x0);
        auVar61 = vpand_avx2(auVar63,auVar61);
        *(undefined1 (*) [32])(lVar29 + lVar40 * 4) = auVar61;
        lVar40 = lVar40 + -8;
      }
      lVar40 = 0;
      iVar52 = 0;
      auVar61 = auVar62;
      do {
        auVar61 = vpaddd_avx2(auVar61,auVar60);
        iVar52 = iVar52 + 1;
        auVar65 = vpsubd_avx2(auVar61,*(undefined1 (*) [32])(lVar29 + lVar40 * 4));
        lVar40 = lVar40 + 8;
        auVar63 = vpcmpgtd_avx2(auVar65,(undefined1  [32])0x0);
        auVar63 = vpand_avx2(auVar65,auVar63);
        auVar61 = vpsubd_avx2(auVar61,auVar63);
        auVar63 = vpmulld_avx2(auVar61,auVar61);
        auVar65 = vpcmpgtd_avx2(auVar61,auVar62);
        auVar63 = vcvtdq2ps_avx(auVar63);
        auVar65 = vcvtdq2ps_avx(auVar65);
        auVar63 = vblendvps_avx(auVar63,auVar64,auVar65);
        *pauVar31 = auVar63;
        pauVar31 = (undefined1 (*) [32])(*pauVar31 + lVar38 * 4);
      } while (iVar52 < (int)param_5._4_4_);
      lVar24 = lVar24 + 8;
    } while (lVar24 < lVar48);
    lVar40 = lVar38 << 2;
    uVar46 = (ulonglong)param_5._4_4_;
  }
  lVar40 = -lVar40;
  uVar36 = uVar46 >> 1;
  uVar51 = (uint)uVar36 & 0x7fffffff;
  uVar28 = 0;
  if (lVar48 < (longlong)uVar26) {
    lVar29 = param_1 + lVar48;
    lVar24 = param_3 + lVar48 * 4;
    uVar56 = (ulonglong)uVar51;
    lStack_c8 = lVar40 + lVar38 * 4;
    lVar43 = lVar41 * 8 + uVar21 * 4;
    lVar2 = lVar39 + lVar41 * 8;
    lVar3 = lVar39 + lVar43;
    lStack_98 = lVar40 + lVar38 * 8;
    lVar4 = lVar39 + lVar41 * 0x28;
    do {
      if (-1 < (int)uVar34) {
        uVar44 = uVar34;
        if ((((int)uVar46 < 7) || (-lVar22 < 4)) ||
           ((lVar37 = (lVar39 + -4 + lVar43) - lVar29, lVar37 <= (longlong)(uVar21 * 4) &&
            (lVar49 = (uVar21 - 1) * lVar22 + 1, -lVar49 == lVar37 || -lVar37 < lVar49)))) {
          iVar52 = 1;
          lVar49 = 0;
          lVar37 = 0;
          if ((uVar36 & 0x7fffffff) != 0) {
            uVar55 = 0;
            do {
              uVar42 = uVar55;
              uVar44 = uVar44 + 1 & -(uint)(*(char *)(lVar29 + lVar37 * 2) != '\0');
              uVar55 = uVar42 + 1;
              *(uint *)(lVar49 + -4 + lVar3) = uVar44;
              lVar1 = lVar37 * 2;
              lVar37 = lVar37 + lVar20;
              uVar44 = uVar44 + 1 & -(uint)(*(char *)(-lVar22 + lVar29 + lVar1) != '\0');
              *(uint *)(lVar49 + -8 + lVar3) = uVar44;
              lVar49 = lVar49 + -8;
            } while (uVar55 < uVar56);
            iVar52 = (int)uVar42 + 2 + (int)uVar55;
            uVar46 = uVar46 & 0xffffffff;
          }
          if (iVar52 - 1U < (uint)uVar46) goto LAB_140138893;
        }
        else {
          iVar52 = 1;
          lVar49 = 0;
          lVar37 = 0;
          if ((uVar36 & 0x7fffffff) != 0) {
            uVar55 = 0;
            do {
              uVar42 = uVar55;
              uVar44 = uVar44 + 1 & -(uint)(*(char *)(lVar29 + lVar37 * 2) != '\0');
              uVar55 = uVar42 + 1;
              *(uint *)(lVar49 + -4 + lVar3) = uVar44;
              lVar1 = lVar37 * 2;
              lVar37 = lVar37 + lVar20;
              uVar44 = uVar44 + 1 & -(uint)(*(char *)(-lVar22 + lVar29 + lVar1) != '\0');
              *(uint *)(lVar49 + -8 + lVar3) = uVar44;
              lVar49 = lVar49 + -8;
            } while (uVar55 < uVar56);
            iVar52 = (int)uVar42 + 2 + (int)uVar55;
            uVar46 = uVar46 & 0xffffffff;
          }
          if (iVar52 - 1U < (uint)uVar46) {
LAB_140138893:
            *(uint *)((longlong)iVar52 * -4 + lVar3) =
                 uVar44 + 1 & -(uint)(*(char *)((lVar22 - lVar22 * iVar52) + lVar29) != '\0');
          }
        }
      }
      uVar55 = (ulonglong)uVar34;
      iVar52 = 1;
      lVar37 = 0;
      uVar23 = (uint)uVar46;
      uVar44 = uVar34;
      if ((uVar36 & 0x7fffffff) != 0) {
        uVar42 = 0;
        do {
          uVar32 = uVar42;
          iVar52 = ((int)uVar55 + 1) -
                   *(int *)(lVar4 + 4 +
                           (longlong)
                           (int)(((int)uVar55 + uVar23 * 2) - *(int *)(lVar2 + uVar32 * 8)) * 4);
          *(int *)(lVar2 + uVar32 * 8) = iVar52;
          *(undefined4 *)(lVar40 + lVar38 * 4 + lVar24 + lVar37 * 8) =
               *(undefined4 *)(lVar39 + (longlong)iVar52 * 4);
          uVar44 = (iVar52 + 1) -
                   *(int *)(lVar4 + 4 +
                           (longlong)(int)((iVar52 + uVar23 * 2) - *(int *)(lVar2 + 4 + uVar32 * 8))
                           * 4);
          *(uint *)(lVar2 + 4 + uVar32 * 8) = uVar44;
          uVar55 = (ulonglong)(int)uVar44;
          uVar42 = uVar32 + 1;
          *(undefined4 *)(lStack_98 + lVar24 + lVar37 * 8) = *(undefined4 *)(lVar39 + uVar55 * 4);
          lVar37 = lVar37 + lVar38;
        } while (uVar42 < uVar56);
        iVar52 = (int)uVar32 + 2 + (int)uVar42;
      }
      if (iVar52 - 1U < uVar23) {
        lVar37 = (longlong)iVar52;
        iVar52 = (uVar44 + 1) -
                 *(int *)(lVar4 + 4 +
                         (longlong)(int)((uVar44 + uVar23 * 2) - *(int *)(lVar2 + -4 + lVar37 * 4))
                         * 4);
        *(int *)(lVar2 + -4 + lVar37 * 4) = iVar52;
        *(undefined4 *)(lVar37 * lVar47 + lVar40 + lStack_c8 + lVar24) =
             *(undefined4 *)(lVar39 + (longlong)iVar52 * 4);
      }
      uVar28 = uVar28 + 1;
      lVar24 = lVar24 + 4;
      lVar29 = lVar29 + 1;
    } while (uVar28 < uVar26 - lVar48);
  }
  else {
    lStack_c8 = lVar40 + lVar38 * 4;
    lStack_98 = lVar40 + lVar38 * 8;
  }
  uStack_90 = (ulonglong)uVar51;
  uVar51 = 0;
  uVar28 = -(param_6 & 0xf) & 0xf;
  puVar25 = (undefined4 *)(param_6 + uVar28);
  uVar44 = (uint)uVar46;
  if (0xf < (int)uVar44) {
    puVar6 = puVar25 + uVar21;
    if ((int)uVar44 < 0x1d) {
      uVar56 = 0;
      uVar23 = uVar51;
      uVar51 = uVar44 & 0xfffffff0;
    }
    else {
      uVar56 = (ulonglong)puVar6 & 0x1f;
      if ((int)uVar56 != 0) {
        if (((ulonglong)puVar6 & 3) != 0) goto LAB_140138b80;
        uVar56 = (ulonglong)(0x20U - (int)uVar56 >> 2);
      }
      uVar23 = (uint)uVar56;
      if ((int)uVar44 < (int)(uVar23 + 0x10)) goto LAB_140138b80;
      uVar51 = uVar44 - (uVar44 - uVar23 & 0xf);
      if (uVar23 != 0) {
        uVar55 = 0;
        do {
          puVar25[uVar55] = (float)((int)uVar55 * (int)uVar55);
          puVar6[uVar55] = uVar19;
          uVar55 = uVar55 + 1;
        } while (uVar55 < uVar56);
      }
    }
    auVar62 = _DAT_1430878a0;
    auVar63._4_4_ = uVar23;
    auVar63._0_4_ = uVar23;
    auVar63._8_4_ = uVar23;
    auVar63._12_4_ = uVar23;
    auVar63._16_4_ = uVar23;
    auVar63._20_4_ = uVar23;
    auVar63._24_4_ = uVar23;
    auVar63._28_4_ = uVar23;
    auVar60 = vpaddd_avx2(auVar63,_DAT_143087920);
    do {
      auVar61 = vpmulld_avx2(auVar60,auVar60);
      auVar61 = vcvtdq2ps_avx(auVar61);
      auVar63 = vpaddd_avx2(auVar60,auVar62);
      *(undefined1 (*) [32])(puVar25 + uVar56) = auVar61;
      *(undefined1 (*) [32])(puVar6 + uVar56) = auVar64;
      auVar60 = vpmulld_avx2(auVar63,auVar63);
      auVar60 = vcvtdq2ps_avx(auVar60);
      *(undefined1 (*) [32])(puVar25 + uVar56 + 8) = auVar60;
      *(undefined1 (*) [32])(puVar6 + uVar56 + 8) = auVar64;
      auVar60 = vpaddd_avx2(auVar63,auVar62);
      uVar56 = uVar56 + 0x10;
    } while (uVar56 < (ulonglong)(longlong)(int)uVar51);
  }
LAB_140138b80:
  uVar18 = _UNK_143087958;
  uVar17 = _DAT_143087950;
  auVar7 = _DAT_143087940;
  if (uVar51 + 1 <= uVar44) {
    uVar44 = uVar44 - uVar51;
    if ((int)uVar44 < 4) {
      uVar56 = 0;
    }
    else {
      auVar8 = vpunpckldq_avx(ZEXT416(uVar51),ZEXT416(uVar51 + 1));
      auVar9 = vpunpckldq_avx(ZEXT416(uVar51 + 2),ZEXT416(uVar51 + 3));
      uVar55 = 0;
      uVar56 = (ulonglong)(int)(uVar44 & 0xfffffffc);
      auVar8 = vpunpcklqdq_avx(auVar8,auVar9);
      do {
        auVar9 = vpmulld_avx(auVar8,auVar8);
        auVar8 = vpaddd_avx(auVar8,auVar7);
        auVar9 = vcvtdq2ps_avx(auVar9);
        *(undefined1 (*) [16])(puVar25 + (longlong)(int)uVar51 + uVar55) = auVar9;
        *(undefined8 *)(puVar25 + uVar21 + (longlong)(int)uVar51 + uVar55) = uVar17;
        *(undefined8 *)((longlong)(puVar25 + uVar21 + (longlong)(int)uVar51 + uVar55) + 8) = uVar18;
        uVar55 = uVar55 + 4;
      } while (uVar55 < uVar56);
    }
    iVar52 = uVar51 + (uint)uVar56;
    if ((uint)uVar56 < uVar44) {
      uVar55 = uVar56 & 0xffffffff;
      do {
        uVar23 = (int)uVar55 + 1;
        uVar55 = (ulonglong)uVar23;
        puVar25[(longlong)(int)uVar51 + uVar56] = (float)(iVar52 * iVar52);
        iVar52 = iVar52 + 1;
        puVar25[uVar21 + (longlong)(int)uVar51 + uVar56] = uVar19;
        uVar56 = uVar56 + 1;
      } while (uVar23 < uVar44);
      uVar46 = uVar46 & 0xffffffff;
    }
  }
  uVar44 = 0;
  uVar51 = 0;
  if ((int)uVar33 < 1) {
    puStack_108 = puVar25 + lVar41 * 3;
  }
  else {
    if ((int)uVar33 < 0x10) {
      puStack_108 = puVar25 + lVar41 * 3;
    }
    else {
      puStack_108 = puVar25 + lVar41 * 3;
      if ((int)uVar33 < 0x1d) {
        uVar56 = 0;
        uVar44 = uVar33 & 0xfffffff0;
      }
      else {
        uVar51 = (uint)puStack_108 & 0x1f;
        if (((ulonglong)puStack_108 & 0x1f) != 0) {
          if (((ulonglong)puStack_108 & 3) != 0) goto LAB_140138dc1;
          uVar51 = 0x20 - uVar51 >> 2;
        }
        if ((int)uVar33 < (int)(uVar51 + 0x10)) goto LAB_140138dc1;
        uVar44 = uVar33 - (uVar33 - uVar51 & 0xf);
        uVar56 = (ulonglong)uVar51;
        uVar55 = 0;
        if (uVar51 != 0) {
          do {
            puStack_108[uVar55] = 0;
            uVar55 = uVar55 + 1;
          } while (uVar55 < uVar56);
        }
      }
      do {
        *(undefined1 (*) [32])(puStack_108 + uVar56) = (undefined1  [32])0x0;
        *(undefined1 (*) [32])(puStack_108 + uVar56 + 8) = (undefined1  [32])0x0;
        uVar56 = uVar56 + 0x10;
      } while (uVar56 < (ulonglong)(longlong)(int)uVar44);
    }
LAB_140138dc1:
    uVar51 = uVar44;
    if (uVar44 + 1 <= uVar33) {
      lVar29 = (longlong)(int)uVar44;
      uVar56 = (int)uVar33 - lVar29;
      if ((longlong)uVar56 < 4) {
        uVar33 = 0;
      }
      else {
        uVar33 = (uint)uVar56 & 0xfffffffc;
        uVar55 = 0;
        do {
          *(undefined1 (*) [16])(puStack_108 + lVar29 + uVar55) = (undefined1  [16])0x0;
          uVar55 = uVar55 + 4;
        } while (uVar55 < (ulonglong)(longlong)(int)uVar33);
        uVar51 = uVar44 + uVar33;
      }
      uVar55 = (ulonglong)(int)uVar33;
      if (uVar55 < uVar56) {
        do {
          puStack_108[lVar29 + uVar55] = 0;
          uVar55 = uVar55 + 1;
        } while (uVar55 < uVar56);
        uVar51 = (int)uVar55 + uVar44;
      }
    }
  }
  uVar33 = 0;
  if ((int)uVar51 <= iVar50) {
    uVar44 = (iVar50 - uVar51) + 1;
    iVar50 = (int)uVar46;
    if ((int)uVar44 < 8) {
LAB_1401399c8:
      uVar56 = 0;
    }
    else {
      puVar6 = puStack_108 + (int)uVar51;
      if ((int)uVar44 < 0x9d) {
        uVar56 = (ulonglong)(int)(uVar44 & 0xfffffff8);
      }
      else {
        uVar33 = (uint)puVar6 & 0x1f;
        if (((ulonglong)puVar6 & 0x1f) != 0) {
          if (((ulonglong)puVar6 & 3) != 0) goto LAB_1401399c8;
          uVar33 = 0x20 - uVar33 >> 2;
        }
        if ((int)uVar44 < (int)(uVar33 + 8)) goto LAB_1401399c8;
        uVar56 = (longlong)(int)uVar44 - (ulonglong)(uVar44 - uVar33 & 7);
        if (uVar33 != 0) {
          iVar52 = uVar51 + iVar50 * -2;
          lVar29 = 0;
          uStack_118 = 0;
          do {
            uStack_118 = uStack_118 + 1;
            puVar6[lVar29] = iVar52;
            lVar29 = lVar29 + 1;
            iVar52 = iVar52 + 1;
          } while (uStack_118 < uVar33);
        }
      }
      auVar60 = _DAT_1430878a0;
      iVar52 = iVar50 * -2 + uVar51 + uVar33;
      auVar64._4_4_ = iVar52;
      auVar64._0_4_ = iVar52;
      auVar64._8_4_ = iVar52;
      auVar64._12_4_ = iVar52;
      auVar64._16_4_ = iVar52;
      auVar64._20_4_ = iVar52;
      auVar64._24_4_ = iVar52;
      auVar64._28_4_ = iVar52;
      auVar64 = vpaddd_avx2(auVar64,_DAT_143087920);
      uVar55 = (ulonglong)uVar33;
      do {
        *(undefined1 (*) [32])(puVar6 + uVar55) = auVar64;
        uVar55 = uVar55 + 8;
        auVar64 = vpaddd_avx2(auVar64,auVar60);
      } while (uVar55 < uVar56);
    }
    uVar33 = (uint)uVar56;
    uVar56 = uVar56 & 0xffffffff;
    lVar29 = (longlong)(int)uVar33;
    if (uVar33 < uVar44) {
      iVar50 = uVar51 + iVar50 * -2 + uVar33;
      do {
        uVar33 = (int)uVar56 + 1;
        uVar56 = (ulonglong)uVar33;
        puStack_108[(int)uVar51 + lVar29] = iVar50;
        lVar29 = lVar29 + 1;
        iVar50 = iVar50 + 1;
      } while (uVar33 < uVar44);
    }
  }
  lVar29 = lVar41 * 8 + uVar21 * 4;
  uVar56 = 0;
  lVar39 = param_3;
  do {
    if (-1 < (int)uVar34) {
      uVar33 = uVar34;
      if ((((int)uVar46 < 7) || (-lVar22 < 4)) ||
         ((lVar24 = (longlong)puVar25 + ((lVar29 + -4) - param_1), lVar24 <= (longlong)(uVar21 * 4)
          && (lVar48 = (uVar21 - 1) * lVar22 + 1, -lVar48 == lVar24 || -lVar24 < lVar48)))) {
        iVar50 = 1;
        lVar48 = 0;
        lVar24 = 0;
        if ((uVar36 & 0x7fffffff) != 0) {
          uVar55 = 0;
          do {
            uVar42 = uVar55;
            uVar33 = uVar33 + 1 & -(uint)(*(char *)(param_1 + lVar24 * 2) != '\0');
            uVar55 = uVar42 + 1;
            *(uint *)((longlong)puVar25 + lVar48 + -4 + lVar29) = uVar33;
            lVar43 = lVar24 * 2;
            lVar24 = lVar24 + lVar20;
            uVar33 = uVar33 + 1 & -(uint)(*(char *)(-lVar22 + param_1 + lVar43) != '\0');
            *(uint *)((longlong)puVar25 + lVar48 + -8 + lVar29) = uVar33;
            lVar48 = lVar48 + -8;
          } while (uVar55 < uStack_90);
          iVar50 = (int)uVar42 + 2 + (int)uVar55;
          uVar46 = uVar46 & 0xffffffff;
        }
        if (iVar50 - 1U < (uint)uVar46) goto LAB_1401392c6;
      }
      else {
        iVar50 = 1;
        lVar48 = 0;
        lVar24 = 0;
        if ((uVar36 & 0x7fffffff) != 0) {
          uVar55 = 0;
          do {
            uVar42 = uVar55;
            uVar33 = uVar33 + 1 & -(uint)(*(char *)(param_1 + lVar24 * 2) != '\0');
            uVar55 = uVar42 + 1;
            *(uint *)((longlong)puVar25 + lVar48 + -4 + lVar29) = uVar33;
            lVar43 = lVar24 * 2;
            lVar24 = lVar24 + lVar20;
            uVar33 = uVar33 + 1 & -(uint)(*(char *)(-lVar22 + param_1 + lVar43) != '\0');
            *(uint *)((longlong)puVar25 + lVar48 + -8 + lVar29) = uVar33;
            lVar48 = lVar48 + -8;
          } while (uVar55 < uStack_90);
          iVar50 = (int)uVar42 + 2 + (int)uVar55;
          uVar46 = uVar46 & 0xffffffff;
        }
        if (iVar50 - 1U < (uint)uVar46) {
LAB_1401392c6:
          puVar25[uVar21 + (lVar41 * 2 - (longlong)iVar50)] =
               uVar33 + 1 & -(uint)(*(char *)((lVar22 - lVar22 * iVar50) + param_1) != '\0');
        }
      }
    }
    uVar55 = (ulonglong)uVar34;
    iVar50 = 1;
    lVar24 = 0;
    uVar51 = (uint)uVar46;
    uVar33 = uVar34;
    if ((uVar36 & 0x7fffffff) != 0) {
      uVar42 = 0;
      do {
        uVar32 = uVar42;
        iVar50 = ((int)uVar55 + 1) -
                 puStack_108
                 [(longlong)(int)(((int)uVar55 + uVar51 * 2) - puVar25[lVar41 * 2 + uVar32 * 2]) + 1
                 ];
        puVar25[lVar41 * 2 + uVar32 * 2] = iVar50;
        *(undefined4 *)(lVar40 + lVar38 * 4 + lVar39 + lVar24 * 8) = puVar25[iVar50];
        uVar33 = (iVar50 + 1) -
                 puStack_108
                 [(longlong)(int)((iVar50 + uVar51 * 2) - puVar25[lVar41 * 2 + uVar32 * 2 + 1]) + 1]
        ;
        puVar25[lVar41 * 2 + uVar32 * 2 + 1] = uVar33;
        uVar55 = (ulonglong)(int)uVar33;
        uVar42 = uVar32 + 1;
        *(undefined4 *)(lStack_98 + lVar39 + lVar24 * 8) = puVar25[uVar55];
        lVar24 = lVar24 + lVar38;
      } while (uVar42 < uStack_90);
      iVar50 = (int)uVar32 + 2 + (int)uVar42;
    }
    if (iVar50 - 1U < uVar51) {
      lVar24 = (longlong)iVar50;
      iVar50 = (uVar33 + 1) -
               puStack_108
               [(longlong)(int)((uVar33 + uVar51 * 2) - puVar25[lVar41 * 2 + lVar24 + -1]) + 1];
      puVar25[lVar41 * 2 + lVar24 + -1] = iVar50;
      *(undefined4 *)(lVar24 * lVar47 + lStack_c8 + lVar40 + lVar39) = puVar25[iVar50];
    }
    uVar56 = uVar56 + 1;
    lVar39 = lVar39 + 4;
    param_1 = param_1 + 1;
  } while (uVar56 < uVar26);
  *puVar25 = 0;
  puVar25[lVar30] = 0;
  fVar57 = _DAT_143087978;
  if ((int)(uint)param_5 < 2) goto LAB_140139849;
  puVar6 = puVar25 + lVar30;
  uVar28 = param_6 + 4 + uVar28;
  lVar20 = uVar26 * 4 + -4;
  if (((longlong)(uVar28 - (longlong)(puVar6 + 1)) < lVar20) &&
     ((longlong)-(uVar28 - (longlong)(puVar6 + 1)) < lVar20)) {
    iVar50 = 1;
    uVar34 = 0;
    lVar20 = 0;
    uVar33 = (uint)param_5 - 1 >> 1;
    if (uVar33 != 0) {
      do {
        iVar50 = uVar34 * 2 + 1;
        puVar6[lVar20 * 2 + 1] = fVar57 / (float)iVar50;
        iVar52 = uVar34 * 2 + 2;
        puVar25[lVar20 * 2 + 1] = (float)(iVar50 * iVar50);
        uVar34 = uVar34 + 1;
        puVar6[lVar20 * 2 + 2] = fVar57 / (float)iVar52;
        puVar25[lVar20 * 2 + 2] = (float)(iVar52 * iVar52);
        lVar20 = lVar20 + 1;
      } while (uVar34 < uVar33);
      iVar50 = uVar34 * 2 + 1;
    }
    if (iVar50 - 1U < (uint)param_5 - 1) {
      puVar6[iVar50] = _DAT_143087978 / (float)iVar50;
      puVar25[iVar50] = (float)(iVar50 * iVar50);
    }
    goto LAB_140139849;
  }
  uVar33 = (uint)param_5 - 1;
  if ((int)uVar33 < 0x10) {
LAB_1401399f4:
    uVar34 = 0;
  }
  else {
    if ((int)uVar33 < 0x1d) {
      uVar46 = 0;
      uVar34 = uVar33 & 0xfffffff0;
    }
    else {
      uVar51 = (uint)uVar28 & 0x1f;
      if ((uVar28 & 0x1f) != 0) {
        if ((uVar28 & 3) != 0) goto LAB_1401399f4;
        uVar51 = 0x20 - uVar51 >> 2;
      }
      uVar46 = (ulonglong)uVar51;
      if ((int)uVar33 < (int)(uVar51 + 0x10)) goto LAB_1401399f4;
      uVar44 = 0;
      lVar20 = 0;
      uVar34 = uVar33 - (uVar33 - uVar51 & 0xf);
      if (uVar51 != 0) {
        do {
          uVar44 = uVar44 + 1;
          puVar6[lVar20 + 1] = fVar57 / (float)(int)uVar44;
          puVar25[lVar20 + 1] = (float)(int)(uVar44 * uVar44);
          lVar20 = lVar20 + 1;
        } while (uVar44 < uVar51);
      }
    }
    fVar16 = _UNK_143087918;
    fVar15 = _UNK_143087914;
    fVar14 = _UNK_143087910;
    fVar13 = _UNK_14308790c;
    fVar12 = _UNK_143087908;
    fVar58 = _UNK_143087904;
    fVar57 = _DAT_143087900;
    auVar60 = _DAT_1430878a0;
    iVar50 = (int)uVar46 + 1;
    auVar65._4_4_ = _DAT_14308797c;
    auVar65._0_4_ = _DAT_14308797c;
    auVar65._8_4_ = _DAT_14308797c;
    auVar65._12_4_ = _DAT_14308797c;
    auVar65._16_4_ = _DAT_14308797c;
    auVar65._20_4_ = _DAT_14308797c;
    auVar65._24_4_ = _DAT_14308797c;
    auVar65._28_4_ = _DAT_14308797c;
    auVar66._4_4_ = iVar50;
    auVar66._0_4_ = iVar50;
    auVar66._8_4_ = iVar50;
    auVar66._12_4_ = iVar50;
    auVar66._16_4_ = iVar50;
    auVar66._20_4_ = iVar50;
    auVar66._24_4_ = iVar50;
    auVar66._28_4_ = iVar50;
    auVar64 = vpaddd_avx2(auVar66,_DAT_143087920);
    do {
      auVar62 = vcvtdq2ps_avx(auVar64);
      auVar61 = vrcpps_avx(auVar62);
      auVar7 = vfnmadd213ps_fma(auVar62,auVar61,auVar65);
      auVar62 = vpmulld_avx2(auVar64,auVar64);
      auVar63 = vpaddd_avx2(auVar64,auVar60);
      pfVar27 = (float *)(puVar6 + uVar46 + 1);
      *pfVar27 = fVar57 * auVar7._0_4_ * auVar61._0_4_;
      pfVar27[1] = fVar58 * auVar7._4_4_ * auVar61._4_4_;
      pfVar27[2] = fVar12 * auVar7._8_4_ * auVar61._8_4_;
      pfVar27[3] = fVar13 * auVar7._12_4_ * auVar61._12_4_;
      pfVar27[4] = fVar14 * auVar61._16_4_ * 0.0;
      pfVar27[5] = fVar15 * auVar61._20_4_ * 0.0;
      pfVar27[6] = fVar16 * auVar61._24_4_ * 0.0;
      pfVar27[7] = auVar61._28_4_;
      auVar64 = vcvtdq2ps_avx(auVar62);
      auVar62 = vcvtdq2ps_avx(auVar63);
      *(undefined1 (*) [32])(puVar25 + uVar46 + 1) = auVar64;
      auVar64 = vrcpps_avx(auVar62);
      auVar7 = vfnmadd213ps_fma(auVar62,auVar64,auVar65);
      auVar62 = vpmulld_avx2(auVar63,auVar63);
      pfVar27 = (float *)(puVar6 + uVar46 + 9);
      *pfVar27 = fVar57 * auVar7._0_4_ * auVar64._0_4_;
      pfVar27[1] = fVar58 * auVar7._4_4_ * auVar64._4_4_;
      pfVar27[2] = fVar12 * auVar7._8_4_ * auVar64._8_4_;
      pfVar27[3] = fVar13 * auVar7._12_4_ * auVar64._12_4_;
      pfVar27[4] = fVar14 * auVar64._16_4_ * 0.0;
      pfVar27[5] = fVar15 * auVar64._20_4_ * 0.0;
      pfVar27[6] = fVar16 * auVar64._24_4_ * 0.0;
      pfVar27[7] = auVar64._28_4_;
      auVar64 = vpaddd_avx2(auVar63,auVar60);
      auVar62 = vcvtdq2ps_avx(auVar62);
      *(undefined1 (*) [32])(puVar25 + uVar46 + 9) = auVar62;
      uVar46 = uVar46 + 0x10;
    } while (uVar46 < (ulonglong)(longlong)(int)uVar34);
  }
  fVar13 = _UNK_14308796c;
  fVar12 = _UNK_143087968;
  fVar58 = _UNK_143087964;
  fVar57 = _DAT_143087960;
  auVar7 = _DAT_143087940;
  if (uVar34 + 1 <= uVar33) {
    uVar33 = uVar33 - uVar34;
    if ((int)uVar33 < 4) {
      uVar46 = 0;
    }
    else {
      auVar8 = vpunpckldq_avx(ZEXT416(uVar34 + 1),ZEXT416(uVar34 + 2));
      uVar36 = 0;
      auVar9 = vpunpckldq_avx(ZEXT416(uVar34 + 3),ZEXT416(uVar34 + 4));
      auVar59._4_4_ = _DAT_14308797c;
      auVar59._0_4_ = _DAT_14308797c;
      auVar59._8_4_ = _DAT_14308797c;
      auVar59._12_4_ = _DAT_14308797c;
      auVar8 = vpunpcklqdq_avx(auVar8,auVar9);
      uVar46 = (ulonglong)(int)(uVar33 & 0xfffffffc);
      do {
        auVar9 = vcvtdq2ps_avx(auVar8);
        auVar10 = vrcpps_avx(auVar9);
        auVar11 = vfnmadd213ps_fma(auVar9,auVar10,auVar59);
        auVar9 = vpmulld_avx(auVar8,auVar8);
        auVar8 = vpaddd_avx(auVar8,auVar7);
        pfVar27 = (float *)(puVar6 + (longlong)(int)uVar34 + uVar36 + 1);
        *pfVar27 = fVar57 * auVar11._0_4_ * auVar10._0_4_;
        pfVar27[1] = fVar58 * auVar11._4_4_ * auVar10._4_4_;
        pfVar27[2] = fVar12 * auVar11._8_4_ * auVar10._8_4_;
        pfVar27[3] = fVar13 * auVar11._12_4_ * auVar10._12_4_;
        auVar9 = vcvtdq2ps_avx(auVar9);
        *(undefined1 (*) [16])(puVar25 + (longlong)(int)uVar34 + uVar36 + 1) = auVar9;
        uVar36 = uVar36 + 4;
      } while (uVar36 < uVar46);
    }
    fVar57 = _DAT_143087978;
    uVar36 = uVar46 & 0xffffffff;
    if ((uint)uVar46 < uVar33) {
      do {
        iVar50 = (int)uVar36 + 1 + uVar34;
        uVar51 = (int)uVar36 + 1;
        uVar36 = (ulonglong)uVar51;
        puVar6[(longlong)(int)uVar34 + uVar46 + 1] = fVar57 / (float)iVar50;
        puVar25[(longlong)(int)uVar34 + uVar46 + 1] = (float)(iVar50 * iVar50);
        uVar46 = uVar46 + 1;
      } while (uVar51 < uVar33);
    }
  }
LAB_140139849:
  puStack_130 = puVar25 + lVar30;
  puVar6 = puVar25 + lVar30 * 3;
  lVar20 = lVar40 + param_3 + lVar38 * 4;
  uStack_138 = 0;
  lVar41 = 0;
  lVar22 = lVar20;
  do {
    lVar39 = 0;
    puVar25[lVar30 * 4 + 1] = 0;
    *puVar6 = 0xff7fffff;
    puVar6[1] = uVar19;
    puVar25[lVar30 * 2] = *(undefined4 *)(lVar20 + lVar41 * 4);
    uVar46 = 0;
    lVar29 = lVar22;
    if (1 < (int)(uint)param_5) {
      do {
        fVar57 = *(float *)(lVar29 + 4);
        iVar50 = 0;
        puVar25[lVar30 * 2 + uVar46 + 1] = fVar57;
        lVar47 = lVar39 * 4 + lVar30 * 0x10;
        fVar57 = fVar57 + (float)puVar25[uVar46 + 1];
        lVar40 = 0;
        lVar24 = lVar39;
        do {
          iVar50 = iVar50 + 1;
          lVar48 = (longlong)*(int *)((longlong)puVar25 + lVar40 + 4 + lVar47);
          fVar58 = ((fVar57 - *(float *)(lVar22 + lVar48 * 4)) - (float)puVar25[lVar48]) *
                   (float)puStack_130[uVar46 + (1 - lVar48)];
          lVar48 = lVar24;
          if (*(float *)((longlong)puVar6 + lVar40 + lVar39 * 4) < fVar58) break;
          lVar43 = (longlong)*(int *)((longlong)puVar25 + lVar40 + lVar47);
          lVar24 = (longlong)(iVar50 * -2 + (int)lVar39);
          lVar48 = lVar24 + 1;
          fVar58 = ((fVar57 - *(float *)(lVar22 + lVar43 * 4)) - (float)puVar25[lVar43]) *
                   (float)puStack_130[uVar46 + (1 - lVar43)];
          lVar43 = lVar40 + -4;
          lVar40 = lVar40 + -8;
        } while (fVar58 <= *(float *)((longlong)puVar6 + lVar43 + lVar39 * 4));
        lVar39 = lVar48 + 1;
        uVar36 = uVar46 + 1;
        puVar25[lVar30 * 4 + lVar48 + 2] = (int)uVar46 + 1;
        puVar6[lVar39] = fVar58;
        puVar6[lVar48 + 2] = uVar19;
        uVar46 = uVar36;
        lVar29 = lVar29 + 4;
      } while (uVar36 < uVar26 - 1);
    }
    iVar50 = 0;
    uVar36 = 0;
    pfVar27 = (float *)(puVar6 + 1);
    uVar46 = uVar36;
    do {
      iVar53 = (int)uVar46;
      iVar45 = (int)uVar36;
      fVar57 = (float)iVar45;
      iVar52 = iVar53;
      if (*pfVar27 < fVar57) {
        iVar35 = 0;
        do {
          iVar35 = iVar35 + 1;
          iVar52 = iVar53 + -1 + iVar35 * 2;
          pfVar27 = (float *)(puVar6 + (longlong)iVar53 + (longlong)(iVar35 * 2));
          if (fVar57 <= *pfVar27) break;
          pfVar27 = (float *)(puVar6 + (longlong)iVar53 + 1 + (longlong)(iVar35 * 2));
          iVar52 = iVar53 + iVar35 * 2;
        } while (*pfVar27 < fVar57);
      }
      uVar46 = (ulonglong)iVar52;
      uVar34 = iVar45 - puVar25[lVar30 * 4 + uVar46 + 1];
      uVar33 = (int)uVar34 >> 0x1f;
      *(float *)(lVar22 + (longlong)iVar45 * 4) =
           (float)puVar25[(int)((uVar34 ^ uVar33) - uVar33)] +
           (float)puVar25[lVar30 * 2 + (longlong)(int)puVar25[lVar30 * 4 + uVar46 + 1]];
      uVar36 = (ulonglong)(iVar45 + 1U);
    } while (iVar45 + 1U < (uint)param_5);
    uStack_138 = uStack_138 + 1;
    lVar22 = lVar22 + lVar38 * 4;
    lVar41 = lVar41 + lVar38;
    if (uVar21 <= uStack_138) {
      do {
        FUN_141bb2440(param_3,param_3,(uint)param_5);
        iVar50 = iVar50 + 1;
        param_3 = param_3 + lVar38 * 4;
      } while (iVar50 < (int)param_5._4_4_);
      return 0;
    }
  } while( true );
}


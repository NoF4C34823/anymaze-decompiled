
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140136780(longlong param_1,int param_2,longlong param_3,uint param_4,undefined8 param_5,
             ulonglong param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  int iVar40;
  longlong lVar41;
  longlong lVar42;
  uint uVar43;
  ulonglong uVar44;
  float *pfVar45;
  int iVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  float fVar49;
  undefined1 auVar50 [32];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar61;
  float fVar63;
  float fVar65;
  undefined1 auVar53 [16];
  float fVar60;
  float fVar62;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  float fVar64;
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  ulonglong uStack_108;
  undefined4 *puStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined4 *puStack_b8;
  
  uVar19 = _DAT_143087860;
  lVar23 = (longlong)param_2;
  lVar38 = (longlong)(int)((uint)param_5 + 3 & 0xfffffffc);
  lVar21 = (longlong)(int)(param_5._4_4_ + 3 & 0xfffffffc);
  if (((param_1 == 0) || (param_3 == 0)) || (param_6 == 0)) {
    return 0xfffffff8;
  }
  if (((int)(uint)param_5 < 1) || ((int)param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  uVar47 = (ulonglong)(int)(uint)param_5;
  if ((lVar23 < (longlong)uVar47) || ((int)param_4 < (int)((uint)param_5 * 4))) {
    return 0xfffffff0;
  }
  if ((param_4 & 3) != 0) {
    return 0xffffff94;
  }
  uVar33 = -(param_6 & 0xf) & 0xf;
  lVar39 = (longlong)(int)((ulonglong)(longlong)(int)param_4 >> 2);
  puVar1 = (undefined4 *)(param_6 + uVar33);
  uVar44 = (ulonglong)(int)param_5._4_4_;
  if ((int)param_5._4_4_ < 0x10) {
LAB_140137b8d:
    uVar20 = 0;
    if (param_5._4_4_ != 0) {
      uStack_d8 = 0;
      uVar30 = param_5._4_4_;
LAB_140136aed:
      uVar28 = (uint)uStack_d8;
      iVar31 = uVar20 + uVar28;
      if (uVar28 < uVar30) {
        do {
          uVar28 = uVar28 + 1;
          puVar1[(longlong)(int)uVar20 + uStack_d8] = (float)(iVar31 * iVar31);
          iVar31 = iVar31 + 1;
          puVar1[uVar44 + (longlong)(int)uVar20 + uStack_d8] = uVar19;
          uStack_d8 = uStack_d8 + 1;
        } while (uVar28 < uVar30);
      }
    }
  }
  else {
    puVar2 = puVar1 + uVar44;
    uVar30 = (uint)puVar2 & 0x1f;
    if (((ulonglong)puVar2 & 0x1f) != 0) {
      if (((ulonglong)puVar2 & 3) != 0) goto LAB_140137b8d;
      uVar30 = 0x20 - uVar30 >> 2;
    }
    uVar34 = (ulonglong)uVar30;
    if ((int)param_5._4_4_ < (int)(uVar30 + 0x10)) goto LAB_140137b8d;
    uVar29 = 0;
    uVar20 = param_5._4_4_ - (param_5._4_4_ - uVar30 & 0xf);
    if (uVar30 != 0) {
      do {
        puVar1[uVar29] = (float)((int)uVar29 * (int)uVar29);
        puVar2[uVar29] = uVar19;
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar34);
    }
    auVar51 = _DAT_143087820;
    uVar13 = _UNK_1430877f8;
    uVar12 = _UNK_1430877f0;
    uVar11 = _UNK_1430877e8;
    uVar10 = _DAT_1430877e0;
    auVar4 = vpunpckldq_avx(ZEXT416(uVar30),ZEXT416(uVar30 + 1));
    auVar53 = vpunpckldq_avx(ZEXT416(uVar30 + 2),ZEXT416(uVar30 + 3));
    auVar4 = vpunpcklqdq_avx(auVar4,auVar53);
    auVar53 = vpunpckldq_avx(ZEXT416(uVar30 + 4),ZEXT416(uVar30 + 5));
    auVar5 = vpunpckldq_avx(ZEXT416(uVar30 + 6),ZEXT416(uVar30 + 7));
    auVar53 = vpunpcklqdq_avx(auVar53,auVar5);
    uVar29 = (ulonglong)(int)uVar20;
    do {
      auVar5 = vpmulld_avx(auVar4,auVar4);
      auVar4 = vpaddd_avx(auVar4,auVar51);
      auVar69 = vpmulld_avx(auVar53,auVar53);
      auVar54._16_16_ = auVar69;
      auVar54._0_16_ = auVar5;
      auVar50 = vcvtdq2ps_avx(auVar54);
      auVar53 = vpaddd_avx(auVar53,auVar51);
      *(undefined1 (*) [16])(puVar1 + uVar34 + 4) = auVar50._16_16_;
      auVar5 = vpmulld_avx(auVar4,auVar4);
      auVar4 = vpaddd_avx(auVar4,auVar51);
      *(undefined1 (*) [16])(puVar1 + uVar34) = auVar50._0_16_;
      puVar3 = (undefined8 *)(puVar2 + uVar34);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      auVar69 = vpmulld_avx(auVar53,auVar53);
      auVar50._16_16_ = auVar69;
      auVar50._0_16_ = auVar5;
      auVar50 = vcvtdq2ps_avx(auVar50);
      *(undefined1 (*) [16])(puVar1 + uVar34 + 0xc) = auVar50._16_16_;
      *(undefined1 (*) [16])(puVar1 + uVar34 + 8) = auVar50._0_16_;
      puVar3 = (undefined8 *)(puVar2 + uVar34 + 8);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      uVar18 = _UNK_143087848;
      uVar17 = _DAT_143087840;
      auVar5 = _DAT_143087830;
      auVar53 = vpaddd_avx(auVar53,auVar51);
      uVar34 = uVar34 + 0x10;
    } while (uVar34 < uVar29);
    if (uVar20 + 1 <= param_5._4_4_) {
      uVar30 = param_5._4_4_ - uVar20;
      if ((int)uVar30 < 4) {
        uStack_d8 = 0;
      }
      else {
        auVar4 = vpunpckldq_avx(ZEXT416(uVar20),ZEXT416(uVar20 + 1));
        uStack_d8 = (ulonglong)(int)(uVar30 & 0xfffffffc);
        uVar34 = 0;
        auVar53 = vpunpckldq_avx(ZEXT416(uVar20 + 2),ZEXT416(uVar20 + 3));
        auVar4 = vpunpcklqdq_avx(auVar4,auVar53);
        do {
          auVar53 = vpmulld_avx(auVar4,auVar4);
          auVar4 = vpaddd_avx(auVar4,auVar5);
          auVar53 = vcvtdq2ps_avx(auVar53);
          *(undefined1 (*) [16])(puVar1 + uVar29 + uVar34) = auVar53;
          *(undefined8 *)(puVar2 + uVar29 + uVar34) = uVar17;
          *(undefined8 *)((longlong)(puVar2 + uVar29 + uVar34) + 8) = uVar18;
          uVar34 = uVar34 + 4;
        } while (uVar34 < uStack_d8);
      }
      goto LAB_140136aed;
    }
  }
  uVar20 = 0;
  iVar31 = 0;
  uVar30 = param_5._4_4_ * 2;
  if ((int)uVar30 < 1) {
    puStack_b8 = puVar1 + lVar21 * 3;
  }
  else {
    if ((int)uVar30 < 0x10) {
      puStack_b8 = puVar1 + lVar21 * 3;
LAB_140137b58:
      iVar32 = 0;
      if (uVar30 == 0) goto LAB_140136d5b;
      uStack_f8 = (ulonglong)(int)uVar30;
      uVar30 = 0;
    }
    else {
      puStack_b8 = puVar1 + lVar21 * 3;
      uVar28 = (uint)puStack_b8 & 0x1f;
      if (((ulonglong)puStack_b8 & 0x1f) != 0) {
        if (((ulonglong)puStack_b8 & 3) != 0) goto LAB_140137b58;
        uVar28 = 0x20 - uVar28 >> 2;
      }
      if ((int)uVar30 < (int)(uVar28 + 0x10)) goto LAB_140137b58;
      uVar34 = (ulonglong)uVar28;
      iVar31 = uVar30 - (uVar30 - uVar28 & 0xf);
      uVar29 = 0;
      if (uVar28 != 0) {
        do {
          puStack_b8[uVar29] = 0;
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar34);
      }
      uVar29 = (ulonglong)iVar31;
      do {
        *(undefined1 (*) [16])(puStack_b8 + uVar34) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puStack_b8 + uVar34 + 4) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puStack_b8 + uVar34 + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puStack_b8 + uVar34 + 0xc) = (undefined1  [16])0x0;
        uVar34 = uVar34 + 0x10;
      } while (uVar34 < uVar29);
      if (uVar30 < iVar31 + 1U) goto LAB_140136d5b;
      uStack_f8 = (longlong)(int)uVar30 - uVar29;
      iVar32 = iVar31;
      if ((longlong)uStack_f8 < 4) {
        uVar30 = 0;
      }
      else {
        uVar34 = 0;
        uVar30 = (uint)uStack_f8 & 0xfffffffc;
        do {
          *(undefined1 (*) [16])(puStack_b8 + uVar29 + uVar34) = (undefined1  [16])0x0;
          uVar34 = uVar34 + 4;
        } while (uVar34 < (ulonglong)(longlong)(int)uVar30);
        iVar31 = iVar31 + uVar30;
      }
    }
    uVar34 = (ulonglong)(int)uVar30;
    if (uVar34 < uStack_f8) {
      do {
        puStack_b8[(longlong)iVar32 + uVar34] = 0;
        uVar34 = uVar34 + 1;
      } while (uVar34 < uStack_f8);
      iVar31 = (int)uVar34 + iVar32;
    }
  }
LAB_140136d5b:
  if (iVar31 <= (int)(param_5._4_4_ * 3)) {
    uVar30 = (param_5._4_4_ * 3 - iVar31) + 1;
    if ((int)uVar30 < 4) {
LAB_140137940:
      uStack_d0 = 0;
    }
    else {
      puVar2 = puStack_b8 + iVar31;
      uVar28 = (uint)puVar2 & 0xf;
      if (((ulonglong)puVar2 & 0xf) != 0) {
        if (((ulonglong)puVar2 & 3) != 0) goto LAB_140137940;
        uVar28 = 0x10 - uVar28 >> 2;
      }
      if ((int)uVar30 < (int)(uVar28 + 4)) goto LAB_140137940;
      uStack_d0 = (longlong)(int)uVar30 - (ulonglong)(uVar30 - uVar28 & 3);
      if (uVar28 != 0) {
        iVar32 = iVar31 + param_5._4_4_ * -2;
        lVar24 = 0;
        do {
          uVar20 = uVar20 + 1;
          puVar2[lVar24] = iVar32;
          lVar24 = lVar24 + 1;
          iVar32 = iVar32 + 1;
        } while (uVar20 < uVar28);
      }
      auVar5 = _DAT_143087830;
      iVar32 = param_5._4_4_ * -2 + iVar31;
      uVar34 = (ulonglong)uVar28;
      uVar20 = iVar32 + 1 + uVar28;
      auVar4 = vpunpckldq_avx(ZEXT416(uVar28 + iVar32),ZEXT416(uVar20));
      auVar53 = vpunpckldq_avx(ZEXT416(uVar20 + 1),ZEXT416(uVar20 + 2));
      auVar4 = vpunpcklqdq_avx(auVar4,auVar53);
      do {
        *(undefined1 (*) [16])(puVar2 + uVar34) = auVar4;
        uVar34 = uVar34 + 4;
        auVar4 = vpaddd_avx(auVar4,auVar5);
      } while (uVar34 < uStack_d0);
    }
    uVar20 = (uint)uStack_d0;
    lVar24 = (longlong)(int)uVar20;
    if (uVar20 < uVar30) {
      iVar32 = iVar31 + param_5._4_4_ * -2 + uVar20;
      do {
        uVar20 = uVar20 + 1;
        puStack_b8[iVar31 + lVar24] = iVar32;
        lVar24 = lVar24 + 1;
        iVar32 = iVar32 + 1;
      } while (uVar20 < uVar30);
    }
  }
  uVar30 = param_5._4_4_ - 1;
  uVar20 = param_5._4_4_ >> 1;
  uVar29 = (ulonglong)uVar20;
  param_1 = param_1 + (int)(param_2 * uVar30);
  lVar24 = lVar21 * 8 + uVar44 * 4;
  uVar34 = 0;
  lVar25 = param_3;
  uStack_f8 = uVar44;
  do {
    if (-1 < (int)uVar30) {
      uVar28 = uVar30;
      if ((((int)uStack_f8 < 7) || (-lVar23 < 4)) ||
         ((lVar35 = (longlong)puVar1 + ((lVar24 + -4) - param_1), lVar35 <= (longlong)(uVar44 * 4)
          && (lVar41 = (uVar44 - 1) * lVar23 + 1, -lVar41 == lVar35 || -lVar35 < lVar41)))) {
        iVar31 = 1;
        lVar41 = 0;
        lVar35 = 0;
        if (uVar20 != 0) {
          uStack_f8 = uStack_f8 & 0xffffffff;
          uVar48 = 0;
          do {
            uVar37 = uVar48;
            uVar28 = uVar28 + 1 & -(uint)(*(char *)(param_1 + lVar35 * 2) != '\0');
            uVar48 = uVar37 + 1;
            *(uint *)((longlong)puVar1 + lVar41 + -4 + lVar24) = uVar28;
            lVar27 = lVar35 * 2;
            lVar35 = lVar35 + -lVar23;
            uVar28 = uVar28 + 1 & -(uint)(*(char *)(-lVar23 + param_1 + lVar27) != '\0');
            *(uint *)((longlong)puVar1 + lVar41 + -8 + lVar24) = uVar28;
            lVar41 = lVar41 + -8;
          } while (uVar48 < uVar29);
          iVar31 = (int)uVar37 + 2 + (int)uVar48;
        }
        if (iVar31 - 1U < (uint)uStack_f8) goto LAB_14013722d;
      }
      else {
        iVar31 = 1;
        lVar41 = 0;
        lVar35 = 0;
        if (uVar20 != 0) {
          uStack_f8 = uStack_f8 & 0xffffffff;
          uVar48 = 0;
          do {
            uVar37 = uVar48;
            uVar28 = uVar28 + 1 & -(uint)(*(char *)(param_1 + lVar35 * 2) != '\0');
            uVar48 = uVar37 + 1;
            *(uint *)((longlong)puVar1 + lVar41 + -4 + lVar24) = uVar28;
            lVar27 = lVar35 * 2;
            lVar35 = lVar35 + -lVar23;
            uVar28 = uVar28 + 1 & -(uint)(*(char *)(-lVar23 + param_1 + lVar27) != '\0');
            *(uint *)((longlong)puVar1 + lVar41 + -8 + lVar24) = uVar28;
            lVar41 = lVar41 + -8;
          } while (uVar48 < uVar29);
          iVar31 = (int)uVar37 + 2 + (int)uVar48;
        }
        if (iVar31 - 1U < (uint)uStack_f8) {
LAB_14013722d:
          puVar1[uVar44 + (lVar21 * 2 - (longlong)iVar31)] =
               uVar28 + 1 & -(uint)(*(char *)((lVar23 - lVar23 * iVar31) + param_1) != '\0');
        }
      }
    }
    uVar48 = (ulonglong)uVar30;
    iVar31 = 1;
    lVar35 = 0;
    uVar43 = (uint)uStack_f8;
    uVar28 = uVar30;
    if (uVar20 != 0) {
      uVar37 = 0;
      do {
        uVar36 = uVar37;
        iVar31 = ((int)uVar48 + 1) -
                 puStack_b8
                 [(longlong)(int)(((int)uVar48 + uVar43 * 2) - puVar1[lVar21 * 2 + uVar36 * 2]) + 1]
        ;
        puVar1[lVar21 * 2 + uVar36 * 2] = iVar31;
        *(undefined4 *)(lVar25 + lVar35 * 8) = puVar1[iVar31];
        uVar28 = (iVar31 + 1) -
                 puStack_b8
                 [(longlong)(int)((iVar31 + uVar43 * 2) - puVar1[lVar21 * 2 + uVar36 * 2 + 1]) + 1];
        puVar1[lVar21 * 2 + uVar36 * 2 + 1] = uVar28;
        uVar48 = (ulonglong)(int)uVar28;
        uVar37 = uVar36 + 1;
        *(undefined4 *)(lVar39 * 4 + lVar25 + lVar35 * 8) = puVar1[uVar48];
        lVar35 = lVar35 + lVar39;
      } while (uVar37 < uVar29);
      iVar31 = (int)uVar36 + 2 + (int)uVar37;
    }
    if (iVar31 - 1U < uVar43) {
      lVar35 = (longlong)iVar31;
      iVar31 = (uVar28 + 1) -
               puStack_b8
               [(longlong)(int)((uVar28 + uVar43 * 2) - puVar1[lVar21 * 2 + lVar35 + -1]) + 1];
      puVar1[lVar21 * 2 + lVar35 + -1] = iVar31;
      *(undefined4 *)(lVar35 * lVar39 * 4 + lVar39 * -4 + lVar25) = puVar1[iVar31];
    }
    uVar34 = uVar34 + 1;
    lVar25 = lVar25 + 4;
    param_1 = param_1 + 1;
  } while (uVar34 < uVar47);
  *puVar1 = 0;
  puVar1[lVar38] = 0;
  fVar49 = _DAT_143087868;
  if ((int)(uint)param_5 < 2) goto LAB_1401377bb;
  puVar2 = puVar1 + lVar38;
  uVar33 = param_6 + 4 + uVar33;
  lVar21 = uVar47 * 4 + -4;
  if (((longlong)(uVar33 - (longlong)(puVar2 + 1)) < lVar21) &&
     ((longlong)-(uVar33 - (longlong)(puVar2 + 1)) < lVar21)) {
    iVar31 = 1;
    lVar21 = 0;
    uVar20 = (uint)param_5 - 1 >> 1;
    uVar30 = 0;
    if (uVar20 != 0) {
      do {
        uVar28 = uVar30;
        iVar31 = uVar28 * 2 + 1;
        puVar2[lVar21 * 2 + 1] = fVar49 / (float)iVar31;
        iVar32 = uVar28 * 2 + 2;
        puVar1[lVar21 * 2 + 1] = (float)(iVar31 * iVar31);
        uVar30 = uVar28 + 1;
        puVar2[lVar21 * 2 + 2] = fVar49 / (float)iVar32;
        puVar1[lVar21 * 2 + 2] = (float)(iVar32 * iVar32);
        lVar21 = lVar21 + 1;
      } while (uVar30 < uVar20);
      iVar31 = uVar28 + 2 + uVar30;
    }
    if (iVar31 - 1U < (uint)param_5 - 1) {
      puVar2[iVar31] = _DAT_143087868 / (float)iVar31;
      puVar1[iVar31] = (float)(iVar31 * iVar31);
    }
    goto LAB_1401377bb;
  }
  uVar30 = (uint)param_5 - 1;
  if ((int)uVar30 < 0x10) {
LAB_14013794e:
    iVar31 = 0;
    if (uVar30 == 0) goto LAB_1401377bb;
LAB_14013795a:
    uVar33 = 0;
  }
  else {
    uVar20 = (uint)uVar33 & 0x1f;
    if ((uVar33 & 0x1f) != 0) {
      if ((uVar33 & 3) != 0) goto LAB_14013794e;
      uVar20 = 0x20 - uVar20 >> 2;
    }
    uVar33 = (ulonglong)uVar20;
    if ((int)uVar30 < (int)(uVar20 + 0x10)) goto LAB_14013794e;
    uVar28 = 0;
    lVar21 = 0;
    iVar31 = uVar30 - (uVar30 - uVar20 & 0xf);
    if (uVar20 != 0) {
      do {
        uVar28 = uVar28 + 1;
        puVar2[lVar21 + 1] = fVar49 / (float)(int)uVar28;
        puVar1[lVar21 + 1] = (float)(int)(uVar28 * uVar28);
        lVar21 = lVar21 + 1;
      } while (uVar28 < uVar20);
    }
    auVar51 = _DAT_143087820;
    fVar16 = _UNK_143087818;
    fVar15 = _UNK_143087814;
    fVar14 = _UNK_143087810;
    fVar65 = _UNK_14308780c;
    fVar63 = _UNK_143087808;
    fVar61 = _UNK_143087804;
    fVar49 = _DAT_143087800;
    auVar4 = vpunpckldq_avx(ZEXT416(uVar20 + 1),ZEXT416(uVar20 + 2));
    auVar53 = vpunpckldq_avx(ZEXT416(uVar20 + 3),ZEXT416(uVar20 + 4));
    auVar4 = vpunpcklqdq_avx(auVar4,auVar53);
    auVar53 = vpunpckldq_avx(ZEXT416(uVar20 + 5),ZEXT416(uVar20 + 6));
    auVar5 = vpunpckldq_avx(ZEXT416(uVar20 + 7),ZEXT416(uVar20 + 8));
    auVar53 = vpunpcklqdq_avx(auVar53,auVar5);
    uVar34 = (ulonglong)iVar31;
    do {
      auVar55._16_16_ = auVar53;
      auVar55._0_16_ = auVar4;
      auVar50 = vcvtdq2ps_avx(auVar55);
      auVar54 = vrcpps_avx(auVar50);
      fVar52 = auVar54._0_4_;
      fVar60 = auVar54._4_4_;
      fVar62 = auVar54._8_4_;
      fVar64 = auVar54._12_4_;
      fVar66 = auVar54._16_4_;
      fVar67 = auVar54._20_4_;
      fVar68 = auVar54._24_4_;
      auVar6._4_4_ = fVar60 * auVar50._4_4_ * fVar60;
      auVar6._0_4_ = fVar52 * auVar50._0_4_ * fVar52;
      auVar6._8_4_ = fVar62 * auVar50._8_4_ * fVar62;
      auVar6._12_4_ = fVar64 * auVar50._12_4_ * fVar64;
      auVar6._16_4_ = fVar66 * auVar50._16_4_ * fVar66;
      auVar6._20_4_ = fVar67 * auVar50._20_4_ * fVar67;
      auVar6._24_4_ = fVar68 * auVar50._24_4_ * fVar68;
      auVar6._28_4_ = auVar50._28_4_;
      auVar71._0_4_ = fVar52 + fVar52;
      auVar71._4_4_ = fVar60 + fVar60;
      auVar71._8_4_ = fVar62 + fVar62;
      auVar71._12_4_ = fVar64 + fVar64;
      auVar71._16_4_ = fVar66 + fVar66;
      auVar71._20_4_ = fVar67 + fVar67;
      auVar71._24_4_ = fVar68 + fVar68;
      auVar71._28_4_ = auVar54._28_4_ + auVar54._28_4_;
      auVar50 = vsubps_avx(auVar71,auVar6);
      auVar69._0_4_ = fVar49 * auVar50._0_4_;
      auVar69._4_4_ = fVar61 * auVar50._4_4_;
      auVar69._8_4_ = fVar63 * auVar50._8_4_;
      auVar69._12_4_ = fVar65 * auVar50._12_4_;
      auVar7._16_4_ = fVar14 * auVar50._16_4_;
      auVar7._0_16_ = auVar69;
      auVar7._20_4_ = fVar15 * auVar50._20_4_;
      auVar7._24_4_ = fVar16 * auVar50._24_4_;
      auVar7._28_4_ = auVar71._28_4_;
      *(undefined1 (*) [16])(puVar2 + uVar33 + 5) = auVar7._16_16_;
      auVar5 = vpmulld_avx(auVar53,auVar53);
      auVar53 = vpaddd_avx(auVar53,auVar51);
      *(undefined1 (*) [16])(puVar2 + uVar33 + 1) = auVar69;
      auVar69 = vpmulld_avx(auVar4,auVar4);
      auVar4 = vpaddd_avx(auVar4,auVar51);
      auVar56._16_16_ = auVar5;
      auVar56._0_16_ = auVar69;
      auVar50 = vcvtdq2ps_avx(auVar56);
      *(undefined1 (*) [32])(puVar1 + uVar33 + 1) = auVar50;
      auVar57._16_16_ = auVar53;
      auVar57._0_16_ = auVar4;
      auVar50 = vcvtdq2ps_avx(auVar57);
      auVar54 = vrcpps_avx(auVar50);
      fVar52 = auVar54._0_4_;
      fVar60 = auVar54._4_4_;
      fVar62 = auVar54._8_4_;
      fVar64 = auVar54._12_4_;
      fVar66 = auVar54._16_4_;
      fVar67 = auVar54._20_4_;
      fVar68 = auVar54._24_4_;
      auVar8._4_4_ = fVar60 * auVar50._4_4_ * fVar60;
      auVar8._0_4_ = fVar52 * auVar50._0_4_ * fVar52;
      auVar8._8_4_ = fVar62 * auVar50._8_4_ * fVar62;
      auVar8._12_4_ = fVar64 * auVar50._12_4_ * fVar64;
      auVar8._16_4_ = fVar66 * auVar50._16_4_ * fVar66;
      auVar8._20_4_ = fVar67 * auVar50._20_4_ * fVar67;
      auVar8._24_4_ = fVar68 * auVar50._24_4_ * fVar68;
      auVar8._28_4_ = auVar50._28_4_;
      auVar58._0_4_ = fVar52 + fVar52;
      auVar58._4_4_ = fVar60 + fVar60;
      auVar58._8_4_ = fVar62 + fVar62;
      auVar58._12_4_ = fVar64 + fVar64;
      auVar58._16_4_ = fVar66 + fVar66;
      auVar58._20_4_ = fVar67 + fVar67;
      auVar58._24_4_ = fVar68 + fVar68;
      auVar58._28_4_ = auVar54._28_4_ + auVar54._28_4_;
      auVar54 = vsubps_avx(auVar58,auVar8);
      auVar70._0_4_ = fVar49 * auVar54._0_4_;
      auVar70._4_4_ = fVar61 * auVar54._4_4_;
      auVar70._8_4_ = fVar63 * auVar54._8_4_;
      auVar70._12_4_ = fVar65 * auVar54._12_4_;
      auVar9._16_4_ = fVar14 * auVar54._16_4_;
      auVar9._0_16_ = auVar70;
      auVar9._20_4_ = fVar15 * auVar54._20_4_;
      auVar9._24_4_ = fVar16 * auVar54._24_4_;
      auVar9._28_4_ = auVar50._28_4_;
      *(undefined1 (*) [16])(puVar2 + uVar33 + 0xd) = auVar9._16_16_;
      auVar5 = vpmulld_avx(auVar4,auVar4);
      auVar4 = vpaddd_avx(auVar4,auVar51);
      *(undefined1 (*) [16])(puVar2 + uVar33 + 9) = auVar70;
      auVar69 = vpmulld_avx(auVar53,auVar53);
      auVar53 = vpaddd_avx(auVar53,auVar51);
      auVar59._16_16_ = auVar69;
      auVar59._0_16_ = auVar5;
      auVar50 = vcvtdq2ps_avx(auVar59);
      *(undefined1 (*) [32])(puVar1 + uVar33 + 9) = auVar50;
      fVar64 = _UNK_14308785c;
      fVar62 = _UNK_143087858;
      fVar60 = _UNK_143087854;
      fVar52 = _DAT_143087850;
      auVar5 = _DAT_143087830;
      uVar33 = uVar33 + 0x10;
    } while (uVar33 < uVar34);
    if (uVar30 < iVar31 + 1U) goto LAB_1401377bb;
    uVar30 = uVar30 - iVar31;
    if ((int)uVar30 < 4) goto LAB_14013795a;
    auVar4 = vpunpckldq_avx(ZEXT416(iVar31 + 1U),ZEXT416(iVar31 + 2));
    auVar53 = vpunpckldq_avx(ZEXT416(iVar31 + 3),ZEXT416(iVar31 + 4));
    uVar29 = 0;
    uVar33 = (ulonglong)(int)(uVar30 & 0xfffffffc);
    auVar4 = vpunpcklqdq_avx(auVar4,auVar53);
    do {
      auVar53 = vcvtdq2ps_avx(auVar4);
      auVar51 = vrcpps_avx(auVar53);
      fVar49 = auVar51._0_4_;
      fVar61 = auVar51._4_4_;
      fVar63 = auVar51._8_4_;
      fVar65 = auVar51._12_4_;
      auVar51._0_4_ = fVar49 * auVar53._0_4_ * fVar49;
      auVar51._4_4_ = fVar61 * auVar53._4_4_ * fVar61;
      auVar51._8_4_ = fVar63 * auVar53._8_4_ * fVar63;
      auVar51._12_4_ = fVar65 * auVar53._12_4_ * fVar65;
      auVar53._0_4_ = fVar49 + fVar49;
      auVar53._4_4_ = fVar61 + fVar61;
      auVar53._8_4_ = fVar63 + fVar63;
      auVar53._12_4_ = fVar65 + fVar65;
      auVar51 = vsubps_avx(auVar53,auVar51);
      auVar53 = vpmulld_avx(auVar4,auVar4);
      auVar4 = vpaddd_avx(auVar4,auVar5);
      pfVar45 = (float *)(puVar2 + uVar34 + uVar29 + 1);
      *pfVar45 = fVar52 * auVar51._0_4_;
      pfVar45[1] = fVar60 * auVar51._4_4_;
      pfVar45[2] = fVar62 * auVar51._8_4_;
      pfVar45[3] = fVar64 * auVar51._12_4_;
      auVar53 = vcvtdq2ps_avx(auVar53);
      *(undefined1 (*) [16])(puVar1 + uVar34 + uVar29 + 1) = auVar53;
      uVar29 = uVar29 + 4;
    } while (uVar29 < uVar33);
  }
  fVar49 = _DAT_143087868;
  uVar34 = uVar33 & 0xffffffff;
  if ((uint)uVar33 < uVar30) {
    do {
      iVar32 = (int)uVar34 + 1 + iVar31;
      uVar20 = (int)uVar34 + 1;
      uVar34 = (ulonglong)uVar20;
      puVar2[(longlong)iVar31 + uVar33 + 1] = fVar49 / (float)iVar32;
      puVar1[(longlong)iVar31 + uVar33 + 1] = (float)(iVar32 * iVar32);
      uVar33 = uVar33 + 1;
    } while (uVar20 < uVar30);
  }
LAB_1401377bb:
  puStack_100 = puVar1 + lVar38;
  uStack_108 = 0;
  puVar2 = puVar1 + lVar38 * 3;
  lVar23 = 0;
  lVar21 = param_3;
  do {
    lVar25 = 0;
    puVar1[lVar38 * 4 + 1] = 0;
    *puVar2 = 0xff7fffff;
    puVar2[1] = uVar19;
    puVar1[lVar38 * 2] = *(undefined4 *)(param_3 + lVar23 * 4);
    uVar33 = 0;
    lVar24 = lVar21;
    if (1 < (int)(uint)param_5) {
      do {
        fVar49 = *(float *)(lVar24 + 4);
        iVar31 = 0;
        puVar1[lVar38 * 2 + uVar33 + 1] = fVar49;
        lVar35 = lVar25 * 4 + lVar38 * 0x10;
        fVar49 = fVar49 + (float)puVar1[uVar33 + 1];
        lVar41 = 0;
        lVar27 = lVar25;
        do {
          iVar31 = iVar31 + 1;
          lVar26 = (longlong)*(int *)((longlong)puVar1 + lVar41 + 4 + lVar35);
          fVar61 = ((fVar49 - *(float *)(lVar21 + lVar26 * 4)) - (float)puVar1[lVar26]) *
                   (float)puStack_100[uVar33 + (1 - lVar26)];
          lVar26 = lVar27;
          if (*(float *)((longlong)puVar2 + lVar41 + lVar25 * 4) < fVar61) break;
          lVar42 = (longlong)*(int *)((longlong)puVar1 + lVar41 + lVar35);
          lVar27 = (longlong)(iVar31 * -2 + (int)lVar25);
          lVar26 = lVar27 + 1;
          fVar61 = ((fVar49 - *(float *)(lVar21 + lVar42 * 4)) - (float)puVar1[lVar42]) *
                   (float)puStack_100[uVar33 + (1 - lVar42)];
          lVar42 = lVar41 + -4;
          lVar41 = lVar41 + -8;
        } while (fVar61 <= *(float *)((longlong)puVar2 + lVar42 + lVar25 * 4));
        lVar25 = lVar26 + 1;
        uVar34 = uVar33 + 1;
        puVar1[lVar38 * 4 + lVar26 + 2] = (int)uVar33 + 1;
        puVar2[lVar25] = fVar61;
        puVar2[lVar26 + 2] = uVar19;
        uVar33 = uVar34;
        lVar24 = lVar24 + 4;
      } while (uVar34 < uVar47 - 1);
    }
    iVar31 = 0;
    uVar34 = 0;
    pfVar45 = (float *)(puVar2 + 1);
    uVar33 = uVar34;
    do {
      iVar46 = (int)uVar33;
      iVar40 = (int)uVar34;
      fVar49 = (float)iVar40;
      iVar32 = iVar46;
      if (*pfVar45 < fVar49) {
        iVar22 = 0;
        do {
          iVar22 = iVar22 + 1;
          iVar32 = iVar46 + -1 + iVar22 * 2;
          pfVar45 = (float *)(puVar2 + (longlong)iVar46 + (longlong)(iVar22 * 2));
          if (fVar49 <= *pfVar45) break;
          pfVar45 = (float *)(puVar2 + (longlong)iVar46 + 1 + (longlong)(iVar22 * 2));
          iVar32 = iVar46 + iVar22 * 2;
        } while (*pfVar45 < fVar49);
      }
      uVar33 = (ulonglong)iVar32;
      uVar20 = iVar40 - puVar1[lVar38 * 4 + uVar33 + 1];
      uVar30 = (int)uVar20 >> 0x1f;
      *(float *)(lVar21 + (longlong)iVar40 * 4) =
           (float)puVar1[(int)((uVar20 ^ uVar30) - uVar30)] +
           (float)puVar1[lVar38 * 2 + (longlong)(int)puVar1[lVar38 * 4 + uVar33 + 1]];
      uVar34 = (ulonglong)(iVar40 + 1U);
    } while (iVar40 + 1U < (uint)param_5);
    uStack_108 = uStack_108 + 1;
    lVar21 = lVar21 + lVar39 * 4;
    lVar23 = lVar23 + lVar39;
    if (uVar44 <= uStack_108) {
      do {
        FUN_141bb2400(param_3,param_3,(uint)param_5);
        iVar31 = iVar31 + 1;
        param_3 = param_3 + lVar39 * 4;
      } while (iVar31 < (int)param_5._4_4_);
      return 0;
    }
  } while( true );
}


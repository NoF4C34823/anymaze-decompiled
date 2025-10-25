
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140133f80(longlong param_1,int param_2,undefined4 *param_3,uint param_4,undefined8 param_5,
             ulonglong param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 *puVar21;
  float *pfVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  uint uVar44;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar60;
  float fVar61;
  ulonglong uVar62;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ulonglong uVar63;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar64;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  uint uStack_c8;
  
  uVar9 = _DAT_143087770;
  lVar19 = (longlong)param_2;
  lVar12 = (longlong)(int)((int)param_5 + 3U & 0xfffffffc);
  lVar18 = (longlong)(int)(param_5._4_4_ + 3 & 0xfffffffc);
  if (((param_1 == 0) || (param_3 == (undefined4 *)0x0)) || (param_6 == 0)) {
    return 0xfffffff8;
  }
  if (((int)param_5 < 1) || ((int)param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  if ((lVar19 < (int)param_5) || ((int)param_4 < (int)param_5 * 4)) {
    return 0xfffffff0;
  }
  if ((param_4 & 3) != 0) {
    return 0xffffff94;
  }
  uVar17 = -(param_6 & 0xf) & 0xf;
  lVar20 = (longlong)(int)((ulonglong)(longlong)(int)param_4 >> 2);
  puVar21 = (undefined4 *)(param_6 + uVar17);
  if ((int)param_5._4_4_ < 8) {
LAB_1401352f0:
    iVar15 = 0;
    if (param_5._4_4_ != 0) {
      uVar24 = 0;
      uVar25 = param_5._4_4_;
LAB_140134387:
      uVar28 = uVar24 & 0xffffffff;
      iVar13 = (uint)uVar24 + iVar15;
      if ((uint)uVar24 < uVar25) {
        do {
          uVar23 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar23;
          iVar10 = iVar13 * iVar13;
          iVar13 = iVar13 + 1;
          puVar21[(longlong)iVar15 + uVar24] = (float)iVar10;
          puVar21[(longlong)(int)param_5._4_4_ + (longlong)iVar15 + uVar24] = uVar9;
          uVar24 = uVar24 + 1;
        } while (uVar23 < uVar25);
      }
    }
  }
  else {
    puVar14 = puVar21 + (int)param_5._4_4_;
    uVar24 = (ulonglong)puVar14 & 0xf;
    if ((int)uVar24 != 0) {
      if (((ulonglong)puVar14 & 3) != 0) goto LAB_1401352f0;
      uVar24 = (ulonglong)(0x10U - (int)uVar24 >> 2);
    }
    iVar13 = (int)uVar24;
    if ((int)param_5._4_4_ < iVar13 + 8) goto LAB_1401352f0;
    uVar28 = 0;
    iVar15 = param_5._4_4_ - (param_5._4_4_ - iVar13 & 7);
    if (iVar13 != 0) {
      do {
        puVar21[uVar28] = (float)((int)uVar28 * (int)uVar28);
        puVar14[uVar28] = uVar9;
        uVar28 = uVar28 + 1;
      } while (uVar28 < uVar24);
    }
    auVar31 = _DAT_143087750;
    uVar8 = _UNK_14308774c;
    uVar7 = _UNK_143087748;
    uVar6 = _UNK_143087744;
    uVar5 = _DAT_143087740;
    iVar16 = _UNK_14308773c;
    iVar4 = _UNK_143087738;
    iVar3 = _UNK_143087734;
    iVar10 = _DAT_143087730;
    auVar71._4_4_ = iVar13 + 1;
    auVar71._0_4_ = iVar13;
    auVar71._12_4_ = iVar13 + 3;
    auVar71._8_4_ = iVar13 + 2;
    uVar28 = (ulonglong)iVar15;
    if (((ulonglong)(puVar21 + uVar24) & 0xf) == 0) {
      do {
        uVar62 = auVar71._8_8_ >> 0x20;
        uVar25 = auVar71._0_4_;
        auVar67._0_8_ = (ulonglong)uVar25 * (ulonglong)uVar25;
        auVar67._8_8_ = (auVar71._8_8_ & 0xffffffff) * (ulonglong)auVar71._8_4_;
        auVar37._0_4_ = uVar25 + iVar10;
        uVar25 = auVar71._4_4_;
        auVar37._4_4_ = uVar25 + iVar3;
        auVar37._8_4_ = auVar71._8_4_ + iVar4;
        auVar37._12_4_ = auVar71._12_4_ + iVar16;
        auVar68._0_8_ = (ulonglong)uVar25 * (ulonglong)uVar25 << 0x20;
        auVar68._8_8_ = uVar62 * uVar62 << 0x20;
        auVar68 = auVar67 & auVar31 | auVar68;
        pfVar22 = (float *)(puVar21 + uVar24);
        *pfVar22 = (float)auVar68._0_4_;
        pfVar22[1] = (float)auVar68._4_4_;
        pfVar22[2] = (float)auVar68._8_4_;
        pfVar22[3] = (float)auVar68._12_4_;
        uVar62 = auVar37._8_8_ >> 0x20;
        auVar48._0_8_ = (ulonglong)auVar37._0_4_ * (ulonglong)auVar37._0_4_;
        auVar48._8_8_ = (auVar37._8_8_ & 0xffffffff) * (ulonglong)auVar37._8_4_;
        auVar71._0_4_ = auVar37._0_4_ + iVar10;
        auVar71._4_4_ = auVar37._4_4_ + iVar3;
        auVar71._8_4_ = auVar37._8_4_ + iVar4;
        auVar71._12_4_ = auVar37._12_4_ + iVar16;
        auVar49._0_8_ = (ulonglong)auVar37._4_4_ * (ulonglong)auVar37._4_4_ << 0x20;
        auVar49._8_8_ = uVar62 * uVar62 << 0x20;
        auVar49 = auVar48 & auVar31 | auVar49;
        puVar2 = puVar14 + uVar24;
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        pfVar22 = (float *)(puVar21 + uVar24 + 4);
        *pfVar22 = (float)auVar49._0_4_;
        pfVar22[1] = (float)auVar49._4_4_;
        pfVar22[2] = (float)auVar49._8_4_;
        pfVar22[3] = (float)auVar49._12_4_;
        puVar2 = puVar14 + uVar24 + 4;
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        uVar24 = uVar24 + 8;
      } while (uVar24 < uVar28);
    }
    else {
      do {
        uVar62 = auVar71._8_8_ >> 0x20;
        uVar25 = auVar71._0_4_;
        auVar65._0_8_ = (ulonglong)uVar25 * (ulonglong)uVar25;
        auVar65._8_8_ = (auVar71._8_8_ & 0xffffffff) * (ulonglong)auVar71._8_4_;
        auVar36._0_4_ = uVar25 + iVar10;
        uVar25 = auVar71._4_4_;
        auVar36._4_4_ = uVar25 + iVar3;
        auVar36._8_4_ = auVar71._8_4_ + iVar4;
        auVar36._12_4_ = auVar71._12_4_ + iVar16;
        auVar66._0_8_ = (ulonglong)uVar25 * (ulonglong)uVar25 << 0x20;
        auVar66._8_8_ = uVar62 * uVar62 << 0x20;
        auVar66 = auVar65 & auVar31 | auVar66;
        pfVar22 = (float *)(puVar21 + uVar24);
        *pfVar22 = (float)auVar66._0_4_;
        pfVar22[1] = (float)auVar66._4_4_;
        pfVar22[2] = (float)auVar66._8_4_;
        pfVar22[3] = (float)auVar66._12_4_;
        uVar62 = auVar36._8_8_ >> 0x20;
        auVar46._0_8_ = (ulonglong)auVar36._0_4_ * (ulonglong)auVar36._0_4_;
        auVar46._8_8_ = (auVar36._8_8_ & 0xffffffff) * (ulonglong)auVar36._8_4_;
        auVar71._0_4_ = auVar36._0_4_ + iVar10;
        auVar71._4_4_ = auVar36._4_4_ + iVar3;
        auVar71._8_4_ = auVar36._8_4_ + iVar4;
        auVar71._12_4_ = auVar36._12_4_ + iVar16;
        auVar47._0_8_ = (ulonglong)auVar36._4_4_ * (ulonglong)auVar36._4_4_ << 0x20;
        auVar47._8_8_ = uVar62 * uVar62 << 0x20;
        auVar47 = auVar46 & auVar31 | auVar47;
        puVar2 = puVar14 + uVar24;
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        pfVar22 = (float *)(puVar21 + uVar24 + 4);
        *pfVar22 = (float)auVar47._0_4_;
        pfVar22[1] = (float)auVar47._4_4_;
        pfVar22[2] = (float)auVar47._8_4_;
        pfVar22[3] = (float)auVar47._12_4_;
        puVar2 = puVar14 + uVar24 + 4;
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        uVar24 = uVar24 + 8;
      } while (uVar24 < uVar28);
    }
    uVar8 = _UNK_14308774c;
    uVar7 = _UNK_143087748;
    uVar6 = _UNK_143087744;
    uVar5 = _DAT_143087740;
    if (iVar15 + 1U <= param_5._4_4_) {
      uVar25 = param_5._4_4_ - iVar15;
      if ((int)uVar25 < 4) {
        uVar24 = 0;
      }
      else {
        auVar38._4_4_ = iVar15 + 1U;
        auVar38._0_4_ = iVar15;
        uVar24 = (ulonglong)(int)(uVar25 & 0xfffffffc);
        uVar62 = 0;
        auVar38._12_4_ = iVar15 + 3;
        auVar38._8_4_ = iVar15 + 2;
        do {
          uVar63 = auVar38._8_8_ >> 0x20;
          uVar23 = auVar38._0_4_;
          auVar69._0_8_ = (ulonglong)uVar23 * (ulonglong)uVar23;
          auVar69._8_8_ = (auVar38._8_8_ & 0xffffffff) * (ulonglong)auVar38._8_4_;
          auVar39._0_4_ = uVar23 + iVar10;
          uVar23 = auVar38._4_4_;
          auVar39._4_4_ = uVar23 + iVar3;
          auVar39._8_4_ = auVar38._8_4_ + iVar4;
          auVar39._12_4_ = auVar38._12_4_ + iVar16;
          auVar70._0_8_ = (ulonglong)uVar23 * (ulonglong)uVar23 << 0x20;
          auVar70._8_8_ = uVar63 * uVar63 << 0x20;
          auVar70 = auVar69 & auVar31 | auVar70;
          pfVar22 = (float *)(puVar21 + uVar28 + uVar62);
          *pfVar22 = (float)auVar70._0_4_;
          pfVar22[1] = (float)auVar70._4_4_;
          pfVar22[2] = (float)auVar70._8_4_;
          pfVar22[3] = (float)auVar70._12_4_;
          puVar2 = puVar14 + uVar28 + uVar62;
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2[2] = uVar7;
          puVar2[3] = uVar8;
          uVar62 = uVar62 + 4;
          auVar38 = auVar39;
        } while (uVar62 < uVar24);
      }
      goto LAB_140134387;
    }
  }
  iVar13 = 0;
  if (0 < (int)(param_5._4_4_ * 2)) {
    uVar24 = (longlong)(int)param_5._4_4_ * 2;
    if ((longlong)uVar24 < 4) {
LAB_1401352e1:
      iVar13 = 0;
    }
    else {
      puVar14 = puVar21 + lVar18 * 3;
      uVar28 = (ulonglong)puVar14 & 0xf;
      if ((int)uVar28 != 0) {
        if (((ulonglong)puVar14 & 3) != 0) goto LAB_1401352e1;
        uVar28 = (ulonglong)(0x10U - (int)uVar28 >> 2);
      }
      if ((longlong)uVar24 < (longlong)(uVar28 + 4)) goto LAB_1401352e1;
      iVar13 = (int)uVar24 - ((int)uVar24 - (int)uVar28 & 3U);
      uVar62 = 0;
      if ((int)uVar28 != 0) {
        do {
          puVar14[uVar62] = 0;
          uVar62 = uVar62 + 1;
        } while (uVar62 < uVar28);
      }
      do {
        *(undefined1 (*) [16])(puVar14 + uVar28) = (undefined1  [16])0x0;
        uVar28 = uVar28 + 4;
      } while (uVar28 < (ulonglong)(longlong)iVar13);
    }
    uVar28 = (ulonglong)iVar13;
    if (uVar28 < uVar24) {
      do {
        puVar21[lVar18 * 3 + uVar28] = 0;
        uVar28 = uVar28 + 1;
      } while (uVar28 < uVar24);
      iVar13 = (int)uVar28;
    }
  }
  if (iVar13 <= (int)(param_5._4_4_ * 3)) {
    uVar25 = (param_5._4_4_ * 3 - iVar13) + 1;
    if ((int)uVar25 < 4) {
LAB_14013518b:
      uVar28 = 0;
    }
    else {
      puVar14 = puVar21 + lVar18 * 3 + (longlong)iVar13;
      uVar24 = (ulonglong)puVar14 & 0xf;
      if ((int)uVar24 != 0) {
        if (((ulonglong)puVar14 & 3) != 0) goto LAB_14013518b;
        uVar24 = (ulonglong)(0x10U - (int)uVar24 >> 2);
      }
      uVar23 = (uint)uVar24;
      if ((int)uVar25 < (int)(uVar23 + 4)) goto LAB_14013518b;
      uVar28 = (longlong)(int)uVar25 - (ulonglong)(uVar25 - uVar23 & 3);
      if (uVar23 != 0) {
        iVar15 = iVar13 + param_5._4_4_ * -2;
        lVar26 = 0;
        uStack_c8 = 0;
        do {
          uStack_c8 = uStack_c8 + 1;
          puVar14[lVar26] = iVar15;
          lVar26 = lVar26 + 1;
          iVar15 = iVar15 + 1;
        } while (uStack_c8 < uVar23);
      }
      iVar4 = _UNK_14308773c;
      iVar3 = _UNK_143087738;
      iVar10 = _UNK_143087734;
      iVar15 = _DAT_143087730;
      iVar16 = param_5._4_4_ * -2 + iVar13 + uVar23;
      auVar31._4_4_ = iVar16 + 1;
      auVar31._0_4_ = iVar16;
      auVar31._12_4_ = iVar16 + 3;
      auVar31._8_4_ = iVar16 + 2;
      do {
        *(undefined1 (*) [16])(puVar14 + uVar24) = auVar31;
        uVar24 = uVar24 + 4;
        auVar32._0_4_ = auVar31._0_4_ + iVar15;
        auVar32._4_4_ = auVar31._4_4_ + iVar10;
        auVar32._8_4_ = auVar31._8_4_ + iVar3;
        auVar32._12_4_ = auVar31._12_4_ + iVar4;
        auVar31 = auVar32;
      } while (uVar24 < uVar28);
    }
    uVar23 = (uint)uVar28;
    uVar28 = uVar28 & 0xffffffff;
    lVar26 = (longlong)(int)uVar23;
    if (uVar23 < uVar25) {
      iVar15 = iVar13 + param_5._4_4_ * -2 + uVar23;
      do {
        uVar23 = (int)uVar28 + 1;
        uVar28 = (ulonglong)uVar23;
        puVar21[lVar18 * 3 + iVar13 + lVar26] = iVar15;
        lVar26 = lVar26 + 1;
        iVar15 = iVar15 + 1;
      } while (uVar23 < uVar25);
    }
  }
  iVar13 = param_5._4_4_ * 2;
  uVar25 = param_5._4_4_ - 1;
  param_1 = param_1 + (int)(param_2 * uVar25);
  uVar23 = param_5._4_4_ >> 1;
  uVar28 = (ulonglong)uVar23;
  lVar26 = (longlong)(int)param_5._4_4_ * 4 + lVar18 * 8;
  uVar24 = 0;
  puVar14 = param_3;
  do {
    if (-1 < (int)uVar25) {
      uVar11 = uVar25;
      if (((int)param_5._4_4_ < 7) || (-lVar19 < 4)) {
LAB_14013491b:
        uVar62 = 0;
        iVar15 = 1;
        lVar29 = 0;
        lVar27 = 0;
        if (uVar23 != 0) {
          do {
            uVar11 = uVar11 + 1 & -(uint)(*(char *)(param_1 + lVar27 * 2) != '\0');
            uVar62 = uVar62 + 1;
            *(uint *)((longlong)puVar21 + lVar29 + -4 + lVar26) = uVar11;
            lVar1 = lVar27 * 2;
            lVar27 = lVar27 + -lVar19;
            uVar11 = uVar11 + 1 & -(uint)(*(char *)(-lVar19 + param_1 + lVar1) != '\0');
            *(uint *)((longlong)puVar21 + lVar29 + -8 + lVar26) = uVar11;
            lVar29 = lVar29 + -8;
          } while (uVar62 < uVar28);
          iVar15 = (int)uVar62 * 2 + 1;
        }
      }
      else {
        lVar27 = (longlong)puVar21 + ((lVar26 + -4) - param_1);
        if ((lVar27 <= (longlong)(int)param_5._4_4_ * 4) &&
           (lVar29 = ((longlong)(int)param_5._4_4_ + -1) * lVar19 + 1,
           -lVar29 == lVar27 || -lVar27 < lVar29)) goto LAB_14013491b;
        uVar62 = 0;
        iVar15 = 1;
        lVar29 = 0;
        lVar27 = 0;
        if (uVar23 != 0) {
          do {
            uVar11 = uVar11 + 1 & -(uint)(*(char *)(param_1 + lVar27 * 2) != '\0');
            uVar62 = uVar62 + 1;
            *(uint *)((longlong)puVar21 + lVar29 + -4 + lVar26) = uVar11;
            lVar1 = lVar27 * 2;
            lVar27 = lVar27 + -lVar19;
            uVar11 = uVar11 + 1 & -(uint)(*(char *)(-lVar19 + param_1 + lVar1) != '\0');
            *(uint *)((longlong)puVar21 + lVar29 + -8 + lVar26) = uVar11;
            lVar29 = lVar29 + -8;
          } while (uVar62 < uVar28);
          iVar15 = (int)uVar62 * 2 + 1;
        }
      }
      if (iVar15 - 1U < param_5._4_4_) {
        puVar21[lVar18 * 2 + ((longlong)(int)param_5._4_4_ - (longlong)iVar15)] =
             uVar11 + 1 & -(uint)(*(char *)((lVar19 - lVar19 * iVar15) + param_1) != '\0');
      }
    }
    uVar62 = 0;
    uVar63 = (ulonglong)uVar25;
    iVar15 = 1;
    lVar27 = 0;
    uVar11 = uVar25;
    if (uVar23 != 0) {
      do {
        iVar15 = (int)uVar63 +
                 (1 - puVar21[lVar18 * 3 +
                              (longlong)((iVar13 + (int)uVar63) - puVar21[lVar18 * 2 + uVar62 * 2])
                              + 1]);
        puVar21[lVar18 * 2 + uVar62 * 2] = iVar15;
        puVar14[lVar27 * 2] = puVar21[iVar15];
        uVar11 = iVar15 + (1 - puVar21[lVar18 * 3 +
                                       (longlong)
                                       ((iVar13 + iVar15) - puVar21[lVar18 * 2 + uVar62 * 2 + 1]) +
                                       1]);
        puVar21[lVar18 * 2 + uVar62 * 2 + 1] = uVar11;
        uVar62 = uVar62 + 1;
        uVar63 = (ulonglong)(int)uVar11;
        puVar14[lVar20 + lVar27 * 2] = puVar21[uVar63];
        lVar27 = lVar27 + lVar20;
      } while (uVar62 < uVar28);
      iVar15 = (int)uVar62 * 2 + 1;
    }
    if (iVar15 - 1U < param_5._4_4_) {
      lVar27 = (longlong)iVar15;
      iVar15 = uVar11 + (1 - puVar21[lVar18 * 3 +
                                     (longlong)
                                     (int)((iVar13 + uVar11) - puVar21[lVar18 * 2 + lVar27 + -1]) +
                                     1]);
      puVar21[lVar18 * 2 + lVar27 + -1] = iVar15;
      *(undefined4 *)(lVar27 * lVar20 * 4 + lVar20 * -4 + (longlong)puVar14) = puVar21[iVar15];
    }
    uVar24 = uVar24 + 1;
    puVar14 = puVar14 + 1;
    param_1 = param_1 + 1;
  } while (uVar24 < (ulonglong)(longlong)(int)param_5);
  *puVar21 = 0;
  puVar21[lVar12] = 0;
  if ((int)param_5 < 2) goto LAB_14013507b;
  uVar17 = param_6 + 4 + uVar17;
  lVar18 = (longlong)(int)param_5 * 4 + -4;
  if (((longlong)(uVar17 - (longlong)(puVar21 + lVar12 + 1)) < lVar18) &&
     ((longlong)-(uVar17 - (longlong)(puVar21 + lVar12 + 1)) < lVar18)) {
    uVar23 = 0;
    iVar13 = 1;
    lVar18 = 0;
    uVar25 = (int)param_5 - 1U >> 1;
    if (uVar25 != 0) {
      do {
        iVar13 = uVar23 * 2 + 1;
        iVar15 = uVar23 * 2 + 2;
        uVar23 = uVar23 + 1;
        fVar30 = _DAT_143087778 / (float)iVar15;
        puVar21[lVar12 + lVar18 * 2 + 1] = _DAT_143087778 / (float)iVar13;
        puVar21[lVar18 * 2 + 1] = (float)(iVar13 * iVar13);
        puVar21[lVar12 + lVar18 * 2 + 2] = fVar30;
        puVar21[lVar18 * 2 + 2] = (float)(iVar15 * iVar15);
        lVar18 = lVar18 + 1;
      } while (uVar23 < uVar25);
      iVar13 = uVar23 * 2 + 1;
    }
    if (iVar13 - 1U < (int)param_5 - 1U) {
      puVar21[lVar12 + iVar13] = _DAT_143087778 / (float)iVar13;
      puVar21[iVar13] = (float)(iVar13 * iVar13);
    }
    goto LAB_14013507b;
  }
  uVar25 = (int)param_5 - 1;
  if ((int)uVar25 < 8) {
LAB_140135193:
    iVar13 = 0;
    if (uVar25 == 0) goto LAB_14013507b;
LAB_14013519f:
    uVar17 = 0;
  }
  else {
    uVar23 = (uint)uVar17 & 0xf;
    if ((uVar17 & 0xf) != 0) {
      if ((uVar17 & 3) != 0) goto LAB_140135193;
      uVar23 = 0x10 - uVar23 >> 2;
    }
    uVar17 = (ulonglong)uVar23;
    if ((int)uVar25 < (int)(uVar23 + 8)) goto LAB_140135193;
    uVar11 = 0;
    lVar18 = 0;
    iVar13 = uVar25 - (uVar25 - uVar23 & 7);
    if (uVar23 != 0) {
      do {
        uVar11 = uVar11 + 1;
        puVar21[lVar12 + lVar18 + 1] = _DAT_143087778 / (float)(int)uVar11;
        puVar21[lVar18 + 1] = (float)(int)(uVar11 * uVar11);
        lVar18 = lVar18 + 1;
      } while (uVar11 < uVar23);
    }
    auVar31 = _DAT_143087750;
    iVar4 = _UNK_14308773c;
    iVar3 = _UNK_143087738;
    iVar10 = _UNK_143087734;
    iVar15 = _DAT_143087730;
    auVar40._4_4_ = uVar23 + 2;
    auVar40._0_4_ = uVar23 + 1;
    auVar40._12_4_ = uVar23 + 4;
    auVar40._8_4_ = uVar23 + 3;
    fVar30 = (float)DAT_143087760;
    fVar33 = DAT_143087760._4_4_;
    fVar34 = DAT_143087760._8_4_;
    fVar35 = DAT_143087760._12_4_;
    if (((ulonglong)(puVar21 + lVar12 + uVar17 + 1) & 0xf) == 0) {
      auVar79 = unaff_XMM15;
      do {
        uVar23 = auVar40._0_4_;
        auVar54._0_4_ = (float)(int)uVar23;
        uVar11 = auVar40._4_4_;
        auVar54._4_4_ = (float)(int)uVar11;
        uVar44 = auVar40._8_4_;
        auVar54._8_4_ = (float)(int)uVar44;
        auVar54._12_4_ = (float)auVar40._12_4_;
        auVar71 = rcpps(auVar79,auVar54);
        fVar45 = auVar71._0_4_;
        fVar60 = auVar71._4_4_;
        fVar61 = auVar71._8_4_;
        fVar64 = auVar71._12_4_;
        uVar24 = auVar40._8_8_ >> 0x20;
        pfVar22 = (float *)(puVar21 + lVar12 + uVar17 + 1);
        *pfVar22 = ((fVar45 + fVar45) - auVar54._0_4_ * fVar45 * fVar45) * fVar30;
        pfVar22[1] = ((fVar60 + fVar60) - auVar54._4_4_ * fVar60 * fVar60) * fVar33;
        pfVar22[2] = ((fVar61 + fVar61) - auVar54._8_4_ * fVar61 * fVar61) * fVar34;
        pfVar22[3] = ((fVar64 + fVar64) - auVar54._12_4_ * fVar64 * fVar64) * fVar35;
        auVar76._0_8_ = (ulonglong)uVar23 * (ulonglong)uVar23;
        auVar76._8_8_ = (auVar40._8_8_ & 0xffffffff) * (ulonglong)uVar44;
        auVar77._0_8_ = (ulonglong)uVar11 * (ulonglong)uVar11 << 0x20;
        auVar77._8_8_ = uVar24 * uVar24 << 0x20;
        auVar42._0_4_ = uVar23 + iVar15;
        auVar42._4_4_ = uVar11 + iVar10;
        auVar42._8_4_ = uVar44 + iVar3;
        auVar42._12_4_ = auVar40._12_4_ + iVar4;
        auVar77 = auVar76 & auVar31 | auVar77;
        auVar55._0_4_ = (float)auVar77._0_4_;
        auVar55._4_4_ = (float)auVar77._4_4_;
        auVar55._8_4_ = (float)auVar77._8_4_;
        auVar55._12_4_ = (float)auVar77._12_4_;
        auVar78._0_4_ = (float)(int)auVar42._0_4_;
        auVar78._4_4_ = (float)(int)auVar42._4_4_;
        auVar78._8_4_ = (float)(int)auVar42._8_4_;
        auVar78._12_4_ = (float)auVar42._12_4_;
        *(undefined1 (*) [16])(puVar21 + uVar17 + 1) = auVar55;
        auVar71 = rcpps(auVar55,auVar78);
        fVar45 = auVar71._0_4_;
        fVar60 = auVar71._4_4_;
        fVar61 = auVar71._8_4_;
        fVar64 = auVar71._12_4_;
        uVar24 = auVar42._8_8_ >> 0x20;
        pfVar22 = (float *)(puVar21 + lVar12 + uVar17 + 5);
        *pfVar22 = ((fVar45 + fVar45) - auVar78._0_4_ * fVar45 * fVar45) * fVar30;
        pfVar22[1] = ((fVar60 + fVar60) - auVar78._4_4_ * fVar60 * fVar60) * fVar33;
        pfVar22[2] = ((fVar61 + fVar61) - auVar78._8_4_ * fVar61 * fVar61) * fVar34;
        pfVar22[3] = ((fVar64 + fVar64) - auVar78._12_4_ * fVar64 * fVar64) * fVar35;
        auVar56._0_8_ = (ulonglong)auVar42._0_4_ * (ulonglong)auVar42._0_4_;
        auVar56._8_8_ = (auVar42._8_8_ & 0xffffffff) * (ulonglong)auVar42._8_4_;
        auVar57._0_8_ = (ulonglong)auVar42._4_4_ * (ulonglong)auVar42._4_4_ << 0x20;
        auVar57._8_8_ = uVar24 * uVar24 << 0x20;
        auVar40._0_4_ = auVar42._0_4_ + iVar15;
        auVar40._4_4_ = auVar42._4_4_ + iVar10;
        auVar40._8_4_ = auVar42._8_4_ + iVar3;
        auVar40._12_4_ = auVar42._12_4_ + iVar4;
        auVar57 = auVar56 & auVar31 | auVar57;
        auVar79._0_4_ = (float)auVar57._0_4_;
        auVar79._4_4_ = (float)auVar57._4_4_;
        auVar79._8_4_ = (float)auVar57._8_4_;
        auVar79._12_4_ = (float)auVar57._12_4_;
        *(undefined1 (*) [16])(puVar21 + uVar17 + 5) = auVar79;
        uVar17 = uVar17 + 8;
      } while (uVar17 < (ulonglong)(longlong)iVar13);
    }
    else {
      auVar75 = unaff_XMM15;
      do {
        uVar23 = auVar40._0_4_;
        auVar50._0_4_ = (float)(int)uVar23;
        uVar11 = auVar40._4_4_;
        auVar50._4_4_ = (float)(int)uVar11;
        uVar44 = auVar40._8_4_;
        auVar50._8_4_ = (float)(int)uVar44;
        auVar50._12_4_ = (float)auVar40._12_4_;
        auVar71 = rcpps(auVar75,auVar50);
        fVar45 = auVar71._0_4_;
        fVar60 = auVar71._4_4_;
        fVar61 = auVar71._8_4_;
        fVar64 = auVar71._12_4_;
        uVar24 = auVar40._8_8_ >> 0x20;
        pfVar22 = (float *)(puVar21 + lVar12 + uVar17 + 1);
        *pfVar22 = ((fVar45 + fVar45) - auVar50._0_4_ * fVar45 * fVar45) * fVar30;
        pfVar22[1] = ((fVar60 + fVar60) - auVar50._4_4_ * fVar60 * fVar60) * fVar33;
        pfVar22[2] = ((fVar61 + fVar61) - auVar50._8_4_ * fVar61 * fVar61) * fVar34;
        pfVar22[3] = ((fVar64 + fVar64) - auVar50._12_4_ * fVar64 * fVar64) * fVar35;
        auVar73._0_8_ = (ulonglong)uVar11 * (ulonglong)uVar11 << 0x20;
        auVar73._8_8_ = uVar24 * uVar24 << 0x20;
        auVar72._0_8_ = (ulonglong)uVar23 * (ulonglong)uVar23;
        auVar72._8_8_ = (auVar40._8_8_ & 0xffffffff) * (ulonglong)uVar44;
        auVar41._0_4_ = uVar23 + iVar15;
        auVar41._4_4_ = uVar11 + iVar10;
        auVar41._8_4_ = uVar44 + iVar3;
        auVar41._12_4_ = auVar40._12_4_ + iVar4;
        auVar73 = auVar72 & auVar31 | auVar73;
        auVar51._0_4_ = (float)auVar73._0_4_;
        auVar51._4_4_ = (float)auVar73._4_4_;
        auVar51._8_4_ = (float)auVar73._8_4_;
        auVar51._12_4_ = (float)auVar73._12_4_;
        auVar74._0_4_ = (float)(int)auVar41._0_4_;
        auVar74._4_4_ = (float)(int)auVar41._4_4_;
        auVar74._8_4_ = (float)(int)auVar41._8_4_;
        auVar74._12_4_ = (float)auVar41._12_4_;
        *(undefined1 (*) [16])(puVar21 + uVar17 + 1) = auVar51;
        auVar71 = rcpps(auVar51,auVar74);
        fVar45 = auVar71._0_4_;
        fVar60 = auVar71._4_4_;
        fVar61 = auVar71._8_4_;
        fVar64 = auVar71._12_4_;
        uVar24 = auVar41._8_8_ >> 0x20;
        pfVar22 = (float *)(puVar21 + lVar12 + uVar17 + 5);
        *pfVar22 = ((fVar45 + fVar45) - auVar74._0_4_ * fVar45 * fVar45) * fVar30;
        pfVar22[1] = ((fVar60 + fVar60) - auVar74._4_4_ * fVar60 * fVar60) * fVar33;
        pfVar22[2] = ((fVar61 + fVar61) - auVar74._8_4_ * fVar61 * fVar61) * fVar34;
        pfVar22[3] = ((fVar64 + fVar64) - auVar74._12_4_ * fVar64 * fVar64) * fVar35;
        auVar53._0_8_ = (ulonglong)auVar41._4_4_ * (ulonglong)auVar41._4_4_ << 0x20;
        auVar53._8_8_ = uVar24 * uVar24 << 0x20;
        auVar52._0_8_ = (ulonglong)auVar41._0_4_ * (ulonglong)auVar41._0_4_;
        auVar52._8_8_ = (auVar41._8_8_ & 0xffffffff) * (ulonglong)auVar41._8_4_;
        auVar40._0_4_ = auVar41._0_4_ + iVar15;
        auVar40._4_4_ = auVar41._4_4_ + iVar10;
        auVar40._8_4_ = auVar41._8_4_ + iVar3;
        auVar40._12_4_ = auVar41._12_4_ + iVar4;
        auVar53 = auVar52 & auVar31 | auVar53;
        auVar75._0_4_ = (float)auVar53._0_4_;
        auVar75._4_4_ = (float)auVar53._4_4_;
        auVar75._8_4_ = (float)auVar53._8_4_;
        auVar75._12_4_ = (float)auVar53._12_4_;
        *(undefined1 (*) [16])(puVar21 + uVar17 + 5) = auVar75;
        uVar17 = uVar17 + 8;
      } while (uVar17 < (ulonglong)(longlong)iVar13);
    }
    iVar4 = _UNK_14308773c;
    iVar3 = _UNK_143087738;
    iVar10 = _UNK_143087734;
    iVar15 = _DAT_143087730;
    if (uVar25 < iVar13 + 1U) goto LAB_14013507b;
    uVar25 = uVar25 - iVar13;
    if ((int)uVar25 < 4) goto LAB_14013519f;
    uVar17 = (ulonglong)(int)(uVar25 & 0xfffffffc);
    uVar24 = 0;
    auVar43._4_4_ = iVar13 + 2;
    auVar43._0_4_ = iVar13 + 1U;
    auVar43._12_4_ = iVar13 + 4;
    auVar43._8_4_ = iVar13 + 3;
    do {
      uVar23 = auVar43._0_4_;
      auVar58._0_4_ = (float)(int)uVar23;
      uVar11 = auVar43._4_4_;
      auVar58._4_4_ = (float)(int)uVar11;
      uVar44 = auVar43._8_4_;
      auVar58._8_4_ = (float)(int)uVar44;
      iVar16 = auVar43._12_4_;
      auVar58._12_4_ = (float)iVar16;
      auVar71 = rcpps(unaff_XMM15,auVar58);
      fVar45 = auVar71._0_4_;
      fVar60 = auVar71._4_4_;
      fVar61 = auVar71._8_4_;
      fVar64 = auVar71._12_4_;
      uVar28 = auVar43._8_8_ >> 0x20;
      pfVar22 = (float *)(puVar21 + lVar12 + (longlong)iVar13 + uVar24 + 1);
      *pfVar22 = ((fVar45 + fVar45) - auVar58._0_4_ * fVar45 * fVar45) * fVar30;
      pfVar22[1] = ((fVar60 + fVar60) - auVar58._4_4_ * fVar60 * fVar60) * fVar33;
      pfVar22[2] = ((fVar61 + fVar61) - auVar58._8_4_ * fVar61 * fVar61) * fVar34;
      pfVar22[3] = ((fVar64 + fVar64) - auVar58._12_4_ * fVar64 * fVar64) * fVar35;
      auVar59._0_8_ = (ulonglong)uVar11 * (ulonglong)uVar11 << 0x20;
      auVar59._8_8_ = uVar28 * uVar28 << 0x20;
      auVar80._0_8_ = (ulonglong)uVar23 * (ulonglong)uVar23;
      auVar80._8_8_ = (auVar43._8_8_ & 0xffffffff) * (ulonglong)uVar44;
      auVar43._0_4_ = uVar23 + iVar15;
      auVar43._4_4_ = uVar11 + iVar10;
      auVar43._8_4_ = uVar44 + iVar3;
      auVar43._12_4_ = iVar16 + iVar4;
      unaff_XMM15 = auVar80 & auVar31 | auVar59;
      pfVar22 = (float *)(puVar21 + (longlong)iVar13 + uVar24 + 1);
      *pfVar22 = (float)unaff_XMM15._0_4_;
      pfVar22[1] = (float)unaff_XMM15._4_4_;
      pfVar22[2] = (float)unaff_XMM15._8_4_;
      pfVar22[3] = (float)unaff_XMM15._12_4_;
      uVar24 = uVar24 + 4;
    } while (uVar24 < uVar17);
  }
  uVar24 = uVar17 & 0xffffffff;
  if ((uint)uVar17 < uVar25) {
    do {
      iVar15 = iVar13 + 1 + (int)uVar24;
      uVar23 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar23;
      puVar21[lVar12 + (longlong)iVar13 + uVar17 + 1] = _DAT_143087778 / (float)iVar15;
      puVar21[(longlong)iVar13 + uVar17 + 1] = (float)(iVar15 * iVar15);
      uVar17 = uVar17 + 1;
    } while (uVar23 < uVar25);
  }
LAB_14013507b:
  iVar13 = 0;
  lVar18 = lVar12 * 0xc;
  puVar14 = param_3;
  do {
    puVar21[lVar12 * 4 + 1] = 0;
    puVar21[lVar12 * 3] = 0xff7fffff;
    puVar21[lVar12 * 3 + 1] = uVar9;
    puVar21[lVar12 * 2] = *puVar14;
    lVar19 = 1;
    if (1 < (int)param_5) {
      lVar26 = 0;
      do {
        fVar30 = (float)puVar14[lVar19];
        puVar21[lVar12 * 2 + lVar19] = fVar30;
        while( true ) {
          lVar27 = (longlong)*(int *)((longlong)puVar21 + lVar26 + 4 + lVar12 * 0x10);
          fVar33 = (((fVar30 + (float)puVar21[lVar19]) - (float)puVar14[lVar27]) -
                   (float)puVar21[lVar27]) * (float)puVar21[lVar12 + (lVar19 - lVar27)];
          pfVar22 = (float *)((longlong)puVar21 + lVar26 + lVar18);
          if (*pfVar22 <= fVar33 && fVar33 != *pfVar22) break;
          lVar26 = lVar26 + -4;
        }
        *(int *)((longlong)puVar21 + lVar26 + 8 + lVar12 * 0x10) = (int)lVar19;
        lVar19 = lVar19 + 1;
        *(float *)((longlong)puVar21 + lVar26 + 4 + lVar18) = fVar33;
        *(undefined4 *)((longlong)puVar21 + lVar26 + 8 + lVar18) = uVar9;
        lVar26 = lVar26 + 4;
      } while (lVar19 < (int)param_5);
    }
    iVar15 = 0;
    lVar19 = 0;
    lVar26 = 0;
    pfVar22 = (float *)(puVar21 + lVar12 * 3 + 1);
    do {
      fVar30 = (float)iVar15;
      if (*pfVar22 <= fVar30 && fVar30 != *pfVar22) {
        lVar27 = lVar19 + 1;
        do {
          lVar19 = lVar27;
          pfVar22 = (float *)(puVar21 + lVar12 * 3 + lVar19 + 1);
          lVar27 = lVar19 + 1;
        } while (*pfVar22 <= fVar30 && fVar30 != *pfVar22);
      }
      uVar25 = iVar15 - puVar21[lVar12 * 4 + lVar19 + 1];
      iVar15 = iVar15 + 1;
      uVar23 = (int)uVar25 >> 0x1f;
      puVar14[lVar26] =
           (float)puVar21[(int)((uVar25 ^ uVar23) - uVar23)] +
           (float)puVar21[lVar12 * 2 + (longlong)(int)puVar21[lVar12 * 4 + lVar19 + 1]];
      lVar26 = lVar26 + 1;
    } while (iVar15 < (int)param_5);
    iVar13 = iVar13 + 1;
    puVar14 = puVar14 + lVar20;
  } while (iVar13 < (int)param_5._4_4_);
  iVar13 = 0;
  do {
    FUN_141bb2380(param_3,param_3,(int)param_5);
    iVar13 = iVar13 + 1;
    param_3 = param_3 + lVar20;
  } while (iVar13 < (int)param_5._4_4_);
  return 0;
}


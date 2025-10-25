
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140132b20(longlong param_1,int param_2,longlong param_3,uint param_4,undefined8 param_5,
             ulonglong param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  float *pfVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  float fVar42;
  float fVar43;
  uint uVar50;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  float fVar66;
  float fVar67;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar68;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 unaff_XMM15 [16];
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
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined4 *puStack_e8;
  ulonglong uStack_d8;
  uint uStack_d0;
  undefined4 *puStack_b0;
  
  uVar11 = _DAT_143087720;
  lVar21 = (longlong)param_2;
  lVar40 = (longlong)(int)((uint)param_5 + 3 & 0xfffffffc);
  lVar12 = (longlong)(int)(param_5._4_4_ + 3 & 0xfffffffc);
  if (((param_1 == 0) || (param_3 == 0)) || (param_6 == 0)) {
    return 0xfffffff8;
  }
  if (((int)(uint)param_5 < 1) || ((int)param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  uVar14 = (ulonglong)(int)(uint)param_5;
  if ((lVar21 < (longlong)uVar14) || ((int)param_4 < (int)((uint)param_5 * 4))) {
    return 0xfffffff0;
  }
  if ((param_4 & 3) != 0) {
    return 0xffffff94;
  }
  uVar27 = -(param_6 & 0xf) & 0xf;
  lVar19 = (longlong)(int)((ulonglong)(longlong)(int)param_4 >> 2);
  uVar18 = (ulonglong)(int)param_5._4_4_;
  puVar2 = (undefined4 *)(param_6 + uVar27);
  uVar29 = uVar18;
  if ((int)param_5._4_4_ < 8) {
LAB_140133f1d:
    iVar33 = 0;
  }
  else {
    puVar3 = puVar2 + uVar18;
    uVar26 = (ulonglong)puVar3 & 0xf;
    if ((int)uVar26 != 0) {
      if (((ulonglong)puVar3 & 3) != 0) goto LAB_140133f1d;
      uVar26 = (ulonglong)(0x10U - (int)uVar26 >> 2);
    }
    iVar34 = (int)uVar26;
    if ((int)param_5._4_4_ < iVar34 + 8) goto LAB_140133f1d;
    uVar16 = 0;
    iVar33 = param_5._4_4_ - (param_5._4_4_ - iVar34 & 7);
    if (iVar34 != 0) {
      do {
        puVar2[uVar16] = (float)((int)uVar16 * (int)uVar16);
        puVar3[uVar16] = uVar11;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar26);
      uVar29 = (ulonglong)param_5._4_4_;
    }
    auVar8 = _DAT_143087700;
    uVar7 = _UNK_1430876f8;
    uVar6 = _DAT_1430876f0;
    iVar5 = _UNK_1430876ec;
    iVar38 = _UNK_1430876e8;
    iVar17 = _UNK_1430876e4;
    iVar35 = _DAT_1430876e0;
    auVar73._4_4_ = iVar34 + 1;
    auVar73._0_4_ = iVar34;
    auVar73._12_4_ = iVar34 + 3;
    auVar73._8_4_ = iVar34 + 2;
    if (((ulonglong)(puVar2 + uVar26) & 0xf) == 0) {
      do {
        uVar16 = auVar73._8_8_ >> 0x20;
        uVar25 = auVar73._4_4_;
        uVar37 = auVar73._0_4_;
        auVar71._0_8_ = (ulonglong)uVar37 * (ulonglong)uVar37;
        auVar71._8_8_ = (auVar73._8_8_ & 0xffffffff) * (ulonglong)auVar73._8_4_;
        auVar72._0_8_ = (ulonglong)uVar25 * (ulonglong)uVar25 << 0x20;
        auVar72._8_8_ = uVar16 * uVar16 << 0x20;
        auVar72 = auVar71 & auVar8 | auVar72;
        auVar45._0_4_ = uVar37 + iVar35;
        auVar45._4_4_ = uVar25 + iVar17;
        auVar45._8_4_ = auVar73._8_4_ + iVar38;
        auVar45._12_4_ = auVar73._12_4_ + iVar5;
        pfVar24 = (float *)(puVar2 + uVar26);
        *pfVar24 = (float)auVar72._0_4_;
        pfVar24[1] = (float)auVar72._4_4_;
        pfVar24[2] = (float)auVar72._8_4_;
        pfVar24[3] = (float)auVar72._12_4_;
        uVar16 = auVar45._8_8_ >> 0x20;
        auVar54._0_8_ = (ulonglong)auVar45._0_4_ * (ulonglong)auVar45._0_4_;
        auVar54._8_8_ = (auVar45._8_8_ & 0xffffffff) * (ulonglong)auVar45._8_4_;
        auVar55._0_8_ = (ulonglong)auVar45._4_4_ * (ulonglong)auVar45._4_4_ << 0x20;
        auVar55._8_8_ = uVar16 * uVar16 << 0x20;
        auVar55 = auVar54 & auVar8 | auVar55;
        auVar73._0_4_ = auVar45._0_4_ + iVar35;
        auVar73._4_4_ = auVar45._4_4_ + iVar17;
        auVar73._8_4_ = auVar45._8_4_ + iVar38;
        auVar73._12_4_ = auVar45._12_4_ + iVar5;
        *(undefined8 *)(puVar3 + uVar26) = uVar6;
        *(undefined8 *)((longlong)(puVar3 + uVar26) + 8) = uVar7;
        pfVar24 = (float *)(puVar2 + uVar26 + 4);
        *pfVar24 = (float)auVar55._0_4_;
        pfVar24[1] = (float)auVar55._4_4_;
        pfVar24[2] = (float)auVar55._8_4_;
        pfVar24[3] = (float)auVar55._12_4_;
        *(undefined8 *)(puVar3 + uVar26 + 4) = uVar6;
        *(undefined8 *)((longlong)(puVar3 + uVar26 + 4) + 8) = uVar7;
        uVar26 = uVar26 + 8;
      } while (uVar26 < (ulonglong)(longlong)iVar33);
    }
    else {
      do {
        uVar16 = auVar73._8_8_ >> 0x20;
        uVar25 = auVar73._4_4_;
        uVar37 = auVar73._0_4_;
        auVar69._0_8_ = (ulonglong)uVar37 * (ulonglong)uVar37;
        auVar69._8_8_ = (auVar73._8_8_ & 0xffffffff) * (ulonglong)auVar73._8_4_;
        auVar70._0_8_ = (ulonglong)uVar25 * (ulonglong)uVar25 << 0x20;
        auVar70._8_8_ = uVar16 * uVar16 << 0x20;
        auVar70 = auVar69 & auVar8 | auVar70;
        auVar44._0_4_ = uVar37 + iVar35;
        auVar44._4_4_ = uVar25 + iVar17;
        auVar44._8_4_ = auVar73._8_4_ + iVar38;
        auVar44._12_4_ = auVar73._12_4_ + iVar5;
        pfVar24 = (float *)(puVar2 + uVar26);
        *pfVar24 = (float)auVar70._0_4_;
        pfVar24[1] = (float)auVar70._4_4_;
        pfVar24[2] = (float)auVar70._8_4_;
        pfVar24[3] = (float)auVar70._12_4_;
        uVar16 = auVar44._8_8_ >> 0x20;
        auVar52._0_8_ = (ulonglong)auVar44._0_4_ * (ulonglong)auVar44._0_4_;
        auVar52._8_8_ = (auVar44._8_8_ & 0xffffffff) * (ulonglong)auVar44._8_4_;
        auVar53._0_8_ = (ulonglong)auVar44._4_4_ * (ulonglong)auVar44._4_4_ << 0x20;
        auVar53._8_8_ = uVar16 * uVar16 << 0x20;
        auVar53 = auVar52 & auVar8 | auVar53;
        auVar73._0_4_ = auVar44._0_4_ + iVar35;
        auVar73._4_4_ = auVar44._4_4_ + iVar17;
        auVar73._8_4_ = auVar44._8_4_ + iVar38;
        auVar73._12_4_ = auVar44._12_4_ + iVar5;
        *(undefined8 *)(puVar3 + uVar26) = uVar6;
        *(undefined8 *)((longlong)(puVar3 + uVar26) + 8) = uVar7;
        pfVar24 = (float *)(puVar2 + uVar26 + 4);
        *pfVar24 = (float)auVar53._0_4_;
        pfVar24[1] = (float)auVar53._4_4_;
        pfVar24[2] = (float)auVar53._8_4_;
        pfVar24[3] = (float)auVar53._12_4_;
        *(undefined8 *)(puVar3 + uVar26 + 4) = uVar6;
        *(undefined8 *)((longlong)(puVar3 + uVar26 + 4) + 8) = uVar7;
        uVar26 = uVar26 + 8;
      } while (uVar26 < (ulonglong)(longlong)iVar33);
    }
  }
  uVar25 = 0;
  lVar28 = 0;
  if (iVar33 + 1U <= (uint)uVar29) {
    uVar16 = (ulonglong)iVar33;
    uVar26 = uVar16;
    do {
      iVar34 = (int)uVar26;
      uVar25 = uVar25 + 1;
      puVar2[uVar16 + lVar28] = (float)(iVar34 * iVar34);
      uVar26 = (ulonglong)(iVar34 + 1);
      puVar2[uVar18 + uVar16 + lVar28] = uVar11;
      lVar28 = lVar28 + 1;
    } while (uVar25 < (uint)uVar29 - iVar33);
    uVar29 = (ulonglong)param_5._4_4_;
  }
  iVar34 = 0;
  if ((int)uVar29 * 2 < 1) {
    puStack_b0 = puVar2 + lVar12 * 3;
  }
  else {
    uVar26 = uVar18 * 2;
    if ((longlong)uVar26 < 4) {
      puStack_b0 = puVar2 + lVar12 * 3;
      iVar34 = 0;
    }
    else {
      puStack_b0 = puVar2 + lVar12 * 3;
      uVar25 = (uint)puStack_b0 & 0xf;
      iVar34 = 0;
      if (((ulonglong)puStack_b0 & 0xf) != 0) {
        if (((ulonglong)puStack_b0 & 3) != 0) goto LAB_140132fe5;
        uVar25 = 0x10 - uVar25 >> 2;
      }
      uVar16 = (ulonglong)uVar25;
      if ((longlong)(uVar16 + 4) <= (longlong)uVar26) {
        iVar34 = (int)uVar26 - ((int)uVar26 - uVar25 & 3);
        uVar29 = 0;
        if (uVar25 != 0) {
          do {
            puStack_b0[uVar29] = 0;
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar16);
        }
        do {
          *(undefined1 (*) [16])(puStack_b0 + uVar16) = (undefined1  [16])0x0;
          uVar16 = uVar16 + 4;
        } while (uVar16 < (ulonglong)(longlong)iVar34);
        uVar29 = (ulonglong)param_5._4_4_;
      }
    }
LAB_140132fe5:
    uVar16 = (ulonglong)iVar34;
    if (uVar16 < uVar26) {
      do {
        puStack_b0[uVar16] = 0;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar26);
      iVar34 = (int)uVar16;
    }
  }
  iVar33 = (int)uVar29;
  if (iVar34 <= iVar33 * 3) {
    uVar25 = (iVar33 * 3 - iVar34) + 1;
    if ((int)uVar25 < 4) {
LAB_140133d09:
      uStack_d8 = 0;
    }
    else {
      puVar3 = puStack_b0 + iVar34;
      uVar26 = (ulonglong)puVar3 & 0xf;
      if ((int)uVar26 != 0) {
        if (((ulonglong)puVar3 & 3) != 0) goto LAB_140133d09;
        uVar26 = (ulonglong)(0x10U - (int)uVar26 >> 2);
      }
      uVar37 = (uint)uVar26;
      if ((int)uVar25 < (int)(uVar37 + 4)) goto LAB_140133d09;
      uStack_d8 = (longlong)(int)uVar25 - (ulonglong)(uVar25 - uVar37 & 3);
      if (uVar37 != 0) {
        iVar35 = iVar34 + iVar33 * -2;
        lVar28 = 0;
        uStack_d0 = 0;
        do {
          uStack_d0 = uStack_d0 + 1;
          puVar3[lVar28] = iVar35;
          lVar28 = lVar28 + 1;
          iVar35 = iVar35 + 1;
        } while (uStack_d0 < uVar37);
      }
      iVar5 = _UNK_1430876ec;
      iVar38 = _UNK_1430876e8;
      iVar17 = _UNK_1430876e4;
      iVar35 = _DAT_1430876e0;
      iVar33 = iVar33 * -2 + iVar34;
      iVar36 = uVar37 + iVar33;
      iVar22 = iVar33 + 1 + uVar37;
      iVar33 = iVar22 + 1;
      iVar23 = iVar22 + 2;
      do {
        piVar4 = puVar3 + uVar26;
        *piVar4 = iVar36;
        piVar4[1] = iVar22;
        piVar4[2] = iVar33;
        piVar4[3] = iVar23;
        uVar26 = uVar26 + 4;
        iVar36 = iVar36 + iVar35;
        iVar22 = iVar22 + iVar17;
        iVar33 = iVar33 + iVar38;
        iVar23 = iVar23 + iVar5;
      } while (uVar26 < uStack_d8);
      uVar29 = (ulonglong)param_5._4_4_;
    }
    uVar37 = (uint)uStack_d8;
    lVar28 = (longlong)(int)uVar37;
    if (uVar37 < uVar25) {
      iVar33 = iVar34 + (int)uVar29 * -2 + uVar37;
      do {
        uVar37 = uVar37 + 1;
        puStack_b0[iVar34 + lVar28] = iVar33;
        lVar28 = lVar28 + 1;
        iVar33 = iVar33 + 1;
      } while (uVar37 < uVar25);
      uVar29 = (ulonglong)param_5._4_4_;
    }
  }
  uVar25 = (int)uVar29 - 1;
  param_1 = param_1 + (int)(param_2 * uVar25);
  uVar16 = uVar29 >> 1 & 0x7fffffff;
  lVar28 = lVar12 * 8 + uVar18 * 4;
  uStack_d8._0_4_ = (int)uVar16;
  uVar26 = 0;
  lVar13 = param_3;
  do {
    if (-1 < (int)uVar25) {
      uVar37 = uVar25;
      if ((((int)uVar29 < 7) || (-lVar21 < 4)) ||
         ((lVar30 = (longlong)puVar2 + ((lVar28 + -4) - param_1), lVar30 <= (longlong)(uVar18 * 4)
          && (lVar39 = (uVar18 - 1) * lVar21 + 1, -lVar39 == lVar30 || -lVar30 < lVar39)))) {
        iVar34 = 1;
        lVar39 = 0;
        lVar30 = 0;
        if ((int)uStack_d8 != 0) {
          uVar29 = 0;
          do {
            uVar41 = uVar29;
            uVar37 = uVar37 + 1 & -(uint)(*(char *)(param_1 + lVar30 * 2) != '\0');
            uVar29 = uVar41 + 1;
            *(uint *)((longlong)puVar2 + lVar39 + -4 + lVar28) = uVar37;
            lVar1 = lVar30 * 2;
            lVar30 = lVar30 + -lVar21;
            uVar37 = uVar37 + 1 & -(uint)(*(char *)(-lVar21 + param_1 + lVar1) != '\0');
            *(uint *)((longlong)puVar2 + lVar39 + -8 + lVar28) = uVar37;
            lVar39 = lVar39 + -8;
          } while (uVar29 < uVar16);
          iVar34 = (int)uVar41 + 2 + (int)uVar29;
          uVar29 = (ulonglong)param_5._4_4_;
        }
        if (iVar34 - 1U < (uint)uVar29) goto LAB_1401334cb;
      }
      else {
        iVar34 = 1;
        lVar39 = 0;
        lVar30 = 0;
        if ((int)uStack_d8 != 0) {
          uVar29 = 0;
          do {
            uVar41 = uVar29;
            uVar37 = uVar37 + 1 & -(uint)(*(char *)(param_1 + lVar30 * 2) != '\0');
            uVar29 = uVar41 + 1;
            *(uint *)((longlong)puVar2 + lVar39 + -4 + lVar28) = uVar37;
            lVar1 = lVar30 * 2;
            lVar30 = lVar30 + -lVar21;
            uVar37 = uVar37 + 1 & -(uint)(*(char *)(-lVar21 + param_1 + lVar1) != '\0');
            *(uint *)((longlong)puVar2 + lVar39 + -8 + lVar28) = uVar37;
            lVar39 = lVar39 + -8;
          } while (uVar29 < uVar16);
          iVar34 = (int)uVar41 + 2 + (int)uVar29;
          uVar29 = (ulonglong)param_5._4_4_;
        }
        if (iVar34 - 1U < (uint)uVar29) {
LAB_1401334cb:
          puVar2[uVar18 + (lVar12 * 2 - (longlong)iVar34)] =
               uVar37 + 1 & -(uint)(*(char *)((lVar21 - lVar21 * iVar34) + param_1) != '\0');
        }
      }
    }
    uVar41 = (ulonglong)uVar25;
    iVar34 = 1;
    lVar30 = 0;
    uVar15 = (uint)uVar29;
    uVar37 = uVar25;
    if ((int)uStack_d8 != 0) {
      uVar32 = 0;
      do {
        uVar31 = uVar32;
        iVar34 = ((int)uVar41 + 1) -
                 puStack_b0
                 [(longlong)(int)(((int)uVar41 + uVar15 * 2) - puVar2[lVar12 * 2 + uVar31 * 2]) + 1]
        ;
        puVar2[lVar12 * 2 + uVar31 * 2] = iVar34;
        *(undefined4 *)(lVar13 + lVar30 * 8) = puVar2[iVar34];
        uVar37 = (iVar34 + 1) -
                 puStack_b0
                 [(longlong)(int)((iVar34 + uVar15 * 2) - puVar2[lVar12 * 2 + uVar31 * 2 + 1]) + 1];
        puVar2[lVar12 * 2 + uVar31 * 2 + 1] = uVar37;
        uVar41 = (ulonglong)(int)uVar37;
        uVar32 = uVar31 + 1;
        *(undefined4 *)(lVar19 * 4 + lVar13 + lVar30 * 8) = puVar2[uVar41];
        lVar30 = lVar30 + lVar19;
      } while (uVar32 < uVar16);
      iVar34 = (int)uVar31 + 2 + (int)uVar32;
    }
    if (iVar34 - 1U < uVar15) {
      lVar30 = (longlong)iVar34;
      iVar34 = (uVar37 + 1) -
               puStack_b0
               [(longlong)(int)((uVar37 + uVar15 * 2) - puVar2[lVar12 * 2 + lVar30 + -1]) + 1];
      puVar2[lVar12 * 2 + lVar30 + -1] = iVar34;
      *(undefined4 *)(lVar30 * lVar19 * 4 + lVar19 * -4 + lVar13) = puVar2[iVar34];
    }
    uVar26 = uVar26 + 1;
    lVar13 = lVar13 + 4;
    param_1 = param_1 + 1;
  } while (uVar26 < uVar14);
  uVar25 = 0;
  *puVar2 = 0;
  puVar2[lVar40] = 0;
  if ((int)(uint)param_5 < 2) goto LAB_140133b94;
  puVar3 = puVar2 + lVar40;
  uVar27 = param_6 + 4 + uVar27;
  lVar12 = uVar14 * 4 + -4;
  if (((longlong)(uVar27 - (longlong)(puVar3 + 1)) < lVar12) &&
     ((longlong)-(uVar27 - (longlong)(puVar3 + 1)) < lVar12)) {
    iVar34 = 1;
    uVar37 = (uint)param_5 - 1;
    lVar12 = 0;
    if (uVar37 >> 1 != 0) {
      do {
        uVar15 = uVar25;
        iVar34 = uVar15 * 2 + 1;
        iVar33 = uVar15 * 2 + 2;
        fVar43 = _DAT_143087728 / (float)iVar33;
        puVar3[lVar12 * 2 + 1] = _DAT_143087728 / (float)iVar34;
        uVar25 = uVar15 + 1;
        puVar2[lVar12 * 2 + 1] = (float)(iVar34 * iVar34);
        puVar3[lVar12 * 2 + 2] = fVar43;
        puVar2[lVar12 * 2 + 2] = (float)(iVar33 * iVar33);
        lVar12 = lVar12 + 1;
      } while (uVar25 < uVar37 >> 1);
      iVar34 = uVar15 + 2 + uVar25;
    }
    if (iVar34 - 1U < uVar37) {
      puVar3[iVar34] = _DAT_143087728 / (float)iVar34;
      puVar2[iVar34] = (float)(iVar34 * iVar34);
    }
    goto LAB_140133b94;
  }
  uVar37 = (uint)param_5 - 1;
  if ((int)uVar37 < 8) {
LAB_140133d17:
    if (uVar37 == 0) goto LAB_140133b94;
LAB_140133d22:
    uVar27 = 0;
    uVar20 = uVar25;
  }
  else {
    uVar15 = (uint)uVar27 & 0xf;
    if ((uVar27 & 0xf) != 0) {
      if ((uVar27 & 3) != 0) goto LAB_140133d17;
      uVar15 = 0x10 - uVar15 >> 2;
    }
    uVar27 = (ulonglong)uVar15;
    if ((int)uVar37 < (int)(uVar15 + 8)) goto LAB_140133d17;
    lVar12 = 0;
    uVar20 = uVar37 - (uVar37 - uVar15 & 7);
    if (uVar15 != 0) {
      do {
        uVar25 = uVar25 + 1;
        puVar3[lVar12 + 1] = _DAT_143087728 / (float)(int)uVar25;
        puVar2[lVar12 + 1] = (float)(int)(uVar25 * uVar25);
        lVar12 = lVar12 + 1;
      } while (uVar25 < uVar15);
    }
    fVar10 = _UNK_14308771c;
    fVar9 = _UNK_143087718;
    fVar42 = _UNK_143087714;
    fVar43 = _DAT_143087710;
    auVar8 = _DAT_143087700;
    iVar17 = _UNK_1430876ec;
    iVar35 = _UNK_1430876e8;
    iVar33 = _UNK_1430876e4;
    iVar34 = _DAT_1430876e0;
    auVar46._4_4_ = uVar15 + 2;
    auVar46._0_4_ = uVar15 + 1;
    auVar46._12_4_ = uVar15 + 4;
    auVar46._8_4_ = uVar15 + 3;
    if (((ulonglong)(puVar3 + uVar27 + 1) & 0xf) == 0) {
      auVar81 = unaff_XMM15;
      do {
        uVar25 = auVar46._0_4_;
        auVar60._0_4_ = (float)(int)uVar25;
        uVar15 = auVar46._4_4_;
        auVar60._4_4_ = (float)(int)uVar15;
        uVar50 = auVar46._8_4_;
        auVar60._8_4_ = (float)(int)uVar50;
        auVar60._12_4_ = (float)auVar46._12_4_;
        auVar73 = rcpps(auVar81,auVar60);
        fVar51 = auVar73._0_4_;
        fVar66 = auVar73._4_4_;
        fVar67 = auVar73._8_4_;
        fVar68 = auVar73._12_4_;
        uVar29 = auVar46._8_8_ >> 0x20;
        pfVar24 = (float *)(puVar3 + uVar27 + 1);
        *pfVar24 = ((fVar51 + fVar51) - auVar60._0_4_ * fVar51 * fVar51) * fVar43;
        pfVar24[1] = ((fVar66 + fVar66) - auVar60._4_4_ * fVar66 * fVar66) * fVar42;
        pfVar24[2] = ((fVar67 + fVar67) - auVar60._8_4_ * fVar67 * fVar67) * fVar9;
        pfVar24[3] = ((fVar68 + fVar68) - auVar60._12_4_ * fVar68 * fVar68) * fVar10;
        auVar78._0_8_ = (ulonglong)uVar25 * (ulonglong)uVar25;
        auVar78._8_8_ = (auVar46._8_8_ & 0xffffffff) * (ulonglong)uVar50;
        auVar79._0_8_ = (ulonglong)uVar15 * (ulonglong)uVar15 << 0x20;
        auVar79._8_8_ = uVar29 * uVar29 << 0x20;
        auVar48._0_4_ = uVar25 + iVar34;
        auVar48._4_4_ = uVar15 + iVar33;
        auVar48._8_4_ = uVar50 + iVar35;
        auVar48._12_4_ = auVar46._12_4_ + iVar17;
        auVar79 = auVar78 & auVar8 | auVar79;
        auVar61._0_4_ = (float)auVar79._0_4_;
        auVar61._4_4_ = (float)auVar79._4_4_;
        auVar61._8_4_ = (float)auVar79._8_4_;
        auVar61._12_4_ = (float)auVar79._12_4_;
        auVar80._0_4_ = (float)(int)auVar48._0_4_;
        auVar80._4_4_ = (float)(int)auVar48._4_4_;
        auVar80._8_4_ = (float)(int)auVar48._8_4_;
        auVar80._12_4_ = (float)auVar48._12_4_;
        *(undefined1 (*) [16])(puVar2 + uVar27 + 1) = auVar61;
        auVar73 = rcpps(auVar61,auVar80);
        fVar51 = auVar73._0_4_;
        fVar66 = auVar73._4_4_;
        fVar67 = auVar73._8_4_;
        fVar68 = auVar73._12_4_;
        uVar29 = auVar48._8_8_ >> 0x20;
        pfVar24 = (float *)(puVar3 + uVar27 + 5);
        *pfVar24 = ((fVar51 + fVar51) - auVar80._0_4_ * fVar51 * fVar51) * fVar43;
        pfVar24[1] = ((fVar66 + fVar66) - auVar80._4_4_ * fVar66 * fVar66) * fVar42;
        pfVar24[2] = ((fVar67 + fVar67) - auVar80._8_4_ * fVar67 * fVar67) * fVar9;
        pfVar24[3] = ((fVar68 + fVar68) - auVar80._12_4_ * fVar68 * fVar68) * fVar10;
        auVar62._0_8_ = (ulonglong)auVar48._0_4_ * (ulonglong)auVar48._0_4_;
        auVar62._8_8_ = (auVar48._8_8_ & 0xffffffff) * (ulonglong)auVar48._8_4_;
        auVar63._0_8_ = (ulonglong)auVar48._4_4_ * (ulonglong)auVar48._4_4_ << 0x20;
        auVar63._8_8_ = uVar29 * uVar29 << 0x20;
        auVar46._0_4_ = auVar48._0_4_ + iVar34;
        auVar46._4_4_ = auVar48._4_4_ + iVar33;
        auVar46._8_4_ = auVar48._8_4_ + iVar35;
        auVar46._12_4_ = auVar48._12_4_ + iVar17;
        auVar63 = auVar62 & auVar8 | auVar63;
        auVar81._0_4_ = (float)auVar63._0_4_;
        auVar81._4_4_ = (float)auVar63._4_4_;
        auVar81._8_4_ = (float)auVar63._8_4_;
        auVar81._12_4_ = (float)auVar63._12_4_;
        *(undefined1 (*) [16])(puVar2 + uVar27 + 5) = auVar81;
        uVar27 = uVar27 + 8;
      } while (uVar27 < (ulonglong)(longlong)(int)uVar20);
    }
    else {
      auVar77 = unaff_XMM15;
      do {
        uVar25 = auVar46._0_4_;
        auVar56._0_4_ = (float)(int)uVar25;
        uVar15 = auVar46._4_4_;
        auVar56._4_4_ = (float)(int)uVar15;
        uVar50 = auVar46._8_4_;
        auVar56._8_4_ = (float)(int)uVar50;
        auVar56._12_4_ = (float)auVar46._12_4_;
        auVar73 = rcpps(auVar77,auVar56);
        fVar51 = auVar73._0_4_;
        fVar66 = auVar73._4_4_;
        fVar67 = auVar73._8_4_;
        fVar68 = auVar73._12_4_;
        uVar29 = auVar46._8_8_ >> 0x20;
        pfVar24 = (float *)(puVar3 + uVar27 + 1);
        *pfVar24 = ((fVar51 + fVar51) - auVar56._0_4_ * fVar51 * fVar51) * fVar43;
        pfVar24[1] = ((fVar66 + fVar66) - auVar56._4_4_ * fVar66 * fVar66) * fVar42;
        pfVar24[2] = ((fVar67 + fVar67) - auVar56._8_4_ * fVar67 * fVar67) * fVar9;
        pfVar24[3] = ((fVar68 + fVar68) - auVar56._12_4_ * fVar68 * fVar68) * fVar10;
        auVar75._0_8_ = (ulonglong)uVar15 * (ulonglong)uVar15 << 0x20;
        auVar75._8_8_ = uVar29 * uVar29 << 0x20;
        auVar74._0_8_ = (ulonglong)uVar25 * (ulonglong)uVar25;
        auVar74._8_8_ = (auVar46._8_8_ & 0xffffffff) * (ulonglong)uVar50;
        auVar47._0_4_ = uVar25 + iVar34;
        auVar47._4_4_ = uVar15 + iVar33;
        auVar47._8_4_ = uVar50 + iVar35;
        auVar47._12_4_ = auVar46._12_4_ + iVar17;
        auVar75 = auVar74 & auVar8 | auVar75;
        auVar57._0_4_ = (float)auVar75._0_4_;
        auVar57._4_4_ = (float)auVar75._4_4_;
        auVar57._8_4_ = (float)auVar75._8_4_;
        auVar57._12_4_ = (float)auVar75._12_4_;
        auVar76._0_4_ = (float)(int)auVar47._0_4_;
        auVar76._4_4_ = (float)(int)auVar47._4_4_;
        auVar76._8_4_ = (float)(int)auVar47._8_4_;
        auVar76._12_4_ = (float)auVar47._12_4_;
        *(undefined1 (*) [16])(puVar2 + uVar27 + 1) = auVar57;
        auVar73 = rcpps(auVar57,auVar76);
        fVar51 = auVar73._0_4_;
        fVar66 = auVar73._4_4_;
        fVar67 = auVar73._8_4_;
        fVar68 = auVar73._12_4_;
        uVar29 = auVar47._8_8_ >> 0x20;
        pfVar24 = (float *)(puVar3 + uVar27 + 5);
        *pfVar24 = ((fVar51 + fVar51) - auVar76._0_4_ * fVar51 * fVar51) * fVar43;
        pfVar24[1] = ((fVar66 + fVar66) - auVar76._4_4_ * fVar66 * fVar66) * fVar42;
        pfVar24[2] = ((fVar67 + fVar67) - auVar76._8_4_ * fVar67 * fVar67) * fVar9;
        pfVar24[3] = ((fVar68 + fVar68) - auVar76._12_4_ * fVar68 * fVar68) * fVar10;
        auVar59._0_8_ = (ulonglong)auVar47._4_4_ * (ulonglong)auVar47._4_4_ << 0x20;
        auVar59._8_8_ = uVar29 * uVar29 << 0x20;
        auVar58._0_8_ = (ulonglong)auVar47._0_4_ * (ulonglong)auVar47._0_4_;
        auVar58._8_8_ = (auVar47._8_8_ & 0xffffffff) * (ulonglong)auVar47._8_4_;
        auVar46._0_4_ = auVar47._0_4_ + iVar34;
        auVar46._4_4_ = auVar47._4_4_ + iVar33;
        auVar46._8_4_ = auVar47._8_4_ + iVar35;
        auVar46._12_4_ = auVar47._12_4_ + iVar17;
        auVar59 = auVar58 & auVar8 | auVar59;
        auVar77._0_4_ = (float)auVar59._0_4_;
        auVar77._4_4_ = (float)auVar59._4_4_;
        auVar77._8_4_ = (float)auVar59._8_4_;
        auVar77._12_4_ = (float)auVar59._12_4_;
        *(undefined1 (*) [16])(puVar2 + uVar27 + 5) = auVar77;
        uVar27 = uVar27 + 8;
      } while (uVar27 < (ulonglong)(longlong)(int)uVar20);
    }
    iVar17 = _UNK_1430876ec;
    iVar35 = _UNK_1430876e8;
    iVar33 = _UNK_1430876e4;
    iVar34 = _DAT_1430876e0;
    if (uVar37 < uVar20 + 1) goto LAB_140133b94;
    uVar37 = uVar37 - uVar20;
    uVar25 = uVar20;
    if ((int)uVar37 < 4) goto LAB_140133d22;
    auVar49._4_4_ = uVar20 + 2;
    auVar49._0_4_ = uVar20 + 1;
    auVar49._12_4_ = uVar20 + 4;
    auVar49._8_4_ = uVar20 + 3;
    uVar29 = 0;
    uVar27 = (ulonglong)(int)(uVar37 & 0xfffffffc);
    do {
      uVar25 = auVar49._0_4_;
      auVar64._0_4_ = (float)(int)uVar25;
      uVar15 = auVar49._4_4_;
      auVar64._4_4_ = (float)(int)uVar15;
      uVar50 = auVar49._8_4_;
      auVar64._8_4_ = (float)(int)uVar50;
      iVar38 = auVar49._12_4_;
      auVar64._12_4_ = (float)iVar38;
      auVar73 = rcpps(unaff_XMM15,auVar64);
      fVar51 = auVar73._0_4_;
      fVar66 = auVar73._4_4_;
      fVar67 = auVar73._8_4_;
      fVar68 = auVar73._12_4_;
      uVar26 = auVar49._8_8_ >> 0x20;
      pfVar24 = (float *)(puVar3 + (longlong)(int)uVar20 + uVar29 + 1);
      *pfVar24 = ((fVar51 + fVar51) - auVar64._0_4_ * fVar51 * fVar51) * fVar43;
      pfVar24[1] = ((fVar66 + fVar66) - auVar64._4_4_ * fVar66 * fVar66) * fVar42;
      pfVar24[2] = ((fVar67 + fVar67) - auVar64._8_4_ * fVar67 * fVar67) * fVar9;
      pfVar24[3] = ((fVar68 + fVar68) - auVar64._12_4_ * fVar68 * fVar68) * fVar10;
      auVar65._0_8_ = (ulonglong)uVar15 * (ulonglong)uVar15 << 0x20;
      auVar65._8_8_ = uVar26 * uVar26 << 0x20;
      auVar82._0_8_ = (ulonglong)uVar25 * (ulonglong)uVar25;
      auVar82._8_8_ = (auVar49._8_8_ & 0xffffffff) * (ulonglong)uVar50;
      auVar49._0_4_ = uVar25 + iVar34;
      auVar49._4_4_ = uVar15 + iVar33;
      auVar49._8_4_ = uVar50 + iVar35;
      auVar49._12_4_ = iVar38 + iVar17;
      unaff_XMM15 = auVar82 & auVar8 | auVar65;
      pfVar24 = (float *)(puVar2 + (longlong)(int)uVar20 + uVar29 + 1);
      *pfVar24 = (float)unaff_XMM15._0_4_;
      pfVar24[1] = (float)unaff_XMM15._4_4_;
      pfVar24[2] = (float)unaff_XMM15._8_4_;
      pfVar24[3] = (float)unaff_XMM15._12_4_;
      uVar29 = uVar29 + 4;
    } while (uVar29 < uVar27);
  }
  uVar29 = uVar27 & 0xffffffff;
  if ((uint)uVar27 < uVar37) {
    do {
      iVar34 = (int)uVar29 + 1 + uVar20;
      uVar25 = (int)uVar29 + 1;
      uVar29 = (ulonglong)uVar25;
      puVar3[(longlong)(int)uVar20 + uVar27 + 1] = _DAT_143087728 / (float)iVar34;
      puVar2[(longlong)(int)uVar20 + uVar27 + 1] = (float)(iVar34 * iVar34);
      uVar27 = uVar27 + 1;
    } while (uVar25 < uVar37);
  }
LAB_140133b94:
  puStack_e8 = puVar2 + lVar40;
  puVar3 = puVar2 + lVar40 * 3;
  uVar27 = 0;
  lVar21 = 0;
  lVar12 = param_3;
  do {
    puVar2[lVar40 * 4 + 1] = 0;
    uVar29 = 0;
    *puVar3 = 0xff7fffff;
    puVar3[1] = uVar11;
    puVar2[lVar40 * 2] = *(undefined4 *)(param_3 + lVar21 * 4);
    uVar26 = uVar29;
    lVar28 = lVar12;
    if (1 < (int)(uint)param_5) {
      do {
        fVar43 = *(float *)(lVar28 + 4);
        iVar34 = 0;
        puVar2[lVar40 * 2 + uVar29 + 1] = fVar43;
        lVar13 = uVar26 * 4 + lVar40 * 0x10;
        fVar43 = fVar43 + (float)puVar2[uVar29 + 1];
        lVar30 = 0;
        uVar16 = uVar26;
        do {
          iVar34 = iVar34 + 1;
          lVar39 = (longlong)*(int *)((longlong)puVar2 + lVar30 + 4 + lVar13);
          fVar42 = ((fVar43 - *(float *)(lVar12 + lVar39 * 4)) - (float)puVar2[lVar39]) *
                   (float)puStack_e8[uVar29 + (1 - lVar39)];
          pfVar24 = (float *)((longlong)puVar3 + lVar30 + uVar26 * 4);
          uVar41 = uVar16;
          if (*pfVar24 <= fVar42 && fVar42 != *pfVar24) break;
          lVar39 = (longlong)*(int *)((longlong)puVar2 + lVar30 + lVar13);
          uVar16 = (ulonglong)(iVar34 * -2 + (int)uVar26);
          uVar41 = uVar16 + 1;
          fVar42 = ((fVar43 - *(float *)(lVar12 + lVar39 * 4)) - (float)puVar2[lVar39]) *
                   (float)puStack_e8[uVar29 + (1 - lVar39)];
          pfVar24 = (float *)((longlong)puVar3 + lVar30 + -4 + uVar26 * 4);
          lVar30 = lVar30 + -8;
        } while (fVar42 < *pfVar24 || fVar42 == *pfVar24);
        uVar16 = uVar29 + 1;
        puVar2[lVar40 * 4 + uVar41 + 2] = (int)uVar29 + 1;
        puVar3[uVar41 + 1] = fVar42;
        puVar3[uVar41 + 2] = uVar11;
        uVar29 = uVar16;
        uVar26 = uVar41 + 1;
        lVar28 = lVar28 + 4;
      } while (uVar16 < uVar14 - 1);
    }
    iVar34 = 0;
    uVar26 = 0;
    uVar29 = uVar26;
    pfVar24 = (float *)(puVar3 + 1);
    do {
      iVar17 = (int)uVar29;
      iVar35 = (int)uVar26;
      fVar43 = (float)iVar35;
      iVar33 = iVar17;
      if (*pfVar24 <= fVar43 && fVar43 != *pfVar24) {
        iVar38 = iVar34;
        do {
          iVar38 = iVar38 + 1;
          iVar33 = iVar17 + -1 + iVar38 * 2;
          pfVar24 = (float *)(puVar3 + (longlong)iVar17 + (longlong)(iVar38 * 2));
          if (fVar43 < *pfVar24 || fVar43 == *pfVar24) break;
          pfVar24 = (float *)(puVar3 + (longlong)iVar17 + 1 + (longlong)(iVar38 * 2));
          iVar33 = iVar17 + iVar38 * 2;
        } while (*pfVar24 <= fVar43 && fVar43 != *pfVar24);
      }
      uVar29 = (ulonglong)iVar33;
      uVar25 = iVar35 - puVar2[lVar40 * 4 + uVar29 + 1];
      uVar37 = (int)uVar25 >> 0x1f;
      *(float *)(lVar12 + (longlong)iVar35 * 4) =
           (float)puVar2[(int)((uVar25 ^ uVar37) - uVar37)] +
           (float)puVar2[lVar40 * 2 + (longlong)(int)puVar2[lVar40 * 4 + uVar29 + 1]];
      uVar26 = (ulonglong)(iVar35 + 1U);
    } while (iVar35 + 1U < (uint)param_5);
    uVar27 = uVar27 + 1;
    lVar12 = lVar12 + lVar19 * 4;
    lVar21 = lVar21 + lVar19;
    if (uVar18 <= uVar27) {
      do {
        FUN_141bb2340(param_3,param_3,(uint)param_5);
        iVar34 = iVar34 + 1;
        param_3 = param_3 + lVar19 * 4;
      } while (iVar34 < (int)param_5._4_4_);
      return 0;
    }
  } while( true );
}


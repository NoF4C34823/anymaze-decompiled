
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140135360(longlong param_1,int param_2,undefined4 *param_3,uint param_4,undefined8 param_5,
             ulonglong param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  int iVar49;
  float fVar50;
  float fVar65;
  float fVar66;
  ulonglong uVar67;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar68;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
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
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  ulonglong uStack_d8;
  uint uStack_c8;
  longlong lStack_c0;
  undefined4 *puStack_a0;
  
  uVar10 = _DAT_1430877c0;
  lVar16 = (longlong)param_2;
  lVar31 = (longlong)(int)((int)param_5 + 3U & 0xfffffffc);
  lVar11 = (longlong)(int)(param_5._4_4_ + 3 & 0xfffffffc);
  if (((param_1 == 0) || (param_3 == (undefined4 *)0x0)) || (param_6 == 0)) {
    return 0xfffffff8;
  }
  if (((int)param_5 < 1) || ((int)param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  uVar15 = (ulonglong)(int)param_5;
  if ((lVar16 < (longlong)uVar15) || ((int)param_4 < (int)param_5 * 4)) {
    return 0xfffffff0;
  }
  if ((param_4 & 3) != 0) {
    return 0xffffff94;
  }
  lVar21 = (longlong)(int)((ulonglong)(longlong)(int)param_4 >> 2);
  uVar27 = -(param_6 & 0xf) & 0xf;
  puVar2 = (undefined4 *)(param_6 + uVar27);
  if ((int)param_5._4_4_ < 8) {
LAB_14013670d:
    uVar33 = (ulonglong)(int)param_5._4_4_;
    iVar25 = 0;
    if (param_5._4_4_ != 0) {
      uVar29 = 0;
      uVar19 = param_5._4_4_;
LAB_140135770:
      lStack_c0 = (longlong)(int)param_5._4_4_;
      uVar20 = (uint)uVar29;
      iVar28 = uVar20 + iVar25;
      if (uVar20 < uVar19) {
        do {
          uVar20 = uVar20 + 1;
          iVar13 = iVar28 * iVar28;
          iVar28 = iVar28 + 1;
          puVar2[(longlong)iVar25 + uVar29] = (float)iVar13;
          puVar2[lStack_c0 + (longlong)iVar25 + uVar29] = uVar10;
          uVar29 = uVar29 + 1;
        } while (uVar20 < uVar19);
        uVar33 = (ulonglong)param_5._4_4_;
      }
    }
  }
  else {
    uVar33 = (ulonglong)(int)param_5._4_4_;
    puVar12 = puVar2 + uVar33;
    uVar29 = (ulonglong)puVar12 & 0xf;
    if ((int)uVar29 != 0) {
      if (((ulonglong)puVar12 & 3) != 0) goto LAB_14013670d;
      uVar29 = (ulonglong)(0x10U - (int)uVar29 >> 2);
    }
    iVar28 = (int)uVar29;
    if ((int)param_5._4_4_ < iVar28 + 8) goto LAB_14013670d;
    uVar22 = 0;
    iVar25 = param_5._4_4_ - (param_5._4_4_ - iVar28 & 7);
    if (iVar28 != 0) {
      do {
        puVar2[uVar22] = (float)((int)uVar22 * (int)uVar22);
        puVar12[uVar22] = uVar10;
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar29);
      uVar33 = (ulonglong)param_5._4_4_;
    }
    auVar34 = _DAT_1430877a0;
    uVar9 = _UNK_14308779c;
    uVar8 = _UNK_143087798;
    uVar7 = _UNK_143087794;
    uVar6 = _DAT_143087790;
    iVar49 = _UNK_14308778c;
    iVar5 = _UNK_143087788;
    iVar4 = _UNK_143087784;
    iVar13 = _DAT_143087780;
    uVar22 = (ulonglong)iVar25;
    auVar75._4_4_ = iVar28 + 1;
    auVar75._0_4_ = iVar28;
    auVar75._12_4_ = iVar28 + 3;
    auVar75._8_4_ = iVar28 + 2;
    if (((ulonglong)(puVar2 + uVar29) & 0xf) == 0) {
      do {
        uVar67 = auVar75._8_8_ >> 0x20;
        uVar20 = auVar75._0_4_;
        auVar71._0_8_ = (ulonglong)uVar20 * (ulonglong)uVar20;
        auVar71._8_8_ = (auVar75._8_8_ & 0xffffffff) * (ulonglong)auVar75._8_4_;
        uVar19 = auVar75._4_4_;
        auVar41._0_4_ = uVar20 + iVar13;
        auVar41._4_4_ = uVar19 + iVar4;
        auVar41._8_4_ = auVar75._8_4_ + iVar5;
        auVar41._12_4_ = auVar75._12_4_ + iVar49;
        auVar72._0_8_ = (ulonglong)uVar19 * (ulonglong)uVar19 << 0x20;
        auVar72._8_8_ = uVar67 * uVar67 << 0x20;
        auVar72 = auVar71 & auVar34 | auVar72;
        uVar67 = auVar41._8_8_ >> 0x20;
        pfVar14 = (float *)(puVar2 + uVar29);
        *pfVar14 = (float)auVar72._0_4_;
        pfVar14[1] = (float)auVar72._4_4_;
        pfVar14[2] = (float)auVar72._8_4_;
        pfVar14[3] = (float)auVar72._12_4_;
        auVar53._0_8_ = (ulonglong)auVar41._0_4_ * (ulonglong)auVar41._0_4_;
        auVar53._8_8_ = (auVar41._8_8_ & 0xffffffff) * (ulonglong)auVar41._8_4_;
        puVar3 = puVar12 + uVar29;
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        auVar54._0_8_ = (ulonglong)auVar41._4_4_ * (ulonglong)auVar41._4_4_ << 0x20;
        auVar54._8_8_ = uVar67 * uVar67 << 0x20;
        auVar75._0_4_ = auVar41._0_4_ + iVar13;
        auVar75._4_4_ = auVar41._4_4_ + iVar4;
        auVar75._8_4_ = auVar41._8_4_ + iVar5;
        auVar75._12_4_ = auVar41._12_4_ + iVar49;
        auVar54 = auVar53 & auVar34 | auVar54;
        pfVar14 = (float *)(puVar2 + uVar29 + 4);
        *pfVar14 = (float)auVar54._0_4_;
        pfVar14[1] = (float)auVar54._4_4_;
        pfVar14[2] = (float)auVar54._8_4_;
        pfVar14[3] = (float)auVar54._12_4_;
        puVar3 = puVar12 + uVar29 + 4;
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        uVar29 = uVar29 + 8;
      } while (uVar29 < uVar22);
    }
    else {
      do {
        uVar67 = auVar75._8_8_ >> 0x20;
        uVar20 = auVar75._0_4_;
        auVar69._0_8_ = (ulonglong)uVar20 * (ulonglong)uVar20;
        auVar69._8_8_ = (auVar75._8_8_ & 0xffffffff) * (ulonglong)auVar75._8_4_;
        uVar19 = auVar75._4_4_;
        auVar40._0_4_ = uVar20 + iVar13;
        auVar40._4_4_ = uVar19 + iVar4;
        auVar40._8_4_ = auVar75._8_4_ + iVar5;
        auVar40._12_4_ = auVar75._12_4_ + iVar49;
        auVar70._0_8_ = (ulonglong)uVar19 * (ulonglong)uVar19 << 0x20;
        auVar70._8_8_ = uVar67 * uVar67 << 0x20;
        auVar70 = auVar69 & auVar34 | auVar70;
        uVar67 = auVar40._8_8_ >> 0x20;
        pfVar14 = (float *)(puVar2 + uVar29);
        *pfVar14 = (float)auVar70._0_4_;
        pfVar14[1] = (float)auVar70._4_4_;
        pfVar14[2] = (float)auVar70._8_4_;
        pfVar14[3] = (float)auVar70._12_4_;
        auVar51._0_8_ = (ulonglong)auVar40._0_4_ * (ulonglong)auVar40._0_4_;
        auVar51._8_8_ = (auVar40._8_8_ & 0xffffffff) * (ulonglong)auVar40._8_4_;
        puVar3 = puVar12 + uVar29;
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        auVar52._0_8_ = (ulonglong)auVar40._4_4_ * (ulonglong)auVar40._4_4_ << 0x20;
        auVar52._8_8_ = uVar67 * uVar67 << 0x20;
        auVar75._0_4_ = auVar40._0_4_ + iVar13;
        auVar75._4_4_ = auVar40._4_4_ + iVar4;
        auVar75._8_4_ = auVar40._8_4_ + iVar5;
        auVar75._12_4_ = auVar40._12_4_ + iVar49;
        auVar52 = auVar51 & auVar34 | auVar52;
        pfVar14 = (float *)(puVar2 + uVar29 + 4);
        *pfVar14 = (float)auVar52._0_4_;
        pfVar14[1] = (float)auVar52._4_4_;
        pfVar14[2] = (float)auVar52._8_4_;
        pfVar14[3] = (float)auVar52._12_4_;
        puVar3 = puVar12 + uVar29 + 4;
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        uVar29 = uVar29 + 8;
      } while (uVar29 < uVar22);
    }
    uVar9 = _UNK_14308779c;
    uVar8 = _UNK_143087798;
    uVar7 = _UNK_143087794;
    uVar6 = _DAT_143087790;
    if (iVar25 + 1U <= (uint)uVar33) {
      uVar19 = (uint)uVar33 - iVar25;
      if ((int)uVar19 < 4) {
        uVar29 = 0;
      }
      else {
        auVar42._4_4_ = iVar25 + 1U;
        auVar42._0_4_ = iVar25;
        uVar33 = 0;
        auVar42._12_4_ = iVar25 + 3;
        auVar42._8_4_ = iVar25 + 2;
        uVar29 = (ulonglong)(int)(uVar19 & 0xfffffffc);
        do {
          uVar67 = auVar42._8_8_ >> 0x20;
          uVar26 = auVar42._0_4_;
          auVar73._0_8_ = (ulonglong)uVar26 * (ulonglong)uVar26;
          auVar73._8_8_ = (auVar42._8_8_ & 0xffffffff) * (ulonglong)auVar42._8_4_;
          uVar20 = auVar42._4_4_;
          auVar43._0_4_ = uVar26 + iVar13;
          auVar43._4_4_ = uVar20 + iVar4;
          auVar43._8_4_ = auVar42._8_4_ + iVar5;
          auVar43._12_4_ = auVar42._12_4_ + iVar49;
          auVar74._0_8_ = (ulonglong)uVar20 * (ulonglong)uVar20 << 0x20;
          auVar74._8_8_ = uVar67 * uVar67 << 0x20;
          auVar74 = auVar73 & auVar34 | auVar74;
          pfVar14 = (float *)(puVar2 + uVar22 + uVar33);
          *pfVar14 = (float)auVar74._0_4_;
          pfVar14[1] = (float)auVar74._4_4_;
          pfVar14[2] = (float)auVar74._8_4_;
          pfVar14[3] = (float)auVar74._12_4_;
          puVar3 = puVar12 + uVar22 + uVar33;
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          uVar33 = uVar33 + 4;
          auVar42 = auVar43;
        } while (uVar33 < uVar29);
        uVar33 = (ulonglong)param_5._4_4_;
      }
      goto LAB_140135770;
    }
  }
  lStack_c0 = (longlong)(int)param_5._4_4_;
  iVar28 = 0;
  if ((int)uVar33 * 2 < 1) {
    puStack_a0 = puVar2 + lVar11 * 3;
  }
  else {
    uVar29 = lStack_c0 * 2;
    if ((longlong)uVar29 < 4) {
      puStack_a0 = puVar2 + lVar11 * 3;
    }
    else {
      puStack_a0 = puVar2 + lVar11 * 3;
      uVar19 = (uint)puStack_a0 & 0xf;
      if (((ulonglong)puStack_a0 & 0xf) != 0) {
        if (((ulonglong)puStack_a0 & 3) != 0) goto LAB_14013590a;
        uVar19 = 0x10 - uVar19 >> 2;
      }
      uVar22 = (ulonglong)uVar19;
      if ((longlong)(uVar22 + 4) <= (longlong)uVar29) {
        iVar28 = (int)uVar29 - ((int)uVar29 - uVar19 & 3);
        uVar33 = 0;
        if (uVar19 != 0) {
          do {
            puStack_a0[uVar33] = 0;
            uVar33 = uVar33 + 1;
          } while (uVar33 < uVar22);
        }
        do {
          *(undefined1 (*) [16])(puStack_a0 + uVar22) = (undefined1  [16])0x0;
          uVar22 = uVar22 + 4;
        } while (uVar22 < (ulonglong)(longlong)iVar28);
        uVar33 = (ulonglong)param_5._4_4_;
      }
    }
LAB_14013590a:
    uVar22 = (ulonglong)iVar28;
    if (uVar22 < uVar29) {
      do {
        puStack_a0[uVar22] = 0;
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar29);
      iVar28 = (int)uVar22;
    }
  }
  iVar25 = (int)uVar33;
  if (iVar28 <= iVar25 * 3) {
    uVar19 = (iVar25 * 3 - iVar28) + 1;
    if ((int)uVar19 < 4) {
LAB_140136586:
      uStack_d8 = 0;
    }
    else {
      puVar12 = puStack_a0 + iVar28;
      uVar29 = (ulonglong)puVar12 & 0xf;
      if ((int)uVar29 != 0) {
        if (((ulonglong)puVar12 & 3) != 0) goto LAB_140136586;
        uVar29 = (ulonglong)(0x10U - (int)uVar29 >> 2);
      }
      uVar20 = (uint)uVar29;
      if ((int)uVar19 < (int)(uVar20 + 4)) goto LAB_140136586;
      uStack_d8 = (longlong)(int)uVar19 - (ulonglong)(uVar19 - uVar20 & 3);
      if (uVar20 != 0) {
        iVar13 = iVar28 + iVar25 * -2;
        lVar18 = 0;
        uStack_c8 = 0;
        do {
          uStack_c8 = uStack_c8 + 1;
          puVar12[lVar18] = iVar13;
          lVar18 = lVar18 + 1;
          iVar13 = iVar13 + 1;
        } while (uStack_c8 < uVar20);
      }
      iVar49 = _UNK_14308778c;
      iVar5 = _UNK_143087788;
      iVar4 = _UNK_143087784;
      iVar13 = _DAT_143087780;
      iVar25 = iVar25 * -2 + iVar28;
      iVar17 = iVar25 + 1 + uVar20;
      auVar34._4_4_ = iVar17;
      auVar34._0_4_ = iVar25 + uVar20;
      auVar34._12_4_ = iVar17 + 2;
      auVar34._8_4_ = iVar17 + 1;
      do {
        *(undefined1 (*) [16])(puVar12 + uVar29) = auVar34;
        uVar29 = uVar29 + 4;
        auVar35._0_4_ = auVar34._0_4_ + iVar13;
        auVar35._4_4_ = auVar34._4_4_ + iVar4;
        auVar35._8_4_ = auVar34._8_4_ + iVar5;
        auVar35._12_4_ = auVar34._12_4_ + iVar49;
        auVar34 = auVar35;
      } while (uVar29 < uStack_d8);
      uVar33 = (ulonglong)param_5._4_4_;
    }
    uVar20 = (uint)uStack_d8;
    lVar18 = (longlong)(int)uVar20;
    if (uVar20 < uVar19) {
      iVar25 = iVar28 + (int)uVar33 * -2 + uVar20;
      do {
        uVar20 = uVar20 + 1;
        puStack_a0[iVar28 + lVar18] = iVar25;
        lVar18 = lVar18 + 1;
        iVar25 = iVar25 + 1;
      } while (uVar20 < uVar19);
      uVar33 = (ulonglong)param_5._4_4_;
    }
  }
  uVar19 = (int)uVar33 - 1;
  uVar22 = uVar33 >> 1 & 0x7fffffff;
  iVar28 = (int)uVar22;
  param_1 = param_1 + (int)(param_2 * uVar19);
  lVar18 = lVar11 * 8 + lStack_c0 * 4;
  uVar29 = 0;
  puVar12 = param_3;
  do {
    if (-1 < (int)uVar19) {
      uVar20 = uVar19;
      if ((((int)uVar33 < 7) || (-lVar16 < 4)) ||
         ((lVar23 = (longlong)puVar2 + ((lVar18 + -4) - param_1), lVar23 <= lStack_c0 * 4 &&
          (lVar30 = (lStack_c0 + -1) * lVar16 + 1, -lVar30 == lVar23 || -lVar23 < lVar30)))) {
        iVar25 = 1;
        lVar30 = 0;
        lVar23 = 0;
        if (iVar28 != 0) {
          uVar67 = 0;
          do {
            uVar32 = uVar67;
            uVar67 = uVar32 + 1;
            uVar20 = uVar20 + 1 & -(uint)(*(char *)(param_1 + lVar23 * 2) != '\0');
            *(uint *)((longlong)puVar2 + lVar30 + -4 + lVar18) = uVar20;
            lVar1 = lVar23 * 2;
            lVar23 = lVar23 + -lVar16;
            uVar20 = uVar20 + 1 & -(uint)(*(char *)(-lVar16 + param_1 + lVar1) != '\0');
            *(uint *)((longlong)puVar2 + lVar30 + -8 + lVar18) = uVar20;
            lVar30 = lVar30 + -8;
          } while (uVar67 < uVar22);
          uVar33 = (ulonglong)param_5._4_4_;
          iVar25 = (int)uVar32 + 2 + (int)uVar67;
        }
        if (iVar25 - 1U < (uint)uVar33) goto LAB_140135e31;
      }
      else {
        iVar25 = 1;
        lVar30 = 0;
        lVar23 = 0;
        if (iVar28 != 0) {
          uVar67 = 0;
          do {
            uVar32 = uVar67;
            uVar67 = uVar32 + 1;
            uVar20 = uVar20 + 1 & -(uint)(*(char *)(param_1 + lVar23 * 2) != '\0');
            *(uint *)((longlong)puVar2 + lVar30 + -4 + lVar18) = uVar20;
            lVar1 = lVar23 * 2;
            lVar23 = lVar23 + -lVar16;
            uVar20 = uVar20 + 1 & -(uint)(*(char *)(-lVar16 + param_1 + lVar1) != '\0');
            *(uint *)((longlong)puVar2 + lVar30 + -8 + lVar18) = uVar20;
            lVar30 = lVar30 + -8;
          } while (uVar67 < uVar22);
          uVar33 = (ulonglong)param_5._4_4_;
          iVar25 = (int)uVar32 + 2 + (int)uVar67;
        }
        if (iVar25 - 1U < (uint)uVar33) {
LAB_140135e31:
          puVar2[lStack_c0 + (lVar11 * 2 - (longlong)iVar25)] =
               uVar20 + 1 & -(uint)(*(char *)((lVar16 - lVar16 * iVar25) + param_1) != '\0');
        }
      }
    }
    iVar25 = 1;
    lVar23 = 0;
    uVar32 = (ulonglong)uVar19;
    uVar26 = (uint)uVar33;
    uVar67 = 0;
    uVar20 = uVar19;
    if (iVar28 != 0) {
      do {
        uVar24 = uVar67;
        iVar25 = ((int)uVar32 + 1) -
                 puStack_a0
                 [(longlong)(int)(((int)uVar32 + uVar26 * 2) - puVar2[lVar11 * 2 + uVar24 * 2]) + 1]
        ;
        puVar2[lVar11 * 2 + uVar24 * 2] = iVar25;
        puVar12[lVar23 * 2] = puVar2[iVar25];
        uVar20 = (iVar25 + 1) -
                 puStack_a0
                 [(longlong)(int)((iVar25 + uVar26 * 2) - puVar2[lVar11 * 2 + uVar24 * 2 + 1]) + 1];
        puVar2[lVar11 * 2 + uVar24 * 2 + 1] = uVar20;
        uVar32 = (ulonglong)(int)uVar20;
        uVar67 = uVar24 + 1;
        puVar12[lVar21 + lVar23 * 2] = puVar2[uVar32];
        lVar23 = lVar23 + lVar21;
      } while (uVar67 < uVar22);
      iVar25 = (int)uVar24 + 2 + (int)uVar67;
    }
    if (iVar25 - 1U < uVar26) {
      lVar23 = (longlong)iVar25;
      iVar25 = (uVar20 + 1) -
               puStack_a0
               [(longlong)(int)((uVar20 + uVar26 * 2) - puVar2[lVar11 * 2 + lVar23 + -1]) + 1];
      puVar2[lVar11 * 2 + lVar23 + -1] = iVar25;
      *(undefined4 *)(lVar23 * lVar21 * 4 + lVar21 * -4 + (longlong)puVar12) = puVar2[iVar25];
    }
    uVar29 = uVar29 + 1;
    puVar12 = puVar12 + 1;
    param_1 = param_1 + 1;
  } while (uVar29 < uVar15);
  *puVar2 = 0;
  puVar2[lVar31] = 0;
  if ((int)param_5 < 2) goto LAB_140136499;
  lVar11 = uVar15 * 4 + -4;
  uVar27 = param_6 + 4 + uVar27;
  if (((longlong)(uVar27 - (longlong)(puVar2 + lVar31 + 1)) < lVar11) &&
     ((longlong)-(uVar27 - (longlong)(puVar2 + lVar31 + 1)) < lVar11)) {
    uVar20 = (int)param_5 - 1;
    iVar28 = 1;
    lVar11 = 0;
    uVar19 = 0;
    if (uVar20 >> 1 != 0) {
      do {
        uVar26 = uVar19;
        iVar25 = uVar26 * 2 + 1;
        iVar28 = uVar26 * 2 + 2;
        uVar19 = uVar26 + 1;
        fVar36 = _DAT_1430877c8 / (float)iVar28;
        puVar2[lVar31 + lVar11 * 2 + 1] = _DAT_1430877c8 / (float)iVar25;
        puVar2[lVar11 * 2 + 1] = (float)(iVar25 * iVar25);
        puVar2[lVar31 + lVar11 * 2 + 2] = fVar36;
        puVar2[lVar11 * 2 + 2] = (float)(iVar28 * iVar28);
        lVar11 = lVar11 + 1;
      } while (uVar19 < uVar20 >> 1);
      iVar28 = uVar26 + 2 + uVar19;
    }
    if (iVar28 - 1U < uVar20) {
      puVar2[lVar31 + iVar28] = _DAT_1430877c8 / (float)iVar28;
      puVar2[iVar28] = (float)(iVar28 * iVar28);
    }
    goto LAB_140136499;
  }
  uVar19 = (int)param_5 - 1;
  if ((int)uVar19 < 8) {
LAB_140136594:
    iVar28 = 0;
    if (uVar19 == 0) goto LAB_140136499;
LAB_1401365a1:
    uVar27 = 0;
  }
  else {
    uVar20 = (uint)uVar27 & 0xf;
    if ((uVar27 & 0xf) != 0) {
      if ((uVar27 & 3) != 0) goto LAB_140136594;
      uVar20 = 0x10 - uVar20 >> 2;
    }
    uVar27 = (ulonglong)uVar20;
    if ((int)uVar19 < (int)(uVar20 + 8)) goto LAB_140136594;
    uVar26 = 0;
    lVar11 = 0;
    iVar28 = uVar19 - (uVar19 - uVar20 & 7);
    if (uVar20 != 0) {
      do {
        uVar26 = uVar26 + 1;
        fVar36 = _DAT_1430877c8 / (float)(int)uVar26;
        puVar2[lVar11 + 1] = (float)(int)(uVar26 * uVar26);
        puVar2[lVar31 + lVar11 + 1] = fVar36;
        lVar11 = lVar11 + 1;
      } while (uVar26 < uVar20);
    }
    auVar34 = _DAT_1430877a0;
    iVar5 = _UNK_14308778c;
    iVar4 = _UNK_143087788;
    iVar13 = _UNK_143087784;
    iVar25 = _DAT_143087780;
    auVar44._4_4_ = uVar20 + 2;
    auVar44._0_4_ = uVar20 + 1;
    auVar44._12_4_ = uVar20 + 4;
    auVar44._8_4_ = uVar20 + 3;
    fVar36 = (float)DAT_1430877b0;
    fVar37 = DAT_1430877b0._4_4_;
    fVar38 = DAT_1430877b0._8_4_;
    fVar39 = DAT_1430877b0._12_4_;
    if (((ulonglong)(puVar2 + lVar31 + uVar27 + 1) & 0xf) == 0) {
      auVar83 = unaff_XMM15;
      do {
        uVar20 = auVar44._0_4_;
        auVar59._0_4_ = (float)(int)uVar20;
        uVar26 = auVar44._4_4_;
        auVar59._4_4_ = (float)(int)uVar26;
        uVar48 = auVar44._8_4_;
        auVar59._8_4_ = (float)(int)uVar48;
        auVar59._12_4_ = (float)auVar44._12_4_;
        auVar75 = rcpps(auVar83,auVar59);
        fVar50 = auVar75._0_4_;
        fVar65 = auVar75._4_4_;
        fVar66 = auVar75._8_4_;
        fVar68 = auVar75._12_4_;
        uVar29 = auVar44._8_8_ >> 0x20;
        pfVar14 = (float *)(puVar2 + lVar31 + uVar27 + 1);
        *pfVar14 = ((fVar50 + fVar50) - auVar59._0_4_ * fVar50 * fVar50) * fVar36;
        pfVar14[1] = ((fVar65 + fVar65) - auVar59._4_4_ * fVar65 * fVar65) * fVar37;
        pfVar14[2] = ((fVar66 + fVar66) - auVar59._8_4_ * fVar66 * fVar66) * fVar38;
        pfVar14[3] = ((fVar68 + fVar68) - auVar59._12_4_ * fVar68 * fVar68) * fVar39;
        auVar81._0_8_ = (ulonglong)uVar26 * (ulonglong)uVar26 << 0x20;
        auVar81._8_8_ = uVar29 * uVar29 << 0x20;
        auVar80._0_8_ = (ulonglong)uVar20 * (ulonglong)uVar20;
        auVar80._8_8_ = (auVar44._8_8_ & 0xffffffff) * (ulonglong)uVar48;
        auVar46._0_4_ = uVar20 + iVar25;
        auVar46._4_4_ = uVar26 + iVar13;
        auVar46._8_4_ = uVar48 + iVar4;
        auVar46._12_4_ = auVar44._12_4_ + iVar5;
        auVar81 = auVar80 & auVar34 | auVar81;
        auVar60._0_4_ = (float)auVar81._0_4_;
        auVar60._4_4_ = (float)auVar81._4_4_;
        auVar60._8_4_ = (float)auVar81._8_4_;
        auVar60._12_4_ = (float)auVar81._12_4_;
        auVar82._0_4_ = (float)(int)auVar46._0_4_;
        auVar82._4_4_ = (float)(int)auVar46._4_4_;
        auVar82._8_4_ = (float)(int)auVar46._8_4_;
        auVar82._12_4_ = (float)auVar46._12_4_;
        *(undefined1 (*) [16])(puVar2 + uVar27 + 1) = auVar60;
        auVar75 = rcpps(auVar60,auVar82);
        fVar50 = auVar75._0_4_;
        fVar65 = auVar75._4_4_;
        fVar66 = auVar75._8_4_;
        fVar68 = auVar75._12_4_;
        uVar29 = auVar46._8_8_ >> 0x20;
        pfVar14 = (float *)(puVar2 + lVar31 + uVar27 + 5);
        *pfVar14 = ((fVar50 + fVar50) - auVar82._0_4_ * fVar50 * fVar50) * fVar36;
        pfVar14[1] = ((fVar65 + fVar65) - auVar82._4_4_ * fVar65 * fVar65) * fVar37;
        pfVar14[2] = ((fVar66 + fVar66) - auVar82._8_4_ * fVar66 * fVar66) * fVar38;
        pfVar14[3] = ((fVar68 + fVar68) - auVar82._12_4_ * fVar68 * fVar68) * fVar39;
        auVar62._0_8_ = (ulonglong)auVar46._4_4_ * (ulonglong)auVar46._4_4_ << 0x20;
        auVar62._8_8_ = uVar29 * uVar29 << 0x20;
        auVar61._0_8_ = (ulonglong)auVar46._0_4_ * (ulonglong)auVar46._0_4_;
        auVar61._8_8_ = (auVar46._8_8_ & 0xffffffff) * (ulonglong)auVar46._8_4_;
        auVar44._0_4_ = auVar46._0_4_ + iVar25;
        auVar44._4_4_ = auVar46._4_4_ + iVar13;
        auVar44._8_4_ = auVar46._8_4_ + iVar4;
        auVar44._12_4_ = auVar46._12_4_ + iVar5;
        auVar62 = auVar61 & auVar34 | auVar62;
        auVar83._0_4_ = (float)auVar62._0_4_;
        auVar83._4_4_ = (float)auVar62._4_4_;
        auVar83._8_4_ = (float)auVar62._8_4_;
        auVar83._12_4_ = (float)auVar62._12_4_;
        *(undefined1 (*) [16])(puVar2 + uVar27 + 5) = auVar83;
        uVar27 = uVar27 + 8;
      } while (uVar27 < (ulonglong)(longlong)iVar28);
    }
    else {
      auVar79 = unaff_XMM15;
      do {
        uVar20 = auVar44._0_4_;
        auVar55._0_4_ = (float)(int)uVar20;
        uVar26 = auVar44._4_4_;
        auVar55._4_4_ = (float)(int)uVar26;
        uVar48 = auVar44._8_4_;
        auVar55._8_4_ = (float)(int)uVar48;
        auVar55._12_4_ = (float)auVar44._12_4_;
        auVar75 = rcpps(auVar79,auVar55);
        fVar50 = auVar75._0_4_;
        fVar65 = auVar75._4_4_;
        fVar66 = auVar75._8_4_;
        fVar68 = auVar75._12_4_;
        uVar29 = auVar44._8_8_ >> 0x20;
        pfVar14 = (float *)(puVar2 + lVar31 + uVar27 + 1);
        *pfVar14 = ((fVar50 + fVar50) - auVar55._0_4_ * fVar50 * fVar50) * fVar36;
        pfVar14[1] = ((fVar65 + fVar65) - auVar55._4_4_ * fVar65 * fVar65) * fVar37;
        pfVar14[2] = ((fVar66 + fVar66) - auVar55._8_4_ * fVar66 * fVar66) * fVar38;
        pfVar14[3] = ((fVar68 + fVar68) - auVar55._12_4_ * fVar68 * fVar68) * fVar39;
        auVar77._0_8_ = (ulonglong)uVar26 * (ulonglong)uVar26 << 0x20;
        auVar77._8_8_ = uVar29 * uVar29 << 0x20;
        auVar76._0_8_ = (ulonglong)uVar20 * (ulonglong)uVar20;
        auVar76._8_8_ = (auVar44._8_8_ & 0xffffffff) * (ulonglong)uVar48;
        auVar45._0_4_ = uVar20 + iVar25;
        auVar45._4_4_ = uVar26 + iVar13;
        auVar45._8_4_ = uVar48 + iVar4;
        auVar45._12_4_ = auVar44._12_4_ + iVar5;
        auVar77 = auVar76 & auVar34 | auVar77;
        auVar56._0_4_ = (float)auVar77._0_4_;
        auVar56._4_4_ = (float)auVar77._4_4_;
        auVar56._8_4_ = (float)auVar77._8_4_;
        auVar56._12_4_ = (float)auVar77._12_4_;
        auVar78._0_4_ = (float)(int)auVar45._0_4_;
        auVar78._4_4_ = (float)(int)auVar45._4_4_;
        auVar78._8_4_ = (float)(int)auVar45._8_4_;
        auVar78._12_4_ = (float)auVar45._12_4_;
        *(undefined1 (*) [16])(puVar2 + uVar27 + 1) = auVar56;
        auVar75 = rcpps(auVar56,auVar78);
        fVar50 = auVar75._0_4_;
        fVar65 = auVar75._4_4_;
        fVar66 = auVar75._8_4_;
        fVar68 = auVar75._12_4_;
        uVar29 = auVar45._8_8_ >> 0x20;
        pfVar14 = (float *)(puVar2 + lVar31 + uVar27 + 5);
        *pfVar14 = ((fVar50 + fVar50) - auVar78._0_4_ * fVar50 * fVar50) * fVar36;
        pfVar14[1] = ((fVar65 + fVar65) - auVar78._4_4_ * fVar65 * fVar65) * fVar37;
        pfVar14[2] = ((fVar66 + fVar66) - auVar78._8_4_ * fVar66 * fVar66) * fVar38;
        pfVar14[3] = ((fVar68 + fVar68) - auVar78._12_4_ * fVar68 * fVar68) * fVar39;
        auVar58._0_8_ = (ulonglong)auVar45._4_4_ * (ulonglong)auVar45._4_4_ << 0x20;
        auVar58._8_8_ = uVar29 * uVar29 << 0x20;
        auVar57._0_8_ = (ulonglong)auVar45._0_4_ * (ulonglong)auVar45._0_4_;
        auVar57._8_8_ = (auVar45._8_8_ & 0xffffffff) * (ulonglong)auVar45._8_4_;
        auVar44._0_4_ = auVar45._0_4_ + iVar25;
        auVar44._4_4_ = auVar45._4_4_ + iVar13;
        auVar44._8_4_ = auVar45._8_4_ + iVar4;
        auVar44._12_4_ = auVar45._12_4_ + iVar5;
        auVar58 = auVar57 & auVar34 | auVar58;
        auVar79._0_4_ = (float)auVar58._0_4_;
        auVar79._4_4_ = (float)auVar58._4_4_;
        auVar79._8_4_ = (float)auVar58._8_4_;
        auVar79._12_4_ = (float)auVar58._12_4_;
        *(undefined1 (*) [16])(puVar2 + uVar27 + 5) = auVar79;
        uVar27 = uVar27 + 8;
      } while (uVar27 < (ulonglong)(longlong)iVar28);
    }
    iVar5 = _UNK_14308778c;
    iVar4 = _UNK_143087788;
    iVar13 = _UNK_143087784;
    iVar25 = _DAT_143087780;
    if (uVar19 < iVar28 + 1U) goto LAB_140136499;
    uVar19 = uVar19 - iVar28;
    if ((int)uVar19 < 4) goto LAB_1401365a1;
    uVar27 = (ulonglong)(int)(uVar19 & 0xfffffffc);
    auVar47._4_4_ = iVar28 + 2;
    auVar47._0_4_ = iVar28 + 1U;
    uVar29 = 0;
    auVar47._12_4_ = iVar28 + 4;
    auVar47._8_4_ = iVar28 + 3;
    do {
      uVar20 = auVar47._0_4_;
      auVar63._0_4_ = (float)(int)uVar20;
      uVar26 = auVar47._4_4_;
      auVar63._4_4_ = (float)(int)uVar26;
      uVar48 = auVar47._8_4_;
      auVar63._8_4_ = (float)(int)uVar48;
      iVar49 = auVar47._12_4_;
      auVar63._12_4_ = (float)iVar49;
      auVar75 = rcpps(unaff_XMM15,auVar63);
      fVar50 = auVar75._0_4_;
      fVar65 = auVar75._4_4_;
      fVar66 = auVar75._8_4_;
      fVar68 = auVar75._12_4_;
      uVar33 = auVar47._8_8_ >> 0x20;
      pfVar14 = (float *)(puVar2 + lVar31 + (longlong)iVar28 + uVar29 + 1);
      *pfVar14 = ((fVar50 + fVar50) - auVar63._0_4_ * fVar50 * fVar50) * fVar36;
      pfVar14[1] = ((fVar65 + fVar65) - auVar63._4_4_ * fVar65 * fVar65) * fVar37;
      pfVar14[2] = ((fVar66 + fVar66) - auVar63._8_4_ * fVar66 * fVar66) * fVar38;
      pfVar14[3] = ((fVar68 + fVar68) - auVar63._12_4_ * fVar68 * fVar68) * fVar39;
      auVar64._0_8_ = (ulonglong)uVar26 * (ulonglong)uVar26 << 0x20;
      auVar64._8_8_ = uVar33 * uVar33 << 0x20;
      auVar84._0_8_ = (ulonglong)uVar20 * (ulonglong)uVar20;
      auVar84._8_8_ = (auVar47._8_8_ & 0xffffffff) * (ulonglong)uVar48;
      auVar47._0_4_ = uVar20 + iVar25;
      auVar47._4_4_ = uVar26 + iVar13;
      auVar47._8_4_ = uVar48 + iVar4;
      auVar47._12_4_ = iVar49 + iVar5;
      unaff_XMM15 = auVar84 & auVar34 | auVar64;
      pfVar14 = (float *)(puVar2 + (longlong)iVar28 + uVar29 + 1);
      *pfVar14 = (float)unaff_XMM15._0_4_;
      pfVar14[1] = (float)unaff_XMM15._4_4_;
      pfVar14[2] = (float)unaff_XMM15._8_4_;
      pfVar14[3] = (float)unaff_XMM15._12_4_;
      uVar29 = uVar29 + 4;
    } while (uVar29 < uVar27);
  }
  uVar29 = uVar27 & 0xffffffff;
  if ((uint)uVar27 < uVar19) {
    do {
      iVar25 = (int)uVar29 + 1 + iVar28;
      uVar20 = (int)uVar29 + 1;
      uVar29 = (ulonglong)uVar20;
      fVar36 = _DAT_1430877c8 / (float)iVar25;
      puVar2[(longlong)iVar28 + uVar27 + 1] = (float)(iVar25 * iVar25);
      puVar2[lVar31 + (longlong)iVar28 + uVar27 + 1] = fVar36;
      uVar27 = uVar27 + 1;
    } while (uVar20 < uVar19);
  }
LAB_140136499:
  lVar11 = lVar31 * 0xc;
  iVar28 = 0;
  puVar12 = param_3;
  do {
    puVar2[lVar31 * 4 + 1] = 0;
    lVar16 = 0;
    puVar2[lVar31 * 3] = 0xff7fffff;
    puVar2[lVar31 * 3 + 1] = uVar10;
    puVar2[lVar31 * 2] = *puVar12;
    lVar18 = 1;
    if (1 < (int)param_5) {
      do {
        fVar36 = (float)puVar12[lVar18];
        puVar2[lVar31 * 2 + lVar18] = fVar36;
        while( true ) {
          lVar23 = (longlong)*(int *)((longlong)puVar2 + lVar16 + 4 + lVar31 * 0x10);
          fVar37 = (((fVar36 + (float)puVar2[lVar18]) - (float)puVar12[lVar23]) -
                   (float)puVar2[lVar23]) * (float)puVar2[lVar31 + (lVar18 - lVar23)];
          pfVar14 = (float *)((longlong)puVar2 + lVar16 + lVar11);
          if (*pfVar14 <= fVar37 && fVar37 != *pfVar14) break;
          lVar16 = lVar16 + -4;
        }
        *(int *)((longlong)puVar2 + lVar16 + 8 + lVar31 * 0x10) = (int)lVar18;
        lVar18 = lVar18 + 1;
        *(float *)((longlong)puVar2 + lVar16 + 4 + lVar11) = fVar37;
        *(undefined4 *)((longlong)puVar2 + lVar16 + 8 + lVar11) = uVar10;
        lVar16 = lVar16 + 4;
      } while (lVar18 < (longlong)uVar15);
    }
    lVar16 = 0;
    lVar18 = 0;
    pfVar14 = (float *)(puVar2 + lVar31 * 3 + 1);
    iVar25 = 0;
    do {
      fVar36 = (float)iVar25;
      if (*pfVar14 <= fVar36 && fVar36 != *pfVar14) {
        lVar23 = lVar16 + 1;
        do {
          lVar16 = lVar23;
          lVar23 = lVar16 + 1;
          pfVar14 = (float *)(puVar2 + lVar31 * 3 + lVar23);
        } while ((float)puVar2[lVar31 * 3 + lVar23] <= fVar36 &&
                 fVar36 != (float)puVar2[lVar31 * 3 + lVar23]);
      }
      iVar13 = iVar25 + 1;
      uVar19 = iVar25 - puVar2[lVar31 * 4 + lVar16 + 1];
      uVar20 = (int)uVar19 >> 0x1f;
      puVar12[lVar18] =
           (float)puVar2[(int)((uVar19 ^ uVar20) - uVar20)] +
           (float)puVar2[lVar31 * 2 + (longlong)(int)puVar2[lVar31 * 4 + lVar16 + 1]];
      lVar18 = lVar18 + 1;
      iVar25 = iVar13;
    } while (iVar13 < (int)param_5);
    iVar28 = iVar28 + 1;
    puVar12 = puVar12 + lVar21;
  } while (iVar28 < (int)param_5._4_4_);
  iVar28 = 0;
  do {
    FUN_141bb23c0(param_3,param_3,(int)param_5);
    iVar28 = iVar28 + 1;
    param_3 = param_3 + lVar21;
  } while (iVar28 < (int)param_5._4_4_);
  return 0;
}


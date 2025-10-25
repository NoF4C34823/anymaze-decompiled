
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140126280(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
             longlong param_6,uint param_7,undefined8 param_8,int param_9,uint param_10,
             byte param_11,longlong param_12,int param_13,int param_14,longlong param_15,
             undefined8 param_16)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined8 uVar34;
  int iVar35;
  int iVar44;
  int iVar45;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  int iVar46;
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  uint uStack_128;
  longlong *plStack_e8;
  longlong lStack_d0;
  int iStack_a8;
  int iStack_a4;
  uint uStack_84;
  int iStack_7c;
  longlong lStack_68;
  int iStack_58;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined2 uVar43;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar75 [16];
  undefined1 auVar54 [16];
  
  uVar30 = (int)param_5 + 7U & 0xfffffff8;
  iVar27 = (int)param_7 / 2;
  uVar32 = param_9 / 2;
  iStack_58 = 0;
  lVar31 = (longlong)param_9;
  lVar20 = (longlong)(int)uVar30;
  if (param_5._4_4_ == 0) {
    return 0;
  }
  iVar9 = FUN_140a3b320();
  bVar4 = param_5._4_4_ * (int)param_5 <= iVar9 >> 1;
  FUN_140a3b340(param_5,param_7);
  FUN_140a3b3a0(param_5,param_9);
  lVar18 = iStack_a8 + param_12;
  plVar10 = (longlong *)(iStack_a4 + lVar18 + (-(iStack_a4 + lVar18 & 0x1fU) & 0x1f));
  iVar9 = param_9 * 3 + 0x1e;
  uVar33 = (ulonglong)(int)uVar32;
  uVar14 = (longlong)(plVar10 + iVar9) + (-((ulonglong)(plVar10 + iVar9) & 0x1f) & 0x1f);
  plVar22 = plVar10 + lVar31;
  plStack_e8 = plVar10 + (lVar31 - uVar33);
  if ((param_10 & 0x10) == 0) {
    switch(param_10 & 0xf) {
    case 1:
      if (0 < (int)uVar32) {
        if ((int)uVar32 < 8) {
LAB_140127f1a:
          iVar24 = 0;
          if (uVar32 == 0) break;
          uStack_148 = 0;
          uStack_150 = uVar33;
        }
        else {
          plVar25 = plVar10 + (lVar31 - uVar33);
          uVar21 = (ulonglong)((uint)plVar25 & 0xf);
          if (((ulonglong)plVar25 & 0xf) != 0) {
            if (((ulonglong)plVar25 & 7) != 0) goto LAB_140127f1a;
            uVar21 = 1;
          }
          iVar13 = (int)uVar21;
          if ((int)uVar32 < iVar13 + 8) goto LAB_140127f1a;
          iVar24 = uVar32 - (uVar32 - iVar13 & 7);
          uVar12 = 0;
          lVar23 = uVar14 + (longlong)(int)(param_9 * uVar30) * 2;
          if (iVar13 != 0) {
            do {
              plVar25[uVar12] = lVar23;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar21);
          }
          uVar12 = (ulonglong)iVar24;
          do {
            plVar25[uVar21] = lVar23;
            (plVar25 + uVar21)[1] = lVar23;
            plVar25[uVar21 + 2] = lVar23;
            (plVar25 + uVar21 + 2)[1] = lVar23;
            plVar25[uVar21 + 4] = lVar23;
            (plVar25 + uVar21 + 4)[1] = lVar23;
            plVar25[uVar21 + 6] = lVar23;
            (plVar25 + uVar21 + 6)[1] = lVar23;
            uVar21 = uVar21 + 8;
          } while (uVar21 < uVar12);
          if (uVar32 < iVar24 + 1U) break;
          uStack_150 = uVar33 - uVar12;
          if ((longlong)uStack_150 < 2) {
            uStack_148 = 0;
          }
          else {
            uStack_148 = (ulonglong)(int)((uint)uStack_150 & 0xfffffffe);
            uVar21 = 0;
            do {
              plVar25[uVar12 + uVar21] = lVar23;
              (plVar25 + uVar12 + uVar21)[1] = lVar23;
              uVar21 = uVar21 + 2;
            } while (uVar21 < uStack_148);
          }
        }
        if (uStack_148 < uStack_150) {
          do {
            plVar10[(iVar24 + lVar31 + uStack_148) - uVar33] =
                 uVar14 + (longlong)(int)(param_9 * uVar30) * 2;
            uStack_148 = uStack_148 + 1;
          } while (uStack_148 < uStack_150);
        }
      }
      break;
    case 2:
      if (0 < (int)uVar32) {
        uStack_158 = 0;
        plVar25 = plVar10 + lVar31;
        lVar23 = uVar14 + (longlong)(int)(uVar32 * uVar30 - uVar30) * 2;
        pcVar2 = *(code **)(&UNK_143087320 + (longlong)param_13 * 8);
        iVar13 = param_16._4_4_;
        do {
          iVar13 = iVar13 + -1;
          if (iVar13 < 0) {
            iVar13 = param_16._4_4_ + -1;
          }
          *plVar10 = lVar23;
          plVar25[-1] = lVar23;
          (*pcVar2)(param_2 * iVar13 + param_15,plVar10,param_12,param_2,iVar27,(int)param_5,
                    param_10,param_11);
          uStack_158 = uStack_158 + 1;
          plVar25 = plVar25 + -1;
          lVar23 = lVar23 + (longlong)(int)-uVar30 * 2;
        } while (uStack_158 < uVar32);
      }
      break;
    case 3:
      iStack_58 = 1;
    case 4:
      iVar13 = iStack_58 + -1;
      if (0 < (int)uVar32) {
        uStack_158 = 0;
        uStack_128 = param_10 & 0x20;
        plVar25 = plVar10 + lVar31;
        lVar23 = uVar14 + (longlong)(int)(uVar32 * uVar30 - uVar30) * 2;
        pcVar2 = *(code **)(&UNK_143087320 + (longlong)param_13 * 8);
        uStack_148._0_4_ = 1;
        do {
          iVar13 = iVar13 + (int)uStack_148;
          if (uStack_128 == 0) {
            if ((iVar13 == param_5._4_4_) || (iVar13 == -1)) {
              uStack_148._0_4_ = -(int)uStack_148;
              iVar24 = (int)uStack_148 - iStack_58;
              iStack_58 = -iStack_58;
              iVar13 = iVar13 + iVar24;
            }
            if (param_5._4_4_ == 1) {
              iVar13 = 0;
            }
          }
          *plVar10 = lVar23;
          plVar25[-1] = lVar23;
          (*pcVar2)(iVar13 * param_2 + param_1,plVar10,param_12,param_2,iVar27,(int)param_5,param_10
                    ,param_11);
          uStack_158 = uStack_158 + 1;
          plVar25 = plVar25 + -1;
          lVar23 = lVar23 + (longlong)(int)-uVar30 * 2;
        } while (uStack_158 < uVar32);
      }
      break;
    case 6:
      iVar13 = 0;
      if (0 < (int)param_7) {
        if ((longlong)(int)param_7 < 8) {
          uVar21 = 0;
          iVar13 = 0;
        }
        else {
          uVar12 = 0;
          iVar13 = 0;
          iVar24 = 0;
          iVar35 = 0;
          iVar45 = 0;
          uVar21 = (ulonglong)(int)(param_7 & 0xfffffff8);
          do {
            uVar11 = *(ulonglong *)(param_6 + uVar12 * 2);
            uVar15 = *(ulonglong *)(param_6 + 8 + uVar12 * 2);
            uVar12 = uVar12 + 8;
            uVar43 = (undefined2)(uVar11 >> 0x30);
            auVar38._8_4_ = 0;
            auVar38._0_8_ = uVar11;
            auVar38._12_2_ = uVar43;
            auVar38._14_2_ = uVar43;
            uVar43 = (undefined2)(uVar11 >> 0x20);
            auVar37._12_4_ = auVar38._12_4_;
            auVar37._8_2_ = 0;
            auVar37._0_8_ = uVar11;
            auVar37._10_2_ = uVar43;
            auVar36._10_6_ = auVar37._10_6_;
            auVar36._8_2_ = uVar43;
            auVar36._0_8_ = uVar11;
            uVar43 = (undefined2)(uVar11 >> 0x10);
            auVar5._4_8_ = auVar36._8_8_;
            auVar5._2_2_ = uVar43;
            auVar5._0_2_ = uVar43;
            uVar43 = (undefined2)(uVar15 >> 0x30);
            auVar49._8_4_ = 0;
            auVar49._0_8_ = uVar15;
            auVar49._12_2_ = uVar43;
            auVar49._14_2_ = uVar43;
            uVar43 = (undefined2)(uVar15 >> 0x20);
            auVar48._12_4_ = auVar49._12_4_;
            auVar48._8_2_ = 0;
            auVar48._0_8_ = uVar15;
            auVar48._10_2_ = uVar43;
            auVar47._10_6_ = auVar48._10_6_;
            auVar47._8_2_ = uVar43;
            auVar47._0_8_ = uVar15;
            uVar43 = (undefined2)(uVar15 >> 0x10);
            auVar6._4_8_ = auVar47._8_8_;
            auVar6._2_2_ = uVar43;
            auVar6._0_2_ = uVar43;
            iVar13 = iVar13 + (short)uVar11 + (int)(short)uVar15;
            iVar24 = iVar24 + (auVar5._0_4_ >> 0x10) + (auVar6._0_4_ >> 0x10);
            iVar35 = iVar35 + (auVar36._8_4_ >> 0x10) + (auVar47._8_4_ >> 0x10);
            iVar45 = iVar45 + (auVar37._12_4_ >> 0x10) + (auVar48._12_4_ >> 0x10);
          } while (uVar12 < uVar21);
          iVar13 = iVar13 + iVar35 + iVar24 + iVar45;
        }
        for (; uVar21 < (ulonglong)(longlong)(int)param_7; uVar21 = uVar21 + 1) {
          lVar23 = uVar21 * 2;
          iVar13 = iVar13 + *(short *)(param_6 + lVar23);
        }
      }
      iVar13 = iVar13 * (uint)param_11;
      if (iVar13 < -0x8000) {
        iVar13 = -0x8000;
      }
      iVar24 = 0x7fff;
      if (iVar13 < 0x7fff) {
        iVar24 = iVar13;
      }
      if (0 < (int)param_5) {
        uVar21 = (ulonglong)(int)param_5;
        uVar43 = (undefined2)iVar24;
        if ((longlong)uVar21 < 8) {
LAB_140127209:
          uVar11 = 0;
        }
        else {
          uVar12 = uVar14 & 0xf;
          if ((int)uVar12 != 0) {
            if ((uVar14 & 1) != 0) goto LAB_140127209;
            uVar12 = (ulonglong)(0x10U - (int)uVar12 >> 1);
          }
          if ((longlong)uVar21 < (longlong)(uVar12 + 8)) goto LAB_140127209;
          uVar15 = 0;
          uVar11 = (ulonglong)(int)((int)param_5 - ((int)param_5 - (int)uVar12 & 7U));
          if ((int)uVar12 != 0) {
            do {
              *(undefined2 *)(uVar14 + uVar15 * 2) = uVar43;
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar12);
          }
          uVar34 = CONCAT44(CONCAT22(uVar43,uVar43),CONCAT22(uVar43,uVar43));
          do {
            puVar1 = (undefined8 *)(uVar14 + uVar12 * 2);
            *puVar1 = uVar34;
            puVar1[1] = uVar34;
            uVar12 = uVar12 + 8;
          } while (uVar12 < uVar11);
        }
        for (; uVar11 < uVar21; uVar11 = uVar11 + 1) {
          *(undefined2 *)(uVar14 + uVar11 * 2) = uVar43;
        }
      }
      if (0 < (int)uVar32) {
        if ((longlong)uVar33 < 8) {
LAB_140127202:
          uVar12 = 0;
        }
        else {
          plVar25 = plVar10 + (lVar31 - uVar33);
          uVar21 = (ulonglong)plVar25 & 0xf;
          if ((int)uVar21 != 0) {
            if (((ulonglong)plVar25 & 7) != 0) goto LAB_140127202;
            uVar21 = 1;
          }
          if ((longlong)uVar33 < (longlong)(uVar21 + 8)) goto LAB_140127202;
          uVar11 = 0;
          uVar12 = (ulonglong)(int)(uVar32 - (uVar32 - (int)uVar21 & 7));
          if ((int)uVar21 != 0) {
            do {
              plVar25[uVar11] = uVar14;
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar21);
          }
          do {
            plVar25[uVar21] = uVar14;
            (plVar25 + uVar21)[1] = uVar14;
            plVar25[uVar21 + 2] = uVar14;
            (plVar25 + uVar21 + 2)[1] = uVar14;
            plVar25[uVar21 + 4] = uVar14;
            (plVar25 + uVar21 + 4)[1] = uVar14;
            plVar25[uVar21 + 6] = uVar14;
            (plVar25 + uVar21 + 6)[1] = uVar14;
            uVar21 = uVar21 + 8;
          } while (uVar21 < uVar12);
        }
        for (; uVar12 < uVar33; uVar12 = uVar12 + 1) {
          plVar10[lVar31 + (uVar12 - uVar33)] = uVar14;
        }
      }
    }
  }
  else {
    if (0 < (int)uVar32) {
      if ((int)uVar32 < 8) {
LAB_140128243:
        uVar12 = 0;
      }
      else {
        plVar25 = plVar10 + (lVar31 - uVar33);
        uVar21 = (ulonglong)((uint)plVar25 & 0xf);
        if (((ulonglong)plVar25 & 0xf) != 0) {
          if (((ulonglong)plVar25 & 7) != 0) goto LAB_140128243;
          uVar21 = 1;
        }
        uVar17 = (uint)uVar21;
        if ((int)uVar32 < (int)(uVar17 + 8)) goto LAB_140128243;
        uVar29 = 0;
        lVar23 = 0;
        uVar12 = uVar33 - (uVar32 - uVar17 & 7);
        uVar11 = uVar14;
        if (uVar17 != 0) {
          do {
            uVar29 = uVar29 + 1;
            plVar25[lVar23] = uVar11;
            lVar23 = lVar23 + 1;
            uVar11 = uVar11 + lVar20 * 2;
          } while (uVar29 < uVar17);
        }
        auVar36 = _DAT_143087310;
        auVar38 = _DAT_143087300;
        iVar13 = uVar30 * 2;
        auVar56._4_4_ = uVar30 * uVar17 + uVar30;
        auVar56._0_4_ = uVar30 * uVar17;
        auVar56._8_8_ = 0;
        do {
          iVar45 = auVar56._4_4_;
          auVar68._0_8_ = auVar56._0_8_;
          auVar68._8_4_ = iVar45;
          auVar68._12_4_ = iVar45;
          iVar24 = auVar56._0_4_;
          auVar66._8_8_ = auVar68._8_8_;
          auVar66._4_4_ = iVar24;
          auVar66._0_4_ = iVar24;
          iVar35 = iVar24 + iVar13;
          iVar44 = iVar45 + iVar13;
          auVar70._4_4_ = iVar44;
          auVar70._0_4_ = iVar35;
          iVar46 = auVar56._12_4_;
          auVar56._8_4_ = auVar56._8_4_ + uVar30 * 8;
          auVar56._12_4_ = iVar46 + uVar30 * 8;
          auVar67._0_4_ = iVar24 >> 0x1f;
          auVar67._4_4_ = auVar67._0_4_;
          auVar67._8_4_ = iVar45 >> 0x1f;
          auVar67._12_4_ = auVar67._8_4_;
          auVar68 = auVar67 & auVar36 | auVar38 & auVar66;
          plVar25[uVar21] = auVar68._0_8_ * 2 + uVar14;
          (plVar25 + uVar21)[1] = auVar68._8_8_ * 2 + uVar14;
          auVar70._8_4_ = iVar44;
          auVar70._12_4_ = iVar44;
          auVar69._8_8_ = auVar70._8_8_;
          auVar69._4_4_ = iVar35;
          auVar69._0_4_ = iVar35;
          iVar24 = iVar35 + iVar13;
          iVar45 = iVar44 + iVar13;
          auVar73._4_4_ = iVar45;
          auVar73._0_4_ = iVar24;
          auVar71._0_4_ = iVar35 >> 0x1f;
          auVar71._4_4_ = auVar71._0_4_;
          auVar71._8_4_ = iVar44 >> 0x1f;
          auVar71._12_4_ = auVar71._8_4_;
          auVar68 = auVar71 & auVar36 | auVar38 & auVar69;
          plVar25[uVar21 + 2] = auVar68._0_8_ * 2 + uVar14;
          (plVar25 + uVar21 + 2)[1] = auVar68._8_8_ * 2 + uVar14;
          auVar73._8_4_ = iVar45;
          auVar73._12_4_ = iVar45;
          auVar72._8_8_ = auVar73._8_8_;
          auVar72._4_4_ = iVar24;
          auVar72._0_4_ = iVar24;
          iVar35 = iVar24 + iVar13;
          iVar44 = iVar45 + iVar13;
          auVar76._4_4_ = iVar44;
          auVar76._0_4_ = iVar35;
          auVar74._0_4_ = iVar24 >> 0x1f;
          auVar74._4_4_ = auVar74._0_4_;
          auVar74._8_4_ = iVar45 >> 0x1f;
          auVar74._12_4_ = auVar74._8_4_;
          auVar68 = auVar74 & auVar36 | auVar38 & auVar72;
          plVar25[uVar21 + 4] = auVar68._0_8_ * 2 + uVar14;
          (plVar25 + uVar21 + 4)[1] = auVar68._8_8_ * 2 + uVar14;
          auVar76._8_4_ = iVar44;
          auVar76._12_4_ = iVar44;
          auVar75._8_8_ = auVar76._8_8_;
          auVar75._4_4_ = iVar35;
          auVar75._0_4_ = iVar35;
          auVar56._0_4_ = iVar35 + iVar13;
          auVar56._4_4_ = iVar44 + iVar13;
          auVar77._0_4_ = iVar35 >> 0x1f;
          auVar77._4_4_ = auVar77._0_4_;
          auVar77._8_4_ = iVar44 >> 0x1f;
          auVar77._12_4_ = auVar77._8_4_;
          auVar68 = auVar77 & auVar36 | auVar38 & auVar75;
          plVar25[uVar21 + 6] = auVar68._0_8_ * 2 + uVar14;
          (plVar25 + uVar21 + 6)[1] = auVar68._8_8_ * 2 + uVar14;
          uVar21 = uVar21 + 8;
        } while (uVar21 < uVar12);
      }
      uVar21 = uVar12 & 0xffffffff;
      uVar17 = (uint)uVar12;
      lVar23 = uVar14 + (longlong)(int)(uVar30 * uVar17) * 2;
      while (uVar17 < uVar32) {
        uVar17 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar17;
        plVar10[lVar31 + (uVar12 - uVar33)] = lVar23;
        uVar12 = uVar12 + 1;
        lVar23 = lVar23 + lVar20 * 2;
      }
    }
    (**(code **)(&UNK_143087320 + (longlong)param_13 * 8))
              (param_1 - (longlong)param_2 * uVar33,plStack_e8,param_12,param_2,iVar27,(int)param_5,
               param_10,param_11);
  }
  lVar23 = 0;
  iVar13 = param_9 + 0xf;
  iStack_7c = iVar13 - uVar32;
  lVar28 = lVar31 * 2 * lVar20;
  uStack_150 = uVar14 + lVar28;
  if (param_9 < iVar9) {
    lVar26 = 0;
    iVar9 = 1;
    uVar17 = param_9 * 2 + 0x1e;
    uVar29 = uVar17 >> 1;
    if (uVar29 != 0) {
      lVar19 = (lVar31 * 2 + 0x1e) * lVar20;
      uVar12 = lVar28 + (longlong)(int)(uVar30 * iVar13) * 2 + uVar14;
      uVar21 = 0;
      do {
        uVar21 = uVar21 + 1;
        if (uVar12 <= uStack_150) {
          uStack_150 = uStack_150 - lVar19;
        }
        *(ulonglong *)((longlong)plVar10 + lVar26 + lVar31 * 8) = uStack_150;
        uStack_150 = uStack_150 + lVar20 * 2;
        if (uVar12 <= uStack_150) {
          uStack_150 = uStack_150 - lVar19;
        }
        *(ulonglong *)((longlong)plVar10 + lVar26 + 8 + lVar31 * 8) = uStack_150;
        lVar26 = lVar26 + 0x10;
        uStack_150 = uStack_150 + lVar20 * 2;
      } while (uVar21 < uVar29);
      iVar9 = (int)uVar21 * 2 + 1;
    }
    if (iVar9 - 1U < uVar17) {
      if (lVar28 + (longlong)(int)(iVar13 * uVar30) * 2 + uVar14 <= uStack_150) {
        uStack_150 = uStack_150 - (lVar31 * 2 + 0x1e) * lVar20;
      }
      plVar10[iVar9 + lVar31 + -1] = uStack_150;
    }
  }
  pcVar2 = *(code **)(&UNK_143087358 + (longlong)param_14 * 8);
  lStack_d0 = param_1;
  lStack_68 = param_3;
  if (0 < param_5._4_4_) {
    lVar28 = lVar31 * 8 + 0x78;
    pcVar3 = *(code **)(&UNK_143087320 + (longlong)param_13 * 8);
    iVar9 = param_5._4_4_;
    do {
      uStack_84 = 0x10;
      if (iVar9 < iStack_7c) {
        uStack_84 = 0x10 - (iStack_7c - iVar9);
        uStack_84 = ~((int)uStack_84 >> 0x1f) & uStack_84;
        iStack_7c = iVar9;
      }
      (*pcVar3)(lStack_d0,plVar22,param_12,param_2,iVar27,(int)param_5,param_10,param_11);
      if (pcVar2 == FUN_140a3b400) {
        FUN_140a3b400(plStack_e8,param_3,param_4,CONCAT44(uStack_84,(int)param_5),lVar18,bVar4);
      }
      else {
        FUN_140a3c0a0(plStack_e8,param_3,param_4,CONCAT44(uStack_84,(int)param_5),lVar18,bVar4);
      }
      lVar26 = (longlong)(int)uStack_84;
      lVar23 = lVar23 + lVar26;
      plVar22 = plVar22 + iStack_7c;
      lStack_d0 = lStack_d0 + (longlong)param_2 * (longlong)iStack_7c;
      plStack_e8 = plStack_e8 + lVar26;
      if (plVar10 + lVar31 * 2 + 0xf <= plVar22) {
        plVar22 = (longlong *)((longlong)plVar22 - lVar28);
      }
      if (plVar10 + lVar31 * 2 + 0xf <= plStack_e8) {
        plStack_e8 = (longlong *)((longlong)plStack_e8 - lVar28);
      }
      iVar9 = iVar9 - iStack_7c;
      iStack_7c = 0x10;
      param_3 = param_3 + lVar26 * param_4;
      lStack_68 = param_3;
    } while (0 < iVar9);
  }
  iVar9 = param_5._4_4_ - (int)lVar23;
  if ((param_10 & 0x20) == 0) {
    switch(param_10 & 0xf) {
    case 1:
      if (param_9 <= (int)(uVar32 + 1)) break;
      uVar14 = (lVar31 - (uVar33 + 2)) + 1;
      plVar22 = plStack_e8 + (uVar33 - lVar23) + (longlong)param_5._4_4_;
      lVar20 = plVar22[-1];
      if ((longlong)uVar14 < 8) {
LAB_140127b30:
        uVar12 = 0;
      }
      else {
        uVar30 = (uint)plVar22 & 0xf;
        if (((ulonglong)plVar22 & 0xf) != 0) {
          if (((ulonglong)plVar22 & 7) != 0) goto LAB_140127b30;
          uVar30 = 1;
        }
        uVar21 = (ulonglong)uVar30;
        if ((longlong)uVar14 < (longlong)(uVar21 + 8)) goto LAB_140127b30;
        uVar11 = 0;
        lVar31 = (longlong)param_5._4_4_;
        uVar12 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - uVar30 & 7));
        if (uVar30 != 0) {
          do {
            plStack_e8[uVar33 + ((lVar31 + uVar11) - lVar23)] = lVar20;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar21);
        }
        lVar28 = uVar33 * 8 - (lVar23 * 8 + lVar31 * -8);
        do {
          plStack_e8[uVar33 + ((lVar31 + uVar21) - lVar23)] = lVar20;
          (plStack_e8 + uVar33 + ((lVar31 + uVar21) - lVar23))[1] = lVar20;
          plVar22 = (longlong *)((longlong)plStack_e8 + uVar21 * 8 + lVar28 + 0x10);
          *plVar22 = lVar20;
          plVar22[1] = lVar20;
          plVar22 = (longlong *)((longlong)plStack_e8 + uVar21 * 8 + lVar28 + 0x20);
          *plVar22 = lVar20;
          plVar22[1] = lVar20;
          plVar22 = (longlong *)((longlong)plStack_e8 + uVar21 * 8 + lVar28 + 0x30);
          *plVar22 = lVar20;
          plVar22[1] = lVar20;
          uVar21 = uVar21 + 8;
        } while (uVar21 < uVar12);
      }
      if (uVar12 < uVar14) {
        do {
          plStack_e8[(uVar33 - lVar23) + (longlong)param_5._4_4_ + uVar12] = lVar20;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar14);
      }
      break;
    case 2:
      iVar13 = 0;
      if ((int)(uVar32 + 1) < param_9) {
        uVar21 = 0;
        pcVar3 = *(code **)(&UNK_143087320 + (longlong)param_13 * 8);
        do {
          lVar20 = (longlong)iVar9 + uVar33 + uVar21;
          if (param_16._4_4_ <= iVar13) {
            iVar13 = 0;
          }
          plStack_e8[lVar20] =
               uVar14 + (longlong)(int)((int)uVar21 * uVar30 + uVar32 * uVar30 + uVar30) * 2;
          (*pcVar3)(param_2 * iVar13 + param_15,plStack_e8 + lVar20,param_12,param_2,iVar27,
                    (int)param_5,param_10,param_11);
          uVar21 = uVar21 + 1;
          iVar13 = iVar13 + 1;
        } while (uVar21 < (lVar31 - uVar33) - 1);
      }
      break;
    case 3:
      iStack_58 = -1;
    case 4:
      iVar13 = param_5._4_4_ + iStack_58;
      iVar24 = -1;
      if ((int)(uVar32 + 1) < param_9) {
        uVar21 = 0;
        pcVar3 = *(code **)(&UNK_143087320 + (longlong)param_13 * 8);
        do {
          iVar13 = iVar13 + iVar24;
          if ((param_10 & 0x10) == 0) {
            if ((iVar13 == param_5._4_4_) || (iVar13 == -1)) {
              iVar24 = -iVar24;
              iVar35 = iVar24 - iStack_58;
              iStack_58 = -iStack_58;
              iVar13 = iVar13 + iVar35;
            }
            if (param_5._4_4_ == 1) {
              iVar13 = 0;
            }
          }
          lVar20 = (longlong)iVar9 + uVar33 + uVar21;
          plStack_e8[lVar20] =
               uVar14 + (longlong)(int)((int)uVar21 * uVar30 + uVar32 * uVar30 + uVar30) * 2;
          (*pcVar3)(param_2 * iVar13 + param_1,plStack_e8 + lVar20,param_12,param_2,iVar27,
                    (int)param_5,param_10,param_11);
          uVar21 = uVar21 + 1;
        } while (uVar21 < (lVar31 - uVar33) - 1);
      }
      break;
    case 6:
      iVar27 = 0;
      if (0 < (int)param_7) {
        if ((longlong)(int)param_7 < 8) {
          uVar21 = 0;
        }
        else {
          uVar12 = 0;
          iVar27 = 0;
          iVar13 = 0;
          iVar24 = 0;
          iVar35 = 0;
          uVar21 = (ulonglong)(int)(param_7 & 0xfffffff8);
          do {
            uVar11 = *(ulonglong *)(param_6 + uVar12 * 2);
            uVar15 = *(ulonglong *)(param_6 + 8 + uVar12 * 2);
            uVar12 = uVar12 + 8;
            uVar43 = (undefined2)(uVar11 >> 0x30);
            auVar41._8_4_ = 0;
            auVar41._0_8_ = uVar11;
            auVar41._12_2_ = uVar43;
            auVar41._14_2_ = uVar43;
            uVar43 = (undefined2)(uVar11 >> 0x20);
            auVar40._12_4_ = auVar41._12_4_;
            auVar40._8_2_ = 0;
            auVar40._0_8_ = uVar11;
            auVar40._10_2_ = uVar43;
            auVar39._10_6_ = auVar40._10_6_;
            auVar39._8_2_ = uVar43;
            auVar39._0_8_ = uVar11;
            uVar43 = (undefined2)(uVar11 >> 0x10);
            auVar7._4_8_ = auVar39._8_8_;
            auVar7._2_2_ = uVar43;
            auVar7._0_2_ = uVar43;
            uVar43 = (undefined2)(uVar15 >> 0x30);
            auVar52._8_4_ = 0;
            auVar52._0_8_ = uVar15;
            auVar52._12_2_ = uVar43;
            auVar52._14_2_ = uVar43;
            uVar43 = (undefined2)(uVar15 >> 0x20);
            auVar51._12_4_ = auVar52._12_4_;
            auVar51._8_2_ = 0;
            auVar51._0_8_ = uVar15;
            auVar51._10_2_ = uVar43;
            auVar50._10_6_ = auVar51._10_6_;
            auVar50._8_2_ = uVar43;
            auVar50._0_8_ = uVar15;
            uVar43 = (undefined2)(uVar15 >> 0x10);
            auVar8._4_8_ = auVar50._8_8_;
            auVar8._2_2_ = uVar43;
            auVar8._0_2_ = uVar43;
            iVar27 = iVar27 + (short)uVar11 + (int)(short)uVar15;
            iVar13 = iVar13 + (auVar7._0_4_ >> 0x10) + (auVar8._0_4_ >> 0x10);
            iVar24 = iVar24 + (auVar39._8_4_ >> 0x10) + (auVar50._8_4_ >> 0x10);
            iVar35 = iVar35 + (auVar40._12_4_ >> 0x10) + (auVar51._12_4_ >> 0x10);
          } while (uVar12 < uVar21);
          iVar27 = iVar27 + iVar24 + iVar13 + iVar35;
        }
        for (; uVar21 < (ulonglong)(longlong)(int)param_7; uVar21 = uVar21 + 1) {
          iVar27 = iVar27 + *(short *)(param_6 + uVar21 * 2);
        }
      }
      iVar27 = (uint)param_11 * iVar27;
      if (iVar27 < -0x8000) {
        iVar27 = -0x8000;
      }
      iVar13 = 0x7fff;
      if (iVar27 < 0x7fff) {
        iVar13 = iVar27;
      }
      uVar21 = (ulonglong)(int)param_5;
      if (0 < (longlong)uVar21) {
        uVar43 = (undefined2)iVar13;
        if ((longlong)uVar21 < 8) {
LAB_140127b21:
          uVar15 = 0;
        }
        else {
          uVar12 = uVar33 * 2 * lVar20 + uVar14;
          uVar17 = (uint)uVar12 & 0xf;
          if ((uVar12 & 0xf) != 0) {
            if ((uVar12 & 1) != 0) goto LAB_140127b21;
            uVar17 = 0x10 - uVar17 >> 1;
          }
          uVar11 = (ulonglong)uVar17;
          if ((longlong)uVar21 < (longlong)(uVar11 + 8)) goto LAB_140127b21;
          uVar15 = (ulonglong)(int)((int)param_5 - ((int)param_5 - uVar17 & 7));
          uVar16 = 0;
          if (uVar17 != 0) {
            do {
              *(undefined2 *)(uVar12 + uVar16 * 2) = uVar43;
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar11);
          }
          uVar34 = CONCAT44(CONCAT22(uVar43,uVar43),CONCAT22(uVar43,uVar43));
          do {
            puVar1 = (undefined8 *)(uVar12 + uVar11 * 2);
            *puVar1 = uVar34;
            puVar1[1] = uVar34;
            uVar11 = uVar11 + 8;
          } while (uVar11 < uVar15);
        }
        if (uVar15 < uVar21) {
          do {
            *(undefined2 *)(lVar20 * uVar33 * 2 + uVar14 + uVar15 * 2) = uVar43;
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar21);
        }
      }
      if (param_9 <= (int)(uVar32 + 1)) break;
      uVar17 = (param_9 - (uVar32 + 2)) + 1;
      if ((int)uVar17 < 8) {
LAB_140127b0b:
        iVar27 = 0;
        if (uVar17 == 0) break;
        uVar12 = (ulonglong)(int)uVar17;
        uVar21 = 0;
      }
      else {
        plVar22 = plStack_e8 + (uVar33 - lVar23) + (longlong)param_5._4_4_;
        uVar29 = (uint)plVar22 & 0xf;
        if (((ulonglong)plVar22 & 0xf) != 0) {
          if (((ulonglong)plVar22 & 7) != 0) goto LAB_140127b0b;
          uVar29 = 1;
        }
        if ((int)uVar17 < (int)(uVar29 + 8)) goto LAB_140127b0b;
        iVar27 = uVar17 - (uVar17 - uVar29 & 7);
        lVar31 = (longlong)param_5._4_4_;
        uVar21 = (ulonglong)uVar29;
        lVar20 = uVar14 + (longlong)(int)(uVar32 * uVar30) * 2;
        if (uVar29 != 0) {
          uVar12 = 0;
          do {
            plStack_e8[uVar33 + ((lVar31 + uVar12) - lVar23)] = lVar20;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar21);
        }
        lVar28 = uVar33 * 8 - (lVar23 * 8 + lVar31 * -8);
        uVar11 = (ulonglong)iVar27;
        do {
          plStack_e8[uVar33 + ((lVar31 + uVar21) - lVar23)] = lVar20;
          (plStack_e8 + uVar33 + ((lVar31 + uVar21) - lVar23))[1] = lVar20;
          plVar22 = (longlong *)((longlong)plStack_e8 + uVar21 * 8 + lVar28 + 0x10);
          *plVar22 = lVar20;
          plVar22[1] = lVar20;
          plVar22 = (longlong *)((longlong)plStack_e8 + uVar21 * 8 + lVar28 + 0x20);
          *plVar22 = lVar20;
          plVar22[1] = lVar20;
          plVar22 = (longlong *)((longlong)plStack_e8 + uVar21 * 8 + lVar28 + 0x30);
          *plVar22 = lVar20;
          plVar22[1] = lVar20;
          uVar21 = uVar21 + 8;
        } while (uVar21 < uVar11);
        if (uVar17 < iVar27 + 1U) break;
        uVar12 = (longlong)(int)uVar17 - uVar11;
        if ((longlong)uVar12 < 2) {
          uVar21 = 0;
        }
        else {
          uVar15 = 0;
          uVar21 = (ulonglong)(int)((uint)uVar12 & 0xfffffffe);
          do {
            plVar22 = (longlong *)((longlong)plStack_e8 + uVar15 * 8 + uVar11 * 8 + lVar28);
            *plVar22 = lVar20;
            plVar22[1] = lVar20;
            uVar15 = uVar15 + 2;
          } while (uVar15 < uVar21);
        }
      }
      if (uVar21 < uVar12) {
        do {
          plStack_e8[(uVar33 - lVar23) + (longlong)param_5._4_4_ + (longlong)iVar27 + uVar21] =
               uVar14 + (longlong)(int)(uVar32 * uVar30) * 2;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar12);
      }
    }
  }
  else {
    if ((int)(uVar32 + 1) < param_9) {
      uVar17 = (param_9 - (uVar32 + 2)) + 1;
      if ((int)uVar17 < 8) {
LAB_140127f04:
        uVar21 = 0;
      }
      else {
        plVar22 = plStack_e8 + (uVar33 - lVar23) + (longlong)param_5._4_4_;
        uVar29 = (uint)plVar22 & 0xf;
        if (((ulonglong)plVar22 & 0xf) != 0) {
          if (((ulonglong)plVar22 & 7) != 0) goto LAB_140127f04;
          uVar29 = 1;
        }
        if ((int)uVar17 < (int)(uVar29 + 8)) goto LAB_140127f04;
        lVar31 = (longlong)param_5._4_4_;
        uVar21 = (longlong)(int)uVar17 - (ulonglong)(uVar17 - uVar29 & 7);
        if (uVar29 != 0) {
          lVar26 = 0;
          lVar28 = uVar14 + (longlong)(int)(uVar32 * uVar30 + uVar30) * 2;
          uStack_128 = 0;
          do {
            uStack_128 = uStack_128 + 1;
            plStack_e8[uVar33 + ((lVar31 + lVar26) - lVar23)] = lVar28;
            lVar26 = lVar26 + 1;
            lVar28 = lVar28 + lVar20 * 2;
          } while (uStack_128 < uVar29);
        }
        auVar36 = _DAT_143087310;
        auVar38 = _DAT_143087300;
        iVar24 = uVar32 * uVar30 + uVar30 + uVar30 * uVar29;
        lVar28 = uVar33 * 8 - (lVar23 * 8 + lVar31 * -8);
        iVar13 = uVar30 * 2;
        uVar12 = (ulonglong)uVar29;
        auVar42._4_4_ = iVar24 + uVar30;
        auVar42._0_4_ = iVar24;
        auVar42._8_8_ = 0;
        do {
          iVar45 = auVar42._4_4_;
          auVar54._0_8_ = auVar42._0_8_;
          auVar54._8_4_ = iVar45;
          auVar54._12_4_ = iVar45;
          iVar24 = auVar42._0_4_;
          auVar53._8_8_ = auVar54._8_8_;
          auVar53._4_4_ = iVar24;
          auVar53._0_4_ = iVar24;
          iVar35 = iVar24 + iVar13;
          iVar44 = iVar45 + iVar13;
          auVar58._4_4_ = iVar44;
          auVar58._0_4_ = iVar35;
          iVar46 = auVar42._12_4_;
          auVar42._8_4_ = auVar42._8_4_ + uVar30 * 8;
          auVar42._12_4_ = iVar46 + uVar30 * 8;
          auVar55._0_4_ = iVar24 >> 0x1f;
          auVar55._4_4_ = auVar55._0_4_;
          auVar55._8_4_ = iVar45 >> 0x1f;
          auVar55._12_4_ = auVar55._8_4_;
          auVar56 = auVar55 & auVar36 | auVar38 & auVar53;
          plStack_e8[uVar33 + ((lVar31 + uVar12) - lVar23)] = auVar56._0_8_ * 2 + uVar14;
          (plStack_e8 + uVar33 + ((lVar31 + uVar12) - lVar23))[1] = auVar56._8_8_ * 2 + uVar14;
          auVar58._8_4_ = iVar44;
          auVar58._12_4_ = iVar44;
          auVar57._8_8_ = auVar58._8_8_;
          auVar57._4_4_ = iVar35;
          auVar57._0_4_ = iVar35;
          iVar24 = iVar35 + iVar13;
          iVar45 = iVar44 + iVar13;
          auVar61._4_4_ = iVar45;
          auVar61._0_4_ = iVar24;
          auVar59._0_4_ = iVar35 >> 0x1f;
          auVar59._4_4_ = auVar59._0_4_;
          auVar59._8_4_ = iVar44 >> 0x1f;
          auVar59._12_4_ = auVar59._8_4_;
          auVar56 = auVar59 & auVar36 | auVar38 & auVar57;
          plVar22 = (longlong *)((longlong)plStack_e8 + uVar12 * 8 + lVar28 + 0x10);
          *plVar22 = auVar56._0_8_ * 2 + uVar14;
          plVar22[1] = auVar56._8_8_ * 2 + uVar14;
          auVar61._8_4_ = iVar45;
          auVar61._12_4_ = iVar45;
          auVar60._8_8_ = auVar61._8_8_;
          auVar60._4_4_ = iVar24;
          auVar60._0_4_ = iVar24;
          iVar35 = iVar24 + iVar13;
          iVar44 = iVar45 + iVar13;
          auVar64._4_4_ = iVar44;
          auVar64._0_4_ = iVar35;
          auVar62._0_4_ = iVar24 >> 0x1f;
          auVar62._4_4_ = auVar62._0_4_;
          auVar62._8_4_ = iVar45 >> 0x1f;
          auVar62._12_4_ = auVar62._8_4_;
          auVar56 = auVar62 & auVar36 | auVar38 & auVar60;
          plVar22 = (longlong *)((longlong)plStack_e8 + uVar12 * 8 + lVar28 + 0x20);
          *plVar22 = auVar56._0_8_ * 2 + uVar14;
          plVar22[1] = auVar56._8_8_ * 2 + uVar14;
          auVar64._8_4_ = iVar44;
          auVar64._12_4_ = iVar44;
          auVar63._8_8_ = auVar64._8_8_;
          auVar63._4_4_ = iVar35;
          auVar63._0_4_ = iVar35;
          auVar42._0_4_ = iVar35 + iVar13;
          auVar42._4_4_ = iVar44 + iVar13;
          auVar65._0_4_ = iVar35 >> 0x1f;
          auVar65._4_4_ = auVar65._0_4_;
          auVar65._8_4_ = iVar44 >> 0x1f;
          auVar65._12_4_ = auVar65._8_4_;
          auVar56 = auVar65 & auVar36 | auVar38 & auVar63;
          plVar22 = (longlong *)((longlong)plStack_e8 + uVar12 * 8 + lVar28 + 0x30);
          *plVar22 = auVar56._0_8_ * 2 + uVar14;
          plVar22[1] = auVar56._8_8_ * 2 + uVar14;
          uVar12 = uVar12 + 8;
        } while (uVar12 < uVar21);
      }
      uVar29 = (uint)uVar21;
      uVar21 = uVar21 & 0xffffffff;
      lVar31 = (longlong)(int)uVar29;
      if (uVar29 < uVar17) {
        lVar28 = uVar14 + (longlong)(int)(uVar30 * uVar29 + uVar32 * uVar30 + uVar30) * 2;
        do {
          uVar30 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar30;
          plStack_e8[(uVar33 - lVar23) + (longlong)param_5._4_4_ + lVar31] = lVar28;
          lVar31 = lVar31 + 1;
          lVar28 = lVar28 + lVar20 * 2;
        } while (uVar30 < uVar17);
      }
    }
    (**(code **)(&UNK_143087320 + (longlong)param_13 * 8))
              (lStack_d0,plStack_e8 + uVar33 + (longlong)iVar9,param_12,param_2,iVar27,(int)param_5,
               param_10,param_11);
  }
  if (pcVar2 == FUN_140a3b400) {
    FUN_140a3b400(plStack_e8,lStack_68,param_4,CONCAT44(iVar9,(int)param_5),lVar18,bVar4);
  }
  else {
    FUN_140a3c0a0(plStack_e8,lStack_68,param_4,CONCAT44(iVar9,(int)param_5),lVar18,bVar4);
  }
  return 0;
}


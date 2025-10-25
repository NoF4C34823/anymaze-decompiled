
undefined8
FUN_140128480(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
             longlong param_6,uint param_7,undefined8 param_8,int param_9,uint param_10,
             byte param_11,longlong param_12,int param_13,int param_14,longlong param_15,
             undefined8 param_16)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  uint uStack_158;
  ulonglong uStack_150;
  uint uStack_138;
  int iStack_100;
  longlong *plStack_f0;
  longlong lStack_e0;
  int iStack_b0;
  int iStack_90;
  int iStack_8c;
  longlong lStack_88;
  uint uStack_80;
  int iStack_78;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  uint uStack_64;
  int iStack_60;
  longlong *plStack_58;
  longlong lStack_50;
  int iStack_48;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined2 uVar39;
  
  iVar30 = 0;
  iStack_100 = 0;
  uVar20 = (int)param_5 + 7U & 0xfffffff8;
  iStack_48 = (int)param_7 / 2;
  uVar26 = param_9 / 2;
  if (param_5._4_4_ == 0) {
    return 0;
  }
  iStack_60 = param_2;
  lStack_50 = param_3;
  iVar6 = FUN_140a59de0();
  uStack_80 = (uint)(param_5._4_4_ * (int)param_5 <= iVar6 >> 1);
  FUN_140a59e00(param_5,param_7,&iStack_90);
  FUN_140a59e60(param_5,param_9,&iStack_8c);
  iVar6 = iStack_60;
  lStack_88 = iStack_90 + param_12;
  plVar8 = (longlong *)(iStack_8c + lStack_88 + (-(iStack_8c + lStack_88 & 0x1fU) & 0x1f));
  uVar27 = (ulonglong)(int)uVar26;
  uVar16 = (longlong)(plVar8 + (param_9 * 3 + 0x1e)) +
           (-((ulonglong)(plVar8 + (param_9 * 3 + 0x1e)) & 0x1f) & 0x1f);
  lVar12 = (longlong)param_9;
  plStack_f0 = plVar8 + (lVar12 - uVar27);
  plVar24 = plVar8 + lVar12;
  iStack_70 = (int)param_5;
  uStack_6c = 0x10;
  iStack_68 = (int)param_5;
  plStack_58 = plVar8;
  if ((param_10 & 0x10) == 0) {
    switch(param_10 & 0xf) {
    case 1:
      if (0 < (int)uVar26) {
        if ((longlong)uVar27 < 8) {
LAB_14012a0ce:
          uStack_150 = 0;
        }
        else {
          plVar22 = plVar8 + ((longlong)param_9 - uVar27);
          uVar29 = (uint)plVar22 & 0xf;
          if (((ulonglong)plVar22 & 0xf) != 0) {
            if (((ulonglong)plVar22 & 7) != 0) goto LAB_14012a0ce;
            uVar29 = 1;
          }
          uVar13 = (ulonglong)uVar29;
          if ((longlong)uVar27 < (longlong)(uVar13 + 8)) goto LAB_14012a0ce;
          uVar28 = 0;
          uStack_150 = (ulonglong)(int)(uVar26 - (uVar26 - uVar29 & 7));
          lVar14 = (longlong)(int)(param_9 * uVar20) * 2 + uVar16;
          if (uVar29 != 0) {
            do {
              plVar22[uVar28] = lVar14;
              uVar28 = uVar28 + 1;
            } while (uVar28 < uVar13);
          }
          do {
            plVar22[uVar13] = lVar14;
            (plVar22 + uVar13)[1] = lVar14;
            plVar22[uVar13 + 2] = lVar14;
            (plVar22 + uVar13 + 2)[1] = lVar14;
            plVar22[uVar13 + 4] = lVar14;
            (plVar22 + uVar13 + 4)[1] = lVar14;
            plVar22[uVar13 + 6] = lVar14;
            (plVar22 + uVar13 + 6)[1] = lVar14;
            uVar13 = uVar13 + 8;
          } while (uVar13 < uStack_150);
        }
        if (uStack_150 < uVar27) {
          do {
            plVar8[((longlong)param_9 + uStack_150) - uVar27] =
                 (longlong)(int)(param_9 * uVar20) * 2 + uVar16;
            uStack_150 = uStack_150 + 1;
          } while (uStack_150 < uVar27);
        }
      }
      break;
    case 2:
      if (0 < (int)uVar26) {
        uStack_158 = 0;
        plVar22 = plVar8 + param_9;
        lVar14 = (longlong)(int)(uVar26 * uVar20 - uVar20) * 2 + uVar16;
        pcVar2 = *(code **)(&UNK_143087388 + (longlong)param_13 * 8);
        iStack_100 = 0;
        uStack_64 = 1;
        iStack_78 = param_4;
        iVar30 = param_16._4_4_;
        do {
          iVar30 = iVar30 + -1;
          if (iVar30 < 0) {
            iVar30 = param_16._4_4_ + -1;
          }
          *plVar8 = lVar14;
          plVar22[-1] = lVar14;
          (*pcVar2)(iVar6 * iVar30 + param_15,plVar8,param_12,iVar6,iStack_48,iStack_68,param_10,
                    param_11);
          uStack_158 = uStack_158 + 1;
          lVar14 = lVar14 + (longlong)(int)-uVar20 * 2;
          plVar22 = plVar22 + -1;
          param_4 = iStack_78;
        } while (uStack_158 < uVar26);
      }
      break;
    case 3:
      iVar30 = 1;
    case 4:
      iVar19 = iVar30 + -1;
      iStack_100 = iVar30;
      if (0 < (int)uVar26) {
        uStack_158 = 0;
        uStack_138 = param_10 & 0x20;
        plVar22 = plVar8 + param_9;
        lVar14 = (longlong)(int)(uVar26 * uVar20 - uVar20) * 2 + uVar16;
        pcVar2 = *(code **)(&UNK_143087388 + (longlong)param_13 * 8);
        uStack_64 = 1;
        uStack_150._0_4_ = 1;
        iStack_78 = param_4;
        do {
          iVar19 = iVar19 + (int)uStack_150;
          if (uStack_138 == 0) {
            if ((iVar19 == param_5._4_4_) || (iVar19 == -1)) {
              uStack_150._0_4_ = -(int)uStack_150;
              iVar30 = (int)uStack_150 - iStack_100;
              iStack_100 = -iStack_100;
              iVar19 = iVar19 + iVar30;
            }
            if (param_5._4_4_ == 1) {
              iVar19 = 0;
            }
          }
          *plVar8 = lVar14;
          plVar22[-1] = lVar14;
          (*pcVar2)(iVar19 * iVar6 + param_1,plVar8,param_12,iVar6,iStack_48,iStack_68,param_10,
                    param_11);
          uStack_158 = uStack_158 + 1;
          plVar22 = plVar22 + -1;
          lVar14 = lVar14 + (longlong)(int)-uVar20 * 2;
          param_4 = iStack_78;
        } while (uStack_158 < uVar26);
      }
      break;
    case 6:
      iVar19 = 0;
      iVar30 = 0;
      if (0 < (int)param_7) {
        if ((int)param_7 < 4) {
          uVar13 = 0;
        }
        else {
          uVar28 = 0;
          lVar14 = 0;
          iVar30 = 0;
          iVar19 = 0;
          iVar7 = 0;
          iVar32 = 0;
          uVar13 = (ulonglong)(int)(param_7 & 0xfffffffc);
          do {
            uVar18 = *(ulonglong *)(lVar14 + param_6);
            uVar28 = uVar28 + 4;
            uVar39 = (undefined2)(uVar18 >> 0x30);
            auVar35._8_4_ = 0;
            auVar35._0_8_ = uVar18;
            auVar35._12_2_ = uVar39;
            auVar35._14_2_ = uVar39;
            uVar39 = (undefined2)(uVar18 >> 0x20);
            auVar34._12_4_ = auVar35._12_4_;
            auVar34._8_2_ = 0;
            auVar34._0_8_ = uVar18;
            auVar34._10_2_ = uVar39;
            auVar33._10_6_ = auVar34._10_6_;
            auVar33._8_2_ = uVar39;
            auVar33._0_8_ = uVar18;
            uVar39 = (undefined2)(uVar18 >> 0x10);
            auVar4._4_8_ = auVar33._8_8_;
            auVar4._2_2_ = uVar39;
            auVar4._0_2_ = uVar39;
            lVar14 = lVar14 + 8;
            iVar30 = iVar30 + (short)uVar18;
            iVar19 = iVar19 + (auVar4._0_4_ >> 0x10);
            iVar7 = iVar7 + (auVar33._8_4_ >> 0x10);
            iVar32 = iVar32 + (auVar34._12_4_ >> 0x10);
          } while (uVar28 < uVar13);
          iVar19 = iVar30 + iVar7 + iVar19 + iVar32;
        }
        iVar30 = iVar19;
        if (uVar13 < (ulonglong)(longlong)(int)param_7) {
          do {
            lVar14 = uVar13 * 2;
            uVar13 = uVar13 + 1;
            iVar30 = iVar30 + *(short *)(param_6 + lVar14);
          } while (uVar13 < (ulonglong)(longlong)(int)param_7);
        }
      }
      iVar30 = iVar30 * (uint)param_11;
      if (iVar30 < -0x8000) {
        iVar30 = -0x8000;
      }
      iVar19 = 0x7fff;
      if (iVar30 < 0x7fff) {
        iVar19 = iVar30;
      }
      if (0 < (int)param_5) {
        uVar39 = (undefined2)iVar19;
        if ((int)param_5 < 8) {
LAB_1401293c1:
          uVar28 = 0;
        }
        else {
          uVar29 = (uint)uVar16 & 0xf;
          if ((uVar16 & 0xf) != 0) {
            if ((uVar16 & 1) != 0) goto LAB_1401293c1;
            uVar29 = 0x10 - uVar29 >> 1;
          }
          uVar13 = (ulonglong)uVar29;
          if ((longlong)(int)param_5 < (longlong)(uVar13 + 8)) goto LAB_1401293c1;
          uVar18 = 0;
          uVar28 = (ulonglong)(int)((int)param_5 - ((int)param_5 - uVar29 & 7));
          if (uVar29 != 0) {
            do {
              *(undefined2 *)(uVar16 + uVar18 * 2) = uVar39;
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar13);
          }
          uVar11 = CONCAT44(CONCAT22(uVar39,uVar39),CONCAT22(uVar39,uVar39));
          do {
            puVar1 = (undefined8 *)(uVar16 + uVar13 * 2);
            *puVar1 = uVar11;
            puVar1[1] = uVar11;
            uVar13 = uVar13 + 8;
          } while (uVar13 < uVar28);
        }
        if (uVar28 < (ulonglong)(longlong)(int)param_5) {
          do {
            *(undefined2 *)(uVar16 + uVar28 * 2) = uVar39;
            uVar28 = uVar28 + 1;
          } while (uVar28 < (ulonglong)(longlong)(int)param_5);
        }
      }
      if (0 < (int)uVar26) {
        iVar30 = 1;
        if (uVar26 >> 1 != 0) {
          uVar13 = 0;
          lVar17 = (longlong)param_9 * 8 + uVar27 * -8;
          lVar14 = 0;
          do {
            uVar13 = uVar13 + 1;
            *(ulonglong *)((longlong)plVar8 + lVar14 + lVar17) = uVar16;
            *(ulonglong *)((longlong)plVar8 + lVar14 + 8 + lVar17) = uVar16;
            lVar14 = lVar14 + 0x10;
          } while (uVar13 < uVar26 >> 1);
          iVar30 = (int)uVar13 * 2 + 1;
        }
        if (iVar30 - 1U < uVar26) {
          plVar8[((longlong)iVar30 + (longlong)param_9 + -1) - uVar27] = uVar16;
        }
      }
    }
  }
  else {
    uStack_64 = uVar26;
    if (0 < (int)uVar26) {
      uVar25 = 0;
      uVar29 = 1;
      if (uVar26 >> 3 != 0) {
        lVar14 = (longlong)param_9;
        uStack_150._0_4_ = 0;
        do {
          lVar17 = (longlong)(int)uVar25;
          uVar25 = uVar25 + 1;
          plVar8[(lVar14 + lVar17 * 8) - uVar27] = (longlong)(int)uStack_150 * 2 + uVar16;
          plVar8[(lVar14 + lVar17 * 8 + 1) - uVar27] =
               (longlong)(int)(uVar20 + (int)uStack_150) * 2 + uVar16;
          plVar8[(lVar14 + lVar17 * 8 + 2) - uVar27] =
               (longlong)(int)(uVar20 * 2 + (int)uStack_150) * 2 + uVar16;
          plVar8[(lVar14 + lVar17 * 8 + 3) - uVar27] =
               (longlong)(int)(uVar20 * 3 + (int)uStack_150) * 2 + uVar16;
          plVar8[(lVar14 + lVar17 * 8 + 4) - uVar27] =
               (longlong)(int)(uVar20 * 4 + (int)uStack_150) * 2 + uVar16;
          plVar8[(lVar14 + lVar17 * 8 + 5) - uVar27] =
               (longlong)(int)(uVar20 * 5 + (int)uStack_150) * 2 + uVar16;
          plVar8[(lVar14 + lVar17 * 8 + 6) - uVar27] =
               (longlong)(int)(uVar20 * 6 + (int)uStack_150) * 2 + uVar16;
          iVar30 = uVar20 * 7 + (int)uStack_150;
          uStack_150._0_4_ = (int)uStack_150 + uVar20 * 8;
          plVar8[(lVar14 + lVar17 * 8 + 7) - uVar27] = (longlong)iVar30 * 2 + uVar16;
        } while (uVar25 < uVar26 >> 3);
        uVar29 = uVar25 * 8 + 1;
        iStack_78 = param_4;
      }
      if (uVar29 <= uVar26) {
                    /* WARNING: Could not recover jumptable at 0x00014012a2fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*(code *)(&UNK_14012a300 +
                           *(ushort *)
                            (&UNK_1430873f8 + (ulonglong)((uVar26 - (uVar29 - 1)) - 1) * 2)))();
        return uVar11;
      }
    }
    (**(code **)(&UNK_143087388 + (longlong)param_13 * 8))
              (param_1 - (longlong)iStack_60 * uVar27,plStack_f0,param_12,iStack_60,iStack_48,
               (int)param_5,param_10,param_11);
    iStack_100 = 0;
    iVar6 = iStack_60;
  }
  iVar19 = 0;
  lVar21 = (longlong)(int)uVar20;
  iVar30 = param_9 + 0xf;
  iStack_b0 = iVar30 - uVar26;
  lVar14 = (longlong)param_9 * 2;
  lVar17 = lVar14 * lVar21;
  uVar13 = uVar16 + lVar17;
  if (param_9 < param_9 * 3 + 0x1e) {
    uVar29 = param_9 * 2 + 0x1e;
    iVar7 = 1;
    if (uVar29 != 0) {
      uVar18 = (longlong)(int)(uVar20 * iVar30) * 2 + lVar17 + uVar16;
      lVar9 = (lVar14 + 0x1e) * lVar21;
      lVar23 = 0;
      uVar28 = 0;
      do {
        uVar28 = uVar28 + 1;
        if (uVar18 <= uVar13) {
          uVar13 = uVar13 - lVar9;
        }
        *(ulonglong *)((longlong)plStack_58 + lVar23 + (longlong)param_9 * 8) = uVar13;
        uVar13 = uVar13 + lVar21 * 2;
        if (uVar18 <= uVar13) {
          uVar13 = uVar13 - lVar9;
        }
        *(ulonglong *)((longlong)plStack_58 + lVar23 + 8 + (longlong)param_9 * 8) = uVar13;
        uVar13 = uVar13 + lVar21 * 2;
        lVar23 = lVar23 + 0x10;
      } while (uVar28 < uVar29 >> 1);
      iVar7 = (int)uVar28 * 2 + 1;
      iStack_78 = param_4;
      iStack_60 = iVar6;
    }
    if (iVar7 - 1U < uVar29) {
      if ((longlong)(int)(iVar30 * uVar20) * 2 + lVar17 + uVar16 <= uVar13) {
        uVar13 = uVar13 - (lVar14 + 0x1e) * lVar21;
      }
      plStack_58[(longlong)iVar7 + (longlong)param_9 + -1] = uVar13;
    }
  }
  pcVar2 = *(code **)(&UNK_1430873c0 + (longlong)param_14 * 8);
  lStack_e0 = param_1;
  if (0 < param_5._4_4_) {
    lVar14 = (longlong)param_9 * 8 + 0x78;
    pcVar3 = *(code **)(&UNK_143087388 + (longlong)param_13 * 8);
    plStack_58 = plStack_58 + (longlong)param_9 + 0xf + lVar12;
    lVar12 = lStack_50;
    iVar30 = param_5._4_4_;
    iStack_78 = param_4;
    iStack_60 = iVar6;
    while( true ) {
      uStack_64 = iStack_b0;
      if (iVar30 < iStack_b0) {
        uStack_6c = uStack_6c - (iStack_b0 - iVar30);
        uStack_6c = ~((int)uStack_6c >> 0x1f) & uStack_6c;
        uStack_64 = iVar30;
      }
      (*pcVar3)(lStack_e0,plVar24,param_12,iStack_60,iStack_48,iStack_68,param_10,param_11);
      if (pcVar2 == FUN_140a59ec0) {
        FUN_140a59ec0(plStack_f0,lVar12,iStack_78,CONCAT44(uStack_6c,iStack_70),lStack_88,uStack_80)
        ;
      }
      else {
        FUN_140a5ab60(plStack_f0,lVar12,iStack_78,CONCAT44(uStack_6c,iStack_70),lStack_88,uStack_80)
        ;
      }
      lStack_e0 = lStack_e0 + (longlong)iVar6 * (longlong)(int)uStack_64;
      plVar24 = plVar24 + (int)uStack_64;
      iVar30 = iVar30 - uStack_64;
      iStack_b0 = 0x10;
      iVar19 = iVar19 + uStack_6c;
      plStack_f0 = plStack_f0 + (int)uStack_6c;
      lVar12 = lVar12 + (longlong)param_4 * (longlong)(int)uStack_6c;
      if (plStack_58 <= plVar24) {
        plVar24 = (longlong *)((longlong)plVar24 - lVar14);
      }
      if (plStack_58 <= plStack_f0) {
        plStack_f0 = (longlong *)((longlong)plStack_f0 - lVar14);
      }
      if (iVar30 < 1) break;
      uStack_6c = 0x10;
    }
    iStack_b0 = 0x10;
    lStack_50 = lVar12;
    param_4 = iStack_78;
    iVar6 = iStack_60;
  }
  uStack_6c = param_5._4_4_ - iVar19;
  if ((param_10 & 0x20) != 0) {
    if ((int)(uVar26 + 1) < param_9) {
      uVar29 = 1;
      uVar25 = 0;
      uVar31 = (param_9 - uVar26) - 1;
      if (uVar31 >> 3 != 0) {
        lVar12 = uVar27 * 8 - ((longlong)iVar19 * 8 + (longlong)param_5._4_4_ * -8);
        uStack_158 = 0;
        do {
          lVar14 = (longlong)(int)uVar25;
          uVar25 = uVar25 + 1;
          lVar17 = lVar14 * 0x40;
          iVar30 = uVar26 * uVar20 + uStack_158;
          uStack_158 = uStack_158 + uVar20 * 8;
          plStack_f0[uVar27 + (((longlong)param_5._4_4_ + lVar14 * 8) - (longlong)iVar19)] =
               (longlong)(int)(uVar20 + iVar30) * 2 + uVar16;
          *(ulonglong *)((longlong)plStack_f0 + lVar17 + lVar12 + 8) =
               (longlong)(int)(iVar30 + uVar20 * 2) * 2 + uVar16;
          *(ulonglong *)((longlong)plStack_f0 + lVar17 + lVar12 + 0x10) =
               (longlong)(int)(iVar30 + uVar20 * 3) * 2 + uVar16;
          *(ulonglong *)((longlong)plStack_f0 + lVar17 + lVar12 + 0x18) =
               (longlong)(int)(iVar30 + uVar20 * 4) * 2 + uVar16;
          *(ulonglong *)((longlong)plStack_f0 + lVar17 + lVar12 + 0x20) =
               (longlong)(int)(iVar30 + uVar20 * 5) * 2 + uVar16;
          *(ulonglong *)((longlong)plStack_f0 + lVar17 + lVar12 + 0x28) =
               (longlong)(int)(iVar30 + uVar20 * 6) * 2 + uVar16;
          *(ulonglong *)((longlong)plStack_f0 + lVar17 + lVar12 + 0x30) =
               (longlong)(int)(iVar30 + uVar20 * 7) * 2 + uVar16;
          *(ulonglong *)((longlong)plStack_f0 + lVar17 + lVar12 + 0x38) =
               (longlong)(int)(iVar30 + uVar20 * 8) * 2 + uVar16;
        } while (uVar25 < uVar31 >> 3);
        uVar29 = uVar25 * 8 + 1;
        iStack_78 = param_4;
        iStack_60 = iVar6;
      }
      uVar20 = (param_9 - (uVar26 + 2)) + 1;
      if (uVar29 <= uVar20) {
        uStack_64 = iStack_b0;
                    /* WARNING: Could not recover jumptable at 0x000140129e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*(code *)(&UNK_140129e69 +
                           *(ushort *)
                            (&UNK_1430873e8 + (ulonglong)((uVar20 - (uVar29 - 1)) - 1) * 2)))();
        return uVar11;
      }
    }
    uStack_64 = param_9 - (uVar26 + 1);
    (**(code **)(&UNK_143087388 + (longlong)param_13 * 8))
              (lStack_e0,plStack_f0 + uVar27 + (longlong)(int)uStack_6c,param_12,iVar6,iStack_48,
               iStack_68,param_10,param_11);
    goto switchD_140129472_caseD_5;
  }
  uStack_64 = iStack_b0;
  switch(param_10 & 0xf) {
  case 1:
    if ((int)(uVar26 + 1) < param_9) {
      lVar17 = (longlong)iVar19;
      iVar30 = 1;
      lVar21 = (uVar27 - lVar17) + (longlong)param_5._4_4_;
      uVar16 = 0;
      lVar12 = 0;
      lVar14 = plStack_f0[lVar21 + -1];
      uVar20 = (param_9 - uVar26) - 1;
      uVar26 = uVar20 >> 1;
      if (uVar26 != 0) {
        do {
          uVar16 = uVar16 + 1;
          *(longlong *)
           ((longlong)plStack_f0 + lVar12 + (longlong)param_5._4_4_ * 8 + lVar17 * -8 + uVar27 * 8)
               = lVar14;
          *(longlong *)
           ((longlong)plStack_f0 +
           lVar12 + 8 + (uVar27 * 8 - (lVar17 * 8 + (longlong)param_5._4_4_ * -8))) = lVar14;
          lVar12 = lVar12 + 0x10;
        } while (uVar16 < uVar26);
        iVar30 = (int)uVar16 * 2 + 1;
      }
      if (iVar30 - 1U < uVar20) {
        plStack_f0[lVar21 + iVar30 + -1] = lVar14;
      }
    }
    break;
  case 2:
    iVar30 = 0;
    if ((int)(uVar26 + 1) < param_9) {
      uVar13 = 0;
      uStack_64 = 1;
      pcVar3 = *(code **)(&UNK_143087388 + (longlong)param_13 * 8);
      iStack_78 = param_4;
      do {
        if (param_16._4_4_ <= iVar30) {
          iVar30 = 0;
        }
        lVar12 = (longlong)(int)uStack_6c + uVar27 + uVar13;
        plStack_f0[lVar12] =
             (longlong)(int)((int)uVar13 * uVar20 + uVar26 * uVar20 + uVar20) * 2 + uVar16;
        (*pcVar3)(iVar6 * iVar30 + param_15,plStack_f0 + lVar12,param_12,iVar6,iStack_48,iStack_68,
                  param_10,param_11);
        uVar13 = uVar13 + 1;
        iVar30 = iVar30 + 1;
        param_4 = iStack_78;
      } while (uVar13 < ((longlong)param_9 - uVar27) - 1);
    }
    break;
  case 3:
    iStack_100 = -1;
  case 4:
    iVar30 = param_5._4_4_ + iStack_100;
    if ((int)(uVar26 + 1) < param_9) {
      uVar13 = 0;
      uStack_64 = 1;
      pcVar3 = *(code **)(&UNK_143087388 + (longlong)param_13 * 8);
      iVar19 = -1;
      iStack_78 = param_4;
      do {
        iVar30 = iVar30 + iVar19;
        if ((param_10 & 0x10) == 0) {
          if ((iVar30 == param_5._4_4_) || (iVar30 == -1)) {
            iVar19 = -iVar19;
            iVar7 = iVar19 - iStack_100;
            iStack_100 = -iStack_100;
            iVar30 = iVar30 + iVar7;
          }
          if (param_5._4_4_ == 1) {
            iVar30 = 0;
          }
        }
        lVar12 = (longlong)(int)uStack_6c + uVar27 + uVar13;
        plStack_f0[lVar12] =
             (longlong)(int)((int)uVar13 * uVar20 + uVar26 * uVar20 + uVar20) * 2 + uVar16;
        (*pcVar3)(iVar6 * iVar30 + param_1,plStack_f0 + lVar12,param_12,iVar6,iStack_48,iStack_68,
                  param_10,param_11);
        uVar13 = uVar13 + 1;
        param_4 = iStack_78;
      } while (uVar13 < ((longlong)param_9 - uVar27) - 1);
    }
    break;
  case 6:
    iVar30 = 0;
    if (0 < (int)param_7) {
      if ((longlong)(int)param_7 < 4) {
        uVar13 = 0;
      }
      else {
        uVar28 = 0;
        lVar12 = 0;
        iVar30 = 0;
        iVar6 = 0;
        iVar7 = 0;
        iVar32 = 0;
        uVar13 = (ulonglong)(int)(param_7 & 0xfffffffc);
        do {
          uVar18 = *(ulonglong *)(lVar12 + param_6);
          uVar28 = uVar28 + 4;
          uVar39 = (undefined2)(uVar18 >> 0x30);
          auVar38._8_4_ = 0;
          auVar38._0_8_ = uVar18;
          auVar38._12_2_ = uVar39;
          auVar38._14_2_ = uVar39;
          uVar39 = (undefined2)(uVar18 >> 0x20);
          auVar37._12_4_ = auVar38._12_4_;
          auVar37._8_2_ = 0;
          auVar37._0_8_ = uVar18;
          auVar37._10_2_ = uVar39;
          auVar36._10_6_ = auVar37._10_6_;
          auVar36._8_2_ = uVar39;
          auVar36._0_8_ = uVar18;
          uVar39 = (undefined2)(uVar18 >> 0x10);
          auVar5._4_8_ = auVar36._8_8_;
          auVar5._2_2_ = uVar39;
          auVar5._0_2_ = uVar39;
          lVar12 = lVar12 + 8;
          iVar30 = iVar30 + (short)uVar18;
          iVar6 = iVar6 + (auVar5._0_4_ >> 0x10);
          iVar7 = iVar7 + (auVar36._8_4_ >> 0x10);
          iVar32 = iVar32 + (auVar37._12_4_ >> 0x10);
        } while (uVar28 < uVar13);
        iVar30 = iVar30 + iVar7 + iVar6 + iVar32;
      }
      for (; uVar13 < (ulonglong)(longlong)(int)param_7; uVar13 = uVar13 + 1) {
        iVar30 = iVar30 + *(short *)(param_6 + uVar13 * 2);
      }
    }
    iVar30 = (uint)param_11 * iVar30;
    if (iVar30 < -0x8000) {
      iVar30 = -0x8000;
    }
    iVar6 = 0x7fff;
    if (iVar30 < 0x7fff) {
      iVar6 = iVar30;
    }
    uVar13 = (ulonglong)(int)param_5;
    if (0 < (longlong)uVar13) {
      uVar39 = (undefined2)iVar6;
      if ((longlong)uVar13 < 8) {
LAB_140129c3b:
        uVar10 = 0;
      }
      else {
        uVar18 = uVar27 * 2 * lVar21 + uVar16;
        uVar28 = uVar18 & 0xf;
        if ((int)uVar28 != 0) {
          if ((uVar18 & 1) != 0) goto LAB_140129c3b;
          uVar28 = (ulonglong)(0x10U - (int)uVar28 >> 1);
        }
        if ((longlong)uVar13 < (longlong)(uVar28 + 8)) goto LAB_140129c3b;
        uVar15 = 0;
        uVar10 = (ulonglong)(int)((int)param_5 - ((int)param_5 - (int)uVar28 & 7U));
        if ((int)uVar28 != 0) {
          do {
            *(undefined2 *)(uVar18 + uVar15 * 2) = uVar39;
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar28);
        }
        uVar11 = CONCAT44(CONCAT22(uVar39,uVar39),CONCAT22(uVar39,uVar39));
        do {
          puVar1 = (undefined8 *)(uVar18 + uVar28 * 2);
          *puVar1 = uVar11;
          puVar1[1] = uVar11;
          uVar28 = uVar28 + 8;
        } while (uVar28 < uVar10);
      }
      if (uVar10 < uVar13) {
        do {
          *(undefined2 *)(lVar21 * uVar27 * 2 + uVar16 + uVar10 * 2) = uVar39;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar13);
      }
    }
    if (param_9 <= (int)(uVar26 + 1)) break;
    uVar13 = ((longlong)param_9 - (uVar27 + 2)) + 1;
    if ((longlong)uVar13 < 8) {
LAB_140129c34:
      uVar18 = 0;
    }
    else {
      lVar12 = (longlong)iVar19;
      plVar24 = plStack_f0 + (uVar27 - lVar12) + (longlong)param_5._4_4_;
      uVar29 = (uint)plVar24 & 0xf;
      if (((ulonglong)plVar24 & 0xf) != 0) {
        if (((ulonglong)plVar24 & 7) != 0) goto LAB_140129c34;
        uVar29 = 1;
      }
      uVar28 = (ulonglong)uVar29;
      if ((longlong)uVar13 < (longlong)(uVar28 + 8)) goto LAB_140129c34;
      lVar14 = (longlong)param_5._4_4_;
      uVar10 = 0;
      lVar17 = (longlong)(int)(uVar26 * uVar20) * 2 + uVar16;
      uVar18 = (ulonglong)(int)((int)uVar13 - ((int)uVar13 - uVar29 & 7));
      if (uVar29 != 0) {
        do {
          plStack_f0[uVar27 + ((lVar14 + uVar10) - lVar12)] = lVar17;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar28);
      }
      lVar21 = uVar27 * 8 - (lVar12 * 8 + lVar14 * -8);
      do {
        plStack_f0[uVar27 + ((lVar14 + uVar28) - lVar12)] = lVar17;
        (plStack_f0 + uVar27 + ((lVar14 + uVar28) - lVar12))[1] = lVar17;
        plVar24 = (longlong *)((longlong)plStack_f0 + uVar28 * 8 + lVar21 + 0x10);
        *plVar24 = lVar17;
        plVar24[1] = lVar17;
        plVar24 = (longlong *)((longlong)plStack_f0 + uVar28 * 8 + lVar21 + 0x20);
        *plVar24 = lVar17;
        plVar24[1] = lVar17;
        plVar24 = (longlong *)((longlong)plStack_f0 + uVar28 * 8 + lVar21 + 0x30);
        *plVar24 = lVar17;
        plVar24[1] = lVar17;
        uVar28 = uVar28 + 8;
      } while (uVar28 < uVar18);
    }
    if (uVar18 < uVar13) {
      do {
        plStack_f0[(uVar27 - (longlong)iVar19) + (longlong)param_5._4_4_ + uVar18] =
             uVar16 + (longlong)(int)(uVar26 * uVar20) * 2;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar13);
    }
  }
switchD_140129472_caseD_5:
  if (pcVar2 == FUN_140a59ec0) {
    FUN_140a59ec0(plStack_f0,lStack_50,param_4,CONCAT44(uStack_6c,iStack_70),lStack_88,uStack_80);
  }
  else {
    FUN_140a5ab60(plStack_f0,lStack_50,param_4,CONCAT44(uStack_6c,iStack_70),lStack_88,uStack_80);
  }
  return 0;
}


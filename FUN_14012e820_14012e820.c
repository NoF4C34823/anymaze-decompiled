
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14012e820(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
             ulonglong param_6,uint param_7,undefined8 param_8,int param_9,uint param_10,
             byte param_11,longlong param_12,int param_13,int param_14,longlong param_15,
             undefined8 param_16)

{
  undefined2 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  code *pcVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined2 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong *plVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  longlong *plStack_158;
  ulonglong uStack_150;
  int iStack_148;
  ulonglong uStack_140;
  uint uStack_138;
  longlong *plStack_130;
  longlong *plStack_f0;
  longlong lStack_d8;
  int iStack_b8;
  int iStack_b4;
  longlong lStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  longlong *plStack_90;
  int iStack_88;
  longlong lStack_80;
  int iStack_78;
  int iStack_70;
  int iStack_68;
  int iStack_60;
  uint uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  iStack_60 = 0;
  iStack_88 = 0;
  uVar27 = (uint)param_5 + 7;
  uVar28 = uVar27 & 0xfffffff8;
  uStack_58 = param_7;
  iStack_70 = (int)param_7 / 2;
  uVar29 = param_9 / 2;
  lStack_48 = (longlong)(int)-uVar28;
  lVar19 = (longlong)param_9;
  lVar16 = (longlong)(int)uVar28;
  if (param_5._4_4_ == 0) {
    return 0;
  }
  lStack_80 = param_3;
  iStack_78 = param_4;
  iStack_68 = param_2;
  lStack_50 = param_1;
  iVar7 = FUN_140aa8740();
  uStack_a8 = (uint)((int)(param_5._4_4_ * (uint)param_5) <= iVar7 >> 1);
  FUN_140aa8760(param_5,uStack_58);
  FUN_140aa87c0(param_5,param_9,&iStack_b4);
  lStack_d8 = lStack_50;
  iVar7 = param_9 * 3 + 0x1e;
  lStack_b0 = iStack_b8 + param_12;
  plVar10 = (longlong *)(iStack_b4 + lStack_b0 + (-(iStack_b4 + lStack_b0 & 0x1fU) & 0x1f));
  uVar30 = (ulonglong)(int)uVar29;
  uVar13 = (longlong)(plVar10 + iVar7) + (-((ulonglong)(plVar10 + iVar7) & 0x1f) & 0x1f);
  plVar31 = plVar10 + lVar19;
  plStack_f0 = plVar10 + (lVar19 - uVar30);
  uStack_a0 = (uint)param_5;
  uStack_98 = (uint)param_5;
  uStack_9c = 0x10;
  plStack_90 = plVar10;
  if ((param_10 & 0x10) == 0) {
    iVar18 = iStack_60;
    switch(param_10 & 0xf) {
    case 1:
      if (0 < (int)uVar29) {
        if ((longlong)uVar30 < 4) {
LAB_1401304c3:
          uVar17 = 0;
        }
        else {
          plVar20 = plVar10 + (lVar19 - uVar30);
          if ((longlong)uVar30 < 0x3f) {
            uVar17 = (ulonglong)(int)(uVar29 & 0xfffffffc);
            uStack_150 = 0;
            lVar23 = uVar13 + (longlong)(int)(uVar28 * param_9) * 2;
          }
          else {
            uVar9 = (uint)plVar20 & 0x1f;
            if (((ulonglong)plVar20 & 0x1f) != 0) {
              if (((ulonglong)plVar20 & 7) != 0) goto LAB_1401304c3;
              uVar9 = 0x20 - uVar9 >> 3;
            }
            uStack_150 = (ulonglong)uVar9;
            if ((longlong)uVar30 < (longlong)(uStack_150 + 4)) goto LAB_1401304c3;
            uVar14 = 0;
            uVar17 = (ulonglong)(int)(uVar29 - (uVar29 - uVar9 & 3));
            lVar23 = uVar13 + (longlong)(int)(uVar28 * param_9) * 2;
            if (uVar9 != 0) {
              do {
                plVar20[uVar14] = lVar23;
                uVar14 = uVar14 + 1;
              } while (uVar14 < uStack_150);
            }
          }
          do {
            plVar3 = plVar20 + uStack_150;
            *plVar3 = lVar23;
            plVar3[1] = lVar23;
            plVar3[2] = lVar23;
            plVar3[3] = lVar23;
            uStack_150 = uStack_150 + 4;
          } while (uStack_150 < uVar17);
        }
        if (uVar17 < uVar30) {
          do {
            plVar10[lVar19 + (uVar17 - uVar30)] = uVar13 + (longlong)(int)(uVar28 * param_9) * 2;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar30);
        }
      }
      break;
    case 2:
      if (0 < (int)uVar29) {
        plStack_158._0_4_ = 0;
        plVar20 = plVar10 + lVar19;
        lVar23 = uVar13 + (longlong)(int)(uVar29 * uVar28 - uVar28) * 2;
        uStack_94 = 1;
        pcVar4 = *(code **)(&UNK_143087500 + (longlong)param_13 * 8);
        iVar26 = param_16._4_4_;
        do {
          iVar26 = iVar26 + -1;
          if (iVar26 < 0) {
            iVar26 = param_16._4_4_ + -1;
          }
          *plVar10 = lVar23;
          plVar20[-1] = lVar23;
          (*pcVar4)(iStack_68 * iVar26 + param_15,plVar10,param_12,iStack_68,iStack_70,uStack_98,
                    param_10,param_11);
          plStack_158._0_4_ = (uint)plStack_158 + 1;
          plVar20 = plVar20 + -1;
          lVar23 = lVar23 + lStack_48 * 2;
          iVar18 = iStack_60;
        } while ((uint)plStack_158 < uVar29);
      }
      break;
    case 3:
      iStack_60 = 1;
    case 4:
      iVar26 = iStack_60 + -1;
      iVar18 = iStack_60;
      if (0 < (int)uVar29) {
        plStack_158._0_4_ = 0;
        plVar10 = plVar10 + lVar19;
        lVar23 = uVar13 + (longlong)(int)(uVar29 * uVar28 - uVar28) * 2;
        pcVar4 = *(code **)(&UNK_143087500 + (longlong)param_13 * 8);
        uStack_94 = 1;
        uStack_138 = param_10 & 0x20;
        uStack_140._0_4_ = 1;
        do {
          iVar26 = iVar26 + (uint)uStack_140;
          if (uStack_138 == 0) {
            if ((iVar26 == param_5._4_4_) || (iVar26 == -1)) {
              uStack_140._0_4_ = -(uint)uStack_140;
              iVar8 = (uint)uStack_140 - iVar18;
              iVar18 = -iVar18;
              iVar26 = iVar26 + iVar8;
            }
            if (param_5._4_4_ == 1) {
              iVar26 = 0;
            }
          }
          *plStack_90 = lVar23;
          plVar10[-1] = lVar23;
          (*pcVar4)(iVar26 * iStack_68 + lStack_50,plStack_90,param_12,iStack_68,iStack_70,uStack_98
                    ,param_10,param_11);
          plStack_158._0_4_ = (uint)plStack_158 + 1;
          plVar10 = plVar10 + -1;
          lVar23 = lVar23 + lStack_48 * 2;
        } while ((uint)plStack_158 < uVar29);
      }
      break;
    case 6:
      uVar9 = 0;
      if (0 < (int)uStack_58) {
        uVar17 = (ulonglong)(int)uStack_58;
        if ((longlong)uVar17 < 0x10) {
LAB_14012f789:
          uVar14 = 0;
          uVar9 = 0;
        }
        else {
          if ((longlong)uVar17 < 0x471) {
            uVar14 = (ulonglong)(int)(uStack_58 & 0xfffffff0);
            plStack_158 = (longlong *)0x0;
            uVar9 = 0;
          }
          else {
            uVar12 = (uint)param_6 & 0x1f;
            if ((param_6 & 0x1f) != 0) {
              if ((param_6 & 1) != 0) goto LAB_14012f789;
              uVar12 = 0x20 - uVar12 >> 1;
            }
            plStack_158 = (longlong *)(ulonglong)uVar12;
            if ((longlong)uVar17 < (longlong)((longlong)plStack_158 + 0x10U)) goto LAB_14012f789;
            uVar22 = 0;
            uVar14 = (ulonglong)(int)(uStack_58 - (uStack_58 - uVar12 & 0xf));
            if (uVar12 != 0) {
              do {
                lVar23 = uVar22 * 2;
                uVar22 = uVar22 + 1;
                uVar9 = uVar9 + (int)*(short *)(param_6 + lVar23);
              } while (uVar22 < plStack_158);
            }
          }
          auVar34 = ZEXT3264((undefined1  [32])0x0);
          auVar35 = ZEXT464(uVar9);
          do {
            auVar36 = *(undefined1 (*) [32])(param_6 + (longlong)plStack_158 * 2);
            plStack_158 = (longlong *)((longlong)plStack_158 + 0x10);
            auVar40 = vpmovsxwd_avx2(auVar36._0_16_);
            auVar32 = vpmovsxwd_avx2(auVar36._16_16_);
            auVar36 = vpaddd_avx2(auVar35._0_32_,auVar40);
            auVar35 = ZEXT3264(auVar36);
            auVar40 = vpaddd_avx2(auVar34._0_32_,auVar32);
            auVar34 = ZEXT3264(auVar40);
          } while (plStack_158 < uVar14);
          auVar36 = vpaddd_avx2(auVar36,auVar40);
          auVar6 = vpaddd_avx(auVar36._0_16_,auVar36._16_16_);
          auVar37 = vpsrldq_avx(auVar6,8);
          auVar6 = vpaddd_avx(auVar6,auVar37);
          auVar37 = vpsrlq_avx(auVar6,0x20);
          auVar6 = vpaddd_avx(auVar6,auVar37);
          uVar9 = auVar6._0_4_;
        }
        for (; uVar14 < uVar17; uVar14 = uVar14 + 1) {
          lVar23 = uVar14 * 2;
          uVar9 = uVar9 + (int)*(short *)(param_6 + lVar23);
        }
      }
      iVar26 = uVar9 * param_11;
      if (iVar26 < -0x8000) {
        iVar26 = -0x8000;
      }
      iVar8 = 0x7fff;
      if (iVar26 < 0x7fff) {
        iVar8 = iVar26;
      }
      if (0 < (int)(uint)param_5) {
        uVar17 = (ulonglong)(int)(uint)param_5;
        uVar21 = (undefined2)iVar8;
        if ((longlong)uVar17 < 0x10) {
LAB_14012f767:
          uVar14 = 0;
        }
        else {
          if ((longlong)uVar17 < 0x1b9) {
            uVar14 = (ulonglong)(int)((uint)param_5 & 0xfffffff0);
            plStack_158 = (longlong *)0x0;
          }
          else {
            plStack_158 = (longlong *)(uVar13 & 0x1f);
            if ((int)plStack_158 != 0) {
              if ((uVar13 & 1) != 0) goto LAB_14012f767;
              plStack_158 = (longlong *)(ulonglong)(0x20U - (int)plStack_158 >> 1);
            }
            if ((longlong)uVar17 < (longlong)((longlong)plStack_158 + 0x10U)) goto LAB_14012f767;
            uVar22 = 0;
            uVar14 = (ulonglong)(int)((uint)param_5 - ((uint)param_5 - (int)plStack_158 & 0xf));
            if ((int)plStack_158 != 0) {
              do {
                *(undefined2 *)(uVar13 + uVar22 * 2) = uVar21;
                uVar22 = uVar22 + 1;
              } while (uVar22 < plStack_158);
            }
          }
          do {
            puVar1 = (undefined2 *)(uVar13 + (longlong)plStack_158 * 2);
            *puVar1 = uVar21;
            puVar1[1] = uVar21;
            puVar1[2] = uVar21;
            puVar1[3] = uVar21;
            puVar1[4] = uVar21;
            puVar1[5] = uVar21;
            puVar1[6] = uVar21;
            puVar1[7] = uVar21;
            puVar1[8] = uVar21;
            puVar1[9] = uVar21;
            puVar1[10] = uVar21;
            puVar1[0xb] = uVar21;
            puVar1[0xc] = uVar21;
            puVar1[0xd] = uVar21;
            puVar1[0xe] = uVar21;
            puVar1[0xf] = uVar21;
            plStack_158 = (longlong *)((longlong)plStack_158 + 0x10);
          } while (plStack_158 < uVar14);
        }
        for (; uVar14 < uVar17; uVar14 = uVar14 + 1) {
          *(undefined2 *)(uVar13 + uVar14 * 2) = uVar21;
        }
      }
      if (0 < (int)uVar29) {
        if ((longlong)uVar30 < 4) {
LAB_14012f749:
          uVar17 = 0;
        }
        else {
          plVar20 = plVar10 + (lVar19 - uVar30);
          if ((longlong)uVar30 < 0x27) {
            uVar17 = (ulonglong)(int)(uVar29 & 0xfffffffc);
            plStack_158 = (longlong *)0x0;
          }
          else {
            uVar9 = (uint)plVar20 & 0x1f;
            if (((ulonglong)plVar20 & 0x1f) != 0) {
              if (((ulonglong)plVar20 & 7) != 0) goto LAB_14012f749;
              uVar9 = 0x20 - uVar9 >> 3;
            }
            plStack_158 = (longlong *)(ulonglong)uVar9;
            if ((longlong)uVar30 < (longlong)((longlong)plStack_158 + 4U)) goto LAB_14012f749;
            uVar14 = 0;
            uVar17 = (ulonglong)(int)(uVar29 - (uVar29 - uVar9 & 3));
            if (uVar9 != 0) {
              do {
                plVar20[uVar14] = uVar13;
                uVar14 = uVar14 + 1;
              } while (uVar14 < plStack_158);
            }
          }
          do {
            puVar2 = (ulonglong *)(plVar20 + (longlong)plStack_158);
            *puVar2 = uVar13;
            puVar2[1] = uVar13;
            puVar2[2] = uVar13;
            puVar2[3] = uVar13;
            plStack_158 = (longlong *)((longlong)plStack_158 + 4);
          } while (plStack_158 < uVar17);
        }
        for (; uVar17 < uVar30; uVar17 = uVar17 + 1) {
          plVar10[lVar19 + (uVar17 - uVar30)] = uVar13;
        }
      }
    }
  }
  else {
    if (0 < (int)uVar29) {
      if ((int)uVar29 < 8) {
LAB_140130722:
        uVar17 = 0;
      }
      else {
        plVar20 = plVar10 + (lVar19 - uVar30);
        if ((int)uVar29 < 0xf) {
          uVar14 = 0;
          uVar17 = (ulonglong)(int)(uVar29 & 0xfffffff8);
        }
        else {
          uVar9 = (uint)plVar20 & 0x1f;
          if (((ulonglong)plVar20 & 0x1f) != 0) {
            if (((ulonglong)plVar20 & 7) != 0) goto LAB_140130722;
            uVar9 = 0x20 - uVar9 >> 3;
          }
          uVar14 = (ulonglong)uVar9;
          if ((int)uVar29 < (int)(uVar9 + 8)) goto LAB_140130722;
          uVar12 = 0;
          uVar17 = uVar30 - (uVar29 - uVar9 & 7);
          if (uVar9 != 0) {
            lVar23 = 0;
            uVar22 = uVar13;
            do {
              uVar12 = uVar12 + 1;
              plVar20[lVar23] = uVar22;
              lVar23 = lVar23 + 1;
              uVar22 = uVar22 + lVar16 * 2;
            } while (uVar12 < uVar9);
          }
        }
        iVar26 = uVar28 * (int)uVar14;
        iVar18 = uVar28 * 8;
        auVar36._0_8_ = CONCAT44(uVar27,uVar27) & 0xfffffff8fffffff8;
        auVar36._8_4_ = uVar28;
        auVar36._12_4_ = uVar28;
        auVar36._16_4_ = uVar28;
        auVar36._20_4_ = uVar28;
        auVar36._24_4_ = uVar28;
        auVar36._28_4_ = uVar28;
        auVar36 = vpmulld_avx2(auVar36,_DAT_1430874e0);
        auVar32._8_8_ = uVar13;
        auVar32._0_8_ = uVar13;
        auVar32._16_8_ = uVar13;
        auVar32._24_8_ = uVar13;
        auVar41._4_4_ = iVar26;
        auVar41._0_4_ = iVar26;
        auVar41._8_4_ = iVar26;
        auVar41._12_4_ = iVar26;
        auVar41._16_4_ = iVar26;
        auVar41._20_4_ = iVar26;
        auVar41._24_4_ = iVar26;
        auVar41._28_4_ = iVar26;
        auVar40._4_4_ = iVar18;
        auVar40._0_4_ = iVar18;
        auVar40._8_4_ = iVar18;
        auVar40._12_4_ = iVar18;
        auVar40._16_4_ = iVar18;
        auVar40._20_4_ = iVar18;
        auVar40._24_4_ = iVar18;
        auVar40._28_4_ = iVar18;
        auVar36 = vpaddd_avx2(auVar36,auVar41);
        do {
          auVar41 = vpmovsxdq_avx2(auVar36._0_16_);
          auVar33 = vpmovsxdq_avx2(auVar36._16_16_);
          auVar41 = vpsllq_avx2(auVar41,1);
          auVar33 = vpsllq_avx2(auVar33,1);
          auVar36 = vpaddd_avx2(auVar36,auVar40);
          auVar41 = vpaddq_avx2(auVar32,auVar41);
          auVar33 = vpaddq_avx2(auVar32,auVar33);
          *(undefined1 (*) [32])(plVar20 + uVar14) = auVar41;
          *(undefined1 (*) [32])(plVar20 + uVar14 + 4) = auVar33;
          uVar14 = uVar14 + 8;
        } while (uVar14 < uVar17);
      }
      uVar14 = uVar17 & 0xffffffff;
      uVar9 = (uint)uVar17;
      lVar23 = uVar13 + (longlong)(int)(uVar28 * uVar9) * 2;
      while (uVar9 < uVar29) {
        uVar9 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar9;
        plVar10[lVar19 + (uVar17 - uVar30)] = lVar23;
        uVar17 = uVar17 + 1;
        lVar23 = lVar23 + lVar16 * 2;
      }
    }
    uStack_94 = uVar29;
    (**(code **)(&UNK_143087500 + (longlong)param_13 * 8))
              (lStack_50 - (longlong)iStack_68 * uVar30,plStack_f0,param_12,iStack_68,iStack_70,
               (uint)param_5,param_10,param_11);
    iVar18 = iStack_60;
  }
  iStack_60 = iVar18;
  iVar18 = param_9 + 0xf;
  uStack_94 = iVar18 - uVar29;
  lVar23 = lVar19 * 2 * lVar16;
  uStack_140 = uVar13 + lVar23;
  if (param_9 < iVar7) {
    lVar15 = 0;
    uVar9 = param_9 * 2 + 0x1e;
    iVar7 = 1;
    uVar12 = uVar9 >> 1;
    if (uVar12 != 0) {
      uVar14 = lVar23 + (longlong)(int)(uVar28 * iVar18) * 2 + uVar13;
      uVar17 = 0;
      lVar11 = (lVar19 * 2 + 0x1e) * lVar16;
      do {
        uVar17 = uVar17 + 1;
        if (uVar14 <= uStack_140) {
          uStack_140 = uStack_140 - lVar11;
        }
        *(ulonglong *)((longlong)plStack_90 + lVar15 + lVar19 * 8) = uStack_140;
        uStack_140 = uStack_140 + lVar16 * 2;
        if (uVar14 <= uStack_140) {
          uStack_140 = uStack_140 - lVar11;
        }
        *(ulonglong *)((longlong)plStack_90 + lVar15 + 8 + lVar19 * 8) = uStack_140;
        lVar15 = lVar15 + 0x10;
        uStack_140 = uStack_140 + lVar16 * 2;
      } while (uVar17 < uVar12);
      iVar7 = (int)uVar17 * 2 + 1;
    }
    if (iVar7 - 1U < uVar9) {
      if (lVar23 + (longlong)(int)(iVar18 * uVar28) * 2 + uVar13 <= uStack_140) {
        uStack_140 = uStack_140 - (lVar19 * 2 + 0x1e) * lVar16;
      }
      plStack_90[iVar7 + lVar19 + -1] = uStack_140;
    }
  }
  pcVar4 = *(code **)(&UNK_143087538 + (longlong)param_14 * 8);
  iStack_148 = uStack_94;
  if (0 < param_5._4_4_) {
    lVar23 = lVar19 * 8 + 0x78;
    pcVar5 = *(code **)(&UNK_143087500 + (longlong)param_13 * 8);
    lVar24 = (longlong)iStack_68;
    lVar11 = (longlong)iStack_78;
    plStack_90 = plStack_90 + lVar19 * 2 + 0xf;
    lVar15 = lStack_80;
    iVar7 = param_5._4_4_;
    iVar18 = iStack_88;
    while( true ) {
      if (iVar7 < (int)uStack_94) {
        uStack_9c = uStack_9c - (uStack_94 - iVar7);
        uStack_9c = ~((int)uStack_9c >> 0x1f) & uStack_9c;
        uStack_94 = iVar7;
      }
      (*pcVar5)(lStack_d8,plVar31,param_12,iStack_68,iStack_70,uStack_98,param_10,param_11);
      if (pcVar4 == FUN_140aa8820) {
        FUN_140aa8820(plStack_f0,lVar15,iStack_78,CONCAT44(uStack_9c,uStack_a0),lStack_b0,uStack_a8)
        ;
      }
      else {
        FUN_140aa9100(plStack_f0,lVar15,iStack_78,CONCAT44(uStack_9c,uStack_a0),lStack_b0,uStack_a8)
        ;
      }
      plVar31 = plVar31 + (int)uStack_94;
      lStack_d8 = lStack_d8 + lVar24 * (int)uStack_94;
      iVar7 = iVar7 - uStack_94;
      lVar15 = lVar15 + lVar11 * (int)uStack_9c;
      plStack_f0 = plStack_f0 + (int)uStack_9c;
      if (plStack_90 <= plVar31) {
        plVar31 = (longlong *)((longlong)plVar31 - lVar23);
      }
      if (plStack_90 <= plStack_f0) {
        plStack_f0 = (longlong *)((longlong)plStack_f0 - lVar23);
      }
      uStack_94 = 0x10;
      iVar18 = iVar18 + uStack_9c;
      if (iVar7 < 1) break;
      uStack_9c = 0x10;
    }
    iStack_148 = 0x10;
    iStack_88 = iVar18;
    lStack_80 = lVar15;
  }
  uStack_9c = param_5._4_4_ - iStack_88;
  if ((param_10 & 0x20) == 0) {
    uStack_94 = iStack_148;
    switch(param_10 & 0xf) {
    case 1:
      if (param_9 <= (int)(uVar29 + 1)) break;
      lVar23 = (longlong)iStack_88;
      lVar15 = (uVar30 - lVar23) + (longlong)param_5._4_4_;
      uVar13 = (lVar19 - (uVar30 + 2)) + 1;
      plVar31 = plStack_f0 + lVar15;
      lVar16 = plVar31[-1];
      if ((longlong)uVar13 < 4) {
LAB_14013015d:
        uVar17 = 0;
      }
      else {
        uVar27 = (uint)uVar13;
        if ((longlong)uVar13 < 0x27) {
          uVar17 = (ulonglong)(int)(uVar27 & 0xfffffffc);
          plVar31 = plStack_f0 + lVar15;
          uVar14 = 0;
        }
        else {
          uVar14 = (ulonglong)plVar31 & 0x1f;
          if ((int)uVar14 != 0) {
            if (((ulonglong)plVar31 & 7) != 0) goto LAB_14013015d;
            uVar14 = (ulonglong)(0x20U - (int)uVar14 >> 3);
          }
          if ((longlong)uVar13 < (longlong)(uVar14 + 4)) goto LAB_14013015d;
          uVar17 = (ulonglong)(int)(uVar27 - (uVar27 - (int)uVar14 & 3));
          uVar22 = 0;
          plVar31 = plStack_f0 + (uVar30 - lVar23) + (longlong)param_5._4_4_;
          if ((int)uVar14 != 0) {
            do {
              plVar31[uVar22] = lVar16;
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar14);
          }
        }
        do {
          plVar10 = plVar31 + uVar14;
          *plVar10 = lVar16;
          plVar10[1] = lVar16;
          plVar10[2] = lVar16;
          plVar10[3] = lVar16;
          uVar14 = uVar14 + 4;
        } while (uVar14 < uVar17);
      }
      if (uVar17 < uVar13) {
        do {
          plStack_f0[(uVar30 - lVar23) + (longlong)param_5._4_4_ + uVar17] = lVar16;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar13);
      }
      break;
    case 2:
      iVar7 = 0;
      if ((int)(uVar29 + 1) < param_9) {
        uVar17 = 0;
        pcVar5 = *(code **)(&UNK_143087500 + (longlong)param_13 * 8);
        uStack_94 = 1;
        do {
          lVar16 = (longlong)(int)uStack_9c + uVar30 + uVar17;
          if (param_16._4_4_ <= iVar7) {
            iVar7 = 0;
          }
          plStack_f0[lVar16] =
               uVar13 + (longlong)(int)((int)uVar17 * uVar28 + uVar29 * uVar28 + uVar28) * 2;
          (*pcVar5)(iStack_68 * iVar7 + param_15,plStack_f0 + lVar16,param_12,iStack_68,iStack_70,
                    uStack_98,param_10,param_11);
          uVar17 = uVar17 + 1;
          iVar7 = iVar7 + 1;
        } while (uVar17 < (lVar19 - uVar30) - 1);
      }
      break;
    case 3:
      iStack_60 = -1;
    case 4:
      iVar7 = param_5._4_4_ + iStack_60;
      iVar18 = -1;
      if ((int)(uVar29 + 1) < param_9) {
        uVar17 = 0;
        pcVar5 = *(code **)(&UNK_143087500 + (longlong)param_13 * 8);
        uStack_94 = 1;
        iVar26 = iStack_60;
        do {
          iVar7 = iVar7 + iVar18;
          if ((param_10 & 0x10) == 0) {
            if ((iVar7 == param_5._4_4_) || (iVar7 == -1)) {
              iVar18 = -iVar18;
              iVar8 = iVar18 - iVar26;
              iVar26 = -iVar26;
              iVar7 = iVar7 + iVar8;
            }
            if (param_5._4_4_ == 1) {
              iVar7 = 0;
            }
          }
          lVar16 = (longlong)(int)uStack_9c + uVar30 + uVar17;
          plStack_f0[lVar16] =
               uVar13 + (longlong)(int)((int)uVar17 * uVar28 + uVar29 * uVar28 + uVar28) * 2;
          (*pcVar5)(iStack_68 * iVar7 + lStack_50,plStack_f0 + lVar16,param_12,iStack_68,iStack_70,
                    uStack_98,param_10,param_11);
          uVar17 = uVar17 + 1;
        } while (uVar17 < (lVar19 - uVar30) - 1);
      }
      break;
    case 6:
      uVar27 = 0;
      uVar9 = 0;
      if (0 < (int)uStack_58) {
        uVar17 = (ulonglong)(int)uStack_58;
        if ((longlong)uVar17 < 0x10) {
LAB_140130142:
          uVar14 = 0;
        }
        else {
          if ((longlong)uVar17 < 0x471) {
            uVar22 = 0;
            uVar14 = (ulonglong)(int)(uStack_58 & 0xfffffff0);
          }
          else {
            uVar22 = param_6 & 0x1f;
            if ((int)uVar22 != 0) {
              if ((param_6 & 1) != 0) goto LAB_140130142;
              uVar22 = (ulonglong)(0x20U - (int)uVar22 >> 1);
            }
            if ((longlong)uVar17 < (longlong)(uVar22 + 0x10)) goto LAB_140130142;
            uVar25 = 0;
            uVar14 = (ulonglong)(int)(uStack_58 - (uStack_58 - (int)uVar22 & 0xf));
            uVar9 = uVar27;
            if ((int)uVar22 != 0) {
              do {
                lVar23 = uVar25 * 2;
                uVar25 = uVar25 + 1;
                uVar9 = uVar27 + (int)*(short *)(param_6 + lVar23);
                uVar27 = uVar9;
              } while (uVar25 < uVar22);
            }
          }
          auVar34 = ZEXT3264((undefined1  [32])0x0);
          auVar35 = ZEXT464(uVar9);
          do {
            auVar36 = *(undefined1 (*) [32])(param_6 + uVar22 * 2);
            uVar22 = uVar22 + 0x10;
            auVar40 = vpmovsxwd_avx2(auVar36._0_16_);
            auVar32 = vpmovsxwd_avx2(auVar36._16_16_);
            auVar36 = vpaddd_avx2(auVar35._0_32_,auVar40);
            auVar35 = ZEXT3264(auVar36);
            auVar40 = vpaddd_avx2(auVar34._0_32_,auVar32);
            auVar34 = ZEXT3264(auVar40);
          } while (uVar22 < uVar14);
          auVar36 = vpaddd_avx2(auVar36,auVar40);
          auVar6 = vpaddd_avx(auVar36._0_16_,auVar36._16_16_);
          auVar37 = vpsrldq_avx(auVar6,8);
          auVar6 = vpaddd_avx(auVar6,auVar37);
          auVar37 = vpsrlq_avx(auVar6,0x20);
          auVar6 = vpaddd_avx(auVar6,auVar37);
          uVar27 = auVar6._0_4_;
        }
        for (; uVar14 < uVar17; uVar14 = uVar14 + 1) {
          uVar27 = uVar27 + (int)*(short *)(param_6 + uVar14 * 2);
        }
      }
      iVar7 = param_11 * uVar27;
      if (iVar7 < -0x8000) {
        iVar7 = -0x8000;
      }
      iVar18 = 0x7fff;
      if (iVar7 < 0x7fff) {
        iVar18 = iVar7;
      }
      if (0 < (int)(uint)param_5) {
        uVar21 = (undefined2)iVar18;
        if ((int)(uint)param_5 < 0x10) {
LAB_140130126:
          uVar22 = 0;
        }
        else {
          uVar17 = uVar30 * 2 * lVar16 + uVar13;
          if ((int)(uint)param_5 < 0x1b9) {
            uVar14 = 0;
            uVar22 = (ulonglong)(int)((uint)param_5 & 0xfffffff0);
          }
          else {
            uVar14 = uVar17 & 0x1f;
            if ((int)uVar14 != 0) {
              if ((uVar17 & 1) != 0) goto LAB_140130126;
              uVar14 = (ulonglong)(0x20U - (int)uVar14 >> 1);
            }
            if ((longlong)(int)(uint)param_5 < (longlong)(uVar14 + 0x10)) goto LAB_140130126;
            uVar25 = 0;
            uVar22 = (ulonglong)(int)((uint)param_5 - ((uint)param_5 - (int)uVar14 & 0xf));
            if ((int)uVar14 != 0) {
              do {
                *(undefined2 *)(uVar17 + uVar25 * 2) = uVar21;
                uVar25 = uVar25 + 1;
              } while (uVar25 < uVar14);
            }
          }
          do {
            puVar1 = (undefined2 *)(uVar17 + uVar14 * 2);
            *puVar1 = uVar21;
            puVar1[1] = uVar21;
            puVar1[2] = uVar21;
            puVar1[3] = uVar21;
            puVar1[4] = uVar21;
            puVar1[5] = uVar21;
            puVar1[6] = uVar21;
            puVar1[7] = uVar21;
            puVar1[8] = uVar21;
            puVar1[9] = uVar21;
            puVar1[10] = uVar21;
            puVar1[0xb] = uVar21;
            puVar1[0xc] = uVar21;
            puVar1[0xd] = uVar21;
            puVar1[0xe] = uVar21;
            puVar1[0xf] = uVar21;
            uVar14 = uVar14 + 0x10;
          } while (uVar14 < uVar22);
        }
        if (uVar22 < (ulonglong)(longlong)(int)(uint)param_5) {
          do {
            *(undefined2 *)(lVar16 * uVar30 * 2 + uVar13 + uVar22 * 2) = uVar21;
            uVar22 = uVar22 + 1;
          } while (uVar22 < (ulonglong)(longlong)(int)(uint)param_5);
        }
      }
      if (param_9 <= (int)(uVar29 + 1)) break;
      uVar17 = (lVar19 - (uVar30 + 2)) + 1;
      if ((longlong)uVar17 < 4) {
LAB_1401300d2:
        uVar14 = 0;
      }
      else {
        lVar16 = (longlong)iStack_88;
        uVar27 = (uint)uVar17;
        if ((longlong)uVar17 < 0x3f) {
          plStack_158 = plStack_f0 + (uVar30 - lVar16) + (longlong)param_5._4_4_;
          uVar22 = 0;
          lVar16 = uVar13 + (longlong)(int)(uVar29 * uVar28) * 2;
          uVar14 = (ulonglong)(int)(uVar27 & 0xfffffffc);
        }
        else {
          uVar22 = (ulonglong)(plStack_f0 + (uVar30 - lVar16) + (longlong)param_5._4_4_) & 0x1f;
          if ((int)uVar22 != 0) {
            if (((ulonglong)(plStack_f0 + (uVar30 - lVar16) + (longlong)param_5._4_4_) & 7) != 0)
            goto LAB_1401300d2;
            uVar22 = (ulonglong)(0x20U - (int)uVar22 >> 3);
          }
          if ((longlong)uVar17 < (longlong)(uVar22 + 4)) goto LAB_1401300d2;
          uVar25 = 0;
          plStack_158 = plStack_f0 + (uVar30 - lVar16) + (longlong)param_5._4_4_;
          uVar14 = (ulonglong)(int)(uVar27 - (uVar27 - (int)uVar22 & 3));
          lVar16 = uVar13 + (longlong)(int)(uVar29 * uVar28) * 2;
          if ((int)uVar22 != 0) {
            do {
              plStack_158[uVar25] = lVar16;
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar22);
          }
        }
        do {
          plVar31 = plStack_158 + uVar22;
          *plVar31 = lVar16;
          plVar31[1] = lVar16;
          plVar31[2] = lVar16;
          plVar31[3] = lVar16;
          uVar22 = uVar22 + 4;
        } while (uVar22 < uVar14);
      }
      if (uVar14 < uVar17) {
        do {
          plStack_f0[(uVar30 - (longlong)iStack_88) + (longlong)param_5._4_4_ + uVar14] =
               uVar13 + (longlong)(int)(uVar29 * uVar28) * 2;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar17);
      }
    }
  }
  else {
    if ((int)(uVar29 + 1) < param_9) {
      uVar9 = (param_9 - (uVar29 + 2)) + 1;
      if ((int)uVar9 < 8) {
LAB_140130464:
        uVar17 = 0;
      }
      else {
        lVar19 = (longlong)iStack_88;
        if ((int)uVar9 < 0xf) {
          uVar12 = 0;
          lVar23 = (longlong)param_5._4_4_ * 8;
          uVar17 = (ulonglong)(int)(uVar9 & 0xfffffff8);
          plStack_130 = plStack_f0 + uVar30 + (param_5._4_4_ - lVar19);
        }
        else {
          plVar31 = plStack_f0 + (uVar30 - lVar19) + (longlong)param_5._4_4_;
          uVar12 = (uint)plVar31 & 0x1f;
          if (((ulonglong)plVar31 & 0x1f) != 0) {
            if (((ulonglong)plVar31 & 7) != 0) goto LAB_140130464;
            uVar12 = 0x20 - uVar12 >> 3;
          }
          if ((int)uVar9 < (int)(uVar12 + 8)) goto LAB_140130464;
          uVar17 = (longlong)(int)uVar9 - (ulonglong)(uVar9 - uVar12 & 7);
          plStack_130 = plStack_f0 + uVar30 + (param_5._4_4_ - lVar19);
          lVar23 = (longlong)param_5._4_4_ * 8;
          if (uVar12 != 0) {
            uStack_140._0_4_ = 0;
            lVar15 = uVar13 + (longlong)(int)(uVar29 * uVar28 + uVar28) * 2;
            lVar11 = 0;
            do {
              uStack_140._0_4_ = (uint)uStack_140 + 1;
              plStack_130[lVar11] = lVar15;
              lVar11 = lVar11 + 1;
              lVar15 = lVar15 + lVar16 * 2;
            } while ((uint)uStack_140 < uVar12);
          }
        }
        plStack_158 = (longlong *)(lVar19 * 8);
        iVar7 = uVar28 * 8;
        iVar18 = uVar29 * uVar28 + uVar28 + uVar28 * uVar12;
        auVar38._0_8_ = CONCAT44(uVar27,uVar27) & 0xfffffff8fffffff8;
        auVar38._8_4_ = uVar28;
        auVar38._12_4_ = uVar28;
        auVar38._16_4_ = uVar28;
        auVar38._20_4_ = uVar28;
        auVar38._24_4_ = uVar28;
        auVar38._28_4_ = uVar28;
        auVar36 = vpmulld_avx2(auVar38,_DAT_1430874e0);
        auVar33._8_8_ = uVar13;
        auVar33._0_8_ = uVar13;
        auVar33._16_8_ = uVar13;
        auVar33._24_8_ = uVar13;
        auVar42._4_4_ = iVar18;
        auVar42._0_4_ = iVar18;
        auVar42._8_4_ = iVar18;
        auVar42._12_4_ = iVar18;
        auVar42._16_4_ = iVar18;
        auVar42._20_4_ = iVar18;
        auVar42._24_4_ = iVar18;
        auVar42._28_4_ = iVar18;
        auVar39._4_4_ = iVar7;
        auVar39._0_4_ = iVar7;
        auVar39._8_4_ = iVar7;
        auVar39._12_4_ = iVar7;
        auVar39._16_4_ = iVar7;
        auVar39._20_4_ = iVar7;
        auVar39._24_4_ = iVar7;
        auVar39._28_4_ = iVar7;
        auVar36 = vpaddd_avx2(auVar36,auVar42);
        uVar14 = (ulonglong)uVar12;
        do {
          auVar40 = vpmovsxdq_avx2(auVar36._0_16_);
          auVar32 = vpmovsxdq_avx2(auVar36._16_16_);
          auVar40 = vpsllq_avx2(auVar40,1);
          auVar32 = vpsllq_avx2(auVar32,1);
          auVar36 = vpaddd_avx2(auVar36,auVar39);
          auVar40 = vpaddq_avx2(auVar33,auVar40);
          auVar32 = vpaddq_avx2(auVar33,auVar32);
          *(undefined1 (*) [32])(plStack_130 + uVar14) = auVar40;
          *(undefined1 (*) [32])
           ((longlong)(plStack_f0 + uVar30) + uVar14 * 8 + (0x20 - ((longlong)plStack_158 - lVar23))
           ) = auVar32;
          uVar14 = uVar14 + 8;
        } while (uVar14 < uVar17);
      }
      uVar27 = (uint)uVar17;
      uVar17 = uVar17 & 0xffffffff;
      lVar19 = (longlong)(int)uVar27;
      if (uVar27 < uVar9) {
        lVar23 = uVar13 + (longlong)(int)(uVar28 * uVar27 + uVar29 * uVar28 + uVar28) * 2;
        do {
          uVar27 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar27;
          plStack_f0[(uVar30 - (longlong)iStack_88) + (longlong)param_5._4_4_ + lVar19] = lVar23;
          lVar19 = lVar19 + 1;
          lVar23 = lVar23 + lVar16 * 2;
        } while (uVar27 < uVar9);
      }
    }
    uStack_94 = param_9 - (uVar29 + 1);
    (**(code **)(&UNK_143087500 + (longlong)param_13 * 8))
              (lStack_d8,plStack_f0 + uVar30 + (longlong)(int)uStack_9c,param_12,iStack_68,iStack_70
               ,uStack_98,param_10,param_11);
  }
  if (pcVar4 == FUN_140aa8820) {
    FUN_140aa8820(plStack_f0,lStack_80,iStack_78,CONCAT44(uStack_9c,uStack_a0),lStack_b0,uStack_a8);
  }
  else {
    FUN_140aa9100(plStack_f0,lStack_80,iStack_78,CONCAT44(uStack_9c,uStack_a0),lStack_b0,uStack_a8);
  }
  return 0;
}


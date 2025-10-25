
undefined8
FUN_14012c920(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
             longlong param_6,uint param_7,undefined8 param_8,int param_9,uint param_10,
             byte param_11,longlong param_12,int param_13,int param_14,longlong param_15,
             undefined8 param_16)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uStack_148;
  ulonglong uStack_140;
  uint uStack_130;
  uint uStack_120;
  longlong *plStack_e8;
  longlong lStack_d0;
  int iStack_98;
  int iStack_94;
  uint uStack_74;
  int iStack_6c;
  longlong lStack_68;
  int iStack_58;
  
  uVar32 = (int)param_5 + 7U & 0xfffffff8;
  iVar7 = (int)param_7 / 2;
  uVar33 = param_9 / 2;
  iStack_58 = 0;
  lVar27 = (longlong)param_9;
  lVar20 = (longlong)(int)uVar32;
  if (param_5._4_4_ == 0) {
    return 0;
  }
  iVar8 = FUN_140a8fee0();
  bVar5 = param_5._4_4_ * (int)param_5 <= iVar8 >> 1;
  FUN_140a8ff00(param_5,param_7);
  FUN_140a8ff60(param_5,param_9);
  lVar17 = iStack_98 + param_12;
  plVar9 = (longlong *)(iStack_94 + lVar17 + (-(iStack_94 + lVar17 & 0x1fU) & 0x1f));
  uVar34 = (ulonglong)(int)uVar33;
  iVar8 = param_9 * 3 + 0x1e;
  uVar15 = (longlong)(plVar9 + iVar8) + (-((ulonglong)(plVar9 + iVar8) & 0x1f) & 0x1f);
  plVar21 = plVar9 + lVar27;
  plStack_e8 = plVar9 + (lVar27 - uVar34);
  if ((param_10 & 0x10) == 0) {
    switch(param_10 & 0xf) {
    case 1:
      if (0 < (int)uVar33) {
        if ((longlong)uVar34 < 8) {
LAB_14012e3ab:
          uStack_140 = 0;
        }
        else {
          plVar22 = plVar9 + (lVar27 - uVar34);
          uVar30 = (ulonglong)plVar22 & 0xf;
          if ((int)uVar30 != 0) {
            if (((ulonglong)plVar22 & 7) != 0) goto LAB_14012e3ab;
            uVar30 = 1;
          }
          if ((longlong)uVar34 < (longlong)(uVar30 + 8)) goto LAB_14012e3ab;
          uStack_140 = (ulonglong)(int)(uVar33 - (uVar33 - (int)uVar30 & 7));
          uVar10 = 0;
          uVar19 = uVar15 + (longlong)(int)(param_9 * uVar32) * 2;
          if ((int)uVar30 != 0) {
            do {
              plVar22[uVar10] = uVar19;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar30);
          }
          auVar37._8_8_ = 0;
          auVar37._0_8_ = uVar19;
          auVar38 = vpunpcklqdq_avx(auVar37,auVar37);
          do {
            *(undefined1 (*) [16])(plVar22 + uVar30) = auVar38;
            *(undefined1 (*) [16])(plVar22 + uVar30 + 2) = auVar38;
            *(undefined1 (*) [16])(plVar22 + uVar30 + 4) = auVar38;
            *(undefined1 (*) [16])(plVar22 + uVar30 + 6) = auVar38;
            uVar30 = uVar30 + 8;
          } while (uVar30 < uStack_140);
        }
        if (uStack_140 < uVar34) {
          do {
            plVar9[lVar27 + (uStack_140 - uVar34)] = uVar15 + (longlong)(int)(param_9 * uVar32) * 2;
            uStack_140 = uStack_140 + 1;
          } while (uStack_140 < uVar34);
        }
      }
      break;
    case 2:
      if (0 < (int)uVar33) {
        uStack_148 = 0;
        plVar22 = plVar9 + lVar27;
        lVar23 = uVar15 + (longlong)(int)(uVar33 * uVar32 - uVar32) * 2;
        pcVar3 = *(code **)(&UNK_143087468 + (longlong)param_13 * 8);
        iVar13 = param_16._4_4_;
        do {
          iVar13 = iVar13 + -1;
          if (iVar13 < 0) {
            iVar13 = param_16._4_4_ + -1;
          }
          *plVar9 = lVar23;
          plVar22[-1] = lVar23;
          (*pcVar3)(param_2 * iVar13 + param_15,plVar9,param_12,param_2,iVar7,(int)param_5,param_10,
                    param_11);
          uStack_148 = uStack_148 + 1;
          plVar22 = plVar22 + -1;
          lVar23 = lVar23 + (longlong)(int)-uVar32 * 2;
        } while (uStack_148 < uVar33);
      }
      break;
    case 3:
      iStack_58 = 1;
    case 4:
      iVar13 = iStack_58 + -1;
      if (0 < (int)uVar33) {
        uStack_148 = 0;
        plVar22 = plVar9 + lVar27;
        uStack_120 = param_10 & 0x20;
        lVar23 = uVar15 + (longlong)(int)(uVar33 * uVar32 - uVar32) * 2;
        pcVar3 = *(code **)(&UNK_143087468 + (longlong)param_13 * 8);
        uStack_130 = 1;
        do {
          iVar13 = iVar13 + uStack_130;
          if (uStack_120 == 0) {
            if ((iVar13 == param_5._4_4_) || (iVar13 == -1)) {
              uStack_130 = -uStack_130;
              iVar12 = uStack_130 - iStack_58;
              iStack_58 = -iStack_58;
              iVar13 = iVar13 + iVar12;
            }
            if (param_5._4_4_ == 1) {
              iVar13 = 0;
            }
          }
          *plVar9 = lVar23;
          plVar22[-1] = lVar23;
          (*pcVar3)(iVar13 * param_2 + param_1,plVar9,param_12,param_2,iVar7,(int)param_5,param_10,
                    param_11);
          uStack_148 = uStack_148 + 1;
          plVar22 = plVar22 + -1;
          lVar23 = lVar23 + (longlong)(int)-uVar32 * 2;
        } while (uStack_148 < uVar33);
      }
      break;
    case 6:
      iVar13 = 0;
      if (0 < (int)param_7) {
        if ((longlong)(int)param_7 < 8) {
          uVar30 = 0;
          iVar13 = 0;
        }
        else {
          uVar19 = 0;
          auVar40 = ZEXT1664((undefined1  [16])0x0);
          auVar38 = (undefined1  [16])0x0;
          uVar30 = (ulonglong)(int)(param_7 & 0xfffffff8);
          do {
            auVar39._8_8_ = 0;
            auVar39._0_8_ = *(ulonglong *)(param_6 + uVar19 * 2);
            auVar39 = vpmovsxwd_avx(auVar39);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = *(ulonglong *)(param_6 + 8 + uVar19 * 2);
            auVar6 = vpmovsxwd_avx(auVar6);
            uVar19 = uVar19 + 8;
            auVar39 = vpaddd_avx(auVar40._0_16_,auVar39);
            auVar40 = ZEXT1664(auVar39);
            auVar38 = vpaddd_avx(auVar38,auVar6);
          } while (uVar19 < uVar30);
          auVar38 = vpaddd_avx(auVar39,auVar38);
          auVar39 = vpsrldq_avx(auVar38,8);
          auVar38 = vpaddd_avx(auVar38,auVar39);
          auVar39 = vpsrlq_avx(auVar38,0x20);
          auVar38 = vpaddd_avx(auVar38,auVar39);
          iVar13 = auVar38._0_4_;
        }
        for (; uVar30 < (ulonglong)(longlong)(int)param_7; uVar30 = uVar30 + 1) {
          lVar23 = uVar30 * 2;
          iVar13 = iVar13 + *(short *)(param_6 + lVar23);
        }
      }
      uVar16 = iVar13 * (uint)param_11;
      if ((int)uVar16 < -0x8000) {
        uVar16 = 0xffff8000;
      }
      uVar28 = 0x7fff;
      if ((int)uVar16 < 0x7fff) {
        uVar28 = uVar16;
      }
      if (0 < (int)param_5) {
        uVar30 = (ulonglong)(int)param_5;
        if ((longlong)uVar30 < 8) {
LAB_14012d7e7:
          uVar10 = 0;
        }
        else {
          uVar19 = uVar15 & 0xf;
          if ((int)uVar19 != 0) {
            if ((uVar15 & 1) != 0) goto LAB_14012d7e7;
            uVar19 = (ulonglong)(0x10U - (int)uVar19 >> 1);
          }
          if ((longlong)uVar30 < (longlong)(uVar19 + 8)) goto LAB_14012d7e7;
          uVar18 = 0;
          uVar10 = (ulonglong)(int)((int)param_5 - ((int)param_5 - (int)uVar19 & 7U));
          if ((int)uVar19 != 0) {
            do {
              *(short *)(uVar15 + uVar18 * 2) = (short)uVar28;
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar19);
          }
          auVar38 = vpunpcklwd_avx(ZEXT416(uVar28),ZEXT416(uVar28));
          auVar38 = vpunpckldq_avx(auVar38,auVar38);
          auVar38 = vpunpcklqdq_avx(auVar38,auVar38);
          do {
            *(undefined1 (*) [16])(uVar15 + uVar19 * 2) = auVar38;
            uVar19 = uVar19 + 8;
          } while (uVar19 < uVar10);
        }
        for (; uVar10 < uVar30; uVar10 = uVar10 + 1) {
          *(short *)(uVar15 + uVar10 * 2) = (short)uVar28;
        }
      }
      if (0 < (int)uVar33) {
        if ((longlong)uVar34 < 8) {
LAB_14012d7e0:
          uVar19 = 0;
        }
        else {
          plVar22 = plVar9 + (lVar27 - uVar34);
          uVar30 = (ulonglong)plVar22 & 0xf;
          if ((int)uVar30 != 0) {
            if (((ulonglong)plVar22 & 7) != 0) goto LAB_14012d7e0;
            uVar30 = 1;
          }
          if ((longlong)uVar34 < (longlong)(uVar30 + 8)) goto LAB_14012d7e0;
          uVar19 = (ulonglong)(int)(uVar33 - (uVar33 - (int)uVar30 & 7));
          uVar10 = 0;
          if ((int)uVar30 != 0) {
            do {
              plVar22[uVar10] = uVar15;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar30);
          }
          auVar42._8_8_ = 0;
          auVar42._0_8_ = uVar15;
          auVar38 = vpunpcklqdq_avx(auVar42,auVar42);
          do {
            *(undefined1 (*) [16])(plVar22 + uVar30) = auVar38;
            *(undefined1 (*) [16])(plVar22 + uVar30 + 2) = auVar38;
            *(undefined1 (*) [16])(plVar22 + uVar30 + 4) = auVar38;
            *(undefined1 (*) [16])(plVar22 + uVar30 + 6) = auVar38;
            uVar30 = uVar30 + 8;
          } while (uVar30 < uVar19);
        }
        for (; uVar19 < uVar34; uVar19 = uVar19 + 1) {
          plVar9[lVar27 + (uVar19 - uVar34)] = uVar15;
        }
      }
    }
  }
  else {
    if (0 < (int)uVar33) {
      if ((int)uVar33 < 4) {
LAB_14012e602:
        uVar19 = 0;
      }
      else {
        plVar22 = plVar9 + (lVar27 - uVar34);
        uVar16 = (uint)plVar22 & 0x1f;
        if (((ulonglong)plVar22 & 0x1f) != 0) {
          if (((ulonglong)plVar22 & 7) != 0) goto LAB_14012e602;
          uVar16 = 0x20 - uVar16 >> 3;
        }
        uVar30 = (ulonglong)uVar16;
        if ((int)uVar33 < (int)(uVar16 + 4)) goto LAB_14012e602;
        uVar28 = 0;
        lVar23 = 0;
        uVar19 = uVar34 - (uVar33 - uVar16 & 3);
        uVar10 = uVar15;
        if (uVar16 != 0) {
          do {
            uVar28 = uVar28 + 1;
            plVar22[lVar23] = uVar10;
            lVar23 = lVar23 + 1;
            uVar10 = uVar10 + lVar20 * 2;
          } while (uVar28 < uVar16);
        }
        auVar38._8_8_ = 0;
        auVar38._0_8_ = uVar15;
        auVar6 = vpunpcklqdq_avx(auVar38,auVar38);
        uVar28 = uVar32 * uVar16 + uVar32;
        uVar24 = uVar28 + uVar32;
        auVar38 = vpunpckldq_avx(ZEXT416(uVar32 * uVar16),ZEXT416(uVar28));
        auVar39 = vpunpckldq_avx(ZEXT416(uVar24),ZEXT416(uVar24 + uVar32));
        auVar38 = vpunpcklqdq_avx(auVar38,auVar39);
        auVar39 = vpshufd_avx(ZEXT416(uVar32 * 4),0);
        do {
          auVar37 = vpsrldq_avx(auVar38,8);
          auVar42 = vpmovsxdq_avx(auVar38);
          auVar38 = vpaddd_avx(auVar38,auVar39);
          auVar37 = vpmovsxdq_avx(auVar37);
          auVar42 = vpsllq_avx(auVar42,1);
          auVar37 = vpsllq_avx(auVar37,1);
          auVar42 = vpaddq_avx(auVar6,auVar42);
          auVar37 = vpaddq_avx(auVar6,auVar37);
          *(undefined1 (*) [16])(plVar22 + uVar30) = auVar42;
          *(undefined1 (*) [16])(plVar22 + uVar30 + 2) = auVar37;
          uVar30 = uVar30 + 4;
        } while (uVar30 < uVar19);
      }
      uVar30 = uVar19 & 0xffffffff;
      uVar16 = (uint)uVar19;
      lVar23 = uVar15 + (longlong)(int)(uVar32 * uVar16) * 2;
      while (uVar16 < uVar33) {
        uVar16 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar16;
        plVar9[lVar27 + (uVar19 - uVar34)] = lVar23;
        uVar19 = uVar19 + 1;
        lVar23 = lVar23 + lVar20 * 2;
      }
    }
    (**(code **)(&UNK_143087468 + (longlong)param_13 * 8))
              (param_1 - (longlong)param_2 * uVar34,plStack_e8,param_12,param_2,iVar7,(int)param_5,
               param_10,param_11);
  }
  lVar23 = 0;
  iVar13 = param_9 + 0xf;
  iStack_6c = iVar13 - uVar33;
  lVar31 = lVar27 * 2 * lVar20;
  uStack_140 = uVar15 + lVar31;
  if (param_9 < iVar8) {
    iVar8 = 1;
    uVar16 = param_9 * 2 + 0x1e;
    uVar28 = uVar16 >> 1;
    if (uVar28 != 0) {
      uVar19 = lVar31 + (longlong)(int)(uVar32 * iVar13) * 2 + uVar15;
      lVar29 = 0;
      uVar30 = 0;
      lVar11 = (lVar27 * 2 + 0x1e) * lVar20;
      do {
        uVar30 = uVar30 + 1;
        if (uVar19 <= uStack_140) {
          uStack_140 = uStack_140 - lVar11;
        }
        *(ulonglong *)((longlong)plVar9 + lVar29 + lVar27 * 8) = uStack_140;
        uStack_140 = uStack_140 + lVar20 * 2;
        if (uVar19 <= uStack_140) {
          uStack_140 = uStack_140 - lVar11;
        }
        *(ulonglong *)((longlong)plVar9 + lVar29 + 8 + lVar27 * 8) = uStack_140;
        lVar29 = lVar29 + 0x10;
        uStack_140 = uStack_140 + lVar20 * 2;
      } while (uVar30 < uVar28);
      iVar8 = (int)uVar30 * 2 + 1;
    }
    if (iVar8 - 1U < uVar16) {
      if (lVar31 + (longlong)(int)(iVar13 * uVar32) * 2 + uVar15 <= uStack_140) {
        uStack_140 = uStack_140 - (lVar27 * 2 + 0x1e) * lVar20;
      }
      plVar9[iVar8 + lVar27 + -1] = uStack_140;
    }
  }
  pcVar3 = *(code **)(&UNK_1430874a0 + (longlong)param_14 * 8);
  lStack_d0 = param_1;
  lStack_68 = param_3;
  if (0 < param_5._4_4_) {
    lVar31 = lVar27 * 8 + 0x78;
    pcVar4 = *(code **)(&UNK_143087468 + (longlong)param_13 * 8);
    iVar8 = param_5._4_4_;
    do {
      uStack_74 = 0x10;
      if (iVar8 < iStack_6c) {
        uStack_74 = 0x10 - (iStack_6c - iVar8);
        uStack_74 = ~((int)uStack_74 >> 0x1f) & uStack_74;
        iStack_6c = iVar8;
      }
      (*pcVar4)(lStack_d0,plVar21,param_12,param_2,iVar7,(int)param_5,param_10,param_11);
      if (pcVar3 == FUN_140a8ffc0) {
        FUN_140a8ffc0(plStack_e8,param_3,param_4,CONCAT44(uStack_74,(int)param_5),lVar17,bVar5);
      }
      else {
        FUN_140a90820(plStack_e8,param_3,param_4,CONCAT44(uStack_74,(int)param_5),lVar17,bVar5);
      }
      lVar29 = (longlong)(int)uStack_74;
      lVar23 = lVar23 + lVar29;
      lStack_d0 = lStack_d0 + (longlong)param_2 * (longlong)iStack_6c;
      plVar21 = plVar21 + iStack_6c;
      iVar8 = iVar8 - iStack_6c;
      plStack_e8 = plStack_e8 + lVar29;
      if (plVar9 + lVar27 * 2 + 0xf <= plVar21) {
        plVar21 = (longlong *)((longlong)plVar21 - lVar31);
      }
      if (plVar9 + lVar27 * 2 + 0xf <= plStack_e8) {
        plStack_e8 = (longlong *)((longlong)plStack_e8 - lVar31);
      }
      iStack_6c = 0x10;
      param_3 = param_3 + lVar29 * param_4;
      lStack_68 = param_3;
    } while (0 < iVar8);
  }
  iVar8 = param_5._4_4_ - (int)lVar23;
  if ((param_10 & 0x20) == 0) {
    switch(param_10 & 0xf) {
    case 1:
      if (param_9 <= (int)(uVar33 + 1)) break;
      uVar30 = (lVar27 - (uVar34 + 2)) + 1;
      plVar21 = plStack_e8 + (uVar34 - lVar23) + (longlong)param_5._4_4_;
      uVar15 = plVar21[-1];
      if ((longlong)uVar30 < 8) {
LAB_14012e0bb:
        uVar10 = 0;
      }
      else {
        uVar32 = (uint)plVar21 & 0xf;
        if (((ulonglong)plVar21 & 0xf) != 0) {
          if (((ulonglong)plVar21 & 7) != 0) goto LAB_14012e0bb;
          uVar32 = 1;
        }
        uVar19 = (ulonglong)uVar32;
        if ((longlong)uVar30 < (longlong)(uVar19 + 8)) goto LAB_14012e0bb;
        uVar18 = 0;
        lVar20 = (longlong)param_5._4_4_;
        uVar10 = (ulonglong)(int)((int)uVar30 - ((int)uVar30 - uVar32 & 7));
        if (uVar32 != 0) {
          do {
            plStack_e8[uVar34 + ((lVar20 + uVar18) - lVar23)] = uVar15;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar19);
        }
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar15;
        auVar38 = vpunpcklqdq_avx(auVar36,auVar36);
        lVar27 = uVar34 * 8 - (lVar23 * 8 + lVar20 * -8);
        do {
          *(undefined1 (*) [16])(plStack_e8 + uVar34 + ((lVar20 + uVar19) - lVar23)) = auVar38;
          *(undefined1 (*) [16])((longlong)plStack_e8 + uVar19 * 8 + lVar27 + 0x10) = auVar38;
          *(undefined1 (*) [16])((longlong)plStack_e8 + uVar19 * 8 + lVar27 + 0x20) = auVar38;
          *(undefined1 (*) [16])((longlong)plStack_e8 + uVar19 * 8 + lVar27 + 0x30) = auVar38;
          uVar19 = uVar19 + 8;
        } while (uVar19 < uVar10);
      }
      if (uVar10 < uVar30) {
        do {
          plStack_e8[(uVar34 - lVar23) + (longlong)param_5._4_4_ + uVar10] = uVar15;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar30);
      }
      break;
    case 2:
      iVar13 = 0;
      if ((int)(uVar33 + 1) < param_9) {
        uVar30 = 0;
        pcVar4 = *(code **)(&UNK_143087468 + (longlong)param_13 * 8);
        do {
          lVar20 = (longlong)iVar8 + uVar34 + uVar30;
          if (param_16._4_4_ <= iVar13) {
            iVar13 = 0;
          }
          plStack_e8[lVar20] =
               uVar15 + (longlong)(int)((int)uVar30 * uVar32 + uVar33 * uVar32 + uVar32) * 2;
          (*pcVar4)(param_2 * iVar13 + param_15,plStack_e8 + lVar20,param_12,param_2,iVar7,
                    (int)param_5,param_10,param_11);
          uVar30 = uVar30 + 1;
          iVar13 = iVar13 + 1;
        } while (uVar30 < (lVar27 - uVar34) - 1);
      }
      break;
    case 3:
      iStack_58 = -1;
    case 4:
      iVar13 = param_5._4_4_ + iStack_58;
      if ((int)(uVar33 + 1) < param_9) {
        uVar30 = 0;
        pcVar4 = *(code **)(&UNK_143087468 + (longlong)param_13 * 8);
        iVar12 = -1;
        do {
          iVar13 = iVar13 + iVar12;
          if ((param_10 & 0x10) == 0) {
            if ((iVar13 == param_5._4_4_) || (iVar13 == -1)) {
              iVar12 = -iVar12;
              iVar14 = iVar12 - iStack_58;
              iStack_58 = -iStack_58;
              iVar13 = iVar13 + iVar14;
            }
            if (param_5._4_4_ == 1) {
              iVar13 = 0;
            }
          }
          lVar20 = (longlong)iVar8 + uVar34 + uVar30;
          plStack_e8[lVar20] =
               uVar15 + (longlong)(int)((int)uVar30 * uVar32 + uVar33 * uVar32 + uVar32) * 2;
          (*pcVar4)(param_2 * iVar13 + param_1,plStack_e8 + lVar20,param_12,param_2,iVar7,
                    (int)param_5,param_10,param_11);
          uVar30 = uVar30 + 1;
        } while (uVar30 < (lVar27 - uVar34) - 1);
      }
      break;
    case 6:
      iVar7 = 0;
      if (0 < (int)param_7) {
        if ((longlong)(int)param_7 < 8) {
          uVar30 = 0;
        }
        else {
          uVar19 = 0;
          auVar40 = ZEXT1664((undefined1  [16])0x0);
          auVar38 = (undefined1  [16])0x0;
          uVar30 = (ulonglong)(int)(param_7 & 0xfffffff8);
          do {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = *(ulonglong *)(param_6 + uVar19 * 2);
            auVar39 = vpmovsxwd_avx(auVar1);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = *(ulonglong *)(param_6 + 8 + uVar19 * 2);
            auVar6 = vpmovsxwd_avx(auVar2);
            uVar19 = uVar19 + 8;
            auVar39 = vpaddd_avx(auVar40._0_16_,auVar39);
            auVar40 = ZEXT1664(auVar39);
            auVar38 = vpaddd_avx(auVar38,auVar6);
          } while (uVar19 < uVar30);
          auVar38 = vpaddd_avx(auVar39,auVar38);
          auVar39 = vpsrldq_avx(auVar38,8);
          auVar38 = vpaddd_avx(auVar38,auVar39);
          auVar39 = vpsrlq_avx(auVar38,0x20);
          auVar38 = vpaddd_avx(auVar38,auVar39);
          iVar7 = auVar38._0_4_;
        }
        for (; uVar30 < (ulonglong)(longlong)(int)param_7; uVar30 = uVar30 + 1) {
          iVar7 = iVar7 + *(short *)(param_6 + uVar30 * 2);
        }
      }
      uVar16 = (uint)param_11 * iVar7;
      if ((int)uVar16 < -0x8000) {
        uVar16 = 0xffff8000;
      }
      uVar28 = 0x7fff;
      if ((int)uVar16 < 0x7fff) {
        uVar28 = uVar16;
      }
      uVar30 = (ulonglong)(int)param_5;
      if (0 < (longlong)uVar30) {
        if ((longlong)uVar30 < 8) {
LAB_14012e0ac:
          uVar18 = 0;
        }
        else {
          uVar10 = uVar34 * 2 * lVar20 + uVar15;
          uVar19 = uVar10 & 0xf;
          if ((int)uVar19 != 0) {
            if ((uVar10 & 1) != 0) goto LAB_14012e0ac;
            uVar19 = (ulonglong)(0x10U - (int)uVar19 >> 1);
          }
          if ((longlong)uVar30 < (longlong)(uVar19 + 8)) goto LAB_14012e0ac;
          uVar18 = (ulonglong)(int)((int)param_5 - ((int)param_5 - (int)uVar19 & 7U));
          uVar26 = 0;
          if ((int)uVar19 != 0) {
            do {
              *(short *)(uVar10 + uVar26 * 2) = (short)uVar28;
              uVar26 = uVar26 + 1;
            } while (uVar26 < uVar19);
          }
          auVar38 = vpunpcklwd_avx(ZEXT416(uVar28),ZEXT416(uVar28));
          auVar38 = vpunpckldq_avx(auVar38,auVar38);
          auVar38 = vpunpcklqdq_avx(auVar38,auVar38);
          do {
            *(undefined1 (*) [16])(uVar10 + uVar19 * 2) = auVar38;
            uVar19 = uVar19 + 8;
          } while (uVar19 < uVar18);
        }
        if (uVar18 < uVar30) {
          do {
            *(short *)(lVar20 * uVar34 * 2 + uVar15 + uVar18 * 2) = (short)uVar28;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar30);
        }
      }
      if (param_9 <= (int)(uVar33 + 1)) break;
      uVar30 = (lVar27 - (uVar34 + 2)) + 1;
      if ((longlong)uVar30 < 8) {
LAB_14012e0a4:
        uVar10 = 0;
      }
      else {
        plVar21 = plStack_e8 + (uVar34 - lVar23) + (longlong)param_5._4_4_;
        uVar16 = (uint)plVar21 & 0xf;
        if (((ulonglong)plVar21 & 0xf) != 0) {
          if (((ulonglong)plVar21 & 7) != 0) goto LAB_14012e0a4;
          uVar16 = 1;
        }
        uVar19 = (ulonglong)uVar16;
        if ((longlong)uVar30 < (longlong)(uVar19 + 8)) goto LAB_14012e0a4;
        lVar20 = (longlong)param_5._4_4_;
        uVar10 = (ulonglong)(int)((int)uVar30 - ((int)uVar30 - uVar16 & 7));
        uVar18 = uVar15 + (longlong)(int)(uVar33 * uVar32) * 2;
        if (uVar16 != 0) {
          uVar26 = 0;
          do {
            plStack_e8[uVar34 + ((lVar20 + uVar26) - lVar23)] = uVar18;
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar19);
        }
        auVar35._8_8_ = 0;
        auVar35._0_8_ = uVar18;
        auVar38 = vpunpcklqdq_avx(auVar35,auVar35);
        lVar27 = uVar34 * 8 - (lVar23 * 8 + lVar20 * -8);
        do {
          *(undefined1 (*) [16])(plStack_e8 + uVar34 + ((lVar20 + uVar19) - lVar23)) = auVar38;
          *(undefined1 (*) [16])((longlong)plStack_e8 + uVar19 * 8 + lVar27 + 0x10) = auVar38;
          *(undefined1 (*) [16])((longlong)plStack_e8 + uVar19 * 8 + lVar27 + 0x20) = auVar38;
          *(undefined1 (*) [16])((longlong)plStack_e8 + uVar19 * 8 + lVar27 + 0x30) = auVar38;
          uVar19 = uVar19 + 8;
        } while (uVar19 < uVar10);
      }
      if (uVar10 < uVar30) {
        do {
          plStack_e8[(uVar34 - lVar23) + (longlong)param_5._4_4_ + uVar10] =
               uVar15 + (longlong)(int)(uVar33 * uVar32) * 2;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar30);
      }
    }
  }
  else {
    if ((int)(uVar33 + 1) < param_9) {
      uVar16 = (param_9 - (uVar33 + 2)) + 1;
      if ((int)uVar16 < 4) {
LAB_14012e3a3:
        uVar30 = 0;
      }
      else {
        plVar21 = plStack_e8 + (uVar34 - lVar23) + (longlong)param_5._4_4_;
        uVar28 = (uint)plVar21 & 0x1f;
        if (((ulonglong)plVar21 & 0x1f) != 0) {
          if (((ulonglong)plVar21 & 7) != 0) goto LAB_14012e3a3;
          uVar28 = 0x20 - uVar28 >> 3;
        }
        if ((int)uVar16 < (int)(uVar28 + 4)) goto LAB_14012e3a3;
        lVar27 = (longlong)param_5._4_4_;
        uVar30 = (longlong)(int)uVar16 - (ulonglong)(uVar16 - uVar28 & 3);
        if (uVar28 != 0) {
          lVar29 = 0;
          uStack_130 = 0;
          lVar31 = uVar15 + (longlong)(int)(uVar33 * uVar32 + uVar32) * 2;
          do {
            uStack_130 = uStack_130 + 1;
            plStack_e8[uVar34 + ((lVar27 + lVar29) - lVar23)] = lVar31;
            lVar29 = lVar29 + 1;
            lVar31 = lVar31 + lVar20 * 2;
          } while (uStack_130 < uVar28);
        }
        auVar41._8_8_ = 0;
        auVar41._0_8_ = uVar15;
        auVar6 = vpunpcklqdq_avx(auVar41,auVar41);
        uVar24 = uVar33 * uVar32 + uVar32 + uVar32 * uVar28;
        uVar19 = (ulonglong)uVar28;
        uVar28 = uVar24 + uVar32;
        uVar25 = uVar28 + uVar32;
        auVar38 = vpunpckldq_avx(ZEXT416(uVar24),ZEXT416(uVar28));
        auVar39 = vpunpckldq_avx(ZEXT416(uVar25),ZEXT416(uVar25 + uVar32));
        auVar38 = vpunpcklqdq_avx(auVar38,auVar39);
        auVar39 = vpshufd_avx(ZEXT416(uVar32 * 4),0);
        do {
          auVar37 = vpsrldq_avx(auVar38,8);
          auVar42 = vpmovsxdq_avx(auVar38);
          auVar38 = vpaddd_avx(auVar38,auVar39);
          auVar37 = vpmovsxdq_avx(auVar37);
          auVar42 = vpsllq_avx(auVar42,1);
          auVar37 = vpsllq_avx(auVar37,1);
          auVar42 = vpaddq_avx(auVar6,auVar42);
          auVar37 = vpaddq_avx(auVar6,auVar37);
          *(undefined1 (*) [16])(plStack_e8 + uVar34 + ((lVar27 + uVar19) - lVar23)) = auVar42;
          *(undefined1 (*) [16])
           ((longlong)plStack_e8 + uVar19 * 8 + (uVar34 * 8 - (lVar23 * 8 + lVar27 * -8)) + 0x10) =
               auVar37;
          uVar19 = uVar19 + 4;
        } while (uVar19 < uVar30);
      }
      uVar28 = (uint)uVar30;
      uVar30 = uVar30 & 0xffffffff;
      lVar27 = (longlong)(int)uVar28;
      if (uVar28 < uVar16) {
        lVar31 = uVar15 + (longlong)(int)(uVar32 * uVar28 + uVar33 * uVar32 + uVar32) * 2;
        do {
          uVar32 = (int)uVar30 + 1;
          uVar30 = (ulonglong)uVar32;
          plStack_e8[(uVar34 - lVar23) + (longlong)param_5._4_4_ + lVar27] = lVar31;
          lVar27 = lVar27 + 1;
          lVar31 = lVar31 + lVar20 * 2;
        } while (uVar32 < uVar16);
      }
    }
    (**(code **)(&UNK_143087468 + (longlong)param_13 * 8))
              (lStack_d0,plStack_e8 + uVar34 + (longlong)iVar8,param_12,param_2,iVar7,(int)param_5,
               param_10,param_11);
  }
  if (pcVar3 == FUN_140a8ffc0) {
    FUN_140a8ffc0(plStack_e8,lStack_68,param_4,CONCAT44(iVar8,(int)param_5),lVar17,bVar5);
  }
  else {
    FUN_140a90820(plStack_e8,lStack_68,param_4,CONCAT44(iVar8,(int)param_5),lVar17,bVar5);
  }
  return 0;
}



undefined8
FUN_14012a800(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
             longlong param_6,uint param_7,undefined8 param_8,int param_9,uint param_10,
             byte param_11,longlong param_12,int param_13,int param_14,longlong param_15,
             undefined8 param_16)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong *plVar28;
  int iVar29;
  undefined8 uVar30;
  int iVar31;
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  uint uStack_120;
  longlong *plStack_e8;
  longlong lStack_d0;
  int iStack_a0;
  int iStack_9c;
  longlong lStack_98;
  uint uStack_90;
  int iStack_88;
  int iStack_80;
  uint uStack_7c;
  int iStack_78;
  uint uStack_74;
  longlong *plStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  int iStack_58;
  int iStack_50;
  
  uVar20 = (int)param_5 + 7U & 0xfffffff8;
  iStack_58 = (int)param_7 / 2;
  uVar26 = param_9 / 2;
  iStack_50 = 0;
  uStack_68 = (ulonglong)(int)-uVar20;
  lVar25 = (longlong)param_9;
  lVar19 = (longlong)(int)uVar20;
  if (param_5._4_4_ == 0) {
    return 0;
  }
  lStack_60 = param_3;
  iVar5 = FUN_140a754e0();
  uStack_90 = (uint)(param_5._4_4_ * (int)param_5 <= iVar5 >> 1);
  FUN_140a75500(param_5,param_7,&iStack_a0);
  FUN_140a75560(param_5,param_9,&iStack_9c);
  uVar27 = (ulonglong)(int)uVar26;
  lStack_98 = iStack_a0 + param_12;
  iVar5 = param_9 * 3 + 0x1e;
  plVar6 = (longlong *)(iStack_9c + lStack_98 + (-(iStack_9c + lStack_98 & 0x1fU) & 0x1f));
  uStack_7c = 0x10;
  uVar11 = (longlong)(plVar6 + iVar5) + (-((ulonglong)(plVar6 + iVar5) & 0x1f) & 0x1f);
  plVar28 = plVar6 + lVar25;
  plStack_e8 = plVar6 + (lVar25 - uVar27);
  iStack_80 = (int)param_5;
  iStack_78 = (int)param_5;
  plStack_70 = plVar6;
  if ((param_10 & 0x10) == 0) {
    iVar29 = iStack_50;
    switch(param_10 & 0xf) {
    case 1:
      if (0 < (int)uVar26) {
        if ((int)uVar26 < 8) {
LAB_14012c462:
          iVar10 = 0;
          if (uVar26 == 0) break;
          uStack_138 = 0;
          uStack_140 = uVar27;
        }
        else {
          plVar21 = plVar6 + (lVar25 - uVar27);
          uVar23 = (ulonglong)((uint)plVar21 & 0xf);
          if (((ulonglong)plVar21 & 0xf) != 0) {
            if (((ulonglong)plVar21 & 7) != 0) goto LAB_14012c462;
            uVar23 = 1;
          }
          iVar14 = (int)uVar23;
          if ((int)uVar26 < iVar14 + 8) goto LAB_14012c462;
          iVar10 = uVar26 - (uVar26 - iVar14 & 7);
          lVar12 = uVar11 + (longlong)(int)(param_9 * uVar20) * 2;
          if (iVar14 != 0) {
            uVar8 = 0;
            do {
              plVar21[uVar8] = lVar12;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar23);
          }
          uVar8 = (ulonglong)iVar10;
          do {
            plVar21[uVar23] = lVar12;
            (plVar21 + uVar23)[1] = lVar12;
            plVar21[uVar23 + 2] = lVar12;
            (plVar21 + uVar23 + 2)[1] = lVar12;
            plVar21[uVar23 + 4] = lVar12;
            (plVar21 + uVar23 + 4)[1] = lVar12;
            plVar21[uVar23 + 6] = lVar12;
            (plVar21 + uVar23 + 6)[1] = lVar12;
            uVar23 = uVar23 + 8;
          } while (uVar23 < uVar8);
          if (uVar26 < iVar10 + 1U) break;
          uStack_140 = uVar27 - uVar8;
          if ((longlong)uStack_140 < 2) {
            uStack_138 = 0;
          }
          else {
            uStack_138 = (ulonglong)(int)((uint)uStack_140 & 0xfffffffe);
            uVar23 = 0;
            do {
              plVar21[uVar8 + uVar23] = lVar12;
              (plVar21 + uVar8 + uVar23)[1] = lVar12;
              uVar23 = uVar23 + 2;
            } while (uVar23 < uStack_138);
          }
        }
        if (uStack_138 < uStack_140) {
          do {
            plVar6[(iVar10 + lVar25 + uStack_138) - uVar27] =
                 uVar11 + (longlong)(int)(param_9 * uVar20) * 2;
            uStack_138 = uStack_138 + 1;
          } while (uStack_138 < uStack_140);
        }
      }
      break;
    case 2:
      if (0 < (int)uVar26) {
        uStack_148 = 0;
        uStack_74 = 1;
        plVar21 = plVar6 + lVar25;
        lVar12 = uVar11 + (longlong)(int)(uVar26 * uVar20 - uVar20) * 2;
        pcVar2 = *(code **)(&UNK_143087408 + (longlong)param_13 * 8);
        iStack_88 = param_4;
        iVar14 = param_16._4_4_;
        do {
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) {
            iVar14 = param_16._4_4_ + -1;
          }
          *plVar6 = lVar12;
          plVar21[-1] = lVar12;
          (*pcVar2)(param_2 * iVar14 + param_15,plVar6,param_12,param_2,iStack_58,iStack_78,param_10
                    ,param_11);
          uStack_148 = uStack_148 + 1;
          plVar21 = plVar21 + -1;
          lVar12 = lVar12 + uStack_68 * 2;
          iVar29 = iStack_50;
          param_4 = iStack_88;
        } while (uStack_148 < uVar26);
      }
      break;
    case 3:
      iStack_50 = 1;
    case 4:
      iVar14 = iStack_50 + -1;
      iVar29 = iStack_50;
      if (0 < (int)uVar26) {
        uStack_148 = 0;
        uStack_74 = 1;
        plVar21 = plVar6 + lVar25;
        uStack_120 = param_10 & 0x20;
        lVar12 = uVar11 + (longlong)(int)(uVar26 * uVar20 - uVar20) * 2;
        pcVar2 = *(code **)(&UNK_143087408 + (longlong)param_13 * 8);
        uStack_130._0_4_ = 1;
        iStack_88 = param_4;
        do {
          iVar14 = iVar14 + (uint)uStack_130;
          if (uStack_120 == 0) {
            if ((iVar14 == param_5._4_4_) || (iVar14 == -1)) {
              uStack_130._0_4_ = -(uint)uStack_130;
              iVar10 = (uint)uStack_130 - iVar29;
              iVar29 = -iVar29;
              iVar14 = iVar14 + iVar10;
            }
            if (param_5._4_4_ == 1) {
              iVar14 = 0;
            }
          }
          *plVar6 = lVar12;
          plVar21[-1] = lVar12;
          (*pcVar2)(iVar14 * param_2 + param_1,plVar6,param_12,param_2,iStack_58,iStack_78,param_10,
                    param_11);
          uStack_148 = uStack_148 + 1;
          plVar21 = plVar21 + -1;
          lVar12 = lVar12 + uStack_68 * 2;
          param_4 = iStack_88;
        } while (uStack_148 < uVar26);
      }
      break;
    case 6:
      iVar14 = 0;
      if (0 < (int)param_7) {
        if ((longlong)(int)param_7 < 8) {
          uVar23 = 0;
        }
        else {
          auVar44 = (undefined1  [16])0x0;
          uVar23 = (ulonglong)(int)(param_7 & 0xfffffff8);
          uVar8 = 0;
          do {
            in_XMM1 = pmovsxwd(in_XMM1,*(undefined8 *)(param_6 + uVar8 * 2));
            in_XMM2 = pmovsxwd(in_XMM2,*(undefined8 *)(param_6 + 8 + uVar8 * 2));
            uVar8 = uVar8 + 8;
            iVar14 = auVar44._4_4_;
            iVar10 = auVar44._8_4_;
            iVar31 = auVar44._12_4_;
            auVar44._0_4_ = auVar44._0_4_ + in_XMM1._0_4_ + in_XMM2._0_4_;
            auVar44._4_4_ = iVar14 + in_XMM1._4_4_ + in_XMM2._4_4_;
            auVar44._8_4_ = iVar10 + in_XMM1._8_4_ + in_XMM2._8_4_;
            auVar44._12_4_ = iVar31 + in_XMM1._12_4_ + in_XMM2._12_4_;
          } while (uVar8 < uVar23);
          in_XMM1 = auVar44 >> 0x40;
          auVar46._0_4_ = auVar44._0_4_ + auVar44._8_4_;
          auVar46._4_4_ = auVar44._4_4_ + auVar44._12_4_;
          auVar46._8_4_ = auVar44._8_4_;
          auVar46._12_4_ = auVar44._12_4_;
          in_XMM2._4_4_ = 0;
          in_XMM2._0_4_ = auVar46._4_4_;
          in_XMM2._8_8_ = auVar46._8_8_ >> 0x20;
          iVar14 = auVar46._0_4_ + auVar46._4_4_;
        }
        for (; uVar23 < (ulonglong)(longlong)(int)param_7; uVar23 = uVar23 + 1) {
          iVar14 = iVar14 + *(short *)(param_6 + uVar23 * 2);
        }
      }
      iVar14 = iVar14 * (uint)param_11;
      if (iVar14 < -0x8000) {
        iVar14 = -0x8000;
      }
      iVar10 = 0x7fff;
      if (iVar14 < 0x7fff) {
        iVar10 = iVar14;
      }
      if (0 < (int)param_5) {
        uVar23 = (ulonglong)(int)param_5;
        uVar9 = (undefined2)iVar10;
        if ((longlong)uVar23 < 8) {
LAB_14012b7cd:
          uVar7 = 0;
        }
        else {
          uVar8 = uVar11 & 0xf;
          if ((int)uVar8 != 0) {
            if ((uVar11 & 1) != 0) goto LAB_14012b7cd;
            uVar8 = (ulonglong)(0x10U - (int)uVar8 >> 1);
          }
          if ((longlong)uVar23 < (longlong)(uVar8 + 8)) goto LAB_14012b7cd;
          uVar17 = 0;
          uVar7 = (ulonglong)(int)((int)param_5 - ((int)param_5 - (int)uVar8 & 7U));
          if ((int)uVar8 != 0) {
            do {
              *(undefined2 *)(uVar11 + uVar17 * 2) = uVar9;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar8);
          }
          uVar30 = CONCAT44(CONCAT22(uVar9,uVar9),CONCAT22(uVar9,uVar9));
          do {
            puVar1 = (undefined8 *)(uVar11 + uVar8 * 2);
            *puVar1 = uVar30;
            puVar1[1] = uVar30;
            uVar8 = uVar8 + 8;
          } while (uVar8 < uVar7);
        }
        for (; uVar7 < uVar23; uVar7 = uVar7 + 1) {
          *(undefined2 *)(uVar11 + uVar7 * 2) = uVar9;
        }
      }
      if (0 < (int)uVar26) {
        if ((longlong)uVar27 < 8) {
LAB_14012b7c6:
          uVar8 = 0;
        }
        else {
          plVar21 = plVar6 + (lVar25 - uVar27);
          uVar16 = (uint)plVar21 & 0xf;
          if (((ulonglong)plVar21 & 0xf) != 0) {
            if (((ulonglong)plVar21 & 7) != 0) goto LAB_14012b7c6;
            uVar16 = 1;
          }
          uVar23 = (ulonglong)uVar16;
          if ((longlong)uVar27 < (longlong)(uVar23 + 8)) goto LAB_14012b7c6;
          uVar7 = 0;
          uVar8 = (ulonglong)(int)(uVar26 - (uVar26 - uVar16 & 7));
          if (uVar16 != 0) {
            do {
              plVar21[uVar7] = uVar11;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar23);
          }
          do {
            plVar21[uVar23] = uVar11;
            (plVar21 + uVar23)[1] = uVar11;
            plVar21[uVar23 + 2] = uVar11;
            (plVar21 + uVar23 + 2)[1] = uVar11;
            plVar21[uVar23 + 4] = uVar11;
            (plVar21 + uVar23 + 4)[1] = uVar11;
            plVar21[uVar23 + 6] = uVar11;
            (plVar21 + uVar23 + 6)[1] = uVar11;
            uVar23 = uVar23 + 8;
          } while (uVar23 < uVar8);
        }
        for (; uVar8 < uVar27; uVar8 = uVar8 + 1) {
          plVar6[lVar25 + (uVar8 - uVar27)] = uVar11;
        }
      }
    }
  }
  else {
    if (0 < (int)uVar26) {
      if ((int)uVar26 < 8) {
LAB_14012c717:
        uVar8 = 0;
      }
      else {
        plVar21 = plVar6 + (lVar25 - uVar27);
        uVar23 = (ulonglong)((uint)plVar21 & 0xf);
        if (((ulonglong)plVar21 & 0xf) != 0) {
          if (((ulonglong)plVar21 & 7) != 0) goto LAB_14012c717;
          uVar23 = 1;
        }
        uVar16 = (uint)uVar23;
        if ((int)uVar26 < (int)(uVar16 + 8)) goto LAB_14012c717;
        lVar12 = 0;
        uVar8 = uVar27 - (uVar26 - uVar16 & 7);
        if (uVar16 != 0) {
          uStack_140._0_4_ = 0;
          uVar7 = uVar11;
          do {
            uStack_140._0_4_ = (uint)uStack_140 + 1;
            plVar21[lVar12] = uVar7;
            lVar12 = lVar12 + 1;
            uVar7 = uVar7 + lVar19 * 2;
            iStack_88 = param_4;
          } while ((uint)uStack_140 < uVar16);
        }
        uVar15 = uVar20 * 2;
        auVar39 = (undefined1  [16])0x0;
        auVar43 = ZEXT416(uVar15);
        in_XMM1._8_8_ = uVar11;
        in_XMM1._0_8_ = uVar11;
        in_XMM2._4_4_ = uVar20 * uVar16 + uVar20;
        in_XMM2._0_4_ = uVar20 * uVar16;
        in_XMM2._8_8_ = 0;
        do {
          auVar39 = pmovsxdq(auVar39,in_XMM2);
          auVar45._0_4_ = in_XMM2._0_4_ + uVar15;
          auVar45._4_4_ = in_XMM2._4_4_ + uVar15;
          auVar45._8_4_ = in_XMM2._8_4_ + uVar15;
          auVar45._12_4_ = in_XMM2._12_4_ + uVar15;
          auVar44 = pmovsxdq(auVar43,auVar45);
          auVar36._0_4_ = auVar45._0_4_ + uVar15;
          auVar36._4_4_ = auVar45._4_4_ + uVar15;
          auVar36._8_4_ = auVar45._8_4_ + uVar15;
          auVar36._12_4_ = auVar45._12_4_ + uVar15;
          auVar46 = pmovsxdq(in_XMM5,auVar36);
          auVar37._0_4_ = auVar36._0_4_ + uVar15;
          auVar37._4_4_ = auVar36._4_4_ + uVar15;
          auVar37._8_4_ = auVar36._8_4_ + uVar15;
          auVar37._12_4_ = auVar36._12_4_ + uVar15;
          auVar41._0_8_ = auVar39._0_8_ * 2 + uVar11;
          auVar41._8_8_ = auVar39._8_8_ * 2 + uVar11;
          *(undefined1 (*) [16])(plVar21 + uVar23) = auVar41;
          auVar45 = pmovsxdq(auVar41,auVar37);
          auVar43._0_8_ = auVar44._0_8_ * 2 + uVar11;
          auVar43._8_8_ = auVar44._8_8_ * 2 + uVar11;
          in_XMM5._0_8_ = auVar46._0_8_ * 2 + uVar11;
          in_XMM5._8_8_ = auVar46._8_8_ * 2 + uVar11;
          *(undefined1 (*) [16])(plVar21 + uVar23 + 2) = auVar43;
          in_XMM2._0_4_ = auVar37._0_4_ + uVar15;
          in_XMM2._4_4_ = auVar37._4_4_ + uVar15;
          in_XMM2._8_4_ = auVar37._8_4_ + uVar15;
          in_XMM2._12_4_ = auVar37._12_4_ + uVar15;
          *(undefined1 (*) [16])(plVar21 + uVar23 + 4) = in_XMM5;
          auVar39._0_8_ = auVar45._0_8_ * 2 + uVar11;
          auVar39._8_8_ = auVar45._8_8_ * 2 + uVar11;
          *(undefined1 (*) [16])(plVar21 + uVar23 + 6) = auVar39;
          uVar23 = uVar23 + 8;
        } while (uVar23 < uVar8);
      }
      uVar23 = uVar8 & 0xffffffff;
      uVar16 = (uint)uVar8;
      lVar12 = uVar11 + (longlong)(int)(uVar20 * uVar16) * 2;
      while (uVar16 < uVar26) {
        uVar16 = (int)uVar23 + 1;
        uVar23 = (ulonglong)uVar16;
        plVar6[lVar25 + (uVar8 - uVar27)] = lVar12;
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + lVar19 * 2;
      }
    }
    uStack_74 = uVar26;
    (**(code **)(&UNK_143087408 + (longlong)param_13 * 8))
              (param_1 - (longlong)param_2 * uVar27,plStack_e8,param_12,param_2,iStack_58,
               (int)param_5,param_10,param_11);
    iVar29 = iStack_50;
  }
  iStack_50 = iVar29;
  lVar22 = 0;
  iVar29 = param_9 + 0xf;
  uStack_74 = iVar29 - uVar26;
  lVar12 = lVar25 * 2 * lVar19;
  uStack_130 = uVar11 + lVar12;
  if (param_9 < iVar5) {
    uVar16 = param_9 * 2 + 0x1e;
    uVar15 = uVar16 >> 1;
    uStack_148 = 1;
    if (uVar15 != 0) {
      lVar18 = (lVar25 * 2 + 0x1e) * lVar19;
      uVar8 = lVar12 + (longlong)(int)(uVar20 * iVar29) * 2 + uVar11;
      uVar23 = 0;
      uStack_68 = CONCAT44(uStack_68._4_4_,param_2);
      lVar24 = 0;
      do {
        uVar23 = uVar23 + 1;
        if (uVar8 <= uStack_130) {
          uStack_130 = uStack_130 - lVar18;
        }
        uVar7 = uStack_130 + lVar19 * 2;
        *(ulonglong *)((longlong)plStack_70 + lVar24 + lVar25 * 8) = uStack_130;
        if (uVar8 <= uVar7) {
          uVar7 = uVar7 - lVar18;
        }
        *(ulonglong *)((longlong)plStack_70 + lVar24 + 8 + lVar25 * 8) = uVar7;
        lVar24 = lVar24 + 0x10;
        uStack_130 = uVar7 + lVar19 * 2;
      } while (uVar23 < uVar15);
      uStack_148 = (int)uVar23 * 2 + 1;
      iStack_88 = param_4;
    }
    if (uStack_148 - 1 < uVar16) {
      if (lVar12 + (longlong)(int)(iVar29 * uVar20) * 2 + uVar11 <= uStack_130) {
        uStack_130 = uStack_130 - (lVar25 * 2 + 0x1e) * lVar19;
      }
      plStack_70[(int)uStack_148 + lVar25 + -1] = uStack_130;
    }
  }
  pcVar2 = *(code **)(&UNK_143087440 + (longlong)param_14 * 8);
  lStack_d0 = param_1;
  if (0 < param_5._4_4_) {
    lVar12 = lVar25 * 8 + 0x78;
    pcVar3 = *(code **)(&UNK_143087408 + (longlong)param_13 * 8);
    plStack_70 = plStack_70 + lVar25 * 2 + 0xf;
    uStack_68 = CONCAT44(uStack_68._4_4_,param_2);
    lVar24 = lStack_60;
    iStack_88 = param_4;
    iVar5 = param_5._4_4_;
    while( true ) {
      if (iVar5 < (int)uStack_74) {
        uStack_7c = uStack_7c - (uStack_74 - iVar5);
        uStack_7c = ~((int)uStack_7c >> 0x1f) & uStack_7c;
        uStack_74 = iVar5;
      }
      (*pcVar3)(lStack_d0,plVar28,param_12,uStack_68 & 0xffffffff,iStack_58,iStack_78,param_10,
                param_11);
      if (pcVar2 == FUN_140a755c0) {
        FUN_140a755c0(plStack_e8,lVar24,iStack_88,CONCAT44(uStack_7c,iStack_80),lStack_98,uStack_90)
        ;
      }
      else {
        FUN_140a76020(plStack_e8,lVar24,iStack_88,CONCAT44(uStack_7c,iStack_80),lStack_98,uStack_90)
        ;
      }
      lVar18 = (longlong)(int)uStack_7c;
      plVar28 = plVar28 + (int)uStack_74;
      lVar22 = lVar22 + lVar18;
      plStack_e8 = plStack_e8 + lVar18;
      lStack_d0 = lStack_d0 + (longlong)param_2 * (longlong)(int)uStack_74;
      iVar5 = iVar5 - uStack_74;
      lVar24 = lVar24 + lVar18 * param_4;
      if (plStack_70 <= plVar28) {
        plVar28 = (longlong *)((longlong)plVar28 - lVar12);
      }
      uStack_74 = 0x10;
      if (plStack_70 <= plStack_e8) {
        plStack_e8 = (longlong *)((longlong)plStack_e8 - lVar12);
      }
      if (iVar5 < 1) break;
      uStack_7c = 0x10;
    }
    uStack_74 = 0x10;
    lStack_60 = lVar24;
    param_2 = (int)uStack_68;
    param_4 = iStack_88;
  }
  uStack_7c = param_5._4_4_ - (int)lVar22;
  if ((param_10 & 0x20) == 0) {
    switch(param_10 & 0xf) {
    case 1:
      if (param_9 <= (int)(uVar26 + 1)) break;
      uVar11 = (lVar25 - (uVar27 + 2)) + 1;
      plVar28 = plStack_e8 + (uVar27 - lVar22) + (longlong)param_5._4_4_;
      lVar19 = plVar28[-1];
      if ((longlong)uVar11 < 8) {
LAB_14012c131:
        uVar8 = 0;
      }
      else {
        uVar20 = (uint)plVar28 & 0xf;
        if (((ulonglong)plVar28 & 0xf) != 0) {
          if (((ulonglong)plVar28 & 7) != 0) goto LAB_14012c131;
          uVar20 = 1;
        }
        uVar23 = (ulonglong)uVar20;
        if ((longlong)uVar11 < (longlong)(uVar23 + 8)) goto LAB_14012c131;
        lVar25 = (longlong)param_5._4_4_;
        uVar7 = 0;
        uVar8 = (ulonglong)(int)((int)uVar11 - ((int)uVar11 - uVar20 & 7));
        if (uVar20 != 0) {
          do {
            plStack_e8[uVar27 + ((lVar25 + uVar7) - lVar22)] = lVar19;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar23);
        }
        lVar12 = uVar27 * 8 - (lVar22 * 8 + lVar25 * -8);
        do {
          plStack_e8[uVar27 + ((lVar25 + uVar23) - lVar22)] = lVar19;
          (plStack_e8 + uVar27 + ((lVar25 + uVar23) - lVar22))[1] = lVar19;
          plVar28 = (longlong *)((longlong)plStack_e8 + uVar23 * 8 + lVar12 + 0x10);
          *plVar28 = lVar19;
          plVar28[1] = lVar19;
          plVar28 = (longlong *)((longlong)plStack_e8 + uVar23 * 8 + lVar12 + 0x20);
          *plVar28 = lVar19;
          plVar28[1] = lVar19;
          plVar28 = (longlong *)((longlong)plStack_e8 + uVar23 * 8 + lVar12 + 0x30);
          *plVar28 = lVar19;
          plVar28[1] = lVar19;
          uVar23 = uVar23 + 8;
        } while (uVar23 < uVar8);
      }
      if (uVar8 < uVar11) {
        do {
          plStack_e8[(uVar27 - lVar22) + (longlong)param_5._4_4_ + uVar8] = lVar19;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar11);
      }
      break;
    case 2:
      iVar5 = 0;
      if ((int)(uVar26 + 1) < param_9) {
        uVar23 = 0;
        uStack_74 = 1;
        pcVar3 = *(code **)(&UNK_143087408 + (longlong)param_13 * 8);
        iStack_88 = param_4;
        do {
          lVar19 = (longlong)(int)uStack_7c + uVar27 + uVar23;
          if (param_16._4_4_ <= iVar5) {
            iVar5 = 0;
          }
          plStack_e8[lVar19] =
               uVar11 + (longlong)(int)((int)uVar23 * uVar20 + uVar26 * uVar20 + uVar20) * 2;
          (*pcVar3)(param_2 * iVar5 + param_15,plStack_e8 + lVar19,param_12,param_2,iStack_58,
                    iStack_78,param_10,param_11);
          uVar23 = uVar23 + 1;
          iVar5 = iVar5 + 1;
          param_4 = iStack_88;
        } while (uVar23 < (lVar25 - uVar27) - 1);
      }
      break;
    case 3:
      iStack_50 = -1;
    case 4:
      iVar29 = -1;
      iVar5 = param_5._4_4_ + iStack_50;
      if ((int)(uVar26 + 1) < param_9) {
        pcVar3 = *(code **)(&UNK_143087408 + (longlong)param_13 * 8);
        uVar23 = 0;
        uStack_74 = 1;
        iVar14 = iStack_50;
        iStack_88 = param_4;
        do {
          iVar5 = iVar5 + iVar29;
          if ((param_10 & 0x10) == 0) {
            if ((iVar5 == param_5._4_4_) || (iVar5 == -1)) {
              iVar29 = -iVar29;
              iVar10 = iVar29 - iVar14;
              iVar14 = -iVar14;
              iVar5 = iVar5 + iVar10;
            }
            if (param_5._4_4_ == 1) {
              iVar5 = 0;
            }
          }
          lVar19 = (longlong)(int)uStack_7c + uVar27 + uVar23;
          plStack_e8[lVar19] =
               uVar11 + (longlong)(int)((int)uVar23 * uVar20 + uVar26 * uVar20 + uVar20) * 2;
          (*pcVar3)(param_2 * iVar5 + param_1,plStack_e8 + lVar19,param_12,param_2,iStack_58,
                    iStack_78,param_10,param_11);
          uVar23 = uVar23 + 1;
          param_4 = iStack_88;
        } while (uVar23 < (lVar25 - uVar27) - 1);
      }
      break;
    case 6:
      iVar5 = 0;
      if (0 < (int)param_7) {
        if ((longlong)(int)param_7 < 8) {
          uVar23 = 0;
        }
        else {
          iVar5 = 0;
          iVar29 = 0;
          iVar14 = 0;
          iVar10 = 0;
          uVar8 = 0;
          uVar23 = (ulonglong)(int)(param_7 & 0xfffffff8);
          do {
            in_XMM1 = pmovsxwd(in_XMM1,*(undefined8 *)(param_6 + uVar8 * 2));
            in_XMM2 = pmovsxwd(in_XMM2,*(undefined8 *)(param_6 + 8 + uVar8 * 2));
            uVar8 = uVar8 + 8;
            iVar5 = iVar5 + in_XMM1._0_4_ + in_XMM2._0_4_;
            iVar29 = iVar29 + in_XMM1._4_4_ + in_XMM2._4_4_;
            iVar14 = iVar14 + in_XMM1._8_4_ + in_XMM2._8_4_;
            iVar10 = iVar10 + in_XMM1._12_4_ + in_XMM2._12_4_;
          } while (uVar8 < uVar23);
          iVar5 = iVar5 + iVar14 + iVar29 + iVar10;
        }
        for (; uVar23 < (ulonglong)(longlong)(int)param_7; uVar23 = uVar23 + 1) {
          iVar5 = iVar5 + *(short *)(param_6 + uVar23 * 2);
        }
      }
      iVar5 = (uint)param_11 * iVar5;
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
      uVar23 = (ulonglong)(int)param_5;
      iVar29 = 0x7fff;
      if (iVar5 < 0x7fff) {
        iVar29 = iVar5;
      }
      if (0 < (longlong)uVar23) {
        uVar9 = (undefined2)iVar29;
        if ((longlong)uVar23 < 8) {
LAB_14012c122:
          uVar17 = 0;
        }
        else {
          uVar8 = uVar27 * 2 * lVar19 + uVar11;
          uVar16 = (uint)uVar8 & 0xf;
          if ((uVar8 & 0xf) != 0) {
            if ((uVar8 & 1) != 0) goto LAB_14012c122;
            uVar16 = 0x10 - uVar16 >> 1;
          }
          uVar7 = (ulonglong)uVar16;
          if ((longlong)uVar23 < (longlong)(uVar7 + 8)) goto LAB_14012c122;
          uVar17 = (ulonglong)(int)((int)param_5 - ((int)param_5 - uVar16 & 7));
          uVar13 = 0;
          if (uVar16 != 0) {
            do {
              *(undefined2 *)(uVar8 + uVar13 * 2) = uVar9;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar7);
          }
          uVar30 = CONCAT44(CONCAT22(uVar9,uVar9),CONCAT22(uVar9,uVar9));
          do {
            puVar1 = (undefined8 *)(uVar8 + uVar7 * 2);
            *puVar1 = uVar30;
            puVar1[1] = uVar30;
            uVar7 = uVar7 + 8;
          } while (uVar7 < uVar17);
        }
        if (uVar17 < uVar23) {
          do {
            *(undefined2 *)(lVar19 * uVar27 * 2 + uVar11 + uVar17 * 2) = uVar9;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar23);
        }
      }
      if (param_9 <= (int)(uVar26 + 1)) break;
      uVar16 = (param_9 - (uVar26 + 2)) + 1;
      if ((int)uVar16 < 8) {
LAB_14012c10c:
        iVar5 = 0;
        if (uVar16 == 0) break;
        uVar8 = (ulonglong)(int)uVar16;
        uVar23 = 0;
      }
      else {
        plVar28 = plStack_e8 + (uVar27 - lVar22) + (longlong)param_5._4_4_;
        uVar15 = (uint)plVar28 & 0xf;
        if (((ulonglong)plVar28 & 0xf) != 0) {
          if (((ulonglong)plVar28 & 7) != 0) goto LAB_14012c10c;
          uVar15 = 1;
        }
        if ((int)uVar16 < (int)(uVar15 + 8)) goto LAB_14012c10c;
        lVar25 = (longlong)param_5._4_4_;
        iVar5 = uVar16 - (uVar16 - uVar15 & 7);
        lVar19 = uVar11 + (longlong)(int)(uVar26 * uVar20) * 2;
        uVar23 = (ulonglong)uVar15;
        if (uVar15 != 0) {
          uVar8 = 0;
          do {
            plStack_e8[uVar27 + ((lVar25 + uVar8) - lVar22)] = lVar19;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar23);
        }
        lVar12 = uVar27 * 8 - (lVar22 * 8 + lVar25 * -8);
        uVar7 = (ulonglong)iVar5;
        do {
          plStack_e8[uVar27 + ((lVar25 + uVar23) - lVar22)] = lVar19;
          (plStack_e8 + uVar27 + ((lVar25 + uVar23) - lVar22))[1] = lVar19;
          plVar28 = (longlong *)((longlong)plStack_e8 + uVar23 * 8 + lVar12 + 0x10);
          *plVar28 = lVar19;
          plVar28[1] = lVar19;
          plVar28 = (longlong *)((longlong)plStack_e8 + uVar23 * 8 + lVar12 + 0x20);
          *plVar28 = lVar19;
          plVar28[1] = lVar19;
          plVar28 = (longlong *)((longlong)plStack_e8 + uVar23 * 8 + lVar12 + 0x30);
          *plVar28 = lVar19;
          plVar28[1] = lVar19;
          uVar23 = uVar23 + 8;
        } while (uVar23 < uVar7);
        if (uVar16 < iVar5 + 1U) break;
        uVar8 = (longlong)(int)uVar16 - uVar7;
        if ((longlong)uVar8 < 2) {
          uVar23 = 0;
        }
        else {
          uVar17 = 0;
          uVar23 = (ulonglong)(int)((uint)uVar8 & 0xfffffffe);
          do {
            plVar28 = (longlong *)((longlong)plStack_e8 + uVar17 * 8 + uVar7 * 8 + lVar12);
            *plVar28 = lVar19;
            plVar28[1] = lVar19;
            uVar17 = uVar17 + 2;
          } while (uVar17 < uVar23);
        }
      }
      if (uVar23 < uVar8) {
        do {
          plStack_e8[(uVar27 - lVar22) + (longlong)param_5._4_4_ + (longlong)iVar5 + uVar23] =
               uVar11 + (longlong)(int)(uVar26 * uVar20) * 2;
          uVar23 = uVar23 + 1;
        } while (uVar23 < uVar8);
      }
    }
  }
  else {
    if ((int)(uVar26 + 1) < param_9) {
      uVar16 = (param_9 - (uVar26 + 2)) + 1;
      if ((int)uVar16 < 8) {
LAB_14012c44c:
        uVar23 = 0;
      }
      else {
        plVar28 = plStack_e8 + (uVar27 - lVar22) + (longlong)param_5._4_4_;
        uVar15 = (uint)plVar28 & 0xf;
        if (((ulonglong)plVar28 & 0xf) != 0) {
          if (((ulonglong)plVar28 & 7) != 0) goto LAB_14012c44c;
          uVar15 = 1;
        }
        if ((int)uVar16 < (int)(uVar15 + 8)) goto LAB_14012c44c;
        lVar25 = (longlong)param_5._4_4_;
        uVar23 = (longlong)(int)uVar16 - (ulonglong)(uVar16 - uVar15 & 7);
        if (uVar15 != 0) {
          uStack_68 = CONCAT44(uStack_68._4_4_,param_2);
          lVar12 = uVar11 + (longlong)(int)(uVar26 * uVar20 + uVar20) * 2;
          lVar24 = 0;
          uStack_130._0_4_ = 0;
          do {
            uStack_130._0_4_ = (uint)uStack_130 + 1;
            plStack_e8[uVar27 + ((lVar25 + lVar24) - lVar22)] = lVar12;
            lVar24 = lVar24 + 1;
            lVar12 = lVar12 + lVar19 * 2;
            iStack_88 = param_4;
          } while ((uint)uStack_130 < uVar15);
        }
        lVar12 = uVar27 * 8 - (lVar22 * 8 + lVar25 * -8);
        uVar4 = uVar20 * 2;
        auVar42 = ZEXT416(uVar4);
        auVar38 = (undefined1  [16])0x0;
        iVar5 = uVar26 * uVar20 + uVar20 + uVar20 * uVar15;
        uVar8 = (ulonglong)uVar15;
        auVar32._4_4_ = iVar5 + uVar20;
        auVar32._0_4_ = iVar5;
        auVar32._8_8_ = 0;
        do {
          auVar39 = pmovsxdq(auVar38,auVar32);
          auVar33._0_4_ = auVar32._0_4_ + uVar4;
          auVar33._4_4_ = auVar32._4_4_ + uVar4;
          auVar33._8_4_ = auVar32._8_4_ + uVar4;
          auVar33._12_4_ = auVar32._12_4_ + uVar4;
          auVar43 = pmovsxdq(auVar42,auVar33);
          auVar34._0_4_ = auVar33._0_4_ + uVar4;
          auVar34._4_4_ = auVar33._4_4_ + uVar4;
          auVar34._8_4_ = auVar33._8_4_ + uVar4;
          auVar34._12_4_ = auVar33._12_4_ + uVar4;
          auVar45 = pmovsxdq(in_XMM5,auVar34);
          auVar35._0_4_ = auVar34._0_4_ + uVar4;
          auVar35._4_4_ = auVar34._4_4_ + uVar4;
          auVar35._8_4_ = auVar34._8_4_ + uVar4;
          auVar35._12_4_ = auVar34._12_4_ + uVar4;
          auVar40._0_8_ = auVar39._0_8_ * 2 + uVar11;
          auVar40._8_8_ = auVar39._8_8_ * 2 + uVar11;
          *(undefined1 (*) [16])(plStack_e8 + uVar27 + ((lVar25 + uVar8) - lVar22)) = auVar40;
          auVar39 = pmovsxdq(auVar40,auVar35);
          auVar42._0_8_ = auVar43._0_8_ * 2 + uVar11;
          auVar42._8_8_ = auVar43._8_8_ * 2 + uVar11;
          in_XMM5._0_8_ = auVar45._0_8_ * 2 + uVar11;
          in_XMM5._8_8_ = auVar45._8_8_ * 2 + uVar11;
          *(undefined1 (*) [16])((longlong)plStack_e8 + uVar8 * 8 + lVar12 + 0x10) = auVar42;
          auVar32._0_4_ = auVar35._0_4_ + uVar4;
          auVar32._4_4_ = auVar35._4_4_ + uVar4;
          auVar32._8_4_ = auVar35._8_4_ + uVar4;
          auVar32._12_4_ = auVar35._12_4_ + uVar4;
          *(undefined1 (*) [16])((longlong)plStack_e8 + uVar8 * 8 + lVar12 + 0x20) = in_XMM5;
          auVar38._0_8_ = auVar39._0_8_ * 2 + uVar11;
          auVar38._8_8_ = auVar39._8_8_ * 2 + uVar11;
          *(undefined1 (*) [16])((longlong)plStack_e8 + uVar8 * 8 + lVar12 + 0x30) = auVar38;
          uVar8 = uVar8 + 8;
        } while (uVar8 < uVar23);
      }
      uVar15 = (uint)uVar23;
      uVar23 = uVar23 & 0xffffffff;
      lVar25 = (longlong)(int)uVar15;
      if (uVar15 < uVar16) {
        lVar12 = uVar11 + (longlong)(int)(uVar20 * uVar15 + uVar26 * uVar20 + uVar20) * 2;
        do {
          uVar20 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar20;
          plStack_e8[(uVar27 - lVar22) + (longlong)param_5._4_4_ + lVar25] = lVar12;
          lVar25 = lVar25 + 1;
          lVar12 = lVar12 + lVar19 * 2;
        } while (uVar20 < uVar16);
      }
    }
    uStack_74 = param_9 - (uVar26 + 1);
    (**(code **)(&UNK_143087408 + (longlong)param_13 * 8))
              (lStack_d0,plStack_e8 + uVar27 + (longlong)(int)uStack_7c,param_12,param_2,iStack_58,
               iStack_78,param_10,param_11);
  }
  if (pcVar2 == FUN_140a755c0) {
    FUN_140a755c0(plStack_e8,lStack_60,param_4,CONCAT44(uStack_7c,iStack_80),lStack_98,uStack_90);
  }
  else {
    FUN_140a76020(plStack_e8,lStack_60,param_4,CONCAT44(uStack_7c,iStack_80),lStack_98,uStack_90);
  }
  return 0;
}


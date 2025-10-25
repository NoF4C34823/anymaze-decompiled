
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140130940(longlong param_1,int param_2,longlong param_3,int param_4,ulonglong param_5,
             ulonglong param_6,uint param_7,undefined8 param_8,int param_9,uint param_10,
             byte param_11,longlong param_12,int param_13,int param_14,longlong param_15,
             undefined8 param_16)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar40 [64];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 in_ZMM4 [64];
  undefined2 uVar48;
  longlong *in_stack_fffffffffffffea8;
  undefined8 uVar49;
  undefined4 uVar50;
  uint uStack_150;
  int iStack_140;
  int iStack_138;
  ushort uStack_118;
  longlong lStack_f0;
  longlong *plStack_e8;
  ulonglong uStack_b8;
  int iStack_a0;
  int iStack_9c;
  longlong lStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  longlong *plStack_78;
  int iStack_70;
  int iStack_68;
  longlong lStack_60;
  int iStack_58;
  int iStack_50;
  uint uStack_48;
  longlong lStack_40;
  
  uVar30 = (uint)param_5 + 7 & 0xfffffff8;
  uStack_48 = param_7;
  iStack_70 = (int)param_7 / 2;
  uVar19 = param_10 & 0xf;
  uVar22 = param_9 / 2;
  iStack_50 = 0;
  lVar25 = (longlong)param_9;
  if (param_5._4_4_ == 0) {
    return 0;
  }
  iStack_68 = param_2;
  lStack_60 = param_3;
  iStack_58 = param_4;
  lStack_40 = param_1;
  iVar9 = FUN_140ac73c0();
  uStack_90 = (uint)((int)(param_5._4_4_ * (uint)param_5) <= iVar9 >> 1);
  FUN_140ac73e0(param_5,uStack_48);
  FUN_140ac7440(param_5,param_9,&iStack_9c);
  lStack_f0 = lStack_40;
  auVar34 = _DAT_143087620;
  auVar45 = _DAT_143087580;
  auVar47 = in_ZMM4._0_16_;
  iVar9 = param_9 * 3 + 0x1e;
  lStack_98 = iStack_a0 + param_12;
  plVar14 = (longlong *)(iStack_9c + lStack_98 + (-(iStack_9c + lStack_98 & 0x1fU) & 0x1f));
  uVar23 = (ulonglong)(int)uVar22;
  uVar17 = (longlong)(plVar14 + iVar9) + (-((ulonglong)(plVar14 + iVar9) & 0x1f) & 0x1f);
  plVar21 = plVar14 + lVar25;
  plStack_e8 = plVar14 + (lVar25 - uVar23);
  uStack_88 = (uint)param_5;
  uStack_80 = (uint)param_5;
  uStack_84 = 0x10;
  uVar10 = param_10 & 0x10;
  plStack_78 = plVar14;
  if (uVar10 == 0) {
    uVar13 = (uint)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
    iVar24 = iStack_50;
    switch(uVar19) {
    case 1:
      if (0 < (int)uVar22) {
        if ((int)uVar22 < 8) {
          uVar13 = 0;
        }
        else {
          if ((int)uVar22 < 0x13) {
            uVar16 = 0;
            uVar13 = uVar22 & 0xfffffff8;
          }
          else {
            in_stack_fffffffffffffea8 = plVar14 + (lVar25 - uVar23);
            uVar16 = (uint)in_stack_fffffffffffffea8 & 0x3f;
            if (((ulonglong)in_stack_fffffffffffffea8 & 7) == 0) {
              if ((((ulonglong)in_stack_fffffffffffffea8 & 0x3f) != 0) &&
                 (uVar16 = 0x40 - uVar16 >> 3, (int)uVar22 < (int)uVar16)) {
                uVar16 = uVar22;
              }
            }
            else {
              uVar16 = 0;
            }
            uVar13 = uVar22 - (uVar22 - uVar16 & 7);
            if (uVar16 != 0) {
              uVar28 = 0;
              auVar36 = vpbroadcastd_avx512vl();
              auVar45 = vpbroadcastq_avx512f();
              auVar35 = _DAT_143087600;
              do {
                vpcmpgtd_avx512vl(auVar36,auVar35);
                auVar35 = vpaddd_avx2(auVar35,auVar34);
                auVar46 = vmovdqu64_avx512f(auVar45);
                *(undefined1 (*) [64])(in_stack_fffffffffffffea8 + uVar28) = auVar46;
                uVar28 = uVar28 + 8;
              } while (uVar28 < (ulonglong)(longlong)(int)uVar16);
              if (uVar22 == uVar16) break;
            }
          }
          if ((int)(uVar16 + 8) <= (int)uVar13) {
            uVar15 = (ulonglong)(int)uVar16;
            auVar45 = vpbroadcastq_avx512f();
            uVar28 = uVar15;
            do {
              uVar16 = (int)uVar15 + 8;
              uVar15 = (ulonglong)uVar16;
              auVar46 = vmovdqu64_avx512f(auVar45);
              *(undefined1 (*) [64])(plVar14 + lVar25 + (uVar28 - uVar23)) = auVar46;
              uVar28 = uVar28 + 8;
            } while (uVar16 < uVar13);
          }
        }
        if (uVar13 + 1 <= uVar22) {
          auVar34 = vpbroadcastd_avx512vl();
          auVar45 = vpbroadcastq_avx512f();
          vpcmpgtd_avx512vl(auVar34,_DAT_143087600);
          auVar45 = vmovdqu64_avx512f(auVar45);
          *(undefined1 (*) [64])(plVar14 + (((int)uVar13 + lVar25) - uVar23)) = auVar45;
        }
      }
      break;
    case 2:
      if (0 < (int)uVar22) {
        in_stack_fffffffffffffea8 = (longlong *)CONCAT44(uVar13,param_10);
        plVar20 = plVar14 + lVar25;
        lVar26 = uVar17 + (longlong)(int)(uVar22 * uVar30 - uVar30) * 2;
        uStack_7c = 1;
        pcVar5 = *(code **)(&UNK_143087660 + (longlong)param_13 * 8);
        uStack_150 = 0;
        iVar24 = param_16._4_4_;
        do {
          iVar24 = iVar24 + -1;
          if (iVar24 < 0) {
            iVar24 = param_16._4_4_ + -1;
          }
          *plVar14 = lVar26;
          plVar20[-1] = lVar26;
          (*pcVar5)(iStack_68 * iVar24 + param_15,plVar14,param_12,iStack_68,iStack_70,uStack_80,
                    param_10,param_11);
          uStack_150 = uStack_150 + 1;
          plVar20 = plVar20 + -1;
          lVar26 = lVar26 + (longlong)(int)-uVar30 * 2;
        } while (uStack_150 < uVar22);
        param_10 = (uint)in_stack_fffffffffffffea8;
        iVar24 = iStack_50;
      }
      break;
    case 3:
      iStack_50 = 1;
    case 4:
      iVar31 = iStack_50 + -1;
      iVar24 = iStack_50;
      if (0 < (int)uVar22) {
        in_stack_fffffffffffffea8 = (longlong *)((ulonglong)uVar13 << 0x20);
        plVar14 = plVar14 + lVar25;
        lVar26 = uVar17 + (longlong)(int)(uVar22 * uVar30 - uVar30) * 2;
        pcVar5 = *(code **)(&UNK_143087660 + (longlong)param_13 * 8);
        uStack_7c = 1;
        uVar13 = 0;
        iStack_140 = 1;
        do {
          iVar31 = iVar31 + iStack_140;
          if ((param_10 & 0x20) == 0) {
            if ((iVar31 == param_5._4_4_) || (iVar31 == -1)) {
              iStack_140 = -iStack_140;
              iVar12 = iStack_140 - iVar24;
              iVar24 = -iVar24;
              iVar31 = iVar31 + iVar12;
            }
            if (param_5._4_4_ == 1) {
              iVar31 = 0;
            }
          }
          *plStack_78 = lVar26;
          plVar14[-1] = lVar26;
          (*pcVar5)(iVar31 * iStack_68 + lStack_40,plStack_78,param_12,iStack_68,iStack_70,uStack_80
                    ,param_10,param_11);
          uVar13 = uVar13 + 1;
          plVar14 = plVar14 + -1;
          lVar26 = lVar26 + (longlong)(int)-uVar30 * 2;
        } while (uVar13 < uVar22);
      }
      break;
    case 6:
      uVar16 = 0;
      if (0 < (int)uStack_48) {
        auVar40 = vpxord_avx512f(in_ZMM4,in_ZMM4);
        auVar46 = auVar40;
        if ((int)uStack_48 < 0x20) {
LAB_140130caa:
          if (uVar16 + 1 <= uStack_48) {
            auVar44 = vpbroadcastd_avx512f();
            uVar28 = 0;
            lVar26 = 0;
            auVar40 = _DAT_1430875c0;
            auVar42 = auVar46;
            do {
              uVar15 = vpcmpgtd_avx512f(auVar44,auVar40);
              uVar28 = uVar28 + 0x10;
              auVar40 = vpaddd_avx512f(auVar40,_DAT_143087580);
              auVar35 = vmovdqu16_avx512vl(*(undefined1 (*) [32])
                                            (lVar26 + param_6 + (longlong)(int)uVar16 * 2));
              auVar34._2_2_ = (ushort)((byte)(uVar15 >> 1) & 1) * auVar35._2_2_;
              auVar34._0_2_ = (ushort)((byte)uVar15 & 1) * auVar35._0_2_;
              auVar34._4_2_ = (ushort)((byte)(uVar15 >> 2) & 1) * auVar35._4_2_;
              auVar34._6_2_ = (ushort)((byte)(uVar15 >> 3) & 1) * auVar35._6_2_;
              auVar34._8_2_ = (ushort)((byte)(uVar15 >> 4) & 1) * auVar35._8_2_;
              auVar34._10_2_ = (ushort)((byte)(uVar15 >> 5) & 1) * auVar35._10_2_;
              auVar34._12_2_ = (ushort)((byte)(uVar15 >> 6) & 1) * auVar35._12_2_;
              auVar34._14_2_ = (ushort)((byte)(uVar15 >> 7) & 1) * auVar35._14_2_;
              bVar7 = (byte)(uVar15 >> 8);
              auVar34._16_2_ = (ushort)(bVar7 & 1) * auVar35._16_2_;
              auVar34._18_2_ = (ushort)((byte)(uVar15 >> 9) & 1) * auVar35._18_2_;
              auVar34._20_2_ = (ushort)((byte)(uVar15 >> 10) & 1) * auVar35._20_2_;
              auVar34._22_2_ = (ushort)((byte)(uVar15 >> 0xb) & 1) * auVar35._22_2_;
              auVar34._24_2_ = (ushort)((byte)(uVar15 >> 0xc) & 1) * auVar35._24_2_;
              auVar34._26_2_ = (ushort)((byte)(uVar15 >> 0xd) & 1) * auVar35._26_2_;
              auVar34._28_2_ = (ushort)((byte)(uVar15 >> 0xe) & 1) * auVar35._28_2_;
              auVar34._30_2_ = (ushort)(byte)(uVar15 >> 0xf) * auVar35._30_2_;
              auVar46 = vpmovsxwd_avx512f(auVar34);
              lVar26 = lVar26 + 0x20;
              auVar41 = vpaddd_avx512f(auVar42,auVar46);
              bVar8 = (bool)((byte)uVar15 & 1);
              auVar46._0_4_ = (uint)bVar8 * auVar41._0_4_ | (uint)!bVar8 * auVar42._0_4_;
              bVar8 = (bool)((byte)(uVar15 >> 1) & 1);
              auVar46._4_4_ = (uint)bVar8 * auVar41._4_4_ | (uint)!bVar8 * auVar42._4_4_;
              bVar8 = (bool)((byte)(uVar15 >> 2) & 1);
              auVar46._8_4_ = (uint)bVar8 * auVar41._8_4_ | (uint)!bVar8 * auVar42._8_4_;
              bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
              auVar46._12_4_ = (uint)bVar8 * auVar41._12_4_ | (uint)!bVar8 * auVar42._12_4_;
              bVar8 = (bool)((byte)(uVar15 >> 4) & 1);
              auVar46._16_4_ = (uint)bVar8 * auVar41._16_4_ | (uint)!bVar8 * auVar42._16_4_;
              bVar8 = (bool)((byte)(uVar15 >> 5) & 1);
              auVar46._20_4_ = (uint)bVar8 * auVar41._20_4_ | (uint)!bVar8 * auVar42._20_4_;
              bVar8 = (bool)((byte)(uVar15 >> 6) & 1);
              auVar46._24_4_ = (uint)bVar8 * auVar41._24_4_ | (uint)!bVar8 * auVar42._24_4_;
              bVar8 = (bool)((byte)(uVar15 >> 7) & 1);
              auVar46._28_4_ = (uint)bVar8 * auVar41._28_4_ | (uint)!bVar8 * auVar42._28_4_;
              bVar8 = (bool)(bVar7 & 1);
              auVar46._32_4_ = (uint)bVar8 * auVar41._32_4_ | (uint)!bVar8 * auVar42._32_4_;
              bVar8 = (bool)((byte)(uVar15 >> 9) & 1);
              auVar46._36_4_ = (uint)bVar8 * auVar41._36_4_ | (uint)!bVar8 * auVar42._36_4_;
              bVar8 = (bool)((byte)(uVar15 >> 10) & 1);
              auVar46._40_4_ = (uint)bVar8 * auVar41._40_4_ | (uint)!bVar8 * auVar42._40_4_;
              bVar8 = (bool)((byte)(uVar15 >> 0xb) & 1);
              auVar46._44_4_ = (uint)bVar8 * auVar41._44_4_ | (uint)!bVar8 * auVar42._44_4_;
              bVar8 = (bool)((byte)(uVar15 >> 0xc) & 1);
              auVar46._48_4_ = (uint)bVar8 * auVar41._48_4_ | (uint)!bVar8 * auVar42._48_4_;
              bVar8 = (bool)((byte)(uVar15 >> 0xd) & 1);
              auVar46._52_4_ = (uint)bVar8 * auVar41._52_4_ | (uint)!bVar8 * auVar42._52_4_;
              bVar8 = (bool)((byte)(uVar15 >> 0xe) & 1);
              auVar46._56_4_ = (uint)bVar8 * auVar41._56_4_ | (uint)!bVar8 * auVar42._56_4_;
              bVar8 = SUB81(uVar15 >> 0xf,0);
              auVar46._60_4_ = (uint)bVar8 * auVar41._60_4_ | (uint)!bVar8 * auVar42._60_4_;
              auVar42 = auVar46;
            } while (uVar28 < (ulonglong)((longlong)(int)uStack_48 - (longlong)(int)uVar16));
          }
        }
        else {
          if ((int)uStack_48 < 0x1d1) {
            uVar11 = 0;
            uVar16 = uStack_48 & 0xffffffe0;
LAB_140130c59:
            if ((int)(uVar11 + 0x20) <= (int)uVar16) {
              uVar28 = (ulonglong)(int)uVar11;
              do {
                auVar42 = vpmovsxwd_avx512f(*(undefined1 (*) [32])(param_6 + uVar28 * 2));
                auVar44 = vpmovsxwd_avx512f(*(undefined1 (*) [32])(param_6 + 0x20 + uVar28 * 2));
                auVar46 = vpaddd_avx512f(auVar46,auVar42);
                auVar40 = vpaddd_avx512f(auVar40,auVar44);
                uVar28 = uVar28 + 0x20;
              } while (uVar28 < (ulonglong)(longlong)(int)uVar16);
              auVar46 = vpaddd_avx512f(auVar46,auVar40);
            }
            goto LAB_140130caa;
          }
          uVar11 = (uint)param_6 & 0x3f;
          if ((param_6 & 1) == 0) {
            if (((param_6 & 0x3f) != 0) &&
               (uVar11 = 0x40 - uVar11 >> 1, (int)uStack_48 < (int)uVar11)) {
              uVar11 = uStack_48;
            }
          }
          else {
            uVar11 = 0;
          }
          uVar16 = uStack_48 - (uStack_48 - uVar11 & 0x1f);
          if (uVar11 == 0) goto LAB_140130c59;
          uVar28 = 0;
          lVar26 = 0;
          auVar41 = vpbroadcastd_avx512f();
          auVar42 = _DAT_1430875c0;
          auVar44 = auVar40;
          do {
            uVar15 = vpcmpgtd_avx512f(auVar41,auVar42);
            uVar28 = uVar28 + 0x10;
            auVar42 = vpaddd_avx512f(auVar42,_DAT_143087580);
            auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar26 + param_6));
            auVar35._2_2_ = (ushort)((byte)(uVar15 >> 1) & 1) * auVar34._2_2_;
            auVar35._0_2_ = (ushort)((byte)uVar15 & 1) * auVar34._0_2_;
            auVar35._4_2_ = (ushort)((byte)(uVar15 >> 2) & 1) * auVar34._4_2_;
            auVar35._6_2_ = (ushort)((byte)(uVar15 >> 3) & 1) * auVar34._6_2_;
            auVar35._8_2_ = (ushort)((byte)(uVar15 >> 4) & 1) * auVar34._8_2_;
            auVar35._10_2_ = (ushort)((byte)(uVar15 >> 5) & 1) * auVar34._10_2_;
            auVar35._12_2_ = (ushort)((byte)(uVar15 >> 6) & 1) * auVar34._12_2_;
            auVar35._14_2_ = (ushort)((byte)(uVar15 >> 7) & 1) * auVar34._14_2_;
            bVar7 = (byte)(uVar15 >> 8);
            auVar35._16_2_ = (ushort)(bVar7 & 1) * auVar34._16_2_;
            auVar35._18_2_ = (ushort)((byte)(uVar15 >> 9) & 1) * auVar34._18_2_;
            auVar35._20_2_ = (ushort)((byte)(uVar15 >> 10) & 1) * auVar34._20_2_;
            auVar35._22_2_ = (ushort)((byte)(uVar15 >> 0xb) & 1) * auVar34._22_2_;
            auVar35._24_2_ = (ushort)((byte)(uVar15 >> 0xc) & 1) * auVar34._24_2_;
            auVar35._26_2_ = (ushort)((byte)(uVar15 >> 0xd) & 1) * auVar34._26_2_;
            auVar35._28_2_ = (ushort)((byte)(uVar15 >> 0xe) & 1) * auVar34._28_2_;
            auVar35._30_2_ = (ushort)(byte)(uVar15 >> 0xf) * auVar34._30_2_;
            auVar46 = vpmovsxwd_avx512f(auVar35);
            lVar26 = lVar26 + 0x20;
            auVar43 = vpaddd_avx512f(auVar44,auVar46);
            bVar8 = (bool)((byte)uVar15 & 1);
            auVar46._0_4_ = (uint)bVar8 * auVar43._0_4_ | (uint)!bVar8 * auVar44._0_4_;
            bVar8 = (bool)((byte)(uVar15 >> 1) & 1);
            auVar46._4_4_ = (uint)bVar8 * auVar43._4_4_ | (uint)!bVar8 * auVar44._4_4_;
            bVar8 = (bool)((byte)(uVar15 >> 2) & 1);
            auVar46._8_4_ = (uint)bVar8 * auVar43._8_4_ | (uint)!bVar8 * auVar44._8_4_;
            bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
            auVar46._12_4_ = (uint)bVar8 * auVar43._12_4_ | (uint)!bVar8 * auVar44._12_4_;
            bVar8 = (bool)((byte)(uVar15 >> 4) & 1);
            auVar46._16_4_ = (uint)bVar8 * auVar43._16_4_ | (uint)!bVar8 * auVar44._16_4_;
            bVar8 = (bool)((byte)(uVar15 >> 5) & 1);
            auVar46._20_4_ = (uint)bVar8 * auVar43._20_4_ | (uint)!bVar8 * auVar44._20_4_;
            bVar8 = (bool)((byte)(uVar15 >> 6) & 1);
            auVar46._24_4_ = (uint)bVar8 * auVar43._24_4_ | (uint)!bVar8 * auVar44._24_4_;
            bVar8 = (bool)((byte)(uVar15 >> 7) & 1);
            auVar46._28_4_ = (uint)bVar8 * auVar43._28_4_ | (uint)!bVar8 * auVar44._28_4_;
            bVar8 = (bool)(bVar7 & 1);
            auVar46._32_4_ = (uint)bVar8 * auVar43._32_4_ | (uint)!bVar8 * auVar44._32_4_;
            bVar8 = (bool)((byte)(uVar15 >> 9) & 1);
            auVar46._36_4_ = (uint)bVar8 * auVar43._36_4_ | (uint)!bVar8 * auVar44._36_4_;
            bVar8 = (bool)((byte)(uVar15 >> 10) & 1);
            auVar46._40_4_ = (uint)bVar8 * auVar43._40_4_ | (uint)!bVar8 * auVar44._40_4_;
            bVar8 = (bool)((byte)(uVar15 >> 0xb) & 1);
            auVar46._44_4_ = (uint)bVar8 * auVar43._44_4_ | (uint)!bVar8 * auVar44._44_4_;
            bVar8 = (bool)((byte)(uVar15 >> 0xc) & 1);
            auVar46._48_4_ = (uint)bVar8 * auVar43._48_4_ | (uint)!bVar8 * auVar44._48_4_;
            bVar8 = (bool)((byte)(uVar15 >> 0xd) & 1);
            auVar46._52_4_ = (uint)bVar8 * auVar43._52_4_ | (uint)!bVar8 * auVar44._52_4_;
            bVar8 = (bool)((byte)(uVar15 >> 0xe) & 1);
            auVar46._56_4_ = (uint)bVar8 * auVar43._56_4_ | (uint)!bVar8 * auVar44._56_4_;
            bVar8 = SUB81(uVar15 >> 0xf,0);
            auVar46._60_4_ = (uint)bVar8 * auVar43._60_4_ | (uint)!bVar8 * auVar44._60_4_;
            auVar44 = auVar46;
          } while (uVar28 < (ulonglong)(longlong)(int)uVar11);
          if (uVar11 != uStack_48) goto LAB_140130c59;
        }
        auVar40 = vshuff32x4_avx512f(auVar46,auVar46,0xee);
        auVar46 = vpaddd_avx512f(auVar40,auVar46);
        auVar40 = vshuff32x4_avx512f(auVar46,auVar46,0x55);
        auVar46 = vpaddd_avx512f(auVar40,auVar46);
        in_ZMM4 = vpshufd_avx512f(auVar46,0x4e);
        auVar46 = vpaddd_avx512f(auVar46,in_ZMM4);
        auVar40 = vpshufd_avx512f(auVar46,0xb1);
        auVar46 = vpaddd_avx512f(auVar46,auVar40);
        uVar16 = auVar46._0_4_;
      }
      iVar31 = uVar16 * param_11;
      if (iVar31 < -0x8000) {
        iVar31 = -0x8000;
      }
      iVar12 = 0x7fff;
      if (iVar31 < 0x7fff) {
        iVar12 = iVar31;
      }
      in_stack_fffffffffffffea8 = (longlong *)CONCAT44(uVar13,iVar12);
      if (0 < (int)(uint)param_5) {
        uVar48 = (undefined2)iVar12;
        if ((int)(uint)param_5 < 0x20) {
          uVar13 = 0;
        }
        else {
          if ((int)(uint)param_5 < 0x4b) {
            uVar28 = 0;
            uVar13 = (uint)param_5 & 0xffffffe0;
          }
          else {
            uVar28 = uVar17 & 0x3f;
            if ((uVar17 & 1) == 0) {
              if (((int)uVar28 != 0) &&
                 (uVar13 = 0x40U - (int)uVar28 >> 1, uVar28 = (ulonglong)uVar13,
                 (int)(uint)param_5 < (int)uVar13)) {
                uVar28 = param_5 & 0xffffffff;
              }
            }
            else {
              uVar28 = 0;
            }
            uVar16 = (uint)uVar28;
            uVar13 = (uint)param_5 - ((uint)param_5 - uVar16 & 0x1f);
            if (uVar16 != 0) {
              uVar15 = 0;
              lVar26 = 0;
              auVar40 = vpbroadcastd_avx512f();
              auVar36._2_2_ = uVar48;
              auVar36._0_2_ = uVar48;
              auVar36._4_2_ = uVar48;
              auVar36._6_2_ = uVar48;
              auVar36._8_2_ = uVar48;
              auVar36._10_2_ = uVar48;
              auVar36._12_2_ = uVar48;
              auVar36._14_2_ = uVar48;
              auVar36._16_2_ = uVar48;
              auVar36._18_2_ = uVar48;
              auVar36._20_2_ = uVar48;
              auVar36._22_2_ = uVar48;
              auVar36._24_2_ = uVar48;
              auVar36._26_2_ = uVar48;
              auVar36._28_2_ = uVar48;
              auVar36._30_2_ = uVar48;
              auVar46 = _DAT_1430875c0;
              do {
                vpcmpgtd_avx512f(auVar40,auVar46);
                uVar15 = uVar15 + 0x10;
                auVar46 = vpaddd_avx512f(auVar46,auVar45);
                auVar34 = vmovdqu16_avx512vl(auVar36);
                *(undefined1 (*) [32])(lVar26 + uVar17) = auVar34;
                lVar26 = lVar26 + 0x20;
              } while (uVar15 < (ulonglong)(longlong)(int)uVar16);
              if (uVar16 == (uint)param_5) goto LAB_140130f40;
            }
          }
          if ((int)uVar28 + 0x20 <= (int)uVar13) {
            auVar45 = vpbroadcastw_avx512bw(ZEXT216(uStack_118));
            lVar26 = (longlong)(int)uVar28;
            do {
              uVar16 = (int)uVar28 + 0x20;
              uVar28 = (ulonglong)uVar16;
              auVar46 = vmovdqu32_avx512f(auVar45);
              *(undefined1 (*) [64])(uVar17 + lVar26 * 2) = auVar46;
              lVar26 = lVar26 + 0x20;
            } while (uVar16 < uVar13);
          }
        }
        auVar45 = _DAT_143087580;
        if (uVar13 + 1 <= (uint)param_5) {
          auVar40 = vpbroadcastd_avx512f();
          uVar28 = 0;
          auVar37._2_2_ = uVar48;
          auVar37._0_2_ = uVar48;
          auVar37._4_2_ = uVar48;
          auVar37._6_2_ = uVar48;
          auVar37._8_2_ = uVar48;
          auVar37._10_2_ = uVar48;
          auVar37._12_2_ = uVar48;
          auVar37._14_2_ = uVar48;
          auVar37._16_2_ = uVar48;
          auVar37._18_2_ = uVar48;
          auVar37._20_2_ = uVar48;
          auVar37._22_2_ = uVar48;
          auVar37._24_2_ = uVar48;
          auVar37._26_2_ = uVar48;
          auVar37._28_2_ = uVar48;
          auVar37._30_2_ = uVar48;
          lVar26 = 0;
          auVar46 = _DAT_1430875c0;
          do {
            vpcmpgtd_avx512f(auVar40,auVar46);
            uVar28 = uVar28 + 0x10;
            auVar46 = vpaddd_avx512f(auVar46,auVar45);
            auVar34 = vmovdqu16_avx512vl(auVar37);
            *(undefined1 (*) [32])(lVar26 + uVar17 + (longlong)(int)uVar13 * 2) = auVar34;
            lVar26 = lVar26 + 0x20;
          } while (uVar28 < (ulonglong)((longlong)(int)(uint)param_5 - (longlong)(int)uVar13));
        }
      }
LAB_140130f40:
      if (0 < (int)uVar22) {
        if ((longlong)uVar23 < 8) {
LAB_140131a11:
          uVar13 = 0;
        }
        else {
          plVar20 = plVar14 + (lVar25 - uVar23);
          if ((longlong)uVar23 < 0x13) {
            uVar28 = 0;
            uVar13 = uVar22 & 0xfffffff8;
          }
          else {
            uVar28 = (ulonglong)plVar20 & 0x3f;
            if (((ulonglong)plVar20 & 7) == 0) {
              if ((int)uVar28 != 0) {
                uVar28 = (ulonglong)(0x40U - (int)uVar28 >> 3);
              }
            }
            else {
              uVar28 = 0;
            }
            iVar31 = (int)uVar28;
            if ((longlong)uVar23 < (longlong)(ulonglong)(iVar31 + 8)) goto LAB_140131a11;
            uVar15 = 0;
            uVar13 = uVar22 - (uVar22 - iVar31 & 7);
            if (iVar31 != 0) {
              do {
                plVar20[uVar15] = uVar17;
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar28);
            }
          }
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar17;
          auVar45 = vpbroadcastq_avx512f(auVar1);
          do {
            auVar46 = vmovdqu64_avx512f(auVar45);
            *(undefined1 (*) [64])(plVar20 + uVar28) = auVar46;
            uVar28 = uVar28 + 8;
          } while (uVar28 < (ulonglong)(longlong)(int)uVar13);
        }
        in_stack_fffffffffffffea8 = (longlong *)0x0;
        if ((ulonglong)(longlong)(int)(uVar13 + 1) <= uVar23) {
          uVar28 = 0;
          do {
            plVar14[(lVar25 + (int)uVar13 + uVar28) - uVar23] = uVar17;
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar23 - (longlong)(int)uVar13);
        }
      }
    }
  }
  else {
    if (0 < (int)uVar22) {
      if ((int)uVar22 < 8) {
        uVar13 = 0;
      }
      else {
        if ((int)uVar22 < 0x2e) {
          auVar34 = vpbroadcastd_avx512vl();
          auVar34 = vpmulld_avx2(auVar34,_DAT_143087640);
          auVar35 = vpbroadcastd_avx512vl();
          uVar13 = uVar22 & 0xfffffff8;
          uVar28 = 0;
        }
        else {
          in_stack_fffffffffffffea8 = plVar14 + (lVar25 - uVar23);
          uVar28 = (ulonglong)in_stack_fffffffffffffea8 & 0x3f;
          if (((ulonglong)in_stack_fffffffffffffea8 & 7) == 0) {
            if (((int)uVar28 != 0) &&
               (uVar13 = 0x40U - (int)uVar28 >> 3, uVar28 = (ulonglong)uVar13,
               (int)uVar22 < (int)uVar13)) {
              uVar28 = (ulonglong)uVar22;
            }
          }
          else {
            uVar28 = 0;
          }
          uVar16 = (uint)uVar28;
          uVar13 = uVar22 - (uVar22 - uVar16 & 7);
          if (uVar16 == 0) {
            auVar34 = vpbroadcastd_avx512vl();
            auVar35 = vpbroadcastd_avx512vl();
            auVar34 = vpmulld_avx2(auVar34,_DAT_143087640);
          }
          else {
            auVar34 = vpbroadcastd_avx512vl();
            uVar15 = 0;
            auVar35 = vpbroadcastd_avx512vl();
            auVar47._8_8_ = 0;
            auVar47._0_8_ = uVar17;
            auVar45 = vpbroadcastq_avx512f(auVar47);
            auVar38 = vmovdqu32_avx512vl(_DAT_143087620);
            auVar34 = vpmulld_avx2(auVar34,_DAT_143087640);
            auVar39 = vpbroadcastd_avx512vl();
            auVar36 = auVar34;
            auVar37 = _DAT_143087600;
            do {
              auVar46 = vpmovsxdq_avx512f(auVar36);
              vpcmpgtd_avx512vl(auVar39,auVar37);
              auVar46 = vpsllq_avx512f(auVar46,1);
              auVar37 = vpaddd_avx512vl(auVar37,auVar38);
              auVar36 = vpaddd_avx2(auVar36,auVar35);
              auVar47 = auVar36._0_16_;
              auVar46 = vpaddq_avx512f(auVar45,auVar46);
              auVar46 = vmovdqu64_avx512f(auVar46);
              *(undefined1 (*) [64])(in_stack_fffffffffffffea8 + uVar15) = auVar46;
              uVar15 = uVar15 + 8;
            } while (uVar15 < (ulonglong)(longlong)(int)uVar16);
            if (uVar22 == uVar16) goto LAB_140132a42;
          }
        }
        auVar36 = vpbroadcastd_avx512vl();
        auVar34 = vpaddd_avx2(auVar34,auVar36);
        if ((int)uVar28 + 8 <= (int)uVar13) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar17;
          auVar45 = vpbroadcastq_avx512f(auVar4);
          lVar26 = (longlong)(int)uVar28;
          do {
            auVar46 = vpmovsxdq_avx512f(auVar34);
            uVar16 = (int)uVar28 + 8;
            uVar28 = (ulonglong)uVar16;
            auVar34 = vpaddd_avx2(auVar34,auVar35);
            auVar46 = vpsllq_avx512f(auVar46,1);
            auVar47 = auVar46._0_16_;
            auVar46 = vpaddq_avx512f(auVar45,auVar46);
            auVar46 = vmovdqu64_avx512f(auVar46);
            *(undefined1 (*) [64])(plVar14 + lVar25 + (lVar26 - uVar23)) = auVar46;
            lVar26 = lVar26 + 8;
          } while (uVar16 < uVar13);
        }
      }
      if (uVar13 + 1 <= uVar22) {
        auVar34 = vpbroadcastd_avx512vl();
        auVar35 = vpbroadcastd_avx512vl();
        auVar36 = vpbroadcastd_avx512vl();
        vpcmpgtd_avx512vl(auVar35,_DAT_143087600);
        auVar34 = vpmulld_avx2(auVar34,_DAT_143087640);
        auVar34 = vpaddd_avx2(auVar34,auVar36);
        auVar45 = vpmovsxdq_avx512f(auVar34);
        auVar47 = auVar45._0_16_;
        auVar46 = vpsllq_avx512f(auVar45,1);
        auVar45._8_8_ = uVar17;
        auVar45._0_8_ = uVar17;
        auVar45._16_8_ = uVar17;
        auVar45._24_8_ = uVar17;
        auVar45._32_8_ = uVar17;
        auVar45._40_8_ = uVar17;
        auVar45._48_8_ = uVar17;
        auVar45._56_8_ = uVar17;
        auVar45 = vpaddq_avx512f(auVar46,auVar45);
        auVar45 = vmovdqu64_avx512f(auVar45);
        *(undefined1 (*) [64])(plVar14 + (((int)uVar13 + lVar25) - uVar23)) = auVar45;
      }
    }
LAB_140132a42:
    in_ZMM4 = ZEXT1664(auVar47);
    uStack_7c = uVar22;
    (**(code **)(&UNK_143087660 + (longlong)param_13 * 8))
              (lStack_40 - (longlong)iStack_68 * uVar23,plStack_e8,param_12,iStack_68,iStack_70,
               (uint)param_5,param_10,param_11);
    iVar24 = iStack_50;
  }
  iStack_50 = iVar24;
  uVar50 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  iVar31 = 0;
  lVar32 = (longlong)(int)uVar30;
  iVar24 = param_9 + 0xf;
  iStack_138 = iVar24 - uVar22;
  lVar26 = lVar25 * 2 * lVar32;
  uStack_b8 = uVar17 + lVar26;
  if (param_9 < iVar9) {
    uVar13 = param_9 * 2 + 0x1e;
    iVar9 = 1;
    uVar16 = uVar13 >> 1;
    if (uVar16 != 0) {
      in_stack_fffffffffffffea8 = plStack_78 + lVar25;
      lVar18 = (lVar25 * 2 + 0x1e) * lVar32;
      uVar15 = lVar26 + (longlong)(int)(uVar30 * iVar24) * 2 + uVar17;
      lVar33 = 0;
      uVar28 = 0;
      do {
        uVar28 = uVar28 + 1;
        if (uVar15 <= uStack_b8) {
          uStack_b8 = uStack_b8 - lVar18;
        }
        *(ulonglong *)(lVar33 + (longlong)in_stack_fffffffffffffea8) = uStack_b8;
        uStack_b8 = uStack_b8 + lVar32 * 2;
        if (uVar15 <= uStack_b8) {
          uStack_b8 = uStack_b8 - lVar18;
        }
        *(ulonglong *)(lVar33 + 8 + (longlong)in_stack_fffffffffffffea8) = uStack_b8;
        lVar33 = lVar33 + 0x10;
        uStack_b8 = uStack_b8 + lVar32 * 2;
      } while (uVar28 < uVar16);
      iVar9 = (int)uVar28 * 2 + 1;
    }
    uVar50 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
    if (iVar9 - 1U < uVar13) {
      if (lVar26 + (longlong)(int)(iVar24 * uVar30) * 2 + uVar17 <= uStack_b8) {
        uStack_b8 = uStack_b8 - (lVar25 * 2 + 0x1e) * lVar32;
      }
      plStack_78[iVar9 + lVar25 + -1] = uStack_b8;
    }
  }
  pcVar5 = *(code **)(&UNK_143087698 + (longlong)param_14 * 8);
  if (0 < param_5._4_4_) {
    lVar26 = lVar25 * 8 + 0x78;
    uVar49 = CONCAT44(uVar50,uStack_84);
    pcVar6 = *(code **)(&UNK_143087660 + (longlong)param_13 * 8);
    lVar27 = (longlong)iStack_68;
    lVar18 = (longlong)iStack_58;
    plStack_78 = plStack_78 + lVar25 * 2 + 0xf;
    lVar33 = lStack_60;
    iVar9 = param_5._4_4_;
    while( true ) {
      uStack_7c = iStack_138;
      if (iVar9 < iStack_138) {
        uStack_84 = uStack_84 - (iStack_138 - iVar9);
        uStack_84 = ~((int)uStack_84 >> 0x1f) & uStack_84;
        uStack_7c = iVar9;
      }
      in_ZMM4 = ZEXT1664(in_ZMM4._0_16_);
      (*pcVar6)(lStack_f0,plVar21,param_12,iStack_68,iStack_70,uStack_80,param_10,param_11);
      if (pcVar5 == FUN_140ac74a0) {
        FUN_140ac74a0(plStack_e8,lVar33,iStack_58,CONCAT44(uStack_84,uStack_88),lStack_98,uStack_90)
        ;
      }
      else {
        FUN_140ac7be0(plStack_e8,lVar33,iStack_58,CONCAT44(uStack_84,uStack_88),lStack_98,uStack_90)
        ;
      }
      uVar50 = (undefined4)((ulonglong)uVar49 >> 0x20);
      plVar21 = plVar21 + (int)uStack_7c;
      lStack_f0 = lStack_f0 + lVar27 * (int)uStack_7c;
      iVar9 = iVar9 - uStack_7c;
      lVar33 = lVar33 + lVar18 * (int)uStack_84;
      plStack_e8 = plStack_e8 + (int)uStack_84;
      if (plStack_78 <= plVar21) {
        plVar21 = (longlong *)((longlong)plVar21 - lVar26);
      }
      if (plStack_78 <= plStack_e8) {
        plStack_e8 = (longlong *)((longlong)plStack_e8 - lVar26);
      }
      iStack_138 = 0x10;
      iVar31 = iVar31 + uStack_84;
      if (iVar9 < 1) break;
      uStack_84 = 0x10;
    }
    iStack_138 = 0x10;
    lStack_60 = lVar33;
  }
  auVar34 = _DAT_143087620;
  auVar45 = _DAT_143087580;
  uStack_84 = param_5._4_4_ - iVar31;
  if ((param_10 & 0x20) != 0) {
    iVar9 = uVar22 + 1;
    if (iVar9 < param_9) {
      uVar19 = (param_9 - (uVar22 + 2)) + 1;
      if ((int)uVar19 < 8) {
        uVar22 = 0;
      }
      else {
        if ((int)uVar19 < 0x2e) {
          auVar34 = vpbroadcastd_avx512vl();
          auVar35 = vpbroadcastd_avx512vl();
          auVar36 = vpmulld_avx512vl(auVar34,_DAT_143087640);
          uVar28 = 0;
          uVar22 = uVar19 & 0xfffffff8;
        }
        else {
          lVar25 = (uVar23 - (longlong)iVar31) + (longlong)param_5._4_4_;
          uVar28 = (ulonglong)(plStack_e8 + lVar25) & 0x3f;
          if (((ulonglong)(plStack_e8 + lVar25) & 7) == 0) {
            if (((int)uVar28 != 0) &&
               (uVar22 = 0x40U - (int)uVar28 >> 3, uVar28 = (ulonglong)uVar22,
               (int)uVar19 < (int)uVar22)) {
              uVar28 = (ulonglong)uVar19;
            }
          }
          else {
            uVar28 = 0;
          }
          uVar30 = (uint)uVar28;
          uVar22 = uVar19 - (uVar19 - uVar30 & 7);
          if (uVar30 == 0) {
            auVar34 = vpbroadcastd_avx512vl();
            auVar35 = vpbroadcastd_avx512vl();
            auVar36 = vpmulld_avx512vl(auVar34,_DAT_143087640);
          }
          else {
            auVar36 = vpbroadcastd_avx512vl();
            uVar15 = 0;
            auVar35 = vpbroadcastd_avx512vl();
            auVar37 = vpbroadcastd_avx512vl();
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar17;
            auVar45 = vpbroadcastq_avx512f(auVar2);
            auVar36 = vpmulld_avx512vl(auVar36,_DAT_143087640);
            auVar38 = vpaddd_avx512vl(auVar36,auVar37);
            auVar39 = vpbroadcastd_avx512vl();
            auVar37 = _DAT_143087600;
            do {
              auVar46 = vpmovsxdq_avx512f(auVar38);
              vpcmpgtd_avx512vl(auVar39,auVar37);
              auVar46 = vpsllq_avx512f(auVar46,1);
              auVar37 = vpaddd_avx2(auVar37,auVar34);
              auVar38 = vpaddd_avx2(auVar38,auVar35);
              auVar46 = vpaddq_avx512f(auVar45,auVar46);
              auVar46 = vmovdqu64_avx512f(auVar46);
              *(undefined1 (*) [64])(plStack_e8 + lVar25 + uVar15) = auVar46;
              uVar15 = uVar15 + 8;
            } while (uVar15 < (ulonglong)(longlong)(int)uVar30);
            if (uVar19 == uVar30) goto LAB_14013276b;
          }
        }
        auVar34 = vpbroadcastd_avx512vl();
        auVar34 = vpaddd_avx512vl(auVar36,auVar34);
        if ((int)uVar28 + 8 <= (int)uVar22) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar17;
          auVar45 = vpbroadcastq_avx512f(auVar3);
          lVar25 = (longlong)(int)uVar28;
          do {
            auVar46 = vpmovsxdq_avx512f(auVar34);
            uVar30 = (int)uVar28 + 8;
            uVar28 = (ulonglong)uVar30;
            auVar34 = vpaddd_avx2(auVar34,auVar35);
            auVar46 = vpsllq_avx512f(auVar46,1);
            auVar46 = vpaddq_avx512f(auVar45,auVar46);
            auVar46 = vmovdqu64_avx512f(auVar46);
            *(undefined1 (*) [64])
             (plStack_e8 + (uVar23 - (longlong)iVar31) + (longlong)param_5._4_4_ + lVar25) = auVar46
            ;
            lVar25 = lVar25 + 8;
          } while (uVar30 < uVar22);
        }
      }
      if (uVar22 + 1 <= uVar19) {
        auVar34 = vpbroadcastd_avx512vl();
        auVar35 = vpbroadcastd_avx512vl();
        auVar36 = vpbroadcastd_avx512vl();
        vpcmpgtd_avx512vl(auVar35,_DAT_143087600);
        auVar34 = vpmulld_avx2(auVar34,_DAT_143087640);
        auVar34 = vpaddd_avx2(auVar34,auVar36);
        auVar45 = vpmovsxdq_avx512f(auVar34);
        auVar45 = vpsllq_avx512f(auVar45,1);
        auVar40._8_8_ = uVar17;
        auVar40._0_8_ = uVar17;
        auVar40._16_8_ = uVar17;
        auVar40._24_8_ = uVar17;
        auVar40._32_8_ = uVar17;
        auVar40._40_8_ = uVar17;
        auVar40._48_8_ = uVar17;
        auVar40._56_8_ = uVar17;
        auVar45 = vpaddq_avx512f(auVar45,auVar40);
        auVar45 = vmovdqu64_avx512f(auVar45);
        *(undefined1 (*) [64])
         (plStack_e8 + (uVar23 - (longlong)iVar31) + (longlong)param_5._4_4_ + (longlong)(int)uVar22
         ) = auVar45;
      }
    }
LAB_14013276b:
    uStack_7c = param_9 - iVar9;
    (**(code **)(&UNK_143087660 + (longlong)param_13 * 8))
              (lStack_f0,plStack_e8 + uVar23 + (longlong)(int)uStack_84,param_12,iStack_68,iStack_70
               ,uStack_80,param_10,param_11,CONCAT44(uVar50,iVar9));
    goto switchD_140131ae0_caseD_5;
  }
  uStack_7c = iStack_138;
  switch(uVar19) {
  case 1:
    if (param_9 <= (int)(uVar22 + 1)) break;
    uVar19 = (param_9 - (uVar22 + 2)) + 1;
    lVar26 = (uVar23 - (longlong)iVar31) + (longlong)param_5._4_4_;
    plVar21 = plStack_e8 + lVar26;
    uVar17 = (ulonglong)(int)uVar19;
    lVar25 = plVar21[-1];
    if ((longlong)uVar17 < 8) {
LAB_1401324ee:
      uVar19 = 0;
    }
    else {
      if ((longlong)uVar17 < 0x13) {
        uVar19 = uVar19 & 0xfffffff8;
        uVar23 = 0;
      }
      else {
        uVar23 = (ulonglong)plVar21 & 0x3f;
        if (((ulonglong)plVar21 & 7) == 0) {
          if ((int)uVar23 != 0) {
            uVar23 = (ulonglong)(0x40U - (int)uVar23 >> 3);
          }
        }
        else {
          uVar23 = 0;
        }
        iVar9 = (int)uVar23;
        if ((longlong)uVar17 < (longlong)(ulonglong)(iVar9 + 8)) goto LAB_1401324ee;
        uVar19 = uVar19 - (uVar19 - iVar9 & 7);
        uVar28 = 0;
        if (iVar9 != 0) {
          do {
            (plStack_e8 + lVar26)[uVar28] = lVar25;
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar23);
        }
      }
      auVar45 = vpbroadcastq_avx512f();
      do {
        auVar46 = vmovdqu64_avx512f(auVar45);
        *(undefined1 (*) [64])(plStack_e8 + lVar26 + uVar23) = auVar46;
        uVar23 = uVar23 + 8;
      } while (uVar23 < (ulonglong)(longlong)(int)uVar19);
    }
    uVar23 = 0;
    if ((ulonglong)(longlong)(int)(uVar19 + 1) <= uVar17) {
      do {
        plStack_e8[lVar26 + (int)uVar19 + uVar23] = lVar25;
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar17 - (longlong)(int)uVar19);
    }
    break;
  case 2:
    iVar9 = 0;
    if ((int)(uVar22 + 1) < param_9) {
      uVar28 = 0;
      pcVar6 = *(code **)(&UNK_143087660 + (longlong)param_13 * 8);
      uStack_7c = 1;
      do {
        lVar26 = (longlong)(int)uStack_84 + uVar23 + uVar28;
        if (param_16._4_4_ <= iVar9) {
          iVar9 = 0;
        }
        plStack_e8[lVar26] =
             uVar17 + (longlong)(int)((int)uVar28 * uVar30 + uVar22 * uVar30 + uVar30) * 2;
        (*pcVar6)(iStack_68 * iVar9 + param_15,plStack_e8 + lVar26,param_12,iStack_68,iStack_70,
                  uStack_80,param_10,param_11);
        uVar28 = uVar28 + 1;
        iVar9 = iVar9 + 1;
      } while (uVar28 < (lVar25 - uVar23) - 1);
    }
    break;
  case 3:
    iStack_50 = -1;
  case 4:
    iVar9 = param_5._4_4_ + iStack_50;
    if ((int)(uVar22 + 1) < param_9) {
      uVar28 = 0;
      pcVar6 = *(code **)(&UNK_143087660 + (longlong)param_13 * 8);
      uStack_7c = 1;
      iVar31 = -1;
      iVar24 = iStack_50;
      do {
        iVar9 = iVar9 + iVar31;
        if (uVar10 == 0) {
          if ((iVar9 == param_5._4_4_) || (iVar9 == -1)) {
            iVar31 = -iVar31;
            iVar12 = iVar31 - iVar24;
            iVar24 = -iVar24;
            iVar9 = iVar9 + iVar12;
          }
          if (param_5._4_4_ == 1) {
            iVar9 = 0;
          }
        }
        lVar26 = (longlong)(int)uStack_84 + uVar23 + uVar28;
        plStack_e8[lVar26] =
             uVar17 + (longlong)(int)((int)uVar28 * uVar30 + uVar22 * uVar30 + uVar30) * 2;
        (*pcVar6)(iStack_68 * iVar9 + lStack_40,plStack_e8 + lVar26,param_12,iStack_68,iStack_70,
                  uStack_80,param_10,param_11);
        uVar28 = uVar28 + 1;
      } while (uVar28 < (lVar25 - uVar23) - 1);
    }
    break;
  case 6:
    uVar19 = 0;
    if (0 < (int)uStack_48) {
      auVar46 = vpxord_avx512f(in_ZMM4,in_ZMM4);
      auVar42 = auVar46;
      if ((int)uStack_48 < 0x20) {
        uVar30 = 0;
LAB_140131c2a:
        if (uVar30 + 1 <= uStack_48) {
          uVar28 = 0;
          auVar44 = vpbroadcastd_avx512f();
          lVar25 = 0;
          auVar46 = auVar42;
          auVar40 = _DAT_1430875c0;
          do {
            uVar15 = vpcmpgtd_avx512f(auVar44,auVar40);
            uVar28 = uVar28 + 0x10;
            auVar40 = vpaddd_avx512f(auVar40,_DAT_143087580);
            auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])
                                          (lVar25 + param_6 + (longlong)(int)uVar30 * 2));
            auVar39._2_2_ = (ushort)((byte)(uVar15 >> 1) & 1) * auVar34._2_2_;
            auVar39._0_2_ = (ushort)((byte)uVar15 & 1) * auVar34._0_2_;
            auVar39._4_2_ = (ushort)((byte)(uVar15 >> 2) & 1) * auVar34._4_2_;
            auVar39._6_2_ = (ushort)((byte)(uVar15 >> 3) & 1) * auVar34._6_2_;
            auVar39._8_2_ = (ushort)((byte)(uVar15 >> 4) & 1) * auVar34._8_2_;
            auVar39._10_2_ = (ushort)((byte)(uVar15 >> 5) & 1) * auVar34._10_2_;
            auVar39._12_2_ = (ushort)((byte)(uVar15 >> 6) & 1) * auVar34._12_2_;
            auVar39._14_2_ = (ushort)((byte)(uVar15 >> 7) & 1) * auVar34._14_2_;
            bVar7 = (byte)(uVar15 >> 8);
            auVar39._16_2_ = (ushort)(bVar7 & 1) * auVar34._16_2_;
            auVar39._18_2_ = (ushort)((byte)(uVar15 >> 9) & 1) * auVar34._18_2_;
            auVar39._20_2_ = (ushort)((byte)(uVar15 >> 10) & 1) * auVar34._20_2_;
            auVar39._22_2_ = (ushort)((byte)(uVar15 >> 0xb) & 1) * auVar34._22_2_;
            auVar39._24_2_ = (ushort)((byte)(uVar15 >> 0xc) & 1) * auVar34._24_2_;
            auVar39._26_2_ = (ushort)((byte)(uVar15 >> 0xd) & 1) * auVar34._26_2_;
            auVar39._28_2_ = (ushort)((byte)(uVar15 >> 0xe) & 1) * auVar34._28_2_;
            auVar39._30_2_ = (ushort)(byte)(uVar15 >> 0xf) * auVar34._30_2_;
            auVar42 = vpmovsxwd_avx512f(auVar39);
            lVar25 = lVar25 + 0x20;
            auVar41 = vpaddd_avx512f(auVar46,auVar42);
            bVar8 = (bool)((byte)uVar15 & 1);
            auVar42._0_4_ = (uint)bVar8 * auVar41._0_4_ | (uint)!bVar8 * auVar46._0_4_;
            bVar8 = (bool)((byte)(uVar15 >> 1) & 1);
            auVar42._4_4_ = (uint)bVar8 * auVar41._4_4_ | (uint)!bVar8 * auVar46._4_4_;
            bVar8 = (bool)((byte)(uVar15 >> 2) & 1);
            auVar42._8_4_ = (uint)bVar8 * auVar41._8_4_ | (uint)!bVar8 * auVar46._8_4_;
            bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
            auVar42._12_4_ = (uint)bVar8 * auVar41._12_4_ | (uint)!bVar8 * auVar46._12_4_;
            bVar8 = (bool)((byte)(uVar15 >> 4) & 1);
            auVar42._16_4_ = (uint)bVar8 * auVar41._16_4_ | (uint)!bVar8 * auVar46._16_4_;
            bVar8 = (bool)((byte)(uVar15 >> 5) & 1);
            auVar42._20_4_ = (uint)bVar8 * auVar41._20_4_ | (uint)!bVar8 * auVar46._20_4_;
            bVar8 = (bool)((byte)(uVar15 >> 6) & 1);
            auVar42._24_4_ = (uint)bVar8 * auVar41._24_4_ | (uint)!bVar8 * auVar46._24_4_;
            bVar8 = (bool)((byte)(uVar15 >> 7) & 1);
            auVar42._28_4_ = (uint)bVar8 * auVar41._28_4_ | (uint)!bVar8 * auVar46._28_4_;
            bVar8 = (bool)(bVar7 & 1);
            auVar42._32_4_ = (uint)bVar8 * auVar41._32_4_ | (uint)!bVar8 * auVar46._32_4_;
            bVar8 = (bool)((byte)(uVar15 >> 9) & 1);
            auVar42._36_4_ = (uint)bVar8 * auVar41._36_4_ | (uint)!bVar8 * auVar46._36_4_;
            bVar8 = (bool)((byte)(uVar15 >> 10) & 1);
            auVar42._40_4_ = (uint)bVar8 * auVar41._40_4_ | (uint)!bVar8 * auVar46._40_4_;
            bVar8 = (bool)((byte)(uVar15 >> 0xb) & 1);
            auVar42._44_4_ = (uint)bVar8 * auVar41._44_4_ | (uint)!bVar8 * auVar46._44_4_;
            bVar8 = (bool)((byte)(uVar15 >> 0xc) & 1);
            auVar42._48_4_ = (uint)bVar8 * auVar41._48_4_ | (uint)!bVar8 * auVar46._48_4_;
            bVar8 = (bool)((byte)(uVar15 >> 0xd) & 1);
            auVar42._52_4_ = (uint)bVar8 * auVar41._52_4_ | (uint)!bVar8 * auVar46._52_4_;
            bVar8 = (bool)((byte)(uVar15 >> 0xe) & 1);
            auVar42._56_4_ = (uint)bVar8 * auVar41._56_4_ | (uint)!bVar8 * auVar46._56_4_;
            bVar8 = SUB81(uVar15 >> 0xf,0);
            auVar42._60_4_ = (uint)bVar8 * auVar41._60_4_ | (uint)!bVar8 * auVar46._60_4_;
            auVar46 = auVar42;
          } while (uVar28 < (ulonglong)((longlong)(int)uStack_48 - (longlong)(int)uVar30));
        }
      }
      else {
        if ((int)uStack_48 < 0x1d1) {
          uVar30 = uStack_48 & 0xffffffe0;
LAB_140131bda:
          if ((int)(uVar19 + 0x20) <= (int)uVar30) {
            uVar28 = (ulonglong)(int)uVar19;
            do {
              auVar40 = vpmovsxwd_avx512f(*(undefined1 (*) [32])(param_6 + uVar28 * 2));
              auVar44 = vpmovsxwd_avx512f(*(undefined1 (*) [32])(param_6 + 0x20 + uVar28 * 2));
              auVar42 = vpaddd_avx512f(auVar42,auVar40);
              auVar46 = vpaddd_avx512f(auVar46,auVar44);
              uVar28 = uVar28 + 0x20;
            } while (uVar28 < (ulonglong)(longlong)(int)uVar30);
            auVar42 = vpaddd_avx512f(auVar42,auVar46);
          }
          goto LAB_140131c2a;
        }
        uVar19 = (uint)param_6 & 0x3f;
        if ((param_6 & 1) == 0) {
          if (((param_6 & 0x3f) != 0) && (uVar19 = 0x40 - uVar19 >> 1, (int)uStack_48 < (int)uVar19)
             ) {
            uVar19 = uStack_48;
          }
        }
        else {
          uVar19 = 0;
        }
        uVar30 = uStack_48 - (uStack_48 - uVar19 & 0x1f);
        if (uVar19 == 0) goto LAB_140131bda;
        uVar28 = 0;
        lVar25 = 0;
        auVar41 = vpbroadcastd_avx512f();
        auVar40 = auVar46;
        auVar44 = _DAT_1430875c0;
        do {
          uVar15 = vpcmpgtd_avx512f(auVar41,auVar44);
          uVar28 = uVar28 + 0x10;
          auVar44 = vpaddd_avx512f(auVar44,_DAT_143087580);
          auVar34 = vmovdqu16_avx512vl(*(undefined1 (*) [32])(lVar25 + param_6));
          auVar38._2_2_ = (ushort)((byte)(uVar15 >> 1) & 1) * auVar34._2_2_;
          auVar38._0_2_ = (ushort)((byte)uVar15 & 1) * auVar34._0_2_;
          auVar38._4_2_ = (ushort)((byte)(uVar15 >> 2) & 1) * auVar34._4_2_;
          auVar38._6_2_ = (ushort)((byte)(uVar15 >> 3) & 1) * auVar34._6_2_;
          auVar38._8_2_ = (ushort)((byte)(uVar15 >> 4) & 1) * auVar34._8_2_;
          auVar38._10_2_ = (ushort)((byte)(uVar15 >> 5) & 1) * auVar34._10_2_;
          auVar38._12_2_ = (ushort)((byte)(uVar15 >> 6) & 1) * auVar34._12_2_;
          auVar38._14_2_ = (ushort)((byte)(uVar15 >> 7) & 1) * auVar34._14_2_;
          bVar7 = (byte)(uVar15 >> 8);
          auVar38._16_2_ = (ushort)(bVar7 & 1) * auVar34._16_2_;
          auVar38._18_2_ = (ushort)((byte)(uVar15 >> 9) & 1) * auVar34._18_2_;
          auVar38._20_2_ = (ushort)((byte)(uVar15 >> 10) & 1) * auVar34._20_2_;
          auVar38._22_2_ = (ushort)((byte)(uVar15 >> 0xb) & 1) * auVar34._22_2_;
          auVar38._24_2_ = (ushort)((byte)(uVar15 >> 0xc) & 1) * auVar34._24_2_;
          auVar38._26_2_ = (ushort)((byte)(uVar15 >> 0xd) & 1) * auVar34._26_2_;
          auVar38._28_2_ = (ushort)((byte)(uVar15 >> 0xe) & 1) * auVar34._28_2_;
          auVar38._30_2_ = (ushort)(byte)(uVar15 >> 0xf) * auVar34._30_2_;
          auVar42 = vpmovsxwd_avx512f(auVar38);
          lVar25 = lVar25 + 0x20;
          auVar43 = vpaddd_avx512f(auVar40,auVar42);
          bVar8 = (bool)((byte)uVar15 & 1);
          auVar42._0_4_ = (uint)bVar8 * auVar43._0_4_ | (uint)!bVar8 * auVar40._0_4_;
          bVar8 = (bool)((byte)(uVar15 >> 1) & 1);
          auVar42._4_4_ = (uint)bVar8 * auVar43._4_4_ | (uint)!bVar8 * auVar40._4_4_;
          bVar8 = (bool)((byte)(uVar15 >> 2) & 1);
          auVar42._8_4_ = (uint)bVar8 * auVar43._8_4_ | (uint)!bVar8 * auVar40._8_4_;
          bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
          auVar42._12_4_ = (uint)bVar8 * auVar43._12_4_ | (uint)!bVar8 * auVar40._12_4_;
          bVar8 = (bool)((byte)(uVar15 >> 4) & 1);
          auVar42._16_4_ = (uint)bVar8 * auVar43._16_4_ | (uint)!bVar8 * auVar40._16_4_;
          bVar8 = (bool)((byte)(uVar15 >> 5) & 1);
          auVar42._20_4_ = (uint)bVar8 * auVar43._20_4_ | (uint)!bVar8 * auVar40._20_4_;
          bVar8 = (bool)((byte)(uVar15 >> 6) & 1);
          auVar42._24_4_ = (uint)bVar8 * auVar43._24_4_ | (uint)!bVar8 * auVar40._24_4_;
          bVar8 = (bool)((byte)(uVar15 >> 7) & 1);
          auVar42._28_4_ = (uint)bVar8 * auVar43._28_4_ | (uint)!bVar8 * auVar40._28_4_;
          bVar8 = (bool)(bVar7 & 1);
          auVar42._32_4_ = (uint)bVar8 * auVar43._32_4_ | (uint)!bVar8 * auVar40._32_4_;
          bVar8 = (bool)((byte)(uVar15 >> 9) & 1);
          auVar42._36_4_ = (uint)bVar8 * auVar43._36_4_ | (uint)!bVar8 * auVar40._36_4_;
          bVar8 = (bool)((byte)(uVar15 >> 10) & 1);
          auVar42._40_4_ = (uint)bVar8 * auVar43._40_4_ | (uint)!bVar8 * auVar40._40_4_;
          bVar8 = (bool)((byte)(uVar15 >> 0xb) & 1);
          auVar42._44_4_ = (uint)bVar8 * auVar43._44_4_ | (uint)!bVar8 * auVar40._44_4_;
          bVar8 = (bool)((byte)(uVar15 >> 0xc) & 1);
          auVar42._48_4_ = (uint)bVar8 * auVar43._48_4_ | (uint)!bVar8 * auVar40._48_4_;
          bVar8 = (bool)((byte)(uVar15 >> 0xd) & 1);
          auVar42._52_4_ = (uint)bVar8 * auVar43._52_4_ | (uint)!bVar8 * auVar40._52_4_;
          bVar8 = (bool)((byte)(uVar15 >> 0xe) & 1);
          auVar42._56_4_ = (uint)bVar8 * auVar43._56_4_ | (uint)!bVar8 * auVar40._56_4_;
          bVar8 = SUB81(uVar15 >> 0xf,0);
          auVar42._60_4_ = (uint)bVar8 * auVar43._60_4_ | (uint)!bVar8 * auVar40._60_4_;
          auVar40 = auVar42;
        } while (uVar28 < (ulonglong)(longlong)(int)uVar19);
        if (uVar19 != uStack_48) goto LAB_140131bda;
      }
      auVar46 = vshuff32x4_avx512f(auVar42,auVar42,0xee);
      auVar46 = vpaddd_avx512f(auVar46,auVar42);
      auVar40 = vshuff32x4_avx512f(auVar46,auVar46,0x55);
      auVar46 = vpaddd_avx512f(auVar40,auVar46);
      auVar40 = vpshufd_avx512f(auVar46,0x4e);
      auVar46 = vpaddd_avx512f(auVar46,auVar40);
      auVar40 = vpshufd_avx512f(auVar46,0xb1);
      vpaddd_avx512f(auVar46,auVar40);
    }
    if (0 < (int)(uint)param_5) {
      if ((int)(uint)param_5 < 0x20) {
        uVar19 = 0;
      }
      else {
        if ((int)(uint)param_5 < 0x4b) {
          uVar28 = 0;
          uVar19 = (uint)param_5 & 0xffffffe0;
        }
        else {
          uVar15 = uVar23 * 2 * lVar32 + uVar17;
          uVar28 = uVar15 & 0x3f;
          if ((uVar15 & 1) == 0) {
            if (((int)uVar28 != 0) &&
               (uVar19 = 0x40U - (int)uVar28 >> 1, uVar28 = (ulonglong)uVar19,
               (int)(uint)param_5 < (int)uVar19)) {
              uVar28 = param_5 & 0xffffffff;
            }
          }
          else {
            uVar28 = 0;
          }
          uVar30 = (uint)uVar28;
          uVar19 = (uint)param_5 - ((uint)param_5 - uVar30 & 0x1f);
          if (uVar30 != 0) {
            uVar29 = 0;
            lVar25 = 0;
            auVar40 = vpbroadcastd_avx512f();
            auVar34 = vpbroadcastw_avx512vl();
            auVar46 = _DAT_1430875c0;
            do {
              vpcmpgtd_avx512f(auVar40,auVar46);
              uVar29 = uVar29 + 0x10;
              auVar46 = vpaddd_avx512f(auVar46,auVar45);
              auVar35 = vmovdqu16_avx512vl(auVar34);
              *(undefined1 (*) [32])(lVar25 + uVar15) = auVar35;
              lVar25 = lVar25 + 0x20;
            } while (uVar29 < (ulonglong)(longlong)(int)uVar30);
            if ((uint)param_5 == uVar30) goto LAB_140131ea0;
          }
        }
        if ((int)uVar28 + 0x20 <= (int)uVar19) {
          auVar45 = vpbroadcastw_avx512bw();
          lVar25 = (longlong)(int)uVar28;
          do {
            uVar30 = (int)uVar28 + 0x20;
            uVar28 = (ulonglong)uVar30;
            auVar46 = vmovdqu32_avx512f(auVar45);
            *(undefined1 (*) [64])(uVar23 * 2 * lVar32 + uVar17 + lVar25 * 2) = auVar46;
            lVar25 = lVar25 + 0x20;
          } while (uVar30 < uVar19);
        }
      }
      auVar45 = _DAT_143087580;
      if (uVar19 + 1 <= (uint)param_5) {
        uVar28 = 0;
        auVar34 = vpbroadcastw_avx512vl();
        auVar40 = vpbroadcastd_avx512f();
        lVar25 = 0;
        auVar46 = _DAT_1430875c0;
        do {
          vpcmpgtd_avx512f(auVar40,auVar46);
          uVar28 = uVar28 + 0x10;
          auVar46 = vpaddd_avx512f(auVar46,auVar45);
          auVar35 = vmovdqu16_avx512vl(auVar34);
          *(undefined1 (*) [32])(lVar25 + uVar17 + (lVar32 * uVar23 + (longlong)(int)uVar19) * 2) =
               auVar35;
          lVar25 = lVar25 + 0x20;
        } while (uVar28 < (ulonglong)((longlong)(int)(uint)param_5 - (longlong)(int)uVar19));
      }
    }
LAB_140131ea0:
    auVar34 = _DAT_143087620;
    if ((int)(uVar22 + 1) < param_9) {
      uVar19 = (param_9 - (uVar22 + 2)) + 1;
      if ((int)uVar19 < 8) {
        uVar22 = 0;
      }
      else {
        if ((int)uVar19 < 0x13) {
          uVar17 = 0;
          uVar22 = uVar19 & 0xfffffff8;
        }
        else {
          lVar25 = (uVar23 - (longlong)iVar31) + (longlong)param_5._4_4_;
          uVar17 = (ulonglong)(plStack_e8 + lVar25) & 0x3f;
          if (((ulonglong)(plStack_e8 + lVar25) & 7) == 0) {
            if (((int)uVar17 != 0) &&
               (uVar22 = 0x40U - (int)uVar17 >> 3, uVar17 = (ulonglong)uVar22,
               (int)uVar19 < (int)uVar22)) {
              uVar17 = (ulonglong)uVar19;
            }
          }
          else {
            uVar17 = 0;
          }
          uVar30 = (uint)uVar17;
          uVar22 = uVar19 - (uVar19 - uVar30 & 7);
          if (uVar30 != 0) {
            auVar36 = vpbroadcastd_avx512vl();
            auVar45 = vpbroadcastq_avx512f();
            uVar28 = 0;
            auVar35 = _DAT_143087600;
            do {
              vpcmpgtd_avx512vl(auVar36,auVar35);
              auVar35 = vpaddd_avx2(auVar35,auVar34);
              auVar46 = vmovdqu64_avx512f(auVar45);
              *(undefined1 (*) [64])(plStack_e8 + lVar25 + uVar28) = auVar46;
              uVar28 = uVar28 + 8;
            } while (uVar28 < (ulonglong)(longlong)(int)uVar30);
            if (uVar19 == uVar30) break;
          }
        }
        if ((int)uVar17 + 8 <= (int)uVar22) {
          lVar25 = (longlong)(int)uVar17;
          auVar45 = vpbroadcastq_avx512f();
          do {
            uVar30 = (int)uVar17 + 8;
            uVar17 = (ulonglong)uVar30;
            auVar46 = vmovdqu64_avx512f(auVar45);
            *(undefined1 (*) [64])
             (plStack_e8 + (uVar23 - (longlong)iVar31) + (longlong)param_5._4_4_ + lVar25) = auVar46
            ;
            lVar25 = lVar25 + 8;
          } while (uVar30 < uVar22);
        }
      }
      if (uVar22 + 1 <= uVar19) {
        auVar34 = vpbroadcastd_avx512vl();
        vpcmpgtd_avx512vl(auVar34,_DAT_143087600);
        auVar45 = vpbroadcastq_avx512f();
        auVar45 = vmovdqu64_avx512f(auVar45);
        *(undefined1 (*) [64])
         (plStack_e8 + (uVar23 - (longlong)iVar31) + (longlong)param_5._4_4_ + (longlong)(int)uVar22
         ) = auVar45;
      }
    }
  }
switchD_140131ae0_caseD_5:
  if (pcVar5 == FUN_140ac74a0) {
    FUN_140ac74a0(plStack_e8,lStack_60,iStack_58,CONCAT44(uStack_84,uStack_88),lStack_98,uStack_90);
  }
  else {
    FUN_140ac7be0(plStack_e8,lStack_60,iStack_58,CONCAT44(uStack_84,uStack_88),lStack_98,uStack_90);
  }
  return 0;
}


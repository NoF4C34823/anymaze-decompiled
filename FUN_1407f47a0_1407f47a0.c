
uint * FUN_1407f47a0(longlong param_1,longlong param_2,uint *param_3,longlong param_4,
                    longlong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                    int param_10,undefined8 param_11)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  undefined1 auVar33 [32];
  undefined1 in_ZMM8 [64];
  longlong *in_stack_fffffffffffffe98;
  undefined4 uVar34;
  longlong lStack_128;
  uint *puStack_120;
  uint *puStack_118;
  uint uStack_110;
  undefined1 auStack_f8 [16];
  int iStack_c8;
  uint uStack_c0;
  uint *puStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  longlong *plStack_a0;
  uint uStack_98;
  uint uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 uStack_68;
  uint *puStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  
  uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  lVar9 = 0;
  uVar13 = 0;
  lVar22 = 0;
  iStack_70 = param_10;
  uVar10 = param_7 & 0x10;
  param_10 = param_10 >> 1;
  puStack_60 = (uint *)(longlong)param_6;
  uStack_68 = param_9;
  uStack_78 = param_11;
  puStack_b8 = param_3;
  lStack_58 = param_1;
  lStack_50 = param_2;
  lStack_48 = param_4;
  if (0 < param_10) {
    uStack_40 = (ulonglong)param_10;
    uStack_90 = param_7 & 0xf0;
    param_3 = (uint *)(param_4 * uStack_40 + (longlong)param_3);
    uStack_98 = param_7 & 0xf;
    uStack_110 = param_7 & 0x20;
    auStack_f8 = in_ZMM8._0_16_;
    iStack_c8 = param_10;
    uStack_c0 = uVar10;
    if (uStack_90 == 0xf0) {
      lStack_128 = 0;
      puStack_118 = param_8;
      uStack_a8 = param_7;
      lVar22 = lStack_128;
      puVar6 = param_3;
      puVar11 = puStack_118;
      uVar10 = uStack_a8;
      goto LAB_1407f4f24;
    }
    uVar13 = 0;
    puVar6 = param_3;
LAB_1407f48c8:
    uVar17 = uVar13;
    if ((param_5[1] <= (longlong)uVar13) && (param_7 != 0xf0)) {
      if (uStack_98 == 6) {
        if (uStack_110 == 0) goto LAB_1407f49fd;
      }
      else {
        if (uStack_98 != 1) goto LAB_1407f490b;
        if (uStack_110 == 0) {
          uVar17 = param_5[1] - 1;
        }
      }
    }
LAB_1407f499a:
    in_stack_fffffffffffffe98 = &lStack_88;
    lStack_88 = *param_5;
    lStack_80 = param_5[1];
    FUN_1407f5a60(lStack_58,lStack_50,uVar17,param_3,in_stack_fffffffffffffe98,(int)puStack_60,
                  param_7,param_8,uStack_68,iStack_70,uStack_78);
LAB_1407f4de0:
    do {
      while( true ) {
        uVar3 = uStack_78;
        uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
        iVar12 = (int)uVar13;
        uVar13 = uVar13 + 1;
        lVar22 = lVar22 + lStack_48;
        lVar9 = (longlong)iVar12 + 1;
        if (uStack_40 <= uVar13) {
          param_10 = iStack_c8;
          uVar10 = uStack_98;
          if (uStack_c0 != 0) {
            lVar22 = 0;
            lVar9 = -uStack_40;
            puVar6 = puStack_b8;
            do {
              lStack_128 = *param_5;
              puStack_120 = (uint *)param_5[1];
              puVar11 = (uint *)FUN_1407f5a60(lStack_58,lStack_50,lVar9,puVar6,&lStack_128,
                                              (int)puStack_60,param_7,param_8,uStack_68,iStack_70,
                                              uVar3);
              lVar22 = lVar22 + 1;
              lVar9 = lVar9 + 1;
              puVar6 = (uint *)((longlong)puVar6 + lStack_48);
            } while (lVar22 < (longlong)uStack_40);
            return puVar11;
          }
          goto LAB_1407f4fbd;
        }
        param_3 = (uint *)((longlong)puVar6 + lVar22);
        puVar11 = param_8;
        uVar10 = param_7;
        if (uStack_90 != 0xf0) break;
LAB_1407f4f24:
        uStack_a8 = uVar10;
        puStack_118 = puVar11;
        puStack_120 = puVar6;
        lStack_128 = lVar22;
        in_stack_fffffffffffffe98 = (longlong *)CONCAT44(uVar34,iStack_70);
        (*(code *)(&PTR_FUN_14308c620)[(longlong)puStack_60])
                  (lStack_50 * uVar13 + lStack_58,param_3,*param_5,uStack_68,
                   in_stack_fffffffffffffe98);
        param_8 = puStack_118;
        puVar6 = puStack_120;
        lVar22 = lStack_128;
        param_7 = uStack_a8;
      }
      if (-1 < (longlong)uVar13) goto LAB_1407f48c8;
      uVar17 = uVar13;
      if (param_7 == 0xf0) goto LAB_1407f499a;
      if (uStack_98 != 6) {
        if (uStack_98 != 1) goto LAB_1407f490b;
        uVar17 = 0;
        if (uStack_c0 != 0) {
          uVar17 = uVar13;
        }
        goto LAB_1407f499a;
      }
      if (uStack_c0 != 0) goto LAB_1407f499a;
LAB_1407f49fd:
    } while (*param_5 * 3 < 1);
    uVar18 = *param_5 * 3 + 2;
    uVar17 = (longlong)uVar18 / 3;
    if (6 < (longlong)uVar17) {
      puVar11 = (uint *)(lStack_48 * lVar9 + (longlong)puVar6);
      lVar19 = (longlong)param_8 + (4 - (longlong)puVar11);
      if ((((longlong)(uVar17 * 0xc) <= lVar19) || (7 < -lVar19)) &&
         ((3 < (longlong)puVar11 - (longlong)param_8 ||
          ((longlong)(uVar17 * 0xc) <= -((longlong)puVar11 - (longlong)param_8))))) {
        uVar10 = *param_8;
        uVar1 = param_8[1];
        uVar2 = param_8[2];
        if ((longlong)uVar17 < 0x10) {
          uVar18 = 0;
        }
        else {
          auVar23 = vshufps_avx(ZEXT416(uVar10),ZEXT416(uVar10),0);
          auVar26 = vshufps_avx(ZEXT416(uVar1),ZEXT416(uVar1),0);
          uVar18 = uVar17 & 0xfffffffffffffff0;
          auVar30 = vshufps_avx(ZEXT416(uVar2),ZEXT416(uVar2),0);
          uVar7 = 0;
          auVar25._16_16_ = auVar23;
          auVar25._0_16_ = auVar23;
          auVar33._16_16_ = auVar26;
          auVar33._0_16_ = auVar26;
          auVar29 = vunpcklps_avx(auVar25,auVar33);
          auVar25 = vunpckhps_avx(auVar25,auVar33);
          puVar5 = puVar11;
          do {
            uVar7 = uVar7 + 0x10;
            puVar5[0x18] = auVar23._0_4_;
            uVar4 = vextractps_avx(auVar23,1);
            puVar5[0x1b] = uVar4;
            uVar4 = vextractps_avx(auVar23,2);
            puVar5[0x1e] = uVar4;
            uVar4 = vextractps_avx(auVar23,3);
            puVar5[0x21] = uVar4;
            puVar5[0x24] = auVar23._0_4_;
            uVar4 = vextractps_avx(auVar23,1);
            puVar5[0x27] = uVar4;
            uVar4 = vextractps_avx(auVar23,2);
            puVar5[0x2a] = uVar4;
            uVar4 = vextractps_avx(auVar23,3);
            puVar5[0x2d] = uVar4;
            puVar5[0x19] = auVar26._0_4_;
            uVar4 = vextractps_avx(auVar26,1);
            puVar5[0x1c] = uVar4;
            uVar4 = vextractps_avx(auVar26,2);
            puVar5[0x1f] = uVar4;
            uVar4 = vextractps_avx(auVar26,3);
            puVar5[0x22] = uVar4;
            puVar5[0x25] = auVar26._0_4_;
            uVar4 = vextractps_avx(auVar26,1);
            puVar5[0x28] = uVar4;
            uVar4 = vextractps_avx(auVar26,2);
            puVar5[0x2b] = uVar4;
            uVar4 = vextractps_avx(auVar26,3);
            puVar5[0x2e] = uVar4;
            uVar3 = vmovlpd_avx(auVar29._0_16_);
            *(undefined8 *)puVar5 = uVar3;
            uVar3 = vmovhpd_avx(auVar29._0_16_);
            *(undefined8 *)(puVar5 + 3) = uVar3;
            uVar3 = vmovlpd_avx(auVar25._0_16_);
            *(undefined8 *)(puVar5 + 6) = uVar3;
            uVar3 = vmovhpd_avx(auVar25._0_16_);
            *(undefined8 *)(puVar5 + 9) = uVar3;
            uVar3 = vmovlpd_avx(auVar29._16_16_);
            *(undefined8 *)(puVar5 + 0xc) = uVar3;
            uVar3 = vmovhpd_avx(auVar29._16_16_);
            *(undefined8 *)(puVar5 + 0xf) = uVar3;
            uVar3 = vmovlpd_avx(auVar25._16_16_);
            *(undefined8 *)(puVar5 + 0x12) = uVar3;
            uVar3 = vmovhpd_avx(auVar25._16_16_);
            *(undefined8 *)(puVar5 + 0x15) = uVar3;
            uVar32 = auVar30._0_4_;
            puVar5[2] = uVar32;
            uVar4 = vextractps_avx(auVar30,1);
            puVar5[5] = uVar4;
            uVar4 = vextractps_avx(auVar30,2);
            puVar5[8] = uVar4;
            uVar4 = vextractps_avx(auVar30,3);
            puVar5[0xb] = uVar4;
            puVar5[0xe] = uVar32;
            uVar4 = vextractps_avx(auVar30,1);
            puVar5[0x11] = uVar4;
            uVar4 = vextractps_avx(auVar30,2);
            puVar5[0x14] = uVar4;
            uVar4 = vextractps_avx(auVar30,3);
            puVar5[0x17] = uVar4;
            puVar5[0x1a] = uVar32;
            uVar4 = vextractps_avx(auVar30,1);
            puVar5[0x1d] = uVar4;
            uVar4 = vextractps_avx(auVar30,2);
            puVar5[0x20] = uVar4;
            uVar4 = vextractps_avx(auVar30,3);
            puVar5[0x23] = uVar4;
            puVar5[0x26] = uVar32;
            uVar4 = vextractps_avx(auVar30,1);
            puVar5[0x29] = uVar4;
            uVar4 = vextractps_avx(auVar30,2);
            puVar5[0x2c] = uVar4;
            uVar4 = vextractps_avx(auVar30,3);
            puVar5[0x2f] = uVar4;
            puVar5 = puVar5 + 0x30;
          } while (uVar7 < uVar18);
        }
        if (uVar18 + 1 <= uVar17) {
          uVar17 = uVar17 - uVar18;
          if ((longlong)uVar17 < 2) {
            uVar7 = 0;
          }
          else {
            uVar8 = 0;
            uVar7 = uVar17 & 0xfffffffffffffffe;
            uVar21 = uVar8;
            do {
              uVar8 = uVar8 + 2;
              *(uint *)((longlong)puVar11 + uVar21 + 8 + uVar18 * 0xc) = uVar2;
              *(uint *)((longlong)puVar11 + uVar21 + 0x14 + uVar18 * 0xc) = uVar2;
              *(uint *)((longlong)puVar11 + uVar21 + 4 + uVar18 * 0xc) = uVar1;
              *(uint *)((longlong)puVar11 + uVar21 + 0x10 + uVar18 * 0xc) = uVar1;
              *(uint *)((longlong)puVar11 + uVar21 + uVar18 * 0xc) = uVar10;
              *(uint *)((longlong)puVar11 + uVar21 + 0xc + uVar18 * 0xc) = uVar10;
              uVar21 = uVar21 + 0x18;
              uStack_b0 = uVar10;
              uStack_a8 = param_7;
              plStack_a0 = param_5;
            } while (uVar8 < uVar7);
          }
          lVar9 = uVar7 * 0xc;
          for (; uVar7 < uVar17; uVar7 = uVar7 + 1) {
            *(uint *)((longlong)puVar11 + lVar9 + uVar18 * 0xc) = uVar10;
            *(uint *)((longlong)puVar11 + lVar9 + 4 + uVar18 * 0xc) = uVar1;
            *(uint *)((longlong)puVar11 + lVar9 + 8 + uVar18 * 0xc) = uVar2;
            lVar9 = lVar9 + 0xc;
          }
        }
        goto LAB_1407f4de0;
      }
    }
    lVar19 = 1;
    lVar20 = 0;
    if (uVar18 / 6 != 0) {
      lVar19 = lStack_48 * lVar9;
      uVar17 = 0;
      do {
        uVar7 = uVar17;
        uVar17 = uVar7 + 1;
        *(uint *)((longlong)puVar6 + lVar20 + lVar19) = *param_8;
        *(uint *)((longlong)puVar6 + lVar20 + 4 + lVar19) = param_8[1];
        *(uint *)((longlong)puVar6 + lVar20 + 8 + lVar19) = param_8[2];
        *(uint *)((longlong)puVar6 + lVar20 + 0xc + lVar19) = *param_8;
        *(uint *)((longlong)puVar6 + lVar20 + 0x10 + lVar19) = param_8[1];
        *(uint *)((longlong)puVar6 + lVar20 + 0x14 + lVar19) = param_8[2];
        lVar20 = lVar20 + 0x18;
      } while (uVar17 < uVar18 / 6);
      lVar19 = uVar7 + 2 + uVar17;
    }
    if (lVar19 - 1U < uVar18 / 3) {
      lVar9 = lVar9 * lStack_48;
      lVar19 = lVar19 * 3 + -3;
      *(uint *)((longlong)puVar6 + lVar19 * 4 + lVar9) = *param_8;
      *(uint *)((longlong)puVar6 + lVar19 * 4 + lVar9 + 4) = param_8[1];
      *(uint *)((longlong)puVar6 + lVar19 * 4 + lVar9 + 8) = param_8[2];
    }
    goto LAB_1407f4de0;
  }
  if (uVar10 != 0) {
    return puStack_60;
  }
  uVar10 = param_7 & 0xf;
LAB_1407f4fbd:
  puVar6 = (uint *)(ulonglong)uVar10;
  if (uVar10 == 6) {
    uVar13 = (ulonglong)param_10;
    if (0 < (longlong)uVar13) {
      puVar5 = (uint *)(*param_5 * 3);
      uVar17 = (longlong)puVar5 + 2;
      puVar6 = (uint *)(uVar17 * 0x5555555555555556);
      puVar11 = (uint *)((longlong)uVar17 / 3);
      if (((lStack_48 < (longlong)puVar11) ||
          ((puVar14 = (uint *)((uVar13 - 1) * lStack_48 + ((longlong)puVar11 * 3 + -3) * 4 + 0xb +
                              (longlong)puStack_b8), param_8 < puVar14 &&
           (puStack_b8 < (uint *)((longlong)param_8 + 3U))))) ||
         ((puStack_b8 < (uint *)((longlong)param_8 + 0xbU) && (param_8 + 1 < puVar14)))) {
        uVar18 = 0;
        lVar22 = 0;
        do {
          if (0 < (longlong)puVar5) {
            lVar9 = 1;
            lVar19 = 0;
            uVar7 = 0;
            if (uVar17 / 6 != 0) {
              do {
                uVar21 = uVar7;
                uVar7 = uVar21 + 1;
                *(uint *)((longlong)puStack_b8 + lVar19 + lVar22) = *param_8;
                *(uint *)((longlong)puStack_b8 + lVar19 + 4 + lVar22) = param_8[1];
                *(uint *)((longlong)puStack_b8 + lVar19 + 8 + lVar22) = param_8[2];
                *(uint *)((longlong)puStack_b8 + lVar19 + 0xc + lVar22) = *param_8;
                *(uint *)((longlong)puStack_b8 + lVar19 + 0x10 + lVar22) = param_8[1];
                *(uint *)((longlong)puStack_b8 + lVar19 + 0x14 + lVar22) = param_8[2];
                lVar19 = lVar19 + 0x18;
              } while (uVar7 < uVar17 / 6);
              lVar9 = uVar21 + 2 + uVar7;
            }
            if (lVar9 - 1U < uVar17 / 3) {
              lVar9 = lVar9 * 3 + -3;
              *(uint *)((longlong)puStack_b8 + lVar22 + lVar9 * 4) = *param_8;
              *(uint *)((longlong)puStack_b8 + lVar22 + lVar9 * 4 + 4) = param_8[1];
              *(uint *)((longlong)puStack_b8 + lVar22 + lVar9 * 4 + 8) = param_8[2];
            }
          }
          uVar18 = uVar18 + 1;
          lVar22 = lVar22 + lStack_48;
          puVar6 = puVar5;
        } while (uVar18 < uVar13);
      }
      else {
        uVar17 = 0;
        do {
          if (0 < (longlong)puVar5) {
            if ((longlong)puVar11 < 0x10) {
              uVar18 = 0;
            }
            else {
              uVar7 = 0;
              puVar6 = puStack_b8;
              do {
                uVar10 = *param_8;
                auVar23._4_4_ = uVar10;
                auVar23._0_4_ = uVar10;
                auVar23._8_4_ = uVar10;
                auVar23._12_4_ = uVar10;
                uVar7 = uVar7 + 0x10;
                *puVar6 = uVar10;
                uVar1 = vextractps_avx(auVar23,1);
                puVar6[3] = uVar1;
                uVar1 = vextractps_avx(auVar23,2);
                puVar6[6] = uVar1;
                uVar1 = vextractps_avx(auVar23,3);
                puVar6[9] = uVar1;
                puVar6[0xc] = uVar10;
                uVar1 = vextractps_avx(auVar23,1);
                puVar6[0xf] = uVar1;
                uVar1 = vextractps_avx(auVar23,2);
                puVar6[0x12] = uVar1;
                uVar1 = vextractps_avx(auVar23,3);
                puVar6[0x15] = uVar1;
                puVar6[0x18] = uVar10;
                uVar1 = vextractps_avx(auVar23,1);
                puVar6[0x1b] = uVar1;
                uVar1 = vextractps_avx(auVar23,2);
                puVar6[0x1e] = uVar1;
                uVar1 = vextractps_avx(auVar23,3);
                puVar6[0x21] = uVar1;
                puVar6[0x24] = uVar10;
                uVar10 = vextractps_avx(auVar23,1);
                puVar6[0x27] = uVar10;
                uVar10 = vextractps_avx(auVar23,2);
                puVar6[0x2a] = uVar10;
                uVar10 = vextractps_avx(auVar23,3);
                puVar6[0x2d] = uVar10;
                uVar10 = param_8[1];
                auVar26._4_4_ = uVar10;
                auVar26._0_4_ = uVar10;
                auVar26._8_4_ = uVar10;
                auVar26._12_4_ = uVar10;
                puVar6[1] = uVar10;
                uVar1 = vextractps_avx(auVar26,1);
                puVar6[4] = uVar1;
                uVar1 = vextractps_avx(auVar26,2);
                puVar6[7] = uVar1;
                uVar1 = vextractps_avx(auVar26,3);
                puVar6[10] = uVar1;
                puVar6[0xd] = uVar10;
                uVar1 = vextractps_avx(auVar26,1);
                puVar6[0x10] = uVar1;
                uVar1 = vextractps_avx(auVar26,2);
                puVar6[0x13] = uVar1;
                uVar1 = vextractps_avx(auVar26,3);
                puVar6[0x16] = uVar1;
                puVar6[0x19] = uVar10;
                uVar1 = vextractps_avx(auVar26,1);
                puVar6[0x1c] = uVar1;
                uVar1 = vextractps_avx(auVar26,2);
                puVar6[0x1f] = uVar1;
                uVar1 = vextractps_avx(auVar26,3);
                puVar6[0x22] = uVar1;
                puVar6[0x25] = uVar10;
                uVar10 = vextractps_avx(auVar26,1);
                puVar6[0x28] = uVar10;
                uVar10 = vextractps_avx(auVar26,2);
                puVar6[0x2b] = uVar10;
                uVar10 = vextractps_avx(auVar26,3);
                puVar6[0x2e] = uVar10;
                uVar10 = param_8[2];
                auVar30._4_4_ = uVar10;
                auVar30._0_4_ = uVar10;
                auVar30._8_4_ = uVar10;
                auVar30._12_4_ = uVar10;
                puVar6[2] = uVar10;
                uVar1 = vextractps_avx(auVar30,1);
                puVar6[5] = uVar1;
                uVar1 = vextractps_avx(auVar30,2);
                puVar6[8] = uVar1;
                uVar1 = vextractps_avx(auVar30,3);
                puVar6[0xb] = uVar1;
                puVar6[0xe] = uVar10;
                uVar1 = vextractps_avx(auVar30,1);
                puVar6[0x11] = uVar1;
                uVar1 = vextractps_avx(auVar30,2);
                puVar6[0x14] = uVar1;
                uVar1 = vextractps_avx(auVar30,3);
                puVar6[0x17] = uVar1;
                puVar6[0x1a] = uVar10;
                uVar1 = vextractps_avx(auVar30,1);
                puVar6[0x1d] = uVar1;
                uVar1 = vextractps_avx(auVar30,2);
                puVar6[0x20] = uVar1;
                uVar1 = vextractps_avx(auVar30,3);
                puVar6[0x23] = uVar1;
                puVar6[0x26] = uVar10;
                uVar10 = vextractps_avx(auVar30,1);
                puVar6[0x29] = uVar10;
                uVar10 = vextractps_avx(auVar30,2);
                puVar6[0x2c] = uVar10;
                uVar10 = vextractps_avx(auVar30,3);
                puVar6[0x2f] = uVar10;
                puVar6 = puVar6 + 0x30;
                uVar18 = (ulonglong)puVar11 & 0xfffffffffffffff0;
              } while (uVar7 < ((ulonglong)puVar11 & 0xfffffffffffffff0));
            }
            puVar6 = (uint *)(uVar18 + 1);
            if (puVar6 <= puVar11) {
              puVar14 = (uint *)((longlong)puVar11 - uVar18);
              if ((longlong)puVar14 < 8) {
                puVar15 = (uint *)0x0;
              }
              else {
                puVar6 = (uint *)0x0;
                puVar15 = (uint *)((ulonglong)puVar14 & 0xfffffffffffffff8);
                lVar22 = 0;
                do {
                  uVar10 = *param_8;
                  auVar24._4_4_ = uVar10;
                  auVar24._0_4_ = uVar10;
                  auVar24._8_4_ = uVar10;
                  auVar24._12_4_ = uVar10;
                  puVar6 = puVar6 + 2;
                  *(uint *)((longlong)puStack_b8 + lVar22 + uVar18 * 0xc) = uVar10;
                  uVar34 = vextractps_avx(auVar24,1);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0xc + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar24,2);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x18 + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar24,3);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x24 + uVar18 * 0xc) = uVar34;
                  *(uint *)((longlong)puStack_b8 + lVar22 + 0x30 + uVar18 * 0xc) = uVar10;
                  uVar34 = vextractps_avx(auVar24,1);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x3c + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar24,2);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x48 + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar24,3);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x54 + uVar18 * 0xc) = uVar34;
                  uVar10 = param_8[1];
                  auVar27._4_4_ = uVar10;
                  auVar27._0_4_ = uVar10;
                  auVar27._8_4_ = uVar10;
                  auVar27._12_4_ = uVar10;
                  *(uint *)((longlong)puStack_b8 + lVar22 + 4 + uVar18 * 0xc) = uVar10;
                  uVar34 = vextractps_avx(auVar27,1);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x10 + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar27,2);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x1c + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar27,3);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x28 + uVar18 * 0xc) = uVar34;
                  *(uint *)((longlong)puStack_b8 + lVar22 + 0x34 + uVar18 * 0xc) = uVar10;
                  uVar34 = vextractps_avx(auVar27,1);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x40 + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar27,2);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x4c + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar27,3);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x58 + uVar18 * 0xc) = uVar34;
                  uVar10 = param_8[2];
                  auVar31._4_4_ = uVar10;
                  auVar31._0_4_ = uVar10;
                  auVar31._8_4_ = uVar10;
                  auVar31._12_4_ = uVar10;
                  *(uint *)((longlong)puStack_b8 + lVar22 + 8 + uVar18 * 0xc) = uVar10;
                  uVar34 = vextractps_avx(auVar31,1);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x14 + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar31,2);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x20 + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar31,3);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x2c + uVar18 * 0xc) = uVar34;
                  *(uint *)((longlong)puStack_b8 + lVar22 + 0x38 + uVar18 * 0xc) = uVar10;
                  uVar34 = vextractps_avx(auVar31,1);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x44 + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar31,2);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x50 + uVar18 * 0xc) = uVar34;
                  uVar34 = vextractps_avx(auVar31,3);
                  *(undefined4 *)((longlong)puStack_b8 + lVar22 + 0x5c + uVar18 * 0xc) = uVar34;
                  lVar22 = lVar22 + 0x60;
                } while (puVar6 < puVar15);
              }
              if (puVar15 < puVar14) {
                puVar6 = puStack_b8 + uVar18 * 3;
                do {
                  puVar6[(longlong)puVar15 * 3] = *param_8;
                  puVar16 = (uint *)((longlong)puVar15 + 1);
                  puVar6[(longlong)puVar15 * 3 + 1] = param_8[1];
                  puVar6[(longlong)puVar15 * 3 + 2] = param_8[2];
                  puVar15 = puVar16;
                } while (puVar16 < puVar14);
              }
            }
          }
          uVar17 = uVar17 + 1;
          puStack_b8 = (uint *)((longlong)puStack_b8 + lStack_48);
        } while (uVar17 < uVar13);
      }
    }
    return puVar6;
  }
  if (uVar10 == 1) {
    puVar6 = (uint *)0x0;
    if (0 < param_10) {
      lVar22 = lStack_48 * param_10;
      uVar13 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar13) {
          if ((longlong)uVar13 < 8) {
LAB_1407f5412:
            uVar18 = 0;
          }
          else {
            puVar11 = (uint *)(lStack_48 * (longlong)puVar6 + (longlong)puStack_b8);
            uVar17 = (ulonglong)puVar11 & 0x1f;
            if (uVar17 != 0) {
              if (((ulonglong)puVar11 & 3) != 0) goto LAB_1407f5412;
              uVar17 = 0x20 - uVar17 >> 2;
            }
            if ((longlong)uVar13 < (longlong)(uVar17 + 8)) goto LAB_1407f5412;
            uVar7 = 0;
            uVar18 = uVar13 - (uVar13 - uVar17 & 7);
            if (uVar17 != 0) {
              do {
                puVar11[uVar7] = *(uint *)((longlong)puStack_b8 + uVar7 * 4 + lVar22);
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar17);
            }
            do {
              auVar29._16_16_ =
                   *(undefined1 (*) [16])((longlong)puStack_b8 + uVar17 * 4 + lVar22 + 0x10);
              auVar29._0_16_ = *(undefined1 (*) [16])((longlong)puStack_b8 + uVar17 * 4 + lVar22);
              *(undefined1 (*) [32])(puVar11 + uVar17) = auVar29;
              uVar17 = uVar17 + 8;
            } while (uVar17 < uVar18);
          }
          if (uVar18 < uVar13) {
            do {
              *(undefined4 *)((longlong)puStack_b8 + uVar18 * 4 + lStack_48 * (longlong)puVar6) =
                   *(undefined4 *)((longlong)puStack_b8 + uVar18 * 4 + lVar22);
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar13);
          }
        }
        puVar6 = (uint *)((longlong)puVar6 + 1);
      } while (puVar6 < (uint *)(longlong)param_10);
    }
  }
  else if (uVar10 == 3) {
    lVar22 = (longlong)param_10;
    if ((param_7 & 0xf0) == 0xf0) {
      puVar6 = (uint *)(*(code *)(&PTR_FUN_14308c620)[(longlong)puStack_60])
                                 (lStack_58 + lStack_50 * lVar22,puStack_b8,*param_5,uStack_68,
                                  CONCAT44(uVar34,iStack_70));
    }
    else {
      if (((lVar22 < 0) || (param_5[1] <= lVar22)) && (param_7 != 0xf0)) {
        lVar9 = param_5[1];
        if (lVar9 < 2) {
          if (lVar22 < 0) {
            lVar22 = -lVar22;
            if ((param_7 & 0x20) == 0) {
              lVar22 = 0;
            }
          }
          else if ((0 < lVar22) && ((param_7 & 0x20) == 0)) {
            lVar22 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar22 < 0; lVar22 = -lVar22) {
            }
            if ((lVar22 < lVar9) || ((param_7 & 0x20) != 0)) break;
            lVar22 = (lVar9 + -1) * 2 - lVar22;
          }
        }
      }
      lStack_128 = *param_5;
      puStack_120 = (uint *)param_5[1];
      puVar6 = (uint *)FUN_1407f5a60(lStack_58,lStack_50,lVar22,puStack_b8,&lStack_128,
                                     (int)puStack_60,param_7,param_8,uStack_68,iStack_70,uStack_78);
    }
    lVar22 = 1;
    uVar13 = 0;
    if (1 < param_10) {
      uVar17 = *param_5 * 3;
      puVar6 = (uint *)(((longlong)iStack_70 + -1) * lStack_48 + (longlong)puStack_b8);
      do {
        if (0 < (longlong)uVar17) {
          if ((longlong)uVar17 < 8) {
LAB_1407f5225:
            uVar7 = 0;
          }
          else {
            lVar9 = lStack_48 * lVar22;
            puVar11 = (uint *)((longlong)puStack_b8 + lVar9);
            uVar18 = (ulonglong)puVar11 & 0x1f;
            if (uVar18 != 0) {
              if (((ulonglong)puVar11 & 3) != 0) goto LAB_1407f5225;
              uVar18 = 0x20 - uVar18 >> 2;
            }
            if ((longlong)uVar17 < (longlong)(uVar18 + 8)) goto LAB_1407f5225;
            uVar21 = 0;
            uVar7 = uVar17 - (uVar17 - uVar18 & 7);
            if (uVar18 != 0) {
              do {
                puVar11[uVar21] = *(uint *)((longlong)puVar6 + (uVar21 * 4 - lVar9));
                uVar21 = uVar21 + 1;
              } while (uVar21 < uVar18);
            }
            do {
              auVar28._16_16_ =
                   *(undefined1 (*) [16])((longlong)puVar6 + uVar18 * 4 + (0x10 - lVar9));
              auVar28._0_16_ = *(undefined1 (*) [16])((longlong)puVar6 + (uVar18 * 4 - lVar9));
              *(undefined1 (*) [32])(puVar11 + uVar18) = auVar28;
              uVar18 = uVar18 + 8;
            } while (uVar18 < uVar7);
          }
          if (uVar7 < uVar17) {
            do {
              *(undefined4 *)((longlong)puStack_b8 + uVar7 * 4 + lVar22 * lStack_48) =
                   *(undefined4 *)((longlong)puVar6 + (uVar7 * 4 - lVar22 * lStack_48));
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar17);
          }
        }
        lVar22 = uVar13 + 2;
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulonglong)(longlong)(param_10 + -1));
    }
  }
  return puVar6;
LAB_1407f490b:
  uVar17 = uVar13;
  if (uStack_98 == 3) {
    lVar9 = param_5[1];
    if (lVar9 < 2) {
      if ((longlong)uVar13 < 0) {
        if (uStack_c0 == 0) {
          uVar17 = -uVar13;
          if (uStack_110 == 0) {
            uVar17 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar13) && (uStack_110 == 0)) {
        uVar17 = -uVar13;
        if (uStack_c0 == 0) {
          uVar17 = 0;
        }
      }
    }
    else if (((longlong)uVar13 < 0) || (lVar9 <= (longlong)uVar13)) {
      if ((longlong)uVar13 < 0) goto LAB_1407f4ec0;
      while (uStack_110 == 0) {
        for (uVar17 = (lVar9 + -1) * 2 - uVar17; (longlong)uVar17 < 0; uVar17 = -uVar17) {
LAB_1407f4ec0:
          if (uStack_c0 != 0) goto LAB_1407f499a;
        }
        if ((longlong)uVar17 < lVar9) break;
      }
    }
  }
  goto LAB_1407f499a;
}


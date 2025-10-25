
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408bb5a0(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9,
                  int param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [32];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 (*pauVar10) [32];
  ulonglong uVar11;
  undefined1 (*pauVar12) [32];
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 in_ZMM6 [64];
  longlong *in_stack_fffffffffffffeb8;
  undefined4 uVar29;
  longlong lStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  uint uStack_f0;
  undefined1 auStack_e8 [16];
  int iStack_d8;
  uint uStack_d0;
  undefined4 *puStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  uint uStack_b0;
  longlong *plStack_a8;
  uint uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  uint uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  lStack_68 = (longlong)param_6;
  lVar22 = 0;
  iStack_78 = param_10;
  uVar17 = 0;
  param_10 = param_10 >> 1;
  uVar13 = param_7 & 0x10;
  lVar25 = 0;
  uStack_70 = param_9;
  uStack_80 = param_11;
  puStack_c8 = param_3;
  lStack_60 = param_1;
  lStack_58 = param_2;
  lStack_50 = param_4;
  if (0 < param_10) {
    uStack_48 = (ulonglong)param_10;
    uStack_88 = param_7 & 0xf0;
    param_3 = (undefined4 *)(param_4 * uStack_48 + (longlong)param_3);
    uStack_a0 = param_7 & 0xf;
    uStack_f0 = param_7 & 0x20;
    auStack_e8 = in_ZMM6._0_16_;
    iStack_d8 = param_10;
    uStack_d0 = uVar13;
    if (uStack_88 == 0xf0) {
      lStack_108 = 0;
      puStack_f8 = param_8;
      uStack_b0 = param_7;
      lVar25 = lStack_108;
      puVar23 = param_3;
      puVar9 = puStack_f8;
      uVar13 = uStack_b0;
      goto LAB_1408bbcc3;
    }
    uVar17 = 0;
    puVar23 = param_3;
LAB_1408bb6a8:
    uVar19 = uVar17;
    if ((param_5[1] <= (longlong)uVar17) && (param_7 != 0xf0)) {
      if (uStack_a0 == 6) {
        if (uStack_f0 == 0) goto LAB_1408bb7dc;
      }
      else {
        if (uStack_a0 != 1) goto LAB_1408bb6ea;
        if (uStack_f0 == 0) {
          uVar19 = param_5[1] - 1;
        }
      }
    }
LAB_1408bb77a:
    in_stack_fffffffffffffeb8 = &lStack_98;
    lStack_98 = *param_5;
    lStack_90 = param_5[1];
    FUN_1408bc740(lStack_60,lStack_58,uVar19,param_3,in_stack_fffffffffffffeb8,(int)lStack_68,
                  param_7,param_8,uStack_70,iStack_78,uStack_80);
LAB_1408bbb80:
    do {
      while( true ) {
        uVar6 = uStack_80;
        uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
        iVar16 = (int)uVar17;
        uVar17 = uVar17 + 1;
        lVar25 = lVar25 + lStack_50;
        lVar22 = (longlong)iVar16 + 1;
        if (uStack_48 <= uVar17) {
          param_10 = iStack_d8;
          uVar13 = uStack_a0;
          if (uStack_d0 != 0) {
            lVar25 = 0;
            lVar22 = -uStack_48;
            puVar23 = puStack_c8;
            do {
              lStack_108 = *param_5;
              puStack_100 = (undefined4 *)param_5[1];
              FUN_1408bc740(lStack_60,lStack_58,lVar22,puVar23,&lStack_108,(int)lStack_68,param_7,
                            param_8,uStack_70,iStack_78,uVar6);
              lVar25 = lVar25 + 1;
              lVar22 = lVar22 + 1;
              puVar23 = (undefined4 *)((longlong)puVar23 + lStack_50);
            } while (lVar25 < (longlong)uStack_48);
            return;
          }
          goto LAB_1408bbd41;
        }
        param_3 = (undefined4 *)((longlong)puVar23 + lVar25);
        puVar9 = param_8;
        uVar13 = param_7;
        if (uStack_88 != 0xf0) break;
LAB_1408bbcc3:
        uStack_b0 = uVar13;
        puStack_f8 = puVar9;
        puStack_100 = puVar23;
        lStack_108 = lVar25;
        in_stack_fffffffffffffeb8 = (longlong *)CONCAT44(uVar29,iStack_78);
        (*(code *)(&PTR_FUN_14308d000)[lStack_68])
                  (lStack_58 * uVar17 + lStack_60,param_3,*param_5,uStack_70,
                   in_stack_fffffffffffffeb8);
        param_8 = puStack_f8;
        puVar23 = puStack_100;
        lVar25 = lStack_108;
        param_7 = uStack_b0;
      }
      if (-1 < (longlong)uVar17) goto LAB_1408bb6a8;
      uVar19 = uVar17;
      if (param_7 == 0xf0) goto LAB_1408bb77a;
      if (uStack_a0 != 6) {
        if (uStack_a0 != 1) goto LAB_1408bb6ea;
        uVar19 = 0;
        if (uStack_d0 != 0) {
          uVar19 = uVar17;
        }
        goto LAB_1408bb77a;
      }
      if (uStack_d0 != 0) goto LAB_1408bb77a;
LAB_1408bb7dc:
    } while (*param_5 * 3 < 1);
    uVar11 = *param_5 * 3 + 2;
    uVar19 = (longlong)uVar11 / 3;
    if (6 < (longlong)uVar19) {
      pauVar10 = (undefined1 (*) [32])(lStack_50 * lVar22 + (longlong)puVar23);
      lVar14 = (longlong)param_8 + (4 - (longlong)pauVar10);
      if ((((longlong)(uVar19 * 0xc) <= lVar14) || (7 < -lVar14)) &&
         ((3 < (longlong)pauVar10 - (longlong)param_8 ||
          ((longlong)(uVar19 * 0xc) <= -((longlong)pauVar10 - (longlong)param_8))))) {
        uVar29 = *param_8;
        uVar3 = param_8[1];
        uVar4 = param_8[2];
        if ((longlong)uVar19 < 0x10) {
          uVar11 = 0;
        }
        else {
          auVar27._4_4_ = uVar29;
          auVar27._0_4_ = uVar29;
          auVar27._8_4_ = uVar29;
          auVar27._12_4_ = uVar29;
          auVar27._16_4_ = uVar29;
          auVar27._20_4_ = uVar29;
          auVar27._24_4_ = uVar29;
          auVar27._28_4_ = uVar29;
          auVar28._4_4_ = uVar3;
          auVar28._0_4_ = uVar3;
          auVar28._8_4_ = uVar3;
          auVar28._12_4_ = uVar3;
          auVar28._16_4_ = uVar3;
          auVar28._20_4_ = uVar3;
          auVar28._24_4_ = uVar3;
          auVar28._28_4_ = uVar3;
          auVar26._4_4_ = uVar4;
          auVar26._0_4_ = uVar4;
          auVar26._8_4_ = uVar4;
          auVar26._12_4_ = uVar4;
          auVar26._16_4_ = uVar4;
          auVar26._20_4_ = uVar4;
          auVar26._24_4_ = uVar4;
          auVar26._28_4_ = uVar4;
          auVar5 = vpermd_avx2(_DAT_14308d020,auVar27);
          uVar11 = uVar19 & 0xfffffffffffffff0;
          uVar21 = 0;
          auVar27 = vpermd_avx2(_DAT_14308d040,auVar28);
          auVar28 = vpermd_avx2(_DAT_14308d060,auVar26);
          auVar26 = vpblendd_avx2(auVar5,auVar27,0x92);
          auVar27 = vpblendd_avx2(auVar27,auVar28,0x92);
          auVar5 = vpblendd_avx2(auVar28,auVar5,0x92);
          auVar28 = vpblendd_avx2(auVar26,auVar5,0x24);
          auVar26 = vpblendd_avx2(auVar27,auVar26,0x24);
          auVar27 = vpblendd_avx2(auVar5,auVar27,0x24);
          pauVar12 = pauVar10;
          do {
            uVar21 = uVar21 + 0x10;
            *(undefined4 *)pauVar12[3] = uVar29;
            *(undefined4 *)((longlong)pauVar12[3] + 0xc) = uVar29;
            *(undefined4 *)((longlong)pauVar12[3] + 0x18) = uVar29;
            *(undefined4 *)((longlong)pauVar12[4] + 4) = uVar29;
            *(undefined4 *)((longlong)pauVar12[4] + 0x10) = uVar29;
            *(undefined4 *)((longlong)pauVar12[4] + 0x1c) = uVar29;
            *(undefined4 *)((longlong)pauVar12[5] + 8) = uVar29;
            *(undefined4 *)((longlong)pauVar12[5] + 0x14) = uVar29;
            *(undefined4 *)((longlong)pauVar12[3] + 4) = uVar3;
            *(undefined4 *)((longlong)pauVar12[3] + 0x10) = uVar3;
            *(undefined4 *)((longlong)pauVar12[3] + 0x1c) = uVar3;
            *(undefined4 *)((longlong)pauVar12[4] + 8) = uVar3;
            *(undefined4 *)((longlong)pauVar12[4] + 0x14) = uVar3;
            *(undefined4 *)pauVar12[5] = uVar3;
            *(undefined4 *)((longlong)pauVar12[5] + 0xc) = uVar3;
            *(undefined4 *)((longlong)pauVar12[5] + 0x18) = uVar3;
            *pauVar12 = auVar28;
            pauVar12[1] = auVar27;
            pauVar12[2] = auVar26;
            *(undefined4 *)((longlong)pauVar12[3] + 8) = uVar4;
            *(undefined4 *)((longlong)pauVar12[3] + 0x14) = uVar4;
            *(undefined4 *)pauVar12[4] = uVar4;
            *(undefined4 *)((longlong)pauVar12[4] + 0xc) = uVar4;
            *(undefined4 *)((longlong)pauVar12[4] + 0x18) = uVar4;
            *(undefined4 *)((longlong)pauVar12[5] + 4) = uVar4;
            *(undefined4 *)((longlong)pauVar12[5] + 0x10) = uVar4;
            *(undefined4 *)((longlong)pauVar12[5] + 0x1c) = uVar4;
            pauVar12 = pauVar12 + 6;
          } while (uVar21 < uVar11);
        }
        if (uVar11 + 1 <= uVar19) {
          uVar19 = uVar19 - uVar11;
          if ((longlong)uVar19 < 2) {
            uVar21 = 0;
          }
          else {
            uVar20 = 0;
            uVar21 = uVar19 & 0xfffffffffffffffe;
            lVar22 = 0;
            do {
              uVar20 = uVar20 + 2;
              *(undefined4 *)((longlong)*pauVar10 + lVar22 + 8 + uVar11 * 0xc) = uVar4;
              *(undefined4 *)((longlong)*pauVar10 + lVar22 + 0x14 + uVar11 * 0xc) = uVar4;
              *(undefined4 *)((longlong)*pauVar10 + lVar22 + 4 + uVar11 * 0xc) = uVar3;
              *(undefined4 *)((longlong)*pauVar10 + lVar22 + 0x10 + uVar11 * 0xc) = uVar3;
              *(undefined4 *)((longlong)*pauVar10 + lVar22 + uVar11 * 0xc) = uVar29;
              *(undefined4 *)((longlong)*pauVar10 + lVar22 + 0xc + uVar11 * 0xc) = uVar29;
              lVar22 = lVar22 + 0x18;
              uStack_c0 = uVar29;
              uStack_b8 = uVar3;
              uStack_b0 = param_7;
              plStack_a8 = param_5;
            } while (uVar20 < uVar21);
          }
          lVar22 = uVar21 * 0xc;
          for (; uVar21 < uVar19; uVar21 = uVar21 + 1) {
            *(undefined4 *)((longlong)*pauVar10 + lVar22 + uVar11 * 0xc) = uVar29;
            *(undefined4 *)((longlong)*pauVar10 + lVar22 + 4 + uVar11 * 0xc) = uVar3;
            *(undefined4 *)((longlong)*pauVar10 + lVar22 + 8 + uVar11 * 0xc) = uVar4;
            lVar22 = lVar22 + 0xc;
          }
        }
        goto LAB_1408bbb80;
      }
    }
    lVar14 = 1;
    lVar15 = 0;
    if (uVar11 / 6 != 0) {
      lVar14 = lStack_50 * lVar22;
      uVar19 = 0;
      do {
        uVar21 = uVar19;
        uVar19 = uVar21 + 1;
        *(undefined4 *)((longlong)puVar23 + lVar15 + lVar14) = *param_8;
        *(undefined4 *)((longlong)puVar23 + lVar15 + 4 + lVar14) = param_8[1];
        *(undefined4 *)((longlong)puVar23 + lVar15 + 8 + lVar14) = param_8[2];
        *(undefined4 *)((longlong)puVar23 + lVar15 + 0xc + lVar14) = *param_8;
        *(undefined4 *)((longlong)puVar23 + lVar15 + 0x10 + lVar14) = param_8[1];
        *(undefined4 *)((longlong)puVar23 + lVar15 + 0x14 + lVar14) = param_8[2];
        lVar15 = lVar15 + 0x18;
      } while (uVar19 < uVar11 / 6);
      lVar14 = uVar21 + 2 + uVar19;
    }
    if (lVar14 - 1U < uVar11 / 3) {
      lVar22 = lVar22 * lStack_50;
      lVar14 = lVar14 * 3 + -3;
      *(undefined4 *)((longlong)puVar23 + lVar14 * 4 + lVar22) = *param_8;
      *(undefined4 *)((longlong)puVar23 + lVar14 * 4 + lVar22 + 4) = param_8[1];
      *(undefined4 *)((longlong)puVar23 + lVar14 * 4 + lVar22 + 8) = param_8[2];
    }
    goto LAB_1408bbb80;
  }
  if (uVar13 != 0) {
    return;
  }
  uVar13 = param_7 & 0xf;
LAB_1408bbd41:
  if (uVar13 == 6) {
    uVar17 = (ulonglong)param_10;
    if (0 < (longlong)uVar17) {
      lVar25 = *param_5 * 3;
      uVar19 = lVar25 + 2;
      uVar11 = (longlong)uVar19 / 3;
      if (((lStack_50 < (longlong)uVar11) ||
          ((puVar23 = (undefined4 *)
                      ((uVar17 - 1) * lStack_50 + (uVar11 * 3 + -3) * 4 + 0xb + (longlong)puStack_c8
                      ), param_8 < puVar23 && (puStack_c8 < (undefined4 *)((longlong)param_8 + 3U)))
          )) || ((puStack_c8 < (undefined4 *)((longlong)param_8 + 0xbU) && (param_8 + 1 < puVar23)))
         ) {
        uVar11 = 0;
        lVar22 = 0;
        do {
          if (0 < lVar25) {
            lVar14 = 1;
            lVar15 = 0;
            uVar21 = 0;
            if (uVar19 / 6 != 0) {
              do {
                uVar20 = uVar21;
                uVar21 = uVar20 + 1;
                *(undefined4 *)((longlong)puStack_c8 + lVar15 + lVar22) = *param_8;
                *(undefined4 *)((longlong)puStack_c8 + lVar15 + 4 + lVar22) = param_8[1];
                *(undefined4 *)((longlong)puStack_c8 + lVar15 + 8 + lVar22) = param_8[2];
                *(undefined4 *)((longlong)puStack_c8 + lVar15 + 0xc + lVar22) = *param_8;
                *(undefined4 *)((longlong)puStack_c8 + lVar15 + 0x10 + lVar22) = param_8[1];
                *(undefined4 *)((longlong)puStack_c8 + lVar15 + 0x14 + lVar22) = param_8[2];
                lVar15 = lVar15 + 0x18;
              } while (uVar21 < uVar19 / 6);
              lVar14 = uVar20 + 2 + uVar21;
            }
            if (lVar14 - 1U < uVar19 / 3) {
              lVar14 = lVar14 * 3 + -3;
              *(undefined4 *)((longlong)puStack_c8 + lVar22 + lVar14 * 4) = *param_8;
              *(undefined4 *)((longlong)puStack_c8 + lVar22 + lVar14 * 4 + 4) = param_8[1];
              *(undefined4 *)((longlong)puStack_c8 + lVar22 + lVar14 * 4 + 8) = param_8[2];
            }
          }
          uVar11 = uVar11 + 1;
          lVar22 = lVar22 + lStack_50;
        } while (uVar11 < uVar17);
      }
      else {
        uVar19 = 0;
        do {
          if (0 < lVar25) {
            if ((longlong)uVar11 < 0x10) {
              uVar21 = 0;
            }
            else {
              uVar20 = 0;
              puVar23 = puStack_c8;
              do {
                uVar29 = *param_8;
                uVar20 = uVar20 + 0x10;
                *puVar23 = uVar29;
                puVar23[3] = uVar29;
                puVar23[6] = uVar29;
                puVar23[9] = uVar29;
                puVar23[0xc] = uVar29;
                puVar23[0xf] = uVar29;
                puVar23[0x12] = uVar29;
                puVar23[0x15] = uVar29;
                puVar23[0x18] = uVar29;
                puVar23[0x1b] = uVar29;
                puVar23[0x1e] = uVar29;
                puVar23[0x21] = uVar29;
                puVar23[0x24] = uVar29;
                puVar23[0x27] = uVar29;
                puVar23[0x2a] = uVar29;
                puVar23[0x2d] = uVar29;
                uVar29 = param_8[1];
                puVar23[1] = uVar29;
                puVar23[4] = uVar29;
                puVar23[7] = uVar29;
                puVar23[10] = uVar29;
                puVar23[0xd] = uVar29;
                puVar23[0x10] = uVar29;
                puVar23[0x13] = uVar29;
                puVar23[0x16] = uVar29;
                puVar23[0x19] = uVar29;
                puVar23[0x1c] = uVar29;
                puVar23[0x1f] = uVar29;
                puVar23[0x22] = uVar29;
                puVar23[0x25] = uVar29;
                puVar23[0x28] = uVar29;
                puVar23[0x2b] = uVar29;
                puVar23[0x2e] = uVar29;
                uVar29 = param_8[2];
                puVar23[2] = uVar29;
                puVar23[5] = uVar29;
                puVar23[8] = uVar29;
                puVar23[0xb] = uVar29;
                puVar23[0xe] = uVar29;
                puVar23[0x11] = uVar29;
                puVar23[0x14] = uVar29;
                puVar23[0x17] = uVar29;
                puVar23[0x1a] = uVar29;
                puVar23[0x1d] = uVar29;
                puVar23[0x20] = uVar29;
                puVar23[0x23] = uVar29;
                puVar23[0x26] = uVar29;
                puVar23[0x29] = uVar29;
                puVar23[0x2c] = uVar29;
                puVar23[0x2f] = uVar29;
                puVar23 = puVar23 + 0x30;
                uVar21 = uVar11 & 0xfffffffffffffff0;
              } while (uVar20 < (uVar11 & 0xfffffffffffffff0));
            }
            if (uVar21 + 1 <= uVar11) {
              uVar20 = uVar11 - uVar21;
              if ((longlong)uVar20 < 8) {
                uVar18 = 0;
              }
              else {
                uVar24 = 0;
                uVar18 = uVar20 & 0xfffffffffffffff8;
                lVar22 = 0;
                do {
                  uVar29 = *param_8;
                  uVar24 = uVar24 + 8;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0xc + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x18 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x24 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x30 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x3c + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x48 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x54 + uVar21 * 0xc) = uVar29;
                  uVar29 = param_8[1];
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 4 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x10 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x1c + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x28 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x34 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x40 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x4c + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x58 + uVar21 * 0xc) = uVar29;
                  uVar29 = param_8[2];
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 8 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x14 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x20 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x2c + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x38 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x44 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x50 + uVar21 * 0xc) = uVar29;
                  *(undefined4 *)((longlong)puStack_c8 + lVar22 + 0x5c + uVar21 * 0xc) = uVar29;
                  lVar22 = lVar22 + 0x60;
                } while (uVar24 < uVar18);
              }
              for (; uVar18 < uVar20; uVar18 = uVar18 + 1) {
                puStack_c8[uVar21 * 3 + uVar18 * 3] = *param_8;
                puStack_c8[uVar21 * 3 + uVar18 * 3 + 1] = param_8[1];
                puStack_c8[uVar21 * 3 + uVar18 * 3 + 2] = param_8[2];
              }
            }
          }
          uVar19 = uVar19 + 1;
          puStack_c8 = (undefined4 *)((longlong)puStack_c8 + lStack_50);
        } while (uVar19 < uVar17);
      }
    }
    return;
  }
  if (uVar13 == 1) {
    uVar17 = 0;
    if (0 < param_10) {
      lVar25 = lStack_50 * param_10;
      uVar19 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar19) {
          if ((longlong)uVar19 < 8) {
LAB_1408bc191:
            uVar11 = 0;
          }
          else {
            puVar23 = (undefined4 *)(lStack_50 * uVar17 + (longlong)puStack_c8);
            if ((longlong)uVar19 < 0xbd) {
              uVar21 = 0;
              uVar11 = uVar19 & 0xfffffffffffffff8;
            }
            else {
              uVar21 = (ulonglong)puVar23 & 0x1f;
              if (uVar21 != 0) {
                if (((ulonglong)puVar23 & 3) != 0) goto LAB_1408bc191;
                uVar21 = 0x20 - uVar21 >> 2;
              }
              if ((longlong)uVar19 < (longlong)(uVar21 + 8)) goto LAB_1408bc191;
              uVar20 = 0;
              uVar11 = uVar19 - (uVar19 - uVar21 & 7);
              if (uVar21 != 0) {
                do {
                  puVar23[uVar20] = *(undefined4 *)((longlong)puStack_c8 + uVar20 * 4 + lVar25);
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar21);
              }
            }
            do {
              *(undefined1 (*) [32])(puVar23 + uVar21) =
                   *(undefined1 (*) [32])((longlong)puStack_c8 + uVar21 * 4 + lVar25);
              uVar21 = uVar21 + 8;
            } while (uVar21 < uVar11);
          }
          if (uVar11 < uVar19) {
            do {
              *(undefined4 *)((longlong)puStack_c8 + uVar11 * 4 + lStack_50 * uVar17) =
                   *(undefined4 *)((longlong)puStack_c8 + uVar11 * 4 + lVar25);
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar19);
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < (ulonglong)(longlong)param_10);
    }
  }
  else if (uVar13 == 3) {
    lVar25 = (longlong)param_10;
    if ((param_7 & 0xf0) == 0xf0) {
      (*(code *)(&PTR_FUN_14308d000)[lStack_68])
                (lStack_60 + lStack_58 * lVar25,puStack_c8,*param_5,uStack_70,
                 CONCAT44(uVar29,iStack_78));
    }
    else {
      if (((lVar25 < 0) || (param_5[1] <= lVar25)) && (param_7 != 0xf0)) {
        lVar22 = param_5[1];
        if (lVar22 < 2) {
          if (lVar25 < 0) {
            lVar25 = -lVar25;
            if ((param_7 & 0x20) == 0) {
              lVar25 = 0;
            }
          }
          else if ((0 < lVar25) && ((param_7 & 0x20) == 0)) {
            lVar25 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar25 < 0; lVar25 = -lVar25) {
            }
            if ((lVar25 < lVar22) || ((param_7 & 0x20) != 0)) break;
            lVar25 = (lVar22 + -1) * 2 - lVar25;
          }
        }
      }
      lStack_108 = *param_5;
      puStack_100 = (undefined4 *)param_5[1];
      FUN_1408bc740(lStack_60,lStack_58,lVar25,puStack_c8,&lStack_108,(int)lStack_68,param_7,param_8
                    ,uStack_70,iStack_78,uStack_80);
    }
    lVar25 = 1;
    uVar17 = 0;
    if (1 < param_10) {
      lVar22 = ((longlong)iStack_78 + -1) * lStack_50;
      uVar19 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar19) {
          if ((longlong)uVar19 < 8) {
LAB_1408bbfa5:
            uVar11 = 0;
          }
          else {
            lVar14 = lStack_50 * lVar25;
            puVar23 = (undefined4 *)((longlong)puStack_c8 + lVar14);
            if ((longlong)uVar19 < 0xbd) {
              lVar14 = (longlong)puStack_c8 + (lVar22 - lVar14);
              uVar21 = 0;
              uVar11 = uVar19 & 0xfffffffffffffff8;
            }
            else {
              uVar21 = (ulonglong)puVar23 & 0x1f;
              if (uVar21 != 0) {
                if (((ulonglong)puVar23 & 3) != 0) goto LAB_1408bbfa5;
                uVar21 = 0x20 - uVar21 >> 2;
              }
              if ((longlong)uVar19 < (longlong)(uVar21 + 8)) goto LAB_1408bbfa5;
              lVar14 = (longlong)puStack_c8 + (lVar22 - lVar14);
              uVar20 = 0;
              uVar11 = uVar19 - (uVar19 - uVar21 & 7);
              if (uVar21 != 0) {
                do {
                  puVar23[uVar20] = *(undefined4 *)(lVar14 + uVar20 * 4);
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar21);
              }
            }
            do {
              puVar1 = (undefined8 *)(lVar14 + uVar21 * 4);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              puVar2 = (undefined8 *)(puVar23 + uVar21);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              uVar21 = uVar21 + 8;
            } while (uVar21 < uVar11);
          }
          if (uVar11 < uVar19) {
            do {
              *(undefined4 *)((longlong)puStack_c8 + uVar11 * 4 + lVar25 * lStack_50) =
                   *(undefined4 *)
                    ((longlong)puStack_c8 + uVar11 * 4 + (lVar22 - lVar25 * lStack_50));
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar19);
          }
        }
        lVar25 = uVar17 + 2;
        uVar17 = uVar17 + 1;
      } while (uVar17 < (ulonglong)(longlong)(param_10 + -1));
    }
  }
  return;
LAB_1408bb6ea:
  uVar19 = uVar17;
  if (uStack_a0 == 3) {
    lVar22 = param_5[1];
    if (lVar22 < 2) {
      if ((longlong)uVar17 < 0) {
        if (uStack_d0 == 0) {
          uVar19 = -uVar17;
          if (uStack_f0 == 0) {
            uVar19 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar17) && (uStack_f0 == 0)) {
        uVar19 = -uVar17;
        if (uStack_d0 == 0) {
          uVar19 = 0;
        }
      }
    }
    else if (((longlong)uVar17 < 0) || (lVar22 <= (longlong)uVar17)) {
      if ((longlong)uVar17 < 0) goto LAB_1408bbc60;
      while (uStack_f0 == 0) {
        for (uVar19 = (lVar22 + -1) * 2 - uVar19; (longlong)uVar19 < 0; uVar19 = -uVar19) {
LAB_1408bbc60:
          if (uStack_d0 != 0) goto LAB_1408bb77a;
        }
        if ((longlong)uVar19 < lVar22) break;
      }
    }
  }
  goto LAB_1408bb77a;
}


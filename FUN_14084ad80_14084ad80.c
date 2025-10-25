
void FUN_14084ad80(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9,
                  int param_10,undefined8 param_11)

{
  undefined8 uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong *in_stack_fffffffffffffec8;
  undefined4 uVar26;
  longlong lStack_f8;
  ushort *puStack_f0;
  undefined8 uStack_c8;
  int iStack_c0;
  uint uStack_b8;
  undefined4 *puStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  lVar4 = 0;
  lStack_60 = (longlong)param_6;
  uVar9 = 0;
  lVar10 = 0;
  iStack_78 = param_10;
  uVar16 = param_7 & 0x10;
  param_10 = param_10 >> 1;
  uStack_70 = param_9;
  uStack_80 = param_11;
  puStack_b0 = param_3;
  lStack_58 = param_1;
  lStack_50 = param_2;
  lStack_48 = param_4;
  if (0 < param_10) {
    uStack_40 = (ulonglong)param_10;
    uStack_a0 = param_7 & 0xf0;
    param_3 = (undefined4 *)(param_4 * uStack_40 + (longlong)param_3);
    uStack_a8 = param_7 & 0xf;
    iStack_c0 = param_10;
    uStack_b8 = uVar16;
    puStack_88 = param_3;
    if (uStack_a0 == 0xf0) {
      lStack_f8 = 0;
      uStack_c8 = CONCAT44(uStack_c8._4_4_,param_7) & 0xffffffff00000020;
      puStack_f0 = param_8;
      lVar10 = lStack_f8;
      puVar2 = puStack_f0;
      uStack_68 = param_7;
      goto LAB_14084b418;
    }
    uStack_c8 = CONCAT44(uStack_c8._4_4_,param_7) & 0xffffffff00000020;
    uVar9 = 0;
    uStack_68 = param_7;
LAB_14084aea8:
    uVar12 = uVar9;
    if ((param_5[1] <= (longlong)uVar9) && (uStack_68 != 0xf0)) {
      if (uStack_a8 == 6) {
        if ((int)uStack_c8 == 0) goto LAB_14084afdf;
      }
      else {
        if (uStack_a8 != 1) goto LAB_14084aef2;
        if ((int)uStack_c8 == 0) {
          uVar12 = param_5[1] - 1;
        }
      }
    }
LAB_14084af80:
    do {
      in_stack_fffffffffffffec8 = &lStack_98;
      lStack_98 = *param_5;
      lStack_90 = param_5[1];
      FUN_14084bda0(lStack_58,lStack_50,uVar12,param_3,in_stack_fffffffffffffec8,(int)lStack_60,
                    uStack_68,param_8,uStack_70,iStack_78,uStack_80);
      while( true ) {
        while( true ) {
          uVar16 = uStack_68;
          uVar1 = uStack_80;
          uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
          iVar8 = (int)uVar9;
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + lStack_48;
          lVar4 = (longlong)iVar8 + 1;
          if (uStack_40 <= uVar9) {
            param_10 = iStack_c0;
            uVar14 = uStack_a8;
            param_7 = uStack_68;
            if (uStack_b8 != 0) {
              lVar10 = 0;
              lVar4 = -uStack_40;
              puVar3 = puStack_b0;
              do {
                lStack_f8 = *param_5;
                puStack_f0 = (ushort *)param_5[1];
                FUN_14084bda0(lStack_58,lStack_50,lVar4,puVar3,&lStack_f8,(int)lStack_60,uVar16,
                              param_8,uStack_70,iStack_78,uVar1);
                lVar10 = lVar10 + 1;
                lVar4 = lVar4 + 1;
                puVar3 = (undefined4 *)((longlong)puVar3 + lStack_48);
              } while (lVar10 < (longlong)uStack_40);
              return;
            }
            goto LAB_14084b497;
          }
          param_3 = (undefined4 *)((longlong)puStack_88 + lVar10);
          puVar2 = param_8;
          if (uStack_a0 != 0xf0) break;
LAB_14084b418:
          puStack_f0 = puVar2;
          lStack_f8 = lVar10;
          in_stack_fffffffffffffec8 = (longlong *)CONCAT44(uVar26,iStack_78);
          (*(code *)(&PTR_FUN_14308c8e0)[lStack_60])
                    (lStack_50 * uVar9 + lStack_58,param_3,*param_5,uStack_70,
                     in_stack_fffffffffffffec8);
          lVar10 = lStack_f8;
          param_8 = puStack_f0;
        }
        if (-1 < (longlong)uVar9) goto LAB_14084aea8;
        uVar12 = uVar9;
        if (uStack_68 == 0xf0) goto LAB_14084af80;
        if (uStack_a8 != 6) break;
        if (uStack_b8 != 0) goto LAB_14084af80;
LAB_14084afdf:
        auVar22._0_4_ = (float)param_8[2];
        auVar22._4_8_ = SUB128(ZEXT812(0),4);
        auVar22._12_4_ = 0;
        auVar18._0_4_ = (float)*param_8;
        auVar18._4_8_ = SUB128(ZEXT812(0),4);
        auVar18._12_4_ = 0;
        auVar19._0_4_ = (float)param_8[1];
        auVar19._4_8_ = SUB128(ZEXT812(0),4);
        auVar19._12_4_ = 0;
        if (0 < *param_5 * 3) {
          uVar12 = (*param_5 * 3 + 2) / 3;
          if ((longlong)uVar12 < 0x10) {
            uVar13 = 0;
          }
          else {
            puVar3 = (undefined4 *)(lStack_48 * lVar4 + (longlong)puStack_88);
            uVar13 = uVar12 & 0xfffffffffffffff0;
            auVar23 = vshufps_avx(auVar18,auVar18,0);
            uVar5 = 0;
            auVar24 = vshufps_avx(auVar19,auVar19,0);
            auVar25 = vshufps_avx(auVar22,auVar22,0);
            do {
              uVar5 = uVar5 + 0x10;
              uVar17 = auVar23._0_4_;
              *puVar3 = uVar17;
              uVar26 = vextractps_avx(auVar23,1);
              puVar3[3] = uVar26;
              uVar26 = vextractps_avx(auVar23,2);
              puVar3[6] = uVar26;
              uVar26 = vextractps_avx(auVar23,3);
              puVar3[9] = uVar26;
              puVar3[0xc] = uVar17;
              uVar26 = vextractps_avx(auVar23,1);
              puVar3[0xf] = uVar26;
              uVar26 = vextractps_avx(auVar23,2);
              puVar3[0x12] = uVar26;
              uVar26 = vextractps_avx(auVar23,3);
              puVar3[0x15] = uVar26;
              puVar3[0x18] = uVar17;
              uVar26 = vextractps_avx(auVar23,1);
              puVar3[0x1b] = uVar26;
              uVar26 = vextractps_avx(auVar23,2);
              puVar3[0x1e] = uVar26;
              uVar26 = vextractps_avx(auVar23,3);
              puVar3[0x21] = uVar26;
              puVar3[0x24] = uVar17;
              uVar26 = vextractps_avx(auVar23,1);
              puVar3[0x27] = uVar26;
              uVar26 = vextractps_avx(auVar23,2);
              puVar3[0x2a] = uVar26;
              uVar26 = vextractps_avx(auVar23,3);
              puVar3[0x2d] = uVar26;
              uVar17 = auVar24._0_4_;
              puVar3[1] = uVar17;
              uVar26 = vextractps_avx(auVar24,1);
              puVar3[4] = uVar26;
              uVar26 = vextractps_avx(auVar24,2);
              puVar3[7] = uVar26;
              uVar26 = vextractps_avx(auVar24,3);
              puVar3[10] = uVar26;
              puVar3[0xd] = uVar17;
              uVar26 = vextractps_avx(auVar24,1);
              puVar3[0x10] = uVar26;
              uVar26 = vextractps_avx(auVar24,2);
              puVar3[0x13] = uVar26;
              uVar26 = vextractps_avx(auVar24,3);
              puVar3[0x16] = uVar26;
              puVar3[0x19] = uVar17;
              uVar26 = vextractps_avx(auVar24,1);
              puVar3[0x1c] = uVar26;
              uVar26 = vextractps_avx(auVar24,2);
              puVar3[0x1f] = uVar26;
              uVar26 = vextractps_avx(auVar24,3);
              puVar3[0x22] = uVar26;
              puVar3[0x25] = uVar17;
              uVar26 = vextractps_avx(auVar24,1);
              puVar3[0x28] = uVar26;
              uVar26 = vextractps_avx(auVar24,2);
              puVar3[0x2b] = uVar26;
              uVar26 = vextractps_avx(auVar24,3);
              puVar3[0x2e] = uVar26;
              uVar17 = auVar25._0_4_;
              puVar3[2] = uVar17;
              uVar26 = vextractps_avx(auVar25,1);
              puVar3[5] = uVar26;
              uVar26 = vextractps_avx(auVar25,2);
              puVar3[8] = uVar26;
              uVar26 = vextractps_avx(auVar25,3);
              puVar3[0xb] = uVar26;
              puVar3[0xe] = uVar17;
              uVar26 = vextractps_avx(auVar25,1);
              puVar3[0x11] = uVar26;
              uVar26 = vextractps_avx(auVar25,2);
              puVar3[0x14] = uVar26;
              uVar26 = vextractps_avx(auVar25,3);
              puVar3[0x17] = uVar26;
              puVar3[0x1a] = uVar17;
              uVar26 = vextractps_avx(auVar25,1);
              puVar3[0x1d] = uVar26;
              uVar26 = vextractps_avx(auVar25,2);
              puVar3[0x20] = uVar26;
              uVar26 = vextractps_avx(auVar25,3);
              puVar3[0x23] = uVar26;
              puVar3[0x26] = uVar17;
              uVar26 = vextractps_avx(auVar25,1);
              puVar3[0x29] = uVar26;
              uVar26 = vextractps_avx(auVar25,2);
              puVar3[0x2c] = uVar26;
              uVar26 = vextractps_avx(auVar25,3);
              puVar3[0x2f] = uVar26;
              puVar3 = puVar3 + 0x30;
            } while (uVar5 < uVar13);
          }
          if (uVar13 + 1 <= uVar12) {
            uVar12 = uVar12 - uVar13;
            if ((longlong)uVar12 < 2) {
              uVar5 = 0;
            }
            else {
              uVar6 = 0;
              uVar5 = uVar12 & 0xfffffffffffffffe;
              lVar7 = uVar13 * 0xc + lStack_48 * lVar4;
              lVar15 = 0;
              do {
                uVar6 = uVar6 + 2;
                *(float *)((longlong)puStack_88 + lVar15 + 8 + lVar7) = auVar22._0_4_;
                *(float *)((longlong)puStack_88 + lVar15 + 0x14 + lVar7) = auVar22._0_4_;
                *(float *)((longlong)puStack_88 + lVar15 + 4 + lVar7) = auVar19._0_4_;
                *(float *)((longlong)puStack_88 + lVar15 + 0x10 + lVar7) = auVar19._0_4_;
                *(float *)((longlong)puStack_88 + lVar15 + lVar7) = auVar18._0_4_;
                *(float *)((longlong)puStack_88 + lVar15 + 0xc + lVar7) = auVar18._0_4_;
                lVar15 = lVar15 + 0x18;
              } while (uVar6 < uVar5);
            }
            lVar7 = uVar5 * 0xc;
            if (uVar5 < uVar12) {
              lVar4 = uVar13 * 0xc + lVar4 * lStack_48;
              do {
                uVar5 = uVar5 + 1;
                *(float *)((longlong)puStack_88 + lVar7 + lVar4) = auVar18._0_4_;
                *(float *)((longlong)puStack_88 + lVar7 + 4 + lVar4) = auVar19._0_4_;
                *(float *)((longlong)puStack_88 + lVar7 + 8 + lVar4) = auVar22._0_4_;
                lVar7 = lVar7 + 0xc;
              } while (uVar5 < uVar12);
            }
          }
        }
      }
      if (uStack_a8 != 1) goto LAB_14084aef2;
      uVar12 = 0;
      if (uStack_b8 != 0) {
        uVar12 = uVar9;
      }
    } while( true );
  }
  if (uVar16 != 0) {
    return;
  }
  uVar14 = param_7 & 0xf;
LAB_14084b497:
  if (uVar14 == 6) {
    uVar9 = 0;
    auVar25._0_4_ = (float)*param_8;
    auVar25._4_8_ = SUB128(ZEXT812(0),4);
    auVar25._12_4_ = 0;
    auVar24._0_4_ = (float)param_8[1];
    auVar24._4_8_ = SUB128(ZEXT812(0),4);
    auVar24._12_4_ = 0;
    auVar23._0_4_ = (float)param_8[2];
    auVar23._4_8_ = SUB128(ZEXT812(0),4);
    auVar23._12_4_ = 0;
    if (0 < param_10) {
      lVar10 = *param_5;
      auVar18 = vshufps_avx(auVar25,auVar25,0);
      auVar19 = vshufps_avx(auVar24,auVar24,0);
      auVar22 = vshufps_avx(auVar23,auVar23,0);
      uVar12 = (lVar10 * 3 + 2) / 3;
      do {
        if (0 < lVar10 * 3) {
          if ((longlong)uVar12 < 0x10) {
            uVar13 = 0;
          }
          else {
            uVar5 = 0;
            puVar3 = puStack_b0;
            do {
              uVar5 = uVar5 + 0x10;
              uVar17 = auVar18._0_4_;
              *puVar3 = uVar17;
              uVar26 = vextractps_avx(auVar18,1);
              puVar3[3] = uVar26;
              uVar26 = vextractps_avx(auVar18,2);
              puVar3[6] = uVar26;
              uVar26 = vextractps_avx(auVar18,3);
              puVar3[9] = uVar26;
              puVar3[0xc] = uVar17;
              uVar26 = vextractps_avx(auVar18,1);
              puVar3[0xf] = uVar26;
              uVar26 = vextractps_avx(auVar18,2);
              puVar3[0x12] = uVar26;
              uVar26 = vextractps_avx(auVar18,3);
              puVar3[0x15] = uVar26;
              puVar3[0x18] = uVar17;
              uVar26 = vextractps_avx(auVar18,1);
              puVar3[0x1b] = uVar26;
              uVar26 = vextractps_avx(auVar18,2);
              puVar3[0x1e] = uVar26;
              uVar26 = vextractps_avx(auVar18,3);
              puVar3[0x21] = uVar26;
              puVar3[0x24] = uVar17;
              uVar26 = vextractps_avx(auVar18,1);
              puVar3[0x27] = uVar26;
              uVar26 = vextractps_avx(auVar18,2);
              puVar3[0x2a] = uVar26;
              uVar26 = vextractps_avx(auVar18,3);
              puVar3[0x2d] = uVar26;
              uVar17 = auVar19._0_4_;
              puVar3[1] = uVar17;
              uVar26 = vextractps_avx(auVar19,1);
              puVar3[4] = uVar26;
              uVar26 = vextractps_avx(auVar19,2);
              puVar3[7] = uVar26;
              uVar26 = vextractps_avx(auVar19,3);
              puVar3[10] = uVar26;
              puVar3[0xd] = uVar17;
              uVar26 = vextractps_avx(auVar19,1);
              puVar3[0x10] = uVar26;
              uVar26 = vextractps_avx(auVar19,2);
              puVar3[0x13] = uVar26;
              uVar26 = vextractps_avx(auVar19,3);
              puVar3[0x16] = uVar26;
              puVar3[0x19] = uVar17;
              uVar26 = vextractps_avx(auVar19,1);
              puVar3[0x1c] = uVar26;
              uVar26 = vextractps_avx(auVar19,2);
              puVar3[0x1f] = uVar26;
              uVar26 = vextractps_avx(auVar19,3);
              puVar3[0x22] = uVar26;
              puVar3[0x25] = uVar17;
              uVar26 = vextractps_avx(auVar19,1);
              puVar3[0x28] = uVar26;
              uVar26 = vextractps_avx(auVar19,2);
              puVar3[0x2b] = uVar26;
              uVar26 = vextractps_avx(auVar19,3);
              puVar3[0x2e] = uVar26;
              uVar17 = auVar22._0_4_;
              puVar3[2] = uVar17;
              uVar26 = vextractps_avx(auVar22,1);
              puVar3[5] = uVar26;
              uVar26 = vextractps_avx(auVar22,2);
              puVar3[8] = uVar26;
              uVar26 = vextractps_avx(auVar22,3);
              puVar3[0xb] = uVar26;
              puVar3[0xe] = uVar17;
              uVar26 = vextractps_avx(auVar22,1);
              puVar3[0x11] = uVar26;
              uVar26 = vextractps_avx(auVar22,2);
              puVar3[0x14] = uVar26;
              uVar26 = vextractps_avx(auVar22,3);
              puVar3[0x17] = uVar26;
              puVar3[0x1a] = uVar17;
              uVar26 = vextractps_avx(auVar22,1);
              puVar3[0x1d] = uVar26;
              uVar26 = vextractps_avx(auVar22,2);
              puVar3[0x20] = uVar26;
              uVar26 = vextractps_avx(auVar22,3);
              puVar3[0x23] = uVar26;
              puVar3[0x26] = uVar17;
              uVar26 = vextractps_avx(auVar22,1);
              puVar3[0x29] = uVar26;
              uVar26 = vextractps_avx(auVar22,2);
              puVar3[0x2c] = uVar26;
              uVar26 = vextractps_avx(auVar22,3);
              puVar3[0x2f] = uVar26;
              puVar3 = puVar3 + 0x30;
              uVar13 = uVar12 & 0xfffffffffffffff0;
            } while (uVar5 < (uVar12 & 0xfffffffffffffff0));
          }
          if (uVar13 + 1 <= uVar12) {
            uVar5 = uVar12 - uVar13;
            if ((longlong)uVar5 < 2) {
              uVar6 = 0;
            }
            else {
              uVar11 = 0;
              uVar6 = uVar5 & 0xfffffffffffffffe;
              lVar4 = 0;
              do {
                uVar11 = uVar11 + 2;
                *(float *)((longlong)puStack_b0 + lVar4 + 8 + uVar13 * 0xc) = auVar23._0_4_;
                *(float *)((longlong)puStack_b0 + lVar4 + 0x14 + uVar13 * 0xc) = auVar23._0_4_;
                *(float *)((longlong)puStack_b0 + lVar4 + 4 + uVar13 * 0xc) = auVar24._0_4_;
                *(float *)((longlong)puStack_b0 + lVar4 + 0x10 + uVar13 * 0xc) = auVar24._0_4_;
                *(float *)((longlong)puStack_b0 + lVar4 + uVar13 * 0xc) = auVar25._0_4_;
                *(float *)((longlong)puStack_b0 + lVar4 + 0xc + uVar13 * 0xc) = auVar25._0_4_;
                lVar4 = lVar4 + 0x18;
              } while (uVar11 < uVar6);
            }
            lVar4 = uVar6 * 0xc;
            for (; uVar6 < uVar5; uVar6 = uVar6 + 1) {
              *(float *)((longlong)puStack_b0 + lVar4 + uVar13 * 0xc) = auVar25._0_4_;
              *(float *)((longlong)puStack_b0 + lVar4 + 4 + uVar13 * 0xc) = auVar24._0_4_;
              *(float *)((longlong)puStack_b0 + lVar4 + 8 + uVar13 * 0xc) = auVar23._0_4_;
              lVar4 = lVar4 + 0xc;
            }
          }
        }
        uVar9 = uVar9 + 1;
        puStack_b0 = (undefined4 *)((longlong)puStack_b0 + lStack_48);
      } while (uVar9 < (ulonglong)(longlong)param_10);
    }
    return;
  }
  if (uVar14 == 1) {
    uVar9 = 0;
    if (0 < param_10) {
      lVar10 = lStack_48 * param_10;
      uVar12 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar12) {
          if ((longlong)uVar12 < 8) {
LAB_14084b8fe:
            uVar5 = 0;
          }
          else {
            puVar3 = (undefined4 *)(lStack_48 * uVar9 + (longlong)puStack_b0);
            uVar13 = (ulonglong)puVar3 & 0x1f;
            if (uVar13 != 0) {
              if (((ulonglong)puVar3 & 3) != 0) goto LAB_14084b8fe;
              uVar13 = 0x20 - uVar13 >> 2;
            }
            if ((longlong)uVar12 < (longlong)(uVar13 + 8)) goto LAB_14084b8fe;
            uVar6 = 0;
            uVar5 = uVar12 - (uVar12 - uVar13 & 7);
            if (uVar13 != 0) {
              do {
                puVar3[uVar6] = *(undefined4 *)((longlong)puStack_b0 + uVar6 * 4 + lVar10);
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar13);
            }
            do {
              auVar21._16_16_ =
                   *(undefined1 (*) [16])((longlong)puStack_b0 + uVar13 * 4 + lVar10 + 0x10);
              auVar21._0_16_ = *(undefined1 (*) [16])((longlong)puStack_b0 + uVar13 * 4 + lVar10);
              *(undefined1 (*) [32])(puVar3 + uVar13) = auVar21;
              uVar13 = uVar13 + 8;
            } while (uVar13 < uVar5);
          }
          if (uVar5 < uVar12) {
            do {
              *(undefined4 *)((longlong)puStack_b0 + uVar5 * 4 + lStack_48 * uVar9) =
                   *(undefined4 *)((longlong)puStack_b0 + uVar5 * 4 + lVar10);
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar12);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)(longlong)param_10);
    }
  }
  else if (uVar14 == 3) {
    lVar10 = (longlong)param_10;
    if ((param_7 & 0xf0) == 0xf0) {
      (*(code *)(&PTR_FUN_14308c8e0)[lStack_60])
                (lStack_58 + lStack_50 * lVar10,puStack_b0,*param_5,uStack_70,
                 CONCAT44(uVar26,iStack_78));
    }
    else {
      if (((lVar10 < 0) || (param_5[1] <= lVar10)) && (param_7 != 0xf0)) {
        lVar4 = param_5[1];
        if (lVar4 < 2) {
          if (lVar10 < 0) {
            lVar10 = -lVar10;
            if ((param_7 & 0x20) == 0) {
              lVar10 = 0;
            }
          }
          else if ((0 < lVar10) && ((param_7 & 0x20) == 0)) {
            lVar10 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar10 < 0; lVar10 = -lVar10) {
            }
            if ((lVar10 < lVar4) || ((param_7 & 0x20) != 0)) break;
            lVar10 = (lVar4 + -1) * 2 - lVar10;
          }
        }
      }
      lStack_f8 = *param_5;
      puStack_f0 = (ushort *)param_5[1];
      FUN_14084bda0(lStack_58,lStack_50,lVar10,puStack_b0,&lStack_f8,(int)lStack_60,param_7,param_8,
                    uStack_70,iStack_78,uStack_80);
    }
    lVar10 = 1;
    uVar9 = 0;
    if (1 < param_10) {
      uVar12 = *param_5 * 3;
      lVar4 = ((longlong)iStack_78 + -1) * lStack_48;
      do {
        if (0 < (longlong)uVar12) {
          if ((longlong)uVar12 < 8) {
LAB_14084b705:
            uVar5 = 0;
          }
          else {
            puVar3 = (undefined4 *)((longlong)puStack_b0 + lStack_48 * lVar10);
            uVar13 = (ulonglong)puVar3 & 0x1f;
            if (uVar13 != 0) {
              if (((ulonglong)puVar3 & 3) != 0) goto LAB_14084b705;
              uVar13 = 0x20 - uVar13 >> 2;
            }
            if ((longlong)uVar12 < (longlong)(uVar13 + 8)) goto LAB_14084b705;
            lVar7 = lVar4 - lStack_48 * lVar10;
            uVar6 = 0;
            uVar5 = uVar12 - (uVar12 - uVar13 & 7);
            if (uVar13 != 0) {
              do {
                puVar3[uVar6] = *(undefined4 *)((longlong)puStack_b0 + uVar6 * 4 + lVar7);
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar13);
            }
            do {
              auVar20._16_16_ =
                   *(undefined1 (*) [16])((longlong)puStack_b0 + uVar13 * 4 + lVar7 + 0x10);
              auVar20._0_16_ = *(undefined1 (*) [16])((longlong)puStack_b0 + uVar13 * 4 + lVar7);
              *(undefined1 (*) [32])(puVar3 + uVar13) = auVar20;
              uVar13 = uVar13 + 8;
            } while (uVar13 < uVar5);
          }
          if (uVar5 < uVar12) {
            do {
              *(undefined4 *)((longlong)puStack_b0 + uVar5 * 4 + lVar10 * lStack_48) =
                   *(undefined4 *)((longlong)puStack_b0 + uVar5 * 4 + (lVar4 - lVar10 * lStack_48));
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar12);
          }
        }
        lVar10 = uVar9 + 2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)(longlong)(param_10 + -1));
    }
  }
  return;
LAB_14084aef2:
  uVar12 = uVar9;
  if (uStack_a8 == 3) {
    lVar4 = param_5[1];
    if (lVar4 < 2) {
      if ((longlong)uVar9 < 0) {
        if (uStack_b8 == 0) {
          uVar12 = -uVar9;
          if ((int)uStack_c8 == 0) {
            uVar12 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar9) && ((int)uStack_c8 == 0)) {
        uVar12 = -uVar9;
        if (uStack_b8 == 0) {
          uVar12 = 0;
        }
      }
    }
    else if (((longlong)uVar9 < 0) || (lVar4 <= (longlong)uVar9)) {
      if ((longlong)uVar9 < 0) goto LAB_14084b3c0;
      while ((int)uStack_c8 == 0) {
        for (uVar12 = (lVar4 + -1) * 2 - uVar12; (longlong)uVar12 < 0; uVar12 = -uVar12) {
LAB_14084b3c0:
          if (uStack_b8 != 0) goto LAB_14084af80;
        }
        if ((longlong)uVar12 < lVar4) break;
      }
    }
  }
  goto LAB_14084af80;
}


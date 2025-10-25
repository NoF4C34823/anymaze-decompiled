
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409979a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,short *param_8,undefined8 param_9,
                  int param_10,undefined8 param_11)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  byte bVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  short *psVar42;
  longlong lVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  int iVar47;
  ulonglong uVar48;
  longlong lVar49;
  longlong lVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ushort uVar56;
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  ulonglong *in_stack_fffffffffffffe48;
  undefined4 uVar65;
  ulonglong uStack_178;
  ulonglong uStack_170;
  short *psStack_168;
  uint uStack_160;
  longlong lStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  int iStack_a0;
  longlong lStack_98;
  uint uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  uint uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  int iStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  
  uVar65 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  lStack_50 = (longlong)param_6;
  lVar43 = 0;
  iStack_58 = param_10;
  uVar48 = 0;
  iStack_a0 = param_10 >> 1;
  uVar44 = param_7 & 0x10;
  uVar51 = 0;
  uStack_48 = param_9;
  uStack_60 = param_11;
  lStack_98 = param_3;
  lStack_70 = param_2;
  lStack_68 = param_1;
  if (0 < iStack_a0) {
    uStack_40 = (ulonglong)iStack_a0;
    vmovdqu32_avx512f(_DAT_14308dc80);
    uStack_78 = param_7 & 0xf0;
    param_3 = param_4 * uStack_40 + param_3;
    uStack_90 = param_7 & 0xf;
    uStack_b0 = param_7 & 0x20;
    uStack_a8 = uVar44;
    if (uStack_78 == 0xf0) {
      uStack_178 = 0;
      psStack_168 = param_8;
      uStack_160 = param_7;
      uVar51 = uStack_178;
      uVar46 = param_3;
      psVar42 = psStack_168;
      uVar44 = uStack_160;
      lVar49 = param_4;
      goto LAB_140997f0f;
    }
    uVar48 = 0;
    uVar46 = param_3;
LAB_140997b14:
    uVar52 = uVar48;
    if (((longlong)param_5[1] <= (longlong)uVar48) && (param_7 != 0xf0)) {
      if (uStack_90 == 6) {
        if (uStack_b0 == 0) goto LAB_140997c6c;
      }
      else {
        if (uStack_90 != 1) goto LAB_140997b5a;
        if (uStack_b0 == 0) {
          uVar52 = param_5[1] - 1;
        }
      }
    }
LAB_140997c00:
    in_stack_fffffffffffffe48 = &uStack_88;
    uStack_88 = *param_5;
    uStack_80 = param_5[1];
    FUN_140998920(lStack_68,lStack_70,uVar52,param_3,in_stack_fffffffffffffe48,(int)lStack_50,
                  param_7,param_8,uStack_48,iStack_58,uStack_60);
LAB_140997de0:
    do {
      while( true ) {
        uVar19 = uStack_60;
        uVar65 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
        iVar47 = (int)uVar48;
        uVar48 = uVar48 + 1;
        uVar51 = uVar51 + param_4;
        lVar43 = (longlong)iVar47 + 1;
        if (uStack_40 <= uVar48) {
          uVar44 = uStack_90;
          if (uStack_a8 != 0) {
            lVar49 = 0;
            lVar50 = -uStack_40;
            lVar43 = lStack_98;
            lStack_b8 = param_4;
            do {
              uStack_178 = *param_5;
              uStack_170 = param_5[1];
              FUN_140998920(lStack_68,lStack_70,lVar50,lVar43,&uStack_178,(int)lStack_50,param_7,
                            param_8,uStack_48,iStack_58,uVar19);
              lVar49 = lVar49 + 1;
              lVar50 = lVar50 + 1;
              lVar43 = lVar43 + lStack_b8;
            } while (lVar49 < (longlong)uStack_40);
            return;
          }
          goto LAB_140997fd1;
        }
        param_3 = uVar46 + uVar51;
        psVar42 = param_8;
        uVar44 = param_7;
        lVar49 = param_4;
        if (uStack_78 != 0xf0) break;
LAB_140997f0f:
        lStack_b8 = lVar49;
        uStack_160 = uVar44;
        psStack_168 = psVar42;
        uStack_170 = uVar46;
        uStack_178 = uVar51;
        in_stack_fffffffffffffe48 = (ulonglong *)CONCAT44(uVar65,iStack_58);
        (*(code *)(&PTR_LAB_14308df00)[lStack_50])
                  (lStack_70 * uVar48 + lStack_68,param_3,*param_5,uStack_48,
                   in_stack_fffffffffffffe48);
        uVar46 = uStack_170;
        uVar51 = uStack_178;
        param_8 = psStack_168;
        param_4 = lStack_b8;
        param_7 = uStack_160;
      }
      if (-1 < (longlong)uVar48) goto LAB_140997b14;
      uVar52 = uVar48;
      if (param_7 == 0xf0) goto LAB_140997c00;
      if (uStack_90 != 6) {
        if (uStack_90 != 1) goto LAB_140997b5a;
        uVar52 = 0;
        if (uStack_a8 != 0) {
          uVar52 = uVar48;
        }
        goto LAB_140997c00;
      }
      if (uStack_a8 != 0) goto LAB_140997c00;
LAB_140997c6c:
      auVar59 = _DAT_14308de00;
      uVar52 = *param_5;
      auVar64._0_4_ = (float)(int)*param_8;
      auVar64._4_8_ = SUB128(ZEXT812(0),4);
      auVar64._12_4_ = 0;
    } while ((longlong)uVar52 < 1);
    if ((longlong)uVar52 < 0x10) {
      uVar53 = 0;
    }
    else {
      if ((longlong)uVar52 < 0x26) {
        uVar45 = 0;
        uVar53 = uVar52 & 0xfffffffffffffff0;
      }
      else {
        uVar55 = param_4 * lVar43 + uVar46;
        uVar45 = uVar55 & 0x3f;
        if ((uVar55 & 3) == 0) {
          if ((uVar45 != 0) && (uVar45 = 0x40 - uVar45 >> 2, (longlong)uVar52 < (longlong)uVar45)) {
            uVar45 = uVar52;
          }
        }
        else {
          uVar45 = 0;
        }
        uVar53 = uVar52 - (uVar52 - uVar45 & 0xf);
        if (uVar45 != 0) {
          auVar57 = vmovdqu32_avx512f(_DAT_14308dc80);
          uVar54 = 0;
          auVar58 = vpbroadcastq_avx512f();
          do {
            uVar18 = vpcmpgtq_avx512f(auVar58,auVar57);
            auVar57 = vpaddq_avx512f(auVar57,auVar59);
            puVar1 = (uint *)(uVar55 + uVar54 * 4);
            bVar5 = (bool)((byte)uVar18 & 1);
            bVar6 = (bool)((byte)(uVar18 >> 1) & 1);
            bVar7 = (bool)((byte)(uVar18 >> 2) & 1);
            bVar8 = (bool)((byte)(uVar18 >> 3) & 1);
            bVar9 = (bool)((byte)(uVar18 >> 4) & 1);
            bVar10 = (bool)((byte)(uVar18 >> 5) & 1);
            bVar11 = (bool)((byte)(uVar18 >> 6) & 1);
            bVar12 = SUB81(uVar18 >> 7,0);
            *puVar1 = (uint)bVar5 * (int)auVar64._0_4_ | (uint)!bVar5 * *puVar1;
            puVar1[1] = (uint)bVar6 * (int)auVar64._0_4_ | (uint)!bVar6 * puVar1[1];
            puVar1[2] = (uint)bVar7 * (int)auVar64._0_4_ | (uint)!bVar7 * puVar1[2];
            puVar1[3] = (uint)bVar8 * (int)auVar64._0_4_ | (uint)!bVar8 * puVar1[3];
            puVar1[4] = (uint)bVar9 * (int)auVar64._0_4_ | (uint)!bVar9 * puVar1[4];
            puVar1[5] = (uint)bVar10 * (int)auVar64._0_4_ | (uint)!bVar10 * puVar1[5];
            puVar1[6] = (uint)bVar11 * (int)auVar64._0_4_ | (uint)!bVar11 * puVar1[6];
            puVar1[7] = (uint)bVar12 * (int)auVar64._0_4_ | (uint)!bVar12 * puVar1[7];
            uVar54 = uVar54 + 8;
          } while (uVar54 < uVar45);
          if (uVar52 == uVar45) goto LAB_140997de0;
        }
      }
      if ((longlong)(uVar45 + 0x10) <= (longlong)uVar53) {
        auVar59 = vbroadcastss_avx512f(auVar64);
        do {
          *(undefined1 (*) [64])(param_4 * lVar43 + uVar46 + uVar45 * 4) = auVar59;
          uVar45 = uVar45 + 0x10;
        } while (uVar45 < uVar53);
      }
    }
    auVar59 = _DAT_14308de00;
    if (uVar53 + 1 <= uVar52) {
      auVar57 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar58 = vpbroadcastq_avx512f();
      uVar45 = 0;
      do {
        uVar55 = vpcmpgtq_avx512f(auVar58,auVar57);
        auVar57 = vpaddq_avx512f(auVar57,auVar59);
        puVar1 = (uint *)(lVar43 * param_4 + uVar46 + uVar53 * 4 + uVar45 * 4);
        bVar5 = (bool)((byte)uVar55 & 1);
        bVar6 = (bool)((byte)(uVar55 >> 1) & 1);
        bVar7 = (bool)((byte)(uVar55 >> 2) & 1);
        bVar8 = (bool)((byte)(uVar55 >> 3) & 1);
        bVar9 = (bool)((byte)(uVar55 >> 4) & 1);
        bVar10 = (bool)((byte)(uVar55 >> 5) & 1);
        bVar11 = (bool)((byte)(uVar55 >> 6) & 1);
        bVar12 = SUB81(uVar55 >> 7,0);
        *puVar1 = (uint)bVar5 * (int)auVar64._0_4_ | (uint)!bVar5 * *puVar1;
        puVar1[1] = (uint)bVar6 * (int)auVar64._0_4_ | (uint)!bVar6 * puVar1[1];
        puVar1[2] = (uint)bVar7 * (int)auVar64._0_4_ | (uint)!bVar7 * puVar1[2];
        puVar1[3] = (uint)bVar8 * (int)auVar64._0_4_ | (uint)!bVar8 * puVar1[3];
        puVar1[4] = (uint)bVar9 * (int)auVar64._0_4_ | (uint)!bVar9 * puVar1[4];
        puVar1[5] = (uint)bVar10 * (int)auVar64._0_4_ | (uint)!bVar10 * puVar1[5];
        puVar1[6] = (uint)bVar11 * (int)auVar64._0_4_ | (uint)!bVar11 * puVar1[6];
        puVar1[7] = (uint)bVar12 * (int)auVar64._0_4_ | (uint)!bVar12 * puVar1[7];
        uVar45 = uVar45 + 8;
      } while (uVar45 < uVar52 - uVar53);
    }
    goto LAB_140997de0;
  }
  if (uVar44 != 0) {
    return;
  }
  uVar44 = param_7 & 0xf;
LAB_140997fd1:
  auVar57 = _DAT_14308de00;
  auVar59 = _DAT_14308dc40;
  if (uVar44 == 6) {
    uVar51 = 0;
    auVar63._0_4_ = (float)(int)*param_8;
    auVar63._4_8_ = SUB128(ZEXT812(0),4);
    auVar63._12_4_ = 0;
    if (0 < iStack_a0) {
      uVar48 = *param_5;
      auVar59 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar58 = vbroadcastss_avx512f(auVar63);
      do {
        if (0 < (longlong)uVar48) {
          if ((longlong)uVar48 < 0x10) {
            uVar46 = 0;
          }
          else {
            while (0x25 < (longlong)uVar48) {
              uVar53 = param_4 * uVar51 + lStack_98;
              uVar52 = uVar53 & 0x3f;
              if ((uVar53 & 3) == 0) {
                if ((uVar52 != 0) &&
                   (uVar52 = 0x40 - uVar52 >> 2, (longlong)uVar48 < (longlong)uVar52)) {
                  uVar52 = uVar48;
                }
              }
              else {
                uVar52 = 0;
              }
              uVar46 = uVar48 - (uVar48 - uVar52 & 0xf);
              if (uVar52 == 0) goto LAB_1409986a5;
              uVar45 = 0;
              auVar61 = vpbroadcastq_avx512f();
              auVar62 = auVar59;
              do {
                uVar55 = vpcmpgtq_avx512f(auVar61,auVar62);
                auVar62 = vpaddq_avx512f(auVar62,auVar57);
                puVar1 = (uint *)(uVar53 + uVar45 * 4);
                bVar5 = (bool)((byte)uVar55 & 1);
                bVar6 = (bool)((byte)(uVar55 >> 1) & 1);
                bVar7 = (bool)((byte)(uVar55 >> 2) & 1);
                bVar8 = (bool)((byte)(uVar55 >> 3) & 1);
                bVar9 = (bool)((byte)(uVar55 >> 4) & 1);
                bVar10 = (bool)((byte)(uVar55 >> 5) & 1);
                bVar11 = (bool)((byte)(uVar55 >> 6) & 1);
                bVar12 = SUB81(uVar55 >> 7,0);
                *puVar1 = (uint)bVar5 * (int)auVar63._0_4_ | (uint)!bVar5 * *puVar1;
                puVar1[1] = (uint)bVar6 * (int)auVar63._0_4_ | (uint)!bVar6 * puVar1[1];
                puVar1[2] = (uint)bVar7 * (int)auVar63._0_4_ | (uint)!bVar7 * puVar1[2];
                puVar1[3] = (uint)bVar8 * (int)auVar63._0_4_ | (uint)!bVar8 * puVar1[3];
                puVar1[4] = (uint)bVar9 * (int)auVar63._0_4_ | (uint)!bVar9 * puVar1[4];
                puVar1[5] = (uint)bVar10 * (int)auVar63._0_4_ | (uint)!bVar10 * puVar1[5];
                puVar1[6] = (uint)bVar11 * (int)auVar63._0_4_ | (uint)!bVar11 * puVar1[6];
                puVar1[7] = (uint)bVar12 * (int)auVar63._0_4_ | (uint)!bVar12 * puVar1[7];
                uVar45 = uVar45 + 8;
              } while (uVar45 < uVar52);
              if (uVar48 != uVar52) goto LAB_1409986a5;
              uVar51 = uVar51 + 1;
              if ((ulonglong)(longlong)iStack_a0 <= uVar51) {
                return;
              }
            }
            uVar52 = 0;
            uVar46 = uVar48 & 0xfffffffffffffff0;
LAB_1409986a5:
            if ((longlong)(uVar52 + 0x10) <= (longlong)uVar46) {
              do {
                *(undefined1 (*) [64])(param_4 * uVar51 + lStack_98 + uVar52 * 4) = auVar58;
                uVar52 = uVar52 + 0x10;
              } while (uVar52 < uVar46);
            }
          }
          if (uVar46 + 1 <= uVar48) {
            uVar52 = 0;
            auVar61 = vpbroadcastq_avx512f();
            auVar62 = auVar59;
            do {
              uVar53 = vpcmpgtq_avx512f(auVar61,auVar62);
              auVar62 = vpaddq_avx512f(auVar62,auVar57);
              puVar1 = (uint *)(param_4 * uVar51 + lStack_98 + uVar46 * 4 + uVar52 * 4);
              bVar5 = (bool)((byte)uVar53 & 1);
              bVar6 = (bool)((byte)(uVar53 >> 1) & 1);
              bVar7 = (bool)((byte)(uVar53 >> 2) & 1);
              bVar8 = (bool)((byte)(uVar53 >> 3) & 1);
              bVar9 = (bool)((byte)(uVar53 >> 4) & 1);
              bVar10 = (bool)((byte)(uVar53 >> 5) & 1);
              bVar11 = (bool)((byte)(uVar53 >> 6) & 1);
              bVar12 = SUB81(uVar53 >> 7,0);
              *puVar1 = (uint)bVar5 * (int)auVar63._0_4_ | (uint)!bVar5 * *puVar1;
              puVar1[1] = (uint)bVar6 * (int)auVar63._0_4_ | (uint)!bVar6 * puVar1[1];
              puVar1[2] = (uint)bVar7 * (int)auVar63._0_4_ | (uint)!bVar7 * puVar1[2];
              puVar1[3] = (uint)bVar8 * (int)auVar63._0_4_ | (uint)!bVar8 * puVar1[3];
              puVar1[4] = (uint)bVar9 * (int)auVar63._0_4_ | (uint)!bVar9 * puVar1[4];
              puVar1[5] = (uint)bVar10 * (int)auVar63._0_4_ | (uint)!bVar10 * puVar1[5];
              puVar1[6] = (uint)bVar11 * (int)auVar63._0_4_ | (uint)!bVar11 * puVar1[6];
              puVar1[7] = (uint)bVar12 * (int)auVar63._0_4_ | (uint)!bVar12 * puVar1[7];
              uVar52 = uVar52 + 8;
            } while (uVar52 < uVar48 - uVar46);
          }
        }
        uVar51 = uVar51 + 1;
      } while (uVar51 < (ulonglong)(longlong)iStack_a0);
    }
    return;
  }
  if (uVar44 == 1) {
    uVar51 = 0;
    if (0 < iStack_a0) {
      uVar46 = (ulonglong)iStack_a0;
      auVar57 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar58 = vmovdqu32_avx512f(_DAT_14308dcc0);
      uVar48 = *param_5;
      lVar43 = param_4 * uVar46 + lStack_98;
      do {
        if (0 < (longlong)uVar48) {
          if ((longlong)uVar48 < 0x10) {
            uVar52 = 0;
          }
          else {
            while (0x3a < (longlong)uVar48) {
              uVar45 = param_4 * uVar51 + lStack_98;
              uVar53 = uVar45 & 0x3f;
              if ((uVar45 & 3) == 0) {
                if ((uVar53 != 0) &&
                   (uVar53 = 0x40 - uVar53 >> 2, (longlong)uVar48 < (longlong)uVar53)) {
                  uVar53 = uVar48;
                }
              }
              else {
                uVar53 = 0;
              }
              uVar52 = uVar48 - (uVar48 - uVar53 & 0xf);
              if (uVar53 == 0) goto LAB_1409984bc;
              uVar55 = 0;
              auVar60 = vpbroadcastq_avx512f();
              auVar62 = auVar58;
              auVar61 = auVar57;
              do {
                uVar19 = vpcmpgtq_avx512f(auVar60,auVar61);
                bVar21 = (byte)uVar19;
                uVar19 = vpcmpgtq_avx512f(auVar60,auVar62);
                bVar20 = (byte)uVar19;
                auVar61 = vpaddq_avx512f(auVar61,auVar59);
                auVar62 = vpaddq_avx512f(auVar62,auVar59);
                uVar56 = CONCAT11(bVar20,bVar21);
                piVar2 = (int *)(lVar43 + uVar55 * 4);
                iVar47 = piVar2[1];
                iVar22 = piVar2[2];
                iVar23 = piVar2[3];
                iVar24 = piVar2[4];
                iVar25 = piVar2[5];
                iVar26 = piVar2[6];
                iVar27 = piVar2[7];
                iVar28 = piVar2[8];
                iVar29 = piVar2[9];
                iVar30 = piVar2[10];
                iVar31 = piVar2[0xb];
                iVar32 = piVar2[0xc];
                iVar33 = piVar2[0xd];
                iVar34 = piVar2[0xe];
                iVar35 = piVar2[0xf];
                puVar1 = (uint *)(uVar45 + uVar55 * 4);
                bVar5 = (bool)((byte)(uVar56 >> 1) & 1);
                bVar6 = (bool)((byte)(uVar56 >> 2) & 1);
                bVar7 = (bool)((byte)(uVar56 >> 3) & 1);
                bVar8 = (bool)((byte)(uVar56 >> 4) & 1);
                bVar9 = (bool)((byte)(uVar56 >> 5) & 1);
                bVar10 = (bool)((byte)(uVar56 >> 6) & 1);
                bVar11 = (bool)((byte)(uVar56 >> 7) & 1);
                bVar12 = (bool)(bVar20 >> 1 & 1);
                bVar13 = (bool)(bVar20 >> 2 & 1);
                bVar14 = (bool)(bVar20 >> 3 & 1);
                bVar15 = (bool)(bVar20 >> 4 & 1);
                bVar16 = (bool)(bVar20 >> 5 & 1);
                bVar17 = (bool)(bVar20 >> 6 & 1);
                *puVar1 = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * *piVar2 |
                          (uint)!(bool)(bVar21 & 1) * *puVar1;
                puVar1[1] = (uint)bVar5 * (uint)((byte)(uVar56 >> 1) & 1) * iVar47 |
                            (uint)!bVar5 * puVar1[1];
                puVar1[2] = (uint)bVar6 * (uint)((byte)(uVar56 >> 2) & 1) * iVar22 |
                            (uint)!bVar6 * puVar1[2];
                puVar1[3] = (uint)bVar7 * (uint)((byte)(uVar56 >> 3) & 1) * iVar23 |
                            (uint)!bVar7 * puVar1[3];
                puVar1[4] = (uint)bVar8 * (uint)((byte)(uVar56 >> 4) & 1) * iVar24 |
                            (uint)!bVar8 * puVar1[4];
                puVar1[5] = (uint)bVar9 * (uint)((byte)(uVar56 >> 5) & 1) * iVar25 |
                            (uint)!bVar9 * puVar1[5];
                puVar1[6] = (uint)bVar10 * (uint)((byte)(uVar56 >> 6) & 1) * iVar26 |
                            (uint)!bVar10 * puVar1[6];
                puVar1[7] = (uint)bVar11 * (uint)((byte)(uVar56 >> 7) & 1) * iVar27 |
                            (uint)!bVar11 * puVar1[7];
                puVar1[8] = (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * iVar28 |
                            (uint)!(bool)(bVar20 & 1) * puVar1[8];
                puVar1[9] = (uint)bVar12 * (uint)(bVar20 >> 1 & 1) * iVar29 |
                            (uint)!bVar12 * puVar1[9];
                puVar1[10] = (uint)bVar13 * (uint)(bVar20 >> 2 & 1) * iVar30 |
                             (uint)!bVar13 * puVar1[10];
                puVar1[0xb] = (uint)bVar14 * (uint)(bVar20 >> 3 & 1) * iVar31 |
                              (uint)!bVar14 * puVar1[0xb];
                puVar1[0xc] = (uint)bVar15 * (uint)(bVar20 >> 4 & 1) * iVar32 |
                              (uint)!bVar15 * puVar1[0xc];
                puVar1[0xd] = (uint)bVar16 * (uint)(bVar20 >> 5 & 1) * iVar33 |
                              (uint)!bVar16 * puVar1[0xd];
                puVar1[0xe] = (uint)bVar17 * (uint)(bVar20 >> 6 & 1) * iVar34 |
                              (uint)!bVar17 * puVar1[0xe];
                puVar1[0xf] = (uint)(bVar20 >> 7) * (uint)(bVar20 >> 7) * iVar35 |
                              (uint)!(bool)(bVar20 >> 7) * puVar1[0xf];
                uVar55 = uVar55 + 0x10;
              } while (uVar55 < uVar53);
              if (uVar48 != uVar53) goto LAB_1409984bc;
              uVar51 = uVar51 + 1;
              if (uVar46 <= uVar51) {
                return;
              }
            }
            uVar53 = 0;
            uVar52 = uVar48 & 0xfffffffffffffff0;
LAB_1409984bc:
            if ((longlong)(uVar53 + 0x10) <= (longlong)uVar52) {
              do {
                puVar3 = (undefined8 *)(lVar43 + uVar53 * 4);
                uVar19 = puVar3[1];
                uVar36 = puVar3[2];
                uVar37 = puVar3[3];
                uVar38 = puVar3[4];
                uVar39 = puVar3[5];
                uVar40 = puVar3[6];
                uVar41 = puVar3[7];
                puVar4 = (undefined8 *)(param_4 * uVar51 + lStack_98 + uVar53 * 4);
                *puVar4 = *puVar3;
                puVar4[1] = uVar19;
                puVar4[2] = uVar36;
                puVar4[3] = uVar37;
                puVar4[4] = uVar38;
                puVar4[5] = uVar39;
                puVar4[6] = uVar40;
                puVar4[7] = uVar41;
                uVar53 = uVar53 + 0x10;
              } while (uVar53 < uVar52);
            }
          }
          if (uVar52 + 1 <= uVar48) {
            auVar62 = vpbroadcastq_avx512f();
            uVar19 = vpcmpgtq_avx512f(auVar62,auVar57);
            bVar21 = (byte)uVar19;
            uVar19 = vpcmpgtq_avx512f(auVar62,auVar58);
            bVar20 = (byte)uVar19;
            uVar56 = CONCAT11(bVar20,bVar21);
            piVar2 = (int *)(lVar43 + uVar52 * 4);
            iVar47 = piVar2[1];
            iVar22 = piVar2[2];
            iVar23 = piVar2[3];
            iVar24 = piVar2[4];
            iVar25 = piVar2[5];
            iVar26 = piVar2[6];
            iVar27 = piVar2[7];
            iVar28 = piVar2[8];
            iVar29 = piVar2[9];
            iVar30 = piVar2[10];
            iVar31 = piVar2[0xb];
            iVar32 = piVar2[0xc];
            iVar33 = piVar2[0xd];
            iVar34 = piVar2[0xe];
            iVar35 = piVar2[0xf];
            puVar1 = (uint *)(param_4 * uVar51 + lStack_98 + uVar52 * 4);
            bVar5 = (bool)((byte)(uVar56 >> 1) & 1);
            bVar6 = (bool)((byte)(uVar56 >> 2) & 1);
            bVar7 = (bool)((byte)(uVar56 >> 3) & 1);
            bVar8 = (bool)((byte)(uVar56 >> 4) & 1);
            bVar9 = (bool)((byte)(uVar56 >> 5) & 1);
            bVar10 = (bool)((byte)(uVar56 >> 6) & 1);
            bVar11 = (bool)((byte)(uVar56 >> 7) & 1);
            bVar12 = (bool)(bVar20 >> 1 & 1);
            bVar13 = (bool)(bVar20 >> 2 & 1);
            bVar14 = (bool)(bVar20 >> 3 & 1);
            bVar15 = (bool)(bVar20 >> 4 & 1);
            bVar16 = (bool)(bVar20 >> 5 & 1);
            bVar17 = (bool)(bVar20 >> 6 & 1);
            *puVar1 = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * *piVar2 |
                      (uint)!(bool)(bVar21 & 1) * *puVar1;
            puVar1[1] = (uint)bVar5 * (uint)((byte)(uVar56 >> 1) & 1) * iVar47 |
                        (uint)!bVar5 * puVar1[1];
            puVar1[2] = (uint)bVar6 * (uint)((byte)(uVar56 >> 2) & 1) * iVar22 |
                        (uint)!bVar6 * puVar1[2];
            puVar1[3] = (uint)bVar7 * (uint)((byte)(uVar56 >> 3) & 1) * iVar23 |
                        (uint)!bVar7 * puVar1[3];
            puVar1[4] = (uint)bVar8 * (uint)((byte)(uVar56 >> 4) & 1) * iVar24 |
                        (uint)!bVar8 * puVar1[4];
            puVar1[5] = (uint)bVar9 * (uint)((byte)(uVar56 >> 5) & 1) * iVar25 |
                        (uint)!bVar9 * puVar1[5];
            puVar1[6] = (uint)bVar10 * (uint)((byte)(uVar56 >> 6) & 1) * iVar26 |
                        (uint)!bVar10 * puVar1[6];
            puVar1[7] = (uint)bVar11 * (uint)((byte)(uVar56 >> 7) & 1) * iVar27 |
                        (uint)!bVar11 * puVar1[7];
            puVar1[8] = (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * iVar28 |
                        (uint)!(bool)(bVar20 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar12 * (uint)(bVar20 >> 1 & 1) * iVar29 | (uint)!bVar12 * puVar1[9];
            puVar1[10] = (uint)bVar13 * (uint)(bVar20 >> 2 & 1) * iVar30 |
                         (uint)!bVar13 * puVar1[10];
            puVar1[0xb] = (uint)bVar14 * (uint)(bVar20 >> 3 & 1) * iVar31 |
                          (uint)!bVar14 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar15 * (uint)(bVar20 >> 4 & 1) * iVar32 |
                          (uint)!bVar15 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar16 * (uint)(bVar20 >> 5 & 1) * iVar33 |
                          (uint)!bVar16 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar17 * (uint)(bVar20 >> 6 & 1) * iVar34 |
                          (uint)!bVar17 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar20 >> 7) * (uint)(bVar20 >> 7) * iVar35 |
                          (uint)!(bool)(bVar20 >> 7) * puVar1[0xf];
          }
        }
        uVar51 = uVar51 + 1;
      } while (uVar51 < uVar46);
    }
  }
  else if (uVar44 == 3) {
    lVar43 = (longlong)iStack_a0;
    if ((param_7 & 0xf0) == 0xf0) {
      (*(code *)(&PTR_LAB_14308df00)[lStack_50])
                (lStack_68 + lStack_70 * lVar43,lStack_98,*param_5,uStack_48,
                 CONCAT44(uVar65,iStack_58));
    }
    else {
      if (((lVar43 < 0) || ((longlong)param_5[1] <= lVar43)) && (param_7 != 0xf0)) {
        uVar51 = param_5[1];
        if ((longlong)uVar51 < 2) {
          if (lVar43 < 0) {
            lVar43 = -lVar43;
            if ((param_7 & 0x20) == 0) {
              lVar43 = 0;
            }
          }
          else if ((0 < lVar43) && ((param_7 & 0x20) == 0)) {
            lVar43 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar43 < 0; lVar43 = -lVar43) {
            }
            if ((lVar43 < (longlong)uVar51) || ((param_7 & 0x20) != 0)) break;
            lVar43 = (uVar51 - 1) * 2 - lVar43;
          }
        }
      }
      uStack_178 = *param_5;
      uStack_170 = param_5[1];
      FUN_140998920(lStack_68,lStack_70,lVar43,lStack_98,&uStack_178,(int)lStack_50,param_7,param_8,
                    uStack_48,iStack_58,uStack_60);
    }
    auVar59 = _DAT_14308dc40;
    lVar43 = 1;
    uVar51 = 0;
    if (1 < iStack_a0) {
      auVar57 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar58 = vmovdqu32_avx512f(_DAT_14308dcc0);
      uVar48 = *param_5;
      lVar49 = ((longlong)iStack_58 + -1) * param_4 + lStack_98;
      do {
        if (0 < (longlong)uVar48) {
          if ((longlong)uVar48 < 0x10) {
            uVar46 = 0;
          }
          else {
            while (0x3a < (longlong)uVar48) {
              uVar52 = lStack_98 + param_4 * lVar43;
              uVar53 = uVar52 & 0x3f;
              if ((uVar52 & 3) == 0) {
                if ((uVar53 != 0) &&
                   (uVar53 = 0x40 - uVar53 >> 2, (longlong)uVar48 < (longlong)uVar53)) {
                  uVar53 = uVar48;
                }
              }
              else {
                uVar53 = 0;
              }
              uVar46 = uVar48 - (uVar48 - uVar53 & 0xf);
              if (uVar53 == 0) goto LAB_14099823c;
              uVar45 = 0;
              auVar60 = vpbroadcastq_avx512f();
              auVar62 = auVar58;
              auVar61 = auVar57;
              do {
                uVar19 = vpcmpgtq_avx512f(auVar60,auVar61);
                bVar21 = (byte)uVar19;
                uVar19 = vpcmpgtq_avx512f(auVar60,auVar62);
                bVar20 = (byte)uVar19;
                auVar61 = vpaddq_avx512f(auVar61,auVar59);
                auVar62 = vpaddq_avx512f(auVar62,auVar59);
                uVar56 = CONCAT11(bVar20,bVar21);
                piVar2 = (int *)((lVar49 - param_4 * lVar43) + uVar45 * 4);
                iVar47 = piVar2[1];
                iVar22 = piVar2[2];
                iVar23 = piVar2[3];
                iVar24 = piVar2[4];
                iVar25 = piVar2[5];
                iVar26 = piVar2[6];
                iVar27 = piVar2[7];
                iVar28 = piVar2[8];
                iVar29 = piVar2[9];
                iVar30 = piVar2[10];
                iVar31 = piVar2[0xb];
                iVar32 = piVar2[0xc];
                iVar33 = piVar2[0xd];
                iVar34 = piVar2[0xe];
                iVar35 = piVar2[0xf];
                puVar1 = (uint *)(uVar52 + uVar45 * 4);
                bVar5 = (bool)((byte)(uVar56 >> 1) & 1);
                bVar6 = (bool)((byte)(uVar56 >> 2) & 1);
                bVar7 = (bool)((byte)(uVar56 >> 3) & 1);
                bVar8 = (bool)((byte)(uVar56 >> 4) & 1);
                bVar9 = (bool)((byte)(uVar56 >> 5) & 1);
                bVar10 = (bool)((byte)(uVar56 >> 6) & 1);
                bVar11 = (bool)((byte)(uVar56 >> 7) & 1);
                bVar12 = (bool)(bVar20 >> 1 & 1);
                bVar13 = (bool)(bVar20 >> 2 & 1);
                bVar14 = (bool)(bVar20 >> 3 & 1);
                bVar15 = (bool)(bVar20 >> 4 & 1);
                bVar16 = (bool)(bVar20 >> 5 & 1);
                bVar17 = (bool)(bVar20 >> 6 & 1);
                *puVar1 = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * *piVar2 |
                          (uint)!(bool)(bVar21 & 1) * *puVar1;
                puVar1[1] = (uint)bVar5 * (uint)((byte)(uVar56 >> 1) & 1) * iVar47 |
                            (uint)!bVar5 * puVar1[1];
                puVar1[2] = (uint)bVar6 * (uint)((byte)(uVar56 >> 2) & 1) * iVar22 |
                            (uint)!bVar6 * puVar1[2];
                puVar1[3] = (uint)bVar7 * (uint)((byte)(uVar56 >> 3) & 1) * iVar23 |
                            (uint)!bVar7 * puVar1[3];
                puVar1[4] = (uint)bVar8 * (uint)((byte)(uVar56 >> 4) & 1) * iVar24 |
                            (uint)!bVar8 * puVar1[4];
                puVar1[5] = (uint)bVar9 * (uint)((byte)(uVar56 >> 5) & 1) * iVar25 |
                            (uint)!bVar9 * puVar1[5];
                puVar1[6] = (uint)bVar10 * (uint)((byte)(uVar56 >> 6) & 1) * iVar26 |
                            (uint)!bVar10 * puVar1[6];
                puVar1[7] = (uint)bVar11 * (uint)((byte)(uVar56 >> 7) & 1) * iVar27 |
                            (uint)!bVar11 * puVar1[7];
                puVar1[8] = (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * iVar28 |
                            (uint)!(bool)(bVar20 & 1) * puVar1[8];
                puVar1[9] = (uint)bVar12 * (uint)(bVar20 >> 1 & 1) * iVar29 |
                            (uint)!bVar12 * puVar1[9];
                puVar1[10] = (uint)bVar13 * (uint)(bVar20 >> 2 & 1) * iVar30 |
                             (uint)!bVar13 * puVar1[10];
                puVar1[0xb] = (uint)bVar14 * (uint)(bVar20 >> 3 & 1) * iVar31 |
                              (uint)!bVar14 * puVar1[0xb];
                puVar1[0xc] = (uint)bVar15 * (uint)(bVar20 >> 4 & 1) * iVar32 |
                              (uint)!bVar15 * puVar1[0xc];
                puVar1[0xd] = (uint)bVar16 * (uint)(bVar20 >> 5 & 1) * iVar33 |
                              (uint)!bVar16 * puVar1[0xd];
                puVar1[0xe] = (uint)bVar17 * (uint)(bVar20 >> 6 & 1) * iVar34 |
                              (uint)!bVar17 * puVar1[0xe];
                puVar1[0xf] = (uint)(bVar20 >> 7) * (uint)(bVar20 >> 7) * iVar35 |
                              (uint)!(bool)(bVar20 >> 7) * puVar1[0xf];
                uVar45 = uVar45 + 0x10;
              } while (uVar45 < uVar53);
              if (uVar48 != uVar53) goto LAB_14099823c;
              lVar43 = uVar51 + 2;
              uVar51 = uVar51 + 1;
              if ((ulonglong)(longlong)(iStack_a0 + -1) <= uVar51) {
                return;
              }
            }
            uVar53 = 0;
            uVar46 = uVar48 & 0xfffffffffffffff0;
LAB_14099823c:
            if ((longlong)(uVar53 + 0x10) <= (longlong)uVar46) {
              do {
                puVar3 = (undefined8 *)((lVar49 - param_4 * lVar43) + uVar53 * 4);
                uVar19 = puVar3[1];
                uVar36 = puVar3[2];
                uVar37 = puVar3[3];
                uVar38 = puVar3[4];
                uVar39 = puVar3[5];
                uVar40 = puVar3[6];
                uVar41 = puVar3[7];
                puVar4 = (undefined8 *)(lStack_98 + param_4 * lVar43 + uVar53 * 4);
                *puVar4 = *puVar3;
                puVar4[1] = uVar19;
                puVar4[2] = uVar36;
                puVar4[3] = uVar37;
                puVar4[4] = uVar38;
                puVar4[5] = uVar39;
                puVar4[6] = uVar40;
                puVar4[7] = uVar41;
                uVar53 = uVar53 + 0x10;
              } while (uVar53 < uVar46);
            }
          }
          if (uVar46 + 1 <= uVar48) {
            auVar62 = vpbroadcastq_avx512f();
            uVar19 = vpcmpgtq_avx512f(auVar62,auVar57);
            bVar21 = (byte)uVar19;
            uVar19 = vpcmpgtq_avx512f(auVar62,auVar58);
            bVar20 = (byte)uVar19;
            uVar56 = CONCAT11(bVar20,bVar21);
            piVar2 = (int *)((lVar49 - lVar43 * param_4) + uVar46 * 4);
            iVar47 = piVar2[1];
            iVar22 = piVar2[2];
            iVar23 = piVar2[3];
            iVar24 = piVar2[4];
            iVar25 = piVar2[5];
            iVar26 = piVar2[6];
            iVar27 = piVar2[7];
            iVar28 = piVar2[8];
            iVar29 = piVar2[9];
            iVar30 = piVar2[10];
            iVar31 = piVar2[0xb];
            iVar32 = piVar2[0xc];
            iVar33 = piVar2[0xd];
            iVar34 = piVar2[0xe];
            iVar35 = piVar2[0xf];
            puVar1 = (uint *)(lVar43 * param_4 + lStack_98 + uVar46 * 4);
            bVar5 = (bool)((byte)(uVar56 >> 1) & 1);
            bVar6 = (bool)((byte)(uVar56 >> 2) & 1);
            bVar7 = (bool)((byte)(uVar56 >> 3) & 1);
            bVar8 = (bool)((byte)(uVar56 >> 4) & 1);
            bVar9 = (bool)((byte)(uVar56 >> 5) & 1);
            bVar10 = (bool)((byte)(uVar56 >> 6) & 1);
            bVar11 = (bool)((byte)(uVar56 >> 7) & 1);
            bVar12 = (bool)(bVar20 >> 1 & 1);
            bVar13 = (bool)(bVar20 >> 2 & 1);
            bVar14 = (bool)(bVar20 >> 3 & 1);
            bVar15 = (bool)(bVar20 >> 4 & 1);
            bVar16 = (bool)(bVar20 >> 5 & 1);
            bVar17 = (bool)(bVar20 >> 6 & 1);
            *puVar1 = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * *piVar2 |
                      (uint)!(bool)(bVar21 & 1) * *puVar1;
            puVar1[1] = (uint)bVar5 * (uint)((byte)(uVar56 >> 1) & 1) * iVar47 |
                        (uint)!bVar5 * puVar1[1];
            puVar1[2] = (uint)bVar6 * (uint)((byte)(uVar56 >> 2) & 1) * iVar22 |
                        (uint)!bVar6 * puVar1[2];
            puVar1[3] = (uint)bVar7 * (uint)((byte)(uVar56 >> 3) & 1) * iVar23 |
                        (uint)!bVar7 * puVar1[3];
            puVar1[4] = (uint)bVar8 * (uint)((byte)(uVar56 >> 4) & 1) * iVar24 |
                        (uint)!bVar8 * puVar1[4];
            puVar1[5] = (uint)bVar9 * (uint)((byte)(uVar56 >> 5) & 1) * iVar25 |
                        (uint)!bVar9 * puVar1[5];
            puVar1[6] = (uint)bVar10 * (uint)((byte)(uVar56 >> 6) & 1) * iVar26 |
                        (uint)!bVar10 * puVar1[6];
            puVar1[7] = (uint)bVar11 * (uint)((byte)(uVar56 >> 7) & 1) * iVar27 |
                        (uint)!bVar11 * puVar1[7];
            puVar1[8] = (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * iVar28 |
                        (uint)!(bool)(bVar20 & 1) * puVar1[8];
            puVar1[9] = (uint)bVar12 * (uint)(bVar20 >> 1 & 1) * iVar29 | (uint)!bVar12 * puVar1[9];
            puVar1[10] = (uint)bVar13 * (uint)(bVar20 >> 2 & 1) * iVar30 |
                         (uint)!bVar13 * puVar1[10];
            puVar1[0xb] = (uint)bVar14 * (uint)(bVar20 >> 3 & 1) * iVar31 |
                          (uint)!bVar14 * puVar1[0xb];
            puVar1[0xc] = (uint)bVar15 * (uint)(bVar20 >> 4 & 1) * iVar32 |
                          (uint)!bVar15 * puVar1[0xc];
            puVar1[0xd] = (uint)bVar16 * (uint)(bVar20 >> 5 & 1) * iVar33 |
                          (uint)!bVar16 * puVar1[0xd];
            puVar1[0xe] = (uint)bVar17 * (uint)(bVar20 >> 6 & 1) * iVar34 |
                          (uint)!bVar17 * puVar1[0xe];
            puVar1[0xf] = (uint)(bVar20 >> 7) * (uint)(bVar20 >> 7) * iVar35 |
                          (uint)!(bool)(bVar20 >> 7) * puVar1[0xf];
          }
        }
        lVar43 = uVar51 + 2;
        uVar51 = uVar51 + 1;
      } while (uVar51 < (ulonglong)(longlong)(iStack_a0 + -1));
    }
  }
  return;
LAB_140997b5a:
  uVar52 = uVar48;
  if (uStack_90 == 3) {
    uVar53 = param_5[1];
    if ((longlong)uVar53 < 2) {
      if ((longlong)uVar48 < 0) {
        if (uStack_a8 == 0) {
          uVar52 = -uVar48;
          if (uStack_b0 == 0) {
            uVar52 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar48) && (uStack_b0 == 0)) {
        uVar52 = -uVar48;
        if (uStack_a8 == 0) {
          uVar52 = 0;
        }
      }
    }
    else if (((longlong)uVar48 < 0) || ((longlong)uVar53 <= (longlong)uVar48)) {
      if ((longlong)uVar48 < 0) goto LAB_140997ea0;
      while (uStack_b0 == 0) {
        for (uVar52 = (uVar53 - 1) * 2 - uVar52; (longlong)uVar52 < 0; uVar52 = -uVar52) {
LAB_140997ea0:
          if (uStack_a8 != 0) goto LAB_140997c00;
        }
        if ((longlong)uVar52 < (longlong)uVar53) break;
      }
    }
  }
  goto LAB_140997c00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14098c040(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                       ulonglong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                       int param_10)

{
  ulonglong uVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
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
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte bVar22;
  byte bVar23;
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
  int iVar36;
  int iVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong lVar46;
  uint uVar47;
  int iVar48;
  ulonglong uVar49;
  longlong lVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  longlong lVar53;
  int iVar54;
  ulonglong uVar55;
  ushort uVar56;
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [16];
  longlong lStack_178;
  uint *puStack_c0;
  uint uStack_b8;
  
  lVar46 = 0;
  uVar49 = 0;
  lStack_178 = 0;
  uVar47 = param_7 & 0x10;
  iVar54 = param_10 >> 1;
  uVar42 = (ulonglong)param_6;
  uStack_b8 = param_7;
  if (0 < iVar54) {
    uVar55 = (ulonglong)iVar54;
    vmovdqu32_avx512f(_DAT_14308dc80);
    vmovdqu32_avx512f(_DAT_14308dcc0);
    uVar43 = param_4 * uVar55 + param_3;
    if ((param_7 & 0xf0) == 0xf0) {
      lStack_178 = 0;
      puStack_c0 = param_8;
      uVar45 = uVar43;
      goto LAB_14098c68c;
    }
    uVar49 = 0;
    uVar44 = uVar43;
LAB_14098c15b:
    puStack_c0 = param_8;
    if (((longlong)param_5[1] <= (longlong)uVar49) && (uStack_b8 != 0xf0)) {
      if ((param_7 & 0xf) != 6) goto joined_r0x00014098c182;
      if ((param_7 & 0x20) == 0) goto LAB_14098c281;
    }
LAB_14098c221:
    do {
      uVar44 = FUN_14098d1a0(param_1,param_2);
LAB_14098c500:
      while( true ) {
        iVar48 = (int)uVar49;
        uVar49 = uVar49 + 1;
        lStack_178 = lStack_178 + param_4;
        lVar46 = (longlong)iVar48 + 1;
        if (uVar55 <= uVar49) {
          if (uVar47 != 0) {
            lVar46 = 0;
            lVar50 = -uVar55;
            do {
              uVar49 = FUN_14098d1a0(param_1,param_2,lVar50,param_3);
              lVar46 = lVar46 + 1;
              lVar50 = lVar50 + 1;
              param_3 = param_3 + param_4;
            } while (lVar46 < (longlong)uVar55);
            return uVar49;
          }
          goto LAB_14098c754;
        }
        uVar45 = uVar43 + lStack_178;
        if ((param_7 & 0xf0) != 0xf0) break;
LAB_14098c68c:
        uVar44 = (*(code *)(&PTR_LAB_14308df60)[uVar42])(param_2 * uVar49 + param_1,uVar45);
      }
      param_8 = puStack_c0;
      if (-1 < (longlong)uVar49) goto LAB_14098c15b;
    } while (uStack_b8 == 0xf0);
    if ((param_7 & 0xf) != 6) goto joined_r0x00014098c182;
    if (uVar47 != 0) goto LAB_14098c221;
LAB_14098c281:
    if (0 < (longlong)(*param_5 * 3)) {
      uVar51 = *param_5 * 3 + 2;
      uVar44 = uVar51 * 0x5555555555555556;
      uVar45 = (longlong)uVar51 / 3;
      if (6 < (longlong)uVar45) {
        lVar50 = param_4 * lVar46 + uVar43;
        lVar53 = (longlong)puStack_c0 + (4 - lVar50);
        if ((((longlong)(uVar45 * 0xc) <= lVar53) || (7 < -lVar53)) &&
           ((3 < lVar50 - (longlong)puStack_c0 ||
            ((longlong)(uVar45 * 0xc) <= -(lVar50 - (longlong)puStack_c0))))) {
          if ((longlong)uVar45 < 0x10) {
            uVar51 = 0;
          }
          else {
            uVar52 = 0;
            auVar57 = vbroadcastss_avx512f(ZEXT416(*puStack_c0));
            uVar51 = uVar45 & 0xfffffffffffffff0;
            auVar58 = vbroadcastss_avx512f(ZEXT416(puStack_c0[1]));
            auVar59 = vbroadcastss_avx512f(ZEXT416(puStack_c0[2]));
            auVar60 = vmovdqu32_avx512f(_DAT_14308de40);
            lVar46 = 0;
            do {
              auVar63 = auVar60._0_16_;
              uVar19 = vpcmpeqb_avx512vl(auVar63,auVar63);
              uVar1 = lVar50 + lVar46;
              uVar20 = vpcmpeqb_avx512vl(auVar63,auVar63);
              uVar21 = vpcmpeqb_avx512vl(auVar63,auVar63);
              vscatterdps_avx512f(ZEXT864(uVar1) + ZEXT864(8) + auVar60 * (undefined1  [64])0x4,
                                  uVar19,auVar59);
              vscatterdps_avx512f(ZEXT864(uVar1) + ZEXT864(4) + auVar60 * (undefined1  [64])0x4,
                                  uVar20,auVar58);
              vscatterdps_avx512f(ZEXT864(uVar1) + auVar60 * (undefined1  [64])0x4,uVar21,auVar57);
              uVar52 = uVar52 + 0x10;
              lVar46 = lVar46 + 0xc0;
            } while (uVar52 < uVar51);
          }
          if (uVar51 + 1 <= uVar45) {
            auVar57 = vpbroadcastq_avx512f();
            auVar58 = vbroadcastss_avx512f(ZEXT416(*puStack_c0));
            auVar59 = vbroadcastss_avx512f(ZEXT416(puStack_c0[1]));
            auVar60 = vbroadcastss_avx512f(ZEXT416(puStack_c0[2]));
            uVar19 = vpcmpgtq_avx512f(auVar57,_DAT_14308dc80);
            uVar20 = vpcmpgtq_avx512f(auVar57,_DAT_14308dcc0);
            auVar57 = vmovdqu32_avx512f(_DAT_14308de40);
            uVar56 = CONCAT11((char)uVar20,(char)uVar19);
            uVar45 = lVar50 + uVar51 * 0xc;
            vscatterdps_avx512f(ZEXT864(uVar45) + auVar57 * (undefined1  [64])0x4,(ulonglong)uVar56,
                                auVar58);
            vscatterdps_avx512f(ZEXT864(uVar45) + ZEXT864(4) + auVar57 * (undefined1  [64])0x4,
                                (ulonglong)uVar56,auVar59);
            vscatterdps_avx512f(ZEXT864(uVar45) + ZEXT864(8) + auVar57 * (undefined1  [64])0x4,
                                (ulonglong)uVar56,auVar60);
          }
          goto LAB_14098c500;
        }
      }
      uVar44 = 1;
      lVar50 = 0;
      if (uVar51 / 6 != 0) {
        lVar53 = param_4 * lVar46 + uVar43;
        uVar44 = 0;
        do {
          uVar45 = uVar44;
          uVar44 = uVar45 + 1;
          *(uint *)(lVar50 + lVar53) = *puStack_c0;
          *(uint *)(lVar50 + 4 + lVar53) = puStack_c0[1];
          *(uint *)(lVar50 + 8 + lVar53) = puStack_c0[2];
          *(uint *)(lVar50 + 0xc + lVar53) = *puStack_c0;
          *(uint *)(lVar50 + 0x10 + lVar53) = puStack_c0[1];
          *(uint *)(lVar50 + 0x14 + lVar53) = puStack_c0[2];
          lVar50 = lVar50 + 0x18;
        } while (uVar44 < uVar51 / 6);
        uVar44 = uVar45 + 2 + uVar44;
      }
      if (uVar44 - 1 < uVar51 / 3) {
        lVar50 = lVar46 * param_4 + uVar43;
        lVar46 = uVar44 * 3 + -3;
        *(uint *)(lVar50 + lVar46 * 4) = *puStack_c0;
        *(uint *)(lVar50 + 4 + lVar46 * 4) = puStack_c0[1];
        *(uint *)(lVar50 + 8 + lVar46 * 4) = puStack_c0[2];
      }
    }
    goto LAB_14098c500;
  }
  uVar44 = uVar42;
  puStack_c0 = param_8;
  if (uVar47 != 0) {
    return uVar42;
  }
LAB_14098c754:
  auVar57 = _DAT_14308dc40;
  param_7 = param_7 & 0xf;
  if (param_7 == 6) {
    uVar49 = (ulonglong)iVar54;
    if (0 < (longlong)uVar49) {
      uVar55 = *param_5 * 3;
      uVar42 = uVar55 + 2;
      uVar43 = (longlong)uVar42 / 3;
      if (((param_4 < (longlong)uVar43) ||
          ((puVar3 = (uint *)((uVar49 - 1) * param_4 + (uVar43 * 3 + -3) * 4 + 0xb + param_3),
           puStack_c0 < puVar3 && (param_3 < (longlong)puStack_c0 + 3U)))) ||
         ((param_3 < (longlong)puStack_c0 + 0xbU && (puStack_c0 + 1 < puVar3)))) {
        uVar43 = 0;
        lVar46 = 0;
        do {
          if (0 < (longlong)uVar55) {
            lVar50 = 1;
            lVar53 = 0;
            if (uVar42 / 6 != 0) {
              lVar50 = param_3 + lVar46;
              uVar45 = 0;
              do {
                uVar44 = uVar45;
                uVar45 = uVar44 + 1;
                *(uint *)(lVar53 + lVar50) = *puStack_c0;
                *(uint *)(lVar53 + 4 + lVar50) = puStack_c0[1];
                *(uint *)(lVar53 + 8 + lVar50) = puStack_c0[2];
                *(uint *)(lVar53 + 0xc + lVar50) = *puStack_c0;
                *(uint *)(lVar53 + 0x10 + lVar50) = puStack_c0[1];
                *(uint *)(lVar53 + 0x14 + lVar50) = puStack_c0[2];
                lVar53 = lVar53 + 0x18;
              } while (uVar45 < uVar42 / 6);
              lVar50 = uVar44 + 2 + uVar45;
            }
            if (lVar50 - 1U < uVar42 / 3) {
              lVar50 = param_3 + (lVar50 * 3 + -3) * 4;
              *(uint *)(lVar50 + lVar46) = *puStack_c0;
              *(uint *)(lVar50 + 4 + lVar46) = puStack_c0[1];
              *(uint *)(lVar50 + 8 + lVar46) = puStack_c0[2];
            }
          }
          uVar43 = uVar43 + 1;
          lVar46 = lVar46 + param_4;
          uVar44 = uVar55;
        } while (uVar43 < uVar49);
      }
      else {
        uVar42 = 0;
        auVar57 = vmovdqu32_avx512f(_DAT_14308dc80);
        auVar58 = vmovdqu32_avx512f(_DAT_14308dcc0);
        uVar44 = 0;
        do {
          if (0 < (longlong)uVar55) {
            if ((longlong)uVar43 < 0x10) {
              uVar45 = 0;
            }
            else {
              uVar51 = 0;
              auVar59 = vmovdqu32_avx512f(_DAT_14308de40);
              lVar46 = 0;
              do {
                auVar63 = auVar58._0_16_;
                uVar19 = vpcmpeqb_avx512vl(auVar63,auVar63);
                uVar20 = vpcmpeqb_avx512vl(auVar63,auVar63);
                uVar21 = vpcmpeqb_avx512vl(auVar63,auVar63);
                auVar60 = vbroadcastss_avx512f(ZEXT416(*puStack_c0));
                vscatterdps_avx512f(ZEXT864(param_3 + uVar44 + lVar46) +
                                    auVar59 * (undefined1  [64])0x4,uVar19,auVar60);
                uVar51 = uVar51 + 0x10;
                auVar60 = vbroadcastss_avx512f(ZEXT416(puStack_c0[1]));
                vscatterdps_avx512f(ZEXT864(param_3 + 4 + uVar44 + lVar46) +
                                    auVar59 * (undefined1  [64])0x4,uVar20,auVar60);
                uVar45 = param_3 + 8 + uVar44 + lVar46;
                lVar46 = lVar46 + 0xc0;
                auVar60 = vbroadcastss_avx512f(ZEXT416(puStack_c0[2]));
                vscatterdps_avx512f(ZEXT864(uVar45) + auVar59 * (undefined1  [64])0x4,uVar21,auVar60
                                   );
                uVar45 = uVar43 & 0xfffffffffffffff0;
              } while (uVar51 < (uVar43 & 0xfffffffffffffff0));
            }
            if (uVar45 + 1 <= uVar43) {
              lVar46 = param_3 + uVar45 * 0xc;
              auVar59 = vpbroadcastq_avx512f();
              auVar60 = vbroadcastss_avx512f(ZEXT416(*puStack_c0));
              auVar62 = vmovdqu32_avx512f(_DAT_14308de40);
              uVar19 = vpcmpgtq_avx512f(auVar59,auVar57);
              uVar20 = vpcmpgtq_avx512f(auVar59,auVar58);
              uVar56 = CONCAT11((char)uVar20,(char)uVar19);
              vscatterdps_avx512f(ZEXT864(uVar44 + lVar46) + auVar62 * (undefined1  [64])0x4,
                                  (ulonglong)uVar56,auVar60);
              auVar59 = vbroadcastss_avx512f(ZEXT416(puStack_c0[1]));
              vscatterdps_avx512f(ZEXT864(uVar44 + 4 + lVar46) + auVar62 * (undefined1  [64])0x4,
                                  (ulonglong)uVar56,auVar59);
              auVar59 = vbroadcastss_avx512f(ZEXT416(puStack_c0[2]));
              vscatterdps_avx512f(ZEXT864(uVar44 + 8 + lVar46) + ZEXT864(0) +
                                  auVar62 * (undefined1  [64])0x4,(ulonglong)uVar56,auVar59);
            }
          }
          uVar42 = uVar42 + 1;
          uVar44 = uVar44 + param_4;
        } while (uVar42 < uVar49);
      }
    }
    return uVar44;
  }
  if (param_7 == 1) {
    uVar49 = 0;
    if (0 < iVar54) {
      uVar43 = (ulonglong)iVar54;
      auVar58 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar59 = vmovdqu32_avx512f(_DAT_14308dcc0);
      lVar46 = param_4 * uVar43 + param_3;
      uVar42 = *param_5 * 3;
      uVar44 = uVar42 & 0xfffffffffffffff0;
      do {
        if (0 < (longlong)uVar42) {
          if ((longlong)uVar42 < 0x10) {
            uVar55 = 0;
          }
          else {
            while (0x3a < (longlong)uVar42) {
              uVar51 = param_4 * uVar49 + param_3;
              uVar45 = uVar51 & 0x3f;
              if ((uVar51 & 3) == 0) {
                if ((uVar45 != 0) &&
                   (uVar45 = 0x40 - uVar45 >> 2, (longlong)uVar42 < (longlong)uVar45)) {
                  uVar45 = uVar42;
                }
              }
              else {
                uVar45 = 0;
              }
              uVar55 = uVar42 - (uVar42 - uVar45 & 0xf);
              if (uVar45 == 0) goto LAB_14098cc3c;
              uVar52 = 0;
              auVar61 = vpbroadcastq_avx512f();
              auVar60 = auVar59;
              auVar62 = auVar58;
              do {
                uVar19 = vpcmpgtq_avx512f(auVar61,auVar62);
                bVar23 = (byte)uVar19;
                uVar19 = vpcmpgtq_avx512f(auVar61,auVar60);
                bVar22 = (byte)uVar19;
                auVar62 = vpaddq_avx512f(auVar62,auVar57);
                auVar60 = vpaddq_avx512f(auVar60,auVar57);
                uVar56 = CONCAT11(bVar22,bVar23);
                piVar2 = (int *)(lVar46 + uVar52 * 4);
                iVar54 = piVar2[1];
                iVar48 = piVar2[2];
                iVar24 = piVar2[3];
                iVar25 = piVar2[4];
                iVar26 = piVar2[5];
                iVar27 = piVar2[6];
                iVar28 = piVar2[7];
                iVar29 = piVar2[8];
                iVar30 = piVar2[9];
                iVar31 = piVar2[10];
                iVar32 = piVar2[0xb];
                iVar33 = piVar2[0xc];
                iVar34 = piVar2[0xd];
                iVar35 = piVar2[0xe];
                iVar36 = piVar2[0xf];
                puVar3 = (uint *)(uVar51 + uVar52 * 4);
                bVar6 = (bool)((byte)(uVar56 >> 1) & 1);
                bVar7 = (bool)((byte)(uVar56 >> 2) & 1);
                bVar8 = (bool)((byte)(uVar56 >> 3) & 1);
                bVar9 = (bool)((byte)(uVar56 >> 4) & 1);
                bVar10 = (bool)((byte)(uVar56 >> 5) & 1);
                bVar11 = (bool)((byte)(uVar56 >> 6) & 1);
                bVar12 = (bool)((byte)(uVar56 >> 7) & 1);
                bVar13 = (bool)(bVar22 >> 1 & 1);
                bVar14 = (bool)(bVar22 >> 2 & 1);
                bVar15 = (bool)(bVar22 >> 3 & 1);
                bVar16 = (bool)(bVar22 >> 4 & 1);
                bVar17 = (bool)(bVar22 >> 5 & 1);
                bVar18 = (bool)(bVar22 >> 6 & 1);
                *puVar3 = (uint)(bVar23 & 1) * (uint)(bVar23 & 1) * *piVar2 |
                          (uint)!(bool)(bVar23 & 1) * *puVar3;
                puVar3[1] = (uint)bVar6 * (uint)((byte)(uVar56 >> 1) & 1) * iVar54 |
                            (uint)!bVar6 * puVar3[1];
                puVar3[2] = (uint)bVar7 * (uint)((byte)(uVar56 >> 2) & 1) * iVar48 |
                            (uint)!bVar7 * puVar3[2];
                puVar3[3] = (uint)bVar8 * (uint)((byte)(uVar56 >> 3) & 1) * iVar24 |
                            (uint)!bVar8 * puVar3[3];
                puVar3[4] = (uint)bVar9 * (uint)((byte)(uVar56 >> 4) & 1) * iVar25 |
                            (uint)!bVar9 * puVar3[4];
                puVar3[5] = (uint)bVar10 * (uint)((byte)(uVar56 >> 5) & 1) * iVar26 |
                            (uint)!bVar10 * puVar3[5];
                puVar3[6] = (uint)bVar11 * (uint)((byte)(uVar56 >> 6) & 1) * iVar27 |
                            (uint)!bVar11 * puVar3[6];
                puVar3[7] = (uint)bVar12 * (uint)((byte)(uVar56 >> 7) & 1) * iVar28 |
                            (uint)!bVar12 * puVar3[7];
                puVar3[8] = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * iVar29 |
                            (uint)!(bool)(bVar22 & 1) * puVar3[8];
                puVar3[9] = (uint)bVar13 * (uint)(bVar22 >> 1 & 1) * iVar30 |
                            (uint)!bVar13 * puVar3[9];
                puVar3[10] = (uint)bVar14 * (uint)(bVar22 >> 2 & 1) * iVar31 |
                             (uint)!bVar14 * puVar3[10];
                puVar3[0xb] = (uint)bVar15 * (uint)(bVar22 >> 3 & 1) * iVar32 |
                              (uint)!bVar15 * puVar3[0xb];
                puVar3[0xc] = (uint)bVar16 * (uint)(bVar22 >> 4 & 1) * iVar33 |
                              (uint)!bVar16 * puVar3[0xc];
                puVar3[0xd] = (uint)bVar17 * (uint)(bVar22 >> 5 & 1) * iVar34 |
                              (uint)!bVar17 * puVar3[0xd];
                puVar3[0xe] = (uint)bVar18 * (uint)(bVar22 >> 6 & 1) * iVar35 |
                              (uint)!bVar18 * puVar3[0xe];
                puVar3[0xf] = (uint)(bVar22 >> 7) * (uint)(bVar22 >> 7) * iVar36 |
                              (uint)!(bool)(bVar22 >> 7) * puVar3[0xf];
                uVar52 = uVar52 + 0x10;
              } while (uVar52 < uVar45);
              if (uVar42 != uVar45) goto LAB_14098cc3c;
              uVar49 = uVar49 + 1;
              if (uVar43 <= uVar49) {
                return uVar44;
              }
            }
            uVar45 = 0;
            uVar55 = uVar44;
LAB_14098cc3c:
            if ((longlong)(uVar45 + 0x10) <= (longlong)uVar55) {
              do {
                puVar4 = (undefined8 *)(lVar46 + uVar45 * 4);
                uVar19 = puVar4[1];
                uVar20 = puVar4[2];
                uVar21 = puVar4[3];
                uVar38 = puVar4[4];
                uVar39 = puVar4[5];
                uVar40 = puVar4[6];
                uVar41 = puVar4[7];
                puVar5 = (undefined8 *)(param_4 * uVar49 + param_3 + uVar45 * 4);
                *puVar5 = *puVar4;
                puVar5[1] = uVar19;
                puVar5[2] = uVar20;
                puVar5[3] = uVar21;
                puVar5[4] = uVar38;
                puVar5[5] = uVar39;
                puVar5[6] = uVar40;
                puVar5[7] = uVar41;
                uVar45 = uVar45 + 0x10;
              } while (uVar45 < uVar55);
            }
          }
          if (uVar55 + 1 <= uVar42) {
            auVar60 = vpbroadcastq_avx512f();
            uVar19 = vpcmpgtq_avx512f(auVar60,auVar58);
            bVar23 = (byte)uVar19;
            uVar19 = vpcmpgtq_avx512f(auVar60,auVar59);
            bVar22 = (byte)uVar19;
            uVar56 = CONCAT11(bVar22,bVar23);
            piVar2 = (int *)(lVar46 + uVar55 * 4);
            iVar54 = piVar2[1];
            iVar48 = piVar2[2];
            iVar24 = piVar2[3];
            iVar25 = piVar2[4];
            iVar26 = piVar2[5];
            iVar27 = piVar2[6];
            iVar28 = piVar2[7];
            iVar29 = piVar2[8];
            iVar30 = piVar2[9];
            iVar31 = piVar2[10];
            iVar32 = piVar2[0xb];
            iVar33 = piVar2[0xc];
            iVar34 = piVar2[0xd];
            iVar35 = piVar2[0xe];
            iVar36 = piVar2[0xf];
            puVar3 = (uint *)(param_4 * uVar49 + param_3 + uVar55 * 4);
            bVar6 = (bool)((byte)(uVar56 >> 1) & 1);
            bVar7 = (bool)((byte)(uVar56 >> 2) & 1);
            bVar8 = (bool)((byte)(uVar56 >> 3) & 1);
            bVar9 = (bool)((byte)(uVar56 >> 4) & 1);
            bVar10 = (bool)((byte)(uVar56 >> 5) & 1);
            bVar11 = (bool)((byte)(uVar56 >> 6) & 1);
            bVar12 = (bool)((byte)(uVar56 >> 7) & 1);
            bVar13 = (bool)(bVar22 >> 1 & 1);
            bVar14 = (bool)(bVar22 >> 2 & 1);
            bVar15 = (bool)(bVar22 >> 3 & 1);
            bVar16 = (bool)(bVar22 >> 4 & 1);
            bVar17 = (bool)(bVar22 >> 5 & 1);
            bVar18 = (bool)(bVar22 >> 6 & 1);
            *puVar3 = (uint)(bVar23 & 1) * (uint)(bVar23 & 1) * *piVar2 |
                      (uint)!(bool)(bVar23 & 1) * *puVar3;
            puVar3[1] = (uint)bVar6 * (uint)((byte)(uVar56 >> 1) & 1) * iVar54 |
                        (uint)!bVar6 * puVar3[1];
            puVar3[2] = (uint)bVar7 * (uint)((byte)(uVar56 >> 2) & 1) * iVar48 |
                        (uint)!bVar7 * puVar3[2];
            puVar3[3] = (uint)bVar8 * (uint)((byte)(uVar56 >> 3) & 1) * iVar24 |
                        (uint)!bVar8 * puVar3[3];
            puVar3[4] = (uint)bVar9 * (uint)((byte)(uVar56 >> 4) & 1) * iVar25 |
                        (uint)!bVar9 * puVar3[4];
            puVar3[5] = (uint)bVar10 * (uint)((byte)(uVar56 >> 5) & 1) * iVar26 |
                        (uint)!bVar10 * puVar3[5];
            puVar3[6] = (uint)bVar11 * (uint)((byte)(uVar56 >> 6) & 1) * iVar27 |
                        (uint)!bVar11 * puVar3[6];
            puVar3[7] = (uint)bVar12 * (uint)((byte)(uVar56 >> 7) & 1) * iVar28 |
                        (uint)!bVar12 * puVar3[7];
            puVar3[8] = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * iVar29 |
                        (uint)!(bool)(bVar22 & 1) * puVar3[8];
            puVar3[9] = (uint)bVar13 * (uint)(bVar22 >> 1 & 1) * iVar30 | (uint)!bVar13 * puVar3[9];
            puVar3[10] = (uint)bVar14 * (uint)(bVar22 >> 2 & 1) * iVar31 |
                         (uint)!bVar14 * puVar3[10];
            puVar3[0xb] = (uint)bVar15 * (uint)(bVar22 >> 3 & 1) * iVar32 |
                          (uint)!bVar15 * puVar3[0xb];
            puVar3[0xc] = (uint)bVar16 * (uint)(bVar22 >> 4 & 1) * iVar33 |
                          (uint)!bVar16 * puVar3[0xc];
            puVar3[0xd] = (uint)bVar17 * (uint)(bVar22 >> 5 & 1) * iVar34 |
                          (uint)!bVar17 * puVar3[0xd];
            puVar3[0xe] = (uint)bVar18 * (uint)(bVar22 >> 6 & 1) * iVar35 |
                          (uint)!bVar18 * puVar3[0xe];
            puVar3[0xf] = (uint)(bVar22 >> 7) * (uint)(bVar22 >> 7) * iVar36 |
                          (uint)!(bool)(bVar22 >> 7) * puVar3[0xf];
          }
        }
        uVar49 = uVar49 + 1;
      } while (uVar49 < uVar43);
    }
  }
  else if (param_7 == 3) {
    lVar46 = (longlong)iVar54;
    if ((uStack_b8 & 0xf0) == 0xf0) {
      uVar44 = (*(code *)(&PTR_LAB_14308df60)[uVar42])
                         (param_1 + param_2 * lVar46,param_3,*param_5,param_9);
    }
    else {
      if (((lVar46 < 0) || ((longlong)param_5[1] <= lVar46)) && (uStack_b8 != 0xf0)) {
        uVar49 = param_5[1];
        if ((longlong)uVar49 < 2) {
          if (lVar46 < 0) {
            lVar46 = -lVar46;
            if ((uStack_b8 & 0x20) == 0) {
              lVar46 = 0;
            }
          }
          else if ((0 < lVar46) && ((uStack_b8 & 0x20) == 0)) {
            lVar46 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar46 < 0; lVar46 = -lVar46) {
            }
            if ((lVar46 < (longlong)uVar49) || ((uStack_b8 & 0x20) != 0)) break;
            lVar46 = (uVar49 - 1) * 2 - lVar46;
          }
        }
      }
      uVar44 = FUN_14098d1a0(param_1,param_2,lVar46,param_3);
    }
    auVar57 = _DAT_14308dc40;
    lVar46 = 1;
    uVar49 = 0;
    if (1 < iVar54) {
      auVar58 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar59 = vmovdqu32_avx512f(_DAT_14308dcc0);
      uVar44 = *param_5;
      lVar50 = ((longlong)param_10 + -1) * param_4 + param_3;
      uVar42 = uVar44 * 3;
      do {
        if (0 < (longlong)uVar42) {
          if ((longlong)uVar42 < 0x10) {
            uVar43 = 0;
          }
          else {
            while (0x3a < (longlong)uVar42) {
              uVar55 = param_3 + param_4 * lVar46;
              uVar45 = uVar55 & 0x3f;
              if ((uVar55 & 3) == 0) {
                if ((uVar45 != 0) &&
                   (uVar45 = 0x40 - uVar45 >> 2, (longlong)uVar42 < (longlong)uVar45)) {
                  uVar45 = uVar42;
                }
              }
              else {
                uVar45 = 0;
              }
              uVar43 = uVar42 - (uVar42 - uVar45 & 0xf);
              if (uVar45 == 0) goto LAB_14098c9bc;
              uVar44 = 0;
              auVar61 = vpbroadcastq_avx512f();
              auVar60 = auVar59;
              auVar62 = auVar58;
              do {
                uVar19 = vpcmpgtq_avx512f(auVar61,auVar62);
                bVar23 = (byte)uVar19;
                uVar19 = vpcmpgtq_avx512f(auVar61,auVar60);
                bVar22 = (byte)uVar19;
                auVar62 = vpaddq_avx512f(auVar62,auVar57);
                auVar60 = vpaddq_avx512f(auVar60,auVar57);
                uVar56 = CONCAT11(bVar22,bVar23);
                piVar2 = (int *)((lVar50 - param_4 * lVar46) + uVar44 * 4);
                iVar48 = piVar2[1];
                iVar24 = piVar2[2];
                iVar25 = piVar2[3];
                iVar26 = piVar2[4];
                iVar27 = piVar2[5];
                iVar28 = piVar2[6];
                iVar29 = piVar2[7];
                iVar30 = piVar2[8];
                iVar31 = piVar2[9];
                iVar32 = piVar2[10];
                iVar33 = piVar2[0xb];
                iVar34 = piVar2[0xc];
                iVar35 = piVar2[0xd];
                iVar36 = piVar2[0xe];
                iVar37 = piVar2[0xf];
                puVar3 = (uint *)(uVar55 + uVar44 * 4);
                bVar6 = (bool)((byte)(uVar56 >> 1) & 1);
                bVar7 = (bool)((byte)(uVar56 >> 2) & 1);
                bVar8 = (bool)((byte)(uVar56 >> 3) & 1);
                bVar9 = (bool)((byte)(uVar56 >> 4) & 1);
                bVar10 = (bool)((byte)(uVar56 >> 5) & 1);
                bVar11 = (bool)((byte)(uVar56 >> 6) & 1);
                bVar12 = (bool)((byte)(uVar56 >> 7) & 1);
                bVar13 = (bool)(bVar22 >> 1 & 1);
                bVar14 = (bool)(bVar22 >> 2 & 1);
                bVar15 = (bool)(bVar22 >> 3 & 1);
                bVar16 = (bool)(bVar22 >> 4 & 1);
                bVar17 = (bool)(bVar22 >> 5 & 1);
                bVar18 = (bool)(bVar22 >> 6 & 1);
                *puVar3 = (uint)(bVar23 & 1) * (uint)(bVar23 & 1) * *piVar2 |
                          (uint)!(bool)(bVar23 & 1) * *puVar3;
                puVar3[1] = (uint)bVar6 * (uint)((byte)(uVar56 >> 1) & 1) * iVar48 |
                            (uint)!bVar6 * puVar3[1];
                puVar3[2] = (uint)bVar7 * (uint)((byte)(uVar56 >> 2) & 1) * iVar24 |
                            (uint)!bVar7 * puVar3[2];
                puVar3[3] = (uint)bVar8 * (uint)((byte)(uVar56 >> 3) & 1) * iVar25 |
                            (uint)!bVar8 * puVar3[3];
                puVar3[4] = (uint)bVar9 * (uint)((byte)(uVar56 >> 4) & 1) * iVar26 |
                            (uint)!bVar9 * puVar3[4];
                puVar3[5] = (uint)bVar10 * (uint)((byte)(uVar56 >> 5) & 1) * iVar27 |
                            (uint)!bVar10 * puVar3[5];
                puVar3[6] = (uint)bVar11 * (uint)((byte)(uVar56 >> 6) & 1) * iVar28 |
                            (uint)!bVar11 * puVar3[6];
                puVar3[7] = (uint)bVar12 * (uint)((byte)(uVar56 >> 7) & 1) * iVar29 |
                            (uint)!bVar12 * puVar3[7];
                puVar3[8] = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * iVar30 |
                            (uint)!(bool)(bVar22 & 1) * puVar3[8];
                puVar3[9] = (uint)bVar13 * (uint)(bVar22 >> 1 & 1) * iVar31 |
                            (uint)!bVar13 * puVar3[9];
                puVar3[10] = (uint)bVar14 * (uint)(bVar22 >> 2 & 1) * iVar32 |
                             (uint)!bVar14 * puVar3[10];
                puVar3[0xb] = (uint)bVar15 * (uint)(bVar22 >> 3 & 1) * iVar33 |
                              (uint)!bVar15 * puVar3[0xb];
                puVar3[0xc] = (uint)bVar16 * (uint)(bVar22 >> 4 & 1) * iVar34 |
                              (uint)!bVar16 * puVar3[0xc];
                puVar3[0xd] = (uint)bVar17 * (uint)(bVar22 >> 5 & 1) * iVar35 |
                              (uint)!bVar17 * puVar3[0xd];
                puVar3[0xe] = (uint)bVar18 * (uint)(bVar22 >> 6 & 1) * iVar36 |
                              (uint)!bVar18 * puVar3[0xe];
                puVar3[0xf] = (uint)(bVar22 >> 7) * (uint)(bVar22 >> 7) * iVar37 |
                              (uint)!(bool)(bVar22 >> 7) * puVar3[0xf];
                uVar44 = uVar44 + 0x10;
              } while (uVar44 < uVar45);
              if (uVar42 != uVar45) goto LAB_14098c9bc;
              lVar46 = uVar49 + 2;
              uVar49 = uVar49 + 1;
              if ((ulonglong)(longlong)(iVar54 + -1) <= uVar49) {
                return uVar45;
              }
            }
            uVar45 = 0;
            uVar43 = uVar42 & 0xfffffffffffffff0;
LAB_14098c9bc:
            if ((longlong)(uVar45 + 0x10) <= (longlong)uVar43) {
              do {
                puVar4 = (undefined8 *)((lVar50 - param_4 * lVar46) + uVar45 * 4);
                uVar19 = puVar4[1];
                uVar20 = puVar4[2];
                uVar21 = puVar4[3];
                uVar38 = puVar4[4];
                uVar39 = puVar4[5];
                uVar40 = puVar4[6];
                uVar41 = puVar4[7];
                puVar5 = (undefined8 *)(param_3 + param_4 * lVar46 + uVar45 * 4);
                *puVar5 = *puVar4;
                puVar5[1] = uVar19;
                puVar5[2] = uVar20;
                puVar5[3] = uVar21;
                puVar5[4] = uVar38;
                puVar5[5] = uVar39;
                puVar5[6] = uVar40;
                puVar5[7] = uVar41;
                uVar45 = uVar45 + 0x10;
              } while (uVar45 < uVar43);
            }
          }
          uVar44 = uVar43 + 1;
          if (uVar44 <= uVar42) {
            uVar44 = uVar42 - uVar43;
            auVar60 = vpbroadcastq_avx512f();
            uVar19 = vpcmpgtq_avx512f(auVar60,auVar58);
            bVar23 = (byte)uVar19;
            uVar19 = vpcmpgtq_avx512f(auVar60,auVar59);
            bVar22 = (byte)uVar19;
            uVar56 = CONCAT11(bVar22,bVar23);
            piVar2 = (int *)((lVar50 - lVar46 * param_4) + uVar43 * 4);
            iVar48 = piVar2[1];
            iVar24 = piVar2[2];
            iVar25 = piVar2[3];
            iVar26 = piVar2[4];
            iVar27 = piVar2[5];
            iVar28 = piVar2[6];
            iVar29 = piVar2[7];
            iVar30 = piVar2[8];
            iVar31 = piVar2[9];
            iVar32 = piVar2[10];
            iVar33 = piVar2[0xb];
            iVar34 = piVar2[0xc];
            iVar35 = piVar2[0xd];
            iVar36 = piVar2[0xe];
            iVar37 = piVar2[0xf];
            puVar3 = (uint *)(lVar46 * param_4 + param_3 + uVar43 * 4);
            bVar6 = (bool)((byte)(uVar56 >> 1) & 1);
            bVar7 = (bool)((byte)(uVar56 >> 2) & 1);
            bVar8 = (bool)((byte)(uVar56 >> 3) & 1);
            bVar9 = (bool)((byte)(uVar56 >> 4) & 1);
            bVar10 = (bool)((byte)(uVar56 >> 5) & 1);
            bVar11 = (bool)((byte)(uVar56 >> 6) & 1);
            bVar12 = (bool)((byte)(uVar56 >> 7) & 1);
            bVar13 = (bool)(bVar22 >> 1 & 1);
            bVar14 = (bool)(bVar22 >> 2 & 1);
            bVar15 = (bool)(bVar22 >> 3 & 1);
            bVar16 = (bool)(bVar22 >> 4 & 1);
            bVar17 = (bool)(bVar22 >> 5 & 1);
            bVar18 = (bool)(bVar22 >> 6 & 1);
            *puVar3 = (uint)(bVar23 & 1) * (uint)(bVar23 & 1) * *piVar2 |
                      (uint)!(bool)(bVar23 & 1) * *puVar3;
            puVar3[1] = (uint)bVar6 * (uint)((byte)(uVar56 >> 1) & 1) * iVar48 |
                        (uint)!bVar6 * puVar3[1];
            puVar3[2] = (uint)bVar7 * (uint)((byte)(uVar56 >> 2) & 1) * iVar24 |
                        (uint)!bVar7 * puVar3[2];
            puVar3[3] = (uint)bVar8 * (uint)((byte)(uVar56 >> 3) & 1) * iVar25 |
                        (uint)!bVar8 * puVar3[3];
            puVar3[4] = (uint)bVar9 * (uint)((byte)(uVar56 >> 4) & 1) * iVar26 |
                        (uint)!bVar9 * puVar3[4];
            puVar3[5] = (uint)bVar10 * (uint)((byte)(uVar56 >> 5) & 1) * iVar27 |
                        (uint)!bVar10 * puVar3[5];
            puVar3[6] = (uint)bVar11 * (uint)((byte)(uVar56 >> 6) & 1) * iVar28 |
                        (uint)!bVar11 * puVar3[6];
            puVar3[7] = (uint)bVar12 * (uint)((byte)(uVar56 >> 7) & 1) * iVar29 |
                        (uint)!bVar12 * puVar3[7];
            puVar3[8] = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * iVar30 |
                        (uint)!(bool)(bVar22 & 1) * puVar3[8];
            puVar3[9] = (uint)bVar13 * (uint)(bVar22 >> 1 & 1) * iVar31 | (uint)!bVar13 * puVar3[9];
            puVar3[10] = (uint)bVar14 * (uint)(bVar22 >> 2 & 1) * iVar32 |
                         (uint)!bVar14 * puVar3[10];
            puVar3[0xb] = (uint)bVar15 * (uint)(bVar22 >> 3 & 1) * iVar33 |
                          (uint)!bVar15 * puVar3[0xb];
            puVar3[0xc] = (uint)bVar16 * (uint)(bVar22 >> 4 & 1) * iVar34 |
                          (uint)!bVar16 * puVar3[0xc];
            puVar3[0xd] = (uint)bVar17 * (uint)(bVar22 >> 5 & 1) * iVar35 |
                          (uint)!bVar17 * puVar3[0xd];
            puVar3[0xe] = (uint)bVar18 * (uint)(bVar22 >> 6 & 1) * iVar36 |
                          (uint)!bVar18 * puVar3[0xe];
            puVar3[0xf] = (uint)(bVar22 >> 7) * (uint)(bVar22 >> 7) * iVar37 |
                          (uint)!(bool)(bVar22 >> 7) * puVar3[0xf];
          }
        }
        lVar46 = uVar49 + 2;
        uVar49 = uVar49 + 1;
      } while (uVar49 < (ulonglong)(longlong)(iVar54 + -1));
    }
  }
  return uVar44;
joined_r0x00014098c182:
  if (((((param_7 & 0xf) != 1) && ((param_7 & 0xf) == 3)) &&
      (uVar45 = param_5[1], 1 < (longlong)uVar45)) &&
     (((longlong)uVar49 < 0 || ((longlong)uVar45 <= (longlong)uVar49)))) {
    uVar44 = uVar49;
    if ((longlong)uVar49 < 0) goto LAB_14098c5c0;
    while ((param_7 & 0x20) == 0) {
      for (uVar44 = (uVar45 - 1) * 2 - uVar44; (longlong)uVar44 < 0; uVar44 = -uVar44) {
LAB_14098c5c0:
        if (uVar47 != 0) goto LAB_14098c221;
      }
      if ((longlong)uVar44 < (longlong)uVar45) break;
    }
  }
  goto LAB_14098c221;
}


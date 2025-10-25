
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409e3dc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9,
                  int param_10,undefined8 param_11)

{
  int *piVar1;
  uint *puVar2;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  byte bVar22;
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
  int iVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ushort *puVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  longlong lVar44;
  uint uVar45;
  longlong lVar46;
  longlong lVar47;
  int iVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ushort uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 in_ZMM16 [64];
  longlong *in_stack_fffffffffffffe48;
  undefined4 uVar67;
  longlong lStack_178;
  longlong lStack_170;
  ushort *puStack_c8;
  uint uStack_c0;
  longlong lStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  longlong lStack_a0;
  int iStack_98;
  uint uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  uint uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  
  uVar67 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  lVar44 = 0;
  lStack_58 = (longlong)param_6;
  uVar49 = 0;
  lVar46 = 0;
  iStack_68 = param_10;
  uVar45 = param_7 & 0x10;
  iStack_98 = param_10 >> 1;
  uStack_60 = param_9;
  uStack_70 = param_11;
  lStack_a0 = param_3;
  lStack_50 = param_1;
  lStack_48 = param_2;
  if (0 < iStack_98) {
    uStack_40 = (ulonglong)iStack_98;
    vmovdqu32_avx512f(_DAT_14308e300);
    vmovdqu32_avx512f(_DAT_14308e340);
    uStack_78 = param_7 & 0xf0;
    param_3 = param_4 * uStack_40 + param_3;
    uStack_90 = param_7 & 0xf;
    uStack_b0 = param_7 & 0x20;
    uStack_a8 = uVar45;
    if (uStack_78 == 0xf0) {
      lStack_178 = 0;
      puStack_c8 = param_8;
      uStack_c0 = param_7;
      lVar46 = lStack_178;
      lVar47 = param_3;
      puVar41 = puStack_c8;
      uVar45 = uStack_c0;
      lVar51 = param_4;
      goto LAB_1409e430c;
    }
    uVar49 = 0;
    lVar47 = param_3;
LAB_1409e3eda:
    auVar56 = in_ZMM16._0_16_;
    uVar50 = uVar49;
    if ((param_5[1] <= (longlong)uVar49) && (param_7 != 0xf0)) {
      if (uStack_90 == 6) {
        if (uStack_b0 == 0) goto LAB_1409e402c;
      }
      else {
        if (uStack_90 != 1) goto LAB_1409e3f20;
        if (uStack_b0 == 0) {
          uVar50 = param_5[1] - 1;
        }
      }
    }
LAB_1409e3fc0:
    do {
      in_stack_fffffffffffffe48 = &lStack_88;
      lStack_88 = *param_5;
      lStack_80 = param_5[1];
      FUN_1409e4ce0(lStack_50,lStack_48,uVar50,param_3,in_stack_fffffffffffffe48,(int)lStack_58,
                    param_7,param_8,uStack_60,iStack_68,uStack_70);
      while( true ) {
        while( true ) {
          uVar18 = uStack_70;
          uVar67 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
          auVar56 = in_ZMM16._0_16_;
          iVar48 = (int)uVar49;
          uVar49 = uVar49 + 1;
          lVar46 = lVar46 + param_4;
          lVar44 = (longlong)iVar48 + 1;
          if (uStack_40 <= uVar49) {
            uVar45 = uStack_90;
            if (uStack_a8 != 0) {
              lVar44 = 0;
              lVar47 = -uStack_40;
              lVar46 = lStack_a0;
              lStack_b8 = param_4;
              do {
                lStack_178 = *param_5;
                lStack_170 = param_5[1];
                FUN_1409e4ce0(lStack_50,lStack_48,lVar47,lVar46,&lStack_178,(int)lStack_58,param_7,
                              param_8,uStack_60,iStack_68,uVar18);
                lVar44 = lVar44 + 1;
                lVar47 = lVar47 + 1;
                lVar46 = lVar46 + lStack_b8;
              } while (lVar44 < (longlong)uStack_40);
              return;
            }
            goto LAB_1409e43d4;
          }
          param_3 = lVar47 + lVar46;
          puVar41 = param_8;
          uVar45 = param_7;
          lVar51 = param_4;
          if (uStack_78 != 0xf0) break;
LAB_1409e430c:
          lStack_b8 = lVar51;
          uStack_c0 = uVar45;
          puStack_c8 = puVar41;
          lStack_170 = lVar47;
          lStack_178 = lVar46;
          in_stack_fffffffffffffe48 = (longlong *)CONCAT44(uVar67,iStack_68);
          (*(code *)(&PTR_LAB_14308e560)[lStack_58])
                    (lStack_48 * uVar49 + lStack_50,param_3,*param_5,uStack_60,
                     in_stack_fffffffffffffe48);
          lVar47 = lStack_170;
          lVar46 = lStack_178;
          param_8 = puStack_c8;
          param_4 = lStack_b8;
          param_7 = uStack_c0;
        }
        if (-1 < (longlong)uVar49) goto LAB_1409e3eda;
        uVar50 = uVar49;
        if (param_7 == 0xf0) goto LAB_1409e3fc0;
        if (uStack_90 != 6) break;
        if (uStack_a8 != 0) goto LAB_1409e3fc0;
LAB_1409e402c:
        auVar56 = vxorps_avx512vl(auVar56,auVar56);
        auVar64._0_4_ = (float)param_8[2];
        auVar64._4_8_ = SUB128(ZEXT812(0),4);
        auVar64._12_4_ = 0;
        auVar56 = vcvtsi2ss_avx512f(auVar56,(uint)*param_8);
        in_ZMM16 = ZEXT1664(auVar56);
        auVar65._0_4_ = (float)param_8[1];
        auVar65._4_8_ = SUB128(ZEXT812(0),4);
        auVar65._12_4_ = 0;
        if (0 < *param_5 * 3) {
          uVar50 = (*param_5 * 3 + 2) / 3;
          if ((longlong)uVar50 < 0x10) {
            uVar42 = 0;
          }
          else {
            auVar57 = vmovdqu32_avx512f(_DAT_14308e400);
            auVar58 = vbroadcastss_avx512f(auVar56);
            auVar59 = vbroadcastss_avx512f(auVar65);
            auVar60 = vbroadcastss_avx512f(auVar64);
            uVar53 = 0;
            uVar42 = uVar50 & 0xfffffffffffffff0;
            lVar51 = 0;
            do {
              auVar63 = auVar57._0_16_;
              uVar18 = vpcmpeqb_avx512vl(auVar63,auVar63);
              uVar43 = param_4 * lVar44 + lVar47 + lVar51;
              uVar19 = vpcmpeqb_avx512vl(auVar63,auVar63);
              uVar20 = vpcmpeqb_avx512vl(auVar63,auVar63);
              vscatterdps_avx512f(ZEXT864(uVar43) + ZEXT864(8) + auVar57 * (undefined1  [64])0x4,
                                  uVar18,auVar60);
              vscatterdps_avx512f(ZEXT864(uVar43) + ZEXT864(4) + auVar57 * (undefined1  [64])0x4,
                                  uVar19,auVar59);
              vscatterdps_avx512f(ZEXT864(uVar43) + auVar57 * (undefined1  [64])0x4,uVar20,auVar58);
              uVar53 = uVar53 + 0x10;
              lVar51 = lVar51 + 0xc0;
            } while (uVar53 < uVar42);
          }
          if (uVar42 + 1 <= uVar50) {
            auVar57 = vmovdqu32_avx512f(_DAT_14308e400);
            auVar58 = vbroadcastss_avx512f(auVar56);
            auVar59 = vbroadcastss_avx512f(auVar65);
            auVar60 = vbroadcastss_avx512f(auVar64);
            auVar61 = vpbroadcastq_avx512f();
            uVar18 = vpcmpgtq_avx512f(auVar61,_DAT_14308e300);
            uVar19 = vpcmpgtq_avx512f(auVar61,_DAT_14308e340);
            uVar55 = CONCAT11((char)uVar19,(char)uVar18);
            uVar50 = lVar44 * param_4 + lVar47 + uVar42 * 0xc;
            vscatterdps_avx512f(ZEXT864(uVar50) + auVar57 * (undefined1  [64])0x4,(ulonglong)uVar55,
                                auVar58);
            vscatterdps_avx512f(ZEXT864(uVar50) + ZEXT864(4) + auVar57 * (undefined1  [64])0x4,
                                (ulonglong)uVar55,auVar59);
            vscatterdps_avx512f(ZEXT864(uVar50) + ZEXT864(8) + auVar57 * (undefined1  [64])0x4,
                                (ulonglong)uVar55,auVar60);
          }
        }
      }
      if (uStack_90 != 1) goto LAB_1409e3f20;
      uVar50 = 0;
      if (uStack_a8 != 0) {
        uVar50 = uVar49;
      }
    } while( true );
  }
  if (uVar45 != 0) {
    return;
  }
  uVar45 = param_7 & 0xf;
LAB_1409e43d4:
  auVar57 = _DAT_14308e2c0;
  if (uVar45 == 6) {
    uVar49 = 0;
    lVar46 = 0;
    auVar56._0_4_ = (float)*param_8;
    auVar56._4_8_ = SUB128(ZEXT812(0),4);
    auVar56._12_4_ = 0;
    auVar63._0_4_ = (float)param_8[1];
    auVar63._4_8_ = SUB128(ZEXT812(0),4);
    auVar63._12_4_ = 0;
    auVar66._0_4_ = (float)param_8[2];
    auVar66._4_8_ = SUB128(ZEXT812(0),4);
    auVar66._12_4_ = 0;
    if (0 < iStack_98) {
      auVar57 = vmovdqu32_avx512f(_DAT_14308e300);
      auVar58 = vmovdqu32_avx512f(_DAT_14308e340);
      auVar59 = vbroadcastss_avx512f(auVar56);
      auVar60 = vbroadcastss_avx512f(auVar63);
      auVar61 = vbroadcastss_avx512f(auVar66);
      uVar50 = (*param_5 * 3 + 2) / 3;
      do {
        if (0 < *param_5 * 3) {
          if ((longlong)uVar50 < 0x10) {
            uVar42 = 0;
          }
          else {
            uVar53 = 0;
            auVar62 = vmovdqu32_avx512f(_DAT_14308e400);
            lVar44 = 0;
            do {
              auVar56 = auVar61._0_16_;
              uVar18 = vpcmpeqb_avx512vl(auVar56,auVar56);
              uVar42 = lStack_a0 + lVar46 + lVar44;
              uVar19 = vpcmpeqb_avx512vl(auVar56,auVar56);
              uVar20 = vpcmpeqb_avx512vl(auVar56,auVar56);
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(8) + auVar62 * (undefined1  [64])0x4,
                                  uVar18,auVar61);
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(4) + auVar62 * (undefined1  [64])0x4,
                                  uVar19,auVar60);
              vscatterdps_avx512f(ZEXT864(uVar42) + auVar62 * (undefined1  [64])0x4,uVar20,auVar59);
              uVar53 = uVar53 + 0x10;
              lVar44 = lVar44 + 0xc0;
              uVar42 = uVar50 & 0xfffffffffffffff0;
            } while (uVar53 < (uVar50 & 0xfffffffffffffff0));
          }
          if (uVar42 + 1 <= uVar50) {
            auVar62 = vpbroadcastq_avx512f();
            lVar44 = lStack_a0 + uVar42 * 0xc;
            vmovdqu32_avx512f(_DAT_14308e400);
            uVar18 = vpcmpgtq_avx512f(auVar62,auVar57);
            uVar19 = vpcmpgtq_avx512f(auVar62,auVar58);
            uVar55 = CONCAT11((char)uVar19,(char)uVar18);
            vscatterdps_avx512f(ZEXT864((ulonglong)(lVar46 + lVar44)) +
                                auVar61 * (undefined1  [64])0x4,(ulonglong)uVar55,auVar59);
            vscatterdps_avx512f(ZEXT864((ulonglong)(lVar46 + 4 + lVar44)) +
                                auVar61 * (undefined1  [64])0x4,(ulonglong)uVar55,auVar60);
            vscatterdps_avx512f(ZEXT864((ulonglong)(lVar46 + 8 + lVar44)) +
                                auVar61 * (undefined1  [64])0x4,(ulonglong)uVar55,auVar61);
          }
        }
        uVar49 = uVar49 + 1;
        lVar46 = lVar46 + param_4;
      } while (uVar49 < (ulonglong)(longlong)iStack_98);
    }
    return;
  }
  if (uVar45 == 1) {
    uVar49 = 0;
    if (0 < iStack_98) {
      uVar42 = (ulonglong)iStack_98;
      auVar58 = vmovdqu32_avx512f(_DAT_14308e300);
      auVar59 = vmovdqu32_avx512f(_DAT_14308e340);
      lVar46 = param_4 * uVar42 + lStack_a0;
      uVar50 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar50) {
          if ((longlong)uVar50 < 0x10) {
            uVar53 = 0;
          }
          else {
            while (0x3a < (longlong)uVar50) {
              uVar54 = param_4 * uVar49 + lStack_a0;
              uVar43 = uVar54 & 0x3f;
              if ((uVar54 & 3) == 0) {
                if ((uVar43 != 0) &&
                   (uVar43 = 0x40 - uVar43 >> 2, (longlong)uVar50 < (longlong)uVar43)) {
                  uVar43 = uVar50;
                }
              }
              else {
                uVar43 = 0;
              }
              uVar53 = uVar50 - (uVar50 - uVar43 & 0xf);
              if (uVar43 == 0) goto LAB_1409e48bc;
              uVar52 = 0;
              auVar62 = vpbroadcastq_avx512f();
              auVar60 = auVar59;
              auVar61 = auVar58;
              do {
                uVar18 = vpcmpgtq_avx512f(auVar62,auVar61);
                bVar22 = (byte)uVar18;
                uVar18 = vpcmpgtq_avx512f(auVar62,auVar60);
                bVar21 = (byte)uVar18;
                auVar61 = vpaddq_avx512f(auVar61,auVar57);
                auVar60 = vpaddq_avx512f(auVar60,auVar57);
                uVar55 = CONCAT11(bVar21,bVar22);
                piVar1 = (int *)(lVar46 + uVar52 * 4);
                iVar48 = piVar1[1];
                iVar23 = piVar1[2];
                iVar24 = piVar1[3];
                iVar25 = piVar1[4];
                iVar26 = piVar1[5];
                iVar27 = piVar1[6];
                iVar28 = piVar1[7];
                iVar29 = piVar1[8];
                iVar30 = piVar1[9];
                iVar31 = piVar1[10];
                iVar32 = piVar1[0xb];
                iVar33 = piVar1[0xc];
                iVar34 = piVar1[0xd];
                iVar35 = piVar1[0xe];
                iVar36 = piVar1[0xf];
                puVar2 = (uint *)(uVar54 + uVar52 * 4);
                bVar5 = (bool)((byte)(uVar55 >> 1) & 1);
                bVar6 = (bool)((byte)(uVar55 >> 2) & 1);
                bVar7 = (bool)((byte)(uVar55 >> 3) & 1);
                bVar8 = (bool)((byte)(uVar55 >> 4) & 1);
                bVar9 = (bool)((byte)(uVar55 >> 5) & 1);
                bVar10 = (bool)((byte)(uVar55 >> 6) & 1);
                bVar11 = (bool)((byte)(uVar55 >> 7) & 1);
                bVar12 = (bool)(bVar21 >> 1 & 1);
                bVar13 = (bool)(bVar21 >> 2 & 1);
                bVar14 = (bool)(bVar21 >> 3 & 1);
                bVar15 = (bool)(bVar21 >> 4 & 1);
                bVar16 = (bool)(bVar21 >> 5 & 1);
                bVar17 = (bool)(bVar21 >> 6 & 1);
                *puVar2 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                          (uint)!(bool)(bVar22 & 1) * *puVar2;
                puVar2[1] = (uint)bVar5 * (uint)((byte)(uVar55 >> 1) & 1) * iVar48 |
                            (uint)!bVar5 * puVar2[1];
                puVar2[2] = (uint)bVar6 * (uint)((byte)(uVar55 >> 2) & 1) * iVar23 |
                            (uint)!bVar6 * puVar2[2];
                puVar2[3] = (uint)bVar7 * (uint)((byte)(uVar55 >> 3) & 1) * iVar24 |
                            (uint)!bVar7 * puVar2[3];
                puVar2[4] = (uint)bVar8 * (uint)((byte)(uVar55 >> 4) & 1) * iVar25 |
                            (uint)!bVar8 * puVar2[4];
                puVar2[5] = (uint)bVar9 * (uint)((byte)(uVar55 >> 5) & 1) * iVar26 |
                            (uint)!bVar9 * puVar2[5];
                puVar2[6] = (uint)bVar10 * (uint)((byte)(uVar55 >> 6) & 1) * iVar27 |
                            (uint)!bVar10 * puVar2[6];
                puVar2[7] = (uint)bVar11 * (uint)((byte)(uVar55 >> 7) & 1) * iVar28 |
                            (uint)!bVar11 * puVar2[7];
                puVar2[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar29 |
                            (uint)!(bool)(bVar21 & 1) * puVar2[8];
                puVar2[9] = (uint)bVar12 * (uint)(bVar21 >> 1 & 1) * iVar30 |
                            (uint)!bVar12 * puVar2[9];
                puVar2[10] = (uint)bVar13 * (uint)(bVar21 >> 2 & 1) * iVar31 |
                             (uint)!bVar13 * puVar2[10];
                puVar2[0xb] = (uint)bVar14 * (uint)(bVar21 >> 3 & 1) * iVar32 |
                              (uint)!bVar14 * puVar2[0xb];
                puVar2[0xc] = (uint)bVar15 * (uint)(bVar21 >> 4 & 1) * iVar33 |
                              (uint)!bVar15 * puVar2[0xc];
                puVar2[0xd] = (uint)bVar16 * (uint)(bVar21 >> 5 & 1) * iVar34 |
                              (uint)!bVar16 * puVar2[0xd];
                puVar2[0xe] = (uint)bVar17 * (uint)(bVar21 >> 6 & 1) * iVar35 |
                              (uint)!bVar17 * puVar2[0xe];
                puVar2[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar36 |
                              (uint)!(bool)(bVar21 >> 7) * puVar2[0xf];
                uVar52 = uVar52 + 0x10;
              } while (uVar52 < uVar43);
              if (uVar50 != uVar43) goto LAB_1409e48bc;
              uVar49 = uVar49 + 1;
              if (uVar42 <= uVar49) {
                return;
              }
            }
            uVar43 = 0;
            uVar53 = uVar50 & 0xfffffffffffffff0;
LAB_1409e48bc:
            if ((longlong)(uVar43 + 0x10) <= (longlong)uVar53) {
              do {
                puVar3 = (undefined8 *)(lVar46 + uVar43 * 4);
                uVar18 = puVar3[1];
                uVar19 = puVar3[2];
                uVar20 = puVar3[3];
                uVar37 = puVar3[4];
                uVar38 = puVar3[5];
                uVar39 = puVar3[6];
                uVar40 = puVar3[7];
                puVar4 = (undefined8 *)(param_4 * uVar49 + lStack_a0 + uVar43 * 4);
                *puVar4 = *puVar3;
                puVar4[1] = uVar18;
                puVar4[2] = uVar19;
                puVar4[3] = uVar20;
                puVar4[4] = uVar37;
                puVar4[5] = uVar38;
                puVar4[6] = uVar39;
                puVar4[7] = uVar40;
                uVar43 = uVar43 + 0x10;
              } while (uVar43 < uVar53);
            }
          }
          if (uVar53 + 1 <= uVar50) {
            auVar60 = vpbroadcastq_avx512f();
            uVar18 = vpcmpgtq_avx512f(auVar60,auVar58);
            bVar22 = (byte)uVar18;
            uVar18 = vpcmpgtq_avx512f(auVar60,auVar59);
            bVar21 = (byte)uVar18;
            uVar55 = CONCAT11(bVar21,bVar22);
            piVar1 = (int *)(lVar46 + uVar53 * 4);
            iVar48 = piVar1[1];
            iVar23 = piVar1[2];
            iVar24 = piVar1[3];
            iVar25 = piVar1[4];
            iVar26 = piVar1[5];
            iVar27 = piVar1[6];
            iVar28 = piVar1[7];
            iVar29 = piVar1[8];
            iVar30 = piVar1[9];
            iVar31 = piVar1[10];
            iVar32 = piVar1[0xb];
            iVar33 = piVar1[0xc];
            iVar34 = piVar1[0xd];
            iVar35 = piVar1[0xe];
            iVar36 = piVar1[0xf];
            puVar2 = (uint *)(param_4 * uVar49 + lStack_a0 + uVar53 * 4);
            bVar5 = (bool)((byte)(uVar55 >> 1) & 1);
            bVar6 = (bool)((byte)(uVar55 >> 2) & 1);
            bVar7 = (bool)((byte)(uVar55 >> 3) & 1);
            bVar8 = (bool)((byte)(uVar55 >> 4) & 1);
            bVar9 = (bool)((byte)(uVar55 >> 5) & 1);
            bVar10 = (bool)((byte)(uVar55 >> 6) & 1);
            bVar11 = (bool)((byte)(uVar55 >> 7) & 1);
            bVar12 = (bool)(bVar21 >> 1 & 1);
            bVar13 = (bool)(bVar21 >> 2 & 1);
            bVar14 = (bool)(bVar21 >> 3 & 1);
            bVar15 = (bool)(bVar21 >> 4 & 1);
            bVar16 = (bool)(bVar21 >> 5 & 1);
            bVar17 = (bool)(bVar21 >> 6 & 1);
            *puVar2 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                      (uint)!(bool)(bVar22 & 1) * *puVar2;
            puVar2[1] = (uint)bVar5 * (uint)((byte)(uVar55 >> 1) & 1) * iVar48 |
                        (uint)!bVar5 * puVar2[1];
            puVar2[2] = (uint)bVar6 * (uint)((byte)(uVar55 >> 2) & 1) * iVar23 |
                        (uint)!bVar6 * puVar2[2];
            puVar2[3] = (uint)bVar7 * (uint)((byte)(uVar55 >> 3) & 1) * iVar24 |
                        (uint)!bVar7 * puVar2[3];
            puVar2[4] = (uint)bVar8 * (uint)((byte)(uVar55 >> 4) & 1) * iVar25 |
                        (uint)!bVar8 * puVar2[4];
            puVar2[5] = (uint)bVar9 * (uint)((byte)(uVar55 >> 5) & 1) * iVar26 |
                        (uint)!bVar9 * puVar2[5];
            puVar2[6] = (uint)bVar10 * (uint)((byte)(uVar55 >> 6) & 1) * iVar27 |
                        (uint)!bVar10 * puVar2[6];
            puVar2[7] = (uint)bVar11 * (uint)((byte)(uVar55 >> 7) & 1) * iVar28 |
                        (uint)!bVar11 * puVar2[7];
            puVar2[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar29 |
                        (uint)!(bool)(bVar21 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar12 * (uint)(bVar21 >> 1 & 1) * iVar30 | (uint)!bVar12 * puVar2[9];
            puVar2[10] = (uint)bVar13 * (uint)(bVar21 >> 2 & 1) * iVar31 |
                         (uint)!bVar13 * puVar2[10];
            puVar2[0xb] = (uint)bVar14 * (uint)(bVar21 >> 3 & 1) * iVar32 |
                          (uint)!bVar14 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar15 * (uint)(bVar21 >> 4 & 1) * iVar33 |
                          (uint)!bVar15 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar16 * (uint)(bVar21 >> 5 & 1) * iVar34 |
                          (uint)!bVar16 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar17 * (uint)(bVar21 >> 6 & 1) * iVar35 |
                          (uint)!bVar17 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar36 |
                          (uint)!(bool)(bVar21 >> 7) * puVar2[0xf];
          }
        }
        uVar49 = uVar49 + 1;
      } while (uVar49 < uVar42);
    }
  }
  else if (uVar45 == 3) {
    lVar46 = (longlong)iStack_98;
    if ((param_7 & 0xf0) == 0xf0) {
      (*(code *)(&PTR_LAB_14308e560)[lStack_58])
                (lStack_50 + lStack_48 * lVar46,lStack_a0,*param_5,uStack_60,
                 CONCAT44(uVar67,iStack_68));
    }
    else {
      if (((lVar46 < 0) || (param_5[1] <= lVar46)) && (param_7 != 0xf0)) {
        lVar44 = param_5[1];
        if (lVar44 < 2) {
          if (lVar46 < 0) {
            lVar46 = -lVar46;
            if ((param_7 & 0x20) == 0) {
              lVar46 = 0;
            }
          }
          else if ((0 < lVar46) && ((param_7 & 0x20) == 0)) {
            lVar46 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar46 < 0; lVar46 = -lVar46) {
            }
            if ((lVar46 < lVar44) || ((param_7 & 0x20) != 0)) break;
            lVar46 = (lVar44 + -1) * 2 - lVar46;
          }
        }
      }
      lStack_178 = *param_5;
      lStack_170 = param_5[1];
      FUN_1409e4ce0(lStack_50,lStack_48,lVar46,lStack_a0,&lStack_178,(int)lStack_58,param_7,param_8,
                    uStack_60,iStack_68,uStack_70);
    }
    auVar57 = _DAT_14308e2c0;
    lVar46 = 1;
    uVar49 = 0;
    if (1 < iStack_98) {
      auVar58 = vmovdqu32_avx512f(_DAT_14308e300);
      auVar59 = vmovdqu32_avx512f(_DAT_14308e340);
      lVar44 = ((longlong)iStack_68 + -1) * param_4 + lStack_a0;
      uVar50 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar50) {
          if ((longlong)uVar50 < 0x10) {
            uVar42 = 0;
          }
          else {
            while (0x3a < (longlong)uVar50) {
              uVar53 = lStack_a0 + param_4 * lVar46;
              uVar43 = uVar53 & 0x3f;
              if ((uVar53 & 3) == 0) {
                if ((uVar43 != 0) &&
                   (uVar43 = 0x40 - uVar43 >> 2, (longlong)uVar50 < (longlong)uVar43)) {
                  uVar43 = uVar50;
                }
              }
              else {
                uVar43 = 0;
              }
              uVar42 = uVar50 - (uVar50 - uVar43 & 0xf);
              if (uVar43 == 0) goto LAB_1409e463c;
              uVar54 = 0;
              auVar62 = vpbroadcastq_avx512f();
              auVar60 = auVar59;
              auVar61 = auVar58;
              do {
                uVar18 = vpcmpgtq_avx512f(auVar62,auVar61);
                bVar22 = (byte)uVar18;
                uVar18 = vpcmpgtq_avx512f(auVar62,auVar60);
                bVar21 = (byte)uVar18;
                auVar61 = vpaddq_avx512f(auVar61,auVar57);
                auVar60 = vpaddq_avx512f(auVar60,auVar57);
                uVar55 = CONCAT11(bVar21,bVar22);
                piVar1 = (int *)((lVar44 - param_4 * lVar46) + uVar54 * 4);
                iVar48 = piVar1[1];
                iVar23 = piVar1[2];
                iVar24 = piVar1[3];
                iVar25 = piVar1[4];
                iVar26 = piVar1[5];
                iVar27 = piVar1[6];
                iVar28 = piVar1[7];
                iVar29 = piVar1[8];
                iVar30 = piVar1[9];
                iVar31 = piVar1[10];
                iVar32 = piVar1[0xb];
                iVar33 = piVar1[0xc];
                iVar34 = piVar1[0xd];
                iVar35 = piVar1[0xe];
                iVar36 = piVar1[0xf];
                puVar2 = (uint *)(uVar53 + uVar54 * 4);
                bVar5 = (bool)((byte)(uVar55 >> 1) & 1);
                bVar6 = (bool)((byte)(uVar55 >> 2) & 1);
                bVar7 = (bool)((byte)(uVar55 >> 3) & 1);
                bVar8 = (bool)((byte)(uVar55 >> 4) & 1);
                bVar9 = (bool)((byte)(uVar55 >> 5) & 1);
                bVar10 = (bool)((byte)(uVar55 >> 6) & 1);
                bVar11 = (bool)((byte)(uVar55 >> 7) & 1);
                bVar12 = (bool)(bVar21 >> 1 & 1);
                bVar13 = (bool)(bVar21 >> 2 & 1);
                bVar14 = (bool)(bVar21 >> 3 & 1);
                bVar15 = (bool)(bVar21 >> 4 & 1);
                bVar16 = (bool)(bVar21 >> 5 & 1);
                bVar17 = (bool)(bVar21 >> 6 & 1);
                *puVar2 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                          (uint)!(bool)(bVar22 & 1) * *puVar2;
                puVar2[1] = (uint)bVar5 * (uint)((byte)(uVar55 >> 1) & 1) * iVar48 |
                            (uint)!bVar5 * puVar2[1];
                puVar2[2] = (uint)bVar6 * (uint)((byte)(uVar55 >> 2) & 1) * iVar23 |
                            (uint)!bVar6 * puVar2[2];
                puVar2[3] = (uint)bVar7 * (uint)((byte)(uVar55 >> 3) & 1) * iVar24 |
                            (uint)!bVar7 * puVar2[3];
                puVar2[4] = (uint)bVar8 * (uint)((byte)(uVar55 >> 4) & 1) * iVar25 |
                            (uint)!bVar8 * puVar2[4];
                puVar2[5] = (uint)bVar9 * (uint)((byte)(uVar55 >> 5) & 1) * iVar26 |
                            (uint)!bVar9 * puVar2[5];
                puVar2[6] = (uint)bVar10 * (uint)((byte)(uVar55 >> 6) & 1) * iVar27 |
                            (uint)!bVar10 * puVar2[6];
                puVar2[7] = (uint)bVar11 * (uint)((byte)(uVar55 >> 7) & 1) * iVar28 |
                            (uint)!bVar11 * puVar2[7];
                puVar2[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar29 |
                            (uint)!(bool)(bVar21 & 1) * puVar2[8];
                puVar2[9] = (uint)bVar12 * (uint)(bVar21 >> 1 & 1) * iVar30 |
                            (uint)!bVar12 * puVar2[9];
                puVar2[10] = (uint)bVar13 * (uint)(bVar21 >> 2 & 1) * iVar31 |
                             (uint)!bVar13 * puVar2[10];
                puVar2[0xb] = (uint)bVar14 * (uint)(bVar21 >> 3 & 1) * iVar32 |
                              (uint)!bVar14 * puVar2[0xb];
                puVar2[0xc] = (uint)bVar15 * (uint)(bVar21 >> 4 & 1) * iVar33 |
                              (uint)!bVar15 * puVar2[0xc];
                puVar2[0xd] = (uint)bVar16 * (uint)(bVar21 >> 5 & 1) * iVar34 |
                              (uint)!bVar16 * puVar2[0xd];
                puVar2[0xe] = (uint)bVar17 * (uint)(bVar21 >> 6 & 1) * iVar35 |
                              (uint)!bVar17 * puVar2[0xe];
                puVar2[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar36 |
                              (uint)!(bool)(bVar21 >> 7) * puVar2[0xf];
                uVar54 = uVar54 + 0x10;
              } while (uVar54 < uVar43);
              if (uVar50 != uVar43) goto LAB_1409e463c;
              lVar46 = uVar49 + 2;
              uVar49 = uVar49 + 1;
              if ((ulonglong)(longlong)(iStack_98 + -1) <= uVar49) {
                return;
              }
            }
            uVar43 = 0;
            uVar42 = uVar50 & 0xfffffffffffffff0;
LAB_1409e463c:
            if ((longlong)(uVar43 + 0x10) <= (longlong)uVar42) {
              do {
                puVar3 = (undefined8 *)((lVar44 - param_4 * lVar46) + uVar43 * 4);
                uVar18 = puVar3[1];
                uVar19 = puVar3[2];
                uVar20 = puVar3[3];
                uVar37 = puVar3[4];
                uVar38 = puVar3[5];
                uVar39 = puVar3[6];
                uVar40 = puVar3[7];
                puVar4 = (undefined8 *)(lStack_a0 + param_4 * lVar46 + uVar43 * 4);
                *puVar4 = *puVar3;
                puVar4[1] = uVar18;
                puVar4[2] = uVar19;
                puVar4[3] = uVar20;
                puVar4[4] = uVar37;
                puVar4[5] = uVar38;
                puVar4[6] = uVar39;
                puVar4[7] = uVar40;
                uVar43 = uVar43 + 0x10;
              } while (uVar43 < uVar42);
            }
          }
          if (uVar42 + 1 <= uVar50) {
            auVar60 = vpbroadcastq_avx512f();
            uVar18 = vpcmpgtq_avx512f(auVar60,auVar58);
            bVar22 = (byte)uVar18;
            uVar18 = vpcmpgtq_avx512f(auVar60,auVar59);
            bVar21 = (byte)uVar18;
            uVar55 = CONCAT11(bVar21,bVar22);
            piVar1 = (int *)((lVar44 - lVar46 * param_4) + uVar42 * 4);
            iVar48 = piVar1[1];
            iVar23 = piVar1[2];
            iVar24 = piVar1[3];
            iVar25 = piVar1[4];
            iVar26 = piVar1[5];
            iVar27 = piVar1[6];
            iVar28 = piVar1[7];
            iVar29 = piVar1[8];
            iVar30 = piVar1[9];
            iVar31 = piVar1[10];
            iVar32 = piVar1[0xb];
            iVar33 = piVar1[0xc];
            iVar34 = piVar1[0xd];
            iVar35 = piVar1[0xe];
            iVar36 = piVar1[0xf];
            puVar2 = (uint *)(lVar46 * param_4 + lStack_a0 + uVar42 * 4);
            bVar5 = (bool)((byte)(uVar55 >> 1) & 1);
            bVar6 = (bool)((byte)(uVar55 >> 2) & 1);
            bVar7 = (bool)((byte)(uVar55 >> 3) & 1);
            bVar8 = (bool)((byte)(uVar55 >> 4) & 1);
            bVar9 = (bool)((byte)(uVar55 >> 5) & 1);
            bVar10 = (bool)((byte)(uVar55 >> 6) & 1);
            bVar11 = (bool)((byte)(uVar55 >> 7) & 1);
            bVar12 = (bool)(bVar21 >> 1 & 1);
            bVar13 = (bool)(bVar21 >> 2 & 1);
            bVar14 = (bool)(bVar21 >> 3 & 1);
            bVar15 = (bool)(bVar21 >> 4 & 1);
            bVar16 = (bool)(bVar21 >> 5 & 1);
            bVar17 = (bool)(bVar21 >> 6 & 1);
            *puVar2 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                      (uint)!(bool)(bVar22 & 1) * *puVar2;
            puVar2[1] = (uint)bVar5 * (uint)((byte)(uVar55 >> 1) & 1) * iVar48 |
                        (uint)!bVar5 * puVar2[1];
            puVar2[2] = (uint)bVar6 * (uint)((byte)(uVar55 >> 2) & 1) * iVar23 |
                        (uint)!bVar6 * puVar2[2];
            puVar2[3] = (uint)bVar7 * (uint)((byte)(uVar55 >> 3) & 1) * iVar24 |
                        (uint)!bVar7 * puVar2[3];
            puVar2[4] = (uint)bVar8 * (uint)((byte)(uVar55 >> 4) & 1) * iVar25 |
                        (uint)!bVar8 * puVar2[4];
            puVar2[5] = (uint)bVar9 * (uint)((byte)(uVar55 >> 5) & 1) * iVar26 |
                        (uint)!bVar9 * puVar2[5];
            puVar2[6] = (uint)bVar10 * (uint)((byte)(uVar55 >> 6) & 1) * iVar27 |
                        (uint)!bVar10 * puVar2[6];
            puVar2[7] = (uint)bVar11 * (uint)((byte)(uVar55 >> 7) & 1) * iVar28 |
                        (uint)!bVar11 * puVar2[7];
            puVar2[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar29 |
                        (uint)!(bool)(bVar21 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar12 * (uint)(bVar21 >> 1 & 1) * iVar30 | (uint)!bVar12 * puVar2[9];
            puVar2[10] = (uint)bVar13 * (uint)(bVar21 >> 2 & 1) * iVar31 |
                         (uint)!bVar13 * puVar2[10];
            puVar2[0xb] = (uint)bVar14 * (uint)(bVar21 >> 3 & 1) * iVar32 |
                          (uint)!bVar14 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar15 * (uint)(bVar21 >> 4 & 1) * iVar33 |
                          (uint)!bVar15 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar16 * (uint)(bVar21 >> 5 & 1) * iVar34 |
                          (uint)!bVar16 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar17 * (uint)(bVar21 >> 6 & 1) * iVar35 |
                          (uint)!bVar17 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar36 |
                          (uint)!(bool)(bVar21 >> 7) * puVar2[0xf];
          }
        }
        lVar46 = uVar49 + 2;
        uVar49 = uVar49 + 1;
      } while (uVar49 < (ulonglong)(longlong)(iStack_98 + -1));
    }
  }
  return;
LAB_1409e3f20:
  uVar50 = uVar49;
  if (uStack_90 == 3) {
    lVar44 = param_5[1];
    if (lVar44 < 2) {
      if ((longlong)uVar49 < 0) {
        if (uStack_a8 == 0) {
          uVar50 = -uVar49;
          if (uStack_b0 == 0) {
            uVar50 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar49) && (uStack_b0 == 0)) {
        uVar50 = -uVar49;
        if (uStack_a8 == 0) {
          uVar50 = 0;
        }
      }
    }
    else if (((longlong)uVar49 < 0) || (lVar44 <= (longlong)uVar49)) {
      if ((longlong)uVar49 < 0) goto LAB_1409e4240;
      while (uStack_b0 == 0) {
        for (uVar50 = (lVar44 + -1) * 2 - uVar50; (longlong)uVar50 < 0; uVar50 = -uVar50) {
LAB_1409e4240:
          if (uStack_a8 != 0) goto LAB_1409e3fc0;
        }
        if ((longlong)uVar50 < lVar44) break;
      }
    }
  }
  goto LAB_1409e3fc0;
}


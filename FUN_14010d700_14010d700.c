
/* WARNING: Removing unreachable block (ram,0x00014010e5f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010d700(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

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
  uint uVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  longlong lVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  uint uVar51;
  int iVar52;
  ulonglong uVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  ulonglong uVar57;
  uint uVar58;
  longlong lVar59;
  ulonglong uVar60;
  ushort uVar61;
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  uint uVar66;
  undefined1 auVar67 [16];
  uint uVar68;
  uint uVar69;
  undefined1 auStack_238 [32];
  int iStack_218;
  uint auStack_200 [78];
  longlong lStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  uint uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  int iStack_88;
  uint *puStack_80;
  undefined8 uStack_50;
  undefined4 uStack_48;
  ulonglong uStack_40;
  
  auVar65 = _DAT_143086fc0;
  param_1 = param_1 + param_2 * param_3;
  uStack_40 = DAT_1436b4680 ^ (ulonglong)auStack_238;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar56 = (longlong)param_6;
  uVar51 = param_7 & 0xf;
  lVar50 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_218 = param_10;
    (**(code **)(&UNK_1430872e0 + lVar56 * 8))(param_1,param_4,*param_5,param_9);
    if ((uStack_40 ^ (ulonglong)auStack_238) == DAT_1436b4680) {
      return;
    }
    goto LAB_14010ea8b;
  }
  lVar55 = *param_5;
  puStack_80 = (uint *)&uStack_50;
  if (uVar51 == 6) {
    puStack_80 = param_8;
  }
  lVar59 = (longlong)param_10;
  if (lVar55 < lVar59 + -1) {
    lVar59 = -lVar50;
    lVar44 = 0;
    if (lVar59 < lVar50 + lVar55) {
      uVar41 = param_7 & 0x80;
      iStack_88 = param_10;
      uVar58 = param_7 & 0x40;
      do {
        lVar46 = lVar59;
        if (((lVar59 < 0) || (lVar55 <= lVar59)) && (param_7 != 0xf0)) {
          if (uVar51 != 6) {
            if (uVar51 == 1) {
              if (lVar59 < 0) {
                lVar46 = 0;
                if (uVar58 != 0) {
                  lVar46 = lVar59;
                }
              }
              else if (uVar41 == 0) {
                lVar46 = lVar55 + -1;
              }
            }
            else if (uVar51 == 3) {
              if (lVar55 < 2) {
                if (lVar59 < 0) {
                  if ((uVar58 == 0) && (lVar46 = -lVar59, uVar41 == 0)) {
                    lVar46 = 0;
                  }
                }
                else if (((0 < lVar59) && (uVar41 == 0)) && (lVar46 = -lVar59, uVar58 == 0)) {
                  lVar46 = 0;
                }
              }
              else if ((lVar59 < 0) || (lVar55 <= lVar59)) {
                if (lVar59 < 0) goto LAB_14010ea60;
                while (uVar41 == 0) {
                  for (lVar46 = (lVar55 + -1) * 2 - lVar46; lVar46 < 0; lVar46 = -lVar46) {
LAB_14010ea60:
                    if (uVar58 != 0) goto LAB_14010e8ec;
                  }
                  if (lVar46 < lVar55) break;
                }
              }
            }
            goto LAB_14010e8ec;
          }
          uVar66 = uVar58;
          if (-1 < lVar59) {
            uVar66 = uVar41;
          }
          if (uVar66 != 0) goto LAB_14010e8ec;
          uVar66 = *puStack_80;
          uVar68 = puStack_80[1];
          uVar69 = puStack_80[2];
        }
        else {
LAB_14010e8ec:
          uVar66 = *(uint *)(param_1 + lVar46 * 0xc);
          uVar68 = *(uint *)(param_1 + 4 + lVar46 * 0xc);
          uVar69 = *(uint *)(param_1 + 8 + lVar46 * 0xc);
        }
        lVar59 = lVar59 + 1;
        *(uint *)(lVar44 + param_11) = uVar66;
        *(uint *)(lVar44 + 4 + param_11) = uVar68;
        *(uint *)(lVar44 + 8 + param_11) = uVar69;
        lVar44 = lVar44 + 0xc;
        lStack_98 = param_4;
        lStack_90 = lVar50;
      } while (lVar59 < lVar50 + lVar55);
    }
    iStack_218 = param_10;
    (**(code **)(&UNK_1430872e0 + lVar56 * 8))(param_11 + lVar50 * 0xc,param_4,lVar55,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lVar46 = lVar50 * 3;
      lVar49 = lVar59 * 3;
      uVar42 = lVar49 - 3;
      lVar44 = lVar50 * 0xc;
      lStack_b0 = lVar44;
      uStack_a8 = param_11 + lVar50 * 0xc;
      if (uVar42 != 0 && SCARRY8(lVar49,-3) == (longlong)uVar42 < 0) {
        if (6 < (longlong)uVar42) {
          lVar43 = lVar59 * 0xc + -0xc;
          if ((lVar43 <= (longlong)(uStack_a8 - param_1)) ||
             (lVar43 <= (longlong)-(uStack_a8 - param_1))) {
            if ((longlong)uVar42 < 0x10) {
              uVar47 = 0;
            }
            else {
              if ((longlong)uVar42 < 0x3b) {
                uVar53 = 0;
                uVar47 = uVar42 & 0xfffffffffffffff0;
              }
              else {
                uVar53 = uStack_a8 & 0x3f;
                if ((uStack_a8 & 3) == 0) {
                  if ((uVar53 != 0) &&
                     (uVar53 = 0x40 - uVar53 >> 2, (longlong)uVar42 < (longlong)uVar53)) {
                    uVar53 = uVar42;
                  }
                }
                else {
                  uVar53 = 0;
                }
                uVar47 = uVar42 - (uVar42 - uVar53 & 0xf);
                if (uVar53 != 0) {
                  uVar45 = 0;
                  auVar62 = vmovdqu32_avx512f(_DAT_143087000);
                  auVar63 = vmovdqu32_avx512f(_DAT_143087040);
                  auVar64 = vpbroadcastq_avx512f();
                  do {
                    uVar20 = vpcmpgtq_avx512f(auVar64,auVar62);
                    bVar22 = (byte)uVar20;
                    uVar20 = vpcmpgtq_avx512f(auVar64,auVar63);
                    bVar21 = (byte)uVar20;
                    auVar62 = vpaddq_avx512f(auVar62,auVar65);
                    auVar63 = vpaddq_avx512f(auVar63,auVar65);
                    uVar61 = CONCAT11(bVar21,bVar22);
                    piVar1 = (int *)(param_1 + uVar45 * 4);
                    iVar52 = piVar1[1];
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
                    puVar2 = (uint *)(uStack_a8 + uVar45 * 4);
                    bVar5 = (bool)((byte)(uVar61 >> 1) & 1);
                    bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
                    bVar7 = (bool)((byte)(uVar61 >> 3) & 1);
                    bVar8 = (bool)((byte)(uVar61 >> 4) & 1);
                    bVar9 = (bool)((byte)(uVar61 >> 5) & 1);
                    bVar10 = (bool)((byte)(uVar61 >> 6) & 1);
                    bVar11 = (bool)((byte)(uVar61 >> 7) & 1);
                    bVar12 = (bool)(bVar21 >> 1 & 1);
                    bVar13 = (bool)(bVar21 >> 2 & 1);
                    bVar14 = (bool)(bVar21 >> 3 & 1);
                    bVar15 = (bool)(bVar21 >> 4 & 1);
                    bVar16 = (bool)(bVar21 >> 5 & 1);
                    bVar17 = (bool)(bVar21 >> 6 & 1);
                    *puVar2 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                              (uint)!(bool)(bVar22 & 1) * *puVar2;
                    puVar2[1] = (uint)bVar5 * (uint)((byte)(uVar61 >> 1) & 1) * iVar52 |
                                (uint)!bVar5 * puVar2[1];
                    puVar2[2] = (uint)bVar6 * (uint)((byte)(uVar61 >> 2) & 1) * iVar23 |
                                (uint)!bVar6 * puVar2[2];
                    puVar2[3] = (uint)bVar7 * (uint)((byte)(uVar61 >> 3) & 1) * iVar24 |
                                (uint)!bVar7 * puVar2[3];
                    puVar2[4] = (uint)bVar8 * (uint)((byte)(uVar61 >> 4) & 1) * iVar25 |
                                (uint)!bVar8 * puVar2[4];
                    puVar2[5] = (uint)bVar9 * (uint)((byte)(uVar61 >> 5) & 1) * iVar26 |
                                (uint)!bVar9 * puVar2[5];
                    puVar2[6] = (uint)bVar10 * (uint)((byte)(uVar61 >> 6) & 1) * iVar27 |
                                (uint)!bVar10 * puVar2[6];
                    puVar2[7] = (uint)bVar11 * (uint)((byte)(uVar61 >> 7) & 1) * iVar28 |
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
                    uVar45 = uVar45 + 0x10;
                  } while (uVar45 < uVar53);
                  if (uVar42 == uVar53) goto LAB_14010da1c;
                }
              }
              if ((longlong)(uVar53 + 0x10) <= (longlong)uVar47) {
                do {
                  puVar3 = (undefined8 *)(param_1 + uVar53 * 4);
                  uVar20 = puVar3[1];
                  uVar18 = puVar3[2];
                  uVar19 = puVar3[3];
                  uVar37 = puVar3[4];
                  uVar38 = puVar3[5];
                  uVar39 = puVar3[6];
                  uVar40 = puVar3[7];
                  puVar4 = (undefined8 *)(uStack_a8 + uVar53 * 4);
                  *puVar4 = *puVar3;
                  puVar4[1] = uVar20;
                  puVar4[2] = uVar18;
                  puVar4[3] = uVar19;
                  puVar4[4] = uVar37;
                  puVar4[5] = uVar38;
                  puVar4[6] = uVar39;
                  puVar4[7] = uVar40;
                  uVar53 = uVar53 + 0x10;
                } while (uVar53 < uVar47);
              }
            }
            if (uVar47 + 1 <= uVar42) {
              auVar65 = vpbroadcastq_avx512f();
              uVar20 = vpcmpgtq_avx512f(auVar65,_DAT_143087000);
              bVar22 = (byte)uVar20;
              uVar20 = vpcmpgtq_avx512f(auVar65,_DAT_143087040);
              bVar21 = (byte)uVar20;
              uVar61 = CONCAT11(bVar21,bVar22);
              piVar1 = (int *)(param_1 + uVar47 * 4);
              iVar52 = piVar1[1];
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
              puVar2 = (uint *)(param_11 + (uVar47 + lVar46) * 4);
              bVar5 = (bool)((byte)(uVar61 >> 1) & 1);
              bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
              bVar7 = (bool)((byte)(uVar61 >> 3) & 1);
              bVar8 = (bool)((byte)(uVar61 >> 4) & 1);
              bVar9 = (bool)((byte)(uVar61 >> 5) & 1);
              bVar10 = (bool)((byte)(uVar61 >> 6) & 1);
              bVar11 = (bool)((byte)(uVar61 >> 7) & 1);
              bVar12 = (bool)(bVar21 >> 1 & 1);
              bVar13 = (bool)(bVar21 >> 2 & 1);
              bVar14 = (bool)(bVar21 >> 3 & 1);
              bVar15 = (bool)(bVar21 >> 4 & 1);
              bVar16 = (bool)(bVar21 >> 5 & 1);
              bVar17 = (bool)(bVar21 >> 6 & 1);
              *puVar2 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                        (uint)!(bool)(bVar22 & 1) * *puVar2;
              puVar2[1] = (uint)bVar5 * (uint)((byte)(uVar61 >> 1) & 1) * iVar52 |
                          (uint)!bVar5 * puVar2[1];
              puVar2[2] = (uint)bVar6 * (uint)((byte)(uVar61 >> 2) & 1) * iVar23 |
                          (uint)!bVar6 * puVar2[2];
              puVar2[3] = (uint)bVar7 * (uint)((byte)(uVar61 >> 3) & 1) * iVar24 |
                          (uint)!bVar7 * puVar2[3];
              puVar2[4] = (uint)bVar8 * (uint)((byte)(uVar61 >> 4) & 1) * iVar25 |
                          (uint)!bVar8 * puVar2[4];
              puVar2[5] = (uint)bVar9 * (uint)((byte)(uVar61 >> 5) & 1) * iVar26 |
                          (uint)!bVar9 * puVar2[5];
              puVar2[6] = (uint)bVar10 * (uint)((byte)(uVar61 >> 6) & 1) * iVar27 |
                          (uint)!bVar10 * puVar2[6];
              puVar2[7] = (uint)bVar11 * (uint)((byte)(uVar61 >> 7) & 1) * iVar28 |
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
            }
            goto LAB_14010da1c;
          }
        }
        lVar43 = 1;
        uVar53 = (longlong)(param_10 * 3) - 3;
        uVar47 = uVar53 >> 1;
        uVar42 = 0;
        if (uVar47 != 0) {
          do {
            uVar45 = uVar42;
            *(undefined4 *)(uStack_a8 + uVar45 * 8) = *(undefined4 *)(param_1 + uVar45 * 8);
            *(undefined4 *)(uStack_a8 + 4 + uVar45 * 8) = *(undefined4 *)(param_1 + 4 + uVar45 * 8);
            uVar42 = uVar45 + 1;
          } while (uVar42 < uVar47);
          lVar43 = uVar45 + 2 + uVar42;
        }
        if (lVar43 - 1U < uVar53) {
          *(undefined4 *)(param_11 + (lVar46 + -1 + lVar43) * 4) =
               *(undefined4 *)(param_1 + (lVar43 - 1U) * 4);
        }
      }
LAB_14010da1c:
      lVar43 = lVar50;
      if (uVar51 == 1) {
        if (0 < lVar46) {
          uVar42 = (lVar46 + 2) / 3;
          if (((longlong)uVar42 < 7) ||
             (((longlong)(param_11 - uStack_a8) < 0xc &&
              ((longlong)-(param_11 - uStack_a8) < (longlong)(uVar42 * 0xc))))) {
            uVar47 = 0;
            lVar54 = 0;
            lVar48 = 0;
            lStack_90 = lVar50;
            iStack_88 = param_10;
            lStack_c8 = lVar59;
            uStack_c0._4_4_ = (undefined4)((ulonglong)lVar49 >> 0x20);
            uStack_c0 = (code *)(CONCAT44(uStack_c0._4_4_,param_7) & 0xffffffff0000000f);
            uStack_a0 = param_7;
            lStack_b8 = param_1;
            lStack_98 = param_4;
            lVar46 = lVar48;
            do {
              uVar45 = 0;
              uVar51 = *(uint *)(param_11 + lVar44);
              uVar53 = lVar54 + 0x40U;
              if ((longlong)uVar42 <= (longlong)(lVar54 + 0x40U)) {
                uVar53 = uVar42;
              }
              uVar57 = uVar53 - lVar54;
              uVar60 = uVar45;
              if (0xf < (longlong)uVar57) {
                auVar65 = vbroadcastss_avx512f(ZEXT416(uVar51));
                uVar60 = uVar57 & 0xfffffffffffffff0;
                do {
                  iVar52 = (int)uVar45;
                  uVar45 = uVar45 + 0x10;
                  *(undefined1 (*) [64])(auStack_200 + iVar52) = auVar65;
                } while (uVar45 < uVar60);
              }
              uVar45 = 0;
              lVar59 = lStack_c8;
              param_1 = lStack_b8;
              param_7 = uStack_a0;
              param_4 = lStack_98;
              lVar43 = lStack_90;
              param_10 = iStack_88;
              for (; lStack_c8 = lVar59, lStack_b8 = param_1, uStack_a0 = param_7,
                  lStack_98 = param_4, lStack_90 = lVar43, iStack_88 = param_10, uVar60 < uVar57;
                  uVar60 = uVar60 + 1) {
                auStack_200[(int)uVar60] = uVar51;
                lVar59 = lStack_c8;
                param_1 = lStack_b8;
                param_7 = uStack_a0;
                param_4 = lStack_98;
                lVar43 = lStack_90;
                param_10 = iStack_88;
              }
              lStack_b0 = param_11;
              lVar49 = param_11 + lVar48;
              uVar60 = uVar45;
              do {
                iVar52 = (int)uVar60;
                uVar60 = uVar60 + 1;
                *(uint *)(uVar45 + lVar49) = auStack_200[iVar52];
                *(undefined4 *)(uVar45 + 4 + lVar49) = *(undefined4 *)(uStack_a8 + 4);
                *(undefined4 *)(uVar45 + 8 + lVar49) = *(undefined4 *)(uStack_a8 + 8);
                uVar45 = uVar45 + 0xc;
              } while (uVar60 < uVar53 + lVar46);
              uVar47 = uVar47 + 1;
              lVar54 = lVar54 + 0x40;
              lVar48 = lVar48 + 0x300;
              lVar46 = lVar46 + -0x40;
            } while (uVar47 < uVar42 + 0x3f >> 6);
            uVar51 = (uint)uStack_c0;
          }
          else {
            if ((longlong)uVar42 < 0x10) {
              uVar47 = 0;
            }
            else {
              uVar53 = 0;
              auVar65 = vbroadcastss_avx512f(ZEXT416(*(uint *)(param_11 + lVar44)));
              uVar47 = uVar42 & 0xfffffffffffffff0;
              auVar62 = vbroadcastss_avx512f(ZEXT416(*(uint *)(uStack_a8 + 4)));
              auVar63 = vbroadcastss_avx512f(ZEXT416(*(uint *)(uStack_a8 + 8)));
              auVar64 = vmovdqu32_avx512f(_DAT_143087100);
              lVar46 = 0;
              do {
                auVar67 = auVar64._0_16_;
                uVar20 = vpcmpeqb_avx512vl(auVar67,auVar67);
                uVar45 = param_11 + lVar46;
                uVar18 = vpcmpeqb_avx512vl(auVar67,auVar67);
                uVar19 = vpcmpeqb_avx512vl(auVar67,auVar67);
                vscatterdps_avx512f(ZEXT864(uVar45) + ZEXT864(8) + auVar64 * (undefined1  [64])0x4,
                                    uVar20,auVar63);
                vscatterdps_avx512f(ZEXT864(uVar45) + ZEXT864(4) + auVar64 * (undefined1  [64])0x4,
                                    uVar18,auVar62);
                vscatterdps_avx512f(ZEXT864(uVar45) + auVar64 * (undefined1  [64])0x4,uVar19,auVar65
                                   );
                uVar53 = uVar53 + 0x10;
                lVar46 = lVar46 + 0xc0;
              } while (uVar53 < uVar47);
            }
            if (uVar47 + 1 <= uVar42) {
              auVar65 = vpbroadcastq_avx512f();
              uVar42 = param_11 + uVar47 * 0xc;
              auVar62 = vbroadcastss_avx512f(ZEXT416(*(uint *)(param_11 + lVar44)));
              auVar63 = vbroadcastss_avx512f(ZEXT416(*(uint *)(uStack_a8 + 4)));
              auVar64 = vbroadcastss_avx512f(ZEXT416(*(uint *)(uStack_a8 + 8)));
              uVar20 = vpcmpgtq_avx512f(auVar65,_DAT_143087000);
              uVar18 = vpcmpgtq_avx512f(auVar65,_DAT_143087040);
              auVar65 = vmovdqu32_avx512f(_DAT_143087100);
              uVar61 = CONCAT11((char)uVar18,(char)uVar20);
              vscatterdps_avx512f(ZEXT864(uVar42) + auVar65 * (undefined1  [64])0x4,
                                  (ulonglong)uVar61,auVar62);
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(4) + auVar65 * (undefined1  [64])0x4,
                                  (ulonglong)uVar61,auVar63);
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(8) + auVar65 * (undefined1  [64])0x4,
                                  (ulonglong)uVar61,auVar64);
            }
          }
        }
      }
      else if (uVar51 == 3) {
        if (0 < lVar46) {
          uVar47 = 0;
          lVar44 = 1;
          lVar48 = 0;
          uVar42 = (lVar46 + 2U) / 6;
          if (uVar42 != 0) {
            lVar44 = param_11 + lVar59 * 0xc;
            uVar53 = uVar47;
            do {
              uVar45 = uVar53;
              uVar53 = uVar45 + 1;
              *(undefined4 *)(uVar47 + param_11) = *(undefined4 *)(lVar48 + -0xc + lVar44);
              *(undefined4 *)(uVar47 + 4 + param_11) = *(undefined4 *)(lVar48 + -8 + lVar44);
              *(undefined4 *)(uVar47 + 8 + param_11) = *(undefined4 *)(lVar48 + -4 + lVar44);
              *(undefined4 *)(uVar47 + 0xc + param_11) = *(undefined4 *)(lVar48 + -0x18 + lVar44);
              *(undefined4 *)(uVar47 + 0x10 + param_11) = *(undefined4 *)(lVar48 + -0x14 + lVar44);
              lVar54 = lVar48 + -0x10;
              lVar48 = lVar48 + -0x18;
              *(undefined4 *)(uVar47 + 0x14 + param_11) = *(undefined4 *)(lVar54 + lVar44);
              uVar47 = uVar47 + 0x18;
            } while (uVar53 < uVar42);
            lVar44 = uVar45 + 2 + uVar53;
            lStack_b8 = param_1;
            lStack_98 = param_4;
          }
          if (lVar44 - 1U < (lVar46 + 2U) / 3) {
            lVar44 = lVar44 * 3 + -3;
            lVar49 = lVar49 - lVar44;
            *(undefined4 *)(param_11 + lVar44 * 4) = *(undefined4 *)(param_11 + -0xc + lVar49 * 4);
            *(undefined4 *)(param_11 + 4 + lVar44 * 4) = *(undefined4 *)(param_11 + -8 + lVar49 * 4)
            ;
            *(undefined4 *)(param_11 + 8 + lVar44 * 4) = *(undefined4 *)(param_11 + -4 + lVar49 * 4)
            ;
          }
        }
      }
      else if ((uVar51 == 6) && (0 < lVar46)) {
        uVar42 = lVar46 + 2;
        uVar47 = (longlong)uVar42 / 3;
        if (6 < (longlong)uVar47) {
          lVar44 = (longlong)puStack_80 + (4 - param_11);
          if ((((longlong)(uVar47 * 0xc) <= lVar44) || (7 < -lVar44)) &&
             ((3 < param_11 - (longlong)puStack_80 ||
              ((longlong)(uVar47 * 0xc) <= -(param_11 - (longlong)puStack_80))))) {
            if ((longlong)uVar47 < 0x10) {
              uVar42 = 0;
            }
            else {
              uVar53 = 0;
              auVar65 = vbroadcastss_avx512f(ZEXT416(*puStack_80));
              uVar42 = uVar47 & 0xfffffffffffffff0;
              auVar62 = vbroadcastss_avx512f(ZEXT416(puStack_80[1]));
              auVar63 = vbroadcastss_avx512f(ZEXT416(puStack_80[2]));
              auVar64 = vmovdqu32_avx512f(_DAT_143087100);
              lVar44 = 0;
              do {
                auVar67 = auVar64._0_16_;
                uVar20 = vpcmpeqb_avx512vl(auVar67,auVar67);
                uVar45 = param_11 + lVar44;
                uVar18 = vpcmpeqb_avx512vl(auVar67,auVar67);
                uVar19 = vpcmpeqb_avx512vl(auVar67,auVar67);
                vscatterdps_avx512f(ZEXT864(uVar45) + ZEXT864(8) + auVar64 * (undefined1  [64])0x4,
                                    uVar20,auVar63);
                vscatterdps_avx512f(ZEXT864(uVar45) + ZEXT864(4) + auVar64 * (undefined1  [64])0x4,
                                    uVar18,auVar62);
                vscatterdps_avx512f(ZEXT864(uVar45) + auVar64 * (undefined1  [64])0x4,uVar19,auVar65
                                   );
                uVar53 = uVar53 + 0x10;
                lVar44 = lVar44 + 0xc0;
              } while (uVar53 < uVar42);
            }
            if (uVar42 + 1 <= uVar47) {
              auVar65 = vpbroadcastq_avx512f();
              uVar42 = param_11 + uVar42 * 0xc;
              auVar62 = vbroadcastss_avx512f(ZEXT416(*puStack_80));
              auVar63 = vbroadcastss_avx512f(ZEXT416(puStack_80[1]));
              auVar64 = vbroadcastss_avx512f(ZEXT416(puStack_80[2]));
              uVar20 = vpcmpgtq_avx512f(auVar65,_DAT_143087000);
              uVar18 = vpcmpgtq_avx512f(auVar65,_DAT_143087040);
              auVar65 = vmovdqu32_avx512f(_DAT_143087100);
              uVar61 = CONCAT11((char)uVar18,(char)uVar20);
              vscatterdps_avx512f(ZEXT864(uVar42) + auVar65 * (undefined1  [64])0x4,
                                  (ulonglong)uVar61,auVar62);
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(4) + auVar65 * (undefined1  [64])0x4,
                                  (ulonglong)uVar61,auVar63);
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(8) + auVar65 * (undefined1  [64])0x4,
                                  (ulonglong)uVar61,auVar64);
            }
            goto LAB_14010e0e4;
          }
        }
        lVar44 = 1;
        lVar46 = 0;
        uVar47 = 0;
        if (uVar42 / 6 != 0) {
          do {
            uVar53 = uVar47;
            uVar47 = uVar53 + 1;
            *(uint *)(lVar46 + param_11) = *puStack_80;
            *(uint *)(lVar46 + 4 + param_11) = puStack_80[1];
            *(uint *)(lVar46 + 8 + param_11) = puStack_80[2];
            *(uint *)(lVar46 + 0xc + param_11) = *puStack_80;
            *(uint *)(lVar46 + 0x10 + param_11) = puStack_80[1];
            *(uint *)(lVar46 + 0x14 + param_11) = puStack_80[2];
            lVar46 = lVar46 + 0x18;
          } while (uVar47 < uVar42 / 6);
          lVar44 = uVar53 + 2 + uVar47;
        }
        if (lVar44 - 1U < uVar42 / 3) {
          lVar44 = lVar44 * 3 + -3;
          *(uint *)(param_11 + lVar44 * 4) = *puStack_80;
          *(uint *)(param_11 + 4 + lVar44 * 4) = puStack_80[1];
          *(uint *)(param_11 + 8 + lVar44 * 4) = puStack_80[2];
        }
      }
LAB_14010e0e4:
      uStack_c0 = *(code **)(&UNK_1430872e0 + lVar56 * 8);
      iStack_218 = param_10;
      lStack_c8 = lVar55;
      uStack_a0 = param_7;
      (*uStack_c0)(uStack_a8,param_4,lVar43,param_9);
      lVar55 = lStack_c8 - lVar43;
      param_1 = param_1 + lVar50 * 0xc;
      param_4 = param_4 + lVar50 * 0xc;
      lVar50 = lVar43;
      param_7 = uStack_a0;
    }
    else {
      uStack_c0 = *(code **)(&UNK_1430872e0 + lVar56 * 8);
    }
    iStack_218 = param_10;
    if ((param_7 & 0x80) == 0) {
      if (lVar50 < lVar55) {
        lStack_c8 = lVar55 - lVar50;
        (*uStack_c0)(param_1,param_4,lStack_c8,param_9);
        param_1 = param_1 + lStack_c8 * 0xc;
        param_4 = param_4 + lStack_c8 * 0xc;
      }
      lVar56 = lVar59 * 3;
      if (lVar56 != 3 && SCARRY8(lVar56,-3) == lVar56 + -3 < 0) {
        lVar55 = 1;
        uVar42 = ((lVar56 + -1) / 3) * 3;
        uVar47 = uVar42 >> 1;
        if (uVar47 != 0) {
          lVar55 = lVar50 * -0xc + param_1;
          uVar53 = 0;
          do {
            uVar45 = uVar53;
            *(undefined4 *)(param_11 + uVar45 * 8) = *(undefined4 *)(lVar55 + uVar45 * 8);
            *(undefined4 *)(param_11 + 4 + uVar45 * 8) = *(undefined4 *)(lVar55 + 4 + uVar45 * 8);
            uVar53 = uVar45 + 1;
          } while (uVar53 < uVar47);
          lVar55 = uVar45 + 2 + uVar53;
        }
        if (lVar55 - 1U < uVar42) {
          *(undefined4 *)(param_11 + (lVar55 - 1U) * 4) =
               *(undefined4 *)(param_1 + (lVar50 * -3 + -1 + lVar55) * 4);
        }
      }
      lVar55 = lVar50 * 3;
      if (uVar51 == 1) {
        if (0 < lVar55) {
          uVar42 = lVar55 + 2;
          uVar47 = (longlong)uVar42 / 3;
          if ((longlong)uVar47 < 7) {
            lVar55 = 1;
            lVar44 = 0;
            if (uVar42 / 6 != 0) {
              lVar55 = param_11 + lVar59 * 0xc;
              uVar47 = 0;
              do {
                uVar53 = uVar47;
                uVar47 = uVar53 + 1;
                *(undefined4 *)(lVar44 + -0xc + lVar55) = *(undefined4 *)(lVar55 + -0x18);
                *(undefined4 *)(lVar44 + -8 + lVar55) = *(undefined4 *)(lVar55 + -0x14);
                *(undefined4 *)(lVar44 + -4 + lVar55) = *(undefined4 *)(lVar55 + -0x10);
                *(undefined4 *)(lVar44 + lVar55) = *(undefined4 *)(lVar55 + -0x18);
                *(undefined4 *)(lVar44 + 4 + lVar55) = *(undefined4 *)(lVar55 + -0x14);
                *(undefined4 *)(lVar44 + 8 + lVar55) = *(undefined4 *)(lVar55 + -0x10);
                lVar44 = lVar44 + 0x18;
              } while (uVar47 < uVar42 / 6);
              lVar55 = uVar53 + 2 + uVar47;
            }
            if (lVar55 - 1U < uVar42 / 3) {
              lVar56 = lVar55 * 3 + -3 + lVar56;
              *(undefined4 *)(param_11 + -0xc + lVar56 * 4) =
                   *(undefined4 *)(param_11 + -0x18 + lVar59 * 0xc);
              *(undefined4 *)(param_11 + -8 + lVar56 * 4) =
                   *(undefined4 *)(param_11 + -0x14 + lVar59 * 0xc);
              *(undefined4 *)(param_11 + -4 + lVar56 * 4) =
                   *(undefined4 *)(param_11 + -0x10 + lVar59 * 0xc);
            }
          }
          else {
            lVar55 = param_11 + lVar59 * 0xc;
            if ((longlong)uVar47 < 0x10) {
              uVar42 = 0;
            }
            else {
              uVar53 = 0;
              auVar65 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lVar55 + -0x18)));
              uVar42 = uVar47 & 0xfffffffffffffff0;
              auVar62 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lVar55 + -0x14)));
              auVar63 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lVar55 + -0x10)));
              auVar64 = vmovdqu32_avx512f(_DAT_143087100);
              lVar59 = 0;
              do {
                auVar67 = auVar64._0_16_;
                uVar20 = vpcmpeqb_avx512vl(auVar67,auVar67);
                uVar45 = lVar59 + -0xc + lVar55;
                uVar18 = vpcmpeqb_avx512vl(auVar67,auVar67);
                uVar19 = vpcmpeqb_avx512vl(auVar67,auVar67);
                vscatterdps_avx512f(ZEXT864(uVar45) + ZEXT864(8) + auVar64 * (undefined1  [64])0x4,
                                    uVar20,auVar63);
                vscatterdps_avx512f(ZEXT864(uVar45) + ZEXT864(4) + auVar64 * (undefined1  [64])0x4,
                                    uVar18,auVar62);
                vscatterdps_avx512f(ZEXT864(uVar45) + auVar64 * (undefined1  [64])0x4,uVar19,auVar65
                                   );
                uVar53 = uVar53 + 0x10;
                lVar59 = lVar59 + 0xc0;
              } while (uVar53 < uVar42);
            }
            if (uVar42 + 1 <= uVar47) {
              auVar65 = vpbroadcastq_avx512f();
              auVar62 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lVar55 + -0x18)));
              auVar63 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lVar55 + -0x14)));
              auVar64 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lVar55 + -0x10)));
              uVar20 = vpcmpgtq_avx512f(auVar65,_DAT_143087000);
              uVar18 = vpcmpgtq_avx512f(auVar65,_DAT_143087040);
              auVar65 = vmovdqu32_avx512f(_DAT_143087100);
              uVar61 = CONCAT11((char)uVar18,(char)uVar20);
              uVar42 = param_11 + (lVar56 + uVar42 * 3) * 4;
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(0xfffffffffffffff4) +
                                  auVar65 * (undefined1  [64])0x4,(ulonglong)uVar61,auVar62);
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(0xfffffffffffffff8) +
                                  auVar65 * (undefined1  [64])0x4,(ulonglong)uVar61,auVar63);
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(0xfffffffffffffffc) +
                                  auVar65 * (undefined1  [64])0x4,(ulonglong)uVar61,auVar64);
            }
          }
        }
      }
      else if (uVar51 == 3) {
        if (0 < lVar55) {
          lVar44 = 1;
          lVar46 = 0;
          lVar49 = 0;
          uVar42 = (lVar55 + 2U) / 6;
          if (uVar42 != 0) {
            lVar59 = param_11 + lVar59 * 0xc;
            uVar47 = 0;
            do {
              uVar53 = uVar47;
              uVar47 = uVar53 + 1;
              *(undefined4 *)(lVar46 + -0xc + lVar59) = *(undefined4 *)(lVar49 + -0x24 + lVar59);
              *(undefined4 *)(lVar46 + -8 + lVar59) = *(undefined4 *)(lVar49 + -0x20 + lVar59);
              *(undefined4 *)(lVar46 + -4 + lVar59) = *(undefined4 *)(lVar49 + -0x1c + lVar59);
              *(undefined4 *)(lVar46 + lVar59) = *(undefined4 *)(lVar49 + -0x30 + lVar59);
              *(undefined4 *)(lVar46 + 4 + lVar59) = *(undefined4 *)(lVar49 + -0x2c + lVar59);
              lVar44 = lVar49 + -0x28;
              lVar49 = lVar49 + -0x18;
              *(undefined4 *)(lVar46 + 8 + lVar59) = *(undefined4 *)(lVar44 + lVar59);
              lVar46 = lVar46 + 0x18;
            } while (uVar47 < uVar42);
            lVar44 = uVar53 + 2 + uVar47;
          }
          if (lVar44 - 1U < (lVar55 + 2U) / 3) {
            lVar59 = lVar44 * 3 + -3;
            lVar55 = lVar56 + lVar59;
            lVar56 = lVar56 - lVar59;
            *(undefined4 *)(param_11 + -0xc + lVar55 * 4) =
                 *(undefined4 *)(param_11 + -0x24 + lVar56 * 4);
            *(undefined4 *)(param_11 + -8 + lVar55 * 4) =
                 *(undefined4 *)(param_11 + -0x20 + lVar56 * 4);
            *(undefined4 *)(param_11 + -4 + lVar55 * 4) =
                 *(undefined4 *)(param_11 + -0x1c + lVar56 * 4);
          }
        }
      }
      else if ((uVar51 == 6) && (0 < lVar55)) {
        uVar42 = lVar55 + 2;
        uVar47 = (longlong)uVar42 / 3;
        if (6 < (longlong)uVar47) {
          lVar44 = param_11 + lVar59 * 0xc;
          lVar55 = lVar44 + -0xc;
          lVar46 = (longlong)puStack_80 + (4 - lVar55);
          if ((((longlong)(uVar47 * 0xc) <= lVar46) || (7 < -lVar46)) &&
             ((lVar55 = lVar55 - (longlong)puStack_80, 3 < lVar55 ||
              ((longlong)(uVar47 * 0xc) <= -lVar55)))) {
            if ((longlong)uVar47 < 0x10) {
              uVar42 = 0;
            }
            else {
              uVar53 = 0;
              auVar65 = vbroadcastss_avx512f(ZEXT416(*puStack_80));
              uVar42 = uVar47 & 0xfffffffffffffff0;
              auVar62 = vbroadcastss_avx512f(ZEXT416(puStack_80[1]));
              auVar63 = vbroadcastss_avx512f(ZEXT416(puStack_80[2]));
              auVar64 = vmovdqu32_avx512f(_DAT_143087100);
              lVar55 = 0;
              do {
                auVar67 = auVar64._0_16_;
                uVar20 = vpcmpeqb_avx512vl(auVar67,auVar67);
                uVar45 = lVar55 + -0xc + lVar44;
                uVar18 = vpcmpeqb_avx512vl(auVar67,auVar67);
                uVar19 = vpcmpeqb_avx512vl(auVar67,auVar67);
                vscatterdps_avx512f(ZEXT864(uVar45) + ZEXT864(8) + auVar64 * (undefined1  [64])0x4,
                                    uVar20,auVar63);
                vscatterdps_avx512f(ZEXT864(uVar45) + ZEXT864(4) + auVar64 * (undefined1  [64])0x4,
                                    uVar18,auVar62);
                vscatterdps_avx512f(ZEXT864(uVar45) + auVar64 * (undefined1  [64])0x4,uVar19,auVar65
                                   );
                uVar53 = uVar53 + 0x10;
                lVar55 = lVar55 + 0xc0;
              } while (uVar53 < uVar42);
            }
            if (uVar42 + 1 <= uVar47) {
              auVar65 = vpbroadcastq_avx512f();
              auVar62 = vbroadcastss_avx512f(ZEXT416(*puStack_80));
              auVar63 = vbroadcastss_avx512f(ZEXT416(puStack_80[1]));
              auVar64 = vbroadcastss_avx512f(ZEXT416(puStack_80[2]));
              uVar20 = vpcmpgtq_avx512f(auVar65,_DAT_143087000);
              uVar18 = vpcmpgtq_avx512f(auVar65,_DAT_143087040);
              auVar65 = vmovdqu32_avx512f(_DAT_143087100);
              uVar61 = CONCAT11((char)uVar18,(char)uVar20);
              uVar42 = param_11 + (lVar56 + uVar42 * 3) * 4;
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(0xfffffffffffffff4) +
                                  auVar65 * (undefined1  [64])0x4,(ulonglong)uVar61,auVar62);
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(0xfffffffffffffff8) +
                                  auVar65 * (undefined1  [64])0x4,(ulonglong)uVar61,auVar63);
              vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(0xfffffffffffffffc) +
                                  auVar65 * (undefined1  [64])0x4,(ulonglong)uVar61,auVar64);
            }
            goto LAB_14010e7ba;
          }
        }
        lVar55 = 1;
        lVar44 = 0;
        if (uVar42 / 6 != 0) {
          lVar55 = param_11 + lVar59 * 0xc;
          uVar47 = 0;
          do {
            uVar53 = uVar47;
            uVar47 = uVar53 + 1;
            *(uint *)(lVar44 + -0xc + lVar55) = *puStack_80;
            *(uint *)(lVar44 + -8 + lVar55) = puStack_80[1];
            *(uint *)(lVar44 + -4 + lVar55) = puStack_80[2];
            *(uint *)(lVar44 + lVar55) = *puStack_80;
            *(uint *)(lVar44 + 4 + lVar55) = puStack_80[1];
            *(uint *)(lVar44 + 8 + lVar55) = puStack_80[2];
            lVar44 = lVar44 + 0x18;
          } while (uVar47 < uVar42 / 6);
          lVar55 = uVar53 + 2 + uVar47;
        }
        if (lVar55 - 1U < uVar42 / 3) {
          lVar56 = lVar56 + lVar55 * 3 + -3;
          *(uint *)(param_11 + -0xc + lVar56 * 4) = *puStack_80;
          *(uint *)(param_11 + -8 + lVar56 * 4) = puStack_80[1];
          *(uint *)(param_11 + -4 + lVar56 * 4) = puStack_80[2];
        }
      }
LAB_14010e7ba:
      iStack_218 = param_10;
      (*uStack_c0)(param_11 + lVar50 * 0xc,param_4,lVar50,param_9);
    }
    else {
      (*uStack_c0)(param_1,param_4,lVar55,param_9);
    }
  }
  if ((uStack_40 ^ (ulonglong)auStack_238) == DAT_1436b4680) {
    return;
  }
LAB_14010ea8b:
  uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}


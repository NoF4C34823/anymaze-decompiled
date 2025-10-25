
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a2a160(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
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
  ulonglong uVar20;
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
  undefined8 uVar41;
  undefined8 uVar42;
  uint uVar43;
  ulonglong uVar44;
  uint uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  uint uVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  uint uVar57;
  ushort uVar58;
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  int iVar63;
  int iVar64;
  undefined1 auVar65 [16];
  code *pcStack_68;
  
  auVar62 = _DAT_14308e940;
  param_1 = param_1 + param_2 * param_3;
  lVar56 = (longlong)param_10;
  uVar57 = param_7 & 0xf;
  auVar65 = ZEXT816(0) << 0x40;
  lVar55 = (longlong)param_6;
  uVar49 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_LAB_14308ec40)[lVar55])(param_1,param_4,*param_5,param_9,param_10);
    return;
  }
  if (uVar57 == 6) {
    auVar65 = ZEXT416(*param_8);
  }
  lVar48 = *param_5;
  uVar50 = lVar56 - 1;
  iVar64 = auVar65._0_4_;
  if (lVar48 < (longlong)uVar50) {
    lVar56 = -uVar49;
    lVar52 = 0;
    if (lVar56 < (longlong)(uVar49 + lVar48)) {
      uVar51 = param_7 & 0x80;
      uVar45 = param_7 & 0x40;
      do {
        lVar54 = lVar56;
        if (((lVar56 < 0) || (lVar48 <= lVar56)) && (param_7 != 0xf0)) {
          if (uVar57 != 6) {
            if (uVar57 == 1) {
              if (lVar56 < 0) {
                lVar54 = 0;
                if (uVar45 != 0) {
                  lVar54 = lVar56;
                }
              }
              else if (uVar51 == 0) {
                lVar54 = lVar48 + -1;
              }
            }
            else if (uVar57 == 3) {
              if (lVar48 < 2) {
                if (lVar56 < 0) {
                  if (uVar45 == 0) {
                    lVar54 = -lVar56;
                    if (uVar51 == 0) {
                      lVar54 = 0;
                    }
                  }
                }
                else if (((0 < lVar56) && (uVar51 == 0)) && (lVar54 = -lVar56, uVar45 == 0)) {
                  lVar54 = 0;
                }
              }
              else if ((lVar56 < 0) || (lVar48 <= lVar56)) {
                if (lVar56 < 0) goto LAB_140a2afe0;
                while (uVar51 == 0) {
                  for (lVar54 = (lVar48 + -1) * 2 - lVar54; lVar54 < 0; lVar54 = -lVar54) {
LAB_140a2afe0:
                    if (uVar45 != 0) goto LAB_140a2ae8f;
                  }
                  if (lVar54 < lVar48) break;
                }
              }
            }
            goto LAB_140a2ae8f;
          }
          uVar43 = uVar45;
          if (-1 < lVar56) {
            uVar43 = uVar51;
          }
          iVar63 = iVar64;
          if (uVar43 != 0) goto LAB_140a2ae8f;
        }
        else {
LAB_140a2ae8f:
          iVar63 = *(int *)(param_1 + lVar54 * 4);
        }
        lVar56 = lVar56 + 1;
        *(int *)(param_11 + lVar52 * 4) = iVar63;
        lVar52 = lVar52 + 1;
      } while (lVar56 < (longlong)(uVar49 + lVar48));
    }
    (*(code *)(&PTR_LAB_14308ec40)[lVar55])(param_11 + uVar49 * 4,param_4,lVar48,param_9,param_10);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    uVar44 = param_11 + uVar49 * 4;
    if (0 < (longlong)uVar50) {
      if (6 < (longlong)uVar50) {
        lVar52 = lVar56 * 4 + -4;
        if ((lVar52 <= (longlong)(uVar44 - param_1)) || (lVar52 <= (longlong)-(uVar44 - param_1))) {
          if ((longlong)uVar50 < 0x10) {
            uVar53 = 0;
          }
          else {
            if ((longlong)uVar50 < 0x3b) {
              uVar47 = 0;
              uVar53 = uVar50 & 0xfffffffffffffff0;
            }
            else {
              uVar47 = uVar44 & 0x3f;
              if ((uVar44 & 3) == 0) {
                if ((uVar47 != 0) &&
                   (uVar47 = 0x40 - uVar47 >> 2, (longlong)uVar50 < (longlong)uVar47)) {
                  uVar47 = uVar50;
                }
              }
              else {
                uVar47 = 0;
              }
              uVar53 = uVar50 - (uVar50 - uVar47 & 0xf);
              if (uVar47 != 0) {
                uVar46 = 0;
                auVar59 = vmovdqu32_avx512f(_DAT_14308e980);
                auVar60 = vmovdqu32_avx512f(_DAT_14308e9c0);
                auVar61 = vpbroadcastq_avx512f();
                do {
                  uVar19 = vpcmpgtq_avx512f(auVar61,auVar59);
                  bVar22 = (byte)uVar19;
                  uVar19 = vpcmpgtq_avx512f(auVar61,auVar60);
                  bVar21 = (byte)uVar19;
                  auVar59 = vpaddq_avx512f(auVar59,auVar62);
                  auVar60 = vpaddq_avx512f(auVar60,auVar62);
                  uVar58 = CONCAT11(bVar21,bVar22);
                  piVar1 = (int *)(param_1 + uVar46 * 4);
                  iVar63 = piVar1[1];
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
                  puVar2 = (uint *)(uVar44 + uVar46 * 4);
                  bVar6 = (bool)((byte)(uVar58 >> 1) & 1);
                  bVar7 = (bool)((byte)(uVar58 >> 2) & 1);
                  bVar8 = (bool)((byte)(uVar58 >> 3) & 1);
                  bVar9 = (bool)((byte)(uVar58 >> 4) & 1);
                  bVar10 = (bool)((byte)(uVar58 >> 5) & 1);
                  bVar11 = (bool)((byte)(uVar58 >> 6) & 1);
                  bVar12 = (bool)((byte)(uVar58 >> 7) & 1);
                  bVar13 = (bool)(bVar21 >> 1 & 1);
                  bVar14 = (bool)(bVar21 >> 2 & 1);
                  bVar15 = (bool)(bVar21 >> 3 & 1);
                  bVar16 = (bool)(bVar21 >> 4 & 1);
                  bVar17 = (bool)(bVar21 >> 5 & 1);
                  bVar18 = (bool)(bVar21 >> 6 & 1);
                  *puVar2 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                            (uint)!(bool)(bVar22 & 1) * *puVar2;
                  puVar2[1] = (uint)bVar6 * (uint)((byte)(uVar58 >> 1) & 1) * iVar63 |
                              (uint)!bVar6 * puVar2[1];
                  puVar2[2] = (uint)bVar7 * (uint)((byte)(uVar58 >> 2) & 1) * iVar23 |
                              (uint)!bVar7 * puVar2[2];
                  puVar2[3] = (uint)bVar8 * (uint)((byte)(uVar58 >> 3) & 1) * iVar24 |
                              (uint)!bVar8 * puVar2[3];
                  puVar2[4] = (uint)bVar9 * (uint)((byte)(uVar58 >> 4) & 1) * iVar25 |
                              (uint)!bVar9 * puVar2[4];
                  puVar2[5] = (uint)bVar10 * (uint)((byte)(uVar58 >> 5) & 1) * iVar26 |
                              (uint)!bVar10 * puVar2[5];
                  puVar2[6] = (uint)bVar11 * (uint)((byte)(uVar58 >> 6) & 1) * iVar27 |
                              (uint)!bVar11 * puVar2[6];
                  puVar2[7] = (uint)bVar12 * (uint)((byte)(uVar58 >> 7) & 1) * iVar28 |
                              (uint)!bVar12 * puVar2[7];
                  puVar2[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar29 |
                              (uint)!(bool)(bVar21 & 1) * puVar2[8];
                  puVar2[9] = (uint)bVar13 * (uint)(bVar21 >> 1 & 1) * iVar30 |
                              (uint)!bVar13 * puVar2[9];
                  puVar2[10] = (uint)bVar14 * (uint)(bVar21 >> 2 & 1) * iVar31 |
                               (uint)!bVar14 * puVar2[10];
                  puVar2[0xb] = (uint)bVar15 * (uint)(bVar21 >> 3 & 1) * iVar32 |
                                (uint)!bVar15 * puVar2[0xb];
                  puVar2[0xc] = (uint)bVar16 * (uint)(bVar21 >> 4 & 1) * iVar33 |
                                (uint)!bVar16 * puVar2[0xc];
                  puVar2[0xd] = (uint)bVar17 * (uint)(bVar21 >> 5 & 1) * iVar34 |
                                (uint)!bVar17 * puVar2[0xd];
                  puVar2[0xe] = (uint)bVar18 * (uint)(bVar21 >> 6 & 1) * iVar35 |
                                (uint)!bVar18 * puVar2[0xe];
                  puVar2[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar36 |
                                (uint)!(bool)(bVar21 >> 7) * puVar2[0xf];
                  uVar46 = uVar46 + 0x10;
                } while (uVar46 < uVar47);
                if (uVar50 == uVar47) goto LAB_140a2a3fa;
              }
            }
            if ((longlong)(uVar47 + 0x10) <= (longlong)uVar53) {
              do {
                puVar3 = (undefined8 *)(param_1 + uVar47 * 4);
                uVar19 = puVar3[1];
                uVar37 = puVar3[2];
                uVar38 = puVar3[3];
                uVar39 = puVar3[4];
                uVar40 = puVar3[5];
                uVar41 = puVar3[6];
                uVar42 = puVar3[7];
                puVar4 = (undefined8 *)(uVar44 + uVar47 * 4);
                *puVar4 = *puVar3;
                puVar4[1] = uVar19;
                puVar4[2] = uVar37;
                puVar4[3] = uVar38;
                puVar4[4] = uVar39;
                puVar4[5] = uVar40;
                puVar4[6] = uVar41;
                puVar4[7] = uVar42;
                uVar47 = uVar47 + 0x10;
              } while (uVar47 < uVar53);
            }
          }
          if (uVar53 + 1 <= uVar50) {
            auVar62 = vpbroadcastq_avx512f();
            uVar19 = vpcmpgtq_avx512f(auVar62,_DAT_14308e980);
            bVar22 = (byte)uVar19;
            uVar19 = vpcmpgtq_avx512f(auVar62,_DAT_14308e9c0);
            bVar21 = (byte)uVar19;
            uVar58 = CONCAT11(bVar21,bVar22);
            piVar1 = (int *)(param_1 + uVar53 * 4);
            iVar63 = piVar1[1];
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
            puVar2 = (uint *)(param_11 + (uVar53 + uVar49) * 4);
            bVar6 = (bool)((byte)(uVar58 >> 1) & 1);
            bVar7 = (bool)((byte)(uVar58 >> 2) & 1);
            bVar8 = (bool)((byte)(uVar58 >> 3) & 1);
            bVar9 = (bool)((byte)(uVar58 >> 4) & 1);
            bVar10 = (bool)((byte)(uVar58 >> 5) & 1);
            bVar11 = (bool)((byte)(uVar58 >> 6) & 1);
            bVar12 = (bool)((byte)(uVar58 >> 7) & 1);
            bVar13 = (bool)(bVar21 >> 1 & 1);
            bVar14 = (bool)(bVar21 >> 2 & 1);
            bVar15 = (bool)(bVar21 >> 3 & 1);
            bVar16 = (bool)(bVar21 >> 4 & 1);
            bVar17 = (bool)(bVar21 >> 5 & 1);
            bVar18 = (bool)(bVar21 >> 6 & 1);
            *puVar2 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                      (uint)!(bool)(bVar22 & 1) * *puVar2;
            puVar2[1] = (uint)bVar6 * (uint)((byte)(uVar58 >> 1) & 1) * iVar63 |
                        (uint)!bVar6 * puVar2[1];
            puVar2[2] = (uint)bVar7 * (uint)((byte)(uVar58 >> 2) & 1) * iVar23 |
                        (uint)!bVar7 * puVar2[2];
            puVar2[3] = (uint)bVar8 * (uint)((byte)(uVar58 >> 3) & 1) * iVar24 |
                        (uint)!bVar8 * puVar2[3];
            puVar2[4] = (uint)bVar9 * (uint)((byte)(uVar58 >> 4) & 1) * iVar25 |
                        (uint)!bVar9 * puVar2[4];
            puVar2[5] = (uint)bVar10 * (uint)((byte)(uVar58 >> 5) & 1) * iVar26 |
                        (uint)!bVar10 * puVar2[5];
            puVar2[6] = (uint)bVar11 * (uint)((byte)(uVar58 >> 6) & 1) * iVar27 |
                        (uint)!bVar11 * puVar2[6];
            puVar2[7] = (uint)bVar12 * (uint)((byte)(uVar58 >> 7) & 1) * iVar28 |
                        (uint)!bVar12 * puVar2[7];
            puVar2[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar29 |
                        (uint)!(bool)(bVar21 & 1) * puVar2[8];
            puVar2[9] = (uint)bVar13 * (uint)(bVar21 >> 1 & 1) * iVar30 | (uint)!bVar13 * puVar2[9];
            puVar2[10] = (uint)bVar14 * (uint)(bVar21 >> 2 & 1) * iVar31 |
                         (uint)!bVar14 * puVar2[10];
            puVar2[0xb] = (uint)bVar15 * (uint)(bVar21 >> 3 & 1) * iVar32 |
                          (uint)!bVar15 * puVar2[0xb];
            puVar2[0xc] = (uint)bVar16 * (uint)(bVar21 >> 4 & 1) * iVar33 |
                          (uint)!bVar16 * puVar2[0xc];
            puVar2[0xd] = (uint)bVar17 * (uint)(bVar21 >> 5 & 1) * iVar34 |
                          (uint)!bVar17 * puVar2[0xd];
            puVar2[0xe] = (uint)bVar18 * (uint)(bVar21 >> 6 & 1) * iVar35 |
                          (uint)!bVar18 * puVar2[0xe];
            puVar2[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar36 |
                          (uint)!(bool)(bVar21 >> 7) * puVar2[0xf];
          }
          goto LAB_140a2a3fa;
        }
      }
      lVar52 = 1;
      uVar47 = lVar56 - 1U >> 1;
      uVar53 = 0;
      if (uVar47 != 0) {
        do {
          uVar46 = uVar53;
          *(undefined4 *)(uVar44 + uVar46 * 8) = *(undefined4 *)(param_1 + uVar46 * 8);
          *(undefined4 *)(uVar44 + 4 + uVar46 * 8) = *(undefined4 *)(param_1 + 4 + uVar46 * 8);
          uVar53 = uVar46 + 1;
        } while (uVar53 < uVar47);
        lVar52 = uVar46 + 2 + uVar53;
      }
      if (lVar52 - 1U < lVar56 - 1U) {
        *(undefined4 *)(param_11 + ((uVar49 - 1) + lVar52) * 4) =
             *(undefined4 *)(param_1 + (lVar52 - 1U) * 4);
      }
    }
LAB_140a2a3fa:
    auVar62 = _DAT_14308eb40;
    if (uVar57 == 1) {
      if (0 < (longlong)uVar49) {
        uVar45 = *(uint *)(param_11 + uVar49 * 4);
        if ((longlong)uVar49 < 0x10) {
          uVar53 = 0;
        }
        else {
          if ((longlong)uVar49 < 0x26) {
            uVar47 = 0;
            uVar53 = uVar49 & 0xfffffffffffffff0;
          }
          else {
            uVar47 = param_11 & 0x3f;
            if ((param_11 & 3) == 0) {
              if ((uVar47 != 0) &&
                 (uVar47 = 0x40 - uVar47 >> 2, (longlong)uVar49 < (longlong)uVar47)) {
                uVar47 = uVar49;
              }
            }
            else {
              uVar47 = 0;
            }
            uVar53 = uVar49 - (uVar49 - uVar47 & 0xf);
            if (uVar47 != 0) {
              uVar46 = 0;
              auVar59 = vmovdqu32_avx512f(_DAT_14308e980);
              auVar60 = vpbroadcastq_avx512f();
              do {
                uVar20 = vpcmpgtq_avx512f(auVar60,auVar59);
                auVar59 = vpaddq_avx512f(auVar59,auVar62);
                puVar2 = (uint *)(param_11 + uVar46 * 4);
                bVar6 = (bool)((byte)uVar20 & 1);
                bVar7 = (bool)((byte)(uVar20 >> 1) & 1);
                bVar8 = (bool)((byte)(uVar20 >> 2) & 1);
                bVar9 = (bool)((byte)(uVar20 >> 3) & 1);
                bVar10 = (bool)((byte)(uVar20 >> 4) & 1);
                bVar11 = (bool)((byte)(uVar20 >> 5) & 1);
                bVar12 = (bool)((byte)(uVar20 >> 6) & 1);
                bVar13 = SUB81(uVar20 >> 7,0);
                *puVar2 = bVar6 * uVar45 | (uint)!bVar6 * *puVar2;
                puVar2[1] = bVar7 * uVar45 | (uint)!bVar7 * puVar2[1];
                puVar2[2] = bVar8 * uVar45 | (uint)!bVar8 * puVar2[2];
                puVar2[3] = bVar9 * uVar45 | (uint)!bVar9 * puVar2[3];
                puVar2[4] = bVar10 * uVar45 | (uint)!bVar10 * puVar2[4];
                puVar2[5] = bVar11 * uVar45 | (uint)!bVar11 * puVar2[5];
                puVar2[6] = bVar12 * uVar45 | (uint)!bVar12 * puVar2[6];
                puVar2[7] = bVar13 * uVar45 | (uint)!bVar13 * puVar2[7];
                uVar46 = uVar46 + 8;
              } while (uVar46 < uVar47);
              if (uVar49 == uVar47) goto LAB_140a2a73c;
            }
          }
          if ((longlong)(uVar47 + 0x10) <= (longlong)uVar53) {
            auVar62 = vbroadcastss_avx512f(ZEXT416(uVar45));
            do {
              *(undefined1 (*) [64])(param_11 + uVar47 * 4) = auVar62;
              uVar47 = uVar47 + 0x10;
            } while (uVar47 < uVar53);
          }
        }
        auVar62 = _DAT_14308eb40;
        if (uVar53 + 1 <= uVar49) {
          auVar59 = vmovdqu32_avx512f(_DAT_14308e980);
          uVar47 = 0;
          auVar60 = vpbroadcastq_avx512f();
          do {
            uVar46 = vpcmpgtq_avx512f(auVar60,auVar59);
            auVar59 = vpaddq_avx512f(auVar59,auVar62);
            puVar2 = (uint *)(param_11 + uVar53 * 4 + uVar47 * 4);
            bVar6 = (bool)((byte)uVar46 & 1);
            bVar7 = (bool)((byte)(uVar46 >> 1) & 1);
            bVar8 = (bool)((byte)(uVar46 >> 2) & 1);
            bVar9 = (bool)((byte)(uVar46 >> 3) & 1);
            bVar10 = (bool)((byte)(uVar46 >> 4) & 1);
            bVar11 = (bool)((byte)(uVar46 >> 5) & 1);
            bVar12 = (bool)((byte)(uVar46 >> 6) & 1);
            bVar13 = SUB81(uVar46 >> 7,0);
            *puVar2 = bVar6 * uVar45 | (uint)!bVar6 * *puVar2;
            puVar2[1] = bVar7 * uVar45 | (uint)!bVar7 * puVar2[1];
            puVar2[2] = bVar8 * uVar45 | (uint)!bVar8 * puVar2[2];
            puVar2[3] = bVar9 * uVar45 | (uint)!bVar9 * puVar2[3];
            puVar2[4] = bVar10 * uVar45 | (uint)!bVar10 * puVar2[4];
            puVar2[5] = bVar11 * uVar45 | (uint)!bVar11 * puVar2[5];
            puVar2[6] = bVar12 * uVar45 | (uint)!bVar12 * puVar2[6];
            puVar2[7] = bVar13 * uVar45 | (uint)!bVar13 * puVar2[7];
            uVar47 = uVar47 + 8;
          } while (uVar47 < uVar49 - uVar53);
        }
      }
    }
    else if (uVar57 == 3) {
      if (0 < (longlong)uVar49) {
        lVar52 = 1;
        lVar54 = 0;
        if (uVar49 >> 1 != 0) {
          lVar52 = param_11 + lVar56 * 4;
          uVar53 = 0;
          do {
            uVar47 = uVar53;
            *(undefined4 *)(param_11 + uVar47 * 8) = *(undefined4 *)(lVar54 + -4 + lVar52);
            lVar5 = lVar54 + -8;
            lVar54 = lVar54 + -8;
            *(undefined4 *)(param_11 + 4 + uVar47 * 8) = *(undefined4 *)(lVar5 + lVar52);
            uVar53 = uVar47 + 1;
          } while (uVar53 < uVar49 >> 1);
          lVar52 = uVar47 + 2 + uVar53;
        }
        uVar53 = lVar52 - 1;
        if (uVar53 < uVar49) {
          *(undefined4 *)(param_11 + uVar53 * 4) =
               *(undefined4 *)((param_11 - 4) + (lVar56 - uVar53) * 4);
        }
      }
    }
    else if ((uVar57 == 6) && (0 < (longlong)uVar49)) {
      if ((longlong)uVar49 < 0x10) {
        uVar53 = 0;
      }
      else {
        if ((longlong)uVar49 < 0x26) {
          uVar47 = 0;
          uVar53 = uVar49 & 0xfffffffffffffff0;
        }
        else {
          uVar47 = param_11 & 0x3f;
          if ((param_11 & 3) == 0) {
            if ((uVar47 != 0) && (uVar47 = 0x40 - uVar47 >> 2, (longlong)uVar49 < (longlong)uVar47))
            {
              uVar47 = uVar49;
            }
          }
          else {
            uVar47 = 0;
          }
          uVar53 = uVar49 - (uVar49 - uVar47 & 0xf);
          if (uVar47 != 0) {
            uVar46 = 0;
            auVar59 = vmovdqu32_avx512f(_DAT_14308e980);
            auVar60 = vpbroadcastq_avx512f();
            do {
              uVar20 = vpcmpgtq_avx512f(auVar60,auVar59);
              auVar59 = vpaddq_avx512f(auVar59,auVar62);
              puVar2 = (uint *)(param_11 + uVar46 * 4);
              bVar6 = (bool)((byte)uVar20 & 1);
              bVar7 = (bool)((byte)(uVar20 >> 1) & 1);
              bVar8 = (bool)((byte)(uVar20 >> 2) & 1);
              bVar9 = (bool)((byte)(uVar20 >> 3) & 1);
              bVar10 = (bool)((byte)(uVar20 >> 4) & 1);
              bVar11 = (bool)((byte)(uVar20 >> 5) & 1);
              bVar12 = (bool)((byte)(uVar20 >> 6) & 1);
              bVar13 = SUB81(uVar20 >> 7,0);
              *puVar2 = (uint)bVar6 * iVar64 | (uint)!bVar6 * *puVar2;
              puVar2[1] = (uint)bVar7 * iVar64 | (uint)!bVar7 * puVar2[1];
              puVar2[2] = (uint)bVar8 * iVar64 | (uint)!bVar8 * puVar2[2];
              puVar2[3] = (uint)bVar9 * iVar64 | (uint)!bVar9 * puVar2[3];
              puVar2[4] = (uint)bVar10 * iVar64 | (uint)!bVar10 * puVar2[4];
              puVar2[5] = (uint)bVar11 * iVar64 | (uint)!bVar11 * puVar2[5];
              puVar2[6] = (uint)bVar12 * iVar64 | (uint)!bVar12 * puVar2[6];
              puVar2[7] = (uint)bVar13 * iVar64 | (uint)!bVar13 * puVar2[7];
              uVar46 = uVar46 + 8;
            } while (uVar46 < uVar47);
            if (uVar49 == uVar47) goto LAB_140a2a73c;
          }
        }
        if ((longlong)(uVar47 + 0x10) <= (longlong)uVar53) {
          auVar62 = vbroadcastss_avx512f(auVar65);
          do {
            *(undefined1 (*) [64])(param_11 + uVar47 * 4) = auVar62;
            uVar47 = uVar47 + 0x10;
          } while (uVar47 < uVar53);
        }
      }
      auVar62 = _DAT_14308eb40;
      if (uVar53 + 1 <= uVar49) {
        auVar59 = vmovdqu32_avx512f(_DAT_14308e980);
        uVar47 = 0;
        auVar60 = vpbroadcastq_avx512f();
        do {
          uVar46 = vpcmpgtq_avx512f(auVar60,auVar59);
          auVar59 = vpaddq_avx512f(auVar59,auVar62);
          puVar2 = (uint *)(param_11 + uVar53 * 4 + uVar47 * 4);
          bVar6 = (bool)((byte)uVar46 & 1);
          bVar7 = (bool)((byte)(uVar46 >> 1) & 1);
          bVar8 = (bool)((byte)(uVar46 >> 2) & 1);
          bVar9 = (bool)((byte)(uVar46 >> 3) & 1);
          bVar10 = (bool)((byte)(uVar46 >> 4) & 1);
          bVar11 = (bool)((byte)(uVar46 >> 5) & 1);
          bVar12 = (bool)((byte)(uVar46 >> 6) & 1);
          bVar13 = SUB81(uVar46 >> 7,0);
          *puVar2 = (uint)bVar6 * iVar64 | (uint)!bVar6 * *puVar2;
          puVar2[1] = (uint)bVar7 * iVar64 | (uint)!bVar7 * puVar2[1];
          puVar2[2] = (uint)bVar8 * iVar64 | (uint)!bVar8 * puVar2[2];
          puVar2[3] = (uint)bVar9 * iVar64 | (uint)!bVar9 * puVar2[3];
          puVar2[4] = (uint)bVar10 * iVar64 | (uint)!bVar10 * puVar2[4];
          puVar2[5] = (uint)bVar11 * iVar64 | (uint)!bVar11 * puVar2[5];
          puVar2[6] = (uint)bVar12 * iVar64 | (uint)!bVar12 * puVar2[6];
          puVar2[7] = (uint)bVar13 * iVar64 | (uint)!bVar13 * puVar2[7];
          uVar47 = uVar47 + 8;
        } while (uVar47 < uVar49 - uVar53);
      }
    }
LAB_140a2a73c:
    pcStack_68 = (code *)(&PTR_LAB_14308ec40)[lVar55];
    (*pcStack_68)(uVar44,param_4,uVar49,param_9,param_10);
    param_1 = param_1 + uVar49 * 4;
    param_4 = param_4 + uVar49 * 4;
    lVar48 = lVar48 - uVar49;
  }
  else {
    pcStack_68 = (code *)(&PTR_LAB_14308ec40)[lVar55];
  }
  if ((param_7 & 0x80) != 0) {
    (*pcStack_68)(param_1,param_4,lVar48,param_9,param_10);
    return;
  }
  if ((longlong)uVar49 < lVar48) {
    lVar48 = lVar48 - uVar49;
    (*pcStack_68)(param_1,param_4,lVar48,param_9,param_10);
    param_1 = param_1 + lVar48 * 4;
    param_4 = param_4 + lVar48 * 4;
  }
  auVar62 = _DAT_14308e940;
  if (0 < (longlong)uVar50) {
    if (6 < (longlong)uVar50) {
      lVar48 = param_1 + uVar49 * -4;
      lVar55 = lVar56 * 4 + -4;
      if ((lVar55 <= (longlong)(param_11 - lVar48)) || (lVar55 <= (longlong)-(param_11 - lVar48))) {
        if ((longlong)uVar50 < 0x10) {
          uVar44 = 0;
        }
        else {
          if ((longlong)uVar50 < 0x3b) {
            uVar53 = 0;
            uVar44 = uVar50 & 0xfffffffffffffff0;
          }
          else {
            uVar53 = param_11 & 0x3f;
            if ((param_11 & 3) == 0) {
              if ((uVar53 != 0) &&
                 (uVar53 = 0x40 - uVar53 >> 2, (longlong)uVar50 < (longlong)uVar53)) {
                uVar53 = uVar50;
              }
            }
            else {
              uVar53 = 0;
            }
            uVar44 = uVar50 - (uVar50 - uVar53 & 0xf);
            if (uVar53 != 0) {
              uVar47 = 0;
              auVar59 = vmovdqu32_avx512f(_DAT_14308e980);
              auVar60 = vmovdqu32_avx512f(_DAT_14308e9c0);
              auVar61 = vpbroadcastq_avx512f();
              do {
                uVar19 = vpcmpgtq_avx512f(auVar61,auVar59);
                bVar22 = (byte)uVar19;
                uVar19 = vpcmpgtq_avx512f(auVar61,auVar60);
                bVar21 = (byte)uVar19;
                auVar59 = vpaddq_avx512f(auVar59,auVar62);
                auVar60 = vpaddq_avx512f(auVar60,auVar62);
                uVar58 = CONCAT11(bVar21,bVar22);
                piVar1 = (int *)(lVar48 + uVar47 * 4);
                iVar64 = piVar1[1];
                iVar63 = piVar1[2];
                iVar23 = piVar1[3];
                iVar24 = piVar1[4];
                iVar25 = piVar1[5];
                iVar26 = piVar1[6];
                iVar27 = piVar1[7];
                iVar28 = piVar1[8];
                iVar29 = piVar1[9];
                iVar30 = piVar1[10];
                iVar31 = piVar1[0xb];
                iVar32 = piVar1[0xc];
                iVar33 = piVar1[0xd];
                iVar34 = piVar1[0xe];
                iVar35 = piVar1[0xf];
                puVar2 = (uint *)(param_11 + uVar47 * 4);
                bVar6 = (bool)((byte)(uVar58 >> 1) & 1);
                bVar7 = (bool)((byte)(uVar58 >> 2) & 1);
                bVar8 = (bool)((byte)(uVar58 >> 3) & 1);
                bVar9 = (bool)((byte)(uVar58 >> 4) & 1);
                bVar10 = (bool)((byte)(uVar58 >> 5) & 1);
                bVar11 = (bool)((byte)(uVar58 >> 6) & 1);
                bVar12 = (bool)((byte)(uVar58 >> 7) & 1);
                bVar13 = (bool)(bVar21 >> 1 & 1);
                bVar14 = (bool)(bVar21 >> 2 & 1);
                bVar15 = (bool)(bVar21 >> 3 & 1);
                bVar16 = (bool)(bVar21 >> 4 & 1);
                bVar17 = (bool)(bVar21 >> 5 & 1);
                bVar18 = (bool)(bVar21 >> 6 & 1);
                *puVar2 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                          (uint)!(bool)(bVar22 & 1) * *puVar2;
                puVar2[1] = (uint)bVar6 * (uint)((byte)(uVar58 >> 1) & 1) * iVar64 |
                            (uint)!bVar6 * puVar2[1];
                puVar2[2] = (uint)bVar7 * (uint)((byte)(uVar58 >> 2) & 1) * iVar63 |
                            (uint)!bVar7 * puVar2[2];
                puVar2[3] = (uint)bVar8 * (uint)((byte)(uVar58 >> 3) & 1) * iVar23 |
                            (uint)!bVar8 * puVar2[3];
                puVar2[4] = (uint)bVar9 * (uint)((byte)(uVar58 >> 4) & 1) * iVar24 |
                            (uint)!bVar9 * puVar2[4];
                puVar2[5] = (uint)bVar10 * (uint)((byte)(uVar58 >> 5) & 1) * iVar25 |
                            (uint)!bVar10 * puVar2[5];
                puVar2[6] = (uint)bVar11 * (uint)((byte)(uVar58 >> 6) & 1) * iVar26 |
                            (uint)!bVar11 * puVar2[6];
                puVar2[7] = (uint)bVar12 * (uint)((byte)(uVar58 >> 7) & 1) * iVar27 |
                            (uint)!bVar12 * puVar2[7];
                puVar2[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar28 |
                            (uint)!(bool)(bVar21 & 1) * puVar2[8];
                puVar2[9] = (uint)bVar13 * (uint)(bVar21 >> 1 & 1) * iVar29 |
                            (uint)!bVar13 * puVar2[9];
                puVar2[10] = (uint)bVar14 * (uint)(bVar21 >> 2 & 1) * iVar30 |
                             (uint)!bVar14 * puVar2[10];
                puVar2[0xb] = (uint)bVar15 * (uint)(bVar21 >> 3 & 1) * iVar31 |
                              (uint)!bVar15 * puVar2[0xb];
                puVar2[0xc] = (uint)bVar16 * (uint)(bVar21 >> 4 & 1) * iVar32 |
                              (uint)!bVar16 * puVar2[0xc];
                puVar2[0xd] = (uint)bVar17 * (uint)(bVar21 >> 5 & 1) * iVar33 |
                              (uint)!bVar17 * puVar2[0xd];
                puVar2[0xe] = (uint)bVar18 * (uint)(bVar21 >> 6 & 1) * iVar34 |
                              (uint)!bVar18 * puVar2[0xe];
                puVar2[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar35 |
                              (uint)!(bool)(bVar21 >> 7) * puVar2[0xf];
                uVar47 = uVar47 + 0x10;
              } while (uVar47 < uVar53);
              if (uVar50 == uVar53) goto LAB_140a2a9bf;
            }
          }
          if ((longlong)(uVar53 + 0x10) <= (longlong)uVar44) {
            do {
              puVar3 = (undefined8 *)(lVar48 + uVar53 * 4);
              uVar19 = puVar3[1];
              uVar37 = puVar3[2];
              uVar38 = puVar3[3];
              uVar39 = puVar3[4];
              uVar40 = puVar3[5];
              uVar41 = puVar3[6];
              uVar42 = puVar3[7];
              puVar4 = (undefined8 *)(param_11 + uVar53 * 4);
              *puVar4 = *puVar3;
              puVar4[1] = uVar19;
              puVar4[2] = uVar37;
              puVar4[3] = uVar38;
              puVar4[4] = uVar39;
              puVar4[5] = uVar40;
              puVar4[6] = uVar41;
              puVar4[7] = uVar42;
              uVar53 = uVar53 + 0x10;
            } while (uVar53 < uVar44);
          }
        }
        if (uVar44 + 1 <= uVar50) {
          auVar62 = vpbroadcastq_avx512f();
          uVar19 = vpcmpgtq_avx512f(auVar62,_DAT_14308e980);
          bVar22 = (byte)uVar19;
          uVar19 = vpcmpgtq_avx512f(auVar62,_DAT_14308e9c0);
          bVar21 = (byte)uVar19;
          uVar58 = CONCAT11(bVar21,bVar22);
          piVar1 = (int *)(param_1 + (uVar44 - uVar49) * 4);
          iVar64 = piVar1[1];
          iVar63 = piVar1[2];
          iVar23 = piVar1[3];
          iVar24 = piVar1[4];
          iVar25 = piVar1[5];
          iVar26 = piVar1[6];
          iVar27 = piVar1[7];
          iVar28 = piVar1[8];
          iVar29 = piVar1[9];
          iVar30 = piVar1[10];
          iVar31 = piVar1[0xb];
          iVar32 = piVar1[0xc];
          iVar33 = piVar1[0xd];
          iVar34 = piVar1[0xe];
          iVar35 = piVar1[0xf];
          puVar2 = (uint *)(param_11 + uVar44 * 4);
          bVar6 = (bool)((byte)(uVar58 >> 1) & 1);
          bVar7 = (bool)((byte)(uVar58 >> 2) & 1);
          bVar8 = (bool)((byte)(uVar58 >> 3) & 1);
          bVar9 = (bool)((byte)(uVar58 >> 4) & 1);
          bVar10 = (bool)((byte)(uVar58 >> 5) & 1);
          bVar11 = (bool)((byte)(uVar58 >> 6) & 1);
          bVar12 = (bool)((byte)(uVar58 >> 7) & 1);
          bVar13 = (bool)(bVar21 >> 1 & 1);
          bVar14 = (bool)(bVar21 >> 2 & 1);
          bVar15 = (bool)(bVar21 >> 3 & 1);
          bVar16 = (bool)(bVar21 >> 4 & 1);
          bVar17 = (bool)(bVar21 >> 5 & 1);
          bVar18 = (bool)(bVar21 >> 6 & 1);
          *puVar2 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                    (uint)!(bool)(bVar22 & 1) * *puVar2;
          puVar2[1] = (uint)bVar6 * (uint)((byte)(uVar58 >> 1) & 1) * iVar64 |
                      (uint)!bVar6 * puVar2[1];
          puVar2[2] = (uint)bVar7 * (uint)((byte)(uVar58 >> 2) & 1) * iVar63 |
                      (uint)!bVar7 * puVar2[2];
          puVar2[3] = (uint)bVar8 * (uint)((byte)(uVar58 >> 3) & 1) * iVar23 |
                      (uint)!bVar8 * puVar2[3];
          puVar2[4] = (uint)bVar9 * (uint)((byte)(uVar58 >> 4) & 1) * iVar24 |
                      (uint)!bVar9 * puVar2[4];
          puVar2[5] = (uint)bVar10 * (uint)((byte)(uVar58 >> 5) & 1) * iVar25 |
                      (uint)!bVar10 * puVar2[5];
          puVar2[6] = (uint)bVar11 * (uint)((byte)(uVar58 >> 6) & 1) * iVar26 |
                      (uint)!bVar11 * puVar2[6];
          puVar2[7] = (uint)bVar12 * (uint)((byte)(uVar58 >> 7) & 1) * iVar27 |
                      (uint)!bVar12 * puVar2[7];
          puVar2[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar28 |
                      (uint)!(bool)(bVar21 & 1) * puVar2[8];
          puVar2[9] = (uint)bVar13 * (uint)(bVar21 >> 1 & 1) * iVar29 | (uint)!bVar13 * puVar2[9];
          puVar2[10] = (uint)bVar14 * (uint)(bVar21 >> 2 & 1) * iVar30 | (uint)!bVar14 * puVar2[10];
          puVar2[0xb] = (uint)bVar15 * (uint)(bVar21 >> 3 & 1) * iVar31 |
                        (uint)!bVar15 * puVar2[0xb];
          puVar2[0xc] = (uint)bVar16 * (uint)(bVar21 >> 4 & 1) * iVar32 |
                        (uint)!bVar16 * puVar2[0xc];
          puVar2[0xd] = (uint)bVar17 * (uint)(bVar21 >> 5 & 1) * iVar33 |
                        (uint)!bVar17 * puVar2[0xd];
          puVar2[0xe] = (uint)bVar18 * (uint)(bVar21 >> 6 & 1) * iVar34 |
                        (uint)!bVar18 * puVar2[0xe];
          puVar2[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar35 |
                        (uint)!(bool)(bVar21 >> 7) * puVar2[0xf];
        }
        goto LAB_140a2a9bf;
      }
    }
    lVar55 = 1;
    uVar50 = lVar56 - 1U >> 1;
    if (uVar50 != 0) {
      lVar55 = param_1 + uVar49 * -4;
      uVar44 = 0;
      do {
        uVar53 = uVar44;
        *(undefined4 *)(param_11 + uVar53 * 8) = *(undefined4 *)(lVar55 + uVar53 * 8);
        *(undefined4 *)(param_11 + 4 + uVar53 * 8) = *(undefined4 *)(lVar55 + 4 + uVar53 * 8);
        uVar44 = uVar53 + 1;
      } while (uVar44 < uVar50);
      lVar55 = uVar53 + 2 + uVar44;
    }
    uVar50 = lVar55 - 1;
    if (uVar50 < lVar56 - 1U) {
      *(undefined4 *)(param_11 + uVar50 * 4) = *(undefined4 *)(param_1 + (uVar50 - uVar49) * 4);
    }
  }
LAB_140a2a9bf:
  auVar62 = _DAT_14308eb40;
  if (uVar57 == 1) {
    if (0 < (longlong)uVar49) {
      if (6 < (longlong)uVar49) {
        lVar55 = param_11 + lVar56 * 4;
        uVar50 = lVar55 - 4;
        lVar48 = uVar50 - (lVar55 + -8);
        if ((3 < lVar48) || ((longlong)(uVar49 * 4) <= -lVar48)) {
          uVar57 = *(uint *)(lVar55 + -8);
          if ((longlong)uVar49 < 0x10) {
            uVar50 = 0;
          }
          else {
            if ((longlong)uVar49 < 0x26) {
              uVar44 = 0;
              uVar50 = uVar49 & 0xfffffffffffffff0;
            }
            else {
              uVar44 = uVar50 & 0x3f;
              if ((uVar50 & 3) == 0) {
                if ((uVar44 != 0) &&
                   (uVar44 = 0x40 - uVar44 >> 2, (longlong)uVar49 < (longlong)uVar44)) {
                  uVar44 = uVar49;
                }
              }
              else {
                uVar44 = 0;
              }
              uVar50 = uVar49 - (uVar49 - uVar44 & 0xf);
              if (uVar44 != 0) {
                uVar53 = 0;
                auVar59 = vmovdqu32_avx512f(_DAT_14308e980);
                auVar60 = vpbroadcastq_avx512f();
                do {
                  uVar47 = vpcmpgtq_avx512f(auVar60,auVar59);
                  auVar59 = vpaddq_avx512f(auVar59,auVar62);
                  puVar2 = (uint *)(lVar55 + -4 + uVar53 * 4);
                  bVar6 = (bool)((byte)uVar47 & 1);
                  bVar7 = (bool)((byte)(uVar47 >> 1) & 1);
                  bVar8 = (bool)((byte)(uVar47 >> 2) & 1);
                  bVar9 = (bool)((byte)(uVar47 >> 3) & 1);
                  bVar10 = (bool)((byte)(uVar47 >> 4) & 1);
                  bVar11 = (bool)((byte)(uVar47 >> 5) & 1);
                  bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
                  bVar13 = SUB81(uVar47 >> 7,0);
                  *puVar2 = bVar6 * uVar57 | (uint)!bVar6 * *puVar2;
                  puVar2[1] = bVar7 * uVar57 | (uint)!bVar7 * puVar2[1];
                  puVar2[2] = bVar8 * uVar57 | (uint)!bVar8 * puVar2[2];
                  puVar2[3] = bVar9 * uVar57 | (uint)!bVar9 * puVar2[3];
                  puVar2[4] = bVar10 * uVar57 | (uint)!bVar10 * puVar2[4];
                  puVar2[5] = bVar11 * uVar57 | (uint)!bVar11 * puVar2[5];
                  puVar2[6] = bVar12 * uVar57 | (uint)!bVar12 * puVar2[6];
                  puVar2[7] = bVar13 * uVar57 | (uint)!bVar13 * puVar2[7];
                  uVar53 = uVar53 + 8;
                } while (uVar53 < uVar44);
                if (uVar49 == uVar44) goto LAB_140a2ad74;
              }
            }
            if ((longlong)(uVar44 + 0x10) <= (longlong)uVar50) {
              auVar62 = vbroadcastss_avx512f(ZEXT416(uVar57));
              do {
                *(undefined1 (*) [64])(lVar55 + -4 + uVar44 * 4) = auVar62;
                uVar44 = uVar44 + 0x10;
              } while (uVar44 < uVar50);
            }
          }
          auVar62 = _DAT_14308eb40;
          if (uVar50 + 1 <= uVar49) {
            auVar59 = vmovdqu32_avx512f(_DAT_14308e980);
            uVar44 = 0;
            auVar60 = vpbroadcastq_avx512f();
            do {
              uVar53 = vpcmpgtq_avx512f(auVar60,auVar59);
              auVar59 = vpaddq_avx512f(auVar59,auVar62);
              puVar2 = (uint *)(lVar55 + uVar50 * 4 + -4 + uVar44 * 4);
              bVar6 = (bool)((byte)uVar53 & 1);
              bVar7 = (bool)((byte)(uVar53 >> 1) & 1);
              bVar8 = (bool)((byte)(uVar53 >> 2) & 1);
              bVar9 = (bool)((byte)(uVar53 >> 3) & 1);
              bVar10 = (bool)((byte)(uVar53 >> 4) & 1);
              bVar11 = (bool)((byte)(uVar53 >> 5) & 1);
              bVar12 = (bool)((byte)(uVar53 >> 6) & 1);
              bVar13 = SUB81(uVar53 >> 7,0);
              *puVar2 = bVar6 * uVar57 | (uint)!bVar6 * *puVar2;
              puVar2[1] = bVar7 * uVar57 | (uint)!bVar7 * puVar2[1];
              puVar2[2] = bVar8 * uVar57 | (uint)!bVar8 * puVar2[2];
              puVar2[3] = bVar9 * uVar57 | (uint)!bVar9 * puVar2[3];
              puVar2[4] = bVar10 * uVar57 | (uint)!bVar10 * puVar2[4];
              puVar2[5] = bVar11 * uVar57 | (uint)!bVar11 * puVar2[5];
              puVar2[6] = bVar12 * uVar57 | (uint)!bVar12 * puVar2[6];
              puVar2[7] = bVar13 * uVar57 | (uint)!bVar13 * puVar2[7];
              uVar44 = uVar44 + 8;
            } while (uVar44 < uVar49 - uVar50);
          }
          goto LAB_140a2ad74;
        }
      }
      lVar55 = 1;
      if (uVar49 >> 1 != 0) {
        lVar55 = param_11 + lVar56 * 4;
        uVar50 = 0;
        do {
          uVar44 = uVar50;
          *(undefined4 *)(lVar55 + -4 + uVar44 * 8) = *(undefined4 *)(lVar55 + -8);
          *(undefined4 *)(lVar55 + uVar44 * 8) = *(undefined4 *)(lVar55 + -8);
          uVar50 = uVar44 + 1;
        } while (uVar50 < uVar49 >> 1);
        lVar55 = uVar44 + 2 + uVar50;
      }
      if (lVar55 - 1U < uVar49) {
        *(undefined4 *)((param_11 - 4) + (lVar56 + -1 + lVar55) * 4) =
             *(undefined4 *)((param_11 - 8) + lVar56 * 4);
      }
    }
  }
  else if (uVar57 == 3) {
    if (0 < (longlong)uVar49) {
      lVar55 = 1;
      lVar48 = 0;
      if (uVar49 >> 1 != 0) {
        lVar55 = param_11 + lVar56 * 4;
        uVar50 = 0;
        do {
          uVar44 = uVar50;
          *(undefined4 *)(lVar55 + -4 + uVar44 * 8) = *(undefined4 *)(lVar48 + -0xc + lVar55);
          lVar52 = lVar48 + -0x10;
          lVar48 = lVar48 + -8;
          *(undefined4 *)(lVar55 + uVar44 * 8) = *(undefined4 *)(lVar52 + lVar55);
          uVar50 = uVar44 + 1;
        } while (uVar50 < uVar49 >> 1);
        lVar55 = uVar44 + 2 + uVar50;
      }
      if (lVar55 - 1U < uVar49) {
        *(undefined4 *)((param_11 - 4) + (lVar56 + -1 + lVar55) * 4) =
             *(undefined4 *)((param_11 - 0xc) + (lVar56 - (lVar55 - 1U)) * 4);
      }
    }
  }
  else if ((uVar57 == 6) && (0 < (longlong)uVar49)) {
    iVar64 = auVar65._0_4_;
    if ((longlong)uVar49 < 0x10) {
      uVar50 = 0;
    }
    else {
      if ((longlong)uVar49 < 0x26) {
        uVar44 = 0;
        uVar50 = uVar49 & 0xfffffffffffffff0;
      }
      else {
        lVar55 = param_11 + lVar56 * 4;
        uVar50 = lVar55 - 4;
        uVar44 = uVar50 & 0x3f;
        if ((uVar50 & 3) == 0) {
          if ((uVar44 != 0) && (uVar44 = 0x40 - uVar44 >> 2, (longlong)uVar49 < (longlong)uVar44)) {
            uVar44 = uVar49;
          }
        }
        else {
          uVar44 = 0;
        }
        uVar50 = uVar49 - (uVar49 - uVar44 & 0xf);
        if (uVar44 != 0) {
          uVar53 = 0;
          auVar59 = vmovdqu32_avx512f(_DAT_14308e980);
          auVar60 = vpbroadcastq_avx512f();
          do {
            uVar47 = vpcmpgtq_avx512f(auVar60,auVar59);
            auVar59 = vpaddq_avx512f(auVar59,auVar62);
            puVar2 = (uint *)(lVar55 + -4 + uVar53 * 4);
            bVar6 = (bool)((byte)uVar47 & 1);
            bVar7 = (bool)((byte)(uVar47 >> 1) & 1);
            bVar8 = (bool)((byte)(uVar47 >> 2) & 1);
            bVar9 = (bool)((byte)(uVar47 >> 3) & 1);
            bVar10 = (bool)((byte)(uVar47 >> 4) & 1);
            bVar11 = (bool)((byte)(uVar47 >> 5) & 1);
            bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
            bVar13 = SUB81(uVar47 >> 7,0);
            *puVar2 = (uint)bVar6 * iVar64 | (uint)!bVar6 * *puVar2;
            puVar2[1] = (uint)bVar7 * iVar64 | (uint)!bVar7 * puVar2[1];
            puVar2[2] = (uint)bVar8 * iVar64 | (uint)!bVar8 * puVar2[2];
            puVar2[3] = (uint)bVar9 * iVar64 | (uint)!bVar9 * puVar2[3];
            puVar2[4] = (uint)bVar10 * iVar64 | (uint)!bVar10 * puVar2[4];
            puVar2[5] = (uint)bVar11 * iVar64 | (uint)!bVar11 * puVar2[5];
            puVar2[6] = (uint)bVar12 * iVar64 | (uint)!bVar12 * puVar2[6];
            puVar2[7] = (uint)bVar13 * iVar64 | (uint)!bVar13 * puVar2[7];
            uVar53 = uVar53 + 8;
          } while (uVar53 < uVar44);
          if (uVar49 == uVar44) goto LAB_140a2ad74;
        }
      }
      if ((longlong)(uVar44 + 0x10) <= (longlong)uVar50) {
        auVar62 = vbroadcastss_avx512f(auVar65);
        do {
          *(undefined1 (*) [64])(param_11 + lVar56 * 4 + -4 + uVar44 * 4) = auVar62;
          uVar44 = uVar44 + 0x10;
        } while (uVar44 < uVar50);
      }
    }
    auVar62 = _DAT_14308eb40;
    if (uVar50 + 1 <= uVar49) {
      uVar44 = 0;
      auVar59 = vmovdqu32_avx512f(_DAT_14308e980);
      auVar60 = vpbroadcastq_avx512f();
      do {
        uVar53 = vpcmpgtq_avx512f(auVar60,auVar59);
        auVar59 = vpaddq_avx512f(auVar59,auVar62);
        puVar2 = (uint *)(param_11 + (lVar56 + uVar50) * 4 + -4 + uVar44 * 4);
        bVar6 = (bool)((byte)uVar53 & 1);
        bVar7 = (bool)((byte)(uVar53 >> 1) & 1);
        bVar8 = (bool)((byte)(uVar53 >> 2) & 1);
        bVar9 = (bool)((byte)(uVar53 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar53 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar53 >> 5) & 1);
        bVar12 = (bool)((byte)(uVar53 >> 6) & 1);
        bVar13 = SUB81(uVar53 >> 7,0);
        *puVar2 = (uint)bVar6 * iVar64 | (uint)!bVar6 * *puVar2;
        puVar2[1] = (uint)bVar7 * iVar64 | (uint)!bVar7 * puVar2[1];
        puVar2[2] = (uint)bVar8 * iVar64 | (uint)!bVar8 * puVar2[2];
        puVar2[3] = (uint)bVar9 * iVar64 | (uint)!bVar9 * puVar2[3];
        puVar2[4] = (uint)bVar10 * iVar64 | (uint)!bVar10 * puVar2[4];
        puVar2[5] = (uint)bVar11 * iVar64 | (uint)!bVar11 * puVar2[5];
        puVar2[6] = (uint)bVar12 * iVar64 | (uint)!bVar12 * puVar2[6];
        puVar2[7] = (uint)bVar13 * iVar64 | (uint)!bVar13 * puVar2[7];
        uVar44 = uVar44 + 8;
      } while (uVar44 < uVar49 - uVar50);
    }
  }
LAB_140a2ad74:
  (*pcStack_68)(param_11 + uVar49 * 4,param_4,uVar49,param_9,param_10);
  return;
}


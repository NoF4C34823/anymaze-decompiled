
/* WARNING: Removing unreachable block (ram,0x000140a03d34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140a02380(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                       ulonglong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                       int param_10,longlong param_11)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
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
  int iVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulonglong uVar42;
  longlong lVar43;
  uint uVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  int iVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  longlong lVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  uint *puVar56;
  ushort uVar57;
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [16];
  uint uVar65;
  uint uVar66;
  uint uVar67;
  undefined1 auStack_298 [32];
  ulonglong *puStack_278;
  int iStack_270;
  uint uStack_268;
  uint *puStack_260;
  undefined8 uStack_258;
  int iStack_250;
  longlong lStack_248;
  ulonglong uStack_238;
  ulonglong uStack_230;
  ulonglong uStack_188;
  longlong lStack_180;
  ulonglong uStack_178;
  longlong lStack_170;
  uint uStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  uint uStack_118;
  longlong lStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  uint uStack_f0;
  code *pcStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  longlong lStack_c8;
  uint *puStack_c0;
  ulonglong *puStack_b8;
  uint uStack_b0;
  ulonglong uStack_a8;
  uint *puStack_a0;
  ulonglong uStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  int iStack_68;
  longlong lStack_60;
  uint auStack_58 [4];
  ulonglong uStack_48;
  
  lVar45 = 0;
  iVar48 = param_10 >> 1;
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_298;
  lStack_60 = param_2;
  if (iVar48 < 1) {
    if ((param_7 & 0x10) != 0) goto LAB_140a041a0;
  }
  else {
    uStack_70 = (ulonglong)iVar48;
    lVar47 = param_4 * uStack_70 + param_3;
    uStack_238 = CONCAT44(uStack_238._4_4_,iVar48);
    iStack_68 = param_10;
    uStack_230 = CONCAT44(uStack_230._4_4_,param_6);
    uStack_98 = param_3;
    lStack_90 = param_4;
    uStack_78 = param_1;
    do {
      puStack_278 = &uStack_88;
      uStack_88 = *param_5;
      uStack_80 = param_5[1];
      iStack_270 = (int)uStack_230;
      uStack_268 = param_7;
      puStack_260 = param_8;
      uStack_258 = param_9;
      iStack_250 = iStack_68;
      lStack_248 = param_11;
      FUN_1409892a0(uStack_78,lStack_60,lVar45,lVar47);
      lVar45 = lVar45 + 1;
      lVar47 = lVar47 + lStack_90;
    } while (lVar45 < (longlong)uStack_70);
    param_1 = uStack_78;
    param_3 = uStack_98;
    param_4 = lStack_90;
    param_10 = iStack_68;
    iVar48 = (int)uStack_238;
    param_6 = (int)uStack_230;
    if ((param_7 & 0x10) != 0) {
      lStack_170 = 0;
      uStack_108 = 0;
      pcStack_e8 = (code *)(&PTR_LAB_14308e920)[(int)uStack_230];
      uVar44 = param_7 & 0xf;
      lVar45 = (longlong)iStack_68;
      uStack_78 = uStack_78 - lStack_60 * uStack_70;
      lStack_110 = param_11;
      lStack_180 = lVar45 * 3;
      lStack_c8 = lVar45 + -1;
      lStack_138 = param_11 + lVar45 * 0xc;
      uVar50 = lStack_180 - 3;
      vmovdqu32_avx512f(_DAT_14308e640);
      uStack_b0 = param_7 & 0xf0;
      uStack_238 = uVar50 & 0xfffffffffffffff0;
      uStack_f8 = ((lStack_180 + -1) / 3) * 3;
      uStack_100 = uStack_f8 >> 1;
      uStack_f0 = param_7 & 0x40;
      lStack_e0 = -uStack_70;
      lStack_130 = uStack_70 * 3;
      puStack_a0 = (uint *)(param_11 + uStack_70 * 0xc);
      uStack_d0 = param_7 & 0x80;
      uVar54 = lStack_130 + 2;
      uStack_188 = uVar54 / 6;
      uStack_140 = (longlong)uVar54 / 3;
      vmovdqu32_avx512f(_DAT_14308e680);
      uStack_230 = uVar54 / 3;
      uStack_158 = (ulonglong)puStack_a0 & 0x3f;
      uStack_178 = uStack_140 & 0xfffffffffffffff0;
      lStack_128 = uStack_70 * -0xc;
      uStack_148 = (longlong)(iStack_68 * 3) - 3;
      uStack_160 = (ulonglong)puStack_a0 & 3;
      uStack_a8 = 0x40 - uStack_158 >> 2;
      uStack_150 = uStack_148 >> 1;
      uStack_118 = param_7;
      uVar54 = 0;
      lVar45 = 0;
      uStack_d8 = param_9;
      puStack_c0 = param_8;
      puStack_b8 = param_5;
      uStack_168 = uVar44;
      uStack_120 = uVar50;
      do {
        auVar63 = _DAT_14308e600;
        auStack_58[0] = 0;
        auStack_58[1] = 0;
        auStack_58[2] = 0;
        lVar47 = lStack_90 * uVar54 + uStack_98;
        lVar46 = lStack_60 * uVar54 + uStack_78;
        if (uStack_b0 == 0xf0) {
          puStack_278 = (ulonglong *)CONCAT44(puStack_278._4_4_,iStack_68);
          param_1 = (*pcStack_e8)(lVar46,lVar47,*puStack_b8,uStack_d8);
        }
        else {
          puVar56 = auStack_58;
          if (uVar44 == 6) {
            puVar56 = puStack_c0;
          }
          uVar49 = *puStack_b8;
          if ((longlong)uVar49 < lStack_c8) {
            uVar42 = 0;
            lVar45 = 0;
            lVar43 = -uStack_70;
            if (lStack_e0 < (longlong)(uStack_70 + uVar49)) {
              do {
                lVar52 = lVar43;
                if (lVar43 < 0) {
                  if (uStack_118 != 0xf0) {
                    if (uVar44 == 6) {
                      if (uStack_f0 == 0) goto LAB_140a040b5;
                    }
                    else {
                      if (uVar44 != 1) goto LAB_140a04024;
LAB_140a04235:
                      lVar52 = 0;
                      if (uStack_f0 != 0) {
                        lVar52 = lVar43;
                      }
                    }
                  }
LAB_140a04095:
                  uVar66 = *(uint *)(lVar46 + lVar52 * 0xc);
                  uVar65 = *(uint *)(lVar46 + 4 + lVar52 * 0xc);
                  uVar67 = *(uint *)(lVar46 + 8 + lVar52 * 0xc);
                }
                else {
                  if ((lVar43 < (longlong)uVar49) || (uStack_118 == 0xf0)) goto LAB_140a04095;
                  if (uVar44 != 6) {
                    if (uVar44 == 1) {
                      if (lVar43 < 0) goto LAB_140a04235;
                      if (uStack_d0 == 0) {
                        lVar52 = uVar49 - 1;
                      }
                    }
                    else {
LAB_140a04024:
                      if (uVar44 == 3) {
                        if ((longlong)uVar49 < 2) {
                          if (lVar43 < 0) {
                            if (uStack_f0 == 0) {
                              lVar52 = -lVar43;
                              if (uStack_d0 == 0) {
                                lVar52 = 0;
                              }
                            }
                          }
                          else if (((0 < lVar43) && (uStack_d0 == 0)) &&
                                  (lVar52 = -lVar43, uStack_f0 == 0)) {
                            lVar52 = 0;
                          }
                        }
                        else {
                          if (lVar43 < 0) goto LAB_140a04249;
                          if ((longlong)uVar49 <= lVar43) {
                            while (uStack_d0 == 0) {
                              for (lVar52 = (uVar49 - 1) * 2 - lVar52; lVar52 < 0; lVar52 = -lVar52)
                              {
LAB_140a04249:
                                if (uStack_f0 != 0) goto LAB_140a04095;
                              }
                              if (lVar52 < (longlong)uVar49) break;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_140a04095;
                  }
                  if (uStack_d0 != 0) goto LAB_140a04095;
LAB_140a040b5:
                  uVar66 = *puVar56;
                  uVar65 = puVar56[1];
                  uVar67 = puVar56[2];
                }
                uVar42 = uVar42 + 1;
                lVar43 = lVar43 + 1;
                *(uint *)(lVar45 + lStack_110) = uVar66;
                *(uint *)(lVar45 + 4 + lStack_110) = uVar65;
                *(uint *)(lVar45 + 8 + lStack_110) = uVar67;
                lVar45 = lVar45 + 0xc;
                uVar50 = uStack_120;
                lStack_170 = lVar47;
                uStack_108 = uVar54;
              } while (uVar42 < uVar49 + uStack_70 * 2);
            }
            puStack_278 = (ulonglong *)CONCAT44(puStack_278._4_4_,iStack_68);
            param_1 = (*pcStack_e8)(puStack_a0,lVar47,uVar49,uStack_d8);
          }
          else {
            if (uStack_f0 == 0) {
              if (0 < (longlong)uVar50) {
                if (6 < (longlong)uVar50) {
                  lVar52 = lStack_60 * lVar45 + uStack_78;
                  lVar43 = lStack_180 * 4 + -0xc;
                  if ((lVar43 <= (longlong)puStack_a0 - lVar52) ||
                     (lVar43 <= -((longlong)puStack_a0 - lVar52))) {
                    if ((longlong)uVar50 < 0x10) {
                      uVar42 = 0;
                    }
                    else {
                      if ((longlong)uVar50 < 0x3b) {
                        uVar51 = 0;
                        uVar42 = uStack_238;
                      }
                      else {
                        if (uStack_160 == 0) {
                          uVar51 = uStack_158;
                          if ((uStack_158 != 0) &&
                             (uVar51 = uStack_a8, (longlong)uVar50 < (longlong)uStack_a8)) {
                            uVar51 = uVar50;
                          }
                        }
                        else {
                          uVar51 = 0;
                        }
                        uVar42 = uVar50 - (uVar50 - uVar51 & 0xf);
                        if (uVar51 != 0) {
                          auVar58 = vmovdqu32_avx512f(_DAT_14308e640);
                          uVar55 = 0;
                          auVar59 = vmovdqu32_avx512f(_DAT_14308e680);
                          auVar62 = vpbroadcastq_avx512f();
                          do {
                            uVar20 = vpcmpgtq_avx512f(auVar62,auVar58);
                            bVar22 = (byte)uVar20;
                            uVar20 = vpcmpgtq_avx512f(auVar62,auVar59);
                            bVar21 = (byte)uVar20;
                            auVar58 = vpaddq_avx512f(auVar58,auVar63);
                            auVar59 = vpaddq_avx512f(auVar59,auVar63);
                            uVar57 = CONCAT11(bVar21,bVar22);
                            piVar1 = (int *)(lVar52 + uVar55 * 4);
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
                            puVar4 = puStack_a0 + uVar55;
                            bVar5 = (bool)((byte)(uVar57 >> 1) & 1);
                            bVar6 = (bool)((byte)(uVar57 >> 2) & 1);
                            bVar7 = (bool)((byte)(uVar57 >> 3) & 1);
                            bVar8 = (bool)((byte)(uVar57 >> 4) & 1);
                            bVar9 = (bool)((byte)(uVar57 >> 5) & 1);
                            bVar10 = (bool)((byte)(uVar57 >> 6) & 1);
                            bVar11 = (bool)((byte)(uVar57 >> 7) & 1);
                            bVar12 = (bool)(bVar21 >> 1 & 1);
                            bVar13 = (bool)(bVar21 >> 2 & 1);
                            bVar14 = (bool)(bVar21 >> 3 & 1);
                            bVar15 = (bool)(bVar21 >> 4 & 1);
                            bVar16 = (bool)(bVar21 >> 5 & 1);
                            bVar17 = (bool)(bVar21 >> 6 & 1);
                            *puVar4 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                                      (uint)!(bool)(bVar22 & 1) * *puVar4;
                            puVar4[1] = (uint)bVar5 * (uint)((byte)(uVar57 >> 1) & 1) * iVar48 |
                                        (uint)!bVar5 * puVar4[1];
                            puVar4[2] = (uint)bVar6 * (uint)((byte)(uVar57 >> 2) & 1) * iVar23 |
                                        (uint)!bVar6 * puVar4[2];
                            puVar4[3] = (uint)bVar7 * (uint)((byte)(uVar57 >> 3) & 1) * iVar24 |
                                        (uint)!bVar7 * puVar4[3];
                            puVar4[4] = (uint)bVar8 * (uint)((byte)(uVar57 >> 4) & 1) * iVar25 |
                                        (uint)!bVar8 * puVar4[4];
                            puVar4[5] = (uint)bVar9 * (uint)((byte)(uVar57 >> 5) & 1) * iVar26 |
                                        (uint)!bVar9 * puVar4[5];
                            puVar4[6] = (uint)bVar10 * (uint)((byte)(uVar57 >> 6) & 1) * iVar27 |
                                        (uint)!bVar10 * puVar4[6];
                            puVar4[7] = (uint)bVar11 * (uint)((byte)(uVar57 >> 7) & 1) * iVar28 |
                                        (uint)!bVar11 * puVar4[7];
                            puVar4[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar29 |
                                        (uint)!(bool)(bVar21 & 1) * puVar4[8];
                            puVar4[9] = (uint)bVar12 * (uint)(bVar21 >> 1 & 1) * iVar30 |
                                        (uint)!bVar12 * puVar4[9];
                            puVar4[10] = (uint)bVar13 * (uint)(bVar21 >> 2 & 1) * iVar31 |
                                         (uint)!bVar13 * puVar4[10];
                            puVar4[0xb] = (uint)bVar14 * (uint)(bVar21 >> 3 & 1) * iVar32 |
                                          (uint)!bVar14 * puVar4[0xb];
                            puVar4[0xc] = (uint)bVar15 * (uint)(bVar21 >> 4 & 1) * iVar33 |
                                          (uint)!bVar15 * puVar4[0xc];
                            puVar4[0xd] = (uint)bVar16 * (uint)(bVar21 >> 5 & 1) * iVar34 |
                                          (uint)!bVar16 * puVar4[0xd];
                            puVar4[0xe] = (uint)bVar17 * (uint)(bVar21 >> 6 & 1) * iVar35 |
                                          (uint)!bVar17 * puVar4[0xe];
                            puVar4[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar36 |
                                          (uint)!(bool)(bVar21 >> 7) * puVar4[0xf];
                            uVar55 = uVar55 + 0x10;
                          } while (uVar55 < uVar51);
                          if (uVar50 == uVar51) goto LAB_140a0322d;
                        }
                      }
                      if ((longlong)(uVar51 + 0x10) <= (longlong)uVar42) {
                        do {
                          puVar2 = (undefined8 *)(lVar52 + uVar51 * 4);
                          uVar20 = puVar2[1];
                          uVar18 = puVar2[2];
                          uVar19 = puVar2[3];
                          uVar38 = puVar2[4];
                          uVar39 = puVar2[5];
                          uVar40 = puVar2[6];
                          uVar41 = puVar2[7];
                          puVar4 = puStack_a0 + uVar51;
                          *(undefined8 *)puVar4 = *puVar2;
                          *(undefined8 *)(puVar4 + 2) = uVar20;
                          *(undefined8 *)(puVar4 + 4) = uVar18;
                          *(undefined8 *)(puVar4 + 6) = uVar19;
                          *(undefined8 *)(puVar4 + 8) = uVar38;
                          *(undefined8 *)(puVar4 + 10) = uVar39;
                          *(undefined8 *)(puVar4 + 0xc) = uVar40;
                          *(undefined8 *)(puVar4 + 0xe) = uVar41;
                          uVar51 = uVar51 + 0x10;
                        } while (uVar51 < uVar42);
                      }
                    }
                    if (uVar42 + 1 <= uVar50) {
                      auVar63 = vpbroadcastq_avx512f();
                      uVar20 = vpcmpgtq_avx512f(auVar63,_DAT_14308e640);
                      bVar22 = (byte)uVar20;
                      uVar20 = vpcmpgtq_avx512f(auVar63,_DAT_14308e680);
                      bVar21 = (byte)uVar20;
                      uVar57 = CONCAT11(bVar21,bVar22);
                      piVar1 = (int *)(lVar52 + uVar42 * 4);
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
                      puVar4 = puStack_a0 + uVar42;
                      bVar5 = (bool)((byte)(uVar57 >> 1) & 1);
                      bVar6 = (bool)((byte)(uVar57 >> 2) & 1);
                      bVar7 = (bool)((byte)(uVar57 >> 3) & 1);
                      bVar8 = (bool)((byte)(uVar57 >> 4) & 1);
                      bVar9 = (bool)((byte)(uVar57 >> 5) & 1);
                      bVar10 = (bool)((byte)(uVar57 >> 6) & 1);
                      bVar11 = (bool)((byte)(uVar57 >> 7) & 1);
                      bVar12 = (bool)(bVar21 >> 1 & 1);
                      bVar13 = (bool)(bVar21 >> 2 & 1);
                      bVar14 = (bool)(bVar21 >> 3 & 1);
                      bVar15 = (bool)(bVar21 >> 4 & 1);
                      bVar16 = (bool)(bVar21 >> 5 & 1);
                      bVar17 = (bool)(bVar21 >> 6 & 1);
                      *puVar4 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                                (uint)!(bool)(bVar22 & 1) * *puVar4;
                      puVar4[1] = (uint)bVar5 * (uint)((byte)(uVar57 >> 1) & 1) * iVar48 |
                                  (uint)!bVar5 * puVar4[1];
                      puVar4[2] = (uint)bVar6 * (uint)((byte)(uVar57 >> 2) & 1) * iVar23 |
                                  (uint)!bVar6 * puVar4[2];
                      puVar4[3] = (uint)bVar7 * (uint)((byte)(uVar57 >> 3) & 1) * iVar24 |
                                  (uint)!bVar7 * puVar4[3];
                      puVar4[4] = (uint)bVar8 * (uint)((byte)(uVar57 >> 4) & 1) * iVar25 |
                                  (uint)!bVar8 * puVar4[4];
                      puVar4[5] = (uint)bVar9 * (uint)((byte)(uVar57 >> 5) & 1) * iVar26 |
                                  (uint)!bVar9 * puVar4[5];
                      puVar4[6] = (uint)bVar10 * (uint)((byte)(uVar57 >> 6) & 1) * iVar27 |
                                  (uint)!bVar10 * puVar4[6];
                      puVar4[7] = (uint)bVar11 * (uint)((byte)(uVar57 >> 7) & 1) * iVar28 |
                                  (uint)!bVar11 * puVar4[7];
                      puVar4[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar29 |
                                  (uint)!(bool)(bVar21 & 1) * puVar4[8];
                      puVar4[9] = (uint)bVar12 * (uint)(bVar21 >> 1 & 1) * iVar30 |
                                  (uint)!bVar12 * puVar4[9];
                      puVar4[10] = (uint)bVar13 * (uint)(bVar21 >> 2 & 1) * iVar31 |
                                   (uint)!bVar13 * puVar4[10];
                      puVar4[0xb] = (uint)bVar14 * (uint)(bVar21 >> 3 & 1) * iVar32 |
                                    (uint)!bVar14 * puVar4[0xb];
                      puVar4[0xc] = (uint)bVar15 * (uint)(bVar21 >> 4 & 1) * iVar33 |
                                    (uint)!bVar15 * puVar4[0xc];
                      puVar4[0xd] = (uint)bVar16 * (uint)(bVar21 >> 5 & 1) * iVar34 |
                                    (uint)!bVar16 * puVar4[0xd];
                      puVar4[0xe] = (uint)bVar17 * (uint)(bVar21 >> 6 & 1) * iVar35 |
                                    (uint)!bVar17 * puVar4[0xe];
                      puVar4[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar36 |
                                    (uint)!(bool)(bVar21 >> 7) * puVar4[0xf];
                    }
                    goto LAB_140a0322d;
                  }
                }
                lVar43 = 1;
                if (uStack_150 != 0) {
                  lVar43 = lStack_60 * lVar45 + uStack_78;
                  uVar42 = 0;
                  do {
                    uVar51 = uVar42;
                    puStack_a0[uVar51 * 2] = *(uint *)(lVar43 + uVar51 * 8);
                    puStack_a0[uVar51 * 2 + 1] = *(uint *)(lVar43 + 4 + uVar51 * 8);
                    uVar42 = uVar51 + 1;
                  } while (uVar42 < uStack_150);
                  lVar43 = uVar51 + 2 + uVar42;
                }
                uVar42 = lVar43 - 1;
                if (uVar42 < uStack_148) {
                  puStack_a0[uVar42] = *(uint *)(lVar45 * lStack_60 + uStack_78 + uVar42 * 4);
                }
              }
LAB_140a0322d:
              if (uVar44 == 1) {
                if (0 < lStack_130) {
                  if ((longlong)uStack_140 < 7) {
                    uVar66 = puStack_a0[2];
LAB_140a035cd:
                    uVar51 = 0;
                  }
                  else {
                    if ((0xb < lStack_110 - (longlong)puStack_a0) ||
                       ((longlong)(uStack_140 * 0xc) <= -(lStack_110 - (longlong)puStack_a0))) {
                      if ((longlong)uStack_140 < 0x10) {
                        uVar42 = 0;
                      }
                      else {
                        uVar51 = 0;
                        lVar45 = 0;
                        auVar63 = vbroadcastss_avx512f(ZEXT416(*puStack_a0));
                        auVar58 = vbroadcastss_avx512f(ZEXT416(puStack_a0[1]));
                        auVar59 = vbroadcastss_avx512f(ZEXT416(puStack_a0[2]));
                        auVar62 = vmovdqu32_avx512f(_DAT_14308e740);
                        do {
                          auVar64 = auVar62._0_16_;
                          uVar20 = vpcmpeqb_avx512vl(auVar64,auVar64);
                          uVar42 = lStack_110 + lVar45;
                          uVar18 = vpcmpeqb_avx512vl(auVar64,auVar64);
                          uVar19 = vpcmpeqb_avx512vl(auVar64,auVar64);
                          vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(8) +
                                              auVar62 * (undefined1  [64])0x4,uVar20,auVar59);
                          vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(4) +
                                              auVar62 * (undefined1  [64])0x4,uVar18,auVar58);
                          vscatterdps_avx512f(ZEXT864(uVar42) + auVar62 * (undefined1  [64])0x4,
                                              uVar19,auVar63);
                          uVar51 = uVar51 + 0x10;
                          lVar45 = lVar45 + 0xc0;
                          uVar42 = uStack_178;
                        } while (uVar51 < uStack_178);
                      }
                      if (uVar42 + 1 <= uStack_140) {
                        auVar63 = vbroadcastss_avx512f(ZEXT416(puStack_a0[2]));
                        auVar58 = vpbroadcastq_avx512f();
                        auVar59 = vbroadcastss_avx512f(ZEXT416(*puStack_a0));
                        auVar62 = vbroadcastss_avx512f(ZEXT416(puStack_a0[1]));
                        uVar20 = vpcmpgtq_avx512f(auVar58,_DAT_14308e640);
                        uVar18 = vpcmpgtq_avx512f(auVar58,_DAT_14308e680);
                        auVar58 = vmovdqu32_avx512f(_DAT_14308e740);
                        uVar57 = CONCAT11((char)uVar18,(char)uVar20);
                        uVar42 = lStack_110 + uVar42 * 0xc;
                        vscatterdps_avx512f(ZEXT864(uVar42) + auVar58 * (undefined1  [64])0x4,
                                            (ulonglong)uVar57,auVar59);
                        vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(4) +
                                            auVar58 * (undefined1  [64])0x4,(ulonglong)uVar57,
                                            auVar62);
                        vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(8) +
                                            auVar58 * (undefined1  [64])0x4,(ulonglong)uVar57,
                                            auVar63);
                      }
                      goto LAB_140a03873;
                    }
                    uVar66 = puStack_a0[2];
                    if ((longlong)uStack_140 < 0x10) goto LAB_140a035cd;
                    uVar42 = 0;
                    lVar45 = 0;
                    auVar63 = vbroadcastss_avx512f(ZEXT416(uVar66));
                    auVar58 = vmovdqu32_avx512f(_DAT_14308e740);
                    do {
                      auVar64 = auVar58._0_16_;
                      uVar20 = vpcmpeqb_avx512vl(auVar64,auVar64);
                      uVar18 = vpcmpeqb_avx512vl(auVar64,auVar64);
                      uVar19 = vpcmpeqb_avx512vl(auVar64,auVar64);
                      auVar59 = vbroadcastss_avx512f(ZEXT416(*puStack_a0));
                      vscatterdps_avx512f(ZEXT864((ulonglong)(lStack_110 + lVar45)) +
                                          auVar58 * (undefined1  [64])0x4,uVar20,auVar59);
                      auVar59 = vbroadcastss_avx512f(ZEXT416(puStack_a0[1]));
                      uVar42 = uVar42 + 0x10;
                      vscatterdps_avx512f(ZEXT864((ulonglong)(lVar45 + 4 + lStack_110)) +
                                          auVar58 * (undefined1  [64])0x4,uVar18,auVar59);
                      vscatterdps_avx512f(ZEXT864((ulonglong)(lVar45 + 8 + lStack_110)) +
                                          auVar58 * (undefined1  [64])0x4,uVar19,auVar63);
                      lVar45 = lVar45 + 0xc0;
                      uVar51 = uStack_178;
                    } while (uVar42 < uStack_178);
                  }
                  lVar45 = uVar51 * 0xc;
                  for (; uVar51 < uStack_140; uVar51 = uVar51 + 1) {
                    *(uint *)(lVar45 + lStack_110) = *puStack_a0;
                    *(uint *)(lVar45 + 4 + lStack_110) = puStack_a0[1];
                    *(uint *)(lVar45 + 8 + lStack_110) = uVar66;
                    lVar45 = lVar45 + 0xc;
                  }
                }
              }
              else if (uVar44 == 3) {
                if (0 < lStack_130) {
                  lVar45 = 1;
                  lVar52 = 0;
                  lVar43 = 0;
                  uVar42 = 0;
                  if (uStack_188 != 0) {
                    do {
                      uVar51 = uVar42;
                      uVar42 = uVar51 + 1;
                      *(undefined4 *)(lVar52 + lStack_110) =
                           *(undefined4 *)(lVar43 + -0xc + lStack_138);
                      *(undefined4 *)(lVar52 + 4 + lStack_110) =
                           *(undefined4 *)(lVar43 + -8 + lStack_138);
                      *(undefined4 *)(lVar52 + 8 + lStack_110) =
                           *(undefined4 *)(lVar43 + -4 + lStack_138);
                      *(undefined4 *)(lVar52 + 0xc + lStack_110) =
                           *(undefined4 *)(lVar43 + -0x18 + lStack_138);
                      *(undefined4 *)(lVar52 + 0x10 + lStack_110) =
                           *(undefined4 *)(lVar43 + -0x14 + lStack_138);
                      lVar45 = lVar43 + -0x10;
                      lVar43 = lVar43 + -0x18;
                      *(undefined4 *)(lVar52 + 0x14 + lStack_110) =
                           *(undefined4 *)(lVar45 + lStack_138);
                      lVar52 = lVar52 + 0x18;
                    } while (uVar42 < uStack_188);
                    lVar45 = uVar51 + 2 + uVar42;
                  }
                  if (lVar45 - 1U < uStack_230) {
                    lVar43 = lVar45 * 3 + -3;
                    lVar45 = -((lVar45 - 1U) * 8 + -4 + lVar45 * 4);
                    *(undefined4 *)(lStack_110 + lVar43 * 4) =
                         *(undefined4 *)(lVar45 + -0xc + lStack_138);
                    *(undefined4 *)(lStack_110 + 4 + lVar43 * 4) =
                         *(undefined4 *)(lVar45 + -8 + lStack_138);
                    *(undefined4 *)(lStack_110 + 8 + lVar43 * 4) =
                         *(undefined4 *)(lVar45 + -4 + lStack_138);
                  }
                }
              }
              else if ((uVar44 == 6) && (0 < lStack_130)) {
                if (6 < (longlong)uStack_140) {
                  lVar45 = (longlong)puVar56 + (4 - lStack_110);
                  if ((((longlong)(uStack_140 * 0xc) <= lVar45) || (7 < -lVar45)) &&
                     ((3 < lStack_110 - (longlong)puVar56 ||
                      ((longlong)(uStack_140 * 0xc) <= -(lStack_110 - (longlong)puVar56))))) {
                    if ((longlong)uStack_140 < 0x10) {
                      uVar42 = 0;
                    }
                    else {
                      uVar51 = 0;
                      lVar45 = 0;
                      auVar63 = vbroadcastss_avx512f(ZEXT416(*puVar56));
                      auVar58 = vbroadcastss_avx512f(ZEXT416(puVar56[1]));
                      auVar59 = vbroadcastss_avx512f(ZEXT416(puVar56[2]));
                      auVar62 = vmovdqu32_avx512f(_DAT_14308e740);
                      do {
                        auVar64 = auVar62._0_16_;
                        uVar20 = vpcmpeqb_avx512vl(auVar64,auVar64);
                        uVar42 = lStack_110 + lVar45;
                        uVar18 = vpcmpeqb_avx512vl(auVar64,auVar64);
                        uVar19 = vpcmpeqb_avx512vl(auVar64,auVar64);
                        vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(8) +
                                            auVar62 * (undefined1  [64])0x4,uVar20,auVar59);
                        vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(4) +
                                            auVar62 * (undefined1  [64])0x4,uVar18,auVar58);
                        vscatterdps_avx512f(ZEXT864(uVar42) + auVar62 * (undefined1  [64])0x4,uVar19
                                            ,auVar63);
                        uVar51 = uVar51 + 0x10;
                        lVar45 = lVar45 + 0xc0;
                        uVar42 = uStack_178;
                      } while (uVar51 < uStack_178);
                    }
                    if (uVar42 + 1 <= uStack_140) {
                      auVar63 = vbroadcastss_avx512f(ZEXT416(puVar56[2]));
                      auVar58 = vpbroadcastq_avx512f();
                      auVar59 = vbroadcastss_avx512f(ZEXT416(*puVar56));
                      auVar62 = vbroadcastss_avx512f(ZEXT416(puVar56[1]));
                      uVar20 = vpcmpgtq_avx512f(auVar58,_DAT_14308e640);
                      uVar18 = vpcmpgtq_avx512f(auVar58,_DAT_14308e680);
                      auVar58 = vmovdqu32_avx512f(_DAT_14308e740);
                      uVar57 = CONCAT11((char)uVar18,(char)uVar20);
                      uVar42 = lStack_110 + uVar42 * 0xc;
                      vscatterdps_avx512f(ZEXT864(uVar42) + auVar58 * (undefined1  [64])0x4,
                                          (ulonglong)uVar57,auVar59);
                      vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(4) +
                                          auVar58 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar62)
                      ;
                      vscatterdps_avx512f(ZEXT864(uVar42) + ZEXT864(8) +
                                          auVar58 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar63)
                      ;
                    }
                    goto LAB_140a03873;
                  }
                }
                lVar45 = 1;
                lVar43 = 0;
                uVar42 = 0;
                if (uStack_188 != 0) {
                  do {
                    uVar51 = uVar42;
                    uVar42 = uVar51 + 1;
                    *(uint *)(lVar43 + lStack_110) = *puVar56;
                    *(uint *)(lVar43 + 4 + lStack_110) = puVar56[1];
                    *(uint *)(lVar43 + 8 + lStack_110) = puVar56[2];
                    *(uint *)(lVar43 + 0xc + lStack_110) = *puVar56;
                    *(uint *)(lVar43 + 0x10 + lStack_110) = puVar56[1];
                    *(uint *)(lVar43 + 0x14 + lStack_110) = puVar56[2];
                    lVar43 = lVar43 + 0x18;
                  } while (uVar42 < uStack_188);
                  lVar45 = uVar51 + 2 + uVar42;
                }
                if (lVar45 - 1U < uStack_230) {
                  lVar45 = lVar45 * 3 + -3;
                  *(uint *)(lStack_110 + lVar45 * 4) = *puVar56;
                  *(uint *)(lStack_110 + 4 + lVar45 * 4) = puVar56[1];
                  *(uint *)(lStack_110 + 8 + lVar45 * 4) = puVar56[2];
                }
              }
LAB_140a03873:
              puStack_278 = (ulonglong *)CONCAT44(puStack_278._4_4_,iStack_68);
              (*pcStack_e8)(puStack_a0,lVar47,uStack_70,uStack_d8);
              uVar49 = uVar49 - uStack_70;
              lVar46 = lVar46 + lStack_130 * 4;
              lVar47 = lVar47 + lStack_130 * 4;
            }
            if (uStack_d0 == 0) {
              if ((longlong)uStack_70 < (longlong)uVar49) {
                lVar45 = uVar49 - uStack_70;
                puStack_278 = (ulonglong *)CONCAT44(puStack_278._4_4_,iStack_68);
                (*pcStack_e8)(lVar46,lVar47,lVar45,uStack_d8);
                lVar46 = lVar46 + lVar45 * 0xc;
                lVar47 = lVar47 + lVar45 * 0xc;
              }
              if (0 < (longlong)uVar50) {
                lVar45 = 1;
                if (uStack_100 != 0) {
                  uVar49 = 0;
                  do {
                    uVar42 = uVar49;
                    *(undefined4 *)(lStack_110 + uVar42 * 8) =
                         *(undefined4 *)(lStack_128 + lVar46 + uVar42 * 8);
                    *(undefined4 *)(lStack_110 + 4 + uVar42 * 8) =
                         *(undefined4 *)(lStack_128 + lVar46 + 4 + uVar42 * 8);
                    uVar49 = uVar42 + 1;
                  } while (uVar49 < uStack_100);
                  lVar45 = uVar42 + 2 + uVar49;
                }
                uVar49 = lVar45 - 1;
                if (uVar49 < uStack_f8) {
                  *(undefined4 *)(lStack_110 + uVar49 * 4) =
                       *(undefined4 *)(lVar46 + lStack_128 + uVar49 * 4);
                }
              }
              if (uVar44 == 1) {
                if (0 < lStack_130) {
                  if ((longlong)uStack_140 < 7) {
                    lVar45 = 1;
                    lVar46 = 0;
                    uVar49 = 0;
                    if (uStack_188 != 0) {
                      do {
                        uVar42 = uVar49;
                        uVar49 = uVar42 + 1;
                        *(undefined4 *)(lVar46 + -0xc + lStack_138) =
                             *(undefined4 *)(lStack_138 + -0x18);
                        *(undefined4 *)(lVar46 + -8 + lStack_138) =
                             *(undefined4 *)(lStack_138 + -0x14);
                        *(undefined4 *)(lVar46 + -4 + lStack_138) =
                             *(undefined4 *)(lStack_138 + -0x10);
                        *(undefined4 *)(lVar46 + lStack_138) = *(undefined4 *)(lStack_138 + -0x18);
                        *(undefined4 *)(lVar46 + 4 + lStack_138) =
                             *(undefined4 *)(lStack_138 + -0x14);
                        *(undefined4 *)(lVar46 + 8 + lStack_138) =
                             *(undefined4 *)(lStack_138 + -0x10);
                        lVar46 = lVar46 + 0x18;
                      } while (uVar49 < uStack_188);
                      lVar45 = uVar42 + 2 + uVar49;
                    }
                    if (lVar45 - 1U < uStack_230) {
                      lVar45 = lVar45 * 3 + -3;
                      *(undefined4 *)(lStack_138 + -0xc + lVar45 * 4) =
                           *(undefined4 *)(lStack_138 + -0x18);
                      *(undefined4 *)(lStack_138 + -8 + lVar45 * 4) =
                           *(undefined4 *)(lStack_138 + -0x14);
                      *(undefined4 *)(lStack_138 + -4 + lVar45 * 4) =
                           *(undefined4 *)(lStack_138 + -0x10);
                    }
                  }
                  else {
                    if ((longlong)uStack_140 < 0x10) {
                      uVar49 = 0;
                    }
                    else {
                      uVar42 = 0;
                      lVar45 = 0;
                      auVar63 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lStack_138 + -0x18)));
                      auVar58 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lStack_138 + -0x14)));
                      auVar59 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lStack_138 + -0x10)));
                      auVar62 = vmovdqu32_avx512f(_DAT_14308e740);
                      do {
                        auVar64 = auVar62._0_16_;
                        uVar20 = vpcmpeqb_avx512vl(auVar64,auVar64);
                        uVar49 = lVar45 + -0xc + lStack_138;
                        uVar18 = vpcmpeqb_avx512vl(auVar64,auVar64);
                        uVar19 = vpcmpeqb_avx512vl(auVar64,auVar64);
                        vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(8) +
                                            auVar62 * (undefined1  [64])0x4,uVar20,auVar59);
                        vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(4) +
                                            auVar62 * (undefined1  [64])0x4,uVar18,auVar58);
                        vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(0) +
                                            auVar62 * (undefined1  [64])0x4,uVar19,auVar63);
                        uVar42 = uVar42 + 0x10;
                        lVar45 = lVar45 + 0xc0;
                        uVar49 = uStack_178;
                      } while (uVar42 < uStack_178);
                    }
                    if (uVar49 + 1 <= uStack_140) {
                      auVar63 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lStack_138 + -0x10)));
                      auVar58 = vpbroadcastq_avx512f();
                      auVar59 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lStack_138 + -0x18)));
                      auVar62 = vbroadcastss_avx512f(ZEXT416(*(uint *)(lStack_138 + -0x14)));
                      uVar20 = vpcmpgtq_avx512f(auVar58,_DAT_14308e640);
                      uVar18 = vpcmpgtq_avx512f(auVar58,_DAT_14308e680);
                      auVar58 = vmovdqu32_avx512f(_DAT_14308e740);
                      uVar57 = CONCAT11((char)uVar18,(char)uVar20);
                      uVar49 = lStack_138 + uVar49 * 0xc;
                      vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(0xfffffffffffffff4) +
                                          auVar58 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar59)
                      ;
                      vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(0xfffffffffffffff8) +
                                          auVar58 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar62)
                      ;
                      vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(0xfffffffffffffffc) +
                                          auVar58 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar63)
                      ;
                    }
                  }
                }
              }
              else if (uVar44 == 3) {
                if (0 < lStack_130) {
                  lVar45 = 1;
                  lVar46 = 0;
                  lVar43 = 0;
                  uVar49 = 0;
                  if (uStack_188 != 0) {
                    do {
                      uVar42 = uVar49;
                      uVar49 = uVar42 + 1;
                      *(undefined4 *)(lVar46 + -0xc + lStack_138) =
                           *(undefined4 *)(lVar43 + -0x24 + lStack_138);
                      *(undefined4 *)(lVar46 + -8 + lStack_138) =
                           *(undefined4 *)(lVar43 + -0x20 + lStack_138);
                      *(undefined4 *)(lVar46 + -4 + lStack_138) =
                           *(undefined4 *)(lVar43 + -0x1c + lStack_138);
                      *(undefined4 *)(lVar46 + lStack_138) =
                           *(undefined4 *)(lVar43 + -0x30 + lStack_138);
                      *(undefined4 *)(lVar46 + 4 + lStack_138) =
                           *(undefined4 *)(lVar43 + -0x2c + lStack_138);
                      lVar45 = lVar43 + -0x28;
                      lVar43 = lVar43 + -0x18;
                      *(undefined4 *)(lVar46 + 8 + lStack_138) =
                           *(undefined4 *)(lVar45 + lStack_138);
                      lVar46 = lVar46 + 0x18;
                    } while (uVar49 < uStack_188);
                    lVar45 = uVar42 + 2 + uVar49;
                  }
                  if (lVar45 - 1U < uStack_230) {
                    lVar46 = lVar45 * 3 + -3;
                    lVar45 = -((lVar45 - 1U) * 8 + -4 + lVar45 * 4);
                    *(undefined4 *)(lStack_138 + -0xc + lVar46 * 4) =
                         *(undefined4 *)(lVar45 + -0x24 + lStack_138);
                    *(undefined4 *)(lStack_138 + -8 + lVar46 * 4) =
                         *(undefined4 *)(lVar45 + -0x20 + lStack_138);
                    *(undefined4 *)(lStack_138 + -4 + lVar46 * 4) =
                         *(undefined4 *)(lVar45 + -0x1c + lStack_138);
                  }
                }
              }
              else if ((uVar44 == 6) && (0 < lStack_130)) {
                if (6 < (longlong)uStack_140) {
                  lVar45 = (longlong)puVar56 + (4 - (lStack_138 + -0xc));
                  if ((((longlong)(uStack_140 * 0xc) <= lVar45) || (7 < -lVar45)) &&
                     ((lVar45 = (lStack_138 + -0xc) - (longlong)puVar56, 3 < lVar45 ||
                      ((longlong)(uStack_140 * 0xc) <= -lVar45)))) {
                    if ((longlong)uStack_140 < 0x10) {
                      uVar49 = 0;
                    }
                    else {
                      uVar42 = 0;
                      lVar45 = 0;
                      auVar63 = vbroadcastss_avx512f(ZEXT416(*puVar56));
                      auVar58 = vbroadcastss_avx512f(ZEXT416(puVar56[1]));
                      auVar59 = vbroadcastss_avx512f(ZEXT416(puVar56[2]));
                      auVar62 = vmovdqu32_avx512f(_DAT_14308e740);
                      do {
                        auVar64 = auVar62._0_16_;
                        uVar20 = vpcmpeqb_avx512vl(auVar64,auVar64);
                        uVar49 = lVar45 + -0xc + lStack_138;
                        uVar18 = vpcmpeqb_avx512vl(auVar64,auVar64);
                        uVar19 = vpcmpeqb_avx512vl(auVar64,auVar64);
                        vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(8) +
                                            auVar62 * (undefined1  [64])0x4,uVar20,auVar59);
                        vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(4) +
                                            auVar62 * (undefined1  [64])0x4,uVar18,auVar58);
                        vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(0) +
                                            auVar62 * (undefined1  [64])0x4,uVar19,auVar63);
                        uVar42 = uVar42 + 0x10;
                        lVar45 = lVar45 + 0xc0;
                        uVar49 = uStack_178;
                      } while (uVar42 < uStack_178);
                    }
                    if (uVar49 + 1 <= uStack_140) {
                      auVar63 = vbroadcastss_avx512f(ZEXT416(puVar56[2]));
                      auVar58 = vpbroadcastq_avx512f();
                      auVar59 = vbroadcastss_avx512f(ZEXT416(*puVar56));
                      auVar62 = vbroadcastss_avx512f(ZEXT416(puVar56[1]));
                      uVar20 = vpcmpgtq_avx512f(auVar58,_DAT_14308e640);
                      uVar18 = vpcmpgtq_avx512f(auVar58,_DAT_14308e680);
                      auVar58 = vmovdqu32_avx512f(_DAT_14308e740);
                      uVar57 = CONCAT11((char)uVar18,(char)uVar20);
                      uVar49 = lStack_138 + uVar49 * 0xc;
                      vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(0xfffffffffffffff4) +
                                          auVar58 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar59)
                      ;
                      vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(0xfffffffffffffff8) +
                                          auVar58 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar62)
                      ;
                      vscatterdps_avx512f(ZEXT864(uVar49) + ZEXT864(0xfffffffffffffffc) +
                                          auVar58 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar63)
                      ;
                    }
                    goto LAB_140a03f32;
                  }
                }
                lVar45 = 1;
                lVar46 = 0;
                uVar49 = 0;
                if (uStack_188 != 0) {
                  do {
                    uVar42 = uVar49;
                    uVar49 = uVar42 + 1;
                    *(uint *)(lVar46 + -0xc + lStack_138) = *puVar56;
                    *(uint *)(lVar46 + -8 + lStack_138) = puVar56[1];
                    *(uint *)(lVar46 + -4 + lStack_138) = puVar56[2];
                    *(uint *)(lVar46 + lStack_138) = *puVar56;
                    *(uint *)(lVar46 + 4 + lStack_138) = puVar56[1];
                    *(uint *)(lVar46 + 8 + lStack_138) = puVar56[2];
                    lVar46 = lVar46 + 0x18;
                  } while (uVar49 < uStack_188);
                  lVar45 = uVar42 + 2 + uVar49;
                }
                if (lVar45 - 1U < uStack_230) {
                  lVar45 = lVar45 * 3 + -3;
                  *(uint *)(lStack_138 + -0xc + lVar45 * 4) = *puVar56;
                  *(uint *)(lStack_138 + -8 + lVar45 * 4) = puVar56[1];
                  *(uint *)(lStack_138 + -4 + lVar45 * 4) = puVar56[2];
                }
              }
LAB_140a03f32:
              puStack_278 = (ulonglong *)CONCAT44(puStack_278._4_4_,iStack_68);
              param_1 = (*pcStack_e8)(puStack_a0,lVar47,uStack_70,uStack_d8);
            }
            else {
              puStack_278 = (ulonglong *)CONCAT44(puStack_278._4_4_,iStack_68);
              param_1 = (*pcStack_e8)(lVar46,lVar47,uVar49,uStack_d8);
            }
          }
        }
        iVar48 = (int)uVar54;
        uVar54 = uVar54 + 1;
        lVar45 = (longlong)iVar48 + 1;
      } while (uVar54 < uStack_70);
LAB_140a041a0:
      uVar50 = uStack_48;
      uStack_48 = 0;
      if ((uVar50 ^ (ulonglong)auStack_298) == DAT_1436b4680) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_142bb1d40();
    }
  }
  auVar63 = _DAT_14308e600;
  uVar44 = param_7 & 0xf;
  if (uVar44 == 6) {
    uVar50 = (ulonglong)iVar48;
    if (0 < (longlong)uVar50) {
      uStack_238 = *param_5 * 3;
      uVar54 = uStack_238 + 2;
      uVar49 = (longlong)uVar54 / 3;
      if (((param_4 < (longlong)uVar49) ||
          ((puVar56 = (uint *)((uVar50 - 1) * param_4 + (uVar49 * 3 + -3) * 4 + 0xb + param_3),
           param_8 < puVar56 && (param_3 < (longlong)param_8 + 3U)))) ||
         ((param_3 < (longlong)param_8 + 0xbU && (param_8 + 1 < puVar56)))) {
        uVar49 = 0;
        lVar45 = 0;
        param_1 = uVar54 / 6;
        do {
          if (0 < (longlong)uStack_238) {
            lVar47 = 1;
            if (param_1 != 0) {
              lVar47 = param_3 + lVar45;
              uVar42 = 0;
              uVar51 = 0;
              do {
                uVar55 = uVar51;
                uVar51 = uVar55 + 1;
                *(uint *)(uVar42 + lVar47) = *param_8;
                *(uint *)(uVar42 + 4 + lVar47) = param_8[1];
                *(uint *)(uVar42 + 8 + lVar47) = param_8[2];
                *(uint *)(uVar42 + 0xc + lVar47) = *param_8;
                *(uint *)(uVar42 + 0x10 + lVar47) = param_8[1];
                *(uint *)(uVar42 + 0x14 + lVar47) = param_8[2];
                uVar42 = uVar42 + 0x18;
              } while (uVar51 < param_1);
              lVar47 = uVar55 + 2 + uVar51;
            }
            if (lVar47 - 1U < uVar54 / 3) {
              lVar47 = param_3 + (lVar47 * 3 + -3) * 4;
              *(uint *)(lVar47 + lVar45) = *param_8;
              *(uint *)(lVar47 + 4 + lVar45) = param_8[1];
              *(uint *)(lVar47 + 8 + lVar45) = param_8[2];
            }
          }
          uVar49 = uVar49 + 1;
          lVar45 = lVar45 + param_4;
        } while (uVar49 < uVar50);
      }
      else {
        uVar42 = 0;
        auVar63 = vmovdqu32_avx512f(_DAT_14308e640);
        auVar58 = vmovdqu32_avx512f(_DAT_14308e680);
        lVar45 = 0;
        uVar54 = 0;
        do {
          if (0 < (longlong)uStack_238) {
            uVar51 = uVar54;
            if (0xf < (longlong)uVar49) {
              auVar59 = vmovdqu32_avx512f(_DAT_14308e740);
              uVar55 = uVar54;
              uVar53 = uVar54;
              do {
                auVar64 = auVar58._0_16_;
                uVar20 = vpcmpeqb_avx512vl(auVar64,auVar64);
                uVar18 = vpcmpeqb_avx512vl(auVar64,auVar64);
                uVar19 = vpcmpeqb_avx512vl(auVar64,auVar64);
                auVar62 = vbroadcastss_avx512f(ZEXT416(*param_8));
                vscatterdps_avx512f(ZEXT864(param_3 + lVar45 + uVar55) +
                                    auVar59 * (undefined1  [64])0x4,uVar20,auVar62);
                uVar53 = uVar53 + 0x10;
                auVar62 = vbroadcastss_avx512f(ZEXT416(param_8[1]));
                vscatterdps_avx512f(ZEXT864(param_3 + 4 + lVar45 + uVar55) +
                                    auVar59 * (undefined1  [64])0x4,uVar18,auVar62);
                uVar51 = param_3 + 8 + lVar45 + uVar55;
                uVar55 = uVar55 + 0xc0;
                auVar62 = vbroadcastss_avx512f(ZEXT416(param_8[2]));
                vscatterdps_avx512f(ZEXT864(uVar51) + auVar59 * (undefined1  [64])0x4,uVar19,auVar62
                                   );
                uVar51 = uVar49 & 0xfffffffffffffff0;
                lStack_90 = param_4;
              } while (uVar53 < (uVar49 & 0xfffffffffffffff0));
            }
            if (uVar51 + 1 <= uVar49) {
              auVar59 = vpbroadcastq_avx512f();
              lVar47 = param_3 + uVar51 * 0xc;
              auVar62 = vbroadcastss_avx512f(ZEXT416(*param_8));
              auVar61 = vmovdqu32_avx512f(_DAT_14308e740);
              uVar20 = vpcmpgtq_avx512f(auVar59,auVar63);
              uVar18 = vpcmpgtq_avx512f(auVar59,auVar58);
              uVar57 = CONCAT11((char)uVar18,(char)uVar20);
              vscatterdps_avx512f(ZEXT864((ulonglong)(lVar45 + lVar47)) +
                                  auVar61 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar62);
              auVar59 = vbroadcastss_avx512f(ZEXT416(param_8[1]));
              vscatterdps_avx512f(ZEXT864((ulonglong)(lVar45 + 4 + lVar47)) +
                                  auVar61 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar59);
              auVar59 = vbroadcastss_avx512f(ZEXT416(param_8[2]));
              vscatterdps_avx512f(ZEXT864((ulonglong)(lVar45 + 8 + lVar47)) +
                                  auVar61 * (undefined1  [64])0x4,(ulonglong)uVar57,auVar59);
            }
          }
          uVar42 = uVar42 + 1;
          lVar45 = lVar45 + param_4;
          param_1 = uStack_238;
        } while (uVar42 < uVar50);
      }
    }
    if ((uStack_48 ^ (ulonglong)auStack_298) == DAT_1436b4680) {
      return param_1;
    }
  }
  else if (uVar44 == 1) {
    uVar50 = 0;
    if (0 < iVar48) {
      uVar49 = (ulonglong)iVar48;
      auVar58 = vmovdqu32_avx512f(_DAT_14308e640);
      auVar59 = vmovdqu32_avx512f(_DAT_14308e680);
      lVar45 = param_4 * uVar49 + param_3;
      uVar54 = *param_5 * 3;
      param_1 = 0;
      do {
        if (0 < (longlong)uVar54) {
          uVar42 = param_1;
          if (0xf < (longlong)uVar54) {
            while (uVar42 = uVar54 & 0xfffffffffffffff0, uVar51 = param_1, 0x3a < (longlong)uVar54)
            {
              uVar55 = param_4 * uVar50 + param_3;
              uVar42 = uVar55 & 0x3f;
              if ((((uVar55 & 3) == 0) && (uVar51 = uVar42, uVar42 != 0)) &&
                 (uVar51 = 0x40 - uVar42 >> 2, (longlong)uVar54 < (longlong)uVar51)) {
                uVar51 = uVar54;
              }
              uVar42 = uVar54 - (uVar54 - uVar51 & 0xf);
              if (uVar51 == 0) break;
              auVar60 = vpbroadcastq_avx512f();
              uVar53 = param_1;
              auVar62 = auVar59;
              auVar61 = auVar58;
              do {
                uVar20 = vpcmpgtq_avx512f(auVar60,auVar61);
                bVar22 = (byte)uVar20;
                uVar20 = vpcmpgtq_avx512f(auVar60,auVar62);
                bVar21 = (byte)uVar20;
                auVar61 = vpaddq_avx512f(auVar61,auVar63);
                auVar62 = vpaddq_avx512f(auVar62,auVar63);
                uVar57 = CONCAT11(bVar21,bVar22);
                piVar1 = (int *)(lVar45 + uVar53 * 4);
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
                puVar56 = (uint *)(uVar55 + uVar53 * 4);
                bVar5 = (bool)((byte)(uVar57 >> 1) & 1);
                bVar6 = (bool)((byte)(uVar57 >> 2) & 1);
                bVar7 = (bool)((byte)(uVar57 >> 3) & 1);
                bVar8 = (bool)((byte)(uVar57 >> 4) & 1);
                bVar9 = (bool)((byte)(uVar57 >> 5) & 1);
                bVar10 = (bool)((byte)(uVar57 >> 6) & 1);
                bVar11 = (bool)((byte)(uVar57 >> 7) & 1);
                bVar12 = (bool)(bVar21 >> 1 & 1);
                bVar13 = (bool)(bVar21 >> 2 & 1);
                bVar14 = (bool)(bVar21 >> 3 & 1);
                bVar15 = (bool)(bVar21 >> 4 & 1);
                bVar16 = (bool)(bVar21 >> 5 & 1);
                bVar17 = (bool)(bVar21 >> 6 & 1);
                *puVar56 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                           (uint)!(bool)(bVar22 & 1) * *puVar56;
                puVar56[1] = (uint)bVar5 * (uint)((byte)(uVar57 >> 1) & 1) * iVar48 |
                             (uint)!bVar5 * puVar56[1];
                puVar56[2] = (uint)bVar6 * (uint)((byte)(uVar57 >> 2) & 1) * iVar23 |
                             (uint)!bVar6 * puVar56[2];
                puVar56[3] = (uint)bVar7 * (uint)((byte)(uVar57 >> 3) & 1) * iVar24 |
                             (uint)!bVar7 * puVar56[3];
                puVar56[4] = (uint)bVar8 * (uint)((byte)(uVar57 >> 4) & 1) * iVar25 |
                             (uint)!bVar8 * puVar56[4];
                puVar56[5] = (uint)bVar9 * (uint)((byte)(uVar57 >> 5) & 1) * iVar26 |
                             (uint)!bVar9 * puVar56[5];
                puVar56[6] = (uint)bVar10 * (uint)((byte)(uVar57 >> 6) & 1) * iVar27 |
                             (uint)!bVar10 * puVar56[6];
                puVar56[7] = (uint)bVar11 * (uint)((byte)(uVar57 >> 7) & 1) * iVar28 |
                             (uint)!bVar11 * puVar56[7];
                puVar56[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar29 |
                             (uint)!(bool)(bVar21 & 1) * puVar56[8];
                puVar56[9] = (uint)bVar12 * (uint)(bVar21 >> 1 & 1) * iVar30 |
                             (uint)!bVar12 * puVar56[9];
                puVar56[10] = (uint)bVar13 * (uint)(bVar21 >> 2 & 1) * iVar31 |
                              (uint)!bVar13 * puVar56[10];
                puVar56[0xb] = (uint)bVar14 * (uint)(bVar21 >> 3 & 1) * iVar32 |
                               (uint)!bVar14 * puVar56[0xb];
                puVar56[0xc] = (uint)bVar15 * (uint)(bVar21 >> 4 & 1) * iVar33 |
                               (uint)!bVar15 * puVar56[0xc];
                puVar56[0xd] = (uint)bVar16 * (uint)(bVar21 >> 5 & 1) * iVar34 |
                               (uint)!bVar16 * puVar56[0xd];
                puVar56[0xe] = (uint)bVar17 * (uint)(bVar21 >> 6 & 1) * iVar35 |
                               (uint)!bVar17 * puVar56[0xe];
                puVar56[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar36 |
                               (uint)!(bool)(bVar21 >> 7) * puVar56[0xf];
                uVar53 = uVar53 + 0x10;
              } while (uVar53 < uVar51);
              if (uVar54 != uVar51) break;
              uVar50 = uVar50 + 1;
              if (uVar49 <= uVar50) goto LAB_140a02940;
            }
            if ((longlong)(uVar51 + 0x10) <= (longlong)uVar42) {
              do {
                puVar2 = (undefined8 *)(lVar45 + uVar51 * 4);
                uVar20 = puVar2[1];
                uVar18 = puVar2[2];
                uVar19 = puVar2[3];
                uVar38 = puVar2[4];
                uVar39 = puVar2[5];
                uVar40 = puVar2[6];
                uVar41 = puVar2[7];
                puVar3 = (undefined8 *)(param_4 * uVar50 + param_3 + uVar51 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar20;
                puVar3[2] = uVar18;
                puVar3[3] = uVar19;
                puVar3[4] = uVar38;
                puVar3[5] = uVar39;
                puVar3[6] = uVar40;
                puVar3[7] = uVar41;
                uVar51 = uVar51 + 0x10;
              } while (uVar51 < uVar42);
            }
          }
          if (uVar42 + 1 <= uVar54) {
            auVar62 = vpbroadcastq_avx512f();
            uVar20 = vpcmpgtq_avx512f(auVar62,auVar58);
            bVar22 = (byte)uVar20;
            uVar20 = vpcmpgtq_avx512f(auVar62,auVar59);
            bVar21 = (byte)uVar20;
            uVar57 = CONCAT11(bVar21,bVar22);
            piVar1 = (int *)(lVar45 + uVar42 * 4);
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
            puVar56 = (uint *)(param_4 * uVar50 + param_3 + uVar42 * 4);
            bVar5 = (bool)((byte)(uVar57 >> 1) & 1);
            bVar6 = (bool)((byte)(uVar57 >> 2) & 1);
            bVar7 = (bool)((byte)(uVar57 >> 3) & 1);
            bVar8 = (bool)((byte)(uVar57 >> 4) & 1);
            bVar9 = (bool)((byte)(uVar57 >> 5) & 1);
            bVar10 = (bool)((byte)(uVar57 >> 6) & 1);
            bVar11 = (bool)((byte)(uVar57 >> 7) & 1);
            bVar12 = (bool)(bVar21 >> 1 & 1);
            bVar13 = (bool)(bVar21 >> 2 & 1);
            bVar14 = (bool)(bVar21 >> 3 & 1);
            bVar15 = (bool)(bVar21 >> 4 & 1);
            bVar16 = (bool)(bVar21 >> 5 & 1);
            bVar17 = (bool)(bVar21 >> 6 & 1);
            *puVar56 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                       (uint)!(bool)(bVar22 & 1) * *puVar56;
            puVar56[1] = (uint)bVar5 * (uint)((byte)(uVar57 >> 1) & 1) * iVar48 |
                         (uint)!bVar5 * puVar56[1];
            puVar56[2] = (uint)bVar6 * (uint)((byte)(uVar57 >> 2) & 1) * iVar23 |
                         (uint)!bVar6 * puVar56[2];
            puVar56[3] = (uint)bVar7 * (uint)((byte)(uVar57 >> 3) & 1) * iVar24 |
                         (uint)!bVar7 * puVar56[3];
            puVar56[4] = (uint)bVar8 * (uint)((byte)(uVar57 >> 4) & 1) * iVar25 |
                         (uint)!bVar8 * puVar56[4];
            puVar56[5] = (uint)bVar9 * (uint)((byte)(uVar57 >> 5) & 1) * iVar26 |
                         (uint)!bVar9 * puVar56[5];
            puVar56[6] = (uint)bVar10 * (uint)((byte)(uVar57 >> 6) & 1) * iVar27 |
                         (uint)!bVar10 * puVar56[6];
            puVar56[7] = (uint)bVar11 * (uint)((byte)(uVar57 >> 7) & 1) * iVar28 |
                         (uint)!bVar11 * puVar56[7];
            puVar56[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar29 |
                         (uint)!(bool)(bVar21 & 1) * puVar56[8];
            puVar56[9] = (uint)bVar12 * (uint)(bVar21 >> 1 & 1) * iVar30 |
                         (uint)!bVar12 * puVar56[9];
            puVar56[10] = (uint)bVar13 * (uint)(bVar21 >> 2 & 1) * iVar31 |
                          (uint)!bVar13 * puVar56[10];
            puVar56[0xb] = (uint)bVar14 * (uint)(bVar21 >> 3 & 1) * iVar32 |
                           (uint)!bVar14 * puVar56[0xb];
            puVar56[0xc] = (uint)bVar15 * (uint)(bVar21 >> 4 & 1) * iVar33 |
                           (uint)!bVar15 * puVar56[0xc];
            puVar56[0xd] = (uint)bVar16 * (uint)(bVar21 >> 5 & 1) * iVar34 |
                           (uint)!bVar16 * puVar56[0xd];
            puVar56[0xe] = (uint)bVar17 * (uint)(bVar21 >> 6 & 1) * iVar35 |
                           (uint)!bVar17 * puVar56[0xe];
            puVar56[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar36 |
                           (uint)!(bool)(bVar21 >> 7) * puVar56[0xf];
          }
        }
        uVar50 = uVar50 + 1;
      } while (uVar50 < uVar49);
    }
LAB_140a02940:
    if ((uStack_48 ^ (ulonglong)auStack_298) == DAT_1436b4680) {
      return param_1;
    }
  }
  else {
    if (uVar44 == 3) {
      puStack_278 = &uStack_238;
      uStack_238 = *param_5;
      uStack_230 = param_5[1];
      uStack_268 = param_7;
      puStack_260 = param_8;
      uStack_258 = param_9;
      lStack_248 = param_11;
      iStack_270 = param_6;
      iStack_250 = param_10;
      param_1 = FUN_1409892a0(param_1,lStack_60,(longlong)iVar48,param_3);
      auVar63 = _DAT_14308e600;
      lVar45 = 1;
      uVar50 = 0;
      if (1 < iVar48) {
        uVar49 = 0;
        auVar58 = vmovdqu32_avx512f(_DAT_14308e640);
        auVar59 = vmovdqu32_avx512f(_DAT_14308e680);
        param_1 = *param_5;
        lVar47 = ((longlong)param_10 + -1) * param_4 + param_3;
        uVar54 = param_1 * 3;
        do {
          if (0 < (longlong)uVar54) {
            uVar42 = uVar49;
            if (0xf < (longlong)uVar54) {
              while (param_1 = uVar49, uVar42 = uVar54 & 0xfffffffffffffff0, 0x3a < (longlong)uVar54
                    ) {
                uVar51 = param_3 + param_4 * lVar45;
                uVar42 = uVar51 & 0x3f;
                if ((((uVar51 & 3) == 0) && (param_1 = uVar42, uVar42 != 0)) &&
                   (param_1 = 0x40 - uVar42 >> 2, (longlong)uVar54 < (longlong)param_1)) {
                  param_1 = uVar54;
                }
                uVar42 = uVar54 - (uVar54 - param_1 & 0xf);
                if (param_1 == 0) break;
                auVar60 = vpbroadcastq_avx512f();
                uVar55 = uVar49;
                auVar62 = auVar59;
                auVar61 = auVar58;
                do {
                  uVar20 = vpcmpgtq_avx512f(auVar60,auVar61);
                  bVar22 = (byte)uVar20;
                  uVar20 = vpcmpgtq_avx512f(auVar60,auVar62);
                  bVar21 = (byte)uVar20;
                  auVar61 = vpaddq_avx512f(auVar61,auVar63);
                  auVar62 = vpaddq_avx512f(auVar62,auVar63);
                  uVar57 = CONCAT11(bVar21,bVar22);
                  piVar1 = (int *)((lVar47 - param_4 * lVar45) + uVar55 * 4);
                  iVar23 = piVar1[1];
                  iVar24 = piVar1[2];
                  iVar25 = piVar1[3];
                  iVar26 = piVar1[4];
                  iVar27 = piVar1[5];
                  iVar28 = piVar1[6];
                  iVar29 = piVar1[7];
                  iVar30 = piVar1[8];
                  iVar31 = piVar1[9];
                  iVar32 = piVar1[10];
                  iVar33 = piVar1[0xb];
                  iVar34 = piVar1[0xc];
                  iVar35 = piVar1[0xd];
                  iVar36 = piVar1[0xe];
                  iVar37 = piVar1[0xf];
                  puVar56 = (uint *)(uVar51 + uVar55 * 4);
                  bVar5 = (bool)((byte)(uVar57 >> 1) & 1);
                  bVar6 = (bool)((byte)(uVar57 >> 2) & 1);
                  bVar7 = (bool)((byte)(uVar57 >> 3) & 1);
                  bVar8 = (bool)((byte)(uVar57 >> 4) & 1);
                  bVar9 = (bool)((byte)(uVar57 >> 5) & 1);
                  bVar10 = (bool)((byte)(uVar57 >> 6) & 1);
                  bVar11 = (bool)((byte)(uVar57 >> 7) & 1);
                  bVar12 = (bool)(bVar21 >> 1 & 1);
                  bVar13 = (bool)(bVar21 >> 2 & 1);
                  bVar14 = (bool)(bVar21 >> 3 & 1);
                  bVar15 = (bool)(bVar21 >> 4 & 1);
                  bVar16 = (bool)(bVar21 >> 5 & 1);
                  bVar17 = (bool)(bVar21 >> 6 & 1);
                  *puVar56 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                             (uint)!(bool)(bVar22 & 1) * *puVar56;
                  puVar56[1] = (uint)bVar5 * (uint)((byte)(uVar57 >> 1) & 1) * iVar23 |
                               (uint)!bVar5 * puVar56[1];
                  puVar56[2] = (uint)bVar6 * (uint)((byte)(uVar57 >> 2) & 1) * iVar24 |
                               (uint)!bVar6 * puVar56[2];
                  puVar56[3] = (uint)bVar7 * (uint)((byte)(uVar57 >> 3) & 1) * iVar25 |
                               (uint)!bVar7 * puVar56[3];
                  puVar56[4] = (uint)bVar8 * (uint)((byte)(uVar57 >> 4) & 1) * iVar26 |
                               (uint)!bVar8 * puVar56[4];
                  puVar56[5] = (uint)bVar9 * (uint)((byte)(uVar57 >> 5) & 1) * iVar27 |
                               (uint)!bVar9 * puVar56[5];
                  puVar56[6] = (uint)bVar10 * (uint)((byte)(uVar57 >> 6) & 1) * iVar28 |
                               (uint)!bVar10 * puVar56[6];
                  puVar56[7] = (uint)bVar11 * (uint)((byte)(uVar57 >> 7) & 1) * iVar29 |
                               (uint)!bVar11 * puVar56[7];
                  puVar56[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar30 |
                               (uint)!(bool)(bVar21 & 1) * puVar56[8];
                  puVar56[9] = (uint)bVar12 * (uint)(bVar21 >> 1 & 1) * iVar31 |
                               (uint)!bVar12 * puVar56[9];
                  puVar56[10] = (uint)bVar13 * (uint)(bVar21 >> 2 & 1) * iVar32 |
                                (uint)!bVar13 * puVar56[10];
                  puVar56[0xb] = (uint)bVar14 * (uint)(bVar21 >> 3 & 1) * iVar33 |
                                 (uint)!bVar14 * puVar56[0xb];
                  puVar56[0xc] = (uint)bVar15 * (uint)(bVar21 >> 4 & 1) * iVar34 |
                                 (uint)!bVar15 * puVar56[0xc];
                  puVar56[0xd] = (uint)bVar16 * (uint)(bVar21 >> 5 & 1) * iVar35 |
                                 (uint)!bVar16 * puVar56[0xd];
                  puVar56[0xe] = (uint)bVar17 * (uint)(bVar21 >> 6 & 1) * iVar36 |
                                 (uint)!bVar17 * puVar56[0xe];
                  puVar56[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar37 |
                                 (uint)!(bool)(bVar21 >> 7) * puVar56[0xf];
                  uVar55 = uVar55 + 0x10;
                } while (uVar55 < param_1);
                if (uVar54 != param_1) break;
                lVar45 = uVar50 + 2;
                uVar50 = uVar50 + 1;
                if ((ulonglong)(longlong)(iVar48 + -1) <= uVar50) goto LAB_140a02525;
              }
              if ((longlong)(param_1 + 0x10) <= (longlong)uVar42) {
                do {
                  puVar2 = (undefined8 *)((lVar47 - param_4 * lVar45) + param_1 * 4);
                  uVar20 = puVar2[1];
                  uVar18 = puVar2[2];
                  uVar19 = puVar2[3];
                  uVar38 = puVar2[4];
                  uVar39 = puVar2[5];
                  uVar40 = puVar2[6];
                  uVar41 = puVar2[7];
                  puVar3 = (undefined8 *)(param_3 + param_4 * lVar45 + param_1 * 4);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar20;
                  puVar3[2] = uVar18;
                  puVar3[3] = uVar19;
                  puVar3[4] = uVar38;
                  puVar3[5] = uVar39;
                  puVar3[6] = uVar40;
                  puVar3[7] = uVar41;
                  param_1 = param_1 + 0x10;
                } while (param_1 < uVar42);
              }
            }
            param_1 = uVar42 + 1;
            if (param_1 <= uVar54) {
              param_1 = uVar54 - uVar42;
              auVar62 = vpbroadcastq_avx512f();
              uVar20 = vpcmpgtq_avx512f(auVar62,auVar58);
              bVar22 = (byte)uVar20;
              uVar20 = vpcmpgtq_avx512f(auVar62,auVar59);
              bVar21 = (byte)uVar20;
              uVar57 = CONCAT11(bVar21,bVar22);
              piVar1 = (int *)((lVar47 - lVar45 * param_4) + uVar42 * 4);
              iVar23 = piVar1[1];
              iVar24 = piVar1[2];
              iVar25 = piVar1[3];
              iVar26 = piVar1[4];
              iVar27 = piVar1[5];
              iVar28 = piVar1[6];
              iVar29 = piVar1[7];
              iVar30 = piVar1[8];
              iVar31 = piVar1[9];
              iVar32 = piVar1[10];
              iVar33 = piVar1[0xb];
              iVar34 = piVar1[0xc];
              iVar35 = piVar1[0xd];
              iVar36 = piVar1[0xe];
              iVar37 = piVar1[0xf];
              puVar56 = (uint *)(lVar45 * param_4 + param_3 + uVar42 * 4);
              bVar5 = (bool)((byte)(uVar57 >> 1) & 1);
              bVar6 = (bool)((byte)(uVar57 >> 2) & 1);
              bVar7 = (bool)((byte)(uVar57 >> 3) & 1);
              bVar8 = (bool)((byte)(uVar57 >> 4) & 1);
              bVar9 = (bool)((byte)(uVar57 >> 5) & 1);
              bVar10 = (bool)((byte)(uVar57 >> 6) & 1);
              bVar11 = (bool)((byte)(uVar57 >> 7) & 1);
              bVar12 = (bool)(bVar21 >> 1 & 1);
              bVar13 = (bool)(bVar21 >> 2 & 1);
              bVar14 = (bool)(bVar21 >> 3 & 1);
              bVar15 = (bool)(bVar21 >> 4 & 1);
              bVar16 = (bool)(bVar21 >> 5 & 1);
              bVar17 = (bool)(bVar21 >> 6 & 1);
              *puVar56 = (uint)(bVar22 & 1) * (uint)(bVar22 & 1) * *piVar1 |
                         (uint)!(bool)(bVar22 & 1) * *puVar56;
              puVar56[1] = (uint)bVar5 * (uint)((byte)(uVar57 >> 1) & 1) * iVar23 |
                           (uint)!bVar5 * puVar56[1];
              puVar56[2] = (uint)bVar6 * (uint)((byte)(uVar57 >> 2) & 1) * iVar24 |
                           (uint)!bVar6 * puVar56[2];
              puVar56[3] = (uint)bVar7 * (uint)((byte)(uVar57 >> 3) & 1) * iVar25 |
                           (uint)!bVar7 * puVar56[3];
              puVar56[4] = (uint)bVar8 * (uint)((byte)(uVar57 >> 4) & 1) * iVar26 |
                           (uint)!bVar8 * puVar56[4];
              puVar56[5] = (uint)bVar9 * (uint)((byte)(uVar57 >> 5) & 1) * iVar27 |
                           (uint)!bVar9 * puVar56[5];
              puVar56[6] = (uint)bVar10 * (uint)((byte)(uVar57 >> 6) & 1) * iVar28 |
                           (uint)!bVar10 * puVar56[6];
              puVar56[7] = (uint)bVar11 * (uint)((byte)(uVar57 >> 7) & 1) * iVar29 |
                           (uint)!bVar11 * puVar56[7];
              puVar56[8] = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * iVar30 |
                           (uint)!(bool)(bVar21 & 1) * puVar56[8];
              puVar56[9] = (uint)bVar12 * (uint)(bVar21 >> 1 & 1) * iVar31 |
                           (uint)!bVar12 * puVar56[9];
              puVar56[10] = (uint)bVar13 * (uint)(bVar21 >> 2 & 1) * iVar32 |
                            (uint)!bVar13 * puVar56[10];
              puVar56[0xb] = (uint)bVar14 * (uint)(bVar21 >> 3 & 1) * iVar33 |
                             (uint)!bVar14 * puVar56[0xb];
              puVar56[0xc] = (uint)bVar15 * (uint)(bVar21 >> 4 & 1) * iVar34 |
                             (uint)!bVar15 * puVar56[0xc];
              puVar56[0xd] = (uint)bVar16 * (uint)(bVar21 >> 5 & 1) * iVar35 |
                             (uint)!bVar16 * puVar56[0xd];
              puVar56[0xe] = (uint)bVar17 * (uint)(bVar21 >> 6 & 1) * iVar36 |
                             (uint)!bVar17 * puVar56[0xe];
              puVar56[0xf] = (uint)(bVar21 >> 7) * (uint)(bVar21 >> 7) * iVar37 |
                             (uint)!(bool)(bVar21 >> 7) * puVar56[0xf];
            }
          }
          lVar45 = uVar50 + 2;
          uVar50 = uVar50 + 1;
        } while (uVar50 < (ulonglong)(longlong)(iVar48 + -1));
      }
    }
LAB_140a02525:
    if ((uStack_48 ^ (ulonglong)auStack_298) == DAT_1436b4680) {
      return param_1;
    }
  }
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14098a220(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
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
  longlong lVar42;
  uint uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  int iVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong lVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ushort uVar55;
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  ulonglong *in_stack_fffffffffffffe48;
  undefined4 uVar62;
  ulonglong uStack_178;
  ulonglong uStack_170;
  uint *puStack_168;
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
  undefined8 uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  
  uVar62 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  lStack_48 = (longlong)param_6;
  lVar42 = 0;
  iStack_58 = param_10;
  uVar47 = 0;
  iStack_a0 = param_10 >> 1;
  uVar43 = param_7 & 0x10;
  uVar50 = 0;
  uStack_50 = param_9;
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
    uStack_a8 = uVar43;
    if (uStack_78 == 0xf0) {
      uStack_178 = 0;
      puStack_168 = param_8;
      uStack_160 = param_7;
      uVar50 = uStack_178;
      uVar45 = param_3;
      puVar1 = puStack_168;
      uVar43 = uStack_160;
      lVar48 = param_4;
      goto LAB_14098a76f;
    }
    uVar47 = 0;
    uVar45 = param_3;
LAB_14098a394:
    uVar51 = uVar47;
    if (((longlong)param_5[1] <= (longlong)uVar47) && (param_7 != 0xf0)) {
      if (uStack_90 == 6) {
        if (uStack_b0 == 0) goto LAB_14098a4ec;
      }
      else {
        if (uStack_90 != 1) goto LAB_14098a3da;
        if (uStack_b0 == 0) {
          uVar51 = param_5[1] - 1;
        }
      }
    }
LAB_14098a480:
    in_stack_fffffffffffffe48 = &uStack_88;
    uStack_88 = *param_5;
    uStack_80 = param_5[1];
    FUN_14098b140(lStack_68,lStack_70,uVar51,param_3,in_stack_fffffffffffffe48,(int)lStack_48,
                  param_7,param_8,uStack_50,iStack_58,uStack_60);
LAB_14098a640:
    do {
      while( true ) {
        uVar19 = uStack_60;
        auVar56 = _DAT_14308de00;
        auVar58 = _DAT_14308dc40;
        uVar62 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
        iVar46 = (int)uVar47;
        uVar47 = uVar47 + 1;
        uVar50 = uVar50 + param_4;
        lVar42 = (longlong)iVar46 + 1;
        if (uStack_40 <= uVar47) {
          auVar57 = vmovdqu32_avx512f(_DAT_14308dc80);
          if (uStack_a8 != 0) {
            lVar48 = 0;
            lVar49 = -uStack_40;
            lVar42 = lStack_98;
            lStack_b8 = param_4;
            do {
              uStack_178 = *param_5;
              uStack_170 = param_5[1];
              FUN_14098b140(lStack_68,lStack_70,lVar49,lVar42,&uStack_178,(int)lStack_48,param_7,
                            param_8,uStack_50,iStack_58,uVar19);
              lVar48 = lVar48 + 1;
              lVar49 = lVar49 + 1;
              lVar42 = lVar42 + lStack_b8;
            } while (lVar48 < (longlong)uStack_40);
            return;
          }
          if (uStack_90 == 6) {
            uVar43 = *param_8;
            uVar47 = 0;
            uVar50 = *param_5;
            auVar58 = vbroadcastss_avx512f(ZEXT416(uVar43));
            goto LAB_14098ade0;
          }
          uVar43 = uStack_90;
          if (uStack_90 != 1) goto LAB_14098a857;
          uVar50 = *param_5;
          uVar47 = 0;
          auVar56 = vmovdqu32_avx512f(_DAT_14308dcc0);
          goto LAB_14098ac20;
        }
        param_3 = uVar45 + uVar50;
        puVar1 = param_8;
        uVar43 = param_7;
        lVar48 = param_4;
        if (uStack_78 != 0xf0) break;
LAB_14098a76f:
        lStack_b8 = lVar48;
        uStack_160 = uVar43;
        puStack_168 = puVar1;
        uStack_170 = uVar45;
        uStack_178 = uVar50;
        in_stack_fffffffffffffe48 = (ulonglong *)CONCAT44(uVar62,iStack_58);
        (*(code *)(&PTR_LAB_14308df40)[lStack_48])
                  (lStack_70 * uVar47 + lStack_68,param_3,*param_5,uStack_50,
                   in_stack_fffffffffffffe48);
        uVar45 = uStack_170;
        uVar50 = uStack_178;
        param_8 = puStack_168;
        param_4 = lStack_b8;
        param_7 = uStack_160;
      }
      if (-1 < (longlong)uVar47) goto LAB_14098a394;
      uVar51 = uVar47;
      if (param_7 == 0xf0) goto LAB_14098a480;
      if (uStack_90 != 6) {
        if (uStack_90 != 1) goto LAB_14098a3da;
        uVar51 = 0;
        if (uStack_a8 != 0) {
          uVar51 = uVar47;
        }
        goto LAB_14098a480;
      }
      if (uStack_a8 != 0) goto LAB_14098a480;
LAB_14098a4ec:
      auVar58 = _DAT_14308de00;
      uVar51 = *param_5;
      uVar43 = *param_8;
    } while ((longlong)uVar51 < 1);
    if ((longlong)uVar51 < 0x10) {
      uVar52 = 0;
    }
    else {
      if ((longlong)uVar51 < 0x26) {
        uVar44 = 0;
        uVar52 = uVar51 & 0xfffffffffffffff0;
      }
      else {
        uVar54 = param_4 * lVar42 + uVar45;
        uVar44 = uVar54 & 0x3f;
        if ((uVar54 & 3) == 0) {
          if ((uVar44 != 0) && (uVar44 = 0x40 - uVar44 >> 2, (longlong)uVar51 < (longlong)uVar44)) {
            uVar44 = uVar51;
          }
        }
        else {
          uVar44 = 0;
        }
        uVar52 = uVar51 - (uVar51 - uVar44 & 0xf);
        if (uVar44 != 0) {
          auVar56 = vmovdqu32_avx512f(_DAT_14308dc80);
          uVar53 = 0;
          auVar57 = vpbroadcastq_avx512f();
          do {
            uVar18 = vpcmpgtq_avx512f(auVar57,auVar56);
            auVar56 = vpaddq_avx512f(auVar56,auVar58);
            puVar1 = (uint *)(uVar54 + uVar53 * 4);
            bVar5 = (bool)((byte)uVar18 & 1);
            bVar6 = (bool)((byte)(uVar18 >> 1) & 1);
            bVar7 = (bool)((byte)(uVar18 >> 2) & 1);
            bVar8 = (bool)((byte)(uVar18 >> 3) & 1);
            bVar9 = (bool)((byte)(uVar18 >> 4) & 1);
            bVar10 = (bool)((byte)(uVar18 >> 5) & 1);
            bVar11 = (bool)((byte)(uVar18 >> 6) & 1);
            bVar12 = SUB81(uVar18 >> 7,0);
            *puVar1 = bVar5 * uVar43 | (uint)!bVar5 * *puVar1;
            puVar1[1] = bVar6 * uVar43 | (uint)!bVar6 * puVar1[1];
            puVar1[2] = bVar7 * uVar43 | (uint)!bVar7 * puVar1[2];
            puVar1[3] = bVar8 * uVar43 | (uint)!bVar8 * puVar1[3];
            puVar1[4] = bVar9 * uVar43 | (uint)!bVar9 * puVar1[4];
            puVar1[5] = bVar10 * uVar43 | (uint)!bVar10 * puVar1[5];
            puVar1[6] = bVar11 * uVar43 | (uint)!bVar11 * puVar1[6];
            puVar1[7] = bVar12 * uVar43 | (uint)!bVar12 * puVar1[7];
            uVar53 = uVar53 + 8;
          } while (uVar53 < uVar44);
          if (uVar51 == uVar44) goto LAB_14098a640;
        }
      }
      if ((longlong)(uVar44 + 0x10) <= (longlong)uVar52) {
        auVar58 = vbroadcastss_avx512f(ZEXT416(uVar43));
        do {
          *(undefined1 (*) [64])(param_4 * lVar42 + uVar45 + uVar44 * 4) = auVar58;
          uVar44 = uVar44 + 0x10;
        } while (uVar44 < uVar52);
      }
    }
    auVar58 = _DAT_14308de00;
    if (uVar52 + 1 <= uVar51) {
      auVar56 = vmovdqu32_avx512f(_DAT_14308dc80);
      auVar57 = vpbroadcastq_avx512f();
      uVar44 = 0;
      do {
        uVar54 = vpcmpgtq_avx512f(auVar57,auVar56);
        auVar56 = vpaddq_avx512f(auVar56,auVar58);
        puVar1 = (uint *)(lVar42 * param_4 + uVar45 + uVar52 * 4 + uVar44 * 4);
        bVar5 = (bool)((byte)uVar54 & 1);
        bVar6 = (bool)((byte)(uVar54 >> 1) & 1);
        bVar7 = (bool)((byte)(uVar54 >> 2) & 1);
        bVar8 = (bool)((byte)(uVar54 >> 3) & 1);
        bVar9 = (bool)((byte)(uVar54 >> 4) & 1);
        bVar10 = (bool)((byte)(uVar54 >> 5) & 1);
        bVar11 = (bool)((byte)(uVar54 >> 6) & 1);
        bVar12 = SUB81(uVar54 >> 7,0);
        *puVar1 = bVar5 * uVar43 | (uint)!bVar5 * *puVar1;
        puVar1[1] = bVar6 * uVar43 | (uint)!bVar6 * puVar1[1];
        puVar1[2] = bVar7 * uVar43 | (uint)!bVar7 * puVar1[2];
        puVar1[3] = bVar8 * uVar43 | (uint)!bVar8 * puVar1[3];
        puVar1[4] = bVar9 * uVar43 | (uint)!bVar9 * puVar1[4];
        puVar1[5] = bVar10 * uVar43 | (uint)!bVar10 * puVar1[5];
        puVar1[6] = bVar11 * uVar43 | (uint)!bVar11 * puVar1[6];
        puVar1[7] = bVar12 * uVar43 | (uint)!bVar12 * puVar1[7];
        uVar44 = uVar44 + 8;
      } while (uVar44 < uVar51 - uVar52);
    }
    goto LAB_14098a640;
  }
  if (uVar43 != 0) {
    return;
  }
  uVar43 = param_7 & 0xf;
  if (uVar43 == 6) {
    return;
  }
  if (uVar43 == 1) {
    return;
  }
LAB_14098a857:
  if (uVar43 != 3) {
    return;
  }
  lVar42 = (longlong)iStack_a0;
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_LAB_14308df40)[lStack_48])
              (lStack_68 + lStack_70 * lVar42,lStack_98,*param_5,uStack_50,
               CONCAT44(uVar62,iStack_58));
  }
  else {
    if (((lVar42 < 0) || ((longlong)param_5[1] <= lVar42)) && (param_7 != 0xf0)) {
      uVar50 = param_5[1];
      if ((longlong)uVar50 < 2) {
        if (lVar42 < 0) {
          lVar42 = -lVar42;
          if ((param_7 & 0x20) == 0) {
            lVar42 = 0;
          }
        }
        else if ((0 < lVar42) && ((param_7 & 0x20) == 0)) {
          lVar42 = 0;
        }
      }
      else {
        while( true ) {
          for (; lVar42 < 0; lVar42 = -lVar42) {
          }
          if ((lVar42 < (longlong)uVar50) || ((param_7 & 0x20) != 0)) break;
          lVar42 = (uVar50 - 1) * 2 - lVar42;
        }
      }
    }
    uStack_178 = *param_5;
    uStack_170 = param_5[1];
    FUN_14098b140(lStack_68,lStack_70,lVar42,lStack_98,&uStack_178,(int)lStack_48,param_7,param_8,
                  uStack_50,iStack_58,uStack_60);
  }
  auVar58 = _DAT_14308dc40;
  lVar42 = 1;
  uVar50 = 0;
  if (iStack_a0 < 2) {
    return;
  }
  auVar56 = vmovdqu32_avx512f(_DAT_14308dc80);
  auVar57 = vmovdqu32_avx512f(_DAT_14308dcc0);
  uVar47 = *param_5;
  lVar48 = ((longlong)iStack_58 + -1) * param_4 + lStack_98;
  do {
    if (0 < (longlong)uVar47) {
      if ((longlong)uVar47 < 0x10) {
        uVar45 = 0;
      }
      else {
        while (0x3a < (longlong)uVar47) {
          uVar51 = lStack_98 + param_4 * lVar42;
          uVar52 = uVar51 & 0x3f;
          if ((uVar51 & 3) == 0) {
            if ((uVar52 != 0) && (uVar52 = 0x40 - uVar52 >> 2, (longlong)uVar47 < (longlong)uVar52))
            {
              uVar52 = uVar47;
            }
          }
          else {
            uVar52 = 0;
          }
          uVar45 = uVar47 - (uVar47 - uVar52 & 0xf);
          if (uVar52 == 0) goto LAB_14098aa9c;
          uVar44 = 0;
          auVar59 = vpbroadcastq_avx512f();
          auVar61 = auVar57;
          auVar60 = auVar56;
          do {
            uVar19 = vpcmpgtq_avx512f(auVar59,auVar60);
            bVar21 = (byte)uVar19;
            uVar19 = vpcmpgtq_avx512f(auVar59,auVar61);
            bVar20 = (byte)uVar19;
            auVar60 = vpaddq_avx512f(auVar60,auVar58);
            auVar61 = vpaddq_avx512f(auVar61,auVar58);
            uVar55 = CONCAT11(bVar20,bVar21);
            piVar2 = (int *)((lVar48 - param_4 * lVar42) + uVar44 * 4);
            iVar46 = piVar2[1];
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
            puVar1 = (uint *)(uVar51 + uVar44 * 4);
            bVar5 = (bool)((byte)(uVar55 >> 1) & 1);
            bVar6 = (bool)((byte)(uVar55 >> 2) & 1);
            bVar7 = (bool)((byte)(uVar55 >> 3) & 1);
            bVar8 = (bool)((byte)(uVar55 >> 4) & 1);
            bVar9 = (bool)((byte)(uVar55 >> 5) & 1);
            bVar10 = (bool)((byte)(uVar55 >> 6) & 1);
            bVar11 = (bool)((byte)(uVar55 >> 7) & 1);
            bVar12 = (bool)(bVar20 >> 1 & 1);
            bVar13 = (bool)(bVar20 >> 2 & 1);
            bVar14 = (bool)(bVar20 >> 3 & 1);
            bVar15 = (bool)(bVar20 >> 4 & 1);
            bVar16 = (bool)(bVar20 >> 5 & 1);
            bVar17 = (bool)(bVar20 >> 6 & 1);
            *puVar1 = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * *piVar2 |
                      (uint)!(bool)(bVar21 & 1) * *puVar1;
            puVar1[1] = (uint)bVar5 * (uint)((byte)(uVar55 >> 1) & 1) * iVar46 |
                        (uint)!bVar5 * puVar1[1];
            puVar1[2] = (uint)bVar6 * (uint)((byte)(uVar55 >> 2) & 1) * iVar22 |
                        (uint)!bVar6 * puVar1[2];
            puVar1[3] = (uint)bVar7 * (uint)((byte)(uVar55 >> 3) & 1) * iVar23 |
                        (uint)!bVar7 * puVar1[3];
            puVar1[4] = (uint)bVar8 * (uint)((byte)(uVar55 >> 4) & 1) * iVar24 |
                        (uint)!bVar8 * puVar1[4];
            puVar1[5] = (uint)bVar9 * (uint)((byte)(uVar55 >> 5) & 1) * iVar25 |
                        (uint)!bVar9 * puVar1[5];
            puVar1[6] = (uint)bVar10 * (uint)((byte)(uVar55 >> 6) & 1) * iVar26 |
                        (uint)!bVar10 * puVar1[6];
            puVar1[7] = (uint)bVar11 * (uint)((byte)(uVar55 >> 7) & 1) * iVar27 |
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
            uVar44 = uVar44 + 0x10;
          } while (uVar44 < uVar52);
          if (uVar47 != uVar52) goto LAB_14098aa9c;
          lVar42 = uVar50 + 2;
          uVar50 = uVar50 + 1;
          if ((ulonglong)(longlong)(iStack_a0 + -1) <= uVar50) {
            return;
          }
        }
        uVar52 = 0;
        uVar45 = uVar47 & 0xfffffffffffffff0;
LAB_14098aa9c:
        if ((longlong)(uVar52 + 0x10) <= (longlong)uVar45) {
          do {
            puVar3 = (undefined8 *)((lVar48 - param_4 * lVar42) + uVar52 * 4);
            uVar19 = puVar3[1];
            uVar36 = puVar3[2];
            uVar37 = puVar3[3];
            uVar38 = puVar3[4];
            uVar39 = puVar3[5];
            uVar40 = puVar3[6];
            uVar41 = puVar3[7];
            puVar4 = (undefined8 *)(lStack_98 + param_4 * lVar42 + uVar52 * 4);
            *puVar4 = *puVar3;
            puVar4[1] = uVar19;
            puVar4[2] = uVar36;
            puVar4[3] = uVar37;
            puVar4[4] = uVar38;
            puVar4[5] = uVar39;
            puVar4[6] = uVar40;
            puVar4[7] = uVar41;
            uVar52 = uVar52 + 0x10;
          } while (uVar52 < uVar45);
        }
      }
      if (uVar45 + 1 <= uVar47) {
        auVar61 = vpbroadcastq_avx512f();
        uVar19 = vpcmpgtq_avx512f(auVar61,auVar56);
        bVar21 = (byte)uVar19;
        uVar19 = vpcmpgtq_avx512f(auVar61,auVar57);
        bVar20 = (byte)uVar19;
        uVar55 = CONCAT11(bVar20,bVar21);
        piVar2 = (int *)((lVar48 - lVar42 * param_4) + uVar45 * 4);
        iVar46 = piVar2[1];
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
        puVar1 = (uint *)(lVar42 * param_4 + lStack_98 + uVar45 * 4);
        bVar5 = (bool)((byte)(uVar55 >> 1) & 1);
        bVar6 = (bool)((byte)(uVar55 >> 2) & 1);
        bVar7 = (bool)((byte)(uVar55 >> 3) & 1);
        bVar8 = (bool)((byte)(uVar55 >> 4) & 1);
        bVar9 = (bool)((byte)(uVar55 >> 5) & 1);
        bVar10 = (bool)((byte)(uVar55 >> 6) & 1);
        bVar11 = (bool)((byte)(uVar55 >> 7) & 1);
        bVar12 = (bool)(bVar20 >> 1 & 1);
        bVar13 = (bool)(bVar20 >> 2 & 1);
        bVar14 = (bool)(bVar20 >> 3 & 1);
        bVar15 = (bool)(bVar20 >> 4 & 1);
        bVar16 = (bool)(bVar20 >> 5 & 1);
        bVar17 = (bool)(bVar20 >> 6 & 1);
        *puVar1 = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * *piVar2 |
                  (uint)!(bool)(bVar21 & 1) * *puVar1;
        puVar1[1] = (uint)bVar5 * (uint)((byte)(uVar55 >> 1) & 1) * iVar46 |
                    (uint)!bVar5 * puVar1[1];
        puVar1[2] = (uint)bVar6 * (uint)((byte)(uVar55 >> 2) & 1) * iVar22 |
                    (uint)!bVar6 * puVar1[2];
        puVar1[3] = (uint)bVar7 * (uint)((byte)(uVar55 >> 3) & 1) * iVar23 |
                    (uint)!bVar7 * puVar1[3];
        puVar1[4] = (uint)bVar8 * (uint)((byte)(uVar55 >> 4) & 1) * iVar24 |
                    (uint)!bVar8 * puVar1[4];
        puVar1[5] = (uint)bVar9 * (uint)((byte)(uVar55 >> 5) & 1) * iVar25 |
                    (uint)!bVar9 * puVar1[5];
        puVar1[6] = (uint)bVar10 * (uint)((byte)(uVar55 >> 6) & 1) * iVar26 |
                    (uint)!bVar10 * puVar1[6];
        puVar1[7] = (uint)bVar11 * (uint)((byte)(uVar55 >> 7) & 1) * iVar27 |
                    (uint)!bVar11 * puVar1[7];
        puVar1[8] = (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * iVar28 |
                    (uint)!(bool)(bVar20 & 1) * puVar1[8];
        puVar1[9] = (uint)bVar12 * (uint)(bVar20 >> 1 & 1) * iVar29 | (uint)!bVar12 * puVar1[9];
        puVar1[10] = (uint)bVar13 * (uint)(bVar20 >> 2 & 1) * iVar30 | (uint)!bVar13 * puVar1[10];
        puVar1[0xb] = (uint)bVar14 * (uint)(bVar20 >> 3 & 1) * iVar31 | (uint)!bVar14 * puVar1[0xb];
        puVar1[0xc] = (uint)bVar15 * (uint)(bVar20 >> 4 & 1) * iVar32 | (uint)!bVar15 * puVar1[0xc];
        puVar1[0xd] = (uint)bVar16 * (uint)(bVar20 >> 5 & 1) * iVar33 | (uint)!bVar16 * puVar1[0xd];
        puVar1[0xe] = (uint)bVar17 * (uint)(bVar20 >> 6 & 1) * iVar34 | (uint)!bVar17 * puVar1[0xe];
        puVar1[0xf] = (uint)(bVar20 >> 7) * (uint)(bVar20 >> 7) * iVar35 |
                      (uint)!(bool)(bVar20 >> 7) * puVar1[0xf];
      }
    }
    lVar42 = uVar50 + 2;
    uVar50 = uVar50 + 1;
    if ((ulonglong)(longlong)(iStack_a0 + -1) <= uVar50) {
      return;
    }
  } while( true );
LAB_14098ade0:
  if (0 < (longlong)uVar50) {
    if ((longlong)uVar50 < 0x10) {
      uVar45 = 0;
    }
    else {
      while (0x25 < (longlong)uVar50) {
        uVar52 = param_4 * uVar47 + lStack_98;
        uVar51 = uVar52 & 0x3f;
        if ((uVar52 & 3) == 0) {
          if ((uVar51 != 0) && (uVar51 = 0x40 - uVar51 >> 2, (longlong)uVar50 < (longlong)uVar51)) {
            uVar51 = uVar50;
          }
        }
        else {
          uVar51 = 0;
        }
        uVar45 = uVar50 - (uVar50 - uVar51 & 0xf);
        if (uVar51 == 0) goto LAB_14098aea5;
        uVar44 = 0;
        auVar60 = vpbroadcastq_avx512f();
        auVar61 = auVar57;
        do {
          uVar54 = vpcmpgtq_avx512f(auVar60,auVar61);
          auVar61 = vpaddq_avx512f(auVar61,auVar56);
          puVar1 = (uint *)(uVar52 + uVar44 * 4);
          bVar5 = (bool)((byte)uVar54 & 1);
          bVar6 = (bool)((byte)(uVar54 >> 1) & 1);
          bVar7 = (bool)((byte)(uVar54 >> 2) & 1);
          bVar8 = (bool)((byte)(uVar54 >> 3) & 1);
          bVar9 = (bool)((byte)(uVar54 >> 4) & 1);
          bVar10 = (bool)((byte)(uVar54 >> 5) & 1);
          bVar11 = (bool)((byte)(uVar54 >> 6) & 1);
          bVar12 = SUB81(uVar54 >> 7,0);
          *puVar1 = bVar5 * uVar43 | (uint)!bVar5 * *puVar1;
          puVar1[1] = bVar6 * uVar43 | (uint)!bVar6 * puVar1[1];
          puVar1[2] = bVar7 * uVar43 | (uint)!bVar7 * puVar1[2];
          puVar1[3] = bVar8 * uVar43 | (uint)!bVar8 * puVar1[3];
          puVar1[4] = bVar9 * uVar43 | (uint)!bVar9 * puVar1[4];
          puVar1[5] = bVar10 * uVar43 | (uint)!bVar10 * puVar1[5];
          puVar1[6] = bVar11 * uVar43 | (uint)!bVar11 * puVar1[6];
          puVar1[7] = bVar12 * uVar43 | (uint)!bVar12 * puVar1[7];
          uVar44 = uVar44 + 8;
        } while (uVar44 < uVar51);
        if (uVar50 != uVar51) goto LAB_14098aea5;
        uVar47 = uVar47 + 1;
        if (uStack_40 <= uVar47) {
          return;
        }
      }
      uVar51 = 0;
      uVar45 = uVar50 & 0xfffffffffffffff0;
LAB_14098aea5:
      if ((longlong)(uVar51 + 0x10) <= (longlong)uVar45) {
        do {
          *(undefined1 (*) [64])(param_4 * uVar47 + lStack_98 + uVar51 * 4) = auVar58;
          uVar51 = uVar51 + 0x10;
        } while (uVar51 < uVar45);
      }
    }
    if (uVar45 + 1 <= uVar50) {
      uVar51 = 0;
      auVar60 = vpbroadcastq_avx512f();
      auVar61 = auVar57;
      do {
        uVar52 = vpcmpgtq_avx512f(auVar60,auVar61);
        auVar61 = vpaddq_avx512f(auVar61,auVar56);
        puVar1 = (uint *)(param_4 * uVar47 + lStack_98 + uVar45 * 4 + uVar51 * 4);
        bVar5 = (bool)((byte)uVar52 & 1);
        bVar6 = (bool)((byte)(uVar52 >> 1) & 1);
        bVar7 = (bool)((byte)(uVar52 >> 2) & 1);
        bVar8 = (bool)((byte)(uVar52 >> 3) & 1);
        bVar9 = (bool)((byte)(uVar52 >> 4) & 1);
        bVar10 = (bool)((byte)(uVar52 >> 5) & 1);
        bVar11 = (bool)((byte)(uVar52 >> 6) & 1);
        bVar12 = SUB81(uVar52 >> 7,0);
        *puVar1 = bVar5 * uVar43 | (uint)!bVar5 * *puVar1;
        puVar1[1] = bVar6 * uVar43 | (uint)!bVar6 * puVar1[1];
        puVar1[2] = bVar7 * uVar43 | (uint)!bVar7 * puVar1[2];
        puVar1[3] = bVar8 * uVar43 | (uint)!bVar8 * puVar1[3];
        puVar1[4] = bVar9 * uVar43 | (uint)!bVar9 * puVar1[4];
        puVar1[5] = bVar10 * uVar43 | (uint)!bVar10 * puVar1[5];
        puVar1[6] = bVar11 * uVar43 | (uint)!bVar11 * puVar1[6];
        puVar1[7] = bVar12 * uVar43 | (uint)!bVar12 * puVar1[7];
        uVar51 = uVar51 + 8;
      } while (uVar51 < uVar50 - uVar45);
    }
  }
  uVar47 = uVar47 + 1;
  if (uStack_40 <= uVar47) {
    return;
  }
  goto LAB_14098ade0;
LAB_14098ac20:
  if (0 < (longlong)uVar50) {
    if ((longlong)uVar50 < 0x10) {
      uVar51 = 0;
    }
    else {
      while (0x3a < (longlong)uVar50) {
        uVar44 = param_4 * uVar47 + lStack_98;
        uVar52 = uVar44 & 0x3f;
        if ((uVar44 & 3) == 0) {
          if ((uVar52 != 0) && (uVar52 = 0x40 - uVar52 >> 2, (longlong)uVar50 < (longlong)uVar52)) {
            uVar52 = uVar50;
          }
        }
        else {
          uVar52 = 0;
        }
        uVar51 = uVar50 - (uVar50 - uVar52 & 0xf);
        if (uVar52 == 0) goto LAB_14098acfd;
        uVar54 = 0;
        auVar59 = vpbroadcastq_avx512f();
        auVar61 = auVar56;
        auVar60 = auVar57;
        do {
          uVar19 = vpcmpgtq_avx512f(auVar59,auVar60);
          bVar21 = (byte)uVar19;
          uVar19 = vpcmpgtq_avx512f(auVar59,auVar61);
          bVar20 = (byte)uVar19;
          auVar60 = vpaddq_avx512f(auVar60,auVar58);
          auVar61 = vpaddq_avx512f(auVar61,auVar58);
          uVar55 = CONCAT11(bVar20,bVar21);
          piVar2 = (int *)(uVar45 + uVar54 * 4);
          iVar46 = piVar2[1];
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
          puVar1 = (uint *)(uVar44 + uVar54 * 4);
          bVar5 = (bool)((byte)(uVar55 >> 1) & 1);
          bVar6 = (bool)((byte)(uVar55 >> 2) & 1);
          bVar7 = (bool)((byte)(uVar55 >> 3) & 1);
          bVar8 = (bool)((byte)(uVar55 >> 4) & 1);
          bVar9 = (bool)((byte)(uVar55 >> 5) & 1);
          bVar10 = (bool)((byte)(uVar55 >> 6) & 1);
          bVar11 = (bool)((byte)(uVar55 >> 7) & 1);
          bVar12 = (bool)(bVar20 >> 1 & 1);
          bVar13 = (bool)(bVar20 >> 2 & 1);
          bVar14 = (bool)(bVar20 >> 3 & 1);
          bVar15 = (bool)(bVar20 >> 4 & 1);
          bVar16 = (bool)(bVar20 >> 5 & 1);
          bVar17 = (bool)(bVar20 >> 6 & 1);
          *puVar1 = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * *piVar2 |
                    (uint)!(bool)(bVar21 & 1) * *puVar1;
          puVar1[1] = (uint)bVar5 * (uint)((byte)(uVar55 >> 1) & 1) * iVar46 |
                      (uint)!bVar5 * puVar1[1];
          puVar1[2] = (uint)bVar6 * (uint)((byte)(uVar55 >> 2) & 1) * iVar22 |
                      (uint)!bVar6 * puVar1[2];
          puVar1[3] = (uint)bVar7 * (uint)((byte)(uVar55 >> 3) & 1) * iVar23 |
                      (uint)!bVar7 * puVar1[3];
          puVar1[4] = (uint)bVar8 * (uint)((byte)(uVar55 >> 4) & 1) * iVar24 |
                      (uint)!bVar8 * puVar1[4];
          puVar1[5] = (uint)bVar9 * (uint)((byte)(uVar55 >> 5) & 1) * iVar25 |
                      (uint)!bVar9 * puVar1[5];
          puVar1[6] = (uint)bVar10 * (uint)((byte)(uVar55 >> 6) & 1) * iVar26 |
                      (uint)!bVar10 * puVar1[6];
          puVar1[7] = (uint)bVar11 * (uint)((byte)(uVar55 >> 7) & 1) * iVar27 |
                      (uint)!bVar11 * puVar1[7];
          puVar1[8] = (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * iVar28 |
                      (uint)!(bool)(bVar20 & 1) * puVar1[8];
          puVar1[9] = (uint)bVar12 * (uint)(bVar20 >> 1 & 1) * iVar29 | (uint)!bVar12 * puVar1[9];
          puVar1[10] = (uint)bVar13 * (uint)(bVar20 >> 2 & 1) * iVar30 | (uint)!bVar13 * puVar1[10];
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
          uVar54 = uVar54 + 0x10;
        } while (uVar54 < uVar52);
        if (uVar50 != uVar52) goto LAB_14098acfd;
        uVar47 = uVar47 + 1;
        if (uStack_40 <= uVar47) {
          return;
        }
      }
      uVar52 = 0;
      uVar51 = uVar50 & 0xfffffffffffffff0;
LAB_14098acfd:
      if ((longlong)(uVar52 + 0x10) <= (longlong)uVar51) {
        do {
          puVar4 = (undefined8 *)(uVar45 + uVar52 * 4);
          uVar19 = puVar4[1];
          uVar36 = puVar4[2];
          uVar37 = puVar4[3];
          uVar38 = puVar4[4];
          uVar39 = puVar4[5];
          uVar40 = puVar4[6];
          uVar41 = puVar4[7];
          puVar3 = (undefined8 *)(param_4 * uVar47 + lStack_98 + uVar52 * 4);
          *puVar3 = *puVar4;
          puVar3[1] = uVar19;
          puVar3[2] = uVar36;
          puVar3[3] = uVar37;
          puVar3[4] = uVar38;
          puVar3[5] = uVar39;
          puVar3[6] = uVar40;
          puVar3[7] = uVar41;
          uVar52 = uVar52 + 0x10;
        } while (uVar52 < uVar51);
      }
    }
    if (uVar51 + 1 <= uVar50) {
      auVar61 = vpbroadcastq_avx512f();
      uVar19 = vpcmpgtq_avx512f(auVar61,auVar57);
      bVar21 = (byte)uVar19;
      uVar19 = vpcmpgtq_avx512f(auVar61,auVar56);
      bVar20 = (byte)uVar19;
      uVar55 = CONCAT11(bVar20,bVar21);
      piVar2 = (int *)(uVar45 + uVar51 * 4);
      iVar46 = piVar2[1];
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
      puVar1 = (uint *)(param_4 * uVar47 + lStack_98 + uVar51 * 4);
      bVar5 = (bool)((byte)(uVar55 >> 1) & 1);
      bVar6 = (bool)((byte)(uVar55 >> 2) & 1);
      bVar7 = (bool)((byte)(uVar55 >> 3) & 1);
      bVar8 = (bool)((byte)(uVar55 >> 4) & 1);
      bVar9 = (bool)((byte)(uVar55 >> 5) & 1);
      bVar10 = (bool)((byte)(uVar55 >> 6) & 1);
      bVar11 = (bool)((byte)(uVar55 >> 7) & 1);
      bVar12 = (bool)(bVar20 >> 1 & 1);
      bVar13 = (bool)(bVar20 >> 2 & 1);
      bVar14 = (bool)(bVar20 >> 3 & 1);
      bVar15 = (bool)(bVar20 >> 4 & 1);
      bVar16 = (bool)(bVar20 >> 5 & 1);
      bVar17 = (bool)(bVar20 >> 6 & 1);
      *puVar1 = (uint)(bVar21 & 1) * (uint)(bVar21 & 1) * *piVar2 |
                (uint)!(bool)(bVar21 & 1) * *puVar1;
      puVar1[1] = (uint)bVar5 * (uint)((byte)(uVar55 >> 1) & 1) * iVar46 | (uint)!bVar5 * puVar1[1];
      puVar1[2] = (uint)bVar6 * (uint)((byte)(uVar55 >> 2) & 1) * iVar22 | (uint)!bVar6 * puVar1[2];
      puVar1[3] = (uint)bVar7 * (uint)((byte)(uVar55 >> 3) & 1) * iVar23 | (uint)!bVar7 * puVar1[3];
      puVar1[4] = (uint)bVar8 * (uint)((byte)(uVar55 >> 4) & 1) * iVar24 | (uint)!bVar8 * puVar1[4];
      puVar1[5] = (uint)bVar9 * (uint)((byte)(uVar55 >> 5) & 1) * iVar25 | (uint)!bVar9 * puVar1[5];
      puVar1[6] = (uint)bVar10 * (uint)((byte)(uVar55 >> 6) & 1) * iVar26 |
                  (uint)!bVar10 * puVar1[6];
      puVar1[7] = (uint)bVar11 * (uint)((byte)(uVar55 >> 7) & 1) * iVar27 |
                  (uint)!bVar11 * puVar1[7];
      puVar1[8] = (uint)(bVar20 & 1) * (uint)(bVar20 & 1) * iVar28 |
                  (uint)!(bool)(bVar20 & 1) * puVar1[8];
      puVar1[9] = (uint)bVar12 * (uint)(bVar20 >> 1 & 1) * iVar29 | (uint)!bVar12 * puVar1[9];
      puVar1[10] = (uint)bVar13 * (uint)(bVar20 >> 2 & 1) * iVar30 | (uint)!bVar13 * puVar1[10];
      puVar1[0xb] = (uint)bVar14 * (uint)(bVar20 >> 3 & 1) * iVar31 | (uint)!bVar14 * puVar1[0xb];
      puVar1[0xc] = (uint)bVar15 * (uint)(bVar20 >> 4 & 1) * iVar32 | (uint)!bVar15 * puVar1[0xc];
      puVar1[0xd] = (uint)bVar16 * (uint)(bVar20 >> 5 & 1) * iVar33 | (uint)!bVar16 * puVar1[0xd];
      puVar1[0xe] = (uint)bVar17 * (uint)(bVar20 >> 6 & 1) * iVar34 | (uint)!bVar17 * puVar1[0xe];
      puVar1[0xf] = (uint)(bVar20 >> 7) * (uint)(bVar20 >> 7) * iVar35 |
                    (uint)!(bool)(bVar20 >> 7) * puVar1[0xf];
    }
  }
  uVar47 = uVar47 + 1;
  if (uStack_40 <= uVar47) {
    return;
  }
  goto LAB_14098ac20;
LAB_14098a3da:
  uVar51 = uVar47;
  if (uStack_90 == 3) {
    uVar52 = param_5[1];
    if ((longlong)uVar52 < 2) {
      if ((longlong)uVar47 < 0) {
        if (uStack_a8 == 0) {
          uVar51 = -uVar47;
          if (uStack_b0 == 0) {
            uVar51 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar47) && (uStack_b0 == 0)) {
        uVar51 = -uVar47;
        if (uStack_a8 == 0) {
          uVar51 = 0;
        }
      }
    }
    else if (((longlong)uVar47 < 0) || ((longlong)uVar52 <= (longlong)uVar47)) {
      if ((longlong)uVar47 < 0) goto LAB_14098a700;
      while (uStack_b0 == 0) {
        for (uVar51 = (uVar52 - 1) * 2 - uVar51; (longlong)uVar51 < 0; uVar51 = -uVar51) {
LAB_14098a700:
          if (uStack_a8 != 0) goto LAB_14098a480;
        }
        if ((longlong)uVar51 < (longlong)uVar52) break;
      }
    }
  }
  goto LAB_14098a480;
}


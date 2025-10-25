
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409896e0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  uint *puVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [16];
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  auVar18 = _DAT_14308de00;
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_LAB_14308de80)[param_6])
              (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1409897ef;
    if ((param_7 & 0xf) == 6) {
      uVar11 = param_7 & 0x10;
      goto joined_r0x000140989a49;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1409897ef;
    }
  }
  else {
    if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_1409897ef;
    if ((param_7 & 0xf) == 6) {
      uVar11 = param_7 & 0x20;
joined_r0x000140989a49:
      if (uVar11 == 0) {
        uVar2 = *param_5;
        auVar19._0_4_ = (float)*param_8;
        auVar19._4_8_ = SUB128(ZEXT812(0),4);
        auVar19._12_4_ = 0;
        if ((longlong)uVar2 < 1) {
          return;
        }
        if ((longlong)uVar2 < 0x10) {
          uVar13 = 0;
        }
        else {
          if ((longlong)uVar2 < 0x26) {
            uVar14 = 0;
            uVar13 = uVar2 & 0xfffffffffffffff0;
          }
          else {
            uVar14 = param_4 & 0x3f;
            if ((param_4 & 3) == 0) {
              if ((uVar14 != 0) && (uVar14 = 0x40 - uVar14 >> 2, (longlong)uVar2 < (longlong)uVar14)
                 ) {
                uVar14 = uVar2;
              }
            }
            else {
              uVar14 = 0;
            }
            uVar13 = uVar2 - (uVar2 - uVar14 & 0xf);
            if (uVar14 != 0) {
              uVar15 = 0;
              auVar16 = vmovdqu32_avx512f(_DAT_14308dc80);
              auVar17 = vpbroadcastq_avx512f();
              do {
                uVar12 = vpcmpgtq_avx512f(auVar17,auVar16);
                auVar16 = vpaddq_avx512f(auVar16,auVar18);
                puVar1 = (uint *)(param_4 + uVar15 * 4);
                bVar3 = (bool)((byte)uVar12 & 1);
                bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
                bVar5 = (bool)((byte)(uVar12 >> 2) & 1);
                bVar6 = (bool)((byte)(uVar12 >> 3) & 1);
                bVar7 = (bool)((byte)(uVar12 >> 4) & 1);
                bVar8 = (bool)((byte)(uVar12 >> 5) & 1);
                bVar9 = (bool)((byte)(uVar12 >> 6) & 1);
                bVar10 = SUB81(uVar12 >> 7,0);
                *puVar1 = (uint)bVar3 * (int)auVar19._0_4_ | (uint)!bVar3 * *puVar1;
                puVar1[1] = (uint)bVar4 * (int)auVar19._0_4_ | (uint)!bVar4 * puVar1[1];
                puVar1[2] = (uint)bVar5 * (int)auVar19._0_4_ | (uint)!bVar5 * puVar1[2];
                puVar1[3] = (uint)bVar6 * (int)auVar19._0_4_ | (uint)!bVar6 * puVar1[3];
                puVar1[4] = (uint)bVar7 * (int)auVar19._0_4_ | (uint)!bVar7 * puVar1[4];
                puVar1[5] = (uint)bVar8 * (int)auVar19._0_4_ | (uint)!bVar8 * puVar1[5];
                puVar1[6] = (uint)bVar9 * (int)auVar19._0_4_ | (uint)!bVar9 * puVar1[6];
                puVar1[7] = (uint)bVar10 * (int)auVar19._0_4_ | (uint)!bVar10 * puVar1[7];
                uVar15 = uVar15 + 8;
              } while (uVar15 < uVar14);
              if (uVar2 == uVar14) {
                return;
              }
            }
          }
          if ((longlong)(uVar14 + 0x10) <= (longlong)uVar13) {
            auVar18 = vbroadcastss_avx512f(auVar19);
            do {
              *(undefined1 (*) [64])(param_4 + uVar14 * 4) = auVar18;
              uVar14 = uVar14 + 0x10;
            } while (uVar14 < uVar13);
          }
        }
        auVar18 = _DAT_14308de00;
        if (uVar2 < uVar13 + 1) {
          return;
        }
        uVar14 = 0;
        auVar16 = vmovdqu32_avx512f(_DAT_14308dc80);
        auVar17 = vpbroadcastq_avx512f();
        do {
          uVar15 = vpcmpgtq_avx512f(auVar17,auVar16);
          auVar16 = vpaddq_avx512f(auVar16,auVar18);
          puVar1 = (uint *)(param_4 + uVar13 * 4 + uVar14 * 4);
          bVar3 = (bool)((byte)uVar15 & 1);
          bVar4 = (bool)((byte)(uVar15 >> 1) & 1);
          bVar5 = (bool)((byte)(uVar15 >> 2) & 1);
          bVar6 = (bool)((byte)(uVar15 >> 3) & 1);
          bVar7 = (bool)((byte)(uVar15 >> 4) & 1);
          bVar8 = (bool)((byte)(uVar15 >> 5) & 1);
          bVar9 = (bool)((byte)(uVar15 >> 6) & 1);
          bVar10 = SUB81(uVar15 >> 7,0);
          *puVar1 = (uint)bVar3 * (int)auVar19._0_4_ | (uint)!bVar3 * *puVar1;
          puVar1[1] = (uint)bVar4 * (int)auVar19._0_4_ | (uint)!bVar4 * puVar1[1];
          puVar1[2] = (uint)bVar5 * (int)auVar19._0_4_ | (uint)!bVar5 * puVar1[2];
          puVar1[3] = (uint)bVar6 * (int)auVar19._0_4_ | (uint)!bVar6 * puVar1[3];
          puVar1[4] = (uint)bVar7 * (int)auVar19._0_4_ | (uint)!bVar7 * puVar1[4];
          puVar1[5] = (uint)bVar8 * (int)auVar19._0_4_ | (uint)!bVar8 * puVar1[5];
          puVar1[6] = (uint)bVar9 * (int)auVar19._0_4_ | (uint)!bVar9 * puVar1[6];
          puVar1[7] = (uint)bVar10 * (int)auVar19._0_4_ | (uint)!bVar10 * puVar1[7];
          uVar14 = uVar14 + 8;
        } while (uVar14 < uVar2 - uVar13);
        return;
      }
      goto LAB_1409897ef;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] - 1;
      }
      goto LAB_1409897ef;
    }
  }
  if ((param_7 & 0xf) == 3) {
    uVar2 = param_5[1];
    if ((longlong)uVar2 < 2) {
      if (param_3 < 0) {
        if ((param_7 & 0x10) == 0) {
          param_3 = -param_3;
          if ((param_7 & 0x20) == 0) {
            param_3 = 0;
          }
        }
      }
      else if ((0 < param_3) && ((param_7 & 0x20) == 0)) {
        param_3 = -param_3;
        if ((param_7 & 0x10) == 0) {
          param_3 = 0;
        }
      }
    }
    else {
      if (param_3 < 0) goto LAB_1409899c0;
      while (((longlong)uVar2 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (uVar2 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_1409899c0:
          if ((param_7 & 0x10) != 0) goto LAB_1409897ef;
        }
      }
    }
  }
LAB_1409897ef:
  uStack_38 = *param_5;
  uStack_30 = param_5[1];
  FUN_14098f520(uStack_38,param_2,param_3,param_4,&uStack_38,param_6,param_7,param_8,param_9,
                param_10,param_11);
  return;
}


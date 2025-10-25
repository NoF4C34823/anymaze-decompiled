
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409d79c0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
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
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  auVar18 = _DAT_14308e4c0;
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_LAB_14308e5c0)[param_6])
              (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1409d7acf;
    if ((param_7 & 0xf) == 6) {
      uVar11 = param_7 & 0x10;
      goto joined_r0x0001409d7d29;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1409d7acf;
    }
  }
  else {
    if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_1409d7acf;
    if ((param_7 & 0xf) == 6) {
      uVar11 = param_7 & 0x20;
joined_r0x0001409d7d29:
      if (uVar11 == 0) {
        uVar2 = *param_5;
        uVar11 = *param_8;
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
              auVar16 = vmovdqu32_avx512f(_DAT_14308e300);
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
                *puVar1 = bVar3 * uVar11 | (uint)!bVar3 * *puVar1;
                puVar1[1] = bVar4 * uVar11 | (uint)!bVar4 * puVar1[1];
                puVar1[2] = bVar5 * uVar11 | (uint)!bVar5 * puVar1[2];
                puVar1[3] = bVar6 * uVar11 | (uint)!bVar6 * puVar1[3];
                puVar1[4] = bVar7 * uVar11 | (uint)!bVar7 * puVar1[4];
                puVar1[5] = bVar8 * uVar11 | (uint)!bVar8 * puVar1[5];
                puVar1[6] = bVar9 * uVar11 | (uint)!bVar9 * puVar1[6];
                puVar1[7] = bVar10 * uVar11 | (uint)!bVar10 * puVar1[7];
                uVar15 = uVar15 + 8;
              } while (uVar15 < uVar14);
              if (uVar2 == uVar14) {
                return;
              }
            }
          }
          if ((longlong)(uVar14 + 0x10) <= (longlong)uVar13) {
            auVar18 = vbroadcastss_avx512f(ZEXT416(uVar11));
            do {
              *(undefined1 (*) [64])(param_4 + uVar14 * 4) = auVar18;
              uVar14 = uVar14 + 0x10;
            } while (uVar14 < uVar13);
          }
        }
        auVar18 = _DAT_14308e4c0;
        if (uVar2 < uVar13 + 1) {
          return;
        }
        uVar14 = 0;
        auVar16 = vmovdqu32_avx512f(_DAT_14308e300);
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
          *puVar1 = bVar3 * uVar11 | (uint)!bVar3 * *puVar1;
          puVar1[1] = bVar4 * uVar11 | (uint)!bVar4 * puVar1[1];
          puVar1[2] = bVar5 * uVar11 | (uint)!bVar5 * puVar1[2];
          puVar1[3] = bVar6 * uVar11 | (uint)!bVar6 * puVar1[3];
          puVar1[4] = bVar7 * uVar11 | (uint)!bVar7 * puVar1[4];
          puVar1[5] = bVar8 * uVar11 | (uint)!bVar8 * puVar1[5];
          puVar1[6] = bVar9 * uVar11 | (uint)!bVar9 * puVar1[6];
          puVar1[7] = bVar10 * uVar11 | (uint)!bVar10 * puVar1[7];
          uVar14 = uVar14 + 8;
        } while (uVar14 < uVar2 - uVar13);
        return;
      }
      goto LAB_1409d7acf;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] - 1;
      }
      goto LAB_1409d7acf;
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
      if (param_3 < 0) goto LAB_1409d7ca0;
      while (((longlong)uVar2 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (uVar2 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_1409d7ca0:
          if ((param_7 & 0x10) != 0) goto LAB_1409d7acf;
        }
      }
    }
  }
LAB_1409d7acf:
  uStack_38 = *param_5;
  uStack_30 = param_5[1];
  FUN_1409d9b40(uStack_38,param_2,param_3,param_4,&uStack_38,param_6,param_7,param_8,param_9,
                param_10,param_11);
  return;
}


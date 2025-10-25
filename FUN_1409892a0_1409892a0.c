
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1409892a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       ulonglong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                       undefined4 param_10,undefined8 param_11)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [16];
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  if ((param_7 & 0xf0) == 0xf0) {
    uVar6 = (*(code *)(&PTR_LAB_14308df60)[param_6])
                      (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return uVar6;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1409893af;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x10;
      goto joined_r0x00014098969b;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1409893af;
    }
  }
  else {
    if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_1409893af;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x20;
joined_r0x00014098969b:
      if (uVar2 == 0) {
        lVar7 = *param_5 * 3;
        if (lVar7 < 1) {
          return *param_5;
        }
        uVar9 = lVar7 + 2;
        uVar6 = (longlong)uVar9 / 3;
        if (6 < (longlong)uVar6) {
          lVar7 = (longlong)param_8 + (4 - param_4);
          if ((((longlong)(uVar6 * 0xc) <= lVar7) || (7 < -lVar7)) &&
             ((3 < param_4 - (longlong)param_8 ||
              ((longlong)(uVar6 * 0xc) <= -(param_4 - (longlong)param_8))))) {
            if ((longlong)uVar6 < 0x10) {
              uVar9 = 0;
            }
            else {
              uVar8 = 0;
              auVar11 = vbroadcastss_avx512f(ZEXT416(*param_8));
              uVar9 = uVar6 & 0xfffffffffffffff0;
              auVar12 = vbroadcastss_avx512f(ZEXT416(param_8[1]));
              auVar13 = vbroadcastss_avx512f(ZEXT416(param_8[2]));
              auVar14 = vmovdqu32_avx512f(_DAT_14308de40);
              lVar7 = 0;
              do {
                auVar15 = auVar14._0_16_;
                uVar3 = vpcmpeqb_avx512vl(auVar15,auVar15);
                uVar1 = param_4 + lVar7;
                uVar4 = vpcmpeqb_avx512vl(auVar15,auVar15);
                uVar5 = vpcmpeqb_avx512vl(auVar15,auVar15);
                vscatterdps_avx512f(ZEXT864(uVar1) + ZEXT864(8) + auVar14 * (undefined1  [64])0x4,
                                    uVar3,auVar13);
                vscatterdps_avx512f(ZEXT864(uVar1) + ZEXT864(4) + auVar14 * (undefined1  [64])0x4,
                                    uVar4,auVar12);
                vscatterdps_avx512f(ZEXT864(uVar1) + auVar14 * (undefined1  [64])0x4,uVar5,auVar11);
                uVar8 = uVar8 + 0x10;
                lVar7 = lVar7 + 0xc0;
              } while (uVar8 < uVar9);
            }
            if (uVar6 < uVar9 + 1) {
              return uVar9 + 1;
            }
            auVar11 = vpbroadcastq_avx512f();
            uVar6 = param_4 + uVar9 * 0xc;
            auVar12 = vbroadcastss_avx512f(ZEXT416(*param_8));
            auVar13 = vbroadcastss_avx512f(ZEXT416(param_8[1]));
            auVar14 = vbroadcastss_avx512f(ZEXT416(param_8[2]));
            uVar3 = vpcmpgtq_avx512f(auVar11,_DAT_14308dc80);
            uVar4 = vpcmpgtq_avx512f(auVar11,_DAT_14308dcc0);
            auVar11 = vmovdqu32_avx512f(_DAT_14308de40);
            uVar10 = CONCAT11((char)uVar4,(char)uVar3);
            vscatterdps_avx512f(ZEXT864(uVar6) + auVar11 * (undefined1  [64])0x4,(ulonglong)uVar10,
                                auVar12);
            vscatterdps_avx512f(ZEXT864(uVar6) + ZEXT864(4) + auVar11 * (undefined1  [64])0x4,
                                (ulonglong)uVar10,auVar13);
            vscatterdps_avx512f(ZEXT864(uVar6) + ZEXT864(8) + auVar11 * (undefined1  [64])0x4,
                                (ulonglong)uVar10,auVar14);
            return uVar9 * 3;
          }
        }
        uVar6 = 1;
        lVar7 = 0;
        uVar8 = 0;
        if (uVar9 / 6 != 0) {
          do {
            uVar6 = uVar8;
            uVar8 = uVar6 + 1;
            *(uint *)(lVar7 + param_4) = *param_8;
            *(uint *)(lVar7 + 4 + param_4) = param_8[1];
            *(uint *)(lVar7 + 8 + param_4) = param_8[2];
            *(uint *)(lVar7 + 0xc + param_4) = *param_8;
            *(uint *)(lVar7 + 0x10 + param_4) = param_8[1];
            *(uint *)(lVar7 + 0x14 + param_4) = param_8[2];
            lVar7 = lVar7 + 0x18;
          } while (uVar8 < uVar9 / 6);
          uVar6 = uVar6 + 2 + uVar8;
        }
        if (uVar9 / 3 <= uVar6 - 1) {
          return uVar6;
        }
        lVar7 = uVar6 * 3 + -3;
        uVar2 = *param_8;
        *(uint *)(param_4 + lVar7 * 4) = uVar2;
        *(uint *)(param_4 + 4 + lVar7 * 4) = param_8[1];
        *(uint *)(param_4 + 8 + lVar7 * 4) = param_8[2];
        return (ulonglong)uVar2;
      }
      goto LAB_1409893af;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] - 1;
      }
      goto LAB_1409893af;
    }
  }
  if ((param_7 & 0xf) == 3) {
    uVar6 = param_5[1];
    if ((longlong)uVar6 < 2) {
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
      if (param_3 < 0) goto LAB_140989620;
      while (((longlong)uVar6 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (uVar6 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_140989620:
          if ((param_7 & 0x10) != 0) goto LAB_1409893af;
        }
      }
    }
  }
LAB_1409893af:
  uStack_38 = *param_5;
  uStack_30 = param_5[1];
  uVar6 = FUN_14098d1a0(uStack_38,param_2,param_3,param_4,&uStack_38,param_6,param_7,param_8,param_9
                        ,param_10,param_11);
  return uVar6;
}


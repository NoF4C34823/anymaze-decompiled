
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1409b07e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       ulonglong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
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
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_ZMM16 [64];
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  if ((param_7 & 0xf0) == 0xf0) {
    uVar6 = (*(code *)(&PTR_LAB_14308e1e0)[param_6])
                      (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return uVar6;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1409b08ef;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x10;
      goto joined_r0x0001409b0afb;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1409b08ef;
    }
  }
  else {
    if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_1409b08ef;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x20;
joined_r0x0001409b0afb:
      if (uVar2 == 0) {
        auVar11 = vxorps_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
        auVar11 = vcvtsi2ss_avx512f(auVar11,(uint)*param_8);
        lVar7 = *param_5 * 3;
        auVar18._0_4_ = (float)param_8[1];
        auVar18._4_8_ = SUB128(ZEXT812(0),4);
        auVar18._12_4_ = 0;
        auVar17._0_4_ = (float)param_8[2];
        auVar17._4_8_ = SUB128(ZEXT812(0),4);
        auVar17._12_4_ = 0;
        if (lVar7 < 1) {
          return *param_5;
        }
        uVar6 = (lVar7 + 2) / 3;
        if ((longlong)uVar6 < 0x10) {
          uVar9 = 0;
        }
        else {
          uVar8 = 0;
          auVar12 = vbroadcastss_avx512f(auVar11);
          uVar9 = uVar6 & 0xfffffffffffffff0;
          auVar13 = vbroadcastss_avx512f(auVar18);
          auVar14 = vbroadcastss_avx512f(auVar17);
          auVar15 = vmovdqu32_avx512f(_DAT_14308e0c0);
          lVar7 = 0;
          do {
            auVar16 = auVar15._0_16_;
            uVar3 = vpcmpeqb_avx512vl(auVar16,auVar16);
            uVar1 = param_4 + lVar7;
            uVar4 = vpcmpeqb_avx512vl(auVar16,auVar16);
            uVar5 = vpcmpeqb_avx512vl(auVar16,auVar16);
            vscatterdps_avx512f(ZEXT864(uVar1) + ZEXT864(8) + auVar15 * (undefined1  [64])0x4,uVar3,
                                auVar14);
            vscatterdps_avx512f(ZEXT864(uVar1) + ZEXT864(4) + auVar15 * (undefined1  [64])0x4,uVar4,
                                auVar13);
            vscatterdps_avx512f(ZEXT864(uVar1) + auVar15 * (undefined1  [64])0x4,uVar5,auVar12);
            uVar8 = uVar8 + 0x10;
            lVar7 = lVar7 + 0xc0;
          } while (uVar8 < uVar9);
        }
        if (uVar6 < uVar9 + 1) {
          return uVar9 + 1;
        }
        auVar12 = vpbroadcastq_avx512f();
        uVar6 = param_4 + uVar9 * 0xc;
        auVar13 = vbroadcastss_avx512f(auVar11);
        auVar14 = vbroadcastss_avx512f(auVar18);
        auVar15 = vbroadcastss_avx512f(auVar17);
        uVar3 = vpcmpgtq_avx512f(auVar12,_DAT_14308dfc0);
        uVar4 = vpcmpgtq_avx512f(auVar12,_DAT_14308e000);
        auVar12 = vmovdqu32_avx512f(_DAT_14308e0c0);
        uVar10 = CONCAT11((char)uVar4,(char)uVar3);
        vscatterdps_avx512f(ZEXT864(uVar6) + auVar12 * (undefined1  [64])0x4,(ulonglong)uVar10,
                            auVar13);
        vscatterdps_avx512f(ZEXT864(uVar6) + ZEXT864(4) + auVar12 * (undefined1  [64])0x4,
                            (ulonglong)uVar10,auVar14);
        vscatterdps_avx512f(ZEXT864(uVar6) + ZEXT864(8) + auVar12 * (undefined1  [64])0x4,
                            (ulonglong)uVar10,auVar15);
        return uVar9 * 3;
      }
      goto LAB_1409b08ef;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] - 1;
      }
      goto LAB_1409b08ef;
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
      if (param_3 < 0) goto LAB_1409b0a80;
      while (((longlong)uVar6 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (uVar6 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_1409b0a80:
          if ((param_7 & 0x10) != 0) goto LAB_1409b08ef;
        }
      }
    }
  }
LAB_1409b08ef:
  uStack_38 = *param_5;
  uStack_30 = param_5[1];
  uVar6 = FUN_1409b8640(uStack_38,param_2,param_3,param_4,&uStack_38,param_6,param_7,param_8,param_9
                        ,param_10,param_11);
  return uVar6;
}


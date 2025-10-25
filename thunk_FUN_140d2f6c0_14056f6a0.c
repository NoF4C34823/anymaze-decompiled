
void thunk_FUN_140d2f6c0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [32],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  longlong lVar5;
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  longlong lVar8;
  undefined1 in_ZMM0 [64];
  undefined1 auVar9 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 in_ZMM4 [64];
  
  lVar5 = 0;
  if (0 < (longlong)(param_4 & 0xffffffffffffffc0)) {
    auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
    in_ZMM0 = ZEXT3264(auVar3);
    do {
      lVar7 = 0;
      auVar11 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      in_ZMM4 = ZEXT3264(auVar11);
      in_ZMM1 = ZEXT3264(auVar3);
      pauVar6 = param_1;
      auVar11 = auVar3;
      auVar10 = auVar3;
      if (0 < param_5) {
        do {
          lVar7 = lVar7 + 1;
          auVar4 = vpminuw_avx2(in_ZMM4._0_32_,*pauVar6);
          in_ZMM4 = ZEXT3264(auVar4);
          auVar11 = vpminuw_avx2(auVar11,pauVar6[1]);
          auVar10 = vpminuw_avx2(auVar10,pauVar6[2]);
          auVar4 = vpminuw_avx2(in_ZMM1._0_32_,pauVar6[3]);
          in_ZMM1 = ZEXT3264(auVar4);
          pauVar6 = (undefined1 (*) [32])(*pauVar6 + param_2 * 2);
        } while (lVar7 < param_5);
      }
      lVar5 = lVar5 + 0x40;
      param_1 = param_1 + 4;
      *param_3 = in_ZMM4._0_32_;
      param_3[1] = auVar11;
      param_3[2] = auVar10;
      param_3[3] = in_ZMM1._0_32_;
      param_3 = param_3 + 4;
    } while (lVar5 < (longlong)(param_4 & 0xffffffffffffffc0));
  }
  if (lVar5 < (longlong)(param_4 & 0xffffffffffffffe0)) {
    auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
    in_ZMM0 = ZEXT3264(auVar3);
    do {
      lVar7 = 0;
      auVar3 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
      in_ZMM1 = ZEXT3264(auVar3);
      auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar3);
      pauVar6 = param_1;
      if (0 < param_5) {
        do {
          lVar7 = lVar7 + 1;
          auVar3 = vpminuw_avx2(in_ZMM1._0_32_,*pauVar6);
          in_ZMM1 = ZEXT3264(auVar3);
          auVar3 = vpminuw_avx2(in_ZMM0._0_32_,pauVar6[1]);
          in_ZMM0 = ZEXT3264(auVar3);
          pauVar6 = (undefined1 (*) [32])(*pauVar6 + param_2 * 2);
        } while (lVar7 < param_5);
      }
      lVar5 = lVar5 + 0x20;
      param_1 = param_1 + 2;
      *param_3 = in_ZMM1._0_32_;
      param_3[1] = in_ZMM0._0_32_;
      param_3 = param_3 + 2;
    } while (lVar5 < (longlong)(param_4 & 0xffffffffffffffe0));
  }
  for (; lVar5 < (longlong)(param_4 & 0xfffffffffffffff0); lVar5 = lVar5 + 0x10) {
    lVar8 = 0;
    auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
    in_ZMM0 = ZEXT3264(auVar3);
    lVar7 = 0;
    if (0 < param_5) {
      do {
        lVar8 = lVar8 + 1;
        auVar3 = vpminuw_avx2(in_ZMM0._0_32_,*(undefined1 (*) [32])(*param_1 + lVar7 * 2));
        in_ZMM0 = ZEXT3264(auVar3);
        lVar7 = lVar7 + param_2;
      } while (lVar8 < param_5);
    }
    param_1 = param_1 + 1;
    *param_3 = in_ZMM0._0_32_;
    param_3 = param_3 + 1;
  }
  for (; lVar5 < (longlong)(param_4 & 0xfffffffffffffff8); lVar5 = lVar5 + 8) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_5) {
      do {
        lVar8 = lVar8 + 1;
        auVar9 = vpminuw_avx(in_ZMM0._0_16_,*(undefined1 (*) [16])(*param_1 + lVar7 * 2));
        in_ZMM0 = ZEXT1664(auVar9);
        lVar7 = lVar7 + param_2;
      } while (lVar8 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    *(undefined1 (*) [16])*param_3 = in_ZMM0._0_16_;
    param_3 = (undefined1 (*) [32])(*param_3 + 0x10);
  }
  while (lVar5 < (longlong)(param_4 & 0xfffffffffffffffc)) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_5) {
      do {
        lVar8 = lVar8 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar7);
        in_ZMM1 = ZEXT864(*puVar1);
        lVar7 = lVar7 + param_2 * 2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *puVar1;
        auVar9 = vpminuw_avx(in_ZMM0._0_16_,auVar9);
        in_ZMM0 = ZEXT1664(auVar9);
      } while (lVar8 < param_5);
    }
    lVar5 = lVar5 + 4;
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    uVar2 = vpextrq_avx(in_ZMM0._0_16_,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [32])(*param_3 + 8);
  }
  for (; lVar5 < (longlong)(param_4 & 0xfffffffffffffffe); lVar5 = lVar5 + 2) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_5) {
      do {
        auVar9 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar7 * 2),0);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + param_2;
        auVar9 = vpminuw_avx(in_ZMM1._0_16_,auVar9);
        in_ZMM1 = ZEXT1664(auVar9);
      } while (lVar8 < param_5);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_3 = in_ZMM1._0_4_;
    param_3 = (undefined1 (*) [32])(*param_3 + 4);
  }
  while (lVar5 < (longlong)param_4) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_5) {
      do {
        lVar8 = lVar8 + 1;
        auVar9 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar7 * 2),0);
        lVar7 = lVar7 + param_2;
        auVar9 = vpminuw_avx(in_ZMM1._0_16_,auVar9);
        in_ZMM1 = ZEXT1664(auVar9);
      } while (lVar8 < param_5);
    }
    lVar5 = lVar5 + 1;
    param_1 = (undefined1 (*) [32])(*param_1 + 2);
    vpextrw_avx(in_ZMM1._0_16_,0);
  }
  return;
}


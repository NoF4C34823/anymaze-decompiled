
void thunk_FUN_140d23560(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  longlong lVar7;
  undefined1 in_ZMM0 [64];
  undefined1 auVar8 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_ZMM4 [64];
  
  lVar4 = 0;
  if (0 < (longlong)(param_4 & 0xffffffffffffffe0)) {
    auVar8 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar8);
    do {
      auVar10 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      in_ZMM4 = ZEXT1664(auVar10);
      in_ZMM1 = ZEXT1664(auVar8);
      lVar6 = 0;
      pauVar5 = param_1;
      auVar10 = auVar8;
      auVar9 = auVar8;
      if (0 < param_5) {
        do {
          lVar6 = lVar6 + 1;
          auVar3 = vpminuw_avx(in_ZMM4._0_16_,*pauVar5);
          in_ZMM4 = ZEXT1664(auVar3);
          auVar10 = vpminuw_avx(auVar10,pauVar5[1]);
          auVar9 = vpminuw_avx(auVar9,pauVar5[2]);
          auVar3 = vpminuw_avx(in_ZMM1._0_16_,pauVar5[3]);
          in_ZMM1 = ZEXT1664(auVar3);
          pauVar5 = (undefined1 (*) [16])(*pauVar5 + param_2 * 2);
        } while (lVar6 < param_5);
      }
      lVar4 = lVar4 + 0x20;
      param_1 = param_1 + 4;
      *param_3 = in_ZMM4._0_16_;
      param_3[1] = auVar10;
      param_3[2] = auVar9;
      param_3[3] = in_ZMM1._0_16_;
      param_3 = param_3 + 4;
    } while (lVar4 < (longlong)(param_4 & 0xffffffffffffffe0));
  }
  for (; lVar4 < (longlong)(param_4 & 0xfffffffffffffff8); lVar4 = lVar4 + 8) {
    lVar7 = 0;
    auVar8 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar8);
    lVar6 = 0;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        auVar8 = vpminuw_avx(in_ZMM0._0_16_,*(undefined1 (*) [16])(*param_1 + lVar6 * 2));
        in_ZMM0 = ZEXT1664(auVar8);
        lVar6 = lVar6 + param_2;
      } while (lVar7 < param_5);
    }
    param_1 = param_1 + 1;
    *param_3 = in_ZMM0._0_16_;
    param_3 = param_3 + 1;
  }
  while (lVar4 < (longlong)(param_4 & 0xfffffffffffffffc)) {
    lVar7 = 0;
    auVar8 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar8);
    lVar6 = 0;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar6);
        in_ZMM1 = ZEXT864(*puVar1);
        lVar6 = lVar6 + param_2 * 2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar1;
        auVar8 = vpminuw_avx(in_ZMM0._0_16_,auVar8);
        in_ZMM0 = ZEXT1664(auVar8);
      } while (lVar7 < param_5);
    }
    lVar4 = lVar4 + 4;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(in_ZMM0._0_16_,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
  }
  for (; lVar4 < (longlong)(param_4 & 0xfffffffffffffffe); lVar4 = lVar4 + 2) {
    lVar7 = 0;
    auVar8 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar8);
    lVar6 = 0;
    if (0 < param_5) {
      do {
        auVar8 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar6 * 2),0);
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + param_2;
        auVar8 = vpminuw_avx(in_ZMM1._0_16_,auVar8);
        in_ZMM1 = ZEXT1664(auVar8);
      } while (lVar7 < param_5);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_3 = in_ZMM1._0_4_;
    param_3 = (undefined1 (*) [16])(*param_3 + 4);
  }
  while (lVar4 < (longlong)param_4) {
    lVar7 = 0;
    auVar8 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar8);
    lVar6 = 0;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        auVar8 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar6 * 2),0);
        lVar6 = lVar6 + param_2;
        auVar8 = vpminuw_avx(in_ZMM1._0_16_,auVar8);
        in_ZMM1 = ZEXT1664(auVar8);
      } while (lVar7 < param_5);
    }
    lVar4 = lVar4 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(in_ZMM1._0_16_,0);
  }
  return;
}


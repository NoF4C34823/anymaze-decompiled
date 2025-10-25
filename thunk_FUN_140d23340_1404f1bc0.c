
void thunk_FUN_140d23340(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
                        longlong param_4,int param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  longlong lVar8;
  undefined1 in_ZMM0 [64];
  undefined1 auVar9 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_ZMM4 [64];
  
  lVar4 = 0;
  lVar5 = (longlong)param_5;
  if (0 < (longlong)(param_3 & 0xffffffffffffffe0)) {
    auVar9 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar9);
    do {
      auVar11 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      in_ZMM4 = ZEXT1664(auVar11);
      in_ZMM1 = ZEXT1664(auVar9);
      lVar7 = 0;
      pauVar6 = param_1;
      auVar11 = auVar9;
      auVar10 = auVar9;
      if (0 < param_4) {
        do {
          lVar7 = lVar7 + 1;
          auVar3 = vpminuw_avx(in_ZMM4._0_16_,*pauVar6);
          in_ZMM4 = ZEXT1664(auVar3);
          auVar11 = vpminuw_avx(auVar11,pauVar6[1]);
          auVar10 = vpminuw_avx(auVar10,pauVar6[2]);
          auVar3 = vpminuw_avx(in_ZMM1._0_16_,pauVar6[3]);
          in_ZMM1 = ZEXT1664(auVar3);
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + lVar5 * 2);
        } while (lVar7 < param_4);
      }
      lVar4 = lVar4 + 0x20;
      param_1 = param_1 + 4;
      *param_2 = in_ZMM4._0_16_;
      param_2[1] = auVar11;
      param_2[2] = auVar10;
      param_2[3] = in_ZMM1._0_16_;
      param_2 = param_2 + 4;
    } while (lVar4 < (longlong)(param_3 & 0xffffffffffffffe0));
  }
  for (; lVar4 < (longlong)(param_3 & 0xfffffffffffffff8); lVar4 = lVar4 + 8) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        auVar9 = vpminuw_avx(in_ZMM0._0_16_,*(undefined1 (*) [16])(*param_1 + lVar7 * 2));
        in_ZMM0 = ZEXT1664(auVar9);
        lVar7 = lVar7 + lVar5;
      } while (lVar8 < param_4);
    }
    param_1 = param_1 + 1;
    *param_2 = in_ZMM0._0_16_;
    param_2 = param_2 + 1;
  }
  while (lVar4 < (longlong)(param_3 & 0xfffffffffffffffc)) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar7);
        in_ZMM1 = ZEXT864(*puVar1);
        lVar7 = lVar7 + lVar5 * 2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *puVar1;
        auVar9 = vpminuw_avx(in_ZMM0._0_16_,auVar9);
        in_ZMM0 = ZEXT1664(auVar9);
      } while (lVar8 < param_4);
    }
    lVar4 = lVar4 + 4;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(in_ZMM0._0_16_,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
  }
  for (; lVar4 < (longlong)(param_3 & 0xfffffffffffffffe); lVar4 = lVar4 + 2) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_4) {
      do {
        auVar9 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar7 * 2),0);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + lVar5;
        auVar9 = vpminuw_avx(in_ZMM1._0_16_,auVar9);
        in_ZMM1 = ZEXT1664(auVar9);
      } while (lVar8 < param_4);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_2 = in_ZMM1._0_4_;
    param_2 = (undefined1 (*) [16])(*param_2 + 4);
  }
  while (lVar4 < (longlong)param_3) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_4) {
      do {
        lVar8 = lVar8 + 1;
        auVar9 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar7 * 2),0);
        lVar7 = lVar7 + lVar5;
        auVar9 = vpminuw_avx(in_ZMM1._0_16_,auVar9);
        in_ZMM1 = ZEXT1664(auVar9);
      } while (lVar8 < param_4);
    }
    lVar4 = lVar4 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(in_ZMM1._0_16_,0);
  }
  return;
}



void thunk_FUN_140d2f200(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3,
                        longlong param_4,int param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [32];
  longlong lVar10;
  longlong lVar11;
  undefined1 in_ZMM0 [64];
  undefined1 auVar12 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar14 [32];
  undefined1 in_ZMM4 [64];
  
  uVar8 = param_3 & 0xffffffffffffffc0;
  lVar6 = (longlong)param_5;
  lVar7 = 0;
  if (param_4 == 3) {
    if (0 < (longlong)uVar8) {
      auVar3 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      in_ZMM4 = ZEXT3264(auVar3);
      do {
        auVar14 = vpminuw_avx2(auVar3,*param_1);
        lVar7 = lVar7 + 0x40;
        auVar13 = vpminuw_avx2(auVar3,param_1[1]);
        auVar4 = vpminuw_avx2(auVar3,param_1[2]);
        auVar5 = vpminuw_avx2(auVar3,param_1[3]);
        auVar14 = vpminuw_avx2(auVar14,*(undefined1 (*) [32])(*param_1 + lVar6 * 2));
        auVar13 = vpminuw_avx2(auVar13,*(undefined1 (*) [32])(param_1[1] + lVar6 * 2));
        auVar4 = vpminuw_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar6 * 2));
        auVar5 = vpminuw_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar6 * 2));
        auVar13 = vpminuw_avx2(auVar13,*(undefined1 (*) [32])(param_1[1] + lVar6 * 4));
        auVar4 = vpminuw_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar6 * 4));
        in_ZMM1 = ZEXT3264(auVar4);
        auVar14 = vpminuw_avx2(auVar14,*(undefined1 (*) [32])(*param_1 + lVar6 * 4));
        in_ZMM0 = ZEXT3264(auVar14);
        auVar5 = vpminuw_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar6 * 4));
        param_1 = param_1 + 4;
        *param_2 = auVar14;
        param_2[1] = auVar13;
        param_2[2] = auVar4;
        param_2[3] = auVar5;
        param_2 = param_2 + 4;
      } while (lVar7 < (longlong)uVar8);
    }
  }
  else if ((param_4 == 5) && (0 < (longlong)uVar8)) {
    auVar3 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
    do {
      auVar14 = vpminuw_avx2(auVar3,*param_1);
      lVar7 = lVar7 + 0x40;
      auVar13 = vpminuw_avx2(auVar3,param_1[1]);
      auVar4 = vpminuw_avx2(auVar3,param_1[2]);
      auVar5 = vpminuw_avx2(auVar3,param_1[3]);
      auVar14 = vpminuw_avx2(auVar14,*(undefined1 (*) [32])(*param_1 + lVar6 * 2));
      auVar13 = vpminuw_avx2(auVar13,*(undefined1 (*) [32])(param_1[1] + lVar6 * 2));
      auVar4 = vpminuw_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar6 * 2));
      auVar5 = vpminuw_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar6 * 2));
      auVar14 = vpminuw_avx2(auVar14,*(undefined1 (*) [32])(*param_1 + lVar6 * 4));
      auVar13 = vpminuw_avx2(auVar13,*(undefined1 (*) [32])(param_1[1] + lVar6 * 4));
      auVar4 = vpminuw_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar6 * 4));
      auVar5 = vpminuw_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar6 * 4));
      auVar14 = vpminuw_avx2(auVar14,*(undefined1 (*) [32])(*param_1 + lVar6 * 6));
      auVar13 = vpminuw_avx2(auVar13,*(undefined1 (*) [32])(param_1[1] + lVar6 * 6));
      auVar4 = vpminuw_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar6 * 6));
      auVar5 = vpminuw_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar6 * 6));
      auVar14 = vpminuw_avx2(auVar14,*(undefined1 (*) [32])(*param_1 + lVar6 * 8));
      in_ZMM4 = ZEXT3264(auVar14);
      auVar4 = vpminuw_avx2(auVar4,*(undefined1 (*) [32])(param_1[2] + lVar6 * 8));
      in_ZMM0 = ZEXT3264(auVar4);
      auVar13 = vpminuw_avx2(auVar13,*(undefined1 (*) [32])(param_1[1] + lVar6 * 8));
      auVar5 = vpminuw_avx2(auVar5,*(undefined1 (*) [32])(param_1[3] + lVar6 * 8));
      in_ZMM1 = ZEXT3264(auVar5);
      param_1 = param_1 + 4;
      *param_2 = auVar14;
      param_2[1] = auVar13;
      param_2[2] = auVar4;
      param_2[3] = auVar5;
      param_2 = param_2 + 4;
    } while (lVar7 < (longlong)uVar8);
  }
  if (lVar7 < (longlong)uVar8) {
    auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
    in_ZMM0 = ZEXT3264(auVar3);
    do {
      lVar10 = 0;
      auVar14 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      in_ZMM4 = ZEXT3264(auVar14);
      in_ZMM1 = ZEXT3264(auVar3);
      pauVar9 = param_1;
      auVar14 = auVar3;
      auVar13 = auVar3;
      if (0 < param_4) {
        do {
          lVar10 = lVar10 + 1;
          auVar4 = vpminuw_avx2(in_ZMM4._0_32_,*pauVar9);
          in_ZMM4 = ZEXT3264(auVar4);
          auVar14 = vpminuw_avx2(auVar14,pauVar9[1]);
          auVar13 = vpminuw_avx2(auVar13,pauVar9[2]);
          auVar4 = vpminuw_avx2(in_ZMM1._0_32_,pauVar9[3]);
          in_ZMM1 = ZEXT3264(auVar4);
          pauVar9 = (undefined1 (*) [32])(*pauVar9 + lVar6 * 2);
        } while (lVar10 < param_4);
      }
      lVar7 = lVar7 + 0x40;
      param_1 = param_1 + 4;
      *param_2 = in_ZMM4._0_32_;
      param_2[1] = auVar14;
      param_2[2] = auVar13;
      param_2[3] = in_ZMM1._0_32_;
      param_2 = param_2 + 4;
    } while (lVar7 < (longlong)uVar8);
  }
  if (lVar7 < (longlong)(param_3 & 0xffffffffffffffe0)) {
    auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
    in_ZMM0 = ZEXT3264(auVar3);
    do {
      lVar10 = 0;
      auVar3 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
      in_ZMM1 = ZEXT3264(auVar3);
      auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
      in_ZMM0 = ZEXT3264(auVar3);
      pauVar9 = param_1;
      if (0 < param_4) {
        do {
          lVar10 = lVar10 + 1;
          auVar3 = vpminuw_avx2(in_ZMM1._0_32_,*pauVar9);
          in_ZMM1 = ZEXT3264(auVar3);
          auVar3 = vpminuw_avx2(in_ZMM0._0_32_,pauVar9[1]);
          in_ZMM0 = ZEXT3264(auVar3);
          pauVar9 = (undefined1 (*) [32])(*pauVar9 + lVar6 * 2);
        } while (lVar10 < param_4);
      }
      lVar7 = lVar7 + 0x20;
      param_1 = param_1 + 2;
      *param_2 = in_ZMM1._0_32_;
      param_2[1] = in_ZMM0._0_32_;
      param_2 = param_2 + 2;
    } while (lVar7 < (longlong)(param_3 & 0xffffffffffffffe0));
  }
  for (; lVar7 < (longlong)(param_3 & 0xfffffffffffffff0); lVar7 = lVar7 + 0x10) {
    lVar11 = 0;
    auVar3 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
    in_ZMM0 = ZEXT3264(auVar3);
    lVar10 = 0;
    if (0 < param_4) {
      do {
        lVar11 = lVar11 + 1;
        auVar3 = vpminuw_avx2(in_ZMM0._0_32_,*(undefined1 (*) [32])(*param_1 + lVar10 * 2));
        in_ZMM0 = ZEXT3264(auVar3);
        lVar10 = lVar10 + lVar6;
      } while (lVar11 < param_4);
    }
    param_1 = param_1 + 1;
    *param_2 = in_ZMM0._0_32_;
    param_2 = param_2 + 1;
  }
  for (; lVar7 < (longlong)(param_3 & 0xfffffffffffffff8); lVar7 = lVar7 + 8) {
    lVar11 = 0;
    auVar12 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar12);
    lVar10 = 0;
    if (0 < param_4) {
      do {
        lVar11 = lVar11 + 1;
        auVar12 = vpminuw_avx(in_ZMM0._0_16_,*(undefined1 (*) [16])(*param_1 + lVar10 * 2));
        in_ZMM0 = ZEXT1664(auVar12);
        lVar10 = lVar10 + lVar6;
      } while (lVar11 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    *(undefined1 (*) [16])*param_2 = in_ZMM0._0_16_;
    param_2 = (undefined1 (*) [32])(*param_2 + 0x10);
  }
  while (lVar7 < (longlong)(param_3 & 0xfffffffffffffffc)) {
    lVar11 = 0;
    auVar12 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar12);
    lVar10 = 0;
    if (0 < param_4) {
      do {
        lVar11 = lVar11 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar10);
        in_ZMM1 = ZEXT864(*puVar1);
        lVar10 = lVar10 + lVar6 * 2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *puVar1;
        auVar12 = vpminuw_avx(in_ZMM0._0_16_,auVar12);
        in_ZMM0 = ZEXT1664(auVar12);
      } while (lVar11 < param_4);
    }
    lVar7 = lVar7 + 4;
    param_1 = (undefined1 (*) [32])(*param_1 + 8);
    uVar2 = vpextrq_avx(in_ZMM0._0_16_,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [32])(*param_2 + 8);
  }
  for (; lVar7 < (longlong)(param_3 & 0xfffffffffffffffe); lVar7 = lVar7 + 2) {
    lVar11 = 0;
    auVar12 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar12);
    lVar10 = 0;
    if (0 < param_4) {
      do {
        auVar12 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar10 * 2),0);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + lVar6;
        auVar12 = vpminuw_avx(in_ZMM1._0_16_,auVar12);
        in_ZMM1 = ZEXT1664(auVar12);
      } while (lVar11 < param_4);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + 4);
    *(int *)*param_2 = in_ZMM1._0_4_;
    param_2 = (undefined1 (*) [32])(*param_2 + 4);
  }
  while (lVar7 < (longlong)param_3) {
    lVar11 = 0;
    auVar12 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar12);
    lVar10 = 0;
    if (0 < param_4) {
      do {
        lVar11 = lVar11 + 1;
        auVar12 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar10 * 2),0);
        lVar10 = lVar10 + lVar6;
        auVar12 = vpminuw_avx(in_ZMM1._0_16_,auVar12);
        in_ZMM1 = ZEXT1664(auVar12);
      } while (lVar11 < param_4);
    }
    lVar7 = lVar7 + 1;
    param_1 = (undefined1 (*) [32])(*param_1 + 2);
    vpextrw_avx(in_ZMM1._0_16_,0);
  }
  return;
}


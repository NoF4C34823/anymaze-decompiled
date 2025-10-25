
void thunk_FUN_140d1f220(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                        ulonglong param_4,longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  longlong lVar8;
  undefined1 in_ZMM0 [64];
  undefined1 auVar9 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_ZMM4 [64];
  
  uVar5 = param_4 & 0xffffffffffffffc0;
  lVar4 = 0;
  if (param_5 == 3) {
    if (0 < (longlong)uVar5) {
      do {
        auVar9 = vpminub_avx(*param_1,*(undefined1 (*) [16])(*param_1 + param_2));
        lVar4 = lVar4 + 0x40;
        auVar11 = vpminub_avx(param_1[1],*(undefined1 (*) [16])(param_1[1] + param_2));
        auVar10 = vpminub_avx(param_1[2],*(undefined1 (*) [16])(param_1[2] + param_2));
        auVar3 = vpminub_avx(param_1[3],*(undefined1 (*) [16])(param_1[3] + param_2));
        in_ZMM1 = ZEXT1664(auVar3);
        auVar9 = vpminub_avx(auVar9,*(undefined1 (*) [16])(*param_1 + param_2 * 2));
        in_ZMM0 = ZEXT1664(auVar9);
        auVar11 = vpminub_avx(auVar11,*(undefined1 (*) [16])(param_1[1] + param_2 * 2));
        auVar10 = vpminub_avx(auVar10,*(undefined1 (*) [16])(param_1[2] + param_2 * 2));
        auVar3 = vpminub_avx(auVar3,*(undefined1 (*) [16])(param_1[3] + param_2 * 2));
        in_ZMM4 = ZEXT1664(auVar3);
        param_1 = param_1 + 4;
        *param_3 = auVar9;
        param_3[1] = auVar11;
        param_3[2] = auVar10;
        param_3[3] = auVar3;
        param_3 = param_3 + 4;
      } while (lVar4 < (longlong)uVar5);
    }
  }
  else if ((param_5 == 5) && (0 < (longlong)uVar5)) {
    lVar7 = param_2 * 3;
    do {
      auVar9 = vpminub_avx(*param_1,*(undefined1 (*) [16])(*param_1 + param_2));
      lVar4 = lVar4 + 0x40;
      auVar11 = vpminub_avx(param_1[1],*(undefined1 (*) [16])(param_1[1] + param_2));
      auVar10 = vpminub_avx(param_1[2],*(undefined1 (*) [16])(param_1[2] + param_2));
      auVar3 = vpminub_avx(param_1[3],*(undefined1 (*) [16])(param_1[3] + param_2));
      auVar9 = vpminub_avx(auVar9,*(undefined1 (*) [16])(*param_1 + param_2 * 2));
      auVar11 = vpminub_avx(auVar11,*(undefined1 (*) [16])(param_1[1] + param_2 * 2));
      auVar10 = vpminub_avx(auVar10,*(undefined1 (*) [16])(param_1[2] + param_2 * 2));
      auVar3 = vpminub_avx(auVar3,*(undefined1 (*) [16])(param_1[3] + param_2 * 2));
      auVar9 = vpminub_avx(auVar9,*(undefined1 (*) [16])(*param_1 + lVar7));
      auVar11 = vpminub_avx(auVar11,*(undefined1 (*) [16])(param_1[1] + lVar7));
      auVar10 = vpminub_avx(auVar10,*(undefined1 (*) [16])(param_1[2] + lVar7));
      auVar3 = vpminub_avx(auVar3,*(undefined1 (*) [16])(param_1[3] + lVar7));
      auVar9 = vpminub_avx(auVar9,*(undefined1 (*) [16])(*param_1 + param_2 * 4));
      in_ZMM4 = ZEXT1664(auVar9);
      auVar11 = vpminub_avx(auVar11,*(undefined1 (*) [16])(param_1[1] + param_2 * 4));
      auVar10 = vpminub_avx(auVar10,*(undefined1 (*) [16])(param_1[2] + param_2 * 4));
      in_ZMM0 = ZEXT1664(auVar10);
      auVar3 = vpminub_avx(auVar3,*(undefined1 (*) [16])(param_1[3] + param_2 * 4));
      in_ZMM1 = ZEXT1664(auVar3);
      param_1 = param_1 + 4;
      *param_3 = auVar9;
      param_3[1] = auVar11;
      param_3[2] = auVar10;
      param_3[3] = auVar3;
      param_3 = param_3 + 4;
    } while (lVar4 < (longlong)uVar5);
  }
  if (lVar4 < (longlong)uVar5) {
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
      if (0 < param_5) {
        do {
          lVar7 = lVar7 + 1;
          auVar3 = vpminub_avx(in_ZMM4._0_16_,*pauVar6);
          in_ZMM4 = ZEXT1664(auVar3);
          auVar11 = vpminub_avx(auVar11,pauVar6[1]);
          auVar10 = vpminub_avx(auVar10,pauVar6[2]);
          auVar3 = vpminub_avx(in_ZMM1._0_16_,pauVar6[3]);
          in_ZMM1 = ZEXT1664(auVar3);
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + param_2);
        } while (lVar7 < param_5);
      }
      lVar4 = lVar4 + 0x40;
      param_1 = param_1 + 4;
      *param_3 = in_ZMM4._0_16_;
      param_3[1] = auVar11;
      param_3[2] = auVar10;
      param_3[3] = in_ZMM1._0_16_;
      param_3 = param_3 + 4;
    } while (lVar4 < (longlong)uVar5);
  }
  for (; lVar4 < (longlong)(param_4 & 0xffffffffffffffe0); lVar4 = lVar4 + 0x20) {
    lVar7 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar9);
    auVar9 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar9);
    pauVar6 = param_1;
    if (0 < param_5) {
      do {
        lVar7 = lVar7 + 1;
        auVar9 = vpminub_avx(in_ZMM1._0_16_,*pauVar6);
        in_ZMM1 = ZEXT1664(auVar9);
        auVar9 = vpminub_avx(in_ZMM0._0_16_,pauVar6[1]);
        in_ZMM0 = ZEXT1664(auVar9);
        pauVar6 = (undefined1 (*) [16])(*pauVar6 + param_2);
      } while (lVar7 < param_5);
    }
    param_1 = param_1 + 2;
    *param_3 = in_ZMM1._0_16_;
    param_3[1] = in_ZMM0._0_16_;
    param_3 = param_3 + 2;
  }
  for (; lVar4 < (longlong)(param_4 & 0xfffffffffffffff0); lVar4 = lVar4 + 0x10) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_5) {
      do {
        lVar8 = lVar8 + 1;
        auVar9 = vpminub_avx(in_ZMM0._0_16_,*(undefined1 (*) [16])(*param_1 + lVar7));
        in_ZMM0 = ZEXT1664(auVar9);
        lVar7 = lVar7 + param_2;
      } while (lVar8 < param_5);
    }
    param_1 = param_1 + 1;
    *param_3 = in_ZMM0._0_16_;
    param_3 = param_3 + 1;
  }
  while (lVar4 < (longlong)(param_4 & 0xfffffffffffffff8)) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_5) {
      do {
        lVar8 = lVar8 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar7);
        in_ZMM1 = ZEXT864(*puVar1);
        lVar7 = lVar7 + param_2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *puVar1;
        auVar9 = vpminub_avx(in_ZMM0._0_16_,auVar9);
        in_ZMM0 = ZEXT1664(auVar9);
      } while (lVar8 < param_5);
    }
    lVar4 = lVar4 + 8;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(in_ZMM0._0_16_,0);
    *(undefined8 *)*param_3 = uVar2;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
  }
  for (; lVar4 < (longlong)(param_4 & 0xfffffffffffffffc); lVar4 = lVar4 + 4) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_5) {
      do {
        auVar9 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar7),0);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + param_2;
        auVar9 = vpminub_avx(in_ZMM1._0_16_,auVar9);
        in_ZMM1 = ZEXT1664(auVar9);
      } while (lVar8 < param_5);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_3 = in_ZMM1._0_4_;
    param_3 = (undefined1 (*) [16])(*param_3 + 4);
  }
  while (lVar4 < (longlong)(param_4 & 0xfffffffffffffffe)) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_5) {
      do {
        lVar8 = lVar8 + 1;
        auVar9 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar7),0);
        lVar7 = lVar7 + param_2;
        auVar9 = vpminub_avx(in_ZMM1._0_16_,auVar9);
        in_ZMM1 = ZEXT1664(auVar9);
      } while (lVar8 < param_5);
    }
    lVar4 = lVar4 + 2;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(in_ZMM1._0_16_,0);
    param_3 = (undefined1 (*) [16])(*param_3 + 2);
  }
  for (; lVar4 < (longlong)param_4; lVar4 = lVar4 + 1) {
    lVar8 = 0;
    auVar9 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar9);
    lVar7 = 0;
    if (0 < param_5) {
      do {
        auVar9 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*param_1)[lVar7],0);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + param_2;
        auVar9 = vpminub_avx(in_ZMM1._0_16_,auVar9);
        in_ZMM1 = ZEXT1664(auVar9);
      } while (lVar8 < param_5);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
    (*param_3)[0] = in_ZMM1[0];
    param_3 = (undefined1 (*) [16])(*param_3 + 1);
  }
  return;
}


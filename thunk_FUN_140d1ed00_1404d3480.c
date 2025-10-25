
void thunk_FUN_140d1ed00(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
                        longlong param_4,int param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 in_ZMM0 [64];
  undefined1 auVar12 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_ZMM15 [64];
  
  uVar6 = param_3 & 0xffffffffffffffc0;
  lVar7 = 0;
  lVar8 = (longlong)param_5;
  if ((param_4 == 5) && (uVar5 = 0, 0 < (longlong)uVar6)) {
    uVar10 = (ulonglong)((longlong)(uVar6 + 0x3f) >> 5) >> 0x3a;
    lVar7 = (uVar10 + 0x7f + uVar6 & 0xffffffffffffffc0) - 0x40;
    lVar11 = 0;
    do {
      auVar12 = vpminub_avx(*(undefined1 (*) [16])(*param_1 + lVar11),
                            *(undefined1 (*) [16])(*param_1 + lVar11 + lVar8));
      uVar5 = uVar5 + 1;
      auVar17 = vpminub_avx(*(undefined1 (*) [16])(param_1[1] + lVar11),
                            *(undefined1 (*) [16])(param_1[1] + lVar8 + lVar11));
      auVar16 = vpminub_avx(*(undefined1 (*) [16])(param_1[2] + lVar11),
                            *(undefined1 (*) [16])(param_1[2] + lVar8 + lVar11));
      auVar15 = vpminub_avx(*(undefined1 (*) [16])(param_1[3] + lVar11),
                            *(undefined1 (*) [16])(param_1[3] + lVar8 + lVar11));
      auVar12 = vpminub_avx(auVar12,*(undefined1 (*) [16])(*param_1 + lVar11 + lVar8 * 2));
      auVar17 = vpminub_avx(auVar17,*(undefined1 (*) [16])(param_1[1] + lVar8 * 2 + lVar11));
      auVar16 = vpminub_avx(auVar16,*(undefined1 (*) [16])(param_1[2] + lVar8 * 2 + lVar11));
      auVar15 = vpminub_avx(auVar15,*(undefined1 (*) [16])(param_1[3] + lVar8 * 2 + lVar11));
      auVar12 = vpminub_avx(auVar12,*(undefined1 (*) [16])(*param_1 + lVar11 + lVar8 * 3));
      auVar17 = vpminub_avx(auVar17,*(undefined1 (*) [16])(param_1[1] + lVar8 * 3 + lVar11));
      auVar16 = vpminub_avx(auVar16,*(undefined1 (*) [16])(param_1[2] + lVar8 * 3 + lVar11));
      auVar15 = vpminub_avx(auVar15,*(undefined1 (*) [16])(param_1[3] + lVar8 * 3 + lVar11));
      auVar12 = vpminub_avx(auVar12,*(undefined1 (*) [16])(*param_1 + lVar11 + lVar8 * 4));
      in_ZMM4 = ZEXT1664(auVar12);
      auVar17 = vpminub_avx(auVar17,*(undefined1 (*) [16])(param_1[1] + lVar8 * 4 + lVar11));
      auVar16 = vpminub_avx(auVar16,*(undefined1 (*) [16])(param_1[2] + lVar8 * 4 + lVar11));
      in_ZMM0 = ZEXT1664(auVar16);
      auVar15 = vpminub_avx(auVar15,*(undefined1 (*) [16])(param_1[3] + lVar8 * 4 + lVar11));
      in_ZMM1 = ZEXT1664(auVar15);
      *(undefined1 (*) [16])(*param_2 + lVar11) = auVar12;
      *(undefined1 (*) [16])(param_2[1] + lVar11) = auVar17;
      *(undefined1 (*) [16])(param_2[2] + lVar11) = auVar16;
      *(undefined1 (*) [16])(param_2[3] + lVar11) = auVar15;
      lVar11 = lVar11 + 0x40;
    } while (uVar5 < (ulonglong)((longlong)(uVar10 + 0x3f + uVar6) >> 6));
    param_1 = param_1 + uVar5 * 4;
    param_2 = param_2 + uVar5 * 4;
  }
  if (lVar7 < (longlong)(param_3 & 0xffffffffffffff80)) {
    auVar12 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar12);
    do {
      auVar17 = vpcmpeqd_avx(in_ZMM15._0_16_,in_ZMM15._0_16_);
      in_ZMM15 = ZEXT1664(auVar17);
      in_ZMM4 = ZEXT1664(auVar12);
      in_ZMM1 = ZEXT1664(auVar12);
      lVar11 = 0;
      pauVar4 = param_1;
      auVar17 = auVar12;
      auVar16 = auVar12;
      auVar15 = auVar12;
      auVar14 = auVar12;
      auVar13 = auVar12;
      if (0 < param_4) {
        do {
          lVar11 = lVar11 + 1;
          auVar3 = vpminub_avx(in_ZMM15._0_16_,*pauVar4);
          in_ZMM15 = ZEXT1664(auVar3);
          auVar17 = vpminub_avx(auVar17,pauVar4[1]);
          auVar16 = vpminub_avx(auVar16,pauVar4[2]);
          auVar15 = vpminub_avx(auVar15,pauVar4[3]);
          auVar3 = vpminub_avx(in_ZMM4._0_16_,pauVar4[4]);
          in_ZMM4 = ZEXT1664(auVar3);
          auVar14 = vpminub_avx(auVar14,pauVar4[5]);
          auVar13 = vpminub_avx(auVar13,pauVar4[6]);
          auVar3 = vpminub_avx(in_ZMM1._0_16_,pauVar4[7]);
          in_ZMM1 = ZEXT1664(auVar3);
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + lVar8);
        } while (lVar11 < param_4);
      }
      lVar7 = lVar7 + 0x80;
      param_1 = param_1 + 8;
      *param_2 = in_ZMM15._0_16_;
      param_2[1] = auVar17;
      param_2[2] = auVar16;
      param_2[3] = auVar15;
      param_2[4] = in_ZMM4._0_16_;
      param_2[5] = auVar14;
      param_2[6] = auVar13;
      param_2[7] = in_ZMM1._0_16_;
      param_2 = param_2 + 8;
    } while (lVar7 < (longlong)(param_3 & 0xffffffffffffff80));
  }
  if (lVar7 < (longlong)uVar6) {
    auVar12 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar12);
    do {
      auVar17 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      in_ZMM4 = ZEXT1664(auVar17);
      in_ZMM1 = ZEXT1664(auVar12);
      lVar11 = 0;
      pauVar4 = param_1;
      auVar17 = auVar12;
      auVar16 = auVar12;
      if (0 < param_4) {
        do {
          lVar11 = lVar11 + 1;
          auVar15 = vpminub_avx(in_ZMM4._0_16_,*pauVar4);
          in_ZMM4 = ZEXT1664(auVar15);
          auVar17 = vpminub_avx(auVar17,pauVar4[1]);
          auVar16 = vpminub_avx(auVar16,pauVar4[2]);
          auVar15 = vpminub_avx(in_ZMM1._0_16_,pauVar4[3]);
          in_ZMM1 = ZEXT1664(auVar15);
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + lVar8);
        } while (lVar11 < param_4);
      }
      lVar7 = lVar7 + 0x40;
      param_1 = param_1 + 4;
      *param_2 = in_ZMM4._0_16_;
      param_2[1] = auVar17;
      param_2[2] = auVar16;
      param_2[3] = in_ZMM1._0_16_;
      param_2 = param_2 + 4;
    } while (lVar7 < (longlong)uVar6);
  }
  for (; lVar7 < (longlong)(param_3 & 0xffffffffffffffe0); lVar7 = lVar7 + 0x20) {
    lVar11 = 0;
    auVar12 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar12);
    auVar12 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar12);
    pauVar4 = param_1;
    if (0 < param_4) {
      do {
        lVar11 = lVar11 + 1;
        auVar12 = vpminub_avx(in_ZMM1._0_16_,*pauVar4);
        in_ZMM1 = ZEXT1664(auVar12);
        auVar12 = vpminub_avx(in_ZMM0._0_16_,pauVar4[1]);
        in_ZMM0 = ZEXT1664(auVar12);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + lVar8);
      } while (lVar11 < param_4);
    }
    param_1 = param_1 + 2;
    *param_2 = in_ZMM1._0_16_;
    param_2[1] = in_ZMM0._0_16_;
    param_2 = param_2 + 2;
  }
  for (; lVar7 < (longlong)(param_3 & 0xfffffffffffffff0); lVar7 = lVar7 + 0x10) {
    lVar9 = 0;
    auVar12 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar12);
    lVar11 = 0;
    if (0 < param_4) {
      do {
        lVar9 = lVar9 + 1;
        auVar12 = vpminub_avx(in_ZMM0._0_16_,*(undefined1 (*) [16])(*param_1 + lVar11));
        in_ZMM0 = ZEXT1664(auVar12);
        lVar11 = lVar11 + lVar8;
      } while (lVar9 < param_4);
    }
    param_1 = param_1 + 1;
    *param_2 = in_ZMM0._0_16_;
    param_2 = param_2 + 1;
  }
  while (lVar7 < (longlong)(param_3 & 0xfffffffffffffff8)) {
    lVar9 = 0;
    auVar12 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    in_ZMM0 = ZEXT1664(auVar12);
    lVar11 = 0;
    if (0 < param_4) {
      do {
        lVar9 = lVar9 + 1;
        puVar1 = (ulonglong *)(*param_1 + lVar11);
        in_ZMM1 = ZEXT864(*puVar1);
        lVar11 = lVar11 + lVar8;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *puVar1;
        auVar12 = vpminub_avx(in_ZMM0._0_16_,auVar12);
        in_ZMM0 = ZEXT1664(auVar12);
      } while (lVar9 < param_4);
    }
    lVar7 = lVar7 + 8;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
    uVar2 = vpextrq_avx(in_ZMM0._0_16_,0);
    *(undefined8 *)*param_2 = uVar2;
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
  }
  for (; lVar7 < (longlong)(param_3 & 0xfffffffffffffffc); lVar7 = lVar7 + 4) {
    lVar9 = 0;
    auVar12 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar12);
    lVar11 = 0;
    if (0 < param_4) {
      do {
        auVar12 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)(*param_1 + lVar11),0);
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + lVar8;
        auVar12 = vpminub_avx(in_ZMM1._0_16_,auVar12);
        in_ZMM1 = ZEXT1664(auVar12);
      } while (lVar9 < param_4);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    *(int *)*param_2 = in_ZMM1._0_4_;
    param_2 = (undefined1 (*) [16])(*param_2 + 4);
  }
  while (lVar7 < (longlong)(param_3 & 0xfffffffffffffffe)) {
    lVar9 = 0;
    auVar12 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar12);
    lVar11 = 0;
    if (0 < param_4) {
      do {
        lVar9 = lVar9 + 1;
        auVar12 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(*param_1 + lVar11),0);
        lVar11 = lVar11 + lVar8;
        auVar12 = vpminub_avx(in_ZMM1._0_16_,auVar12);
        in_ZMM1 = ZEXT1664(auVar12);
      } while (lVar9 < param_4);
    }
    lVar7 = lVar7 + 2;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
    vpextrw_avx(in_ZMM1._0_16_,0);
    param_2 = (undefined1 (*) [16])(*param_2 + 2);
  }
  for (; lVar7 < (longlong)param_3; lVar7 = lVar7 + 1) {
    lVar9 = 0;
    auVar12 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
    in_ZMM1 = ZEXT1664(auVar12);
    lVar11 = 0;
    if (0 < param_4) {
      do {
        auVar12 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)(*param_1)[lVar11],0);
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + lVar8;
        auVar12 = vpminub_avx(in_ZMM1._0_16_,auVar12);
        in_ZMM1 = ZEXT1664(auVar12);
      } while (lVar9 < param_4);
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
    (*param_2)[0] = in_ZMM1[0];
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
  }
  return;
}


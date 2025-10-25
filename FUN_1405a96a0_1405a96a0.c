
void FUN_1405a96a0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 in_ZMM16 [64];
  
  param_4 = param_4 & 0x1f;
  auVar3 = vpxord_avx512vl(in_ZMM16._0_32_,in_ZMM16._0_32_);
  if (param_4 < 0x1e) {
    auVar12 = ZEXT1664((undefined1  [16])0x0);
    auVar7 = (undefined1  [16])0x0;
    auVar11 = ZEXT1664((undefined1  [16])0x0);
    auVar8 = (undefined1  [16])0x0;
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    auVar9 = (undefined1  [16])0x0;
    if (param_4 < 0xe) {
      lVar2 = param_4 + 1;
      do {
        auVar7 = vpslldq_avx(auVar12._0_16_,1);
        auVar8 = vpslldq_avx(auVar11._0_16_,1);
        auVar9 = vpslldq_avx(auVar10._0_16_,1);
        auVar7 = vpinsrb_avx(auVar7,(uint)(byte)(*param_1)[lVar2],0);
        auVar12 = ZEXT1664(auVar7);
        auVar8 = vpinsrb_avx(auVar8,(uint)(byte)(*param_1)[lVar2 + param_2],0);
        auVar11 = ZEXT1664(auVar8);
        auVar9 = vpinsrb_avx(auVar9,(uint)(byte)(*param_1)[lVar2 + param_2 * 2],0);
        auVar10 = ZEXT1664(auVar9);
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
      auVar5 = vinserti32x4_avx512vl(auVar3,auVar7,0);
      auVar6 = vinserti32x4_avx512vl(auVar3,auVar8,0);
      auVar4 = vinserti32x4_avx512vl(auVar3,auVar9,0);
    }
    else {
      uVar1 = param_4;
      while (0xd < (longlong)(uVar1 - 1)) {
        auVar7 = vpslldq_avx(auVar12._0_16_,1);
        auVar8 = vpslldq_avx(auVar11._0_16_,1);
        auVar9 = vpslldq_avx(auVar10._0_16_,1);
        auVar7 = vpinsrb_avx(auVar7,(uint)(byte)(*param_1)[uVar1 + 1],0);
        auVar12 = ZEXT1664(auVar7);
        auVar8 = vpinsrb_avx(auVar8,(uint)(byte)(*(undefined1 (*) [16])(*param_1 + param_2))
                                                [uVar1 + 1],0);
        auVar11 = ZEXT1664(auVar8);
        auVar9 = vpinsrb_avx(auVar9,(uint)(byte)(*(undefined1 (*) [16])(*param_1 + param_2 * 2))
                                                [uVar1 + 1],0);
        auVar10 = ZEXT1664(auVar9);
        uVar1 = uVar1 - 1;
      }
      auVar5._0_16_ = ZEXT116(0) * auVar7 + ZEXT116(1) * *(undefined1 (*) [16])*param_1;
      auVar5._16_16_ = ZEXT116(1) * auVar7;
      auVar6._0_16_ = ZEXT116(0) * auVar8 + ZEXT116(1) * *(undefined1 (*) [16])(*param_1 + param_2);
      auVar6._16_16_ = ZEXT116(1) * auVar8;
      auVar4 = vinserti32x4_avx512vl
                         (ZEXT1632(*(undefined1 (*) [16])(*param_1 + param_2 * 2)),auVar9,1);
    }
  }
  else {
    auVar5 = *param_1;
    auVar6 = *(undefined1 (*) [32])(*param_1 + param_2);
    auVar4 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(*param_1 + param_2 * 2));
    if (0x1e < param_4) {
      auVar3 = vpminub_avx2(auVar5,auVar6);
      auVar5 = vpminub_avx512vl(auVar3,auVar4);
      auVar3 = vpminub_avx2(ZEXT132((byte)param_1[1][0]),ZEXT132((byte)param_1[1][param_2]));
      auVar3 = vpminub_avx512vl(auVar3,ZEXT132((byte)param_1[1][param_2 * 2]));
      goto LAB_1405a97e8;
    }
  }
  auVar5 = vpminub_avx2(auVar5,auVar6);
  auVar5 = vpminub_avx512vl(auVar5,auVar4);
LAB_1405a97e8:
  auVar6 = vshufi32x4_avx512vl(auVar5,auVar3,1);
  auVar3 = vpalignr_avx2(auVar6,auVar5,1);
  auVar6 = vpalignr_avx2(auVar6,auVar5,2);
  auVar3 = vpminub_avx2(auVar5,auVar3);
  auVar3 = vpminub_avx2(auVar3,auVar6);
  auVar7 = auVar3._0_16_;
  if (0xf < param_4) {
    *param_3 = auVar7;
    auVar7 = auVar3._16_16_;
    param_3 = param_3 + 1;
    param_4 = param_4 - 0x10;
    if (param_4 == 0) {
      return;
    }
  }
  if (7 < (longlong)param_4) {
    *(longlong *)*param_3 = auVar7._0_8_;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
    auVar7 = vpsrldq_avx(auVar7,8);
    param_4 = param_4 - 8;
    if (param_4 == 0) {
      return;
    }
  }
  if (3 < (longlong)param_4) {
    *(int *)*param_3 = auVar7._0_4_;
    param_3 = (undefined1 (*) [16])(*param_3 + 4);
    auVar7 = vpsrldq_avx(auVar7,4);
    param_4 = param_4 - 4;
    if (param_4 == 0) {
      return;
    }
  }
  auVar8 = auVar7;
  if (1 < (longlong)param_4) {
    auVar8 = vpsrldq_avx(auVar7,2);
    *(short *)*param_3 = auVar7._0_2_;
    param_3 = (undefined1 (*) [16])(*param_3 + 2);
    if (param_4 == 2) {
      return;
    }
  }
  (*param_3)[0] = auVar8[0];
  return;
}


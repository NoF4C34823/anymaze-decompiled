
void FUN_14055cee0(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [64];
  
  param_4 = param_4 & 0x1f;
  auVar11 = (undefined1  [32])0x0;
  if (param_4 < 0x1e) {
    auVar14 = ZEXT1664((undefined1  [16])0x0);
    auVar5 = (undefined1  [16])0x0;
    auVar4 = ZEXT1664((undefined1  [16])0x0);
    auVar6 = (undefined1  [16])0x0;
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    auVar8 = (undefined1  [16])0x0;
    if (param_4 < 0xe) {
      lVar2 = param_4 + 1;
      do {
        auVar5 = vpslldq_avx(auVar14._0_16_,1);
        auVar6 = vpslldq_avx(auVar4._0_16_,1);
        auVar8 = vpslldq_avx(auVar9._0_16_,1);
        auVar5 = vpinsrb_avx(auVar5,(uint)(byte)(*param_1)[lVar2],0);
        auVar14 = ZEXT1664(auVar5);
        auVar6 = vpinsrb_avx(auVar6,(uint)(byte)(*param_1)[lVar2 + param_2],0);
        auVar4 = ZEXT1664(auVar6);
        auVar8 = vpinsrb_avx(auVar8,(uint)(byte)(*param_1)[lVar2 + param_2 * 2],0);
        auVar9 = ZEXT1664(auVar8);
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
      auVar10 = SUB6416(ZEXT3264((undefined1  [32])0x0),0);
      auVar7._0_16_ = ZEXT116(1) * auVar5 + ZEXT116(0) * auVar10;
      auVar12 = SUB6416(ZEXT3264((undefined1  [32])0x0),0x10);
      auVar7._16_16_ = ZEXT116(1) * auVar12 + ZEXT116(0) * auVar5;
      auVar3._0_16_ = ZEXT116(1) * auVar6 + ZEXT116(0) * auVar10;
      auVar3._16_16_ = ZEXT116(1) * auVar12 + ZEXT116(0) * auVar6;
      auVar13._0_16_ = ZEXT116(1) * auVar8 + ZEXT116(0) * auVar10;
      auVar13._16_16_ = ZEXT116(1) * auVar12 + ZEXT116(0) * auVar8;
    }
    else {
      uVar1 = param_4;
      while (0xd < (longlong)(uVar1 - 1)) {
        auVar5 = vpslldq_avx(auVar14._0_16_,1);
        auVar6 = vpslldq_avx(auVar4._0_16_,1);
        auVar8 = vpslldq_avx(auVar9._0_16_,1);
        auVar5 = vpinsrb_avx(auVar5,(uint)(byte)(*param_1)[uVar1 + 1],0);
        auVar14 = ZEXT1664(auVar5);
        auVar6 = vpinsrb_avx(auVar6,(uint)(byte)(*(undefined1 (*) [16])(*param_1 + param_2))
                                                [uVar1 + 1],0);
        auVar4 = ZEXT1664(auVar6);
        auVar8 = vpinsrb_avx(auVar8,(uint)(byte)(*(undefined1 (*) [16])(*param_1 + param_2 * 2))
                                                [uVar1 + 1],0);
        auVar9 = ZEXT1664(auVar8);
        uVar1 = uVar1 - 1;
      }
      auVar7._0_16_ = ZEXT116(0) * auVar5 + ZEXT116(1) * *(undefined1 (*) [16])*param_1;
      auVar7._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * auVar5;
      auVar3._0_16_ = ZEXT116(0) * auVar6 + ZEXT116(1) * *(undefined1 (*) [16])(*param_1 + param_2);
      auVar3._16_16_ = ZEXT116(1) * auVar6;
      auVar13._0_16_ =
           ZEXT116(0) * auVar8 + ZEXT116(1) * *(undefined1 (*) [16])(*param_1 + param_2 * 2);
      auVar13._16_16_ = ZEXT116(1) * auVar8;
    }
  }
  else {
    auVar7 = *param_1;
    auVar3 = *(undefined1 (*) [32])(*param_1 + param_2);
    auVar13 = *(undefined1 (*) [32])(*param_1 + param_2 * 2);
    if (0x1e < param_4) {
      auVar11 = vpminub_avx2(auVar7,auVar3);
      auVar7 = vpminub_avx2(auVar11,auVar13);
      auVar11 = vpminub_avx2(ZEXT132((byte)param_1[1][0]),ZEXT132((byte)param_1[1][param_2]));
      auVar11 = vpminub_avx2(auVar11,ZEXT132((byte)param_1[1][param_2 * 2]));
      goto LAB_14055d023;
    }
  }
  auVar7 = vpminub_avx2(auVar7,auVar3);
  auVar7 = vpminub_avx2(auVar7,auVar13);
LAB_14055d023:
  auVar13 = vperm2i128_avx2(auVar7,auVar11,0x21);
  auVar11 = vpalignr_avx2(auVar13,auVar7,1);
  auVar3 = vpminub_avx2(auVar7,auVar11);
  auVar11 = vpalignr_avx2(auVar13,auVar7,2);
  auVar11 = vpminub_avx2(auVar3,auVar11);
  auVar5 = auVar11._0_16_;
  if (0xf < param_4) {
    *param_3 = auVar5;
    auVar5 = auVar11._16_16_;
    param_3 = param_3 + 1;
    param_4 = param_4 - 0x10;
    if (param_4 == 0) {
      return;
    }
  }
  if (7 < (longlong)param_4) {
    *(longlong *)*param_3 = auVar5._0_8_;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
    auVar5 = vpsrldq_avx(auVar5,8);
    param_4 = param_4 - 8;
    if (param_4 == 0) {
      return;
    }
  }
  if (3 < (longlong)param_4) {
    *(int *)*param_3 = auVar5._0_4_;
    param_3 = (undefined1 (*) [16])(*param_3 + 4);
    auVar5 = vpsrldq_avx(auVar5,4);
    param_4 = param_4 - 4;
    if (param_4 == 0) {
      return;
    }
  }
  auVar6 = auVar5;
  if (1 < (longlong)param_4) {
    auVar6 = vpsrldq_avx(auVar5,2);
    *(short *)*param_3 = auVar5._0_2_;
    param_3 = (undefined1 (*) [16])(*param_3 + 2);
    if (param_4 == 2) {
      return;
    }
  }
  (*param_3)[0] = auVar6[0];
  return;
}


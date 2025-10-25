
void FUN_1404bbd00(ulonglong *param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_318 [16];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2b8 [16];
  undefined1 auStack_288 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  
  iVar5 = (int)param_4;
  if (iVar5 < 4) {
    auVar11 = (undefined1  [16])0x0;
    auVar10 = (undefined1  [16])0x0;
    auVar9 = (undefined1  [16])0x0;
    auVar8 = (undefined1  [16])0x0;
    auVar6 = (undefined1  [16])0x0;
    auStack_138 = (undefined1  [16])0x0;
    auStack_d8 = (undefined1  [16])0x0;
    auStack_148 = (undefined1  [16])0x0;
    auStack_168 = (undefined1  [16])0x0;
  }
  else {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *param_1;
    iVar5 = iVar5 + -4;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)((longlong)param_1 + 2);
    puVar1 = (ulonglong *)((longlong)param_1 + 4);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)((longlong)param_1 + param_2 * 2);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)((longlong)param_1 + param_2 * 2 + 2);
    puVar2 = (ulonglong *)((longlong)param_1 + param_2 * 2 + 4);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(ulonglong *)((longlong)param_1 + param_2 * 4);
    puVar3 = (ulonglong *)((longlong)param_1 + param_2 * 4 + 2);
    puVar4 = (ulonglong *)((longlong)param_1 + param_2 * 4 + 4);
    param_1 = param_1 + 1;
    auStack_138._8_8_ = 0;
    auStack_138._0_8_ = *puVar3;
    auStack_d8._8_8_ = 0;
    auStack_d8._0_8_ = *puVar1;
    auStack_148._8_8_ = 0;
    auStack_148._0_8_ = *puVar2;
    auStack_168._8_8_ = 0;
    auStack_168._0_8_ = *puVar4;
  }
  if (iVar5 < 2) {
    auVar7 = (undefined1  [16])0x0;
    auStack_128 = (undefined1  [16])0x0;
    auStack_118 = (undefined1  [16])0x0;
    auStack_108 = (undefined1  [16])0x0;
    auStack_f8 = (undefined1  [16])0x0;
    auStack_e8 = (undefined1  [16])0x0;
    auStack_b8 = (undefined1  [16])0x0;
    auStack_c8 = (undefined1  [16])0x0;
    auStack_158 = (undefined1  [16])0x0;
  }
  else {
    iVar5 = iVar5 + -2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulonglong *)((longlong)param_1 + 4);
    auStack_128._8_8_ = 0;
    auStack_128._0_8_ = *param_1;
    auStack_118._8_8_ = 0;
    auStack_118._0_8_ = *(ulonglong *)((longlong)param_1 + param_2 * 2);
    auStack_108._8_8_ = 0;
    auStack_108._0_8_ = *(ulonglong *)((longlong)param_1 + param_2 * 4);
    auStack_f8._8_8_ = 0;
    auStack_f8._0_8_ = *(ulonglong *)((longlong)param_1 + 2);
    auStack_e8._8_8_ = 0;
    auStack_e8._0_8_ = *(ulonglong *)((longlong)param_1 + param_2 * 2 + 2);
    auStack_b8._8_8_ = 0;
    auStack_b8._0_8_ = *(ulonglong *)((longlong)param_1 + param_2 * 4 + 2);
    auStack_c8._8_8_ = 0;
    auStack_c8._0_8_ = *(ulonglong *)((longlong)param_1 + param_2 * 2 + 4);
    auStack_158._8_8_ = 0;
    auStack_158._0_8_ = *(ulonglong *)((longlong)param_1 + param_2 * 4 + 4);
    param_1 = (ulonglong *)((longlong)param_1 + 4);
  }
  if (iVar5 == 1) {
    auStack_318 = vpinsrw_avx((undefined1  [16])0x0,(uint)(ushort)*param_1,0);
    auStack_288 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)((longlong)param_1 + 2),0);
    auStack_1f8 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)((longlong)param_1 + 4),0);
    auStack_2e8 = vpinsrw_avx((undefined1  [16])0x0,
                              (uint)*(ushort *)((longlong)param_1 + param_2 * 2),0);
    auStack_258 = vpinsrw_avx((undefined1  [16])0x0,
                              (uint)*(ushort *)((longlong)param_1 + param_2 * 2 + 2),0);
    auStack_1c8 = vpinsrw_avx((undefined1  [16])0x0,
                              (uint)*(ushort *)((longlong)param_1 + param_2 * 2 + 4),0);
    auStack_2b8 = vpinsrw_avx((undefined1  [16])0x0,
                              (uint)*(ushort *)((longlong)param_1 + param_2 * 4),0);
    auStack_228 = vpinsrw_avx((undefined1  [16])0x0,
                              (uint)*(ushort *)((longlong)param_1 + param_2 * 4 + 2),0);
    auStack_198 = vpinsrw_avx((undefined1  [16])0x0,
                              (uint)*(ushort *)((longlong)param_1 + param_2 * 4 + 4),0);
  }
  else if (iVar5 == 2) {
    auStack_318 = ZEXT416((uint)*param_1);
    auStack_288 = ZEXT416(*(uint *)((longlong)param_1 + 2));
    auStack_1f8 = ZEXT416(*(uint *)((longlong)param_1 + 4));
    auStack_2e8 = ZEXT416(*(uint *)((longlong)param_1 + param_2 * 2));
    auStack_258 = ZEXT416(*(uint *)((longlong)param_1 + param_2 * 2 + 2));
    auStack_1c8 = ZEXT416(*(uint *)((longlong)param_1 + param_2 * 2 + 4));
    auStack_2b8 = ZEXT416(*(uint *)((longlong)param_1 + param_2 * 4));
    auStack_228 = ZEXT416(*(uint *)((longlong)param_1 + param_2 * 4 + 2));
    auStack_198 = ZEXT416(*(uint *)((longlong)param_1 + param_2 * 4 + 4));
  }
  if (1 < (param_4 & 3)) {
    auStack_318 = vpunpckldq_avx(auStack_128,auStack_318);
    auStack_2e8 = vpunpckldq_avx(auStack_118,auStack_2e8);
    auStack_2b8 = vpunpckldq_avx(auStack_108,auStack_2b8);
    auStack_288 = vpunpckldq_avx(auStack_f8,auStack_288);
    auStack_1f8 = vpunpckldq_avx(auVar7,auStack_1f8);
    auStack_258 = vpunpckldq_avx(auStack_e8,auStack_258);
    auStack_1c8 = vpunpckldq_avx(auStack_c8,auStack_1c8);
    auStack_228 = vpunpckldq_avx(auStack_b8,auStack_228);
    auStack_198 = vpunpckldq_avx(auStack_158,auStack_198);
  }
  if (3 < (longlong)param_4) {
    auStack_288 = vpunpcklqdq_avx(auVar8,auStack_288);
    auStack_258 = vpunpcklqdq_avx(auVar6,auStack_258);
    auStack_318 = vpunpcklqdq_avx(auVar11,auStack_318);
    auStack_2e8 = vpunpcklqdq_avx(auVar10,auStack_2e8);
    auStack_2b8 = vpunpcklqdq_avx(auVar9,auStack_2b8);
    auStack_228 = vpunpcklqdq_avx(auStack_138,auStack_228);
    auStack_1f8 = vpunpcklqdq_avx(auStack_d8,auStack_1f8);
    auStack_1c8 = vpunpcklqdq_avx(auStack_148,auStack_1c8);
    auStack_198 = vpunpcklqdq_avx(auStack_168,auStack_198);
  }
  auVar6 = vpmaxuw_avx(auStack_318,auStack_2e8);
  auVar8 = vpmaxuw_avx(auStack_288,auStack_258);
  auVar6 = vpmaxuw_avx(auVar6,auStack_2b8);
  auVar8 = vpmaxuw_avx(auVar8,auStack_228);
  auVar9 = vpmaxuw_avx(auStack_1f8,auStack_1c8);
  auVar6 = vpmaxuw_avx(auVar6,auVar8);
  auVar8 = vpmaxuw_avx(auVar9,auStack_198);
  auVar6 = vpmaxuw_avx(auVar6,auVar8);
  if (3 < (longlong)param_4) {
    *param_3 = auVar6._0_8_;
    param_3 = param_3 + 1;
    auVar6 = vpsrldq_avx(auVar6,8);
    param_4 = param_4 - 4;
    if (param_4 == 0) {
      return;
    }
  }
  if (1 < (longlong)param_4) {
    *(int *)param_3 = auVar6._0_4_;
    param_3 = (undefined8 *)((longlong)param_3 + 4);
    auVar6 = vpsrldq_avx(auVar6,4);
    param_4 = param_4 - 2;
    if (param_4 == 0) {
      return;
    }
  }
  if (0 < (longlong)param_4) {
    *(short *)param_3 = auVar6._0_2_;
  }
  return;
}


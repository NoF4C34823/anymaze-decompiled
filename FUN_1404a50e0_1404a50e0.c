
void FUN_1404a50e0(ulonglong *param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  
  iVar4 = (int)param_4;
  auVar6 = (undefined1  [16])0x0;
  if (param_4 == 1) {
    auVar6 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)*param_1,0);
    auVar7 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)((longlong)param_1 + 1),0);
    auVar10 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)((longlong)param_1 + 2),0);
    auVar12 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(param_2 + (longlong)param_1),0);
    auVar18 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(param_2 + 1 + (longlong)param_1),0);
    auVar19 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(param_2 + 2 + (longlong)param_1),0);
    auVar14 = vpinsrb_avx((undefined1  [16])0x0,
                          (uint)(byte)*(ushort *)((longlong)param_1 + param_2 * 2),0);
    auVar15 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)((longlong)param_1 + param_2 * 2 + 1)
                          ,0);
    auVar16 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)((longlong)param_1 + param_2 * 2 + 2)
                          ,0);
    auVar6 = vpmaxub_avx(auVar6,auVar12);
    auVar12 = vpmaxub_avx(auVar7,auVar18);
    auVar10 = vpmaxub_avx(auVar10,auVar19);
    auVar7 = vpmaxub_avx(auVar6,auVar14);
    auVar12 = vpmaxub_avx(auVar12,auVar15);
    auVar6 = vpmaxub_avx(auVar10,auVar16);
  }
  else {
    auVar10 = (undefined1  [16])0x0;
    auVar18 = (undefined1  [16])0x0;
    auVar7 = (undefined1  [16])0x0;
    auVar12 = (undefined1  [16])0x0;
    auVar19 = (undefined1  [16])0x0;
    if (iVar4 < 8) {
      auVar17 = (undefined1  [16])0x0;
      auVar16 = (undefined1  [16])0x0;
      auVar15 = (undefined1  [16])0x0;
      auVar14 = (undefined1  [16])0x0;
      auStack_b8 = (undefined1  [16])0x0;
      auStack_d8 = (undefined1  [16])0x0;
    }
    else {
      iVar4 = iVar4 + -8;
      auStack_b8._8_8_ = 0;
      auStack_b8._0_8_ = *param_1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *(ulonglong *)(param_2 + (longlong)param_1);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulonglong *)(param_2 + 2 + (longlong)param_1);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *(ulonglong *)((longlong)param_1 + param_2 * 2);
      puVar1 = (ulonglong *)((longlong)param_1 + param_2 * 2 + 2);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = *(ulonglong *)((longlong)param_1 + 2);
      param_1 = param_1 + 1;
      auStack_d8._8_8_ = 0;
      auStack_d8._0_8_ = *puVar1;
    }
    if (iVar4 < 4) {
      auVar11 = (undefined1  [16])0x0;
      auVar9 = (undefined1  [16])0x0;
      auVar8 = (undefined1  [16])0x0;
      auVar5 = (undefined1  [16])0x0;
      auVar13 = (undefined1  [16])0x0;
      auStack_c8 = (undefined1  [16])0x0;
    }
    else {
      auVar11 = ZEXT416((uint)*param_1);
      iVar4 = iVar4 + -4;
      auVar5 = ZEXT416(*(uint *)((longlong)param_1 + 2));
      auVar9 = ZEXT416(*(uint *)(param_2 + (longlong)param_1));
      auVar13 = ZEXT416(*(uint *)(param_2 + 2 + (longlong)param_1));
      auVar8 = ZEXT416(*(uint *)((longlong)param_1 + param_2 * 2));
      puVar2 = (uint *)((longlong)param_1 + param_2 * 2 + 2);
      param_1 = (ulonglong *)((longlong)param_1 + 4);
      auStack_c8 = ZEXT416(*puVar2);
    }
    if (iVar4 == 1) {
      auVar10 = vpinsrb_avx((undefined1  [16])0x0,(uint)(byte)*param_1,0);
      auVar12 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)((longlong)param_1 + 2),0);
      auVar18 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(param_2 + (longlong)param_1),0);
      auVar19 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(param_2 + 2 + (longlong)param_1),0
                           );
      auVar7 = vpinsrb_avx((undefined1  [16])0x0,
                           (uint)(byte)*(ushort *)((longlong)param_1 + param_2 * 2),0);
      auVar6 = vpinsrb_avx((undefined1  [16])0x0,
                           (uint)*(byte *)((longlong)param_1 + param_2 * 2 + 2),0);
    }
    else if (iVar4 == 2) {
      auVar10 = vpinsrw_avx((undefined1  [16])0x0,(uint)(ushort)*param_1,0);
      auVar12 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)((longlong)param_1 + 2),0);
      auVar18 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(param_2 + (longlong)param_1),0);
      auVar19 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(param_2 + 2 + (longlong)param_1)
                            ,0);
      auVar7 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)((longlong)param_1 + param_2 * 2),
                           0);
      auVar6 = vpinsrw_avx((undefined1  [16])0x0,
                           (uint)*(ushort *)((longlong)param_1 + param_2 * 2 + 2),0);
    }
    else if (iVar4 == 3) {
      auVar10 = vpinsrw_avx((undefined1  [16])0x0,(uint)(ushort)*param_1,0);
      auVar12 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)((longlong)param_1 + 2),0);
      auVar18 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(param_2 + (longlong)param_1),0);
      auVar19 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)(param_2 + 2 + (longlong)param_1)
                            ,0);
      auVar6 = vpinsrw_avx((undefined1  [16])0x0,(uint)*(ushort *)((longlong)param_1 + param_2 * 2),
                           0);
      auVar3 = vpinsrw_avx((undefined1  [16])0x0,
                           (uint)*(ushort *)((longlong)param_1 + param_2 * 2 + 2),0);
      auVar7 = vpinsrb_avx(auVar6,(uint)*(byte *)((longlong)param_1 + param_2 * 2 + 2),2);
      auVar6 = vpinsrb_avx(auVar3,(uint)*(byte *)((longlong)param_1 + param_2 * 2 + 4),2);
      auVar10 = vpinsrb_avx(auVar10,(uint)*(byte *)((longlong)param_1 + 2),2);
      auVar12 = vpinsrb_avx(auVar12,(uint)*(byte *)((longlong)param_1 + 4),2);
      auVar18 = vpinsrb_avx(auVar18,(uint)*(byte *)(param_2 + 2 + (longlong)param_1),2);
      auVar19 = vpinsrb_avx(auVar19,(uint)*(byte *)(param_2 + 4 + (longlong)param_1),2);
    }
    if (3 < (param_4 & 7)) {
      auVar12 = vpunpckldq_avx(auVar5,auVar12);
      auVar10 = vpunpckldq_avx(auVar11,auVar10);
      auVar18 = vpunpckldq_avx(auVar9,auVar18);
      auVar7 = vpunpckldq_avx(auVar8,auVar7);
      auVar19 = vpunpckldq_avx(auVar13,auVar19);
      auVar6 = vpunpckldq_avx(auStack_c8,auVar6);
    }
    if (7 < (longlong)param_4) {
      auVar10 = vpunpcklqdq_avx(auStack_b8,auVar10);
      auVar18 = vpunpcklqdq_avx(auVar17,auVar18);
      auVar7 = vpunpcklqdq_avx(auVar16,auVar7);
      auVar12 = vpunpcklqdq_avx(auVar15,auVar12);
      auVar19 = vpunpcklqdq_avx(auVar14,auVar19);
      auVar6 = vpunpcklqdq_avx(auStack_d8,auVar6);
    }
    auVar10 = vpmaxub_avx(auVar10,auVar18);
    auVar12 = vpmaxub_avx(auVar12,auVar19);
    auVar7 = vpmaxub_avx(auVar10,auVar7);
    auVar6 = vpmaxub_avx(auVar12,auVar6);
    auVar10 = vpsrldq_avx(auVar7,1);
    auVar12 = vpslldq_avx(auVar6,1);
    auVar12 = vpor_avx(auVar10,auVar12);
  }
  auVar7 = vpmaxub_avx(auVar7,auVar12);
  auVar6 = vpmaxub_avx(auVar7,auVar6);
  if (7 < (longlong)param_4) {
    *param_3 = auVar6._0_8_;
    param_3 = param_3 + 1;
    auVar6 = vpsrldq_avx(auVar6,8);
    param_4 = param_4 - 8;
    if (param_4 == 0) {
      return;
    }
  }
  if (3 < (longlong)param_4) {
    *(int *)param_3 = auVar6._0_4_;
    param_3 = (undefined8 *)((longlong)param_3 + 4);
    auVar6 = vpsrldq_avx(auVar6,4);
    param_4 = param_4 - 4;
    if (param_4 == 0) {
      return;
    }
  }
  auVar7 = auVar6;
  if (1 < (longlong)param_4) {
    auVar7 = vpsrldq_avx(auVar6,2);
    *(short *)param_3 = auVar6._0_2_;
    param_3 = (undefined8 *)((longlong)param_3 + 2);
    if (param_4 == 2) {
      return;
    }
  }
  *(char *)param_3 = auVar7[0];
  return;
}



void FUN_1404e6cc0(ulonglong *param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar4 = (ulonglong *)((longlong)param_1 + param_2);
  if (7 < (longlong)param_4) {
    puVar3 = (ulonglong *)((longlong)param_1 + param_2 * 2);
    do {
      param_4 = param_4 - 8;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *param_1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *puVar4;
      auVar12 = vpminub_avx(auVar12,auVar14);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *puVar3;
      auVar12 = vpminub_avx(auVar12,auVar6);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)((longlong)param_1 + 4);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulonglong *)((longlong)puVar4 + 4);
      auVar6 = vpminub_avx(auVar9,auVar10);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)((longlong)puVar3 + 4);
      auVar6 = vpminub_avx(auVar6,auVar8);
      puVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      puVar2 = puVar4 + 1;
      puVar4 = puVar4 + 1;
      auVar12 = vpminub_avx(auVar12,auVar6);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *puVar1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *puVar2;
      auVar6 = vpminub_avx(auVar7,auVar11);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = puVar3[1];
      auVar6 = vpminub_avx(auVar6,auVar13);
      puVar3 = puVar3 + 1;
      auVar12 = vpminub_avx(auVar12,auVar6);
      *param_3 = auVar12._0_8_;
      param_3 = param_3 + 1;
    } while (7 < (longlong)param_4);
  }
  uVar5 = 0;
  if (3 < (longlong)param_4) {
    do {
      auVar12 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)((longlong)param_1 + uVar5 * 4),0);
      auVar6 = vpinsrd_avx((undefined1  [16])0x0,
                           *(undefined4 *)((longlong)param_1 + uVar5 * 4 + param_2),0);
      auVar7 = vpinsrd_avx((undefined1  [16])0x0,
                           *(undefined4 *)((longlong)param_1 + uVar5 * 4 + param_2 * 2),0);
      auVar8 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)((longlong)param_1 + uVar5 * 4 + 4),
                           0);
      auVar9 = vpinsrd_avx((undefined1  [16])0x0,
                           *(undefined4 *)((longlong)param_1 + uVar5 * 4 + param_2 + 4),0);
      auVar10 = vpinsrd_avx((undefined1  [16])0x0,
                            *(undefined4 *)((longlong)param_1 + uVar5 * 4 + param_2 * 2 + 4),0);
      auVar12 = vpminub_avx(auVar12,auVar6);
      auVar11 = vpminub_avx(auVar12,auVar7);
      auVar12 = vpinsrd_avx((undefined1  [16])0x0,*(undefined4 *)((longlong)param_1 + uVar5 * 4 + 8)
                            ,0);
      auVar6 = vpinsrd_avx((undefined1  [16])0x0,
                           *(undefined4 *)((longlong)param_1 + uVar5 * 4 + param_2 + 8),0);
      auVar8 = vpminub_avx(auVar8,auVar9);
      auVar7 = vpinsrd_avx((undefined1  [16])0x0,
                           *(undefined4 *)((longlong)param_1 + uVar5 * 4 + param_2 * 2 + 8),0);
      auVar8 = vpminub_avx(auVar8,auVar10);
      auVar8 = vpminub_avx(auVar11,auVar8);
      auVar12 = vpminub_avx(auVar12,auVar6);
      auVar12 = vpminub_avx(auVar12,auVar7);
      auVar12 = vpminub_avx(auVar8,auVar12);
      *(int *)((longlong)param_3 + uVar5 * 4) = auVar12._0_4_;
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4 >> 2);
    param_1 = (ulonglong *)((longlong)param_1 + uVar5 * 4);
    param_3 = (undefined8 *)((longlong)param_3 + uVar5 * 4);
    param_4 = param_4 + uVar5 * -4;
  }
  uVar5 = 0;
  if (0 < (longlong)param_4) {
    do {
      auVar12 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(uVar5 + (longlong)param_1),0);
      auVar6 = vpinsrb_avx((undefined1  [16])0x0,
                           (uint)*(byte *)((longlong)param_1 + uVar5 + param_2),0);
      auVar7 = vpinsrb_avx((undefined1  [16])0x0,
                           (uint)*(byte *)((longlong)param_1 + uVar5 + 4 + param_2),0);
      auVar8 = vpinsrb_avx((undefined1  [16])0x0,
                           (uint)*(byte *)((longlong)param_1 + uVar5 + param_2 * 2),0);
      auVar9 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(uVar5 + 4 + (longlong)param_1),0);
      auVar10 = vpinsrb_avx((undefined1  [16])0x0,
                            (uint)*(byte *)((longlong)param_1 + uVar5 + 4 + param_2 * 2),0);
      auVar11 = vpinsrb_avx((undefined1  [16])0x0,(uint)*(byte *)(uVar5 + 8 + (longlong)param_1),0);
      auVar13 = vpinsrb_avx((undefined1  [16])0x0,
                            (uint)*(byte *)((longlong)param_1 + uVar5 + 8 + param_2),0);
      auVar14 = vpinsrb_avx((undefined1  [16])0x0,
                            (uint)*(byte *)((longlong)param_1 + uVar5 + 8 + param_2 * 2),0);
      auVar12 = vpminub_avx(auVar12,auVar6);
      auVar12 = vpminub_avx(auVar12,auVar8);
      auVar6 = vpminub_avx(auVar9,auVar7);
      auVar6 = vpminub_avx(auVar6,auVar10);
      auVar12 = vpminub_avx(auVar12,auVar6);
      auVar6 = vpminub_avx(auVar11,auVar13);
      auVar6 = vpminub_avx(auVar6,auVar14);
      auVar12 = vpminub_avx(auVar12,auVar6);
      *(char *)(uVar5 + (longlong)param_3) = auVar12[0];
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4);
  }
  return;
}



void FUN_140460c00(ulonglong *param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  uint uVar40;
  undefined4 uVar41;
  uint uVar42;
  uint uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  uint uVar46;
  undefined4 uVar47;
  uint uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  uint uVar58;
  undefined4 uVar59;
  uint uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined8 uStack_d8;
  ulonglong uStack_c8;
  undefined8 uStack_b8;
  
  auVar35 = ZEXT816(0);
  iVar10 = (int)param_4;
  if (iVar10 < 2) {
    uVar62 = 0;
    uVar63 = 0;
    uVar60 = 0;
    uVar61 = 0;
    uVar58 = 0;
    uVar59 = 0;
    uVar56 = 0;
    uVar57 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uStack_b8 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
  }
  else {
    uVar62 = (undefined4)*param_1;
    uVar63 = (undefined4)(*param_1 >> 0x20);
    iVar10 = iVar10 + -2;
    uVar56 = (undefined4)*(undefined8 *)((longlong)param_1 + 4);
    uVar57 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 4) >> 0x20);
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4);
    uVar60 = (uint)uVar1;
    uVar61 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 8);
    uVar54 = (uint)uVar1;
    uVar55 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_b8 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 4);
    uVar58 = (uint)param_1[param_2];
    uVar59 = (undefined4)(param_1[param_2] >> 0x20);
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 8 + 4);
    uVar48 = (uint)uVar1;
    uVar49 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_c8 = param_1[1];
    uStack_d8 = param_1[param_2 + 1];
    param_1 = param_1 + 1;
  }
  if (iVar10 == 1) {
    auVar35 = ZEXT416((uint)*param_1);
    auVar51 = ZEXT416(*(uint *)((longlong)param_1 + 4));
    auVar53 = ZEXT416((uint)param_1[1]);
    uVar42 = *(uint *)((longlong)param_1 + param_2 * 4);
    uVar44 = 0;
    uVar36 = (uint)param_1[param_2];
    uVar38 = 0;
    uVar25 = 0;
    uVar11 = (uint)param_1[param_2 + 1];
    uVar13 = 0;
    uVar17 = *(uint *)((longlong)param_1 + param_2 * 4 + 8);
    uVar19 = 0;
    uVar23 = *(uint *)((longlong)param_1 + param_2 * 8 + 4);
    uVar29 = *(uint *)((longlong)param_1 + param_2 * 4 + 4);
    uVar31 = 0;
  }
  else if (iVar10 == 2) {
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *param_1;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = *(ulonglong *)((longlong)param_1 + 4);
    auVar53._8_8_ = 0;
    auVar53._0_8_ = param_1[1];
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4);
    uVar42 = (uint)uVar1;
    uVar44 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 4);
    uVar2 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 8);
    uVar36 = (uint)param_1[param_2];
    uVar38 = (undefined4)(param_1[param_2] >> 0x20);
    uVar3 = *(undefined8 *)((longlong)param_1 + param_2 * 8 + 4);
    uVar25 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar11 = (uint)param_1[param_2 + 1];
    uVar13 = (undefined4)(param_1[param_2 + 1] >> 0x20);
    uVar17 = (uint)uVar2;
    uVar19 = (int)((ulonglong)uVar2 >> 0x20);
    uVar23 = (uint)uVar3;
    uVar29 = (uint)uVar1;
    uVar31 = (int)((ulonglong)uVar1 >> 0x20);
  }
  else {
    uVar42 = 0;
    uVar44 = 0;
    uVar36 = 0;
    uVar38 = 0;
    auVar51._0_12_ = ZEXT812(0);
    auVar51._12_4_ = 0;
    uVar11 = 0;
    uVar25 = 0;
    auVar53 = ZEXT816(0);
    uVar13 = 0;
    uVar17 = uVar11;
    uVar19 = uVar13;
    uVar23 = uVar11;
    uVar29 = uVar11;
    uVar31 = uVar25;
  }
  uVar12 = uVar11;
  uVar14 = uVar13;
  uVar15 = 0;
  uVar16 = 0;
  uVar18 = uVar17;
  uVar20 = uVar19;
  uVar21 = 0;
  uVar22 = 0;
  uVar24 = uVar23;
  uVar26 = uVar25;
  uVar27 = 0;
  uVar28 = 0;
  uVar30 = uVar29;
  uVar32 = uVar31;
  uVar33 = 0;
  uVar34 = 0;
  auVar52 = auVar51;
  uVar37 = uVar36;
  uVar39 = uVar38;
  uVar40 = 0;
  uVar41 = 0;
  uVar43 = uVar42;
  uVar45 = uVar44;
  uVar46 = 0;
  uVar47 = 0;
  auVar50 = auVar35;
  if (1 < (param_4 & 3)) {
    auVar50._4_4_ = uVar63;
    auVar50._0_4_ = uVar62;
    auVar52._4_4_ = uVar57;
    auVar52._0_4_ = uVar56;
    auVar52._8_8_ = auVar51._0_8_;
    auVar53._8_8_ = auVar53._0_8_;
    auVar53._0_8_ = uStack_c8;
    auVar50._8_8_ = auVar35._0_8_;
    uVar12 = (uint)uStack_d8;
    uVar14 = uStack_d8._4_4_;
    uVar15 = uVar11;
    uVar16 = uVar13;
    uVar18 = uVar54;
    uVar20 = uVar55;
    uVar21 = uVar17;
    uVar22 = uVar19;
    uVar24 = uVar48;
    uVar26 = uVar49;
    uVar27 = uVar23;
    uVar28 = uVar25;
    uVar30 = (uint)uStack_b8;
    uVar32 = uStack_b8._4_4_;
    uVar33 = uVar29;
    uVar34 = uVar31;
    uVar37 = uVar58;
    uVar39 = uVar59;
    uVar40 = uVar36;
    uVar41 = uVar38;
    uVar43 = uVar60;
    uVar45 = uVar61;
    uVar46 = uVar42;
    uVar47 = uVar44;
  }
  auVar9._4_4_ = uVar45;
  auVar9._0_4_ = uVar43;
  auVar9._8_4_ = uVar46;
  auVar9._12_4_ = uVar47;
  auVar51 = minps(auVar50,auVar9);
  auVar7._4_4_ = uVar32;
  auVar7._0_4_ = uVar30;
  auVar7._8_4_ = uVar33;
  auVar7._12_4_ = uVar34;
  auVar35 = minps(auVar52,auVar7);
  auVar8._4_4_ = uVar39;
  auVar8._0_4_ = uVar37;
  auVar8._8_4_ = uVar40;
  auVar8._12_4_ = uVar41;
  auVar52 = minps(auVar51,auVar8);
  auVar6._4_4_ = uVar26;
  auVar6._0_4_ = uVar24;
  auVar6._8_4_ = uVar27;
  auVar6._12_4_ = uVar28;
  auVar51 = minps(auVar35,auVar6);
  auVar5._4_4_ = uVar20;
  auVar5._0_4_ = uVar18;
  auVar5._8_4_ = uVar21;
  auVar5._12_4_ = uVar22;
  auVar35 = minps(auVar53,auVar5);
  auVar53 = minps(auVar52,auVar51);
  auVar4._4_4_ = uVar14;
  auVar4._0_4_ = uVar12;
  auVar4._8_4_ = uVar15;
  auVar4._12_4_ = uVar16;
  auVar35 = minps(auVar35,auVar4);
  auVar35 = minps(auVar53,auVar35);
  if (1 < (longlong)param_4) {
    *param_3 = auVar35._0_8_;
    param_3 = param_3 + 1;
    auVar35 = auVar35 >> 0x40;
    param_4 = param_4 - 2;
    if (param_4 == 0) {
      return;
    }
  }
  if (0 < (longlong)param_4) {
    *(int *)param_3 = auVar35._0_4_;
  }
  return;
}


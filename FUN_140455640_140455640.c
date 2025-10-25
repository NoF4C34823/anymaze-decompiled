
void FUN_140455640(ulonglong *param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
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
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  uint uVar41;
  undefined4 uVar42;
  uint uVar43;
  uint uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
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
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  
  iVar9 = (int)param_4;
  auVar36 = ZEXT816(0);
  if (iVar9 < 2) {
    uVar62 = 0;
    uVar63 = 0;
    uVar60 = 0;
    uVar61 = 0;
    uVar58 = 0;
    uVar59 = 0;
    uVar56 = 0;
    uVar57 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
  }
  else {
    uStack_b8 = param_1[param_2 + 2];
    iVar9 = iVar9 + -2;
    uStack_d8 = param_1[param_2 + 4];
    uStack_c8 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4);
    uVar60 = (uint)uVar1;
    uVar61 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 0x10);
    uVar54 = (uint)uVar1;
    uVar55 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar62 = (undefined4)*param_1;
    uVar63 = (undefined4)(*param_1 >> 0x20);
    uVar56 = (undefined4)param_1[2];
    uVar57 = (undefined4)(param_1[2] >> 0x20);
    uVar49 = (undefined4)param_1[4];
    uVar50 = (undefined4)(param_1[4] >> 0x20);
    uVar58 = (uint)param_1[param_2];
    uVar59 = (undefined4)(param_1[param_2] >> 0x20);
    param_1 = param_1 + 1;
  }
  if (iVar9 == 1) {
    auVar36 = ZEXT416((uint)*param_1);
    auVar53 = ZEXT416((uint)param_1[2]);
    auVar52 = ZEXT416((uint)param_1[4]);
    uVar43 = *(uint *)((longlong)param_1 + param_2 * 4);
    uVar45 = 0;
    uVar37 = (uint)param_1[param_2];
    uVar39 = 0;
    uVar25 = 0;
    uVar10 = (uint)param_1[param_2 + 4];
    uVar12 = 0;
    uVar16 = *(uint *)((longlong)param_1 + param_2 * 4 + 0x20);
    uVar18 = 0;
    uVar23 = (uint)param_1[param_2 + 2];
    uVar29 = *(uint *)((longlong)param_1 + param_2 * 4 + 0x10);
    uVar31 = 0;
  }
  else if (iVar9 == 2) {
    auVar36._8_8_ = 0;
    auVar36._0_8_ = *param_1;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = param_1[2];
    auVar52._8_8_ = 0;
    auVar52._0_8_ = param_1[4];
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4);
    uVar43 = (uint)uVar1;
    uVar45 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 0x10);
    uVar2 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 0x20);
    uVar37 = (uint)param_1[param_2];
    uVar39 = (undefined4)(param_1[param_2] >> 0x20);
    uVar25 = (undefined4)(param_1[param_2 + 2] >> 0x20);
    uVar10 = (uint)param_1[param_2 + 4];
    uVar12 = (undefined4)(param_1[param_2 + 4] >> 0x20);
    uVar16 = (uint)uVar2;
    uVar18 = (int)((ulonglong)uVar2 >> 0x20);
    uVar23 = (uint)param_1[param_2 + 2];
    uVar29 = (uint)uVar1;
    uVar31 = (int)((ulonglong)uVar1 >> 0x20);
  }
  else {
    uVar43 = 0;
    uVar45 = 0;
    uVar37 = 0;
    uVar39 = 0;
    auVar53._0_12_ = ZEXT812(0);
    auVar53._12_4_ = 0;
    uVar10 = 0;
    uVar25 = 0;
    auVar52 = ZEXT816(0);
    uVar12 = 0;
    uVar16 = uVar10;
    uVar18 = uVar12;
    uVar23 = uVar10;
    uVar29 = uVar10;
    uVar31 = uVar25;
  }
  uVar11 = uVar10;
  uVar13 = uVar12;
  uVar14 = 0;
  uVar15 = 0;
  uVar17 = uVar16;
  uVar19 = uVar18;
  uVar20 = 0;
  uVar21 = 0;
  auVar22 = auVar52;
  uVar24 = uVar23;
  uVar26 = uVar25;
  uVar27 = 0;
  uVar28 = 0;
  uVar30 = uVar29;
  uVar32 = uVar31;
  uVar33 = 0;
  uVar34 = 0;
  auVar35 = auVar53;
  uVar38 = uVar37;
  uVar40 = uVar39;
  uVar41 = 0;
  uVar42 = 0;
  uVar44 = uVar43;
  uVar46 = uVar45;
  uVar47 = 0;
  uVar48 = 0;
  auVar51 = auVar36;
  if (1 < (param_4 & 3)) {
    auVar51._4_4_ = uVar63;
    auVar51._0_4_ = uVar62;
    auVar35._4_4_ = uVar57;
    auVar35._0_4_ = uVar56;
    auVar22._4_4_ = uVar50;
    auVar22._0_4_ = uVar49;
    auVar51._8_8_ = auVar36._0_8_;
    auVar35._8_8_ = auVar53._0_8_;
    auVar22._8_8_ = auVar52._0_8_;
    uVar11 = (uint)uStack_d8;
    uVar13 = uStack_d8._4_4_;
    uVar14 = uVar10;
    uVar15 = uVar12;
    uVar17 = (uint)uStack_c8;
    uVar19 = uStack_c8._4_4_;
    uVar20 = uVar16;
    uVar21 = uVar18;
    uVar24 = (uint)uStack_b8;
    uVar26 = uStack_b8._4_4_;
    uVar27 = uVar23;
    uVar28 = uVar25;
    uVar30 = uVar54;
    uVar32 = uVar55;
    uVar33 = uVar29;
    uVar34 = uVar31;
    uVar38 = uVar58;
    uVar40 = uVar59;
    uVar41 = uVar37;
    uVar42 = uVar39;
    uVar44 = uVar60;
    uVar46 = uVar61;
    uVar47 = uVar43;
    uVar48 = uVar45;
  }
  auVar8._4_4_ = uVar46;
  auVar8._0_4_ = uVar44;
  auVar8._8_4_ = uVar47;
  auVar8._12_4_ = uVar48;
  auVar52 = maxps(auVar51,auVar8);
  auVar6._4_4_ = uVar32;
  auVar6._0_4_ = uVar30;
  auVar6._8_4_ = uVar33;
  auVar6._12_4_ = uVar34;
  auVar36 = maxps(auVar35,auVar6);
  auVar7._4_4_ = uVar40;
  auVar7._0_4_ = uVar38;
  auVar7._8_4_ = uVar41;
  auVar7._12_4_ = uVar42;
  auVar53 = maxps(auVar52,auVar7);
  auVar5._4_4_ = uVar26;
  auVar5._0_4_ = uVar24;
  auVar5._8_4_ = uVar27;
  auVar5._12_4_ = uVar28;
  auVar52 = maxps(auVar36,auVar5);
  auVar4._4_4_ = uVar19;
  auVar4._0_4_ = uVar17;
  auVar4._8_4_ = uVar20;
  auVar4._12_4_ = uVar21;
  auVar36 = maxps(auVar22,auVar4);
  auVar52 = maxps(auVar53,auVar52);
  auVar3._4_4_ = uVar13;
  auVar3._0_4_ = uVar11;
  auVar3._8_4_ = uVar14;
  auVar3._12_4_ = uVar15;
  auVar36 = maxps(auVar36,auVar3);
  auVar36 = maxps(auVar52,auVar36);
  if (1 < (longlong)param_4) {
    *param_3 = auVar36._0_8_;
    param_3 = param_3 + 1;
    auVar36 = auVar36 >> 0x40;
    param_4 = param_4 - 2;
    if (param_4 == 0) {
      return;
    }
  }
  if (0 < (longlong)param_4) {
    *(int *)param_3 = auVar36._0_4_;
  }
  return;
}


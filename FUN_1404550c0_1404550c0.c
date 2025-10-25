
void FUN_1404550c0(ulonglong *param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

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
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  uint uVar42;
  undefined4 uVar43;
  uint uVar44;
  uint uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  uint uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  uint uVar59;
  undefined4 uVar60;
  uint uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  
  iVar10 = (int)param_4;
  auVar37 = ZEXT816(0);
  if (iVar10 < 2) {
    uVar63 = 0;
    uVar64 = 0;
    uVar61 = 0;
    uVar62 = 0;
    uVar59 = 0;
    uVar60 = 0;
    uVar57 = 0;
    uVar58 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
  }
  else {
    uStack_b8 = *(undefined8 *)((longlong)param_1 + param_2 * 8 + 0xc);
    iVar10 = iVar10 + -2;
    uStack_d8 = param_1[param_2 + 3];
    uStack_c8 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 0x18);
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4);
    uVar61 = (uint)uVar1;
    uVar62 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 0xc);
    uVar55 = (uint)uVar1;
    uVar56 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar63 = (undefined4)*param_1;
    uVar64 = (undefined4)(*param_1 >> 0x20);
    uVar57 = (undefined4)*(undefined8 *)((longlong)param_1 + 0xc);
    uVar58 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xc) >> 0x20);
    uVar50 = (undefined4)param_1[3];
    uVar51 = (undefined4)(param_1[3] >> 0x20);
    uVar59 = (uint)param_1[param_2];
    uVar60 = (undefined4)(param_1[param_2] >> 0x20);
    param_1 = param_1 + 1;
  }
  if (iVar10 == 1) {
    auVar37 = ZEXT416((uint)*param_1);
    auVar54 = ZEXT416(*(uint *)((longlong)param_1 + 0xc));
    auVar53 = ZEXT416((uint)param_1[3]);
    uVar44 = *(uint *)((longlong)param_1 + param_2 * 4);
    uVar46 = 0;
    uVar38 = (uint)param_1[param_2];
    uVar40 = 0;
    uVar26 = 0;
    uVar11 = (uint)param_1[param_2 + 3];
    uVar13 = 0;
    uVar17 = *(uint *)((longlong)param_1 + param_2 * 4 + 0x18);
    uVar19 = 0;
    uVar24 = *(uint *)((longlong)param_1 + param_2 * 8 + 0xc);
    uVar30 = *(uint *)((longlong)param_1 + param_2 * 4 + 0xc);
    uVar32 = 0;
  }
  else if (iVar10 == 2) {
    auVar37._8_8_ = 0;
    auVar37._0_8_ = *param_1;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = *(ulonglong *)((longlong)param_1 + 0xc);
    auVar53._8_8_ = 0;
    auVar53._0_8_ = param_1[3];
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4);
    uVar44 = (uint)uVar1;
    uVar46 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 0xc);
    uVar2 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 0x18);
    uVar38 = (uint)param_1[param_2];
    uVar40 = (undefined4)(param_1[param_2] >> 0x20);
    uVar3 = *(undefined8 *)((longlong)param_1 + param_2 * 8 + 0xc);
    uVar26 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar11 = (uint)param_1[param_2 + 3];
    uVar13 = (undefined4)(param_1[param_2 + 3] >> 0x20);
    uVar17 = (uint)uVar2;
    uVar19 = (int)((ulonglong)uVar2 >> 0x20);
    uVar24 = (uint)uVar3;
    uVar30 = (uint)uVar1;
    uVar32 = (int)((ulonglong)uVar1 >> 0x20);
  }
  else {
    uVar44 = 0;
    uVar46 = 0;
    uVar38 = 0;
    uVar40 = 0;
    auVar54._0_12_ = ZEXT812(0);
    auVar54._12_4_ = 0;
    uVar11 = 0;
    uVar26 = 0;
    auVar53 = ZEXT816(0);
    uVar13 = 0;
    uVar17 = uVar11;
    uVar19 = uVar13;
    uVar24 = uVar11;
    uVar30 = uVar11;
    uVar32 = uVar26;
  }
  uVar12 = uVar11;
  uVar14 = uVar13;
  uVar15 = 0;
  uVar16 = 0;
  uVar18 = uVar17;
  uVar20 = uVar19;
  uVar21 = 0;
  uVar22 = 0;
  auVar23 = auVar53;
  uVar25 = uVar24;
  uVar27 = uVar26;
  uVar28 = 0;
  uVar29 = 0;
  uVar31 = uVar30;
  uVar33 = uVar32;
  uVar34 = 0;
  uVar35 = 0;
  auVar36 = auVar54;
  uVar39 = uVar38;
  uVar41 = uVar40;
  uVar42 = 0;
  uVar43 = 0;
  uVar45 = uVar44;
  uVar47 = uVar46;
  uVar48 = 0;
  uVar49 = 0;
  auVar52 = auVar37;
  if (1 < (param_4 & 3)) {
    auVar52._4_4_ = uVar64;
    auVar52._0_4_ = uVar63;
    auVar36._4_4_ = uVar58;
    auVar36._0_4_ = uVar57;
    auVar23._4_4_ = uVar51;
    auVar23._0_4_ = uVar50;
    auVar52._8_8_ = auVar37._0_8_;
    auVar36._8_8_ = auVar54._0_8_;
    auVar23._8_8_ = auVar53._0_8_;
    uVar12 = (uint)uStack_d8;
    uVar14 = uStack_d8._4_4_;
    uVar15 = uVar11;
    uVar16 = uVar13;
    uVar18 = (uint)uStack_c8;
    uVar20 = uStack_c8._4_4_;
    uVar21 = uVar17;
    uVar22 = uVar19;
    uVar25 = (uint)uStack_b8;
    uVar27 = uStack_b8._4_4_;
    uVar28 = uVar24;
    uVar29 = uVar26;
    uVar31 = uVar55;
    uVar33 = uVar56;
    uVar34 = uVar30;
    uVar35 = uVar32;
    uVar39 = uVar59;
    uVar41 = uVar60;
    uVar42 = uVar38;
    uVar43 = uVar40;
    uVar45 = uVar61;
    uVar47 = uVar62;
    uVar48 = uVar44;
    uVar49 = uVar46;
  }
  auVar9._4_4_ = uVar47;
  auVar9._0_4_ = uVar45;
  auVar9._8_4_ = uVar48;
  auVar9._12_4_ = uVar49;
  auVar53 = maxps(auVar52,auVar9);
  auVar7._4_4_ = uVar33;
  auVar7._0_4_ = uVar31;
  auVar7._8_4_ = uVar34;
  auVar7._12_4_ = uVar35;
  auVar37 = maxps(auVar36,auVar7);
  auVar8._4_4_ = uVar41;
  auVar8._0_4_ = uVar39;
  auVar8._8_4_ = uVar42;
  auVar8._12_4_ = uVar43;
  auVar54 = maxps(auVar53,auVar8);
  auVar6._4_4_ = uVar27;
  auVar6._0_4_ = uVar25;
  auVar6._8_4_ = uVar28;
  auVar6._12_4_ = uVar29;
  auVar53 = maxps(auVar37,auVar6);
  auVar5._4_4_ = uVar20;
  auVar5._0_4_ = uVar18;
  auVar5._8_4_ = uVar21;
  auVar5._12_4_ = uVar22;
  auVar37 = maxps(auVar23,auVar5);
  auVar53 = maxps(auVar54,auVar53);
  auVar4._4_4_ = uVar14;
  auVar4._0_4_ = uVar12;
  auVar4._8_4_ = uVar15;
  auVar4._12_4_ = uVar16;
  auVar37 = maxps(auVar37,auVar4);
  auVar37 = maxps(auVar53,auVar37);
  if (1 < (longlong)param_4) {
    *param_3 = auVar37._0_8_;
    param_3 = param_3 + 1;
    auVar37 = auVar37 >> 0x40;
    param_4 = param_4 - 2;
    if (param_4 == 0) {
      return;
    }
  }
  if (0 < (longlong)param_4) {
    *(int *)param_3 = auVar37._0_4_;
  }
  return;
}


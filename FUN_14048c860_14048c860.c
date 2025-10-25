
void FUN_14048c860(uint *param_1,longlong param_2,ushort *param_3,ulonglong param_4)

{
  int iVar1;
  ushort uVar2;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  undefined1 auVar4 [16];
  undefined1 auVar6 [16];
  ushort uVar13;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  ushort uVar28;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined1 auStack_328 [16];
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2c8 [16];
  undefined1 auStack_298 [16];
  undefined1 auStack_268 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1a8 [16];
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined1 auStack_28 [10];
  ushort uStack_1e;
  undefined4 uStack_1c;
  undefined1 auStack_18 [10];
  ushort uStack_e;
  undefined4 uStack_c;
  undefined1 auVar5 [16];
  undefined1 auVar3 [14];
  undefined1 auVar16 [16];
  undefined1 auVar14 [14];
  undefined1 auVar26 [16];
  undefined1 auVar24 [14];
  undefined1 auVar31 [16];
  undefined1 auVar29 [14];
  undefined1 auVar42 [16];
  undefined1 auVar40 [14];
  undefined1 auVar46 [16];
  undefined1 auVar44 [14];
  undefined1 auVar50 [16];
  undefined1 auVar48 [14];
  
  iVar1 = (int)param_4;
  if (iVar1 < 4) {
    uVar57 = 0;
    uVar56 = 0;
    uVar55 = 0;
    uVar54 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uStack_168 = 0;
    uStack_158 = 0;
    uStack_178 = 0;
  }
  else {
    uVar57 = *(undefined8 *)param_1;
    iVar1 = iVar1 + -4;
    uVar54 = *(undefined8 *)((longlong)param_1 + 2);
    uStack_158 = *(undefined8 *)(param_1 + 1);
    uVar56 = *(undefined8 *)((longlong)param_1 + param_2 * 2);
    uVar52 = *(undefined8 *)((longlong)param_1 + param_2 * 2 + 2);
    uVar53 = *(undefined8 *)((longlong)param_1 + param_2 * 2 + 4);
    uVar55 = *(undefined8 *)(param_1 + param_2);
    uStack_168 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 2);
    uStack_178 = *(undefined8 *)(param_1 + param_2 + 1);
    param_1 = param_1 + 2;
  }
  if (iVar1 < 2) {
    uVar58 = 0;
    uStack_d8 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
  }
  else {
    iVar1 = iVar1 + -2;
    uVar58 = *(undefined8 *)param_1;
    uStack_f8 = *(undefined8 *)((longlong)param_1 + 2);
    uStack_d8 = *(undefined8 *)((longlong)param_1 + param_2 * 2);
    uStack_108 = *(undefined8 *)((longlong)param_1 + param_2 * 2 + 2);
    uStack_138 = *(undefined8 *)((longlong)param_1 + param_2 * 2 + 4);
    uStack_e8 = *(undefined8 *)(param_1 + param_2);
    uStack_118 = *(undefined8 *)((longlong)param_1 + param_2 * 4 + 2);
    uStack_148 = *(undefined8 *)(param_1 + param_2 + 1);
    uStack_128 = *(undefined8 *)(param_1 + 1);
    param_1 = param_1 + 1;
  }
  if (iVar1 == 1) {
    _auStack_18 = ZEXT214((ushort)param_1[param_2]);
    auVar14 = ZEXT214((ushort)*param_1);
    auVar48 = ZEXT214(*(ushort *)((longlong)param_1 + param_2 * 2));
    auVar44 = ZEXT214(*(ushort *)((longlong)param_1 + param_2 * 2 + 2));
    auVar24 = ZEXT214(*(ushort *)((longlong)param_1 + param_2 * 2 + 4));
    auVar3 = ZEXT214(*(ushort *)((longlong)param_1 + 2));
    auVar29 = ZEXT214((ushort)param_1[1]);
    auVar40 = ZEXT214(*(ushort *)((longlong)param_1 + param_2 * 4 + 2));
    _auStack_28 = ZEXT214((ushort)param_1[param_2 + 1]);
  }
  else if (iVar1 == 2) {
    _auStack_18 = ZEXT414(param_1[param_2]);
    auVar40 = ZEXT414(*(uint *)((longlong)param_1 + param_2 * 4 + 2));
    _auStack_28 = ZEXT414(param_1[param_2 + 1]);
    auVar14 = ZEXT414(*param_1);
    auVar29 = ZEXT414(param_1[1]);
    auVar48 = ZEXT414(*(uint *)((longlong)param_1 + param_2 * 2));
    auVar44 = ZEXT414(*(uint *)((longlong)param_1 + param_2 * 2 + 2));
    auVar24 = ZEXT414(*(uint *)((longlong)param_1 + param_2 * 2 + 4));
    auVar3 = ZEXT414(*(uint *)((longlong)param_1 + 2));
  }
  else {
    auVar24 = auStack_1d8._0_14_;
    auVar29 = auStack_208._0_14_;
    auVar40 = auStack_238._0_14_;
    auVar44 = auStack_268._0_14_;
    auVar14 = auStack_328._0_14_;
    auVar48 = auStack_2f8._0_14_;
    _auStack_18 = auStack_2c8._0_14_;
    auVar3 = auStack_298._0_14_;
    _auStack_28 = auStack_1a8._0_14_;
  }
  if (1 < (param_4 & 3)) {
    auVar16._8_4_ = (int)((ulonglong)uVar58 >> 0x20);
    auVar16._0_8_ = uVar58;
    auVar16._12_4_ = auVar14._4_4_;
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._0_4_ = (undefined4)uVar58;
    auVar15._4_4_ = auVar14._0_4_;
    auVar14 = auVar15._0_14_;
    auVar50._8_4_ = (int)((ulonglong)uStack_d8 >> 0x20);
    auVar50._0_8_ = uStack_d8;
    auVar50._12_4_ = auVar48._4_4_;
    auVar49._8_8_ = auVar50._8_8_;
    auVar49._0_4_ = (undefined4)uStack_d8;
    auVar49._4_4_ = auVar48._0_4_;
    auVar48 = auVar49._0_14_;
    uStack_c = auStack_18._4_4_;
    auStack_18._4_4_ = auStack_18._0_4_;
    auStack_18._0_4_ = (undefined4)uStack_e8;
    stack0xfffffffffffffff0 = uStack_e8._4_4_;
    auVar5._8_4_ = (int)((ulonglong)uStack_f8 >> 0x20);
    auVar5._0_8_ = uStack_f8;
    auVar5._12_4_ = auVar3._4_4_;
    auVar4._8_8_ = auVar5._8_8_;
    auVar4._0_4_ = (undefined4)uStack_f8;
    auVar4._4_4_ = auVar3._0_4_;
    auVar3 = auVar4._0_14_;
    uStack_1c = auStack_28._4_4_;
    auVar46._8_4_ = (int)((ulonglong)uStack_108 >> 0x20);
    auVar46._0_8_ = uStack_108;
    auVar46._12_4_ = auVar44._4_4_;
    auVar45._8_8_ = auVar46._8_8_;
    auVar45._0_4_ = (undefined4)uStack_108;
    auVar45._4_4_ = auVar44._0_4_;
    auVar44 = auVar45._0_14_;
    auStack_28._4_4_ = auStack_28._0_4_;
    auStack_28._0_4_ = (undefined4)uStack_148;
    stack0xffffffffffffffe0 = uStack_148._4_4_;
    auVar42._8_4_ = (int)((ulonglong)uStack_118 >> 0x20);
    auVar42._0_8_ = uStack_118;
    auVar42._12_4_ = auVar40._4_4_;
    auVar41._8_8_ = auVar42._8_8_;
    auVar41._0_4_ = (undefined4)uStack_118;
    auVar41._4_4_ = auVar40._0_4_;
    auVar40 = auVar41._0_14_;
    auVar31._8_4_ = (int)((ulonglong)uStack_128 >> 0x20);
    auVar31._0_8_ = uStack_128;
    auVar31._12_4_ = auVar29._4_4_;
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._0_4_ = (undefined4)uStack_128;
    auVar30._4_4_ = auVar29._0_4_;
    auVar29 = auVar30._0_14_;
    auVar26._8_4_ = (int)((ulonglong)uStack_138 >> 0x20);
    auVar26._0_8_ = uStack_138;
    auVar26._12_4_ = auVar24._4_4_;
    auVar25._8_8_ = auVar26._8_8_;
    auVar25._0_4_ = (undefined4)uStack_138;
    auVar25._4_4_ = auVar24._0_4_;
    auVar24 = auVar25._0_14_;
  }
  if (3 < (longlong)param_4) {
    auVar17._8_8_ = auVar14._0_8_;
    auVar17._0_8_ = uVar57;
    auVar14 = auVar17._0_14_;
    auVar51._8_8_ = auVar48._0_8_;
    auVar51._0_8_ = uVar56;
    auVar48 = auVar51._0_14_;
    stack0xfffffffffffffff0 = auStack_18._0_8_;
    auStack_18._0_8_ = uVar55;
    auVar6._8_8_ = auVar3._0_8_;
    auVar6._0_8_ = uVar54;
    auVar3 = auVar6._0_14_;
    auVar47._8_8_ = auVar44._0_8_;
    auVar47._0_8_ = uVar52;
    auVar44 = auVar47._0_14_;
    stack0xffffffffffffffe0 = auStack_28._0_8_;
    auStack_28._0_8_ = uStack_178;
    auVar32._8_8_ = auVar29._0_8_;
    auVar32._0_8_ = uStack_158;
    auVar29 = auVar32._0_14_;
    auVar27._8_8_ = auVar24._0_8_;
    auVar27._0_8_ = uVar53;
    auVar24 = auVar27._0_14_;
    auVar43._8_8_ = auVar40._0_8_;
    auVar43._0_8_ = uStack_168;
    auVar40 = auVar43._0_14_;
  }
  uVar38 = auVar48._0_2_;
  uVar2 = auVar14._0_2_;
  uVar13 = (uVar38 < uVar2) * uVar38 | (uVar38 >= uVar2) * uVar2;
  uVar38 = auVar48._2_2_;
  uVar2 = auVar14._2_2_;
  uVar18 = (uVar38 < uVar2) * uVar38 | (uVar38 >= uVar2) * uVar2;
  uVar38 = auVar48._4_2_;
  uVar2 = auVar14._4_2_;
  uVar19 = (uVar38 < uVar2) * uVar38 | (uVar38 >= uVar2) * uVar2;
  uVar38 = auVar48._6_2_;
  uVar2 = auVar14._6_2_;
  uVar20 = (uVar38 < uVar2) * uVar38 | (uVar38 >= uVar2) * uVar2;
  uVar38 = auVar48._8_2_;
  uVar2 = auVar14._8_2_;
  uVar21 = (uVar38 < uVar2) * uVar38 | (uVar38 >= uVar2) * uVar2;
  uVar38 = auVar48._10_2_;
  uVar2 = auVar14._10_2_;
  uVar22 = (uVar38 < uVar2) * uVar38 | (uVar38 >= uVar2) * uVar2;
  uVar38 = auVar48._12_2_;
  uVar2 = auVar14._12_2_;
  uVar23 = (uVar38 < uVar2) * uVar38 | (uVar38 >= uVar2) * uVar2;
  uVar38 = auVar44._0_2_;
  uVar2 = auVar3._0_2_;
  uVar2 = (uVar38 < uVar2) * uVar38 | (uVar38 >= uVar2) * uVar2;
  uVar38 = auVar44._2_2_;
  uVar7 = auVar3._2_2_;
  uVar7 = (uVar38 < uVar7) * uVar38 | (uVar38 >= uVar7) * uVar7;
  uVar38 = auVar44._4_2_;
  uVar8 = auVar3._4_2_;
  uVar8 = (uVar38 < uVar8) * uVar38 | (uVar38 >= uVar8) * uVar8;
  uVar38 = auVar44._6_2_;
  uVar9 = auVar3._6_2_;
  uVar9 = (uVar38 < uVar9) * uVar38 | (uVar38 >= uVar9) * uVar9;
  uVar38 = auVar44._8_2_;
  uVar10 = auVar3._8_2_;
  uVar10 = (uVar38 < uVar10) * uVar38 | (uVar38 >= uVar10) * uVar10;
  uVar38 = auVar44._10_2_;
  uVar11 = auVar3._10_2_;
  uVar11 = (uVar38 < uVar11) * uVar38 | (uVar38 >= uVar11) * uVar11;
  uVar38 = auVar44._12_2_;
  uVar12 = auVar3._12_2_;
  uVar12 = (uVar38 < uVar12) * uVar38 | (uVar38 >= uVar12) * uVar12;
  uVar13 = (ushort)((ushort)auStack_18._0_2_ < uVar13) * auStack_18._0_2_ |
           ((ushort)auStack_18._0_2_ >= uVar13) * uVar13;
  uVar18 = (ushort)((ushort)auStack_18._2_2_ < uVar18) * auStack_18._2_2_ |
           ((ushort)auStack_18._2_2_ >= uVar18) * uVar18;
  uVar19 = (ushort)((ushort)auStack_18._4_2_ < uVar19) * auStack_18._4_2_ |
           ((ushort)auStack_18._4_2_ >= uVar19) * uVar19;
  uVar20 = (ushort)((ushort)auStack_18._6_2_ < uVar20) * auStack_18._6_2_ |
           ((ushort)auStack_18._6_2_ >= uVar20) * uVar20;
  uVar21 = (ushort)((ushort)auStack_18._8_2_ < uVar21) * auStack_18._8_2_ |
           ((ushort)auStack_18._8_2_ >= uVar21) * uVar21;
  uVar22 = (uStack_e < uVar22) * uStack_e | (uStack_e >= uVar22) * uVar22;
  uVar23 = ((ushort)uStack_c < uVar23) * (ushort)uStack_c | ((ushort)uStack_c >= uVar23) * uVar23;
  uVar38 = auVar40._0_2_;
  uVar2 = (uVar38 < uVar2) * uVar38 | (uVar38 >= uVar2) * uVar2;
  uVar38 = auVar40._2_2_;
  uVar7 = (uVar38 < uVar7) * uVar38 | (uVar38 >= uVar7) * uVar7;
  uVar38 = auVar40._4_2_;
  uVar8 = (uVar38 < uVar8) * uVar38 | (uVar38 >= uVar8) * uVar8;
  uVar38 = auVar40._6_2_;
  uVar9 = (uVar38 < uVar9) * uVar38 | (uVar38 >= uVar9) * uVar9;
  uVar38 = auVar40._8_2_;
  uVar10 = (uVar38 < uVar10) * uVar38 | (uVar38 >= uVar10) * uVar10;
  uVar38 = auVar40._10_2_;
  uVar11 = (uVar38 < uVar11) * uVar38 | (uVar38 >= uVar11) * uVar11;
  uVar38 = auVar40._12_2_;
  uVar12 = (uVar38 < uVar12) * uVar38 | (uVar38 >= uVar12) * uVar12;
  uVar38 = auVar24._0_2_;
  uVar28 = auVar29._0_2_;
  uVar28 = (uVar38 < uVar28) * uVar38 | (uVar38 >= uVar28) * uVar28;
  uVar38 = auVar24._2_2_;
  uVar33 = auVar29._2_2_;
  uVar33 = (uVar38 < uVar33) * uVar38 | (uVar38 >= uVar33) * uVar33;
  uVar38 = auVar24._4_2_;
  uVar34 = auVar29._4_2_;
  uVar34 = (uVar38 < uVar34) * uVar38 | (uVar38 >= uVar34) * uVar34;
  uVar38 = auVar24._6_2_;
  uVar35 = auVar29._6_2_;
  uVar35 = (uVar38 < uVar35) * uVar38 | (uVar38 >= uVar35) * uVar35;
  uVar38 = auVar24._8_2_;
  uVar36 = auVar29._8_2_;
  uVar36 = (uVar38 < uVar36) * uVar38 | (uVar38 >= uVar36) * uVar36;
  uVar38 = auVar24._10_2_;
  uVar37 = auVar29._10_2_;
  uVar37 = (uVar38 < uVar37) * uVar38 | (uVar38 >= uVar37) * uVar37;
  uVar38 = auVar24._12_2_;
  uVar39 = auVar29._12_2_;
  uVar38 = (uVar38 < uVar39) * uVar38 | (uVar38 >= uVar39) * uVar39;
  uVar28 = (ushort)((ushort)auStack_28._0_2_ < uVar28) * auStack_28._0_2_ |
           ((ushort)auStack_28._0_2_ >= uVar28) * uVar28;
  uVar33 = (ushort)((ushort)auStack_28._2_2_ < uVar33) * auStack_28._2_2_ |
           ((ushort)auStack_28._2_2_ >= uVar33) * uVar33;
  uVar34 = (ushort)((ushort)auStack_28._4_2_ < uVar34) * auStack_28._4_2_ |
           ((ushort)auStack_28._4_2_ >= uVar34) * uVar34;
  uVar35 = (ushort)((ushort)auStack_28._6_2_ < uVar35) * auStack_28._6_2_ |
           ((ushort)auStack_28._6_2_ >= uVar35) * uVar35;
  uVar36 = (ushort)((ushort)auStack_28._8_2_ < uVar36) * auStack_28._8_2_ |
           ((ushort)auStack_28._8_2_ >= uVar36) * uVar36;
  uVar37 = (uStack_1e < uVar37) * uStack_1e | (uStack_1e >= uVar37) * uVar37;
  uVar39 = ((ushort)uStack_1c < uVar38) * (ushort)uStack_1c | ((ushort)uStack_1c >= uVar38) * uVar38
  ;
  uVar38 = (uVar2 < uVar13) * uVar2 | (uVar2 >= uVar13) * uVar13;
  uVar2 = (uVar7 < uVar18) * uVar7 | (uVar7 >= uVar18) * uVar18;
  uVar7 = (uVar8 < uVar19) * uVar8 | (uVar8 >= uVar19) * uVar19;
  uVar8 = (uVar9 < uVar20) * uVar9 | (uVar9 >= uVar20) * uVar20;
  uVar9 = (uVar10 < uVar21) * uVar10 | (uVar10 >= uVar21) * uVar21;
  uVar10 = (uVar11 < uVar22) * uVar11 | (uVar11 >= uVar22) * uVar22;
  uVar11 = (uVar12 < uVar23) * uVar12 | (uVar12 >= uVar23) * uVar23;
  uVar38 = (uVar28 < uVar38) * uVar28 | (uVar28 >= uVar38) * uVar38;
  uVar2 = (uVar33 < uVar2) * uVar33 | (uVar33 >= uVar2) * uVar2;
  uVar7 = (uVar34 < uVar7) * uVar34 | (uVar34 >= uVar7) * uVar7;
  if (3 < (longlong)param_4) {
    *param_3 = uVar38;
    param_3[1] = uVar2;
    param_3[2] = uVar7;
    param_3[3] = (uVar35 < uVar8) * uVar35 | (uVar35 >= uVar8) * uVar8;
    param_3 = param_3 + 4;
    param_4 = param_4 - 4;
    uVar38 = (uVar36 < uVar9) * uVar36 | (uVar36 >= uVar9) * uVar9;
    uVar2 = (uVar37 < uVar10) * uVar37 | (uVar37 >= uVar10) * uVar10;
    uVar7 = (uVar39 < uVar11) * uVar39 | (uVar39 >= uVar11) * uVar11;
    if (param_4 == 0) {
      return;
    }
  }
  if (1 < (longlong)param_4) {
    *param_3 = uVar38;
    param_3[1] = uVar2;
    param_3 = param_3 + 2;
    param_4 = param_4 - 2;
    uVar38 = uVar7;
    if (param_4 == 0) {
      return;
    }
  }
  if (0 < (longlong)param_4) {
    *param_3 = uVar38;
  }
  return;
}


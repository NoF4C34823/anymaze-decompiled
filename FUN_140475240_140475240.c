
/* WARNING: Removing unreachable block (ram,0x000140475539) */

void FUN_140475240(uint3 *param_1,longlong param_2,byte *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  byte bVar26;
  undefined1 auVar10 [15];
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 auVar11 [16];
  byte bVar27;
  undefined1 auVar28 [16];
  byte bVar29;
  byte bVar30;
  byte bVar48;
  undefined1 auVar31 [15];
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar32 [16];
  byte bVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uStack_d8;
  undefined8 uStack_b8;
  undefined1 auVar12 [16];
  undefined1 auVar33 [16];
  
  auVar28 = (undefined1  [16])0x0;
  iVar3 = (int)param_4;
  if (param_4 == 1) {
    bVar2 = (byte)*param_1;
    bVar30 = *(byte *)(param_2 + (longlong)param_1);
    bVar34 = (bVar30 < bVar2) * bVar30 | (bVar30 >= bVar2) * bVar2;
    bVar2 = *(byte *)(param_2 + 1 + (longlong)param_1);
    bVar30 = *(byte *)(param_2 + 2 + (longlong)param_1);
    bVar35 = *(byte *)((longlong)param_1 + 1);
    bVar29 = *(byte *)((longlong)param_1 + 2);
    bVar35 = (bVar2 < bVar35) * bVar2 | (bVar2 >= bVar35) * bVar35;
    bVar2 = (byte)*(ushort *)((longlong)param_1 + param_2 * 2);
    bVar29 = (bVar30 < bVar29) * bVar30 | (bVar30 >= bVar29) * bVar29;
    bVar30 = *(byte *)((longlong)param_1 + param_2 * 2 + 1);
    auVar31 = ZEXT115((byte)((bVar2 < bVar34) * bVar2 | (bVar2 >= bVar34) * bVar34));
    bVar2 = *(byte *)((longlong)param_1 + param_2 * 2 + 2);
    auVar4 = ZEXT115((byte)((bVar30 < bVar35) * bVar30 | (bVar30 >= bVar35) * bVar35));
    auVar10 = ZEXT115((byte)((bVar2 < bVar29) * bVar2 | (bVar2 >= bVar29) * bVar29));
  }
  else {
    auVar32 = (undefined1  [16])0x0;
    auVar8 = (undefined1  [16])0x0;
    auVar5 = (undefined1  [16])0x0;
    auVar11 = (undefined1  [16])0x0;
    auVar6 = (undefined1  [16])0x0;
    if (iVar3 < 8) {
      uVar58 = 0;
      uVar57 = 0;
      uVar56 = 0;
      uStack_b8 = 0;
      uVar55 = 0;
      uStack_d8 = 0;
    }
    else {
      uStack_b8 = *(undefined8 *)((longlong)param_1 + param_2 * 2);
      iVar3 = iVar3 + -8;
      uStack_d8 = *(undefined8 *)((longlong)param_1 + param_2 * 2 + 2);
      uVar58 = *(undefined8 *)param_1;
      uVar56 = *(undefined8 *)((longlong)param_1 + 2);
      uVar57 = *(undefined8 *)(param_2 + (longlong)param_1);
      uVar55 = *(undefined8 *)(param_2 + 2 + (longlong)param_1);
      param_1 = param_1 + 2;
    }
    if (iVar3 < 4) {
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)((longlong)param_1 + param_2 * 2 + 2);
      iVar3 = iVar3 + -4;
      uVar52 = *(undefined4 *)((longlong)param_1 + param_2 * 2);
      uVar50 = *(undefined4 *)param_1;
      uVar53 = *(undefined4 *)((longlong)param_1 + 2);
      uVar51 = *(undefined4 *)(param_2 + (longlong)param_1);
      uVar54 = *(undefined4 *)(param_2 + 2 + (longlong)param_1);
      param_1 = param_1 + 1;
    }
    if (iVar3 == 1) {
      auVar32 = ZEXT116((byte)*param_1);
      auVar11 = ZEXT116(*(byte *)((longlong)param_1 + 2));
      auVar8 = ZEXT116(*(byte *)(param_2 + (longlong)param_1));
      auVar6 = ZEXT116(*(byte *)(param_2 + 2 + (longlong)param_1));
      auVar5 = ZEXT116((byte)*(ushort *)((longlong)param_1 + param_2 * 2));
      auVar28 = ZEXT116(*(byte *)((longlong)param_1 + param_2 * 2 + 2));
    }
    else if (iVar3 == 2) {
      auVar32 = ZEXT216((ushort)*param_1);
      auVar11 = ZEXT216(*(ushort *)((longlong)param_1 + 2));
      auVar8 = ZEXT216(*(ushort *)(param_2 + (longlong)param_1));
      auVar6 = ZEXT216(*(ushort *)(param_2 + 2 + (longlong)param_1));
      auVar5 = ZEXT216(*(ushort *)((longlong)param_1 + param_2 * 2));
      auVar28 = ZEXT216(*(ushort *)((longlong)param_1 + param_2 * 2 + 2));
    }
    else if (iVar3 == 3) {
      auVar5 = ZEXT316(CONCAT12(*(undefined1 *)((longlong)param_1 + param_2 * 2 + 2),
                                *(ushort *)((longlong)param_1 + param_2 * 2)));
      auVar28 = ZEXT316(CONCAT12(*(undefined1 *)((longlong)param_1 + param_2 * 2 + 4),
                                 *(undefined2 *)((longlong)param_1 + param_2 * 2 + 2)));
      auVar32 = ZEXT316(*param_1);
      auVar11 = ZEXT316(*(uint3 *)((longlong)param_1 + 2));
      auVar8 = ZEXT316(CONCAT12(*(undefined1 *)(param_2 + 2 + (longlong)param_1),
                                *(undefined2 *)(param_2 + (longlong)param_1)));
      auVar6 = ZEXT316(CONCAT12(*(undefined1 *)(param_2 + 4 + (longlong)param_1),
                                *(undefined2 *)(param_2 + 2 + (longlong)param_1)));
    }
    if (3 < (param_4 & 7)) {
      auVar32._4_4_ = auVar32._0_4_;
      auVar32._0_4_ = uVar50;
      auVar32._8_8_ = 0;
      auVar8._4_4_ = auVar8._0_4_;
      auVar8._0_4_ = uVar51;
      auVar8._8_8_ = 0;
      auVar5._4_4_ = auVar5._0_4_;
      auVar5._0_4_ = uVar52;
      auVar5._8_8_ = 0;
      auVar11._4_4_ = auVar11._0_4_;
      auVar11._0_4_ = uVar53;
      auVar11._8_8_ = 0;
      auVar6._4_4_ = auVar6._0_4_;
      auVar6._0_4_ = uVar54;
      auVar6._8_8_ = 0;
      auVar28._4_4_ = auVar28._0_4_;
      auVar28._0_4_ = uVar1;
      auVar28._8_8_ = 0;
    }
    if (7 < (longlong)param_4) {
      auVar32._8_8_ = auVar32._0_8_;
      auVar32._0_8_ = uVar58;
      auVar8._8_8_ = auVar8._0_8_;
      auVar8._0_8_ = uVar57;
      auVar5._8_8_ = auVar5._0_8_;
      auVar5._0_8_ = uStack_b8;
      auVar11._8_8_ = auVar11._0_8_;
      auVar11._0_8_ = uVar56;
      auVar6._8_8_ = auVar6._0_8_;
      auVar6._0_8_ = uVar55;
      auVar28._8_8_ = auVar28._0_8_;
      auVar28._0_8_ = uStack_d8;
    }
    bVar2 = auVar8[0];
    bVar30 = auVar32[0];
    bVar29 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[1];
    bVar30 = auVar32[1];
    bVar34 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[2];
    bVar30 = auVar32[2];
    bVar36 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[3];
    bVar30 = auVar32[3];
    bVar37 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[4];
    bVar30 = auVar32[4];
    bVar38 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[5];
    bVar30 = auVar32[5];
    bVar39 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[6];
    bVar30 = auVar32[6];
    bVar40 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[7];
    bVar30 = auVar32[7];
    bVar41 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[8];
    bVar30 = auVar32[8];
    bVar42 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[9];
    bVar30 = auVar32[9];
    bVar43 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[10];
    bVar30 = auVar32[10];
    bVar44 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[0xb];
    bVar30 = auVar32[0xb];
    bVar45 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[0xc];
    bVar30 = auVar32[0xc];
    bVar46 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[0xd];
    bVar30 = auVar32[0xd];
    bVar47 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[0xe];
    bVar30 = auVar32[0xe];
    bVar35 = auVar32[0xf];
    bVar48 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar8[0xf];
    bVar49 = (bVar2 < bVar35) * bVar2 | (bVar2 >= bVar35) * bVar35;
    bVar2 = auVar6[0];
    bVar30 = auVar11[0];
    bVar9 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[1];
    bVar30 = auVar11[1];
    bVar13 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[2];
    bVar30 = auVar11[2];
    bVar14 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[3];
    bVar30 = auVar11[3];
    bVar15 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[4];
    bVar30 = auVar11[4];
    bVar16 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[5];
    bVar30 = auVar11[5];
    bVar17 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[6];
    bVar30 = auVar11[6];
    bVar18 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[7];
    bVar30 = auVar11[7];
    bVar19 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[8];
    bVar30 = auVar11[8];
    bVar20 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[9];
    bVar30 = auVar11[9];
    bVar21 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[10];
    bVar30 = auVar11[10];
    bVar22 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[0xb];
    bVar30 = auVar11[0xb];
    bVar23 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[0xc];
    bVar30 = auVar11[0xc];
    bVar24 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[0xd];
    bVar30 = auVar11[0xd];
    bVar25 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[0xe];
    bVar30 = auVar11[0xe];
    bVar35 = auVar11[0xf];
    bVar26 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
    bVar2 = auVar6[0xf];
    bVar27 = (bVar2 < bVar35) * bVar2 | (bVar2 >= bVar35) * bVar35;
    bVar2 = auVar5[0];
    auVar31[0] = (bVar2 < bVar29) * bVar2 | (bVar2 >= bVar29) * bVar29;
    bVar2 = auVar5[1];
    auVar31[1] = (bVar2 < bVar34) * bVar2 | (bVar2 >= bVar34) * bVar34;
    bVar2 = auVar5[2];
    auVar31[2] = (bVar2 < bVar36) * bVar2 | (bVar2 >= bVar36) * bVar36;
    bVar2 = auVar5[3];
    auVar31[3] = (bVar2 < bVar37) * bVar2 | (bVar2 >= bVar37) * bVar37;
    bVar2 = auVar5[4];
    auVar31[4] = (bVar2 < bVar38) * bVar2 | (bVar2 >= bVar38) * bVar38;
    bVar2 = auVar5[5];
    auVar31[5] = (bVar2 < bVar39) * bVar2 | (bVar2 >= bVar39) * bVar39;
    bVar2 = auVar5[6];
    auVar31[6] = (bVar2 < bVar40) * bVar2 | (bVar2 >= bVar40) * bVar40;
    bVar2 = auVar5[7];
    auVar31[7] = (bVar2 < bVar41) * bVar2 | (bVar2 >= bVar41) * bVar41;
    bVar2 = auVar5[8];
    auVar31[8] = (bVar2 < bVar42) * bVar2 | (bVar2 >= bVar42) * bVar42;
    bVar2 = auVar5[9];
    auVar31[9] = (bVar2 < bVar43) * bVar2 | (bVar2 >= bVar43) * bVar43;
    bVar2 = auVar5[10];
    auVar31[10] = (bVar2 < bVar44) * bVar2 | (bVar2 >= bVar44) * bVar44;
    bVar2 = auVar5[0xb];
    auVar31[0xb] = (bVar2 < bVar45) * bVar2 | (bVar2 >= bVar45) * bVar45;
    bVar2 = auVar5[0xc];
    auVar31[0xc] = (bVar2 < bVar46) * bVar2 | (bVar2 >= bVar46) * bVar46;
    bVar2 = auVar5[0xd];
    auVar31[0xd] = (bVar2 < bVar47) * bVar2 | (bVar2 >= bVar47) * bVar47;
    bVar2 = auVar5[0xe];
    auVar31[0xe] = (bVar2 < bVar48) * bVar2 | (bVar2 >= bVar48) * bVar48;
    bVar2 = auVar5[0xf];
    auVar33[0xf] = (bVar2 < bVar49) * bVar2 | (bVar2 >= bVar49) * bVar49;
    auVar33._0_15_ = auVar31;
    bVar2 = auVar28[0];
    bVar30 = auVar28[1];
    bVar35 = auVar28[2];
    bVar29 = auVar28[3];
    bVar34 = auVar28[4];
    bVar36 = auVar28[5];
    bVar37 = auVar28[6];
    bVar38 = auVar28[7];
    bVar38 = (bVar38 < bVar19) * bVar38 | (bVar38 >= bVar19) * bVar19;
    auVar10._0_8_ =
         CONCAT17(bVar38,CONCAT16((bVar37 < bVar18) * bVar37 | (bVar37 >= bVar18) * bVar18,
                                  CONCAT15((bVar36 < bVar17) * bVar36 | (bVar36 >= bVar17) * bVar17,
                                           CONCAT14((bVar34 < bVar16) * bVar34 |
                                                    (bVar34 >= bVar16) * bVar16,
                                                    CONCAT13((bVar29 < bVar15) * bVar29 |
                                                             (bVar29 >= bVar15) * bVar15,
                                                             CONCAT12((bVar35 < bVar14) * bVar35 |
                                                                      (bVar35 >= bVar14) * bVar14,
                                                                      CONCAT11((bVar30 < bVar13) *
                                                                               bVar30 | (bVar30 >=
                                                                                        bVar13) * 
                                                  bVar13,(bVar2 < bVar9) * bVar2 |
                                                         (bVar2 >= bVar9) * bVar9)))))));
    bVar2 = auVar28[8];
    auVar10[8] = (bVar2 < bVar20) * bVar2 | (bVar2 >= bVar20) * bVar20;
    bVar2 = auVar28[9];
    auVar10[9] = (bVar2 < bVar21) * bVar2 | (bVar2 >= bVar21) * bVar21;
    bVar2 = auVar28[10];
    auVar10[10] = (bVar2 < bVar22) * bVar2 | (bVar2 >= bVar22) * bVar22;
    bVar2 = auVar28[0xb];
    auVar10[0xb] = (bVar2 < bVar23) * bVar2 | (bVar2 >= bVar23) * bVar23;
    bVar2 = auVar28[0xc];
    auVar10[0xc] = (bVar2 < bVar24) * bVar2 | (bVar2 >= bVar24) * bVar24;
    bVar2 = auVar28[0xd];
    auVar10[0xd] = (bVar2 < bVar25) * bVar2 | (bVar2 >= bVar25) * bVar25;
    bVar2 = auVar28[0xe];
    auVar10[0xe] = (bVar2 < bVar26) * bVar2 | (bVar2 >= bVar26) * bVar26;
    bVar2 = auVar28[0xf];
    auVar12[0xf] = (bVar2 < bVar27) * bVar2 | (bVar2 >= bVar27) * bVar27;
    auVar12._0_15_ = auVar10;
    auVar7._0_8_ = auVar10._0_8_ << 8;
    auVar7._8_8_ = auVar12._8_8_ << 8 | (ulonglong)bVar38;
    auVar4 = auVar33._1_15_ | auVar7._0_15_;
  }
  bVar2 = auVar4[0];
  bVar30 = auVar31[0];
  bVar30 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
  bVar2 = auVar4[1];
  bVar35 = auVar31[1];
  bVar35 = (bVar2 < bVar35) * bVar2 | (bVar2 >= bVar35) * bVar35;
  bVar2 = auVar4[2];
  bVar29 = auVar31[2];
  bVar29 = (bVar2 < bVar29) * bVar2 | (bVar2 >= bVar29) * bVar29;
  bVar2 = auVar4[3];
  bVar34 = auVar31[3];
  bVar34 = (bVar2 < bVar34) * bVar2 | (bVar2 >= bVar34) * bVar34;
  bVar2 = auVar4[4];
  bVar36 = auVar31[4];
  bVar36 = (bVar2 < bVar36) * bVar2 | (bVar2 >= bVar36) * bVar36;
  bVar2 = auVar4[5];
  bVar37 = auVar31[5];
  bVar37 = (bVar2 < bVar37) * bVar2 | (bVar2 >= bVar37) * bVar37;
  bVar2 = auVar4[6];
  bVar38 = auVar31[6];
  bVar38 = (bVar2 < bVar38) * bVar2 | (bVar2 >= bVar38) * bVar38;
  bVar2 = auVar4[7];
  bVar9 = auVar31[7];
  bVar19 = (bVar2 < bVar9) * bVar2 | (bVar2 >= bVar9) * bVar9;
  bVar2 = auVar4[8];
  bVar9 = auVar31[8];
  bVar20 = (bVar2 < bVar9) * bVar2 | (bVar2 >= bVar9) * bVar9;
  bVar2 = auVar4[9];
  bVar9 = auVar31[9];
  bVar21 = (bVar2 < bVar9) * bVar2 | (bVar2 >= bVar9) * bVar9;
  bVar2 = auVar4[10];
  bVar9 = auVar31[10];
  bVar22 = (bVar2 < bVar9) * bVar2 | (bVar2 >= bVar9) * bVar9;
  bVar2 = auVar4[0xb];
  bVar9 = auVar31[0xb];
  bVar23 = (bVar2 < bVar9) * bVar2 | (bVar2 >= bVar9) * bVar9;
  bVar2 = auVar4[0xc];
  bVar9 = auVar31[0xc];
  bVar24 = (bVar2 < bVar9) * bVar2 | (bVar2 >= bVar9) * bVar9;
  bVar2 = auVar4[0xd];
  bVar9 = auVar31[0xd];
  bVar25 = (bVar2 < bVar9) * bVar2 | (bVar2 >= bVar9) * bVar9;
  bVar2 = auVar4[0xe];
  bVar9 = auVar31[0xe];
  bVar26 = (bVar2 < bVar9) * bVar2 | (bVar2 >= bVar9) * bVar9;
  bVar2 = auVar10[0];
  bVar9 = (bVar2 < bVar30) * bVar2 | (bVar2 >= bVar30) * bVar30;
  bVar2 = auVar10[1];
  bVar13 = (bVar2 < bVar35) * bVar2 | (bVar2 >= bVar35) * bVar35;
  bVar2 = auVar10[2];
  bVar14 = (bVar2 < bVar29) * bVar2 | (bVar2 >= bVar29) * bVar29;
  bVar2 = auVar10[3];
  bVar15 = (bVar2 < bVar34) * bVar2 | (bVar2 >= bVar34) * bVar34;
  bVar2 = auVar10[4];
  bVar16 = (bVar2 < bVar36) * bVar2 | (bVar2 >= bVar36) * bVar36;
  bVar2 = auVar10[5];
  bVar17 = (bVar2 < bVar37) * bVar2 | (bVar2 >= bVar37) * bVar37;
  bVar2 = auVar10[6];
  bVar18 = (bVar2 < bVar38) * bVar2 | (bVar2 >= bVar38) * bVar38;
  bVar2 = auVar10[7];
  bVar30 = auVar10[8];
  bVar35 = auVar10[9];
  bVar29 = auVar10[10];
  bVar34 = auVar10[0xb];
  bVar36 = auVar10[0xc];
  bVar37 = auVar10[0xd];
  bVar38 = auVar10[0xe];
  if (7 < (longlong)param_4) {
    *param_3 = bVar9;
    param_3[1] = bVar13;
    param_3[2] = bVar14;
    param_3[3] = bVar15;
    param_3[4] = bVar16;
    param_3[5] = bVar17;
    param_3[6] = bVar18;
    param_3[7] = (bVar2 < bVar19) * bVar2 | (bVar2 >= bVar19) * bVar19;
    param_3 = param_3 + 8;
    param_4 = param_4 - 8;
    bVar9 = (bVar30 < bVar20) * bVar30 | (bVar30 >= bVar20) * bVar20;
    bVar13 = (bVar35 < bVar21) * bVar35 | (bVar35 >= bVar21) * bVar21;
    bVar14 = (bVar29 < bVar22) * bVar29 | (bVar29 >= bVar22) * bVar22;
    bVar15 = (bVar34 < bVar23) * bVar34 | (bVar34 >= bVar23) * bVar23;
    bVar16 = (bVar36 < bVar24) * bVar36 | (bVar36 >= bVar24) * bVar24;
    bVar17 = (bVar37 < bVar25) * bVar37 | (bVar37 >= bVar25) * bVar25;
    bVar18 = (bVar38 < bVar26) * bVar38 | (bVar38 >= bVar26) * bVar26;
    if (param_4 == 0) {
      return;
    }
  }
  if (3 < (longlong)param_4) {
    *param_3 = bVar9;
    param_3[1] = bVar13;
    param_3[2] = bVar14;
    param_3[3] = bVar15;
    param_3 = param_3 + 4;
    param_4 = param_4 - 4;
    bVar9 = bVar16;
    bVar13 = bVar17;
    bVar14 = bVar18;
    if (param_4 == 0) {
      return;
    }
  }
  if (1 < (longlong)param_4) {
    *param_3 = bVar9;
    param_3[1] = bVar13;
    param_3 = param_3 + 2;
    bVar9 = bVar14;
    if (param_4 == 2) {
      return;
    }
  }
  *param_3 = bVar9;
  return;
}


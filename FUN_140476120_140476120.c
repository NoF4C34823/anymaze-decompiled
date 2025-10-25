
void FUN_140476120(undefined8 *param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  byte bVar11;
  byte bVar12;
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
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  
  puVar9 = (undefined8 *)((longlong)param_1 + param_2);
  if (7 < (longlong)param_4) {
    puVar8 = (undefined8 *)((longlong)param_1 + param_2 * 2);
    do {
      uVar1 = *param_1;
      param_4 = param_4 - 8;
      uVar2 = *(undefined8 *)((longlong)param_1 + 4);
      uVar3 = *puVar9;
      uVar4 = *(undefined8 *)((longlong)puVar9 + 4);
      bVar36 = (byte)uVar3;
      bVar18 = (byte)uVar1;
      bVar19 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar3 >> 8);
      bVar18 = (byte)((ulonglong)uVar1 >> 8);
      bVar21 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x10);
      bVar18 = (byte)((ulonglong)uVar1 >> 0x10);
      bVar22 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x18);
      bVar18 = (byte)((ulonglong)uVar1 >> 0x18);
      bVar23 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x20);
      bVar18 = (byte)((ulonglong)uVar1 >> 0x20);
      bVar24 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x28);
      bVar18 = (byte)((ulonglong)uVar1 >> 0x28);
      bVar25 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x30);
      bVar11 = (byte)((ulonglong)uVar1 >> 0x30);
      bVar18 = (byte)((ulonglong)uVar1 >> 0x38);
      bVar26 = (bVar36 < bVar11) * bVar36 | (bVar36 >= bVar11) * bVar11;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x38);
      bVar27 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      uVar1 = puVar9[1];
      bVar36 = (byte)uVar4;
      bVar18 = (byte)uVar2;
      bVar11 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar4 >> 8);
      bVar18 = (byte)((ulonglong)uVar2 >> 8);
      bVar12 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar4 >> 0x10);
      bVar18 = (byte)((ulonglong)uVar2 >> 0x10);
      bVar13 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar4 >> 0x18);
      bVar18 = (byte)((ulonglong)uVar2 >> 0x18);
      bVar14 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar4 >> 0x20);
      bVar18 = (byte)((ulonglong)uVar2 >> 0x20);
      bVar15 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar4 >> 0x28);
      bVar18 = (byte)((ulonglong)uVar2 >> 0x28);
      bVar16 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar4 >> 0x30);
      bVar17 = (byte)((ulonglong)uVar2 >> 0x30);
      bVar18 = (byte)((ulonglong)uVar2 >> 0x38);
      bVar17 = (bVar36 < bVar17) * bVar36 | (bVar36 >= bVar17) * bVar17;
      bVar36 = (byte)((ulonglong)uVar4 >> 0x38);
      bVar18 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      puVar9 = puVar9 + 1;
      uVar2 = *puVar8;
      uVar3 = *(undefined8 *)((longlong)puVar8 + 4);
      bVar36 = (byte)uVar2;
      bVar20 = (bVar36 < bVar19) * bVar36 | (bVar36 >= bVar19) * bVar19;
      bVar36 = (byte)((ulonglong)uVar2 >> 8);
      bVar21 = (bVar36 < bVar21) * bVar36 | (bVar36 >= bVar21) * bVar21;
      bVar36 = (byte)((ulonglong)uVar2 >> 0x10);
      bVar22 = (bVar36 < bVar22) * bVar36 | (bVar36 >= bVar22) * bVar22;
      bVar36 = (byte)((ulonglong)uVar2 >> 0x18);
      bVar23 = (bVar36 < bVar23) * bVar36 | (bVar36 >= bVar23) * bVar23;
      bVar36 = (byte)((ulonglong)uVar2 >> 0x20);
      bVar24 = (bVar36 < bVar24) * bVar36 | (bVar36 >= bVar24) * bVar24;
      bVar36 = (byte)((ulonglong)uVar2 >> 0x28);
      bVar25 = (bVar36 < bVar25) * bVar36 | (bVar36 >= bVar25) * bVar25;
      bVar36 = (byte)((ulonglong)uVar2 >> 0x30);
      bVar26 = (bVar36 < bVar26) * bVar36 | (bVar36 >= bVar26) * bVar26;
      bVar36 = (byte)((ulonglong)uVar2 >> 0x38);
      bVar27 = (bVar36 < bVar27) * bVar36 | (bVar36 >= bVar27) * bVar27;
      uVar2 = param_1[1];
      bVar36 = (byte)uVar3;
      bVar11 = (bVar36 < bVar11) * bVar36 | (bVar36 >= bVar11) * bVar11;
      bVar36 = (byte)((ulonglong)uVar3 >> 8);
      bVar12 = (bVar36 < bVar12) * bVar36 | (bVar36 >= bVar12) * bVar12;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x10);
      bVar13 = (bVar36 < bVar13) * bVar36 | (bVar36 >= bVar13) * bVar13;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x18);
      bVar14 = (bVar36 < bVar14) * bVar36 | (bVar36 >= bVar14) * bVar14;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x20);
      bVar15 = (bVar36 < bVar15) * bVar36 | (bVar36 >= bVar15) * bVar15;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x28);
      bVar16 = (bVar36 < bVar16) * bVar36 | (bVar36 >= bVar16) * bVar16;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x30);
      bVar17 = (bVar36 < bVar17) * bVar36 | (bVar36 >= bVar17) * bVar17;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x38);
      bVar19 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      param_1 = param_1 + 1;
      uVar3 = puVar8[1];
      bVar36 = (byte)uVar1;
      bVar18 = (byte)uVar2;
      bVar28 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar1 >> 8);
      bVar18 = (byte)((ulonglong)uVar2 >> 8);
      bVar29 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar1 >> 0x10);
      bVar18 = (byte)((ulonglong)uVar2 >> 0x10);
      bVar30 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar1 >> 0x18);
      bVar18 = (byte)((ulonglong)uVar2 >> 0x18);
      bVar31 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar1 >> 0x20);
      bVar18 = (byte)((ulonglong)uVar2 >> 0x20);
      bVar32 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar1 >> 0x28);
      bVar18 = (byte)((ulonglong)uVar2 >> 0x28);
      bVar33 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((ulonglong)uVar1 >> 0x30);
      bVar34 = (byte)((ulonglong)uVar2 >> 0x30);
      bVar18 = (byte)((ulonglong)uVar2 >> 0x38);
      bVar34 = (bVar36 < bVar34) * bVar36 | (bVar36 >= bVar34) * bVar34;
      bVar36 = (byte)((ulonglong)uVar1 >> 0x38);
      bVar35 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar18 = (bVar11 < bVar20) * bVar11 | (bVar11 >= bVar20) * bVar20;
      bVar11 = (bVar12 < bVar21) * bVar12 | (bVar12 >= bVar21) * bVar21;
      bVar12 = (bVar13 < bVar22) * bVar13 | (bVar13 >= bVar22) * bVar22;
      bVar13 = (bVar14 < bVar23) * bVar14 | (bVar14 >= bVar23) * bVar23;
      bVar14 = (bVar15 < bVar24) * bVar15 | (bVar15 >= bVar24) * bVar24;
      bVar15 = (bVar16 < bVar25) * bVar16 | (bVar16 >= bVar25) * bVar25;
      bVar16 = (bVar17 < bVar26) * bVar17 | (bVar17 >= bVar26) * bVar26;
      bVar17 = (bVar19 < bVar27) * bVar19 | (bVar19 >= bVar27) * bVar27;
      bVar36 = (byte)uVar3;
      bVar19 = (bVar36 < bVar28) * bVar36 | (bVar36 >= bVar28) * bVar28;
      bVar36 = (byte)((ulonglong)uVar3 >> 8);
      bVar20 = (bVar36 < bVar29) * bVar36 | (bVar36 >= bVar29) * bVar29;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x10);
      bVar21 = (bVar36 < bVar30) * bVar36 | (bVar36 >= bVar30) * bVar30;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x18);
      bVar22 = (bVar36 < bVar31) * bVar36 | (bVar36 >= bVar31) * bVar31;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x20);
      bVar23 = (bVar36 < bVar32) * bVar36 | (bVar36 >= bVar32) * bVar32;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x28);
      bVar24 = (bVar36 < bVar33) * bVar36 | (bVar36 >= bVar33) * bVar33;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x30);
      bVar25 = (bVar36 < bVar34) * bVar36 | (bVar36 >= bVar34) * bVar34;
      bVar36 = (byte)((ulonglong)uVar3 >> 0x38);
      bVar36 = (bVar36 < bVar35) * bVar36 | (bVar36 >= bVar35) * bVar35;
      puVar8 = puVar8 + 1;
      *param_3 = CONCAT17((bVar36 < bVar17) * bVar36 | (bVar36 >= bVar17) * bVar17,
                          CONCAT16((bVar25 < bVar16) * bVar25 | (bVar25 >= bVar16) * bVar16,
                                   CONCAT15((bVar24 < bVar15) * bVar24 | (bVar24 >= bVar15) * bVar15
                                            ,CONCAT14((bVar23 < bVar14) * bVar23 |
                                                      (bVar23 >= bVar14) * bVar14,
                                                      CONCAT13((bVar22 < bVar13) * bVar22 |
                                                               (bVar22 >= bVar13) * bVar13,
                                                               CONCAT12((bVar21 < bVar12) * bVar21 |
                                                                        (bVar21 >= bVar12) * bVar12,
                                                                        CONCAT11((bVar20 < bVar11) *
                                                                                 bVar20 | (bVar20 >=
                                                                                          bVar11) * 
                                                  bVar11,(bVar19 < bVar18) * bVar19 |
                                                         (bVar19 >= bVar18) * bVar18)))))));
      param_3 = param_3 + 1;
    } while (7 < (longlong)param_4);
  }
  uVar10 = 0;
  if (3 < (longlong)param_4) {
    do {
      uVar5 = *(undefined4 *)((longlong)param_1 + uVar10 * 4);
      uVar6 = *(undefined4 *)((longlong)param_1 + uVar10 * 4 + param_2);
      bVar36 = (byte)uVar6;
      bVar18 = (byte)uVar5;
      bVar18 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((uint)uVar6 >> 8);
      bVar11 = (byte)((uint)uVar5 >> 8);
      bVar11 = (bVar36 < bVar11) * bVar36 | (bVar36 >= bVar11) * bVar11;
      bVar36 = (byte)((uint)uVar6 >> 0x10);
      bVar12 = (byte)((uint)uVar5 >> 0x10);
      bVar12 = (bVar36 < bVar12) * bVar36 | (bVar36 >= bVar12) * bVar12;
      bVar36 = (byte)((uint)uVar6 >> 0x18);
      bVar13 = (byte)((uint)uVar5 >> 0x18);
      bVar13 = (bVar36 < bVar13) * bVar36 | (bVar36 >= bVar13) * bVar13;
      uVar5 = *(undefined4 *)((longlong)param_1 + uVar10 * 4 + param_2 * 2);
      bVar36 = (byte)uVar5;
      bVar18 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = (byte)((uint)uVar5 >> 8);
      bVar11 = (bVar36 < bVar11) * bVar36 | (bVar36 >= bVar11) * bVar11;
      bVar36 = (byte)((uint)uVar5 >> 0x10);
      bVar12 = (bVar36 < bVar12) * bVar36 | (bVar36 >= bVar12) * bVar12;
      bVar36 = (byte)((uint)uVar5 >> 0x18);
      bVar13 = (bVar36 < bVar13) * bVar36 | (bVar36 >= bVar13) * bVar13;
      uVar5 = *(undefined4 *)((longlong)param_1 + uVar10 * 4 + 4);
      uVar6 = *(undefined4 *)((longlong)param_1 + uVar10 * 4 + param_2 + 4);
      uVar7 = *(undefined4 *)((longlong)param_1 + uVar10 * 4 + param_2 + 8);
      bVar36 = (byte)uVar6;
      bVar14 = (byte)uVar5;
      bVar14 = (bVar36 < bVar14) * bVar36 | (bVar36 >= bVar14) * bVar14;
      bVar36 = (byte)((uint)uVar6 >> 8);
      bVar15 = (byte)((uint)uVar5 >> 8);
      bVar15 = (bVar36 < bVar15) * bVar36 | (bVar36 >= bVar15) * bVar15;
      bVar36 = (byte)((uint)uVar6 >> 0x10);
      bVar16 = (byte)((uint)uVar5 >> 0x10);
      bVar16 = (bVar36 < bVar16) * bVar36 | (bVar36 >= bVar16) * bVar16;
      bVar36 = (byte)((uint)uVar6 >> 0x18);
      bVar17 = (byte)((uint)uVar5 >> 0x18);
      bVar17 = (bVar36 < bVar17) * bVar36 | (bVar36 >= bVar17) * bVar17;
      uVar5 = *(undefined4 *)((longlong)param_1 + uVar10 * 4 + param_2 * 2 + 4);
      uVar6 = *(undefined4 *)((longlong)param_1 + uVar10 * 4 + 8);
      bVar36 = (byte)uVar5;
      bVar19 = (bVar36 < bVar14) * bVar36 | (bVar36 >= bVar14) * bVar14;
      bVar36 = (byte)((uint)uVar5 >> 8);
      bVar20 = (bVar36 < bVar15) * bVar36 | (bVar36 >= bVar15) * bVar15;
      bVar36 = (byte)((uint)uVar5 >> 0x10);
      bVar21 = (bVar36 < bVar16) * bVar36 | (bVar36 >= bVar16) * bVar16;
      bVar36 = (byte)((uint)uVar5 >> 0x18);
      bVar22 = (bVar36 < bVar17) * bVar36 | (bVar36 >= bVar17) * bVar17;
      bVar36 = (byte)uVar7;
      bVar14 = (byte)uVar6;
      bVar14 = (bVar36 < bVar14) * bVar36 | (bVar36 >= bVar14) * bVar14;
      bVar36 = (byte)((uint)uVar7 >> 8);
      bVar15 = (byte)((uint)uVar6 >> 8);
      bVar15 = (bVar36 < bVar15) * bVar36 | (bVar36 >= bVar15) * bVar15;
      bVar36 = (byte)((uint)uVar7 >> 0x10);
      bVar16 = (byte)((uint)uVar6 >> 0x10);
      bVar16 = (bVar36 < bVar16) * bVar36 | (bVar36 >= bVar16) * bVar16;
      bVar36 = (byte)((uint)uVar7 >> 0x18);
      bVar17 = (byte)((uint)uVar6 >> 0x18);
      bVar17 = (bVar36 < bVar17) * bVar36 | (bVar36 >= bVar17) * bVar17;
      uVar5 = *(undefined4 *)((longlong)param_1 + uVar10 * 4 + param_2 * 2 + 8);
      bVar18 = (bVar19 < bVar18) * bVar19 | (bVar19 >= bVar18) * bVar18;
      bVar11 = (bVar20 < bVar11) * bVar20 | (bVar20 >= bVar11) * bVar11;
      bVar12 = (bVar21 < bVar12) * bVar21 | (bVar21 >= bVar12) * bVar12;
      bVar13 = (bVar22 < bVar13) * bVar22 | (bVar22 >= bVar13) * bVar13;
      bVar36 = (byte)uVar5;
      bVar14 = (bVar36 < bVar14) * bVar36 | (bVar36 >= bVar14) * bVar14;
      bVar36 = (byte)((uint)uVar5 >> 8);
      bVar15 = (bVar36 < bVar15) * bVar36 | (bVar36 >= bVar15) * bVar15;
      bVar36 = (byte)((uint)uVar5 >> 0x10);
      bVar16 = (bVar36 < bVar16) * bVar36 | (bVar36 >= bVar16) * bVar16;
      bVar36 = (byte)((uint)uVar5 >> 0x18);
      bVar36 = (bVar36 < bVar17) * bVar36 | (bVar36 >= bVar17) * bVar17;
      *(uint *)((longlong)param_3 + uVar10 * 4) =
           CONCAT13((bVar36 < bVar13) * bVar36 | (bVar36 >= bVar13) * bVar13,
                    CONCAT12((bVar16 < bVar12) * bVar16 | (bVar16 >= bVar12) * bVar12,
                             CONCAT11((bVar15 < bVar11) * bVar15 | (bVar15 >= bVar11) * bVar11,
                                      (bVar14 < bVar18) * bVar14 | (bVar14 >= bVar18) * bVar18)));
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_4 >> 2);
    param_1 = (undefined8 *)((longlong)param_1 + uVar10 * 4);
    param_3 = (undefined8 *)((longlong)param_3 + uVar10 * 4);
    param_4 = param_4 + uVar10 * -4;
  }
  uVar10 = 0;
  if (0 < (longlong)param_4) {
    do {
      bVar36 = *(byte *)(uVar10 + (longlong)param_1);
      bVar18 = *(byte *)(uVar10 + 4 + (longlong)param_1);
      bVar11 = *(byte *)((longlong)param_1 + uVar10 + 8 + param_2);
      bVar12 = *(byte *)((longlong)param_1 + uVar10 + param_2);
      bVar14 = (bVar12 < bVar36) * bVar12 | (bVar12 >= bVar36) * bVar36;
      bVar36 = *(byte *)((longlong)param_1 + uVar10 + 4 + param_2);
      bVar12 = *(byte *)((longlong)param_1 + uVar10 + param_2 * 2);
      bVar13 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      bVar36 = *(byte *)((longlong)param_1 + uVar10 + 4 + param_2 * 2);
      bVar14 = (bVar12 < bVar14) * bVar12 | (bVar12 >= bVar14) * bVar14;
      bVar18 = *(byte *)(uVar10 + 8 + (longlong)param_1);
      bVar12 = (bVar36 < bVar13) * bVar36 | (bVar36 >= bVar13) * bVar13;
      bVar36 = *(byte *)((longlong)param_1 + uVar10 + 8 + param_2 * 2);
      bVar12 = (bVar12 < bVar14) * bVar12 | (bVar12 >= bVar14) * bVar14;
      bVar18 = (bVar11 < bVar18) * bVar11 | (bVar11 >= bVar18) * bVar18;
      bVar36 = (bVar36 < bVar18) * bVar36 | (bVar36 >= bVar18) * bVar18;
      *(byte *)(uVar10 + (longlong)param_3) =
           (bVar36 < bVar12) * bVar36 | (bVar36 >= bVar12) * bVar12;
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_4);
  }
  return;
}


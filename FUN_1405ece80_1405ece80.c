
void FUN_1405ece80(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (3 < (longlong)param_3) {
    uVar30 = param_2 & 0xf;
    if (uVar30 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1405ed09e;
      uVar30 = 0x10 - uVar30 >> 2;
    }
    if ((longlong)(uVar30 + 4) <= (longlong)param_3) {
      uVar28 = 0;
      uVar29 = param_3 - (param_3 - uVar30 & 3);
      if (uVar30 != 0) {
        do {
          *(float *)(param_2 + uVar28 * 4) =
               (float)((uint)*(ushort *)(param_1 + -4 + uVar28 * 2) +
                      (uint)*(ushort *)(param_1 + 4 + uVar28 * 2)) * fVar2 +
               (float)((uint)*(ushort *)(param_1 + -2 + uVar28 * 2) +
                      (uint)*(ushort *)(param_1 + 2 + uVar28 * 2)) * fVar3 +
               (float)*(ushort *)(param_1 + uVar28 * 2) * fVar4;
          uVar28 = uVar28 + 1;
        } while (uVar28 < uVar30);
      }
      do {
        uVar28 = *(ulonglong *)(param_1 + 2 + uVar30 * 2);
        uVar5 = *(ulonglong *)(param_1 + uVar30 * 2);
        uVar6 = *(ulonglong *)(param_1 + -2 + uVar30 * 2);
        auVar9._8_4_ = 0;
        auVar9._0_8_ = uVar28;
        auVar9._12_2_ = (short)(uVar28 >> 0x30);
        auVar14._8_2_ = (short)(uVar28 >> 0x20);
        auVar14._0_8_ = uVar28;
        auVar14._10_4_ = auVar9._10_4_;
        auVar23._6_8_ = 0;
        auVar23._0_6_ = auVar14._8_6_;
        auVar19._4_2_ = (short)(uVar28 >> 0x10);
        auVar19._0_4_ = (uint)uVar28;
        auVar19._6_8_ = SUB148(auVar23 << 0x40,6);
        auVar10._8_4_ = 0;
        auVar10._0_8_ = uVar5;
        auVar10._12_2_ = (short)(uVar5 >> 0x30);
        auVar15._8_2_ = (short)(uVar5 >> 0x20);
        auVar15._0_8_ = uVar5;
        auVar15._10_4_ = auVar10._10_4_;
        auVar24._6_8_ = 0;
        auVar24._0_6_ = auVar15._8_6_;
        auVar20._4_2_ = (short)(uVar5 >> 0x10);
        auVar20._0_4_ = (uint)uVar5;
        auVar20._6_8_ = SUB148(auVar24 << 0x40,6);
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar6;
        auVar11._12_2_ = (short)(uVar6 >> 0x30);
        auVar16._8_2_ = (short)(uVar6 >> 0x20);
        auVar16._0_8_ = uVar6;
        auVar16._10_4_ = auVar11._10_4_;
        auVar25._6_8_ = 0;
        auVar25._0_6_ = auVar16._8_6_;
        uVar7 = *(ulonglong *)(param_1 + 4 + uVar30 * 2);
        uVar8 = *(ulonglong *)(param_1 + -4 + uVar30 * 2);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar8;
        auVar12._12_2_ = (short)(uVar8 >> 0x30);
        auVar17._8_2_ = (short)(uVar8 >> 0x20);
        auVar17._0_8_ = uVar8;
        auVar17._10_4_ = auVar12._10_4_;
        auVar26._6_8_ = 0;
        auVar26._0_6_ = auVar17._8_6_;
        auVar21._4_2_ = (short)(uVar8 >> 0x10);
        auVar21._0_4_ = (uint)uVar8;
        auVar21._6_8_ = SUB148(auVar26 << 0x40,6);
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar7;
        auVar13._12_2_ = (short)(uVar7 >> 0x30);
        auVar18._8_2_ = (short)(uVar7 >> 0x20);
        auVar18._0_8_ = uVar7;
        auVar18._10_4_ = auVar13._10_4_;
        auVar27._6_8_ = 0;
        auVar27._0_6_ = auVar18._8_6_;
        auVar22._4_2_ = (short)(uVar7 >> 0x10);
        auVar22._0_4_ = (uint)uVar7;
        auVar22._6_8_ = SUB148(auVar27 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar30 * 4);
        *pfVar1 = (float)(((uint)uVar8 & 0xffff) + ((uint)uVar7 & 0xffff)) * fVar2 +
                  (float)((uint)(ushort)uVar6 + ((uint)uVar28 & 0xffff)) * fVar3 +
                  (float)((uint)uVar5 & 0xffff) * fVar4;
        pfVar1[1] = (float)(auVar21._4_4_ + auVar22._4_4_) * fVar2 +
                    (float)((int)CONCAT82(SUB148(auVar25 << 0x40,6),(short)(uVar6 >> 0x10)) +
                           auVar19._4_4_) * fVar3 + (float)auVar20._4_4_ * fVar4;
        pfVar1[2] = (float)(auVar17._8_4_ + auVar18._8_4_) * fVar2 +
                    (float)(auVar16._8_4_ + auVar14._8_4_) * fVar3 + (float)auVar15._8_4_ * fVar4;
        pfVar1[3] = (float)((auVar12._10_4_ >> 0x10) + (auVar13._10_4_ >> 0x10)) * fVar2 +
                    (float)((auVar11._10_4_ >> 0x10) + (auVar9._10_4_ >> 0x10)) * fVar3 +
                    (float)(auVar10._10_4_ >> 0x10) * fVar4;
        uVar30 = uVar30 + 4;
      } while (uVar30 < uVar29);
      for (; uVar29 < param_3; uVar29 = uVar29 + 1) {
        *(float *)(param_2 + uVar29 * 4) =
             (float)((uint)*(ushort *)(param_1 + -4 + uVar29 * 2) +
                    (uint)*(ushort *)(param_1 + 4 + uVar29 * 2)) * fVar2 +
             (float)((uint)*(ushort *)(param_1 + -2 + uVar29 * 2) +
                    (uint)*(ushort *)(param_1 + 2 + uVar29 * 2)) * fVar3 +
             (float)*(ushort *)(param_1 + uVar29 * 2) * fVar4;
      }
      return;
    }
  }
LAB_1405ed09e:
  FUN_1405ed02c(0);
  return;
}


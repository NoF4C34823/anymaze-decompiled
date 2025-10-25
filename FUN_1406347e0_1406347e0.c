
void FUN_1406347e0(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  undefined1 auVar28 [14];
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  
  uVar9 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)uVar9 < 1) {
    return;
  }
  if (3 < (longlong)uVar9) {
    uVar31 = param_2 & 0xf;
    if (uVar31 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1406349fe;
      uVar31 = 0x10 - uVar31 >> 2;
    }
    if ((longlong)(uVar31 + 4) <= (longlong)uVar9) {
      uVar29 = 0;
      uVar30 = uVar9 - (uVar9 - uVar31 & 3);
      if (uVar31 != 0) {
        do {
          *(float *)(param_2 + uVar29 * 4) =
               (float)((uint)*(ushort *)(param_1 + -0xc + uVar29 * 2) +
                      (uint)*(ushort *)(param_1 + 0xc + uVar29 * 2)) * fVar2 +
               (float)((uint)*(ushort *)(param_1 + -6 + uVar29 * 2) +
                      (uint)*(ushort *)(param_1 + 6 + uVar29 * 2)) * fVar3 +
               (float)*(ushort *)(param_1 + uVar29 * 2) * fVar4;
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar31);
      }
      do {
        uVar29 = *(ulonglong *)(param_1 + -0xc + uVar31 * 2);
        uVar5 = *(ulonglong *)(param_1 + 0xc + uVar31 * 2);
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar29;
        auVar14._12_2_ = (short)(uVar29 >> 0x30);
        auVar19._8_2_ = (short)(uVar29 >> 0x20);
        auVar19._0_8_ = uVar29;
        auVar19._10_4_ = auVar14._10_4_;
        auVar24._6_8_ = 0;
        auVar24._0_6_ = auVar19._8_6_;
        auVar10._8_4_ = 0;
        auVar10._0_8_ = uVar5;
        auVar10._12_2_ = (short)(uVar5 >> 0x30);
        auVar15._8_2_ = (short)(uVar5 >> 0x20);
        auVar15._0_8_ = uVar5;
        auVar15._10_4_ = auVar10._10_4_;
        auVar25._6_8_ = 0;
        auVar25._0_6_ = auVar15._8_6_;
        auVar20._4_2_ = (short)(uVar5 >> 0x10);
        auVar20._0_4_ = (uint)uVar5;
        auVar20._6_8_ = SUB148(auVar25 << 0x40,6);
        uVar6 = *(ulonglong *)(param_1 + -6 + uVar31 * 2);
        uVar7 = *(ulonglong *)(param_1 + 6 + uVar31 * 2);
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar6;
        auVar11._12_2_ = (short)(uVar6 >> 0x30);
        auVar16._8_2_ = (short)(uVar6 >> 0x20);
        auVar16._0_8_ = uVar6;
        auVar16._10_4_ = auVar11._10_4_;
        auVar26._6_8_ = 0;
        auVar26._0_6_ = auVar16._8_6_;
        auVar21._4_2_ = (short)(uVar6 >> 0x10);
        auVar21._0_4_ = (uint)uVar6;
        auVar21._6_8_ = SUB148(auVar26 << 0x40,6);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar7;
        auVar12._12_2_ = (short)(uVar7 >> 0x30);
        auVar17._8_2_ = (short)(uVar7 >> 0x20);
        auVar17._0_8_ = uVar7;
        auVar17._10_4_ = auVar12._10_4_;
        auVar27._6_8_ = 0;
        auVar27._0_6_ = auVar17._8_6_;
        auVar22._4_2_ = (short)(uVar7 >> 0x10);
        auVar22._0_4_ = (uint)uVar7;
        auVar22._6_8_ = SUB148(auVar27 << 0x40,6);
        uVar8 = *(ulonglong *)(param_1 + uVar31 * 2);
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar8;
        auVar13._12_2_ = (short)(uVar8 >> 0x30);
        auVar18._8_2_ = (short)(uVar8 >> 0x20);
        auVar18._0_8_ = uVar8;
        auVar18._10_4_ = auVar13._10_4_;
        auVar28._6_8_ = 0;
        auVar28._0_6_ = auVar18._8_6_;
        auVar23._4_2_ = (short)(uVar8 >> 0x10);
        auVar23._0_4_ = (uint)uVar8;
        auVar23._6_8_ = SUB148(auVar28 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar31 * 4);
        *pfVar1 = (float)((uint)(ushort)uVar29 + ((uint)uVar5 & 0xffff)) * fVar2 +
                  (float)(((uint)uVar6 & 0xffff) + ((uint)uVar7 & 0xffff)) * fVar3 +
                  (float)((uint)uVar8 & 0xffff) * fVar4;
        pfVar1[1] = (float)((int)CONCAT82(SUB148(auVar24 << 0x40,6),(short)(uVar29 >> 0x10)) +
                           auVar20._4_4_) * fVar2 + (float)(auVar21._4_4_ + auVar22._4_4_) * fVar3 +
                    (float)auVar23._4_4_ * fVar4;
        pfVar1[2] = (float)(auVar19._8_4_ + auVar15._8_4_) * fVar2 +
                    (float)(auVar16._8_4_ + auVar17._8_4_) * fVar3 + (float)auVar18._8_4_ * fVar4;
        pfVar1[3] = (float)((auVar14._10_4_ >> 0x10) + (auVar10._10_4_ >> 0x10)) * fVar2 +
                    (float)((auVar11._10_4_ >> 0x10) + (auVar12._10_4_ >> 0x10)) * fVar3 +
                    (float)(auVar13._10_4_ >> 0x10) * fVar4;
        uVar31 = uVar31 + 4;
      } while (uVar31 < uVar30);
      for (; uVar30 < uVar9; uVar30 = uVar30 + 1) {
        *(float *)(param_2 + uVar30 * 4) =
             (float)((uint)*(ushort *)(param_1 + -0xc + uVar30 * 2) +
                    (uint)*(ushort *)(param_1 + 0xc + uVar30 * 2)) * fVar2 +
             (float)((uint)*(ushort *)(param_1 + -6 + uVar30 * 2) +
                    (uint)*(ushort *)(param_1 + 6 + uVar30 * 2)) * fVar3 +
             (float)*(ushort *)(param_1 + uVar30 * 2) * fVar4;
      }
      return;
    }
  }
LAB_1406349fe:
  FUN_140634986(0);
  return;
}


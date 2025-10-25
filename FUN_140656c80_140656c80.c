
void FUN_140656c80(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
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
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (3 < (longlong)param_3) {
    uVar41 = param_2 & 0xf;
    if (uVar41 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140656f76;
      uVar41 = 0x10 - uVar41 >> 2;
    }
    if ((longlong)(uVar41 + 4) <= (longlong)param_3) {
      uVar39 = 0;
      uVar40 = param_3 - (param_3 - uVar41 & 3);
      if (uVar41 != 0) {
        do {
          *(float *)(param_2 + uVar39 * 4) =
               (float)((uint)*(ushort *)(param_1 + -6 + uVar39 * 2) +
                      (uint)*(ushort *)(param_1 + 6 + uVar39 * 2)) * fVar2 +
               (float)((uint)*(ushort *)(param_1 + -4 + uVar39 * 2) +
                      (uint)*(ushort *)(param_1 + 4 + uVar39 * 2)) * fVar3 +
               (float)((uint)*(ushort *)(param_1 + -2 + uVar39 * 2) +
                      (uint)*(ushort *)(param_1 + 2 + uVar39 * 2)) * fVar4 +
               (float)*(ushort *)(param_1 + uVar39 * 2) * fVar5;
          uVar39 = uVar39 + 1;
        } while (uVar39 < uVar41);
      }
      do {
        uVar39 = *(ulonglong *)(param_1 + uVar41 * 2);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar39;
        auVar12._12_2_ = (short)(uVar39 >> 0x30);
        auVar19._8_2_ = (short)(uVar39 >> 0x20);
        auVar19._0_8_ = uVar39;
        auVar19._10_4_ = auVar12._10_4_;
        auVar32._6_8_ = 0;
        auVar32._0_6_ = auVar19._8_6_;
        auVar26._4_2_ = (short)(uVar39 >> 0x10);
        auVar26._0_4_ = (uint)uVar39;
        auVar26._6_8_ = SUB148(auVar32 << 0x40,6);
        uVar6 = *(ulonglong *)(param_1 + 6 + uVar41 * 2);
        uVar7 = *(ulonglong *)(param_1 + -6 + uVar41 * 2);
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar7;
        auVar13._12_2_ = (short)(uVar7 >> 0x30);
        auVar20._8_2_ = (short)(uVar7 >> 0x20);
        auVar20._0_8_ = uVar7;
        auVar20._10_4_ = auVar13._10_4_;
        auVar33._6_8_ = 0;
        auVar33._0_6_ = auVar20._8_6_;
        auVar27._4_2_ = (short)(uVar7 >> 0x10);
        auVar27._0_4_ = (uint)uVar7;
        auVar27._6_8_ = SUB148(auVar33 << 0x40,6);
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar6;
        auVar14._12_2_ = (short)(uVar6 >> 0x30);
        auVar21._8_2_ = (short)(uVar6 >> 0x20);
        auVar21._0_8_ = uVar6;
        auVar21._10_4_ = auVar14._10_4_;
        auVar34._6_8_ = 0;
        auVar34._0_6_ = auVar21._8_6_;
        uVar8 = *(ulonglong *)(param_1 + -4 + uVar41 * 2);
        uVar9 = *(ulonglong *)(param_1 + 4 + uVar41 * 2);
        auVar15._8_4_ = 0;
        auVar15._0_8_ = uVar8;
        auVar15._12_2_ = (short)(uVar8 >> 0x30);
        auVar22._8_2_ = (short)(uVar8 >> 0x20);
        auVar22._0_8_ = uVar8;
        auVar22._10_4_ = auVar15._10_4_;
        auVar35._6_8_ = 0;
        auVar35._0_6_ = auVar22._8_6_;
        auVar28._4_2_ = (short)(uVar8 >> 0x10);
        auVar28._0_4_ = (uint)uVar8;
        auVar28._6_8_ = SUB148(auVar35 << 0x40,6);
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar9;
        auVar16._12_2_ = (short)(uVar9 >> 0x30);
        auVar23._8_2_ = (short)(uVar9 >> 0x20);
        auVar23._0_8_ = uVar9;
        auVar23._10_4_ = auVar16._10_4_;
        auVar36._6_8_ = 0;
        auVar36._0_6_ = auVar23._8_6_;
        auVar29._4_2_ = (short)(uVar9 >> 0x10);
        auVar29._0_4_ = (uint)uVar9;
        auVar29._6_8_ = SUB148(auVar36 << 0x40,6);
        uVar10 = *(ulonglong *)(param_1 + -2 + uVar41 * 2);
        uVar11 = *(ulonglong *)(param_1 + 2 + uVar41 * 2);
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar10;
        auVar17._12_2_ = (short)(uVar10 >> 0x30);
        auVar24._8_2_ = (short)(uVar10 >> 0x20);
        auVar24._0_8_ = uVar10;
        auVar24._10_4_ = auVar17._10_4_;
        auVar37._6_8_ = 0;
        auVar37._0_6_ = auVar24._8_6_;
        auVar30._4_2_ = (short)(uVar10 >> 0x10);
        auVar30._0_4_ = (uint)uVar10;
        auVar30._6_8_ = SUB148(auVar37 << 0x40,6);
        auVar18._8_4_ = 0;
        auVar18._0_8_ = uVar11;
        auVar18._12_2_ = (short)(uVar11 >> 0x30);
        auVar25._8_2_ = (short)(uVar11 >> 0x20);
        auVar25._0_8_ = uVar11;
        auVar25._10_4_ = auVar18._10_4_;
        auVar38._6_8_ = 0;
        auVar38._0_6_ = auVar25._8_6_;
        auVar31._4_2_ = (short)(uVar11 >> 0x10);
        auVar31._0_4_ = (uint)uVar11;
        auVar31._6_8_ = SUB148(auVar38 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar41 * 4);
        *pfVar1 = (float)(((uint)uVar7 & 0xffff) + (uint)(ushort)uVar6) * fVar2 +
                  (float)(((uint)uVar8 & 0xffff) + ((uint)uVar9 & 0xffff)) * fVar3 +
                  (float)(((uint)uVar10 & 0xffff) + ((uint)uVar11 & 0xffff)) * fVar4 +
                  (float)((uint)uVar39 & 0xffff) * fVar5;
        pfVar1[1] = (float)(auVar27._4_4_ +
                           (int)CONCAT82(SUB148(auVar34 << 0x40,6),(short)(uVar6 >> 0x10))) * fVar2
                    + (float)(auVar28._4_4_ + auVar29._4_4_) * fVar3 +
                    (float)(auVar30._4_4_ + auVar31._4_4_) * fVar4 + (float)auVar26._4_4_ * fVar5;
        pfVar1[2] = (float)(auVar20._8_4_ + auVar21._8_4_) * fVar2 +
                    (float)(auVar22._8_4_ + auVar23._8_4_) * fVar3 +
                    (float)(auVar24._8_4_ + auVar25._8_4_) * fVar4 + (float)auVar19._8_4_ * fVar5;
        pfVar1[3] = (float)((auVar13._10_4_ >> 0x10) + (auVar14._10_4_ >> 0x10)) * fVar2 +
                    (float)((auVar15._10_4_ >> 0x10) + (auVar16._10_4_ >> 0x10)) * fVar3 +
                    (float)((auVar17._10_4_ >> 0x10) + (auVar18._10_4_ >> 0x10)) * fVar4 +
                    (float)(auVar12._10_4_ >> 0x10) * fVar5;
        uVar41 = uVar41 + 4;
      } while (uVar41 < uVar40);
      for (; uVar40 < param_3; uVar40 = uVar40 + 1) {
        *(float *)(param_2 + uVar40 * 4) =
             (float)((uint)*(ushort *)(param_1 + -6 + uVar40 * 2) +
                    (uint)*(ushort *)(param_1 + 6 + uVar40 * 2)) * fVar2 +
             (float)((uint)*(ushort *)(param_1 + -4 + uVar40 * 2) +
                    (uint)*(ushort *)(param_1 + 4 + uVar40 * 2)) * fVar3 +
             (float)((uint)*(ushort *)(param_1 + -2 + uVar40 * 2) +
                    (uint)*(ushort *)(param_1 + 2 + uVar40 * 2)) * fVar4 +
             (float)*(ushort *)(param_1 + uVar40 * 2) * fVar5;
      }
      return;
    }
  }
LAB_140656f76:
  FUN_140656ec2(0);
  return;
}


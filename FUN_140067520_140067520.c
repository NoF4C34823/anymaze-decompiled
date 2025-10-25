
void FUN_140067520(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

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
  ulonglong uVar14;
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
  ulonglong uVar30;
  ulonglong *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  
  uVar14 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)uVar14 < 1) {
    return;
  }
  if (3 < (longlong)uVar14) {
    uVar32 = param_2 & 0xf;
    if (uVar32 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140067757;
      uVar32 = 0x10 - uVar32 >> 2;
    }
    if ((longlong)(uVar32 + 4) <= (longlong)uVar14) {
      uVar30 = 0;
      uVar33 = uVar14 - (uVar14 - uVar32 & 3);
      if (uVar32 != 0) {
        do {
          *(float *)(param_2 + uVar30 * 4) =
               (float)((uint)*(ushort *)(param_1 + -0xc + uVar30 * 2) +
                      (uint)*(ushort *)(param_1 + 0xc + uVar30 * 2)) * fVar2 +
               (float)((uint)*(ushort *)(param_1 + -6 + uVar30 * 2) +
                      (uint)*(ushort *)(param_1 + 6 + uVar30 * 2)) * fVar3 +
               (float)*(ushort *)(param_1 + uVar30 * 2) * fVar4;
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar32);
      }
      puVar31 = (ulonglong *)(uVar32 * 2 + param_1);
      do {
        uVar30 = *(ulonglong *)((longlong)puVar31 + -0xc);
        uVar5 = *(ulonglong *)((longlong)puVar31 + 0xc);
        auVar9._8_4_ = 0;
        auVar9._0_8_ = uVar30;
        auVar9._12_2_ = (short)(uVar30 >> 0x30);
        auVar15._8_2_ = (short)(uVar30 >> 0x20);
        auVar15._0_8_ = uVar30;
        auVar15._10_4_ = auVar9._10_4_;
        auVar25._6_8_ = 0;
        auVar25._0_6_ = auVar15._8_6_;
        auVar20._4_2_ = (short)(uVar30 >> 0x10);
        auVar20._0_4_ = (uint)uVar30;
        auVar20._6_8_ = SUB148(auVar25 << 0x40,6);
        auVar10._8_4_ = 0;
        auVar10._0_8_ = uVar5;
        auVar10._12_2_ = (short)(uVar5 >> 0x30);
        auVar16._8_2_ = (short)(uVar5 >> 0x20);
        auVar16._0_8_ = uVar5;
        auVar16._10_4_ = auVar10._10_4_;
        auVar26._6_8_ = 0;
        auVar26._0_6_ = auVar16._8_6_;
        auVar21._4_2_ = (short)(uVar5 >> 0x10);
        auVar21._0_4_ = (uint)uVar5;
        auVar21._6_8_ = SUB148(auVar26 << 0x40,6);
        uVar6 = *(ulonglong *)((longlong)puVar31 + 6);
        uVar7 = *(ulonglong *)((longlong)puVar31 + -6);
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar7;
        auVar11._12_2_ = (short)(uVar7 >> 0x30);
        auVar17._8_2_ = (short)(uVar7 >> 0x20);
        auVar17._0_8_ = uVar7;
        auVar17._10_4_ = auVar11._10_4_;
        auVar27._6_8_ = 0;
        auVar27._0_6_ = auVar17._8_6_;
        auVar22._4_2_ = (short)(uVar7 >> 0x10);
        auVar22._0_4_ = (uint)uVar7;
        auVar22._6_8_ = SUB148(auVar27 << 0x40,6);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar6;
        auVar12._12_2_ = (short)(uVar6 >> 0x30);
        auVar18._8_2_ = (short)(uVar6 >> 0x20);
        auVar18._0_8_ = uVar6;
        auVar18._10_4_ = auVar12._10_4_;
        auVar28._6_8_ = 0;
        auVar28._0_6_ = auVar18._8_6_;
        auVar23._4_2_ = (short)(uVar6 >> 0x10);
        auVar23._0_4_ = (uint)uVar6;
        auVar23._6_8_ = SUB148(auVar28 << 0x40,6);
        uVar8 = *puVar31;
        puVar31 = puVar31 + 1;
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar8;
        auVar13._12_2_ = (short)(uVar8 >> 0x30);
        auVar19._8_2_ = (short)(uVar8 >> 0x20);
        auVar19._0_8_ = uVar8;
        auVar19._10_4_ = auVar13._10_4_;
        auVar29._6_8_ = 0;
        auVar29._0_6_ = auVar19._8_6_;
        auVar24._4_2_ = (short)(uVar8 >> 0x10);
        auVar24._0_4_ = (uint)uVar8;
        auVar24._6_8_ = SUB148(auVar29 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar32 * 4);
        *pfVar1 = (float)(((uint)uVar30 & 0xffff) + ((uint)uVar5 & 0xffff)) * fVar2 +
                  (float)(((uint)uVar7 & 0xffff) + ((uint)uVar6 & 0xffff)) * fVar3 +
                  (float)((uint)uVar8 & 0xffff) * fVar4;
        pfVar1[1] = (float)(auVar20._4_4_ + auVar21._4_4_) * fVar2 +
                    (float)(auVar22._4_4_ + auVar23._4_4_) * fVar3 + (float)auVar24._4_4_ * fVar4;
        pfVar1[2] = (float)(auVar15._8_4_ + auVar16._8_4_) * fVar2 +
                    (float)(auVar17._8_4_ + auVar18._8_4_) * fVar3 + (float)auVar19._8_4_ * fVar4;
        pfVar1[3] = (float)((auVar9._10_4_ >> 0x10) + (auVar10._10_4_ >> 0x10)) * fVar2 +
                    (float)((auVar11._10_4_ >> 0x10) + (auVar12._10_4_ >> 0x10)) * fVar3 +
                    (float)(auVar13._10_4_ >> 0x10) * fVar4;
        uVar32 = uVar32 + 4;
      } while (uVar32 < uVar33);
      for (; uVar33 < uVar14; uVar33 = uVar33 + 1) {
        *(float *)(param_2 + uVar33 * 4) =
             (float)((uint)*(ushort *)(param_1 + -0xc + uVar33 * 2) +
                    (uint)*(ushort *)(param_1 + 0xc + uVar33 * 2)) * fVar2 +
             (float)((uint)*(ushort *)(param_1 + -6 + uVar33 * 2) +
                    (uint)*(ushort *)(param_1 + 6 + uVar33 * 2)) * fVar3 +
             (float)*(ushort *)(param_1 + uVar33 * 2) * fVar4;
      }
      return;
    }
  }
LAB_140067757:
  FUN_1400676e7(fVar4,0);
  return;
}


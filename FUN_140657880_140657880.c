
void FUN_140657880(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
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
  undefined1 auVar39 [14];
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  
  uVar44 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  if ((longlong)uVar44 < 1) {
    return;
  }
  if (7 < (longlong)uVar44) {
    uVar46 = param_2 & 0xf;
    if (uVar46 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140657ae4;
      uVar46 = 0x10 - uVar46 >> 2;
    }
    if ((longlong)(uVar46 + 8) <= (longlong)uVar44) {
      uVar43 = 0;
      uVar45 = uVar44 - (uVar44 - uVar46 & 7);
      if (uVar46 != 0) {
        do {
          *(float *)(param_2 + uVar43 * 4) =
               (float)((uint)*(ushort *)(param_1 + -6 + uVar43 * 2) +
                      (uint)*(ushort *)(param_1 + 6 + uVar43 * 2)) * fVar2 +
               (float)*(ushort *)(param_1 + uVar43 * 2) * fVar3;
          uVar43 = uVar43 + 1;
        } while (uVar43 < uVar46);
      }
      do {
        uVar43 = *(ulonglong *)(param_1 + uVar46 * 2);
        auVar7._8_4_ = 0;
        auVar7._0_8_ = uVar43;
        auVar7._12_2_ = (short)(uVar43 >> 0x30);
        auVar16._8_2_ = (short)(uVar43 >> 0x20);
        auVar16._0_8_ = uVar43;
        auVar16._10_4_ = auVar7._10_4_;
        auVar34._6_8_ = 0;
        auVar34._0_6_ = auVar16._8_6_;
        auVar25._4_2_ = (short)(uVar43 >> 0x10);
        auVar25._0_4_ = (uint)uVar43;
        auVar25._6_8_ = SUB148(auVar34 << 0x40,6);
        uVar4 = *(ulonglong *)(param_1 + 6 + uVar46 * 2);
        uVar5 = *(ulonglong *)(param_1 + -6 + uVar46 * 2);
        auVar8._8_4_ = 0;
        auVar8._0_8_ = uVar5;
        auVar8._12_2_ = (short)(uVar5 >> 0x30);
        auVar17._8_2_ = (short)(uVar5 >> 0x20);
        auVar17._0_8_ = uVar5;
        auVar17._10_4_ = auVar8._10_4_;
        auVar35._6_8_ = 0;
        auVar35._0_6_ = auVar17._8_6_;
        auVar26._4_2_ = (short)(uVar5 >> 0x10);
        auVar26._0_4_ = (uint)uVar5;
        auVar26._6_8_ = SUB148(auVar35 << 0x40,6);
        auVar9._8_4_ = 0;
        auVar9._0_8_ = uVar4;
        auVar9._12_2_ = (short)(uVar4 >> 0x30);
        auVar18._8_2_ = (short)(uVar4 >> 0x20);
        auVar18._0_8_ = uVar4;
        auVar18._10_4_ = auVar9._10_4_;
        auVar36._6_8_ = 0;
        auVar36._0_6_ = auVar18._8_6_;
        auVar27._4_2_ = (short)(uVar4 >> 0x10);
        auVar27._0_4_ = (uint)uVar4;
        auVar27._6_8_ = SUB148(auVar36 << 0x40,6);
        pfVar1 = (float *)(param_2 + uVar46 * 4);
        *pfVar1 = (float)(((uint)uVar5 & 0xffff) + ((uint)uVar4 & 0xffff)) * fVar2 +
                  (float)((uint)uVar43 & 0xffff) * fVar3;
        pfVar1[1] = (float)(auVar26._4_4_ + auVar27._4_4_) * fVar2 + (float)auVar25._4_4_ * fVar3;
        pfVar1[2] = (float)(auVar17._8_4_ + auVar18._8_4_) * fVar2 + (float)auVar16._8_4_ * fVar3;
        pfVar1[3] = (float)((auVar8._10_4_ >> 0x10) + (auVar9._10_4_ >> 0x10)) * fVar2 +
                    (float)(auVar7._10_4_ >> 0x10) * fVar3;
        uVar43 = *(ulonglong *)(param_1 + 2 + uVar46 * 2);
        uVar4 = *(ulonglong *)(param_1 + 0xe + uVar46 * 2);
        uVar5 = *(ulonglong *)(param_1 + 8 + uVar46 * 2);
        auVar10._8_4_ = 0;
        auVar10._0_8_ = uVar43;
        auVar10._12_2_ = (short)(uVar43 >> 0x30);
        auVar19._8_2_ = (short)(uVar43 >> 0x20);
        auVar19._0_8_ = uVar43;
        auVar19._10_4_ = auVar10._10_4_;
        auVar37._6_8_ = 0;
        auVar37._0_6_ = auVar19._8_6_;
        auVar28._4_2_ = (short)(uVar43 >> 0x10);
        auVar28._0_4_ = (uint)uVar43;
        auVar28._6_8_ = SUB148(auVar37 << 0x40,6);
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar4;
        auVar11._12_2_ = (short)(uVar4 >> 0x30);
        auVar20._8_2_ = (short)(uVar4 >> 0x20);
        auVar20._0_8_ = uVar4;
        auVar20._10_4_ = auVar11._10_4_;
        auVar38._6_8_ = 0;
        auVar38._0_6_ = auVar20._8_6_;
        auVar29._4_2_ = (short)(uVar4 >> 0x10);
        auVar29._0_4_ = (uint)uVar4;
        auVar29._6_8_ = SUB148(auVar38 << 0x40,6);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar5;
        auVar12._12_2_ = (short)(uVar5 >> 0x30);
        auVar21._8_2_ = (short)(uVar5 >> 0x20);
        auVar21._0_8_ = uVar5;
        auVar21._10_4_ = auVar12._10_4_;
        auVar39._6_8_ = 0;
        auVar39._0_6_ = auVar21._8_6_;
        auVar30._4_2_ = (short)(uVar5 >> 0x10);
        auVar30._0_4_ = (uint)uVar5;
        auVar30._6_8_ = SUB148(auVar39 << 0x40,6);
        pfVar1 = (float *)(param_2 + 0x10 + uVar46 * 4);
        *pfVar1 = (float)(((uint)uVar43 & 0xffff) + ((uint)uVar4 & 0xffff)) * fVar2 +
                  (float)((uint)uVar5 & 0xffff) * fVar3;
        pfVar1[1] = (float)(auVar28._4_4_ + auVar29._4_4_) * fVar2 + (float)auVar30._4_4_ * fVar3;
        pfVar1[2] = (float)(auVar19._8_4_ + auVar20._8_4_) * fVar2 + (float)auVar21._8_4_ * fVar3;
        pfVar1[3] = (float)((auVar10._10_4_ >> 0x10) + (auVar11._10_4_ >> 0x10)) * fVar2 +
                    (float)(auVar12._10_4_ >> 0x10) * fVar3;
        uVar46 = uVar46 + 8;
      } while (uVar46 < uVar45);
      if (uVar44 < uVar45 + 1) {
        return;
      }
      uVar44 = uVar44 - uVar45;
      if (3 < (longlong)uVar44) {
        uVar43 = 0;
        uVar46 = uVar44 & 0xfffffffffffffffc;
        do {
          uVar4 = *(ulonglong *)(param_1 + uVar45 * 2 + 6 + uVar43 * 2);
          uVar5 = *(ulonglong *)(param_1 + (uVar43 + uVar45) * 2);
          auVar13._8_4_ = 0;
          auVar13._0_8_ = uVar5;
          auVar13._12_2_ = (short)(uVar5 >> 0x30);
          auVar22._8_2_ = (short)(uVar5 >> 0x20);
          auVar22._0_8_ = uVar5;
          auVar22._10_4_ = auVar13._10_4_;
          auVar40._6_8_ = 0;
          auVar40._0_6_ = auVar22._8_6_;
          auVar31._4_2_ = (short)(uVar5 >> 0x10);
          auVar31._0_4_ = (uint)uVar5;
          auVar31._6_8_ = SUB148(auVar40 << 0x40,6);
          uVar6 = *(ulonglong *)(param_1 + -6 + (uVar43 + uVar45) * 2);
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar4;
          auVar14._12_2_ = (short)(uVar4 >> 0x30);
          auVar23._8_2_ = (short)(uVar4 >> 0x20);
          auVar23._0_8_ = uVar4;
          auVar23._10_4_ = auVar14._10_4_;
          auVar41._6_8_ = 0;
          auVar41._0_6_ = auVar23._8_6_;
          auVar32._4_2_ = (short)(uVar4 >> 0x10);
          auVar32._0_4_ = (uint)uVar4;
          auVar32._6_8_ = SUB148(auVar41 << 0x40,6);
          auVar15._8_4_ = 0;
          auVar15._0_8_ = uVar6;
          auVar15._12_2_ = (short)(uVar6 >> 0x30);
          auVar24._8_2_ = (short)(uVar6 >> 0x20);
          auVar24._0_8_ = uVar6;
          auVar24._10_4_ = auVar15._10_4_;
          auVar42._6_8_ = 0;
          auVar42._0_6_ = auVar24._8_6_;
          auVar33._4_2_ = (short)(uVar6 >> 0x10);
          auVar33._0_4_ = (uint)uVar6;
          auVar33._6_8_ = SUB148(auVar42 << 0x40,6);
          pfVar1 = (float *)(param_2 + uVar45 * 4 + uVar43 * 4);
          *pfVar1 = (float)(((uint)uVar6 & 0xffff) + ((uint)uVar4 & 0xffff)) * fVar2 +
                    (float)((uint)uVar5 & 0xffff) * fVar3;
          pfVar1[1] = (float)(auVar33._4_4_ + auVar32._4_4_) * fVar2 + (float)auVar31._4_4_ * fVar3;
          pfVar1[2] = (float)(auVar24._8_4_ + auVar23._8_4_) * fVar2 + (float)auVar22._8_4_ * fVar3;
          pfVar1[3] = (float)((auVar15._10_4_ >> 0x10) + (auVar14._10_4_ >> 0x10)) * fVar2 +
                      (float)(auVar13._10_4_ >> 0x10) * fVar3;
          uVar43 = uVar43 + 4;
        } while (uVar43 < uVar46);
        if (uVar44 <= uVar46) {
          return;
        }
        param_1 = param_1 + uVar45 * 2;
        do {
          *(float *)(param_2 + uVar45 * 4 + uVar46 * 4) =
               (float)((uint)*(ushort *)(param_1 + -6 + uVar46 * 2) +
                      (uint)*(ushort *)(param_1 + 6 + uVar46 * 2)) * fVar2 +
               (float)*(ushort *)(param_1 + uVar46 * 2) * fVar3;
          uVar46 = uVar46 + 1;
        } while (uVar46 < uVar44);
        return;
      }
      goto LAB_140657aec;
    }
  }
LAB_140657ae4:
  uVar45 = 0;
  if (uVar44 == 0) {
    return;
  }
LAB_140657aec:
  FUN_140657a75(fVar3,uVar45);
  return;
}


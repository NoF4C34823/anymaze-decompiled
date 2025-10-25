
void FUN_1406e2e59(ulonglong param_1,ulonglong param_2,ulonglong param_3,float param_4)

{
  float *pfVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [14];
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
  ulonglong *puVar42;
  ulonglong uVar43;
  longlong in_R9;
  longlong in_R10;
  ulonglong uVar44;
  float in_XMM0_Da;
  
  puVar42 = (ulonglong *)(param_2 * 2 + in_R9);
  do {
    uVar44 = *(ulonglong *)((longlong)puVar42 + -2);
    uVar43 = *(ulonglong *)((longlong)puVar42 + 2);
    auVar6._8_4_ = 0;
    auVar6._0_8_ = uVar44;
    auVar6._12_2_ = (short)(uVar44 >> 0x30);
    auVar15._8_2_ = (short)(uVar44 >> 0x20);
    auVar15._0_8_ = uVar44;
    auVar15._10_4_ = auVar6._10_4_;
    auVar33._6_8_ = 0;
    auVar33._0_6_ = auVar15._8_6_;
    auVar24._4_2_ = (short)(uVar44 >> 0x10);
    auVar24._0_4_ = (uint)uVar44;
    auVar24._6_8_ = SUB148(auVar33 << 0x40,6);
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
    uVar3 = *puVar42;
    auVar8._8_4_ = 0;
    auVar8._0_8_ = uVar3;
    auVar8._12_2_ = (short)(uVar3 >> 0x30);
    auVar17._8_2_ = (short)(uVar3 >> 0x20);
    auVar17._0_8_ = uVar3;
    auVar17._10_4_ = auVar8._10_4_;
    auVar35._6_8_ = 0;
    auVar35._0_6_ = auVar17._8_6_;
    auVar26._4_2_ = (short)(uVar3 >> 0x10);
    auVar26._0_4_ = (uint)uVar3;
    auVar26._6_8_ = SUB148(auVar35 << 0x40,6);
    pfVar1 = (float *)(in_R10 + param_2 * 4);
    *pfVar1 = (float)(((uint)uVar44 & 0xffff) + ((uint)uVar43 & 0xffff)) * param_4 +
              (float)((uint)uVar3 & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)(auVar24._4_4_ + auVar25._4_4_) * param_4 + (float)auVar26._4_4_ * in_XMM0_Da
    ;
    pfVar1[2] = (float)(auVar15._8_4_ + auVar16._8_4_) * param_4 + (float)auVar17._8_4_ * in_XMM0_Da
    ;
    pfVar1[3] = (float)((auVar6._10_4_ >> 0x10) + (auVar7._10_4_ >> 0x10)) * param_4 +
                (float)(auVar8._10_4_ >> 0x10) * in_XMM0_Da;
    uVar44 = *(ulonglong *)((longlong)puVar42 + 6);
    uVar43 = *(ulonglong *)((longlong)puVar42 + 10);
    auVar9._8_4_ = 0;
    auVar9._0_8_ = uVar44;
    auVar9._12_2_ = (short)(uVar44 >> 0x30);
    auVar18._8_2_ = (short)(uVar44 >> 0x20);
    auVar18._0_8_ = uVar44;
    auVar18._10_4_ = auVar9._10_4_;
    auVar36._6_8_ = 0;
    auVar36._0_6_ = auVar18._8_6_;
    auVar27._4_2_ = (short)(uVar44 >> 0x10);
    auVar27._0_4_ = (uint)uVar44;
    auVar27._6_8_ = SUB148(auVar36 << 0x40,6);
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
    uVar3 = puVar42[1];
    puVar42 = puVar42 + 2;
    auVar11._8_4_ = 0;
    auVar11._0_8_ = uVar3;
    auVar11._12_2_ = (short)(uVar3 >> 0x30);
    auVar20._8_2_ = (short)(uVar3 >> 0x20);
    auVar20._0_8_ = uVar3;
    auVar20._10_4_ = auVar11._10_4_;
    auVar38._6_8_ = 0;
    auVar38._0_6_ = auVar20._8_6_;
    auVar29._4_2_ = (short)(uVar3 >> 0x10);
    auVar29._0_4_ = (uint)uVar3;
    auVar29._6_8_ = SUB148(auVar38 << 0x40,6);
    pfVar1 = (float *)(in_R10 + 0x10 + param_2 * 4);
    *pfVar1 = (float)(((uint)uVar44 & 0xffff) + ((uint)uVar43 & 0xffff)) * param_4 +
              (float)((uint)uVar3 & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)(auVar27._4_4_ + auVar28._4_4_) * param_4 + (float)auVar29._4_4_ * in_XMM0_Da
    ;
    pfVar1[2] = (float)(auVar18._8_4_ + auVar19._8_4_) * param_4 + (float)auVar20._8_4_ * in_XMM0_Da
    ;
    pfVar1[3] = (float)((auVar9._10_4_ >> 0x10) + (auVar10._10_4_ >> 0x10)) * param_4 +
                (float)(auVar11._10_4_ >> 0x10) * in_XMM0_Da;
    param_2 = param_2 + 8;
  } while (param_2 < param_1);
  if (param_1 + 1 <= param_3) {
    param_3 = param_3 - param_1;
    if ((longlong)param_3 < 4) {
      FUN_1406e2f86();
      return;
    }
    lVar2 = in_R9 + param_1 * 2;
    uVar43 = param_3 & 0xfffffffffffffffc;
    uVar44 = 0;
    do {
      uVar3 = *(ulonglong *)(lVar2 + -2 + uVar44 * 2);
      uVar4 = *(ulonglong *)(lVar2 + 2 + uVar44 * 2);
      auVar12._8_4_ = 0;
      auVar12._0_8_ = uVar3;
      auVar12._12_2_ = (short)(uVar3 >> 0x30);
      auVar21._8_2_ = (short)(uVar3 >> 0x20);
      auVar21._0_8_ = uVar3;
      auVar21._10_4_ = auVar12._10_4_;
      auVar39._6_8_ = 0;
      auVar39._0_6_ = auVar21._8_6_;
      auVar30._4_2_ = (short)(uVar3 >> 0x10);
      auVar30._0_4_ = (uint)uVar3;
      auVar30._6_8_ = SUB148(auVar39 << 0x40,6);
      auVar13._8_4_ = 0;
      auVar13._0_8_ = uVar4;
      auVar13._12_2_ = (short)(uVar4 >> 0x30);
      auVar22._8_2_ = (short)(uVar4 >> 0x20);
      auVar22._0_8_ = uVar4;
      auVar22._10_4_ = auVar13._10_4_;
      auVar40._6_8_ = 0;
      auVar40._0_6_ = auVar22._8_6_;
      auVar31._4_2_ = (short)(uVar4 >> 0x10);
      auVar31._0_4_ = (uint)uVar4;
      auVar31._6_8_ = SUB148(auVar40 << 0x40,6);
      uVar5 = *(ulonglong *)(lVar2 + uVar44 * 2);
      auVar14._8_4_ = 0;
      auVar14._0_8_ = uVar5;
      auVar14._12_2_ = (short)(uVar5 >> 0x30);
      auVar23._8_2_ = (short)(uVar5 >> 0x20);
      auVar23._0_8_ = uVar5;
      auVar23._10_4_ = auVar14._10_4_;
      auVar41._6_8_ = 0;
      auVar41._0_6_ = auVar23._8_6_;
      auVar32._4_2_ = (short)(uVar5 >> 0x10);
      auVar32._0_4_ = (uint)uVar5;
      auVar32._6_8_ = SUB148(auVar41 << 0x40,6);
      pfVar1 = (float *)(param_1 * 4 + in_R10 + uVar44 * 4);
      *pfVar1 = (float)(((uint)uVar3 & 0xffff) + ((uint)uVar4 & 0xffff)) * param_4 +
                (float)((uint)uVar5 & 0xffff) * in_XMM0_Da;
      pfVar1[1] = (float)(auVar30._4_4_ + auVar31._4_4_) * param_4 +
                  (float)auVar32._4_4_ * in_XMM0_Da;
      pfVar1[2] = (float)(auVar21._8_4_ + auVar22._8_4_) * param_4 +
                  (float)auVar23._8_4_ * in_XMM0_Da;
      pfVar1[3] = (float)((auVar12._10_4_ >> 0x10) + (auVar13._10_4_ >> 0x10)) * param_4 +
                  (float)(auVar14._10_4_ >> 0x10) * in_XMM0_Da;
      uVar44 = uVar44 + 4;
    } while (uVar44 < uVar43);
    if (uVar43 < param_3) {
      in_R9 = in_R9 + param_1 * 2;
      do {
        *(float *)(in_R10 + param_1 * 4 + uVar43 * 4) =
             (float)((uint)*(ushort *)(in_R9 + -2 + uVar43 * 2) +
                    (uint)*(ushort *)(in_R9 + 2 + uVar43 * 2)) * param_4 +
             (float)*(ushort *)(in_R9 + uVar43 * 2) * in_XMM0_Da;
        uVar43 = uVar43 + 1;
      } while (uVar43 < param_3);
    }
  }
  return;
}



void FUN_1405ca7be(ulonglong param_1,float param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [14];
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
  ulonglong uVar41;
  ulonglong in_RDX;
  ulonglong in_R10;
  ulonglong uVar42;
  float in_XMM0_Da;
  
  do {
    uVar41 = *(ulonglong *)(param_3 + in_R10 * 2);
    auVar5._8_4_ = 0;
    auVar5._0_8_ = uVar41;
    auVar5._12_2_ = (short)(uVar41 >> 0x30);
    auVar14._8_2_ = (short)(uVar41 >> 0x20);
    auVar14._0_8_ = uVar41;
    auVar14._10_4_ = auVar5._10_4_;
    auVar32._6_8_ = 0;
    auVar32._0_6_ = auVar14._8_6_;
    auVar23._4_2_ = (short)(uVar41 >> 0x10);
    auVar23._0_4_ = (uint)uVar41;
    auVar23._6_8_ = SUB148(auVar32 << 0x40,6);
    uVar42 = *(ulonglong *)(param_3 + 6 + in_R10 * 2);
    uVar2 = *(ulonglong *)(param_3 + -6 + in_R10 * 2);
    auVar6._8_4_ = 0;
    auVar6._0_8_ = uVar2;
    auVar6._12_2_ = (short)(uVar2 >> 0x30);
    auVar15._8_2_ = (short)(uVar2 >> 0x20);
    auVar15._0_8_ = uVar2;
    auVar15._10_4_ = auVar6._10_4_;
    auVar33._6_8_ = 0;
    auVar33._0_6_ = auVar15._8_6_;
    auVar24._4_2_ = (short)(uVar2 >> 0x10);
    auVar24._0_4_ = (uint)uVar2;
    auVar24._6_8_ = SUB148(auVar33 << 0x40,6);
    auVar7._8_4_ = 0;
    auVar7._0_8_ = uVar42;
    auVar7._12_2_ = (short)(uVar42 >> 0x30);
    auVar16._8_2_ = (short)(uVar42 >> 0x20);
    auVar16._0_8_ = uVar42;
    auVar16._10_4_ = auVar7._10_4_;
    auVar34._6_8_ = 0;
    auVar34._0_6_ = auVar16._8_6_;
    auVar25._4_2_ = (short)(uVar42 >> 0x10);
    auVar25._0_4_ = (uint)uVar42;
    auVar25._6_8_ = SUB148(auVar34 << 0x40,6);
    pfVar1 = (float *)(param_4 + in_R10 * 4);
    *pfVar1 = (float)(((uint)uVar2 & 0xffff) + ((uint)uVar42 & 0xffff)) * param_2 +
              (float)((uint)uVar41 & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)(auVar24._4_4_ + auVar25._4_4_) * param_2 + (float)auVar23._4_4_ * in_XMM0_Da
    ;
    pfVar1[2] = (float)(auVar15._8_4_ + auVar16._8_4_) * param_2 + (float)auVar14._8_4_ * in_XMM0_Da
    ;
    pfVar1[3] = (float)((auVar6._10_4_ >> 0x10) + (auVar7._10_4_ >> 0x10)) * param_2 +
                (float)(auVar5._10_4_ >> 0x10) * in_XMM0_Da;
    uVar41 = *(ulonglong *)(param_3 + 2 + in_R10 * 2);
    uVar42 = *(ulonglong *)(param_3 + 0xe + in_R10 * 2);
    uVar2 = *(ulonglong *)(param_3 + 8 + in_R10 * 2);
    auVar8._8_4_ = 0;
    auVar8._0_8_ = uVar41;
    auVar8._12_2_ = (short)(uVar41 >> 0x30);
    auVar17._8_2_ = (short)(uVar41 >> 0x20);
    auVar17._0_8_ = uVar41;
    auVar17._10_4_ = auVar8._10_4_;
    auVar35._6_8_ = 0;
    auVar35._0_6_ = auVar17._8_6_;
    auVar26._4_2_ = (short)(uVar41 >> 0x10);
    auVar26._0_4_ = (uint)uVar41;
    auVar26._6_8_ = SUB148(auVar35 << 0x40,6);
    auVar9._8_4_ = 0;
    auVar9._0_8_ = uVar42;
    auVar9._12_2_ = (short)(uVar42 >> 0x30);
    auVar18._8_2_ = (short)(uVar42 >> 0x20);
    auVar18._0_8_ = uVar42;
    auVar18._10_4_ = auVar9._10_4_;
    auVar36._6_8_ = 0;
    auVar36._0_6_ = auVar18._8_6_;
    auVar27._4_2_ = (short)(uVar42 >> 0x10);
    auVar27._0_4_ = (uint)uVar42;
    auVar27._6_8_ = SUB148(auVar36 << 0x40,6);
    auVar10._8_4_ = 0;
    auVar10._0_8_ = uVar2;
    auVar10._12_2_ = (short)(uVar2 >> 0x30);
    auVar19._8_2_ = (short)(uVar2 >> 0x20);
    auVar19._0_8_ = uVar2;
    auVar19._10_4_ = auVar10._10_4_;
    auVar37._6_8_ = 0;
    auVar37._0_6_ = auVar19._8_6_;
    auVar28._4_2_ = (short)(uVar2 >> 0x10);
    auVar28._0_4_ = (uint)uVar2;
    auVar28._6_8_ = SUB148(auVar37 << 0x40,6);
    pfVar1 = (float *)(param_4 + 0x10 + in_R10 * 4);
    *pfVar1 = (float)(((uint)uVar41 & 0xffff) + ((uint)uVar42 & 0xffff)) * param_2 +
              (float)((uint)uVar2 & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)(auVar26._4_4_ + auVar27._4_4_) * param_2 + (float)auVar28._4_4_ * in_XMM0_Da
    ;
    pfVar1[2] = (float)(auVar17._8_4_ + auVar18._8_4_) * param_2 + (float)auVar19._8_4_ * in_XMM0_Da
    ;
    pfVar1[3] = (float)((auVar8._10_4_ >> 0x10) + (auVar9._10_4_ >> 0x10)) * param_2 +
                (float)(auVar10._10_4_ >> 0x10) * in_XMM0_Da;
    in_R10 = in_R10 + 8;
  } while (in_R10 < in_RDX);
  if (in_RDX + 1 <= param_1) {
    param_1 = param_1 - in_RDX;
    if ((longlong)param_1 < 4) {
      FUN_1405ca8f5();
      return;
    }
    uVar42 = 0;
    uVar41 = param_1 & 0xfffffffffffffffc;
    do {
      uVar2 = *(ulonglong *)(param_3 + in_RDX * 2 + 6 + uVar42 * 2);
      uVar3 = *(ulonglong *)(param_3 + (uVar42 + in_RDX) * 2);
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
      uVar4 = *(ulonglong *)(param_3 + -6 + (uVar42 + in_RDX) * 2);
      auVar12._8_4_ = 0;
      auVar12._0_8_ = uVar2;
      auVar12._12_2_ = (short)(uVar2 >> 0x30);
      auVar21._8_2_ = (short)(uVar2 >> 0x20);
      auVar21._0_8_ = uVar2;
      auVar21._10_4_ = auVar12._10_4_;
      auVar39._6_8_ = 0;
      auVar39._0_6_ = auVar21._8_6_;
      auVar30._4_2_ = (short)(uVar2 >> 0x10);
      auVar30._0_4_ = (uint)uVar2;
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
      pfVar1 = (float *)(param_4 + in_RDX * 4 + uVar42 * 4);
      *pfVar1 = (float)(((uint)uVar4 & 0xffff) + ((uint)uVar2 & 0xffff)) * param_2 +
                (float)((uint)uVar3 & 0xffff) * in_XMM0_Da;
      pfVar1[1] = (float)(auVar31._4_4_ + auVar30._4_4_) * param_2 +
                  (float)auVar29._4_4_ * in_XMM0_Da;
      pfVar1[2] = (float)(auVar22._8_4_ + auVar21._8_4_) * param_2 +
                  (float)auVar20._8_4_ * in_XMM0_Da;
      pfVar1[3] = (float)((auVar13._10_4_ >> 0x10) + (auVar12._10_4_ >> 0x10)) * param_2 +
                  (float)(auVar11._10_4_ >> 0x10) * in_XMM0_Da;
      uVar42 = uVar42 + 4;
    } while (uVar42 < uVar41);
    if (uVar41 < param_1) {
      param_3 = param_3 + in_RDX * 2;
      do {
        *(float *)(param_4 + in_RDX * 4 + uVar41 * 4) =
             (float)((uint)*(ushort *)(param_3 + -6 + uVar41 * 2) +
                    (uint)*(ushort *)(param_3 + 6 + uVar41 * 2)) * param_2 +
             (float)*(ushort *)(param_3 + uVar41 * 2) * in_XMM0_Da;
        uVar41 = uVar41 + 1;
      } while (uVar41 < param_1);
    }
  }
  return;
}


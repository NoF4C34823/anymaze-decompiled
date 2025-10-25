
void FUN_140657dd1(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
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
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  ulonglong in_RAX;
  ulonglong in_RDX;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float unaff_XMM6_Da;
  
  do {
    *(float *)(in_R10 + in_RAX * 4) =
         (float)((uint)*(ushort *)(param_4 + -0x12 + in_RAX * 2) +
                (uint)*(ushort *)(param_4 + 0x12 + in_RAX * 2)) * param_2 +
         (float)((uint)*(ushort *)(param_4 + -0xc + in_RAX * 2) +
                (uint)*(ushort *)(param_4 + 0xc + in_RAX * 2)) * in_XMM2_Da +
         (float)((uint)*(ushort *)(param_4 + -6 + in_RAX * 2) +
                (uint)*(ushort *)(param_4 + 6 + in_RAX * 2)) * unaff_XMM6_Da +
         (float)*(ushort *)(param_4 + in_RAX * 2) * in_XMM0_Da;
    in_RAX = in_RAX + 1;
  } while (in_RAX < in_RDX);
  do {
    uVar2 = *(ulonglong *)(param_4 + -0xc + in_RDX * 2);
    uVar3 = *(ulonglong *)(param_4 + -0x12 + in_RDX * 2);
    uVar4 = *(ulonglong *)(param_4 + 0x12 + in_RDX * 2);
    uVar5 = *(ulonglong *)(param_4 + 0xc + in_RDX * 2);
    auVar15._8_4_ = 0;
    auVar15._0_8_ = uVar2;
    auVar15._12_2_ = (short)(uVar2 >> 0x30);
    auVar22._8_2_ = (short)(uVar2 >> 0x20);
    auVar22._0_8_ = uVar2;
    auVar22._10_4_ = auVar15._10_4_;
    auVar28._6_8_ = 0;
    auVar28._0_6_ = auVar22._8_6_;
    auVar9._8_4_ = 0;
    auVar9._0_8_ = uVar3;
    auVar9._12_2_ = (short)(uVar3 >> 0x30);
    auVar16._8_2_ = (short)(uVar3 >> 0x20);
    auVar16._0_8_ = uVar3;
    auVar16._10_4_ = auVar9._10_4_;
    auVar29._6_8_ = 0;
    auVar29._0_6_ = auVar16._8_6_;
    auVar23._4_2_ = (short)(uVar3 >> 0x10);
    auVar23._0_4_ = (uint)uVar3;
    auVar23._6_8_ = SUB148(auVar29 << 0x40,6);
    auVar10._8_4_ = 0;
    auVar10._0_8_ = uVar4;
    auVar10._12_2_ = (short)(uVar4 >> 0x30);
    auVar17._8_2_ = (short)(uVar4 >> 0x20);
    auVar17._0_8_ = uVar4;
    auVar17._10_4_ = auVar10._10_4_;
    auVar30._6_8_ = 0;
    auVar30._0_6_ = auVar17._8_6_;
    auVar11._8_4_ = 0;
    auVar11._0_8_ = uVar5;
    auVar11._12_2_ = (short)(uVar5 >> 0x30);
    auVar18._8_2_ = (short)(uVar5 >> 0x20);
    auVar18._0_8_ = uVar5;
    auVar18._10_4_ = auVar11._10_4_;
    auVar31._6_8_ = 0;
    auVar31._0_6_ = auVar18._8_6_;
    auVar24._4_2_ = (short)(uVar5 >> 0x10);
    auVar24._0_4_ = (uint)uVar5;
    auVar24._6_8_ = SUB148(auVar31 << 0x40,6);
    uVar6 = *(ulonglong *)(param_4 + 6 + in_RDX * 2);
    uVar7 = *(ulonglong *)(param_4 + -6 + in_RDX * 2);
    auVar12._8_4_ = 0;
    auVar12._0_8_ = uVar6;
    auVar12._12_2_ = (short)(uVar6 >> 0x30);
    auVar19._8_2_ = (short)(uVar6 >> 0x20);
    auVar19._0_8_ = uVar6;
    auVar19._10_4_ = auVar12._10_4_;
    auVar32._6_8_ = 0;
    auVar32._0_6_ = auVar19._8_6_;
    auVar25._4_2_ = (short)(uVar6 >> 0x10);
    auVar25._0_4_ = (uint)uVar6;
    auVar25._6_8_ = SUB148(auVar32 << 0x40,6);
    auVar13._8_4_ = 0;
    auVar13._0_8_ = uVar7;
    auVar13._12_2_ = (short)(uVar7 >> 0x30);
    auVar20._8_2_ = (short)(uVar7 >> 0x20);
    auVar20._0_8_ = uVar7;
    auVar20._10_4_ = auVar13._10_4_;
    auVar33._6_8_ = 0;
    auVar33._0_6_ = auVar20._8_6_;
    auVar26._4_2_ = (short)(uVar7 >> 0x10);
    auVar26._0_4_ = (uint)uVar7;
    auVar26._6_8_ = SUB148(auVar33 << 0x40,6);
    uVar8 = *(ulonglong *)(param_4 + in_RDX * 2);
    auVar14._8_4_ = 0;
    auVar14._0_8_ = uVar8;
    auVar14._12_2_ = (short)(uVar8 >> 0x30);
    auVar21._8_2_ = (short)(uVar8 >> 0x20);
    auVar21._0_8_ = uVar8;
    auVar21._10_4_ = auVar14._10_4_;
    auVar34._6_8_ = 0;
    auVar34._0_6_ = auVar21._8_6_;
    auVar27._4_2_ = (short)(uVar8 >> 0x10);
    auVar27._0_4_ = (uint)uVar8;
    auVar27._6_8_ = SUB148(auVar34 << 0x40,6);
    pfVar1 = (float *)(in_R10 + in_RDX * 4);
    *pfVar1 = (float)(((uint)uVar3 & 0xffff) + (uint)(ushort)uVar4) * param_2 +
              (float)((uint)(ushort)uVar2 + ((uint)uVar5 & 0xffff)) * in_XMM2_Da +
              (float)(((uint)uVar7 & 0xffff) + ((uint)uVar6 & 0xffff)) * unaff_XMM6_Da +
              (float)((uint)uVar8 & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)(auVar23._4_4_ +
                       (int)CONCAT82(SUB148(auVar30 << 0x40,6),(short)(uVar4 >> 0x10))) * param_2 +
                (float)((int)CONCAT82(SUB148(auVar28 << 0x40,6),(short)(uVar2 >> 0x10)) +
                       auVar24._4_4_) * in_XMM2_Da +
                (float)(auVar26._4_4_ + auVar25._4_4_) * unaff_XMM6_Da +
                (float)auVar27._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)(auVar16._8_4_ + auVar17._8_4_) * param_2 +
                (float)(auVar22._8_4_ + auVar18._8_4_) * in_XMM2_Da +
                (float)(auVar20._8_4_ + auVar19._8_4_) * unaff_XMM6_Da +
                (float)auVar21._8_4_ * in_XMM0_Da;
    pfVar1[3] = (float)((auVar9._10_4_ >> 0x10) + (auVar10._10_4_ >> 0x10)) * param_2 +
                (float)((auVar15._10_4_ >> 0x10) + (auVar11._10_4_ >> 0x10)) * in_XMM2_Da +
                (float)((auVar13._10_4_ >> 0x10) + (auVar12._10_4_ >> 0x10)) * unaff_XMM6_Da +
                (float)(auVar14._10_4_ >> 0x10) * in_XMM0_Da;
    in_RDX = in_RDX + 4;
  } while (in_RDX < param_1);
  if (param_1 < param_3) {
    do {
      *(float *)(in_R10 + param_1 * 4) =
           (float)((uint)*(ushort *)(param_4 + -0x12 + param_1 * 2) +
                  (uint)*(ushort *)(param_4 + 0x12 + param_1 * 2)) * param_2 +
           (float)((uint)*(ushort *)(param_4 + -0xc + param_1 * 2) +
                  (uint)*(ushort *)(param_4 + 0xc + param_1 * 2)) * in_XMM2_Da +
           (float)((uint)*(ushort *)(param_4 + -6 + param_1 * 2) +
                  (uint)*(ushort *)(param_4 + 6 + param_1 * 2)) * unaff_XMM6_Da +
           (float)*(ushort *)(param_4 + param_1 * 2) * in_XMM0_Da;
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return;
}


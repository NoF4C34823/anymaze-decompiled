
void FUN_14063485b(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
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
  ulonglong in_RAX;
  ulonglong in_RDX;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM4_Da;
  
  do {
    *(float *)(in_R10 + in_RAX * 4) =
         (float)((uint)*(ushort *)(param_4 + -0xc + in_RAX * 2) +
                (uint)*(ushort *)(param_4 + 0xc + in_RAX * 2)) * param_2 +
         (float)((uint)*(ushort *)(param_4 + -6 + in_RAX * 2) +
                (uint)*(ushort *)(param_4 + 6 + in_RAX * 2)) * in_XMM4_Da +
         (float)*(ushort *)(param_4 + in_RAX * 2) * in_XMM0_Da;
    in_RAX = in_RAX + 1;
  } while (in_RAX < in_RDX);
  do {
    uVar2 = *(ulonglong *)(param_4 + -0xc + in_RDX * 2);
    uVar3 = *(ulonglong *)(param_4 + 0xc + in_RDX * 2);
    auVar11._8_4_ = 0;
    auVar11._0_8_ = uVar2;
    auVar11._12_2_ = (short)(uVar2 >> 0x30);
    auVar16._8_2_ = (short)(uVar2 >> 0x20);
    auVar16._0_8_ = uVar2;
    auVar16._10_4_ = auVar11._10_4_;
    auVar21._6_8_ = 0;
    auVar21._0_6_ = auVar16._8_6_;
    auVar7._8_4_ = 0;
    auVar7._0_8_ = uVar3;
    auVar7._12_2_ = (short)(uVar3 >> 0x30);
    auVar12._8_2_ = (short)(uVar3 >> 0x20);
    auVar12._0_8_ = uVar3;
    auVar12._10_4_ = auVar7._10_4_;
    auVar22._6_8_ = 0;
    auVar22._0_6_ = auVar12._8_6_;
    auVar17._4_2_ = (short)(uVar3 >> 0x10);
    auVar17._0_4_ = (uint)uVar3;
    auVar17._6_8_ = SUB148(auVar22 << 0x40,6);
    uVar4 = *(ulonglong *)(param_4 + -6 + in_RDX * 2);
    uVar5 = *(ulonglong *)(param_4 + 6 + in_RDX * 2);
    auVar8._8_4_ = 0;
    auVar8._0_8_ = uVar4;
    auVar8._12_2_ = (short)(uVar4 >> 0x30);
    auVar13._8_2_ = (short)(uVar4 >> 0x20);
    auVar13._0_8_ = uVar4;
    auVar13._10_4_ = auVar8._10_4_;
    auVar23._6_8_ = 0;
    auVar23._0_6_ = auVar13._8_6_;
    auVar18._4_2_ = (short)(uVar4 >> 0x10);
    auVar18._0_4_ = (uint)uVar4;
    auVar18._6_8_ = SUB148(auVar23 << 0x40,6);
    auVar9._8_4_ = 0;
    auVar9._0_8_ = uVar5;
    auVar9._12_2_ = (short)(uVar5 >> 0x30);
    auVar14._8_2_ = (short)(uVar5 >> 0x20);
    auVar14._0_8_ = uVar5;
    auVar14._10_4_ = auVar9._10_4_;
    auVar24._6_8_ = 0;
    auVar24._0_6_ = auVar14._8_6_;
    auVar19._4_2_ = (short)(uVar5 >> 0x10);
    auVar19._0_4_ = (uint)uVar5;
    auVar19._6_8_ = SUB148(auVar24 << 0x40,6);
    uVar6 = *(ulonglong *)(param_4 + in_RDX * 2);
    auVar10._8_4_ = 0;
    auVar10._0_8_ = uVar6;
    auVar10._12_2_ = (short)(uVar6 >> 0x30);
    auVar15._8_2_ = (short)(uVar6 >> 0x20);
    auVar15._0_8_ = uVar6;
    auVar15._10_4_ = auVar10._10_4_;
    auVar25._6_8_ = 0;
    auVar25._0_6_ = auVar15._8_6_;
    auVar20._4_2_ = (short)(uVar6 >> 0x10);
    auVar20._0_4_ = (uint)uVar6;
    auVar20._6_8_ = SUB148(auVar25 << 0x40,6);
    pfVar1 = (float *)(in_R10 + in_RDX * 4);
    *pfVar1 = (float)((uint)(ushort)uVar2 + ((uint)uVar3 & 0xffff)) * param_2 +
              (float)(((uint)uVar4 & 0xffff) + ((uint)uVar5 & 0xffff)) * in_XMM4_Da +
              (float)((uint)uVar6 & 0xffff) * in_XMM0_Da;
    pfVar1[1] = (float)((int)CONCAT82(SUB148(auVar21 << 0x40,6),(short)(uVar2 >> 0x10)) +
                       auVar17._4_4_) * param_2 +
                (float)(auVar18._4_4_ + auVar19._4_4_) * in_XMM4_Da +
                (float)auVar20._4_4_ * in_XMM0_Da;
    pfVar1[2] = (float)(auVar16._8_4_ + auVar12._8_4_) * param_2 +
                (float)(auVar13._8_4_ + auVar14._8_4_) * in_XMM4_Da +
                (float)auVar15._8_4_ * in_XMM0_Da;
    pfVar1[3] = (float)((auVar11._10_4_ >> 0x10) + (auVar7._10_4_ >> 0x10)) * param_2 +
                (float)((auVar8._10_4_ >> 0x10) + (auVar9._10_4_ >> 0x10)) * in_XMM4_Da +
                (float)(auVar10._10_4_ >> 0x10) * in_XMM0_Da;
    in_RDX = in_RDX + 4;
  } while (in_RDX < param_1);
  if (param_1 < param_3) {
    do {
      *(float *)(in_R10 + param_1 * 4) =
           (float)((uint)*(ushort *)(param_4 + -0xc + param_1 * 2) +
                  (uint)*(ushort *)(param_4 + 0xc + param_1 * 2)) * param_2 +
           (float)((uint)*(ushort *)(param_4 + -6 + param_1 * 2) +
                  (uint)*(ushort *)(param_4 + 6 + param_1 * 2)) * in_XMM4_Da +
           (float)*(ushort *)(param_4 + param_1 * 2) * in_XMM0_Da;
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return;
}


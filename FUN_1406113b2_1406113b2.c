
void FUN_1406113b2(longlong param_1,float param_2,longlong param_3,undefined8 param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  ulonglong uVar8;
  ulonglong uVar9;
  longlong in_RDX;
  longlong in_R9;
  ulonglong uVar10;
  float in_XMM0_Da;
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  undefined2 in_XMM4_Wa;
  undefined2 in_XMM4_Wb;
  undefined2 in_XMM4_Wc;
  undefined2 in_XMM4_Wd;
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar9 = param_1 - in_RDX;
  if (3 < (longlong)uVar9) {
    uVar10 = 0;
    uVar8 = uVar9 & 0xfffffffffffffffc;
    do {
      uVar2 = *(ulonglong *)(param_3 + in_RDX * 2 + 6 + uVar10 * 2);
      uVar3 = *(ulonglong *)(param_3 + (uVar10 + in_RDX) * 2);
      auVar16._8_4_ = 0;
      auVar16._0_8_ = uVar3;
      auVar16._12_2_ = (short)(uVar3 >> 0x30);
      auVar16._14_2_ = in_XMM4_Wd;
      auVar15._12_4_ = auVar16._12_4_;
      auVar15._8_2_ = 0;
      auVar15._0_8_ = uVar3;
      auVar15._10_2_ = in_XMM4_Wc;
      auVar14._10_6_ = auVar15._10_6_;
      auVar14._8_2_ = (short)(uVar3 >> 0x20);
      auVar14._0_8_ = uVar3;
      auVar5._4_8_ = auVar14._8_8_;
      auVar5._2_2_ = in_XMM4_Wb;
      auVar5._0_2_ = (short)(uVar3 >> 0x10);
      uVar4 = *(ulonglong *)(param_3 + -6 + (uVar10 + in_RDX) * 2);
      auVar13._8_4_ = 0;
      auVar13._0_8_ = uVar2;
      auVar13._12_2_ = (short)(uVar2 >> 0x30);
      auVar13._14_2_ = in_XMM4_Wd;
      auVar12._12_4_ = auVar13._12_4_;
      auVar12._8_2_ = 0;
      auVar12._0_8_ = uVar2;
      auVar12._10_2_ = in_XMM4_Wc;
      auVar11._10_6_ = auVar12._10_6_;
      auVar11._8_2_ = (short)(uVar2 >> 0x20);
      auVar11._0_8_ = uVar2;
      auVar6._4_8_ = auVar11._8_8_;
      auVar6._2_2_ = in_XMM4_Wb;
      auVar6._0_2_ = (short)(uVar2 >> 0x10);
      auVar19._8_4_ = 0;
      auVar19._0_8_ = uVar4;
      auVar19._12_2_ = (short)(uVar4 >> 0x30);
      auVar19._14_2_ = in_XMM4_Wd;
      auVar18._12_4_ = auVar19._12_4_;
      auVar18._8_2_ = 0;
      auVar18._0_8_ = uVar4;
      auVar18._10_2_ = in_XMM4_Wc;
      auVar17._10_6_ = auVar18._10_6_;
      auVar17._8_2_ = (short)(uVar4 >> 0x20);
      auVar17._0_8_ = uVar4;
      auVar7._4_8_ = auVar17._8_8_;
      auVar7._2_2_ = in_XMM4_Wb;
      auVar7._0_2_ = (short)(uVar4 >> 0x10);
      pfVar1 = (float *)(in_R9 + in_RDX * 4 + uVar10 * 4);
      *pfVar1 = (float)(CONCAT22(in_XMM4_Wa,(short)uVar4) + CONCAT22(in_XMM4_Wa,(short)uVar2)) *
                (float)in_XMM2_Qa + (float)CONCAT22(in_XMM4_Wa,(short)uVar3) * (float)param_4;
      pfVar1[1] = (float)(auVar7._0_4_ + auVar6._0_4_) * (float)((ulonglong)in_XMM2_Qa >> 0x20) +
                  (float)auVar5._0_4_ * (float)((ulonglong)param_4 >> 0x20);
      pfVar1[2] = (float)(auVar17._8_4_ + auVar11._8_4_) * in_XMM2_Dc +
                  (float)auVar14._8_4_ * in_XMM3_Dc;
      pfVar1[3] = (float)(auVar18._12_4_ + auVar12._12_4_) * in_XMM2_Dd +
                  (float)auVar15._12_4_ * in_XMM3_Dd;
      uVar10 = uVar10 + 4;
    } while (uVar10 < uVar8);
    if (uVar8 < uVar9) {
      param_3 = param_3 + in_RDX * 2;
      do {
        *(float *)(in_R9 + in_RDX * 4 + uVar8 * 4) =
             (float)((uint)*(ushort *)(param_3 + -6 + uVar8 * 2) +
                    (uint)*(ushort *)(param_3 + 6 + uVar8 * 2)) * param_2 +
             (float)*(ushort *)(param_3 + uVar8 * 2) * in_XMM0_Da;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
    return;
  }
  FUN_140611435();
  return;
}


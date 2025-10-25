
void FUN_1400663c5(longlong param_1,undefined4 param_2,longlong param_3,float param_4)

{
  longlong lVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  ulonglong uVar9;
  ulonglong uVar10;
  longlong in_R9;
  longlong in_R10;
  ulonglong uVar11;
  float in_XMM0_Da;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 in_XMM1_Wc;
  undefined2 in_XMM1_Wd;
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  uVar10 = param_3 - param_1;
  if (3 < (longlong)uVar10) {
    lVar1 = in_R9 + param_1 * 2;
    uVar9 = uVar10 & 0xfffffffffffffffc;
    uVar11 = 0;
    do {
      uVar3 = *(ulonglong *)(lVar1 + -2 + uVar11 * 2);
      uVar4 = *(ulonglong *)(lVar1 + 2 + uVar11 * 2);
      auVar16._8_4_ = 0;
      auVar16._0_8_ = uVar3;
      auVar16._12_2_ = (short)(uVar3 >> 0x30);
      auVar16._14_2_ = in_XMM1_Wd;
      auVar15._12_4_ = auVar16._12_4_;
      auVar15._8_2_ = 0;
      auVar15._0_8_ = uVar3;
      auVar15._10_2_ = in_XMM1_Wc;
      auVar14._10_6_ = auVar15._10_6_;
      auVar14._8_2_ = (short)(uVar3 >> 0x20);
      auVar14._0_8_ = uVar3;
      uVar13 = (undefined2)((uint)param_2 >> 0x10);
      auVar6._4_8_ = auVar14._8_8_;
      auVar6._2_2_ = uVar13;
      auVar6._0_2_ = (short)(uVar3 >> 0x10);
      uVar12 = (undefined2)param_2;
      auVar19._8_4_ = 0;
      auVar19._0_8_ = uVar4;
      auVar19._12_2_ = (short)(uVar4 >> 0x30);
      auVar19._14_2_ = in_XMM1_Wd;
      auVar18._12_4_ = auVar19._12_4_;
      auVar18._8_2_ = 0;
      auVar18._0_8_ = uVar4;
      auVar18._10_2_ = in_XMM1_Wc;
      auVar17._10_6_ = auVar18._10_6_;
      auVar17._8_2_ = (short)(uVar4 >> 0x20);
      auVar17._0_8_ = uVar4;
      auVar7._4_8_ = auVar17._8_8_;
      auVar7._2_2_ = uVar13;
      auVar7._0_2_ = (short)(uVar4 >> 0x10);
      uVar5 = *(ulonglong *)(lVar1 + uVar11 * 2);
      auVar22._8_4_ = 0;
      auVar22._0_8_ = uVar5;
      auVar22._12_2_ = (short)(uVar5 >> 0x30);
      auVar22._14_2_ = in_XMM1_Wd;
      auVar21._12_4_ = auVar22._12_4_;
      auVar21._8_2_ = 0;
      auVar21._0_8_ = uVar5;
      auVar21._10_2_ = in_XMM1_Wc;
      auVar20._10_6_ = auVar21._10_6_;
      auVar20._8_2_ = (short)(uVar5 >> 0x20);
      auVar20._0_8_ = uVar5;
      auVar8._4_8_ = auVar20._8_8_;
      auVar8._2_2_ = uVar13;
      auVar8._0_2_ = (short)(uVar5 >> 0x10);
      pfVar2 = (float *)(param_1 * 4 + in_R10 + uVar11 * 4);
      *pfVar2 = (float)(CONCAT22(uVar12,(short)uVar3) + CONCAT22(uVar12,(short)uVar4)) *
                (float)in_XMM2_Qa + (float)CONCAT22(uVar12,(short)uVar5) * in_XMM4_Da;
      pfVar2[1] = (float)(auVar6._0_4_ + auVar7._0_4_) * (float)((ulonglong)in_XMM2_Qa >> 0x20) +
                  (float)auVar8._0_4_ * in_XMM4_Db;
      pfVar2[2] = (float)(auVar14._8_4_ + auVar17._8_4_) * in_XMM2_Dc +
                  (float)auVar20._8_4_ * in_XMM4_Dc;
      pfVar2[3] = (float)(auVar15._12_4_ + auVar18._12_4_) * in_XMM2_Dd +
                  (float)auVar21._12_4_ * in_XMM4_Dd;
      uVar11 = uVar11 + 4;
    } while (uVar11 < uVar9);
    if (uVar9 < uVar10) {
      in_R9 = in_R9 + param_1 * 2;
      do {
        *(float *)(in_R10 + param_1 * 4 + uVar9 * 4) =
             (float)((uint)*(ushort *)(in_R9 + -2 + uVar9 * 2) +
                    (uint)*(ushort *)(in_R9 + 2 + uVar9 * 2)) * param_4 +
             (float)*(ushort *)(in_R9 + uVar9 * 2) * in_XMM0_Da;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
    return;
  }
  FUN_140066446();
  return;
}


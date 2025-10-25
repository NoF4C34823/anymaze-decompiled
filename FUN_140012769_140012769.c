
void FUN_140012769(byte *param_1,float param_2,int param_3,undefined8 param_4)

{
  undefined1 *in_RDX;
  undefined1 in_R9B;
  int in_R10D;
  float in_XMM0_Da;
  float in_XMM2_Da;
  undefined4 uVar1;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float in_XMM4_Da;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar1 = (undefined4)((ulonglong)param_4 >> 0x20);
  if (in_R10D < param_3) {
    do {
      fVar9 = (float)*param_1;
      fVar8 = (float)param_1[1];
      fVar7 = (float)param_1[2];
      fVar10 = fVar9;
      if (fVar9 <= fVar8) {
        fVar10 = fVar8;
      }
      fVar6 = fVar9;
      if (fVar8 <= fVar9) {
        fVar6 = fVar8;
      }
      if (fVar10 <= fVar7) {
        fVar10 = fVar7;
      }
      if (fVar7 <= fVar6) {
        fVar6 = fVar7;
      }
      auVar4._4_4_ = uVar1;
      auVar4._0_4_ = fVar10;
      auVar4._8_4_ = in_XMM3_Dc;
      auVar4._12_4_ = in_XMM3_Dd;
      in_RDX[2] = (char)(int)ROUND(fVar10);
      auVar12._4_12_ = auVar4._4_12_;
      auVar12._0_4_ = fVar10 - fVar6;
      if ((fVar10 == 0.0) || ((auVar12._0_4_ == 0.0 && (!NAN(auVar12._0_4_))))) {
        in_RDX[1] = in_R9B;
        *in_RDX = in_R9B;
      }
      else {
        auVar3._4_4_ = uVar1;
        auVar3._0_4_ = fVar10;
        auVar3._8_4_ = in_XMM3_Dc;
        auVar3._12_4_ = in_XMM3_Dd;
        auVar13._4_4_ = uVar1;
        auVar13._0_4_ = fVar10;
        auVar13._8_4_ = in_XMM3_Dc;
        auVar13._12_4_ = in_XMM3_Dd;
        auVar4 = rcpss(auVar3,auVar13);
        auVar13 = rcpss(auVar12,auVar12);
        fVar2 = auVar13._0_4_;
        fVar5 = (fVar10 - fVar9) * fVar2;
        fVar11 = (fVar10 - fVar7) * fVar2;
        fVar2 = (fVar10 - fVar8) * fVar2;
        in_RDX[1] = (char)(int)ROUND(auVar4._0_4_ * auVar12._0_4_ * param_2);
        fVar6 = (float)param_4;
        if ((fVar10 == fVar9) && (!NAN(fVar10) && !NAN(fVar9))) {
          fVar6 = fVar11 - fVar2;
        }
        if ((fVar10 == fVar8) && (!NAN(fVar10) && !NAN(fVar8))) {
          fVar6 = (fVar5 - fVar11) + in_XMM4_Da;
        }
        if ((fVar10 == fVar7) && (!NAN(fVar10) && !NAN(fVar7))) {
          fVar6 = (fVar2 - fVar5) + in_XMM0_Da;
        }
        fVar6 = fVar6 * in_XMM2_Da;
        if (fVar6 < 0.0) {
          fVar6 = fVar6 + param_2;
        }
        *in_RDX = (char)(int)ROUND(fVar6);
      }
      in_R10D = in_R10D + 1;
      param_1 = param_1 + 4;
      in_RDX = in_RDX + 4;
    } while (in_R10D < param_3);
  }
  return;
}


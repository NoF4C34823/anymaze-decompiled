
void FUN_140012c3b(byte *param_1,float param_2,int param_3,undefined8 param_4)

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
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  
  uVar1 = (undefined4)((ulonglong)param_4 >> 0x20);
  if (in_R10D < param_3) {
    do {
      fVar12 = (float)*param_1;
      fVar2 = (float)param_1[1];
      fVar3 = (float)param_1[2];
      fVar5 = fVar12;
      if (fVar12 <= fVar2) {
        fVar5 = fVar2;
      }
      fVar4 = fVar12;
      if (fVar2 <= fVar12) {
        fVar4 = fVar2;
      }
      if (fVar5 <= fVar3) {
        fVar5 = fVar3;
      }
      if (fVar3 <= fVar4) {
        fVar4 = fVar3;
      }
      auVar8._4_4_ = uVar1;
      auVar8._0_4_ = fVar5;
      auVar8._8_4_ = in_XMM3_Dc;
      auVar8._12_4_ = in_XMM3_Dd;
      auVar7._4_12_ = auVar8._4_12_;
      auVar7._0_4_ = fVar5 - fVar4;
      in_RDX[2] = (char)(int)ROUND(fVar5);
      if ((fVar5 == 0.0) || ((auVar7._0_4_ == 0.0 && (!NAN(auVar7._0_4_))))) {
        in_RDX[1] = in_R9B;
        *in_RDX = in_R9B;
      }
      else {
        auVar10._4_4_ = uVar1;
        auVar10._0_4_ = fVar5;
        auVar10._8_4_ = in_XMM3_Dc;
        auVar10._12_4_ = in_XMM3_Dd;
        auVar11._4_4_ = uVar1;
        auVar11._0_4_ = fVar5;
        auVar11._8_4_ = in_XMM3_Dc;
        auVar11._12_4_ = in_XMM3_Dd;
        auVar11 = rcpss(auVar10,auVar11);
        auVar8 = rcpss(auVar7,auVar7);
        in_RDX[1] = (char)(int)ROUND(auVar11._0_4_ * auVar7._0_4_ * in_XMM2_Da);
        fVar6 = auVar8._0_4_;
        fVar9 = (fVar5 - fVar12) * fVar6;
        fVar13 = (fVar5 - fVar2) * fVar6;
        fVar6 = (fVar5 - fVar3) * fVar6;
        fVar4 = (float)param_4;
        if ((fVar5 == fVar12) && (!NAN(fVar5) && !NAN(fVar12))) {
          fVar4 = fVar6 - fVar13;
        }
        if ((fVar5 == fVar2) && (!NAN(fVar5) && !NAN(fVar2))) {
          fVar4 = (fVar9 - fVar6) + param_2;
        }
        if ((fVar5 == fVar3) && (!NAN(fVar5) && !NAN(fVar3))) {
          fVar4 = (fVar13 - fVar9) + in_XMM4_Da;
        }
        fVar4 = fVar4 * in_XMM0_Da;
        if (fVar4 < 0.0) {
          fVar4 = fVar4 + in_XMM2_Da;
        }
        *in_RDX = (char)(int)ROUND(fVar4);
      }
      in_R10D = in_R10D + 1;
      param_1 = param_1 + 3;
      in_RDX = in_RDX + 3;
    } while (in_R10D < param_3);
  }
  return;
}


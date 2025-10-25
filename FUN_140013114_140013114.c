
void FUN_140013114(byte *param_1,float param_2,int param_3,float param_4)

{
  undefined1 *in_RDX;
  undefined1 in_R9B;
  int in_R10D;
  float in_XMM2_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  undefined4 in_XMM5_Db;
  undefined4 in_XMM5_Dc;
  undefined4 in_XMM5_Dd;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  
  do {
    fVar11 = (float)*param_1;
    fVar1 = (float)param_1[1];
    fVar2 = (float)param_1[2];
    fVar4 = fVar11;
    if (fVar11 <= fVar1) {
      fVar4 = fVar1;
    }
    fVar3 = fVar11;
    if (fVar1 <= fVar11) {
      fVar3 = fVar1;
    }
    if (fVar4 <= fVar2) {
      fVar4 = fVar2;
    }
    if (fVar2 <= fVar3) {
      fVar3 = fVar2;
    }
    auVar7._4_4_ = in_XMM5_Db;
    auVar7._0_4_ = fVar4;
    auVar7._8_4_ = in_XMM5_Dc;
    auVar7._12_4_ = in_XMM5_Dd;
    auVar6._4_12_ = auVar7._4_12_;
    auVar6._0_4_ = fVar4 - fVar3;
    in_RDX[2] = (char)(int)ROUND(fVar4);
    if ((fVar4 == 0.0) || ((auVar6._0_4_ == 0.0 && (!NAN(auVar6._0_4_))))) {
      in_RDX[1] = in_R9B;
      *in_RDX = in_R9B;
    }
    else {
      auVar9._4_4_ = in_XMM5_Db;
      auVar9._0_4_ = fVar4;
      auVar9._8_4_ = in_XMM5_Dc;
      auVar9._12_4_ = in_XMM5_Dd;
      auVar10._4_4_ = in_XMM5_Db;
      auVar10._0_4_ = fVar4;
      auVar10._8_4_ = in_XMM5_Dc;
      auVar10._12_4_ = in_XMM5_Dd;
      auVar10 = rcpss(auVar9,auVar10);
      auVar7 = rcpss(auVar6,auVar6);
      in_RDX[1] = (char)(int)ROUND(auVar10._0_4_ * auVar6._0_4_ * in_XMM4_Da);
      fVar5 = auVar7._0_4_;
      fVar8 = (fVar4 - fVar11) * fVar5;
      fVar12 = (fVar4 - fVar1) * fVar5;
      fVar5 = (fVar4 - fVar2) * fVar5;
      fVar3 = in_XMM5_Da;
      if ((fVar4 == fVar11) && (!NAN(fVar4) && !NAN(fVar11))) {
        fVar3 = fVar5 - fVar12;
      }
      if ((fVar4 == fVar1) && (!NAN(fVar4) && !NAN(fVar1))) {
        fVar3 = (fVar8 - fVar5) + in_XMM2_Da;
      }
      if ((fVar4 == fVar2) && (!NAN(fVar4) && !NAN(fVar2))) {
        fVar3 = (fVar12 - fVar8) + param_2;
      }
      fVar3 = fVar3 * param_4;
      if (fVar3 < 0.0) {
        fVar3 = fVar3 + in_XMM4_Da;
      }
      *in_RDX = (char)(int)ROUND(fVar3);
    }
    in_R10D = in_R10D + 1;
    param_1 = param_1 + 4;
    in_RDX = in_RDX + 4;
  } while (in_R10D < param_3);
  return;
}


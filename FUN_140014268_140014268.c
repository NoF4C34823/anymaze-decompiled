
void FUN_140014268(byte *param_1,float param_2,int param_3,undefined1 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined1 *in_RDX;
  int in_R10D;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float in_XMM4_Da;
  undefined1 in_register_00001304 [12];
  float in_XMM5_Da;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  
  if (in_R10D < param_3) {
    do {
      auVar5._0_4_ = (float)*param_1;
      auVar5._4_12_ = in_register_00001304;
      auVar9._0_4_ = (float)param_1[1];
      auVar9._4_12_ = in_register_00001304;
      auVar2 = vminss_avx(auVar5,auVar9);
      auVar8._0_4_ = (float)param_1[2];
      auVar8._4_12_ = in_register_00001304;
      auVar1 = vmaxss_avx(auVar5,auVar9);
      auVar2 = vminss_avx(auVar2,auVar8);
      auVar1 = vmaxss_avx(auVar1,auVar8);
      fVar6 = auVar1._0_4_;
      fVar10 = fVar6 - auVar2._0_4_;
      in_RDX[2] = (char)(int)ROUND(fVar6);
      if ((fVar6 == 0.0) || ((fVar10 == 0.0 && (!NAN(fVar10))))) {
        in_RDX[1] = param_4;
        *in_RDX = param_4;
      }
      else {
        auVar1 = vrcpss_avx(auVar1,auVar1);
        auVar2 = vrcpss_avx(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar7 = auVar2._0_4_;
        fVar3 = (fVar6 - auVar5._0_4_) * fVar7;
        fVar4 = (fVar6 - auVar9._0_4_) * fVar7;
        fVar7 = (fVar6 - auVar8._0_4_) * fVar7;
        in_RDX[1] = (char)(int)ROUND(auVar1._0_4_ * fVar10 * in_XMM2_Da);
        fVar10 = in_XMM4_Da;
        if ((fVar6 == auVar5._0_4_) && (!NAN(fVar6) && !NAN(auVar5._0_4_))) {
          fVar10 = fVar7 - fVar4;
        }
        if ((fVar6 == auVar9._0_4_) && (!NAN(fVar6) && !NAN(auVar9._0_4_))) {
          fVar10 = (fVar3 - fVar7) + in_XMM0_Da;
        }
        if ((fVar6 == auVar8._0_4_) && (!NAN(fVar6) && !NAN(auVar8._0_4_))) {
          fVar10 = (fVar4 - fVar3) + in_XMM5_Da;
        }
        fVar10 = fVar10 * param_2;
        if (fVar10 < 0.0) {
          fVar10 = fVar10 + in_XMM2_Da;
        }
        *in_RDX = (char)(int)ROUND(fVar10);
      }
      in_R10D = in_R10D + 1;
      param_1 = param_1 + 4;
      in_RDX = in_RDX + 4;
    } while (in_R10D < param_3);
  }
  return;
}


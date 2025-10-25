
void FUN_1400146ad(byte *param_1,undefined1 *param_2,int param_3,int param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_AL;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM16 [16];
  undefined1 in_XMM17 [16];
  undefined1 in_XMM21 [16];
  undefined1 in_XMM27 [16];
  
  if (param_4 < param_3) {
    do {
      auVar10 = vcvtsi2ss_avx512f(in_XMM3,(uint)*param_1);
      auVar2 = vcvtsi2ss_avx512f(in_XMM3,(uint)param_1[1]);
      auVar5 = vmaxss_avx512f(auVar10,auVar2);
      auVar3 = vcvtsi2ss_avx512f(in_XMM3,(uint)param_1[2]);
      auVar6 = vminss_avx512f(auVar10,auVar2);
      auVar5 = vmaxss_avx512f(auVar5,auVar3);
      auVar6 = vminss_avx512f(auVar6,auVar3);
      fVar11 = auVar5._0_4_;
      fVar1 = fVar11 - auVar6._0_4_;
      param_2[2] = (char)(int)ROUND(fVar11);
      if ((fVar11 == 0.0) || ((fVar1 == 0.0 && (!NAN(fVar1))))) {
        param_2[1] = in_AL;
        *param_2 = in_AL;
      }
      else {
        auVar6 = vrcpss_avx(auVar5,auVar5);
        auVar7 = vsubss_avx512f(auVar5,auVar10);
        auVar8 = vsubss_avx512f(auVar5,auVar2);
        auVar9 = vsubss_avx512f(auVar5,auVar3);
        auVar5 = ZEXT416((uint)fVar1);
        auVar6 = vmulss_avx512f(auVar6,auVar5);
        auVar5 = vrcpss_avx(auVar5,auVar5);
        auVar6 = vmulss_avx512f(auVar6,in_XMM27);
        auVar7 = vmulss_avx512f(auVar7,auVar5);
        auVar8 = vmulss_avx512f(auVar8,auVar5);
        auVar9 = vmulss_avx512f(auVar9,auVar5);
        uVar4 = vcvtss2si_avx512f(auVar6);
        param_2[1] = (char)uVar4;
        auVar5 = in_XMM3;
        if ((fVar11 == auVar10._0_4_) && (!NAN(fVar11) && !NAN(auVar10._0_4_))) {
          auVar5 = vsubss_avx512f(auVar9,auVar8);
        }
        if ((fVar11 == auVar2._0_4_) && (!NAN(fVar11) && !NAN(auVar2._0_4_))) {
          auVar10 = vsubss_avx512f(auVar7,auVar9);
          auVar5 = vaddss_avx512f(auVar10,in_XMM17);
        }
        if ((fVar11 == auVar3._0_4_) && (!NAN(fVar11) && !NAN(auVar3._0_4_))) {
          auVar10 = vsubss_avx512f(auVar8,auVar7);
          auVar5 = vaddss_avx512f(auVar10,in_XMM16);
        }
        auVar10 = vmulss_avx512f(auVar5,in_XMM21);
        if (auVar10._0_4_ < 0.0) {
          auVar10 = vaddss_avx512f(auVar10,in_XMM27);
        }
        *param_2 = (char)(int)ROUND(auVar10._0_4_);
      }
      param_4 = param_4 + 1;
      param_1 = param_1 + 3;
      param_2 = param_2 + 3;
    } while (param_4 < param_3);
  }
  return;
}


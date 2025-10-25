
void FUN_140206c97(undefined8 param_1,float param_2,ulonglong param_3)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  longlong in_RDX;
  ulonglong uVar8;
  longlong in_R10;
  longlong in_R11;
  float in_XMM0_Da;
  undefined1 in_register_00001244 [12];
  undefined4 in_XMM2_Da;
  undefined1 in_register_00001284 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (in_R11 + 1U <= param_3) {
    param_3 = param_3 - in_R11;
    if ((longlong)param_3 < 4) {
      FUN_140206d4d(param_1,in_RDX,param_3,0);
      return;
    }
    uVar7 = 0;
    auVar9._4_4_ = in_XMM2_Da;
    auVar9._0_4_ = in_XMM2_Da;
    auVar9._8_4_ = in_XMM2_Da;
    auVar9._12_4_ = in_XMM2_Da;
    uVar8 = param_3 & 0xfffffffffffffffc;
    auVar10._4_4_ = in_XMM0_Da;
    auVar10._0_4_ = in_XMM0_Da;
    auVar10._8_4_ = in_XMM0_Da;
    auVar10._12_4_ = in_XMM0_Da;
    do {
      lVar1 = uVar7 + in_R11;
      pfVar2 = (float *)(in_R10 + -4 + lVar1 * 4);
      pfVar3 = (float *)(in_R10 + 4 + lVar1 * 4);
      pfVar4 = (float *)(in_R10 + -8 + lVar1 * 4);
      auVar11._0_4_ = param_2 * (*pfVar2 + *pfVar3);
      auVar11._4_4_ = param_2 * (pfVar2[1] + pfVar3[1]);
      auVar11._8_4_ = param_2 * (pfVar2[2] + pfVar3[2]);
      auVar11._12_4_ = param_2 * (pfVar2[3] + pfVar3[3]);
      pfVar2 = (float *)(in_R10 + in_R11 * 4 + 8 + uVar7 * 4);
      auVar12._0_4_ = *pfVar4 + *pfVar2;
      auVar12._4_4_ = pfVar4[1] + pfVar2[1];
      auVar12._8_4_ = pfVar4[2] + pfVar2[2];
      auVar12._12_4_ = pfVar4[3] + pfVar2[3];
      auVar11 = vfmadd231ps_fma(auVar11,auVar12,auVar9);
      auVar11 = vfmadd231ps_fma(auVar11,auVar10,*(undefined1 (*) [16])(in_R10 + lVar1 * 4));
      *(undefined1 (*) [16])(in_RDX + in_R11 * 4 + uVar7 * 4) = auVar11;
      uVar7 = uVar7 + 4;
    } while (uVar7 < uVar8);
    if (uVar8 < param_3) {
      lVar1 = in_R10 + in_R11 * 4;
      do {
        auVar6._4_12_ = in_register_00001284;
        auVar6._0_4_ = in_XMM2_Da;
        auVar9 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar1 + -8 + uVar8 * 4) +
                                               *(float *)(lVar1 + 8 + uVar8 * 4))),auVar6,
                                 ZEXT416((uint)(in_XMM0_Da * *(float *)(lVar1 + uVar8 * 4))));
        auVar5._4_12_ = in_register_00001244;
        auVar5._0_4_ = param_2;
        auVar9 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar1 + -4 + uVar8 * 4) +
                                               *(float *)(lVar1 + 4 + uVar8 * 4))),auVar5,auVar9);
        *(int *)(in_RDX + in_R11 * 4 + uVar8 * 4) = auVar9._0_4_;
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_3);
    }
  }
  return;
}


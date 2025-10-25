
void FUN_1400d5fbb(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  ulonglong in_RAX;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float in_XMM0_Da;
  undefined4 in_XMM2_Da;
  undefined1 in_register_00001284 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  
  if (param_2 + 1U <= in_RAX) {
    uVar8 = in_RAX - param_2;
    if ((longlong)uVar8 < 8) {
      uVar10 = 0;
    }
    else {
      uVar9 = 0;
      auVar12._4_4_ = in_XMM2_Da;
      auVar12._0_4_ = in_XMM2_Da;
      auVar12._8_4_ = in_XMM2_Da;
      auVar12._12_4_ = in_XMM2_Da;
      auVar12._16_4_ = in_XMM2_Da;
      auVar12._20_4_ = in_XMM2_Da;
      auVar12._24_4_ = in_XMM2_Da;
      auVar12._28_4_ = in_XMM2_Da;
      uVar10 = uVar8 & 0xfffffffffffffff8;
      do {
        lVar1 = param_1 + param_2;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)((uVar9 - 3) + lVar1);
        auVar2 = vpmovzxbw_avx(auVar2);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(uVar9 + 3 + lVar1);
        auVar3 = vpmovzxbw_avx(auVar3);
        auVar2 = vpaddw_avx(auVar2,auVar3);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulonglong *)(uVar9 + lVar1);
        auVar3 = vpmovzxbw_avx(auVar4);
        auVar5 = vpmovzxwd_avx2(auVar3);
        auVar5 = vcvtdq2ps_avx(auVar5);
        auVar7._4_4_ = in_XMM0_Da * auVar5._4_4_;
        auVar7._0_4_ = in_XMM0_Da * auVar5._0_4_;
        auVar7._8_4_ = in_XMM0_Da * auVar5._8_4_;
        auVar7._12_4_ = in_XMM0_Da * auVar5._12_4_;
        auVar7._16_4_ = in_XMM0_Da * auVar5._16_4_;
        auVar7._20_4_ = in_XMM0_Da * auVar5._20_4_;
        auVar7._24_4_ = in_XMM0_Da * auVar5._24_4_;
        auVar7._28_4_ = auVar5._28_4_;
        auVar5 = vpmovzxwd_avx2(auVar2);
        auVar5 = vcvtdq2ps_avx(auVar5);
        auVar2 = vfmadd231ps_fma(auVar7,auVar5,auVar12);
        *(undefined1 (*) [32])(param_3 + param_2 * 4 + uVar9 * 4) = ZEXT1632(auVar2);
        uVar9 = uVar9 + 8;
      } while (uVar9 < uVar10);
    }
    if (uVar10 < uVar8) {
      param_1 = param_1 + param_2;
      do {
        auVar11._0_4_ =
             (float)((uint)*(byte *)((uVar10 - 3) + param_1) + (uint)*(byte *)(uVar10 + 3 + param_1)
                    );
        auVar11._4_8_ = SUB128(ZEXT812(0),4);
        auVar11._12_4_ = 0;
        auVar6._4_12_ = in_register_00001284;
        auVar6._0_4_ = in_XMM2_Da;
        auVar2 = vfmadd231ss_fma(ZEXT416((uint)(in_XMM0_Da * (float)*(byte *)(uVar10 + param_1))),
                                 auVar11,auVar6);
        *(int *)(param_3 + param_2 * 4 + uVar10 * 4) = auVar2._0_4_;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
    }
  }
  return;
}


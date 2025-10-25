
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400113b8(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint in_EAX;
  uint unaff_EBX;
  uint unaff_EBP;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong in_R10;
  undefined1 auVar9 [16];
  
  auVar6 = _DAT_1430865b0;
  auVar5 = _DAT_1430865a0;
  uVar7 = (ulonglong)(param_3 & 0xfffffffc);
  auVar2 = vpshufd_avx(ZEXT416(unaff_EBX),0);
  uVar8 = 0;
  auVar3 = vpshufd_avx(ZEXT416(unaff_EBP),0);
  auVar4 = vpshufd_avx(ZEXT416(in_EAX),0);
  do {
    auVar9 = vpinsrb_avx(ZEXT116(*(byte *)(param_1 + uVar8 * 4)),
                         (uint)*(byte *)(param_1 + 4 + uVar8 * 4),1);
    auVar9 = vpinsrb_avx(auVar9,(uint)*(byte *)(param_1 + 8 + uVar8 * 4),2);
    auVar9 = vpinsrb_avx(auVar9,(uint)*(byte *)(param_1 + 0xc + uVar8 * 4),3);
    auVar1 = vpinsrb_avx(ZEXT116(*(byte *)(param_1 + 1 + uVar8 * 4)),
                         (uint)*(byte *)(param_1 + 5 + uVar8 * 4),1);
    auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)(param_1 + 9 + uVar8 * 4),2);
    auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)(param_1 + 0xd + uVar8 * 4),3);
    auVar9 = vpmovzxbd_avx(auVar9);
    auVar1 = vpmovzxbd_avx(auVar1);
    auVar9 = vpmulld_avx(auVar2,auVar9);
    auVar1 = vpmulld_avx(auVar3,auVar1);
    auVar9 = vpaddd_avx(auVar9,auVar1);
    auVar1 = vpinsrb_avx(ZEXT116(*(byte *)(param_1 + 2 + uVar8 * 4)),
                         (uint)*(byte *)(param_1 + 6 + uVar8 * 4),1);
    auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)(param_1 + 10 + uVar8 * 4),2);
    auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)(param_1 + 0xe + uVar8 * 4),3);
    auVar1 = vpmovzxbd_avx(auVar1);
    auVar1 = vpmulld_avx(auVar4,auVar1);
    auVar9 = vpaddd_avx(auVar9,auVar1);
    auVar9 = vpaddd_avx(auVar9,auVar5);
    auVar9 = vpsrad_avx(auVar9,0xf);
    auVar9 = vpshufb_avx(auVar9,auVar6);
    *(int *)(uVar8 + param_2) = auVar9._0_4_;
    uVar8 = uVar8 + 4;
  } while (uVar8 < uVar7);
  for (; uVar7 < in_R10; uVar7 = uVar7 + 1) {
    *(char *)(uVar7 + param_2) =
         (char)(*(byte *)(param_1 + uVar7 * 4) * unaff_EBX +
                *(byte *)(param_1 + 1 + uVar7 * 4) * unaff_EBP + 0x4000 +
                *(byte *)(param_1 + 2 + uVar7 * 4) * in_EAX >> 0xf);
  }
  return;
}


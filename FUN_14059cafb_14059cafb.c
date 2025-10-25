
ulonglong FUN_14059cafb(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
                       ulonglong param_4)

{
  undefined1 (*pauVar1) [64];
  longlong in_RAX;
  undefined1 *puVar2;
  undefined1 (*pauVar3) [64];
  undefined1 (*pauVar4) [64];
  ulonglong uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [64];
  longlong in_R10;
  ulonglong uVar9;
  undefined1 (*pauVar10) [64];
  undefined1 (*pauVar11) [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 in_YMM27 [32];
  longlong lStack0000000000000050;
  longlong lStack0000000000000058;
  longlong lStack0000000000000060;
  ulonglong in_stack_000000a0;
  
  lStack0000000000000058 = in_R10 * 4;
  lStack0000000000000050 = in_R10 * 8;
  lStack0000000000000060 = param_2;
  do {
    uVar5 = ((ulonglong)param_3 & 0x1f) >> 2;
    pauVar3 = param_1;
    pauVar8 = param_3;
    uVar9 = in_stack_000000a0;
    if (uVar5 != 0) {
      uVar5 = 8 - uVar5;
      if ((longlong)in_stack_000000a0 <= (longlong)uVar5) {
        uVar5 = in_stack_000000a0;
      }
      FUN_14059ce40(param_1);
      pauVar3 = (undefined1 (*) [64])(*param_1 + uVar5 * 4);
      uVar9 = in_stack_000000a0 - uVar5;
      pauVar8 = (undefined1 (*) [64])(*param_3 + uVar5 * 4);
    }
    uVar5 = (longlong)uVar9 >> 4;
    if (uVar5 != 0) {
      pauVar10 = (undefined1 (*) [64])(*pauVar3 + in_R10 * 4);
      auVar17 = vmaxps_avx512f(*pauVar3,*pauVar10);
      pauVar4 = (undefined1 (*) [64])(*pauVar3 + in_R10 * 8);
      auVar18 = vmaxps_avx512f(auVar17,*pauVar4);
      lVar6 = 0;
      auVar17 = auVar18;
      if (1 < (longlong)uVar5) {
        do {
          lVar6 = lVar6 + 1;
          auVar18 = vmaxps_avx512f(pauVar3[1],
                                   *(undefined1 (*) [64])(pauVar3[1] + lStack0000000000000058));
          auVar18 = vmaxps_avx512f(auVar18,*(undefined1 (*) [64])
                                            (pauVar3[1] + lStack0000000000000050));
          pauVar3 = pauVar3 + 1;
          auVar19 = valignd_avx512f(auVar18,auVar17,3);
          auVar20 = valignd_avx512f(auVar18,auVar17,6);
          auVar17 = vmaxps_avx512f(auVar19,auVar17);
          auVar17 = vmaxps_avx512f(auVar20,auVar17);
          *pauVar8 = auVar17;
          pauVar8 = pauVar8 + 1;
          auVar17 = auVar18;
        } while (lVar6 < (longlong)(uVar5 - 1));
        pauVar10 = (undefined1 (*) [64])(*pauVar3 + in_R10 * 4);
        pauVar4 = (undefined1 (*) [64])(*pauVar3 + in_R10 * 8);
      }
      uVar5 = 0x3f;
      pauVar1 = pauVar3 + 1;
      pauVar3 = pauVar3 + 1;
      auVar17 = vmaxps_avx512f(ZEXT2464(SUB3224(*(undefined1 (*) [32])*pauVar1,0)),
                               ZEXT2464(SUB3224(*(undefined1 (*) [32])pauVar10[1],0)));
      auVar17 = vmaxps_avx512f(auVar17,ZEXT2464(SUB3224(*(undefined1 (*) [32])pauVar4[1],0)));
      auVar19 = valignd_avx512f(auVar17,auVar18,3);
      auVar17 = valignd_avx512f(auVar17,auVar18,6);
      auVar18 = vmaxps_avx512f(auVar19,auVar18);
      auVar17 = vmaxps_avx512f(auVar17,auVar18);
      *pauVar8 = auVar17;
      pauVar8 = pauVar8 + 1;
    }
    lVar6 = (longlong)(uVar9 - (uVar9 & 0xfffffffffffffff0)) >> 3;
    if (lVar6 != 0) {
      pauVar7 = (undefined1 (*) [32])(*pauVar3 + in_R10 * 4);
      auVar14 = vmaxps_avx(*(undefined1 (*) [32])*pauVar3,*pauVar7);
      pauVar11 = (undefined1 (*) [32])(*pauVar3 + in_R10 * 8);
      auVar14 = vmaxps_avx(auVar14,*pauVar11);
      uVar5 = 0;
      auVar16 = auVar14;
      if (1 < lVar6) {
        do {
          uVar5 = uVar5 + 1;
          auVar14 = vmaxps_avx(*(undefined1 (*) [32])(*pauVar3 + 0x20),
                               *(undefined1 (*) [32])(*pauVar3 + lStack0000000000000058 + 0x20));
          auVar14 = vmaxps_avx512vl(auVar14,*(undefined1 (*) [32])
                                             (*pauVar3 + lStack0000000000000050 + 0x20));
          puVar2 = *pauVar3 + 0x20;
          auVar15 = vshuff32x4_avx512vl(auVar16,auVar14,1);
          vpalignr_avx2(auVar15,auVar16,0xc);
          auVar15 = vpalignr_avx512vl(auVar14,auVar15);
          pauVar3 = (undefined1 (*) [64])
                    CONCAT62((int6)((ulonglong)puVar2 >> 0x10),
                             CONCAT11((byte)((ulonglong)puVar2 >> 8) | (byte)uVar5,(char)puVar2));
          auVar16 = vmaxps_avx512vl(auVar15,auVar16);
          *(undefined1 (*) [32])*pauVar8 = auVar16;
          pauVar8 = (undefined1 (*) [64])(*pauVar8 + 0x20);
          auVar16 = auVar14;
        } while ((longlong)uVar5 < lVar6 + -1);
        pauVar7 = (undefined1 (*) [32])(*pauVar3 + in_R10 * 4);
        pauVar11 = (undefined1 (*) [32])(*pauVar3 + in_R10 * 8);
      }
      auVar12 = vextracti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar7[1]),1);
      auVar13 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(*pauVar3 + 0x30),0);
      auVar12 = vpinsrq_avx512dq(auVar12,*(undefined8 *)(pauVar7[1] + 0x10),0);
      auVar16 = vinserti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])(*pauVar3 + 0x20)),auVar13,1);
      pauVar3 = (undefined1 (*) [64])(*pauVar3 + 0x20);
      auVar15 = vinserti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar7[1]),auVar12,1);
      auVar16 = vmaxps_avx512vl(auVar16,auVar15);
      auVar13 = vextracti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar11[1]),1);
      auVar13 = vpinsrq_avx512dq(auVar13,*(undefined8 *)(pauVar11[1] + 0x10),0);
      auVar15 = vinserti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar11[1]),auVar13,1);
      auVar16 = vmaxps_avx512vl(auVar16,auVar15);
      auVar16 = vshuff32x4_avx512vl(auVar14,auVar16,1);
      auVar16 = vpalignr_avx512vl(auVar16,auVar14);
      uVar5 = uVar5 | 0x62;
      param_4 = (ulonglong)(uint)((int)param_4 + Rsrc_FILE_ENGLANG_809._85969703_4_);
      auVar14 = vmaxps_avx512vl(auVar16,auVar14);
      auVar14 = vmaxps_avx512vl(in_YMM27,auVar14);
      *(undefined1 (*) [32])*pauVar8 = auVar14;
    }
    if ((uVar9 & 7) != 0) {
      uVar5 = FUN_14059ce40(pauVar3);
    }
    in_RAX = in_RAX + 1;
    param_1 = (undefined1 (*) [64])(*param_1 + in_R10 * 4);
    param_3 = (undefined1 (*) [64])(*param_3 + param_4 * 4);
  } while (in_RAX < lStack0000000000000060);
  return uVar5;
}



ulonglong FUN_14059cae0(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
                       ulonglong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 (*pauVar1) [64];
  undefined1 *puVar2;
  undefined1 (*pauVar3) [64];
  undefined1 (*pauVar4) [64];
  ulonglong uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [32];
  ulonglong uVar8;
  undefined1 (*pauVar9) [64];
  ulonglong uVar10;
  undefined1 (*pauVar11) [64];
  undefined1 (*pauVar12) [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 in_YMM27 [32];
  
  uVar5 = 0;
  if (0 < param_6) {
    uVar8 = uVar5;
    do {
      uVar5 = ((ulonglong)param_3 & 0x1f) >> 2;
      pauVar3 = param_1;
      pauVar9 = param_3;
      uVar10 = param_5;
      if (uVar5 != 0) {
        uVar5 = 8 - uVar5;
        if ((longlong)param_5 <= (longlong)uVar5) {
          uVar5 = param_5;
        }
        FUN_14059ce40(param_1,param_2,param_3,uVar5);
        pauVar3 = (undefined1 (*) [64])(*param_1 + uVar5 * 4);
        uVar10 = param_5 - uVar5;
        pauVar9 = (undefined1 (*) [64])(*param_3 + uVar5 * 4);
      }
      uVar5 = (longlong)uVar10 >> 4;
      if (uVar5 != 0) {
        pauVar11 = (undefined1 (*) [64])(*pauVar3 + param_2 * 4);
        auVar18 = vmaxps_avx512f(*pauVar3,*pauVar11);
        pauVar4 = (undefined1 (*) [64])(*pauVar3 + param_2 * 8);
        auVar19 = vmaxps_avx512f(auVar18,*pauVar4);
        lVar6 = 0;
        auVar18 = auVar19;
        if (1 < (longlong)uVar5) {
          do {
            lVar6 = lVar6 + 1;
            auVar19 = vmaxps_avx512f(pauVar3[1],*(undefined1 (*) [64])(pauVar3[1] + param_2 * 4));
            auVar19 = vmaxps_avx512f(auVar19,*(undefined1 (*) [64])(pauVar3[1] + param_2 * 8));
            pauVar3 = pauVar3 + 1;
            auVar20 = valignd_avx512f(auVar19,auVar18,3);
            auVar21 = valignd_avx512f(auVar19,auVar18,6);
            auVar18 = vmaxps_avx512f(auVar20,auVar18);
            auVar18 = vmaxps_avx512f(auVar21,auVar18);
            *pauVar9 = auVar18;
            pauVar9 = pauVar9 + 1;
            auVar18 = auVar19;
          } while (lVar6 < (longlong)(uVar5 - 1));
          pauVar11 = (undefined1 (*) [64])(*pauVar3 + param_2 * 4);
          pauVar4 = (undefined1 (*) [64])(*pauVar3 + param_2 * 8);
        }
        uVar5 = 0x3f;
        pauVar1 = pauVar3 + 1;
        pauVar3 = pauVar3 + 1;
        auVar18 = vmaxps_avx512f(ZEXT2464(SUB3224(*(undefined1 (*) [32])*pauVar1,0)),
                                 ZEXT2464(SUB3224(*(undefined1 (*) [32])pauVar11[1],0)));
        auVar18 = vmaxps_avx512f(auVar18,ZEXT2464(SUB3224(*(undefined1 (*) [32])pauVar4[1],0)));
        auVar20 = valignd_avx512f(auVar18,auVar19,3);
        auVar18 = valignd_avx512f(auVar18,auVar19,6);
        auVar19 = vmaxps_avx512f(auVar20,auVar19);
        auVar18 = vmaxps_avx512f(auVar18,auVar19);
        *pauVar9 = auVar18;
        pauVar9 = pauVar9 + 1;
      }
      lVar6 = (longlong)(uVar10 - (uVar10 & 0xfffffffffffffff0)) >> 3;
      if (lVar6 != 0) {
        pauVar7 = (undefined1 (*) [32])(*pauVar3 + param_2 * 4);
        auVar15 = vmaxps_avx(*(undefined1 (*) [32])*pauVar3,*pauVar7);
        pauVar12 = (undefined1 (*) [32])(*pauVar3 + param_2 * 8);
        auVar15 = vmaxps_avx(auVar15,*pauVar12);
        uVar5 = 0;
        auVar17 = auVar15;
        if (1 < lVar6) {
          do {
            uVar5 = uVar5 + 1;
            auVar15 = vmaxps_avx(*(undefined1 (*) [32])(*pauVar3 + 0x20),
                                 *(undefined1 (*) [32])(*pauVar3 + param_2 * 4 + 0x20));
            auVar15 = vmaxps_avx512vl(auVar15,*(undefined1 (*) [32])(*pauVar3 + param_2 * 8 + 0x20))
            ;
            puVar2 = *pauVar3 + 0x20;
            auVar16 = vshuff32x4_avx512vl(auVar17,auVar15,1);
            vpalignr_avx2(auVar16,auVar17,0xc);
            auVar16 = vpalignr_avx512vl(auVar15,auVar16);
            pauVar3 = (undefined1 (*) [64])
                      CONCAT62((int6)((ulonglong)puVar2 >> 0x10),
                               CONCAT11((byte)((ulonglong)puVar2 >> 8) | (byte)uVar5,(char)puVar2));
            auVar17 = vmaxps_avx512vl(auVar16,auVar17);
            *(undefined1 (*) [32])*pauVar9 = auVar17;
            pauVar9 = (undefined1 (*) [64])(*pauVar9 + 0x20);
            auVar17 = auVar15;
          } while ((longlong)uVar5 < lVar6 + -1);
          pauVar7 = (undefined1 (*) [32])(*pauVar3 + param_2 * 4);
          pauVar12 = (undefined1 (*) [32])(*pauVar3 + param_2 * 8);
        }
        auVar13 = vextracti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar7[1]),1);
        auVar14 = vpinsrq_avx((undefined1  [16])0x0,*(undefined8 *)(*pauVar3 + 0x30),0);
        auVar13 = vpinsrq_avx512dq(auVar13,*(undefined8 *)(pauVar7[1] + 0x10),0);
        auVar17 = vinserti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])(*pauVar3 + 0x20)),auVar14,1)
        ;
        pauVar3 = (undefined1 (*) [64])(*pauVar3 + 0x20);
        auVar16 = vinserti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar7[1]),auVar13,1);
        auVar17 = vmaxps_avx512vl(auVar17,auVar16);
        auVar14 = vextracti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar12[1]),1);
        auVar14 = vpinsrq_avx512dq(auVar14,*(undefined8 *)(pauVar12[1] + 0x10),0);
        auVar16 = vinserti32x4_avx512vl(ZEXT1632(*(undefined1 (*) [16])pauVar12[1]),auVar14,1);
        auVar17 = vmaxps_avx512vl(auVar17,auVar16);
        auVar17 = vshuff32x4_avx512vl(auVar15,auVar17,1);
        auVar17 = vpalignr_avx512vl(auVar17,auVar15);
        uVar5 = uVar5 | 0x62;
        param_4 = (ulonglong)(uint)((int)param_4 + Rsrc_FILE_ENGLANG_809._85969703_4_);
        auVar15 = vmaxps_avx512vl(auVar17,auVar15);
        auVar15 = vmaxps_avx512vl(in_YMM27,auVar15);
        *(undefined1 (*) [32])*pauVar9 = auVar15;
        pauVar9 = (undefined1 (*) [64])(*pauVar9 + 0x20);
      }
      if ((uVar10 & 7) != 0) {
        uVar5 = FUN_14059ce40(pauVar3,param_2,pauVar9);
      }
      uVar8 = uVar8 + 1;
      param_1 = (undefined1 (*) [64])(*param_1 + param_2 * 4);
      param_3 = (undefined1 (*) [64])(*param_3 + param_4 * 4);
    } while ((longlong)uVar8 < param_6);
  }
  return uVar5;
}


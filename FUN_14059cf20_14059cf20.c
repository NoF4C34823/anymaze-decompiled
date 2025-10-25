
void FUN_14059cf20(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [64],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 (*pauVar1) [64];
  longlong lVar2;
  undefined1 auVar3 [32];
  ulonglong uVar4;
  undefined1 (*pauVar5) [64];
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [64];
  undefined1 (*pauVar10) [64];
  undefined1 (*pauVar11) [64];
  longlong lVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  
  lVar12 = 0;
  if (0 < param_6) {
    lVar2 = param_2 * 4;
    do {
      uVar7 = ((ulonglong)param_3 & 0x1f) >> 2;
      uVar4 = param_5;
      pauVar5 = param_1;
      pauVar9 = param_3;
      if (uVar7 != 0) {
        uVar7 = 8 - uVar7;
        if ((longlong)param_5 <= (longlong)uVar7) {
          uVar7 = param_5;
        }
        FUN_14059d1a0(param_1,param_2,param_3,uVar7);
        pauVar5 = (undefined1 (*) [64])(*param_1 + uVar7 * 4);
        uVar4 = param_5 - uVar7;
        pauVar9 = (undefined1 (*) [64])(*param_3 + uVar7 * 4);
      }
      lVar8 = (longlong)uVar4 >> 4;
      if (lVar8 != 0) {
        pauVar10 = (undefined1 (*) [64])(*pauVar5 + param_2 * 4);
        auVar15 = vmaxps_avx512f(*pauVar5,*pauVar10);
        pauVar11 = (undefined1 (*) [64])(*pauVar5 + param_2 * 8);
        auVar16 = vmaxps_avx512f(auVar15,*pauVar11);
        lVar6 = 0;
        auVar15 = auVar16;
        if (1 < lVar8) {
          do {
            lVar6 = lVar6 + 1;
            auVar16 = vmaxps_avx512f(pauVar5[1],*(undefined1 (*) [64])(pauVar5[1] + lVar2));
            auVar16 = vmaxps_avx512f(auVar16,*(undefined1 (*) [64])(pauVar5[1] + param_2 * 8));
            pauVar5 = pauVar5 + 1;
            auVar17 = valignd_avx512f(auVar16,auVar15,4);
            auVar18 = valignd_avx512f(auVar16,auVar15,8);
            auVar15 = vmaxps_avx512f(auVar17,auVar15);
            auVar15 = vmaxps_avx512f(auVar18,auVar15);
            *pauVar9 = auVar15;
            pauVar9 = pauVar9 + 1;
            auVar15 = auVar16;
          } while (lVar6 < lVar8 + -1);
          pauVar10 = (undefined1 (*) [64])(*pauVar5 + param_2 * 4);
          pauVar11 = (undefined1 (*) [64])(*pauVar5 + param_2 * 8);
        }
        pauVar1 = pauVar5 + 1;
        pauVar5 = pauVar5 + 1;
        auVar15 = vmaxps_avx512f(ZEXT3264(*(undefined1 (*) [32])*pauVar1),
                                 ZEXT3264(*(undefined1 (*) [32])pauVar10[1]));
        auVar15 = vmaxps_avx512f(auVar15,ZEXT3264(*(undefined1 (*) [32])pauVar11[1]));
        auVar17 = valignd_avx512f(auVar15,auVar16,4);
        auVar15 = valignd_avx512f(auVar15,auVar16,8);
        auVar16 = vmaxps_avx512f(auVar17,auVar16);
        auVar15 = vmaxps_avx512f(auVar15,auVar16);
        *pauVar9 = auVar15;
        pauVar9 = pauVar9 + 1;
      }
      lVar8 = (longlong)(uVar4 - (uVar4 & 0xfffffffffffffff0)) >> 3;
      if (lVar8 != 0) {
        lVar6 = 0;
        auVar14 = vmaxps_avx(*(undefined1 (*) [32])*pauVar5,*(undefined1 (*) [32])(*pauVar5 + lVar2)
                            );
        auVar14 = vmaxps_avx(auVar14,*(undefined1 (*) [32])(*pauVar5 + param_2 * 8));
        if (0 < lVar8) {
          do {
            lVar6 = lVar6 + 1;
            auVar3 = vmaxps_avx(*(undefined1 (*) [32])(*pauVar5 + 0x20),
                                *(undefined1 (*) [32])(*pauVar5 + lVar2 + 0x20));
            auVar3 = vmaxps_avx(auVar3,*(undefined1 (*) [32])(*pauVar5 + param_2 * 8 + 0x20));
            pauVar5 = (undefined1 (*) [64])(*pauVar5 + 0x20);
            auVar13 = vshuff32x4_avx512vl(auVar14,auVar3,1);
            auVar14 = vmaxps_avx(auVar13,auVar14);
            auVar13 = vpalignr_avx2(auVar3,auVar13,0x10);
            auVar14 = vmaxps_avx512vl(auVar13,auVar14);
            *(undefined1 (*) [32])*pauVar9 = auVar14;
            pauVar9 = (undefined1 (*) [64])(*pauVar9 + 0x20);
            auVar14 = auVar3;
          } while (lVar6 < lVar8);
        }
      }
      if ((uVar4 & 7) != 0) {
        FUN_14059d1a0();
      }
      lVar12 = lVar12 + 1;
      param_1 = (undefined1 (*) [64])(*param_1 + param_2 * 4);
      param_3 = (undefined1 (*) [64])(*param_3 + param_4 * 4);
    } while (lVar12 < param_6);
  }
  return;
}


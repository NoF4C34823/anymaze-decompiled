
/* WARNING: Control flow encountered bad instruction data */

void FUN_1405865a0(undefined1 (*param_1) [64],longlong param_2,undefined1 (*param_3) [32],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 (*pauVar5) [64];
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 in_YMM18 [32];
  
  lVar7 = 0;
  if (0 < param_6 + -1) {
    do {
      uVar2 = param_5;
      pauVar5 = param_1;
      pauVar8 = param_3;
      if (((ulonglong)param_3 & 0x1f) != 0) {
        uVar11 = 0x20 - ((ulonglong)param_3 & 0x1f);
        if ((longlong)param_5 <= (longlong)uVar11) {
          uVar11 = param_5;
        }
        FUN_140586920(param_1,param_2,param_3,uVar11);
        pauVar5 = (undefined1 (*) [64])(*param_1 + uVar11);
        uVar2 = param_5 - uVar11;
        pauVar8 = (undefined1 (*) [32])(*param_3 + uVar11);
      }
      if ((longlong)uVar2 >> 6 != 0) {
        auVar17 = vpmaxub_avx512bw(*pauVar5,*(undefined1 (*) [64])(*pauVar5 + param_2));
        auVar17 = vpmaxub_avx512bw(auVar17,*(undefined1 (*) [64])(*pauVar5 + param_2 * 2));
        if (0 < (longlong)uVar2 >> 6) {
          auVar18 = vpmaxub_avx512bw(pauVar5[1],*(undefined1 (*) [64])(pauVar5[1] + param_2));
          auVar18 = vpmaxub_avx512bw(auVar18,*(undefined1 (*) [64])(pauVar5[1] + param_2 * 2));
          auVar18 = valignd_avx512f(auVar18,auVar17,4);
          vpalignr_avx512bw(auVar18,auVar17);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      lVar3 = (longlong)(uVar2 - (uVar2 & 0xffffffffffffffc0)) >> 5;
      if (lVar3 != 0) {
        lVar9 = 0;
        auVar15 = vpmaxub_avx2(*(undefined1 (*) [32])*pauVar5,
                               *(undefined1 (*) [32])(*pauVar5 + param_2));
        auVar15 = vpmaxub_avx2(auVar15,*(undefined1 (*) [32])(*pauVar5 + param_2 * 2));
        if (0 < lVar3) {
          do {
            lVar9 = lVar9 + 1;
            auVar16 = vpmaxub_avx2(*(undefined1 (*) [32])(*pauVar5 + 0x20),
                                   *(undefined1 (*) [32])(*pauVar5 + param_2 + 0x20));
            auVar13 = vpmaxub_avx512vl(auVar16,*(undefined1 (*) [32])(*pauVar5 + param_2 * 2 + 0x20)
                                      );
            pauVar5 = (undefined1 (*) [64])(*pauVar5 + 0x20);
            auVar14 = vshufi32x4_avx512vl(auVar15,auVar13,1);
            auVar16 = vpalignr_avx2(auVar14,auVar15,4);
            auVar14 = vpalignr_avx2(auVar14,auVar15,8);
            auVar15 = vpmaxub_avx2(auVar16,auVar15);
            auVar15 = vpmaxub_avx512vl(auVar14,auVar15);
            auVar15 = vmovdqu32_avx512vl(auVar15);
            *pauVar8 = auVar15;
            pauVar8 = pauVar8 + 1;
            auVar15 = vmovdqa32_avx512vl(auVar13);
          } while (lVar9 < lVar3);
        }
      }
      if ((uVar2 & 0x1f) != 0) {
        FUN_140586920(pauVar5,param_2);
      }
      lVar7 = lVar7 + 1;
      param_1 = (undefined1 (*) [64])(*param_1 + param_2);
      param_3 = (undefined1 (*) [32])(*param_3 + param_4);
    } while (lVar7 < param_6 + -1);
  }
  if (lVar7 < param_6) {
    do {
      uVar2 = param_5;
      pauVar5 = param_1;
      pauVar8 = param_3;
      if (((ulonglong)param_3 & 0x1f) != 0) {
        uVar11 = 0x20 - ((ulonglong)param_3 & 0x1f);
        if ((longlong)param_5 <= (longlong)uVar11) {
          uVar11 = param_5;
        }
        FUN_140586920(param_1,param_2,param_3,uVar11);
        pauVar5 = (undefined1 (*) [64])(*param_1 + uVar11);
        uVar2 = param_5 - uVar11;
        pauVar8 = (undefined1 (*) [32])(*param_3 + uVar11);
      }
      lVar3 = (longlong)uVar2 >> 5;
      if (lVar3 != 0) {
        pauVar12 = (undefined1 (*) [32])(*pauVar5 + param_2);
        auVar15 = vpmaxub_avx2(*(undefined1 (*) [32])*pauVar5,*pauVar12);
        pauVar6 = (undefined1 (*) [32])(*pauVar5 + param_2 * 2);
        auVar15 = vpmaxub_avx2(auVar15,*pauVar6);
        lVar10 = 0;
        lVar9 = lVar3 + -1;
        if (lVar9 != 0 && 0 < lVar3) {
          do {
            lVar10 = lVar10 + 1;
            auVar16 = vpmaxub_avx2(*(undefined1 (*) [32])(*pauVar5 + 0x20),
                                   *(undefined1 (*) [32])(*pauVar5 + param_2 + 0x20));
            auVar13 = vpmaxub_avx512vl(auVar16,*(undefined1 (*) [32])(*pauVar5 + param_2 * 2 + 0x20)
                                      );
            pauVar5 = (undefined1 (*) [64])(*pauVar5 + 0x20);
            auVar14 = vshufi32x4_avx512vl(auVar15,auVar13,1);
            auVar16 = vpalignr_avx2(auVar14,auVar15,4);
            auVar14 = vpalignr_avx2(auVar14,auVar15,8);
            auVar15 = vpmaxub_avx2(auVar16,auVar15);
            auVar15 = vpmaxub_avx512vl(auVar14,auVar15);
            auVar15 = vmovdqu32_avx512vl(auVar15);
            *pauVar8 = auVar15;
            pauVar8 = pauVar8 + 1;
            auVar15 = vmovdqa32_avx512vl(auVar13);
          } while (lVar10 < lVar9);
          pauVar12 = (undefined1 (*) [32])(*pauVar5 + param_2);
          pauVar6 = (undefined1 (*) [32])(*pauVar5 + param_2 * 2);
        }
        puVar1 = *pauVar5;
        pauVar5 = (undefined1 (*) [64])(*pauVar5 + 0x20);
        auVar16 = vpmaxub_avx2(ZEXT832(*(ulonglong *)(puVar1 + 0x20)),
                               ZEXT832(*(ulonglong *)pauVar12[1]));
        auVar16 = vpmaxub_avx2(auVar16,ZEXT832(*(ulonglong *)pauVar6[1]));
        auVar16 = vshufi32x4_avx512vl(auVar15,auVar16,1);
        auVar16 = vpalignr_avx512vl(auVar16,auVar15);
        pbVar4 = (byte *)CONCAT71((int7)((ulonglong)lVar9 >> 8),(char)lVar9 + 'b');
        if (pauVar5 == (undefined1 (*) [64])0x0) {
          return;
        }
        (*param_3)[0] = (*param_3)[0] & (byte)pauVar5;
        *pbVar4 = *pbVar4 >> 1 | *pbVar4 << 7;
        auVar15 = vpmaxub_avx512vl(auVar16,auVar15);
        auVar15 = vpmaxub_avx512vl(in_YMM18,auVar15);
        auVar15 = vmovdqu32_avx512vl(auVar15);
        *pauVar8 = auVar15;
        pauVar8 = pauVar8 + 1;
      }
      if ((uVar2 & 0x1f) != 0) {
        FUN_140586920(pauVar5,param_2,pauVar8);
      }
      lVar7 = lVar7 + 1;
      param_1 = (undefined1 (*) [64])(*param_1 + param_2);
      param_3 = (undefined1 (*) [32])(*param_3 + param_4);
    } while (lVar7 < param_6);
  }
  return;
}


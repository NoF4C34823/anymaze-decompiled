
void FUN_140460980(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  lVar17 = 0;
  if (0 < param_6) {
    lVar1 = param_2 * 4;
    do {
      uVar13 = ((ulonglong)param_3 & 0xf) >> 2;
      pauVar11 = param_1;
      uVar12 = param_5;
      pauVar15 = param_3;
      if (uVar13 != 0) {
        uVar13 = 4 - uVar13;
        if ((longlong)param_5 <= (longlong)uVar13) {
          uVar13 = param_5;
        }
        FUN_140460c00(param_1,param_2,param_3,uVar13);
        pauVar11 = (undefined1 (*) [16])(*param_1 + uVar13 * 4);
        uVar12 = param_5 - uVar13;
        pauVar15 = (undefined1 (*) [16])(*param_3 + uVar13 * 4);
      }
      if ((longlong)uVar12 >> 2 != 0) {
        uVar13 = ((longlong)uVar12 >> 2) - 1;
        lVar16 = 0;
        auVar19 = minps(*pauVar11,*(undefined1 (*) [16])(*pauVar11 + lVar1));
        uVar14 = uVar13 & 0xfffffffffffffffe;
        auVar19 = minps(auVar19,*(undefined1 (*) [16])(*pauVar11 + param_2 * 8));
        if (0 < (longlong)uVar14) {
          do {
            lVar16 = lVar16 + 2;
            auVar18 = minps(pauVar11[1],*(undefined1 (*) [16])(pauVar11[1] + lVar1));
            auVar18 = minps(auVar18,*(undefined1 (*) [16])(pauVar11[1] + param_2 * 8));
            auVar2._16_16_ = auVar18;
            auVar2._0_16_ = auVar19;
            auVar3._16_16_ = auVar18;
            auVar3._0_16_ = auVar19;
            auVar19 = minps(auVar2._4_16_,auVar19);
            auVar19 = minps(auVar3._8_16_,auVar19);
            *pauVar15 = auVar19;
            auVar19 = minps(pauVar11[2],*(undefined1 (*) [16])(pauVar11[2] + lVar1));
            pauVar10 = pauVar11 + 2;
            pauVar11 = pauVar11 + 2;
            auVar19 = minps(auVar19,*(undefined1 (*) [16])(*pauVar10 + param_2 * 8));
            auVar4._16_16_ = auVar19;
            auVar4._0_16_ = auVar18;
            auVar5._16_16_ = auVar19;
            auVar5._0_16_ = auVar18;
            auVar18 = minps(auVar4._4_16_,auVar18);
            auVar18 = minps(auVar5._8_16_,auVar18);
            pauVar15[1] = auVar18;
            pauVar15 = pauVar15 + 2;
          } while (lVar16 < (longlong)uVar14);
        }
        while (lVar16 < (longlong)uVar13) {
          lVar16 = lVar16 + 1;
          auVar18 = minps(pauVar11[1],*(undefined1 (*) [16])(pauVar11[1] + lVar1));
          pauVar10 = pauVar11 + 1;
          pauVar11 = pauVar11 + 1;
          auVar18 = minps(auVar18,*(undefined1 (*) [16])(*pauVar10 + param_2 * 8));
          auVar6._16_16_ = auVar18;
          auVar6._0_16_ = auVar19;
          auVar7._16_16_ = auVar18;
          auVar7._0_16_ = auVar19;
          auVar19 = minps(auVar6._4_16_,auVar19);
          auVar19 = minps(auVar7._8_16_,auVar19);
          *pauVar15 = auVar19;
          pauVar15 = pauVar15 + 1;
          auVar19 = auVar18;
        }
        auVar21._8_8_ = 0;
        auVar21._0_8_ = *(ulonglong *)pauVar11[1];
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)(pauVar11[1] + lVar1);
        auVar18 = minps(auVar21,auVar18);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = *(ulonglong *)(pauVar11[1] + param_2 * 8);
        pauVar11 = pauVar11 + 1;
        auVar18 = minps(auVar18,auVar20);
        auVar8._16_16_ = auVar18;
        auVar8._0_16_ = auVar19;
        auVar9._16_16_ = auVar18;
        auVar9._0_16_ = auVar19;
        auVar19 = minps(auVar9._4_16_,auVar19);
        auVar19 = minps(auVar8._8_16_,auVar19);
        *pauVar15 = auVar19;
        pauVar15 = pauVar15 + 1;
      }
      if ((uVar12 & 3) != 0) {
        FUN_140460c00(pauVar11,param_2,pauVar15);
      }
      lVar17 = lVar17 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2 * 4);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 4);
    } while (lVar17 < param_6);
  }
  return;
}


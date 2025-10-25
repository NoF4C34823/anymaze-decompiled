
void FUN_14045483a(longlong param_1,longlong param_2,undefined1 (*param_3) [16],longlong param_4)

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
  undefined1 (*in_R10) [16];
  longlong lVar16;
  longlong in_R11;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulonglong in_stack_000000a0;
  longlong in_stack_000000a8;
  
  lVar1 = param_2 * 4;
  do {
    uVar13 = ((ulonglong)param_3 & 0xf) >> 2;
    pauVar11 = in_R10;
    uVar12 = in_stack_000000a0;
    pauVar15 = param_3;
    if (uVar13 != 0) {
      uVar13 = 4 - uVar13;
      if ((longlong)in_stack_000000a0 <= (longlong)uVar13) {
        uVar13 = in_stack_000000a0;
      }
      FUN_140454aa0(in_R10,param_2,param_3,uVar13,1);
      pauVar11 = (undefined1 (*) [16])(*in_R10 + uVar13 * 4);
      uVar12 = in_stack_000000a0 - uVar13;
      pauVar15 = (undefined1 (*) [16])(*param_3 + uVar13 * 4);
      in_R11 = in_stack_000000a8;
    }
    if ((longlong)uVar12 >> 2 != 0) {
      uVar13 = ((longlong)uVar12 >> 2) - 1;
      lVar16 = 0;
      auVar18 = maxps(*pauVar11,*(undefined1 (*) [16])(*pauVar11 + lVar1));
      uVar14 = uVar13 & 0xfffffffffffffffe;
      auVar18 = maxps(auVar18,*(undefined1 (*) [16])(*pauVar11 + param_2 * 8));
      if (0 < (longlong)uVar14) {
        do {
          lVar16 = lVar16 + 2;
          auVar17 = maxps(pauVar11[1],*(undefined1 (*) [16])(pauVar11[1] + lVar1));
          auVar17 = maxps(auVar17,*(undefined1 (*) [16])(pauVar11[1] + param_2 * 8));
          auVar2._16_16_ = auVar17;
          auVar2._0_16_ = auVar18;
          auVar3._16_16_ = auVar17;
          auVar3._0_16_ = auVar18;
          auVar18 = maxps(auVar2._4_16_,auVar18);
          auVar18 = maxps(auVar3._8_16_,auVar18);
          *pauVar15 = auVar18;
          auVar18 = maxps(pauVar11[2],*(undefined1 (*) [16])(pauVar11[2] + lVar1));
          pauVar10 = pauVar11 + 2;
          pauVar11 = pauVar11 + 2;
          auVar18 = maxps(auVar18,*(undefined1 (*) [16])(*pauVar10 + param_2 * 8));
          auVar4._16_16_ = auVar18;
          auVar4._0_16_ = auVar17;
          auVar5._16_16_ = auVar18;
          auVar5._0_16_ = auVar17;
          auVar17 = maxps(auVar4._4_16_,auVar17);
          auVar17 = maxps(auVar5._8_16_,auVar17);
          pauVar15[1] = auVar17;
          pauVar15 = pauVar15 + 2;
        } while (lVar16 < (longlong)uVar14);
      }
      while (lVar16 < (longlong)uVar13) {
        lVar16 = lVar16 + 1;
        auVar17 = maxps(pauVar11[1],*(undefined1 (*) [16])(pauVar11[1] + lVar1));
        pauVar10 = pauVar11 + 1;
        pauVar11 = pauVar11 + 1;
        auVar17 = maxps(auVar17,*(undefined1 (*) [16])(*pauVar10 + param_2 * 8));
        auVar6._16_16_ = auVar17;
        auVar6._0_16_ = auVar18;
        auVar7._16_16_ = auVar17;
        auVar7._0_16_ = auVar18;
        auVar18 = maxps(auVar6._4_16_,auVar18);
        auVar18 = maxps(auVar7._8_16_,auVar18);
        *pauVar15 = auVar18;
        pauVar15 = pauVar15 + 1;
        auVar18 = auVar17;
      }
      auVar20._8_8_ = 0;
      auVar20._0_8_ = *(ulonglong *)pauVar11[1];
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *(ulonglong *)(pauVar11[1] + lVar1);
      auVar17 = maxps(auVar20,auVar17);
      auVar19._8_8_ = 0;
      auVar19._0_8_ = *(ulonglong *)(pauVar11[1] + param_2 * 8);
      pauVar11 = pauVar11 + 1;
      auVar17 = maxps(auVar17,auVar19);
      auVar8._16_16_ = auVar17;
      auVar8._0_16_ = auVar18;
      auVar9._16_16_ = auVar17;
      auVar9._0_16_ = auVar18;
      auVar18 = maxps(auVar9._4_16_,auVar18);
      auVar18 = maxps(auVar8._8_16_,auVar18);
      *pauVar15 = auVar18;
      pauVar15 = pauVar15 + 1;
    }
    if ((uVar12 & 3) != 0) {
      FUN_140454aa0(pauVar11,param_2,pauVar15,uVar12 & 3,1);
      in_R11 = in_stack_000000a8;
    }
    param_1 = param_1 + 1;
    in_R10 = (undefined1 (*) [16])(*in_R10 + param_2 * 4);
    param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 4);
  } while (param_1 < in_R11);
  return;
}


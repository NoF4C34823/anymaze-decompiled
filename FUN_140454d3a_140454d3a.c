
void FUN_140454d3a(longlong param_1,longlong param_2,undefined1 (*param_3) [16],longlong param_4)

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
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*in_R10) [16];
  ulonglong uVar23;
  longlong in_R11;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong in_stack_000000a0;
  longlong in_stack_000000a8;
  
  lVar1 = param_2 * 4;
  do {
    uVar21 = ((ulonglong)param_3 & 0xf) >> 2;
    pauVar19 = in_R10;
    pauVar22 = param_3;
    uVar23 = in_stack_000000a0;
    if (uVar21 != 0) {
      uVar21 = 4 - uVar21;
      if ((longlong)in_stack_000000a0 <= (longlong)uVar21) {
        uVar21 = in_stack_000000a0;
      }
      FUN_1404550c0(in_R10,param_2,param_3,uVar21,3);
      pauVar19 = (undefined1 (*) [16])(*in_R10 + uVar21 * 4);
      uVar23 = in_stack_000000a0 - uVar21;
      pauVar22 = (undefined1 (*) [16])(*param_3 + uVar21 * 4);
      in_R11 = in_stack_000000a8;
    }
    if ((longlong)uVar23 >> 2 != 0) {
      uVar21 = ((longlong)uVar23 >> 2) - 1;
      lVar20 = 0;
      auVar25 = maxps(*pauVar19,*(undefined1 (*) [16])(*pauVar19 + lVar1));
      auVar24 = maxps(pauVar19[1],*(undefined1 (*) [16])(pauVar19[1] + lVar1));
      auVar25 = maxps(auVar25,*(undefined1 (*) [16])(*pauVar19 + param_2 * 8));
      auVar24 = maxps(auVar24,*(undefined1 (*) [16])(pauVar19[1] + param_2 * 8));
      if (0 < (longlong)(uVar21 & 0xfffffffffffffffc)) {
        do {
          lVar20 = lVar20 + 4;
          auVar2._16_16_ = auVar24;
          auVar2._0_16_ = auVar25;
          auVar26 = maxps(pauVar19[2],*(undefined1 (*) [16])(pauVar19[2] + lVar1));
          auVar25 = maxps(auVar2._12_16_,auVar25);
          auVar27 = maxps(auVar26,*(undefined1 (*) [16])(pauVar19[2] + param_2 * 8));
          auVar3._16_16_ = auVar27;
          auVar3._0_16_ = auVar24;
          auVar4._16_16_ = auVar27;
          auVar4._0_16_ = auVar24;
          auVar25 = maxps(auVar3._8_16_,auVar25);
          auVar24 = maxps(auVar4._12_16_,auVar24);
          *pauVar22 = auVar25;
          auVar25 = maxps(pauVar19[3],*(undefined1 (*) [16])(pauVar19[3] + lVar1));
          auVar26 = maxps(auVar25,*(undefined1 (*) [16])(pauVar19[3] + param_2 * 8));
          auVar5._16_16_ = auVar26;
          auVar5._0_16_ = auVar27;
          auVar25 = maxps(auVar5._8_16_,auVar24);
          auVar6._16_16_ = auVar26;
          auVar6._0_16_ = auVar27;
          auVar24 = maxps(auVar6._12_16_,auVar27);
          pauVar22[1] = auVar25;
          auVar25 = maxps(pauVar19[4],*(undefined1 (*) [16])(pauVar19[4] + lVar1));
          auVar25 = maxps(auVar25,*(undefined1 (*) [16])(pauVar19[4] + param_2 * 8));
          auVar7._16_16_ = auVar25;
          auVar7._0_16_ = auVar26;
          auVar24 = maxps(auVar7._8_16_,auVar24);
          auVar8._16_16_ = auVar25;
          auVar8._0_16_ = auVar26;
          auVar26 = maxps(auVar8._12_16_,auVar26);
          pauVar22[2] = auVar24;
          auVar24 = maxps(pauVar19[5],*(undefined1 (*) [16])(pauVar19[5] + lVar1));
          pauVar18 = pauVar19 + 5;
          pauVar19 = pauVar19 + 4;
          auVar24 = maxps(auVar24,*(undefined1 (*) [16])(*pauVar18 + param_2 * 8));
          auVar9._16_16_ = auVar24;
          auVar9._0_16_ = auVar25;
          auVar26 = maxps(auVar9._8_16_,auVar26);
          pauVar22[3] = auVar26;
          pauVar22 = pauVar22 + 4;
        } while (lVar20 < (longlong)(uVar21 & 0xfffffffffffffffc));
      }
      while (lVar20 < (longlong)(uVar21 & 0xfffffffffffffffe)) {
        lVar20 = lVar20 + 2;
        auVar10._16_16_ = auVar24;
        auVar10._0_16_ = auVar25;
        auVar27 = maxps(pauVar19[2],*(undefined1 (*) [16])(pauVar19[2] + lVar1));
        auVar26 = maxps(auVar10._12_16_,auVar25);
        auVar25 = maxps(auVar27,*(undefined1 (*) [16])(pauVar19[2] + param_2 * 8));
        auVar11._16_16_ = auVar25;
        auVar11._0_16_ = auVar24;
        auVar12._16_16_ = auVar25;
        auVar12._0_16_ = auVar24;
        auVar26 = maxps(auVar11._8_16_,auVar26);
        auVar27 = maxps(auVar12._12_16_,auVar24);
        *pauVar22 = auVar26;
        auVar24 = maxps(pauVar19[3],*(undefined1 (*) [16])(pauVar19[3] + lVar1));
        pauVar18 = pauVar19 + 3;
        pauVar19 = pauVar19 + 2;
        auVar24 = maxps(auVar24,*(undefined1 (*) [16])(*pauVar18 + param_2 * 8));
        auVar13._16_16_ = auVar24;
        auVar13._0_16_ = auVar25;
        auVar26 = maxps(auVar13._8_16_,auVar27);
        pauVar22[1] = auVar26;
        pauVar22 = pauVar22 + 2;
      }
      while (auVar26 = auVar24, lVar20 < (longlong)uVar21) {
        lVar20 = lVar20 + 1;
        auVar14._16_16_ = auVar26;
        auVar14._0_16_ = auVar25;
        auVar24 = maxps(pauVar19[2],*(undefined1 (*) [16])(pauVar19[2] + lVar1));
        pauVar18 = pauVar19 + 2;
        auVar25 = maxps(auVar14._12_16_,auVar25);
        pauVar19 = pauVar19 + 1;
        auVar24 = maxps(auVar24,*(undefined1 (*) [16])(*pauVar18 + param_2 * 8));
        auVar15._16_16_ = auVar24;
        auVar15._0_16_ = auVar26;
        auVar25 = maxps(auVar15._8_16_,auVar25);
        *pauVar22 = auVar25;
        pauVar22 = pauVar22 + 1;
        auVar25 = auVar26;
      }
      auVar28._8_8_ = 0;
      auVar28._0_8_ = *(ulonglong *)pauVar19[2];
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *(ulonglong *)(pauVar19[2] + lVar1);
      auVar16._16_16_ = auVar26;
      auVar16._0_16_ = auVar25;
      auVar24 = maxps(auVar28,auVar24);
      auVar27._8_8_ = 0;
      auVar27._0_8_ = *(ulonglong *)(pauVar19[2] + param_2 * 8);
      auVar25 = maxps(auVar16._12_16_,auVar25);
      pauVar19 = pauVar19 + 1;
      auVar24 = maxps(auVar24,auVar27);
      auVar17._16_16_ = auVar24;
      auVar17._0_16_ = auVar26;
      auVar25 = maxps(auVar17._8_16_,auVar25);
      *pauVar22 = auVar25;
      pauVar22 = pauVar22 + 1;
    }
    if ((uVar23 & 3) != 0) {
      FUN_1404550c0(pauVar19,param_2,pauVar22,uVar23 & 3,3);
      in_R11 = in_stack_000000a8;
    }
    param_1 = param_1 + 1;
    in_R10 = (undefined1 (*) [16])(*in_R10 + param_2 * 4);
    param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 4);
  } while (param_1 < in_R11);
  return;
}


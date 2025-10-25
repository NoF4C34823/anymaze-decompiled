
void FUN_140455320(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  longlong param_4,ulonglong param_5,longlong param_6)

{
  longlong lVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  lVar8 = 0;
  if (0 < param_6) {
    lVar1 = param_2 * 4;
    do {
      uVar5 = ((ulonglong)param_3 & 0xf) >> 2;
      pauVar3 = param_1;
      pauVar6 = param_3;
      uVar7 = param_5;
      if (uVar5 != 0) {
        uVar5 = 4 - uVar5;
        if ((longlong)param_5 <= (longlong)uVar5) {
          uVar5 = param_5;
        }
        FUN_140455640(param_1,param_2,param_3,uVar5,4);
        pauVar3 = (undefined1 (*) [16])(*param_1 + uVar5 * 4);
        uVar7 = param_5 - uVar5;
        pauVar6 = (undefined1 (*) [16])(*param_3 + uVar5 * 4);
      }
      uVar5 = (longlong)uVar7 >> 2;
      if (uVar5 != 0) {
        lVar4 = 0;
        auVar9 = maxps(*pauVar3,*(undefined1 (*) [16])(*pauVar3 + lVar1));
        auVar10 = maxps(pauVar3[1],*(undefined1 (*) [16])(pauVar3[1] + lVar1));
        auVar9 = maxps(auVar9,*(undefined1 (*) [16])(*pauVar3 + param_2 * 8));
        auVar10 = maxps(auVar10,*(undefined1 (*) [16])(pauVar3[1] + param_2 * 8));
        if (0 < (longlong)(uVar5 & 0xfffffffffffffffc)) {
          do {
            lVar4 = lVar4 + 4;
            auVar9 = maxps(auVar10,auVar9);
            auVar11 = maxps(pauVar3[2],*(undefined1 (*) [16])(pauVar3[2] + lVar1));
            auVar11 = maxps(auVar11,*(undefined1 (*) [16])(pauVar3[2] + param_2 * 8));
            auVar9 = maxps(auVar11,auVar9);
            auVar12 = maxps(auVar11,auVar10);
            *pauVar6 = auVar9;
            auVar9 = maxps(pauVar3[3],*(undefined1 (*) [16])(pauVar3[3] + lVar1));
            auVar10 = maxps(auVar9,*(undefined1 (*) [16])(pauVar3[3] + param_2 * 8));
            auVar9 = maxps(auVar10,auVar12);
            auVar11 = maxps(auVar10,auVar11);
            pauVar6[1] = auVar9;
            auVar9 = maxps(pauVar3[4],*(undefined1 (*) [16])(pauVar3[4] + lVar1));
            auVar9 = maxps(auVar9,*(undefined1 (*) [16])(pauVar3[4] + param_2 * 8));
            auVar11 = maxps(auVar9,auVar11);
            auVar12 = maxps(auVar9,auVar10);
            pauVar6[2] = auVar11;
            auVar10 = maxps(pauVar3[5],*(undefined1 (*) [16])(pauVar3[5] + lVar1));
            pauVar2 = pauVar3 + 5;
            pauVar3 = pauVar3 + 4;
            auVar10 = maxps(auVar10,*(undefined1 (*) [16])(*pauVar2 + param_2 * 8));
            auVar11 = maxps(auVar10,auVar12);
            pauVar6[3] = auVar11;
            pauVar6 = pauVar6 + 4;
          } while (lVar4 < (longlong)(uVar5 & 0xfffffffffffffffc));
        }
        while (lVar4 < (longlong)(uVar5 & 0xfffffffffffffffe)) {
          lVar4 = lVar4 + 2;
          auVar11 = maxps(auVar10,auVar9);
          auVar9 = maxps(pauVar3[2],*(undefined1 (*) [16])(pauVar3[2] + lVar1));
          auVar9 = maxps(auVar9,*(undefined1 (*) [16])(pauVar3[2] + param_2 * 8));
          auVar11 = maxps(auVar9,auVar11);
          auVar12 = maxps(auVar9,auVar10);
          *pauVar6 = auVar11;
          auVar10 = maxps(pauVar3[3],*(undefined1 (*) [16])(pauVar3[3] + lVar1));
          pauVar2 = pauVar3 + 3;
          pauVar3 = pauVar3 + 2;
          auVar10 = maxps(auVar10,*(undefined1 (*) [16])(*pauVar2 + param_2 * 8));
          auVar11 = maxps(auVar10,auVar12);
          pauVar6[1] = auVar11;
          pauVar6 = pauVar6 + 2;
        }
        while (lVar4 < (longlong)uVar5) {
          lVar4 = lVar4 + 1;
          auVar12 = maxps(auVar10,auVar9);
          auVar9 = maxps(pauVar3[2],*(undefined1 (*) [16])(pauVar3[2] + lVar1));
          pauVar2 = pauVar3 + 2;
          pauVar3 = pauVar3 + 1;
          auVar11 = maxps(auVar9,*(undefined1 (*) [16])(*pauVar2 + param_2 * 8));
          auVar9 = maxps(auVar11,auVar12);
          *pauVar6 = auVar9;
          pauVar6 = pauVar6 + 1;
          auVar9 = auVar10;
          auVar10 = auVar11;
        }
      }
      if ((uVar7 & 3) != 0) {
        FUN_140455640(pauVar3,param_2,pauVar6,uVar7 & 3,4);
      }
      lVar8 = lVar8 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + param_2 * 4);
      param_3 = (undefined1 (*) [16])(*param_3 + param_4 * 4);
    } while (lVar8 < param_6);
  }
  return;
}


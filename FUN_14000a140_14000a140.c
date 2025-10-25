
undefined8
FUN_14000a140(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xfffffff8;
  }
  if ((0 < (int)(uint)param_5) && (0 < (int)param_5._4_4_)) {
    uVar11 = (uint)param_5 & 0xfffffffc;
    lVar5 = 0;
    uVar13 = (ulonglong)(int)uVar11;
    uVar8 = 0;
    uVar10 = (uint)param_5 - uVar11;
    uVar7 = uVar10 >> 1;
    uVar11 = uVar11 >> 1;
    lVar1 = param_1 + uVar13;
    lVar9 = uVar13 * 3 + param_3;
    uVar14 = uVar13;
    do {
      uVar12 = (uint)uVar14;
      if (0 < (int)uVar12) {
        lVar6 = lVar5 * param_4 + param_3;
        lVar4 = param_2 * lVar5 + param_1;
        if ((lVar6 - lVar4 < (longlong)uVar13) && (-(lVar6 - lVar4) < (longlong)(uVar13 * 3))) {
          iVar19 = 1;
          lVar18 = 0;
          uVar15 = 0;
          if (uVar11 != 0) {
            do {
              uVar17 = uVar15;
              uVar3 = *(undefined1 *)(lVar4 + uVar17 * 2);
              *(undefined1 *)(lVar18 + 2 + lVar6) = uVar3;
              *(undefined1 *)(lVar18 + 1 + lVar6) = uVar3;
              *(undefined1 *)(lVar18 + lVar6) = uVar3;
              uVar3 = *(undefined1 *)(lVar4 + 1 + uVar17 * 2);
              uVar15 = uVar17 + 1;
              *(undefined1 *)(lVar18 + 5 + lVar6) = uVar3;
              *(undefined1 *)(lVar18 + 4 + lVar6) = uVar3;
              *(undefined1 *)(lVar18 + 3 + lVar6) = uVar3;
              lVar18 = lVar18 + 6;
            } while (uVar15 < uVar11);
            iVar19 = (int)uVar17 + 2 + (int)uVar15;
          }
          if (iVar19 - 1U < uVar12) {
            uVar3 = *(undefined1 *)((longlong)iVar19 + -1 + lVar4);
            lVar4 = (longlong)iVar19 * 3;
            *(undefined1 *)(lVar4 + -1 + lVar6) = uVar3;
            *(undefined1 *)(lVar4 + -2 + lVar6) = uVar3;
            *(undefined1 *)(lVar4 + -3 + lVar6) = uVar3;
          }
        }
        else {
          iVar19 = 1;
          lVar18 = 0;
          uVar15 = 0;
          if (uVar11 != 0) {
            do {
              uVar17 = uVar15;
              uVar3 = *(undefined1 *)(lVar4 + uVar17 * 2);
              *(undefined1 *)(lVar18 + 2 + lVar6) = uVar3;
              *(undefined1 *)(lVar18 + 1 + lVar6) = uVar3;
              *(undefined1 *)(lVar18 + lVar6) = uVar3;
              uVar3 = *(undefined1 *)(lVar4 + 1 + uVar17 * 2);
              uVar15 = uVar17 + 1;
              *(undefined1 *)(lVar18 + 5 + lVar6) = uVar3;
              *(undefined1 *)(lVar18 + 4 + lVar6) = uVar3;
              *(undefined1 *)(lVar18 + 3 + lVar6) = uVar3;
              lVar18 = lVar18 + 6;
            } while (uVar15 < uVar11);
            iVar19 = (int)uVar17 + 2 + (int)uVar15;
          }
          if (iVar19 - 1U < uVar12) {
            uVar3 = *(undefined1 *)((longlong)iVar19 + -1 + lVar4);
            lVar4 = (longlong)iVar19 * 3;
            *(undefined1 *)(lVar4 + -1 + lVar6) = uVar3;
            *(undefined1 *)(lVar4 + -2 + lVar6) = uVar3;
            *(undefined1 *)(lVar4 + -3 + lVar6) = uVar3;
          }
        }
      }
      if ((int)uVar12 < (int)(uint)param_5) {
        lVar4 = lVar5 * param_4;
        lVar6 = param_2 * lVar5;
        lVar18 = (lVar9 + lVar4) - (lVar1 + lVar6);
        if ((lVar18 < (longlong)((longlong)(int)(uint)param_5 - uVar13)) &&
           (-lVar18 < (longlong)(((longlong)(int)(uint)param_5 - uVar13) * 3))) {
          uVar15 = 0;
          iVar19 = 1;
          if (uVar7 != 0) {
            lVar18 = lVar4 + lVar9;
            uVar17 = uVar15;
            do {
              uVar16 = uVar17;
              uVar3 = *(undefined1 *)(lVar6 + lVar1 + uVar16 * 2);
              *(undefined1 *)(uVar15 + 2 + lVar18) = uVar3;
              *(undefined1 *)(uVar15 + 1 + lVar18) = uVar3;
              *(undefined1 *)(uVar15 + lVar18) = uVar3;
              uVar3 = *(undefined1 *)(lVar6 + lVar1 + 1 + uVar16 * 2);
              uVar17 = uVar16 + 1;
              *(undefined1 *)(uVar15 + 5 + lVar18) = uVar3;
              *(undefined1 *)(uVar15 + 4 + lVar18) = uVar3;
              *(undefined1 *)(uVar15 + 3 + lVar18) = uVar3;
              uVar15 = uVar15 + 6;
            } while (uVar17 < uVar7);
            uVar14 = uVar14 & 0xffffffff;
            iVar19 = (int)uVar16 + 2 + (int)uVar17;
          }
          if (iVar19 - 1U < uVar10) {
            lVar4 = lVar4 + lVar9;
            uVar3 = *(undefined1 *)((longlong)iVar19 + -1 + lVar6 + lVar1);
            lVar6 = (longlong)iVar19 * 3;
            *(undefined1 *)(lVar6 + -1 + lVar4) = uVar3;
            *(undefined1 *)(lVar6 + -2 + lVar4) = uVar3;
            *(undefined1 *)(lVar6 + -3 + lVar4) = uVar3;
          }
        }
        else {
          iVar19 = 1;
          lVar18 = 0;
          if (uVar7 != 0) {
            lVar2 = lVar4 + lVar9;
            uVar15 = 0;
            do {
              uVar17 = uVar15;
              uVar3 = *(undefined1 *)(lVar6 + lVar1 + uVar17 * 2);
              *(undefined1 *)(lVar18 + 2 + lVar2) = uVar3;
              *(undefined1 *)(lVar18 + 1 + lVar2) = uVar3;
              *(undefined1 *)(lVar18 + lVar2) = uVar3;
              uVar3 = *(undefined1 *)(lVar6 + lVar1 + 1 + uVar17 * 2);
              uVar15 = uVar17 + 1;
              *(undefined1 *)(lVar18 + 5 + lVar2) = uVar3;
              *(undefined1 *)(lVar18 + 4 + lVar2) = uVar3;
              *(undefined1 *)(lVar18 + 3 + lVar2) = uVar3;
              lVar18 = lVar18 + 6;
            } while (uVar15 < uVar7);
            uVar14 = uVar14 & 0xffffffff;
            iVar19 = (int)uVar17 + 2 + (int)uVar15;
          }
          if (iVar19 - 1U < uVar10) {
            lVar4 = lVar4 + lVar9;
            uVar3 = *(undefined1 *)((longlong)iVar19 + -1 + lVar6 + lVar1);
            lVar6 = (longlong)iVar19 * 3;
            *(undefined1 *)(lVar6 + -1 + lVar4) = uVar3;
            *(undefined1 *)(lVar6 + -2 + lVar4) = uVar3;
            *(undefined1 *)(lVar6 + -3 + lVar4) = uVar3;
          }
        }
      }
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + 1;
    } while (uVar8 < param_5._4_4_);
    return 0;
  }
  return 0xfffffffa;
}


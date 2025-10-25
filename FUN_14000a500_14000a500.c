
undefined8
FUN_14000a500(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xfffffff8;
  }
  if ((0 < (int)(uint)param_5) && (0 < param_5._4_4_)) {
    uVar5 = (uint)param_5 & 0xfffffffc;
    lVar6 = (longlong)(int)uVar5;
    iVar7 = 0;
    lVar3 = -param_2 + param_1;
    lVar10 = -param_4 + param_3;
    param_3 = param_3 + lVar6 * 3;
    param_1 = param_1 + lVar6;
    lVar15 = 0;
    do {
      lVar10 = lVar10 + param_4;
      lVar3 = lVar3 + param_2;
      iVar7 = iVar7 + 1;
      FUN_14000f480(lVar3,lVar10);
      if ((int)uVar5 < (int)(uint)param_5) {
        lVar14 = param_2 * lVar15;
        lVar16 = lVar15 * param_4;
        lVar1 = param_1 + lVar14;
        lVar4 = param_3 + lVar16;
        if ((lVar4 - lVar1 < (int)(uint)param_5 - lVar6) &&
           (-(lVar4 - lVar1) < ((int)(uint)param_5 - lVar6) * 3)) {
          uVar8 = 0;
          iVar13 = 1;
          uVar11 = (uint)param_5 - uVar5 >> 1;
          if (uVar11 != 0) {
            uVar12 = uVar8;
            do {
              uVar2 = *(undefined1 *)(lVar14 + param_1 + uVar12 * 2);
              *(undefined1 *)(uVar8 + 2 + lVar4) = uVar2;
              *(undefined1 *)(uVar8 + 1 + lVar4) = uVar2;
              *(undefined1 *)(uVar8 + lVar16 + param_3) = uVar2;
              uVar2 = *(undefined1 *)(lVar1 + 1 + uVar12 * 2);
              uVar12 = uVar12 + 1;
              *(undefined1 *)(uVar8 + 5 + lVar4) = uVar2;
              *(undefined1 *)(uVar8 + 4 + lVar4) = uVar2;
              *(undefined1 *)(uVar8 + 3 + lVar4) = uVar2;
              uVar8 = uVar8 + 6;
            } while (uVar12 < uVar11);
            iVar13 = (int)uVar12 * 2 + 1;
          }
          if (iVar13 - 1U < (uint)param_5 - uVar5) {
            uVar2 = *(undefined1 *)((longlong)iVar13 + -1 + lVar14 + param_1);
            lVar1 = (longlong)iVar13 * 3;
            *(undefined1 *)(lVar1 + -1 + lVar4) = uVar2;
            *(undefined1 *)(lVar1 + -2 + lVar4) = uVar2;
            *(undefined1 *)(lVar1 + -3 + lVar16 + param_3) = uVar2;
          }
        }
        else {
          uVar8 = 0;
          iVar13 = 1;
          lVar9 = 0;
          uVar11 = (uint)param_5 - uVar5 >> 1;
          if (uVar11 != 0) {
            do {
              uVar2 = *(undefined1 *)(lVar14 + param_1 + uVar8 * 2);
              *(undefined1 *)(lVar9 + 2 + lVar4) = uVar2;
              *(undefined1 *)(lVar9 + 1 + lVar4) = uVar2;
              *(undefined1 *)(lVar9 + lVar16 + param_3) = uVar2;
              uVar2 = *(undefined1 *)(lVar1 + 1 + uVar8 * 2);
              uVar8 = uVar8 + 1;
              *(undefined1 *)(lVar9 + 5 + lVar4) = uVar2;
              *(undefined1 *)(lVar9 + 4 + lVar4) = uVar2;
              *(undefined1 *)(lVar9 + 3 + lVar4) = uVar2;
              lVar9 = lVar9 + 6;
            } while (uVar8 < uVar11);
            iVar13 = (int)uVar8 * 2 + 1;
          }
          if (iVar13 - 1U < (uint)param_5 - uVar5) {
            uVar2 = *(undefined1 *)((longlong)iVar13 + -1 + lVar14 + param_1);
            lVar1 = (longlong)iVar13 * 3;
            *(undefined1 *)(lVar1 + -1 + lVar4) = uVar2;
            *(undefined1 *)(lVar1 + -2 + lVar4) = uVar2;
            *(undefined1 *)(lVar1 + -3 + lVar16 + param_3) = uVar2;
          }
        }
      }
      lVar15 = lVar15 + 1;
    } while (iVar7 < param_5._4_4_);
    return 0;
  }
  return 0xfffffffa;
}


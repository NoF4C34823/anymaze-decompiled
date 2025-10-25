
undefined8 FUN_14000a547(uint param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  int in_EAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong in_R10;
  ulonglong uVar10;
  int iVar11;
  longlong in_R11;
  int iVar12;
  longlong lVar13;
  longlong unaff_R14;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lStack0000000000000068;
  longlong lStack0000000000000078;
  longlong lStack0000000000000080;
  int iStack00000000000000d0;
  int iStack00000000000000d4;
  
  param_1 = param_1 & 0xfffffffc;
  lVar5 = (longlong)(int)param_1;
  lVar3 = -in_EAX + unaff_R14;
  lVar8 = -param_4 + param_3;
  lStack0000000000000068 = param_3 + lVar5 * 3;
  lVar14 = unaff_R14 + lVar5;
  iVar12 = 0;
  lVar15 = 0;
  lStack0000000000000078 = in_R10;
  lStack0000000000000080 = in_R11;
  do {
    lVar8 = lVar8 + lStack0000000000000078;
    lVar3 = lVar3 + lStack0000000000000080;
    iVar12 = iVar12 + 1;
    FUN_14000f480(lVar3,lVar8);
    if ((int)param_1 < iStack00000000000000d0) {
      lVar13 = lStack0000000000000080 * lVar15;
      lVar16 = lVar15 * lStack0000000000000078;
      lVar1 = lVar14 + lVar13;
      lVar4 = lStack0000000000000068 + lVar16;
      if ((lVar4 - lVar1 < iStack00000000000000d0 - lVar5) &&
         (-(lVar4 - lVar1) < (iStack00000000000000d0 - lVar5) * 3)) {
        uVar6 = 0;
        iVar11 = 1;
        uVar9 = iStack00000000000000d0 - param_1 >> 1;
        if (uVar9 != 0) {
          uVar10 = uVar6;
          do {
            uVar2 = *(undefined1 *)(lVar13 + lVar14 + uVar10 * 2);
            *(undefined1 *)(uVar6 + 2 + lVar4) = uVar2;
            *(undefined1 *)(uVar6 + 1 + lVar4) = uVar2;
            *(undefined1 *)(uVar6 + lVar16 + lStack0000000000000068) = uVar2;
            uVar2 = *(undefined1 *)(lVar1 + 1 + uVar10 * 2);
            uVar10 = uVar10 + 1;
            *(undefined1 *)(uVar6 + 5 + lVar4) = uVar2;
            *(undefined1 *)(uVar6 + 4 + lVar4) = uVar2;
            *(undefined1 *)(uVar6 + 3 + lVar4) = uVar2;
            uVar6 = uVar6 + 6;
          } while (uVar10 < uVar9);
          iVar11 = (int)uVar10 * 2 + 1;
        }
        if (iVar11 - 1U < iStack00000000000000d0 - param_1) {
          uVar2 = *(undefined1 *)((longlong)iVar11 + -1 + lVar13 + lVar14);
          lVar1 = (longlong)iVar11 * 3;
          *(undefined1 *)(lVar1 + -1 + lVar4) = uVar2;
          *(undefined1 *)(lVar1 + -2 + lVar4) = uVar2;
          *(undefined1 *)(lVar1 + -3 + lVar16 + lStack0000000000000068) = uVar2;
        }
      }
      else {
        uVar6 = 0;
        iVar11 = 1;
        lVar7 = 0;
        uVar9 = iStack00000000000000d0 - param_1 >> 1;
        if (uVar9 != 0) {
          do {
            uVar2 = *(undefined1 *)(lVar13 + lVar14 + uVar6 * 2);
            *(undefined1 *)(lVar7 + 2 + lVar4) = uVar2;
            *(undefined1 *)(lVar7 + 1 + lVar4) = uVar2;
            *(undefined1 *)(lVar7 + lVar16 + lStack0000000000000068) = uVar2;
            uVar2 = *(undefined1 *)(lVar1 + 1 + uVar6 * 2);
            uVar6 = uVar6 + 1;
            *(undefined1 *)(lVar7 + 5 + lVar4) = uVar2;
            *(undefined1 *)(lVar7 + 4 + lVar4) = uVar2;
            *(undefined1 *)(lVar7 + 3 + lVar4) = uVar2;
            lVar7 = lVar7 + 6;
          } while (uVar6 < uVar9);
          iVar11 = (int)uVar6 * 2 + 1;
        }
        if (iVar11 - 1U < iStack00000000000000d0 - param_1) {
          uVar2 = *(undefined1 *)((longlong)iVar11 + -1 + lVar13 + lVar14);
          lVar1 = (longlong)iVar11 * 3;
          *(undefined1 *)(lVar1 + -1 + lVar4) = uVar2;
          *(undefined1 *)(lVar1 + -2 + lVar4) = uVar2;
          *(undefined1 *)(lVar1 + -3 + lVar16 + lStack0000000000000068) = uVar2;
        }
      }
    }
    lVar15 = lVar15 + 1;
  } while (iVar12 < iStack00000000000000d4);
  return 0;
}


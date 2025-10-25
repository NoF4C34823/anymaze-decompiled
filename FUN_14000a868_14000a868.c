
undefined8 FUN_14000a868(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int in_EAX;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint in_R10D;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int unaff_R15D;
  longlong lVar15;
  longlong lStack0000000000000028;
  longlong lStack0000000000000030;
  int iStack00000000000000a0;
  int iStack00000000000000a4;
  
  uVar8 = in_R10D & 0xfffffffc;
  lVar9 = (longlong)(int)uVar8;
  lVar3 = -in_EAX + param_4;
  lVar15 = -unaff_R15D + param_3;
  iVar12 = 0;
  lStack0000000000000030 = param_4 + lVar9;
  lStack0000000000000028 = param_3 + lVar9 * 3;
  lVar13 = 0;
  do {
    lVar15 = lVar15 + param_2;
    lVar3 = lVar3 + param_1;
    iVar12 = iVar12 + 1;
    FUN_14000f540(lVar3,lVar15);
    if ((int)uVar8 < iStack00000000000000a0) {
      lVar14 = lVar13 * param_2 + lStack0000000000000028;
      lVar5 = param_1 * lVar13 + lStack0000000000000030;
      if ((lVar14 - lVar5 < iStack00000000000000a0 - lVar9) &&
         (-(lVar14 - lVar5) < (iStack00000000000000a0 - lVar9) * 3)) {
        iVar6 = 1;
        lVar7 = 0;
        uVar4 = iStack00000000000000a0 - uVar8 >> 1;
        uVar10 = 0;
        if (uVar4 != 0) {
          do {
            uVar11 = uVar10;
            uVar1 = *(undefined1 *)(lVar5 + uVar11 * 2);
            *(undefined1 *)(lVar7 + 2 + lVar14) = uVar1;
            *(undefined1 *)(lVar7 + 1 + lVar14) = uVar1;
            *(undefined1 *)(lVar7 + lVar14) = uVar1;
            uVar1 = *(undefined1 *)(lVar5 + 1 + uVar11 * 2);
            uVar10 = uVar11 + 1;
            *(undefined1 *)(lVar7 + 5 + lVar14) = uVar1;
            *(undefined1 *)(lVar7 + 4 + lVar14) = uVar1;
            *(undefined1 *)(lVar7 + 3 + lVar14) = uVar1;
            lVar7 = lVar7 + 6;
          } while (uVar10 < uVar4);
          iVar6 = (int)uVar11 + 2 + (int)uVar10;
        }
        if (iVar6 - 1U < iStack00000000000000a0 - uVar8) {
LAB_14000aa01:
          uVar1 = *(undefined1 *)((longlong)iVar6 + -1 + lVar5);
          lVar5 = (longlong)iVar6 * 3;
          *(undefined1 *)(lVar5 + -1 + lVar14) = uVar1;
          *(undefined1 *)(lVar5 + -2 + lVar14) = uVar1;
          *(undefined1 *)(lVar5 + -3 + lVar14) = uVar1;
        }
      }
      else {
        iVar6 = 1;
        lVar7 = 0;
        uVar4 = iStack00000000000000a0 - uVar8 >> 1;
        uVar10 = 0;
        if (uVar4 != 0) {
          do {
            uVar11 = uVar10;
            uVar1 = *(undefined1 *)(lVar5 + uVar11 * 2);
            uVar2 = *(undefined1 *)(lVar5 + 1 + uVar11 * 2);
            uVar10 = uVar11 + 1;
            *(undefined1 *)(lVar7 + 2 + lVar14) = uVar1;
            *(undefined1 *)(lVar7 + 1 + lVar14) = uVar1;
            *(undefined1 *)(lVar7 + lVar14) = uVar1;
            *(undefined1 *)(lVar7 + 5 + lVar14) = uVar2;
            *(undefined1 *)(lVar7 + 4 + lVar14) = uVar2;
            *(undefined1 *)(lVar7 + 3 + lVar14) = uVar2;
            lVar7 = lVar7 + 6;
          } while (uVar10 < uVar4);
          iVar6 = (int)uVar11 + 2 + (int)uVar10;
        }
        if (iVar6 - 1U < iStack00000000000000a0 - uVar8) goto LAB_14000aa01;
      }
    }
    lVar13 = lVar13 + 1;
    if (iStack00000000000000a4 <= iVar12) {
      return 0;
    }
  } while( true );
}


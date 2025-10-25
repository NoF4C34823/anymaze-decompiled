
undefined8
FUN_14000a820(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xfffffff8;
  }
  if (((int)(uint)param_5 < 1) || (param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  uVar8 = (uint)param_5 & 0xfffffffc;
  lVar9 = (longlong)(int)uVar8;
  lVar3 = -param_2 + param_1;
  lVar15 = -param_4 + param_3;
  iVar12 = 0;
  lVar13 = 0;
  do {
    lVar15 = lVar15 + param_4;
    lVar3 = lVar3 + param_2;
    iVar12 = iVar12 + 1;
    FUN_14000f540(lVar3,lVar15);
    if ((int)uVar8 < (int)(uint)param_5) {
      lVar14 = lVar13 * param_4 + param_3 + lVar9 * 3;
      lVar5 = param_2 * lVar13 + param_1 + lVar9;
      if ((lVar14 - lVar5 < (int)(uint)param_5 - lVar9) &&
         (-(lVar14 - lVar5) < ((int)(uint)param_5 - lVar9) * 3)) {
        iVar6 = 1;
        lVar7 = 0;
        uVar4 = (uint)param_5 - uVar8 >> 1;
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
        if (iVar6 - 1U < (uint)param_5 - uVar8) {
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
        uVar4 = (uint)param_5 - uVar8 >> 1;
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
        if (iVar6 - 1U < (uint)param_5 - uVar8) goto LAB_14000aa01;
      }
    }
    lVar13 = lVar13 + 1;
    if (param_5._4_4_ <= iVar12) {
      return 0;
    }
  } while( true );
}


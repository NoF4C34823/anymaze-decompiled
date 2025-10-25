
void FUN_140334656(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  longlong in_R10;
  short sVar8;
  short sVar9;
  ulonglong uVar10;
  longlong lVar11;
  short sVar12;
  int in_stack_00000130;
  
  lVar5 = (longlong)in_stack_00000130;
  do {
    sVar8 = 0x7fff;
    sVar9 = 0x7fff;
    if (0 < (longlong)param_4) {
      uVar10 = 0;
      lVar11 = 1;
      lVar6 = 0;
      sVar9 = sVar8;
      if (param_4 >> 3 != 0) {
        do {
          uVar10 = uVar10 + 1;
          sVar9 = *(short *)(lVar6 + lVar5 * 4 + param_1 + param_2 * 2);
          sVar1 = *(short *)(lVar6 + lVar5 * 0xe + param_1 + param_2 * 2);
          sVar2 = *(short *)(lVar6 + lVar5 * 2 + param_1 + param_2 * 2);
          sVar7 = *(short *)(lVar6 + lVar5 * 6 + param_1 + param_2 * 2);
          sVar12 = *(short *)(lVar6 + param_1 + param_2 * 2);
          sVar4 = *(short *)(lVar6 + lVar5 * 8 + param_1 + param_2 * 2);
          if (sVar8 <= sVar12) {
            sVar12 = sVar8;
          }
          sVar3 = *(short *)(lVar6 + lVar5 * 10 + param_1 + param_2 * 2);
          if (sVar12 <= sVar2) {
            sVar2 = sVar12;
          }
          if (sVar2 <= sVar9) {
            sVar9 = sVar2;
          }
          sVar8 = *(short *)(lVar6 + lVar5 * 0xc + param_1 + param_2 * 2);
          if (sVar9 <= sVar7) {
            sVar7 = sVar9;
          }
          if (sVar7 <= sVar4) {
            sVar4 = sVar7;
          }
          if (sVar4 <= sVar3) {
            sVar3 = sVar4;
          }
          if (sVar3 <= sVar8) {
            sVar8 = sVar3;
          }
          if (sVar1 < sVar8) {
            sVar8 = sVar1;
          }
          lVar6 = lVar6 + lVar5 * 0x10;
        } while (uVar10 < param_4 >> 3);
        lVar11 = uVar10 * 8 + 1;
        sVar9 = sVar8;
      }
      uVar10 = lVar11 - 1;
      lVar11 = (longlong)in_stack_00000130 * uVar10;
      if (uVar10 < param_4) {
        do {
          sVar8 = *(short *)(param_1 + param_2 * 2 + lVar11 * 2);
          if (sVar8 < sVar9) {
            sVar9 = sVar8;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + in_stack_00000130;
        } while (uVar10 < param_4);
      }
    }
    *(short *)(in_R10 + param_2 * 2) = sVar9;
    param_2 = param_2 + 1;
  } while (param_2 < param_3);
  return;
}


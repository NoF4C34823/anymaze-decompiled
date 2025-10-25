
void FUN_140311b5e(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong lVar3;
  ulonglong unaff_RBP;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  ulonglong in_stack_00000110;
  ulonglong in_stack_00000118;
  ulonglong in_stack_00000120;
  ulonglong in_stack_00000128;
  longlong in_stack_00000130;
  int in_stack_00000140;
  
  lVar9 = 0;
  lVar2 = 0;
  do {
    uVar6 = 0;
    if (0 < (longlong)in_stack_00000110) {
      do {
        uVar8 = 0;
        lVar7 = 0;
        lVar4 = 0;
        lVar3 = 0;
        fVar13 = DAT_143089c20;
        if (0 < (longlong)in_stack_00000128) {
          do {
            if (0 < (longlong)in_stack_00000120) {
              lVar5 = 1;
              lVar10 = 0;
              if (in_stack_00000120 >> 1 != 0) {
                uVar12 = 0;
                do {
                  uVar11 = uVar12;
                  if ((*(char *)(in_stack_00000130 + lVar7 + uVar11 * 2) != '\0') &&
                     (fVar1 = *(float *)(in_RAX + lVar2 + uVar6 * 4 + lVar3 + lVar10 * 8),
                     fVar1 <= fVar13)) {
                    fVar13 = fVar1;
                  }
                  if ((*(char *)(in_stack_00000130 + lVar7 + 1 + uVar11 * 2) != '\0') &&
                     (fVar1 = *(float *)((longlong)in_stack_00000140 * 4 + in_RAX + lVar2 +
                                         uVar6 * 4 + lVar3 + lVar10 * 8), fVar1 <= fVar13)) {
                    fVar13 = fVar1;
                  }
                  uVar12 = uVar11 + 1;
                  lVar10 = lVar10 + in_stack_00000140;
                } while (uVar12 < in_stack_00000120 >> 1);
                lVar5 = uVar11 + 2 + uVar12;
              }
              if (((lVar5 - 1U < in_stack_00000120) &&
                  (*(char *)(in_stack_00000130 + -1 + lVar5 + lVar7) != '\0')) &&
                 (fVar1 = *(float *)((lVar5 - 1U) * (longlong)in_stack_00000140 * 4 +
                                     in_RAX + lVar2 + uVar6 * 4 + lVar4 * 4), fVar1 <= fVar13)) {
                fVar13 = fVar1;
              }
            }
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + in_stack_00000120;
            lVar4 = lVar4 + param_2;
            lVar3 = lVar3 + param_2 * 4;
          } while (uVar8 < in_stack_00000128);
        }
        *(float *)(param_3 + lVar9 + uVar6 * 4) = fVar13;
        uVar6 = uVar6 + 1;
      } while (uVar6 < in_stack_00000110);
    }
    unaff_RBP = unaff_RBP + 1;
    lVar9 = lVar9 + param_4 * 4;
    lVar2 = lVar2 + param_2 * 4;
  } while (unaff_RBP < in_stack_00000118);
  return;
}


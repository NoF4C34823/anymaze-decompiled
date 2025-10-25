
void FUN_1403d1581(ulonglong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  ulonglong in_stack_00000120;
  ulonglong in_stack_00000128;
  ulonglong in_stack_00000130;
  ulonglong in_stack_00000138;
  longlong in_stack_00000140;
  int in_stack_00000150;
  
  lVar11 = 0;
  lVar3 = 0;
  do {
    uVar5 = 0;
    if (0 < (longlong)in_stack_00000120) {
      do {
        uVar9 = 0;
        lVar8 = 0;
        lVar7 = 0;
        lVar6 = 0;
        fVar13 = DAT_143089e30;
        if (0 < (longlong)in_stack_00000138) {
          lVar1 = uVar5 * 4;
          do {
            if (0 < (longlong)in_stack_00000130) {
              uVar12 = 0;
              lVar4 = 1;
              lVar10 = 0;
              if (in_stack_00000130 >> 1 != 0) {
                do {
                  if ((*(char *)(in_stack_00000140 + lVar8 + uVar12 * 2) != '\0') &&
                     (fVar2 = *(float *)(lVar1 + in_RAX + lVar3 + lVar6 + lVar10 * 8),
                     fVar2 <= fVar13)) {
                    fVar13 = fVar2;
                  }
                  if ((*(char *)(in_stack_00000140 + lVar8 + 1 + uVar12 * 2) != '\0') &&
                     (fVar2 = *(float *)(lVar1 + (longlong)in_stack_00000150 * 4 + in_RAX + lVar3 +
                                         lVar6 + lVar10 * 8), fVar2 <= fVar13)) {
                    fVar13 = fVar2;
                  }
                  uVar12 = uVar12 + 1;
                  lVar10 = lVar10 + in_stack_00000150;
                } while (uVar12 < in_stack_00000130 >> 1);
                lVar4 = uVar12 * 2 + 1;
              }
              if (((lVar4 - 1U < in_stack_00000130) &&
                  (*(char *)(in_stack_00000140 + -1 + lVar4 + lVar8) != '\0')) &&
                 (fVar2 = *(float *)((lVar4 - 1U) * (longlong)in_stack_00000150 * 4 +
                                     in_RAX + lVar3 + lVar1 + lVar7 * 4), fVar2 <= fVar13)) {
                fVar13 = fVar2;
              }
            }
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + in_stack_00000130;
            lVar6 = lVar6 + param_2 * 4;
            lVar7 = lVar7 + param_2;
          } while (uVar9 < in_stack_00000138);
        }
        *(float *)(param_3 + lVar11 + uVar5 * 4) = fVar13;
        uVar5 = uVar5 + 1;
      } while (uVar5 < in_stack_00000120);
    }
    param_1 = param_1 + 1;
    lVar11 = lVar11 + param_4 * 4;
    lVar3 = lVar3 + param_2 * 4;
  } while (param_1 < in_stack_00000128);
  return;
}



void FUN_1409370c0(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong *param_5,int param_6,uint param_7,short *param_8,undefined8 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  uint uVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lStack_38;
  longlong lStack_30;
  
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308d740)[param_6])
              (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1409371cf;
    if ((param_7 & 0xf) == 6) {
      uVar1 = param_7 & 0x10;
      goto joined_r0x0001409374e2;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1409371cf;
    }
  }
  else {
    if ((param_3 < param_5[1]) || (param_7 == 0xf0)) goto LAB_1409371cf;
    if ((param_7 & 0xf) == 6) {
      uVar1 = param_7 & 0x20;
joined_r0x0001409374e2:
      if (uVar1 == 0) {
        fVar9 = (float)(int)*param_8;
        fVar8 = (float)(int)param_8[1];
        fVar10 = (float)(int)param_8[2];
        if (0 < *param_5 * 3) {
          uVar4 = (*param_5 * 3 + 2) / 3;
          if ((longlong)uVar4 < 0x10) {
            uVar3 = 0;
          }
          else {
            uVar6 = 0;
            uVar3 = uVar4 & 0xfffffffffffffff0;
            pfVar2 = param_4;
            do {
              uVar6 = uVar6 + 0x10;
              *pfVar2 = fVar9;
              pfVar2[3] = fVar9;
              pfVar2[6] = fVar9;
              pfVar2[9] = fVar9;
              pfVar2[0xc] = fVar9;
              pfVar2[0xf] = fVar9;
              pfVar2[0x12] = fVar9;
              pfVar2[0x15] = fVar9;
              pfVar2[0x18] = fVar9;
              pfVar2[0x1b] = fVar9;
              pfVar2[0x1e] = fVar9;
              pfVar2[0x21] = fVar9;
              pfVar2[0x24] = fVar9;
              pfVar2[0x27] = fVar9;
              pfVar2[0x2a] = fVar9;
              pfVar2[0x2d] = fVar9;
              pfVar2[1] = fVar8;
              pfVar2[4] = fVar8;
              pfVar2[7] = fVar8;
              pfVar2[10] = fVar8;
              pfVar2[0xd] = fVar8;
              pfVar2[0x10] = fVar8;
              pfVar2[0x13] = fVar8;
              pfVar2[0x16] = fVar8;
              pfVar2[0x19] = fVar8;
              pfVar2[0x1c] = fVar8;
              pfVar2[0x1f] = fVar8;
              pfVar2[0x22] = fVar8;
              pfVar2[0x25] = fVar8;
              pfVar2[0x28] = fVar8;
              pfVar2[0x2b] = fVar8;
              pfVar2[0x2e] = fVar8;
              pfVar2[2] = fVar10;
              pfVar2[5] = fVar10;
              pfVar2[8] = fVar10;
              pfVar2[0xb] = fVar10;
              pfVar2[0xe] = fVar10;
              pfVar2[0x11] = fVar10;
              pfVar2[0x14] = fVar10;
              pfVar2[0x17] = fVar10;
              pfVar2[0x1a] = fVar10;
              pfVar2[0x1d] = fVar10;
              pfVar2[0x20] = fVar10;
              pfVar2[0x23] = fVar10;
              pfVar2[0x26] = fVar10;
              pfVar2[0x29] = fVar10;
              pfVar2[0x2c] = fVar10;
              pfVar2[0x2f] = fVar10;
              pfVar2 = pfVar2 + 0x30;
            } while (uVar6 < uVar3);
          }
          if (uVar3 + 1 <= uVar4) {
            uVar4 = uVar4 - uVar3;
            if ((longlong)uVar4 < 2) {
              uVar6 = 0;
            }
            else {
              uVar7 = 0;
              uVar6 = uVar4 & 0xfffffffffffffffe;
              lVar5 = 0;
              do {
                uVar7 = uVar7 + 2;
                *(float *)((longlong)param_4 + lVar5 + 8 + uVar3 * 0xc) = fVar10;
                *(float *)((longlong)param_4 + lVar5 + 0x14 + uVar3 * 0xc) = fVar10;
                *(float *)((longlong)param_4 + lVar5 + 4 + uVar3 * 0xc) = fVar8;
                *(float *)((longlong)param_4 + lVar5 + 0x10 + uVar3 * 0xc) = fVar8;
                *(float *)((longlong)param_4 + lVar5 + uVar3 * 0xc) = fVar9;
                *(float *)((longlong)param_4 + lVar5 + 0xc + uVar3 * 0xc) = fVar9;
                lVar5 = lVar5 + 0x18;
              } while (uVar7 < uVar6);
            }
            lVar5 = uVar6 * 0xc;
            for (; uVar6 < uVar4; uVar6 = uVar6 + 1) {
              *(float *)((longlong)param_4 + lVar5 + uVar3 * 0xc) = fVar9;
              *(float *)((longlong)param_4 + lVar5 + 4 + uVar3 * 0xc) = fVar8;
              *(float *)((longlong)param_4 + lVar5 + 8 + uVar3 * 0xc) = fVar10;
              lVar5 = lVar5 + 0xc;
            }
          }
        }
        return;
      }
      goto LAB_1409371cf;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] + -1;
      }
      goto LAB_1409371cf;
    }
  }
  if ((param_7 & 0xf) == 3) {
    lVar5 = param_5[1];
    if (lVar5 < 2) {
      if (param_3 < 0) {
        if ((param_7 & 0x10) == 0) {
          param_3 = -param_3;
          if ((param_7 & 0x20) == 0) {
            param_3 = 0;
          }
        }
      }
      else if ((0 < param_3) && ((param_7 & 0x20) == 0)) {
        param_3 = -param_3;
        if ((param_7 & 0x10) == 0) {
          param_3 = 0;
        }
      }
    }
    else {
      if (param_3 < 0) goto LAB_140937460;
      while ((lVar5 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (lVar5 + -1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_140937460:
          if ((param_7 & 0x10) != 0) goto LAB_1409371cf;
        }
      }
    }
  }
LAB_1409371cf:
  lStack_38 = *param_5;
  lStack_30 = param_5[1];
  FUN_140946c80(lStack_38,param_2,param_3,param_4,&lStack_38,param_6,param_7,param_8,param_9,
                param_10,param_11);
  return;
}


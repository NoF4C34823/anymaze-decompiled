
ulonglong FUN_1406d0400(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9
                       ,undefined4 param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lStack_28;
  longlong lStack_20;
  
  if ((param_7 & 0xf0) == 0xf0) {
    uVar3 = (*(code *)(&PTR_FUN_14308bb40)[param_6])
                      (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return uVar3;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1406d0516;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x10;
      goto joined_r0x0001406d06dc;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1406d0516;
    }
  }
  else {
    if ((param_3 < param_5[1]) || (param_7 == 0xf0)) goto LAB_1406d0516;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x20;
joined_r0x0001406d06dc:
      if (uVar2 == 0) {
        fVar7 = (float)param_8[2];
        lVar5 = *param_5 * 2 + *param_5;
        uVar3 = (ulonglong)*param_8;
        fVar9 = (float)*param_8;
        fVar8 = (float)param_8[1];
        if (0 < lVar5) {
          uVar6 = lVar5 + 2;
          uVar3 = 0;
          lVar4 = 1;
          lVar5 = 0;
          if (uVar6 / 6 != 0) {
            do {
              uVar3 = uVar3 + 1;
              *(float *)(lVar5 + param_4) = fVar9;
              *(float *)(lVar5 + 4 + param_4) = fVar8;
              *(float *)(lVar5 + 8 + param_4) = fVar7;
              *(float *)(lVar5 + 0xc + param_4) = fVar9;
              *(float *)(lVar5 + 0x10 + param_4) = fVar8;
              *(float *)(lVar5 + 0x14 + param_4) = fVar7;
              lVar5 = lVar5 + 0x18;
            } while (uVar3 < uVar6 / 6);
            lVar4 = uVar3 * 2 + 1;
          }
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar6;
          uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
          if (lVar4 - 1U < uVar6 / 3) {
            uVar3 = (lVar4 - 1U) * 0xc;
            *(float *)(uVar3 + param_4) = fVar9;
            *(float *)(uVar3 + 4 + param_4) = fVar8;
            *(float *)(uVar3 + 8 + param_4) = fVar7;
          }
        }
        return uVar3;
      }
      goto LAB_1406d0516;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] + -1;
      }
      goto LAB_1406d0516;
    }
  }
  if ((param_7 & 0xf) == 3) {
    if (param_5[1] < 2) {
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
      if (param_3 < 0) goto LAB_1406d0660;
      if (param_5[1] <= param_3) {
        while ((param_7 & 0x20) == 0) {
          for (param_3 = (param_5[1] + -1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_1406d0660:
            if ((param_7 & 0x10) != 0) goto LAB_1406d0516;
          }
          if (param_3 < param_5[1]) break;
        }
      }
    }
  }
LAB_1406d0516:
  lStack_28 = *param_5;
  lStack_20 = param_5[1];
  uVar3 = FUN_1406d9da0(param_1,param_2,param_3,param_4,&lStack_28,param_6,param_7,param_8,param_9,
                        param_10,param_11);
  return uVar3;
}


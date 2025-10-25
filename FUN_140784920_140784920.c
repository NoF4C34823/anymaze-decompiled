
longlong FUN_140784920(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9,
                      undefined4 param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong uVar7;
  
  if ((param_7 & 0xf0) == 0xf0) {
    lVar3 = (*(code *)(&PTR_FUN_14308c1c0)[param_6])
                      (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return lVar3;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_140784a10;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x10;
      goto joined_r0x000140784bd6;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_140784a10;
    }
  }
  else {
    if ((param_3 < param_5[1]) || (param_7 == 0xf0)) goto LAB_140784a10;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x20;
joined_r0x000140784bd6:
      if (uVar2 == 0) {
        lVar3 = *param_5;
        fVar9 = (float)param_8[1];
        fVar10 = (float)*param_8;
        fVar8 = (float)param_8[2];
        if (0 < lVar3 * 3) {
          uVar5 = lVar3 * 3 + 2;
          lVar4 = 1;
          lVar3 = 0;
          uVar6 = 0;
          if (uVar5 / 6 != 0) {
            do {
              uVar7 = uVar6;
              uVar6 = uVar7 + 1;
              *(float *)(lVar3 + param_4) = fVar10;
              *(float *)(lVar3 + 4 + param_4) = fVar9;
              *(float *)(lVar3 + 8 + param_4) = fVar8;
              *(float *)(lVar3 + 0xc + param_4) = fVar10;
              *(float *)(lVar3 + 0x10 + param_4) = fVar9;
              *(float *)(lVar3 + 0x14 + param_4) = fVar8;
              lVar3 = lVar3 + 0x18;
            } while (uVar6 < uVar5 / 6);
            lVar4 = uVar7 + 2 + uVar6;
          }
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar5;
          lVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
          if (lVar4 - 1U < uVar5 / 3) {
            lVar3 = lVar4 * 3 + -3;
            *(float *)(param_4 + lVar3 * 4) = fVar10;
            *(float *)(param_4 + 4 + lVar3 * 4) = fVar9;
            *(float *)(param_4 + 8 + lVar3 * 4) = fVar8;
          }
        }
        return lVar3;
      }
      goto LAB_140784a10;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] + -1;
      }
      goto LAB_140784a10;
    }
  }
  if ((param_7 & 0xf) == 3) {
    lVar3 = param_5[1];
    if (lVar3 < 2) {
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
      if (param_3 < 0) goto LAB_140784b60;
      while ((lVar3 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (lVar3 + -1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_140784b60:
          if ((param_7 & 0x10) != 0) goto LAB_140784a10;
        }
      }
    }
  }
LAB_140784a10:
  uStack_28 = (undefined4)*param_5;
  uStack_24 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_20 = (undefined4)param_5[1];
  uStack_1c = *(undefined4 *)((longlong)param_5 + 0xc);
  lVar3 = FUN_14078dde0(uStack_28,param_2,param_3,param_4,&uStack_28,param_6,param_7,param_8,param_9
                        ,param_10,param_11);
  return lVar3;
}


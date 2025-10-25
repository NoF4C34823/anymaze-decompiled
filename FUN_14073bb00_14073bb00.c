
ulonglong FUN_14073bb00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       ulonglong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                       undefined4 param_10,undefined8 param_11)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((param_7 & 0xf0) == 0xf0) {
    uVar6 = (*(code *)(&PTR_FUN_14308c000)[param_6])
                      (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return uVar6;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_14073bbef;
    if ((param_7 & 0xf) == 6) {
      uVar5 = param_7 & 0x10;
      goto joined_r0x00014073be94;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_14073bbef;
    }
  }
  else {
    if ((param_3 < (longlong)param_5[1]) || (param_7 == 0xf0)) goto LAB_14073bbef;
    if ((param_7 & 0xf) == 6) {
      uVar5 = param_7 & 0x20;
joined_r0x00014073be94:
      if (uVar5 == 0) {
        uVar6 = *param_5;
        if (0 < (longlong)(uVar6 * 3)) {
          uVar10 = uVar6 * 3 + 2;
          if (6 < (longlong)uVar10 / 3) {
            lVar8 = ((longlong)uVar10 / 3) * 0xc;
            lVar7 = (longlong)param_8 + (4 - param_4);
            if (((lVar8 <= lVar7) || (7 < -lVar7)) &&
               ((3 < param_4 - (longlong)param_8 || (lVar8 <= -(param_4 - (longlong)param_8))))) {
              uVar5 = *param_8;
              lVar8 = 1;
              uVar1 = param_8[1];
              uVar2 = param_8[2];
              lVar7 = 0;
              uVar6 = 0;
              if (uVar10 / 6 != 0) {
                do {
                  uVar9 = uVar6;
                  uVar6 = uVar9 + 1;
                  *(uint *)(lVar7 + param_4) = uVar5;
                  *(uint *)(lVar7 + 4 + param_4) = uVar1;
                  *(uint *)(lVar7 + 8 + param_4) = uVar2;
                  *(uint *)(lVar7 + 0xc + param_4) = uVar5;
                  *(uint *)(lVar7 + 0x10 + param_4) = uVar1;
                  *(uint *)(lVar7 + 0x14 + param_4) = uVar2;
                  lVar7 = lVar7 + 0x18;
                } while (uVar6 < uVar10 / 6);
                lVar8 = uVar9 + 2 + uVar6;
              }
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar10;
              if (uVar10 / 3 <= lVar8 - 1U) {
                return SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
              }
              uVar6 = lVar8 * 3 - 3;
              *(uint *)(param_4 + uVar6 * 4) = uVar5;
              *(uint *)(param_4 + 4 + uVar6 * 4) = uVar1;
              *(uint *)(param_4 + 8 + uVar6 * 4) = uVar2;
              return uVar6;
            }
          }
          lVar8 = 1;
          lVar7 = 0;
          uVar6 = 0;
          if (uVar10 / 6 != 0) {
            do {
              uVar9 = uVar6;
              uVar6 = uVar9 + 1;
              *(uint *)(lVar7 + param_4) = *param_8;
              *(uint *)(lVar7 + 4 + param_4) = param_8[1];
              *(uint *)(lVar7 + 8 + param_4) = param_8[2];
              *(uint *)(lVar7 + 0xc + param_4) = *param_8;
              *(uint *)(lVar7 + 0x10 + param_4) = param_8[1];
              *(uint *)(lVar7 + 0x14 + param_4) = param_8[2];
              lVar7 = lVar7 + 0x18;
            } while (uVar6 < uVar10 / 6);
            lVar8 = uVar9 + 2 + uVar6;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar10;
          uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
          if (lVar8 - 1U < uVar10 / 3) {
            lVar8 = lVar8 * 3 + -3;
            uVar6 = (ulonglong)*param_8;
            *(uint *)(param_4 + lVar8 * 4) = *param_8;
            *(uint *)(param_4 + 4 + lVar8 * 4) = param_8[1];
            *(uint *)(param_4 + 8 + lVar8 * 4) = param_8[2];
          }
        }
        return uVar6;
      }
      goto LAB_14073bbef;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] - 1;
      }
      goto LAB_14073bbef;
    }
  }
  if ((param_7 & 0xf) == 3) {
    uVar6 = param_5[1];
    if ((longlong)uVar6 < 2) {
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
      if (param_3 < 0) goto LAB_14073be20;
      while (((longlong)uVar6 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (uVar6 - 1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_14073be20:
          if ((param_7 & 0x10) != 0) goto LAB_14073bbef;
        }
      }
    }
  }
LAB_14073bbef:
  uStack_28 = (undefined4)*param_5;
  uStack_24 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_20 = (undefined4)param_5[1];
  uStack_1c = *(undefined4 *)((longlong)param_5 + 0xc);
  uVar6 = FUN_14073eea0(uStack_28,param_2,param_3,param_4,&uStack_28,param_6,param_7,param_8,param_9
                        ,param_10,param_11);
  return uVar6;
}


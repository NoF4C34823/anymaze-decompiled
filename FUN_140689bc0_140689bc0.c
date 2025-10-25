
longlong *
FUN_140689bc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
             int param_6,uint param_7,undefined4 *param_8,undefined8 param_9,undefined4 param_10,
             undefined8 param_11)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lStack_38;
  longlong lStack_30;
  
  if ((param_7 & 0xf0) == 0xf0) {
    plVar8 = (longlong *)
             (**(code **)(&DAT_14308b940 + (longlong)param_6 * 8))
                       (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return plVar8;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_140689cd6;
    if ((param_7 & 0xf) == 6) {
      uVar7 = param_7 & 0x10;
      goto joined_r0x000140689fb9;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_140689cd6;
    }
  }
  else {
    if ((param_3 < param_5[1]) || (param_7 == 0xf0)) goto LAB_140689cd6;
    if ((param_7 & 0xf) == 6) {
      uVar7 = param_7 & 0x20;
joined_r0x000140689fb9:
      if (uVar7 == 0) {
        lVar12 = *param_5 * 3;
        if (0 < lVar12) {
          uVar1 = *param_5 * 3 + 2;
          if (6 < (longlong)uVar1 / 3) {
            lVar11 = ((longlong)uVar1 / 3) * 0xc;
            lVar9 = (longlong)param_8 + (4 - param_4);
            if (((lVar11 <= lVar9) || (7 < -lVar9)) &&
               ((3 < param_4 - (longlong)param_8 || (lVar11 <= -(param_4 - (longlong)param_8))))) {
              lVar9 = 1;
              uVar10 = (lVar12 + 2U) / 6;
              uVar2 = *param_8;
              lVar12 = 0;
              uVar3 = param_8[1];
              uVar4 = param_8[2];
              uVar13 = 0;
              if (uVar10 != 0) {
                do {
                  uVar13 = uVar13 + 1;
                  *(undefined4 *)(lVar12 + param_4) = uVar2;
                  *(undefined4 *)(lVar12 + 4 + param_4) = uVar3;
                  *(undefined4 *)(lVar12 + 8 + param_4) = uVar4;
                  *(undefined4 *)(lVar12 + 0xc + param_4) = uVar2;
                  *(undefined4 *)(lVar12 + 0x10 + param_4) = uVar3;
                  *(undefined4 *)(lVar12 + 0x14 + param_4) = uVar4;
                  lVar12 = lVar12 + 0x18;
                } while (uVar13 < uVar10);
                lVar9 = uVar13 * 2 + 1;
              }
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar1;
              if (uVar1 / 3 <= lVar9 - 1U) {
                return SUB168(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
              }
              plVar8 = (longlong *)((lVar9 - 1U) * 0xc);
              *(undefined4 *)((longlong)plVar8 + param_4) = uVar2;
              *(undefined4 *)((longlong)plVar8 + param_4 + 4) = uVar3;
              *(undefined4 *)((longlong)plVar8 + param_4 + 8) = uVar4;
              return plVar8;
            }
          }
          uVar13 = 0;
          uVar10 = (lVar12 + 2U) / 6;
          lVar9 = 1;
          lVar12 = 0;
          if (uVar10 != 0) {
            do {
              uVar13 = uVar13 + 1;
              *(undefined4 *)(lVar12 + param_4) = *param_8;
              *(undefined4 *)(lVar12 + 4 + param_4) = param_8[1];
              *(undefined4 *)(lVar12 + 8 + param_4) = param_8[2];
              *(undefined4 *)(lVar12 + 0xc + param_4) = *param_8;
              *(undefined4 *)(lVar12 + 0x10 + param_4) = param_8[1];
              *(undefined4 *)(lVar12 + 0x14 + param_4) = param_8[2];
              lVar12 = lVar12 + 0x18;
            } while (uVar13 < uVar10);
            lVar9 = uVar13 * 2 + 1;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar1;
          param_5 = SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
          if (lVar9 - 1U < uVar1 / 3) {
            lVar12 = (lVar9 - 1U) * 0xc;
            *(undefined4 *)(lVar12 + param_4) = *param_8;
            param_5 = (longlong *)(ulonglong)(uint)param_8[1];
            *(undefined4 *)(lVar12 + 4 + param_4) = param_8[1];
            *(undefined4 *)(lVar12 + 8 + param_4) = param_8[2];
          }
        }
        return param_5;
      }
      goto LAB_140689cd6;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] + -1;
      }
      goto LAB_140689cd6;
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
      if (param_3 < 0) goto LAB_140689f40;
      if (param_5[1] <= param_3) {
        while ((param_7 & 0x20) == 0) {
          for (param_3 = (param_5[1] + -1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_140689f40:
            if ((param_7 & 0x10) != 0) goto LAB_140689cd6;
          }
          if (param_3 < param_5[1]) break;
        }
      }
    }
  }
LAB_140689cd6:
  lStack_38 = *param_5;
  lStack_30 = param_5[1];
  plVar8 = (longlong *)
           FUN_14068d220(param_1,param_2,param_3,param_4,&lStack_38,param_6,param_7,param_8,param_9,
                         param_10,param_11);
  return plVar8;
}


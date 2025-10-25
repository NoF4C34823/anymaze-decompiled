
undefined8
FUN_140725100(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
             ulonglong *param_5,uint param_6,longlong param_7,byte *param_8,ulonglong param_9)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 in_stack_fffffffffffffec0;
  undefined4 uVar12;
  ulonglong uStack_118;
  ulonglong uStack_110;
  int aiStack_108 [2];
  ulonglong uStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  int iStack_d8;
  code *pcStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  longlong lStack_b0;
  code *pcStack_a8;
  uint uStack_a0;
  undefined4 uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  uint uStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  
  if ((((param_1 == 0) || (param_3 == 0)) || (param_9 == 0)) || (param_8 == (byte *)0x0)) {
    return 0xfffffff8;
  }
  uVar4 = *param_5;
  if ((param_2 < (longlong)*param_5) || (param_4 < (longlong)*param_5)) {
    return 0xfffffff0;
  }
  if ((0 < (longlong)param_5[1]) && (0 < (longlong)uVar4)) {
    if (0xff < param_6) {
      return 0xffffff1f;
    }
    if ((param_6 & 0xf0) == 0xf0) {
      param_6 = 0xf0;
    }
    else {
      uVar1 = param_6 & 0xf;
      if (uVar1 == 6) {
        if (param_7 == 0) {
          return 0xfffffff8;
        }
      }
      else if (((param_6 != 0xf0) && (uVar1 != 1)) && (uVar1 != 3)) {
        return 0xffffff1f;
      }
    }
    iVar2 = *(int *)param_8;
    if ((2 < *(int *)param_8) && ((*param_8 & 1) != 0)) {
      iStack_d8 = iVar2 >> 1;
      param_8 = param_8 + (-((ulonglong)(param_8 + 0x14) & 0x3f) & 0x3f) + 0x14;
      lVar7 = (-(param_9 & 0x3f) & 0x3f) + param_9;
      lVar3 = param_5[1] * uVar4;
      uVar10 = (ulonglong)iStack_d8;
      uStack_a0 = 0;
      if (iVar2 == 3) {
        uVar8 = 0;
      }
      else if (iVar2 == 5) {
        uVar8 = 1;
      }
      else {
        uVar8 = (ulonglong)(iVar2 != 7) + 2;
      }
      pcStack_a8 = (code *)(&PTR_FUN_14308be60)[uVar8];
      if (0x7ffff < lVar3) {
        aiStack_108[0] = 0;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar2);
        uStack_118 = uVar8;
        uStack_110 = lVar3;
        lStack_b0 = param_1;
        FUN_1420dd400(aiStack_108);
        uStack_a0 = (uint)((longlong)aiStack_108[0] <= (longlong)uStack_110);
        uVar8 = uStack_118;
        param_1 = lStack_b0;
        iVar2 = (int)uStack_e0;
      }
      lStack_88 = (longlong)iVar2;
      uStack_b8 = uVar4 * 4 + 0x3f & 0xffffffffffffffc0;
      lStack_90 = lStack_88 * uStack_b8 + lVar7;
      pcStack_d0 = (code *)(&PTR_FUN_14308bd60)[uVar8];
      uStack_98 = (undefined4)uVar8;
      lStack_50 = lVar7;
      uStack_58 = uVar4;
      lStack_78 = param_4;
      lStack_68 = param_2;
      if (param_6 == 0xf0) {
        lVar3 = (longlong)-iStack_d8;
        lVar5 = param_2 * lVar3 + param_1;
        lVar6 = param_1;
        iVar9 = iStack_d8;
        lVar11 = lStack_b0;
        for (; lStack_b0 = lVar6, iStack_d8 = iVar9, lVar3 < (longlong)uVar10; lVar3 = lVar3 + 1) {
          uStack_60 = param_3;
          (*pcStack_d0)(lVar5,lVar7,*param_5,param_8,iVar2);
          lVar5 = lVar5 + param_2;
          lVar7 = lVar7 + uStack_b8;
          lVar6 = lStack_b0;
          param_3 = uStack_60;
          iVar9 = iStack_d8;
          lVar11 = lStack_b0;
        }
        lVar3 = 0;
        lVar7 = lStack_88 + -1;
        if (0 < (longlong)param_5[1]) {
          lVar5 = lStack_b0 + uVar10 * param_2;
          lStack_b0 = lVar11;
          do {
            uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
            (*pcStack_d0)(lVar5,uStack_b8 * lVar7 + lStack_50,*param_5,param_8,iVar2);
            in_stack_fffffffffffffec0 = CONCAT44(uVar12,uStack_a0);
            (*pcStack_a8)(lStack_50,uStack_b8,iVar9,param_3,uStack_58,param_8,iVar2,
                          in_stack_fffffffffffffec0);
            lVar7 = lVar7 + 1;
            if (lVar7 == lStack_88) {
              lVar7 = 0;
            }
            iVar9 = iVar9 + 1;
            if (iVar9 == iVar2) {
              iVar9 = 0;
            }
            lVar3 = lVar3 + 1;
            lVar5 = lVar5 + lStack_68;
            param_3 = param_3 + lStack_78;
          } while (lVar3 < (longlong)param_5[1]);
        }
      }
      else {
        uStack_118 = *param_5;
        uStack_110 = param_5[1];
        uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar2);
        lVar3 = param_7;
        lStack_b0 = param_1;
        FUN_14071ae20(param_1,param_2,lVar7,uStack_b8,&uStack_118,uVar8 & 0xffffffff,param_6,param_7
                      ,param_8,iVar2,lStack_90);
        uVar8 = uStack_e0;
        lVar5 = 0;
        lVar7 = lStack_88 + -1;
        uVar4 = param_5[1];
        iVar2 = (int)uStack_e0;
        uStack_f0 = 0;
        uStack_60 = param_3;
        uStack_70 = uVar10;
        iVar9 = iStack_d8;
        uStack_100 = uVar10;
        lStack_f8 = lVar7;
        uStack_e8 = param_3;
        uStack_80 = param_6;
        if ((param_6 & 0xc0) == 0xc0) {
          if (uVar4 != uVar10 && -1 < (longlong)(uVar4 - uVar10)) {
            uStack_100 = uVar10 * param_2 + lStack_b0;
            lVar11 = 0;
            lVar6 = lVar5;
            do {
              uVar12 = (undefined4)((ulonglong)lVar3 >> 0x20);
              (*pcStack_d0)(uStack_100 + lVar6,uStack_b8 * lVar7 + lStack_50,*param_5,param_8,
                            uVar8 & 0xffffffff);
              lVar3 = CONCAT44(uVar12,uStack_a0);
              (*pcStack_a8)(lStack_50,uStack_b8,iVar9,uStack_60 + lVar11,uStack_58,param_8,iVar2,
                            lVar3);
              lVar7 = lVar7 + 1;
              if (lVar7 == lStack_88) {
                lVar7 = 0;
              }
              iVar9 = iVar9 + 1;
              uVar4 = param_5[1];
              if (iVar9 == iVar2) {
                iVar9 = 0;
              }
              lVar5 = lVar5 + 1;
              lVar6 = lVar6 + lStack_68;
              lVar11 = lVar11 + lStack_78;
              param_2 = lStack_68;
              param_4 = lStack_78;
              param_6 = uStack_80;
            } while (lVar5 < (longlong)(uVar4 - uStack_70));
          }
        }
        else if (0 < (longlong)(uVar4 - uVar10)) {
          do {
            uStack_c8 = *param_5;
            uStack_c0 = param_5[1];
            FUN_14071baa0(lStack_b0,lStack_68,uVar10,uStack_b8 * lVar7 + lStack_50,&uStack_c8,
                          uStack_98,uStack_80,param_7,param_8,iVar2,lStack_90);
            (*pcStack_a8)(lStack_50,uStack_b8,iVar9,param_3,uStack_58,param_8,iVar2,uStack_a0);
            lVar7 = lVar7 + 1;
            if (lVar7 == lStack_88) {
              lVar7 = 0;
            }
            iVar9 = iVar9 + 1;
            uVar4 = param_5[1];
            if (iVar9 == iVar2) {
              iVar9 = 0;
            }
            lVar5 = lVar5 + 1;
            param_3 = param_3 + lStack_78;
            uVar10 = uVar10 + 1;
            param_2 = lStack_68;
            param_4 = lStack_78;
            param_6 = uStack_80;
          } while (lVar5 < (longlong)(uVar4 - uStack_70));
        }
        iStack_d8 = iVar9;
        lStack_f8 = lVar7;
        uVar10 = uStack_b8;
        lVar3 = param_4 * lVar5;
        lVar7 = lStack_f8;
        iVar9 = iStack_d8;
        uStack_80 = param_6;
        lStack_78 = param_4;
        lStack_68 = param_2;
        if (lVar5 < (longlong)uVar4) {
          do {
            uStack_e8 = *param_5;
            uStack_e0 = param_5[1];
            FUN_1407170e0(lStack_b0,lStack_68,uStack_70 + lVar5,uVar10 * lVar7 + lStack_50,
                          &uStack_e8,uStack_98,uStack_80,param_7,param_8,iVar2,lStack_90);
            (*pcStack_a8)(lStack_50,uVar10,iVar9,uStack_60 + lVar3,uStack_58,param_8,iVar2,uStack_a0
                         );
            lVar11 = lVar7 + 1;
            if (lVar7 + 1 == lStack_88) {
              lVar11 = 0;
            }
            iVar9 = iVar9 + 1;
            if (iVar9 == iVar2) {
              iVar9 = 0;
            }
            lVar5 = lVar5 + 1;
            lVar3 = lVar3 + lStack_78;
            lVar7 = lVar11;
          } while (lVar5 < (longlong)param_5[1]);
        }
      }
      return 0;
    }
    return 0xfffffffb;
  }
  return 0xfffffffa;
}


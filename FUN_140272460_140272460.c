
undefined8
FUN_140272460(longlong param_1,int param_2,longlong param_3,ulonglong param_4,undefined8 param_5,
             undefined8 param_6,uint param_7,undefined8 param_8,longlong param_9,uint param_10,
             int param_11,int param_12,undefined8 param_13,longlong param_14)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  longlong lStack_68;
  
  uVar7 = param_7 & 0xf;
  param_7 = param_7 & 0xf0;
  param_9 = (0x20U - param_9 & 0x1f) + param_9;
  param_12 = param_12 * 0x10;
  uVar1 = *(uint *)(param_14 + 0x78);
  if (param_10 == 7) {
    param_12 = param_12 + 4;
  }
  else if (param_10 == 5) {
    param_12 = param_12 + 8;
  }
  else if (param_10 == 0xd) {
    param_12 = param_12 + 0xc;
  }
  if (param_11 == 3) {
    iVar8 = 3;
    iVar6 = 3;
  }
  else if (param_11 == 9) {
    iVar8 = 4;
    iVar6 = 4;
  }
  else {
    iVar8 = 1;
    if (param_11 == 4) {
      iVar8 = 4;
    }
    iVar6 = (param_11 == 4) + 1;
  }
  uVar10 = param_12 + iVar6 + -1;
  if ((((int)param_6 == 1) && (param_6._4_4_ == 1)) || ((uVar1 & 4) != 0)) {
    switch(uVar10 & 0xf) {
    case 0:
      uVar5 = FUN_140da3c60(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 1:
      uVar5 = FUN_140da3c00(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 2:
      uVar5 = FUN_140da3ba0(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 3:
      uVar5 = FUN_140da3aa0(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    default:
      uVar5 = FUN_140da3a40(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 5:
    case 9:
      uVar5 = FUN_140da39e0(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 6:
    case 10:
      uVar5 = FUN_140da3980(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 7:
    case 0xb:
      uVar5 = FUN_140da3880(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 0xc:
      uVar5 = FUN_140da3820(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 0xd:
      uVar5 = FUN_140da37c0(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 0xe:
      uVar5 = FUN_140da3740(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 0xf:
      uVar5 = FUN_140da3220(param_1,param_2,param_3,param_4,(int)param_5);
    }
    return uVar5;
  }
  uVar5 = 0;
  if ((uVar1 & 2) == 0) {
    uVar5 = param_13;
  }
  iVar6 = (int)param_6 + -1 >> 1;
  iVar9 = param_6._4_4_ + -1 >> 1;
  iVar14 = ((int)param_6 - iVar6) + -1;
  iVar13 = (param_6._4_4_ - iVar9) + -1;
  uVar11 = param_7;
  if (iVar6 == 0) {
    uVar11 = param_7 | 0x40;
    if (iVar14 == 0) {
      uVar11 = param_7 | 0xc0;
    }
  }
  uVar12 = uVar11;
  if (iVar9 == 0) {
    uVar12 = uVar11 | 0x10;
    if (iVar13 == 0) {
      uVar12 = uVar11 | 0x30;
    }
  }
  pcVar2 = *(code **)(&DAT_143088f00 + (longlong)(int)uVar10 * 8);
  if (uVar12 == 0xf0) {
    (*pcVar2)(param_1,param_2,param_3,param_4,(int)param_5,(int)param_6,uVar5,uVar1,param_9);
  }
  else {
    iVar3 = FUN_140cf9300(param_5,param_6,param_10,iVar8);
    lVar4 = iVar3 + param_9;
    if ((param_10 & 0xfffffffd) == 5) {
      uStack_a8 = 3;
      iVar3 = 2;
    }
    else {
      uStack_a8 = 0;
      if (param_10 == 0xd) {
        uStack_a8 = 6;
      }
      iVar3 = 1;
      if (param_10 == 0xd) {
        iVar3 = 4;
      }
    }
    if (param_11 == 3) {
      uStack_a8 = uStack_a8 + 1;
    }
    else if ((param_11 == 4) || (param_11 == 9)) {
      uStack_a8 = uStack_a8 + 2;
    }
    uVar10 = iVar8 * iVar3;
    if (((int)param_6 < (int)param_5) && (param_6._4_4_ < param_5._4_4_)) {
      lStack_68 = param_3;
      if ((uVar12 & 0x10) == 0) {
        if (uVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140272fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_140272fab + *(ushort *)(&UNK_143089048 + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        if (uVar7 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00014027288b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_14027288d + *(ushort *)(&UNK_143089020 + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        if (uVar7 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000140272c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_140272c57 + *(ushort *)(&UNK_143089034 + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        iVar8 = (int)param_5 + (int)param_6 + -1;
        (*pcVar2)((int)((iVar9 * iVar8 + iVar6) * uVar10) + lVar4,iVar8 * uVar10,param_3,
                  param_4 & 0xffffffff,(int)param_5,(int)param_6,uVar5,uVar1,param_9);
        param_1 = param_1 + (longlong)param_2 * (longlong)iVar9;
        param_5._4_4_ = param_5._4_4_ - iVar9;
        lStack_68 = param_3 + (longlong)(int)param_4 * (longlong)iVar9;
      }
      uStack_b0 = uVar12 & 0x40;
      uStack_b8 = uVar12 & 0x80;
      if ((uVar12 & 0x20) == 0) {
        if (uVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140273b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_140273b7f + *(ushort *)(&UNK_143089084 + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        if (uVar7 == 6) {
                    /* WARNING: Could not recover jumptable at 0x0001402734f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_1402734f4 + *(ushort *)(&UNK_14308905c + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        if (uVar7 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00014027387a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_14027387c + *(ushort *)(&UNK_143089070 + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        iVar8 = (int)param_5 + (int)param_6 + -1;
        (*pcVar2)((int)((iVar9 * iVar8 + iVar6) * uVar10) + lVar4,iVar8 * uVar10,
                  (param_5._4_4_ - iVar13) * (int)param_4 + lStack_68,param_4 & 0xffffffff,
                  (int)param_5,(int)param_6,uVar5,uVar1,param_9);
      }
      if (uStack_b0 == 0) {
        if (uVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140274688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_14027468a + *(ushort *)(&UNK_1430890c0 + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        if (uVar7 == 6) {
                    /* WARNING: Could not recover jumptable at 0x000140273ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_140273fff + *(ushort *)(&UNK_143089098 + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        if (uVar7 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000140274385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_140274387 + *(ushort *)(&UNK_1430890ac + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        iVar8 = iVar6 + (int)param_6 + -1;
        (*pcVar2)((int)((iVar9 * iVar8 + iVar6) * uVar10) + lVar4,iVar8 * uVar10,lStack_68,
                  param_4 & 0xffffffff,iVar6,(int)param_6,uVar5,uVar1,param_9);
        param_1 = param_1 + (ulonglong)uVar10 * (longlong)iVar6;
        param_5._0_4_ = (int)param_5 - iVar6;
        lStack_68 = lStack_68 + (ulonglong)uVar10 * (longlong)iVar6;
      }
      if (uStack_b8 == 0) {
        if (uVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014027516f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_140275171 + *(ushort *)(&UNK_1430890fc + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        if (uVar7 == 6) {
                    /* WARNING: Could not recover jumptable at 0x000140274b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_140274b26 + *(ushort *)(&UNK_1430890d4 + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        if (uVar7 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000140274e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_140274e8e + *(ushort *)(&UNK_1430890e8 + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
        iVar8 = iVar14 + (int)param_6 + -1;
        (*pcVar2)((int)((iVar9 * iVar8 + iVar6) * uVar10) + lVar4,iVar8 * uVar10,
                  (int)(((int)param_5 - iVar14) * uVar10) + lStack_68,param_4 & 0xffffffff,iVar14,
                  (int)param_6,uVar5,uVar1,param_9);
        param_5._0_4_ = (int)param_5 - iVar14;
      }
      (*pcVar2)(param_1,param_2,lStack_68,param_4 & 0xffffffff,(int)param_5,(int)param_6,uVar5,uVar1
                ,param_9);
    }
    else {
      iVar8 = (int)param_5 + (int)param_6 + -1;
      if (uVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140275cdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)(&UNK_140275cdf + *(ushort *)(&UNK_14308914c + (ulonglong)uStack_a8 * 2)))
                          ();
        return uVar5;
      }
      if (uVar7 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00014027563a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)(&UNK_14027563c + *(ushort *)(&UNK_143089110 + (ulonglong)uStack_a8 * 2)))
                          ();
        return uVar5;
      }
      if (uVar7 == 3) {
        if ((uVar1 & 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402759b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_1402759b4 + *(ushort *)(&UNK_143089124 + (ulonglong)uStack_a8 * 2)
                            ))();
          return uVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x000140275c99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)(&UNK_1402759b4 + *(ushort *)(&UNK_143089138 + (ulonglong)uStack_a8 * 2)))
                          ();
        return uVar5;
      }
      (*pcVar2)((int)((iVar8 * iVar9 + iVar6) * uVar10) + lVar4,uVar10 * iVar8,param_3,
                param_4 & 0xffffffff,(int)param_5,(int)param_6,uVar5,uVar1,param_9);
    }
  }
  return 0;
}


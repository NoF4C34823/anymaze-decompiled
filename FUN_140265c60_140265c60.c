
undefined8
FUN_140265c60(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
             undefined8 param_6,uint param_7,undefined8 param_8,longlong param_9,uint param_10,
             int param_11,int param_12,undefined8 param_13,longlong param_14)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  
  uVar9 = param_7 & 0xf;
  param_7 = param_7 & 0xf0;
  param_9 = param_9 + (0x20U - param_9 & 0x1f);
  param_12 = param_12 * 0x10;
  uVar2 = *(uint *)(param_14 + 0x78);
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
    iVar12 = 3;
    iVar4 = 3;
  }
  else if (param_11 == 9) {
    iVar12 = 4;
    iVar4 = 4;
  }
  else {
    iVar12 = 1;
    if (param_11 == 4) {
      iVar12 = 4;
    }
    iVar4 = (param_11 == 4) + 1;
  }
  uVar13 = param_12 + -1 + iVar4;
  if ((((int)param_6 == 1) && (param_6._4_4_ == 1)) || ((uVar2 & 4) != 0)) {
    switch(uVar13 & 0xf) {
    case 0:
      uVar7 = FUN_140d9afa0(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 1:
      uVar7 = FUN_140d9ae80(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 2:
      uVar7 = FUN_140d9ad80(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 3:
      uVar7 = FUN_140d9ac80(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    default:
      uVar7 = FUN_140d9ab80(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 5:
    case 9:
      uVar7 = FUN_140d9aa60(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 6:
    case 10:
      uVar7 = FUN_140d9a960(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 7:
    case 0xb:
      uVar7 = FUN_140d9a860(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 0xc:
      uVar7 = FUN_140d9a740(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 0xd:
      uVar7 = FUN_140d9a640(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 0xe:
      uVar7 = FUN_140d9a520(param_1,param_2,param_3,param_4,(int)param_5);
      break;
    case 0xf:
      uVar7 = FUN_140d99f40(param_1,param_2,param_3,param_4,(int)param_5);
    }
    return uVar7;
  }
  uVar7 = 0;
  if ((uVar2 & 2) == 0) {
    uVar7 = param_13;
  }
  iVar8 = (int)param_6 + -1 >> 1;
  iVar14 = param_6._4_4_ + -1 >> 1;
  iVar4 = ((int)param_6 - iVar8) + -1;
  iVar1 = (param_6._4_4_ - iVar14) + -1;
  uVar10 = param_7;
  if (iVar8 == 0) {
    uVar10 = param_7 | 0x40;
    if (iVar4 == 0) {
      uVar10 = param_7 | 0xc0;
    }
  }
  uVar11 = uVar10;
  if (iVar14 == 0) {
    uVar11 = uVar10 | 0x10;
    if (iVar1 == 0) {
      uVar11 = uVar10 | 0x30;
    }
  }
  pcVar3 = *(code **)(&UNK_143088c80 + (longlong)(int)uVar13 * 8);
  if (uVar11 == 0xf0) {
    (*pcVar3)(param_1,param_2,param_3,param_4,(int)param_5,(int)param_6,uVar7,uVar2,param_9);
  }
  else {
    iVar5 = FUN_140cf07a0(param_5,param_6,param_10,iVar12);
    lVar6 = iVar5 + param_9;
    if ((param_10 & 0xfffffffd) == 5) {
      uStack_b0 = 3;
      iVar5 = 2;
    }
    else {
      iVar5 = 1;
      if (param_10 == 0xd) {
        iVar5 = 4;
      }
      uStack_b0 = 0;
      if (param_10 == 0xd) {
        uStack_b0 = 6;
      }
    }
    if (param_11 == 3) {
      uStack_b0 = uStack_b0 + 1;
    }
    else if ((param_11 == 4) || (param_11 == 9)) {
      uStack_b0 = uStack_b0 + 2;
    }
    uVar13 = iVar12 * iVar5;
    if (((int)param_6 < (int)param_5) && (param_6._4_4_ < param_5._4_4_)) {
      if ((uVar11 & 0x10) == 0) {
        if (uVar9 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014026678a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_14026678c + *(ushort *)(&UNK_143088dc8 + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        if (uVar9 == 6) {
                    /* WARNING: Could not recover jumptable at 0x000140266093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_140266095 + *(ushort *)(&UNK_143088da0 + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        if (uVar9 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000140266448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_14026644a + *(ushort *)(&UNK_143088db4 + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        iVar12 = (int)param_6 + -1 + (int)param_5;
        (*pcVar3)((int)((iVar14 * iVar12 + iVar8) * uVar13) + lVar6,iVar12 * uVar13,param_3,param_4,
                  (int)param_5,(int)param_6,uVar7,uVar2,param_9);
        param_1 = param_1 + (longlong)param_2 * (longlong)iVar14;
        param_5._4_4_ = param_5._4_4_ - iVar14;
        param_3 = param_3 + (longlong)param_4 * (longlong)iVar14;
      }
      uStack_b8 = uVar11 & 0x40;
      uStack_c0 = uVar11 & 0x80;
      if ((uVar11 & 0x20) == 0) {
        if (uVar9 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014026731e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_140267320 + *(ushort *)(&UNK_143088e04 + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        if (uVar9 == 6) {
                    /* WARNING: Could not recover jumptable at 0x000140266ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_140266ca7 + *(ushort *)(&UNK_143088ddc + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        if (uVar9 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000140267024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_140267026 + *(ushort *)(&UNK_143088df0 + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        iVar12 = (int)param_6 + -1 + (int)param_5;
        (*pcVar3)((int)((iVar14 * iVar12 + iVar8) * uVar13) + lVar6,iVar12 * uVar13,
                  (param_5._4_4_ - iVar1) * param_4 + param_3,param_4,(int)param_5,(int)param_6,
                  uVar7,uVar2,param_9);
      }
      if (uStack_b8 == 0) {
        if (uVar9 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140267dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_140267dec + *(ushort *)(&UNK_143088e40 + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        if (uVar9 == 6) {
                    /* WARNING: Could not recover jumptable at 0x000140267771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_140267773 + *(ushort *)(&UNK_143088e18 + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        if (uVar9 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000140267af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_140267af2 + *(ushort *)(&UNK_143088e2c + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        iVar12 = iVar8 + -1 + (int)param_6;
        (*pcVar3)((int)((iVar14 * iVar12 + iVar8) * uVar13) + lVar6,iVar12 * uVar13,param_3,param_4,
                  iVar8,(int)param_6,uVar7,uVar2,param_9);
        param_5._0_4_ = (int)param_5 - iVar8;
        param_1 = param_1 + (ulonglong)uVar13 * (longlong)iVar8;
        param_3 = param_3 + (ulonglong)uVar13 * (longlong)iVar8;
      }
      if (uStack_c0 == 0) {
        if (uVar9 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140268895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_140268897 + *(ushort *)(&UNK_143088e7c + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        if (uVar9 == 6) {
                    /* WARNING: Could not recover jumptable at 0x000140268245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_140268247 + *(ushort *)(&UNK_143088e54 + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        if (uVar9 == 3) {
                    /* WARNING: Could not recover jumptable at 0x0001402685ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_1402685bc + *(ushort *)(&UNK_143088e68 + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
        iVar12 = (int)param_6 + -2 + ((int)param_6 - iVar8);
        (*pcVar3)((int)((iVar14 * iVar12 + iVar8) * uVar13) + lVar6,iVar12 * uVar13,
                  (int)(((int)param_5 - iVar4) * uVar13) + param_3,param_4,iVar4,(int)param_6,uVar7,
                  uVar2,param_9);
        param_5._0_4_ = (int)param_5 - iVar4;
      }
      (*pcVar3)(param_1,param_2,param_3,param_4,(int)param_5,(int)param_6,uVar7,uVar2,param_9);
    }
    else {
      iVar12 = (int)param_5 + -1 + (int)param_6;
      if (uVar9 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014026939f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)(&UNK_1402693a1 + *(ushort *)(&UNK_143088ecc + (ulonglong)uStack_b0 * 2)))
                          (iVar12,uVar13 * iVar12);
        return uVar7;
      }
      if (uVar9 == 6) {
                    /* WARNING: Could not recover jumptable at 0x000140268d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)(&UNK_140268d5e + *(ushort *)(&UNK_143088e90 + (ulonglong)uStack_b0 * 2)))
                          ();
        return uVar7;
      }
      if (uVar9 == 3) {
        if ((uVar2 & 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402690a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&UNK_1402690a4 + *(ushort *)(&UNK_143088ea4 + (ulonglong)uStack_b0 * 2)
                            ))();
          return uVar7;
        }
                    /* WARNING: Could not recover jumptable at 0x00014026935d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)(&UNK_1402690a4 + *(ushort *)(&UNK_143088eb8 + (ulonglong)uStack_b0 * 2)))
                          ();
        return uVar7;
      }
      (*pcVar3)((int)((iVar12 * iVar14 + iVar8) * uVar13) + lVar6,uVar13 * iVar12,param_3,param_4,
                (int)param_5,(int)param_6,uVar7,uVar2,param_9);
    }
  }
  return 0;
}


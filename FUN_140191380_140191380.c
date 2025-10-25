
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140191380(longlong *param_1,uint param_2,float param_3,uint param_4,uint param_5,int param_6,
             uint *param_7,longlong param_8)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = (int)param_2 >> 1;
  if ((param_7 == (uint *)0x0) || (param_8 == 0)) {
    return 0xfffffff8;
  }
  if ((param_1[1] < 1) || (*param_1 < 1)) {
    return 0xfffffffa;
  }
  if ((2 < (int)param_2) && ((param_2 & 1) != 0)) {
    if ((param_5 != 0xd) && (((param_5 != 1 && (param_5 != 5)) && (param_5 != 7)))) {
      return 0xffffffc5;
    }
    if ((param_6 != 1) && (param_6 != 3)) {
      return 0xffffffd1;
    }
    if (0.0 < param_3) {
      if ((param_4 < 0x100) &&
         ((((param_4 & 0xf0) == 0xf0 || (param_4 == 0xf0)) ||
          ((param_4 = param_4 & 0xf, param_4 == 6 || ((param_4 == 1 || (param_4 == 3)))))))) {
        iVar5 = 0;
        lVar3 = 0;
        fVar6 = 0.0;
        lVar1 = (-((ulonglong)(param_7 + 5) & 0x3f) & 0x3f) + 0x14;
        if (0 < iVar4) {
          fVar6 = 0.0;
          iVar2 = iVar4;
          do {
            fVar7 = (float)thunk_FUN_142edda00((float)((uint)((float)iVar2 * (float)iVar2) ^
                                                      _DAT_143087d90) /
                                               (param_3 * (param_3 + param_3)));
            *(float *)((longlong)param_7 + lVar3 * 4 + lVar1) = fVar7;
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
            lVar3 = lVar3 + 1;
            fVar6 = fVar6 + fVar7 + fVar7;
          } while (iVar5 < iVar4);
        }
        fVar7 = _DAT_143087da0;
        *(float *)((longlong)param_7 + (longlong)iVar4 * 4 + lVar1) = _DAT_143087da0;
        FUN_141bb24e0(fVar7 + fVar6,fVar7 + fVar6,iVar4 + 1);
        param_7[1] = 0x40;
        *param_7 = param_2;
        param_7[2] = param_5;
        param_7[4] = 0;
        return 0;
      }
      return 0xffffff1f;
    }
  }
  return 0xfffffffb;
}


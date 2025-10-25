
void FUN_14000358e(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  uint *param_5,char param_6,longlong param_7,undefined8 param_8,undefined1 *param_9
                  ,undefined1 param_10)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if (param_6 == '\0') {
    cVar2 = FUN_14000400c(param_1,param_4);
    if (cVar2 != '\0') goto LAB_1400035fa;
    if (DAT_143696038 != '\x01') {
      return;
    }
  }
  else {
    DAT_143696038 = '\x01';
    cVar2 = FUN_14000400c(param_1,param_4);
    if (cVar2 != '\0') {
LAB_1400035fa:
      lVar1 = FUN_1400030d8(param_4);
      *param_3 = lVar1;
      if ((param_7 != 0) && (cVar2 = FUN_140003098(param_4), cVar2 == '\0')) {
        FUN_14000378b(param_7,*param_3,param_8);
        return;
      }
      if (param_5 == (uint *)0x0) {
        return;
      }
      if (*param_3 == 0) {
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_142c39cfc();
        uVar4 = (uint)(iVar3 == 1);
      }
      *param_5 = uVar4;
      if (param_9 == (undefined1 *)0x0) {
        return;
      }
      *param_9 = 1;
      return;
    }
  }
  cVar2 = FUN_140003843(0xffffffff80000001);
  if (cVar2 == '\0') {
    DAT_143696038 = FUN_140003843(0xffffffff80000002);
    if (DAT_143696038 == '\0') {
      return;
    }
  }
  else {
    DAT_143696038 = '\x01';
  }
  cVar2 = FUN_1400038ad(0xffffffff80000002,param_2,param_3,param_4,param_5,param_7,param_8,param_9,
                        param_10);
  if (cVar2 == '\0') {
    FUN_1400038ad(0xffffffff80000001,param_2,param_3,param_4,param_5,param_7,param_8,param_9,
                  param_10);
  }
  return;
}


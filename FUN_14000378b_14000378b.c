
void FUN_14000378b(uint *param_1,short *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  
  if (param_2 != (short *)0x0) {
    puVar3 = (undefined2 *)FUN_142bfef58(param_2,0x2c);
    while (puVar3 != (undefined2 *)0x0) {
      uVar1 = FUN_142c356d0(param_2);
      if (((longlong)puVar3 - (longlong)param_2 >> 1) + 1U < uVar1) {
        uVar2 = FUN_142c39cfc(puVar3 + 1);
        uVar4 = 1 << ((byte)uVar2 & 0x1f);
        if (4 < uVar2) {
          uVar4 = 1;
        }
        *param_1 = *param_1 | uVar4;
      }
      *puVar3 = 0;
      puVar3 = (undefined2 *)FUN_142bfef58(param_2,0x2c);
    }
    if (*param_2 != 0) {
      uVar2 = FUN_142c39cfc(param_2);
      uVar4 = 1 << ((byte)uVar2 & 0x1f);
      if (4 < uVar2) {
        uVar4 = 1;
      }
      *param_1 = *param_1 | uVar4;
    }
  }
  *param_3 = 1;
  return;
}


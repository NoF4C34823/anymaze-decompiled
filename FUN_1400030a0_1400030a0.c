
bool FUN_1400030a0(longlong *param_1,short *param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    bVar2 = *param_1 == 0;
  }
  else if (param_1[2] == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_142c64830(param_2,param_1[2]);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


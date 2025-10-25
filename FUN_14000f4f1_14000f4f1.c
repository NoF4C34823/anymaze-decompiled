
void FUN_14000f4f1(uint *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int in_EAX;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  
  do {
    uVar1 = *param_1;
    in_EAX = in_EAX + 4;
    param_1 = param_1 + 1;
    auVar2 = pshufb(ZEXT416(uVar1),in_XMM1);
    maskmovdqu(auVar2,in_XMM0);
  } while (in_EAX < param_4);
  return;
}



undefined8 FUN_14000f72d(uint *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auVar1 [16];
  int in_EAX;
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  
  do {
    in_EAX = in_EAX + 4;
    auVar1 = vpunpckldq_avx(ZEXT416(*param_1),(undefined1  [16])0x0);
    auVar1 = vpunpcklqdq_avx(auVar1,(undefined1  [16])0x0);
    param_1 = param_1 + 1;
    auVar1 = vpshufb_avx(auVar1,in_XMM2);
    vmaskmovdqu_avx(auVar1,in_XMM1);
  } while (in_EAX < param_4);
  return 0;
}


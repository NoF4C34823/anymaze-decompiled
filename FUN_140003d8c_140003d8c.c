
undefined1 FUN_140003d8c(longlong param_1,longlong param_2,char param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar2 = FUN_140002e0a(param_4,param_2 * 2);
  FUN_140002fa0(param_4,param_2 * 2);
  if (param_2 != 0) {
    param_2 = param_2 + -1;
    lVar3 = 0;
    do {
      bVar1 = *(byte *)(param_1 + lVar3);
      lVar4 = lVar3;
      if (param_3 != '\0') {
        lVar4 = param_2;
      }
      FUN_14000306a(param_4,(int)(char)(&UNK_143085000)[bVar1 >> 4],lVar4 * 2);
      FUN_14000306a(param_4,(int)(char)(&UNK_143085000)[bVar1 & 0xf],lVar4 * 2 + 1);
      lVar3 = lVar3 + 1;
      bVar5 = param_2 != 0;
      param_2 = param_2 + -1;
    } while (bVar5);
  }
  return uVar2;
}


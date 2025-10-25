
undefined8 FUN_140001153(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_140002fc2(param_1,&UNK_14308478a);
  FUN_140002fc2(param_1,&UNK_143084488);
  uVar2 = FUN_1400030de(param_1);
  iVar1 = GetFileAttributesW(uVar2);
  if (iVar1 != -1) {
    uVar2 = FUN_1400030de(param_1);
    lVar3 = CreateFileW(uVar2,0x100021,7,0,3,0x80,0);
    if (lVar3 != -1) {
      CloseHandle(lVar3);
      return 1;
    }
    OutputDebugStringA(&UNK_1430848f7);
    OutputDebugStringW(uVar2);
    OutputDebugStringA(&UNK_1430847f0);
  }
  return 0;
}


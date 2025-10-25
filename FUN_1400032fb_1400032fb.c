
undefined8 FUN_1400032fb(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = LoadLibraryExW(&UNK_143084f2a,0,0x800);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140003327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = GetProcAddress(lVar1,&UNK_143084f42);
    return uVar2;
  }
  return 0;
}


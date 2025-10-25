
void FUN_140002914(void)

{
  longlong lVar1;
  
  lVar1 = LoadLibraryExW(&UNK_143084918,0,0x800);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000294a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryExW(&UNK_14308495e,0,0x800);
  return;
}


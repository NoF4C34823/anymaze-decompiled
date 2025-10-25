
void FUN_140010e2c(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  int in_EAX;
  int unaff_EBP;
  int unaff_ESI;
  
  if (param_3 < param_4) {
    do {
      *(char *)(param_3 + param_2) =
           (char)((uint)*(byte *)(param_1 + param_3 * 4) * unaff_EBP +
                  (uint)*(byte *)(param_1 + 1 + param_3 * 4) * unaff_ESI + 0x4000 +
                  (uint)*(byte *)(param_1 + 2 + param_3 * 4) * in_EAX >> 0xf);
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}


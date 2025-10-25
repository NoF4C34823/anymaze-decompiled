
void FUN_1400114b8(longlong param_1,longlong param_2,ulonglong param_3)

{
  int in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  ulonglong in_R10;
  
  if (param_3 < in_R10) {
    do {
      *(char *)(param_3 + param_2) =
           (char)((uint)*(byte *)(param_1 + param_3 * 4) * unaff_EBX +
                  (uint)*(byte *)(param_1 + 1 + param_3 * 4) * unaff_EBP + 0x4000 +
                  (uint)*(byte *)(param_1 + 2 + param_3 * 4) * in_EAX >> 0xf);
      param_3 = param_3 + 1;
    } while (param_3 < in_R10);
  }
  return;
}


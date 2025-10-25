
void FUN_14001044a(byte *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 in_XMM2_Qa;
  
  param_3 = param_3 & 7;
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar3 = (uint)(ushort)in_XMM2_Qa;
  uVar2 = (uint)(ushort)((ulonglong)in_XMM2_Qa >> 0x10);
  uVar1 = (uint)(ushort)((ulonglong)in_XMM2_Qa >> 0x20);
  if (((longlong)param_2 - (longlong)param_1 < (longlong)((ulonglong)param_3 * 4 + -1)) &&
     (-((longlong)param_2 - (longlong)param_1) < (longlong)(ulonglong)param_3)) {
    iVar4 = 1;
    uVar6 = 0;
    if (param_3 >> 1 != 0) {
      do {
        param_2[uVar6 * 2] =
             (char)(param_1[uVar6 * 8] * uVar3 + param_1[uVar6 * 8 + 1] * uVar2 +
                    param_1[uVar6 * 8 + 2] * uVar1 + 0x4000 >> 0xf);
        param_2[uVar6 * 2 + 1] =
             (char)(param_1[uVar6 * 8 + 4] * uVar3 + param_1[uVar6 * 8 + 5] * uVar2 +
                    param_1[uVar6 * 8 + 6] * uVar1 + 0x4000 >> 0xf);
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_3 >> 1);
      iVar4 = (int)uVar6 * 2 + 1;
    }
    if (param_3 <= iVar4 - 1U) {
      return;
    }
    lVar5 = (longlong)iVar4;
    param_2[lVar5 + -1] =
         (char)(uVar3 * param_1[lVar5 * 4 + -4] + uVar2 * param_1[lVar5 * 4 + -3] +
                uVar1 * param_1[lVar5 * 4 + -2] + 0x4000 >> 0xf);
    return;
  }
  switch(param_3) {
  case 1:
    goto LAB_14001060d;
  case 2:
    goto LAB_1400105d6;
  case 3:
    goto LAB_14001059d;
  case 4:
    goto LAB_140010564;
  case 5:
    goto LAB_14001052b;
  case 6:
    break;
  case 7:
    param_2[6] = (char)(param_1[0x18] * uVar3 + param_1[0x19] * uVar2 + 0x4000 +
                        param_1[0x1a] * uVar1 >> 0xf);
    break;
  default:
    goto switchD_1400104b2_default;
  }
  param_2[5] = (char)(param_1[0x14] * uVar3 + param_1[0x15] * uVar2 + 0x4000 + param_1[0x16] * uVar1
                     >> 0xf);
LAB_14001052b:
  param_2[4] = (char)(param_1[0x10] * uVar3 + param_1[0x11] * uVar2 + 0x4000 + param_1[0x12] * uVar1
                     >> 0xf);
LAB_140010564:
  param_2[3] = (char)(param_1[0xc] * uVar3 + param_1[0xd] * uVar2 + 0x4000 + param_1[0xe] * uVar1 >>
                     0xf);
LAB_14001059d:
  param_2[2] = (char)(param_1[8] * uVar3 + param_1[9] * uVar2 + 0x4000 + param_1[10] * uVar1 >> 0xf)
  ;
LAB_1400105d6:
  param_2[1] = (char)(param_1[4] * uVar3 + param_1[5] * uVar2 + 0x4000 + param_1[6] * uVar1 >> 0xf);
LAB_14001060d:
  *param_2 = (char)(uVar3 * *param_1 + uVar2 * param_1[1] + uVar1 * param_1[2] + 0x4000 >> 0xf);
switchD_1400104b2_default:
  return;
}


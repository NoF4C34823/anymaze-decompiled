
void FUN_140727369(ulonglong param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong in_RDX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar7;
  ulonglong uVar8;
  float in_XMM0_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float in_XMM5_Db;
  
  if (in_RDX + 1U <= param_1) {
    param_1 = param_1 - in_RDX;
    if ((longlong)param_1 < 2) {
      FUN_14072741d();
      return;
    }
    uVar8 = 0;
    uVar6 = param_1 & 0xfffffffffffffffe;
    lVar1 = unaff_RBX + in_RDX * 4;
    lVar7 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar7 + -0x18 + lVar1);
      uVar8 = uVar8 + 2;
      uVar3 = *(undefined8 *)(lVar7 + 0x18 + lVar1);
      uVar4 = *(undefined8 *)(lVar7 + 0xc + lVar1);
      uVar5 = *(undefined8 *)(lVar7 + -0xc + lVar1);
      *(ulonglong *)(lVar7 + unaff_RSI + in_RDX * 4) =
           CONCAT44(((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar3 >> 0x20)) *
                    (float)((ulonglong)param_4 >> 0x20) +
                    ((float)((ulonglong)uVar5 >> 0x20) + (float)((ulonglong)uVar4 >> 0x20)) *
                    (float)((ulonglong)param_3 >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)(lVar7 + lVar1) >> 0x20) * in_XMM5_Db,
                    ((float)uVar2 + (float)uVar3) * (float)param_4 +
                    ((float)uVar5 + (float)uVar4) * (float)param_3 +
                    (float)*(undefined8 *)(lVar7 + lVar1) * in_XMM5_Da);
      lVar7 = lVar7 + 8;
    } while (uVar8 < uVar6);
    if (uVar6 < param_1) {
      lVar1 = unaff_RBX + in_RDX * 4;
      do {
        *(float *)(unaff_RSI + in_RDX * 4 + uVar6 * 4) =
             (*(float *)(lVar1 + -0x18 + uVar6 * 4) + *(float *)(lVar1 + 0x18 + uVar6 * 4)) *
             param_2 + (*(float *)(lVar1 + -0xc + uVar6 * 4) + *(float *)(lVar1 + 0xc + uVar6 * 4))
                       * in_XMM4_Da + *(float *)(lVar1 + uVar6 * 4) * in_XMM0_Da;
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_1);
    }
  }
  return;
}


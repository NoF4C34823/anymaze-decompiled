
void FUN_140630bdc(longlong param_1,undefined8 param_2,ulonglong param_3,float param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  ulonglong uVar12;
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [13];
  undefined8 uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong in_R9;
  longlong in_R10;
  undefined4 *puVar19;
  ulonglong uVar20;
  float in_XMM0_Da;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM2_Da;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  ushort uVar21;
  
  uVar20 = 0;
  puVar19 = (undefined4 *)(in_R9 + param_1);
  uVar18 = param_3 & 0xfffffffffffffffc;
  do {
    uVar2 = *(undefined4 *)((longlong)puVar19 + -2);
    uVar3 = *(undefined4 *)((longlong)puVar19 + 2);
    uVar21 = (ushort)(byte)((uint)uVar2 >> 0x18) + (ushort)(byte)((uint)uVar3 >> 0x18);
    auVar7._12_2_ = uVar21;
    auVar7._0_12_ = ZEXT212(uVar21) << 0x30;
    uVar16 = CONCAT44(auVar7._10_4_,
                      CONCAT22((ushort)(byte)((uint)uVar2 >> 0x10) +
                               (ushort)(byte)((uint)uVar3 >> 0x10),uVar21));
    auVar13._6_8_ = 0;
    auVar13._0_6_ = (uint6)((ulonglong)uVar16 >> 0x10);
    uVar4 = *(undefined4 *)((longlong)puVar19 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar19 + -1);
    uVar21 = (ushort)(byte)((uint)uVar5 >> 0x18) + (ushort)(byte)((uint)uVar4 >> 0x18);
    auVar8._12_2_ = uVar21;
    auVar8._0_12_ = ZEXT212(uVar21) << 0x30;
    uVar17 = CONCAT44(auVar8._10_4_,
                      CONCAT22((ushort)(byte)((uint)uVar5 >> 0x10) +
                               (ushort)(byte)((uint)uVar4 >> 0x10),uVar21));
    auVar14._6_8_ = 0;
    auVar14._0_6_ = (uint6)((ulonglong)uVar17 >> 0x10);
    uVar6 = *puVar19;
    puVar19 = puVar19 + 1;
    uVar12 = (ulonglong)(ushort)uVar6 & 0xffffffffffff00ff;
    auVar9._8_4_ = 0;
    auVar9._0_8_ = uVar12;
    auVar9[0xc] = (char)((uint)uVar6 >> 0x18);
    auVar10[8] = (char)((uint)uVar6 >> 0x10);
    auVar10._0_8_ = uVar12;
    auVar10[9] = 0;
    auVar10._10_3_ = auVar9._10_3_;
    auVar15._5_8_ = 0;
    auVar15._0_5_ = auVar10._8_5_;
    auVar11[4] = (char)((uint)uVar6 >> 8);
    auVar11._0_4_ = (int)uVar12;
    auVar11[5] = 0;
    auVar11._6_7_ = SUB137(auVar15 << 0x40,6);
    pfVar1 = (float *)(in_R10 + param_1 * 4 + uVar20 * 4);
    *pfVar1 = (float)(ushort)(((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff)) * (float)param_2 +
              (float)(ushort)(((ushort)uVar5 & 0xff) + ((ushort)uVar4 & 0xff)) * in_XMM4_Da +
              (float)(int)uVar12 * in_XMM5_Da;
    pfVar1[1] = (float)(int)CONCAT82(SUB148(auVar13 << 0x40,6),
                                     (ushort)(byte)((uint)uVar2 >> 8) +
                                     (ushort)(byte)((uint)uVar3 >> 8)) *
                (float)((ulonglong)param_2 >> 0x20) +
                (float)(int)CONCAT82(SUB148(auVar14 << 0x40,6),
                                     (ushort)(byte)((uint)uVar5 >> 8) +
                                     (ushort)(byte)((uint)uVar4 >> 8)) * in_XMM4_Db +
                (float)auVar11._4_4_ * in_XMM5_Db;
    pfVar1[2] = (float)(int)((ulonglong)uVar16 >> 0x10) * in_XMM1_Dc +
                (float)(int)((ulonglong)uVar17 >> 0x10) * in_XMM4_Dc +
                (float)auVar10._8_4_ * in_XMM5_Dc;
    pfVar1[3] = (float)(auVar7._10_4_ >> 0x10) * in_XMM1_Dd +
                (float)(auVar8._10_4_ >> 0x10) * in_XMM4_Dd +
                (float)(uint3)(auVar9._10_3_ >> 0x10) * in_XMM5_Dd;
    uVar20 = uVar20 + 4;
  } while (uVar20 < uVar18);
  if (uVar18 < param_3) {
    in_R9 = in_R9 + param_1;
    do {
      *(float *)(in_R10 + param_1 * 4 + uVar18 * 4) =
           (float)((uint)*(byte *)((uVar18 - 2) + in_R9) + (uint)*(byte *)(uVar18 + 2 + in_R9)) *
           param_4 + (float)((uint)*(byte *)((uVar18 - 1) + in_R9) +
                            (uint)*(byte *)(uVar18 + 1 + in_R9)) * in_XMM2_Da +
           (float)*(byte *)(uVar18 + in_R9) * in_XMM0_Da;
      uVar18 = uVar18 + 1;
    } while (uVar18 < param_3);
  }
  return;
}


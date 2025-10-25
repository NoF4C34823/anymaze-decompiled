
undefined8 FUN_140a625e4(byte *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  short *psVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  unkuint9 Var36;
  undefined1 auVar37 [11];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  unkuint9 Var40;
  undefined1 auVar41 [11];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  int iVar50;
  longlong in_RAX;
  ulonglong uVar51;
  byte *pbVar52;
  int iVar53;
  int iVar54;
  longlong lVar55;
  ulonglong uVar56;
  int in_R10D;
  int iVar57;
  ulonglong uVar58;
  ulonglong *puVar59;
  longlong lVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  longlong lStack0000000000000098;
  int iStack00000000000000a0;
  int iStack00000000000000a8;
  longlong lStack00000000000000b0;
  longlong lStack00000000000000b8;
  undefined4 in_stack_000000f0;
  int iStack00000000000000f8;
  int iStack00000000000000fc;
  undefined4 in_stack_00000100;
  byte in_stack_00000108;
  
  iStack00000000000000a8 = in_R10D + -5;
  uVar58 = (longlong)iStack00000000000000f8 - 4;
  lStack0000000000000098 = (longlong)iStack00000000000000f8 + -2;
  iStack00000000000000a0 = (int)uVar58;
  lStack00000000000000b0 = param_4;
  lStack00000000000000b8 = in_RAX;
  do {
    uStack0000000000000028 = in_stack_00000100;
    uStack0000000000000030 = (uint)in_stack_00000108;
    iVar50 = FUN_140a5f4c0(param_1,lStack00000000000000b8,iStack00000000000000f8,5,in_stack_000000f0
                          );
    iVar53 = 0;
    uVar51 = 0;
    if (0 < iStack00000000000000f8) {
      do {
        iVar53 = (int)uVar51 + 1;
        *(ushort *)(*(longlong *)(param_2 + param_3 * 8) + uVar51 * 2) =
             ((ushort)*(byte *)(uVar51 + 1 + lStack00000000000000b8) -
             (ushort)*(byte *)(uVar51 + 3 + lStack00000000000000b8)) * 2 +
             ((ushort)*(byte *)(uVar51 + lStack00000000000000b8) -
             (ushort)*(byte *)(uVar51 + 4 + lStack00000000000000b8));
        uVar51 = uVar51 + 1;
        if ((ulonglong)(longlong)iStack00000000000000f8 <= uVar51) break;
      } while ((longlong)uVar51 < 2);
    }
    lVar60 = (longlong)iVar53;
    if (-1 < iStack00000000000000a8) {
      if ((longlong)uVar58 < 8) {
LAB_140a6299e:
        iVar57 = 0;
        iVar54 = iVar53;
      }
      else {
        lVar55 = lVar60 * 2;
        uVar56 = *(longlong *)(param_2 + param_3 * 8) + lVar55;
        uVar51 = uVar56 & 0xf;
        if ((int)uVar51 != 0) {
          if ((uVar56 & 1) != 0) goto LAB_140a6299e;
          uVar51 = (ulonglong)(0x10U - (int)uVar51 >> 1);
        }
        if ((longlong)uVar58 < (longlong)(uVar51 + 8)) goto LAB_140a6299e;
        uVar56 = 0;
        iVar57 = iStack00000000000000a0 - (iStack00000000000000a0 - (int)uVar51 & 7U);
        pbVar52 = param_1;
        if ((int)uVar51 != 0) {
          do {
            *(ushort *)(*(longlong *)(param_2 + param_3 * 8) + lVar55 + uVar56 * 2) =
                 ((ushort)pbVar52[1] - (ushort)pbVar52[3]) * 2 +
                 ((ushort)*pbVar52 - (ushort)pbVar52[4]);
            uVar56 = uVar56 + 1;
            pbVar52 = pbVar52 + 1;
          } while (uVar56 < uVar51);
        }
        puVar59 = (ulonglong *)(param_1 + uVar51);
        do {
          uVar56 = *(ulonglong *)((longlong)puVar59 + 1);
          uVar5 = *puVar59;
          uVar6 = *(ulonglong *)((longlong)puVar59 + 3);
          auVar11._8_6_ = 0;
          auVar11._0_8_ = uVar56;
          auVar11[0xe] = (char)(uVar56 >> 0x38);
          auVar15._8_4_ = 0;
          auVar15._0_8_ = uVar56;
          auVar15[0xc] = (char)(uVar56 >> 0x30);
          auVar15._13_2_ = auVar11._13_2_;
          auVar19._8_4_ = 0;
          auVar19._0_8_ = uVar56;
          auVar19._12_3_ = auVar15._12_3_;
          auVar23._8_2_ = 0;
          auVar23._0_8_ = uVar56;
          auVar23[10] = (char)(uVar56 >> 0x28);
          auVar23._11_4_ = auVar19._11_4_;
          auVar27._8_2_ = 0;
          auVar27._0_8_ = uVar56;
          auVar27._10_5_ = auVar23._10_5_;
          auVar31[8] = (char)(uVar56 >> 0x20);
          auVar31._0_8_ = uVar56;
          auVar31._9_6_ = auVar27._9_6_;
          auVar34._7_8_ = 0;
          auVar34._0_7_ = auVar31._8_7_;
          auVar42._1_8_ = SUB158(auVar34 << 0x40,7);
          auVar42[0] = (char)(uVar56 >> 0x18);
          auVar42._9_6_ = 0;
          auVar43._1_10_ = SUB1510(auVar42 << 0x30,5);
          auVar43[0] = (char)(uVar56 >> 0x10);
          auVar43._11_4_ = 0;
          auVar61._3_12_ = SUB1512(auVar43 << 0x20,3);
          auVar61[2] = (char)(uVar56 >> 8);
          auVar61[0] = (byte)uVar56;
          auVar61[1] = 0;
          auVar61[0xf] = 0;
          auVar61 = psllw(auVar61,1);
          auVar8._8_6_ = 0;
          auVar8._0_8_ = uVar5;
          auVar8[0xe] = (char)(uVar5 >> 0x38);
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar5;
          auVar12[0xc] = (char)(uVar5 >> 0x30);
          auVar12._13_2_ = auVar8._13_2_;
          auVar16._8_4_ = 0;
          auVar16._0_8_ = uVar5;
          auVar16._12_3_ = auVar12._12_3_;
          auVar20._8_2_ = 0;
          auVar20._0_8_ = uVar5;
          auVar20[10] = (char)(uVar5 >> 0x28);
          auVar20._11_4_ = auVar16._11_4_;
          auVar24._8_2_ = 0;
          auVar24._0_8_ = uVar5;
          auVar24._10_5_ = auVar20._10_5_;
          auVar28[8] = (char)(uVar5 >> 0x20);
          auVar28._0_8_ = uVar5;
          auVar28._9_6_ = auVar24._9_6_;
          auVar35._7_8_ = 0;
          auVar35._0_7_ = auVar28._8_7_;
          Var36 = CONCAT81(SUB158(auVar35 << 0x40,7),(char)(uVar5 >> 0x18));
          auVar44._9_6_ = 0;
          auVar44._0_9_ = Var36;
          auVar37._1_10_ = SUB1510(auVar44 << 0x30,5);
          auVar37[0] = (char)(uVar5 >> 0x10);
          auVar45._11_4_ = 0;
          auVar45._0_11_ = auVar37;
          auVar32[2] = (char)(uVar5 >> 8);
          auVar32._0_2_ = (ushort)uVar5;
          auVar32._3_12_ = SUB1512(auVar45 << 0x20,3);
          auVar9._8_6_ = 0;
          auVar9._0_8_ = uVar6;
          auVar9[0xe] = (char)(uVar6 >> 0x38);
          auVar13._8_4_ = 0;
          auVar13._0_8_ = uVar6;
          auVar13[0xc] = (char)(uVar6 >> 0x30);
          auVar13._13_2_ = auVar9._13_2_;
          auVar17._8_4_ = 0;
          auVar17._0_8_ = uVar6;
          auVar17._12_3_ = auVar13._12_3_;
          auVar21._8_2_ = 0;
          auVar21._0_8_ = uVar6;
          auVar21[10] = (char)(uVar6 >> 0x28);
          auVar21._11_4_ = auVar17._11_4_;
          auVar25._8_2_ = 0;
          auVar25._0_8_ = uVar6;
          auVar25._10_5_ = auVar21._10_5_;
          auVar29[8] = (char)(uVar6 >> 0x20);
          auVar29._0_8_ = uVar6;
          auVar29._9_6_ = auVar25._9_6_;
          auVar38._7_8_ = 0;
          auVar38._0_7_ = auVar29._8_7_;
          auVar46._1_8_ = SUB158(auVar38 << 0x40,7);
          auVar46[0] = (char)(uVar6 >> 0x18);
          auVar46._9_6_ = 0;
          auVar47._1_10_ = SUB1510(auVar46 << 0x30,5);
          auVar47[0] = (char)(uVar6 >> 0x10);
          auVar47._11_4_ = 0;
          auVar62._3_12_ = SUB1512(auVar47 << 0x20,3);
          auVar62[2] = (char)(uVar6 >> 8);
          auVar62[0] = (byte)uVar6;
          auVar62[1] = 0;
          auVar62[0xf] = 0;
          uVar56 = *(ulonglong *)((longlong)puVar59 + 4);
          auVar62 = psllw(auVar62,1);
          auVar10._8_6_ = 0;
          auVar10._0_8_ = uVar56;
          auVar10[0xe] = (char)(uVar56 >> 0x38);
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar56;
          auVar14[0xc] = (char)(uVar56 >> 0x30);
          auVar14._13_2_ = auVar10._13_2_;
          auVar18._8_4_ = 0;
          auVar18._0_8_ = uVar56;
          auVar18._12_3_ = auVar14._12_3_;
          auVar22._8_2_ = 0;
          auVar22._0_8_ = uVar56;
          auVar22[10] = (char)(uVar56 >> 0x28);
          auVar22._11_4_ = auVar18._11_4_;
          auVar26._8_2_ = 0;
          auVar26._0_8_ = uVar56;
          auVar26._10_5_ = auVar22._10_5_;
          auVar30[8] = (char)(uVar56 >> 0x20);
          auVar30._0_8_ = uVar56;
          auVar30._9_6_ = auVar26._9_6_;
          auVar39._7_8_ = 0;
          auVar39._0_7_ = auVar30._8_7_;
          Var40 = CONCAT81(SUB158(auVar39 << 0x40,7),(char)(uVar56 >> 0x18));
          auVar48._9_6_ = 0;
          auVar48._0_9_ = Var40;
          auVar41._1_10_ = SUB1510(auVar48 << 0x30,5);
          auVar41[0] = (char)(uVar56 >> 0x10);
          auVar49._11_4_ = 0;
          auVar49._0_11_ = auVar41;
          auVar33[2] = (char)(uVar56 >> 8);
          auVar33._0_2_ = (ushort)uVar56;
          auVar33._3_12_ = SUB1512(auVar49 << 0x20,3);
          puVar59 = puVar59 + 1;
          psVar4 = (short *)(*(longlong *)(param_2 + param_3 * 8) + lVar55 + uVar51 * 2);
          *psVar4 = ((((ushort)uVar5 & 0xff) + auVar61._0_2_) - auVar62._0_2_) -
                    ((ushort)uVar56 & 0xff);
          psVar4[1] = ((auVar32._2_2_ + auVar61._2_2_) - auVar62._2_2_) - auVar33._2_2_;
          psVar4[2] = ((auVar37._0_2_ + auVar61._4_2_) - auVar62._4_2_) - auVar41._0_2_;
          psVar4[3] = (((short)Var36 + auVar61._6_2_) - auVar62._6_2_) - (short)Var40;
          psVar4[4] = ((auVar28._8_2_ + auVar61._8_2_) - auVar62._8_2_) - auVar30._8_2_;
          psVar4[5] = ((auVar20._10_2_ + auVar61._10_2_) - auVar62._10_2_) - auVar22._10_2_;
          psVar4[6] = ((auVar12._12_2_ + auVar61._12_2_) - auVar62._12_2_) - auVar14._12_2_;
          psVar4[7] = (((auVar8._13_2_ >> 8) + auVar61._14_2_) - auVar62._14_2_) -
                      (auVar10._13_2_ >> 8);
          uVar51 = uVar51 + 8;
        } while (uVar51 < (ulonglong)(longlong)iVar57);
        iVar54 = iVar53 + iVar57;
      }
      uVar51 = (ulonglong)iVar57;
      pbVar52 = param_1 + uVar51;
      if (uVar51 < uVar58) {
        do {
          pbVar1 = pbVar52 + 1;
          pbVar2 = pbVar52 + 3;
          bVar7 = *pbVar52;
          pbVar3 = pbVar52 + 4;
          pbVar52 = pbVar52 + 1;
          *(ushort *)(*(longlong *)(param_2 + param_3 * 8) + lVar60 * 2 + uVar51 * 2) =
               ((ushort)*pbVar1 - (ushort)*pbVar2) * 2 + ((ushort)bVar7 - (ushort)*pbVar3);
          uVar51 = uVar51 + 1;
        } while (uVar51 < uVar58);
        lVar60 = (longlong)((int)uVar51 + iVar53);
      }
      else {
        lVar60 = (longlong)iVar54;
      }
    }
    uVar51 = 0;
    lVar55 = iVar50 + lStack00000000000000b8;
    do {
      if (lStack0000000000000098 <= (longlong)uVar51) break;
      *(ushort *)(*(longlong *)(param_2 + param_3 * 8) + lVar60 * 2 + uVar51 * 2) =
           ((ushort)*(byte *)(uVar51 + 1 + lVar55) - (ushort)*(byte *)(uVar51 + 3 + lVar55)) * 2 +
           ((ushort)*(byte *)(uVar51 + lVar55) - (ushort)*(byte *)(uVar51 + 4 + lVar55));
      uVar51 = uVar51 + 1;
    } while (uVar51 < 2);
    param_3 = param_3 + 1;
    param_1 = param_1 + lStack00000000000000b0;
    if ((ulonglong)(longlong)iStack00000000000000fc <= param_3) {
      return 0;
    }
  } while( true );
}


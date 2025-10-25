
undefined8 FUN_140a65ae0(byte *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  short *psVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
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
  unkuint9 Var27;
  undefined1 auVar28 [11];
  undefined1 auVar29 [15];
  unkuint9 Var30;
  undefined1 auVar31 [11];
  undefined1 auVar32 [13];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  int in_EAX;
  int iVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  int iVar43;
  ulonglong in_R10;
  ulonglong *puVar44;
  byte *pbVar45;
  int iVar46;
  int iVar47;
  longlong lVar48;
  longlong lVar49;
  undefined1 auVar50 [16];
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  longlong lStack0000000000000090;
  ulonglong uStack0000000000000098;
  int iStack00000000000000a0;
  int iStack00000000000000a8;
  int iStack00000000000000b0;
  longlong lStack00000000000000b8;
  longlong lStack00000000000000c0;
  int in_stack_00000100;
  int iStack0000000000000108;
  int iStack000000000000010c;
  undefined4 in_stack_00000110;
  byte in_stack_00000118;
  
  iStack00000000000000a8 = in_EAX + -5;
  iStack00000000000000b0 = 5 - (in_stack_00000100 + 1);
  lStack0000000000000090 = (longlong)iStack0000000000000108 - (longlong)in_stack_00000100;
  uVar40 = (longlong)iStack0000000000000108 - 4;
  uStack0000000000000098 = 4 - (longlong)in_stack_00000100;
  iStack00000000000000a0 = (int)uVar40;
  lStack00000000000000b8 = param_4;
  lStack00000000000000c0 = param_3;
  do {
    uStack0000000000000028 = in_stack_00000110;
    uStack0000000000000030 = (uint)in_stack_00000118;
    iVar39 = FUN_140a629c0(param_1,lStack00000000000000c0,iStack0000000000000108,5,in_stack_00000100
                          );
    iVar46 = 0;
    if (0 < iStack0000000000000108) {
      uVar41 = 0;
      do {
        if ((longlong)in_stack_00000100 <= (longlong)uVar41) break;
        *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + uVar41 * 2) =
             (ushort)*(byte *)(uVar41 + lStack00000000000000c0) +
             (ushort)*(byte *)(uVar41 + 2 + lStack00000000000000c0) * -2 +
             (ushort)*(byte *)(uVar41 + 4 + lStack00000000000000c0);
        uVar42 = uVar41 + 1;
        iVar46 = (int)uVar41 + 1;
        uVar41 = uVar42;
      } while (uVar42 < (ulonglong)(longlong)iStack0000000000000108);
    }
    lVar49 = (longlong)iVar46;
    if (-1 < iStack00000000000000a8) {
      if ((longlong)uVar40 < 8) {
LAB_140a65eaf:
        iVar43 = 0;
        iVar47 = iVar46;
      }
      else {
        lVar48 = lVar49 * 2;
        uVar42 = *(longlong *)(param_2 + in_R10 * 8) + lVar48;
        uVar41 = uVar42 & 0xf;
        if ((int)uVar41 != 0) {
          if ((uVar42 & 1) != 0) goto LAB_140a65eaf;
          uVar41 = (ulonglong)(0x10U - (int)uVar41 >> 1);
        }
        if ((longlong)uVar40 < (longlong)(uVar41 + 8)) goto LAB_140a65eaf;
        uVar42 = 0;
        iVar43 = iStack00000000000000a0 - (iStack00000000000000a0 - (int)uVar41 & 7U);
        pbVar45 = param_1;
        if ((int)uVar41 != 0) {
          do {
            *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar48 + uVar42 * 2) =
                 (ushort)*pbVar45 + (ushort)pbVar45[2] * -2 + (ushort)pbVar45[4];
            uVar42 = uVar42 + 1;
            pbVar45 = pbVar45 + 1;
          } while (uVar42 < uVar41);
        }
        puVar44 = (ulonglong *)(param_1 + uVar41);
        do {
          uVar42 = *(ulonglong *)((longlong)puVar44 + 2);
          uVar4 = *puVar44;
          auVar8._8_6_ = 0;
          auVar8._0_8_ = uVar42;
          auVar8[0xe] = (char)(uVar42 >> 0x38);
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar42;
          auVar11[0xc] = (char)(uVar42 >> 0x30);
          auVar11._13_2_ = auVar8._13_2_;
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar42;
          auVar14._12_3_ = auVar11._12_3_;
          auVar17._8_2_ = 0;
          auVar17._0_8_ = uVar42;
          auVar17[10] = (char)(uVar42 >> 0x28);
          auVar17._11_4_ = auVar14._11_4_;
          auVar20._8_2_ = 0;
          auVar20._0_8_ = uVar42;
          auVar20._10_5_ = auVar17._10_5_;
          auVar23[8] = (char)(uVar42 >> 0x20);
          auVar23._0_8_ = uVar42;
          auVar23._9_6_ = auVar20._9_6_;
          auVar25._7_8_ = 0;
          auVar25._0_7_ = auVar23._8_7_;
          auVar33._1_8_ = SUB158(auVar25 << 0x40,7);
          auVar33[0] = (char)(uVar42 >> 0x18);
          auVar33._9_6_ = 0;
          auVar34._1_10_ = SUB1510(auVar33 << 0x30,5);
          auVar34[0] = (char)(uVar42 >> 0x10);
          auVar34._11_4_ = 0;
          auVar50._3_12_ = SUB1512(auVar34 << 0x20,3);
          auVar50[2] = (char)(uVar42 >> 8);
          auVar50[0] = (byte)uVar42;
          auVar50[1] = 0;
          auVar50[0xf] = 0;
          uVar42 = *(ulonglong *)((longlong)puVar44 + 4);
          auVar50 = psllw(auVar50,1);
          auVar6._8_6_ = 0;
          auVar6._0_8_ = uVar4;
          auVar6[0xe] = (char)(uVar4 >> 0x38);
          auVar9._8_4_ = 0;
          auVar9._0_8_ = uVar4;
          auVar9[0xc] = (char)(uVar4 >> 0x30);
          auVar9._13_2_ = auVar6._13_2_;
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar4;
          auVar12._12_3_ = auVar9._12_3_;
          auVar15._8_2_ = 0;
          auVar15._0_8_ = uVar4;
          auVar15[10] = (char)(uVar4 >> 0x28);
          auVar15._11_4_ = auVar12._11_4_;
          auVar18._8_2_ = 0;
          auVar18._0_8_ = uVar4;
          auVar18._10_5_ = auVar15._10_5_;
          auVar21[8] = (char)(uVar4 >> 0x20);
          auVar21._0_8_ = uVar4;
          auVar21._9_6_ = auVar18._9_6_;
          auVar26._7_8_ = 0;
          auVar26._0_7_ = auVar21._8_7_;
          Var27 = CONCAT81(SUB158(auVar26 << 0x40,7),(char)(uVar4 >> 0x18));
          auVar35._9_6_ = 0;
          auVar35._0_9_ = Var27;
          auVar28._1_10_ = SUB1510(auVar35 << 0x30,5);
          auVar28[0] = (char)(uVar4 >> 0x10);
          auVar36._11_4_ = 0;
          auVar36._0_11_ = auVar28;
          auVar24[2] = (char)(uVar4 >> 8);
          auVar24._0_2_ = (ushort)uVar4;
          auVar24._3_12_ = SUB1512(auVar36 << 0x20,3);
          puVar44 = puVar44 + 1;
          auVar7._8_6_ = 0;
          auVar7._0_8_ = uVar42;
          auVar7[0xe] = (char)(uVar42 >> 0x38);
          auVar10._8_4_ = 0;
          auVar10._0_8_ = uVar42;
          auVar10[0xc] = (char)(uVar42 >> 0x30);
          auVar10._13_2_ = auVar7._13_2_;
          auVar13._8_4_ = 0;
          auVar13._0_8_ = uVar42;
          auVar13._12_3_ = auVar10._12_3_;
          auVar16._8_2_ = 0;
          auVar16._0_8_ = uVar42;
          auVar16[10] = (char)(uVar42 >> 0x28);
          auVar16._11_4_ = auVar13._11_4_;
          auVar19._8_2_ = 0;
          auVar19._0_8_ = uVar42;
          auVar19._10_5_ = auVar16._10_5_;
          auVar22[8] = (char)(uVar42 >> 0x20);
          auVar22._0_8_ = uVar42;
          auVar22._9_6_ = auVar19._9_6_;
          auVar29._7_8_ = 0;
          auVar29._0_7_ = auVar22._8_7_;
          Var30 = CONCAT81(SUB158(auVar29 << 0x40,7),(char)(uVar42 >> 0x18));
          auVar37._9_6_ = 0;
          auVar37._0_9_ = Var30;
          auVar31._1_10_ = SUB1510(auVar37 << 0x30,5);
          auVar31[0] = (char)(uVar42 >> 0x10);
          auVar38._11_4_ = 0;
          auVar38._0_11_ = auVar31;
          auVar32._1_12_ = SUB1512(auVar38 << 0x20,3);
          auVar32[0] = (char)(uVar42 >> 8);
          psVar3 = (short *)(*(longlong *)(param_2 + in_R10 * 8) + lVar48 + uVar41 * 2);
          *psVar3 = (((ushort)uVar4 & 0xff) - auVar50._0_2_) + (ushort)(byte)uVar42;
          psVar3[1] = (auVar24._2_2_ - auVar50._2_2_) + auVar32._0_2_;
          psVar3[2] = (auVar28._0_2_ - auVar50._4_2_) + auVar31._0_2_;
          psVar3[3] = ((short)Var27 - auVar50._6_2_) + (short)Var30;
          psVar3[4] = (auVar21._8_2_ - auVar50._8_2_) + auVar22._8_2_;
          psVar3[5] = (auVar15._10_2_ - auVar50._10_2_) + auVar16._10_2_;
          psVar3[6] = (auVar9._12_2_ - auVar50._12_2_) + auVar10._12_2_;
          psVar3[7] = ((auVar6._13_2_ >> 8) - auVar50._14_2_) + (auVar7._13_2_ >> 8);
          uVar41 = uVar41 + 8;
        } while (uVar41 < (ulonglong)(longlong)iVar43);
        iVar47 = iVar46 + iVar43;
      }
      uVar41 = (ulonglong)iVar43;
      pbVar45 = param_1 + uVar41;
      if (uVar41 < uVar40) {
        do {
          pbVar1 = pbVar45 + 2;
          bVar5 = *pbVar45;
          pbVar2 = pbVar45 + 4;
          pbVar45 = pbVar45 + 1;
          *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar49 * 2 + uVar41 * 2) =
               (ushort)bVar5 + (ushort)*pbVar1 * -2 + (ushort)*pbVar2;
          uVar41 = uVar41 + 1;
        } while (uVar41 < uVar40);
        lVar49 = (longlong)((int)uVar41 + iVar46);
      }
      else {
        lVar49 = (longlong)iVar47;
      }
    }
    uVar41 = 0;
    if (0 < iStack00000000000000b0) {
      lVar48 = iVar39 + lStack00000000000000c0;
      do {
        if (lStack0000000000000090 <= (longlong)uVar41) break;
        *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar49 * 2 + uVar41 * 2) =
             (ushort)*(byte *)(uVar41 + lVar48) + (ushort)*(byte *)(uVar41 + 2 + lVar48) * -2 +
             (ushort)*(byte *)(uVar41 + 4 + lVar48);
        uVar41 = uVar41 + 1;
      } while (uVar41 < uStack0000000000000098);
    }
    in_R10 = in_R10 + 1;
    param_1 = param_1 + lStack00000000000000b8;
    if ((ulonglong)(longlong)iStack000000000000010c <= in_R10) {
      return 0;
    }
  } while( true );
}


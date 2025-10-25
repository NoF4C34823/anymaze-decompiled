
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a68fe0(byte *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  short *psVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
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
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  unkuint9 Var43;
  undefined1 auVar44 [11];
  undefined1 auVar45 [13];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  unkuint9 Var48;
  undefined1 auVar49 [11];
  undefined1 auVar50 [13];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  unkuint9 Var53;
  undefined1 auVar54 [11];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  int in_EAX;
  int iVar73;
  longlong lVar74;
  int iVar75;
  int iVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  int iVar79;
  ulonglong in_R10;
  ulonglong uVar80;
  byte *pbVar81;
  ulonglong *puVar82;
  longlong lVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  longlong lStack00000000000000a0;
  ulonglong uStack00000000000000a8;
  int iStack00000000000000b0;
  int iStack00000000000000b8;
  int iStack00000000000000c0;
  longlong lStack00000000000000c8;
  longlong lStack00000000000000d0;
  int in_stack_00000110;
  int iStack0000000000000118;
  int iStack000000000000011c;
  undefined4 in_stack_00000120;
  byte in_stack_00000128;
  
  sVar72 = _UNK_14308eeee;
  sVar71 = _UNK_14308eeec;
  sVar70 = _UNK_14308eeea;
  sVar69 = _UNK_14308eee8;
  sVar68 = _UNK_14308eee6;
  sVar67 = _UNK_14308eee4;
  sVar66 = _UNK_14308eee2;
  sVar65 = _DAT_14308eee0;
  iStack00000000000000b8 = in_EAX + -5;
  iStack00000000000000c0 = 5 - (in_stack_00000110 + 1);
  lStack00000000000000a0 = (longlong)iStack0000000000000118 - (longlong)in_stack_00000110;
  uVar77 = (longlong)iStack0000000000000118 - 4;
  uStack00000000000000a8 = 4 - (longlong)in_stack_00000110;
  iStack00000000000000b0 = (int)uVar77;
  lStack00000000000000c8 = param_4;
  lStack00000000000000d0 = param_3;
  do {
    uStack0000000000000028 = in_stack_00000120;
    uStack0000000000000030 = (uint)in_stack_00000128;
    iVar73 = FUN_140a65ec0(param_1,lStack00000000000000d0,iStack0000000000000118,5,in_stack_00000110
                          );
    iVar75 = 0;
    uVar80 = 0;
    if (0 < iStack0000000000000118) {
      do {
        if ((longlong)in_stack_00000110 <= (longlong)uVar80) break;
        bVar7 = *(byte *)(uVar80 + 2 + lStack00000000000000d0);
        iVar75 = (int)uVar80 + 1;
        *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + uVar80 * 2) =
             ((ushort)*(byte *)(uVar80 + 1 + lStack00000000000000d0) +
             (ushort)*(byte *)(uVar80 + 3 + lStack00000000000000d0)) * 4 +
             (ushort)*(byte *)(uVar80 + lStack00000000000000d0) +
             (ushort)bVar7 * 4 + (ushort)bVar7 * 2 +
             (ushort)*(byte *)(uVar80 + 4 + lStack00000000000000d0);
        uVar80 = uVar80 + 1;
      } while (uVar80 < (ulonglong)(longlong)iStack0000000000000118);
    }
    lVar83 = (longlong)iVar75;
    if (-1 < iStack00000000000000b8) {
      if ((longlong)uVar77 < 8) {
LAB_140a6947b:
        iVar79 = 0;
        iVar76 = iVar75;
      }
      else {
        lVar74 = lVar83 * 2;
        uVar78 = *(longlong *)(param_2 + in_R10 * 8) + lVar74;
        uVar80 = uVar78 & 0xf;
        if ((int)uVar80 != 0) {
          if ((uVar78 & 1) != 0) goto LAB_140a6947b;
          uVar80 = (ulonglong)(0x10U - (int)uVar80 >> 1);
        }
        if ((longlong)uVar77 < (longlong)(uVar80 + 8)) goto LAB_140a6947b;
        uVar78 = 0;
        iVar79 = iStack00000000000000b0 - (iStack00000000000000b0 - (int)uVar80 & 7U);
        pbVar81 = param_1;
        if ((int)uVar80 != 0) {
          do {
            *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar74 + uVar78 * 2) =
                 ((ushort)pbVar81[1] + (ushort)pbVar81[3]) * 4 +
                 (ushort)*pbVar81 + ((ushort)pbVar81[2] * 2 + (ushort)pbVar81[2]) * 2 +
                 (ushort)pbVar81[4];
            uVar78 = uVar78 + 1;
            pbVar81 = pbVar81 + 1;
          } while (uVar78 < uVar80);
        }
        puVar82 = (ulonglong *)(param_1 + uVar80);
        do {
          uVar78 = *(ulonglong *)((longlong)puVar82 + 2);
          auVar13._8_6_ = 0;
          auVar13._0_8_ = uVar78;
          auVar13[0xe] = (char)(uVar78 >> 0x38);
          auVar18._8_4_ = 0;
          auVar18._0_8_ = uVar78;
          auVar18[0xc] = (char)(uVar78 >> 0x30);
          auVar18._13_2_ = auVar13._13_2_;
          auVar23._8_4_ = 0;
          auVar23._0_8_ = uVar78;
          auVar23._12_3_ = auVar18._12_3_;
          auVar28._8_2_ = 0;
          auVar28._0_8_ = uVar78;
          auVar28[10] = (char)(uVar78 >> 0x28);
          auVar28._11_4_ = auVar23._11_4_;
          auVar33._8_2_ = 0;
          auVar33._0_8_ = uVar78;
          auVar33._10_5_ = auVar28._10_5_;
          auVar38[8] = (char)(uVar78 >> 0x20);
          auVar38._0_8_ = uVar78;
          auVar38._9_6_ = auVar33._9_6_;
          auVar42._7_8_ = 0;
          auVar42._0_7_ = auVar38._8_7_;
          Var43 = CONCAT81(SUB158(auVar42 << 0x40,7),(char)(uVar78 >> 0x18));
          auVar55._9_6_ = 0;
          auVar55._0_9_ = Var43;
          auVar44._1_10_ = SUB1510(auVar55 << 0x30,5);
          auVar44[0] = (char)(uVar78 >> 0x10);
          auVar56._11_4_ = 0;
          auVar56._0_11_ = auVar44;
          auVar45._1_12_ = SUB1512(auVar56 << 0x20,3);
          auVar45[0] = (char)(uVar78 >> 8);
          uVar5 = *(ulonglong *)((longlong)puVar82 + 1);
          uVar6 = *puVar82;
          auVar9._8_6_ = 0;
          auVar9._0_8_ = uVar5;
          auVar9[0xe] = (char)(uVar5 >> 0x38);
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar5;
          auVar14[0xc] = (char)(uVar5 >> 0x30);
          auVar14._13_2_ = auVar9._13_2_;
          auVar19._8_4_ = 0;
          auVar19._0_8_ = uVar5;
          auVar19._12_3_ = auVar14._12_3_;
          auVar24._8_2_ = 0;
          auVar24._0_8_ = uVar5;
          auVar24[10] = (char)(uVar5 >> 0x28);
          auVar24._11_4_ = auVar19._11_4_;
          auVar29._8_2_ = 0;
          auVar29._0_8_ = uVar5;
          auVar29._10_5_ = auVar24._10_5_;
          auVar34[8] = (char)(uVar5 >> 0x20);
          auVar34._0_8_ = uVar5;
          auVar34._9_6_ = auVar29._9_6_;
          auVar46._7_8_ = 0;
          auVar46._0_7_ = auVar34._8_7_;
          auVar57._1_8_ = SUB158(auVar46 << 0x40,7);
          auVar57[0] = (char)(uVar5 >> 0x18);
          auVar57._9_6_ = 0;
          auVar58._1_10_ = SUB1510(auVar57 << 0x30,5);
          auVar58[0] = (char)(uVar5 >> 0x10);
          auVar58._11_4_ = 0;
          auVar39[2] = (char)(uVar5 >> 8);
          auVar39._0_2_ = (ushort)uVar5;
          auVar39._3_12_ = SUB1512(auVar58 << 0x20,3);
          auVar84._0_2_ = (ushort)uVar5 & 0xff;
          auVar84._2_13_ = auVar39._2_13_;
          auVar84[0xf] = 0;
          uVar5 = *(ulonglong *)((longlong)puVar82 + 3);
          auVar84 = psllw(auVar84,2);
          auVar10._8_6_ = 0;
          auVar10._0_8_ = uVar6;
          auVar10[0xe] = (char)(uVar6 >> 0x38);
          auVar15._8_4_ = 0;
          auVar15._0_8_ = uVar6;
          auVar15[0xc] = (char)(uVar6 >> 0x30);
          auVar15._13_2_ = auVar10._13_2_;
          auVar20._8_4_ = 0;
          auVar20._0_8_ = uVar6;
          auVar20._12_3_ = auVar15._12_3_;
          auVar25._8_2_ = 0;
          auVar25._0_8_ = uVar6;
          auVar25[10] = (char)(uVar6 >> 0x28);
          auVar25._11_4_ = auVar20._11_4_;
          auVar30._8_2_ = 0;
          auVar30._0_8_ = uVar6;
          auVar30._10_5_ = auVar25._10_5_;
          auVar35[8] = (char)(uVar6 >> 0x20);
          auVar35._0_8_ = uVar6;
          auVar35._9_6_ = auVar30._9_6_;
          auVar47._7_8_ = 0;
          auVar47._0_7_ = auVar35._8_7_;
          Var48 = CONCAT81(SUB158(auVar47 << 0x40,7),(char)(uVar6 >> 0x18));
          auVar59._9_6_ = 0;
          auVar59._0_9_ = Var48;
          auVar49._1_10_ = SUB1510(auVar59 << 0x30,5);
          auVar49[0] = (char)(uVar6 >> 0x10);
          auVar60._11_4_ = 0;
          auVar60._0_11_ = auVar49;
          auVar50._1_12_ = SUB1512(auVar60 << 0x20,3);
          auVar50[0] = (char)(uVar6 >> 8);
          auVar11._8_6_ = 0;
          auVar11._0_8_ = uVar5;
          auVar11[0xe] = (char)(uVar5 >> 0x38);
          auVar16._8_4_ = 0;
          auVar16._0_8_ = uVar5;
          auVar16[0xc] = (char)(uVar5 >> 0x30);
          auVar16._13_2_ = auVar11._13_2_;
          auVar21._8_4_ = 0;
          auVar21._0_8_ = uVar5;
          auVar21._12_3_ = auVar16._12_3_;
          auVar26._8_2_ = 0;
          auVar26._0_8_ = uVar5;
          auVar26[10] = (char)(uVar5 >> 0x28);
          auVar26._11_4_ = auVar21._11_4_;
          auVar31._8_2_ = 0;
          auVar31._0_8_ = uVar5;
          auVar31._10_5_ = auVar26._10_5_;
          auVar36[8] = (char)(uVar5 >> 0x20);
          auVar36._0_8_ = uVar5;
          auVar36._9_6_ = auVar31._9_6_;
          auVar51._7_8_ = 0;
          auVar51._0_7_ = auVar36._8_7_;
          auVar61._1_8_ = SUB158(auVar51 << 0x40,7);
          auVar61[0] = (char)(uVar5 >> 0x18);
          auVar61._9_6_ = 0;
          auVar62._1_10_ = SUB1510(auVar61 << 0x30,5);
          auVar62[0] = (char)(uVar5 >> 0x10);
          auVar62._11_4_ = 0;
          auVar40[2] = (char)(uVar5 >> 8);
          auVar40._0_2_ = (ushort)uVar5;
          auVar40._3_12_ = SUB1512(auVar62 << 0x20,3);
          auVar85._0_2_ = (ushort)uVar5 & 0xff;
          auVar85._2_13_ = auVar40._2_13_;
          auVar85[0xf] = 0;
          uVar5 = *(ulonglong *)((longlong)puVar82 + 4);
          auVar85 = psllw(auVar85,2);
          auVar12._8_6_ = 0;
          auVar12._0_8_ = uVar5;
          auVar12[0xe] = (char)(uVar5 >> 0x38);
          auVar17._8_4_ = 0;
          auVar17._0_8_ = uVar5;
          auVar17[0xc] = (char)(uVar5 >> 0x30);
          auVar17._13_2_ = auVar12._13_2_;
          auVar22._8_4_ = 0;
          auVar22._0_8_ = uVar5;
          auVar22._12_3_ = auVar17._12_3_;
          auVar27._8_2_ = 0;
          auVar27._0_8_ = uVar5;
          auVar27[10] = (char)(uVar5 >> 0x28);
          auVar27._11_4_ = auVar22._11_4_;
          auVar32._8_2_ = 0;
          auVar32._0_8_ = uVar5;
          auVar32._10_5_ = auVar27._10_5_;
          auVar37[8] = (char)(uVar5 >> 0x20);
          auVar37._0_8_ = uVar5;
          auVar37._9_6_ = auVar32._9_6_;
          auVar52._7_8_ = 0;
          auVar52._0_7_ = auVar37._8_7_;
          Var53 = CONCAT81(SUB158(auVar52 << 0x40,7),(char)(uVar5 >> 0x18));
          auVar63._9_6_ = 0;
          auVar63._0_9_ = Var53;
          auVar54._1_10_ = SUB1510(auVar63 << 0x30,5);
          auVar54[0] = (char)(uVar5 >> 0x10);
          auVar64._11_4_ = 0;
          auVar64._0_11_ = auVar54;
          auVar41[2] = (char)(uVar5 >> 8);
          auVar41._0_2_ = (ushort)uVar5;
          auVar41._3_12_ = SUB1512(auVar64 << 0x20,3);
          puVar82 = puVar82 + 1;
          psVar4 = (short *)(*(longlong *)(param_2 + in_R10 * 8) + lVar74 + uVar80 * 2);
          *psVar4 = (ushort)(byte)uVar6 + auVar84._0_2_ + (ushort)(byte)uVar78 * sVar65 +
                    auVar85._0_2_ + ((ushort)uVar5 & 0xff);
          psVar4[1] = auVar50._0_2_ + auVar84._2_2_ + auVar45._0_2_ * sVar66 + auVar85._2_2_ +
                      auVar41._2_2_;
          psVar4[2] = auVar49._0_2_ + auVar84._4_2_ + auVar44._0_2_ * sVar67 + auVar85._4_2_ +
                      auVar54._0_2_;
          psVar4[3] = (short)Var48 + auVar84._6_2_ + (short)Var43 * sVar68 + auVar85._6_2_ +
                      (short)Var53;
          psVar4[4] = auVar35._8_2_ + auVar84._8_2_ + auVar38._8_2_ * sVar69 + auVar85._8_2_ +
                      auVar37._8_2_;
          psVar4[5] = auVar25._10_2_ + auVar84._10_2_ + auVar28._10_2_ * sVar70 + auVar85._10_2_ +
                      auVar27._10_2_;
          psVar4[6] = auVar15._12_2_ + auVar84._12_2_ + auVar18._12_2_ * sVar71 + auVar85._12_2_ +
                      auVar17._12_2_;
          psVar4[7] = (auVar10._13_2_ >> 8) + auVar84._14_2_ + (auVar13._13_2_ >> 8) * sVar72 +
                      auVar85._14_2_ + (auVar12._13_2_ >> 8);
          uVar80 = uVar80 + 8;
        } while (uVar80 < (ulonglong)(longlong)iVar79);
        iVar76 = iVar75 + iVar79;
      }
      uVar80 = (ulonglong)iVar79;
      pbVar81 = param_1 + uVar80;
      if (uVar80 < uVar77) {
        do {
          pbVar1 = pbVar81 + 1;
          pbVar2 = pbVar81 + 3;
          bVar7 = pbVar81[2];
          bVar8 = *pbVar81;
          pbVar3 = pbVar81 + 4;
          pbVar81 = pbVar81 + 1;
          *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar83 * 2 + uVar80 * 2) =
               ((ushort)*pbVar1 + (ushort)*pbVar2) * 4 +
               (ushort)bVar8 + ((ushort)bVar7 + (ushort)bVar7) * 2 + (ushort)bVar7 * 2 +
               (ushort)*pbVar3;
          uVar80 = uVar80 + 1;
        } while (uVar80 < uVar77);
        lVar83 = (longlong)((int)uVar80 + iVar75);
      }
      else {
        lVar83 = (longlong)iVar76;
      }
    }
    uVar80 = 0;
    if (0 < iStack00000000000000c0) {
      lVar74 = iVar73 + lStack00000000000000d0;
      do {
        if (lStack00000000000000a0 <= (longlong)uVar80) break;
        bVar7 = *(byte *)(uVar80 + 2 + lVar74);
        *(ushort *)(*(longlong *)(param_2 + in_R10 * 8) + lVar83 * 2 + uVar80 * 2) =
             ((ushort)*(byte *)(uVar80 + 1 + lVar74) + (ushort)*(byte *)(uVar80 + 3 + lVar74)) * 4 +
             (ushort)*(byte *)(uVar80 + lVar74) + (ushort)bVar7 * 4 + (ushort)bVar7 * 2 +
             (ushort)*(byte *)(uVar80 + 4 + lVar74);
        uVar80 = uVar80 + 1;
      } while (uVar80 < uStack00000000000000a8);
    }
    in_R10 = in_R10 + 1;
    param_1 = param_1 + lStack00000000000000c8;
    if ((ulonglong)(longlong)iStack000000000000011c <= in_R10) {
      return 0;
    }
  } while( true );
}


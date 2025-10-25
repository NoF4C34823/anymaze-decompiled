
undefined8
FUN_140a65a00(byte *param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

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
  int iVar39;
  undefined8 uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  int iVar45;
  ulonglong *puVar46;
  byte *pbVar47;
  int iVar48;
  int iVar49;
  longlong lVar50;
  longlong lVar51;
  undefined1 auVar52 [16];
  
  lVar51 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      lVar51 = 1;
      break;
    case 2:
      lVar51 = 2;
      break;
    case 3:
      lVar51 = 3;
      break;
    case 4:
      lVar51 = 4;
    }
    (*(code *)(&PTR_FUN_14308eeb0)[lVar51])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar40 = FUN_140a65e9b();
    return uVar40;
  }
  uVar41 = 0;
  if (0 < param_6._4_4_) {
    uVar42 = (longlong)(int)param_6 - 4;
    do {
      iVar39 = FUN_140a629c0(param_1,param_3,(int)param_6,5,param_5,param_7,param_8);
      iVar48 = 0;
      if (0 < (int)param_6) {
        uVar43 = 0;
        do {
          if ((longlong)param_5 <= (longlong)uVar43) break;
          *(ushort *)(*(longlong *)(param_2 + uVar41 * 8) + uVar43 * 2) =
               (ushort)*(byte *)(uVar43 + param_3) + (ushort)*(byte *)(uVar43 + 2 + param_3) * -2 +
               (ushort)*(byte *)(uVar43 + 4 + param_3);
          uVar44 = uVar43 + 1;
          iVar48 = (int)uVar43 + 1;
          uVar43 = uVar44;
        } while (uVar44 < (ulonglong)(longlong)(int)param_6);
      }
      lVar51 = (longlong)iVar48;
      if (-1 < (int)param_6 + -5) {
        if ((longlong)uVar42 < 8) {
LAB_140a65eaf:
          iVar45 = 0;
          iVar49 = iVar48;
        }
        else {
          lVar50 = lVar51 * 2;
          uVar44 = *(longlong *)(param_2 + uVar41 * 8) + lVar50;
          uVar43 = uVar44 & 0xf;
          if ((int)uVar43 != 0) {
            if ((uVar44 & 1) != 0) goto LAB_140a65eaf;
            uVar43 = (ulonglong)(0x10U - (int)uVar43 >> 1);
          }
          if ((longlong)uVar42 < (longlong)(uVar43 + 8)) goto LAB_140a65eaf;
          uVar44 = 0;
          iVar45 = (int)uVar42 - ((int)uVar42 - (int)uVar43 & 7U);
          pbVar47 = param_1;
          if ((int)uVar43 != 0) {
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar41 * 8) + lVar50 + uVar44 * 2) =
                   (ushort)*pbVar47 + (ushort)pbVar47[2] * -2 + (ushort)pbVar47[4];
              uVar44 = uVar44 + 1;
              pbVar47 = pbVar47 + 1;
            } while (uVar44 < uVar43);
          }
          puVar46 = (ulonglong *)(param_1 + uVar43);
          do {
            uVar44 = *(ulonglong *)((longlong)puVar46 + 2);
            uVar4 = *puVar46;
            auVar8._8_6_ = 0;
            auVar8._0_8_ = uVar44;
            auVar8[0xe] = (char)(uVar44 >> 0x38);
            auVar11._8_4_ = 0;
            auVar11._0_8_ = uVar44;
            auVar11[0xc] = (char)(uVar44 >> 0x30);
            auVar11._13_2_ = auVar8._13_2_;
            auVar14._8_4_ = 0;
            auVar14._0_8_ = uVar44;
            auVar14._12_3_ = auVar11._12_3_;
            auVar17._8_2_ = 0;
            auVar17._0_8_ = uVar44;
            auVar17[10] = (char)(uVar44 >> 0x28);
            auVar17._11_4_ = auVar14._11_4_;
            auVar20._8_2_ = 0;
            auVar20._0_8_ = uVar44;
            auVar20._10_5_ = auVar17._10_5_;
            auVar23[8] = (char)(uVar44 >> 0x20);
            auVar23._0_8_ = uVar44;
            auVar23._9_6_ = auVar20._9_6_;
            auVar25._7_8_ = 0;
            auVar25._0_7_ = auVar23._8_7_;
            auVar33._1_8_ = SUB158(auVar25 << 0x40,7);
            auVar33[0] = (char)(uVar44 >> 0x18);
            auVar33._9_6_ = 0;
            auVar34._1_10_ = SUB1510(auVar33 << 0x30,5);
            auVar34[0] = (char)(uVar44 >> 0x10);
            auVar34._11_4_ = 0;
            auVar52._3_12_ = SUB1512(auVar34 << 0x20,3);
            auVar52[2] = (char)(uVar44 >> 8);
            auVar52[0] = (byte)uVar44;
            auVar52[1] = 0;
            auVar52[0xf] = 0;
            uVar44 = *(ulonglong *)((longlong)puVar46 + 4);
            auVar52 = psllw(auVar52,1);
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
            puVar46 = puVar46 + 1;
            auVar7._8_6_ = 0;
            auVar7._0_8_ = uVar44;
            auVar7[0xe] = (char)(uVar44 >> 0x38);
            auVar10._8_4_ = 0;
            auVar10._0_8_ = uVar44;
            auVar10[0xc] = (char)(uVar44 >> 0x30);
            auVar10._13_2_ = auVar7._13_2_;
            auVar13._8_4_ = 0;
            auVar13._0_8_ = uVar44;
            auVar13._12_3_ = auVar10._12_3_;
            auVar16._8_2_ = 0;
            auVar16._0_8_ = uVar44;
            auVar16[10] = (char)(uVar44 >> 0x28);
            auVar16._11_4_ = auVar13._11_4_;
            auVar19._8_2_ = 0;
            auVar19._0_8_ = uVar44;
            auVar19._10_5_ = auVar16._10_5_;
            auVar22[8] = (char)(uVar44 >> 0x20);
            auVar22._0_8_ = uVar44;
            auVar22._9_6_ = auVar19._9_6_;
            auVar29._7_8_ = 0;
            auVar29._0_7_ = auVar22._8_7_;
            Var30 = CONCAT81(SUB158(auVar29 << 0x40,7),(char)(uVar44 >> 0x18));
            auVar37._9_6_ = 0;
            auVar37._0_9_ = Var30;
            auVar31._1_10_ = SUB1510(auVar37 << 0x30,5);
            auVar31[0] = (char)(uVar44 >> 0x10);
            auVar38._11_4_ = 0;
            auVar38._0_11_ = auVar31;
            auVar32._1_12_ = SUB1512(auVar38 << 0x20,3);
            auVar32[0] = (char)(uVar44 >> 8);
            psVar3 = (short *)(*(longlong *)(param_2 + uVar41 * 8) + lVar50 + uVar43 * 2);
            *psVar3 = (((ushort)uVar4 & 0xff) - auVar52._0_2_) + (ushort)(byte)uVar44;
            psVar3[1] = (auVar24._2_2_ - auVar52._2_2_) + auVar32._0_2_;
            psVar3[2] = (auVar28._0_2_ - auVar52._4_2_) + auVar31._0_2_;
            psVar3[3] = ((short)Var27 - auVar52._6_2_) + (short)Var30;
            psVar3[4] = (auVar21._8_2_ - auVar52._8_2_) + auVar22._8_2_;
            psVar3[5] = (auVar15._10_2_ - auVar52._10_2_) + auVar16._10_2_;
            psVar3[6] = (auVar9._12_2_ - auVar52._12_2_) + auVar10._12_2_;
            psVar3[7] = ((auVar6._13_2_ >> 8) - auVar52._14_2_) + (auVar7._13_2_ >> 8);
            uVar43 = uVar43 + 8;
          } while (uVar43 < (ulonglong)(longlong)iVar45);
          iVar49 = iVar48 + iVar45;
        }
        uVar43 = (ulonglong)iVar45;
        pbVar47 = param_1 + uVar43;
        if (uVar43 < uVar42) {
          do {
            pbVar1 = pbVar47 + 2;
            bVar5 = *pbVar47;
            pbVar2 = pbVar47 + 4;
            pbVar47 = pbVar47 + 1;
            *(ushort *)(*(longlong *)(param_2 + uVar41 * 8) + lVar51 * 2 + uVar43 * 2) =
                 (ushort)bVar5 + (ushort)*pbVar1 * -2 + (ushort)*pbVar2;
            uVar43 = uVar43 + 1;
          } while (uVar43 < uVar42);
          lVar51 = (longlong)((int)uVar43 + iVar48);
        }
        else {
          lVar51 = (longlong)iVar49;
        }
      }
      uVar43 = 0;
      if (0 < 5 - (param_5 + 1)) {
        lVar50 = iVar39 + param_3;
        do {
          if ((longlong)(int)param_6 - (longlong)param_5 <= (longlong)uVar43) break;
          *(ushort *)(*(longlong *)(param_2 + uVar41 * 8) + lVar51 * 2 + uVar43 * 2) =
               (ushort)*(byte *)(uVar43 + lVar50) + (ushort)*(byte *)(uVar43 + 2 + lVar50) * -2 +
               (ushort)*(byte *)(uVar43 + 4 + lVar50);
          uVar43 = uVar43 + 1;
        } while (uVar43 < 4U - (longlong)param_5);
      }
      uVar41 = uVar41 + 1;
      param_1 = param_1 + param_4;
    } while (uVar41 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}



undefined8
FUN_140a62500(byte *param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

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
  undefined8 uVar51;
  ulonglong uVar52;
  byte *pbVar53;
  int iVar54;
  int iVar55;
  longlong lVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  int iVar59;
  ulonglong uVar60;
  ulonglong *puVar61;
  longlong lVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  uVar57 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      uVar57 = 1;
      break;
    case 2:
      uVar57 = 2;
      break;
    case 3:
      uVar57 = 3;
      break;
    case 4:
      uVar57 = 4;
    }
    (*(code *)(&PTR_FUN_14308ee80)[uVar57])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar51 = FUN_140a6298b();
    return uVar51;
  }
  if (0 < param_6._4_4_) {
    uVar60 = (longlong)(int)param_6 - 4;
    do {
      iVar50 = FUN_140a5f4c0(param_1,param_3,(int)param_6,5,param_5,param_7,param_8);
      iVar54 = 0;
      uVar52 = 0;
      if (0 < (int)param_6) {
        do {
          iVar54 = (int)uVar52 + 1;
          *(ushort *)(*(longlong *)(param_2 + uVar57 * 8) + uVar52 * 2) =
               ((ushort)*(byte *)(uVar52 + 1 + param_3) - (ushort)*(byte *)(uVar52 + 3 + param_3)) *
               2 + ((ushort)*(byte *)(uVar52 + param_3) - (ushort)*(byte *)(uVar52 + 4 + param_3));
          uVar52 = uVar52 + 1;
          if ((ulonglong)(longlong)(int)param_6 <= uVar52) break;
        } while ((longlong)uVar52 < 2);
      }
      lVar62 = (longlong)iVar54;
      if (-1 < (int)param_6 + -5) {
        if ((longlong)uVar60 < 8) {
LAB_140a6299e:
          iVar59 = 0;
          iVar55 = iVar54;
        }
        else {
          lVar56 = lVar62 * 2;
          uVar58 = *(longlong *)(param_2 + uVar57 * 8) + lVar56;
          uVar52 = uVar58 & 0xf;
          if ((int)uVar52 != 0) {
            if ((uVar58 & 1) != 0) goto LAB_140a6299e;
            uVar52 = (ulonglong)(0x10U - (int)uVar52 >> 1);
          }
          if ((longlong)uVar60 < (longlong)(uVar52 + 8)) goto LAB_140a6299e;
          uVar58 = 0;
          iVar59 = (int)uVar60 - ((int)uVar60 - (int)uVar52 & 7U);
          pbVar53 = param_1;
          if ((int)uVar52 != 0) {
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar57 * 8) + lVar56 + uVar58 * 2) =
                   ((ushort)pbVar53[1] - (ushort)pbVar53[3]) * 2 +
                   ((ushort)*pbVar53 - (ushort)pbVar53[4]);
              uVar58 = uVar58 + 1;
              pbVar53 = pbVar53 + 1;
            } while (uVar58 < uVar52);
          }
          puVar61 = (ulonglong *)(param_1 + uVar52);
          do {
            uVar58 = *(ulonglong *)((longlong)puVar61 + 1);
            uVar5 = *puVar61;
            uVar6 = *(ulonglong *)((longlong)puVar61 + 3);
            auVar11._8_6_ = 0;
            auVar11._0_8_ = uVar58;
            auVar11[0xe] = (char)(uVar58 >> 0x38);
            auVar15._8_4_ = 0;
            auVar15._0_8_ = uVar58;
            auVar15[0xc] = (char)(uVar58 >> 0x30);
            auVar15._13_2_ = auVar11._13_2_;
            auVar19._8_4_ = 0;
            auVar19._0_8_ = uVar58;
            auVar19._12_3_ = auVar15._12_3_;
            auVar23._8_2_ = 0;
            auVar23._0_8_ = uVar58;
            auVar23[10] = (char)(uVar58 >> 0x28);
            auVar23._11_4_ = auVar19._11_4_;
            auVar27._8_2_ = 0;
            auVar27._0_8_ = uVar58;
            auVar27._10_5_ = auVar23._10_5_;
            auVar31[8] = (char)(uVar58 >> 0x20);
            auVar31._0_8_ = uVar58;
            auVar31._9_6_ = auVar27._9_6_;
            auVar34._7_8_ = 0;
            auVar34._0_7_ = auVar31._8_7_;
            auVar42._1_8_ = SUB158(auVar34 << 0x40,7);
            auVar42[0] = (char)(uVar58 >> 0x18);
            auVar42._9_6_ = 0;
            auVar43._1_10_ = SUB1510(auVar42 << 0x30,5);
            auVar43[0] = (char)(uVar58 >> 0x10);
            auVar43._11_4_ = 0;
            auVar63._3_12_ = SUB1512(auVar43 << 0x20,3);
            auVar63[2] = (char)(uVar58 >> 8);
            auVar63[0] = (byte)uVar58;
            auVar63[1] = 0;
            auVar63[0xf] = 0;
            auVar63 = psllw(auVar63,1);
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
            auVar64._3_12_ = SUB1512(auVar47 << 0x20,3);
            auVar64[2] = (char)(uVar6 >> 8);
            auVar64[0] = (byte)uVar6;
            auVar64[1] = 0;
            auVar64[0xf] = 0;
            uVar58 = *(ulonglong *)((longlong)puVar61 + 4);
            auVar64 = psllw(auVar64,1);
            auVar10._8_6_ = 0;
            auVar10._0_8_ = uVar58;
            auVar10[0xe] = (char)(uVar58 >> 0x38);
            auVar14._8_4_ = 0;
            auVar14._0_8_ = uVar58;
            auVar14[0xc] = (char)(uVar58 >> 0x30);
            auVar14._13_2_ = auVar10._13_2_;
            auVar18._8_4_ = 0;
            auVar18._0_8_ = uVar58;
            auVar18._12_3_ = auVar14._12_3_;
            auVar22._8_2_ = 0;
            auVar22._0_8_ = uVar58;
            auVar22[10] = (char)(uVar58 >> 0x28);
            auVar22._11_4_ = auVar18._11_4_;
            auVar26._8_2_ = 0;
            auVar26._0_8_ = uVar58;
            auVar26._10_5_ = auVar22._10_5_;
            auVar30[8] = (char)(uVar58 >> 0x20);
            auVar30._0_8_ = uVar58;
            auVar30._9_6_ = auVar26._9_6_;
            auVar39._7_8_ = 0;
            auVar39._0_7_ = auVar30._8_7_;
            Var40 = CONCAT81(SUB158(auVar39 << 0x40,7),(char)(uVar58 >> 0x18));
            auVar48._9_6_ = 0;
            auVar48._0_9_ = Var40;
            auVar41._1_10_ = SUB1510(auVar48 << 0x30,5);
            auVar41[0] = (char)(uVar58 >> 0x10);
            auVar49._11_4_ = 0;
            auVar49._0_11_ = auVar41;
            auVar33[2] = (char)(uVar58 >> 8);
            auVar33._0_2_ = (ushort)uVar58;
            auVar33._3_12_ = SUB1512(auVar49 << 0x20,3);
            puVar61 = puVar61 + 1;
            psVar4 = (short *)(*(longlong *)(param_2 + uVar57 * 8) + lVar56 + uVar52 * 2);
            *psVar4 = ((((ushort)uVar5 & 0xff) + auVar63._0_2_) - auVar64._0_2_) -
                      ((ushort)uVar58 & 0xff);
            psVar4[1] = ((auVar32._2_2_ + auVar63._2_2_) - auVar64._2_2_) - auVar33._2_2_;
            psVar4[2] = ((auVar37._0_2_ + auVar63._4_2_) - auVar64._4_2_) - auVar41._0_2_;
            psVar4[3] = (((short)Var36 + auVar63._6_2_) - auVar64._6_2_) - (short)Var40;
            psVar4[4] = ((auVar28._8_2_ + auVar63._8_2_) - auVar64._8_2_) - auVar30._8_2_;
            psVar4[5] = ((auVar20._10_2_ + auVar63._10_2_) - auVar64._10_2_) - auVar22._10_2_;
            psVar4[6] = ((auVar12._12_2_ + auVar63._12_2_) - auVar64._12_2_) - auVar14._12_2_;
            psVar4[7] = (((auVar8._13_2_ >> 8) + auVar63._14_2_) - auVar64._14_2_) -
                        (auVar10._13_2_ >> 8);
            uVar52 = uVar52 + 8;
          } while (uVar52 < (ulonglong)(longlong)iVar59);
          iVar55 = iVar54 + iVar59;
        }
        uVar52 = (ulonglong)iVar59;
        pbVar53 = param_1 + uVar52;
        if (uVar52 < uVar60) {
          do {
            pbVar1 = pbVar53 + 1;
            pbVar2 = pbVar53 + 3;
            bVar7 = *pbVar53;
            pbVar3 = pbVar53 + 4;
            pbVar53 = pbVar53 + 1;
            *(ushort *)(*(longlong *)(param_2 + uVar57 * 8) + lVar62 * 2 + uVar52 * 2) =
                 ((ushort)*pbVar1 - (ushort)*pbVar2) * 2 + ((ushort)bVar7 - (ushort)*pbVar3);
            uVar52 = uVar52 + 1;
          } while (uVar52 < uVar60);
          lVar62 = (longlong)((int)uVar52 + iVar54);
        }
        else {
          lVar62 = (longlong)iVar55;
        }
      }
      uVar52 = 0;
      lVar56 = iVar50 + param_3;
      do {
        if ((longlong)(int)param_6 + -2 <= (longlong)uVar52) break;
        *(ushort *)(*(longlong *)(param_2 + uVar57 * 8) + lVar62 * 2 + uVar52 * 2) =
             ((ushort)*(byte *)(uVar52 + 1 + lVar56) - (ushort)*(byte *)(uVar52 + 3 + lVar56)) * 2 +
             ((ushort)*(byte *)(uVar52 + lVar56) - (ushort)*(byte *)(uVar52 + 4 + lVar56));
        uVar52 = uVar52 + 1;
      } while (uVar52 < 2);
      uVar57 = uVar57 + 1;
      param_1 = param_1 + param_4;
    } while (uVar57 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}


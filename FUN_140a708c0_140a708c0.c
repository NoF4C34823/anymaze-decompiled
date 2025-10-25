
undefined8
FUN_140a708c0(byte *param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  short *psVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
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
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  unkuint9 Var45;
  undefined1 auVar46 [11];
  undefined1 auVar47 [13];
  undefined1 auVar48 [15];
  unkuint9 Var49;
  undefined1 auVar50 [11];
  undefined1 auVar51 [15];
  unkuint9 Var52;
  undefined1 auVar53 [11];
  undefined1 auVar54 [13];
  undefined1 auVar55 [15];
  unkuint9 Var56;
  undefined1 auVar57 [11];
  undefined1 auVar58 [15];
  unkuint9 Var59;
  undefined1 auVar60 [11];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  int iVar71;
  undefined8 uVar72;
  int iVar73;
  int iVar74;
  longlong lVar75;
  ulonglong uVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  int iVar79;
  ulonglong uVar80;
  byte *pbVar81;
  ulonglong *puVar82;
  longlong lVar83;
  
  uVar76 = 0;
  if (0xf < (int)param_6 - param_5) {
    switch(param_7 & 0xf) {
    case 1:
      uVar76 = 1;
      break;
    case 2:
      uVar76 = 2;
      break;
    case 3:
      uVar76 = 3;
      break;
    case 4:
      uVar76 = 4;
    }
    (*(code *)(&PTR_FUN_14308ef58)[uVar76])
              (param_1,param_2,(longlong)(int)param_6 - (longlong)param_5,(longlong)param_6._4_4_,
               (longlong)param_4 - (longlong)(int)param_6,param_8,(longlong)(int)param_7);
    uVar72 = FUN_140a70d53();
    return uVar72;
  }
  if (0 < param_6._4_4_) {
    uVar80 = (longlong)(int)param_6 - 4;
    do {
      iVar71 = FUN_140a6d880(param_1,param_3,(int)param_6,5,param_5,param_7,param_8);
      iVar73 = 0;
      if (0 < (int)param_6) {
        uVar77 = 0;
        do {
          *(ushort *)(*(longlong *)(param_2 + uVar76 * 8) + uVar77 * 2) =
               (ushort)*(byte *)(uVar77 + param_3) + (ushort)*(byte *)(uVar77 + 1 + param_3) +
               (ushort)*(byte *)(uVar77 + 2 + param_3) +
               (ushort)*(byte *)(uVar77 + 3 + param_3) + (ushort)*(byte *)(uVar77 + 4 + param_3);
          uVar78 = uVar77 + 1;
          iVar73 = (int)uVar77 + 1;
          if ((ulonglong)(longlong)(int)param_6 <= uVar78) break;
          uVar77 = uVar78;
        } while ((longlong)uVar78 < 2);
      }
      lVar83 = (longlong)iVar73;
      if (-1 < (int)param_6 + -5) {
        if ((longlong)uVar80 < 8) {
LAB_140a70d66:
          iVar79 = 0;
          iVar74 = iVar73;
        }
        else {
          lVar75 = lVar83 * 2;
          uVar78 = *(longlong *)(param_2 + uVar76 * 8) + lVar75;
          uVar77 = uVar78 & 0xf;
          if ((int)uVar77 != 0) {
            if ((uVar78 & 1) != 0) goto LAB_140a70d66;
            uVar77 = (ulonglong)(0x10U - (int)uVar77 >> 1);
          }
          if ((longlong)uVar80 < (longlong)(uVar77 + 8)) goto LAB_140a70d66;
          uVar78 = 0;
          iVar79 = (int)uVar80 - ((int)uVar80 - (int)uVar77 & 7U);
          pbVar81 = param_1;
          if ((int)uVar77 != 0) {
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar76 * 8) + lVar75 + uVar78 * 2) =
                   (ushort)*pbVar81 + (ushort)pbVar81[1] + (ushort)pbVar81[2] +
                   (ushort)pbVar81[3] + (ushort)pbVar81[4];
              uVar78 = uVar78 + 1;
              pbVar81 = pbVar81 + 1;
            } while (uVar78 < uVar77);
          }
          puVar82 = (ulonglong *)(param_1 + uVar77);
          do {
            uVar78 = *puVar82;
            uVar6 = *(ulonglong *)((longlong)puVar82 + 1);
            uVar7 = *(ulonglong *)((longlong)puVar82 + 2);
            auVar15._8_6_ = 0;
            auVar15._0_8_ = uVar78;
            auVar15[0xe] = (char)(uVar78 >> 0x38);
            auVar20._8_4_ = 0;
            auVar20._0_8_ = uVar78;
            auVar20[0xc] = (char)(uVar78 >> 0x30);
            auVar20._13_2_ = auVar15._13_2_;
            auVar25._8_4_ = 0;
            auVar25._0_8_ = uVar78;
            auVar25._12_3_ = auVar20._12_3_;
            auVar30._8_2_ = 0;
            auVar30._0_8_ = uVar78;
            auVar30[10] = (char)(uVar78 >> 0x28);
            auVar30._11_4_ = auVar25._11_4_;
            auVar35._8_2_ = 0;
            auVar35._0_8_ = uVar78;
            auVar35._10_5_ = auVar30._10_5_;
            auVar40[8] = (char)(uVar78 >> 0x20);
            auVar40._0_8_ = uVar78;
            auVar40._9_6_ = auVar35._9_6_;
            auVar44._7_8_ = 0;
            auVar44._0_7_ = auVar40._8_7_;
            Var45 = CONCAT81(SUB158(auVar44 << 0x40,7),(char)(uVar78 >> 0x18));
            auVar61._9_6_ = 0;
            auVar61._0_9_ = Var45;
            auVar46._1_10_ = SUB1510(auVar61 << 0x30,5);
            auVar46[0] = (char)(uVar78 >> 0x10);
            auVar62._11_4_ = 0;
            auVar62._0_11_ = auVar46;
            auVar47._1_12_ = SUB1512(auVar62 << 0x20,3);
            auVar47[0] = (char)(uVar78 >> 8);
            auVar11._8_6_ = 0;
            auVar11._0_8_ = uVar6;
            auVar11[0xe] = (char)(uVar6 >> 0x38);
            auVar16._8_4_ = 0;
            auVar16._0_8_ = uVar6;
            auVar16[0xc] = (char)(uVar6 >> 0x30);
            auVar16._13_2_ = auVar11._13_2_;
            auVar21._8_4_ = 0;
            auVar21._0_8_ = uVar6;
            auVar21._12_3_ = auVar16._12_3_;
            auVar26._8_2_ = 0;
            auVar26._0_8_ = uVar6;
            auVar26[10] = (char)(uVar6 >> 0x28);
            auVar26._11_4_ = auVar21._11_4_;
            auVar31._8_2_ = 0;
            auVar31._0_8_ = uVar6;
            auVar31._10_5_ = auVar26._10_5_;
            auVar36[8] = (char)(uVar6 >> 0x20);
            auVar36._0_8_ = uVar6;
            auVar36._9_6_ = auVar31._9_6_;
            auVar48._7_8_ = 0;
            auVar48._0_7_ = auVar36._8_7_;
            Var49 = CONCAT81(SUB158(auVar48 << 0x40,7),(char)(uVar6 >> 0x18));
            auVar63._9_6_ = 0;
            auVar63._0_9_ = Var49;
            auVar50._1_10_ = SUB1510(auVar63 << 0x30,5);
            auVar50[0] = (char)(uVar6 >> 0x10);
            auVar64._11_4_ = 0;
            auVar64._0_11_ = auVar50;
            auVar41[2] = (char)(uVar6 >> 8);
            auVar41._0_2_ = (ushort)uVar6;
            auVar41._3_12_ = SUB1512(auVar64 << 0x20,3);
            auVar12._8_6_ = 0;
            auVar12._0_8_ = uVar7;
            auVar12[0xe] = (char)(uVar7 >> 0x38);
            auVar17._8_4_ = 0;
            auVar17._0_8_ = uVar7;
            auVar17[0xc] = (char)(uVar7 >> 0x30);
            auVar17._13_2_ = auVar12._13_2_;
            auVar22._8_4_ = 0;
            auVar22._0_8_ = uVar7;
            auVar22._12_3_ = auVar17._12_3_;
            auVar27._8_2_ = 0;
            auVar27._0_8_ = uVar7;
            auVar27[10] = (char)(uVar7 >> 0x28);
            auVar27._11_4_ = auVar22._11_4_;
            auVar32._8_2_ = 0;
            auVar32._0_8_ = uVar7;
            auVar32._10_5_ = auVar27._10_5_;
            auVar37[8] = (char)(uVar7 >> 0x20);
            auVar37._0_8_ = uVar7;
            auVar37._9_6_ = auVar32._9_6_;
            auVar51._7_8_ = 0;
            auVar51._0_7_ = auVar37._8_7_;
            Var52 = CONCAT81(SUB158(auVar51 << 0x40,7),(char)(uVar7 >> 0x18));
            auVar65._9_6_ = 0;
            auVar65._0_9_ = Var52;
            auVar53._1_10_ = SUB1510(auVar65 << 0x30,5);
            auVar53[0] = (char)(uVar7 >> 0x10);
            auVar66._11_4_ = 0;
            auVar66._0_11_ = auVar53;
            auVar54._1_12_ = SUB1512(auVar66 << 0x20,3);
            auVar54[0] = (char)(uVar7 >> 8);
            uVar8 = *(ulonglong *)((longlong)puVar82 + 3);
            uVar9 = *(ulonglong *)((longlong)puVar82 + 4);
            puVar82 = puVar82 + 1;
            auVar13._8_6_ = 0;
            auVar13._0_8_ = uVar8;
            auVar13[0xe] = (char)(uVar8 >> 0x38);
            auVar18._8_4_ = 0;
            auVar18._0_8_ = uVar8;
            auVar18[0xc] = (char)(uVar8 >> 0x30);
            auVar18._13_2_ = auVar13._13_2_;
            auVar23._8_4_ = 0;
            auVar23._0_8_ = uVar8;
            auVar23._12_3_ = auVar18._12_3_;
            auVar28._8_2_ = 0;
            auVar28._0_8_ = uVar8;
            auVar28[10] = (char)(uVar8 >> 0x28);
            auVar28._11_4_ = auVar23._11_4_;
            auVar33._8_2_ = 0;
            auVar33._0_8_ = uVar8;
            auVar33._10_5_ = auVar28._10_5_;
            auVar38[8] = (char)(uVar8 >> 0x20);
            auVar38._0_8_ = uVar8;
            auVar38._9_6_ = auVar33._9_6_;
            auVar55._7_8_ = 0;
            auVar55._0_7_ = auVar38._8_7_;
            Var56 = CONCAT81(SUB158(auVar55 << 0x40,7),(char)(uVar8 >> 0x18));
            auVar67._9_6_ = 0;
            auVar67._0_9_ = Var56;
            auVar57._1_10_ = SUB1510(auVar67 << 0x30,5);
            auVar57[0] = (char)(uVar8 >> 0x10);
            auVar68._11_4_ = 0;
            auVar68._0_11_ = auVar57;
            auVar42[2] = (char)(uVar8 >> 8);
            auVar42._0_2_ = (ushort)uVar8;
            auVar42._3_12_ = SUB1512(auVar68 << 0x20,3);
            auVar14._8_6_ = 0;
            auVar14._0_8_ = uVar9;
            auVar14[0xe] = (char)(uVar9 >> 0x38);
            auVar19._8_4_ = 0;
            auVar19._0_8_ = uVar9;
            auVar19[0xc] = (char)(uVar9 >> 0x30);
            auVar19._13_2_ = auVar14._13_2_;
            auVar24._8_4_ = 0;
            auVar24._0_8_ = uVar9;
            auVar24._12_3_ = auVar19._12_3_;
            auVar29._8_2_ = 0;
            auVar29._0_8_ = uVar9;
            auVar29[10] = (char)(uVar9 >> 0x28);
            auVar29._11_4_ = auVar24._11_4_;
            auVar34._8_2_ = 0;
            auVar34._0_8_ = uVar9;
            auVar34._10_5_ = auVar29._10_5_;
            auVar39[8] = (char)(uVar9 >> 0x20);
            auVar39._0_8_ = uVar9;
            auVar39._9_6_ = auVar34._9_6_;
            auVar58._7_8_ = 0;
            auVar58._0_7_ = auVar39._8_7_;
            Var59 = CONCAT81(SUB158(auVar58 << 0x40,7),(char)(uVar9 >> 0x18));
            auVar69._9_6_ = 0;
            auVar69._0_9_ = Var59;
            auVar60._1_10_ = SUB1510(auVar69 << 0x30,5);
            auVar60[0] = (char)(uVar9 >> 0x10);
            auVar70._11_4_ = 0;
            auVar70._0_11_ = auVar60;
            auVar43[2] = (char)(uVar9 >> 8);
            auVar43._0_2_ = (ushort)uVar9;
            auVar43._3_12_ = SUB1512(auVar70 << 0x20,3);
            psVar5 = (short *)(*(longlong *)(param_2 + uVar76 * 8) + lVar75 + uVar77 * 2);
            *psVar5 = (ushort)(byte)uVar78 + ((ushort)uVar6 & 0xff) + (ushort)(byte)uVar7 +
                      ((ushort)uVar8 & 0xff) + ((ushort)uVar9 & 0xff);
            psVar5[1] = auVar47._0_2_ + auVar41._2_2_ + auVar54._0_2_ + auVar42._2_2_ +
                        auVar43._2_2_;
            psVar5[2] = auVar46._0_2_ + auVar50._0_2_ + auVar53._0_2_ + auVar57._0_2_ +
                        auVar60._0_2_;
            psVar5[3] = (short)Var45 + (short)Var49 + (short)Var52 + (short)Var56 + (short)Var59;
            psVar5[4] = auVar40._8_2_ + auVar36._8_2_ + auVar37._8_2_ + auVar38._8_2_ +
                        auVar39._8_2_;
            psVar5[5] = auVar30._10_2_ + auVar26._10_2_ + auVar27._10_2_ + auVar28._10_2_ +
                        auVar29._10_2_;
            psVar5[6] = auVar20._12_2_ + auVar16._12_2_ + auVar17._12_2_ + auVar18._12_2_ +
                        auVar19._12_2_;
            psVar5[7] = (auVar15._13_2_ >> 8) + (auVar11._13_2_ >> 8) + (auVar12._13_2_ >> 8) +
                        (auVar13._13_2_ >> 8) + (auVar14._13_2_ >> 8);
            uVar77 = uVar77 + 8;
          } while (uVar77 < (ulonglong)(longlong)iVar79);
          iVar74 = iVar73 + iVar79;
        }
        uVar77 = (ulonglong)iVar79;
        pbVar81 = param_1 + uVar77;
        if (uVar77 < uVar80) {
          do {
            bVar10 = *pbVar81;
            pbVar1 = pbVar81 + 1;
            pbVar2 = pbVar81 + 2;
            pbVar3 = pbVar81 + 3;
            pbVar4 = pbVar81 + 4;
            pbVar81 = pbVar81 + 1;
            *(ushort *)(*(longlong *)(param_2 + uVar76 * 8) + lVar83 * 2 + uVar77 * 2) =
                 (ushort)bVar10 + (ushort)*pbVar1 + (ushort)*pbVar2 +
                 (ushort)*pbVar3 + (ushort)*pbVar4;
            uVar77 = uVar77 + 1;
          } while (uVar77 < uVar80);
          lVar83 = (longlong)((int)uVar77 + iVar73);
        }
        else {
          lVar83 = (longlong)iVar74;
        }
      }
      uVar77 = 0;
      lVar75 = iVar71 + param_3;
      do {
        if ((longlong)(int)param_6 + -2 <= (longlong)uVar77) break;
        *(ushort *)(*(longlong *)(param_2 + uVar76 * 8) + lVar83 * 2 + uVar77 * 2) =
             (ushort)*(byte *)(uVar77 + lVar75) + (ushort)*(byte *)(uVar77 + 1 + lVar75) +
             (ushort)*(byte *)(uVar77 + 2 + lVar75) +
             (ushort)*(byte *)(uVar77 + 3 + lVar75) + (ushort)*(byte *)(uVar77 + 4 + lVar75);
        uVar77 = uVar77 + 1;
      } while (uVar77 < 2);
      uVar76 = uVar76 + 1;
      param_1 = param_1 + param_4;
    } while (uVar76 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}


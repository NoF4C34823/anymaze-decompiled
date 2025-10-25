
void FUN_140314920(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulonglong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [14];
  undefined1 auVar7 [12];
  unkbyte10 Var8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [14];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  char cVar30;
  uint uVar31;
  undefined1 auVar33 [11];
  char cVar66;
  char cVar67;
  char cVar68;
  uint uVar69;
  undefined1 auVar38 [16];
  undefined2 uVar70;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined4 uVar77;
  undefined4 uVar78;
  undefined1 auVar39 [16];
  undefined1 auVar46 [16];
  undefined1 auVar52 [16];
  undefined1 auVar40 [16];
  undefined1 auVar53 [16];
  undefined1 auVar32 [11];
  undefined1 auVar41 [16];
  undefined1 auVar47 [16];
  undefined1 auVar54 [16];
  undefined1 auVar60 [16];
  undefined1 auVar34 [12];
  undefined1 auVar42 [16];
  undefined1 auVar35 [12];
  undefined1 auVar55 [16];
  undefined1 auVar36 [13];
  undefined1 auVar43 [16];
  undefined1 auVar48 [16];
  undefined1 auVar37 [13];
  undefined1 auVar56 [16];
  undefined1 auVar61 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  
  uVar13 = (ulonglong)param_6._4_4_;
  lVar25 = (longlong)(param_6._4_4_ + -1 >> 1);
  lVar23 = (longlong)param_2 >> 2;
  uVar17 = (longlong)(int)param_5 + 7U & 0xfffffffffffffff8;
  uVar22 = (ulonglong)(int)param_6;
  lVar27 = (longlong)((int)param_6 + -1 >> 1);
  lVar15 = (lVar25 * lVar23 + lVar27) * -4 + param_1;
  if (param_7 == 0) {
    lVar28 = 0;
    lVar27 = uVar13 - 1;
    lVar25 = param_9;
    if (lVar27 != 0 && 0 < (longlong)uVar13) {
      do {
        FUN_1402fd0c0(lVar15,lVar25,(longlong)(int)param_5,uVar22,1);
        lVar28 = lVar28 + 1;
        lVar15 = lVar15 + lVar23 * 4;
        lVar25 = lVar25 + uVar17 * 4;
      } while (lVar28 < lVar27);
    }
    lVar28 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_1402fd0c0(lVar15,lVar25,(longlong)(int)param_5,uVar22,1);
        thunk_FUN_142d22130(param_9,uVar17,param_3,(longlong)(int)param_5,uVar13);
        lVar27 = lVar27 + 1;
        lVar25 = lVar25 + uVar17 * 4;
        if ((longlong)uVar13 <= lVar27) {
          lVar25 = param_9;
        }
        lVar15 = lVar15 + lVar23 * 4;
        param_3 = param_3 + ((longlong)param_4 >> 2) * 4;
        if ((longlong)uVar13 <= lVar27) {
          lVar27 = 0;
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 < param_5._4_4_);
    }
  }
  else {
    uVar17 = 0;
    if (0 < param_5._4_4_) {
      lVar27 = lVar27 * -4;
      lVar25 = lVar25 * lVar23 * -4;
      param_1 = param_1 + lVar23 * -4;
      lVar15 = 0;
      lVar28 = 0;
      do {
        uVar19 = 0;
        if (0 < (int)param_5) {
          do {
            uVar21 = 0;
            lVar24 = 0;
            lVar18 = 0;
            auVar75 = ZEXT416(DAT_143089c20);
            if (0 < (longlong)uVar13) {
              lVar1 = param_1 + lVar23 * 4 + lVar27 + lVar25 + lVar28 + uVar19 * 4;
              do {
                if (0 < (longlong)uVar22) {
                  if ((longlong)uVar22 < 8) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = uVar22 & 0xfffffffffffffff8;
                    uVar20 = 0;
                    auVar73._0_4_ = auVar75._0_4_;
                    auVar73._4_4_ = auVar73._0_4_;
                    auVar73._8_4_ = auVar73._0_4_;
                    auVar73._12_4_ = auVar73._0_4_;
                    lVar26 = lVar27 + lVar23 * 4 + param_1 + lVar25 + lVar28 + uVar19 * 4 + lVar18;
                    uVar16 = param_7;
                    do {
                      uVar71 = *(undefined4 *)(uVar20 + param_7 + lVar24);
                      cVar30 = -((char)uVar71 == '\0');
                      cVar66 = -((char)((uint)uVar71 >> 8) == '\0');
                      cVar67 = -((char)((uint)uVar71 >> 0x10) == '\0');
                      cVar68 = -((char)((uint)uVar71 >> 0x18) == '\0');
                      auVar40._0_9_ = CONCAT18(0xff,0xff00000000000000);
                      auVar32._0_10_ = CONCAT19(0xff,auVar40._0_9_);
                      auVar32[10] = 0xff;
                      auVar34[0xb] = 0xff;
                      auVar34._0_11_ = auVar32;
                      auVar36[0xc] = 0xff;
                      auVar36._0_12_ = auVar34;
                      auVar45[0xd] = 0xff;
                      auVar45._0_13_ = auVar36;
                      auVar45[0xe] = 0xff;
                      auVar45[0xf] = 0xff;
                      auVar44._14_2_ = auVar45._14_2_;
                      auVar44[0xd] = 0xff;
                      auVar44._0_13_ = auVar36;
                      auVar43._13_3_ = auVar44._13_3_;
                      auVar43[0xc] = 0xff;
                      auVar43._0_12_ = auVar34;
                      auVar42._12_4_ = auVar43._12_4_;
                      auVar42[0xb] = 0xff;
                      auVar42._0_11_ = auVar32;
                      auVar41._11_5_ = auVar42._11_5_;
                      auVar41[10] = 0xff;
                      auVar41._0_10_ = auVar32._0_10_;
                      auVar40._10_6_ = auVar41._10_6_;
                      auVar40[9] = 0xff;
                      auVar39._9_7_ = auVar40._9_7_;
                      auVar39[8] = 0xff;
                      auVar39._0_8_ = 0xff00000000000000;
                      Var8 = CONCAT91(CONCAT81(auVar39._8_8_,cVar68),cVar68);
                      auVar7._2_10_ = Var8;
                      auVar7[1] = cVar67;
                      auVar7[0] = cVar67;
                      auVar6._2_12_ = auVar7;
                      auVar6[1] = cVar66;
                      auVar6[0] = cVar66;
                      auVar38._0_2_ = CONCAT11(cVar30,cVar30);
                      auVar38._2_14_ = auVar6;
                      uVar70 = (undefined2)Var8;
                      auVar48._0_12_ = auVar38._0_12_;
                      auVar48._12_2_ = uVar70;
                      auVar48._14_2_ = uVar70;
                      auVar47._12_4_ = auVar48._12_4_;
                      auVar47._0_10_ = auVar38._0_10_;
                      auVar47._10_2_ = auVar7._0_2_;
                      auVar46._10_6_ = auVar47._10_6_;
                      auVar46._0_8_ = auVar38._0_8_;
                      auVar46._8_2_ = auVar7._0_2_;
                      auVar9._4_8_ = auVar46._8_8_;
                      auVar9._2_2_ = auVar6._0_2_;
                      auVar9._0_2_ = auVar6._0_2_;
                      uVar31 = CONCAT22(auVar38._0_2_,auVar38._0_2_);
                      auVar49._0_8_ = CONCAT44(auVar9._0_4_,uVar31) ^ 0xffffffffffffffff;
                      auVar49._8_4_ = auVar46._8_4_ ^ 0xffffffff;
                      auVar49._12_4_ = auVar47._12_4_ ^ 0xffffffff;
                      uVar14 = movmskps((int)uVar16,auVar49);
                      if ((uVar14 & 1) == 0) {
                        uVar71 = 0;
                      }
                      else {
                        uVar71 = *(undefined4 *)(lVar1 + lVar18 + uVar20 * 4);
                      }
                      if ((uVar14 & 2) == 0) {
                        uVar74 = 0;
                      }
                      else {
                        uVar74 = *(undefined4 *)(lVar26 + 4 + uVar20 * 4);
                      }
                      if ((uVar14 & 4) == 0) {
                        uVar77 = 0;
                      }
                      else {
                        uVar77 = *(undefined4 *)(lVar26 + 8 + uVar20 * 4);
                      }
                      if ((uVar14 & 8) == 0) {
                        uVar78 = 0;
                      }
                      else {
                        uVar78 = *(undefined4 *)(lVar26 + 0xc + uVar20 * 4);
                      }
                      auVar3._4_4_ = uVar74;
                      auVar3._0_4_ = uVar71;
                      auVar3._8_4_ = uVar77;
                      auVar3._12_4_ = uVar78;
                      auVar75 = minps(auVar73,auVar3);
                      auVar76._0_4_ = auVar75._0_4_ & (uVar31 ^ 0xffffffff);
                      uVar69 = (uint)(auVar49._0_8_ >> 0x20);
                      auVar76._4_4_ = auVar75._4_4_ & uVar69;
                      auVar76._8_4_ = auVar75._8_4_ & auVar49._8_4_;
                      auVar76._12_4_ = auVar75._12_4_ & auVar49._12_4_;
                      auVar50._0_4_ = ~(uVar31 ^ 0xffffffff) & auVar73._0_4_;
                      auVar50._4_4_ = ~uVar69 & auVar73._4_4_;
                      auVar50._8_4_ = ~auVar49._8_4_ & auVar73._8_4_;
                      auVar50._12_4_ = ~auVar49._12_4_ & auVar73._12_4_;
                      auVar76 = auVar76 | auVar50;
                      uVar71 = *(undefined4 *)(uVar20 + 4 + param_7 + lVar24);
                      cVar30 = -((char)uVar71 == '\0');
                      cVar66 = -((char)((uint)uVar71 >> 8) == '\0');
                      cVar67 = -((char)((uint)uVar71 >> 0x10) == '\0');
                      cVar68 = -((char)((uint)uVar71 >> 0x18) == '\0');
                      auVar53._0_9_ = CONCAT18(0xff,0xff00000000000000);
                      auVar33._0_10_ = CONCAT19(0xff,auVar53._0_9_);
                      auVar33[10] = 0xff;
                      auVar35[0xb] = 0xff;
                      auVar35._0_11_ = auVar33;
                      auVar37[0xc] = 0xff;
                      auVar37._0_12_ = auVar35;
                      auVar58[0xd] = 0xff;
                      auVar58._0_13_ = auVar37;
                      auVar58[0xe] = 0xff;
                      auVar58[0xf] = 0xff;
                      auVar57._14_2_ = auVar58._14_2_;
                      auVar57[0xd] = 0xff;
                      auVar57._0_13_ = auVar37;
                      auVar56._13_3_ = auVar57._13_3_;
                      auVar56[0xc] = 0xff;
                      auVar56._0_12_ = auVar35;
                      auVar55._12_4_ = auVar56._12_4_;
                      auVar55[0xb] = 0xff;
                      auVar55._0_11_ = auVar33;
                      auVar54._11_5_ = auVar55._11_5_;
                      auVar54[10] = 0xff;
                      auVar54._0_10_ = auVar33._0_10_;
                      auVar53._10_6_ = auVar54._10_6_;
                      auVar53[9] = 0xff;
                      auVar52._9_7_ = auVar53._9_7_;
                      auVar52[8] = 0xff;
                      auVar52._0_8_ = 0xff00000000000000;
                      Var8 = CONCAT91(CONCAT81(auVar52._8_8_,cVar68),cVar68);
                      auVar11._2_10_ = Var8;
                      auVar11[1] = cVar67;
                      auVar11[0] = cVar67;
                      auVar10._2_12_ = auVar11;
                      auVar10[1] = cVar66;
                      auVar10[0] = cVar66;
                      auVar51._0_2_ = CONCAT11(cVar30,cVar30);
                      auVar51._2_14_ = auVar10;
                      uVar70 = (undefined2)Var8;
                      auVar61._0_12_ = auVar51._0_12_;
                      auVar61._12_2_ = uVar70;
                      auVar61._14_2_ = uVar70;
                      auVar60._12_4_ = auVar61._12_4_;
                      auVar60._0_10_ = auVar51._0_10_;
                      auVar60._10_2_ = auVar11._0_2_;
                      auVar59._10_6_ = auVar60._10_6_;
                      auVar59._0_8_ = auVar51._0_8_;
                      auVar59._8_2_ = auVar11._0_2_;
                      auVar12._4_8_ = auVar59._8_8_;
                      auVar12._2_2_ = auVar10._0_2_;
                      auVar12._0_2_ = auVar10._0_2_;
                      uVar31 = CONCAT22(auVar51._0_2_,auVar51._0_2_);
                      auVar62._0_8_ = CONCAT44(auVar12._0_4_,uVar31) ^ 0xffffffffffffffff;
                      auVar62._8_4_ = auVar59._8_4_ ^ 0xffffffff;
                      auVar62._12_4_ = auVar60._12_4_ ^ 0xffffffff;
                      uVar14 = movmskps(uVar14,auVar62);
                      uVar16 = (ulonglong)uVar14;
                      if ((uVar14 & 1) == 0) {
                        uVar71 = 0;
                      }
                      else {
                        uVar71 = *(undefined4 *)(lVar26 + 0x10 + uVar20 * 4);
                      }
                      if ((uVar14 & 2) == 0) {
                        uVar74 = 0;
                      }
                      else {
                        uVar74 = *(undefined4 *)(lVar26 + 0x14 + uVar20 * 4);
                      }
                      if ((uVar14 & 4) == 0) {
                        uVar77 = 0;
                      }
                      else {
                        uVar77 = *(undefined4 *)(lVar26 + 0x18 + uVar20 * 4);
                      }
                      if ((uVar14 & 8) == 0) {
                        uVar78 = 0;
                      }
                      else {
                        uVar78 = *(undefined4 *)(lVar26 + 0x1c + uVar20 * 4);
                      }
                      uVar20 = uVar20 + 8;
                      auVar4._4_4_ = uVar74;
                      auVar4._0_4_ = uVar71;
                      auVar4._8_4_ = uVar77;
                      auVar4._12_4_ = uVar78;
                      auVar75 = minps(auVar76,auVar4);
                      auVar72._0_4_ = auVar75._0_4_ & (uVar31 ^ 0xffffffff);
                      uVar14 = (uint)(auVar62._0_8_ >> 0x20);
                      auVar72._4_4_ = auVar75._4_4_ & uVar14;
                      auVar72._8_4_ = auVar75._8_4_ & auVar62._8_4_;
                      auVar72._12_4_ = auVar75._12_4_ & auVar62._12_4_;
                      auVar63._0_4_ = ~(uVar31 ^ 0xffffffff) & auVar76._0_4_;
                      auVar63._4_4_ = ~uVar14 & auVar76._4_4_;
                      auVar63._8_4_ = ~auVar62._8_4_ & auVar76._8_4_;
                      auVar63._12_4_ = ~auVar62._12_4_ & auVar76._12_4_;
                      auVar73 = auVar72 | auVar63;
                    } while (uVar20 < uVar29);
                    auVar5._4_8_ = auVar63._8_8_;
                    auVar5._0_4_ = auVar73._4_4_;
                    auVar64._0_8_ = auVar5._0_8_ << 0x20;
                    auVar64._8_4_ = auVar73._8_4_;
                    auVar64._12_4_ = auVar73._12_4_;
                    auVar65._8_8_ = auVar64._8_8_;
                    auVar65._0_8_ = auVar73._8_8_;
                    auVar75 = minps(auVar73,auVar65);
                    if (auVar75._4_4_ <= auVar75._0_4_) {
                      auVar75._0_4_ = auVar75._4_4_;
                    }
                  }
                  if (uVar29 < uVar22) {
                    do {
                      if ((*(char *)(uVar29 + param_7 + lVar24) != '\0') &&
                         (fVar2 = *(float *)(lVar1 + lVar18 + uVar29 * 4), fVar2 <= auVar75._0_4_))
                      {
                        auVar75._0_4_ = fVar2;
                      }
                      uVar29 = uVar29 + 1;
                    } while (uVar29 < uVar22);
                  }
                }
                uVar21 = uVar21 + 1;
                lVar24 = lVar24 + uVar22;
                lVar18 = lVar18 + lVar23 * 4;
              } while (uVar21 < uVar13);
            }
            *(int *)(param_3 + lVar15 + uVar19 * 4) = auVar75._0_4_;
            uVar19 = uVar19 + 1;
          } while (uVar19 < (ulonglong)(longlong)(int)param_5);
        }
        uVar17 = uVar17 + 1;
        lVar15 = lVar15 + ((longlong)param_4 >> 2) * 4;
        lVar28 = lVar28 + lVar23 * 4;
      } while (uVar17 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}


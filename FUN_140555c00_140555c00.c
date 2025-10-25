
void FUN_140555c00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
                  longlong param_9,int param_10)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ushort uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  longlong lVar46;
  longlong lVar47;
  ulonglong uVar48;
  longlong lVar49;
  longlong lVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  ulonglong uVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  longlong lVar68;
  undefined1 (*pauVar69) [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 in_ZMM0 [64];
  undefined1 auVar72 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar75 [64];
  undefined1 auVar76 [16];
  undefined1 auVar77 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar78 [16];
  undefined1 auVar79 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar80 [32];
  undefined1 in_ZMM5 [64];
  undefined8 uVar81;
  undefined1 auVar82 [64];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [32];
  undefined1 in_ZMM9 [64];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 in_ZMM11 [64];
  undefined1 auVar95 [64];
  undefined1 auVar96 [32];
  undefined1 auVar97 [64];
  undefined1 auVar98 [32];
  undefined1 auVar99 [64];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar102 [64];
  undefined1 auVar103 [64];
  longlong lStack_6d8;
  longlong lStack_6d0;
  ulonglong uStack_488;
  undefined1 auStack_448 [16];
  undefined1 auStack_438 [16];
  undefined1 auStack_428 [16];
  undefined1 (*pauStack_2b0) [32];
  
  lStack_6d0 = lStack_6d8;
  auVar76 = in_ZMM0._0_16_;
  auVar77 = in_ZMM1._0_32_;
  lVar35 = (param_7 * 3 + 2) * param_8;
  uVar21 = param_5 & 0xfffffffffffffffe;
  uVar17 = param_5 & 0xffffffffffffffc0;
  uVar27 = param_5 & 0xffffffffffffffe0;
  uVar48 = param_5 & 0xfffffffffffffff0;
  uVar61 = param_5 & 0xfffffffffffffff8;
  uVar42 = param_5 & 0xfffffffffffffffc;
  uVar37 = (ulonglong)*(ushort *)(param_9 + lVar35);
  lVar36 = 0;
  lVar31 = (longlong)param_10;
  uVar14 = *(ushort *)(param_9 + 2 + lVar35);
  uStack_488 = 0;
  uVar22 = param_6 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar22) {
    auVar76 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
    auVar75 = ZEXT1664(auVar76);
    auVar77 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
    auVar72 = ZEXT3264(auVar77);
    lVar28 = lVar31 * (ulonglong)uVar14;
    lVar49 = param_2 * uVar37;
    lVar35 = param_2 + lVar28;
    uVar23 = uVar17 + 0x3f >> 6;
    lVar43 = (longlong)(int)(param_10 * (uint)uVar14);
    lVar24 = param_2 * -4 + param_1;
    lStack_6d0 = in_ZMM10._8_8_;
    lVar20 = param_4 * 2;
    lVar68 = param_4 * 3;
    lVar18 = lVar24 + param_2 * 5 + lVar28;
    lVar30 = lVar28 + param_2 * 4;
    lVar38 = lVar49 + param_2 * 4 + lVar24;
    lVar16 = lVar24 + param_2 * 4;
    lVar39 = param_2 * -3 + param_1 + lVar30;
    lVar53 = lVar28 + param_2 * 2;
    lVar65 = param_2 * -2 + param_1 + lVar30;
    lVar40 = param_2 * 6 + lVar24 + lVar28;
    lVar58 = param_2 * 3 + lVar28;
    lVar66 = (uVar37 + 1) * param_2;
    lVar54 = param_2 * 7 + lVar24 + lVar28;
    lVar55 = lVar66 + param_2 * 4 + lVar24;
    lVar41 = (param_1 - param_2) + lVar30;
    lVar56 = (uVar37 + 2) * param_2;
    lVar62 = (uVar37 + 3) * param_2;
    lVar44 = lVar56 + param_2 * 4 + lVar24;
    lVar25 = lVar24 + lVar62 + param_2 * 4;
    do {
      lVar32 = param_2 * 4 * uStack_488;
      pauStack_2b0 = (undefined1 (*) [32])(param_4 * 4 * uStack_488 + param_3);
      lVar19 = param_1 + lVar32;
      uVar26 = 0;
      lVar36 = 0;
      lVar50 = 0;
      if (param_7 == param_8) {
        if (0 < (longlong)uVar17) {
          do {
            auVar77 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
            auVar71 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
            auVar79 = auVar77;
            auVar89 = auVar77;
            auVar92 = auVar77;
            auVar74 = auVar77;
            auVar80 = auVar77;
            auVar93 = auVar77;
            auVar70 = auVar77;
            if (0 < (longlong)param_7) {
              uVar45 = 0;
              lVar29 = 0;
              lVar50 = lVar29;
              auVar71 = auVar77;
              do {
                uVar45 = uVar45 + 1;
                pauVar69 = (undefined1 (*) [32])(lVar50 + lVar32 + lVar18 + lVar36);
                pauVar1 = (undefined1 (*) [32])(lVar50 + lVar32 + lVar40 + lVar36);
                auVar71 = vpminub_avx2(auVar71,*(undefined1 (*) [32])
                                                (lVar29 + lVar32 + lVar16 + lVar49 + lVar36));
                auVar71 = vpminub_avx2(auVar71,*(undefined1 (*) [32])
                                                (lVar50 + lVar32 + lVar16 + lVar28 + lVar36));
                auVar70 = vpminub_avx2(auVar70,*(undefined1 (*) [32])
                                                (lVar29 + lVar16 + lVar56 + lVar32 + lVar36));
                auVar79 = vpminub_avx2(auVar79,*(undefined1 (*) [32])
                                                (lVar29 + 0x20 + lVar32 + lVar38 + lVar36));
                auVar80 = vpminub_avx2(auVar80,*(undefined1 (*) [32])
                                                (lVar29 + lVar16 + lVar66 + lVar32 + lVar36));
                auVar92 = vpminub_avx2(auVar92,*(undefined1 (*) [32])
                                                (lVar29 + lVar32 + lVar16 + lVar62 + lVar36));
                auVar92 = vpminub_avx2(auVar92,*(undefined1 (*) [32])
                                                (lVar50 + lVar54 + lVar32 + lVar36));
                auVar93 = vpminub_avx2(auVar93,*(undefined1 (*) [32])
                                                (lVar29 + 0x20 + lVar55 + lVar32 + lVar36));
                lVar15 = lVar50 + 0x20;
                auVar89 = vpminub_avx2(auVar89,*(undefined1 (*) [32])
                                                (lVar29 + 0x20 + lVar44 + lVar32 + lVar36));
                auVar77 = vpminub_avx2(auVar77,*(undefined1 (*) [32])
                                                (lVar29 + 0x20 + lVar25 + lVar32 + lVar36));
                lVar33 = lVar50 + 0x20;
                lVar29 = lVar29 + lVar31;
                auVar79 = vpminub_avx2(auVar79,*(undefined1 (*) [32])
                                                (lVar50 + 0x20 + lVar32 + lVar30 + lVar24 + lVar36))
                ;
                lVar34 = lVar50 + 0x20;
                lVar50 = lVar50 + param_2;
                auVar80 = vpminub_avx2(auVar80,*pauVar69);
                auVar93 = vpminub_avx2(auVar93,*(undefined1 (*) [32])
                                                (lVar15 + lVar32 + lVar39 + lVar36));
                auVar70 = vpminub_avx2(auVar70,*pauVar1);
                auVar89 = vpminub_avx2(auVar89,*(undefined1 (*) [32])
                                                (lVar33 + lVar65 + lVar32 + lVar36));
                auVar77 = vpminub_avx2(auVar77,*(undefined1 (*) [32])
                                                (lVar34 + lVar41 + lVar32 + lVar36));
                auVar74 = auVar71;
              } while (uVar45 < param_7);
            }
            in_ZMM10 = ZEXT3264(auVar92);
            in_ZMM9 = ZEXT3264(auVar89);
            in_ZMM5 = ZEXT3264(auVar79);
            in_ZMM4 = ZEXT3264(auVar71);
            in_ZMM3 = ZEXT3264(auVar77);
            uVar26 = uVar26 + 1;
            lVar19 = lVar19 + 0x40;
            *pauStack_2b0 = auVar74;
            pauStack_2b0[1] = auVar79;
            *(undefined1 (*) [32])(*pauStack_2b0 + param_4) = auVar80;
            *(undefined1 (*) [32])(pauStack_2b0[1] + param_4) = auVar93;
            *(undefined1 (*) [32])(*pauStack_2b0 + lVar20) = auVar70;
            *(undefined1 (*) [32])(pauStack_2b0[1] + lVar20) = auVar89;
            *(undefined1 (*) [32])(*pauStack_2b0 + lVar68) = auVar92;
            *(undefined1 (*) [32])(pauStack_2b0[1] + lVar68) = auVar77;
            pauStack_2b0 = pauStack_2b0 + 2;
            lVar36 = lVar36 + 0x40;
          } while (uVar26 < uVar23);
          auVar71 = vpcmpeqd_avx2(auVar89,auVar89);
          auVar72 = ZEXT3264(auVar71);
          auVar76 = vpcmpeqd_avx(auVar77._0_16_,auVar77._0_16_);
          auVar75 = ZEXT1664(auVar76);
          lVar50 = lVar36;
        }
      }
      else if (0 < (longlong)uVar17) {
        do {
          auVar77 = vpcmpeqd_avx2(in_ZMM9._0_32_,in_ZMM9._0_32_);
          auVar71 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
          auVar99 = ZEXT3264(auVar77);
          auVar97 = ZEXT3264(auVar77);
          auVar95 = ZEXT3264(auVar77);
          auVar102 = ZEXT3264(auVar77);
          auVar103 = ZEXT3264(auVar77);
          auVar72 = ZEXT3264(auVar77);
          auVar75 = ZEXT3264(auVar77);
          auVar82 = ZEXT3264(auVar77);
          auVar79 = auVar77;
          auVar80 = auVar77;
          auVar92 = auVar77;
          if (0 < (longlong)param_7) {
            uVar45 = 0;
            lVar50 = 0;
            do {
              pauVar69 = (undefined1 (*) [32])(lVar50 + lVar32 + lVar16 + lVar49 + lVar36);
              uVar45 = uVar45 + 1;
              lVar29 = lVar50 + 0x20;
              pauVar1 = (undefined1 (*) [32])(lVar50 + lVar16 + lVar66 + lVar32 + lVar36);
              lVar15 = lVar50 + 0x20;
              pauVar2 = (undefined1 (*) [32])(lVar50 + lVar16 + lVar56 + lVar32 + lVar36);
              lVar33 = lVar50 + 0x20;
              pauVar3 = (undefined1 (*) [32])(lVar50 + lVar32 + lVar16 + lVar62 + lVar36);
              lVar34 = lVar50 + 0x20;
              lVar50 = lVar50 + lVar31;
              auVar71 = vpminub_avx2(auVar99._0_32_,*pauVar69);
              auVar99 = ZEXT3264(auVar71);
              auVar92 = vpminub_avx2(auVar97._0_32_,
                                     *(undefined1 (*) [32])(lVar29 + lVar32 + lVar38 + lVar36));
              auVar97 = ZEXT3264(auVar92);
              auVar79 = vpminub_avx2(auVar95._0_32_,*pauVar1);
              auVar95 = ZEXT3264(auVar79);
              auVar80 = vpminub_avx2(auVar102._0_32_,
                                     *(undefined1 (*) [32])(lVar15 + lVar55 + lVar32 + lVar36));
              auVar102 = ZEXT3264(auVar80);
              auVar77 = vpminub_avx2(auVar103._0_32_,*pauVar2);
              auVar103 = ZEXT3264(auVar77);
              auVar77 = vpminub_avx2(auVar72._0_32_,
                                     *(undefined1 (*) [32])(lVar33 + lVar44 + lVar32 + lVar36));
              auVar72 = ZEXT3264(auVar77);
              auVar77 = vpminub_avx2(auVar75._0_32_,*pauVar3);
              auVar75 = ZEXT3264(auVar77);
              auVar77 = vpminub_avx2(auVar82._0_32_,
                                     *(undefined1 (*) [32])(lVar34 + lVar25 + lVar32 + lVar36));
              auVar82 = ZEXT3264(auVar77);
            } while (uVar45 < param_7);
          }
          auVar93 = auVar103._0_32_;
          auVar89 = auVar75._0_32_;
          auVar70 = auVar72._0_32_;
          uVar45 = 0;
          lVar50 = 0;
          auVar74 = auVar82._0_32_;
          auVar98 = auVar99._0_32_;
          auVar96 = auVar97._0_32_;
          auVar94 = auVar95._0_32_;
          auVar101 = auVar102._0_32_;
          if (0 < (longlong)param_8) {
            do {
              pauVar69 = (undefined1 (*) [32])(lVar50 + lVar32 + lVar16 + lVar28 + lVar36);
              uVar45 = uVar45 + 1;
              lVar29 = lVar50 + 0x20;
              pauVar1 = (undefined1 (*) [32])(lVar50 + lVar32 + lVar18 + lVar36);
              lVar15 = lVar50 + 0x20;
              pauVar2 = (undefined1 (*) [32])(lVar50 + lVar32 + lVar40 + lVar36);
              lVar33 = lVar50 + 0x20;
              pauVar3 = (undefined1 (*) [32])(lVar50 + lVar54 + lVar32 + lVar36);
              lVar34 = lVar50 + 0x20;
              lVar50 = lVar50 + param_2;
              auVar71 = vpminub_avx2(auVar99._0_32_,*pauVar69);
              auVar99 = ZEXT3264(auVar71);
              auVar92 = vpminub_avx2(auVar97._0_32_,
                                     *(undefined1 (*) [32])
                                      (lVar29 + lVar32 + lVar30 + lVar24 + lVar36));
              auVar97 = ZEXT3264(auVar92);
              auVar79 = vpminub_avx2(auVar95._0_32_,*pauVar1);
              auVar95 = ZEXT3264(auVar79);
              auVar80 = vpminub_avx2(auVar102._0_32_,
                                     *(undefined1 (*) [32])(lVar15 + lVar32 + lVar39 + lVar36));
              auVar102 = ZEXT3264(auVar80);
              auVar93 = vpminub_avx2(auVar103._0_32_,*pauVar2);
              auVar103 = ZEXT3264(auVar93);
              auVar70 = vpminub_avx2(auVar72._0_32_,
                                     *(undefined1 (*) [32])(lVar33 + lVar65 + lVar32 + lVar36));
              auVar72 = ZEXT3264(auVar70);
              auVar89 = vpminub_avx2(auVar75._0_32_,*pauVar3);
              auVar75 = ZEXT3264(auVar89);
              auVar77 = vpminub_avx2(auVar82._0_32_,
                                     *(undefined1 (*) [32])(lVar34 + lVar41 + lVar32 + lVar36));
              auVar82 = ZEXT3264(auVar77);
              auVar74 = auVar77;
              auVar98 = auVar71;
              auVar96 = auVar92;
              auVar94 = auVar79;
              auVar101 = auVar80;
            } while (uVar45 < param_8);
          }
          in_ZMM10 = ZEXT3264(auVar71);
          in_ZMM9 = ZEXT3264(auVar92);
          in_ZMM5 = ZEXT3264(auVar80);
          in_ZMM4 = ZEXT3264(auVar79);
          in_ZMM3 = ZEXT3264(auVar77);
          uVar26 = uVar26 + 1;
          lVar19 = lVar19 + 0x40;
          *pauStack_2b0 = auVar98;
          pauStack_2b0[1] = auVar96;
          *(undefined1 (*) [32])(*pauStack_2b0 + param_4) = auVar94;
          *(undefined1 (*) [32])(pauStack_2b0[1] + param_4) = auVar101;
          *(undefined1 (*) [32])(*pauStack_2b0 + lVar20) = auVar93;
          *(undefined1 (*) [32])(pauStack_2b0[1] + lVar20) = auVar70;
          *(undefined1 (*) [32])(*pauStack_2b0 + lVar68) = auVar89;
          *(undefined1 (*) [32])(pauStack_2b0[1] + lVar68) = auVar74;
          pauStack_2b0 = pauStack_2b0 + 2;
          lVar36 = lVar36 + 0x40;
        } while (uVar26 < uVar23);
        auVar77 = vpcmpeqd_avx2(auVar70,auVar70);
        auVar72 = ZEXT3264(auVar77);
        auVar76 = vpcmpeqd_avx(auVar74._0_16_,auVar74._0_16_);
        auVar75 = ZEXT1664(auVar76);
        lVar50 = lVar36;
      }
      uVar26 = 0;
      lVar36 = 0;
      if (lVar50 < (longlong)uVar27) {
        lVar32 = lVar19 + lVar49;
        lVar29 = lVar19 + lVar56;
        lVar34 = lVar53 + lVar19;
        lVar33 = lVar58 + lVar19;
        lVar15 = lVar66 + lVar19;
        lVar63 = lVar28 + lVar19;
        lVar59 = lVar35 + lVar19;
        uVar45 = (uVar27 + 0x1f) - lVar50;
        lVar67 = lVar62 + lVar19;
        do {
          auVar71 = auVar72._0_32_;
          auVar77 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
          in_ZMM4 = ZEXT3264(auVar71);
          in_ZMM5 = ZEXT3264(auVar71);
          auVar82 = ZEXT3264(auVar71);
          in_ZMM3 = ZEXT3264(auVar71);
          if (0 < (longlong)param_7) {
            uVar51 = 0;
            lVar46 = 0;
            do {
              pauVar69 = (undefined1 (*) [32])(lVar46 + lVar32 + lVar36);
              uVar51 = uVar51 + 1;
              pauVar1 = (undefined1 (*) [32])(lVar46 + lVar15 + lVar36);
              pauVar2 = (undefined1 (*) [32])(lVar46 + lVar29 + lVar36);
              pauVar3 = (undefined1 (*) [32])(lVar46 + lVar67 + lVar36);
              lVar46 = lVar46 + lVar31;
              auVar77 = vpminub_avx2(in_ZMM4._0_32_,*pauVar69);
              in_ZMM4 = ZEXT3264(auVar77);
              auVar71 = vpminub_avx2(in_ZMM5._0_32_,*pauVar1);
              in_ZMM5 = ZEXT3264(auVar71);
              auVar92 = vpminub_avx2(auVar82._0_32_,*pauVar2);
              auVar82 = ZEXT3264(auVar92);
              auVar92 = vpminub_avx2(in_ZMM3._0_32_,*pauVar3);
              in_ZMM3 = ZEXT3264(auVar92);
            } while (uVar51 < param_7);
          }
          auVar92 = auVar82._0_32_;
          uVar51 = 0;
          lVar46 = 0;
          if (0 < (longlong)param_8) {
            do {
              pauVar69 = (undefined1 (*) [32])(lVar46 + lVar63 + lVar36);
              uVar51 = uVar51 + 1;
              pauVar1 = (undefined1 (*) [32])(lVar46 + lVar59 + lVar36);
              pauVar2 = (undefined1 (*) [32])(lVar46 + lVar34 + lVar36);
              pauVar3 = (undefined1 (*) [32])(lVar46 + lVar33 + lVar36);
              lVar46 = lVar46 + param_2;
              auVar77 = vpminub_avx2(in_ZMM4._0_32_,*pauVar69);
              in_ZMM4 = ZEXT3264(auVar77);
              auVar71 = vpminub_avx2(in_ZMM5._0_32_,*pauVar1);
              in_ZMM5 = ZEXT3264(auVar71);
              auVar92 = vpminub_avx2(auVar82._0_32_,*pauVar2);
              auVar82 = ZEXT3264(auVar92);
              auVar79 = vpminub_avx2(in_ZMM3._0_32_,*pauVar3);
              in_ZMM3 = ZEXT3264(auVar79);
            } while (uVar51 < param_8);
          }
          in_ZMM10 = ZEXT3264(auVar77);
          in_ZMM9 = ZEXT3264(auVar71);
          uVar26 = uVar26 + 1;
          lVar19 = lVar19 + 0x20;
          *pauStack_2b0 = in_ZMM4._0_32_;
          lVar50 = lVar50 + 0x20;
          *(undefined1 (*) [32])(*pauStack_2b0 + param_4) = in_ZMM5._0_32_;
          *(undefined1 (*) [32])(*pauStack_2b0 + lVar20) = auVar92;
          *(undefined1 (*) [32])(*pauStack_2b0 + lVar68) = in_ZMM3._0_32_;
          pauStack_2b0 = pauStack_2b0 + 1;
          lVar36 = lVar36 + 0x20;
        } while (uVar26 < uVar45 >> 5);
        if ((param_7 == 3) && (param_8 == 3)) goto LAB_140558cb5;
        uVar26 = 0;
        lVar36 = 0;
        if (lVar50 < (longlong)uVar27) {
          lVar32 = lVar35 + lVar19;
          lVar29 = lVar49 + lVar19;
          lVar63 = 0x1f - lVar50;
          lVar15 = lVar53 + lVar19;
          lVar33 = lVar66 + lVar19;
          lVar34 = lVar58 + lVar19;
          lVar59 = lVar56 + lVar19;
          lVar67 = lVar28 + lVar19;
          lVar46 = lVar62 + lVar19;
          do {
            auVar76 = vpcmpeqd_avx(in_ZMM9._0_16_,in_ZMM9._0_16_);
            auVar73 = vpcmpeqd_avx(in_ZMM10._0_16_,in_ZMM10._0_16_);
            auVar99 = ZEXT1664(auVar76);
            auVar97 = ZEXT1664(auVar76);
            auVar95 = ZEXT1664(auVar76);
            auVar102 = ZEXT1664(auVar76);
            auVar103 = ZEXT1664(auVar76);
            auVar72 = ZEXT1664(auVar76);
            auVar75 = ZEXT1664(auVar76);
            auVar82 = ZEXT1664(auVar76);
            auVar85 = auVar76;
            auVar87 = auVar76;
            auVar83 = auVar76;
            if (0 < (longlong)param_7) {
              uVar45 = 0;
              lVar57 = lVar29 + lVar36;
              lVar60 = lVar33 + lVar36;
              lVar64 = lVar59 + lVar36;
              lVar52 = lVar46 + lVar36;
              lVar47 = 0;
              do {
                pauVar4 = (undefined1 (*) [16])(lVar47 + lVar57);
                lVar8 = lVar47 + 0x10;
                pauVar5 = (undefined1 (*) [16])(lVar47 + lVar60);
                lVar9 = lVar47 + 0x10;
                pauVar6 = (undefined1 (*) [16])(lVar47 + lVar64);
                lVar10 = lVar47 + 0x10;
                pauVar7 = (undefined1 (*) [16])(lVar47 + lVar52);
                lVar11 = lVar47 + 0x10;
                uVar45 = uVar45 + 1;
                lVar47 = lVar47 + lVar31;
                auVar73 = vpminub_avx(auVar99._0_16_,*pauVar4);
                auVar99 = ZEXT1664(auVar73);
                auVar83 = vpminub_avx(auVar97._0_16_,*pauVar5);
                auVar97 = ZEXT1664(auVar83);
                auVar85 = vpminub_avx(auVar95._0_16_,*pauVar6);
                auVar95 = ZEXT1664(auVar85);
                auVar87 = vpminub_avx(auVar102._0_16_,*pauVar7);
                auVar102 = ZEXT1664(auVar87);
                auVar76 = vpminub_avx(auVar103._0_16_,*(undefined1 (*) [16])(lVar8 + lVar57));
                auVar103 = ZEXT1664(auVar76);
                auVar76 = vpminub_avx(auVar72._0_16_,*(undefined1 (*) [16])(lVar9 + lVar60));
                auVar72 = ZEXT1664(auVar76);
                auVar76 = vpminub_avx(auVar75._0_16_,*(undefined1 (*) [16])(lVar10 + lVar64));
                auVar75 = ZEXT1664(auVar76);
                auVar76 = vpminub_avx(auVar82._0_16_,*(undefined1 (*) [16])(lVar11 + lVar52));
                auVar82 = ZEXT1664(auVar76);
              } while (uVar45 < param_7);
            }
            auVar90 = auVar103._0_16_;
            auVar84 = auVar75._0_16_;
            auVar77 = auVar72._0_32_;
            uVar45 = 0;
            lVar52 = 0;
            auVar86 = auVar82._0_16_;
            auVar88 = auVar99._0_16_;
            auVar91 = auVar97._0_16_;
            auVar78 = auVar95._0_16_;
            auVar100 = auVar102._0_16_;
            if (0 < (longlong)param_8) {
              lVar57 = lVar67 + lVar36;
              lVar60 = lVar32 + lVar36;
              lVar64 = lVar15 + lVar36;
              lVar47 = lVar34 + lVar36;
              do {
                pauVar4 = (undefined1 (*) [16])(lVar52 + lVar57);
                lVar8 = lVar52 + 0x10;
                pauVar5 = (undefined1 (*) [16])(lVar52 + lVar60);
                lVar9 = lVar52 + 0x10;
                pauVar6 = (undefined1 (*) [16])(lVar52 + lVar64);
                lVar10 = lVar52 + 0x10;
                pauVar7 = (undefined1 (*) [16])(lVar52 + lVar47);
                lVar11 = lVar52 + 0x10;
                uVar45 = uVar45 + 1;
                lVar52 = lVar52 + param_2;
                auVar73 = vpminub_avx(auVar99._0_16_,*pauVar4);
                auVar99 = ZEXT1664(auVar73);
                auVar83 = vpminub_avx(auVar97._0_16_,*pauVar5);
                auVar97 = ZEXT1664(auVar83);
                auVar85 = vpminub_avx(auVar95._0_16_,*pauVar6);
                auVar95 = ZEXT1664(auVar85);
                auVar87 = vpminub_avx(auVar102._0_16_,*pauVar7);
                auVar102 = ZEXT1664(auVar87);
                auVar90 = vpminub_avx(auVar103._0_16_,*(undefined1 (*) [16])(lVar8 + lVar57));
                auVar103 = ZEXT1664(auVar90);
                auVar76 = vpminub_avx(auVar72._0_16_,*(undefined1 (*) [16])(lVar9 + lVar60));
                auVar72 = ZEXT1664(auVar76);
                auVar77 = ZEXT1632(auVar76);
                auVar84 = vpminub_avx(auVar75._0_16_,*(undefined1 (*) [16])(lVar10 + lVar64));
                auVar75 = ZEXT1664(auVar84);
                auVar76 = vpminub_avx(auVar82._0_16_,*(undefined1 (*) [16])(lVar11 + lVar47));
                auVar82 = ZEXT1664(auVar76);
                auVar86 = auVar76;
                auVar88 = auVar73;
                auVar91 = auVar83;
                auVar78 = auVar85;
                auVar100 = auVar87;
              } while (uVar45 < param_8);
            }
            in_ZMM10 = ZEXT1664(auVar73);
            in_ZMM9 = ZEXT1664(auVar83);
            in_ZMM5 = ZEXT1664(auVar87);
            in_ZMM4 = ZEXT1664(auVar85);
            in_ZMM3 = ZEXT1664(auVar76);
            uVar26 = uVar26 + 1;
            *(undefined1 (*) [16])*pauStack_2b0 = auVar88;
            *(undefined1 (*) [16])(*pauStack_2b0 + param_4) = auVar91;
            *(undefined1 (*) [16])(*pauStack_2b0 + lVar20) = auVar78;
            *(undefined1 (*) [16])(*pauStack_2b0 + lVar68) = auVar100;
            *(undefined1 (*) [16])(*pauStack_2b0 + 0x10) = auVar90;
            *(undefined1 (*) [16])(*pauStack_2b0 + param_4 + 0x10) = auVar77._0_16_;
            *(undefined1 (*) [16])(*pauStack_2b0 + lVar20 + 0x10) = auVar84;
            *(undefined1 (*) [16])(*pauStack_2b0 + lVar68 + 0x10) = auVar86;
            lVar19 = lVar19 + 0x20;
            pauStack_2b0 = pauStack_2b0 + 1;
            lVar50 = lVar50 + 0x20;
            lVar36 = lVar36 + 0x20;
          } while (uVar26 < lVar63 + uVar27 >> 5);
          auVar77 = vpcmpeqd_avx2(auVar77,auVar77);
          auVar72 = ZEXT3264(auVar77);
          auVar76 = vpcmpeqd_avx(auVar86,auVar86);
          auVar75 = ZEXT1664(auVar76);
        }
LAB_140557108:
        uVar26 = 0;
        lVar36 = 0;
        if (lVar50 < (longlong)uVar48) {
          lVar32 = lVar19 + lVar49;
          lVar29 = lVar19 + lVar56;
          lVar34 = lVar53 + lVar19;
          lVar33 = lVar58 + lVar19;
          lVar15 = lVar66 + lVar19;
          lVar63 = lVar28 + lVar19;
          lVar59 = lVar35 + lVar19;
          uVar45 = (uVar48 + 0xf) - lVar50;
          lVar67 = lVar62 + lVar19;
          do {
            auVar73 = auVar75._0_16_;
            auVar76 = vpcmpeqd_avx(in_ZMM10._0_16_,in_ZMM10._0_16_);
            in_ZMM3 = ZEXT1664(auVar73);
            in_ZMM4 = ZEXT1664(auVar73);
            auVar82 = ZEXT1664(auVar73);
            in_ZMM5 = ZEXT1664(auVar73);
            if (0 < (longlong)param_7) {
              uVar51 = 0;
              lVar46 = 0;
              do {
                pauVar4 = (undefined1 (*) [16])(lVar46 + lVar32 + lVar36);
                pauVar5 = (undefined1 (*) [16])(lVar46 + lVar15 + lVar36);
                pauVar6 = (undefined1 (*) [16])(lVar46 + lVar29 + lVar36);
                pauVar7 = (undefined1 (*) [16])(lVar46 + lVar67 + lVar36);
                uVar51 = uVar51 + 1;
                lVar46 = lVar46 + lVar31;
                auVar76 = vpminub_avx(in_ZMM3._0_16_,*pauVar4);
                in_ZMM3 = ZEXT1664(auVar76);
                auVar73 = vpminub_avx(in_ZMM4._0_16_,*pauVar5);
                in_ZMM4 = ZEXT1664(auVar73);
                auVar83 = vpminub_avx(auVar82._0_16_,*pauVar6);
                auVar82 = ZEXT1664(auVar83);
                auVar83 = vpminub_avx(in_ZMM5._0_16_,*pauVar7);
                in_ZMM5 = ZEXT1664(auVar83);
              } while (uVar51 < param_7);
            }
            auVar83 = auVar82._0_16_;
            uVar51 = 0;
            lVar46 = 0;
            if (0 < (longlong)param_8) {
              do {
                pauVar4 = (undefined1 (*) [16])(lVar46 + lVar63 + lVar36);
                pauVar5 = (undefined1 (*) [16])(lVar46 + lVar59 + lVar36);
                pauVar6 = (undefined1 (*) [16])(lVar46 + lVar34 + lVar36);
                pauVar7 = (undefined1 (*) [16])(lVar46 + lVar33 + lVar36);
                uVar51 = uVar51 + 1;
                lVar46 = lVar46 + param_2;
                auVar76 = vpminub_avx(in_ZMM3._0_16_,*pauVar4);
                in_ZMM3 = ZEXT1664(auVar76);
                auVar73 = vpminub_avx(in_ZMM4._0_16_,*pauVar5);
                in_ZMM4 = ZEXT1664(auVar73);
                auVar83 = vpminub_avx(auVar82._0_16_,*pauVar6);
                auVar82 = ZEXT1664(auVar83);
                auVar85 = vpminub_avx(in_ZMM5._0_16_,*pauVar7);
                in_ZMM5 = ZEXT1664(auVar85);
              } while (uVar51 < param_8);
            }
            in_ZMM10 = ZEXT1664(auVar76);
            in_ZMM9 = ZEXT1664(auVar73);
            uVar26 = uVar26 + 1;
            lVar19 = lVar19 + 0x10;
            *(undefined1 (*) [16])*pauStack_2b0 = in_ZMM3._0_16_;
            *(undefined1 (*) [16])(*pauStack_2b0 + param_4) = in_ZMM4._0_16_;
            *(undefined1 (*) [16])(*pauStack_2b0 + lVar20) = auVar83;
            *(undefined1 (*) [16])(*pauStack_2b0 + lVar68) = in_ZMM5._0_16_;
            pauStack_2b0 = (undefined1 (*) [32])(*pauStack_2b0 + 0x10);
            lVar50 = lVar50 + 0x10;
            lVar36 = lVar36 + 0x10;
          } while (uVar26 < uVar45 >> 4);
        }
      }
      else {
        if ((param_7 != 3) || (param_8 != 3)) goto LAB_140557108;
LAB_140558cb5:
        lVar36 = 0;
        if (lVar50 < (longlong)uVar48) {
          uVar26 = 0;
          do {
            uVar45 = uVar26;
            auVar76 = *(undefined1 (*) [16])(lVar36 + lVar19 + lVar35);
            uVar26 = uVar45 + 1;
            auVar73 = vpminub_avx(*(undefined1 (*) [16])(lVar36 + lVar19 + lVar49),
                                  *(undefined1 (*) [16])(lVar36 + lVar28 + lVar19));
            auVar83 = vpminub_avx(auVar73,*(undefined1 (*) [16])(lVar36 + lVar19 + lVar31 + lVar49))
            ;
            auVar73 = *(undefined1 (*) [16])(lVar36 + lVar53 + lVar19);
            auVar85 = vpminub_avx(auVar83,auVar76);
            auVar83 = *(undefined1 (*) [16])(lVar36 + lVar19 + lVar30);
            in_ZMM3 = ZEXT1664(auVar83);
            auVar85 = vpminub_avx(auVar85,*(undefined1 (*) [16])
                                           (lVar36 + lVar19 + lVar49 + lVar31 * 2));
            auVar87 = vpminub_avx(auVar85,auVar73);
            auVar85 = *(undefined1 (*) [16])(lVar36 + lVar19 + param_2 * 5 + lVar28);
            in_ZMM4 = ZEXT1664(auVar85);
            auVar76 = vpminub_avx(auVar76,*(undefined1 (*) [16])(lVar36 + lVar66 + lVar19));
            auVar76 = vpminub_avx(auVar76,*(undefined1 (*) [16])(lVar36 + lVar31 + lVar66 + lVar19))
            ;
            auVar76 = vpminub_avx(auVar76,auVar73);
            auVar90 = vpminub_avx(auVar76,*(undefined1 (*) [16])
                                           (lVar36 + lVar19 + lVar66 + lVar31 * 2));
            auVar76 = *(undefined1 (*) [16])(lVar36 + lVar58 + lVar19);
            auVar90 = vpminub_avx(auVar90,auVar76);
            in_ZMM5 = ZEXT1664(auVar90);
            auVar73 = vpminub_avx(auVar73,*(undefined1 (*) [16])(lVar36 + lVar19 + lVar56));
            auVar73 = vpminub_avx(auVar73,*(undefined1 (*) [16])(lVar36 + lVar31 + lVar56 + lVar19))
            ;
            auVar73 = vpminub_avx(auVar73,auVar76);
            auVar73 = vpminub_avx(auVar73,*(undefined1 (*) [16])
                                           (lVar36 + lVar19 + lVar56 + lVar31 * 2));
            auVar73 = vpminub_avx(auVar73,auVar83);
            in_ZMM10 = ZEXT1664(auVar73);
            auVar76 = vpminub_avx(auVar76,*(undefined1 (*) [16])(lVar36 + lVar62 + lVar19));
            auVar76 = vpminub_avx(auVar76,*(undefined1 (*) [16])(lVar36 + lVar31 + lVar62 + lVar19))
            ;
            auVar76 = vpminub_avx(auVar76,auVar83);
            auVar76 = vpminub_avx(auVar76,*(undefined1 (*) [16])
                                           (lVar36 + lVar19 + lVar62 + lVar31 * 2));
            auVar76 = vpminub_avx(auVar76,auVar85);
            in_ZMM9 = ZEXT1664(auVar76);
            *(undefined1 (*) [16])(*pauStack_2b0 + lVar36) = auVar87;
            *(undefined1 (*) [16])(*pauStack_2b0 + lVar36 + param_4) = auVar90;
            *(undefined1 (*) [16])(*pauStack_2b0 + lVar36 + param_4 * 2) = auVar73;
            *(undefined1 (*) [16])(*pauStack_2b0 + lVar36 + lVar68) = auVar76;
            lVar36 = lVar36 + 0x10;
          } while (uVar26 < (uVar48 + 0xf) - lVar50 >> 4);
          lVar36 = uVar45 * 0x10 + 0x10;
          lVar50 = lVar50 + lVar36;
          lVar19 = lVar19 + lVar36;
          pauStack_2b0 = (undefined1 (*) [32])(*pauStack_2b0 + lVar36);
        }
      }
      auVar76 = auVar72._0_16_;
      auVar77 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      uVar26 = 0;
      auVar73 = auVar75._0_16_;
      if (lVar50 < (longlong)uVar61) {
        lVar36 = lVar19 + lVar56;
        lVar32 = lVar49 + lVar19;
        lVar34 = param_2 + lVar43 + lVar19;
        lVar33 = lVar43 + param_2 * 2 + lVar19;
        lVar15 = lVar43 + param_2 * 3 + lVar19;
        lVar29 = lVar66 + lVar19;
        uVar45 = (uVar61 + 7) - lVar50;
        lVar59 = lVar43 + lVar19;
        lVar63 = lVar62 + lVar19;
        do {
          auVar95 = ZEXT1664(auVar73);
          auVar83 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
          auVar97 = ZEXT1664(auVar83);
          auVar82 = ZEXT1664(auVar73);
          auVar99 = ZEXT1664(auVar73);
          auStack_448 = auVar73;
          auStack_438 = auVar73;
          auStack_428 = auVar73;
          if (0 < (longlong)param_7) {
            uVar51 = 0;
            auVar95 = ZEXT1664(auVar73);
            auVar83 = vpcmpeqd_avx(auVar83,auVar83);
            auVar97 = ZEXT1664(auVar83);
            auVar82 = ZEXT1664(auVar73);
            lVar67 = 0;
            do {
              uVar51 = uVar51 + 1;
              auVar83._8_8_ = 0;
              auVar83._0_8_ = *(ulonglong *)(lVar67 + lVar32 + uVar26 * 8);
              auVar83 = vpminub_avx(auVar99._0_16_,auVar83);
              auVar99 = ZEXT1664(auVar83);
              uVar12 = *(ulonglong *)(lVar67 + lVar36 + uVar26 * 8);
              in_ZMM9 = ZEXT864(uVar12);
              auVar85._8_8_ = 0;
              auVar85._0_8_ = *(ulonglong *)(lVar67 + lVar29 + uVar26 * 8);
              auStack_448 = vpminub_avx(auVar97._0_16_,auVar85);
              auVar97 = ZEXT1664(auStack_448);
              uVar13 = *(ulonglong *)(lVar67 + lVar63 + uVar26 * 8);
              in_ZMM10 = ZEXT864(uVar13);
              lVar67 = lVar67 + lVar31;
              auVar87._8_8_ = 0;
              auVar87._0_8_ = uVar12;
              auStack_438 = vpminub_avx(auVar95._0_16_,auVar87);
              auVar95 = ZEXT1664(auStack_438);
              auVar90._8_8_ = 0;
              auVar90._0_8_ = uVar13;
              auStack_428 = vpminub_avx(auVar82._0_16_,auVar90);
              auVar82 = ZEXT1664(auStack_428);
            } while (uVar51 < param_7);
          }
          uVar81 = auVar99._0_8_;
          uVar51 = 0;
          lVar67 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar51 = uVar51 + 1;
              auVar84._8_8_ = 0;
              auVar84._0_8_ = *(ulonglong *)(lVar67 + lVar59 + uVar26 * 8);
              auVar83 = vpminub_avx(auVar99._0_16_,auVar84);
              auVar99 = ZEXT1664(auVar83);
              uVar81 = auVar83._0_8_;
              uVar12 = *(ulonglong *)(lVar67 + lVar33 + uVar26 * 8);
              in_ZMM9 = ZEXT864(uVar12);
              auVar86._8_8_ = 0;
              auVar86._0_8_ = *(ulonglong *)(lVar67 + lVar34 + uVar26 * 8);
              auStack_448 = vpminub_avx(auVar97._0_16_,auVar86);
              auVar97 = ZEXT1664(auStack_448);
              uVar13 = *(ulonglong *)(lVar67 + lVar15 + uVar26 * 8);
              in_ZMM10 = ZEXT864(uVar13);
              lVar67 = lVar67 + param_2;
              auVar88._8_8_ = 0;
              auVar88._0_8_ = uVar12;
              auStack_438 = vpminub_avx(auVar95._0_16_,auVar88);
              auVar95 = ZEXT1664(auStack_438);
              auVar91._8_8_ = 0;
              auVar91._0_8_ = uVar13;
              auStack_428 = vpminub_avx(auVar82._0_16_,auVar91);
              auVar82 = ZEXT1664(auStack_428);
            } while (uVar51 < param_8);
          }
          uVar26 = uVar26 + 1;
          *(undefined8 *)*pauStack_2b0 = uVar81;
          lVar19 = lVar19 + 8;
          in_ZMM3 = ZEXT1664(auStack_448);
          lVar50 = lVar50 + 8;
          *(longlong *)(*pauStack_2b0 + param_4) = auStack_448._0_8_;
          in_ZMM4 = ZEXT1664(auStack_438);
          *(longlong *)(*pauStack_2b0 + lVar20) = auStack_438._0_8_;
          in_ZMM5 = ZEXT1664(auStack_428);
          *(longlong *)(*pauStack_2b0 + lVar68) = auStack_428._0_8_;
          pauStack_2b0 = (undefined1 (*) [32])(*pauStack_2b0 + 8);
        } while (uVar26 < uVar45 >> 3);
      }
      uVar26 = 0;
      if (lVar50 < (longlong)uVar42) {
        lVar36 = lVar19 + lVar56;
        lVar32 = lVar19 + lVar49;
        lVar34 = lVar35 + lVar19;
        lVar33 = lVar53 + lVar19;
        lVar15 = lVar58 + lVar19;
        lVar29 = lVar66 + lVar19;
        uVar45 = (uVar42 + 3) - lVar50;
        lVar59 = lVar28 + lVar19;
        lVar63 = lVar62 + lVar19;
        do {
          auVar83 = vpcmpeqd_avx(in_ZMM10._0_16_,in_ZMM10._0_16_);
          in_ZMM4 = ZEXT1664(auVar73);
          auVar82 = ZEXT1664(auVar73);
          in_ZMM5 = ZEXT1664(auVar73);
          in_ZMM3 = ZEXT1664(auVar73);
          auVar85 = auVar73;
          if (0 < (longlong)param_7) {
            uVar51 = 0;
            lVar67 = 0;
            do {
              auVar83 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar32 + uVar26 * 4),0);
              uVar51 = uVar51 + 1;
              auVar85 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar29 + uVar26 * 4),0);
              auVar87 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar36 + uVar26 * 4),0);
              auVar90 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar63 + uVar26 * 4),0);
              auVar83 = vpminub_avx(in_ZMM4._0_16_,auVar83);
              in_ZMM4 = ZEXT1664(auVar83);
              auVar85 = vpminub_avx(auVar82._0_16_,auVar85);
              auVar82 = ZEXT1664(auVar85);
              auVar87 = vpminub_avx(in_ZMM5._0_16_,auVar87);
              in_ZMM5 = ZEXT1664(auVar87);
              lVar67 = lVar67 + lVar31;
              auVar87 = vpminub_avx(in_ZMM3._0_16_,auVar90);
              in_ZMM3 = ZEXT1664(auVar87);
            } while (uVar51 < param_7);
          }
          uVar51 = 0;
          lVar67 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar83 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar59 + uVar26 * 4),0);
              uVar51 = uVar51 + 1;
              auVar85 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar34 + uVar26 * 4),0);
              auVar87 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar33 + uVar26 * 4),0);
              auVar90 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar67 + lVar15 + uVar26 * 4),0);
              auVar83 = vpminub_avx(in_ZMM4._0_16_,auVar83);
              in_ZMM4 = ZEXT1664(auVar83);
              auVar85 = vpminub_avx(auVar82._0_16_,auVar85);
              auVar82 = ZEXT1664(auVar85);
              auVar87 = vpminub_avx(in_ZMM5._0_16_,auVar87);
              in_ZMM5 = ZEXT1664(auVar87);
              lVar67 = lVar67 + param_2;
              auVar87 = vpminub_avx(in_ZMM3._0_16_,auVar90);
              in_ZMM3 = ZEXT1664(auVar87);
            } while (uVar51 < param_8);
          }
          in_ZMM10 = ZEXT1664(auVar83);
          in_ZMM9 = ZEXT1664(auVar85);
          uVar26 = uVar26 + 1;
          lVar19 = lVar19 + 4;
          *(int *)*pauStack_2b0 = in_ZMM4._0_4_;
          lVar50 = lVar50 + 4;
          *(int *)(*pauStack_2b0 + param_4) = auVar82._0_4_;
          *(int *)(*pauStack_2b0 + lVar20) = in_ZMM5._0_4_;
          *(int *)(*pauStack_2b0 + lVar68) = in_ZMM3._0_4_;
          pauStack_2b0 = (undefined1 (*) [32])(*pauStack_2b0 + 4);
        } while (uVar26 < uVar45 >> 2);
      }
      uVar26 = 0;
      if (lVar50 < (longlong)uVar21) {
        lVar36 = lVar19 + lVar56;
        lVar32 = lVar19 + lVar49;
        lVar34 = lVar35 + lVar19;
        lVar33 = lVar53 + lVar19;
        lVar15 = lVar58 + lVar19;
        lVar29 = lVar66 + lVar19;
        uVar45 = (uVar21 + 1) - lVar50;
        lVar59 = lVar28 + lVar19;
        lVar63 = lVar62 + lVar19;
        do {
          auVar83 = vpcmpeqd_avx(in_ZMM10._0_16_,in_ZMM10._0_16_);
          in_ZMM4 = ZEXT1664(auVar73);
          auVar82 = ZEXT1664(auVar73);
          in_ZMM5 = ZEXT1664(auVar73);
          in_ZMM3 = ZEXT1664(auVar73);
          auVar85 = auVar73;
          if (0 < (longlong)param_7) {
            uVar51 = 0;
            lVar67 = 0;
            do {
              uVar51 = uVar51 + 1;
              auVar83 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar32 + uVar26 * 2),0);
              auVar85 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar29 + uVar26 * 2),0);
              auVar83 = vpminub_avx(in_ZMM4._0_16_,auVar83);
              in_ZMM4 = ZEXT1664(auVar83);
              auVar87 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar36 + uVar26 * 2),0);
              auVar85 = vpminub_avx(auVar82._0_16_,auVar85);
              auVar82 = ZEXT1664(auVar85);
              auVar90 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar63 + uVar26 * 2),0);
              lVar67 = lVar67 + lVar31;
              auVar87 = vpminub_avx(in_ZMM5._0_16_,auVar87);
              in_ZMM5 = ZEXT1664(auVar87);
              auVar87 = vpminub_avx(in_ZMM3._0_16_,auVar90);
              in_ZMM3 = ZEXT1664(auVar87);
            } while (uVar51 < param_7);
          }
          uVar51 = 0;
          lVar67 = 0;
          auVar87 = auVar82._0_16_;
          if (0 < (longlong)param_8) {
            do {
              uVar51 = uVar51 + 1;
              auVar83 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar59 + uVar26 * 2),0);
              auVar85 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar34 + uVar26 * 2),0);
              auVar83 = vpminub_avx(in_ZMM4._0_16_,auVar83);
              in_ZMM4 = ZEXT1664(auVar83);
              auVar87 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar33 + uVar26 * 2),0);
              auVar85 = vpminub_avx(auVar82._0_16_,auVar85);
              auVar82 = ZEXT1664(auVar85);
              auVar90 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar67 + lVar15 + uVar26 * 2),0);
              lVar67 = lVar67 + param_2;
              auVar87 = vpminub_avx(in_ZMM5._0_16_,auVar87);
              in_ZMM5 = ZEXT1664(auVar87);
              auVar87 = vpminub_avx(in_ZMM3._0_16_,auVar90);
              in_ZMM3 = ZEXT1664(auVar87);
              auVar87 = auVar85;
            } while (uVar51 < param_8);
          }
          in_ZMM10 = ZEXT1664(auVar83);
          in_ZMM9 = ZEXT1664(auVar85);
          uVar26 = uVar26 + 1;
          lVar19 = lVar19 + 2;
          vpextrw_avx(in_ZMM4._0_16_,0);
          lVar50 = lVar50 + 2;
          vpextrw_avx(auVar87,0);
          vpextrw_avx(in_ZMM5._0_16_,0);
          vpextrw_avx(in_ZMM3._0_16_,0);
          pauStack_2b0 = (undefined1 (*) [32])(*pauStack_2b0 + 2);
        } while (uVar26 < uVar45 >> 1);
      }
      uVar26 = 0;
      if (lVar50 < (longlong)param_5) {
        do {
          auVar83 = vpcmpeqd_avx(in_ZMM10._0_16_,in_ZMM10._0_16_);
          in_ZMM4 = ZEXT1664(auVar73);
          auVar82 = ZEXT1664(auVar73);
          in_ZMM5 = ZEXT1664(auVar73);
          in_ZMM3 = ZEXT1664(auVar73);
          auVar85 = auVar73;
          if (0 < (longlong)param_7) {
            uVar45 = 0;
            lVar36 = 0;
            do {
              auVar83 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar36 + lVar19 + lVar49 + uVar26),0);
              uVar45 = uVar45 + 1;
              auVar85 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar36 + lVar66 + lVar19 + uVar26),0);
              auVar87 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar36 + lVar19 + lVar56 + uVar26),0);
              auVar90 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar36 + lVar19 + lVar62 + uVar26),0);
              auVar83 = vpminub_avx(in_ZMM4._0_16_,auVar83);
              in_ZMM4 = ZEXT1664(auVar83);
              auVar85 = vpminub_avx(auVar82._0_16_,auVar85);
              auVar82 = ZEXT1664(auVar85);
              auVar87 = vpminub_avx(in_ZMM5._0_16_,auVar87);
              in_ZMM5 = ZEXT1664(auVar87);
              lVar36 = lVar36 + lVar31;
              auVar87 = vpminub_avx(in_ZMM3._0_16_,auVar90);
              in_ZMM3 = ZEXT1664(auVar87);
            } while (uVar45 < param_7);
          }
          uVar45 = 0;
          lVar36 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar83 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar36 + lVar28 + lVar19 + uVar26),0);
              uVar45 = uVar45 + 1;
              auVar85 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar36 + lVar35 + lVar19 + uVar26),0);
              auVar87 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar36 + lVar19 + lVar53 + uVar26),0);
              auVar90 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar36 + lVar19 + lVar58 + uVar26),0);
              auVar83 = vpminub_avx(in_ZMM4._0_16_,auVar83);
              in_ZMM4 = ZEXT1664(auVar83);
              auVar85 = vpminub_avx(auVar82._0_16_,auVar85);
              auVar82 = ZEXT1664(auVar85);
              auVar87 = vpminub_avx(in_ZMM5._0_16_,auVar87);
              in_ZMM5 = ZEXT1664(auVar87);
              lVar36 = lVar36 + param_2;
              auVar87 = vpminub_avx(in_ZMM3._0_16_,auVar90);
              in_ZMM3 = ZEXT1664(auVar87);
            } while (uVar45 < param_8);
          }
          in_ZMM10 = ZEXT1664(auVar83);
          in_ZMM9 = ZEXT1664(auVar85);
          uVar26 = uVar26 + 1;
          (*pauStack_2b0)[0] = in_ZMM4[0];
          (*pauStack_2b0)[param_4] = auVar82[0];
          (*pauStack_2b0)[lVar20] = in_ZMM5[0];
          (*pauStack_2b0)[lVar68] = in_ZMM3[0];
          pauStack_2b0 = (undefined1 (*) [32])(*pauStack_2b0 + 1);
        } while (uVar26 < param_5 - lVar50);
      }
      lVar36 = uStack_488 * 4 + 4;
      uStack_488 = uStack_488 + 1;
    } while (uStack_488 <
             (ulonglong)
             ((longlong)(((ulonglong)((longlong)(uVar22 + 3) >> 1) >> 0x3e) + 3 + uVar22) >> 2));
    in_ZMM11 = ZEXT1664(in_ZMM11._0_16_);
  }
  uVar22 = 0;
  lVar35 = 0;
  lVar30 = 0;
  if (lVar36 < (longlong)param_6) {
    lVar53 = param_2 * lVar36;
    lVar16 = uVar37 * param_2;
    auVar77 = vpcmpeqd_avx2(auVar77,auVar77);
    auVar76 = vpcmpeqd_avx(auVar76,auVar76);
    lVar68 = lVar31 * (ulonglong)uVar14;
    lStack_6d8 = lVar36 * param_4 + param_3;
    lVar58 = (longlong)(int)(param_10 * (uint)uVar14);
    do {
      lVar20 = 0;
      uVar37 = 0;
      lVar18 = param_1 + lVar53 + lVar35;
      pauVar69 = (undefined1 (*) [32])(param_3 + lVar36 * param_4 + lVar30);
      if (0 < (longlong)(param_5 & 0xffffffffffffff80)) {
        lVar25 = lStack_6d8 + lVar30;
        lStack_6d0 = lVar30;
        lVar24 = 0;
        do {
          uVar23 = 0;
          auVar71 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
          in_ZMM3 = ZEXT3264(auVar71);
          lVar20 = 0;
          in_ZMM4 = ZEXT3264(auVar77);
          auVar72 = ZEXT3264(auVar77);
          in_ZMM11 = ZEXT3264(auVar77);
          if (0 < (longlong)param_7) {
            lVar28 = param_1 + lVar16 + lVar53 + lVar35 + lVar24;
            auVar71 = vpcmpeqd_avx2(auVar71,auVar71);
            in_ZMM3 = ZEXT3264(auVar71);
            in_ZMM4 = ZEXT3264(auVar77);
            auVar72 = ZEXT3264(auVar77);
            in_ZMM11 = ZEXT3264(auVar77);
            do {
              pauVar1 = (undefined1 (*) [32])
                        (lVar20 + ((param_2 + param_1) - (param_2 - lVar16)) + lVar53 + lVar35 +
                                  lVar24);
              uVar23 = uVar23 + 1;
              lVar38 = lVar20 + 0x20;
              lVar39 = lVar20 + 0x40;
              lVar40 = lVar20 + 0x60;
              lVar20 = lVar20 + lVar31;
              auVar71 = vpminub_avx2(in_ZMM3._0_32_,*pauVar1);
              in_ZMM3 = ZEXT3264(auVar71);
              auVar71 = vpminub_avx2(in_ZMM4._0_32_,*(undefined1 (*) [32])(lVar38 + lVar28));
              in_ZMM4 = ZEXT3264(auVar71);
              auVar71 = vpminub_avx2(auVar72._0_32_,*(undefined1 (*) [32])(lVar39 + lVar28));
              auVar72 = ZEXT3264(auVar71);
              auVar71 = vpminub_avx2(in_ZMM11._0_32_,*(undefined1 (*) [32])(lVar40 + lVar28));
              in_ZMM11 = ZEXT3264(auVar71);
            } while (uVar23 < param_7);
          }
          auVar71 = auVar72._0_32_;
          uVar23 = 0;
          lVar20 = 0;
          if (0 < (longlong)param_8) {
            lVar28 = lVar24 + lVar53 + param_1 + lVar58 + lVar35;
            do {
              pauVar1 = (undefined1 (*) [32])
                        (lVar20 + lVar24 + ((param_2 + param_1) - (param_2 - lVar58)) + lVar53 +
                                           lVar35);
              uVar23 = uVar23 + 1;
              lVar38 = lVar20 + 0x20;
              lVar39 = lVar20 + 0x40;
              lVar40 = lVar20 + 0x60;
              lVar20 = lVar20 + param_2;
              auVar71 = vpminub_avx2(in_ZMM3._0_32_,*pauVar1);
              in_ZMM3 = ZEXT3264(auVar71);
              auVar71 = vpminub_avx2(in_ZMM4._0_32_,*(undefined1 (*) [32])(lVar38 + lVar28));
              in_ZMM4 = ZEXT3264(auVar71);
              auVar71 = vpminub_avx2(auVar72._0_32_,*(undefined1 (*) [32])(lVar39 + lVar28));
              auVar72 = ZEXT3264(auVar71);
              auVar92 = vpminub_avx2(in_ZMM11._0_32_,*(undefined1 (*) [32])(lVar40 + lVar28));
              in_ZMM11 = ZEXT3264(auVar92);
            } while (uVar23 < param_8);
          }
          uVar37 = uVar37 + 1;
          lVar20 = lVar24 + 0x80;
          lVar18 = lVar18 + 0x80;
          pauVar69 = pauVar69 + 4;
          *(undefined1 (*) [32])(lVar25 + lVar24) = in_ZMM3._0_32_;
          *(undefined1 (*) [32])(lVar25 + 0x20 + lVar24) = in_ZMM4._0_32_;
          *(undefined1 (*) [32])(lVar25 + 0x40 + lVar24) = auVar71;
          *(undefined1 (*) [32])(lVar25 + 0x60 + lVar24) = in_ZMM11._0_32_;
          lVar24 = lVar20;
        } while (uVar37 < (param_5 & 0xffffffffffffff80) + 0x7f >> 7);
      }
      uVar37 = 0;
      lVar24 = 0;
      if (lVar20 < (longlong)uVar17) {
        lVar25 = lVar68 + lVar18;
        uVar23 = (uVar17 + 0x3f) - lVar20;
        lVar28 = lVar18 + lVar16;
        lStack_6d0 = lVar30;
        do {
          uVar26 = 0;
          auVar71 = vpcmpeqd_avx2(in_ZMM11._0_32_,in_ZMM11._0_32_);
          in_ZMM11 = ZEXT3264(auVar71);
          lVar38 = 0;
          auVar72 = ZEXT3264(auVar77);
          auVar92 = auVar77;
          auVar71 = auVar77;
          if (0 < (longlong)param_7) {
            lVar39 = lVar28 + lVar24;
            do {
              pauVar1 = (undefined1 (*) [32])(lVar38 + lVar39);
              uVar26 = uVar26 + 1;
              lVar40 = lVar38 + 0x20;
              lVar38 = lVar38 + lVar31;
              auVar71 = vpminub_avx2(in_ZMM11._0_32_,*pauVar1);
              in_ZMM11 = ZEXT3264(auVar71);
              auVar92 = vpminub_avx2(auVar72._0_32_,*(undefined1 (*) [32])(lVar40 + lVar39));
              auVar72 = ZEXT3264(auVar92);
            } while (uVar26 < param_7);
          }
          uVar26 = 0;
          lVar38 = 0;
          auVar79 = auVar72._0_32_;
          if (0 < (longlong)param_8) {
            lVar39 = lVar25 + lVar24;
            do {
              pauVar1 = (undefined1 (*) [32])(lVar38 + lVar39);
              uVar26 = uVar26 + 1;
              lVar40 = lVar38 + 0x20;
              lVar38 = lVar38 + param_2;
              auVar71 = vpminub_avx2(in_ZMM11._0_32_,*pauVar1);
              in_ZMM11 = ZEXT3264(auVar71);
              auVar92 = vpminub_avx2(auVar72._0_32_,*(undefined1 (*) [32])(lVar40 + lVar39));
              auVar72 = ZEXT3264(auVar92);
              auVar79 = auVar92;
            } while (uVar26 < param_8);
          }
          in_ZMM4 = ZEXT3264(auVar71);
          in_ZMM3 = ZEXT3264(auVar92);
          uVar37 = uVar37 + 1;
          lVar18 = lVar18 + 0x40;
          *pauVar69 = in_ZMM11._0_32_;
          lVar20 = lVar20 + 0x40;
          pauVar69[1] = auVar79;
          pauVar69 = pauVar69 + 2;
          lVar24 = lVar24 + 0x40;
        } while (uVar37 < uVar23 >> 6);
      }
      uVar37 = 0;
      lVar24 = 0;
      if (lVar20 < (longlong)uVar27) {
        lVar25 = lVar68 + lVar18;
        uVar23 = (uVar27 + 0x1f) - lVar20;
        lVar28 = lVar18 + lVar16;
        lStack_6d0 = lVar30;
        do {
          uVar26 = 0;
          auVar71 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
          in_ZMM4 = ZEXT3264(auVar71);
          lVar38 = 0;
          auVar71 = auVar77;
          if (0 < (longlong)param_7) {
            do {
              pauVar1 = (undefined1 (*) [32])(lVar38 + lVar28 + lVar24);
              uVar26 = uVar26 + 1;
              lVar38 = lVar38 + lVar31;
              auVar71 = vpminub_avx2(in_ZMM4._0_32_,*pauVar1);
              in_ZMM4 = ZEXT3264(auVar71);
            } while (uVar26 < param_7);
          }
          uVar26 = 0;
          lVar38 = 0;
          if (0 < (longlong)param_8) {
            do {
              pauVar1 = (undefined1 (*) [32])(lVar38 + lVar25 + lVar24);
              uVar26 = uVar26 + 1;
              lVar38 = lVar38 + param_2;
              auVar71 = vpminub_avx2(in_ZMM4._0_32_,*pauVar1);
              in_ZMM4 = ZEXT3264(auVar71);
            } while (uVar26 < param_8);
          }
          in_ZMM3 = ZEXT3264(auVar71);
          uVar37 = uVar37 + 1;
          lVar18 = lVar18 + 0x20;
          *pauVar69 = in_ZMM4._0_32_;
          pauVar69 = pauVar69 + 1;
          lVar20 = lVar20 + 0x20;
          lVar24 = lVar24 + 0x20;
        } while (uVar37 < uVar23 >> 5);
      }
      uVar37 = 0;
      lVar24 = 0;
      if (lVar20 < (longlong)uVar48) {
        lVar25 = lVar68 + lVar18;
        uVar23 = (uVar48 + 0xf) - lVar20;
        lVar28 = lVar18 + lVar16;
        lStack_6d0 = lVar30;
        do {
          uVar26 = 0;
          auVar73 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
          in_ZMM4 = ZEXT1664(auVar73);
          lVar38 = 0;
          auVar73 = auVar76;
          if (0 < (longlong)param_7) {
            do {
              pauVar4 = (undefined1 (*) [16])(lVar38 + lVar28 + lVar24);
              uVar26 = uVar26 + 1;
              lVar38 = lVar38 + lVar31;
              auVar73 = vpminub_avx(in_ZMM4._0_16_,*pauVar4);
              in_ZMM4 = ZEXT1664(auVar73);
            } while (uVar26 < param_7);
          }
          uVar26 = 0;
          lVar38 = 0;
          if (0 < (longlong)param_8) {
            do {
              pauVar4 = (undefined1 (*) [16])(lVar38 + lVar25 + lVar24);
              uVar26 = uVar26 + 1;
              lVar38 = lVar38 + param_2;
              auVar73 = vpminub_avx(in_ZMM4._0_16_,*pauVar4);
              in_ZMM4 = ZEXT1664(auVar73);
            } while (uVar26 < param_8);
          }
          in_ZMM3 = ZEXT1664(auVar73);
          uVar37 = uVar37 + 1;
          lVar18 = lVar18 + 0x10;
          *(undefined1 (*) [16])*pauVar69 = in_ZMM4._0_16_;
          pauVar69 = (undefined1 (*) [32])(*pauVar69 + 0x10);
          lVar20 = lVar20 + 0x10;
          lVar24 = lVar24 + 0x10;
        } while (uVar37 < uVar23 >> 4);
      }
      uVar37 = 0;
      if (lVar20 < (longlong)uVar61) {
        lVar24 = lVar16 + lVar18;
        uVar23 = (uVar61 + 7) - lVar20;
        lVar25 = lVar58 + lVar18;
        lStack_6d0 = lVar30;
        do {
          uVar26 = 0;
          in_ZMM3 = ZEXT1664(auVar76);
          lVar28 = 0;
          if (0 < (longlong)param_7) {
            do {
              uVar45 = *(ulonglong *)(lVar28 + lVar24 + uVar37 * 8);
              in_ZMM4 = ZEXT864(uVar45);
              uVar26 = uVar26 + 1;
              lVar28 = lVar28 + lVar31;
              auVar73._8_8_ = 0;
              auVar73._0_8_ = uVar45;
              auVar73 = vpminub_avx(in_ZMM3._0_16_,auVar73);
              in_ZMM3 = ZEXT1664(auVar73);
            } while (uVar26 < param_7);
          }
          uVar26 = 0;
          lVar28 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar45 = *(ulonglong *)(lVar28 + lVar25 + uVar37 * 8);
              in_ZMM4 = ZEXT864(uVar45);
              uVar26 = uVar26 + 1;
              lVar28 = lVar28 + param_2;
              auVar78._8_8_ = 0;
              auVar78._0_8_ = uVar45;
              auVar73 = vpminub_avx(in_ZMM3._0_16_,auVar78);
              in_ZMM3 = ZEXT1664(auVar73);
            } while (uVar26 < param_8);
          }
          uVar37 = uVar37 + 1;
          lVar18 = lVar18 + 8;
          *(longlong *)*pauVar69 = in_ZMM3._0_8_;
          pauVar69 = (undefined1 (*) [32])(*pauVar69 + 8);
          lVar20 = lVar20 + 8;
        } while (uVar37 < uVar23 >> 3);
      }
      uVar37 = 0;
      if (lVar20 < (longlong)uVar42) {
        lVar24 = lVar68 + lVar18;
        uVar23 = (uVar42 + 3) - lVar20;
        lVar25 = lVar18 + lVar16;
        lStack_6d0 = lVar30;
        do {
          uVar26 = 0;
          auVar73 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
          in_ZMM4 = ZEXT1664(auVar73);
          lVar28 = 0;
          auVar73 = auVar76;
          if (0 < (longlong)param_7) {
            do {
              auVar73 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar28 + lVar25 + uVar37 * 4),0);
              uVar26 = uVar26 + 1;
              lVar28 = lVar28 + lVar31;
              auVar73 = vpminub_avx(in_ZMM4._0_16_,auVar73);
              in_ZMM4 = ZEXT1664(auVar73);
            } while (uVar26 < param_7);
          }
          uVar26 = 0;
          lVar28 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar73 = vpinsrd_avx((undefined1  [16])0x0,
                                    *(undefined4 *)(lVar28 + lVar24 + uVar37 * 4),0);
              uVar26 = uVar26 + 1;
              lVar28 = lVar28 + param_2;
              auVar73 = vpminub_avx(in_ZMM4._0_16_,auVar73);
              in_ZMM4 = ZEXT1664(auVar73);
            } while (uVar26 < param_8);
          }
          in_ZMM3 = ZEXT1664(auVar73);
          uVar37 = uVar37 + 1;
          lVar18 = lVar18 + 4;
          *(int *)*pauVar69 = in_ZMM4._0_4_;
          pauVar69 = (undefined1 (*) [32])(*pauVar69 + 4);
          lVar20 = lVar20 + 4;
        } while (uVar37 < uVar23 >> 2);
      }
      uVar37 = 0;
      if (lVar20 < (longlong)uVar21) {
        lVar24 = lVar68 + lVar18;
        uVar23 = (uVar21 + 1) - lVar20;
        lVar25 = lVar18 + lVar16;
        lStack_6d0 = lVar30;
        do {
          uVar26 = 0;
          auVar73 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
          in_ZMM4 = ZEXT1664(auVar73);
          lVar28 = 0;
          auVar73 = auVar76;
          if (0 < (longlong)param_7) {
            do {
              uVar26 = uVar26 + 1;
              auVar73 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar28 + lVar25 + uVar37 * 2),0);
              lVar28 = lVar28 + lVar31;
              auVar73 = vpminub_avx(in_ZMM4._0_16_,auVar73);
              in_ZMM4 = ZEXT1664(auVar73);
            } while (uVar26 < param_7);
          }
          uVar26 = 0;
          lVar28 = 0;
          if (0 < (longlong)param_8) {
            do {
              uVar26 = uVar26 + 1;
              auVar73 = vpinsrw_avx((undefined1  [16])0x0,
                                    (uint)*(ushort *)(lVar28 + lVar24 + uVar37 * 2),0);
              lVar28 = lVar28 + param_2;
              auVar73 = vpminub_avx(in_ZMM4._0_16_,auVar73);
              in_ZMM4 = ZEXT1664(auVar73);
            } while (uVar26 < param_8);
          }
          in_ZMM3 = ZEXT1664(auVar73);
          uVar37 = uVar37 + 1;
          lVar18 = lVar18 + 2;
          vpextrw_avx(in_ZMM4._0_16_,0);
          pauVar69 = (undefined1 (*) [32])(*pauVar69 + 2);
          lVar20 = lVar20 + 2;
        } while (uVar37 < uVar23 >> 1);
      }
      uVar37 = 0;
      if (lVar20 < (longlong)param_5) {
        lStack_6d0 = lVar30;
        do {
          uVar23 = 0;
          auVar73 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
          in_ZMM4 = ZEXT1664(auVar73);
          lVar24 = 0;
          auVar73 = auVar76;
          if (0 < (longlong)param_7) {
            do {
              auVar73 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar24 + lVar18 + lVar16 + uVar37),0);
              uVar23 = uVar23 + 1;
              lVar24 = lVar24 + lVar31;
              auVar73 = vpminub_avx(in_ZMM4._0_16_,auVar73);
              in_ZMM4 = ZEXT1664(auVar73);
            } while (uVar23 < param_7);
          }
          uVar23 = 0;
          lVar24 = 0;
          if (0 < (longlong)param_8) {
            do {
              auVar73 = vpinsrb_avx((undefined1  [16])0x0,
                                    (uint)*(byte *)(lVar24 + lVar18 + lVar68 + uVar37),0);
              uVar23 = uVar23 + 1;
              lVar24 = lVar24 + param_2;
              auVar73 = vpminub_avx(in_ZMM4._0_16_,auVar73);
              in_ZMM4 = ZEXT1664(auVar73);
            } while (uVar23 < param_8);
          }
          in_ZMM3 = ZEXT1664(auVar73);
          uVar37 = uVar37 + 1;
          (*pauVar69)[0] = in_ZMM4[0];
          pauVar69 = (undefined1 (*) [32])(*pauVar69 + 1);
        } while (uVar37 < param_5 - lVar20);
      }
      uVar22 = uVar22 + 1;
      lVar35 = lVar35 + param_2;
      lVar30 = lVar30 + param_4;
    } while (uVar22 < param_6 - lVar36);
  }
  return;
}


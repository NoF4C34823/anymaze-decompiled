
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14016c280(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5,
             uint param_6,uint *param_7,ulonglong param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar33;
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  uVar24 = 0;
  uVar17 = 0;
  uVar14 = 0;
  if ((param_7 == (uint *)0x0) || (param_8 == 0)) {
    return 0xfffffff8;
  }
  if (((int)((ulonglong)param_1 >> 0x20) < 1) || ((int)param_1 < 1)) {
    return 0xfffffffa;
  }
  if ((param_2 < 3) || ((param_2 & 1) == 0)) {
    return 0xfffffffb;
  }
  if ((((param_5 & 0xfffffffb) != 1) && (param_5 != 7)) && (param_5 != 0xd)) {
    return 0xffffffc5;
  }
  if ((param_6 & 0xfffffffd) != 1) {
    return 0xffffffd1;
  }
  fVar43 = in_XMM2._0_4_;
  if (fVar43 <= 0.0) {
    return 0xfffffffb;
  }
  if ((0xff < param_4) ||
     (((param_4 != 0xf0 && (uVar18 = param_4 & 0xf, uVar18 != 6)) &&
      ((uVar18 != 1 && (uVar18 != 3)))))) {
    return 0xffffff1f;
  }
  if ((param_5 == 1) || (param_5 == 7)) {
    uVar17 = (longlong)param_7 + (-((ulonglong)(param_7 + 5) & 0xf) & 0xf) + 0x14;
    uVar16 = 0;
    uVar21 = 0;
  }
  else {
    uVar2 = (longlong)param_7 + (-((ulonglong)(param_7 + 5) & 0xf) & 0xf) + 0x14;
    uVar16 = uVar2;
    uVar21 = 0;
    if (param_5 == 5) {
      uVar16 = 0;
      uVar21 = uVar2;
    }
  }
  iVar20 = 0;
  lVar23 = param_8 + (-(param_8 & 0xf) & 0xf);
  lVar19 = 0;
  if ((int)param_2 < 1) {
    if (param_5 == 1) {
      uVar14 = 0xc;
      goto LAB_14016cec8;
    }
    if ((param_5 == 5) || (param_5 == 7)) {
      uVar14 = 0xf;
      goto LAB_14016cec8;
    }
    if (param_5 == 0xd) goto LAB_14016cec8;
LAB_14016cb11:
    uVar24 = 0xffffffc5;
    goto LAB_14016cec8;
  }
  auVar42._4_12_ = in_XMM2._4_12_;
  auVar42._0_4_ = fVar43 * (fVar43 + fVar43);
  fVar43 = 0.0;
  iVar22 = -((int)param_2 / 2);
  auVar35 = auVar42;
  do {
    fVar25 = (float)thunk_FUN_142edda00((float)((uint)((float)iVar22 * (float)iVar22) ^
                                               _DAT_143087c50) / auVar42._0_4_);
    iVar20 = iVar20 + 1;
    iVar22 = iVar22 + 1;
    *(float *)(lVar23 + lVar19 * 4) = fVar25;
    fVar33 = _DAT_143087c6c;
    fVar26 = _DAT_143087c68;
    dVar12 = _DAT_143087c60;
    lVar19 = lVar19 + 1;
    fVar43 = fVar43 + fVar25;
  } while (iVar20 < (int)param_2);
  if (param_5 != 1) {
    if (param_5 != 5) {
      if (param_5 != 7) {
        if (param_5 != 0xd) goto LAB_14016cb11;
        if (6 < param_2) {
          if (((longlong)((ulonglong)param_2 * 4) <= (longlong)(uVar16 - lVar23)) ||
             ((longlong)((ulonglong)param_2 * 4) <= (longlong)-(uVar16 - lVar23))) {
            if (param_2 < 8) {
LAB_14016cefe:
              iVar20 = 0;
              uVar18 = 0;
              uVar15 = param_2;
            }
            else {
              uVar14 = (uint)uVar16 & 0xf;
              if ((uVar16 & 0xf) != 0) {
                if ((uVar16 & 3) != 0) goto LAB_14016cefe;
                uVar14 = 0x10 - uVar14 >> 2;
              }
              uVar17 = (ulonglong)uVar14;
              if (param_2 < uVar14 + 8) goto LAB_14016cefe;
              uVar21 = 0;
              iVar20 = param_2 - (param_2 - uVar14 & 7);
              if (uVar14 != 0) {
                do {
                  *(float *)(uVar16 + uVar21 * 4) = *(float *)(lVar23 + uVar21 * 4) / fVar43;
                  uVar21 = uVar21 + 1;
                } while (uVar21 < uVar17);
              }
              if ((lVar23 + uVar17 * 4 & 0xf) == 0) {
                auVar7._4_4_ = fVar43;
                auVar7._0_4_ = fVar43;
                auVar7._8_4_ = fVar43;
                auVar7._12_4_ = fVar43;
                auVar35 = rcpps(auVar35,auVar7);
                fVar26 = auVar35._0_4_;
                fVar33 = auVar35._4_4_;
                fVar25 = auVar35._8_4_;
                fVar34 = auVar35._12_4_;
                fVar26 = (fVar26 + fVar26) - fVar26 * fVar43 * fVar26;
                fVar33 = (fVar33 + fVar33) - fVar33 * fVar43 * fVar33;
                fVar25 = (fVar25 + fVar25) - fVar25 * fVar43 * fVar25;
                fVar34 = (fVar34 + fVar34) - fVar34 * fVar43 * fVar34;
                do {
                  pfVar3 = (float *)(lVar23 + uVar17 * 4);
                  auVar35._0_4_ = fVar26 * *pfVar3;
                  auVar35._4_4_ = fVar33 * pfVar3[1];
                  auVar35._8_4_ = fVar25 * pfVar3[2];
                  auVar35._12_4_ = fVar34 * pfVar3[3];
                  pfVar3 = (float *)(lVar23 + 0x10 + uVar17 * 4);
                  fVar8 = *pfVar3;
                  fVar9 = pfVar3[1];
                  fVar10 = pfVar3[2];
                  fVar11 = pfVar3[3];
                  *(undefined1 (*) [16])(uVar16 + uVar17 * 4) = auVar35;
                  pfVar3 = (float *)(uVar16 + 0x10 + uVar17 * 4);
                  *pfVar3 = fVar26 * fVar8;
                  pfVar3[1] = fVar33 * fVar9;
                  pfVar3[2] = fVar25 * fVar10;
                  pfVar3[3] = fVar34 * fVar11;
                  uVar17 = uVar17 + 8;
                } while (uVar17 < (ulonglong)(longlong)iVar20);
              }
              else {
                auVar5._4_4_ = fVar43;
                auVar5._0_4_ = fVar43;
                auVar5._8_4_ = fVar43;
                auVar5._12_4_ = fVar43;
                auVar35 = rcpps(auVar35,auVar5);
                fVar26 = auVar35._0_4_;
                fVar33 = auVar35._4_4_;
                fVar25 = auVar35._8_4_;
                fVar34 = auVar35._12_4_;
                fVar26 = (fVar26 + fVar26) - fVar26 * fVar43 * fVar26;
                fVar33 = (fVar33 + fVar33) - fVar33 * fVar43 * fVar33;
                fVar25 = (fVar25 + fVar25) - fVar25 * fVar43 * fVar25;
                fVar34 = (fVar34 + fVar34) - fVar34 * fVar43 * fVar34;
                do {
                  pfVar4 = (float *)(lVar23 + uVar17 * 4);
                  pfVar3 = (float *)(lVar23 + 0x10 + uVar17 * 4);
                  fVar8 = *pfVar3;
                  fVar9 = pfVar3[1];
                  fVar10 = pfVar3[2];
                  fVar11 = pfVar3[3];
                  auVar35._0_4_ = *pfVar4 * fVar26;
                  auVar35._4_4_ = pfVar4[1] * fVar33;
                  auVar35._8_4_ = pfVar4[2] * fVar25;
                  auVar35._12_4_ = pfVar4[3] * fVar34;
                  *(undefined1 (*) [16])(uVar16 + uVar17 * 4) = auVar35;
                  pfVar3 = (float *)(uVar16 + 0x10 + uVar17 * 4);
                  *pfVar3 = fVar8 * fVar26;
                  pfVar3[1] = fVar9 * fVar33;
                  pfVar3[2] = fVar10 * fVar25;
                  pfVar3[3] = fVar11 * fVar34;
                  uVar17 = uVar17 + 8;
                } while (uVar17 < (ulonglong)(longlong)iVar20);
              }
              uVar14 = 0;
              if (param_2 < iVar20 + 1U) goto LAB_14016cec8;
              uVar15 = param_2 - iVar20;
              if (uVar15 < 4) {
                uVar18 = 0;
              }
              else {
                uVar14 = 0;
                uVar18 = uVar15 & 0xfffffffc;
                do {
                  auVar6._4_4_ = fVar43;
                  auVar6._0_4_ = fVar43;
                  auVar6._8_4_ = fVar43;
                  auVar6._12_4_ = fVar43;
                  auVar35 = rcpps(auVar35,auVar6);
                  iVar22 = iVar20 + uVar14;
                  fVar26 = auVar35._0_4_;
                  fVar33 = auVar35._4_4_;
                  fVar25 = auVar35._8_4_;
                  fVar34 = auVar35._12_4_;
                  uVar14 = uVar14 + 4;
                  auVar35._0_4_ = (fVar26 + fVar26) - fVar43 * fVar26 * fVar26;
                  auVar35._4_4_ = (fVar33 + fVar33) - fVar43 * fVar33 * fVar33;
                  auVar35._8_4_ = (fVar25 + fVar25) - fVar43 * fVar25 * fVar25;
                  auVar35._12_4_ = (fVar34 + fVar34) - fVar43 * fVar34 * fVar34;
                  pfVar4 = (float *)(lVar23 + (longlong)iVar22 * 4);
                  fVar26 = pfVar4[1];
                  fVar33 = pfVar4[2];
                  fVar25 = pfVar4[3];
                  pfVar3 = (float *)(uVar16 + (longlong)iVar22 * 4);
                  *pfVar3 = *pfVar4 * auVar35._0_4_;
                  pfVar3[1] = fVar26 * auVar35._4_4_;
                  pfVar3[2] = fVar33 * auVar35._8_4_;
                  pfVar3[3] = fVar25 * auVar35._12_4_;
                } while (uVar14 < uVar18);
              }
            }
            for (; uVar14 = 0, uVar18 < uVar15; uVar18 = uVar18 + 1) {
              *(float *)(uVar16 + (longlong)(int)(iVar20 + uVar18) * 4) =
                   *(float *)(lVar23 + (longlong)(int)(iVar20 + uVar18) * 4) / fVar43;
            }
            goto LAB_14016cec8;
          }
        }
        iVar20 = 1;
        uVar17 = 0;
        if (param_2 >> 1 != 0) {
          do {
            uVar21 = uVar17;
            *(float *)(uVar16 + uVar21 * 8) = *(float *)(lVar23 + uVar21 * 8) / fVar43;
            *(float *)(uVar16 + 4 + uVar21 * 8) = *(float *)(lVar23 + 4 + uVar21 * 8) / fVar43;
            uVar17 = uVar21 + 1;
          } while (uVar17 < param_2 >> 1);
          iVar20 = (int)uVar21 + 2 + (int)uVar17;
        }
        if (iVar20 - 1U < param_2) {
          *(float *)((uVar16 - 4) + (longlong)iVar20 * 4) =
               *(float *)(lVar23 + -4 + (longlong)iVar20 * 4) / fVar43;
        }
        goto LAB_14016cec8;
      }
      uVar14 = 0xf;
      if (((longlong)(uVar17 - lVar23) < (longlong)((ulonglong)param_2 * 4)) &&
         ((longlong)-(uVar17 - lVar23) < (longlong)((ulonglong)param_2 * 2))) {
        uVar16 = 0;
        iVar20 = 0;
        lVar19 = 0;
        if (param_2 >> 2 != 0) {
          do {
            *(short *)(uVar17 + uVar16 * 8) =
                 (short)(int)((double)((*(float *)(lVar19 + lVar23) / fVar43) * fVar33) + dVar12);
            *(short *)(uVar17 + 2 + uVar16 * 8) =
                 (short)(int)((double)((*(float *)(lVar19 + 4 + lVar23) / fVar43) * fVar33) + dVar12
                             );
            *(short *)(uVar17 + 4 + uVar16 * 8) =
                 (short)(int)((double)((*(float *)(lVar19 + 8 + lVar23) / fVar43) * fVar33) + dVar12
                             );
            lVar1 = lVar19 + 0xc;
            lVar19 = lVar19 + 0x10;
            *(short *)(uVar17 + 6 + uVar16 * 8) =
                 (short)(int)((double)((*(float *)(lVar1 + lVar23) / fVar43) * fVar33) + dVar12);
            uVar16 = uVar16 + 1;
          } while (uVar16 < param_2 >> 2);
          iVar20 = (int)uVar16 * 4;
        }
        fVar26 = _DAT_143087c6c;
        dVar12 = _DAT_143087c60;
        for (uVar16 = (ulonglong)iVar20; uVar24 = 0, uVar16 < (ulonglong)(longlong)(int)param_2;
            uVar16 = uVar16 + 1) {
          *(short *)(uVar17 + uVar16 * 2) =
               (short)(int)((double)((*(float *)(lVar23 + uVar16 * 4) / fVar43) * fVar26) + dVar12);
        }
        goto LAB_14016cec8;
      }
      if (param_2 < 8) {
LAB_14016cef0:
        uVar16 = 0;
      }
      else {
        uVar18 = (uint)uVar17 & 0xf;
        if ((uVar17 & 0xf) != 0) {
          if ((uVar17 & 1) != 0) goto LAB_14016cef0;
          uVar18 = 0x10 - uVar18 >> 1;
        }
        uVar16 = (ulonglong)uVar18;
        if (param_2 < uVar18 + 8) goto LAB_14016cef0;
        uVar21 = 0;
        iVar20 = param_2 - (param_2 - uVar18 & 7);
        if (uVar18 != 0) {
          do {
            *(short *)(uVar17 + uVar21 * 2) =
                 (short)(int)((double)((*(float *)(lVar23 + uVar21 * 4) / fVar43) * fVar33) + dVar12
                             );
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar16);
        }
        fVar34 = _UNK_143087c4c;
        fVar25 = _UNK_143087c48;
        fVar33 = _UNK_143087c44;
        fVar26 = _DAT_143087c40;
        dVar13 = _UNK_143087c28;
        dVar12 = _DAT_143087c20;
        if ((lVar23 + uVar16 * 4 & 0xf) == 0) {
          auVar28._4_4_ = fVar43;
          auVar28._0_4_ = fVar43;
          auVar28._8_4_ = fVar43;
          auVar28._12_4_ = fVar43;
          do {
            auVar35 = divps(*(undefined1 (*) [16])(lVar23 + uVar16 * 4),auVar28);
            auVar42 = divps(*(undefined1 (*) [16])(lVar23 + 0x10 + uVar16 * 4),auVar28);
            auVar45._0_4_ = (int)(short)(int)((double)(auVar35._0_4_ * fVar26) + dVar12);
            auVar45._4_4_ = (int)(short)(int)((double)(auVar35._4_4_ * fVar33) + dVar13);
            auVar45._8_4_ = (int)(short)(int)((double)(auVar35._8_4_ * fVar25) + dVar12);
            auVar45._12_4_ = (int)(short)(int)((double)(auVar35._12_4_ * fVar34) + dVar13);
            auVar37._0_4_ = (int)(short)(int)((double)(auVar42._0_4_ * fVar26) + dVar12);
            auVar37._4_4_ = (int)(short)(int)((double)(auVar42._4_4_ * fVar33) + dVar13);
            auVar37._8_4_ = (int)(short)(int)((double)(auVar42._8_4_ * fVar25) + dVar12);
            auVar37._12_4_ = (int)(short)(int)((double)(auVar42._12_4_ * fVar34) + dVar13);
            auVar35 = packssdw(auVar45,auVar37);
            *(undefined1 (*) [16])(uVar17 + uVar16 * 2) = auVar35;
            uVar16 = uVar16 + 8;
          } while (uVar16 < (ulonglong)(longlong)iVar20);
        }
        else {
          auVar27._4_4_ = fVar43;
          auVar27._0_4_ = fVar43;
          auVar27._8_4_ = fVar43;
          auVar27._12_4_ = fVar43;
          do {
            auVar35 = divps(*(undefined1 (*) [16])(lVar23 + uVar16 * 4),auVar27);
            auVar42 = divps(*(undefined1 (*) [16])(lVar23 + 0x10 + uVar16 * 4),auVar27);
            auVar44._0_4_ = (int)(short)(int)((double)(auVar35._0_4_ * fVar26) + dVar12);
            auVar44._4_4_ = (int)(short)(int)((double)(auVar35._4_4_ * fVar33) + dVar13);
            auVar44._8_4_ = (int)(short)(int)((double)(auVar35._8_4_ * fVar25) + dVar12);
            auVar44._12_4_ = (int)(short)(int)((double)(auVar35._12_4_ * fVar34) + dVar13);
            auVar36._0_4_ = (int)(short)(int)((double)(auVar42._0_4_ * fVar26) + dVar12);
            auVar36._4_4_ = (int)(short)(int)((double)(auVar42._4_4_ * fVar33) + dVar13);
            auVar36._8_4_ = (int)(short)(int)((double)(auVar42._8_4_ * fVar25) + dVar12);
            auVar36._12_4_ = (int)(short)(int)((double)(auVar42._12_4_ * fVar34) + dVar13);
            auVar35 = packssdw(auVar44,auVar36);
            *(undefined1 (*) [16])(uVar17 + uVar16 * 2) = auVar35;
            uVar16 = uVar16 + 8;
          } while (uVar16 < (ulonglong)(longlong)iVar20);
        }
        uVar16 = (ulonglong)iVar20;
      }
      fVar26 = _DAT_143087c6c;
      dVar12 = _DAT_143087c60;
      for (; uVar24 = 0, uVar16 < (ulonglong)(longlong)(int)param_2; uVar16 = uVar16 + 1) {
        *(short *)(uVar17 + uVar16 * 2) =
             (short)(int)((double)((*(float *)(lVar23 + uVar16 * 4) / fVar43) * fVar26) + dVar12);
      }
      goto LAB_14016cec8;
    }
    uVar14 = 0xf;
    if (((longlong)(uVar21 - lVar23) < (longlong)((ulonglong)param_2 * 4)) &&
       ((longlong)-(uVar21 - lVar23) < (longlong)((ulonglong)param_2 * 2))) {
      uVar17 = 0;
      iVar20 = 1;
      lVar19 = 0;
      if (param_2 >> 2 != 0) {
        do {
          *(short *)(uVar21 + uVar17 * 8) =
               (short)(int)((double)((*(float *)(lVar19 + lVar23) / fVar43) * fVar33) + dVar12);
          *(short *)(uVar21 + 2 + uVar17 * 8) =
               (short)(int)((double)((*(float *)(lVar19 + 4 + lVar23) / fVar43) * fVar33) + dVar12);
          *(short *)(uVar21 + 4 + uVar17 * 8) =
               (short)(int)((double)((*(float *)(lVar19 + 8 + lVar23) / fVar43) * fVar33) + dVar12);
          lVar1 = lVar19 + 0xc;
          lVar19 = lVar19 + 0x10;
          *(short *)(uVar21 + 6 + uVar17 * 8) =
               (short)(int)((double)((*(float *)(lVar1 + lVar23) / fVar43) * fVar33) + dVar12);
          uVar17 = uVar17 + 1;
        } while (uVar17 < param_2 >> 2);
        iVar20 = (int)uVar17 * 4 + 1;
      }
      fVar26 = _DAT_143087c6c;
      dVar12 = _DAT_143087c60;
      for (uVar17 = (ulonglong)(iVar20 + -1); uVar17 < (ulonglong)(longlong)(int)param_2;
          uVar17 = uVar17 + 1) {
        *(short *)(uVar21 + uVar17 * 2) =
             (short)(int)((double)((*(float *)(lVar23 + uVar17 * 4) / fVar43) * fVar26) + dVar12);
      }
      goto LAB_14016cec8;
    }
    if (param_2 < 8) {
LAB_14016cf09:
      uVar17 = 0;
    }
    else {
      uVar18 = (uint)uVar21 & 0xf;
      if ((uVar21 & 0xf) != 0) {
        if ((uVar21 & 1) != 0) goto LAB_14016cf09;
        uVar18 = 0x10 - uVar18 >> 1;
      }
      uVar17 = (ulonglong)uVar18;
      if (param_2 < uVar18 + 8) goto LAB_14016cf09;
      uVar16 = 0;
      iVar20 = param_2 - (param_2 - uVar18 & 7);
      if (uVar18 != 0) {
        do {
          *(short *)(uVar21 + uVar16 * 2) =
               (short)(int)((double)((*(float *)(lVar23 + uVar16 * 4) / fVar43) * fVar33) + dVar12);
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar17);
      }
      fVar34 = _UNK_143087c4c;
      fVar25 = _UNK_143087c48;
      fVar33 = _UNK_143087c44;
      fVar26 = _DAT_143087c40;
      dVar13 = _UNK_143087c28;
      dVar12 = _DAT_143087c20;
      if ((lVar23 + uVar17 * 4 & 0xf) == 0) {
        auVar30._4_4_ = fVar43;
        auVar30._0_4_ = fVar43;
        auVar30._8_4_ = fVar43;
        auVar30._12_4_ = fVar43;
        do {
          auVar35 = divps(*(undefined1 (*) [16])(lVar23 + uVar17 * 4),auVar30);
          auVar42 = divps(*(undefined1 (*) [16])(lVar23 + 0x10 + uVar17 * 4),auVar30);
          auVar47._0_4_ = (int)(short)(int)((double)(auVar35._0_4_ * fVar26) + dVar12);
          auVar47._4_4_ = (int)(short)(int)((double)(auVar35._4_4_ * fVar33) + dVar13);
          auVar47._8_4_ = (int)(short)(int)((double)(auVar35._8_4_ * fVar25) + dVar12);
          auVar47._12_4_ = (int)(short)(int)((double)(auVar35._12_4_ * fVar34) + dVar13);
          auVar39._0_4_ = (int)(short)(int)((double)(auVar42._0_4_ * fVar26) + dVar12);
          auVar39._4_4_ = (int)(short)(int)((double)(auVar42._4_4_ * fVar33) + dVar13);
          auVar39._8_4_ = (int)(short)(int)((double)(auVar42._8_4_ * fVar25) + dVar12);
          auVar39._12_4_ = (int)(short)(int)((double)(auVar42._12_4_ * fVar34) + dVar13);
          auVar35 = packssdw(auVar47,auVar39);
          *(undefined1 (*) [16])(uVar21 + uVar17 * 2) = auVar35;
          uVar17 = uVar17 + 8;
        } while (uVar17 < (ulonglong)(longlong)iVar20);
      }
      else {
        auVar29._4_4_ = fVar43;
        auVar29._0_4_ = fVar43;
        auVar29._8_4_ = fVar43;
        auVar29._12_4_ = fVar43;
        do {
          auVar35 = divps(*(undefined1 (*) [16])(lVar23 + uVar17 * 4),auVar29);
          auVar42 = divps(*(undefined1 (*) [16])(lVar23 + 0x10 + uVar17 * 4),auVar29);
          auVar46._0_4_ = (int)(short)(int)((double)(auVar35._0_4_ * fVar26) + dVar12);
          auVar46._4_4_ = (int)(short)(int)((double)(auVar35._4_4_ * fVar33) + dVar13);
          auVar46._8_4_ = (int)(short)(int)((double)(auVar35._8_4_ * fVar25) + dVar12);
          auVar46._12_4_ = (int)(short)(int)((double)(auVar35._12_4_ * fVar34) + dVar13);
          auVar38._0_4_ = (int)(short)(int)((double)(auVar42._0_4_ * fVar26) + dVar12);
          auVar38._4_4_ = (int)(short)(int)((double)(auVar42._4_4_ * fVar33) + dVar13);
          auVar38._8_4_ = (int)(short)(int)((double)(auVar42._8_4_ * fVar25) + dVar12);
          auVar38._12_4_ = (int)(short)(int)((double)(auVar42._12_4_ * fVar34) + dVar13);
          auVar35 = packssdw(auVar46,auVar38);
          *(undefined1 (*) [16])(uVar21 + uVar17 * 2) = auVar35;
          uVar17 = uVar17 + 8;
        } while (uVar17 < (ulonglong)(longlong)iVar20);
      }
      uVar17 = (ulonglong)iVar20;
    }
    fVar26 = _DAT_143087c6c;
    dVar12 = _DAT_143087c60;
    for (; uVar17 < (ulonglong)(longlong)(int)param_2; uVar17 = uVar17 + 1) {
      *(short *)(uVar21 + uVar17 * 2) =
           (short)(int)((double)((*(float *)(lVar23 + uVar17 * 4) / fVar43) * fVar26) + dVar12);
    }
    goto LAB_14016cec8;
  }
  uVar14 = 0xc;
  if (((longlong)(uVar17 - lVar23) < (longlong)((ulonglong)param_2 * 4)) &&
     ((longlong)-(uVar17 - lVar23) < (longlong)((ulonglong)param_2 * 2))) {
    uVar16 = 0;
    iVar20 = 0;
    lVar19 = 0;
    if (param_2 >> 2 != 0) {
      do {
        *(short *)(uVar17 + uVar16 * 8) =
             (short)(int)((double)((*(float *)(lVar19 + lVar23) / fVar43) * fVar26) + dVar12);
        *(short *)(uVar17 + 2 + uVar16 * 8) =
             (short)(int)((double)((*(float *)(lVar19 + 4 + lVar23) / fVar43) * fVar26) + dVar12);
        *(short *)(uVar17 + 4 + uVar16 * 8) =
             (short)(int)((double)((*(float *)(lVar19 + 8 + lVar23) / fVar43) * fVar26) + dVar12);
        lVar1 = lVar19 + 0xc;
        lVar19 = lVar19 + 0x10;
        *(short *)(uVar17 + 6 + uVar16 * 8) =
             (short)(int)((double)((*(float *)(lVar1 + lVar23) / fVar43) * fVar26) + dVar12);
        uVar16 = uVar16 + 1;
      } while (uVar16 < param_2 >> 2);
      iVar20 = (int)uVar16 * 4;
    }
    fVar26 = _DAT_143087c68;
    dVar12 = _DAT_143087c60;
    for (uVar16 = (ulonglong)iVar20; uVar16 < (ulonglong)(longlong)(int)param_2; uVar16 = uVar16 + 1
        ) {
      *(short *)(uVar17 + uVar16 * 2) =
           (short)(int)((double)((*(float *)(lVar23 + uVar16 * 4) / fVar43) * fVar26) + dVar12);
    }
    goto LAB_14016cec8;
  }
  if (param_2 < 8) {
LAB_14016d2cd:
    uVar16 = 0;
  }
  else {
    uVar18 = (uint)uVar17 & 0xf;
    if ((uVar17 & 0xf) != 0) {
      if ((uVar17 & 1) != 0) goto LAB_14016d2cd;
      uVar18 = 0x10 - uVar18 >> 1;
    }
    uVar16 = (ulonglong)uVar18;
    if (param_2 < uVar18 + 8) goto LAB_14016d2cd;
    uVar21 = 0;
    iVar20 = param_2 - (param_2 - uVar18 & 7);
    if (uVar18 != 0) {
      do {
        *(short *)(uVar17 + uVar21 * 2) =
             (short)(int)((double)((*(float *)(lVar23 + uVar21 * 4) / fVar43) * fVar26) + dVar12);
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar16);
    }
    fVar34 = _UNK_143087c3c;
    fVar25 = _UNK_143087c38;
    fVar33 = _UNK_143087c34;
    fVar26 = _DAT_143087c30;
    dVar13 = _UNK_143087c28;
    dVar12 = _DAT_143087c20;
    if ((lVar23 + uVar16 * 4 & 0xf) == 0) {
      auVar32._4_4_ = fVar43;
      auVar32._0_4_ = fVar43;
      auVar32._8_4_ = fVar43;
      auVar32._12_4_ = fVar43;
      do {
        auVar35 = divps(*(undefined1 (*) [16])(lVar23 + uVar16 * 4),auVar32);
        auVar42 = divps(*(undefined1 (*) [16])(lVar23 + 0x10 + uVar16 * 4),auVar32);
        auVar49._0_4_ = (int)(short)(int)((double)(auVar35._0_4_ * fVar26) + dVar12);
        auVar49._4_4_ = (int)(short)(int)((double)(auVar35._4_4_ * fVar33) + dVar13);
        auVar49._8_4_ = (int)(short)(int)((double)(auVar35._8_4_ * fVar25) + dVar12);
        auVar49._12_4_ = (int)(short)(int)((double)(auVar35._12_4_ * fVar34) + dVar13);
        auVar41._0_4_ = (int)(short)(int)((double)(auVar42._0_4_ * fVar26) + dVar12);
        auVar41._4_4_ = (int)(short)(int)((double)(auVar42._4_4_ * fVar33) + dVar13);
        auVar41._8_4_ = (int)(short)(int)((double)(auVar42._8_4_ * fVar25) + dVar12);
        auVar41._12_4_ = (int)(short)(int)((double)(auVar42._12_4_ * fVar34) + dVar13);
        auVar35 = packssdw(auVar49,auVar41);
        *(undefined1 (*) [16])(uVar17 + uVar16 * 2) = auVar35;
        uVar16 = uVar16 + 8;
      } while (uVar16 < (ulonglong)(longlong)iVar20);
    }
    else {
      auVar31._4_4_ = fVar43;
      auVar31._0_4_ = fVar43;
      auVar31._8_4_ = fVar43;
      auVar31._12_4_ = fVar43;
      do {
        auVar35 = divps(*(undefined1 (*) [16])(lVar23 + uVar16 * 4),auVar31);
        auVar42 = divps(*(undefined1 (*) [16])(lVar23 + 0x10 + uVar16 * 4),auVar31);
        auVar48._0_4_ = (int)(short)(int)((double)(auVar35._0_4_ * fVar26) + dVar12);
        auVar48._4_4_ = (int)(short)(int)((double)(auVar35._4_4_ * fVar33) + dVar13);
        auVar48._8_4_ = (int)(short)(int)((double)(auVar35._8_4_ * fVar25) + dVar12);
        auVar48._12_4_ = (int)(short)(int)((double)(auVar35._12_4_ * fVar34) + dVar13);
        auVar40._0_4_ = (int)(short)(int)((double)(auVar42._0_4_ * fVar26) + dVar12);
        auVar40._4_4_ = (int)(short)(int)((double)(auVar42._4_4_ * fVar33) + dVar13);
        auVar40._8_4_ = (int)(short)(int)((double)(auVar42._8_4_ * fVar25) + dVar12);
        auVar40._12_4_ = (int)(short)(int)((double)(auVar42._12_4_ * fVar34) + dVar13);
        auVar35 = packssdw(auVar48,auVar40);
        *(undefined1 (*) [16])(uVar17 + uVar16 * 2) = auVar35;
        uVar16 = uVar16 + 8;
      } while (uVar16 < (ulonglong)(longlong)iVar20);
    }
    uVar16 = (ulonglong)iVar20;
  }
  fVar26 = _DAT_143087c68;
  dVar12 = _DAT_143087c60;
  for (; uVar16 < (ulonglong)(longlong)(int)param_2; uVar16 = uVar16 + 1) {
    *(short *)(uVar17 + uVar16 * 2) =
         (short)(int)((double)((*(float *)(lVar23 + uVar16 * 4) / fVar43) * fVar26) + dVar12);
  }
LAB_14016cec8:
  param_7[1] = 0x14;
  *param_7 = param_2;
  param_7[3] = param_4;
  param_7[2] = param_5;
  param_7[4] = uVar14;
  return uVar24;
}



void FUN_1408490c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9,
                  int param_10,undefined8 param_11)

{
  undefined8 uVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  ulonglong *in_stack_fffffffffffffee8;
  undefined4 uVar23;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  uint uStack_c8;
  ushort *puStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  int iStack_a8;
  uint uStack_a0;
  longlong lStack_98;
  uint uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  int iStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  longlong lStack_40;
  
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  lStack_50 = (longlong)param_6;
  lVar3 = 0;
  iStack_68 = param_10;
  uVar8 = 0;
  param_10 = param_10 >> 1;
  uVar5 = param_7 & 0x10;
  uVar16 = 0;
  uStack_58 = param_9;
  uStack_60 = param_11;
  lStack_98 = param_3;
  lStack_78 = param_1;
  lStack_70 = param_2;
  lStack_40 = param_4;
  if (0 < param_10) {
    uStack_48 = (ulonglong)param_10;
    uStack_90 = param_7 & 0xf0;
    param_3 = param_4 * uStack_48 + param_3;
    uVar10 = param_7 & 0xf;
    uStack_b0 = param_7 & 0x20;
    iStack_a8 = param_10;
    uStack_a0 = uVar5;
    if (uStack_90 == 0xf0) {
      uStack_d8 = 0;
      puStack_c0 = param_8;
      uStack_b8 = param_7;
      uVar16 = uStack_d8;
      uVar9 = param_3;
      puVar2 = puStack_c0;
      uVar5 = uStack_b8;
      goto LAB_14084958d;
    }
    uVar8 = 0;
    uVar9 = param_3;
LAB_1408491c5:
    uVar11 = uVar8;
    if (((longlong)param_5[1] <= (longlong)uVar8) && (param_7 != 0xf0)) {
      if (uVar10 == 6) {
        if (uStack_b0 == 0) goto LAB_14084930b;
      }
      else {
        if (uVar10 != 1) goto LAB_140849200;
        if (uStack_b0 == 0) {
          uVar11 = param_5[1] - 1;
        }
      }
    }
LAB_1408492a0:
    in_stack_fffffffffffffee8 = &uStack_88;
    uStack_88 = *param_5;
    uStack_80 = param_5[1];
    FUN_140849d60(lStack_78,lStack_70,uVar11,param_3,in_stack_fffffffffffffee8,(int)lStack_50,
                  param_7,param_8,uStack_58,iStack_68,uStack_60);
LAB_140849460:
    do {
      while( true ) {
        uVar1 = uStack_60;
        uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
        iVar7 = (int)uVar8;
        uVar8 = uVar8 + 1;
        uVar16 = uVar16 + lStack_40;
        lVar3 = (longlong)iVar7 + 1;
        if (uStack_48 <= uVar8) {
          param_10 = iStack_a8;
          if (uStack_a0 != 0) {
            lVar4 = 0;
            lVar13 = -uStack_48;
            lVar3 = lStack_98;
            do {
              uStack_d8 = *param_5;
              uStack_d0 = param_5[1];
              FUN_140849d60(lStack_78,lStack_70,lVar13,lVar3,&uStack_d8,(int)lStack_50,param_7,
                            param_8,uStack_58,iStack_68,uVar1);
              lVar4 = lVar4 + 1;
              lVar13 = lVar13 + 1;
              lVar3 = lVar3 + lStack_40;
            } while (lVar4 < (longlong)uStack_48);
            return;
          }
          goto LAB_1408495f6;
        }
        param_3 = uVar9 + uVar16;
        puVar2 = param_8;
        uVar5 = param_7;
        if (uStack_90 != 0xf0) break;
LAB_14084958d:
        uStack_b8 = uVar5;
        puStack_c0 = puVar2;
        uStack_c8 = uVar10;
        uStack_d0 = uVar9;
        uStack_d8 = uVar16;
        in_stack_fffffffffffffee8 = (ulonglong *)CONCAT44(uVar23,iStack_68);
        (*(code *)(&PTR_FUN_14308c8c0)[lStack_50])
                  (lStack_70 * uVar8 + lStack_78,param_3,*param_5,uStack_58,
                   in_stack_fffffffffffffee8);
        param_8 = puStack_c0;
        uVar16 = uStack_d8;
        uVar9 = uStack_d0;
        param_7 = uStack_b8;
        uVar10 = uStack_c8;
      }
      if (-1 < (longlong)uVar8) goto LAB_1408491c5;
      uVar11 = uVar8;
      if (param_7 == 0xf0) goto LAB_1408492a0;
      if (uVar10 != 6) {
        if (uVar10 != 1) goto LAB_140849200;
        uVar11 = 0;
        if (uStack_a0 != 0) {
          uVar11 = uVar8;
        }
        goto LAB_1408492a0;
      }
      if (uStack_a0 != 0) goto LAB_1408492a0;
LAB_14084930b:
      uVar11 = *param_5;
      auVar17._0_4_ = (float)*param_8;
      auVar17._4_8_ = SUB128(ZEXT812(0),4);
      auVar17._12_4_ = 0;
    } while ((longlong)uVar11 < 1);
    if ((longlong)uVar11 < 0x10) {
LAB_140849ca4:
      uVar12 = 0;
      if (uVar11 == 0) goto LAB_140849460;
LAB_140849cb1:
      uVar15 = 0;
    }
    else {
      uVar6 = lStack_40 * lVar3 + uVar9;
      uVar15 = uVar6 & 0x1f;
      if (uVar15 != 0) {
        if ((uVar6 & 3) != 0) goto LAB_140849ca4;
        uVar15 = 0x20 - uVar15 >> 2;
      }
      if ((longlong)uVar11 < (longlong)(uVar15 + 0x10)) goto LAB_140849ca4;
      uVar14 = 0;
      uVar12 = uVar11 - (uVar11 - uVar15 & 0xf);
      if (uVar15 != 0) {
        do {
          *(float *)(uVar6 + uVar14 * 4) = auVar17._0_4_;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar15);
      }
      auVar22 = vshufps_avx(auVar17,auVar17,0);
      auVar19._16_16_ = auVar22;
      auVar19._0_16_ = auVar22;
      do {
        *(undefined1 (*) [32])(uVar6 + uVar15 * 4) = auVar19;
        *(undefined1 (*) [32])(uVar6 + 0x20 + uVar15 * 4) = auVar19;
        uVar15 = uVar15 + 0x10;
      } while (uVar15 < uVar12);
      if (uVar11 < uVar12 + 1) goto LAB_140849460;
      uVar11 = uVar11 - uVar12;
      if ((longlong)uVar11 < 4) goto LAB_140849cb1;
      uVar15 = uVar11 & 0xfffffffffffffffc;
      uVar14 = 0;
      do {
        *(undefined1 (*) [16])(uVar6 + uVar12 * 4 + uVar14 * 4) = auVar22;
        uVar14 = uVar14 + 4;
      } while (uVar14 < uVar15);
    }
    if (uVar15 < uVar11) {
      do {
        *(float *)(lVar3 * lStack_40 + uVar9 + uVar12 * 4 + uVar15 * 4) = auVar17._0_4_;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar11);
    }
    goto LAB_140849460;
  }
  if (uVar5 != 0) {
    return;
  }
  uVar10 = param_7 & 0xf;
LAB_1408495f6:
  if (uVar10 == 6) {
    uVar16 = 0;
    auVar22._0_4_ = (float)*param_8;
    auVar22._4_8_ = SUB128(ZEXT812(0),4);
    auVar22._12_4_ = 0;
    if (0 < param_10) {
      auVar17 = vshufps_avx(auVar22,auVar22,0);
      uVar8 = *param_5;
      auVar18._16_16_ = auVar17;
      auVar18._0_16_ = auVar17;
      do {
        if (0 < (longlong)uVar8) {
          while (0xf < (longlong)uVar8) {
            uVar9 = lStack_40 * uVar16 + lStack_98;
            uVar11 = uVar9 & 0x1f;
            if (uVar11 != 0) {
              if ((uVar9 & 3) != 0) break;
              uVar11 = 0x20 - uVar11 >> 2;
            }
            if ((longlong)uVar8 < (longlong)(uVar11 + 0x10)) break;
            uVar15 = 0;
            uVar6 = uVar8 - (uVar8 - uVar11 & 0xf);
            if (uVar11 != 0) {
              do {
                *(float *)(uVar9 + uVar15 * 4) = auVar22._0_4_;
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar11);
            }
            do {
              *(undefined1 (*) [32])(uVar9 + uVar11 * 4) = auVar18;
              *(undefined1 (*) [32])(uVar9 + 0x20 + uVar11 * 4) = auVar18;
              uVar11 = uVar11 + 0x10;
            } while (uVar11 < uVar6);
            if (uVar6 + 1 <= uVar8) {
              uVar11 = uVar8 - uVar6;
              if ((longlong)uVar11 < 4) {
                uVar15 = 0;
              }
              else {
                uVar15 = uVar11 & 0xfffffffffffffffc;
                uVar12 = 0;
                do {
                  *(undefined1 (*) [16])(uVar9 + uVar6 * 4 + uVar12 * 4) = auVar17;
                  uVar12 = uVar12 + 4;
                } while (uVar12 < uVar15);
              }
              goto LAB_140849b6e;
            }
            uVar16 = uVar16 + 1;
            if ((ulonglong)(longlong)param_10 <= uVar16) {
              return;
            }
          }
          uVar6 = 0;
          if (uVar8 != 0) {
            uVar15 = 0;
            uVar11 = uVar8;
LAB_140849b6e:
            if (uVar15 < uVar11) {
              do {
                *(float *)(lStack_40 * uVar16 + lStack_98 + uVar6 * 4 + uVar15 * 4) = auVar22._0_4_;
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar11);
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulonglong)(longlong)param_10);
    }
    return;
  }
  if (uVar10 == 1) {
    uVar16 = 0;
    if (0 < param_10) {
      lVar3 = lStack_40 * param_10 + lStack_98;
      uVar8 = *param_5;
      do {
        if (0 < (longlong)uVar8) {
          if ((longlong)uVar8 < 8) {
LAB_140849a2f:
            uVar6 = 0;
          }
          else {
            uVar11 = lStack_40 * uVar16 + lStack_98;
            uVar9 = uVar11 & 0x1f;
            if (uVar9 != 0) {
              if ((uVar11 & 3) != 0) goto LAB_140849a2f;
              uVar9 = 0x20 - uVar9 >> 2;
            }
            if ((longlong)uVar8 < (longlong)(uVar9 + 8)) goto LAB_140849a2f;
            uVar15 = 0;
            uVar6 = uVar8 - (uVar8 - uVar9 & 7);
            if (uVar9 != 0) {
              do {
                *(undefined4 *)(uVar11 + uVar15 * 4) = *(undefined4 *)(lVar3 + uVar15 * 4);
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar9);
            }
            do {
              auVar21._16_16_ = *(undefined1 (*) [16])(lVar3 + 0x10 + uVar9 * 4);
              auVar21._0_16_ = *(undefined1 (*) [16])(lVar3 + uVar9 * 4);
              *(undefined1 (*) [32])(uVar11 + uVar9 * 4) = auVar21;
              uVar9 = uVar9 + 8;
            } while (uVar9 < uVar6);
          }
          if (uVar6 < uVar8) {
            do {
              *(undefined4 *)(lStack_40 * uVar16 + lStack_98 + uVar6 * 4) =
                   *(undefined4 *)(lVar3 + uVar6 * 4);
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar8);
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulonglong)(longlong)param_10);
    }
  }
  else if (uVar10 == 3) {
    lVar3 = (longlong)param_10;
    if ((param_7 & 0xf0) == 0xf0) {
      (*(code *)(&PTR_FUN_14308c8c0)[lStack_50])
                (lStack_78 + lStack_70 * lVar3,lStack_98,*param_5,uStack_58,
                 CONCAT44(uVar23,iStack_68));
    }
    else {
      if (((lVar3 < 0) || ((longlong)param_5[1] <= lVar3)) && (param_7 != 0xf0)) {
        uVar16 = param_5[1];
        if ((longlong)uVar16 < 2) {
          if (lVar3 < 0) {
            lVar3 = -lVar3;
            if ((param_7 & 0x20) == 0) {
              lVar3 = 0;
            }
          }
          else if ((0 < lVar3) && ((param_7 & 0x20) == 0)) {
            lVar3 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar3 < 0; lVar3 = -lVar3) {
            }
            if ((lVar3 < (longlong)uVar16) || ((param_7 & 0x20) != 0)) break;
            lVar3 = (uVar16 - 1) * 2 - lVar3;
          }
        }
      }
      uStack_d8 = *param_5;
      uStack_d0 = param_5[1];
      FUN_140849d60(lStack_78,lStack_70,lVar3,lStack_98,&uStack_d8,(int)lStack_50,param_7,param_8,
                    uStack_58,iStack_68,uStack_60);
    }
    lVar3 = 1;
    uVar16 = 0;
    if (1 < param_10) {
      lVar4 = ((longlong)iStack_68 + -1) * lStack_40 + lStack_98;
      uVar8 = *param_5;
      do {
        if (0 < (longlong)uVar8) {
          if ((longlong)uVar8 < 8) {
LAB_140849845:
            uVar6 = 0;
          }
          else {
            uVar9 = lStack_98 + lStack_40 * lVar3;
            uVar11 = uVar9 & 0x1f;
            if (uVar11 != 0) {
              if ((uVar9 & 3) != 0) goto LAB_140849845;
              uVar11 = 0x20 - uVar11 >> 2;
            }
            if ((longlong)uVar8 < (longlong)(uVar11 + 8)) goto LAB_140849845;
            lVar13 = lVar4 - lStack_40 * lVar3;
            uVar15 = 0;
            uVar6 = uVar8 - (uVar8 - uVar11 & 7);
            if (uVar11 != 0) {
              do {
                *(undefined4 *)(uVar9 + uVar15 * 4) = *(undefined4 *)(lVar13 + uVar15 * 4);
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar11);
            }
            do {
              auVar20._16_16_ = *(undefined1 (*) [16])(lVar13 + 0x10 + uVar11 * 4);
              auVar20._0_16_ = *(undefined1 (*) [16])(lVar13 + uVar11 * 4);
              *(undefined1 (*) [32])(uVar9 + uVar11 * 4) = auVar20;
              uVar11 = uVar11 + 8;
            } while (uVar11 < uVar6);
          }
          if (uVar6 < uVar8) {
            do {
              *(undefined4 *)(lStack_98 + lVar3 * lStack_40 + uVar6 * 4) =
                   *(undefined4 *)((lVar4 - lVar3 * lStack_40) + uVar6 * 4);
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar8);
          }
        }
        lVar3 = uVar16 + 2;
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulonglong)(longlong)(param_10 + -1));
    }
  }
  return;
LAB_140849200:
  uVar11 = uVar8;
  if (uVar10 == 3) {
    uVar6 = param_5[1];
    if ((longlong)uVar6 < 2) {
      if ((longlong)uVar8 < 0) {
        if (uStack_a0 == 0) {
          uVar11 = -uVar8;
          if (uStack_b0 == 0) {
            uVar11 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar8) && (uStack_b0 == 0)) {
        uVar11 = -uVar8;
        if (uStack_a0 == 0) {
          uVar11 = 0;
        }
      }
    }
    else if (((longlong)uVar8 < 0) || ((longlong)uVar6 <= (longlong)uVar8)) {
      if ((longlong)uVar8 < 0) goto LAB_140849520;
      while (uStack_b0 == 0) {
        for (uVar11 = (uVar6 - 1) * 2 - uVar11; (longlong)uVar11 < 0; uVar11 = -uVar11) {
LAB_140849520:
          if (uStack_a0 != 0) goto LAB_1408492a0;
        }
        if ((longlong)uVar11 < (longlong)uVar6) break;
      }
    }
  }
  goto LAB_1408492a0;
}



longlong *
FUN_140602400(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
             int param_6,uint param_7,byte *param_8,undefined8 param_9,int param_10,
             undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *in_RAX;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong *in_stack_ffffffffffffff18;
  undefined4 uVar29;
  longlong lStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  uint uStack_90;
  int iStack_88;
  longlong lStack_80;
  uint uStack_78;
  uint uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uVar29 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  lVar16 = 0;
  uVar25 = 0;
  iVar12 = param_10 >> 1;
  uVar17 = param_7 & 0x10;
  lVar11 = 0;
  if (0 < iVar12) {
    uStack_48 = (ulonglong)iVar12;
    uStack_70 = param_7 & 0xf0;
    lVar22 = param_4 * uStack_48 + param_3;
    uVar20 = param_7 & 0xf;
    uStack_90 = param_7 & 0x20;
    pbVar13 = param_8;
    lVar23 = lVar22;
    iStack_88 = iVar12;
    lStack_80 = param_3;
    uStack_78 = uVar17;
    lVar18 = param_2;
    lVar8 = param_1;
    if (uStack_70 == 0xf0) {
      uStack_a0 = CONCAT44(uStack_a0._4_4_,param_7) & 0xffffffff0000000f;
      lStack_a8 = lVar22;
      lStack_98 = param_4;
      goto LAB_1406027ff;
    }
LAB_1406024c9:
    lStack_50 = lVar8;
    lStack_58 = lVar18;
    uVar14 = uVar25;
    if ((param_5[1] <= (longlong)uVar25) && (param_7 != 0xf0)) {
      if (uVar20 == 6) {
        if (uStack_90 == 0) goto LAB_1406025ed;
      }
      else {
        if (uVar20 != 1) goto LAB_140602503;
        if (uStack_90 == 0) {
          uVar14 = param_5[1] - 1;
        }
      }
    }
LAB_14060257a:
    do {
      in_stack_ffffffffffffff18 = &lStack_68;
      lStack_68 = *param_5;
      lStack_60 = param_5[1];
      in_RAX = (longlong *)
               FUN_140602fe0(lStack_50,lStack_58,uVar14,lVar22,in_stack_ffffffffffffff18,param_6,
                             param_7,pbVar13,param_9,param_10,param_11);
      while( true ) {
        while( true ) {
          uVar7 = param_11;
          uVar5 = param_9;
          pbVar6 = param_8;
          uVar29 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
          iVar12 = (int)uVar25;
          uVar25 = uVar25 + 1;
          lVar11 = lVar11 + param_4;
          lVar16 = (longlong)iVar12 + 1;
          param_1 = lStack_50;
          param_2 = lStack_58;
          if (uStack_48 <= uVar25) {
            param_3 = lStack_80;
            iVar12 = iStack_88;
            if (uStack_78 != 0) {
              lVar16 = 0;
              lVar22 = -uStack_48;
              lVar11 = lStack_80;
              lStack_98 = param_4;
              do {
                lStack_a8 = *param_5;
                uStack_a0 = param_5[1];
                plVar9 = (longlong *)
                         FUN_140602fe0(lStack_50,lStack_58,lVar22,lVar11,&lStack_a8,param_6,param_7,
                                       pbVar6,uVar5,param_10,uVar7);
                lVar16 = lVar16 + 1;
                lVar22 = lVar22 + 1;
                lVar11 = lVar11 + lStack_98;
              } while (lVar16 < (longlong)uStack_48);
              return plVar9;
            }
            goto LAB_1406028a2;
          }
          lVar22 = lVar23 + lVar11;
          if (uStack_70 != 0xf0) break;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar20);
          lStack_a8 = lVar23;
          lStack_98 = param_4;
LAB_1406027ff:
          in_stack_ffffffffffffff18 = (longlong *)CONCAT44(uVar29,param_10);
          (**(code **)(&DAT_14308b380 + (longlong)param_6 * 8))
                    (param_2 * uVar25 + param_1,lVar22,*param_5,param_9,in_stack_ffffffffffffff18);
          in_RAX = (longlong *)&param_8;
          param_4 = lStack_98;
          pbVar13 = param_8;
          lVar23 = lStack_a8;
          lStack_58 = param_2;
          lStack_50 = param_1;
          uVar20 = (uint)uStack_a0;
        }
        lVar18 = lStack_58;
        lVar8 = lStack_50;
        if (-1 < (longlong)uVar25) goto LAB_1406024c9;
        uVar14 = uVar25;
        if (param_7 == 0xf0) goto LAB_14060257a;
        if (uVar20 != 6) break;
        if (uStack_78 != 0) goto LAB_14060257a;
LAB_1406025ed:
        in_RAX = (longlong *)(ulonglong)*pbVar13;
        fVar28 = (float)*pbVar13;
        fVar27 = (float)pbVar13[1];
        fVar26 = (float)pbVar13[2];
        if (0 < *param_5 * 3) {
          uVar14 = *param_5 * 3 + 2;
          lVar22 = 1;
          lVar18 = 0;
          if (uVar14 / 6 != 0) {
            lVar22 = param_4 * lVar16 + lVar23;
            uVar10 = 0;
            do {
              uVar21 = uVar10;
              uVar10 = uVar21 + 1;
              *(float *)(lVar18 + lVar22) = fVar28;
              *(float *)(lVar18 + 4 + lVar22) = fVar27;
              *(float *)(lVar18 + 8 + lVar22) = fVar26;
              *(float *)(lVar18 + 0xc + lVar22) = fVar28;
              *(float *)(lVar18 + 0x10 + lVar22) = fVar27;
              *(float *)(lVar18 + 0x14 + lVar22) = fVar26;
              lVar18 = lVar18 + 0x18;
            } while (uVar10 < uVar14 / 6);
            lVar22 = uVar21 + 2 + uVar10;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar14;
          in_RAX = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
          if (lVar22 - 1U < uVar14 / 3) {
            lVar16 = lVar16 * param_4 + lVar23;
            in_RAX = (longlong *)(lVar22 * 3 + -3);
            *(float *)(lVar16 + (longlong)in_RAX * 4) = fVar28;
            *(float *)(lVar16 + 4 + (longlong)in_RAX * 4) = fVar27;
            *(float *)(lVar16 + 8 + (longlong)in_RAX * 4) = fVar26;
          }
        }
      }
      if (uVar20 != 1) goto LAB_140602503;
      uVar14 = 0;
      if (uStack_78 != 0) {
        uVar14 = uVar25;
      }
    } while( true );
  }
  if (uVar17 != 0) {
    return in_RAX;
  }
  uVar20 = param_7 & 0xf;
LAB_1406028a2:
  if (uVar20 == 6) {
    uVar25 = 0;
    plVar9 = (longlong *)(ulonglong)*param_8;
    fVar28 = (float)*param_8;
    fVar27 = (float)param_8[1];
    fVar26 = (float)param_8[2];
    if (0 < iVar12) {
      lVar11 = *param_5;
      uVar14 = lVar11 * 3 + 2;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar14;
      plVar9 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar10 = uVar25;
      do {
        if (0 < lVar11 * 3) {
          lVar16 = 1;
          lVar22 = 0;
          if (uVar14 / 6 != 0) {
            lVar16 = param_3 + uVar25;
            uVar21 = 0;
            do {
              uVar15 = uVar21;
              uVar21 = uVar15 + 1;
              *(float *)(lVar22 + lVar16) = fVar28;
              *(float *)(lVar22 + 4 + lVar16) = fVar27;
              *(float *)(lVar22 + 8 + lVar16) = fVar26;
              *(float *)(lVar22 + 0xc + lVar16) = fVar28;
              *(float *)(lVar22 + 0x10 + lVar16) = fVar27;
              *(float *)(lVar22 + 0x14 + lVar16) = fVar26;
              lVar22 = lVar22 + 0x18;
            } while (uVar21 < uVar14 / 6);
            lVar16 = uVar15 + 2 + uVar21;
          }
          plVar9 = (longlong *)(lVar16 - 1);
          if (plVar9 < (longlong *)(uVar14 / 3)) {
            plVar9 = (longlong *)(lVar16 * 3 - 3);
            lVar16 = param_3 + (longlong)plVar9 * 4;
            *(float *)(lVar16 + uVar25) = fVar28;
            *(float *)(lVar16 + 4 + uVar25) = fVar27;
            *(float *)(lVar16 + 8 + uVar25) = fVar26;
          }
        }
        uVar10 = uVar10 + 1;
        uVar25 = uVar25 + param_4;
      } while (uVar10 < (ulonglong)(longlong)iVar12);
    }
    return plVar9;
  }
  if (uVar20 == 1) {
    in_RAX = (longlong *)0x0;
    if (0 < iVar12) {
      uVar25 = *param_5 * 3;
      lVar11 = param_4 * iVar12 + param_3;
      do {
        if (0 < (longlong)uVar25) {
          if ((longlong)uVar25 < 4) {
LAB_140602d31:
            uVar21 = 0;
          }
          else {
            uVar10 = param_4 * (longlong)in_RAX + param_3;
            uVar14 = uVar10 & 0xf;
            if (uVar14 != 0) {
              if ((uVar10 & 3) != 0) goto LAB_140602d31;
              uVar14 = 0x10 - uVar14 >> 2;
            }
            if ((longlong)uVar25 < (longlong)(uVar14 + 4)) goto LAB_140602d31;
            uVar15 = 0;
            uVar21 = uVar25 - (uVar25 - uVar14 & 3);
            if (uVar14 != 0) {
              do {
                *(undefined4 *)(uVar10 + uVar15 * 4) = *(undefined4 *)(lVar11 + uVar15 * 4);
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar14);
            }
            if ((lVar11 + uVar14 * 4 & 0xf) == 0) {
              do {
                puVar2 = (undefined8 *)(lVar11 + uVar14 * 4);
                uVar5 = puVar2[1];
                puVar1 = (undefined8 *)(uVar10 + uVar14 * 4);
                *puVar1 = *puVar2;
                puVar1[1] = uVar5;
                uVar14 = uVar14 + 4;
              } while (uVar14 < uVar21);
            }
            else {
              do {
                puVar2 = (undefined8 *)(lVar11 + uVar14 * 4);
                uVar5 = puVar2[1];
                puVar1 = (undefined8 *)(uVar10 + uVar14 * 4);
                *puVar1 = *puVar2;
                puVar1[1] = uVar5;
                uVar14 = uVar14 + 4;
              } while (uVar14 < uVar21);
            }
          }
          if (uVar21 < uVar25) {
            do {
              *(undefined4 *)(param_4 * (longlong)in_RAX + param_3 + uVar21 * 4) =
                   *(undefined4 *)(lVar11 + uVar21 * 4);
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar25);
          }
        }
        in_RAX = (longlong *)((longlong)in_RAX + 1);
      } while (in_RAX < (longlong *)(longlong)iVar12);
    }
  }
  else if (uVar20 == 3) {
    lVar11 = (longlong)iVar12;
    if ((param_7 & 0xf0) == 0xf0) {
      in_RAX = (longlong *)
               (**(code **)(&DAT_14308b380 + (longlong)param_6 * 8))
                         (param_1 + param_2 * lVar11,param_3,*param_5,param_9,
                          CONCAT44(uVar29,param_10));
    }
    else {
      if (((lVar11 < 0) || (param_5[1] <= lVar11)) && (param_7 != 0xf0)) {
        lVar16 = param_5[1];
        if (lVar16 < 2) {
          if (lVar11 < 0) {
            lVar11 = -lVar11;
            if ((param_7 & 0x20) == 0) {
              lVar11 = 0;
            }
          }
          else if ((0 < lVar11) && ((param_7 & 0x20) == 0)) {
            lVar11 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar11 < 0; lVar11 = -lVar11) {
            }
            if ((lVar11 < lVar16) || ((param_7 & 0x20) != 0)) break;
            lVar11 = (lVar16 + -1) * 2 - lVar11;
          }
        }
      }
      lStack_a8 = *param_5;
      uStack_a0 = param_5[1];
      in_RAX = (longlong *)
               FUN_140602fe0(param_1,param_2,lVar11,param_3,&lStack_a8,param_6,param_7,param_8,
                             param_9,param_10,param_11);
    }
    lVar11 = 1;
    uVar25 = 0;
    if (1 < iVar12) {
      plVar9 = (longlong *)(*param_5 * 3);
      lVar16 = ((longlong)param_10 + -1) * param_4 + param_3;
      do {
        if (0 < (longlong)plVar9) {
          if ((longlong)plVar9 < 4) {
LAB_140602b45:
            param_5 = (longlong *)0x0;
          }
          else {
            uVar14 = param_3 + param_4 * lVar11;
            plVar24 = (longlong *)(uVar14 & 0xf);
            if (plVar24 != (longlong *)0x0) {
              if ((uVar14 & 3) != 0) goto LAB_140602b45;
              plVar24 = (longlong *)(0x10U - (longlong)plVar24 >> 2);
            }
            if ((longlong)plVar9 < (longlong)plVar24 + 4) goto LAB_140602b45;
            lVar22 = lVar16 - param_4 * lVar11;
            plVar19 = (longlong *)0x0;
            param_5 = (longlong *)((longlong)plVar9 - ((longlong)plVar9 - (longlong)plVar24 & 3U));
            if (plVar24 != (longlong *)0x0) {
              do {
                *(undefined4 *)(uVar14 + (longlong)plVar19 * 4) =
                     *(undefined4 *)(lVar22 + (longlong)plVar19 * 4);
                plVar19 = (longlong *)((longlong)plVar19 + 1);
              } while (plVar19 < plVar24);
            }
            if ((lVar22 + (longlong)plVar24 * 4 & 0xfU) == 0) {
              do {
                puVar1 = (undefined8 *)(lVar22 + (longlong)plVar24 * 4);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(uVar14 + (longlong)plVar24 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                plVar24 = (longlong *)((longlong)plVar24 + 4);
              } while (plVar24 < param_5);
            }
            else {
              do {
                puVar1 = (undefined8 *)(lVar22 + (longlong)plVar24 * 4);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(uVar14 + (longlong)plVar24 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                plVar24 = (longlong *)((longlong)plVar24 + 4);
              } while (plVar24 < param_5);
            }
          }
          if (param_5 < plVar9) {
            do {
              *(undefined4 *)(param_3 + lVar11 * param_4 + (longlong)param_5 * 4) =
                   *(undefined4 *)((lVar16 - lVar11 * param_4) + (longlong)param_5 * 4);
              param_5 = (longlong *)((longlong)param_5 + 1);
            } while (param_5 < plVar9);
          }
        }
        lVar11 = uVar25 + 2;
        uVar25 = uVar25 + 1;
        in_RAX = param_5;
      } while (uVar25 < (ulonglong)(longlong)(iVar12 + -1));
    }
  }
  return in_RAX;
LAB_140602503:
  uVar14 = uVar25;
  if (uVar20 == 3) {
    lVar16 = param_5[1];
    if (lVar16 < 2) {
      if ((longlong)uVar25 < 0) {
        if (uStack_78 == 0) {
          uVar14 = -uVar25;
          if (uStack_90 == 0) {
            uVar14 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar25) && (uStack_90 == 0)) {
        uVar14 = -uVar25;
        if (uStack_78 == 0) {
          uVar14 = 0;
        }
      }
    }
    else if (((longlong)uVar25 < 0) || (lVar16 <= (longlong)uVar25)) {
      if ((longlong)uVar25 < 0) goto LAB_1406027a0;
      while (uStack_90 == 0) {
        for (uVar14 = (lVar16 + -1) * 2 - uVar14; (longlong)uVar14 < 0; uVar14 = -uVar14) {
LAB_1406027a0:
          if (uStack_78 != 0) goto LAB_14060257a;
        }
        if ((longlong)uVar14 < lVar16) break;
      }
    }
  }
  goto LAB_14060257a;
}


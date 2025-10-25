
longlong *
FUN_140765da0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
             int param_6,uint param_7,byte *param_8,undefined8 param_9,int param_10,
             undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  longlong *in_RAX;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 *in_stack_ffffffffffffff18;
  undefined4 uVar25;
  longlong lStack_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  uint uStack_90;
  int iStack_88;
  longlong lStack_80;
  uint uStack_78;
  uint uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  lVar18 = 0;
  iVar21 = param_10 >> 1;
  uVar10 = 0;
  uVar13 = param_7 & 0x10;
  lVar12 = 0;
  if (0 < iVar21) {
    uStack_48 = (ulonglong)iVar21;
    uStack_70 = param_7 & 0xf0;
    uVar20 = param_7 & 0xf;
    lVar9 = param_4 * uStack_48 + param_3;
    uStack_90 = param_7 & 0x20;
    lVar16 = lVar9;
    lVar6 = param_4;
    iStack_88 = iVar21;
    lStack_80 = param_3;
    uStack_78 = uVar13;
    if (uStack_70 == 0xf0) goto LAB_1407661c3;
    uVar10 = 0;
    lStack_58 = param_2;
    lStack_50 = param_1;
LAB_140765e7b:
    uVar14 = uVar10;
    if ((param_5[1] <= (longlong)uVar10) && (param_7 != 0xf0)) {
      if (uVar20 == 6) {
        if (uStack_90 == 0) goto LAB_140765fb4;
      }
      else {
        if (uVar20 != 1) goto LAB_140765eb7;
        if (uStack_90 == 0) {
          uVar14 = param_5[1] - 1;
        }
      }
    }
LAB_140765f3a:
    do {
      uStack_68 = (undefined4)*param_5;
      uStack_64 = *(undefined4 *)((longlong)param_5 + 4);
      uStack_60 = (undefined4)param_5[1];
      uStack_5c = *(undefined4 *)((longlong)param_5 + 0xc);
      in_stack_ffffffffffffff18 = &uStack_68;
      in_RAX = (longlong *)
               FUN_1407669a0(lStack_50,lStack_58,uVar14,lVar9,in_stack_ffffffffffffff18,param_6,
                             param_7,param_8,param_9,param_10,param_11);
      while( true ) {
        while( true ) {
          uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
          iVar21 = (int)uVar10;
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + param_4;
          lVar18 = (longlong)iVar21 + 1;
          param_1 = lStack_50;
          param_2 = lStack_58;
          if (uStack_48 <= uVar10) {
            param_3 = lStack_80;
            iVar21 = iStack_88;
            if (uStack_78 != 0) {
              lVar18 = 0;
              lVar9 = -uStack_48;
              lVar12 = lStack_80;
              lStack_98 = param_4;
              do {
                lStack_a8 = *param_5;
                uStack_a0 = (uint)param_5[1];
                uStack_9c = *(undefined4 *)((longlong)param_5 + 0xc);
                plVar7 = (longlong *)
                         FUN_1407669a0(lStack_50,lStack_58,lVar9,lVar12,&lStack_a8,param_6,param_7,
                                       param_8,param_9,param_10,param_11);
                lVar18 = lVar18 + 1;
                lVar12 = lVar12 + lStack_98;
                lVar9 = lVar9 + 1;
              } while (lVar18 < (longlong)uStack_48);
              return plVar7;
            }
            goto LAB_14076626b;
          }
          lVar9 = lVar16 + lVar12;
          lVar6 = param_4;
          if (uStack_70 != 0xf0) break;
LAB_1407661c3:
          lStack_98 = lVar6;
          uStack_a0 = uVar20;
          lStack_a8 = lVar16;
          in_stack_ffffffffffffff18 = (undefined4 *)CONCAT44(uVar25,param_10);
          in_RAX = (longlong *)
                   (*(code *)(&PTR_FUN_14308c060)[param_6])
                             (param_2 * uVar10 + param_1,lVar9,*param_5,param_9,
                              in_stack_ffffffffffffff18);
          param_4 = lStack_98;
          lVar16 = lStack_a8;
          uVar20 = uStack_a0;
          lStack_58 = param_2;
          lStack_50 = param_1;
        }
        if (-1 < (longlong)uVar10) goto LAB_140765e7b;
        uVar14 = uVar10;
        if (param_7 == 0xf0) goto LAB_140765f3a;
        if (uVar20 != 6) break;
        if (uStack_78 != 0) goto LAB_140765f3a;
LAB_140765fb4:
        in_RAX = (longlong *)(ulonglong)*param_8;
        fVar24 = (float)*param_8;
        fVar23 = (float)param_8[1];
        fVar22 = (float)param_8[2];
        if (0 < *param_5 * 3) {
          uVar14 = *param_5 * 3 + 2;
          lVar9 = 1;
          lVar6 = 0;
          if (uVar14 / 6 != 0) {
            lVar9 = param_4 * lVar18 + lVar16;
            uVar8 = 0;
            do {
              uVar17 = uVar8;
              uVar8 = uVar17 + 1;
              *(float *)(lVar6 + lVar9) = fVar24;
              *(float *)(lVar6 + 4 + lVar9) = fVar23;
              *(float *)(lVar6 + 8 + lVar9) = fVar22;
              *(float *)(lVar6 + 0xc + lVar9) = fVar24;
              *(float *)(lVar6 + 0x10 + lVar9) = fVar23;
              *(float *)(lVar6 + 0x14 + lVar9) = fVar22;
              lVar6 = lVar6 + 0x18;
            } while (uVar8 < uVar14 / 6);
            lVar9 = uVar17 + 2 + uVar8;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar14;
          in_RAX = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
          if (lVar9 - 1U < uVar14 / 3) {
            in_RAX = (longlong *)(lVar9 * 3 + -3);
            lVar18 = lVar18 * param_4 + lVar16;
            *(float *)(lVar18 + (longlong)in_RAX * 4) = fVar24;
            *(float *)(lVar18 + 4 + (longlong)in_RAX * 4) = fVar23;
            *(float *)(lVar18 + 8 + (longlong)in_RAX * 4) = fVar22;
          }
        }
      }
      if (uVar20 != 1) goto LAB_140765eb7;
      uVar14 = 0;
      if (uStack_78 != 0) {
        uVar14 = uVar10;
      }
    } while( true );
  }
  if (uVar13 != 0) {
    return in_RAX;
  }
  uVar20 = param_7 & 0xf;
LAB_14076626b:
  if (uVar20 == 6) {
    uVar10 = 0;
    plVar7 = (longlong *)(ulonglong)*param_8;
    fVar24 = (float)*param_8;
    fVar23 = (float)param_8[1];
    fVar22 = (float)param_8[2];
    lVar12 = 0;
    if (0 < iVar21) {
      lVar18 = *param_5;
      uVar14 = lVar18 * 3 + 2;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar14;
      plVar7 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      do {
        if (0 < lVar18 * 3) {
          lVar9 = 1;
          lVar16 = 0;
          if (uVar14 / 6 != 0) {
            lVar9 = param_3 + lVar12;
            uVar8 = 0;
            do {
              uVar17 = uVar8;
              uVar8 = uVar17 + 1;
              *(float *)(lVar16 + lVar9) = fVar24;
              *(float *)(lVar16 + 4 + lVar9) = fVar23;
              *(float *)(lVar16 + 8 + lVar9) = fVar22;
              *(float *)(lVar16 + 0xc + lVar9) = fVar24;
              *(float *)(lVar16 + 0x10 + lVar9) = fVar23;
              *(float *)(lVar16 + 0x14 + lVar9) = fVar22;
              lVar16 = lVar16 + 0x18;
            } while (uVar8 < uVar14 / 6);
            lVar9 = uVar17 + 2 + uVar8;
          }
          plVar7 = (longlong *)(lVar9 - 1);
          if (plVar7 < (longlong *)(uVar14 / 3)) {
            plVar7 = (longlong *)(lVar9 * 3 - 3);
            lVar9 = param_3 + (longlong)plVar7 * 4;
            *(float *)(lVar9 + lVar12) = fVar24;
            *(float *)(lVar9 + 4 + lVar12) = fVar23;
            *(float *)(lVar9 + 8 + lVar12) = fVar22;
          }
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + param_4;
      } while (uVar10 < (ulonglong)(longlong)iVar21);
    }
    return plVar7;
  }
  if (uVar20 == 1) {
    in_RAX = (longlong *)0x0;
    if (0 < iVar21) {
      uVar10 = *param_5 * 3;
      lVar12 = param_4 * iVar21 + param_3;
      do {
        if (0 < (longlong)uVar10) {
          if ((longlong)uVar10 < 4) {
LAB_140766713:
            uVar17 = 0;
          }
          else {
            uVar8 = param_4 * (longlong)in_RAX + param_3;
            uVar14 = uVar8 & 0xf;
            if (uVar14 != 0) {
              if ((uVar8 & 3) != 0) goto LAB_140766713;
              uVar14 = 0x10 - uVar14 >> 2;
            }
            if ((longlong)uVar10 < (longlong)(uVar14 + 4)) goto LAB_140766713;
            uVar11 = 0;
            uVar17 = uVar10 - (uVar10 - uVar14 & 3);
            if (uVar14 != 0) {
              do {
                *(undefined4 *)(uVar8 + uVar11 * 4) = *(undefined4 *)(lVar12 + uVar11 * 4);
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar14);
            }
            if ((lVar12 + uVar14 * 4 & 0xf) == 0) {
              do {
                puVar2 = (undefined8 *)(lVar12 + uVar14 * 4);
                uVar5 = puVar2[1];
                puVar1 = (undefined8 *)(uVar8 + uVar14 * 4);
                *puVar1 = *puVar2;
                puVar1[1] = uVar5;
                uVar14 = uVar14 + 4;
              } while (uVar14 < uVar17);
            }
            else {
              do {
                puVar2 = (undefined8 *)(lVar12 + uVar14 * 4);
                uVar5 = puVar2[1];
                puVar1 = (undefined8 *)(uVar8 + uVar14 * 4);
                *puVar1 = *puVar2;
                puVar1[1] = uVar5;
                uVar14 = uVar14 + 4;
              } while (uVar14 < uVar17);
            }
          }
          if (uVar17 < uVar10) {
            do {
              *(undefined4 *)(param_4 * (longlong)in_RAX + param_3 + uVar17 * 4) =
                   *(undefined4 *)(lVar12 + uVar17 * 4);
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar10);
          }
        }
        in_RAX = (longlong *)((longlong)in_RAX + 1);
      } while (in_RAX < (longlong *)(longlong)iVar21);
    }
  }
  else if (uVar20 == 3) {
    lVar12 = (longlong)iVar21;
    if ((param_7 & 0xf0) == 0xf0) {
      in_RAX = (longlong *)
               (*(code *)(&PTR_FUN_14308c060)[param_6])
                         (param_1 + param_2 * lVar12,param_3,*param_5,param_9,
                          CONCAT44(uVar25,param_10));
    }
    else {
      if (((lVar12 < 0) || (param_5[1] <= lVar12)) && (param_7 != 0xf0)) {
        lVar18 = param_5[1];
        if (lVar18 < 2) {
          if (lVar12 < 0) {
            lVar12 = -lVar12;
            if ((param_7 & 0x20) == 0) {
              lVar12 = 0;
            }
          }
          else if ((0 < lVar12) && ((param_7 & 0x20) == 0)) {
            lVar12 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar12 < 0; lVar12 = -lVar12) {
            }
            if ((lVar12 < lVar18) || ((param_7 & 0x20) != 0)) break;
            lVar12 = (lVar18 + -1) * 2 - lVar12;
          }
        }
      }
      lStack_a8 = *param_5;
      uStack_a0 = (uint)param_5[1];
      uStack_9c = *(undefined4 *)((longlong)param_5 + 0xc);
      in_RAX = (longlong *)
               FUN_1407669a0((int)*param_5,param_2,lVar12,param_3,&lStack_a8,param_6,param_7,param_8
                             ,param_9,param_10,param_11);
    }
    lVar12 = 1;
    uVar10 = 0;
    if (1 < iVar21) {
      plVar7 = (longlong *)(*param_5 * 3);
      lVar18 = ((longlong)param_10 + -1) * param_4 + param_3;
      do {
        if (0 < (longlong)plVar7) {
          if ((longlong)plVar7 < 4) {
LAB_140766527:
            param_5 = (longlong *)0x0;
          }
          else {
            uVar14 = param_3 + param_4 * lVar12;
            plVar19 = (longlong *)(uVar14 & 0xf);
            if (plVar19 != (longlong *)0x0) {
              if ((uVar14 & 3) != 0) goto LAB_140766527;
              plVar19 = (longlong *)(0x10U - (longlong)plVar19 >> 2);
            }
            if ((longlong)plVar7 < (longlong)plVar19 + 4) goto LAB_140766527;
            lVar9 = lVar18 - param_4 * lVar12;
            plVar15 = (longlong *)0x0;
            param_5 = (longlong *)((longlong)plVar7 - ((longlong)plVar7 - (longlong)plVar19 & 3U));
            if (plVar19 != (longlong *)0x0) {
              do {
                *(undefined4 *)(uVar14 + (longlong)plVar15 * 4) =
                     *(undefined4 *)(lVar9 + (longlong)plVar15 * 4);
                plVar15 = (longlong *)((longlong)plVar15 + 1);
              } while (plVar15 < plVar19);
            }
            if ((lVar9 + (longlong)plVar19 * 4 & 0xfU) == 0) {
              do {
                puVar1 = (undefined8 *)(lVar9 + (longlong)plVar19 * 4);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(uVar14 + (longlong)plVar19 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                plVar19 = (longlong *)((longlong)plVar19 + 4);
              } while (plVar19 < param_5);
            }
            else {
              do {
                puVar1 = (undefined8 *)(lVar9 + (longlong)plVar19 * 4);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(uVar14 + (longlong)plVar19 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                plVar19 = (longlong *)((longlong)plVar19 + 4);
              } while (plVar19 < param_5);
            }
          }
          if (param_5 < plVar7) {
            do {
              *(undefined4 *)(param_3 + lVar12 * param_4 + (longlong)param_5 * 4) =
                   *(undefined4 *)((lVar18 - lVar12 * param_4) + (longlong)param_5 * 4);
              param_5 = (longlong *)((longlong)param_5 + 1);
            } while (param_5 < plVar7);
          }
        }
        lVar12 = uVar10 + 2;
        uVar10 = uVar10 + 1;
        in_RAX = param_5;
      } while (uVar10 < (ulonglong)(longlong)(iVar21 + -1));
    }
  }
  return in_RAX;
LAB_140765eb7:
  uVar14 = uVar10;
  if (uVar20 == 3) {
    lVar18 = param_5[1];
    if (lVar18 < 2) {
      if ((longlong)uVar10 < 0) {
        if (uStack_78 == 0) {
          uVar14 = -uVar10;
          if (uStack_90 == 0) {
            uVar14 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar10) && (uStack_90 == 0)) {
        uVar14 = -uVar10;
        if (uStack_78 == 0) {
          uVar14 = 0;
        }
      }
    }
    else if (((longlong)uVar10 < 0) || (lVar18 <= (longlong)uVar10)) {
      if ((longlong)uVar10 < 0) goto LAB_140766160;
      while (uStack_90 == 0) {
        for (uVar14 = (lVar18 + -1) * 2 - uVar14; (longlong)uVar14 < 0; uVar14 = -uVar14) {
LAB_140766160:
          if (uStack_78 != 0) goto LAB_140765f3a;
        }
        if ((longlong)uVar14 < lVar18) break;
      }
    }
  }
  goto LAB_140765f3a;
}


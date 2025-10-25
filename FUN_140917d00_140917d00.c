
void FUN_140917d00(longlong param_1,longlong param_2,float *param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9,
                  int param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lStack_d8;
  ushort *puStack_d0;
  uint uStack_a8;
  
  lVar6 = 0;
  uVar10 = 0;
  lStack_d8 = 0;
  uVar15 = param_7 & 0x10;
  iVar17 = param_10 >> 1;
  if (0 < iVar17) {
    uVar18 = (ulonglong)iVar17;
    pfVar5 = (float *)(param_4 * uVar18 + (longlong)param_3);
    if ((param_7 & 0xf0) == 0xf0) {
      lStack_d8 = 0;
      puStack_d0 = param_8;
      pfVar11 = pfVar5;
      goto LAB_1409182b5;
    }
    uVar10 = 0;
LAB_140917e13:
    uStack_a8 = param_7 & 0xf;
    puStack_d0 = param_8;
    if ((param_5[1] <= (longlong)uVar10) && (param_7 != 0xf0)) {
      if (uStack_a8 != 6) goto joined_r0x000140917e47;
      if ((param_7 & 0x20) == 0) goto LAB_140917f36;
    }
LAB_140917eda:
    do {
      FUN_140918b60(param_1,param_2);
      while( true ) {
        while( true ) {
          uStack_a8 = param_7 & 0xf;
          iVar9 = (int)uVar10;
          uVar10 = uVar10 + 1;
          lStack_d8 = lStack_d8 + param_4;
          lVar6 = (longlong)iVar9 + 1;
          if (uVar18 <= uVar10) {
            if (uVar15 != 0) {
              lVar6 = 0;
              lVar8 = -uVar18;
              do {
                FUN_140918b60(param_1,param_2,lVar8,param_3);
                lVar6 = lVar6 + 1;
                lVar8 = lVar8 + 1;
                param_3 = (float *)((longlong)param_3 + param_4);
              } while (lVar6 < (longlong)uVar18);
              return;
            }
            goto LAB_140918314;
          }
          pfVar11 = (float *)((longlong)pfVar5 + lStack_d8);
          if ((param_7 & 0xf0) != 0xf0) break;
LAB_1409182b5:
          (*(code *)(&PTR_FUN_14308d440)[param_6])
                    (param_2 * uVar10 + param_1,pfVar11,*param_5,param_9);
        }
        param_8 = puStack_d0;
        if (-1 < (longlong)uVar10) goto LAB_140917e13;
        if (param_7 == 0xf0) break;
        if (uStack_a8 != 6) goto joined_r0x000140917e47;
        if (uVar15 != 0) break;
LAB_140917f36:
        fVar21 = (float)puStack_d0[2];
        fVar19 = (float)*puStack_d0;
        fVar20 = (float)puStack_d0[1];
        if (0 < *param_5 * 3) {
          uVar12 = (*param_5 * 3 + 2) / 3;
          if ((longlong)uVar12 < 0x10) {
            uVar13 = 0;
          }
          else {
            pfVar11 = (float *)(param_4 * lVar6 + (longlong)pfVar5);
            uVar13 = uVar12 & 0xfffffffffffffff0;
            uVar16 = 0;
            do {
              uVar16 = uVar16 + 0x10;
              *pfVar11 = fVar19;
              pfVar11[3] = fVar19;
              pfVar11[6] = fVar19;
              pfVar11[9] = fVar19;
              pfVar11[0xc] = fVar19;
              pfVar11[0xf] = fVar19;
              pfVar11[0x12] = fVar19;
              pfVar11[0x15] = fVar19;
              pfVar11[0x18] = fVar19;
              pfVar11[0x1b] = fVar19;
              pfVar11[0x1e] = fVar19;
              pfVar11[0x21] = fVar19;
              pfVar11[0x24] = fVar19;
              pfVar11[0x27] = fVar19;
              pfVar11[0x2a] = fVar19;
              pfVar11[0x2d] = fVar19;
              pfVar11[1] = fVar20;
              pfVar11[4] = fVar20;
              pfVar11[7] = fVar20;
              pfVar11[10] = fVar20;
              pfVar11[0xd] = fVar20;
              pfVar11[0x10] = fVar20;
              pfVar11[0x13] = fVar20;
              pfVar11[0x16] = fVar20;
              pfVar11[0x19] = fVar20;
              pfVar11[0x1c] = fVar20;
              pfVar11[0x1f] = fVar20;
              pfVar11[0x22] = fVar20;
              pfVar11[0x25] = fVar20;
              pfVar11[0x28] = fVar20;
              pfVar11[0x2b] = fVar20;
              pfVar11[0x2e] = fVar20;
              pfVar11[2] = fVar21;
              pfVar11[5] = fVar21;
              pfVar11[8] = fVar21;
              pfVar11[0xb] = fVar21;
              pfVar11[0xe] = fVar21;
              pfVar11[0x11] = fVar21;
              pfVar11[0x14] = fVar21;
              pfVar11[0x17] = fVar21;
              pfVar11[0x1a] = fVar21;
              pfVar11[0x1d] = fVar21;
              pfVar11[0x20] = fVar21;
              pfVar11[0x23] = fVar21;
              pfVar11[0x26] = fVar21;
              pfVar11[0x29] = fVar21;
              pfVar11[0x2c] = fVar21;
              pfVar11[0x2f] = fVar21;
              pfVar11 = pfVar11 + 0x30;
            } while (uVar16 < uVar13);
          }
          if (uVar13 + 1 <= uVar12) {
            uVar12 = uVar12 - uVar13;
            if ((longlong)uVar12 < 2) {
              uVar16 = 0;
            }
            else {
              uVar7 = 0;
              uVar16 = uVar12 & 0xfffffffffffffffe;
              lVar8 = uVar13 * 0xc + param_4 * lVar6;
              lVar14 = 0;
              do {
                uVar7 = uVar7 + 2;
                *(float *)((longlong)pfVar5 + lVar14 + 8 + lVar8) = fVar21;
                *(float *)((longlong)pfVar5 + lVar14 + 0x14 + lVar8) = fVar21;
                *(float *)((longlong)pfVar5 + lVar14 + 4 + lVar8) = fVar20;
                *(float *)((longlong)pfVar5 + lVar14 + 0x10 + lVar8) = fVar20;
                *(float *)((longlong)pfVar5 + lVar14 + lVar8) = fVar19;
                *(float *)((longlong)pfVar5 + lVar14 + 0xc + lVar8) = fVar19;
                lVar14 = lVar14 + 0x18;
              } while (uVar7 < uVar16);
            }
            lVar8 = uVar16 * 0xc;
            if (uVar16 < uVar12) {
              lVar6 = uVar13 * 0xc + lVar6 * param_4;
              do {
                uVar16 = uVar16 + 1;
                *(float *)((longlong)pfVar5 + lVar8 + lVar6) = fVar19;
                *(float *)((longlong)pfVar5 + lVar8 + 4 + lVar6) = fVar20;
                *(float *)((longlong)pfVar5 + lVar8 + 8 + lVar6) = fVar21;
                lVar8 = lVar8 + 0xc;
              } while (uVar16 < uVar12);
            }
          }
        }
      }
    } while( true );
  }
  puStack_d0 = param_8;
  if (uVar15 != 0) {
    return;
  }
LAB_140918314:
  uVar15 = param_7 & 0xf;
  if (uVar15 == 6) {
    uVar10 = 0;
    fVar21 = (float)*puStack_d0;
    fVar20 = (float)puStack_d0[1];
    fVar19 = (float)puStack_d0[2];
    if (0 < iVar17) {
      lVar6 = *param_5;
      uVar18 = (lVar6 * 3 + 2) / 3;
      do {
        if (0 < lVar6 * 3) {
          if ((longlong)uVar18 < 0x10) {
            uVar12 = 0;
          }
          else {
            uVar13 = 0;
            pfVar5 = param_3;
            do {
              uVar13 = uVar13 + 0x10;
              *pfVar5 = fVar21;
              pfVar5[3] = fVar21;
              pfVar5[6] = fVar21;
              pfVar5[9] = fVar21;
              pfVar5[0xc] = fVar21;
              pfVar5[0xf] = fVar21;
              pfVar5[0x12] = fVar21;
              pfVar5[0x15] = fVar21;
              pfVar5[0x18] = fVar21;
              pfVar5[0x1b] = fVar21;
              pfVar5[0x1e] = fVar21;
              pfVar5[0x21] = fVar21;
              pfVar5[0x24] = fVar21;
              pfVar5[0x27] = fVar21;
              pfVar5[0x2a] = fVar21;
              pfVar5[0x2d] = fVar21;
              pfVar5[1] = fVar20;
              pfVar5[4] = fVar20;
              pfVar5[7] = fVar20;
              pfVar5[10] = fVar20;
              pfVar5[0xd] = fVar20;
              pfVar5[0x10] = fVar20;
              pfVar5[0x13] = fVar20;
              pfVar5[0x16] = fVar20;
              pfVar5[0x19] = fVar20;
              pfVar5[0x1c] = fVar20;
              pfVar5[0x1f] = fVar20;
              pfVar5[0x22] = fVar20;
              pfVar5[0x25] = fVar20;
              pfVar5[0x28] = fVar20;
              pfVar5[0x2b] = fVar20;
              pfVar5[0x2e] = fVar20;
              pfVar5[2] = fVar19;
              pfVar5[5] = fVar19;
              pfVar5[8] = fVar19;
              pfVar5[0xb] = fVar19;
              pfVar5[0xe] = fVar19;
              pfVar5[0x11] = fVar19;
              pfVar5[0x14] = fVar19;
              pfVar5[0x17] = fVar19;
              pfVar5[0x1a] = fVar19;
              pfVar5[0x1d] = fVar19;
              pfVar5[0x20] = fVar19;
              pfVar5[0x23] = fVar19;
              pfVar5[0x26] = fVar19;
              pfVar5[0x29] = fVar19;
              pfVar5[0x2c] = fVar19;
              pfVar5[0x2f] = fVar19;
              pfVar5 = pfVar5 + 0x30;
              uVar12 = uVar18 & 0xfffffffffffffff0;
            } while (uVar13 < (uVar18 & 0xfffffffffffffff0));
          }
          if (uVar12 + 1 <= uVar18) {
            uVar13 = uVar18 - uVar12;
            if ((longlong)uVar13 < 2) {
              uVar16 = 0;
            }
            else {
              uVar7 = 0;
              uVar16 = uVar13 & 0xfffffffffffffffe;
              lVar8 = 0;
              do {
                uVar7 = uVar7 + 2;
                *(float *)((longlong)param_3 + lVar8 + 8 + uVar12 * 0xc) = fVar19;
                *(float *)((longlong)param_3 + lVar8 + 0x14 + uVar12 * 0xc) = fVar19;
                *(float *)((longlong)param_3 + lVar8 + 4 + uVar12 * 0xc) = fVar20;
                *(float *)((longlong)param_3 + lVar8 + 0x10 + uVar12 * 0xc) = fVar20;
                *(float *)((longlong)param_3 + lVar8 + uVar12 * 0xc) = fVar21;
                *(float *)((longlong)param_3 + lVar8 + 0xc + uVar12 * 0xc) = fVar21;
                lVar8 = lVar8 + 0x18;
              } while (uVar7 < uVar16);
            }
            lVar8 = uVar16 * 0xc;
            for (; uVar16 < uVar13; uVar16 = uVar16 + 1) {
              *(float *)((longlong)param_3 + lVar8 + uVar12 * 0xc) = fVar21;
              *(float *)((longlong)param_3 + lVar8 + 4 + uVar12 * 0xc) = fVar20;
              *(float *)((longlong)param_3 + lVar8 + 8 + uVar12 * 0xc) = fVar19;
              lVar8 = lVar8 + 0xc;
            }
          }
        }
        uVar10 = uVar10 + 1;
        param_3 = (float *)((longlong)param_3 + param_4);
      } while (uVar10 < (ulonglong)(longlong)iVar17);
    }
    return;
  }
  if (uVar15 == 1) {
    uVar10 = 0;
    if (0 < iVar17) {
      lVar6 = param_4 * iVar17;
      uVar18 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar18) {
          if ((longlong)uVar18 < 8) {
LAB_140918771:
            uVar12 = 0;
          }
          else {
            pfVar5 = (float *)(param_4 * uVar10 + (longlong)param_3);
            if ((longlong)uVar18 < 0xbd) {
              uVar13 = 0;
              uVar12 = uVar18 & 0xfffffffffffffff8;
            }
            else {
              uVar13 = (ulonglong)pfVar5 & 0x1f;
              if (uVar13 != 0) {
                if (((ulonglong)pfVar5 & 3) != 0) goto LAB_140918771;
                uVar13 = 0x20 - uVar13 >> 2;
              }
              if ((longlong)uVar18 < (longlong)(uVar13 + 8)) goto LAB_140918771;
              uVar16 = 0;
              uVar12 = uVar18 - (uVar18 - uVar13 & 7);
              if (uVar13 != 0) {
                do {
                  pfVar5[uVar16] = *(float *)((longlong)param_3 + uVar16 * 4 + lVar6);
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar13);
              }
            }
            do {
              *(undefined1 (*) [32])(pfVar5 + uVar13) =
                   *(undefined1 (*) [32])((longlong)param_3 + uVar13 * 4 + lVar6);
              uVar13 = uVar13 + 8;
            } while (uVar13 < uVar12);
          }
          if (uVar12 < uVar18) {
            do {
              *(undefined4 *)((longlong)param_3 + uVar12 * 4 + param_4 * uVar10) =
                   *(undefined4 *)((longlong)param_3 + uVar12 * 4 + lVar6);
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar18);
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulonglong)(longlong)iVar17);
    }
  }
  else if (uVar15 == 3) {
    lVar6 = (longlong)iVar17;
    if ((param_7 & 0xf0) == 0xf0) {
      (*(code *)(&PTR_FUN_14308d440)[param_6])(param_1 + param_2 * lVar6,param_3,*param_5,param_9);
    }
    else {
      if (((lVar6 < 0) || (param_5[1] <= lVar6)) && (param_7 != 0xf0)) {
        lVar8 = param_5[1];
        if (lVar8 < 2) {
          if (lVar6 < 0) {
            lVar6 = -lVar6;
            if ((param_7 & 0x20) == 0) {
              lVar6 = 0;
            }
          }
          else if ((0 < lVar6) && ((param_7 & 0x20) == 0)) {
            lVar6 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar6 < 0; lVar6 = -lVar6) {
            }
            if ((lVar6 < lVar8) || ((param_7 & 0x20) != 0)) break;
            lVar6 = (lVar8 + -1) * 2 - lVar6;
          }
        }
      }
      FUN_140918b60(param_1,param_2,lVar6,param_3);
    }
    lVar6 = 1;
    uVar10 = 0;
    if (1 < iVar17) {
      lVar8 = ((longlong)param_10 + -1) * param_4;
      uVar18 = *param_5 * 3;
      do {
        if (0 < (longlong)uVar18) {
          if ((longlong)uVar18 < 8) {
LAB_140918584:
            uVar12 = 0;
          }
          else {
            lVar14 = param_4 * lVar6;
            pfVar5 = (float *)((longlong)param_3 + lVar14);
            if ((longlong)uVar18 < 0xbd) {
              lVar14 = (longlong)param_3 + (lVar8 - lVar14);
              uVar13 = 0;
              uVar12 = uVar18 & 0xfffffffffffffff8;
            }
            else {
              uVar13 = (ulonglong)pfVar5 & 0x1f;
              if (uVar13 != 0) {
                if (((ulonglong)pfVar5 & 3) != 0) goto LAB_140918584;
                uVar13 = 0x20 - uVar13 >> 2;
              }
              if ((longlong)uVar18 < (longlong)(uVar13 + 8)) goto LAB_140918584;
              lVar14 = (longlong)param_3 + (lVar8 - lVar14);
              uVar16 = 0;
              uVar12 = uVar18 - (uVar18 - uVar13 & 7);
              if (uVar13 != 0) {
                do {
                  pfVar5[uVar16] = *(float *)(lVar14 + uVar16 * 4);
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar13);
              }
            }
            do {
              puVar1 = (undefined8 *)(lVar14 + uVar13 * 4);
              uVar2 = puVar1[1];
              uVar3 = puVar1[2];
              uVar4 = puVar1[3];
              pfVar11 = pfVar5 + uVar13;
              *(undefined8 *)pfVar11 = *puVar1;
              *(undefined8 *)(pfVar11 + 2) = uVar2;
              *(undefined8 *)(pfVar11 + 4) = uVar3;
              *(undefined8 *)(pfVar11 + 6) = uVar4;
              uVar13 = uVar13 + 8;
            } while (uVar13 < uVar12);
          }
          if (uVar12 < uVar18) {
            do {
              *(undefined4 *)((longlong)param_3 + uVar12 * 4 + lVar6 * param_4) =
                   *(undefined4 *)((longlong)param_3 + uVar12 * 4 + (lVar8 - lVar6 * param_4));
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar18);
          }
        }
        lVar6 = uVar10 + 2;
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulonglong)(longlong)(iVar17 + -1));
    }
  }
  return;
joined_r0x000140917e47:
  if ((param_7 & 0xf) != 1) {
    uStack_a8 = param_7 & 0xf;
    if (((uStack_a8 == 3) && (lVar6 = param_5[1], 1 < lVar6)) &&
       (((longlong)uVar10 < 0 || (lVar6 <= (longlong)uVar10)))) {
      uVar12 = uVar10;
      if ((longlong)uVar10 < 0) goto LAB_140918260;
      while ((param_7 & 0x20) == 0) {
        for (uVar12 = (lVar6 + -1) * 2 - uVar12; (longlong)uVar12 < 0; uVar12 = -uVar12) {
LAB_140918260:
          if (uVar15 != 0) goto LAB_140917eda;
        }
        if ((longlong)uVar12 < lVar6) break;
      }
    }
  }
  goto LAB_140917eda;
}


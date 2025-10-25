
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140619180(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong lVar46;
  undefined2 uVar47;
  int iVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  uint uVar58;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  lVar38 = 0;
  lVar49 = (longlong)param_3;
  fVar9 = *param_6;
  lVar54 = lVar49 + 4;
  if (SCARRY8(lVar49,-3) == lVar49 + -3 < 0) {
    lVar54 = lVar49 + -3;
  }
  lVar49 = (longlong)(int)lVar54 + 1;
  fVar10 = param_6[1];
  if (6 < lVar49) {
    lVar49 = lVar38;
  }
  lVar51 = (longlong)(int)lVar49 + 1;
  fVar11 = param_6[2];
  if (6 < lVar51) {
    lVar51 = lVar38;
  }
  lVar46 = (longlong)(int)lVar51 + 1;
  fVar12 = param_6[3];
  if (6 < lVar46) {
    lVar46 = lVar38;
  }
  lVar52 = (longlong)(int)lVar46 + 1;
  if (6 < lVar52) {
    lVar52 = lVar38;
  }
  lVar53 = (longlong)(int)lVar52 + 1;
  if (6 < lVar53) {
    lVar53 = lVar38;
  }
  lVar50 = (longlong)(int)lVar53 + 1;
  if (6 < lVar50) {
    lVar50 = lVar38;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 4) {
LAB_140619a04:
      uVar43 = 0;
    }
    else {
      uVar44 = param_2 * 7 + param_1;
      uVar45 = uVar44 & 0xf;
      if (uVar45 != 0) {
        if ((uVar44 & 3) != 0) goto LAB_140619a04;
        uVar45 = 0x10 - uVar45 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar45 + 4)) goto LAB_140619a04;
      lVar38 = param_2 * lVar54 + param_1;
      lVar55 = param_2 * lVar50 + param_1;
      lVar39 = param_2 * lVar49 + param_1;
      lVar56 = param_2 * lVar53 + param_1;
      lVar41 = param_2 * lVar46 + param_1;
      lVar40 = param_2 * lVar51 + param_1;
      lVar57 = param_2 * lVar52 + param_1;
      uVar43 = param_5 - (param_5 - uVar45 & 3);
      if (uVar45 != 0) {
        uVar42 = 0;
        do {
          *(float *)(uVar44 + uVar42 * 4) =
               (*(float *)(lVar38 + uVar42 * 4) + *(float *)(lVar55 + uVar42 * 4)) * fVar9 +
               (*(float *)(lVar39 + uVar42 * 4) + *(float *)(lVar56 + uVar42 * 4)) * fVar10 +
               (*(float *)(lVar40 + uVar42 * 4) + *(float *)(lVar57 + uVar42 * 4)) * fVar11 +
               *(float *)(lVar41 + uVar42 * 4) * fVar12;
          uVar42 = uVar42 + 1;
        } while (uVar42 < uVar45);
      }
      if ((lVar41 + uVar45 * 4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(lVar38 + uVar45 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar2 = (float *)(lVar55 + uVar45 * 4);
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar3 = (float *)(lVar56 + uVar45 * 4);
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar4 = (float *)(lVar39 + uVar45 * 4);
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar5 = (float *)(lVar57 + uVar45 * 4);
          fVar25 = pfVar5[1];
          fVar26 = pfVar5[2];
          fVar27 = pfVar5[3];
          pfVar6 = (float *)(lVar40 + uVar45 * 4);
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar30 = pfVar6[3];
          pfVar7 = (float *)(lVar41 + uVar45 * 4);
          fVar31 = pfVar7[1];
          fVar32 = pfVar7[2];
          fVar33 = pfVar7[3];
          pfVar8 = (float *)(uVar44 + uVar45 * 4);
          *pfVar8 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                    (*pfVar6 + *pfVar5) * fVar11 + *pfVar7 * fVar12;
          pfVar8[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                      (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
          pfVar8[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                      (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
          pfVar8[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                      (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
          uVar45 = uVar45 + 4;
        } while (uVar45 < uVar43);
      }
      else {
        do {
          pfVar1 = (float *)(lVar38 + uVar45 * 4);
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar2 = (float *)(lVar55 + uVar45 * 4);
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar3 = (float *)(lVar56 + uVar45 * 4);
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar4 = (float *)(lVar39 + uVar45 * 4);
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar5 = (float *)(lVar57 + uVar45 * 4);
          fVar25 = pfVar5[1];
          fVar26 = pfVar5[2];
          fVar27 = pfVar5[3];
          pfVar6 = (float *)(lVar40 + uVar45 * 4);
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar30 = pfVar6[3];
          pfVar7 = (float *)(lVar41 + uVar45 * 4);
          fVar31 = pfVar7[1];
          fVar32 = pfVar7[2];
          fVar33 = pfVar7[3];
          pfVar8 = (float *)(uVar44 + uVar45 * 4);
          *pfVar8 = (*pfVar1 + *pfVar2) * fVar9 + (*pfVar4 + *pfVar3) * fVar10 +
                    (*pfVar6 + *pfVar5) * fVar11 + *pfVar7 * fVar12;
          pfVar8[1] = (fVar13 + fVar16) * fVar9 + (fVar22 + fVar19) * fVar10 +
                      (fVar28 + fVar25) * fVar11 + fVar31 * fVar12;
          pfVar8[2] = (fVar14 + fVar17) * fVar9 + (fVar23 + fVar20) * fVar10 +
                      (fVar29 + fVar26) * fVar11 + fVar32 * fVar12;
          pfVar8[3] = (fVar15 + fVar18) * fVar9 + (fVar24 + fVar21) * fVar10 +
                      (fVar30 + fVar27) * fVar11 + fVar33 * fVar12;
          uVar45 = uVar45 + 4;
        } while (uVar45 < uVar43);
      }
    }
    if (uVar43 < param_5) {
      do {
        *(float *)(param_2 * 7 + param_1 + uVar43 * 4) =
             (*(float *)(lVar54 * param_2 + param_1 + uVar43 * 4) +
             *(float *)(lVar50 * param_2 + param_1 + uVar43 * 4)) * fVar9 +
             (*(float *)(lVar49 * param_2 + param_1 + uVar43 * 4) +
             *(float *)(lVar53 * param_2 + param_1 + uVar43 * 4)) * fVar10 +
             (*(float *)(lVar51 * param_2 + param_1 + uVar43 * 4) +
             *(float *)(lVar52 * param_2 + param_1 + uVar43 * 4)) * fVar11 +
             *(float *)(lVar46 * param_2 + param_1 + uVar43 * 4) * fVar12;
        uVar43 = uVar43 + 1;
      } while (uVar43 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar45 = param_2 * 7 + param_1;
      uVar44 = uVar45 & 0xf;
      if (uVar44 != 0) {
        if ((uVar45 & 3) != 0) goto LAB_140619a12;
        uVar44 = 0x10 - uVar44 >> 2;
      }
      if ((longlong)(uVar44 + 4) <= (longlong)param_5) {
        uVar42 = 0;
        uVar43 = param_5 - (param_5 - uVar44 & 3);
        uVar34 = _UNK_14308b58c;
        uVar35 = _UNK_14308b588;
        uVar36 = _UNK_14308b584;
        uVar37 = _DAT_14308b580;
        if (uVar44 != 0) {
          do {
            iVar48 = (int)ROUND(*(float *)(uVar45 + uVar42 * 4));
            if (0xfffe < iVar48) {
              iVar48 = 0xffff;
            }
            uVar47 = (undefined2)iVar48;
            if (iVar48 < 1) {
              uVar47 = 0;
            }
            *(undefined2 *)(param_4 + uVar42 * 2) = uVar47;
            uVar42 = uVar42 + 1;
            uVar34 = _UNK_14308b58c;
            uVar35 = _UNK_14308b588;
            uVar36 = _UNK_14308b584;
            uVar37 = _DAT_14308b580;
          } while (uVar42 < uVar44);
        }
        do {
          pfVar1 = (float *)(uVar45 + uVar44 * 4);
          uVar58 = (uint)*pfVar1;
          uVar60 = (uint)pfVar1[1];
          uVar61 = (uint)pfVar1[2];
          uVar62 = (uint)pfVar1[3];
          uVar58 = -(uint)((int)uVar37 < (int)uVar58) & (uVar37 ^ uVar58) ^ uVar58;
          uVar60 = -(uint)((int)uVar36 < (int)uVar60) & (uVar36 ^ uVar60) ^ uVar60;
          uVar61 = -(uint)((int)uVar35 < (int)uVar61) & (uVar35 ^ uVar61) ^ uVar61;
          uVar62 = -(uint)((int)uVar34 < (int)uVar62) & (uVar34 ^ uVar62) ^ uVar62;
          auVar64._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar58) & (ushort)uVar58);
          auVar64._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar60) & (ushort)uVar60);
          auVar64._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar61) & (ushort)uVar61);
          auVar64._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar62) & (ushort)uVar62);
          auVar64 = packssdw(auVar64,(undefined1  [16])0x0);
          *(longlong *)(param_4 + uVar44 * 2) = auVar64._0_8_;
          uVar44 = uVar44 + 4;
        } while (uVar44 < uVar43);
        goto LAB_14061998d;
      }
    }
LAB_140619a12:
    uVar43 = 0;
LAB_14061998d:
    if (param_5 <= uVar43) {
      return;
    }
    do {
      iVar48 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar43 * 4));
      if (0xfffe < iVar48) {
        iVar48 = 0xffff;
      }
      uVar47 = (undefined2)iVar48;
      if (iVar48 < 1) {
        uVar47 = 0;
      }
      *(undefined2 *)(param_4 + uVar43 * 2) = uVar47;
      uVar43 = uVar43 + 1;
    } while (uVar43 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar45 = param_2 * 7 + param_1;
    uVar44 = uVar45 & 0xf;
    if (uVar44 != 0) {
      if ((uVar45 & 3) != 0) goto LAB_140619a0b;
      uVar44 = 0x10 - uVar44 >> 2;
    }
    if ((longlong)(uVar44 + 8) <= (longlong)param_5) {
      uVar42 = 0;
      uVar43 = param_5 - (param_5 - uVar44 & 7);
      uVar34 = _UNK_14308b58c;
      uVar35 = _UNK_14308b588;
      uVar36 = _UNK_14308b584;
      uVar37 = _DAT_14308b580;
      if (uVar44 != 0) {
        do {
          iVar48 = (int)ROUND(*(float *)(uVar45 + uVar42 * 4));
          if (0xfffe < iVar48) {
            iVar48 = 0xffff;
          }
          uVar47 = (undefined2)iVar48;
          if (iVar48 < 1) {
            uVar47 = 0;
          }
          *(undefined2 *)(param_4 + uVar42 * 2) = uVar47;
          uVar42 = uVar42 + 1;
          uVar34 = _UNK_14308b58c;
          uVar35 = _UNK_14308b588;
          uVar36 = _UNK_14308b584;
          uVar37 = _DAT_14308b580;
        } while (uVar42 < uVar44);
      }
      do {
        pfVar1 = (float *)(uVar45 + uVar44 * 4);
        uVar58 = (uint)*pfVar1;
        uVar60 = (uint)pfVar1[1];
        uVar61 = (uint)pfVar1[2];
        uVar62 = (uint)pfVar1[3];
        uVar58 = -(uint)((int)uVar37 < (int)uVar58) & (uVar37 ^ uVar58) ^ uVar58;
        uVar60 = -(uint)((int)uVar36 < (int)uVar60) & (uVar36 ^ uVar60) ^ uVar60;
        uVar61 = -(uint)((int)uVar35 < (int)uVar61) & (uVar35 ^ uVar61) ^ uVar61;
        uVar62 = -(uint)((int)uVar34 < (int)uVar62) & (uVar34 ^ uVar62) ^ uVar62;
        auVar63._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar58) & (ushort)uVar58);
        auVar63._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar60) & (ushort)uVar60);
        auVar63._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar61) & (ushort)uVar61);
        auVar63._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar62) & (ushort)uVar62);
        auVar64 = packssdw(auVar63,(undefined1  [16])0x0);
        *(longlong *)(param_4 + uVar44 * 2) = auVar64._0_8_;
        pfVar1 = (float *)(uVar45 + 0x10 + uVar44 * 4);
        uVar58 = (uint)*pfVar1;
        uVar60 = (uint)pfVar1[1];
        uVar61 = (uint)pfVar1[2];
        uVar62 = (uint)pfVar1[3];
        uVar58 = -(uint)((int)uVar37 < (int)uVar58) & (uVar37 ^ uVar58) ^ uVar58;
        uVar60 = -(uint)((int)uVar36 < (int)uVar60) & (uVar36 ^ uVar60) ^ uVar60;
        uVar61 = -(uint)((int)uVar35 < (int)uVar61) & (uVar35 ^ uVar61) ^ uVar61;
        uVar62 = -(uint)((int)uVar34 < (int)uVar62) & (uVar34 ^ uVar62) ^ uVar62;
        auVar59._0_4_ = (int)(short)(-(ushort)(0 < (int)uVar58) & (ushort)uVar58);
        auVar59._4_4_ = (int)(short)(-(ushort)(0 < (int)uVar60) & (ushort)uVar60);
        auVar59._8_4_ = (int)(short)(-(ushort)(0 < (int)uVar61) & (ushort)uVar61);
        auVar59._12_4_ = (int)(short)(-(ushort)(0 < (int)uVar62) & (ushort)uVar62);
        auVar64 = packssdw(auVar59,(undefined1  [16])0x0);
        *(longlong *)(param_4 + 8 + uVar44 * 2) = auVar64._0_8_;
        uVar44 = uVar44 + 8;
      } while (uVar44 < uVar43);
      goto LAB_14061981b;
    }
  }
LAB_140619a0b:
  uVar43 = 0;
LAB_14061981b:
  uVar44 = 0;
  if (uVar43 + 1 <= param_5) {
    do {
      iVar48 = (int)ROUND(*(float *)(param_1 + param_2 * 7 + uVar43 * 4 + uVar44 * 4));
      if (0xfffe < iVar48) {
        iVar48 = 0xffff;
      }
      uVar47 = (undefined2)iVar48;
      if (iVar48 < 1) {
        uVar47 = 0;
      }
      *(undefined2 *)(param_4 + uVar43 * 2 + uVar44 * 2) = uVar47;
      uVar44 = uVar44 + 1;
    } while (uVar44 < param_5 - uVar43);
  }
  return;
}


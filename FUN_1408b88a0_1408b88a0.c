
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408b88a0(longlong param_1,longlong param_2,longlong param_3,undefined1 (*param_4) [32],
                  longlong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  longlong lVar7;
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  longlong lStack_48;
  longlong lStack_40;
  
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308d000)[param_6])
              (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1408b89b0;
    if ((param_7 & 0xf) == 6) {
      uVar5 = param_7 & 0x10;
      goto joined_r0x0001408b8de4;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1408b89b0;
    }
  }
  else {
    if ((param_3 < param_5[1]) || (param_7 == 0xf0)) goto LAB_1408b89b0;
    if ((param_7 & 0xf) == 6) {
      uVar5 = param_7 & 0x20;
joined_r0x0001408b8de4:
      if (uVar5 == 0) {
        if (*param_5 * 3 < 1) {
          return;
        }
        uVar12 = *param_5 * 3 + 2;
        uVar10 = (longlong)uVar12 / 3;
        if (6 < (longlong)uVar10) {
          lVar7 = (longlong)param_8 + (4 - (longlong)param_4);
          if ((((longlong)(uVar10 * 0xc) <= lVar7) || (7 < -lVar7)) &&
             ((3 < (longlong)param_4 - (longlong)param_8 ||
              ((longlong)(uVar10 * 0xc) <= -((longlong)param_4 - (longlong)param_8))))) {
            uVar2 = *param_8;
            uVar3 = param_8[1];
            uVar4 = param_8[2];
            if ((longlong)uVar10 < 0x10) {
              uVar12 = 0;
            }
            else {
              auVar14._4_4_ = uVar2;
              auVar14._0_4_ = uVar2;
              auVar14._8_4_ = uVar2;
              auVar14._12_4_ = uVar2;
              auVar14._16_4_ = uVar2;
              auVar14._20_4_ = uVar2;
              auVar14._24_4_ = uVar2;
              auVar14._28_4_ = uVar2;
              auVar16._4_4_ = uVar3;
              auVar16._0_4_ = uVar3;
              auVar16._8_4_ = uVar3;
              auVar16._12_4_ = uVar3;
              auVar16._16_4_ = uVar3;
              auVar16._20_4_ = uVar3;
              auVar16._24_4_ = uVar3;
              auVar16._28_4_ = uVar3;
              auVar15._4_4_ = uVar4;
              auVar15._0_4_ = uVar4;
              auVar15._8_4_ = uVar4;
              auVar15._12_4_ = uVar4;
              auVar15._16_4_ = uVar4;
              auVar15._20_4_ = uVar4;
              auVar15._24_4_ = uVar4;
              auVar15._28_4_ = uVar4;
              auVar6 = vpermd_avx2(_DAT_14308d020,auVar14);
              uVar12 = uVar10 & 0xfffffffffffffff0;
              uVar11 = 0;
              auVar16 = vpermd_avx2(_DAT_14308d040,auVar16);
              auVar15 = vpermd_avx2(_DAT_14308d060,auVar15);
              auVar14 = vpblendd_avx2(auVar6,auVar16,0x92);
              auVar16 = vpblendd_avx2(auVar16,auVar15,0x92);
              auVar6 = vpblendd_avx2(auVar15,auVar6,0x92);
              auVar15 = vpblendd_avx2(auVar14,auVar6,0x24);
              auVar14 = vpblendd_avx2(auVar16,auVar14,0x24);
              auVar16 = vpblendd_avx2(auVar6,auVar16,0x24);
              pauVar8 = param_4;
              do {
                uVar11 = uVar11 + 0x10;
                *(undefined4 *)pauVar8[3] = uVar2;
                *(undefined4 *)(pauVar8[3] + 0xc) = uVar2;
                *(undefined4 *)(pauVar8[3] + 0x18) = uVar2;
                *(undefined4 *)(pauVar8[4] + 4) = uVar2;
                *(undefined4 *)(pauVar8[4] + 0x10) = uVar2;
                *(undefined4 *)(pauVar8[4] + 0x1c) = uVar2;
                *(undefined4 *)(pauVar8[5] + 8) = uVar2;
                *(undefined4 *)(pauVar8[5] + 0x14) = uVar2;
                *(undefined4 *)(pauVar8[3] + 4) = uVar3;
                *(undefined4 *)(pauVar8[3] + 0x10) = uVar3;
                *(undefined4 *)(pauVar8[3] + 0x1c) = uVar3;
                *(undefined4 *)(pauVar8[4] + 8) = uVar3;
                *(undefined4 *)(pauVar8[4] + 0x14) = uVar3;
                *(undefined4 *)pauVar8[5] = uVar3;
                *(undefined4 *)(pauVar8[5] + 0xc) = uVar3;
                *(undefined4 *)(pauVar8[5] + 0x18) = uVar3;
                *pauVar8 = auVar15;
                pauVar8[1] = auVar16;
                pauVar8[2] = auVar14;
                *(undefined4 *)(pauVar8[3] + 8) = uVar4;
                *(undefined4 *)(pauVar8[3] + 0x14) = uVar4;
                *(undefined4 *)pauVar8[4] = uVar4;
                *(undefined4 *)(pauVar8[4] + 0xc) = uVar4;
                *(undefined4 *)(pauVar8[4] + 0x18) = uVar4;
                *(undefined4 *)(pauVar8[5] + 4) = uVar4;
                *(undefined4 *)(pauVar8[5] + 0x10) = uVar4;
                *(undefined4 *)(pauVar8[5] + 0x1c) = uVar4;
                pauVar8 = pauVar8 + 6;
              } while (uVar11 < uVar12);
            }
            if (uVar10 < uVar12 + 1) {
              return;
            }
            uVar10 = uVar10 - uVar12;
            if ((longlong)uVar10 < 2) {
              uVar11 = 0;
            }
            else {
              uVar13 = 0;
              uVar11 = uVar10 & 0xfffffffffffffffe;
              lVar7 = 0;
              do {
                uVar13 = uVar13 + 2;
                *(undefined4 *)(*param_4 + lVar7 + 8 + uVar12 * 0xc) = uVar4;
                *(undefined4 *)(*param_4 + lVar7 + 0x14 + uVar12 * 0xc) = uVar4;
                *(undefined4 *)(*param_4 + lVar7 + 4 + uVar12 * 0xc) = uVar3;
                *(undefined4 *)(*param_4 + lVar7 + 0x10 + uVar12 * 0xc) = uVar3;
                *(undefined4 *)(*param_4 + lVar7 + uVar12 * 0xc) = uVar2;
                *(undefined4 *)(*param_4 + lVar7 + 0xc + uVar12 * 0xc) = uVar2;
                lVar7 = lVar7 + 0x18;
              } while (uVar13 < uVar11);
            }
            lVar7 = uVar11 * 0xc;
            for (; uVar11 < uVar10; uVar11 = uVar11 + 1) {
              *(undefined4 *)(*param_4 + lVar7 + uVar12 * 0xc) = uVar2;
              *(undefined4 *)(*param_4 + lVar7 + 4 + uVar12 * 0xc) = uVar3;
              *(undefined4 *)(*param_4 + lVar7 + 8 + uVar12 * 0xc) = uVar4;
              lVar7 = lVar7 + 0xc;
            }
            return;
          }
        }
        lVar7 = 1;
        lVar9 = 0;
        uVar10 = 0;
        if (uVar12 / 6 != 0) {
          do {
            uVar11 = uVar10;
            puVar1 = (undefined4 *)(*param_4 + lVar9);
            *puVar1 = *param_8;
            uVar10 = uVar11 + 1;
            lVar9 = lVar9 + 0x18;
            puVar1[1] = param_8[1];
            puVar1[2] = param_8[2];
            puVar1[3] = *param_8;
            puVar1[4] = param_8[1];
            puVar1[5] = param_8[2];
          } while (uVar10 < uVar12 / 6);
          lVar7 = uVar11 + 2 + uVar10;
        }
        if (uVar12 / 3 <= lVar7 - 1U) {
          return;
        }
        *(undefined4 *)(param_4[-1] + lVar7 * 0xc + 0x14) = *param_8;
        *(undefined4 *)(param_4[-1] + lVar7 * 0xc + 0x18) = param_8[1];
        *(undefined4 *)(param_4[-1] + lVar7 * 0xc + 0x1c) = param_8[2];
        return;
      }
      goto LAB_1408b89b0;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] + -1;
      }
      goto LAB_1408b89b0;
    }
  }
  if ((param_7 & 0xf) == 3) {
    lVar7 = param_5[1];
    if (lVar7 < 2) {
      if (param_3 < 0) {
        if ((param_7 & 0x10) == 0) {
          param_3 = -param_3;
          if ((param_7 & 0x20) == 0) {
            param_3 = 0;
          }
        }
      }
      else if ((0 < param_3) && ((param_7 & 0x20) == 0)) {
        param_3 = -param_3;
        if ((param_7 & 0x10) == 0) {
          param_3 = 0;
        }
      }
    }
    else {
      if (param_3 < 0) goto LAB_1408b8d60;
      while ((lVar7 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (lVar7 + -1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_1408b8d60:
          if ((param_7 & 0x10) != 0) goto LAB_1408b89b0;
        }
      }
    }
  }
LAB_1408b89b0:
  lStack_48 = *param_5;
  lStack_40 = param_5[1];
  FUN_1408bc740(lStack_48,param_2,param_3,param_4,&lStack_48,param_6,param_7,param_8,param_9,
                param_10,param_11);
  return;
}


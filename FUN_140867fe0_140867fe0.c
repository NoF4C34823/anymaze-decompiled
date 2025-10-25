
void FUN_140867fe0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5,int param_6,uint param_7,short *param_8,undefined8 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong lStack_38;
  longlong lStack_30;
  
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308cac0)[param_6])
              (param_1 + param_2 * param_3,param_4,*param_5,param_9,param_10);
    return;
  }
  if (param_3 < 0) {
    if (param_7 == 0xf0) goto LAB_1408680ef;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x10;
      goto joined_r0x000140868482;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x10) == 0) {
        param_3 = 0;
      }
      goto LAB_1408680ef;
    }
  }
  else {
    if ((param_3 < param_5[1]) || (param_7 == 0xf0)) goto LAB_1408680ef;
    if ((param_7 & 0xf) == 6) {
      uVar2 = param_7 & 0x20;
joined_r0x000140868482:
      if (uVar2 == 0) {
        auVar13._0_4_ = (float)(int)*param_8;
        auVar13._4_8_ = SUB128(ZEXT812(0),4);
        auVar13._12_4_ = 0;
        auVar15._0_4_ = (float)(int)param_8[1];
        auVar15._4_8_ = SUB128(ZEXT812(0),4);
        auVar15._12_4_ = 0;
        auVar14._0_4_ = (float)(int)param_8[2];
        auVar14._4_8_ = SUB128(ZEXT812(0),4);
        auVar14._12_4_ = 0;
        if (0 < *param_5 * 3) {
          uVar8 = (*param_5 * 3 + 2) / 3;
          if ((longlong)uVar8 < 0x10) {
            uVar7 = 0;
          }
          else {
            uVar9 = 0;
            auVar3 = vshufps_avx(auVar13,auVar13,0);
            uVar7 = uVar8 & 0xfffffffffffffff0;
            auVar4 = vshufps_avx(auVar15,auVar15,0);
            auVar5 = vshufps_avx(auVar14,auVar14,0);
            puVar6 = param_4;
            do {
              uVar9 = uVar9 + 0x10;
              uVar12 = auVar3._0_4_;
              *puVar6 = uVar12;
              uVar1 = vextractps_avx(auVar3,1);
              puVar6[3] = uVar1;
              uVar1 = vextractps_avx(auVar3,2);
              puVar6[6] = uVar1;
              uVar1 = vextractps_avx(auVar3,3);
              puVar6[9] = uVar1;
              puVar6[0xc] = uVar12;
              uVar1 = vextractps_avx(auVar3,1);
              puVar6[0xf] = uVar1;
              uVar1 = vextractps_avx(auVar3,2);
              puVar6[0x12] = uVar1;
              uVar1 = vextractps_avx(auVar3,3);
              puVar6[0x15] = uVar1;
              puVar6[0x18] = uVar12;
              uVar1 = vextractps_avx(auVar3,1);
              puVar6[0x1b] = uVar1;
              uVar1 = vextractps_avx(auVar3,2);
              puVar6[0x1e] = uVar1;
              uVar1 = vextractps_avx(auVar3,3);
              puVar6[0x21] = uVar1;
              puVar6[0x24] = uVar12;
              uVar1 = vextractps_avx(auVar3,1);
              puVar6[0x27] = uVar1;
              uVar1 = vextractps_avx(auVar3,2);
              puVar6[0x2a] = uVar1;
              uVar1 = vextractps_avx(auVar3,3);
              puVar6[0x2d] = uVar1;
              uVar12 = auVar4._0_4_;
              puVar6[1] = uVar12;
              uVar1 = vextractps_avx(auVar4,1);
              puVar6[4] = uVar1;
              uVar1 = vextractps_avx(auVar4,2);
              puVar6[7] = uVar1;
              uVar1 = vextractps_avx(auVar4,3);
              puVar6[10] = uVar1;
              puVar6[0xd] = uVar12;
              uVar1 = vextractps_avx(auVar4,1);
              puVar6[0x10] = uVar1;
              uVar1 = vextractps_avx(auVar4,2);
              puVar6[0x13] = uVar1;
              uVar1 = vextractps_avx(auVar4,3);
              puVar6[0x16] = uVar1;
              puVar6[0x19] = uVar12;
              uVar1 = vextractps_avx(auVar4,1);
              puVar6[0x1c] = uVar1;
              uVar1 = vextractps_avx(auVar4,2);
              puVar6[0x1f] = uVar1;
              uVar1 = vextractps_avx(auVar4,3);
              puVar6[0x22] = uVar1;
              puVar6[0x25] = uVar12;
              uVar1 = vextractps_avx(auVar4,1);
              puVar6[0x28] = uVar1;
              uVar1 = vextractps_avx(auVar4,2);
              puVar6[0x2b] = uVar1;
              uVar1 = vextractps_avx(auVar4,3);
              puVar6[0x2e] = uVar1;
              uVar12 = auVar5._0_4_;
              puVar6[2] = uVar12;
              uVar1 = vextractps_avx(auVar5,1);
              puVar6[5] = uVar1;
              uVar1 = vextractps_avx(auVar5,2);
              puVar6[8] = uVar1;
              uVar1 = vextractps_avx(auVar5,3);
              puVar6[0xb] = uVar1;
              puVar6[0xe] = uVar12;
              uVar1 = vextractps_avx(auVar5,1);
              puVar6[0x11] = uVar1;
              uVar1 = vextractps_avx(auVar5,2);
              puVar6[0x14] = uVar1;
              uVar1 = vextractps_avx(auVar5,3);
              puVar6[0x17] = uVar1;
              puVar6[0x1a] = uVar12;
              uVar1 = vextractps_avx(auVar5,1);
              puVar6[0x1d] = uVar1;
              uVar1 = vextractps_avx(auVar5,2);
              puVar6[0x20] = uVar1;
              uVar1 = vextractps_avx(auVar5,3);
              puVar6[0x23] = uVar1;
              puVar6[0x26] = uVar12;
              uVar1 = vextractps_avx(auVar5,1);
              puVar6[0x29] = uVar1;
              uVar1 = vextractps_avx(auVar5,2);
              puVar6[0x2c] = uVar1;
              uVar1 = vextractps_avx(auVar5,3);
              puVar6[0x2f] = uVar1;
              puVar6 = puVar6 + 0x30;
            } while (uVar9 < uVar7);
          }
          if (uVar7 + 1 <= uVar8) {
            uVar8 = uVar8 - uVar7;
            if ((longlong)uVar8 < 2) {
              uVar9 = 0;
            }
            else {
              uVar11 = 0;
              uVar9 = uVar8 & 0xfffffffffffffffe;
              lVar10 = 0;
              do {
                uVar11 = uVar11 + 2;
                *(float *)((longlong)param_4 + lVar10 + 8 + uVar7 * 0xc) = auVar14._0_4_;
                *(float *)((longlong)param_4 + lVar10 + 0x14 + uVar7 * 0xc) = auVar14._0_4_;
                *(float *)((longlong)param_4 + lVar10 + 4 + uVar7 * 0xc) = auVar15._0_4_;
                *(float *)((longlong)param_4 + lVar10 + 0x10 + uVar7 * 0xc) = auVar15._0_4_;
                *(float *)((longlong)param_4 + lVar10 + uVar7 * 0xc) = auVar13._0_4_;
                *(float *)((longlong)param_4 + lVar10 + 0xc + uVar7 * 0xc) = auVar13._0_4_;
                lVar10 = lVar10 + 0x18;
              } while (uVar11 < uVar9);
            }
            lVar10 = uVar9 * 0xc;
            for (; uVar9 < uVar8; uVar9 = uVar9 + 1) {
              *(float *)((longlong)param_4 + lVar10 + uVar7 * 0xc) = auVar13._0_4_;
              *(float *)((longlong)param_4 + lVar10 + 4 + uVar7 * 0xc) = auVar15._0_4_;
              *(float *)((longlong)param_4 + lVar10 + 8 + uVar7 * 0xc) = auVar14._0_4_;
              lVar10 = lVar10 + 0xc;
            }
          }
        }
        return;
      }
      goto LAB_1408680ef;
    }
    if ((param_7 & 0xf) == 1) {
      if ((param_7 & 0x20) == 0) {
        param_3 = param_5[1] + -1;
      }
      goto LAB_1408680ef;
    }
  }
  if ((param_7 & 0xf) == 3) {
    lVar10 = param_5[1];
    if (lVar10 < 2) {
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
      if (param_3 < 0) goto LAB_140868400;
      while ((lVar10 <= param_3 && ((param_7 & 0x20) == 0))) {
        for (param_3 = (lVar10 + -1) * 2 - param_3; param_3 < 0; param_3 = -param_3) {
LAB_140868400:
          if ((param_7 & 0x10) != 0) goto LAB_1408680ef;
        }
      }
    }
  }
LAB_1408680ef:
  lStack_38 = *param_5;
  lStack_30 = param_5[1];
  FUN_140876ce0(lStack_38,param_2,param_3,param_4,&lStack_38,param_6,param_7,param_8,param_9,
                param_10,param_11);
  return;
}


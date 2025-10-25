
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14053c020(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [32];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  param_4 = param_4 & 7;
  lVar6 = param_4 - 2;
  auStack_140 = (undefined1  [32])0x0;
  uStack_120 = _DAT_14308a9e0;
  uStack_118 = _UNK_14308a9e8;
  uStack_110 = _UNK_14308a9f0;
  uStack_108 = _UNK_14308a9f8;
  auStack_100 = _DAT_14308aa00;
  uStack_e0 = _DAT_14308aa20;
  uStack_d8 = _UNK_14308aa28;
  uStack_d0 = _UNK_14308aa30;
  uStack_c8 = _UNK_14308aa38;
  uStack_c0 = _DAT_14308aa40;
  uStack_b8 = _UNK_14308aa48;
  uStack_b0 = _UNK_14308aa50;
  uStack_a8 = _UNK_14308aa58;
  uStack_a0 = _DAT_14308aa60;
  uStack_98 = _UNK_14308aa68;
  uStack_90 = _UNK_14308aa70;
  uStack_88 = _UNK_14308aa78;
  uStack_80 = _DAT_14308aa80;
  uStack_78 = _UNK_14308aa88;
  uStack_70 = _UNK_14308aa90;
  uStack_68 = _UNK_14308aa98;
  uStack_60 = _DAT_14308aaa0;
  uStack_58 = _UNK_14308aaa8;
  uStack_50 = _UNK_14308aab0;
  uStack_48 = _UNK_14308aab8;
  lVar5 = 0;
  if (lVar6 != 0 && SCARRY8(param_4,-2) == lVar6 < 0) {
    lVar5 = lVar6;
  }
  auStack_40 = vpcmpeqd_avx2(_DAT_14308aa00,_DAT_14308aa00);
  uVar7 = 8;
  if (param_4 + 6 < 8) {
    uVar7 = param_4 + 6;
  }
  auVar1 = *(undefined1 (*) [32])(auStack_140 + uVar7 * 0x20);
  auVar2 = vmaskmovps_avx(auVar1,*param_1);
  auVar3 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(*param_1 + param_2 * 4));
  auVar4 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(*param_1 + param_2 * 8));
  auVar1 = *(undefined1 (*) [32])(auStack_140 + lVar5 * 0x20);
  auVar2 = vmaxps_avx(auVar2,auVar3);
  auVar2 = vmaxps_avx(auVar2,auVar4);
  auVar3 = vmaskmovps_avx(auVar1,param_1[1]);
  auVar4 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1[1] + param_2 * 4));
  auVar3 = vmaxps_avx(auVar3,auVar4);
  auVar1 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1[1] + param_2 * 8));
  auVar1 = vmaxps_avx(auVar3,auVar1);
  auVar3 = vperm2f128_avx(auVar2,auVar1,0x21);
  auVar4 = vpalignr_avx2(auVar3,auVar2,0xc);
  auVar3 = vpalignr_avx2(auVar1,auVar3,8);
  auVar1 = vmaxps_avx(auVar2,auVar4);
  auVar1 = vmaxps_avx(auVar1,auVar3);
  auVar8 = auVar1._0_16_;
  if (3 < param_4) {
    *param_3 = auVar8;
    auVar8 = auVar1._16_16_;
    param_3 = param_3 + 1;
    param_4 = param_4 - 4;
    if (param_4 == 0) {
      return;
    }
  }
  if (1 < (longlong)param_4) {
    *(longlong *)*param_3 = auVar8._0_8_;
    param_3 = (undefined1 (*) [16])(*param_3 + 8);
    auVar8 = vpsrldq_avx(auVar8,8);
    param_4 = param_4 - 2;
    if (param_4 == 0) {
      return;
    }
  }
  if (0 < (longlong)param_4) {
    *(int *)*param_3 = auVar8._0_4_;
  }
  return;
}


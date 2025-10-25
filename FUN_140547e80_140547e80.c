
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140547e80(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
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
  uStack_120 = _DAT_14308ada0;
  uStack_118 = _UNK_14308ada8;
  uStack_110 = _UNK_14308adb0;
  uStack_108 = _UNK_14308adb8;
  auStack_100 = _DAT_14308adc0;
  uStack_e0 = _DAT_14308ade0;
  uStack_d8 = _UNK_14308ade8;
  uStack_d0 = _UNK_14308adf0;
  uStack_c8 = _UNK_14308adf8;
  uStack_c0 = _DAT_14308ae00;
  uStack_b8 = _UNK_14308ae08;
  uStack_b0 = _UNK_14308ae10;
  uStack_a8 = _UNK_14308ae18;
  uStack_a0 = _DAT_14308ae20;
  uStack_98 = _UNK_14308ae28;
  uStack_90 = _UNK_14308ae30;
  uStack_88 = _UNK_14308ae38;
  uStack_80 = _DAT_14308ae40;
  uStack_78 = _UNK_14308ae48;
  uStack_70 = _UNK_14308ae50;
  uStack_68 = _UNK_14308ae58;
  uStack_60 = _DAT_14308ae60;
  uStack_58 = _UNK_14308ae68;
  uStack_50 = _UNK_14308ae70;
  uStack_48 = _UNK_14308ae78;
  lVar5 = 0;
  if (lVar6 != 0 && SCARRY8(param_4,-2) == lVar6 < 0) {
    lVar5 = lVar6;
  }
  auStack_40 = vpcmpeqd_avx2(_DAT_14308adc0,_DAT_14308adc0);
  uVar7 = 8;
  if (param_4 + 6 < 8) {
    uVar7 = param_4 + 6;
  }
  auVar1 = *(undefined1 (*) [32])(auStack_140 + uVar7 * 0x20);
  auVar2 = vmaskmovps_avx(auVar1,*param_1);
  auVar3 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(*param_1 + param_2 * 4));
  auVar4 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(*param_1 + param_2 * 8));
  auVar1 = *(undefined1 (*) [32])(auStack_140 + lVar5 * 0x20);
  auVar2 = vminps_avx(auVar2,auVar3);
  auVar2 = vminps_avx(auVar2,auVar4);
  auVar3 = vmaskmovps_avx(auVar1,param_1[1]);
  auVar4 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1[1] + param_2 * 4));
  auVar3 = vminps_avx(auVar3,auVar4);
  auVar1 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1[1] + param_2 * 8));
  auVar1 = vminps_avx(auVar3,auVar1);
  auVar3 = vperm2f128_avx(auVar2,auVar1,0x21);
  auVar4 = vpalignr_avx2(auVar3,auVar2,0xc);
  auVar3 = vpalignr_avx2(auVar1,auVar3,8);
  auVar1 = vminps_avx(auVar2,auVar4);
  auVar1 = vminps_avx(auVar1,auVar3);
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


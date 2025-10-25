
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404c7300(undefined1 (*param_1) [32],longlong param_2,undefined1 (*param_3) [16],
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
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_4 = param_4 & 7;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  lVar6 = param_4 - 6;
  uStack_120 = _DAT_14308a020;
  uStack_118 = _UNK_14308a028;
  uStack_110 = _UNK_14308a030;
  uStack_108 = _UNK_14308a038;
  uStack_100 = _DAT_14308a040;
  uStack_f8 = _UNK_14308a048;
  uStack_f0 = _UNK_14308a050;
  uStack_e8 = _UNK_14308a058;
  uStack_e0 = _DAT_14308a060;
  uStack_d8 = _UNK_14308a068;
  uStack_d0 = _UNK_14308a070;
  uStack_c8 = _UNK_14308a078;
  uStack_c0 = _DAT_14308a080;
  uStack_b8 = _UNK_14308a088;
  uStack_b0 = _UNK_14308a090;
  uStack_a8 = _UNK_14308a098;
  uStack_a0 = _DAT_14308a0a0;
  uStack_98 = _UNK_14308a0a8;
  uStack_90 = _UNK_14308a0b0;
  uStack_88 = _UNK_14308a0b8;
  uStack_80 = _DAT_14308a0c0;
  uStack_78 = _UNK_14308a0c8;
  uStack_70 = _UNK_14308a0d0;
  uStack_68 = _UNK_14308a0d8;
  uStack_60 = _DAT_14308a0e0;
  uStack_58 = _UNK_14308a0e8;
  uStack_50 = _UNK_14308a0f0;
  uStack_48 = _UNK_14308a0f8;
  uStack_40 = _DAT_14308a100;
  uStack_38 = _UNK_14308a108;
  uStack_30 = _UNK_14308a110;
  uStack_28 = _UNK_14308a118;
  lVar5 = 0;
  if (lVar6 != 0 && SCARRY8(param_4,-6) == lVar6 < 0) {
    lVar5 = lVar6;
  }
  uVar7 = 8;
  if (param_4 + 2 < 8) {
    uVar7 = param_4 + 2;
  }
  auVar1 = *(undefined1 (*) [32])(&uStack_140 + uVar7 * 4);
  auVar2 = vmaskmovps_avx(auVar1,*param_1);
  auVar3 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(*param_1 + param_2 * 4));
  auVar4 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(*param_1 + param_2 * 8));
  auVar1 = *(undefined1 (*) [32])(&uStack_140 + lVar5 * 4);
  auVar2 = vmaxps_avx(auVar2,auVar3);
  auVar2 = vmaxps_avx(auVar2,auVar4);
  auVar3 = vmaskmovps_avx(auVar1,param_1[1]);
  auVar4 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1[1] + param_2 * 4));
  auVar3 = vmaxps_avx(auVar3,auVar4);
  auVar1 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1[1] + param_2 * 8));
  auVar1 = vmaxps_avx(auVar3,auVar1);
  auVar3 = vperm2f128_avx(auVar2,auVar1,0x21);
  auVar1 = vblendps_avx(auVar2,auVar3,0x11);
  auVar4 = vpermilps_avx(auVar1,0x39);
  auVar1 = vblendps_avx(auVar2,auVar3,0x33);
  auVar2 = vmaxps_avx(auVar2,auVar4);
  auVar1 = vpermilps_avx(auVar1,0x4e);
  auVar1 = vmaxps_avx(auVar2,auVar1);
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


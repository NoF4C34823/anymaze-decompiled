
undefined8
FUN_14000b260(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 auVar32 [64];
  undefined1 uVar33;
  longlong lVar34;
  ulonglong uVar35;
  uint uVar36;
  int iVar37;
  longlong lVar38;
  ulonglong uVar39;
  uint uVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  int iVar46;
  longlong lVar47;
  longlong lVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xfffffff8;
  }
  if (((int)(uint)param_5 < 1) || (param_5._4_4_ < 1)) {
    return 0xfffffffa;
  }
  uVar36 = (uint)param_5 & 0xfffffffc;
  lVar38 = (longlong)(int)uVar36;
  lVar34 = -param_2 + param_1;
  lVar48 = -param_4 + param_3;
  iVar46 = 0;
  lVar47 = 0;
  do {
    lVar48 = lVar48 + param_4;
    lVar34 = lVar34 + param_2;
    iVar46 = iVar46 + 1;
    FUN_14000f780(lVar34,lVar48,uVar36);
    if ((int)uVar36 < (int)(uint)param_5) {
      lVar42 = lVar47 * param_4 + param_3 + lVar38 * 3;
      uVar44 = param_2 * lVar47 + param_1 + lVar38;
      if (((longlong)(lVar42 - uVar44) < (int)(uint)param_5 - lVar38) &&
         ((longlong)-(lVar42 - uVar44) < ((int)(uint)param_5 - lVar38) * 3)) {
        iVar37 = 1;
        lVar43 = 0;
        uVar40 = (uint)param_5 - uVar36 >> 1;
        uVar35 = 0;
        if (uVar40 != 0) {
          do {
            uVar45 = uVar35;
            uVar33 = *(undefined1 *)(uVar44 + uVar45 * 2);
            *(undefined1 *)(lVar43 + 2 + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + 1 + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + lVar42) = uVar33;
            uVar33 = *(undefined1 *)(uVar44 + 1 + uVar45 * 2);
            uVar35 = uVar45 + 1;
            *(undefined1 *)(lVar43 + 5 + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + 4 + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + 3 + lVar42) = uVar33;
            lVar43 = lVar43 + 6;
          } while (uVar35 < uVar40);
          iVar37 = (int)uVar45 + 2 + (int)uVar35;
        }
        if (iVar37 - 1U < (uint)param_5 - uVar36) {
          uVar33 = *(undefined1 *)((longlong)iVar37 + -1 + uVar44);
          lVar43 = (longlong)iVar37 * 3;
          *(undefined1 *)(lVar43 + -1 + lVar42) = uVar33;
          *(undefined1 *)(lVar43 + -2 + lVar42) = uVar33;
          *(undefined1 *)(lVar43 + -3 + lVar42) = uVar33;
        }
      }
      else {
        uVar40 = ((uint)param_5 - (uVar36 + 1)) + 1;
        uVar35 = (ulonglong)(int)uVar40;
        if ((longlong)uVar35 < 0x40) {
LAB_14000bc0f:
          uVar40 = 0;
        }
        else {
          if ((longlong)uVar35 < 0x2580) {
            uVar40 = uVar40 & 0xffffffc0;
            uVar45 = 0;
          }
          else {
            uVar45 = uVar44 & 0x3f;
            if ((int)uVar45 != 0) {
              uVar45 = (ulonglong)(0x40 - (int)uVar45);
            }
            iVar37 = (int)uVar45;
            if ((longlong)uVar35 < (longlong)(ulonglong)(iVar37 + 0x40)) goto LAB_14000bc0f;
            uVar40 = uVar40 - (uVar40 - iVar37 & 0x3f);
            uVar39 = 0;
            lVar43 = 0;
            if (iVar37 != 0) {
              do {
                uVar33 = *(undefined1 *)(uVar39 + uVar44);
                uVar39 = uVar39 + 1;
                *(undefined1 *)(lVar43 + 2 + lVar42) = uVar33;
                *(undefined1 *)(lVar43 + 1 + lVar42) = uVar33;
                *(undefined1 *)(lVar43 + lVar42) = uVar33;
                lVar43 = lVar43 + 3;
              } while (uVar39 < uVar45);
            }
          }
          lVar43 = uVar45 * 3;
          do {
            auVar32 = *(undefined1 (*) [64])(uVar45 + uVar44);
            uVar45 = uVar45 + 0x40;
            auVar49 = vextracti32x4_avx512f(auVar32,1);
            auVar50 = vextracti32x4_avx512f(auVar32,2);
            auVar51 = vextracti32x4_avx512f(auVar32,3);
            uVar33 = auVar32[0];
            *(undefined1 *)(lVar43 + 2 + lVar42) = uVar33;
            uVar1 = auVar32[1];
            *(undefined1 *)(lVar43 + 5 + lVar42) = uVar1;
            uVar2 = auVar32[2];
            *(undefined1 *)(lVar43 + 8 + lVar42) = uVar2;
            uVar3 = auVar32[3];
            *(undefined1 *)(lVar43 + 0xb + lVar42) = uVar3;
            uVar4 = auVar32[4];
            *(undefined1 *)(lVar43 + 0xe + lVar42) = uVar4;
            uVar5 = auVar32[5];
            *(undefined1 *)(lVar43 + 0x11 + lVar42) = uVar5;
            uVar6 = auVar32[6];
            *(undefined1 *)(lVar43 + 0x14 + lVar42) = uVar6;
            uVar7 = auVar32[7];
            *(undefined1 *)(lVar43 + 0x17 + lVar42) = uVar7;
            *(undefined1 *)(lVar43 + 0x1a + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + 0x1d + lVar42) = uVar1;
            *(undefined1 *)(lVar43 + 0x20 + lVar42) = uVar2;
            *(undefined1 *)(lVar43 + 0x23 + lVar42) = uVar3;
            *(undefined1 *)(lVar43 + 0x26 + lVar42) = uVar4;
            *(undefined1 *)(lVar43 + 0x29 + lVar42) = uVar5;
            *(undefined1 *)(lVar43 + 0x2c + lVar42) = uVar6;
            *(undefined1 *)(lVar43 + 0x2f + lVar42) = uVar7;
            uVar8 = auVar49[0];
            *(undefined1 *)(lVar43 + 0x32 + lVar42) = uVar8;
            uVar9 = auVar49[1];
            *(undefined1 *)(lVar43 + 0x35 + lVar42) = uVar9;
            uVar10 = auVar49[2];
            *(undefined1 *)(lVar43 + 0x38 + lVar42) = uVar10;
            uVar11 = auVar49[3];
            *(undefined1 *)(lVar43 + 0x3b + lVar42) = uVar11;
            uVar12 = auVar49[4];
            *(undefined1 *)(lVar43 + 0x3e + lVar42) = uVar12;
            uVar13 = auVar49[5];
            *(undefined1 *)(lVar43 + 0x41 + lVar42) = uVar13;
            uVar14 = auVar49[6];
            *(undefined1 *)(lVar43 + 0x44 + lVar42) = uVar14;
            uVar15 = auVar49[7];
            *(undefined1 *)(lVar43 + 0x47 + lVar42) = uVar15;
            *(undefined1 *)(lVar43 + 0x4a + lVar42) = uVar8;
            *(undefined1 *)(lVar43 + 0x4d + lVar42) = uVar9;
            *(undefined1 *)(lVar43 + 0x50 + lVar42) = uVar10;
            *(undefined1 *)(lVar43 + 0x53 + lVar42) = uVar11;
            *(undefined1 *)(lVar43 + 0x56 + lVar42) = uVar12;
            *(undefined1 *)(lVar43 + 0x59 + lVar42) = uVar13;
            *(undefined1 *)(lVar43 + 0x5c + lVar42) = uVar14;
            *(undefined1 *)(lVar43 + 0x5f + lVar42) = uVar15;
            uVar16 = auVar50[0];
            *(undefined1 *)(lVar43 + 0x62 + lVar42) = uVar16;
            uVar17 = auVar50[1];
            *(undefined1 *)(lVar43 + 0x65 + lVar42) = uVar17;
            uVar18 = auVar50[2];
            *(undefined1 *)(lVar43 + 0x68 + lVar42) = uVar18;
            uVar19 = auVar50[3];
            *(undefined1 *)(lVar43 + 0x6b + lVar42) = uVar19;
            uVar20 = auVar50[4];
            *(undefined1 *)(lVar43 + 0x6e + lVar42) = uVar20;
            uVar21 = auVar50[5];
            *(undefined1 *)(lVar43 + 0x71 + lVar42) = uVar21;
            uVar22 = auVar50[6];
            *(undefined1 *)(lVar43 + 0x74 + lVar42) = uVar22;
            uVar23 = auVar50[7];
            *(undefined1 *)(lVar43 + 0x77 + lVar42) = uVar23;
            *(undefined1 *)(lVar43 + 0x7a + lVar42) = uVar16;
            *(undefined1 *)(lVar43 + 0x7d + lVar42) = uVar17;
            *(undefined1 *)(lVar43 + 0x80 + lVar42) = uVar18;
            *(undefined1 *)(lVar43 + 0x83 + lVar42) = uVar19;
            *(undefined1 *)(lVar43 + 0x86 + lVar42) = uVar20;
            *(undefined1 *)(lVar43 + 0x89 + lVar42) = uVar21;
            *(undefined1 *)(lVar43 + 0x8c + lVar42) = uVar22;
            *(undefined1 *)(lVar43 + 0x8f + lVar42) = uVar23;
            uVar24 = auVar51[0];
            *(undefined1 *)(lVar43 + 0x92 + lVar42) = uVar24;
            uVar25 = auVar51[1];
            *(undefined1 *)(lVar43 + 0x95 + lVar42) = uVar25;
            uVar26 = auVar51[2];
            *(undefined1 *)(lVar43 + 0x98 + lVar42) = uVar26;
            uVar27 = auVar51[3];
            *(undefined1 *)(lVar43 + 0x9b + lVar42) = uVar27;
            uVar28 = auVar51[4];
            *(undefined1 *)(lVar43 + 0x9e + lVar42) = uVar28;
            uVar29 = auVar51[5];
            *(undefined1 *)(lVar43 + 0xa1 + lVar42) = uVar29;
            uVar30 = auVar51[6];
            *(undefined1 *)(lVar43 + 0xa4 + lVar42) = uVar30;
            uVar31 = auVar51[7];
            *(undefined1 *)(lVar43 + 0xa7 + lVar42) = uVar31;
            *(undefined1 *)(lVar43 + 0xaa + lVar42) = uVar24;
            *(undefined1 *)(lVar43 + 0xad + lVar42) = uVar25;
            *(undefined1 *)(lVar43 + 0xb0 + lVar42) = uVar26;
            *(undefined1 *)(lVar43 + 0xb3 + lVar42) = uVar27;
            *(undefined1 *)(lVar43 + 0xb6 + lVar42) = uVar28;
            *(undefined1 *)(lVar43 + 0xb9 + lVar42) = uVar29;
            *(undefined1 *)(lVar43 + 0xbc + lVar42) = uVar30;
            *(undefined1 *)(lVar43 + 0xbf + lVar42) = uVar31;
            *(undefined1 *)(lVar43 + 1 + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + 4 + lVar42) = uVar1;
            *(undefined1 *)(lVar43 + 7 + lVar42) = uVar2;
            *(undefined1 *)(lVar43 + 10 + lVar42) = uVar3;
            *(undefined1 *)(lVar43 + 0xd + lVar42) = uVar4;
            *(undefined1 *)(lVar43 + 0x10 + lVar42) = uVar5;
            *(undefined1 *)(lVar43 + 0x13 + lVar42) = uVar6;
            *(undefined1 *)(lVar43 + 0x16 + lVar42) = uVar7;
            *(undefined1 *)(lVar43 + 0x19 + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + 0x1c + lVar42) = uVar1;
            *(undefined1 *)(lVar43 + 0x1f + lVar42) = uVar2;
            *(undefined1 *)(lVar43 + 0x22 + lVar42) = uVar3;
            *(undefined1 *)(lVar43 + 0x25 + lVar42) = uVar4;
            *(undefined1 *)(lVar43 + 0x28 + lVar42) = uVar5;
            *(undefined1 *)(lVar43 + 0x2b + lVar42) = uVar6;
            *(undefined1 *)(lVar43 + 0x2e + lVar42) = uVar7;
            *(undefined1 *)(lVar43 + 0x31 + lVar42) = uVar8;
            *(undefined1 *)(lVar43 + 0x34 + lVar42) = uVar9;
            *(undefined1 *)(lVar43 + 0x37 + lVar42) = uVar10;
            *(undefined1 *)(lVar43 + 0x3a + lVar42) = uVar11;
            *(undefined1 *)(lVar43 + 0x3d + lVar42) = uVar12;
            *(undefined1 *)(lVar43 + 0x40 + lVar42) = uVar13;
            *(undefined1 *)(lVar43 + 0x43 + lVar42) = uVar14;
            *(undefined1 *)(lVar43 + 0x46 + lVar42) = uVar15;
            *(undefined1 *)(lVar43 + 0x49 + lVar42) = uVar8;
            *(undefined1 *)(lVar43 + 0x4c + lVar42) = uVar9;
            *(undefined1 *)(lVar43 + 0x4f + lVar42) = uVar10;
            *(undefined1 *)(lVar43 + 0x52 + lVar42) = uVar11;
            *(undefined1 *)(lVar43 + 0x55 + lVar42) = uVar12;
            *(undefined1 *)(lVar43 + 0x58 + lVar42) = uVar13;
            *(undefined1 *)(lVar43 + 0x5b + lVar42) = uVar14;
            *(undefined1 *)(lVar43 + 0x5e + lVar42) = uVar15;
            *(undefined1 *)(lVar43 + 0x61 + lVar42) = uVar16;
            *(undefined1 *)(lVar43 + 100 + lVar42) = uVar17;
            *(undefined1 *)(lVar43 + 0x67 + lVar42) = uVar18;
            *(undefined1 *)(lVar43 + 0x6a + lVar42) = uVar19;
            *(undefined1 *)(lVar43 + 0x6d + lVar42) = uVar20;
            *(undefined1 *)(lVar43 + 0x70 + lVar42) = uVar21;
            *(undefined1 *)(lVar43 + 0x73 + lVar42) = uVar22;
            *(undefined1 *)(lVar43 + 0x76 + lVar42) = uVar23;
            *(undefined1 *)(lVar43 + 0x79 + lVar42) = uVar16;
            *(undefined1 *)(lVar43 + 0x7c + lVar42) = uVar17;
            *(undefined1 *)(lVar43 + 0x7f + lVar42) = uVar18;
            *(undefined1 *)(lVar43 + 0x82 + lVar42) = uVar19;
            *(undefined1 *)(lVar43 + 0x85 + lVar42) = uVar20;
            *(undefined1 *)(lVar43 + 0x88 + lVar42) = uVar21;
            *(undefined1 *)(lVar43 + 0x8b + lVar42) = uVar22;
            *(undefined1 *)(lVar43 + 0x8e + lVar42) = uVar23;
            *(undefined1 *)(lVar43 + 0x91 + lVar42) = uVar24;
            *(undefined1 *)(lVar43 + 0x94 + lVar42) = uVar25;
            *(undefined1 *)(lVar43 + 0x97 + lVar42) = uVar26;
            *(undefined1 *)(lVar43 + 0x9a + lVar42) = uVar27;
            *(undefined1 *)(lVar43 + 0x9d + lVar42) = uVar28;
            *(undefined1 *)(lVar43 + 0xa0 + lVar42) = uVar29;
            *(undefined1 *)(lVar43 + 0xa3 + lVar42) = uVar30;
            *(undefined1 *)(lVar43 + 0xa6 + lVar42) = uVar31;
            *(undefined1 *)(lVar43 + 0xa9 + lVar42) = uVar24;
            *(undefined1 *)(lVar43 + 0xac + lVar42) = uVar25;
            *(undefined1 *)(lVar43 + 0xaf + lVar42) = uVar26;
            *(undefined1 *)(lVar43 + 0xb2 + lVar42) = uVar27;
            *(undefined1 *)(lVar43 + 0xb5 + lVar42) = uVar28;
            *(undefined1 *)(lVar43 + 0xb8 + lVar42) = uVar29;
            *(undefined1 *)(lVar43 + 0xbb + lVar42) = uVar30;
            *(undefined1 *)(lVar43 + 0xbe + lVar42) = uVar31;
            *(undefined1 *)(lVar43 + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + 3 + lVar42) = uVar1;
            *(undefined1 *)(lVar43 + 6 + lVar42) = uVar2;
            *(undefined1 *)(lVar43 + 9 + lVar42) = uVar3;
            *(undefined1 *)(lVar43 + 0xc + lVar42) = uVar4;
            *(undefined1 *)(lVar43 + 0xf + lVar42) = uVar5;
            *(undefined1 *)(lVar43 + 0x12 + lVar42) = uVar6;
            *(undefined1 *)(lVar43 + 0x15 + lVar42) = uVar7;
            *(undefined1 *)(lVar43 + 0x18 + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + 0x1b + lVar42) = uVar1;
            *(undefined1 *)(lVar43 + 0x1e + lVar42) = uVar2;
            *(undefined1 *)(lVar43 + 0x21 + lVar42) = uVar3;
            *(undefined1 *)(lVar43 + 0x24 + lVar42) = uVar4;
            *(undefined1 *)(lVar43 + 0x27 + lVar42) = uVar5;
            *(undefined1 *)(lVar43 + 0x2a + lVar42) = uVar6;
            *(undefined1 *)(lVar43 + 0x2d + lVar42) = uVar7;
            *(undefined1 *)(lVar43 + 0x30 + lVar42) = uVar8;
            *(undefined1 *)(lVar43 + 0x33 + lVar42) = uVar9;
            *(undefined1 *)(lVar43 + 0x36 + lVar42) = uVar10;
            *(undefined1 *)(lVar43 + 0x39 + lVar42) = uVar11;
            *(undefined1 *)(lVar43 + 0x3c + lVar42) = uVar12;
            *(undefined1 *)(lVar43 + 0x3f + lVar42) = uVar13;
            *(undefined1 *)(lVar43 + 0x42 + lVar42) = uVar14;
            *(undefined1 *)(lVar43 + 0x45 + lVar42) = uVar15;
            *(undefined1 *)(lVar43 + 0x48 + lVar42) = uVar8;
            *(undefined1 *)(lVar43 + 0x4b + lVar42) = uVar9;
            *(undefined1 *)(lVar43 + 0x4e + lVar42) = uVar10;
            *(undefined1 *)(lVar43 + 0x51 + lVar42) = uVar11;
            *(undefined1 *)(lVar43 + 0x54 + lVar42) = uVar12;
            *(undefined1 *)(lVar43 + 0x57 + lVar42) = uVar13;
            *(undefined1 *)(lVar43 + 0x5a + lVar42) = uVar14;
            *(undefined1 *)(lVar43 + 0x5d + lVar42) = uVar15;
            *(undefined1 *)(lVar43 + 0x60 + lVar42) = uVar16;
            *(undefined1 *)(lVar43 + 99 + lVar42) = uVar17;
            *(undefined1 *)(lVar43 + 0x66 + lVar42) = uVar18;
            *(undefined1 *)(lVar43 + 0x69 + lVar42) = uVar19;
            *(undefined1 *)(lVar43 + 0x6c + lVar42) = uVar20;
            *(undefined1 *)(lVar43 + 0x6f + lVar42) = uVar21;
            *(undefined1 *)(lVar43 + 0x72 + lVar42) = uVar22;
            *(undefined1 *)(lVar43 + 0x75 + lVar42) = uVar23;
            *(undefined1 *)(lVar43 + 0x78 + lVar42) = uVar16;
            *(undefined1 *)(lVar43 + 0x7b + lVar42) = uVar17;
            *(undefined1 *)(lVar43 + 0x7e + lVar42) = uVar18;
            *(undefined1 *)(lVar43 + 0x81 + lVar42) = uVar19;
            *(undefined1 *)(lVar43 + 0x84 + lVar42) = uVar20;
            *(undefined1 *)(lVar43 + 0x87 + lVar42) = uVar21;
            *(undefined1 *)(lVar43 + 0x8a + lVar42) = uVar22;
            *(undefined1 *)(lVar43 + 0x8d + lVar42) = uVar23;
            *(undefined1 *)(lVar43 + 0x90 + lVar42) = uVar24;
            *(undefined1 *)(lVar43 + 0x93 + lVar42) = uVar25;
            *(undefined1 *)(lVar43 + 0x96 + lVar42) = uVar26;
            *(undefined1 *)(lVar43 + 0x99 + lVar42) = uVar27;
            *(undefined1 *)(lVar43 + 0x9c + lVar42) = uVar28;
            *(undefined1 *)(lVar43 + 0x9f + lVar42) = uVar29;
            *(undefined1 *)(lVar43 + 0xa2 + lVar42) = uVar30;
            *(undefined1 *)(lVar43 + 0xa5 + lVar42) = uVar31;
            *(undefined1 *)(lVar43 + 0xa8 + lVar42) = uVar24;
            *(undefined1 *)(lVar43 + 0xab + lVar42) = uVar25;
            *(undefined1 *)(lVar43 + 0xae + lVar42) = uVar26;
            *(undefined1 *)(lVar43 + 0xb1 + lVar42) = uVar27;
            *(undefined1 *)(lVar43 + 0xb4 + lVar42) = uVar28;
            *(undefined1 *)(lVar43 + 0xb7 + lVar42) = uVar29;
            *(undefined1 *)(lVar43 + 0xba + lVar42) = uVar30;
            *(undefined1 *)(lVar43 + 0xbd + lVar42) = uVar31;
            lVar43 = lVar43 + 0xc0;
          } while (uVar45 < (ulonglong)(longlong)(int)uVar40);
        }
        uVar45 = 0;
        lVar43 = 0;
        if ((ulonglong)(longlong)(int)(uVar40 + 1) <= uVar35) {
          lVar41 = (longlong)(int)uVar40;
          lVar42 = lVar42 + lVar41 * 3;
          do {
            uVar33 = *(undefined1 *)(uVar45 + uVar44 + lVar41);
            uVar45 = uVar45 + 1;
            *(undefined1 *)(lVar43 + 2 + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + 1 + lVar42) = uVar33;
            *(undefined1 *)(lVar43 + lVar42) = uVar33;
            lVar43 = lVar43 + 3;
          } while (uVar45 < uVar35 - lVar41);
        }
      }
    }
    lVar47 = lVar47 + 1;
    if (param_5._4_4_ <= iVar46) {
      return 0;
    }
  } while( true );
}


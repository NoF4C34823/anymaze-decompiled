
undefined8 FUN_14000b2a6(uint param_1,longlong param_2,longlong param_3,longlong param_4)

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
  int in_EAX;
  longlong lVar34;
  ulonglong uVar35;
  int iVar36;
  longlong lVar37;
  ulonglong uVar38;
  uint uVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  longlong in_R10;
  ulonglong uVar44;
  int iVar45;
  longlong lVar46;
  int unaff_R15D;
  longlong lVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  longlong lStack0000000000000028;
  longlong lStack0000000000000030;
  int iStack0000000000000058;
  longlong lStack0000000000000060;
  int iStack00000000000000b0;
  int iStack00000000000000b4;
  
  param_1 = param_1 & 0xfffffffc;
  lVar37 = (longlong)(int)param_1;
  lVar34 = -in_EAX + param_4;
  lVar47 = -unaff_R15D + param_3;
  iVar45 = 0;
  lStack0000000000000030 = param_4 + lVar37;
  lStack0000000000000028 = param_3 + lVar37 * 3;
  iStack0000000000000058 = param_1 + 1;
  lVar46 = 0;
  lStack0000000000000060 = in_R10;
  do {
    lVar47 = lVar47 + lStack0000000000000060;
    lVar34 = lVar34 + param_2;
    iVar45 = iVar45 + 1;
    FUN_14000f780(lVar34,lVar47,param_1);
    if ((int)param_1 < iStack00000000000000b0) {
      lVar41 = lVar46 * lStack0000000000000060 + lStack0000000000000028;
      uVar43 = param_2 * lVar46 + lStack0000000000000030;
      if (((longlong)(lVar41 - uVar43) < iStack00000000000000b0 - lVar37) &&
         ((longlong)-(lVar41 - uVar43) < (iStack00000000000000b0 - lVar37) * 3)) {
        iVar36 = 1;
        lVar42 = 0;
        uVar39 = iStack00000000000000b0 - param_1 >> 1;
        uVar35 = 0;
        if (uVar39 != 0) {
          do {
            uVar44 = uVar35;
            uVar33 = *(undefined1 *)(uVar43 + uVar44 * 2);
            *(undefined1 *)(lVar42 + 2 + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + 1 + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + lVar41) = uVar33;
            uVar33 = *(undefined1 *)(uVar43 + 1 + uVar44 * 2);
            uVar35 = uVar44 + 1;
            *(undefined1 *)(lVar42 + 5 + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + 4 + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + 3 + lVar41) = uVar33;
            lVar42 = lVar42 + 6;
          } while (uVar35 < uVar39);
          iVar36 = (int)uVar44 + 2 + (int)uVar35;
        }
        if (iVar36 - 1U < iStack00000000000000b0 - param_1) {
          uVar33 = *(undefined1 *)((longlong)iVar36 + -1 + uVar43);
          lVar42 = (longlong)iVar36 * 3;
          *(undefined1 *)(lVar42 + -1 + lVar41) = uVar33;
          *(undefined1 *)(lVar42 + -2 + lVar41) = uVar33;
          *(undefined1 *)(lVar42 + -3 + lVar41) = uVar33;
        }
      }
      else {
        uVar39 = (iStack00000000000000b0 - iStack0000000000000058) + 1;
        uVar35 = (ulonglong)(int)uVar39;
        if ((longlong)uVar35 < 0x40) {
LAB_14000bc0f:
          uVar39 = 0;
        }
        else {
          if ((longlong)uVar35 < 0x2580) {
            uVar39 = uVar39 & 0xffffffc0;
            uVar44 = 0;
          }
          else {
            uVar44 = uVar43 & 0x3f;
            if ((int)uVar44 != 0) {
              uVar44 = (ulonglong)(0x40 - (int)uVar44);
            }
            iVar36 = (int)uVar44;
            if ((longlong)uVar35 < (longlong)(ulonglong)(iVar36 + 0x40)) goto LAB_14000bc0f;
            uVar39 = uVar39 - (uVar39 - iVar36 & 0x3f);
            uVar38 = 0;
            lVar42 = 0;
            if (iVar36 != 0) {
              do {
                uVar33 = *(undefined1 *)(uVar38 + uVar43);
                uVar38 = uVar38 + 1;
                *(undefined1 *)(lVar42 + 2 + lVar41) = uVar33;
                *(undefined1 *)(lVar42 + 1 + lVar41) = uVar33;
                *(undefined1 *)(lVar42 + lVar41) = uVar33;
                lVar42 = lVar42 + 3;
              } while (uVar38 < uVar44);
            }
          }
          lVar42 = uVar44 * 3;
          do {
            auVar32 = *(undefined1 (*) [64])(uVar44 + uVar43);
            uVar44 = uVar44 + 0x40;
            auVar48 = vextracti32x4_avx512f(auVar32,1);
            auVar49 = vextracti32x4_avx512f(auVar32,2);
            auVar50 = vextracti32x4_avx512f(auVar32,3);
            uVar33 = auVar32[0];
            *(undefined1 *)(lVar42 + 2 + lVar41) = uVar33;
            uVar1 = auVar32[1];
            *(undefined1 *)(lVar42 + 5 + lVar41) = uVar1;
            uVar2 = auVar32[2];
            *(undefined1 *)(lVar42 + 8 + lVar41) = uVar2;
            uVar3 = auVar32[3];
            *(undefined1 *)(lVar42 + 0xb + lVar41) = uVar3;
            uVar4 = auVar32[4];
            *(undefined1 *)(lVar42 + 0xe + lVar41) = uVar4;
            uVar5 = auVar32[5];
            *(undefined1 *)(lVar42 + 0x11 + lVar41) = uVar5;
            uVar6 = auVar32[6];
            *(undefined1 *)(lVar42 + 0x14 + lVar41) = uVar6;
            uVar7 = auVar32[7];
            *(undefined1 *)(lVar42 + 0x17 + lVar41) = uVar7;
            *(undefined1 *)(lVar42 + 0x1a + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + 0x1d + lVar41) = uVar1;
            *(undefined1 *)(lVar42 + 0x20 + lVar41) = uVar2;
            *(undefined1 *)(lVar42 + 0x23 + lVar41) = uVar3;
            *(undefined1 *)(lVar42 + 0x26 + lVar41) = uVar4;
            *(undefined1 *)(lVar42 + 0x29 + lVar41) = uVar5;
            *(undefined1 *)(lVar42 + 0x2c + lVar41) = uVar6;
            *(undefined1 *)(lVar42 + 0x2f + lVar41) = uVar7;
            uVar8 = auVar48[0];
            *(undefined1 *)(lVar42 + 0x32 + lVar41) = uVar8;
            uVar9 = auVar48[1];
            *(undefined1 *)(lVar42 + 0x35 + lVar41) = uVar9;
            uVar10 = auVar48[2];
            *(undefined1 *)(lVar42 + 0x38 + lVar41) = uVar10;
            uVar11 = auVar48[3];
            *(undefined1 *)(lVar42 + 0x3b + lVar41) = uVar11;
            uVar12 = auVar48[4];
            *(undefined1 *)(lVar42 + 0x3e + lVar41) = uVar12;
            uVar13 = auVar48[5];
            *(undefined1 *)(lVar42 + 0x41 + lVar41) = uVar13;
            uVar14 = auVar48[6];
            *(undefined1 *)(lVar42 + 0x44 + lVar41) = uVar14;
            uVar15 = auVar48[7];
            *(undefined1 *)(lVar42 + 0x47 + lVar41) = uVar15;
            *(undefined1 *)(lVar42 + 0x4a + lVar41) = uVar8;
            *(undefined1 *)(lVar42 + 0x4d + lVar41) = uVar9;
            *(undefined1 *)(lVar42 + 0x50 + lVar41) = uVar10;
            *(undefined1 *)(lVar42 + 0x53 + lVar41) = uVar11;
            *(undefined1 *)(lVar42 + 0x56 + lVar41) = uVar12;
            *(undefined1 *)(lVar42 + 0x59 + lVar41) = uVar13;
            *(undefined1 *)(lVar42 + 0x5c + lVar41) = uVar14;
            *(undefined1 *)(lVar42 + 0x5f + lVar41) = uVar15;
            uVar16 = auVar49[0];
            *(undefined1 *)(lVar42 + 0x62 + lVar41) = uVar16;
            uVar17 = auVar49[1];
            *(undefined1 *)(lVar42 + 0x65 + lVar41) = uVar17;
            uVar18 = auVar49[2];
            *(undefined1 *)(lVar42 + 0x68 + lVar41) = uVar18;
            uVar19 = auVar49[3];
            *(undefined1 *)(lVar42 + 0x6b + lVar41) = uVar19;
            uVar20 = auVar49[4];
            *(undefined1 *)(lVar42 + 0x6e + lVar41) = uVar20;
            uVar21 = auVar49[5];
            *(undefined1 *)(lVar42 + 0x71 + lVar41) = uVar21;
            uVar22 = auVar49[6];
            *(undefined1 *)(lVar42 + 0x74 + lVar41) = uVar22;
            uVar23 = auVar49[7];
            *(undefined1 *)(lVar42 + 0x77 + lVar41) = uVar23;
            *(undefined1 *)(lVar42 + 0x7a + lVar41) = uVar16;
            *(undefined1 *)(lVar42 + 0x7d + lVar41) = uVar17;
            *(undefined1 *)(lVar42 + 0x80 + lVar41) = uVar18;
            *(undefined1 *)(lVar42 + 0x83 + lVar41) = uVar19;
            *(undefined1 *)(lVar42 + 0x86 + lVar41) = uVar20;
            *(undefined1 *)(lVar42 + 0x89 + lVar41) = uVar21;
            *(undefined1 *)(lVar42 + 0x8c + lVar41) = uVar22;
            *(undefined1 *)(lVar42 + 0x8f + lVar41) = uVar23;
            uVar24 = auVar50[0];
            *(undefined1 *)(lVar42 + 0x92 + lVar41) = uVar24;
            uVar25 = auVar50[1];
            *(undefined1 *)(lVar42 + 0x95 + lVar41) = uVar25;
            uVar26 = auVar50[2];
            *(undefined1 *)(lVar42 + 0x98 + lVar41) = uVar26;
            uVar27 = auVar50[3];
            *(undefined1 *)(lVar42 + 0x9b + lVar41) = uVar27;
            uVar28 = auVar50[4];
            *(undefined1 *)(lVar42 + 0x9e + lVar41) = uVar28;
            uVar29 = auVar50[5];
            *(undefined1 *)(lVar42 + 0xa1 + lVar41) = uVar29;
            uVar30 = auVar50[6];
            *(undefined1 *)(lVar42 + 0xa4 + lVar41) = uVar30;
            uVar31 = auVar50[7];
            *(undefined1 *)(lVar42 + 0xa7 + lVar41) = uVar31;
            *(undefined1 *)(lVar42 + 0xaa + lVar41) = uVar24;
            *(undefined1 *)(lVar42 + 0xad + lVar41) = uVar25;
            *(undefined1 *)(lVar42 + 0xb0 + lVar41) = uVar26;
            *(undefined1 *)(lVar42 + 0xb3 + lVar41) = uVar27;
            *(undefined1 *)(lVar42 + 0xb6 + lVar41) = uVar28;
            *(undefined1 *)(lVar42 + 0xb9 + lVar41) = uVar29;
            *(undefined1 *)(lVar42 + 0xbc + lVar41) = uVar30;
            *(undefined1 *)(lVar42 + 0xbf + lVar41) = uVar31;
            *(undefined1 *)(lVar42 + 1 + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + 4 + lVar41) = uVar1;
            *(undefined1 *)(lVar42 + 7 + lVar41) = uVar2;
            *(undefined1 *)(lVar42 + 10 + lVar41) = uVar3;
            *(undefined1 *)(lVar42 + 0xd + lVar41) = uVar4;
            *(undefined1 *)(lVar42 + 0x10 + lVar41) = uVar5;
            *(undefined1 *)(lVar42 + 0x13 + lVar41) = uVar6;
            *(undefined1 *)(lVar42 + 0x16 + lVar41) = uVar7;
            *(undefined1 *)(lVar42 + 0x19 + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + 0x1c + lVar41) = uVar1;
            *(undefined1 *)(lVar42 + 0x1f + lVar41) = uVar2;
            *(undefined1 *)(lVar42 + 0x22 + lVar41) = uVar3;
            *(undefined1 *)(lVar42 + 0x25 + lVar41) = uVar4;
            *(undefined1 *)(lVar42 + 0x28 + lVar41) = uVar5;
            *(undefined1 *)(lVar42 + 0x2b + lVar41) = uVar6;
            *(undefined1 *)(lVar42 + 0x2e + lVar41) = uVar7;
            *(undefined1 *)(lVar42 + 0x31 + lVar41) = uVar8;
            *(undefined1 *)(lVar42 + 0x34 + lVar41) = uVar9;
            *(undefined1 *)(lVar42 + 0x37 + lVar41) = uVar10;
            *(undefined1 *)(lVar42 + 0x3a + lVar41) = uVar11;
            *(undefined1 *)(lVar42 + 0x3d + lVar41) = uVar12;
            *(undefined1 *)(lVar42 + 0x40 + lVar41) = uVar13;
            *(undefined1 *)(lVar42 + 0x43 + lVar41) = uVar14;
            *(undefined1 *)(lVar42 + 0x46 + lVar41) = uVar15;
            *(undefined1 *)(lVar42 + 0x49 + lVar41) = uVar8;
            *(undefined1 *)(lVar42 + 0x4c + lVar41) = uVar9;
            *(undefined1 *)(lVar42 + 0x4f + lVar41) = uVar10;
            *(undefined1 *)(lVar42 + 0x52 + lVar41) = uVar11;
            *(undefined1 *)(lVar42 + 0x55 + lVar41) = uVar12;
            *(undefined1 *)(lVar42 + 0x58 + lVar41) = uVar13;
            *(undefined1 *)(lVar42 + 0x5b + lVar41) = uVar14;
            *(undefined1 *)(lVar42 + 0x5e + lVar41) = uVar15;
            *(undefined1 *)(lVar42 + 0x61 + lVar41) = uVar16;
            *(undefined1 *)(lVar42 + 100 + lVar41) = uVar17;
            *(undefined1 *)(lVar42 + 0x67 + lVar41) = uVar18;
            *(undefined1 *)(lVar42 + 0x6a + lVar41) = uVar19;
            *(undefined1 *)(lVar42 + 0x6d + lVar41) = uVar20;
            *(undefined1 *)(lVar42 + 0x70 + lVar41) = uVar21;
            *(undefined1 *)(lVar42 + 0x73 + lVar41) = uVar22;
            *(undefined1 *)(lVar42 + 0x76 + lVar41) = uVar23;
            *(undefined1 *)(lVar42 + 0x79 + lVar41) = uVar16;
            *(undefined1 *)(lVar42 + 0x7c + lVar41) = uVar17;
            *(undefined1 *)(lVar42 + 0x7f + lVar41) = uVar18;
            *(undefined1 *)(lVar42 + 0x82 + lVar41) = uVar19;
            *(undefined1 *)(lVar42 + 0x85 + lVar41) = uVar20;
            *(undefined1 *)(lVar42 + 0x88 + lVar41) = uVar21;
            *(undefined1 *)(lVar42 + 0x8b + lVar41) = uVar22;
            *(undefined1 *)(lVar42 + 0x8e + lVar41) = uVar23;
            *(undefined1 *)(lVar42 + 0x91 + lVar41) = uVar24;
            *(undefined1 *)(lVar42 + 0x94 + lVar41) = uVar25;
            *(undefined1 *)(lVar42 + 0x97 + lVar41) = uVar26;
            *(undefined1 *)(lVar42 + 0x9a + lVar41) = uVar27;
            *(undefined1 *)(lVar42 + 0x9d + lVar41) = uVar28;
            *(undefined1 *)(lVar42 + 0xa0 + lVar41) = uVar29;
            *(undefined1 *)(lVar42 + 0xa3 + lVar41) = uVar30;
            *(undefined1 *)(lVar42 + 0xa6 + lVar41) = uVar31;
            *(undefined1 *)(lVar42 + 0xa9 + lVar41) = uVar24;
            *(undefined1 *)(lVar42 + 0xac + lVar41) = uVar25;
            *(undefined1 *)(lVar42 + 0xaf + lVar41) = uVar26;
            *(undefined1 *)(lVar42 + 0xb2 + lVar41) = uVar27;
            *(undefined1 *)(lVar42 + 0xb5 + lVar41) = uVar28;
            *(undefined1 *)(lVar42 + 0xb8 + lVar41) = uVar29;
            *(undefined1 *)(lVar42 + 0xbb + lVar41) = uVar30;
            *(undefined1 *)(lVar42 + 0xbe + lVar41) = uVar31;
            *(undefined1 *)(lVar42 + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + 3 + lVar41) = uVar1;
            *(undefined1 *)(lVar42 + 6 + lVar41) = uVar2;
            *(undefined1 *)(lVar42 + 9 + lVar41) = uVar3;
            *(undefined1 *)(lVar42 + 0xc + lVar41) = uVar4;
            *(undefined1 *)(lVar42 + 0xf + lVar41) = uVar5;
            *(undefined1 *)(lVar42 + 0x12 + lVar41) = uVar6;
            *(undefined1 *)(lVar42 + 0x15 + lVar41) = uVar7;
            *(undefined1 *)(lVar42 + 0x18 + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + 0x1b + lVar41) = uVar1;
            *(undefined1 *)(lVar42 + 0x1e + lVar41) = uVar2;
            *(undefined1 *)(lVar42 + 0x21 + lVar41) = uVar3;
            *(undefined1 *)(lVar42 + 0x24 + lVar41) = uVar4;
            *(undefined1 *)(lVar42 + 0x27 + lVar41) = uVar5;
            *(undefined1 *)(lVar42 + 0x2a + lVar41) = uVar6;
            *(undefined1 *)(lVar42 + 0x2d + lVar41) = uVar7;
            *(undefined1 *)(lVar42 + 0x30 + lVar41) = uVar8;
            *(undefined1 *)(lVar42 + 0x33 + lVar41) = uVar9;
            *(undefined1 *)(lVar42 + 0x36 + lVar41) = uVar10;
            *(undefined1 *)(lVar42 + 0x39 + lVar41) = uVar11;
            *(undefined1 *)(lVar42 + 0x3c + lVar41) = uVar12;
            *(undefined1 *)(lVar42 + 0x3f + lVar41) = uVar13;
            *(undefined1 *)(lVar42 + 0x42 + lVar41) = uVar14;
            *(undefined1 *)(lVar42 + 0x45 + lVar41) = uVar15;
            *(undefined1 *)(lVar42 + 0x48 + lVar41) = uVar8;
            *(undefined1 *)(lVar42 + 0x4b + lVar41) = uVar9;
            *(undefined1 *)(lVar42 + 0x4e + lVar41) = uVar10;
            *(undefined1 *)(lVar42 + 0x51 + lVar41) = uVar11;
            *(undefined1 *)(lVar42 + 0x54 + lVar41) = uVar12;
            *(undefined1 *)(lVar42 + 0x57 + lVar41) = uVar13;
            *(undefined1 *)(lVar42 + 0x5a + lVar41) = uVar14;
            *(undefined1 *)(lVar42 + 0x5d + lVar41) = uVar15;
            *(undefined1 *)(lVar42 + 0x60 + lVar41) = uVar16;
            *(undefined1 *)(lVar42 + 99 + lVar41) = uVar17;
            *(undefined1 *)(lVar42 + 0x66 + lVar41) = uVar18;
            *(undefined1 *)(lVar42 + 0x69 + lVar41) = uVar19;
            *(undefined1 *)(lVar42 + 0x6c + lVar41) = uVar20;
            *(undefined1 *)(lVar42 + 0x6f + lVar41) = uVar21;
            *(undefined1 *)(lVar42 + 0x72 + lVar41) = uVar22;
            *(undefined1 *)(lVar42 + 0x75 + lVar41) = uVar23;
            *(undefined1 *)(lVar42 + 0x78 + lVar41) = uVar16;
            *(undefined1 *)(lVar42 + 0x7b + lVar41) = uVar17;
            *(undefined1 *)(lVar42 + 0x7e + lVar41) = uVar18;
            *(undefined1 *)(lVar42 + 0x81 + lVar41) = uVar19;
            *(undefined1 *)(lVar42 + 0x84 + lVar41) = uVar20;
            *(undefined1 *)(lVar42 + 0x87 + lVar41) = uVar21;
            *(undefined1 *)(lVar42 + 0x8a + lVar41) = uVar22;
            *(undefined1 *)(lVar42 + 0x8d + lVar41) = uVar23;
            *(undefined1 *)(lVar42 + 0x90 + lVar41) = uVar24;
            *(undefined1 *)(lVar42 + 0x93 + lVar41) = uVar25;
            *(undefined1 *)(lVar42 + 0x96 + lVar41) = uVar26;
            *(undefined1 *)(lVar42 + 0x99 + lVar41) = uVar27;
            *(undefined1 *)(lVar42 + 0x9c + lVar41) = uVar28;
            *(undefined1 *)(lVar42 + 0x9f + lVar41) = uVar29;
            *(undefined1 *)(lVar42 + 0xa2 + lVar41) = uVar30;
            *(undefined1 *)(lVar42 + 0xa5 + lVar41) = uVar31;
            *(undefined1 *)(lVar42 + 0xa8 + lVar41) = uVar24;
            *(undefined1 *)(lVar42 + 0xab + lVar41) = uVar25;
            *(undefined1 *)(lVar42 + 0xae + lVar41) = uVar26;
            *(undefined1 *)(lVar42 + 0xb1 + lVar41) = uVar27;
            *(undefined1 *)(lVar42 + 0xb4 + lVar41) = uVar28;
            *(undefined1 *)(lVar42 + 0xb7 + lVar41) = uVar29;
            *(undefined1 *)(lVar42 + 0xba + lVar41) = uVar30;
            *(undefined1 *)(lVar42 + 0xbd + lVar41) = uVar31;
            lVar42 = lVar42 + 0xc0;
          } while (uVar44 < (ulonglong)(longlong)(int)uVar39);
        }
        uVar44 = 0;
        lVar42 = 0;
        if ((ulonglong)(longlong)(int)(uVar39 + 1) <= uVar35) {
          lVar40 = (longlong)(int)uVar39;
          lVar41 = lVar41 + lVar40 * 3;
          do {
            uVar33 = *(undefined1 *)(uVar44 + uVar43 + lVar40);
            uVar44 = uVar44 + 1;
            *(undefined1 *)(lVar42 + 2 + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + 1 + lVar41) = uVar33;
            *(undefined1 *)(lVar42 + lVar41) = uVar33;
            lVar42 = lVar42 + 3;
          } while (uVar44 < uVar35 - lVar40);
        }
      }
    }
    lVar46 = lVar46 + 1;
    if (iStack00000000000000b4 <= iVar45) {
      return 0;
    }
  } while( true );
}


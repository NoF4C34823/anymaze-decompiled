
void thunk_FUN_142d27530(undefined1 (*param_1) [16],int param_2,undefined1 (*param_3) [16],
                        int param_4,int param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar7 = (longlong)param_4;
  lVar10 = (longlong)param_2 * 4;
  if ((longlong)param_5 == 1) {
    lVar10 = lVar7 + -8;
    lVar8 = lVar10;
    pauVar12 = param_3;
    if (7 < lVar7) {
      if (((ulonglong)param_3 & 0xf) == 0) {
        do {
          puVar5 = *param_1;
          uVar2 = *(undefined8 *)(*param_1 + 8);
          pauVar12 = param_3 + 2;
          uVar3 = *(undefined8 *)param_1[1];
          uVar4 = *(undefined8 *)(param_1[1] + 8);
          param_1 = param_1 + 2;
          *(undefined8 *)*param_3 = *(undefined8 *)puVar5;
          *(undefined8 *)(*param_3 + 8) = uVar2;
          lVar8 = lVar10 + -8;
          *(undefined8 *)param_3[1] = uVar3;
          *(undefined8 *)(param_3[1] + 8) = uVar4;
          bVar1 = 7 < lVar10;
          lVar10 = lVar8;
          param_3 = pauVar12;
        } while (bVar1);
      }
      else {
        do {
          puVar5 = *param_1;
          uVar2 = *(undefined8 *)(*param_1 + 8);
          pauVar12 = param_3 + 2;
          uVar3 = *(undefined8 *)param_1[1];
          uVar4 = *(undefined8 *)(param_1[1] + 8);
          param_1 = param_1 + 2;
          *(undefined8 *)*param_3 = *(undefined8 *)puVar5;
          *(undefined8 *)(*param_3 + 8) = uVar2;
          lVar8 = lVar10 + -8;
          *(undefined8 *)param_3[1] = uVar3;
          *(undefined8 *)(param_3[1] + 8) = uVar4;
          bVar1 = 7 < lVar10;
          lVar10 = lVar8;
          param_3 = pauVar12;
        } while (bVar1);
      }
    }
    if (lVar8 == -8 || SCARRY8(lVar8,8) != lVar8 + 8 < 0) {
      return;
    }
    lVar7 = lVar8 + 4;
    if (3 < lVar8 + 8) {
      puVar5 = *param_1;
      uVar2 = *(undefined8 *)(*param_1 + 8);
      param_1 = param_1 + 1;
      *(undefined8 *)*pauVar12 = *(undefined8 *)puVar5;
      *(undefined8 *)(*pauVar12 + 8) = uVar2;
      pauVar12 = pauVar12 + 1;
      lVar7 = lVar8;
    }
    if (lVar7 == -4 || SCARRY8(lVar7,4) != lVar7 + 4 < 0) {
      return;
    }
    lVar10 = lVar7 + 2;
    if (1 < lVar7 + 4) {
      puVar5 = *param_1;
      param_1 = (undefined1 (*) [16])(*param_1 + 8);
      *(undefined8 *)*pauVar12 = *(undefined8 *)puVar5;
      pauVar12 = (undefined1 (*) [16])(*pauVar12 + 8);
      lVar10 = lVar7;
    }
    if (lVar10 == -2 || SCARRY8(lVar10,2) != lVar10 + 2 < 0) {
      return;
    }
    fVar13 = *(float *)*param_1;
  }
  else {
    lVar6 = param_5 * lVar10;
    lVar8 = lVar7 + -8;
    lVar9 = lVar8;
    if (7 < lVar7) {
      pauVar12 = param_3;
      if (((ulonglong)param_3 & 0xf) == 0) {
        do {
          auVar14 = *param_1;
          auVar15 = param_1[1];
          param_3 = pauVar12 + 2;
          lVar7 = lVar10;
          do {
            auVar14 = maxps(auVar14,*(undefined1 (*) [16])(*param_1 + lVar7));
            auVar15 = maxps(auVar15,*(undefined1 (*) [16])(param_1[1] + lVar7));
            lVar7 = lVar7 + lVar10;
          } while (lVar7 < lVar6);
          *pauVar12 = auVar14;
          param_1 = param_1 + 2;
          pauVar12[1] = auVar15;
          lVar9 = lVar8 + -8;
          bVar1 = 7 < lVar8;
          lVar8 = lVar9;
          pauVar12 = param_3;
        } while (bVar1);
      }
      else {
        do {
          auVar14 = *param_1;
          auVar15 = param_1[1];
          param_3 = pauVar12 + 2;
          lVar7 = lVar10;
          do {
            auVar14 = maxps(auVar14,*(undefined1 (*) [16])(*param_1 + lVar7));
            auVar15 = maxps(auVar15,*(undefined1 (*) [16])(param_1[1] + lVar7));
            lVar7 = lVar7 + lVar10;
          } while (lVar7 < lVar6);
          *pauVar12 = auVar14;
          param_1 = param_1 + 2;
          pauVar12[1] = auVar15;
          lVar9 = lVar8 + -8;
          bVar1 = 7 < lVar8;
          lVar8 = lVar9;
          pauVar12 = param_3;
        } while (bVar1);
      }
    }
    if (lVar9 == -8 || SCARRY8(lVar9,8) != lVar9 + 8 < 0) {
      return;
    }
    lVar7 = lVar9 + 4;
    pauVar11 = param_3;
    if (3 < lVar9 + 8) {
      auVar14 = *param_1;
      pauVar11 = param_3 + 1;
      lVar7 = lVar10;
      do {
        auVar14 = maxps(auVar14,*(undefined1 (*) [16])(*param_1 + lVar7));
        lVar7 = lVar7 + lVar10;
      } while (lVar7 < lVar6);
      *param_3 = auVar14;
      param_1 = param_1 + 1;
      lVar7 = lVar9;
    }
    if (lVar7 == -4 || SCARRY8(lVar7,4) != lVar7 + 4 < 0) {
      return;
    }
    lVar8 = lVar7 + 2;
    pauVar12 = pauVar11;
    if (1 < lVar7 + 4) {
      pauVar12 = (undefined1 (*) [16])(*pauVar11 + 8);
      auVar15 = ZEXT816(0);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulonglong *)*param_1;
      lVar8 = lVar10;
      do {
        auVar15._0_8_ = *(undefined8 *)(*param_1 + lVar8);
        lVar8 = lVar8 + lVar10;
        auVar14 = maxps(auVar14,auVar15);
      } while (lVar8 < lVar6);
      *(longlong *)*pauVar11 = auVar14._0_8_;
      param_1 = (undefined1 (*) [16])(*param_1 + 8);
      lVar8 = lVar7;
    }
    if (lVar8 == -2 || SCARRY8(lVar8,2) != lVar8 + 2 < 0) {
      return;
    }
    fVar13 = *(float *)*param_1;
    lVar7 = lVar10;
    do {
      if (fVar13 <= *(float *)(*param_1 + lVar7)) {
        fVar13 = *(float *)(*param_1 + lVar7);
      }
      lVar7 = lVar7 + lVar10;
    } while (lVar7 < lVar6);
  }
  *(float *)*pauVar12 = fVar13;
  return;
}


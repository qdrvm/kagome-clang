// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --version 2
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x float> @test_vle32_v_f32mf2_tu
// CHECK-RV64-SAME: (<vscale x 1 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vle.nxv1f32.i64(<vscale x 1 x float> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vle32_v_f32mf2_tu(vfloat32mf2_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x float> @test_vle32_v_f32m1_tu
// CHECK-RV64-SAME: (<vscale x 2 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vle.nxv2f32.i64(<vscale x 2 x float> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vle32_v_f32m1_tu(vfloat32m1_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x float> @test_vle32_v_f32m2_tu
// CHECK-RV64-SAME: (<vscale x 4 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vle.nxv4f32.i64(<vscale x 4 x float> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vle32_v_f32m2_tu(vfloat32m2_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x float> @test_vle32_v_f32m4_tu
// CHECK-RV64-SAME: (<vscale x 8 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vle.nxv8f32.i64(<vscale x 8 x float> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vle32_v_f32m4_tu(vfloat32m4_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x float> @test_vle32_v_f32m8_tu
// CHECK-RV64-SAME: (<vscale x 16 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vle.nxv16f32.i64(<vscale x 16 x float> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vle32_v_f32m8_tu(vfloat32m8_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i32> @test_vle32_v_i32mf2_tu
// CHECK-RV64-SAME: (<vscale x 1 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vle.nxv1i32.i64(<vscale x 1 x i32> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vint32mf2_t test_vle32_v_i32mf2_tu(vint32mf2_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i32> @test_vle32_v_i32m1_tu
// CHECK-RV64-SAME: (<vscale x 2 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vle.nxv2i32.i64(<vscale x 2 x i32> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vint32m1_t test_vle32_v_i32m1_tu(vint32m1_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i32> @test_vle32_v_i32m2_tu
// CHECK-RV64-SAME: (<vscale x 4 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vle.nxv4i32.i64(<vscale x 4 x i32> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vint32m2_t test_vle32_v_i32m2_tu(vint32m2_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i32> @test_vle32_v_i32m4_tu
// CHECK-RV64-SAME: (<vscale x 8 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vle.nxv8i32.i64(<vscale x 8 x i32> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vint32m4_t test_vle32_v_i32m4_tu(vint32m4_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i32> @test_vle32_v_i32m8_tu
// CHECK-RV64-SAME: (<vscale x 16 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vle.nxv16i32.i64(<vscale x 16 x i32> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vint32m8_t test_vle32_v_i32m8_tu(vint32m8_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i32> @test_vle32_v_u32mf2_tu
// CHECK-RV64-SAME: (<vscale x 1 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vle.nxv1i32.i64(<vscale x 1 x i32> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vuint32mf2_t test_vle32_v_u32mf2_tu(vuint32mf2_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i32> @test_vle32_v_u32m1_tu
// CHECK-RV64-SAME: (<vscale x 2 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vle.nxv2i32.i64(<vscale x 2 x i32> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vuint32m1_t test_vle32_v_u32m1_tu(vuint32m1_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i32> @test_vle32_v_u32m2_tu
// CHECK-RV64-SAME: (<vscale x 4 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vle.nxv4i32.i64(<vscale x 4 x i32> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vuint32m2_t test_vle32_v_u32m2_tu(vuint32m2_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i32> @test_vle32_v_u32m4_tu
// CHECK-RV64-SAME: (<vscale x 8 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vle.nxv8i32.i64(<vscale x 8 x i32> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vuint32m4_t test_vle32_v_u32m4_tu(vuint32m4_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i32> @test_vle32_v_u32m8_tu
// CHECK-RV64-SAME: (<vscale x 16 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vle.nxv16i32.i64(<vscale x 16 x i32> [[MASKEDOFF]], ptr [[BASE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vuint32m8_t test_vle32_v_u32m8_tu(vuint32m8_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tu(maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x float> @test_vle32_v_f32mf2_tum
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], <vscale x 1 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vle.mask.nxv1f32.i64(<vscale x 1 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vle32_v_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x float> @test_vle32_v_f32m1_tum
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vle.mask.nxv2f32.i64(<vscale x 2 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vle32_v_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x float> @test_vle32_v_f32m2_tum
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vle.mask.nxv4f32.i64(<vscale x 4 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vle32_v_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x float> @test_vle32_v_f32m4_tum
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vle.mask.nxv8f32.i64(<vscale x 8 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vle32_v_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x float> @test_vle32_v_f32m8_tum
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vle.mask.nxv16f32.i64(<vscale x 16 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vle32_v_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i32> @test_vle32_v_i32mf2_tum
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], <vscale x 1 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vle.mask.nxv1i32.i64(<vscale x 1 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vint32mf2_t test_vle32_v_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i32> @test_vle32_v_i32m1_tum
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vle.mask.nxv2i32.i64(<vscale x 2 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vint32m1_t test_vle32_v_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i32> @test_vle32_v_i32m2_tum
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vle.mask.nxv4i32.i64(<vscale x 4 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vint32m2_t test_vle32_v_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i32> @test_vle32_v_i32m4_tum
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vle.mask.nxv8i32.i64(<vscale x 8 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vint32m4_t test_vle32_v_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i32> @test_vle32_v_i32m8_tum
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vle.mask.nxv16i32.i64(<vscale x 16 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vint32m8_t test_vle32_v_i32m8_tum(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i32> @test_vle32_v_u32mf2_tum
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], <vscale x 1 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vle.mask.nxv1i32.i64(<vscale x 1 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vuint32mf2_t test_vle32_v_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i32> @test_vle32_v_u32m1_tum
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vle.mask.nxv2i32.i64(<vscale x 2 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vuint32m1_t test_vle32_v_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i32> @test_vle32_v_u32m2_tum
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vle.mask.nxv4i32.i64(<vscale x 4 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vuint32m2_t test_vle32_v_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i32> @test_vle32_v_u32m4_tum
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vle.mask.nxv8i32.i64(<vscale x 8 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vuint32m4_t test_vle32_v_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i32> @test_vle32_v_u32m8_tum
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vle.mask.nxv16i32.i64(<vscale x 16 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vuint32m8_t test_vle32_v_u32m8_tum(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tum(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x float> @test_vle32_v_f32mf2_tumu
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], <vscale x 1 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vle.mask.nxv1f32.i64(<vscale x 1 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vle32_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x float> @test_vle32_v_f32m1_tumu
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vle.mask.nxv2f32.i64(<vscale x 2 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vle32_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x float> @test_vle32_v_f32m2_tumu
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vle.mask.nxv4f32.i64(<vscale x 4 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vle32_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x float> @test_vle32_v_f32m4_tumu
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vle.mask.nxv8f32.i64(<vscale x 8 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vle32_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x float> @test_vle32_v_f32m8_tumu
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vle.mask.nxv16f32.i64(<vscale x 16 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vle32_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i32> @test_vle32_v_i32mf2_tumu
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], <vscale x 1 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vle.mask.nxv1i32.i64(<vscale x 1 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vint32mf2_t test_vle32_v_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i32> @test_vle32_v_i32m1_tumu
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vle.mask.nxv2i32.i64(<vscale x 2 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vint32m1_t test_vle32_v_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i32> @test_vle32_v_i32m2_tumu
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vle.mask.nxv4i32.i64(<vscale x 4 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vint32m2_t test_vle32_v_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i32> @test_vle32_v_i32m4_tumu
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vle.mask.nxv8i32.i64(<vscale x 8 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vint32m4_t test_vle32_v_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i32> @test_vle32_v_i32m8_tumu
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vle.mask.nxv16i32.i64(<vscale x 16 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vint32m8_t test_vle32_v_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i32> @test_vle32_v_u32mf2_tumu
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], <vscale x 1 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vle.mask.nxv1i32.i64(<vscale x 1 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vuint32mf2_t test_vle32_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i32> @test_vle32_v_u32m1_tumu
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vle.mask.nxv2i32.i64(<vscale x 2 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vuint32m1_t test_vle32_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i32> @test_vle32_v_u32m2_tumu
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vle.mask.nxv4i32.i64(<vscale x 4 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vuint32m2_t test_vle32_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i32> @test_vle32_v_u32m4_tumu
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vle.mask.nxv8i32.i64(<vscale x 8 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vuint32m4_t test_vle32_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i32> @test_vle32_v_u32m8_tumu
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vle.mask.nxv16i32.i64(<vscale x 16 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vuint32m8_t test_vle32_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_tumu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x float> @test_vle32_v_f32mf2_mu
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], <vscale x 1 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vle.mask.nxv1f32.i64(<vscale x 1 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vle32_v_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x float> @test_vle32_v_f32m1_mu
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vle.mask.nxv2f32.i64(<vscale x 2 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vle32_v_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x float> @test_vle32_v_f32m2_mu
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vle.mask.nxv4f32.i64(<vscale x 4 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vle32_v_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x float> @test_vle32_v_f32m4_mu
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vle.mask.nxv8f32.i64(<vscale x 8 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vle32_v_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x float> @test_vle32_v_f32m8_mu
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x float> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vle.mask.nxv16f32.i64(<vscale x 16 x float> [[MASKEDOFF]], ptr [[BASE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vle32_v_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i32> @test_vle32_v_i32mf2_mu
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], <vscale x 1 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vle.mask.nxv1i32.i64(<vscale x 1 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vint32mf2_t test_vle32_v_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i32> @test_vle32_v_i32m1_mu
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vle.mask.nxv2i32.i64(<vscale x 2 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vint32m1_t test_vle32_v_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i32> @test_vle32_v_i32m2_mu
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vle.mask.nxv4i32.i64(<vscale x 4 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vint32m2_t test_vle32_v_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i32> @test_vle32_v_i32m4_mu
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vle.mask.nxv8i32.i64(<vscale x 8 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vint32m4_t test_vle32_v_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i32> @test_vle32_v_i32m8_mu
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vle.mask.nxv16i32.i64(<vscale x 16 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vint32m8_t test_vle32_v_i32m8_mu(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i32> @test_vle32_v_u32mf2_mu
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], <vscale x 1 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vle.mask.nxv1i32.i64(<vscale x 1 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vuint32mf2_t test_vle32_v_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i32> @test_vle32_v_u32m1_mu
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vle.mask.nxv2i32.i64(<vscale x 2 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vuint32m1_t test_vle32_v_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i32> @test_vle32_v_u32m2_mu
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vle.mask.nxv4i32.i64(<vscale x 4 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vuint32m2_t test_vle32_v_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i32> @test_vle32_v_u32m4_mu
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vle.mask.nxv8i32.i64(<vscale x 8 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vuint32m4_t test_vle32_v_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i32> @test_vle32_v_u32m8_mu
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x i32> [[MASKEDOFF:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vle.mask.nxv16i32.i64(<vscale x 16 x i32> [[MASKEDOFF]], ptr [[BASE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vuint32m8_t test_vle32_v_u32m8_mu(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t vl) {
  return __riscv_vle32_mu(mask, maskedoff, base, vl);
}


// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --version 2
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: define dso_local { <vscale x 1 x half>, <vscale x 1 x half>, <vscale x 1 x half> } @test_vlseg3e16_v_f16mf4x3_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 1 x half>, <vscale x 1 x half>, <vscale x 1 x half> } @llvm.riscv.vlseg3.mask.nxv1f16.i64(<vscale x 1 x half> poison, <vscale x 1 x half> poison, <vscale x 1 x half> poison, ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 1 x half>, <vscale x 1 x half>, <vscale x 1 x half> } [[TMP0]]
//
vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_m(vbool64_t mask, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 2 x half>, <vscale x 2 x half>, <vscale x 2 x half> } @test_vlseg3e16_v_f16mf2x3_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 2 x half>, <vscale x 2 x half>, <vscale x 2 x half> } @llvm.riscv.vlseg3.mask.nxv2f16.i64(<vscale x 2 x half> poison, <vscale x 2 x half> poison, <vscale x 2 x half> poison, ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 2 x half>, <vscale x 2 x half>, <vscale x 2 x half> } [[TMP0]]
//
vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_m(vbool32_t mask, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 4 x half>, <vscale x 4 x half>, <vscale x 4 x half> } @test_vlseg3e16_v_f16m1x3_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 4 x half>, <vscale x 4 x half>, <vscale x 4 x half> } @llvm.riscv.vlseg3.mask.nxv4f16.i64(<vscale x 4 x half> poison, <vscale x 4 x half> poison, <vscale x 4 x half> poison, ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 4 x half>, <vscale x 4 x half>, <vscale x 4 x half> } [[TMP0]]
//
vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_m(vbool16_t mask, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 8 x half>, <vscale x 8 x half>, <vscale x 8 x half> } @test_vlseg3e16_v_f16m2x3_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 8 x half>, <vscale x 8 x half>, <vscale x 8 x half> } @llvm.riscv.vlseg3.mask.nxv8f16.i64(<vscale x 8 x half> poison, <vscale x 8 x half> poison, <vscale x 8 x half> poison, ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 8 x half>, <vscale x 8 x half>, <vscale x 8 x half> } [[TMP0]]
//
vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_m(vbool8_t mask, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 1 x i16>, <vscale x 1 x i16>, <vscale x 1 x i16> } @test_vlseg3e16_v_i16mf4x3_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 1 x i16>, <vscale x 1 x i16>, <vscale x 1 x i16> } @llvm.riscv.vlseg3.mask.nxv1i16.i64(<vscale x 1 x i16> poison, <vscale x 1 x i16> poison, <vscale x 1 x i16> poison, ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 1 x i16>, <vscale x 1 x i16>, <vscale x 1 x i16> } [[TMP0]]
//
vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_m(vbool64_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 2 x i16>, <vscale x 2 x i16>, <vscale x 2 x i16> } @test_vlseg3e16_v_i16mf2x3_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 2 x i16>, <vscale x 2 x i16>, <vscale x 2 x i16> } @llvm.riscv.vlseg3.mask.nxv2i16.i64(<vscale x 2 x i16> poison, <vscale x 2 x i16> poison, <vscale x 2 x i16> poison, ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 2 x i16>, <vscale x 2 x i16>, <vscale x 2 x i16> } [[TMP0]]
//
vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_m(vbool32_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 4 x i16>, <vscale x 4 x i16>, <vscale x 4 x i16> } @test_vlseg3e16_v_i16m1x3_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 4 x i16>, <vscale x 4 x i16>, <vscale x 4 x i16> } @llvm.riscv.vlseg3.mask.nxv4i16.i64(<vscale x 4 x i16> poison, <vscale x 4 x i16> poison, <vscale x 4 x i16> poison, ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 4 x i16>, <vscale x 4 x i16>, <vscale x 4 x i16> } [[TMP0]]
//
vint16m1x3_t test_vlseg3e16_v_i16m1x3_m(vbool16_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 8 x i16>, <vscale x 8 x i16>, <vscale x 8 x i16> } @test_vlseg3e16_v_i16m2x3_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 8 x i16>, <vscale x 8 x i16>, <vscale x 8 x i16> } @llvm.riscv.vlseg3.mask.nxv8i16.i64(<vscale x 8 x i16> poison, <vscale x 8 x i16> poison, <vscale x 8 x i16> poison, ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 8 x i16>, <vscale x 8 x i16>, <vscale x 8 x i16> } [[TMP0]]
//
vint16m2x3_t test_vlseg3e16_v_i16m2x3_m(vbool8_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 1 x i16>, <vscale x 1 x i16>, <vscale x 1 x i16> } @test_vlseg3e16_v_u16mf4x3_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 1 x i16>, <vscale x 1 x i16>, <vscale x 1 x i16> } @llvm.riscv.vlseg3.mask.nxv1i16.i64(<vscale x 1 x i16> poison, <vscale x 1 x i16> poison, <vscale x 1 x i16> poison, ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 1 x i16>, <vscale x 1 x i16>, <vscale x 1 x i16> } [[TMP0]]
//
vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_m(vbool64_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 2 x i16>, <vscale x 2 x i16>, <vscale x 2 x i16> } @test_vlseg3e16_v_u16mf2x3_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 2 x i16>, <vscale x 2 x i16>, <vscale x 2 x i16> } @llvm.riscv.vlseg3.mask.nxv2i16.i64(<vscale x 2 x i16> poison, <vscale x 2 x i16> poison, <vscale x 2 x i16> poison, ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 2 x i16>, <vscale x 2 x i16>, <vscale x 2 x i16> } [[TMP0]]
//
vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_m(vbool32_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 4 x i16>, <vscale x 4 x i16>, <vscale x 4 x i16> } @test_vlseg3e16_v_u16m1x3_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 4 x i16>, <vscale x 4 x i16>, <vscale x 4 x i16> } @llvm.riscv.vlseg3.mask.nxv4i16.i64(<vscale x 4 x i16> poison, <vscale x 4 x i16> poison, <vscale x 4 x i16> poison, ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 4 x i16>, <vscale x 4 x i16>, <vscale x 4 x i16> } [[TMP0]]
//
vuint16m1x3_t test_vlseg3e16_v_u16m1x3_m(vbool16_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 8 x i16>, <vscale x 8 x i16>, <vscale x 8 x i16> } @test_vlseg3e16_v_u16m2x3_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 8 x i16>, <vscale x 8 x i16>, <vscale x 8 x i16> } @llvm.riscv.vlseg3.mask.nxv8i16.i64(<vscale x 8 x i16> poison, <vscale x 8 x i16> poison, <vscale x 8 x i16> poison, ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 8 x i16>, <vscale x 8 x i16>, <vscale x 8 x i16> } [[TMP0]]
//
vuint16m2x3_t test_vlseg3e16_v_u16m2x3_m(vbool8_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16(mask, base, vl);
}


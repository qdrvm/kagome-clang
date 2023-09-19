// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --version 2
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: define dso_local <vscale x 64 x i1> @test_vmsbf_m_b1
// CHECK-RV64-SAME: (<vscale x 64 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 64 x i1> @llvm.riscv.vmsbf.nxv64i1.i64(<vscale x 64 x i1> [[OP1]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 64 x i1> [[TMP0]]
//
vbool1_t test_vmsbf_m_b1(vbool1_t op1, size_t vl) {
  return __riscv_vmsbf_m_b1(op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 32 x i1> @test_vmsbf_m_b2
// CHECK-RV64-SAME: (<vscale x 32 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x i1> @llvm.riscv.vmsbf.nxv32i1.i64(<vscale x 32 x i1> [[OP1]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x i1> [[TMP0]]
//
vbool2_t test_vmsbf_m_b2(vbool2_t op1, size_t vl) {
  return __riscv_vmsbf_m_b2(op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i1> @test_vmsbf_m_b4
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i1> @llvm.riscv.vmsbf.nxv16i1.i64(<vscale x 16 x i1> [[OP1]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i1> [[TMP0]]
//
vbool4_t test_vmsbf_m_b4(vbool4_t op1, size_t vl) {
  return __riscv_vmsbf_m_b4(op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i1> @test_vmsbf_m_b8
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i1> @llvm.riscv.vmsbf.nxv8i1.i64(<vscale x 8 x i1> [[OP1]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i1> [[TMP0]]
//
vbool8_t test_vmsbf_m_b8(vbool8_t op1, size_t vl) {
  return __riscv_vmsbf_m_b8(op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i1> @test_vmsbf_m_b16
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i1> @llvm.riscv.vmsbf.nxv4i1.i64(<vscale x 4 x i1> [[OP1]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i1> [[TMP0]]
//
vbool16_t test_vmsbf_m_b16(vbool16_t op1, size_t vl) {
  return __riscv_vmsbf_m_b16(op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i1> @test_vmsbf_m_b32
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.riscv.vmsbf.nxv2i1.i64(<vscale x 2 x i1> [[OP1]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i1> [[TMP0]]
//
vbool32_t test_vmsbf_m_b32(vbool32_t op1, size_t vl) {
  return __riscv_vmsbf_m_b32(op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i1> @test_vmsbf_m_b64
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i1> @llvm.riscv.vmsbf.nxv1i1.i64(<vscale x 1 x i1> [[OP1]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i1> [[TMP0]]
//
vbool64_t test_vmsbf_m_b64(vbool64_t op1, size_t vl) {
  return __riscv_vmsbf_m_b64(op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 64 x i1> @test_vmsbf_m_b1_m
// CHECK-RV64-SAME: (<vscale x 64 x i1> [[MASK:%.*]], <vscale x 64 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 64 x i1> @llvm.riscv.vmsbf.mask.nxv64i1.i64(<vscale x 64 x i1> poison, <vscale x 64 x i1> [[OP1]], <vscale x 64 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 64 x i1> [[TMP0]]
//
vbool1_t test_vmsbf_m_b1_m(vbool1_t mask, vbool1_t op1, size_t vl) {
  return __riscv_vmsbf_m_b1_m(mask, op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 32 x i1> @test_vmsbf_m_b2_m
// CHECK-RV64-SAME: (<vscale x 32 x i1> [[MASK:%.*]], <vscale x 32 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x i1> @llvm.riscv.vmsbf.mask.nxv32i1.i64(<vscale x 32 x i1> poison, <vscale x 32 x i1> [[OP1]], <vscale x 32 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x i1> [[TMP0]]
//
vbool2_t test_vmsbf_m_b2_m(vbool2_t mask, vbool2_t op1, size_t vl) {
  return __riscv_vmsbf_m_b2_m(mask, op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 16 x i1> @test_vmsbf_m_b4_m
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], <vscale x 16 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i1> @llvm.riscv.vmsbf.mask.nxv16i1.i64(<vscale x 16 x i1> poison, <vscale x 16 x i1> [[OP1]], <vscale x 16 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i1> [[TMP0]]
//
vbool4_t test_vmsbf_m_b4_m(vbool4_t mask, vbool4_t op1, size_t vl) {
  return __riscv_vmsbf_m_b4_m(mask, op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 8 x i1> @test_vmsbf_m_b8_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], <vscale x 8 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i1> @llvm.riscv.vmsbf.mask.nxv8i1.i64(<vscale x 8 x i1> poison, <vscale x 8 x i1> [[OP1]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i1> [[TMP0]]
//
vbool8_t test_vmsbf_m_b8_m(vbool8_t mask, vbool8_t op1, size_t vl) {
  return __riscv_vmsbf_m_b8_m(mask, op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 4 x i1> @test_vmsbf_m_b16_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], <vscale x 4 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i1> @llvm.riscv.vmsbf.mask.nxv4i1.i64(<vscale x 4 x i1> poison, <vscale x 4 x i1> [[OP1]], <vscale x 4 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i1> [[TMP0]]
//
vbool16_t test_vmsbf_m_b16_m(vbool16_t mask, vbool16_t op1, size_t vl) {
  return __riscv_vmsbf_m_b16_m(mask, op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 2 x i1> @test_vmsbf_m_b32_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], <vscale x 2 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.riscv.vmsbf.mask.nxv2i1.i64(<vscale x 2 x i1> poison, <vscale x 2 x i1> [[OP1]], <vscale x 2 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i1> [[TMP0]]
//
vbool32_t test_vmsbf_m_b32_m(vbool32_t mask, vbool32_t op1, size_t vl) {
  return __riscv_vmsbf_m_b32_m(mask, op1, vl);
}

// CHECK-RV64-LABEL: define dso_local <vscale x 1 x i1> @test_vmsbf_m_b64_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], <vscale x 1 x i1> [[OP1:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i1> @llvm.riscv.vmsbf.mask.nxv1i1.i64(<vscale x 1 x i1> poison, <vscale x 1 x i1> [[OP1]], <vscale x 1 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i1> [[TMP0]]
//
vbool64_t test_vmsbf_m_b64_m(vbool64_t mask, vbool64_t op1, size_t vl) {
  return __riscv_vmsbf_m_b64_m(mask, op1, vl);
}


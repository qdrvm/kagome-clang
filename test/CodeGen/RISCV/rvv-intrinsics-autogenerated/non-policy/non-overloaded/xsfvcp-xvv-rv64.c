// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh -target-feature +xsfvcp -disable-O0-optnone -emit-llvm %s -o - | opt -S -passes=mem2reg | FileCheck --check-prefix=CHECK-RV64 %s

#include <sifive_vector.h>

#define p27_26 (0b11)

// CHECK-RV64-LABEL: @test_sf_vc_xvv_se_u64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.sf.vc.xvv.se.i64.nxv1i64.i64.i64(i64 3, <vscale x 1 x i64> [[VD:%.*]], <vscale x 1 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_sf_vc_xvv_se_u64m1(vuint64m1_t vd, vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  __riscv_sf_vc_xvv_se_u64m1(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_xvv_se_u64m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.sf.vc.xvv.se.i64.nxv2i64.i64.i64(i64 3, <vscale x 2 x i64> [[VD:%.*]], <vscale x 2 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_sf_vc_xvv_se_u64m2(vuint64m2_t vd, vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  __riscv_sf_vc_xvv_se_u64m2(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_xvv_se_u64m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.sf.vc.xvv.se.i64.nxv4i64.i64.i64(i64 3, <vscale x 4 x i64> [[VD:%.*]], <vscale x 4 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_sf_vc_xvv_se_u64m4(vuint64m4_t vd, vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  __riscv_sf_vc_xvv_se_u64m4(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_xvv_se_u64m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.sf.vc.xvv.se.i64.nxv8i64.i64.i64(i64 3, <vscale x 8 x i64> [[VD:%.*]], <vscale x 8 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_sf_vc_xvv_se_u64m8(vuint64m8_t vd, vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  __riscv_sf_vc_xvv_se_u64m8(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_v_xvv_se_u64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i64> @llvm.riscv.sf.vc.v.xvv.se.nxv1i64.i64.i64.i64(i64 3, <vscale x 1 x i64> [[VD:%.*]], <vscale x 1 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i64> [[TMP0]]
//
vuint64m1_t test_sf_vc_v_xvv_se_u64m1(vuint64m1_t vd, vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_sf_vc_v_xvv_se_u64m1(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_v_xvv_se_u64m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.riscv.sf.vc.v.xvv.se.nxv2i64.i64.i64.i64(i64 3, <vscale x 2 x i64> [[VD:%.*]], <vscale x 2 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
vuint64m2_t test_sf_vc_v_xvv_se_u64m2(vuint64m2_t vd, vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_sf_vc_v_xvv_se_u64m2(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_v_xvv_se_u64m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i64> @llvm.riscv.sf.vc.v.xvv.se.nxv4i64.i64.i64.i64(i64 3, <vscale x 4 x i64> [[VD:%.*]], <vscale x 4 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i64> [[TMP0]]
//
vuint64m4_t test_sf_vc_v_xvv_se_u64m4(vuint64m4_t vd, vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_sf_vc_v_xvv_se_u64m4(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_v_xvv_se_u64m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i64> @llvm.riscv.sf.vc.v.xvv.se.nxv8i64.i64.i64.i64(i64 3, <vscale x 8 x i64> [[VD:%.*]], <vscale x 8 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i64> [[TMP0]]
//
vuint64m8_t test_sf_vc_v_xvv_se_u64m8(vuint64m8_t vd, vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_sf_vc_v_xvv_se_u64m8(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_v_xvv_u64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i64> @llvm.riscv.sf.vc.v.xvv.nxv1i64.i64.i64.i64(i64 3, <vscale x 1 x i64> [[VD:%.*]], <vscale x 1 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i64> [[TMP0]]
//
vuint64m1_t test_sf_vc_v_xvv_u64m1(vuint64m1_t vd, vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_sf_vc_v_xvv_u64m1(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_v_xvv_u64m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.riscv.sf.vc.v.xvv.nxv2i64.i64.i64.i64(i64 3, <vscale x 2 x i64> [[VD:%.*]], <vscale x 2 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
vuint64m2_t test_sf_vc_v_xvv_u64m2(vuint64m2_t vd, vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_sf_vc_v_xvv_u64m2(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_v_xvv_u64m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i64> @llvm.riscv.sf.vc.v.xvv.nxv4i64.i64.i64.i64(i64 3, <vscale x 4 x i64> [[VD:%.*]], <vscale x 4 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i64> [[TMP0]]
//
vuint64m4_t test_sf_vc_v_xvv_u64m4(vuint64m4_t vd, vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_sf_vc_v_xvv_u64m4(p27_26, vd, vs2, rs1, vl);
}

// CHECK-RV64-LABEL: @test_sf_vc_v_xvv_u64m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i64> @llvm.riscv.sf.vc.v.xvv.nxv8i64.i64.i64.i64(i64 3, <vscale x 8 x i64> [[VD:%.*]], <vscale x 8 x i64> [[VS2:%.*]], i64 [[RS1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i64> [[TMP0]]
//
vuint64m8_t test_sf_vc_v_xvv_u64m8(vuint64m8_t vd, vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_sf_vc_v_xvv_u64m8(p27_26, vd, vs2, rs1, vl);
}

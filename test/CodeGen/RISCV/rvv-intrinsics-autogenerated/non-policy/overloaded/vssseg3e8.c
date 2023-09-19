// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --version 2
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_i8mf8x3
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } poison, <vscale x 1 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP0]], <vscale x 1 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP1]], <vscale x 1 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.nxv1i8.i64(<vscale x 1 x i8> [[TMP3]], <vscale x 1 x i8> [[TMP4]], <vscale x 1 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_i8mf8x3(int8_t *base, ptrdiff_t bstride, vint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_i8mf4x3
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } poison, <vscale x 2 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP0]], <vscale x 2 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP1]], <vscale x 2 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.nxv2i8.i64(<vscale x 2 x i8> [[TMP3]], <vscale x 2 x i8> [[TMP4]], <vscale x 2 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_i8mf4x3(int8_t *base, ptrdiff_t bstride, vint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_i8mf2x3
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } poison, <vscale x 4 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP0]], <vscale x 4 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP1]], <vscale x 4 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.nxv4i8.i64(<vscale x 4 x i8> [[TMP3]], <vscale x 4 x i8> [[TMP4]], <vscale x 4 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_i8mf2x3(int8_t *base, ptrdiff_t bstride, vint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_i8m1x3
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } poison, <vscale x 8 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP0]], <vscale x 8 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP1]], <vscale x 8 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.nxv8i8.i64(<vscale x 8 x i8> [[TMP3]], <vscale x 8 x i8> [[TMP4]], <vscale x 8 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_i8m1x3(int8_t *base, ptrdiff_t bstride, vint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_i8m2x3
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } poison, <vscale x 16 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP0]], <vscale x 16 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP1]], <vscale x 16 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.nxv16i8.i64(<vscale x 16 x i8> [[TMP3]], <vscale x 16 x i8> [[TMP4]], <vscale x 16 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_i8m2x3(int8_t *base, ptrdiff_t bstride, vint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_u8mf8x3
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } poison, <vscale x 1 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP0]], <vscale x 1 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP1]], <vscale x 1 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.nxv1i8.i64(<vscale x 1 x i8> [[TMP3]], <vscale x 1 x i8> [[TMP4]], <vscale x 1 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_u8mf8x3(uint8_t *base, ptrdiff_t bstride, vuint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_u8mf4x3
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } poison, <vscale x 2 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP0]], <vscale x 2 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP1]], <vscale x 2 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.nxv2i8.i64(<vscale x 2 x i8> [[TMP3]], <vscale x 2 x i8> [[TMP4]], <vscale x 2 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_u8mf4x3(uint8_t *base, ptrdiff_t bstride, vuint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_u8mf2x3
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } poison, <vscale x 4 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP0]], <vscale x 4 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP1]], <vscale x 4 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.nxv4i8.i64(<vscale x 4 x i8> [[TMP3]], <vscale x 4 x i8> [[TMP4]], <vscale x 4 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_u8mf2x3(uint8_t *base, ptrdiff_t bstride, vuint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_u8m1x3
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } poison, <vscale x 8 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP0]], <vscale x 8 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP1]], <vscale x 8 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.nxv8i8.i64(<vscale x 8 x i8> [[TMP3]], <vscale x 8 x i8> [[TMP4]], <vscale x 8 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_u8m1x3(uint8_t *base, ptrdiff_t bstride, vuint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_u8m2x3
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } poison, <vscale x 16 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP0]], <vscale x 16 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP1]], <vscale x 16 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.nxv16i8.i64(<vscale x 16 x i8> [[TMP3]], <vscale x 16 x i8> [[TMP4]], <vscale x 16 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_u8m2x3(uint8_t *base, ptrdiff_t bstride, vuint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_i8mf8x3_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } poison, <vscale x 1 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP0]], <vscale x 1 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP1]], <vscale x 1 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.mask.nxv1i8.i64(<vscale x 1 x i8> [[TMP3]], <vscale x 1 x i8> [[TMP4]], <vscale x 1 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_i8mf8x3_m(vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_i8mf4x3_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } poison, <vscale x 2 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP0]], <vscale x 2 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP1]], <vscale x 2 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.mask.nxv2i8.i64(<vscale x 2 x i8> [[TMP3]], <vscale x 2 x i8> [[TMP4]], <vscale x 2 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_i8mf4x3_m(vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_i8mf2x3_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } poison, <vscale x 4 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP0]], <vscale x 4 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP1]], <vscale x 4 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.mask.nxv4i8.i64(<vscale x 4 x i8> [[TMP3]], <vscale x 4 x i8> [[TMP4]], <vscale x 4 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_i8mf2x3_m(vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_i8m1x3_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } poison, <vscale x 8 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP0]], <vscale x 8 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP1]], <vscale x 8 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.mask.nxv8i8.i64(<vscale x 8 x i8> [[TMP3]], <vscale x 8 x i8> [[TMP4]], <vscale x 8 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_i8m1x3_m(vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_i8m2x3_m
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } poison, <vscale x 16 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP0]], <vscale x 16 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP1]], <vscale x 16 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.mask.nxv16i8.i64(<vscale x 16 x i8> [[TMP3]], <vscale x 16 x i8> [[TMP4]], <vscale x 16 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_i8m2x3_m(vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_u8mf8x3_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 1 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } poison, <vscale x 1 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP0]], <vscale x 1 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP1]], <vscale x 1 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 1 x i8>, <vscale x 1 x i8>, <vscale x 1 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.mask.nxv1i8.i64(<vscale x 1 x i8> [[TMP3]], <vscale x 1 x i8> [[TMP4]], <vscale x 1 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_u8mf8x3_m(vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_u8mf4x3_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 2 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } poison, <vscale x 2 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP0]], <vscale x 2 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP1]], <vscale x 2 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 2 x i8>, <vscale x 2 x i8>, <vscale x 2 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.mask.nxv2i8.i64(<vscale x 2 x i8> [[TMP3]], <vscale x 2 x i8> [[TMP4]], <vscale x 2 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_u8mf4x3_m(vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_u8mf2x3_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 4 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } poison, <vscale x 4 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP0]], <vscale x 4 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP1]], <vscale x 4 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 4 x i8>, <vscale x 4 x i8>, <vscale x 4 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.mask.nxv4i8.i64(<vscale x 4 x i8> [[TMP3]], <vscale x 4 x i8> [[TMP4]], <vscale x 4 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_u8mf2x3_m(vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_u8m1x3_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 8 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } poison, <vscale x 8 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP0]], <vscale x 8 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP1]], <vscale x 8 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 8 x i8>, <vscale x 8 x i8>, <vscale x 8 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.mask.nxv8i8.i64(<vscale x 8 x i8> [[TMP3]], <vscale x 8 x i8> [[TMP4]], <vscale x 8 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_u8m1x3_m(vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg3e8_v_u8m2x3_m
// CHECK-RV64-SAME: (<vscale x 16 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE0:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE1:%.*]], <vscale x 16 x i8> [[V_TUPLE_COERCE2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } poison, <vscale x 16 x i8> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP0]], <vscale x 16 x i8> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP1]], <vscale x 16 x i8> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 0
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 1
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 16 x i8>, <vscale x 16 x i8>, <vscale x 16 x i8> } [[TMP2]], 2
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg3.mask.nxv16i8.i64(<vscale x 16 x i8> [[TMP3]], <vscale x 16 x i8> [[TMP4]], <vscale x 16 x i8> [[TMP5]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 16 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg3e8_v_u8m2x3_m(vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}


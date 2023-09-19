// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -triple thumbv8.1m.main-none-none-eabi -target-feature +mve.fp -mfloat-abi hard -O0 -disable-O0-optnone -S -emit-llvm -o - %s | opt -S -passes=mem2reg,sroa | FileCheck %s
// RUN: %clang_cc1 -triple thumbv8.1m.main-none-none-eabi -target-feature +mve.fp -mfloat-abi hard -O0 -disable-O0-optnone -DPOLYMORPHIC -S -emit-llvm -o - %s | opt -S -passes=mem2reg,sroa | FileCheck %s

// REQUIRES: aarch64-registered-target || arm-registered-target

#include <arm_mve.h>

// CHECK-LABEL: @test_vabavq_s8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call i32 @llvm.arm.mve.vabav.v16i8(i32 0, i32 [[A:%.*]], <16 x i8> [[B:%.*]], <16 x i8> [[C:%.*]])
// CHECK-NEXT:    ret i32 [[TMP0]]
//
uint32_t test_vabavq_s8(uint32_t a, int8x16_t b, int8x16_t c) {
#ifdef POLYMORPHIC
  return vabavq(a, b, c);
#else
  return vabavq_s8(a, b, c);
#endif
}

// CHECK-LABEL: @test_vabavq_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call i32 @llvm.arm.mve.vabav.v8i16(i32 0, i32 [[A:%.*]], <8 x i16> [[B:%.*]], <8 x i16> [[C:%.*]])
// CHECK-NEXT:    ret i32 [[TMP0]]
//
uint32_t test_vabavq_s16(uint32_t a, int16x8_t b, int16x8_t c) {
#ifdef POLYMORPHIC
  return vabavq(a, b, c);
#else
  return vabavq_s16(a, b, c);
#endif
}

// CHECK-LABEL: @test_vabavq_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call i32 @llvm.arm.mve.vabav.v4i32(i32 0, i32 [[A:%.*]], <4 x i32> [[B:%.*]], <4 x i32> [[C:%.*]])
// CHECK-NEXT:    ret i32 [[TMP0]]
//
uint32_t test_vabavq_s32(uint32_t a, int32x4_t b, int32x4_t c) {
#ifdef POLYMORPHIC
  return vabavq(a, b, c);
#else
  return vabavq_s32(a, b, c);
#endif
}

// CHECK-LABEL: @test_vabavq_u8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call i32 @llvm.arm.mve.vabav.v16i8(i32 1, i32 [[A:%.*]], <16 x i8> [[B:%.*]], <16 x i8> [[C:%.*]])
// CHECK-NEXT:    ret i32 [[TMP0]]
//
uint32_t test_vabavq_u8(uint32_t a, uint8x16_t b, uint8x16_t c) {
#ifdef POLYMORPHIC
  return vabavq(a, b, c);
#else
  return vabavq_u8(a, b, c);
#endif
}

// CHECK-LABEL: @test_vabavq_u16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call i32 @llvm.arm.mve.vabav.v8i16(i32 1, i32 [[A:%.*]], <8 x i16> [[B:%.*]], <8 x i16> [[C:%.*]])
// CHECK-NEXT:    ret i32 [[TMP0]]
//
uint32_t test_vabavq_u16(uint32_t a, uint16x8_t b, uint16x8_t c) {
#ifdef POLYMORPHIC
  return vabavq(a, b, c);
#else
  return vabavq_u16(a, b, c);
#endif
}

// CHECK-LABEL: @test_vabavq_u32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call i32 @llvm.arm.mve.vabav.v4i32(i32 1, i32 [[A:%.*]], <4 x i32> [[B:%.*]], <4 x i32> [[C:%.*]])
// CHECK-NEXT:    ret i32 [[TMP0]]
//
uint32_t test_vabavq_u32(uint32_t a, uint32x4_t b, uint32x4_t c) {
#ifdef POLYMORPHIC
  return vabavq(a, b, c);
#else
  return vabavq_u32(a, b, c);
#endif
}

// CHECK-LABEL: @test_vabavq_p_s8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = zext i16 [[P:%.*]] to i32
// CHECK-NEXT:    [[TMP1:%.*]] = call <16 x i1> @llvm.arm.mve.pred.i2v.v16i1(i32 [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = call i32 @llvm.arm.mve.vabav.predicated.v16i8.v16i1(i32 0, i32 [[A:%.*]], <16 x i8> [[B:%.*]], <16 x i8> [[C:%.*]], <16 x i1> [[TMP1]])
// CHECK-NEXT:    ret i32 [[TMP2]]
//
uint32_t test_vabavq_p_s8(uint32_t a, int8x16_t b, int8x16_t c, mve_pred16_t p) {
#ifdef POLYMORPHIC
  return vabavq_p(a, b, c, p);
#else
  return vabavq_p_s8(a, b, c, p);
#endif
}

// CHECK-LABEL: @test_vabavq_p_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = zext i16 [[P:%.*]] to i32
// CHECK-NEXT:    [[TMP1:%.*]] = call <8 x i1> @llvm.arm.mve.pred.i2v.v8i1(i32 [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = call i32 @llvm.arm.mve.vabav.predicated.v8i16.v8i1(i32 0, i32 [[A:%.*]], <8 x i16> [[B:%.*]], <8 x i16> [[C:%.*]], <8 x i1> [[TMP1]])
// CHECK-NEXT:    ret i32 [[TMP2]]
//
uint32_t test_vabavq_p_s16(uint32_t a, int16x8_t b, int16x8_t c, mve_pred16_t p) {
#ifdef POLYMORPHIC
  return vabavq_p(a, b, c, p);
#else
  return vabavq_p_s16(a, b, c, p);
#endif
}

// CHECK-LABEL: @test_vabavq_p_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = zext i16 [[P:%.*]] to i32
// CHECK-NEXT:    [[TMP1:%.*]] = call <4 x i1> @llvm.arm.mve.pred.i2v.v4i1(i32 [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = call i32 @llvm.arm.mve.vabav.predicated.v4i32.v4i1(i32 0, i32 [[A:%.*]], <4 x i32> [[B:%.*]], <4 x i32> [[C:%.*]], <4 x i1> [[TMP1]])
// CHECK-NEXT:    ret i32 [[TMP2]]
//
uint32_t test_vabavq_p_s32(uint32_t a, int32x4_t b, int32x4_t c, mve_pred16_t p) {
#ifdef POLYMORPHIC
  return vabavq_p(a, b, c, p);
#else
  return vabavq_p_s32(a, b, c, p);
#endif
}

// CHECK-LABEL: @test_vabavq_p_u8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = zext i16 [[P:%.*]] to i32
// CHECK-NEXT:    [[TMP1:%.*]] = call <16 x i1> @llvm.arm.mve.pred.i2v.v16i1(i32 [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = call i32 @llvm.arm.mve.vabav.predicated.v16i8.v16i1(i32 1, i32 [[A:%.*]], <16 x i8> [[B:%.*]], <16 x i8> [[C:%.*]], <16 x i1> [[TMP1]])
// CHECK-NEXT:    ret i32 [[TMP2]]
//
uint32_t test_vabavq_p_u8(uint32_t a, uint8x16_t b, uint8x16_t c, mve_pred16_t p) {
#ifdef POLYMORPHIC
  return vabavq_p(a, b, c, p);
#else
  return vabavq_p_u8(a, b, c, p);
#endif
}

// CHECK-LABEL: @test_vabavq_p_u16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = zext i16 [[P:%.*]] to i32
// CHECK-NEXT:    [[TMP1:%.*]] = call <8 x i1> @llvm.arm.mve.pred.i2v.v8i1(i32 [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = call i32 @llvm.arm.mve.vabav.predicated.v8i16.v8i1(i32 1, i32 [[A:%.*]], <8 x i16> [[B:%.*]], <8 x i16> [[C:%.*]], <8 x i1> [[TMP1]])
// CHECK-NEXT:    ret i32 [[TMP2]]
//
uint32_t test_vabavq_p_u16(uint32_t a, uint16x8_t b, uint16x8_t c, mve_pred16_t p) {
#ifdef POLYMORPHIC
  return vabavq_p(a, b, c, p);
#else
  return vabavq_p_u16(a, b, c, p);
#endif
}

// CHECK-LABEL: @test_vabavq_p_u32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = zext i16 [[P:%.*]] to i32
// CHECK-NEXT:    [[TMP1:%.*]] = call <4 x i1> @llvm.arm.mve.pred.i2v.v4i1(i32 [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = call i32 @llvm.arm.mve.vabav.predicated.v4i32.v4i1(i32 1, i32 [[A:%.*]], <4 x i32> [[B:%.*]], <4 x i32> [[C:%.*]], <4 x i1> [[TMP1]])
// CHECK-NEXT:    ret i32 [[TMP2]]
//
uint32_t test_vabavq_p_u32(uint32_t a, uint32x4_t b, uint32x4_t c, mve_pred16_t p) {
#ifdef POLYMORPHIC
  return vabavq_p(a, b, c, p);
#else
  return vabavq_p_u32(a, b, c, p);
#endif
}

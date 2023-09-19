// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: aarch64-registered-target
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +neon -target-feature +sve -target-feature +bf16 -S -O1 -Werror -Wall -emit-llvm -o - %s | FileCheck %s
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +neon -target-feature +sve -target-feature +bf16 -S -O1 -Werror -Wall -emit-llvm -o - -x c++ %s | FileCheck %s -check-prefix=CPP-CHECK
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +neon -target-feature +sve -target-feature +bf16 -S -O1 -Werror -Wall -o /dev/null %s
// RUN: %clang_cc1 -DSVE_OVERLOADED_FORMS -triple aarch64-none-linux-gnu -target-feature +neon -target-feature +sve -target-feature +bf16 -S -O1 -Werror -Wall -emit-llvm -o - %s | FileCheck %s
// RUN: %clang_cc1 -DSVE_OVERLOADED_FORMS -triple aarch64-none-linux-gnu -target-feature +neon -target-feature +sve -target-feature +bf16 -S -O1 -Werror -Wall -emit-llvm -o - -x c++ %s | FileCheck %s -check-prefix=CPP-CHECK
#include <arm_neon_sve_bridge.h>

#ifdef SVE_OVERLOADED_FORMS
// A simple used,unused... macro, long enough to represent any SVE builtin.
#define SVE_ACLE_FUNC(A1, A2_UNUSED, A3, A4_UNUSED) A1##A3
#else
#define SVE_ACLE_FUNC(A1, A2, A3, A4) A1##A2##A3##A4
#endif

// CHECK-LABEL: @test_svset_neonq_s8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 16 x i8> @llvm.vector.insert.nxv16i8.v16i8(<vscale x 16 x i8> [[S:%.*]], <16 x i8> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z19test_svset_neonq_s8u10__SVInt8_t11__Int8x16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 16 x i8> @llvm.vector.insert.nxv16i8.v16i8(<vscale x 16 x i8> [[S:%.*]], <16 x i8> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
svint8_t test_svset_neonq_s8(svint8_t s, int8x16_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _s8, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 8 x i16> @llvm.vector.insert.nxv8i16.v8i16(<vscale x 8 x i16> [[S:%.*]], <8 x i16> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z20test_svset_neonq_s16u11__SVInt16_t11__Int16x8_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 8 x i16> @llvm.vector.insert.nxv8i16.v8i16(<vscale x 8 x i16> [[S:%.*]], <8 x i16> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
svint16_t test_svset_neonq_s16(svint16_t s, int16x8_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _s16, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 4 x i32> @llvm.vector.insert.nxv4i32.v4i32(<vscale x 4 x i32> [[S:%.*]], <4 x i32> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z20test_svset_neonq_s32u11__SVInt32_t11__Int32x4_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 4 x i32> @llvm.vector.insert.nxv4i32.v4i32(<vscale x 4 x i32> [[S:%.*]], <4 x i32> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
svint32_t test_svset_neonq_s32(svint32_t s, int32x4_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _s32, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_s64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 2 x i64> @llvm.vector.insert.nxv2i64.v2i64(<vscale x 2 x i64> [[S:%.*]], <2 x i64> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z20test_svset_neonq_s64u11__SVInt64_t11__Int64x2_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 2 x i64> @llvm.vector.insert.nxv2i64.v2i64(<vscale x 2 x i64> [[S:%.*]], <2 x i64> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
svint64_t test_svset_neonq_s64(svint64_t s, int64x2_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _s64, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_u8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 16 x i8> @llvm.vector.insert.nxv16i8.v16i8(<vscale x 16 x i8> [[S:%.*]], <16 x i8> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z19test_svset_neonq_u8u11__SVUint8_t12__Uint8x16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 16 x i8> @llvm.vector.insert.nxv16i8.v16i8(<vscale x 16 x i8> [[S:%.*]], <16 x i8> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
svuint8_t test_svset_neonq_u8(svuint8_t s, uint8x16_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _u8, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_u16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 8 x i16> @llvm.vector.insert.nxv8i16.v8i16(<vscale x 8 x i16> [[S:%.*]], <8 x i16> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z20test_svset_neonq_u16u12__SVUint16_t12__Uint16x8_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 8 x i16> @llvm.vector.insert.nxv8i16.v8i16(<vscale x 8 x i16> [[S:%.*]], <8 x i16> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
svuint16_t test_svset_neonq_u16(svuint16_t s, uint16x8_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _u16, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_u32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 4 x i32> @llvm.vector.insert.nxv4i32.v4i32(<vscale x 4 x i32> [[S:%.*]], <4 x i32> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z20test_svset_neonq_u32u12__SVUint32_t12__Uint32x4_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 4 x i32> @llvm.vector.insert.nxv4i32.v4i32(<vscale x 4 x i32> [[S:%.*]], <4 x i32> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
svuint32_t test_svset_neonq_u32(svuint32_t s, uint32x4_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _u32, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_u64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 2 x i64> @llvm.vector.insert.nxv2i64.v2i64(<vscale x 2 x i64> [[S:%.*]], <2 x i64> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z20test_svset_neonq_u64u12__SVUint64_t12__Uint64x2_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 2 x i64> @llvm.vector.insert.nxv2i64.v2i64(<vscale x 2 x i64> [[S:%.*]], <2 x i64> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
svuint64_t test_svset_neonq_u64(svuint64_t s, uint64x2_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _u64, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_f16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 8 x half> @llvm.vector.insert.nxv8f16.v8f16(<vscale x 8 x half> [[S:%.*]], <8 x half> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z20test_svset_neonq_f16u13__SVFloat16_t13__Float16x8_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 8 x half> @llvm.vector.insert.nxv8f16.v8f16(<vscale x 8 x half> [[S:%.*]], <8 x half> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
svfloat16_t test_svset_neonq_f16(svfloat16_t s, float16x8_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _f16, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_f32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 4 x float> @llvm.vector.insert.nxv4f32.v4f32(<vscale x 4 x float> [[S:%.*]], <4 x float> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z20test_svset_neonq_f32u13__SVFloat32_t13__Float32x4_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 4 x float> @llvm.vector.insert.nxv4f32.v4f32(<vscale x 4 x float> [[S:%.*]], <4 x float> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
svfloat32_t test_svset_neonq_f32(svfloat32_t s, float32x4_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _f32, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_f64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 2 x double> @llvm.vector.insert.nxv2f64.v2f64(<vscale x 2 x double> [[S:%.*]], <2 x double> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z20test_svset_neonq_f64u13__SVFloat64_t13__Float64x2_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 2 x double> @llvm.vector.insert.nxv2f64.v2f64(<vscale x 2 x double> [[S:%.*]], <2 x double> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
svfloat64_t test_svset_neonq_f64(svfloat64_t s, float64x2_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _f64, , )(s, n);
}

// CHECK-LABEL: @test_svset_neonq_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 8 x bfloat> @llvm.vector.insert.nxv8bf16.v8bf16(<vscale x 8 x bfloat> [[S:%.*]], <8 x bfloat> [[N:%.*]], i64 0)
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z21test_svset_neonq_bf16u14__SVBFloat16_t14__Bfloat16x8_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 8 x bfloat> @llvm.vector.insert.nxv8bf16.v8bf16(<vscale x 8 x bfloat> [[S:%.*]], <8 x bfloat> [[N:%.*]], i64 0)
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svset_neonq_bf16(svbfloat16_t s, bfloat16x8_t n) {
  return SVE_ACLE_FUNC(svset_neonq, _bf16, , )(s, n);
}

// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -triple aarch64-linux-gnu -target-feature +neon \
// RUN:  -target-feature +v8.1a -S -emit-llvm -disable-O0-optnone -o - %s | opt -passes=mem2reg,dce -S | FileCheck %s

// REQUIRES: aarch64-registered-target

 #include <arm_neon.h>

// CHECK-LABEL: @test_vqrdmlah_laneq_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <8 x i16> [[V:%.*]] to <16 x i8>
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast <16 x i8> [[TMP0]] to <8 x i16>
// CHECK-NEXT:    [[LANE:%.*]] = shufflevector <8 x i16> [[TMP1]], <8 x i16> [[TMP1]], <4 x i32> <i32 7, i32 7, i32 7, i32 7>
// CHECK-NEXT:    [[VQRDMLAH_V3_I:%.*]] = call <4 x i16> @llvm.aarch64.neon.sqrdmlah.v4i16(<4 x i16> [[A:%.*]], <4 x i16> [[B:%.*]], <4 x i16> [[LANE]])
// CHECK-NEXT:    ret <4 x i16> [[VQRDMLAH_V3_I]]
//
int16x4_t test_vqrdmlah_laneq_s16(int16x4_t a, int16x4_t b, int16x8_t v) {
  return vqrdmlah_laneq_s16(a, b, v, 7);
}

// CHECK-LABEL: @test_vqrdmlah_laneq_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <4 x i32> [[V:%.*]] to <16 x i8>
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast <16 x i8> [[TMP0]] to <4 x i32>
// CHECK-NEXT:    [[LANE:%.*]] = shufflevector <4 x i32> [[TMP1]], <4 x i32> [[TMP1]], <2 x i32> <i32 3, i32 3>
// CHECK-NEXT:    [[VQRDMLAH_V3_I:%.*]] = call <2 x i32> @llvm.aarch64.neon.sqrdmlah.v2i32(<2 x i32> [[A:%.*]], <2 x i32> [[B:%.*]], <2 x i32> [[LANE]])
// CHECK-NEXT:    ret <2 x i32> [[VQRDMLAH_V3_I]]
//
int32x2_t test_vqrdmlah_laneq_s32(int32x2_t a, int32x2_t b, int32x4_t v) {
  return vqrdmlah_laneq_s32(a, b, v, 3);
}

// CHECK-LABEL: @test_vqrdmlahq_laneq_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <8 x i16> [[V:%.*]] to <16 x i8>
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast <16 x i8> [[TMP0]] to <8 x i16>
// CHECK-NEXT:    [[LANE:%.*]] = shufflevector <8 x i16> [[TMP1]], <8 x i16> [[TMP1]], <8 x i32> <i32 7, i32 7, i32 7, i32 7, i32 7, i32 7, i32 7, i32 7>
// CHECK-NEXT:    [[VQRDMLAHQ_V3_I:%.*]] = call <8 x i16> @llvm.aarch64.neon.sqrdmlah.v8i16(<8 x i16> [[A:%.*]], <8 x i16> [[B:%.*]], <8 x i16> [[LANE]])
// CHECK-NEXT:    ret <8 x i16> [[VQRDMLAHQ_V3_I]]
//
int16x8_t test_vqrdmlahq_laneq_s16(int16x8_t a, int16x8_t b, int16x8_t v) {
  return vqrdmlahq_laneq_s16(a, b, v, 7);
}

// CHECK-LABEL: @test_vqrdmlahq_laneq_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <4 x i32> [[V:%.*]] to <16 x i8>
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast <16 x i8> [[TMP0]] to <4 x i32>
// CHECK-NEXT:    [[LANE:%.*]] = shufflevector <4 x i32> [[TMP1]], <4 x i32> [[TMP1]], <4 x i32> <i32 3, i32 3, i32 3, i32 3>
// CHECK-NEXT:    [[VQRDMLAHQ_V3_I:%.*]] = call <4 x i32> @llvm.aarch64.neon.sqrdmlah.v4i32(<4 x i32> [[A:%.*]], <4 x i32> [[B:%.*]], <4 x i32> [[LANE]])
// CHECK-NEXT:    ret <4 x i32> [[VQRDMLAHQ_V3_I]]
//
int32x4_t test_vqrdmlahq_laneq_s32(int32x4_t a, int32x4_t b, int32x4_t v) {
  return vqrdmlahq_laneq_s32(a, b, v, 3);
}

// CHECK-LABEL: @test_vqrdmlahh_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <4 x i16> poison, i16 [[A:%.*]], i64 0
// CHECK-NEXT:    [[TMP1:%.*]] = insertelement <4 x i16> poison, i16 [[B:%.*]], i64 0
// CHECK-NEXT:    [[TMP2:%.*]] = insertelement <4 x i16> poison, i16 [[C:%.*]], i64 0
// CHECK-NEXT:    [[VQRDMLAHH_S16_I:%.*]] = call <4 x i16> @llvm.aarch64.neon.sqrdmlah.v4i16(<4 x i16> [[TMP0]], <4 x i16> [[TMP1]], <4 x i16> [[TMP2]])
// CHECK-NEXT:    [[TMP3:%.*]] = extractelement <4 x i16> [[VQRDMLAHH_S16_I]], i64 0
// CHECK-NEXT:    ret i16 [[TMP3]]
//
int16_t test_vqrdmlahh_s16(int16_t a, int16_t b, int16_t c) {
  return vqrdmlahh_s16(a, b, c);
}

// CHECK-LABEL: @test_vqrdmlahs_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[VQRDMLAHS_S32_I:%.*]] = call i32 @llvm.aarch64.neon.sqrdmlah.i32(i32 [[A:%.*]], i32 [[B:%.*]], i32 [[C:%.*]])
// CHECK-NEXT:    ret i32 [[VQRDMLAHS_S32_I]]
//
int32_t test_vqrdmlahs_s32(int32_t a, int32_t b, int32_t c) {
  return vqrdmlahs_s32(a, b, c);
}

// CHECK-LABEL: @test_vqrdmlahh_lane_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[VGET_LANE:%.*]] = extractelement <4 x i16> [[C:%.*]], i32 3
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <4 x i16> poison, i16 [[A:%.*]], i64 0
// CHECK-NEXT:    [[TMP1:%.*]] = insertelement <4 x i16> poison, i16 [[B:%.*]], i64 0
// CHECK-NEXT:    [[TMP2:%.*]] = insertelement <4 x i16> poison, i16 [[VGET_LANE]], i64 0
// CHECK-NEXT:    [[VQRDMLAHH_S16_I:%.*]] = call <4 x i16> @llvm.aarch64.neon.sqrdmlah.v4i16(<4 x i16> [[TMP0]], <4 x i16> [[TMP1]], <4 x i16> [[TMP2]])
// CHECK-NEXT:    [[TMP3:%.*]] = extractelement <4 x i16> [[VQRDMLAHH_S16_I]], i64 0
// CHECK-NEXT:    ret i16 [[TMP3]]
//
int16_t test_vqrdmlahh_lane_s16(int16_t a, int16_t b, int16x4_t c) {
  return vqrdmlahh_lane_s16(a, b, c, 3);
}

// CHECK-LABEL: @test_vqrdmlahs_lane_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[VGET_LANE:%.*]] = extractelement <2 x i32> [[C:%.*]], i32 1
// CHECK-NEXT:    [[VQRDMLAHS_S32_I:%.*]] = call i32 @llvm.aarch64.neon.sqrdmlah.i32(i32 [[A:%.*]], i32 [[B:%.*]], i32 [[VGET_LANE]])
// CHECK-NEXT:    ret i32 [[VQRDMLAHS_S32_I]]
//
int32_t test_vqrdmlahs_lane_s32(int32_t a, int32_t b, int32x2_t c) {
  return vqrdmlahs_lane_s32(a, b, c, 1);
}

// CHECK-LABEL: @test_vqrdmlahh_laneq_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[VGETQ_LANE:%.*]] = extractelement <8 x i16> [[C:%.*]], i32 7
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <4 x i16> poison, i16 [[A:%.*]], i64 0
// CHECK-NEXT:    [[TMP1:%.*]] = insertelement <4 x i16> poison, i16 [[B:%.*]], i64 0
// CHECK-NEXT:    [[TMP2:%.*]] = insertelement <4 x i16> poison, i16 [[VGETQ_LANE]], i64 0
// CHECK-NEXT:    [[VQRDMLAHH_S16_I:%.*]] = call <4 x i16> @llvm.aarch64.neon.sqrdmlah.v4i16(<4 x i16> [[TMP0]], <4 x i16> [[TMP1]], <4 x i16> [[TMP2]])
// CHECK-NEXT:    [[TMP3:%.*]] = extractelement <4 x i16> [[VQRDMLAHH_S16_I]], i64 0
// CHECK-NEXT:    ret i16 [[TMP3]]
//
int16_t test_vqrdmlahh_laneq_s16(int16_t a, int16_t b, int16x8_t c) {
  return vqrdmlahh_laneq_s16(a, b, c, 7);
}

// CHECK-LABEL: @test_vqrdmlahs_laneq_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[VGETQ_LANE:%.*]] = extractelement <4 x i32> [[C:%.*]], i32 3
// CHECK-NEXT:    [[VQRDMLAHS_S32_I:%.*]] = call i32 @llvm.aarch64.neon.sqrdmlah.i32(i32 [[A:%.*]], i32 [[B:%.*]], i32 [[VGETQ_LANE]])
// CHECK-NEXT:    ret i32 [[VQRDMLAHS_S32_I]]
//
int32_t test_vqrdmlahs_laneq_s32(int32_t a, int32_t b, int32x4_t c) {
  return vqrdmlahs_laneq_s32(a, b, c, 3);
}

// CHECK-LABEL: @test_vqrdmlsh_laneq_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <8 x i16> [[V:%.*]] to <16 x i8>
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast <16 x i8> [[TMP0]] to <8 x i16>
// CHECK-NEXT:    [[LANE:%.*]] = shufflevector <8 x i16> [[TMP1]], <8 x i16> [[TMP1]], <4 x i32> <i32 7, i32 7, i32 7, i32 7>
// CHECK-NEXT:    [[VQRDMLSH_V3_I:%.*]] = call <4 x i16> @llvm.aarch64.neon.sqrdmlsh.v4i16(<4 x i16> [[A:%.*]], <4 x i16> [[B:%.*]], <4 x i16> [[LANE]])
// CHECK-NEXT:    ret <4 x i16> [[VQRDMLSH_V3_I]]
//
int16x4_t test_vqrdmlsh_laneq_s16(int16x4_t a, int16x4_t b, int16x8_t v) {
  return vqrdmlsh_laneq_s16(a, b, v, 7);
}

// CHECK-LABEL: @test_vqrdmlsh_laneq_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <4 x i32> [[V:%.*]] to <16 x i8>
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast <16 x i8> [[TMP0]] to <4 x i32>
// CHECK-NEXT:    [[LANE:%.*]] = shufflevector <4 x i32> [[TMP1]], <4 x i32> [[TMP1]], <2 x i32> <i32 3, i32 3>
// CHECK-NEXT:    [[VQRDMLSH_V3_I:%.*]] = call <2 x i32> @llvm.aarch64.neon.sqrdmlsh.v2i32(<2 x i32> [[A:%.*]], <2 x i32> [[B:%.*]], <2 x i32> [[LANE]])
// CHECK-NEXT:    ret <2 x i32> [[VQRDMLSH_V3_I]]
//
int32x2_t test_vqrdmlsh_laneq_s32(int32x2_t a, int32x2_t b, int32x4_t v) {
  return vqrdmlsh_laneq_s32(a, b, v, 3);
}

// CHECK-LABEL: @test_vqrdmlshq_laneq_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <8 x i16> [[V:%.*]] to <16 x i8>
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast <16 x i8> [[TMP0]] to <8 x i16>
// CHECK-NEXT:    [[LANE:%.*]] = shufflevector <8 x i16> [[TMP1]], <8 x i16> [[TMP1]], <8 x i32> <i32 7, i32 7, i32 7, i32 7, i32 7, i32 7, i32 7, i32 7>
// CHECK-NEXT:    [[VQRDMLSHQ_V3_I:%.*]] = call <8 x i16> @llvm.aarch64.neon.sqrdmlsh.v8i16(<8 x i16> [[A:%.*]], <8 x i16> [[B:%.*]], <8 x i16> [[LANE]])
// CHECK-NEXT:    ret <8 x i16> [[VQRDMLSHQ_V3_I]]
//
int16x8_t test_vqrdmlshq_laneq_s16(int16x8_t a, int16x8_t b, int16x8_t v) {
  return vqrdmlshq_laneq_s16(a, b, v, 7);
}

// CHECK-LABEL: @test_vqrdmlshq_laneq_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <4 x i32> [[V:%.*]] to <16 x i8>
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast <16 x i8> [[TMP0]] to <4 x i32>
// CHECK-NEXT:    [[LANE:%.*]] = shufflevector <4 x i32> [[TMP1]], <4 x i32> [[TMP1]], <4 x i32> <i32 3, i32 3, i32 3, i32 3>
// CHECK-NEXT:    [[VQRDMLSHQ_V3_I:%.*]] = call <4 x i32> @llvm.aarch64.neon.sqrdmlsh.v4i32(<4 x i32> [[A:%.*]], <4 x i32> [[B:%.*]], <4 x i32> [[LANE]])
// CHECK-NEXT:    ret <4 x i32> [[VQRDMLSHQ_V3_I]]
//
int32x4_t test_vqrdmlshq_laneq_s32(int32x4_t a, int32x4_t b, int32x4_t v) {
  return vqrdmlshq_laneq_s32(a, b, v, 3);
}

// CHECK-LABEL: @test_vqrdmlshh_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <4 x i16> poison, i16 [[A:%.*]], i64 0
// CHECK-NEXT:    [[TMP1:%.*]] = insertelement <4 x i16> poison, i16 [[B:%.*]], i64 0
// CHECK-NEXT:    [[TMP2:%.*]] = insertelement <4 x i16> poison, i16 [[C:%.*]], i64 0
// CHECK-NEXT:    [[VQRDMLSHH_S16_I:%.*]] = call <4 x i16> @llvm.aarch64.neon.sqrdmlsh.v4i16(<4 x i16> [[TMP0]], <4 x i16> [[TMP1]], <4 x i16> [[TMP2]])
// CHECK-NEXT:    [[TMP3:%.*]] = extractelement <4 x i16> [[VQRDMLSHH_S16_I]], i64 0
// CHECK-NEXT:    ret i16 [[TMP3]]
//
int16_t test_vqrdmlshh_s16(int16_t a, int16_t b, int16_t c) {
  return vqrdmlshh_s16(a, b, c);
}

// CHECK-LABEL: @test_vqrdmlshs_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[VQRDMLSHS_S32_I:%.*]] = call i32 @llvm.aarch64.neon.sqrdmlsh.i32(i32 [[A:%.*]], i32 [[B:%.*]], i32 [[C:%.*]])
// CHECK-NEXT:    ret i32 [[VQRDMLSHS_S32_I]]
//
int32_t test_vqrdmlshs_s32(int32_t a, int32_t b, int32_t c) {
  return vqrdmlshs_s32(a, b, c);
}

// CHECK-LABEL: @test_vqrdmlshh_lane_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[VGET_LANE:%.*]] = extractelement <4 x i16> [[C:%.*]], i32 3
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <4 x i16> poison, i16 [[A:%.*]], i64 0
// CHECK-NEXT:    [[TMP1:%.*]] = insertelement <4 x i16> poison, i16 [[B:%.*]], i64 0
// CHECK-NEXT:    [[TMP2:%.*]] = insertelement <4 x i16> poison, i16 [[VGET_LANE]], i64 0
// CHECK-NEXT:    [[VQRDMLSHH_S16_I:%.*]] = call <4 x i16> @llvm.aarch64.neon.sqrdmlsh.v4i16(<4 x i16> [[TMP0]], <4 x i16> [[TMP1]], <4 x i16> [[TMP2]])
// CHECK-NEXT:    [[TMP3:%.*]] = extractelement <4 x i16> [[VQRDMLSHH_S16_I]], i64 0
// CHECK-NEXT:    ret i16 [[TMP3]]
//
int16_t test_vqrdmlshh_lane_s16(int16_t a, int16_t b, int16x4_t c) {
  return vqrdmlshh_lane_s16(a, b, c, 3);
}

// CHECK-LABEL: @test_vqrdmlshs_lane_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[VGET_LANE:%.*]] = extractelement <2 x i32> [[C:%.*]], i32 1
// CHECK-NEXT:    [[VQRDMLSHS_S32_I:%.*]] = call i32 @llvm.aarch64.neon.sqrdmlsh.i32(i32 [[A:%.*]], i32 [[B:%.*]], i32 [[VGET_LANE]])
// CHECK-NEXT:    ret i32 [[VQRDMLSHS_S32_I]]
//
int32_t test_vqrdmlshs_lane_s32(int32_t a, int32_t b, int32x2_t c) {
  return vqrdmlshs_lane_s32(a, b, c, 1);
}

// CHECK-LABEL: @test_vqrdmlshh_laneq_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[VGETQ_LANE:%.*]] = extractelement <8 x i16> [[C:%.*]], i32 7
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <4 x i16> poison, i16 [[A:%.*]], i64 0
// CHECK-NEXT:    [[TMP1:%.*]] = insertelement <4 x i16> poison, i16 [[B:%.*]], i64 0
// CHECK-NEXT:    [[TMP2:%.*]] = insertelement <4 x i16> poison, i16 [[VGETQ_LANE]], i64 0
// CHECK-NEXT:    [[VQRDMLSHH_S16_I:%.*]] = call <4 x i16> @llvm.aarch64.neon.sqrdmlsh.v4i16(<4 x i16> [[TMP0]], <4 x i16> [[TMP1]], <4 x i16> [[TMP2]])
// CHECK-NEXT:    [[TMP3:%.*]] = extractelement <4 x i16> [[VQRDMLSHH_S16_I]], i64 0
// CHECK-NEXT:    ret i16 [[TMP3]]
//
int16_t test_vqrdmlshh_laneq_s16(int16_t a, int16_t b, int16x8_t c) {
  return vqrdmlshh_laneq_s16(a, b, c, 7);
}

// CHECK-LABEL: @test_vqrdmlshs_laneq_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[VGETQ_LANE:%.*]] = extractelement <4 x i32> [[C:%.*]], i32 3
// CHECK-NEXT:    [[VQRDMLSHS_S32_I:%.*]] = call i32 @llvm.aarch64.neon.sqrdmlsh.i32(i32 [[A:%.*]], i32 [[B:%.*]], i32 [[VGETQ_LANE]])
// CHECK-NEXT:    ret i32 [[VQRDMLSHS_S32_I]]
//
int32_t test_vqrdmlshs_laneq_s32(int32_t a, int32_t b, int32x4_t c) {
  return vqrdmlshs_laneq_s32(a, b, c, 3);
}

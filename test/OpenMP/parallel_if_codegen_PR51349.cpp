// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --function-signature --check-attributes --include-generated-funcs
// RUN: %clang_cc1 -x c++ -O1 -fopenmp-version=45 -disable-llvm-optzns -verify -fopenmp -triple x86_64-unknown-linux -emit-llvm %s -o - | FileCheck %s --check-prefix=CHECK
// RUN: %clang_cc1 -x c++ -O1 -fopenmp-version=45 -disable-llvm-optzns -verify -fopenmp -triple x86_64-unknown-linux -emit-llvm -fno-inline %s -o - | FileCheck %s --check-prefix=CHECK-NOINLINE
// expected-no-diagnostics

#ifndef HEADER
#define HEADER

void foo() {
#pragma omp parallel if(0)
  ;
#pragma omp parallel
  ;
}

#endif
// CHECK: Function Attrs: mustprogress nounwind
// CHECK-LABEL: define {{[^@]+}}@_Z3foov
// CHECK-SAME: () #[[ATTR0:[0-9]+]] {
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTTHREADID_TEMP_:%.*]] = alloca i32, align 4
// CHECK-NEXT:    [[DOTBOUND_ZERO_ADDR:%.*]] = alloca i32, align 4
// CHECK-NEXT:    [[TMP0:%.*]] = call i32 @__kmpc_global_thread_num(ptr @[[GLOB1:[0-9]+]])
// CHECK-NEXT:    call void @__kmpc_serialized_parallel(ptr @[[GLOB1]], i32 [[TMP0]])
// CHECK-NEXT:    store i32 [[TMP0]], ptr [[DOTTHREADID_TEMP_]], align 4, !tbaa [[TBAA3:![0-9]+]]
// CHECK-NEXT:    store i32 0, ptr [[DOTBOUND_ZERO_ADDR]], align 4
// CHECK-NEXT:    call void @_Z3foov.omp_outlined(ptr [[DOTTHREADID_TEMP_]], ptr [[DOTBOUND_ZERO_ADDR]]) #[[ATTR2:[0-9]+]]
// CHECK-NEXT:    call void @__kmpc_end_serialized_parallel(ptr @[[GLOB1]], i32 [[TMP0]])
// CHECK-NEXT:    call void (ptr, i32, ptr, ...) @__kmpc_fork_call(ptr @[[GLOB1]], i32 0, ptr @_Z3foov.omp_outlined.1)
// CHECK-NEXT:    ret void
//
//
// CHECK: Function Attrs: noinline norecurse nounwind
// CHECK-LABEL: define {{[^@]+}}@_Z3foov.omp_outlined
// CHECK-SAME: (ptr noalias noundef [[DOTGLOBAL_TID_:%.*]], ptr noalias noundef [[DOTBOUND_TID_:%.*]]) #[[ATTR1:[0-9]+]] {
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTGLOBAL_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK-NEXT:    [[DOTBOUND_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK-NEXT:    store ptr [[DOTGLOBAL_TID_]], ptr [[DOTGLOBAL_TID__ADDR]], align 8, !tbaa [[TBAA7:![0-9]+]]
// CHECK-NEXT:    store ptr [[DOTBOUND_TID_]], ptr [[DOTBOUND_TID__ADDR]], align 8, !tbaa [[TBAA7]]
// CHECK-NEXT:    ret void
//
//
// CHECK: Function Attrs: alwaysinline norecurse nounwind
// CHECK-LABEL: define {{[^@]+}}@_Z3foov.omp_outlined.1
// CHECK-SAME: (ptr noalias noundef [[DOTGLOBAL_TID_:%.*]], ptr noalias noundef [[DOTBOUND_TID_:%.*]]) #[[ATTR3:[0-9]+]] {
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTGLOBAL_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK-NEXT:    [[DOTBOUND_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK-NEXT:    store ptr [[DOTGLOBAL_TID_]], ptr [[DOTGLOBAL_TID__ADDR]], align 8, !tbaa [[TBAA7]]
// CHECK-NEXT:    store ptr [[DOTBOUND_TID_]], ptr [[DOTBOUND_TID__ADDR]], align 8, !tbaa [[TBAA7]]
// CHECK-NEXT:    ret void
//
//
// CHECK-NOINLINE: Function Attrs: mustprogress noinline nounwind
// CHECK-NOINLINE-LABEL: define {{[^@]+}}@_Z3foov
// CHECK-NOINLINE-SAME: () #[[ATTR0:[0-9]+]] {
// CHECK-NOINLINE-NEXT:  entry:
// CHECK-NOINLINE-NEXT:    [[DOTTHREADID_TEMP_:%.*]] = alloca i32, align 4
// CHECK-NOINLINE-NEXT:    [[DOTBOUND_ZERO_ADDR:%.*]] = alloca i32, align 4
// CHECK-NOINLINE-NEXT:    [[TMP0:%.*]] = call i32 @__kmpc_global_thread_num(ptr @[[GLOB1:[0-9]+]])
// CHECK-NOINLINE-NEXT:    call void @__kmpc_serialized_parallel(ptr @[[GLOB1]], i32 [[TMP0]])
// CHECK-NOINLINE-NEXT:    store i32 [[TMP0]], ptr [[DOTTHREADID_TEMP_]], align 4, !tbaa [[TBAA3:![0-9]+]]
// CHECK-NOINLINE-NEXT:    store i32 0, ptr [[DOTBOUND_ZERO_ADDR]], align 4
// CHECK-NOINLINE-NEXT:    call void @_Z3foov.omp_outlined(ptr [[DOTTHREADID_TEMP_]], ptr [[DOTBOUND_ZERO_ADDR]]) #[[ATTR2:[0-9]+]]
// CHECK-NOINLINE-NEXT:    call void @__kmpc_end_serialized_parallel(ptr @[[GLOB1]], i32 [[TMP0]])
// CHECK-NOINLINE-NEXT:    call void (ptr, i32, ptr, ...) @__kmpc_fork_call(ptr @[[GLOB1]], i32 0, ptr @_Z3foov.omp_outlined.1)
// CHECK-NOINLINE-NEXT:    ret void
//
//
// CHECK-NOINLINE: Function Attrs: noinline norecurse nounwind
// CHECK-NOINLINE-LABEL: define {{[^@]+}}@_Z3foov.omp_outlined
// CHECK-NOINLINE-SAME: (ptr noalias noundef [[DOTGLOBAL_TID_:%.*]], ptr noalias noundef [[DOTBOUND_TID_:%.*]]) #[[ATTR1:[0-9]+]] {
// CHECK-NOINLINE-NEXT:  entry:
// CHECK-NOINLINE-NEXT:    [[DOTGLOBAL_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK-NOINLINE-NEXT:    [[DOTBOUND_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK-NOINLINE-NEXT:    store ptr [[DOTGLOBAL_TID_]], ptr [[DOTGLOBAL_TID__ADDR]], align 8, !tbaa [[TBAA7:![0-9]+]]
// CHECK-NOINLINE-NEXT:    store ptr [[DOTBOUND_TID_]], ptr [[DOTBOUND_TID__ADDR]], align 8, !tbaa [[TBAA7]]
// CHECK-NOINLINE-NEXT:    ret void
//
//
// CHECK-NOINLINE: Function Attrs: alwaysinline norecurse nounwind
// CHECK-NOINLINE-LABEL: define {{[^@]+}}@_Z3foov.omp_outlined.1
// CHECK-NOINLINE-SAME: (ptr noalias noundef [[DOTGLOBAL_TID_:%.*]], ptr noalias noundef [[DOTBOUND_TID_:%.*]]) #[[ATTR3:[0-9]+]] {
// CHECK-NOINLINE-NEXT:  entry:
// CHECK-NOINLINE-NEXT:    [[DOTGLOBAL_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK-NOINLINE-NEXT:    [[DOTBOUND_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK-NOINLINE-NEXT:    store ptr [[DOTGLOBAL_TID_]], ptr [[DOTGLOBAL_TID__ADDR]], align 8, !tbaa [[TBAA7]]
// CHECK-NOINLINE-NEXT:    store ptr [[DOTBOUND_TID_]], ptr [[DOTBOUND_TID__ADDR]], align 8, !tbaa [[TBAA7]]
// CHECK-NOINLINE-NEXT:    ret void
//

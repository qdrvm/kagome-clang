// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --function-signature --include-generated-funcs --replace-value-regex "__omp_offloading_[0-9a-z]+_[0-9a-z]+" "reduction_size[.].+[.]" "pl_cond[.].+[.|,]" --prefix-filecheck-ir-name _
// Test target codegen - host bc file has to be created first.
// RUN: %clang_cc1 -verify -fopenmp -fopenmp-cuda-mode -x c++ -triple powerpc64le-unknown-unknown -fopenmp-targets=nvptx64-nvidia-cuda -emit-llvm-bc %s -o %t-ppc-host.bc
// RUN: %clang_cc1 -verify -fopenmp -fopenmp-cuda-mode -x c++ -triple nvptx64-unknown-unknown -fopenmp-targets=nvptx64-nvidia-cuda -emit-llvm %s -fopenmp-is-target-device -fopenmp-host-ir-file-path %t-ppc-host.bc -o - -disable-llvm-optzns | FileCheck %s --check-prefix=CHECK1
// RUN: %clang_cc1 -verify -fopenmp -fopenmp-cuda-mode -x c++ -triple i386-unknown-unknown -fopenmp-targets=nvptx-nvidia-cuda -emit-llvm-bc %s -o %t-x86-host.bc
// RUN: %clang_cc1 -verify -fopenmp -fopenmp-cuda-mode -x c++ -triple nvptx-unknown-unknown -fopenmp-targets=nvptx-nvidia-cuda -emit-llvm %s -fopenmp-is-target-device -fopenmp-host-ir-file-path %t-x86-host.bc -o - -disable-llvm-optzns | FileCheck %s --check-prefix=CHECK2
// RUN: %clang_cc1 -verify -fopenmp -fopenmp-cuda-mode -fexceptions -fcxx-exceptions -x c++ -triple nvptx-unknown-unknown -fopenmp-targets=nvptx-nvidia-cuda -emit-llvm %s -fopenmp-is-target-device -fopenmp-host-ir-file-path %t-x86-host.bc -o - -disable-llvm-optzns | FileCheck %s --check-prefix=CHECK2

// expected-no-diagnostics
#ifndef HEADER
#define HEADER

void work(int *C) {
  #pragma omp atomic
  ++(*C);
}

void use(int *C) {
  #pragma omp parallel num_threads(2)
  work(C);
}

int main() {
  int C = 0;
  #pragma omp target map(C)
  {
    use(&C);
    #pragma omp parallel num_threads(2)
    use(&C);
  }

  return C;
}

#endif
// CHECK1-LABEL: define {{[^@]+}}@{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25
// CHECK1-SAME: (ptr noundef nonnull align 4 dereferenceable(4) [[C:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK1-NEXT:  entry:
// CHECK1-NEXT:    [[C_ADDR:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    [[CAPTURED_VARS_ADDRS:%.*]] = alloca [1 x ptr], align 8
// CHECK1-NEXT:    store ptr [[C]], ptr [[C_ADDR]], align 8
// CHECK1-NEXT:    [[TMP0:%.*]] = load ptr, ptr [[C_ADDR]], align 8
// CHECK1-NEXT:    [[TMP1:%.*]] = call i32 @__kmpc_target_init(ptr @[[GLOB1:[0-9]+]], i8 1, i1 true)
// CHECK1-NEXT:    [[EXEC_USER_CODE:%.*]] = icmp eq i32 [[TMP1]], -1
// CHECK1-NEXT:    br i1 [[EXEC_USER_CODE]], label [[USER_CODE_ENTRY:%.*]], label [[WORKER_EXIT:%.*]]
// CHECK1:       user_code.entry:
// CHECK1-NEXT:    [[TMP2:%.*]] = call i32 @__kmpc_global_thread_num(ptr @[[GLOB1]])
// CHECK1-NEXT:    call void @_Z3usePi(ptr noundef [[TMP0]]) #[[ATTR6:[0-9]+]]
// CHECK1-NEXT:    [[TMP3:%.*]] = getelementptr inbounds [1 x ptr], ptr [[CAPTURED_VARS_ADDRS]], i64 0, i64 0
// CHECK1-NEXT:    store ptr [[TMP0]], ptr [[TMP3]], align 8
// CHECK1-NEXT:    call void @__kmpc_parallel_51(ptr @[[GLOB1]], i32 [[TMP2]], i32 1, i32 2, i32 -1, ptr @{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25_omp_outlined, ptr @{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25_omp_outlined_wrapper, ptr [[CAPTURED_VARS_ADDRS]], i64 1)
// CHECK1-NEXT:    call void @__kmpc_target_deinit(ptr @[[GLOB1]], i8 1)
// CHECK1-NEXT:    ret void
// CHECK1:       worker.exit:
// CHECK1-NEXT:    ret void
//
//
// CHECK1-LABEL: define {{[^@]+}}@_Z3usePi
// CHECK1-SAME: (ptr noundef [[C:%.*]]) #[[ATTR1:[0-9]+]] {
// CHECK1-NEXT:  entry:
// CHECK1-NEXT:    [[C_ADDR:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    [[CAPTURED_VARS_ADDRS:%.*]] = alloca [1 x ptr], align 8
// CHECK1-NEXT:    [[TMP0:%.*]] = call i32 @__kmpc_global_thread_num(ptr @[[GLOB1]])
// CHECK1-NEXT:    store ptr [[C]], ptr [[C_ADDR]], align 8
// CHECK1-NEXT:    [[TMP1:%.*]] = getelementptr inbounds [1 x ptr], ptr [[CAPTURED_VARS_ADDRS]], i64 0, i64 0
// CHECK1-NEXT:    store ptr [[C_ADDR]], ptr [[TMP1]], align 8
// CHECK1-NEXT:    call void @__kmpc_parallel_51(ptr @[[GLOB1]], i32 [[TMP0]], i32 1, i32 2, i32 -1, ptr @_Z3usePi_omp_outlined, ptr @_Z3usePi_omp_outlined_wrapper, ptr [[CAPTURED_VARS_ADDRS]], i64 1)
// CHECK1-NEXT:    ret void
//
//
// CHECK1-LABEL: define {{[^@]+}}@{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25_omp_outlined
// CHECK1-SAME: (ptr noalias noundef [[DOTGLOBAL_TID_:%.*]], ptr noalias noundef [[DOTBOUND_TID_:%.*]], ptr noundef nonnull align 4 dereferenceable(4) [[C:%.*]]) #[[ATTR2:[0-9]+]] {
// CHECK1-NEXT:  entry:
// CHECK1-NEXT:    [[DOTGLOBAL_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    [[DOTBOUND_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    [[C_ADDR:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    store ptr [[DOTGLOBAL_TID_]], ptr [[DOTGLOBAL_TID__ADDR]], align 8
// CHECK1-NEXT:    store ptr [[DOTBOUND_TID_]], ptr [[DOTBOUND_TID__ADDR]], align 8
// CHECK1-NEXT:    store ptr [[C]], ptr [[C_ADDR]], align 8
// CHECK1-NEXT:    [[TMP0:%.*]] = load ptr, ptr [[C_ADDR]], align 8
// CHECK1-NEXT:    call void @_Z3usePi(ptr noundef [[TMP0]]) #[[ATTR6]]
// CHECK1-NEXT:    ret void
//
//
// CHECK1-LABEL: define {{[^@]+}}@{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25_omp_outlined_wrapper
// CHECK1-SAME: (i16 noundef zeroext [[TMP0:%.*]], i32 noundef [[TMP1:%.*]]) #[[ATTR3:[0-9]+]] {
// CHECK1-NEXT:  entry:
// CHECK1-NEXT:    [[DOTADDR:%.*]] = alloca i16, align 2
// CHECK1-NEXT:    [[DOTADDR1:%.*]] = alloca i32, align 4
// CHECK1-NEXT:    [[DOTZERO_ADDR:%.*]] = alloca i32, align 4
// CHECK1-NEXT:    [[GLOBAL_ARGS:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    store i16 [[TMP0]], ptr [[DOTADDR]], align 2
// CHECK1-NEXT:    store i32 [[TMP1]], ptr [[DOTADDR1]], align 4
// CHECK1-NEXT:    store i32 0, ptr [[DOTZERO_ADDR]], align 4
// CHECK1-NEXT:    call void @__kmpc_get_shared_variables(ptr [[GLOBAL_ARGS]])
// CHECK1-NEXT:    [[TMP2:%.*]] = load ptr, ptr [[GLOBAL_ARGS]], align 8
// CHECK1-NEXT:    [[TMP3:%.*]] = getelementptr inbounds ptr, ptr [[TMP2]], i64 0
// CHECK1-NEXT:    [[TMP4:%.*]] = load ptr, ptr [[TMP3]], align 8
// CHECK1-NEXT:    call void @{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25_omp_outlined(ptr [[DOTADDR1]], ptr [[DOTZERO_ADDR]], ptr [[TMP4]]) #[[ATTR4:[0-9]+]]
// CHECK1-NEXT:    ret void
//
//
// CHECK1-LABEL: define {{[^@]+}}@_Z3usePi_omp_outlined
// CHECK1-SAME: (ptr noalias noundef [[DOTGLOBAL_TID_:%.*]], ptr noalias noundef [[DOTBOUND_TID_:%.*]], ptr noundef nonnull align 8 dereferenceable(8) [[C:%.*]]) #[[ATTR2]] {
// CHECK1-NEXT:  entry:
// CHECK1-NEXT:    [[DOTGLOBAL_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    [[DOTBOUND_TID__ADDR:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    [[C_ADDR:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    store ptr [[DOTGLOBAL_TID_]], ptr [[DOTGLOBAL_TID__ADDR]], align 8
// CHECK1-NEXT:    store ptr [[DOTBOUND_TID_]], ptr [[DOTBOUND_TID__ADDR]], align 8
// CHECK1-NEXT:    store ptr [[C]], ptr [[C_ADDR]], align 8
// CHECK1-NEXT:    [[TMP0:%.*]] = load ptr, ptr [[C_ADDR]], align 8
// CHECK1-NEXT:    [[TMP1:%.*]] = load ptr, ptr [[TMP0]], align 8
// CHECK1-NEXT:    call void @_Z4workPi(ptr noundef [[TMP1]]) #[[ATTR6]]
// CHECK1-NEXT:    ret void
//
//
// CHECK1-LABEL: define {{[^@]+}}@_Z4workPi
// CHECK1-SAME: (ptr noundef [[C:%.*]]) #[[ATTR1]] {
// CHECK1-NEXT:  entry:
// CHECK1-NEXT:    [[C_ADDR:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    store ptr [[C]], ptr [[C_ADDR]], align 8
// CHECK1-NEXT:    [[TMP0:%.*]] = load ptr, ptr [[C_ADDR]], align 8
// CHECK1-NEXT:    [[TMP1:%.*]] = atomicrmw add ptr [[TMP0]], i32 1 monotonic, align 4
// CHECK1-NEXT:    ret void
//
//
// CHECK1-LABEL: define {{[^@]+}}@_Z3usePi_omp_outlined_wrapper
// CHECK1-SAME: (i16 noundef zeroext [[TMP0:%.*]], i32 noundef [[TMP1:%.*]]) #[[ATTR3]] {
// CHECK1-NEXT:  entry:
// CHECK1-NEXT:    [[DOTADDR:%.*]] = alloca i16, align 2
// CHECK1-NEXT:    [[DOTADDR1:%.*]] = alloca i32, align 4
// CHECK1-NEXT:    [[DOTZERO_ADDR:%.*]] = alloca i32, align 4
// CHECK1-NEXT:    [[GLOBAL_ARGS:%.*]] = alloca ptr, align 8
// CHECK1-NEXT:    store i16 [[TMP0]], ptr [[DOTADDR]], align 2
// CHECK1-NEXT:    store i32 [[TMP1]], ptr [[DOTADDR1]], align 4
// CHECK1-NEXT:    store i32 0, ptr [[DOTZERO_ADDR]], align 4
// CHECK1-NEXT:    call void @__kmpc_get_shared_variables(ptr [[GLOBAL_ARGS]])
// CHECK1-NEXT:    [[TMP2:%.*]] = load ptr, ptr [[GLOBAL_ARGS]], align 8
// CHECK1-NEXT:    [[TMP3:%.*]] = getelementptr inbounds ptr, ptr [[TMP2]], i64 0
// CHECK1-NEXT:    [[TMP4:%.*]] = load ptr, ptr [[TMP3]], align 8
// CHECK1-NEXT:    call void @_Z3usePi_omp_outlined(ptr [[DOTADDR1]], ptr [[DOTZERO_ADDR]], ptr [[TMP4]]) #[[ATTR4]]
// CHECK1-NEXT:    ret void
//
//
// CHECK2-LABEL: define {{[^@]+}}@{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25
// CHECK2-SAME: (ptr noundef nonnull align 4 dereferenceable(4) [[C:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK2-NEXT:  entry:
// CHECK2-NEXT:    [[C_ADDR:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    [[CAPTURED_VARS_ADDRS:%.*]] = alloca [1 x ptr], align 4
// CHECK2-NEXT:    store ptr [[C]], ptr [[C_ADDR]], align 4
// CHECK2-NEXT:    [[TMP0:%.*]] = load ptr, ptr [[C_ADDR]], align 4
// CHECK2-NEXT:    [[TMP1:%.*]] = call i32 @__kmpc_target_init(ptr @[[GLOB1:[0-9]+]], i8 1, i1 true)
// CHECK2-NEXT:    [[EXEC_USER_CODE:%.*]] = icmp eq i32 [[TMP1]], -1
// CHECK2-NEXT:    br i1 [[EXEC_USER_CODE]], label [[USER_CODE_ENTRY:%.*]], label [[WORKER_EXIT:%.*]]
// CHECK2:       user_code.entry:
// CHECK2-NEXT:    [[TMP2:%.*]] = call i32 @__kmpc_global_thread_num(ptr @[[GLOB1]])
// CHECK2-NEXT:    call void @_Z3usePi(ptr noundef [[TMP0]]) #[[ATTR6:[0-9]+]]
// CHECK2-NEXT:    [[TMP3:%.*]] = getelementptr inbounds [1 x ptr], ptr [[CAPTURED_VARS_ADDRS]], i32 0, i32 0
// CHECK2-NEXT:    store ptr [[TMP0]], ptr [[TMP3]], align 4
// CHECK2-NEXT:    call void @__kmpc_parallel_51(ptr @[[GLOB1]], i32 [[TMP2]], i32 1, i32 2, i32 -1, ptr @{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25_omp_outlined, ptr @{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25_omp_outlined_wrapper, ptr [[CAPTURED_VARS_ADDRS]], i32 1)
// CHECK2-NEXT:    call void @__kmpc_target_deinit(ptr @[[GLOB1]], i8 1)
// CHECK2-NEXT:    ret void
// CHECK2:       worker.exit:
// CHECK2-NEXT:    ret void
//
//
// CHECK2-LABEL: define {{[^@]+}}@_Z3usePi
// CHECK2-SAME: (ptr noundef [[C:%.*]]) #[[ATTR1:[0-9]+]] {
// CHECK2-NEXT:  entry:
// CHECK2-NEXT:    [[C_ADDR:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    [[CAPTURED_VARS_ADDRS:%.*]] = alloca [1 x ptr], align 4
// CHECK2-NEXT:    [[TMP0:%.*]] = call i32 @__kmpc_global_thread_num(ptr @[[GLOB1]])
// CHECK2-NEXT:    store ptr [[C]], ptr [[C_ADDR]], align 4
// CHECK2-NEXT:    [[TMP1:%.*]] = getelementptr inbounds [1 x ptr], ptr [[CAPTURED_VARS_ADDRS]], i32 0, i32 0
// CHECK2-NEXT:    store ptr [[C_ADDR]], ptr [[TMP1]], align 4
// CHECK2-NEXT:    call void @__kmpc_parallel_51(ptr @[[GLOB1]], i32 [[TMP0]], i32 1, i32 2, i32 -1, ptr @_Z3usePi_omp_outlined, ptr @_Z3usePi_omp_outlined_wrapper, ptr [[CAPTURED_VARS_ADDRS]], i32 1)
// CHECK2-NEXT:    ret void
//
//
// CHECK2-LABEL: define {{[^@]+}}@{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25_omp_outlined
// CHECK2-SAME: (ptr noalias noundef [[DOTGLOBAL_TID_:%.*]], ptr noalias noundef [[DOTBOUND_TID_:%.*]], ptr noundef nonnull align 4 dereferenceable(4) [[C:%.*]]) #[[ATTR2:[0-9]+]] {
// CHECK2-NEXT:  entry:
// CHECK2-NEXT:    [[DOTGLOBAL_TID__ADDR:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    [[DOTBOUND_TID__ADDR:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    [[C_ADDR:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    store ptr [[DOTGLOBAL_TID_]], ptr [[DOTGLOBAL_TID__ADDR]], align 4
// CHECK2-NEXT:    store ptr [[DOTBOUND_TID_]], ptr [[DOTBOUND_TID__ADDR]], align 4
// CHECK2-NEXT:    store ptr [[C]], ptr [[C_ADDR]], align 4
// CHECK2-NEXT:    [[TMP0:%.*]] = load ptr, ptr [[C_ADDR]], align 4
// CHECK2-NEXT:    call void @_Z3usePi(ptr noundef [[TMP0]]) #[[ATTR6]]
// CHECK2-NEXT:    ret void
//
//
// CHECK2-LABEL: define {{[^@]+}}@{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25_omp_outlined_wrapper
// CHECK2-SAME: (i16 noundef zeroext [[TMP0:%.*]], i32 noundef [[TMP1:%.*]]) #[[ATTR3:[0-9]+]] {
// CHECK2-NEXT:  entry:
// CHECK2-NEXT:    [[DOTADDR:%.*]] = alloca i16, align 2
// CHECK2-NEXT:    [[DOTADDR1:%.*]] = alloca i32, align 4
// CHECK2-NEXT:    [[DOTZERO_ADDR:%.*]] = alloca i32, align 4
// CHECK2-NEXT:    [[GLOBAL_ARGS:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    store i16 [[TMP0]], ptr [[DOTADDR]], align 2
// CHECK2-NEXT:    store i32 [[TMP1]], ptr [[DOTADDR1]], align 4
// CHECK2-NEXT:    store i32 0, ptr [[DOTZERO_ADDR]], align 4
// CHECK2-NEXT:    call void @__kmpc_get_shared_variables(ptr [[GLOBAL_ARGS]])
// CHECK2-NEXT:    [[TMP2:%.*]] = load ptr, ptr [[GLOBAL_ARGS]], align 4
// CHECK2-NEXT:    [[TMP3:%.*]] = getelementptr inbounds ptr, ptr [[TMP2]], i32 0
// CHECK2-NEXT:    [[TMP4:%.*]] = load ptr, ptr [[TMP3]], align 4
// CHECK2-NEXT:    call void @{{__omp_offloading_[0-9a-z]+_[0-9a-z]+}}_main_l25_omp_outlined(ptr [[DOTADDR1]], ptr [[DOTZERO_ADDR]], ptr [[TMP4]]) #[[ATTR4:[0-9]+]]
// CHECK2-NEXT:    ret void
//
//
// CHECK2-LABEL: define {{[^@]+}}@_Z3usePi_omp_outlined
// CHECK2-SAME: (ptr noalias noundef [[DOTGLOBAL_TID_:%.*]], ptr noalias noundef [[DOTBOUND_TID_:%.*]], ptr noundef nonnull align 4 dereferenceable(4) [[C:%.*]]) #[[ATTR2]] {
// CHECK2-NEXT:  entry:
// CHECK2-NEXT:    [[DOTGLOBAL_TID__ADDR:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    [[DOTBOUND_TID__ADDR:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    [[C_ADDR:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    store ptr [[DOTGLOBAL_TID_]], ptr [[DOTGLOBAL_TID__ADDR]], align 4
// CHECK2-NEXT:    store ptr [[DOTBOUND_TID_]], ptr [[DOTBOUND_TID__ADDR]], align 4
// CHECK2-NEXT:    store ptr [[C]], ptr [[C_ADDR]], align 4
// CHECK2-NEXT:    [[TMP0:%.*]] = load ptr, ptr [[C_ADDR]], align 4
// CHECK2-NEXT:    [[TMP1:%.*]] = load ptr, ptr [[TMP0]], align 4
// CHECK2-NEXT:    call void @_Z4workPi(ptr noundef [[TMP1]]) #[[ATTR6]]
// CHECK2-NEXT:    ret void
//
//
// CHECK2-LABEL: define {{[^@]+}}@_Z4workPi
// CHECK2-SAME: (ptr noundef [[C:%.*]]) #[[ATTR1]] {
// CHECK2-NEXT:  entry:
// CHECK2-NEXT:    [[C_ADDR:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    store ptr [[C]], ptr [[C_ADDR]], align 4
// CHECK2-NEXT:    [[TMP0:%.*]] = load ptr, ptr [[C_ADDR]], align 4
// CHECK2-NEXT:    [[TMP1:%.*]] = atomicrmw add ptr [[TMP0]], i32 1 monotonic, align 4
// CHECK2-NEXT:    ret void
//
//
// CHECK2-LABEL: define {{[^@]+}}@_Z3usePi_omp_outlined_wrapper
// CHECK2-SAME: (i16 noundef zeroext [[TMP0:%.*]], i32 noundef [[TMP1:%.*]]) #[[ATTR3]] {
// CHECK2-NEXT:  entry:
// CHECK2-NEXT:    [[DOTADDR:%.*]] = alloca i16, align 2
// CHECK2-NEXT:    [[DOTADDR1:%.*]] = alloca i32, align 4
// CHECK2-NEXT:    [[DOTZERO_ADDR:%.*]] = alloca i32, align 4
// CHECK2-NEXT:    [[GLOBAL_ARGS:%.*]] = alloca ptr, align 4
// CHECK2-NEXT:    store i16 [[TMP0]], ptr [[DOTADDR]], align 2
// CHECK2-NEXT:    store i32 [[TMP1]], ptr [[DOTADDR1]], align 4
// CHECK2-NEXT:    store i32 0, ptr [[DOTZERO_ADDR]], align 4
// CHECK2-NEXT:    call void @__kmpc_get_shared_variables(ptr [[GLOBAL_ARGS]])
// CHECK2-NEXT:    [[TMP2:%.*]] = load ptr, ptr [[GLOBAL_ARGS]], align 4
// CHECK2-NEXT:    [[TMP3:%.*]] = getelementptr inbounds ptr, ptr [[TMP2]], i32 0
// CHECK2-NEXT:    [[TMP4:%.*]] = load ptr, ptr [[TMP3]], align 4
// CHECK2-NEXT:    call void @_Z3usePi_omp_outlined(ptr [[DOTADDR1]], ptr [[DOTZERO_ADDR]], ptr [[TMP4]]) #[[ATTR4]]
// CHECK2-NEXT:    ret void
//

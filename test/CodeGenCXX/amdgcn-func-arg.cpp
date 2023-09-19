// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -O0 -triple amdgcn -emit-llvm %s -o - | FileCheck %s

class A {
public:
  int x;
  A():x(0) {}
  ~A() {}
};

class B {
int x[100];
};

A g_a;
B g_b;

void func_with_ref_arg(A &a);
void func_with_ref_arg(B &b);

// CHECK-LABEL: @_Z22func_with_indirect_arg1A(
// CHECK-SAME:  ptr addrspace(5) noundef [[ARG:%.*]])
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[INDIRECT_ADDR:%.*]] = alloca ptr, align 8, addrspace(5)
// CHECK-NEXT:    [[P:%.*]] = alloca ptr, align 8, addrspace(5)
// CHECK-NEXT:    [[INDIRECT_ADDR_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[INDIRECT_ADDR]] to ptr
// CHECK-NEXT:    [[P_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[P]] to ptr
// CHECK-NEXT:    store ptr addrspace(5) [[ARG]], ptr [[INDIRECT_ADDR_ASCAST]]
// CHECK-NEXT:    [[A_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[A:%.*]] to ptr
// CHECK-NEXT:    store ptr [[A_ASCAST]], ptr [[P_ASCAST]], align 8
// CHECK-NEXT:    ret void
//
void func_with_indirect_arg(A a) {
  A *p = &a;
}

// CHECK-LABEL: @_Z22test_indirect_arg_autov(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[A:%.*]] = alloca [[CLASS_A:%.*]], align 4, addrspace(5)
// CHECK-NEXT:    [[AGG_TMP:%.*]] = alloca [[CLASS_A]], align 4, addrspace(5)
// CHECK-NEXT:    [[A_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[A]] to ptr
// CHECK-NEXT:    [[AGG_TMP_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[AGG_TMP]] to ptr
// CHECK-NEXT:    call void @_ZN1AC1Ev(ptr noundef nonnull align 4 dereferenceable(4) [[A_ASCAST]])
// CHECK-NEXT:    call void @llvm.memcpy.p0.p0.i64(ptr align 4 [[AGG_TMP_ASCAST]], ptr align 4 [[A_ASCAST]], i64 4, i1 false)
// CHECK-NEXT:    [[AGG_TMP_ASCAST_ASCAST:%.*]] = addrspacecast ptr [[AGG_TMP_ASCAST]] to ptr addrspace(5)
// CHECK-NEXT:    call void @_Z22func_with_indirect_arg1A(ptr addrspace(5) noundef [[AGG_TMP_ASCAST_ASCAST]])
// CHECK-NEXT:    call void @_ZN1AD1Ev(ptr noundef nonnull align 4 dereferenceable(4) [[AGG_TMP_ASCAST]])
// CHECK-NEXT:    call void @_Z17func_with_ref_argR1A(ptr noundef nonnull align 4 dereferenceable(4) [[A_ASCAST]])
// CHECK-NEXT:    call void @_ZN1AD1Ev(ptr noundef nonnull align 4 dereferenceable(4) [[A_ASCAST]])
// CHECK-NEXT:    ret void
//
void test_indirect_arg_auto() {
  A a;
  func_with_indirect_arg(a);
  func_with_ref_arg(a);
}

// CHECK-LABEL: @_Z24test_indirect_arg_globalv(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[AGG_TMP:%.*]] = alloca [[CLASS_A:%.*]], align 4, addrspace(5)
// CHECK-NEXT:    [[AGG_TMP_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[AGG_TMP]] to ptr
// CHECK-NEXT:    call void @llvm.memcpy.p0.p0.i64(ptr align 4 [[AGG_TMP_ASCAST]], ptr align 4 addrspacecast (ptr addrspace(1) @g_a to ptr), i64 4, i1 false)
// CHECK-NEXT:    [[AGG_TMP_ASCAST_ASCAST:%.*]] = addrspacecast ptr [[AGG_TMP_ASCAST]] to ptr addrspace(5)
// CHECK-NEXT:    call void @_Z22func_with_indirect_arg1A(ptr addrspace(5) noundef [[AGG_TMP_ASCAST_ASCAST]])
// CHECK-NEXT:    call void @_ZN1AD1Ev(ptr noundef nonnull align 4 dereferenceable(4) [[AGG_TMP_ASCAST]])
// CHECK-NEXT:    call void @_Z17func_with_ref_argR1A(ptr noundef nonnull align 4 dereferenceable(4) addrspacecast (ptr addrspace(1) @g_a to ptr))
// CHECK-NEXT:    ret void
//
void test_indirect_arg_global() {
  func_with_indirect_arg(g_a);
  func_with_ref_arg(g_a);
}

// CHECK-LABEL: @_Z19func_with_byval_arg1B(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[P:%.*]] = alloca ptr, align 8, addrspace(5)
// CHECK-NEXT:    [[P_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[P]] to ptr
// CHECK-NEXT:    [[B_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[B:%.*]] to ptr
// CHECK-NEXT:    store ptr [[B_ASCAST]], ptr [[P_ASCAST]], align 8
// CHECK-NEXT:    ret void
//
void func_with_byval_arg(B b) {
  B *p = &b;
}

// CHECK-LABEL: @_Z19test_byval_arg_autov(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[B:%.*]] = alloca [[CLASS_B:%.*]], align 4, addrspace(5)
// CHECK-NEXT:    [[AGG_TMP:%.*]] = alloca [[CLASS_B]], align 4, addrspace(5)
// CHECK-NEXT:    [[B_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[B]] to ptr
// CHECK-NEXT:    [[AGG_TMP_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[AGG_TMP]] to ptr
// CHECK-NEXT:    call void @llvm.memcpy.p0.p0.i64(ptr align 4 [[AGG_TMP_ASCAST]], ptr align 4 [[B_ASCAST]], i64 400, i1 false)
// CHECK-NEXT:    [[AGG_TMP_ASCAST_ASCAST:%.*]] = addrspacecast ptr [[AGG_TMP_ASCAST]] to ptr addrspace(5)
// CHECK-NEXT:    call void @_Z19func_with_byval_arg1B(ptr addrspace(5) noundef byval([[CLASS_B]]) align 4 [[AGG_TMP_ASCAST_ASCAST]])
// CHECK-NEXT:    call void @_Z17func_with_ref_argR1B(ptr noundef nonnull align 4 dereferenceable(400) [[B_ASCAST]])
// CHECK-NEXT:    ret void
//
void test_byval_arg_auto() {
  B b;
  func_with_byval_arg(b);
  func_with_ref_arg(b);
}

// CHECK-LABEL: @_Z21test_byval_arg_globalv(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[AGG_TMP:%.*]] = alloca [[CLASS_B:%.*]], align 4, addrspace(5)
// CHECK-NEXT:    [[AGG_TMP_ASCAST:%.*]] = addrspacecast ptr addrspace(5) [[AGG_TMP]] to ptr
// CHECK-NEXT:    call void @llvm.memcpy.p0.p0.i64(ptr align 4 [[AGG_TMP_ASCAST]], ptr align 4 addrspacecast (ptr addrspace(1) @g_b to ptr), i64 400, i1 false)
// CHECK-NEXT:    [[AGG_TMP_ASCAST_ASCAST:%.*]] = addrspacecast ptr [[AGG_TMP_ASCAST]] to ptr addrspace(5)
// CHECK-NEXT:    call void @_Z19func_with_byval_arg1B(ptr addrspace(5) noundef byval([[CLASS_B]]) align 4 [[AGG_TMP_ASCAST_ASCAST]])
// CHECK-NEXT:    call void @_Z17func_with_ref_argR1B(ptr noundef nonnull align 4 dereferenceable(400) addrspacecast (ptr addrspace(1) @g_b to ptr))
// CHECK-NEXT:    ret void
//
void test_byval_arg_global() {
  func_with_byval_arg(g_b);
  func_with_ref_arg(g_b);
}

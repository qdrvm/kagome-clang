// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -emit-llvm %s -o - -triple x86_64-unknown-linux-gnu | FileCheck %s

bool e();

void operator delete(void*);

// CHECK-LABEL: @_Z1fPiz(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[P_ADDR:%.*]] = alloca ptr, align 8
// CHECK-NEXT:    [[L:%.*]] = alloca [1 x %struct.__va_list_tag], align 16
// CHECK-NEXT:    [[L2:%.*]] = alloca [1 x %struct.__va_list_tag], align 16
// CHECK-NEXT:    store ptr [[P:%.*]], ptr [[P_ADDR]], align 8
// CHECK-NEXT:    [[CALL:%.*]] = call noundef zeroext i1 @_Z1ev()
// CHECK-NEXT:    br i1 [[CALL]], label [[COND_TRUE:%.*]], label [[COND_FALSE:%.*]]
// CHECK:       cond.true:
// CHECK-NEXT:    call void @llvm.trap()
// CHECK-NEXT:    br label [[COND_END:%.*]]
// CHECK:       cond.false:
// CHECK-NEXT:    br label [[COND_END]]
// CHECK:       cond.end:
// CHECK-NEXT:    [[CALL1:%.*]] = call noundef zeroext i1 @_Z1ev()
// CHECK-NEXT:    br i1 [[CALL1]], label [[COND_TRUE2:%.*]], label [[COND_FALSE3:%.*]]
// CHECK:       cond.true2:
// CHECK-NEXT:    call void @llvm.debugtrap()
// CHECK-NEXT:    br label [[COND_END4:%.*]]
// CHECK:       cond.false3:
// CHECK-NEXT:    br label [[COND_END4]]
// CHECK:       cond.end4:
// CHECK-NEXT:    [[CALL5:%.*]] = call noundef zeroext i1 @_Z1ev()
// CHECK-NEXT:    [[TMP0:%.*]] = zext i1 [[CALL5]] to i64
// CHECK-NEXT:    call void @llvm.assume(i1 true)
// CHECK-NEXT:    [[CALL6:%.*]] = call noundef zeroext i1 @_Z1ev()
// CHECK-NEXT:    br i1 [[CALL6]], label [[COND_TRUE7:%.*]], label [[COND_FALSE8:%.*]]
// CHECK:       cond.true7:
// CHECK-NEXT:    [[ARRAYDECAY:%.*]] = getelementptr inbounds [1 x %struct.__va_list_tag], ptr [[L]], i64 0, i64 0
// CHECK-NEXT:    call void @llvm.va_start(ptr [[ARRAYDECAY]])
// CHECK-NEXT:    br label [[COND_END9:%.*]]
// CHECK:       cond.false8:
// CHECK-NEXT:    br label [[COND_END9]]
// CHECK:       cond.end9:
// CHECK-NEXT:    [[CALL10:%.*]] = call noundef zeroext i1 @_Z1ev()
// CHECK-NEXT:    br i1 [[CALL10]], label [[COND_TRUE11:%.*]], label [[COND_FALSE14:%.*]]
// CHECK:       cond.true11:
// CHECK-NEXT:    [[ARRAYDECAY12:%.*]] = getelementptr inbounds [1 x %struct.__va_list_tag], ptr [[L]], i64 0, i64 0
// CHECK-NEXT:    [[ARRAYDECAY13:%.*]] = getelementptr inbounds [1 x %struct.__va_list_tag], ptr [[L2]], i64 0, i64 0
// CHECK-NEXT:    call void @llvm.va_copy(ptr [[ARRAYDECAY12]], ptr [[ARRAYDECAY13]])
// CHECK-NEXT:    br label [[COND_END15:%.*]]
// CHECK:       cond.false14:
// CHECK-NEXT:    br label [[COND_END15]]
// CHECK:       cond.end15:
// CHECK-NEXT:    [[CALL16:%.*]] = call noundef zeroext i1 @_Z1ev()
// CHECK-NEXT:    br i1 [[CALL16]], label [[COND_TRUE17:%.*]], label [[COND_FALSE18:%.*]]
// CHECK:       cond.true17:
// CHECK-NEXT:    [[TMP1:%.*]] = load ptr, ptr [[P_ADDR]], align 8
// CHECK-NEXT:    call void @llvm.prefetch.p0(ptr [[TMP1]], i32 0, i32 3, i32 1)
// CHECK-NEXT:    br label [[COND_END19:%.*]]
// CHECK:       cond.false18:
// CHECK-NEXT:    br label [[COND_END19]]
// CHECK:       cond.end19:
// CHECK-NEXT:    [[CALL20:%.*]] = call noundef zeroext i1 @_Z1ev()
// CHECK-NEXT:    br i1 [[CALL20]], label [[COND_TRUE21:%.*]], label [[COND_FALSE22:%.*]]
// CHECK:       cond.true21:
// CHECK-NEXT:    call void @llvm.eh.unwind.init()
// CHECK-NEXT:    br label [[COND_END23:%.*]]
// CHECK:       cond.false22:
// CHECK-NEXT:    br label [[COND_END23]]
// CHECK:       cond.end23:
// CHECK-NEXT:    [[CALL24:%.*]] = call noundef zeroext i1 @_Z1ev()
// CHECK-NEXT:    [[TMP2:%.*]] = zext i1 [[CALL24]] to i64
// CHECK-NEXT:    [[TMP3:%.*]] = load ptr, ptr [[P_ADDR]], align 8
// CHECK-NEXT:    call void @_ZdlPv(ptr noundef [[TMP3]]) #[[ATTR8:[0-9]+]]
// CHECK-NEXT:    ret void
//
void f(int* p, ...)
{
  e() ? __builtin_trap() : void();
  e() ? __builtin_debugtrap() : void();
  e() ? __builtin_assume(true) : void();
  __builtin_va_list l;
  e() ? __builtin_va_start(l, p) : void();
  __builtin_va_list l2;
  e() ? __builtin_va_copy(l, l2) : void();
  e() ? __builtin_prefetch(p) : void();
  e() ? __builtin_unwind_init() : void();
  e() ? __builtin_operator_delete(p) : void();
}

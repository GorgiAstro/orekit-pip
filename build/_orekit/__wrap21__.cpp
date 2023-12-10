#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrix::class$ = NULL;
      jmethodID *FieldMatrix::mids$ = NULL;
      bool FieldMatrix::live$ = false;

      jclass FieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_311c21c57522a65c] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_8c5ca78361f003c1] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_blendArithmeticallyWith_0c7081084a208672] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copy_cc77900a647586cf] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copySubMatrix_1e209a76a9d04b27] = env->getMethodID(cls, "copySubMatrix", "([I[I[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_copySubMatrix_4400509b3e197e37] = env->getMethodID(cls, "copySubMatrix", "(IIII[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_createMatrix_8e5837651d169cc8] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumn_d29eb5ffff4844ca] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnMatrix_cb8ea5461f14f705] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_61bcfe594fe45427] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_6ccec7d54d4aa14e] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_e4e0a9e5376069de] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getRow_d29eb5ffff4844ca] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowMatrix_cb8ea5461f14f705] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_61bcfe594fe45427] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_302187aa0259985a] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSubMatrix_05948e8f73a5c897] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getTrace_7e89936bdf79375b] = env->getMethodID(cls, "getTrace", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_multiply_311c21c57522a65c] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_8c5ca78361f003c1] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_311c21c57522a65c] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_operate_f9019cec9923ca8a] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_operate_585261c47f8bb8c7] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_power_cb8ea5461f14f705] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_f9019cec9923ca8a] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_311c21c57522a65c] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_585261c47f8bb8c7] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_scalarAdd_0f878209c37822a8] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_0f878209c37822a8] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_72c49d7bd5abccf7] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_ab13d4a167ad2f09] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_dffd6d9d2fbaa6fc] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_8c5ca78361f003c1] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_72c49d7bd5abccf7] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_ab13d4a167ad2f09] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_dffd6d9d2fbaa6fc] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_ca8750336b496dca] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_311c21c57522a65c] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transpose_cc77900a647586cf] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_311c21c57522a65c] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_09db37bb51f54673] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_3a0cd0f81f3173f1] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_1bdd1f13c5d68880] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_b8a3d440c9844dc5] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_09db37bb51f54673] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_3a0cd0f81f3173f1] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_1bdd1f13c5d68880] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_b8a3d440c9844dc5] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_09db37bb51f54673] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_3a0cd0f81f3173f1] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_1bdd1f13c5d68880] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_b8a3d440c9844dc5] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldMatrix FieldMatrix::add(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_311c21c57522a65c], a0.this$));
      }

      void FieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      FieldMatrix FieldMatrix::blendArithmeticallyWith(const FieldMatrix & a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_0c7081084a208672], a0.this$, a1.this$));
      }

      FieldMatrix FieldMatrix::copy() const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_cc77900a647586cf]));
      }

      void FieldMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_1e209a76a9d04b27], a0.this$, a1.this$, a2.this$);
      }

      void FieldMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< ::org::hipparchus::FieldElement > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_4400509b3e197e37], a0, a1, a2, a3, a4.this$);
      }

      FieldMatrix FieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_8e5837651d169cc8], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_d29eb5ffff4844ca], a0));
      }

      FieldMatrix FieldMatrix::getColumnMatrix(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_cb8ea5461f14f705], a0));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_61bcfe594fe45427], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > FieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_6ccec7d54d4aa14e]));
      }

      ::org::hipparchus::FieldElement FieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_e4e0a9e5376069de], a0, a1));
      }

      ::org::hipparchus::Field FieldMatrix::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_d29eb5ffff4844ca], a0));
      }

      FieldMatrix FieldMatrix::getRowMatrix(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_cb8ea5461f14f705], a0));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_61bcfe594fe45427], a0));
      }

      FieldMatrix FieldMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_302187aa0259985a], a0.this$, a1.this$));
      }

      FieldMatrix FieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_05948e8f73a5c897], a0, a1, a2, a3));
      }

      ::org::hipparchus::FieldElement FieldMatrix::getTrace() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getTrace_7e89936bdf79375b]));
      }

      FieldMatrix FieldMatrix::multiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_311c21c57522a65c], a0.this$));
      }

      void FieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      FieldMatrix FieldMatrix::multiplyTransposed(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_311c21c57522a65c], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_f9019cec9923ca8a], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::operate(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_operate_585261c47f8bb8c7], a0.this$));
      }

      FieldMatrix FieldMatrix::power(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_power_cb8ea5461f14f705], a0));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_f9019cec9923ca8a], a0.this$));
      }

      FieldMatrix FieldMatrix::preMultiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_311c21c57522a65c], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_preMultiply_585261c47f8bb8c7], a0.this$));
      }

      FieldMatrix FieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_0f878209c37822a8], a0.this$));
      }

      FieldMatrix FieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_0f878209c37822a8], a0.this$));
      }

      void FieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_72c49d7bd5abccf7], a0, a1.this$);
      }

      void FieldMatrix::setColumnMatrix(jint a0, const FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_ab13d4a167ad2f09], a0, a1.this$);
      }

      void FieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_dffd6d9d2fbaa6fc], a0, a1.this$);
      }

      void FieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      void FieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_72c49d7bd5abccf7], a0, a1.this$);
      }

      void FieldMatrix::setRowMatrix(jint a0, const FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_ab13d4a167ad2f09], a0, a1.this$);
      }

      void FieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_dffd6d9d2fbaa6fc], a0, a1.this$);
      }

      void FieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_ca8750336b496dca], a0.this$, a1, a2);
      }

      FieldMatrix FieldMatrix::subtract(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_311c21c57522a65c], a0.this$));
      }

      FieldMatrix FieldMatrix::transpose() const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_cc77900a647586cf]));
      }

      FieldMatrix FieldMatrix::transposeMultiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_311c21c57522a65c], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_09db37bb51f54673], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_3a0cd0f81f3173f1], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_1bdd1f13c5d68880], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_b8a3d440c9844dc5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_09db37bb51f54673], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_3a0cd0f81f3173f1], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_1bdd1f13c5d68880], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_b8a3d440c9844dc5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_09db37bb51f54673], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_3a0cd0f81f3173f1], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_1bdd1f13c5d68880], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_b8a3d440c9844dc5], a0.this$, a1, a2, a3, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrix_of_(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_add(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_addToEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_blendArithmeticallyWith(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_copy(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_copySubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_createMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getColumn(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getColumnMatrix(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getColumnVector(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getData(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_getEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getField(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_getRow(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getRowMatrix(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getRowVector(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getSubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getTrace(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_multiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_multiplyEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_multiplyTransposed(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_operate(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_power(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_preMultiply(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_scalarAdd(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_scalarMultiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_setColumn(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setColumnMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setColumnVector(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRow(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRowMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRowVector(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setSubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_subtract(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_transpose(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_transposeMultiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_walkInColumnOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_walkInOptimizedOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_walkInRowOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_get__data(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__field(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__trace(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__parameters_(t_FieldMatrix *self, void *data);
      static PyGetSetDef t_FieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrix, data),
        DECLARE_GET_FIELD(t_FieldMatrix, field),
        DECLARE_GET_FIELD(t_FieldMatrix, trace),
        DECLARE_GET_FIELD(t_FieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrix__methods_[] = {
        DECLARE_METHOD(t_FieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, add, METH_O),
        DECLARE_METHOD(t_FieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, getRow, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, multiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, multiplyTransposed, METH_O),
        DECLARE_METHOD(t_FieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, power, METH_O),
        DECLARE_METHOD(t_FieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_FieldMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, subtract, METH_O),
        DECLARE_METHOD(t_FieldMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, transposeMultiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrix)[] = {
        { Py_tp_methods, t_FieldMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AnyMatrix),
        NULL
      };

      DEFINE_TYPE(FieldMatrix, t_FieldMatrix, FieldMatrix);
      PyObject *t_FieldMatrix::wrap_Object(const FieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrix *self = (t_FieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrix *self = (t_FieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrix), &PY_TYPE_DEF(FieldMatrix), module, "FieldMatrix", 0);
      }

      void t_FieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "class_", make_descriptor(FieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "wrapfn_", make_descriptor(t_FieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrix::initializeClass, 1)))
          return NULL;
        return t_FieldMatrix::wrap_Object(FieldMatrix(((t_FieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrix_of_(t_FieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrix_add(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_addToEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_blendArithmeticallyWith(t_FieldMatrix *self, PyObject *args)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldMatrix::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, t_FieldMatrix::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_copy(t_FieldMatrix *self)
      {
        FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_copySubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[I[I[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< ::org::hipparchus::FieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "IIII[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_createMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumn(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumnMatrix(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumnVector(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getData(t_FieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_FieldMatrix_getEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getField(t_FieldMatrix *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_getRow(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getRowMatrix(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getRowVector(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getSubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getTrace(t_FieldMatrix *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrace());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrix_multiply(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_multiplyEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_multiplyTransposed(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyTransposed", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_operate(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_power(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_preMultiply(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_scalarAdd(t_FieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_scalarMultiply(t_FieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumn(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumnMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldMatrix::initializeClass, &a0, &a1, &p1, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumnVector(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRow(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRowMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldMatrix::initializeClass, &a0, &a1, &p1, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRowVector(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setSubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_subtract(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_transpose(t_FieldMatrix *self)
      {
        FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_transposeMultiply(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "transposeMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInColumnOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInOptimizedOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInRowOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }
      static PyObject *t_FieldMatrix_get__parameters_(t_FieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldMatrix_get__data(t_FieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_FieldMatrix_get__field(t_FieldMatrix *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldMatrix_get__trace(t_FieldMatrix *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrace());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *RuleFactory::class$ = NULL;
          jmethodID *RuleFactory::mids$ = NULL;
          bool RuleFactory::live$ = false;

          jclass RuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/RuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRule_086dd68d091255ed] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::util::Pair RuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_086dd68d091255ed], a0));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_RuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleFactory_getRule(t_RuleFactory *self, PyObject *arg);

          static PyMethodDef t_RuleFactory__methods_[] = {
            DECLARE_METHOD(t_RuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RuleFactory)[] = {
            { Py_tp_methods, t_RuleFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RuleFactory, t_RuleFactory, RuleFactory);

          void t_RuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(RuleFactory), &PY_TYPE_DEF(RuleFactory), module, "RuleFactory", 0);
          }

          void t_RuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "class_", make_descriptor(RuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "wrapfn_", make_descriptor(t_RuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RuleFactory::initializeClass, 1)))
              return NULL;
            return t_RuleFactory::wrap_Object(RuleFactory(((t_RuleFactory *) arg)->object.this$));
          }
          static PyObject *t_RuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RuleFactory_getRule(t_RuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::java::lang::PY_TYPE(Object), ::java::lang::PY_TYPE(Object));
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovarianceKey::class$ = NULL;
            jmethodID *CartesianCovarianceKey::mids$ = NULL;
            bool CartesianCovarianceKey::live$ = false;
            CartesianCovarianceKey *CartesianCovarianceKey::COMMENT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::COV_REF_FRAME = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Y_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Y_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Z_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::EPOCH = NULL;

            jclass CartesianCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_88590e503ad399bf] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)Z");
                mids$[mid_valueOf_1af72d434319f8e1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;");
                mids$[mid_values_bbfbf994165b587a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                COV_REF_FRAME = new CartesianCovarianceKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Y_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Y_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Z_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Z_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                EPOCH = new CartesianCovarianceKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CartesianCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_88590e503ad399bf], a0.this$, a1.this$, a2.this$);
            }

            CartesianCovarianceKey CartesianCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CartesianCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1af72d434319f8e1], a0.this$));
            }

            JArray< CartesianCovarianceKey > CartesianCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CartesianCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_bbfbf994165b587a]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_CartesianCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceKey_of_(t_CartesianCovarianceKey *self, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_process(t_CartesianCovarianceKey *self, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_CartesianCovarianceKey_get__parameters_(t_CartesianCovarianceKey *self, void *data);
            static PyGetSetDef t_CartesianCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_CartesianCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CartesianCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_CartesianCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovarianceKey)[] = {
              { Py_tp_methods, t_CartesianCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CartesianCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CartesianCovarianceKey, t_CartesianCovarianceKey, CartesianCovarianceKey);
            PyObject *t_CartesianCovarianceKey::wrap_Object(const CartesianCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CartesianCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CartesianCovarianceKey *self = (t_CartesianCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CartesianCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CartesianCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CartesianCovarianceKey *self = (t_CartesianCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CartesianCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovarianceKey), &PY_TYPE_DEF(CartesianCovarianceKey), module, "CartesianCovarianceKey", 0);
            }

            void t_CartesianCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "class_", make_descriptor(CartesianCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "wrapfn_", make_descriptor(t_CartesianCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CartesianCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "COMMENT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "COV_REF_FRAME", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::COV_REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Y_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Y_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Z_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Z_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "EPOCH", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::EPOCH)));
            }

            static PyObject *t_CartesianCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_CartesianCovarianceKey::wrap_Object(CartesianCovarianceKey(((t_CartesianCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CartesianCovarianceKey_of_(t_CartesianCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CartesianCovarianceKey_process(t_CartesianCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CartesianCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CartesianCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CartesianCovarianceKey::valueOf(a0));
                return t_CartesianCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CartesianCovarianceKey_values(PyTypeObject *type)
            {
              JArray< CartesianCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CartesianCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_CartesianCovarianceKey::wrap_jobject);
            }
            static PyObject *t_CartesianCovarianceKey_get__parameters_(t_CartesianCovarianceKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ClockDataLine::class$ = NULL;
          jmethodID *RinexClock$ClockDataLine::mids$ = NULL;
          bool RinexClock$ClockDataLine::live$ = false;

          jclass RinexClock$ClockDataLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ClockDataLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c24016d5e633a71] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/clock/RinexClock;Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;Ljava/lang/String;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;IDDDDDD)V");
              mids$[mid_getClockAcceleration_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockAcceleration", "()D");
              mids$[mid_getClockAccelerationSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockAccelerationSigma", "()D");
              mids$[mid_getClockBias_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockBias", "()D");
              mids$[mid_getClockBiasSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockBiasSigma", "()D");
              mids$[mid_getClockRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockRate", "()D");
              mids$[mid_getClockRateSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockRateSigma", "()D");
              mids$[mid_getDataType_f43909f4ddf30814] = env->getMethodID(cls, "getDataType", "()Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_getEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEpoch_6ce0a26a70814ffd] = env->getMethodID(cls, "getEpoch", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getNumberOfValues_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfValues", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$ClockDataLine::RinexClock$ClockDataLine(const ::org::orekit::files::rinex::clock::RinexClock & a0, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType & a1, const ::java::lang::String & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeComponents & a4, jint a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c24016d5e633a71, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8, a9, a10, a11)) {}

          jdouble RinexClock$ClockDataLine::getClockAcceleration() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockAcceleration_456d9a2f64d6b28d]);
          }

          jdouble RinexClock$ClockDataLine::getClockAccelerationSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockAccelerationSigma_456d9a2f64d6b28d]);
          }

          jdouble RinexClock$ClockDataLine::getClockBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockBias_456d9a2f64d6b28d]);
          }

          jdouble RinexClock$ClockDataLine::getClockBiasSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockBiasSigma_456d9a2f64d6b28d]);
          }

          jdouble RinexClock$ClockDataLine::getClockRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRate_456d9a2f64d6b28d]);
          }

          jdouble RinexClock$ClockDataLine::getClockRateSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRateSigma_456d9a2f64d6b28d]);
          }

          ::org::orekit::files::rinex::clock::RinexClock$ClockDataType RinexClock$ClockDataLine::getDataType() const
          {
            return ::org::orekit::files::rinex::clock::RinexClock$ClockDataType(env->callObjectMethod(this$, mids$[mid_getDataType_f43909f4ddf30814]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ClockDataLine::getEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_aaa854c403487cf3]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ClockDataLine::getEpoch(const ::org::orekit::time::TimeScale & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_6ce0a26a70814ffd], a0.this$));
          }

          ::java::lang::String RinexClock$ClockDataLine::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          jint RinexClock$ClockDataLine::getNumberOfValues() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfValues_f2f64475e4580546]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          static PyObject *t_RinexClock$ClockDataLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataLine_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$ClockDataLine_init_(t_RinexClock$ClockDataLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$ClockDataLine_getClockAcceleration(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockAccelerationSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockBias(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockBiasSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockRate(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockRateSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getDataType(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getEpoch(t_RinexClock$ClockDataLine *self, PyObject *args);
          static PyObject *t_RinexClock$ClockDataLine_getName(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getNumberOfValues(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_get__clockAcceleration(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockAccelerationSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockBias(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockBiasSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockRate(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockRateSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__dataType(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__epoch(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__name(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__numberOfValues(t_RinexClock$ClockDataLine *self, void *data);
          static PyGetSetDef t_RinexClock$ClockDataLine__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockAcceleration),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockAccelerationSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockBias),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockBiasSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockRate),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockRateSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, dataType),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, epoch),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, name),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, numberOfValues),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ClockDataLine__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ClockDataLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockAcceleration, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockAccelerationSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockBiasSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockRate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockRateSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getDataType, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getEpoch, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getNumberOfValues, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ClockDataLine)[] = {
            { Py_tp_methods, t_RinexClock$ClockDataLine__methods_ },
            { Py_tp_init, (void *) t_RinexClock$ClockDataLine_init_ },
            { Py_tp_getset, t_RinexClock$ClockDataLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ClockDataLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$ClockDataLine, t_RinexClock$ClockDataLine, RinexClock$ClockDataLine);

          void t_RinexClock$ClockDataLine::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ClockDataLine), &PY_TYPE_DEF(RinexClock$ClockDataLine), module, "RinexClock$ClockDataLine", 0);
          }

          void t_RinexClock$ClockDataLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "class_", make_descriptor(RinexClock$ClockDataLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "wrapfn_", make_descriptor(t_RinexClock$ClockDataLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$ClockDataLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ClockDataLine::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ClockDataLine::wrap_Object(RinexClock$ClockDataLine(((t_RinexClock$ClockDataLine *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ClockDataLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ClockDataLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$ClockDataLine_init_(t_RinexClock$ClockDataLine *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::clock::RinexClock a0((jobject) NULL);
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeComponents a4((jobject) NULL);
            jint a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            RinexClock$ClockDataLine object((jobject) NULL);

            if (!parseArgs(args, "kKskkIDDDDDD", ::org::orekit::files::rinex::clock::RinexClock::initializeClass, ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1, &p1, ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::parameters_, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
            {
              INT_CALL(object = RinexClock$ClockDataLine(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockAcceleration(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockAcceleration());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockAccelerationSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockAccelerationSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockBias(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockBiasSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockBiasSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockRate(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockRateSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRateSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getDataType(t_RinexClock$ClockDataLine *self)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataType());
            return ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getEpoch(t_RinexClock$ClockDataLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getEpoch(a0));
                  return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getEpoch", args);
            return NULL;
          }

          static PyObject *t_RinexClock$ClockDataLine_getName(t_RinexClock$ClockDataLine *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getNumberOfValues(t_RinexClock$ClockDataLine *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfValues());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockAcceleration(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockAcceleration());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockAccelerationSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockAccelerationSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockBias(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockBias());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockBiasSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockBiasSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockRate(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockRateSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRateSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__dataType(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataType());
            return ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__epoch(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__name(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__numberOfValues(t_RinexClock$ClockDataLine *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfValues());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/RtcmData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            ::java::lang::Class *RtcmData::class$ = NULL;
            jmethodID *RtcmData::mids$ = NULL;
            bool RtcmData::live$ = false;

            jclass RtcmData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/RtcmData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RtcmData::RtcmData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            static PyObject *t_RtcmData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RtcmData_init_(t_RtcmData *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_RtcmData__methods_[] = {
              DECLARE_METHOD(t_RtcmData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmData, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RtcmData)[] = {
              { Py_tp_methods, t_RtcmData__methods_ },
              { Py_tp_init, (void *) t_RtcmData_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RtcmData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RtcmData, t_RtcmData, RtcmData);

            void t_RtcmData::install(PyObject *module)
            {
              installType(&PY_TYPE(RtcmData), &PY_TYPE_DEF(RtcmData), module, "RtcmData", 0);
            }

            void t_RtcmData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "class_", make_descriptor(RtcmData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "wrapfn_", make_descriptor(t_RtcmData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RtcmData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RtcmData::initializeClass, 1)))
                return NULL;
              return t_RtcmData::wrap_Object(RtcmData(((t_RtcmData *) arg)->object.this$));
            }
            static PyObject *t_RtcmData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RtcmData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RtcmData_init_(t_RtcmData *self, PyObject *args, PyObject *kwds)
            {
              RtcmData object((jobject) NULL);

              INT_CALL(object = RtcmData());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonFieldTimeDerivativesEquations::class$ = NULL;
        jmethodID *PythonFieldTimeDerivativesEquations::mids$ = NULL;
        bool PythonFieldTimeDerivativesEquations::live$ = false;

        jclass PythonFieldTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addKeplerContribution_03a16642f77779e7] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addMassDerivative_03a16642f77779e7] = env->getMethodID(cls, "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addNonKeplerianAcceleration_9c8737fc819646bf] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldTimeDerivativesEquations::PythonFieldTimeDerivativesEquations() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonFieldTimeDerivativesEquations::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldTimeDerivativesEquations::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldTimeDerivativesEquations::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        static PyObject *t_PythonFieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldTimeDerivativesEquations_of_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args);
        static int t_PythonFieldTimeDerivativesEquations_init_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldTimeDerivativesEquations_finalize(t_PythonFieldTimeDerivativesEquations *self);
        static PyObject *t_PythonFieldTimeDerivativesEquations_pythonExtension(t_PythonFieldTimeDerivativesEquations *self, PyObject *args);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__self(t_PythonFieldTimeDerivativesEquations *self, void *data);
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__parameters_(t_PythonFieldTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_PythonFieldTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldTimeDerivativesEquations, self),
          DECLARE_GET_FIELD(t_PythonFieldTimeDerivativesEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_PythonFieldTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_PythonFieldTimeDerivativesEquations_init_ },
          { Py_tp_getset, t_PythonFieldTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldTimeDerivativesEquations, t_PythonFieldTimeDerivativesEquations, PythonFieldTimeDerivativesEquations);
        PyObject *t_PythonFieldTimeDerivativesEquations::wrap_Object(const PythonFieldTimeDerivativesEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldTimeDerivativesEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldTimeDerivativesEquations *self = (t_PythonFieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldTimeDerivativesEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldTimeDerivativesEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldTimeDerivativesEquations *self = (t_PythonFieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldTimeDerivativesEquations), &PY_TYPE_DEF(PythonFieldTimeDerivativesEquations), module, "PythonFieldTimeDerivativesEquations", 1);
        }

        void t_PythonFieldTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "class_", make_descriptor(PythonFieldTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "wrapfn_", make_descriptor(t_PythonFieldTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldTimeDerivativesEquations::initializeClass);
          JNINativeMethod methods[] = {
            { "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldTimeDerivativesEquations_addKeplerContribution0 },
            { "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldTimeDerivativesEquations_addMassDerivative1 },
            { "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V", (void *) t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldTimeDerivativesEquations_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_PythonFieldTimeDerivativesEquations::wrap_Object(PythonFieldTimeDerivativesEquations(((t_PythonFieldTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_of_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldTimeDerivativesEquations_init_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldTimeDerivativesEquations object((jobject) NULL);

          INT_CALL(object = PythonFieldTimeDerivativesEquations());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_finalize(t_PythonFieldTimeDerivativesEquations *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_pythonExtension(t_PythonFieldTimeDerivativesEquations *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
          PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
          PyObject *result = PyObject_CallMethod(obj, "addMassDerivative", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "addNonKeplerianAcceleration", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_get__self(t_PythonFieldTimeDerivativesEquations *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__parameters_(t_PythonFieldTimeDerivativesEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *FieldOfView::class$ = NULL;
        jmethodID *FieldOfView::mids$ = NULL;
        bool FieldOfView::live$ = false;

        jclass FieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/FieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFootprint_260aa711ad5a5b78] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getMargin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_afd63a09f6d01e4c] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List FieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_260aa711ad5a5b78], a0.this$, a1.this$, a2));
        }

        jdouble FieldOfView::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_456d9a2f64d6b28d]);
        }

        jdouble FieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_afd63a09f6d01e4c], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        static PyObject *t_FieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfView_getFootprint(t_FieldOfView *self, PyObject *args);
        static PyObject *t_FieldOfView_getMargin(t_FieldOfView *self);
        static PyObject *t_FieldOfView_offsetFromBoundary(t_FieldOfView *self, PyObject *args);
        static PyObject *t_FieldOfView_projectToBoundary(t_FieldOfView *self, PyObject *arg);
        static PyObject *t_FieldOfView_get__margin(t_FieldOfView *self, void *data);
        static PyGetSetDef t_FieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOfView, margin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOfView__methods_[] = {
          DECLARE_METHOD(t_FieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfView, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_FieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfView, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOfView)[] = {
          { Py_tp_methods, t_FieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOfView, t_FieldOfView, FieldOfView);

        void t_FieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOfView), &PY_TYPE_DEF(FieldOfView), module, "FieldOfView", 0);
        }

        void t_FieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "class_", make_descriptor(FieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "wrapfn_", make_descriptor(t_FieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOfView::initializeClass, 1)))
            return NULL;
          return t_FieldOfView::wrap_Object(FieldOfView(((t_FieldOfView *) arg)->object.this$));
        }
        static PyObject *t_FieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOfView_getFootprint(t_FieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFootprint", args);
          return NULL;
        }

        static PyObject *t_FieldOfView_getMargin(t_FieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldOfView_offsetFromBoundary(t_FieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "offsetFromBoundary", args);
          return NULL;
        }

        static PyObject *t_FieldOfView_projectToBoundary(t_FieldOfView *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }

        static PyObject *t_FieldOfView_get__margin(t_FieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedProcess::class$ = NULL;
          jmethodID *UnscentedProcess::mids$ = NULL;
          bool UnscentedProcess::live$ = false;

          jclass UnscentedProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_3332dd74697d5487] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
              mids$[mid_getInnovation_cc7c4f069c5311e3] = env->getMethodID(cls, "getInnovation", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getPredictedMeasurements_4c54ef968b2530ba] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)[Lorg/hipparchus/linear/RealVector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution UnscentedProcess::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::hipparchus::filtering::kalman::Measurement & a2) const
          {
            return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_3332dd74697d5487], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::linear::RealVector UnscentedProcess::getInnovation(const ::org::hipparchus::filtering::kalman::Measurement & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_cc7c4f069c5311e3], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< ::org::hipparchus::linear::RealVector > UnscentedProcess::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::hipparchus::filtering::kalman::Measurement & a1) const
          {
            return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_4c54ef968b2530ba], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedProcess_of_(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getEvolution(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getInnovation(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getPredictedMeasurements(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_get__parameters_(t_UnscentedProcess *self, void *data);
          static PyGetSetDef t_UnscentedProcess__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedProcess__methods_[] = {
            DECLARE_METHOD(t_UnscentedProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getEvolution, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getInnovation, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getPredictedMeasurements, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedProcess)[] = {
            { Py_tp_methods, t_UnscentedProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_UnscentedProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedProcess, t_UnscentedProcess, UnscentedProcess);
          PyObject *t_UnscentedProcess::wrap_Object(const UnscentedProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedProcess *self = (t_UnscentedProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UnscentedProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedProcess *self = (t_UnscentedProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UnscentedProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedProcess), &PY_TYPE_DEF(UnscentedProcess), module, "UnscentedProcess", 0);
          }

          void t_UnscentedProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "class_", make_descriptor(UnscentedProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "wrapfn_", make_descriptor(t_UnscentedProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedProcess::initializeClass, 1)))
              return NULL;
            return t_UnscentedProcess::wrap_Object(UnscentedProcess(((t_UnscentedProcess *) arg)->object.this$));
          }
          static PyObject *t_UnscentedProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnscentedProcess_of_(t_UnscentedProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_UnscentedProcess_getEvolution(t_UnscentedProcess *self, PyObject *args)
          {
            jdouble a0;
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a2((jobject) NULL);
            ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

            if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
              return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
            return NULL;
          }

          static PyObject *t_UnscentedProcess_getInnovation(t_UnscentedProcess *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
            return NULL;
          }

          static PyObject *t_UnscentedProcess_getPredictedMeasurements(t_UnscentedProcess *self, PyObject *args)
          {
            JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a1((jobject) NULL);
            JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

            if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
            return NULL;
          }
          static PyObject *t_UnscentedProcess_get__parameters_(t_UnscentedProcess *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefinedWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *UserDefinedWriter::class$ = NULL;
            jmethodID *UserDefinedWriter::mids$ = NULL;
            bool UserDefinedWriter::live$ = false;

            jclass UserDefinedWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/UserDefinedWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1c66f9d5aa136de6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefinedWriter::UserDefinedWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_1c66f9d5aa136de6, a0.this$, a1.this$, a2.this$)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_UserDefinedWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefinedWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefinedWriter_init_(t_UserDefinedWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_UserDefinedWriter__methods_[] = {
              DECLARE_METHOD(t_UserDefinedWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefinedWriter)[] = {
              { Py_tp_methods, t_UserDefinedWriter__methods_ },
              { Py_tp_init, (void *) t_UserDefinedWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefinedWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(UserDefinedWriter, t_UserDefinedWriter, UserDefinedWriter);

            void t_UserDefinedWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefinedWriter), &PY_TYPE_DEF(UserDefinedWriter), module, "UserDefinedWriter", 0);
            }

            void t_UserDefinedWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "class_", make_descriptor(UserDefinedWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "wrapfn_", make_descriptor(t_UserDefinedWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserDefinedWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefinedWriter::initializeClass, 1)))
                return NULL;
              return t_UserDefinedWriter::wrap_Object(UserDefinedWriter(((t_UserDefinedWriter *) arg)->object.this$));
            }
            static PyObject *t_UserDefinedWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefinedWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefinedWriter_init_(t_UserDefinedWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::UserDefined a2((jobject) NULL);
              UserDefinedWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = UserDefinedWriter(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrMessageType::class$ = NULL;
          jmethodID *IgsSsrMessageType::mids$ = NULL;
          bool IgsSsrMessageType::live$ = false;
          IgsSsrMessageType *IgsSsrMessageType::IGM_01 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_02 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_03 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_04 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_05 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_06 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_07 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IM_201 = NULL;

          jclass IgsSsrMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMessageType_ec8ed3783ba93a87] = env->getStaticMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");
              mids$[mid_getSatelliteId_c7bf6d31939555f8] = env->getStaticMethodID(cls, "getSatelliteId", "(Lorg/orekit/gnss/SatelliteSystem;I)I");
              mids$[mid_messageNumberToSatelliteSystem_a6dbe694407fc135] = env->getStaticMethodID(cls, "messageNumberToSatelliteSystem", "(I)Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_valueOf_ec8ed3783ba93a87] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");
              mids$[mid_values_b2a6c053cd650d32] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IGM_01 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_01", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_02 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_02", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_03 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_03", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_04 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_04", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_05 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_05", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_06 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_06", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_07 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_07", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IM_201 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IM_201", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrMessageType IgsSsrMessageType::getMessageType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrMessageType(env->callStaticObjectMethod(cls, mids$[mid_getMessageType_ec8ed3783ba93a87], a0.this$));
          }

          jint IgsSsrMessageType::getSatelliteId(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticIntMethod(cls, mids$[mid_getSatelliteId_c7bf6d31939555f8], a0.this$, a1);
          }

          ::org::orekit::gnss::SatelliteSystem IgsSsrMessageType::messageNumberToSatelliteSystem(jint a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::gnss::SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_messageNumberToSatelliteSystem_a6dbe694407fc135], a0));
          }

          IgsSsrMessageType IgsSsrMessageType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrMessageType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ec8ed3783ba93a87], a0.this$));
          }

          JArray< IgsSsrMessageType > IgsSsrMessageType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IgsSsrMessageType >(env->callStaticObjectMethod(cls, mids$[mid_values_b2a6c053cd650d32]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_IgsSsrMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_of_(t_IgsSsrMessageType *self, PyObject *args);
          static PyObject *t_IgsSsrMessageType_getMessageType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_getSatelliteId(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrMessageType_messageNumberToSatelliteSystem(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrMessageType_values(PyTypeObject *type);
          static PyObject *t_IgsSsrMessageType_get__parameters_(t_IgsSsrMessageType *self, void *data);
          static PyGetSetDef t_IgsSsrMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_IgsSsrMessageType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IgsSsrMessageType__methods_[] = {
            DECLARE_METHOD(t_IgsSsrMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, of_, METH_VARARGS),
            DECLARE_METHOD(t_IgsSsrMessageType, getMessageType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, getSatelliteId, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, messageNumberToSatelliteSystem, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrMessageType)[] = {
            { Py_tp_methods, t_IgsSsrMessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IgsSsrMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IgsSsrMessageType, t_IgsSsrMessageType, IgsSsrMessageType);
          PyObject *t_IgsSsrMessageType::wrap_Object(const IgsSsrMessageType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrMessageType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrMessageType *self = (t_IgsSsrMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IgsSsrMessageType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrMessageType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrMessageType *self = (t_IgsSsrMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IgsSsrMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrMessageType), &PY_TYPE_DEF(IgsSsrMessageType), module, "IgsSsrMessageType", 0);
          }

          void t_IgsSsrMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "class_", make_descriptor(IgsSsrMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "wrapfn_", make_descriptor(t_IgsSsrMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "boxfn_", make_descriptor(boxObject));
            env->getClass(IgsSsrMessageType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_01", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_01)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_02", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_02)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_03", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_03)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_04", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_04)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_05", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_05)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_06", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_06)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_07", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_07)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IM_201", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IM_201)));
          }

          static PyObject *t_IgsSsrMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrMessageType::initializeClass, 1)))
              return NULL;
            return t_IgsSsrMessageType::wrap_Object(IgsSsrMessageType(((t_IgsSsrMessageType *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IgsSsrMessageType_of_(t_IgsSsrMessageType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IgsSsrMessageType_getMessageType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrMessageType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::getMessageType(a0));
              return t_IgsSsrMessageType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMessageType", arg);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_getSatelliteId(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint result;

            if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::getSatelliteId(a0, a1));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError(type, "getSatelliteId", args);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_messageNumberToSatelliteSystem(PyTypeObject *type, PyObject *arg)
          {
            jint a0;
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::messageNumberToSatelliteSystem(a0));
              return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "messageNumberToSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrMessageType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::valueOf(a0));
              return t_IgsSsrMessageType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IgsSsrMessageType_values(PyTypeObject *type)
          {
            JArray< IgsSsrMessageType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::values());
            return JArray<jobject>(result.this$).wrap(t_IgsSsrMessageType::wrap_jobject);
          }
          static PyObject *t_IgsSsrMessageType_get__parameters_(t_IgsSsrMessageType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/GaussianRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *GaussianRandomGenerator::class$ = NULL;
      jmethodID *GaussianRandomGenerator::mids$ = NULL;
      bool GaussianRandomGenerator::live$ = false;

      jclass GaussianRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/GaussianRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bb31e8cbfaf41e63] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextNormalizedDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianRandomGenerator::GaussianRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb31e8cbfaf41e63, a0.this$)) {}

      jdouble GaussianRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_456d9a2f64d6b28d]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_GaussianRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GaussianRandomGenerator_init_(t_GaussianRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GaussianRandomGenerator_nextNormalizedDouble(t_GaussianRandomGenerator *self);

      static PyMethodDef t_GaussianRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_GaussianRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianRandomGenerator)[] = {
        { Py_tp_methods, t_GaussianRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_GaussianRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GaussianRandomGenerator, t_GaussianRandomGenerator, GaussianRandomGenerator);

      void t_GaussianRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianRandomGenerator), &PY_TYPE_DEF(GaussianRandomGenerator), module, "GaussianRandomGenerator", 0);
      }

      void t_GaussianRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "class_", make_descriptor(GaussianRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "wrapfn_", make_descriptor(t_GaussianRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_GaussianRandomGenerator::wrap_Object(GaussianRandomGenerator(((t_GaussianRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_GaussianRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GaussianRandomGenerator_init_(t_GaussianRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        GaussianRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = GaussianRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GaussianRandomGenerator_nextNormalizedDouble(t_GaussianRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *UpdatableTile::class$ = NULL;
        jmethodID *UpdatableTile::mids$ = NULL;
        bool UpdatableTile::live$ = false;

        jclass UpdatableTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/UpdatableTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_setElevation_78e41e7b5124a628] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_a18a8bf2dc472ce4] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UpdatableTile::setElevation(jint a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setElevation_78e41e7b5124a628], a0, a1, a2);
        }

        void UpdatableTile::setGeometry(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_setGeometry_a18a8bf2dc472ce4], a0, a1, a2, a3, a4, a5);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        static PyObject *t_UpdatableTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatableTile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatableTile_setElevation(t_UpdatableTile *self, PyObject *args);
        static PyObject *t_UpdatableTile_setGeometry(t_UpdatableTile *self, PyObject *args);

        static PyMethodDef t_UpdatableTile__methods_[] = {
          DECLARE_METHOD(t_UpdatableTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatableTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatableTile, setElevation, METH_VARARGS),
          DECLARE_METHOD(t_UpdatableTile, setGeometry, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UpdatableTile)[] = {
          { Py_tp_methods, t_UpdatableTile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UpdatableTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UpdatableTile, t_UpdatableTile, UpdatableTile);

        void t_UpdatableTile::install(PyObject *module)
        {
          installType(&PY_TYPE(UpdatableTile), &PY_TYPE_DEF(UpdatableTile), module, "UpdatableTile", 0);
        }

        void t_UpdatableTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "class_", make_descriptor(UpdatableTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "wrapfn_", make_descriptor(t_UpdatableTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UpdatableTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UpdatableTile::initializeClass, 1)))
            return NULL;
          return t_UpdatableTile::wrap_Object(UpdatableTile(((t_UpdatableTile *) arg)->object.this$));
        }
        static PyObject *t_UpdatableTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UpdatableTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UpdatableTile_setElevation(t_UpdatableTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setElevation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setElevation", args);
          return NULL;
        }

        static PyObject *t_UpdatableTile_setGeometry(t_UpdatableTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jint a4;
          jint a5;

          if (!parseArgs(args, "DDDDII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(self->object.setGeometry(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGeometry", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmParser::class$ = NULL;
            jmethodID *TdmParser::mids$ = NULL;
            bool TdmParser::live$ = false;

            jclass TdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_cd716eaefbd82b27] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/tdm/Tdm;");
                mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_9737196e7d067d1b] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmHeader;");
                mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::ndm::tdm::Tdm TdmParser::build() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::Tdm(env->callObjectMethod(this$, mids$[mid_build_cd716eaefbd82b27]));
            }

            jboolean TdmParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_e470b6d9e0d979db]);
            }

            jboolean TdmParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_e470b6d9e0d979db]);
            }

            jboolean TdmParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_e470b6d9e0d979db]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::TdmHeader TdmParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_9737196e7d067d1b]));
            }

            jboolean TdmParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_e470b6d9e0d979db]);
            }

            jboolean TdmParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_e470b6d9e0d979db]);
            }

            jboolean TdmParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_e470b6d9e0d979db]);
            }

            jboolean TdmParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_e470b6d9e0d979db]);
            }

            jboolean TdmParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_e470b6d9e0d979db]);
            }

            jboolean TdmParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_e470b6d9e0d979db]);
            }

            void TdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_052c3a3464b50355], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            static PyObject *t_TdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmParser_of_(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_build(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_getHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_reset(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_get__header(t_TdmParser *self, void *data);
            static PyObject *t_TdmParser_get__parameters_(t_TdmParser *self, void *data);
            static PyGetSetDef t_TdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_TdmParser, header),
              DECLARE_GET_FIELD(t_TdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmParser__methods_[] = {
              DECLARE_METHOD(t_TdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, build, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, getHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, reset, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmParser)[] = {
              { Py_tp_methods, t_TdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(TdmParser, t_TdmParser, TdmParser);
            PyObject *t_TdmParser::wrap_Object(const TdmParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmParser *self = (t_TdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_TdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmParser *self = (t_TdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_TdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmParser), &PY_TYPE_DEF(TdmParser), module, "TdmParser", 0);
            }

            void t_TdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "class_", make_descriptor(TdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "wrapfn_", make_descriptor(t_TdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmParser::initializeClass, 1)))
                return NULL;
              return t_TdmParser::wrap_Object(TdmParser(((t_TdmParser *) arg)->object.this$));
            }
            static PyObject *t_TdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmParser_of_(t_TdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmParser_build(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::Tdm result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.build());
                return ::org::orekit::files::ccsds::ndm::tdm::t_Tdm::wrap_Object(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "build", args, 2);
            }

            static PyObject *t_TdmParser_finalizeData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeData", args, 2);
            }

            static PyObject *t_TdmParser_finalizeHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeHeader", args, 2);
            }

            static PyObject *t_TdmParser_finalizeMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeMetadata", args, 2);
            }

            static PyObject *t_TdmParser_getHeader(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::tdm::t_TdmHeader::wrap_Object(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "getHeader", args, 2);
            }

            static PyObject *t_TdmParser_inData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inData", args, 2);
            }

            static PyObject *t_TdmParser_inHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inHeader", args, 2);
            }

            static PyObject *t_TdmParser_inMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inMetadata", args, 2);
            }

            static PyObject *t_TdmParser_prepareData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareData", args, 2);
            }

            static PyObject *t_TdmParser_prepareHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareHeader", args, 2);
            }

            static PyObject *t_TdmParser_prepareMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareMetadata", args, 2);
            }

            static PyObject *t_TdmParser_reset(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "reset", args, 2);
            }
            static PyObject *t_TdmParser_get__parameters_(t_TdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_TdmParser_get__header(t_TdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TdmHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *Maneuver::class$ = NULL;
              jmethodID *Maneuver::mids$ = NULL;
              bool Maneuver::live$ = false;

              jclass Maneuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/Maneuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_completed_e470b6d9e0d979db] = env->getMethodID(cls, "completed", "()Z");
                  mids$[mid_getDV_17a952530a808943] = env->getMethodID(cls, "getDV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDeltaMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEpochIgnition_aaa854c403487cf3] = env->getMethodID(cls, "getEpochIgnition", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getReferenceFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_setDV_987a5fb872043b12] = env->getMethodID(cls, "setDV", "(ID)V");
                  mids$[mid_setDeltaMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDuration_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEpochIgnition_e82d68cd9f886886] = env->getMethodID(cls, "setEpochIgnition", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setReferenceFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Maneuver::Maneuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jboolean Maneuver::completed() const
              {
                return env->callBooleanMethod(this$, mids$[mid_completed_e470b6d9e0d979db]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::getDV() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDV_17a952530a808943]));
              }

              jdouble Maneuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_456d9a2f64d6b28d]);
              }

              jdouble Maneuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_456d9a2f64d6b28d]);
              }

              ::org::orekit::time::AbsoluteDate Maneuver::getEpochIgnition() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochIgnition_aaa854c403487cf3]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade Maneuver::getReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_aa70fdb14ae9305f]));
              }

              void Maneuver::setDV(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDV_987a5fb872043b12], a0, a1);
              }

              void Maneuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_77e0f9a1f260e2e5], a0);
              }

              void Maneuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_77e0f9a1f260e2e5], a0);
              }

              void Maneuver::setEpochIgnition(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochIgnition_e82d68cd9f886886], a0.this$);
              }

              void Maneuver::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setReferenceFrame_a455f3ff24eb0b47], a0.this$);
              }

              void Maneuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {
              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Maneuver_completed(t_Maneuver *self);
              static PyObject *t_Maneuver_getDV(t_Maneuver *self);
              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self);
              static PyObject *t_Maneuver_getDuration(t_Maneuver *self);
              static PyObject *t_Maneuver_getEpochIgnition(t_Maneuver *self);
              static PyObject *t_Maneuver_getReferenceFrame(t_Maneuver *self);
              static PyObject *t_Maneuver_setDV(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setEpochIgnition(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setReferenceFrame(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_get__dV(t_Maneuver *self, void *data);
              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data);
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data);
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__epochIgnition(t_Maneuver *self, void *data);
              static int t_Maneuver_set__epochIgnition(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__referenceFrame(t_Maneuver *self, void *data);
              static int t_Maneuver_set__referenceFrame(t_Maneuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_Maneuver__fields_[] = {
                DECLARE_GET_FIELD(t_Maneuver, dV),
                DECLARE_GETSET_FIELD(t_Maneuver, deltaMass),
                DECLARE_GETSET_FIELD(t_Maneuver, duration),
                DECLARE_GETSET_FIELD(t_Maneuver, epochIgnition),
                DECLARE_GETSET_FIELD(t_Maneuver, referenceFrame),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Maneuver__methods_[] = {
                DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, completed, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDV, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getEpochIgnition, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, setDV, METH_VARARGS),
                DECLARE_METHOD(t_Maneuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_Maneuver, setDuration, METH_O),
                DECLARE_METHOD(t_Maneuver, setEpochIgnition, METH_O),
                DECLARE_METHOD(t_Maneuver, setReferenceFrame, METH_O),
                DECLARE_METHOD(t_Maneuver, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
                { Py_tp_methods, t_Maneuver__methods_ },
                { Py_tp_init, (void *) t_Maneuver_init_ },
                { Py_tp_getset, t_Maneuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Maneuver, t_Maneuver, Maneuver);

              void t_Maneuver::install(PyObject *module)
              {
                installType(&PY_TYPE(Maneuver), &PY_TYPE_DEF(Maneuver), module, "Maneuver", 0);
              }

              void t_Maneuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "class_", make_descriptor(Maneuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "wrapfn_", make_descriptor(t_Maneuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Maneuver::initializeClass, 1)))
                  return NULL;
                return t_Maneuver::wrap_Object(Maneuver(((t_Maneuver *) arg)->object.this$));
              }
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Maneuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds)
              {
                Maneuver object((jobject) NULL);

                INT_CALL(object = Maneuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_Maneuver_completed(t_Maneuver *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.completed());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Maneuver_getDV(t_Maneuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDV());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getDuration(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getEpochIgnition(t_Maneuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochIgnition());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getReferenceFrame(t_Maneuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Maneuver_setDV(t_Maneuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDV(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDV", args);
                return NULL;
              }

              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaMass", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setEpochIgnition(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochIgnition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochIgnition", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setReferenceFrame(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Maneuver), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Maneuver_get__dV(t_Maneuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDV());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaMass", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__epochIgnition(t_Maneuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochIgnition());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Maneuver_set__epochIgnition(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochIgnition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochIgnition", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__referenceFrame(t_Maneuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Maneuver_set__referenceFrame(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "referenceFrame", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ODEIntegratorBuilder::class$ = NULL;
        jmethodID *ODEIntegratorBuilder::mids$ = NULL;
        bool ODEIntegratorBuilder::live$ = false;

        jclass ODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractIntegrator ODEIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_ODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEIntegratorBuilder_buildIntegrator(t_ODEIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_ODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEIntegratorBuilder, t_ODEIntegratorBuilder, ODEIntegratorBuilder);

        void t_ODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEIntegratorBuilder), &PY_TYPE_DEF(ODEIntegratorBuilder), module, "ODEIntegratorBuilder", 0);
        }

        void t_ODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "class_", make_descriptor(ODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "wrapfn_", make_descriptor(t_ODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ODEIntegratorBuilder::wrap_Object(ODEIntegratorBuilder(((t_ODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEIntegratorBuilder_buildIntegrator(t_ODEIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldPVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldPVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldPVCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_60d6ef6da0933f47] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_cf963d44d06e3222] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_237181d932324188] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_1b779fd78bcbd9f3] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_60d6ef6da0933f47, a0, a1.this$)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_cf963d44d06e3222, a0, a1, a2.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter TimeStampedFieldPVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_237181d932324188]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldPVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldPVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldPVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldPVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldPVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldPVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator, t_TimeStampedFieldPVCoordinatesHermiteInterpolator, TimeStampedFieldPVCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedFieldPVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldPVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldPVCoordinatesHermiteInterpolator), module, "TimeStampedFieldPVCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldPVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(TimeStampedFieldPVCoordinatesHermiteInterpolator(((t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/PythonAtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {

      ::java::lang::Class *PythonAtmosphericRefractionModel::class$ = NULL;
      jmethodID *PythonAtmosphericRefractionModel::mids$ = NULL;
      bool PythonAtmosphericRefractionModel::live$ = false;

      jclass PythonAtmosphericRefractionModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/models/PythonAtmosphericRefractionModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getRefraction_0ba5fed9597b693e] = env->getMethodID(cls, "getRefraction", "(D)D");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAtmosphericRefractionModel::PythonAtmosphericRefractionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonAtmosphericRefractionModel::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAtmosphericRefractionModel::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAtmosphericRefractionModel::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      static PyObject *t_PythonAtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAtmosphericRefractionModel_init_(t_PythonAtmosphericRefractionModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAtmosphericRefractionModel_finalize(t_PythonAtmosphericRefractionModel *self);
      static PyObject *t_PythonAtmosphericRefractionModel_pythonExtension(t_PythonAtmosphericRefractionModel *self, PyObject *args);
      static jdouble JNICALL t_PythonAtmosphericRefractionModel_getRefraction0(JNIEnv *jenv, jobject jobj, jdouble a0);
      static void JNICALL t_PythonAtmosphericRefractionModel_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAtmosphericRefractionModel_get__self(t_PythonAtmosphericRefractionModel *self, void *data);
      static PyGetSetDef t_PythonAtmosphericRefractionModel__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAtmosphericRefractionModel, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAtmosphericRefractionModel__methods_[] = {
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAtmosphericRefractionModel)[] = {
        { Py_tp_methods, t_PythonAtmosphericRefractionModel__methods_ },
        { Py_tp_init, (void *) t_PythonAtmosphericRefractionModel_init_ },
        { Py_tp_getset, t_PythonAtmosphericRefractionModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAtmosphericRefractionModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAtmosphericRefractionModel, t_PythonAtmosphericRefractionModel, PythonAtmosphericRefractionModel);

      void t_PythonAtmosphericRefractionModel::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAtmosphericRefractionModel), &PY_TYPE_DEF(PythonAtmosphericRefractionModel), module, "PythonAtmosphericRefractionModel", 1);
      }

      void t_PythonAtmosphericRefractionModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "class_", make_descriptor(PythonAtmosphericRefractionModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "wrapfn_", make_descriptor(t_PythonAtmosphericRefractionModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAtmosphericRefractionModel::initializeClass);
        JNINativeMethod methods[] = {
          { "getRefraction", "(D)D", (void *) t_PythonAtmosphericRefractionModel_getRefraction0 },
          { "pythonDecRef", "()V", (void *) t_PythonAtmosphericRefractionModel_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAtmosphericRefractionModel::initializeClass, 1)))
          return NULL;
        return t_PythonAtmosphericRefractionModel::wrap_Object(PythonAtmosphericRefractionModel(((t_PythonAtmosphericRefractionModel *) arg)->object.this$));
      }
      static PyObject *t_PythonAtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAtmosphericRefractionModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAtmosphericRefractionModel_init_(t_PythonAtmosphericRefractionModel *self, PyObject *args, PyObject *kwds)
      {
        PythonAtmosphericRefractionModel object((jobject) NULL);

        INT_CALL(object = PythonAtmosphericRefractionModel());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAtmosphericRefractionModel_finalize(t_PythonAtmosphericRefractionModel *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAtmosphericRefractionModel_pythonExtension(t_PythonAtmosphericRefractionModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jdouble JNICALL t_PythonAtmosphericRefractionModel_getRefraction0(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getRefraction", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getRefraction", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static void JNICALL t_PythonAtmosphericRefractionModel_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAtmosphericRefractionModel_get__self(t_PythonAtmosphericRefractionModel *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/OneWayAnova.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *OneWayAnova::class$ = NULL;
        jmethodID *OneWayAnova::mids$ = NULL;
        bool OneWayAnova::live$ = false;

        jclass OneWayAnova::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/OneWayAnova");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_anovaFValue_a00f51a898ec07ff] = env->getMethodID(cls, "anovaFValue", "(Ljava/util/Collection;)D");
            mids$[mid_anovaPValue_a00f51a898ec07ff] = env->getMethodID(cls, "anovaPValue", "(Ljava/util/Collection;)D");
            mids$[mid_anovaPValue_e25ffc2569d773b8] = env->getMethodID(cls, "anovaPValue", "(Ljava/util/Collection;Z)D");
            mids$[mid_anovaTest_489eee1f8c6850cc] = env->getMethodID(cls, "anovaTest", "(Ljava/util/Collection;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OneWayAnova::OneWayAnova() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble OneWayAnova::anovaFValue(const ::java::util::Collection & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaFValue_a00f51a898ec07ff], a0.this$);
        }

        jdouble OneWayAnova::anovaPValue(const ::java::util::Collection & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaPValue_a00f51a898ec07ff], a0.this$);
        }

        jdouble OneWayAnova::anovaPValue(const ::java::util::Collection & a0, jboolean a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaPValue_e25ffc2569d773b8], a0.this$, a1);
        }

        jboolean OneWayAnova::anovaTest(const ::java::util::Collection & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_anovaTest_489eee1f8c6850cc], a0.this$, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        static PyObject *t_OneWayAnova_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OneWayAnova_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OneWayAnova_init_(t_OneWayAnova *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OneWayAnova_anovaFValue(t_OneWayAnova *self, PyObject *arg);
        static PyObject *t_OneWayAnova_anovaPValue(t_OneWayAnova *self, PyObject *args);
        static PyObject *t_OneWayAnova_anovaTest(t_OneWayAnova *self, PyObject *args);

        static PyMethodDef t_OneWayAnova__methods_[] = {
          DECLARE_METHOD(t_OneWayAnova, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneWayAnova, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneWayAnova, anovaFValue, METH_O),
          DECLARE_METHOD(t_OneWayAnova, anovaPValue, METH_VARARGS),
          DECLARE_METHOD(t_OneWayAnova, anovaTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OneWayAnova)[] = {
          { Py_tp_methods, t_OneWayAnova__methods_ },
          { Py_tp_init, (void *) t_OneWayAnova_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OneWayAnova)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OneWayAnova, t_OneWayAnova, OneWayAnova);

        void t_OneWayAnova::install(PyObject *module)
        {
          installType(&PY_TYPE(OneWayAnova), &PY_TYPE_DEF(OneWayAnova), module, "OneWayAnova", 0);
        }

        void t_OneWayAnova::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "class_", make_descriptor(OneWayAnova::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "wrapfn_", make_descriptor(t_OneWayAnova::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OneWayAnova_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OneWayAnova::initializeClass, 1)))
            return NULL;
          return t_OneWayAnova::wrap_Object(OneWayAnova(((t_OneWayAnova *) arg)->object.this$));
        }
        static PyObject *t_OneWayAnova_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OneWayAnova::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OneWayAnova_init_(t_OneWayAnova *self, PyObject *args, PyObject *kwds)
        {
          OneWayAnova object((jobject) NULL);

          INT_CALL(object = OneWayAnova());
          self->object = object;

          return 0;
        }

        static PyObject *t_OneWayAnova_anovaFValue(t_OneWayAnova *self, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.anovaFValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "anovaFValue", arg);
          return NULL;
        }

        static PyObject *t_OneWayAnova_anovaPValue(t_OneWayAnova *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble result;

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.anovaPValue(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              jdouble result;

              if (!parseArgs(args, "KZ", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.anovaPValue(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "anovaPValue", args);
          return NULL;
        }

        static PyObject *t_OneWayAnova_anovaTest(t_OneWayAnova *self, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.anovaTest(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "anovaTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *FixedPointTleGenerationAlgorithm::class$ = NULL;
            jmethodID *FixedPointTleGenerationAlgorithm::mids$ = NULL;
            bool FixedPointTleGenerationAlgorithm::live$ = false;
            jdouble FixedPointTleGenerationAlgorithm::EPSILON_DEFAULT = (jdouble) 0;
            jint FixedPointTleGenerationAlgorithm::MAX_ITERATIONS_DEFAULT = (jint) 0;
            jdouble FixedPointTleGenerationAlgorithm::SCALE_DEFAULT = (jdouble) 0;

            jclass FixedPointTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_4de8786c851b2321] = env->getMethodID(cls, "<init>", "(DID)V");
                mids$[mid_init$_104673d0d4fb4f82] = env->getMethodID(cls, "<init>", "(DIDLorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)V");
                mids$[mid_generate_70bd59273b78d702] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_129bb6d4ed7ed841] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                EPSILON_DEFAULT = env->getStaticDoubleField(cls, "EPSILON_DEFAULT");
                MAX_ITERATIONS_DEFAULT = env->getStaticIntField(cls, "MAX_ITERATIONS_DEFAULT");
                SCALE_DEFAULT = env->getStaticDoubleField(cls, "SCALE_DEFAULT");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm(jdouble a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4de8786c851b2321, a0, a1, a2)) {}

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm(jdouble a0, jint a1, jdouble a2, const ::org::orekit::time::TimeScale & a3, const ::org::orekit::frames::Frame & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_104673d0d4fb4f82, a0, a1, a2, a3.this$, a4.this$)) {}

            ::org::orekit::propagation::analytical::tle::FieldTLE FixedPointTleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_70bd59273b78d702], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE FixedPointTleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_129bb6d4ed7ed841], a0.this$, a1.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {
            static PyObject *t_FixedPointTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FixedPointTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_FixedPointTleGenerationAlgorithm_init_(t_FixedPointTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FixedPointTleGenerationAlgorithm_generate(t_FixedPointTleGenerationAlgorithm *self, PyObject *args);

            static PyMethodDef t_FixedPointTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FixedPointTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_FixedPointTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_FixedPointTleGenerationAlgorithm_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FixedPointTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FixedPointTleGenerationAlgorithm, t_FixedPointTleGenerationAlgorithm, FixedPointTleGenerationAlgorithm);

            void t_FixedPointTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(FixedPointTleGenerationAlgorithm), &PY_TYPE_DEF(FixedPointTleGenerationAlgorithm), module, "FixedPointTleGenerationAlgorithm", 0);
            }

            void t_FixedPointTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "class_", make_descriptor(FixedPointTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_FixedPointTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              env->getClass(FixedPointTleGenerationAlgorithm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "EPSILON_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::EPSILON_DEFAULT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "MAX_ITERATIONS_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::MAX_ITERATIONS_DEFAULT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "SCALE_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::SCALE_DEFAULT));
            }

            static PyObject *t_FixedPointTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FixedPointTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_FixedPointTleGenerationAlgorithm::wrap_Object(FixedPointTleGenerationAlgorithm(((t_FixedPointTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_FixedPointTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FixedPointTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_FixedPointTleGenerationAlgorithm_init_(t_FixedPointTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  INT_CALL(object = FixedPointTleGenerationAlgorithm());
                  self->object = object;
                  break;
                }
               case 3:
                {
                  jdouble a0;
                  jint a1;
                  jdouble a2;
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "DID", &a0, &a1, &a2))
                  {
                    INT_CALL(object = FixedPointTleGenerationAlgorithm(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jint a1;
                  jdouble a2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::frames::Frame a4((jobject) NULL);
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "DIDkk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = FixedPointTleGenerationAlgorithm(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FixedPointTleGenerationAlgorithm_generate(t_FixedPointTleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *RecordType::class$ = NULL;
          jmethodID *RecordType::mids$ = NULL;
          bool RecordType::live$ = false;
          RecordType *RecordType::CAS = NULL;
          RecordType *RecordType::NET = NULL;
          RecordType *RecordType::STR = NULL;

          jclass RecordType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/RecordType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_7cedf5e291fba3f6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_values_176b890e867e8a48] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/RecordType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CAS = new RecordType(env->getStaticObjectField(cls, "CAS", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              NET = new RecordType(env->getStaticObjectField(cls, "NET", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              STR = new RecordType(env->getStaticObjectField(cls, "STR", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RecordType RecordType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RecordType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7cedf5e291fba3f6], a0.this$));
          }

          JArray< RecordType > RecordType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RecordType >(env->callStaticObjectMethod(cls, mids$[mid_values_176b890e867e8a48]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          static PyObject *t_RecordType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordType_of_(t_RecordType *self, PyObject *args);
          static PyObject *t_RecordType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RecordType_values(PyTypeObject *type);
          static PyObject *t_RecordType_get__parameters_(t_RecordType *self, void *data);
          static PyGetSetDef t_RecordType__fields_[] = {
            DECLARE_GET_FIELD(t_RecordType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordType__methods_[] = {
            DECLARE_METHOD(t_RecordType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RecordType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RecordType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordType)[] = {
            { Py_tp_methods, t_RecordType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RecordType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RecordType, t_RecordType, RecordType);
          PyObject *t_RecordType::wrap_Object(const RecordType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RecordType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RecordType *self = (t_RecordType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RecordType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RecordType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RecordType *self = (t_RecordType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RecordType::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordType), &PY_TYPE_DEF(RecordType), module, "RecordType", 0);
          }

          void t_RecordType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "class_", make_descriptor(RecordType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "wrapfn_", make_descriptor(t_RecordType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RecordType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "CAS", make_descriptor(t_RecordType::wrap_Object(*RecordType::CAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "NET", make_descriptor(t_RecordType::wrap_Object(*RecordType::NET)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "STR", make_descriptor(t_RecordType::wrap_Object(*RecordType::STR)));
          }

          static PyObject *t_RecordType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordType::initializeClass, 1)))
              return NULL;
            return t_RecordType::wrap_Object(RecordType(((t_RecordType *) arg)->object.this$));
          }
          static PyObject *t_RecordType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RecordType_of_(t_RecordType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RecordType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RecordType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::RecordType::valueOf(a0));
              return t_RecordType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RecordType_values(PyTypeObject *type)
          {
            JArray< RecordType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::RecordType::values());
            return JArray<jobject>(result.this$).wrap(t_RecordType::wrap_jobject);
          }
          static PyObject *t_RecordType_get__parameters_(t_RecordType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Perturbations::class$ = NULL;
              jmethodID *Perturbations::mids$ = NULL;
              bool Perturbations::live$ = false;

              jclass Perturbations::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Perturbations");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d53fbcb2c3985555] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBodies;)V");
                  mids$[mid_getAlbedoGridSize_f2f64475e4580546] = env->getMethodID(cls, "getAlbedoGridSize", "()I");
                  mids$[mid_getAlbedoModel_0090f7797e403f43] = env->getMethodID(cls, "getAlbedoModel", "()Ljava/lang/String;");
                  mids$[mid_getAtmosphericModel_0090f7797e403f43] = env->getMethodID(cls, "getAtmosphericModel", "()Ljava/lang/String;");
                  mids$[mid_getCentralBodyRotation_456d9a2f64d6b28d] = env->getMethodID(cls, "getCentralBodyRotation", "()D");
                  mids$[mid_getEquatorialRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                  mids$[mid_getFixedF10P7_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedF10P7", "()D");
                  mids$[mid_getFixedF10P7Mean_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedF10P7Mean", "()D");
                  mids$[mid_getFixedGeomagneticAp_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedGeomagneticAp", "()D");
                  mids$[mid_getFixedGeomagneticDst_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedGeomagneticDst", "()D");
                  mids$[mid_getFixedGeomagneticKp_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedGeomagneticKp", "()D");
                  mids$[mid_getFixedM10P7_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedM10P7", "()D");
                  mids$[mid_getFixedM10P7Mean_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedM10P7Mean", "()D");
                  mids$[mid_getFixedS10P7_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedS10P7", "()D");
                  mids$[mid_getFixedS10P7Mean_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedS10P7Mean", "()D");
                  mids$[mid_getFixedY10P7_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedY10P7", "()D");
                  mids$[mid_getFixedY10P7Mean_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedY10P7Mean", "()D");
                  mids$[mid_getGm_456d9a2f64d6b28d] = env->getMethodID(cls, "getGm", "()D");
                  mids$[mid_getGravityDegree_f2f64475e4580546] = env->getMethodID(cls, "getGravityDegree", "()I");
                  mids$[mid_getGravityModel_0090f7797e403f43] = env->getMethodID(cls, "getGravityModel", "()Ljava/lang/String;");
                  mids$[mid_getGravityOrder_f2f64475e4580546] = env->getMethodID(cls, "getGravityOrder", "()I");
                  mids$[mid_getInterpMethodSW_0090f7797e403f43] = env->getMethodID(cls, "getInterpMethodSW", "()Ljava/lang/String;");
                  mids$[mid_getNBodyPerturbations_a6156df500549a58] = env->getMethodID(cls, "getNBodyPerturbations", "()Ljava/util/List;");
                  mids$[mid_getOblateFlattening_456d9a2f64d6b28d] = env->getMethodID(cls, "getOblateFlattening", "()D");
                  mids$[mid_getOceanTidesModel_0090f7797e403f43] = env->getMethodID(cls, "getOceanTidesModel", "()Ljava/lang/String;");
                  mids$[mid_getReductionTheory_0090f7797e403f43] = env->getMethodID(cls, "getReductionTheory", "()Ljava/lang/String;");
                  mids$[mid_getShadowBodies_a6156df500549a58] = env->getMethodID(cls, "getShadowBodies", "()Ljava/util/List;");
                  mids$[mid_getShadowModel_f5b8fe0ccd6e798c] = env->getMethodID(cls, "getShadowModel", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");
                  mids$[mid_getSolidTidesModel_0090f7797e403f43] = env->getMethodID(cls, "getSolidTidesModel", "()Ljava/lang/String;");
                  mids$[mid_getSpaceWeatherEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getSpaceWeatherEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getSpaceWeatherSource_0090f7797e403f43] = env->getMethodID(cls, "getSpaceWeatherSource", "()Ljava/lang/String;");
                  mids$[mid_getSrpModel_0090f7797e403f43] = env->getMethodID(cls, "getSrpModel", "()Ljava/lang/String;");
                  mids$[mid_setAlbedoGridSize_0a2a1ac2721c0336] = env->getMethodID(cls, "setAlbedoGridSize", "(I)V");
                  mids$[mid_setAlbedoModel_e939c6558ae8d313] = env->getMethodID(cls, "setAlbedoModel", "(Ljava/lang/String;)V");
                  mids$[mid_setAtmosphericModel_e939c6558ae8d313] = env->getMethodID(cls, "setAtmosphericModel", "(Ljava/lang/String;)V");
                  mids$[mid_setCentralBodyRotation_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCentralBodyRotation", "(D)V");
                  mids$[mid_setEquatorialRadius_77e0f9a1f260e2e5] = env->getMethodID(cls, "setEquatorialRadius", "(D)V");
                  mids$[mid_setFixedF10P7_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedF10P7", "(D)V");
                  mids$[mid_setFixedF10P7Mean_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedF10P7Mean", "(D)V");
                  mids$[mid_setFixedGeomagneticAp_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedGeomagneticAp", "(D)V");
                  mids$[mid_setFixedGeomagneticDst_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedGeomagneticDst", "(D)V");
                  mids$[mid_setFixedGeomagneticKp_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedGeomagneticKp", "(D)V");
                  mids$[mid_setFixedM10P7_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedM10P7", "(D)V");
                  mids$[mid_setFixedM10P7Mean_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedM10P7Mean", "(D)V");
                  mids$[mid_setFixedS10P7_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedS10P7", "(D)V");
                  mids$[mid_setFixedS10P7Mean_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedS10P7Mean", "(D)V");
                  mids$[mid_setFixedY10P7_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedY10P7", "(D)V");
                  mids$[mid_setFixedY10P7Mean_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFixedY10P7Mean", "(D)V");
                  mids$[mid_setGm_77e0f9a1f260e2e5] = env->getMethodID(cls, "setGm", "(D)V");
                  mids$[mid_setGravityModel_10ca79ad48bfee14] = env->getMethodID(cls, "setGravityModel", "(Ljava/lang/String;II)V");
                  mids$[mid_setInterpMethodSW_e939c6558ae8d313] = env->getMethodID(cls, "setInterpMethodSW", "(Ljava/lang/String;)V");
                  mids$[mid_setNBodyPerturbations_65de9727799c5641] = env->getMethodID(cls, "setNBodyPerturbations", "(Ljava/util/List;)V");
                  mids$[mid_setOblateFlattening_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOblateFlattening", "(D)V");
                  mids$[mid_setOceanTidesModel_e939c6558ae8d313] = env->getMethodID(cls, "setOceanTidesModel", "(Ljava/lang/String;)V");
                  mids$[mid_setReductionTheory_e939c6558ae8d313] = env->getMethodID(cls, "setReductionTheory", "(Ljava/lang/String;)V");
                  mids$[mid_setShadowBodies_65de9727799c5641] = env->getMethodID(cls, "setShadowBodies", "(Ljava/util/List;)V");
                  mids$[mid_setShadowModel_59472393101a44da] = env->getMethodID(cls, "setShadowModel", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;)V");
                  mids$[mid_setSolidTidesModel_e939c6558ae8d313] = env->getMethodID(cls, "setSolidTidesModel", "(Ljava/lang/String;)V");
                  mids$[mid_setSpaceWeatherEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setSpaceWeatherEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setSpaceWeatherSource_e939c6558ae8d313] = env->getMethodID(cls, "setSpaceWeatherSource", "(Ljava/lang/String;)V");
                  mids$[mid_setSrpModel_e939c6558ae8d313] = env->getMethodID(cls, "setSrpModel", "(Ljava/lang/String;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Perturbations::Perturbations(const ::org::orekit::bodies::CelestialBodies & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_d53fbcb2c3985555, a0.this$)) {}

              jint Perturbations::getAlbedoGridSize() const
              {
                return env->callIntMethod(this$, mids$[mid_getAlbedoGridSize_f2f64475e4580546]);
              }

              ::java::lang::String Perturbations::getAlbedoModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAlbedoModel_0090f7797e403f43]));
              }

              ::java::lang::String Perturbations::getAtmosphericModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAtmosphericModel_0090f7797e403f43]));
              }

              jdouble Perturbations::getCentralBodyRotation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCentralBodyRotation_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getEquatorialRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedF10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedF10P7_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedF10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedF10P7Mean_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedGeomagneticAp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticAp_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedGeomagneticDst() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticDst_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedGeomagneticKp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticKp_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedM10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedM10P7_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedM10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedM10P7Mean_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedS10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedS10P7_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedS10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedS10P7Mean_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedY10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedY10P7_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getFixedY10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedY10P7Mean_456d9a2f64d6b28d]);
              }

              jdouble Perturbations::getGm() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGm_456d9a2f64d6b28d]);
              }

              jint Perturbations::getGravityDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getGravityDegree_f2f64475e4580546]);
              }

              ::java::lang::String Perturbations::getGravityModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGravityModel_0090f7797e403f43]));
              }

              jint Perturbations::getGravityOrder() const
              {
                return env->callIntMethod(this$, mids$[mid_getGravityOrder_f2f64475e4580546]);
              }

              ::java::lang::String Perturbations::getInterpMethodSW() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpMethodSW_0090f7797e403f43]));
              }

              ::java::util::List Perturbations::getNBodyPerturbations() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNBodyPerturbations_a6156df500549a58]));
              }

              jdouble Perturbations::getOblateFlattening() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getOblateFlattening_456d9a2f64d6b28d]);
              }

              ::java::lang::String Perturbations::getOceanTidesModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOceanTidesModel_0090f7797e403f43]));
              }

              ::java::lang::String Perturbations::getReductionTheory() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReductionTheory_0090f7797e403f43]));
              }

              ::java::util::List Perturbations::getShadowBodies() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getShadowBodies_a6156df500549a58]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel Perturbations::getShadowModel() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel(env->callObjectMethod(this$, mids$[mid_getShadowModel_f5b8fe0ccd6e798c]));
              }

              ::java::lang::String Perturbations::getSolidTidesModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSolidTidesModel_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate Perturbations::getSpaceWeatherEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getSpaceWeatherEpoch_aaa854c403487cf3]));
              }

              ::java::lang::String Perturbations::getSpaceWeatherSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpaceWeatherSource_0090f7797e403f43]));
              }

              ::java::lang::String Perturbations::getSrpModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSrpModel_0090f7797e403f43]));
              }

              void Perturbations::setAlbedoGridSize(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlbedoGridSize_0a2a1ac2721c0336], a0);
              }

              void Perturbations::setAlbedoModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlbedoModel_e939c6558ae8d313], a0.this$);
              }

              void Perturbations::setAtmosphericModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAtmosphericModel_e939c6558ae8d313], a0.this$);
              }

              void Perturbations::setCentralBodyRotation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCentralBodyRotation_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setEquatorialRadius(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEquatorialRadius_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedF10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedF10P7_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedF10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedF10P7Mean_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedGeomagneticAp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticAp_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedGeomagneticDst(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticDst_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedGeomagneticKp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticKp_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedM10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedM10P7_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedM10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedM10P7Mean_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedS10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedS10P7_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedS10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedS10P7Mean_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedY10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedY10P7_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setFixedY10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedY10P7Mean_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setGm(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGm_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setGravityModel(const ::java::lang::String & a0, jint a1, jint a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setGravityModel_10ca79ad48bfee14], a0.this$, a1, a2);
              }

              void Perturbations::setInterpMethodSW(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpMethodSW_e939c6558ae8d313], a0.this$);
              }

              void Perturbations::setNBodyPerturbations(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNBodyPerturbations_65de9727799c5641], a0.this$);
              }

              void Perturbations::setOblateFlattening(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOblateFlattening_77e0f9a1f260e2e5], a0);
              }

              void Perturbations::setOceanTidesModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOceanTidesModel_e939c6558ae8d313], a0.this$);
              }

              void Perturbations::setReductionTheory(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setReductionTheory_e939c6558ae8d313], a0.this$);
              }

              void Perturbations::setShadowBodies(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setShadowBodies_65de9727799c5641], a0.this$);
              }

              void Perturbations::setShadowModel(const ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setShadowModel_59472393101a44da], a0.this$);
              }

              void Perturbations::setSolidTidesModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolidTidesModel_e939c6558ae8d313], a0.this$);
              }

              void Perturbations::setSpaceWeatherEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpaceWeatherEpoch_e82d68cd9f886886], a0.this$);
              }

              void Perturbations::setSpaceWeatherSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpaceWeatherSource_e939c6558ae8d313], a0.this$);
              }

              void Perturbations::setSrpModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpModel_e939c6558ae8d313], a0.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_Perturbations_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Perturbations_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Perturbations_init_(t_Perturbations *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Perturbations_getAlbedoGridSize(t_Perturbations *self);
              static PyObject *t_Perturbations_getAlbedoModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getAtmosphericModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getCentralBodyRotation(t_Perturbations *self);
              static PyObject *t_Perturbations_getEquatorialRadius(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedF10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedF10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticAp(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticDst(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticKp(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedM10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedM10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedS10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedS10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedY10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedY10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getGm(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityDegree(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityOrder(t_Perturbations *self);
              static PyObject *t_Perturbations_getInterpMethodSW(t_Perturbations *self);
              static PyObject *t_Perturbations_getNBodyPerturbations(t_Perturbations *self);
              static PyObject *t_Perturbations_getOblateFlattening(t_Perturbations *self);
              static PyObject *t_Perturbations_getOceanTidesModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getReductionTheory(t_Perturbations *self);
              static PyObject *t_Perturbations_getShadowBodies(t_Perturbations *self);
              static PyObject *t_Perturbations_getShadowModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getSolidTidesModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getSpaceWeatherEpoch(t_Perturbations *self);
              static PyObject *t_Perturbations_getSpaceWeatherSource(t_Perturbations *self);
              static PyObject *t_Perturbations_getSrpModel(t_Perturbations *self);
              static PyObject *t_Perturbations_setAlbedoGridSize(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setAlbedoModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setAtmosphericModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setCentralBodyRotation(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setEquatorialRadius(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedF10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedF10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticAp(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticDst(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticKp(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedM10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedM10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedS10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedS10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedY10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedY10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setGm(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setGravityModel(t_Perturbations *self, PyObject *args);
              static PyObject *t_Perturbations_setInterpMethodSW(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setNBodyPerturbations(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setOblateFlattening(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setOceanTidesModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setReductionTheory(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setShadowBodies(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setShadowModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSolidTidesModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSpaceWeatherEpoch(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSpaceWeatherSource(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSrpModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_get__albedoGridSize(t_Perturbations *self, void *data);
              static int t_Perturbations_set__albedoGridSize(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__albedoModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__albedoModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__atmosphericModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__atmosphericModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__centralBodyRotation(t_Perturbations *self, void *data);
              static int t_Perturbations_set__centralBodyRotation(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__equatorialRadius(t_Perturbations *self, void *data);
              static int t_Perturbations_set__equatorialRadius(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedF10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedF10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedF10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedF10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticAp(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticAp(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticDst(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticDst(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticKp(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticKp(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedM10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedM10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedM10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedM10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedS10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedS10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedS10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedS10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedY10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedY10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedY10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedY10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__gm(t_Perturbations *self, void *data);
              static int t_Perturbations_set__gm(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__gravityDegree(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__gravityModel(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__gravityOrder(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__interpMethodSW(t_Perturbations *self, void *data);
              static int t_Perturbations_set__interpMethodSW(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__nBodyPerturbations(t_Perturbations *self, void *data);
              static int t_Perturbations_set__nBodyPerturbations(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__oblateFlattening(t_Perturbations *self, void *data);
              static int t_Perturbations_set__oblateFlattening(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__oceanTidesModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__oceanTidesModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__reductionTheory(t_Perturbations *self, void *data);
              static int t_Perturbations_set__reductionTheory(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__shadowBodies(t_Perturbations *self, void *data);
              static int t_Perturbations_set__shadowBodies(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__shadowModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__shadowModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__solidTidesModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__solidTidesModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__spaceWeatherEpoch(t_Perturbations *self, void *data);
              static int t_Perturbations_set__spaceWeatherEpoch(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__spaceWeatherSource(t_Perturbations *self, void *data);
              static int t_Perturbations_set__spaceWeatherSource(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__srpModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__srpModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyGetSetDef t_Perturbations__fields_[] = {
                DECLARE_GETSET_FIELD(t_Perturbations, albedoGridSize),
                DECLARE_GETSET_FIELD(t_Perturbations, albedoModel),
                DECLARE_GETSET_FIELD(t_Perturbations, atmosphericModel),
                DECLARE_GETSET_FIELD(t_Perturbations, centralBodyRotation),
                DECLARE_GETSET_FIELD(t_Perturbations, equatorialRadius),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedF10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedF10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticAp),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticDst),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticKp),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedM10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedM10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedS10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedS10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedY10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedY10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, gm),
                DECLARE_GET_FIELD(t_Perturbations, gravityDegree),
                DECLARE_GET_FIELD(t_Perturbations, gravityModel),
                DECLARE_GET_FIELD(t_Perturbations, gravityOrder),
                DECLARE_GETSET_FIELD(t_Perturbations, interpMethodSW),
                DECLARE_GETSET_FIELD(t_Perturbations, nBodyPerturbations),
                DECLARE_GETSET_FIELD(t_Perturbations, oblateFlattening),
                DECLARE_GETSET_FIELD(t_Perturbations, oceanTidesModel),
                DECLARE_GETSET_FIELD(t_Perturbations, reductionTheory),
                DECLARE_GETSET_FIELD(t_Perturbations, shadowBodies),
                DECLARE_GETSET_FIELD(t_Perturbations, shadowModel),
                DECLARE_GETSET_FIELD(t_Perturbations, solidTidesModel),
                DECLARE_GETSET_FIELD(t_Perturbations, spaceWeatherEpoch),
                DECLARE_GETSET_FIELD(t_Perturbations, spaceWeatherSource),
                DECLARE_GETSET_FIELD(t_Perturbations, srpModel),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Perturbations__methods_[] = {
                DECLARE_METHOD(t_Perturbations, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Perturbations, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Perturbations, getAlbedoGridSize, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getAlbedoModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getAtmosphericModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getCentralBodyRotation, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getEquatorialRadius, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedF10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedF10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticAp, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticDst, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticKp, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedM10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedM10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedS10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedS10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedY10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedY10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGm, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityDegree, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityOrder, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getInterpMethodSW, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getNBodyPerturbations, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getOblateFlattening, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getOceanTidesModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getReductionTheory, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getShadowBodies, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getShadowModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSolidTidesModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSpaceWeatherEpoch, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSpaceWeatherSource, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSrpModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, setAlbedoGridSize, METH_O),
                DECLARE_METHOD(t_Perturbations, setAlbedoModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setAtmosphericModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setCentralBodyRotation, METH_O),
                DECLARE_METHOD(t_Perturbations, setEquatorialRadius, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedF10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedF10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticAp, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticDst, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticKp, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedM10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedM10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedS10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedS10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedY10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedY10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setGm, METH_O),
                DECLARE_METHOD(t_Perturbations, setGravityModel, METH_VARARGS),
                DECLARE_METHOD(t_Perturbations, setInterpMethodSW, METH_O),
                DECLARE_METHOD(t_Perturbations, setNBodyPerturbations, METH_O),
                DECLARE_METHOD(t_Perturbations, setOblateFlattening, METH_O),
                DECLARE_METHOD(t_Perturbations, setOceanTidesModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setReductionTheory, METH_O),
                DECLARE_METHOD(t_Perturbations, setShadowBodies, METH_O),
                DECLARE_METHOD(t_Perturbations, setShadowModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setSolidTidesModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setSpaceWeatherEpoch, METH_O),
                DECLARE_METHOD(t_Perturbations, setSpaceWeatherSource, METH_O),
                DECLARE_METHOD(t_Perturbations, setSrpModel, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Perturbations)[] = {
                { Py_tp_methods, t_Perturbations__methods_ },
                { Py_tp_init, (void *) t_Perturbations_init_ },
                { Py_tp_getset, t_Perturbations__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Perturbations)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Perturbations, t_Perturbations, Perturbations);

              void t_Perturbations::install(PyObject *module)
              {
                installType(&PY_TYPE(Perturbations), &PY_TYPE_DEF(Perturbations), module, "Perturbations", 0);
              }

              void t_Perturbations::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "class_", make_descriptor(Perturbations::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "wrapfn_", make_descriptor(t_Perturbations::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Perturbations_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Perturbations::initializeClass, 1)))
                  return NULL;
                return t_Perturbations::wrap_Object(Perturbations(((t_Perturbations *) arg)->object.this$));
              }
              static PyObject *t_Perturbations_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Perturbations::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Perturbations_init_(t_Perturbations *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::bodies::CelestialBodies a0((jobject) NULL);
                Perturbations object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &a0))
                {
                  INT_CALL(object = Perturbations(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Perturbations_getAlbedoGridSize(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getAlbedoGridSize());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getAlbedoModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAlbedoModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getAtmosphericModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAtmosphericModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getCentralBodyRotation(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCentralBodyRotation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getEquatorialRadius(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedF10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedF10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedF10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedF10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticAp(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticAp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticDst(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticDst());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticKp(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticKp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedM10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedM10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedM10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedM10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedS10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedS10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedS10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedS10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedY10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedY10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedY10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedY10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getGm(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGm());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getGravityDegree(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGravityDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getGravityModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getGravityModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getGravityOrder(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGravityOrder());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getInterpMethodSW(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpMethodSW());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getNBodyPerturbations(t_Perturbations *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getNBodyPerturbations());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
              }

              static PyObject *t_Perturbations_getOblateFlattening(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getOblateFlattening());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getOceanTidesModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOceanTidesModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getReductionTheory(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getReductionTheory());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getShadowBodies(t_Perturbations *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getShadowBodies());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
              }

              static PyObject *t_Perturbations_getShadowModel(t_Perturbations *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel result((jobject) NULL);
                OBJ_CALL(result = self->object.getShadowModel());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::wrap_Object(result);
              }

              static PyObject *t_Perturbations_getSolidTidesModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSolidTidesModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getSpaceWeatherEpoch(t_Perturbations *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpaceWeatherEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Perturbations_getSpaceWeatherSource(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpaceWeatherSource());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getSrpModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSrpModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_setAlbedoGridSize(t_Perturbations *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setAlbedoGridSize(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlbedoGridSize", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setAlbedoModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAlbedoModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlbedoModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setAtmosphericModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAtmosphericModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAtmosphericModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setCentralBodyRotation(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCentralBodyRotation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCentralBodyRotation", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setEquatorialRadius(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEquatorialRadius(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEquatorialRadius", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedF10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedF10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedF10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedF10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedF10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedF10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticAp(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticAp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticAp", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticDst(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticDst(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticDst", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticKp(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticKp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticKp", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedM10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedM10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedM10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedM10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedM10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedM10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedS10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedS10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedS10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedS10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedS10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedS10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedY10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedY10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedY10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedY10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedY10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedY10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setGm(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGm", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setGravityModel(t_Perturbations *self, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                jint a1;
                jint a2;

                if (!parseArgs(args, "sII", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setGravityModel(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGravityModel", args);
                return NULL;
              }

              static PyObject *t_Perturbations_setInterpMethodSW(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpMethodSW(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpMethodSW", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setNBodyPerturbations(t_Perturbations *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setNBodyPerturbations(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNBodyPerturbations", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setOblateFlattening(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setOblateFlattening(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOblateFlattening", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setOceanTidesModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOceanTidesModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOceanTidesModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setReductionTheory(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setReductionTheory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setReductionTheory", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setShadowBodies(t_Perturbations *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setShadowBodies(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setShadowBodies", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setShadowModel(t_Perturbations *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::parameters_))
                {
                  OBJ_CALL(self->object.setShadowModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setShadowModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSolidTidesModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSolidTidesModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolidTidesModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSpaceWeatherEpoch(t_Perturbations *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setSpaceWeatherEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpaceWeatherEpoch", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSpaceWeatherSource(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSpaceWeatherSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpaceWeatherSource", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSrpModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSrpModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_get__albedoGridSize(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getAlbedoGridSize());
                return PyLong_FromLong((long) value);
              }
              static int t_Perturbations_set__albedoGridSize(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setAlbedoGridSize(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "albedoGridSize", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__albedoModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAlbedoModel());
                return j2p(value);
              }
              static int t_Perturbations_set__albedoModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAlbedoModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "albedoModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__atmosphericModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAtmosphericModel());
                return j2p(value);
              }
              static int t_Perturbations_set__atmosphericModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAtmosphericModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "atmosphericModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__centralBodyRotation(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCentralBodyRotation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__centralBodyRotation(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCentralBodyRotation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centralBodyRotation", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__equatorialRadius(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__equatorialRadius(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEquatorialRadius(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "equatorialRadius", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedF10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedF10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedF10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedF10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedF10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedF10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedF10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedF10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedF10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedF10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticAp(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticAp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticAp(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticAp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticAp", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticDst(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticDst());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticDst(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticDst(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticDst", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticKp(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticKp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticKp(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticKp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticKp", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedM10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedM10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedM10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedM10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedM10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedM10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedM10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedM10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedM10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedM10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedS10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedS10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedS10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedS10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedS10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedS10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedS10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedS10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedS10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedS10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedY10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedY10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedY10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedY10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedY10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedY10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedY10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedY10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedY10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedY10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__gm(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGm());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__gm(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gm", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__gravityDegree(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGravityDegree());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Perturbations_get__gravityModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getGravityModel());
                return j2p(value);
              }

              static PyObject *t_Perturbations_get__gravityOrder(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGravityOrder());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Perturbations_get__interpMethodSW(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpMethodSW());
                return j2p(value);
              }
              static int t_Perturbations_set__interpMethodSW(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpMethodSW(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpMethodSW", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__nBodyPerturbations(t_Perturbations *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getNBodyPerturbations());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_Perturbations_set__nBodyPerturbations(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNBodyPerturbations(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nBodyPerturbations", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__oblateFlattening(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getOblateFlattening());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__oblateFlattening(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setOblateFlattening(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "oblateFlattening", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__oceanTidesModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOceanTidesModel());
                return j2p(value);
              }
              static int t_Perturbations_set__oceanTidesModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOceanTidesModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "oceanTidesModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__reductionTheory(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getReductionTheory());
                return j2p(value);
              }
              static int t_Perturbations_set__reductionTheory(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setReductionTheory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "reductionTheory", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__shadowBodies(t_Perturbations *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getShadowBodies());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_Perturbations_set__shadowBodies(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setShadowBodies(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "shadowBodies", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__shadowModel(t_Perturbations *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel value((jobject) NULL);
                OBJ_CALL(value = self->object.getShadowModel());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::wrap_Object(value);
              }
              static int t_Perturbations_set__shadowModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::initializeClass, &value))
                  {
                    INT_CALL(self->object.setShadowModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "shadowModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__solidTidesModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSolidTidesModel());
                return j2p(value);
              }
              static int t_Perturbations_set__solidTidesModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSolidTidesModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solidTidesModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__spaceWeatherEpoch(t_Perturbations *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpaceWeatherEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Perturbations_set__spaceWeatherEpoch(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSpaceWeatherEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spaceWeatherEpoch", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__spaceWeatherSource(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpaceWeatherSource());
                return j2p(value);
              }
              static int t_Perturbations_set__spaceWeatherSource(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSpaceWeatherSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spaceWeatherSource", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__srpModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSrpModel());
                return j2p(value);
              }
              static int t_Perturbations_set__srpModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSrpModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpModel", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *TimeStampedCacheException::class$ = NULL;
      jmethodID *TimeStampedCacheException::mids$ = NULL;
      bool TimeStampedCacheException::live$ = false;

      jclass TimeStampedCacheException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/TimeStampedCacheException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2171b09f9faab92f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/MathRuntimeException;)V");
          mids$[mid_init$_ab3e19f36ee9b26f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/errors/OrekitException;)V");
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_ca997976b075d32c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_unwrap_ee714fe96be7f1d9] = env->getStaticMethodID(cls, "unwrap", "(Lorg/hipparchus/exception/MathRuntimeException;)Lorg/orekit/errors/TimeStampedCacheException;");
          mids$[mid_unwrap_cd6f351421ae331c] = env->getStaticMethodID(cls, "unwrap", "(Lorg/orekit/errors/OrekitException;)Lorg/orekit/errors/TimeStampedCacheException;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedCacheException::TimeStampedCacheException(const ::org::hipparchus::exception::MathRuntimeException & a0) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_2171b09f9faab92f, a0.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::org::orekit::errors::OrekitException & a0) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_ab3e19f36ee9b26f, a0.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_ca997976b075d32c, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedCacheException TimeStampedCacheException::unwrap(const ::org::hipparchus::exception::MathRuntimeException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeStampedCacheException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_ee714fe96be7f1d9], a0.this$));
      }

      TimeStampedCacheException TimeStampedCacheException::unwrap(const ::org::orekit::errors::OrekitException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeStampedCacheException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_cd6f351421ae331c], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_TimeStampedCacheException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCacheException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedCacheException_init_(t_TimeStampedCacheException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedCacheException_unwrap(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_TimeStampedCacheException__methods_[] = {
        DECLARE_METHOD(t_TimeStampedCacheException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCacheException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCacheException, unwrap, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedCacheException)[] = {
        { Py_tp_methods, t_TimeStampedCacheException__methods_ },
        { Py_tp_init, (void *) t_TimeStampedCacheException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedCacheException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(TimeStampedCacheException, t_TimeStampedCacheException, TimeStampedCacheException);

      void t_TimeStampedCacheException::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedCacheException), &PY_TYPE_DEF(TimeStampedCacheException), module, "TimeStampedCacheException", 0);
      }

      void t_TimeStampedCacheException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "class_", make_descriptor(TimeStampedCacheException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "wrapfn_", make_descriptor(t_TimeStampedCacheException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedCacheException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedCacheException::initializeClass, 1)))
          return NULL;
        return t_TimeStampedCacheException::wrap_Object(TimeStampedCacheException(((t_TimeStampedCacheException *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedCacheException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedCacheException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedCacheException_init_(t_TimeStampedCacheException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              INT_CALL(object = TimeStampedCacheException(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::errors::OrekitException a0((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::errors::OrekitException::initializeClass, &a0))
            {
              INT_CALL(object = TimeStampedCacheException(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedCacheException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedCacheException(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeStampedCacheException_unwrap(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            TimeStampedCacheException result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::errors::TimeStampedCacheException::unwrap(a0));
              return t_TimeStampedCacheException::wrap_Object(result);
            }
          }
          {
            ::org::orekit::errors::OrekitException a0((jobject) NULL);
            TimeStampedCacheException result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::errors::OrekitException::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::errors::TimeStampedCacheException::unwrap(a0));
              return t_TimeStampedCacheException::wrap_Object(result);
            }
          }
        }

        return callSuper(type, "unwrap", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$VectorConsumer::class$ = NULL;
            jmethodID *ParseToken$VectorConsumer::mids$ = NULL;
            bool ParseToken$VectorConsumer::live$ = false;

            jclass ParseToken$VectorConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_a94622407b723689] = env->getMethodID(cls, "accept", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$VectorConsumer::accept(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_a94622407b723689], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$VectorConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$VectorConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$VectorConsumer_accept(t_ParseToken$VectorConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$VectorConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$VectorConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$VectorConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$VectorConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$VectorConsumer)[] = {
              { Py_tp_methods, t_ParseToken$VectorConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$VectorConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$VectorConsumer, t_ParseToken$VectorConsumer, ParseToken$VectorConsumer);

            void t_ParseToken$VectorConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$VectorConsumer), &PY_TYPE_DEF(ParseToken$VectorConsumer), module, "ParseToken$VectorConsumer", 0);
            }

            void t_ParseToken$VectorConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "class_", make_descriptor(ParseToken$VectorConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "wrapfn_", make_descriptor(t_ParseToken$VectorConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$VectorConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$VectorConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$VectorConsumer::wrap_Object(ParseToken$VectorConsumer(((t_ParseToken$VectorConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$VectorConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$VectorConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$VectorConsumer_accept(t_ParseToken$VectorConsumer *self, PyObject *arg)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sigmoid$Parametric::class$ = NULL;
        jmethodID *Sigmoid$Parametric::mids$ = NULL;
        bool Sigmoid$Parametric::live$ = false;

        jclass Sigmoid$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sigmoid$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_7b8ea6f669f90156] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_618a40a0b95154fa] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sigmoid$Parametric::Sigmoid$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        JArray< jdouble > Sigmoid$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_7b8ea6f669f90156], a0, a1.this$));
        }

        jdouble Sigmoid$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_618a40a0b95154fa], a0, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Sigmoid$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sigmoid$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sigmoid$Parametric_init_(t_Sigmoid$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sigmoid$Parametric_gradient(t_Sigmoid$Parametric *self, PyObject *args);
        static PyObject *t_Sigmoid$Parametric_value(t_Sigmoid$Parametric *self, PyObject *args);

        static PyMethodDef t_Sigmoid$Parametric__methods_[] = {
          DECLARE_METHOD(t_Sigmoid$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Sigmoid$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sigmoid$Parametric)[] = {
          { Py_tp_methods, t_Sigmoid$Parametric__methods_ },
          { Py_tp_init, (void *) t_Sigmoid$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sigmoid$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sigmoid$Parametric, t_Sigmoid$Parametric, Sigmoid$Parametric);

        void t_Sigmoid$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Sigmoid$Parametric), &PY_TYPE_DEF(Sigmoid$Parametric), module, "Sigmoid$Parametric", 0);
        }

        void t_Sigmoid$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "class_", make_descriptor(Sigmoid$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "wrapfn_", make_descriptor(t_Sigmoid$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sigmoid$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sigmoid$Parametric::initializeClass, 1)))
            return NULL;
          return t_Sigmoid$Parametric::wrap_Object(Sigmoid$Parametric(((t_Sigmoid$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Sigmoid$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sigmoid$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sigmoid$Parametric_init_(t_Sigmoid$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Sigmoid$Parametric object((jobject) NULL);

          INT_CALL(object = Sigmoid$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sigmoid$Parametric_gradient(t_Sigmoid$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Sigmoid$Parametric_value(t_Sigmoid$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/EnumeratedDistribution.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *EnumeratedDistribution::class$ = NULL;
      jmethodID *EnumeratedDistribution::mids$ = NULL;
      bool EnumeratedDistribution::live$ = false;

      jclass EnumeratedDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/EnumeratedDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_checkAndNormalize_4b742fe429c22ba8] = env->getStaticMethodID(cls, "checkAndNormalize", "([D)[D");
          mids$[mid_getPmf_a6156df500549a58] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
          mids$[mid_probability_e3f3de73aa96b6d9] = env->getMethodID(cls, "probability", "(Ljava/lang/Object;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EnumeratedDistribution::EnumeratedDistribution(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

      JArray< jdouble > EnumeratedDistribution::checkAndNormalize(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_checkAndNormalize_4b742fe429c22ba8], a0.this$));
      }

      ::java::util::List EnumeratedDistribution::getPmf() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_a6156df500549a58]));
      }

      jdouble EnumeratedDistribution::probability(const ::java::lang::Object & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_e3f3de73aa96b6d9], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      static PyObject *t_EnumeratedDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_of_(t_EnumeratedDistribution *self, PyObject *args);
      static int t_EnumeratedDistribution_init_(t_EnumeratedDistribution *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EnumeratedDistribution_checkAndNormalize(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_getPmf(t_EnumeratedDistribution *self);
      static PyObject *t_EnumeratedDistribution_probability(t_EnumeratedDistribution *self, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_get__pmf(t_EnumeratedDistribution *self, void *data);
      static PyObject *t_EnumeratedDistribution_get__parameters_(t_EnumeratedDistribution *self, void *data);
      static PyGetSetDef t_EnumeratedDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_EnumeratedDistribution, pmf),
        DECLARE_GET_FIELD(t_EnumeratedDistribution, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EnumeratedDistribution__methods_[] = {
        DECLARE_METHOD(t_EnumeratedDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, of_, METH_VARARGS),
        DECLARE_METHOD(t_EnumeratedDistribution, checkAndNormalize, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, getPmf, METH_NOARGS),
        DECLARE_METHOD(t_EnumeratedDistribution, probability, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EnumeratedDistribution)[] = {
        { Py_tp_methods, t_EnumeratedDistribution__methods_ },
        { Py_tp_init, (void *) t_EnumeratedDistribution_init_ },
        { Py_tp_getset, t_EnumeratedDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EnumeratedDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EnumeratedDistribution, t_EnumeratedDistribution, EnumeratedDistribution);
      PyObject *t_EnumeratedDistribution::wrap_Object(const EnumeratedDistribution& object, PyTypeObject *p0)
      {
        PyObject *obj = t_EnumeratedDistribution::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_EnumeratedDistribution *self = (t_EnumeratedDistribution *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_EnumeratedDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_EnumeratedDistribution::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_EnumeratedDistribution *self = (t_EnumeratedDistribution *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_EnumeratedDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(EnumeratedDistribution), &PY_TYPE_DEF(EnumeratedDistribution), module, "EnumeratedDistribution", 0);
      }

      void t_EnumeratedDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "class_", make_descriptor(EnumeratedDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "wrapfn_", make_descriptor(t_EnumeratedDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EnumeratedDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EnumeratedDistribution::initializeClass, 1)))
          return NULL;
        return t_EnumeratedDistribution::wrap_Object(EnumeratedDistribution(((t_EnumeratedDistribution *) arg)->object.this$));
      }
      static PyObject *t_EnumeratedDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EnumeratedDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EnumeratedDistribution_of_(t_EnumeratedDistribution *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_EnumeratedDistribution_init_(t_EnumeratedDistribution *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        EnumeratedDistribution object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = EnumeratedDistribution(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EnumeratedDistribution_checkAndNormalize(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::distribution::EnumeratedDistribution::checkAndNormalize(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "checkAndNormalize", arg);
        return NULL;
      }

      static PyObject *t_EnumeratedDistribution_getPmf(t_EnumeratedDistribution *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPmf());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_EnumeratedDistribution_probability(t_EnumeratedDistribution *self, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "O", self->parameters[0], &a0))
        {
          OBJ_CALL(result = self->object.probability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "probability", arg);
        return NULL;
      }
      static PyObject *t_EnumeratedDistribution_get__parameters_(t_EnumeratedDistribution *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_EnumeratedDistribution_get__pmf(t_EnumeratedDistribution *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPmf());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonMeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonMeasurementCombination::class$ = NULL;
          jmethodID *PythonMeasurementCombination::mids$ = NULL;
          bool PythonMeasurementCombination::live$ = false;

          jclass PythonMeasurementCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonMeasurementCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_combine_d8c8276403544c3f] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementCombination::PythonMeasurementCombination() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonMeasurementCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonMeasurementCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonMeasurementCombination::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonMeasurementCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMeasurementCombination_init_(t_PythonMeasurementCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementCombination_finalize(t_PythonMeasurementCombination *self);
          static PyObject *t_PythonMeasurementCombination_pythonExtension(t_PythonMeasurementCombination *self, PyObject *args);
          static jobject JNICALL t_PythonMeasurementCombination_combine0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonMeasurementCombination_getName1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonMeasurementCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementCombination_get__self(t_PythonMeasurementCombination *self, void *data);
          static PyGetSetDef t_PythonMeasurementCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementCombination__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementCombination)[] = {
            { Py_tp_methods, t_PythonMeasurementCombination__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementCombination_init_ },
            { Py_tp_getset, t_PythonMeasurementCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementCombination, t_PythonMeasurementCombination, PythonMeasurementCombination);

          void t_PythonMeasurementCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementCombination), &PY_TYPE_DEF(PythonMeasurementCombination), module, "PythonMeasurementCombination", 1);
          }

          void t_PythonMeasurementCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "class_", make_descriptor(PythonMeasurementCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "wrapfn_", make_descriptor(t_PythonMeasurementCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;", (void *) t_PythonMeasurementCombination_combine0 },
              { "getName", "()Ljava/lang/String;", (void *) t_PythonMeasurementCombination_getName1 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementCombination_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonMeasurementCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementCombination::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementCombination::wrap_Object(PythonMeasurementCombination(((t_PythonMeasurementCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMeasurementCombination_init_(t_PythonMeasurementCombination *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementCombination object((jobject) NULL);

            INT_CALL(object = PythonMeasurementCombination());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementCombination_finalize(t_PythonMeasurementCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementCombination_pythonExtension(t_PythonMeasurementCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonMeasurementCombination_combine0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet value((jobject) NULL);
            PyObject *o0 = ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(::org::orekit::files::rinex::observation::ObservationDataSet(a0));
            PyObject *result = PyObject_CallMethod(obj, "combine", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet::initializeClass, &value))
            {
              throwTypeError("combine", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonMeasurementCombination_getName1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::lang::String value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getName", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "s", &value))
            {
              throwTypeError("getName", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonMeasurementCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementCombination_get__self(t_PythonMeasurementCombination *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexSecondaryODE::class$ = NULL;
      jmethodID *ComplexSecondaryODE::mids$ = NULL;
      bool ComplexSecondaryODE::live$ = false;

      jclass ComplexSecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexSecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_6687faa09723eb32] = env->getMethodID(cls, "computeDerivatives", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_70aa72302203b41a] = env->getMethodID(cls, "init", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexSecondaryODE::computeDerivatives(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, const JArray< ::org::hipparchus::complex::Complex > & a3) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_6687faa09723eb32], a0, a1.this$, a2.this$, a3.this$));
      }

      jint ComplexSecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      void ComplexSecondaryODE::init(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_70aa72302203b41a], a0, a1.this$, a2.this$, a3);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_ComplexSecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexSecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexSecondaryODE_computeDerivatives(t_ComplexSecondaryODE *self, PyObject *args);
      static PyObject *t_ComplexSecondaryODE_getDimension(t_ComplexSecondaryODE *self);
      static PyObject *t_ComplexSecondaryODE_init(t_ComplexSecondaryODE *self, PyObject *args);
      static PyObject *t_ComplexSecondaryODE_get__dimension(t_ComplexSecondaryODE *self, void *data);
      static PyGetSetDef t_ComplexSecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexSecondaryODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexSecondaryODE__methods_[] = {
        DECLARE_METHOD(t_ComplexSecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexSecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexSecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ComplexSecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexSecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexSecondaryODE)[] = {
        { Py_tp_methods, t_ComplexSecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexSecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexSecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexSecondaryODE, t_ComplexSecondaryODE, ComplexSecondaryODE);

      void t_ComplexSecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexSecondaryODE), &PY_TYPE_DEF(ComplexSecondaryODE), module, "ComplexSecondaryODE", 0);
      }

      void t_ComplexSecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "class_", make_descriptor(ComplexSecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "wrapfn_", make_descriptor(t_ComplexSecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexSecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexSecondaryODE::initializeClass, 1)))
          return NULL;
        return t_ComplexSecondaryODE::wrap_Object(ComplexSecondaryODE(((t_ComplexSecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_ComplexSecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexSecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexSecondaryODE_computeDerivatives(t_ComplexSecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a3((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArgs(args, "D[k[k[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ComplexSecondaryODE_getDimension(t_ComplexSecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexSecondaryODE_init(t_ComplexSecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
        jdouble a3;

        if (!parseArgs(args, "D[k[kD", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ComplexSecondaryODE_get__dimension(t_ComplexSecondaryODE *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *TideSystem::class$ = NULL;
          jmethodID *TideSystem::mids$ = NULL;
          bool TideSystem::live$ = false;
          TideSystem *TideSystem::TIDE_FREE = NULL;
          TideSystem *TideSystem::UNKNOWN = NULL;
          TideSystem *TideSystem::ZERO_TIDE = NULL;

          jclass TideSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/TideSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_4bc8f27efb8cfbb6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_values_0d5df8554e1bc479] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/gravity/potential/TideSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              TIDE_FREE = new TideSystem(env->getStaticObjectField(cls, "TIDE_FREE", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              UNKNOWN = new TideSystem(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              ZERO_TIDE = new TideSystem(env->getStaticObjectField(cls, "ZERO_TIDE", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TideSystem TideSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TideSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4bc8f27efb8cfbb6], a0.this$));
          }

          JArray< TideSystem > TideSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< TideSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_0d5df8554e1bc479]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_TideSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystem_of_(t_TideSystem *self, PyObject *args);
          static PyObject *t_TideSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_TideSystem_values(PyTypeObject *type);
          static PyObject *t_TideSystem_get__parameters_(t_TideSystem *self, void *data);
          static PyGetSetDef t_TideSystem__fields_[] = {
            DECLARE_GET_FIELD(t_TideSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TideSystem__methods_[] = {
            DECLARE_METHOD(t_TideSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_TideSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TideSystem)[] = {
            { Py_tp_methods, t_TideSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TideSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TideSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(TideSystem, t_TideSystem, TideSystem);
          PyObject *t_TideSystem::wrap_Object(const TideSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TideSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TideSystem *self = (t_TideSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TideSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TideSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TideSystem *self = (t_TideSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TideSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(TideSystem), &PY_TYPE_DEF(TideSystem), module, "TideSystem", 0);
          }

          void t_TideSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "class_", make_descriptor(TideSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "wrapfn_", make_descriptor(t_TideSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(TideSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "TIDE_FREE", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::TIDE_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "UNKNOWN", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::UNKNOWN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "ZERO_TIDE", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::ZERO_TIDE)));
          }

          static PyObject *t_TideSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TideSystem::initializeClass, 1)))
              return NULL;
            return t_TideSystem::wrap_Object(TideSystem(((t_TideSystem *) arg)->object.this$));
          }
          static PyObject *t_TideSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TideSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TideSystem_of_(t_TideSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_TideSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            TideSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::TideSystem::valueOf(a0));
              return t_TideSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_TideSystem_values(PyTypeObject *type)
          {
            JArray< TideSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::TideSystem::values());
            return JArray<jobject>(result.this$).wrap(t_TideSystem::wrap_jobject);
          }
          static PyObject *t_TideSystem_get__parameters_(t_TideSystem *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "java/lang/String.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3OrbitType::class$ = NULL;
        jmethodID *SP3OrbitType::mids$ = NULL;
        bool SP3OrbitType::live$ = false;
        SP3OrbitType *SP3OrbitType::BCT = NULL;
        SP3OrbitType *SP3OrbitType::EXT = NULL;
        SP3OrbitType *SP3OrbitType::FIT = NULL;
        SP3OrbitType *SP3OrbitType::HLM = NULL;
        SP3OrbitType *SP3OrbitType::OTHER = NULL;

        jclass SP3OrbitType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3OrbitType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parseType_3b155750f3ee076d] = env->getStaticMethodID(cls, "parseType", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_valueOf_3b155750f3ee076d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_values_76577a84ada8cfc9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/SP3OrbitType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BCT = new SP3OrbitType(env->getStaticObjectField(cls, "BCT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            EXT = new SP3OrbitType(env->getStaticObjectField(cls, "EXT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            FIT = new SP3OrbitType(env->getStaticObjectField(cls, "FIT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            HLM = new SP3OrbitType(env->getStaticObjectField(cls, "HLM", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            OTHER = new SP3OrbitType(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3OrbitType SP3OrbitType::parseType(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3OrbitType(env->callStaticObjectMethod(cls, mids$[mid_parseType_3b155750f3ee076d], a0.this$));
        }

        SP3OrbitType SP3OrbitType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3OrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3b155750f3ee076d], a0.this$));
        }

        JArray< SP3OrbitType > SP3OrbitType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SP3OrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_76577a84ada8cfc9]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        static PyObject *t_SP3OrbitType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_of_(t_SP3OrbitType *self, PyObject *args);
        static PyObject *t_SP3OrbitType_parseType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3OrbitType_values(PyTypeObject *type);
        static PyObject *t_SP3OrbitType_get__parameters_(t_SP3OrbitType *self, void *data);
        static PyGetSetDef t_SP3OrbitType__fields_[] = {
          DECLARE_GET_FIELD(t_SP3OrbitType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3OrbitType__methods_[] = {
          DECLARE_METHOD(t_SP3OrbitType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SP3OrbitType, parseType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3OrbitType)[] = {
          { Py_tp_methods, t_SP3OrbitType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SP3OrbitType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3OrbitType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SP3OrbitType, t_SP3OrbitType, SP3OrbitType);
        PyObject *t_SP3OrbitType::wrap_Object(const SP3OrbitType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3OrbitType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3OrbitType *self = (t_SP3OrbitType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3OrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3OrbitType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3OrbitType *self = (t_SP3OrbitType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3OrbitType::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3OrbitType), &PY_TYPE_DEF(SP3OrbitType), module, "SP3OrbitType", 0);
        }

        void t_SP3OrbitType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "class_", make_descriptor(SP3OrbitType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "wrapfn_", make_descriptor(t_SP3OrbitType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3OrbitType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "BCT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::BCT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "EXT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::EXT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "FIT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::FIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "HLM", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::HLM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "OTHER", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::OTHER)));
        }

        static PyObject *t_SP3OrbitType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3OrbitType::initializeClass, 1)))
            return NULL;
          return t_SP3OrbitType::wrap_Object(SP3OrbitType(((t_SP3OrbitType *) arg)->object.this$));
        }
        static PyObject *t_SP3OrbitType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3OrbitType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3OrbitType_of_(t_SP3OrbitType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SP3OrbitType_parseType(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3OrbitType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::parseType(a0));
            return t_SP3OrbitType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parseType", arg);
          return NULL;
        }

        static PyObject *t_SP3OrbitType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3OrbitType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::valueOf(a0));
            return t_SP3OrbitType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SP3OrbitType_values(PyTypeObject *type)
        {
          JArray< SP3OrbitType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::values());
          return JArray<jobject>(result.this$).wrap(t_SP3OrbitType::wrap_jobject);
        }
        static PyObject *t_SP3OrbitType_get__parameters_(t_SP3OrbitType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}

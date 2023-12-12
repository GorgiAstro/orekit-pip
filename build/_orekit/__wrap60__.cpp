#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Blendable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrix::class$ = NULL;
      jmethodID *RealMatrix::mids$ = NULL;
      bool RealMatrix::live$ = false;

      jclass RealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_340b47d21842d02c] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_addToEntry_754312f3734d6e2f] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_blendArithmeticallyWith_a5ade44f7c8eaa17] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/linear/RealMatrix;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copy_70a207fcbc031df2] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copySubMatrix_d61768f3ffd9b2b0] = env->getMethodID(cls, "copySubMatrix", "([I[I[[D)V");
          mids$[mid_copySubMatrix_275b967e785238bf] = env->getMethodID(cls, "copySubMatrix", "(IIII[[D)V");
          mids$[mid_createMatrix_e8546415f980523f] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumn_1da5c9e77f24f269] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnMatrix_aec3de0a701ae468] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnVector_2a32cae841870443] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_8cf5267aa13a77f3] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_21b81d54c06b64b0] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_557b8123390d8d0c] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getNorm1_557b8123390d8d0c] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInfty_557b8123390d8d0c] = env->getMethodID(cls, "getNormInfty", "()D");
          mids$[mid_getRow_1da5c9e77f24f269] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowMatrix_aec3de0a701ae468] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowVector_2a32cae841870443] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_5948417ecf6c62f4] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSubMatrix_dd66ee2a79d86a98] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getTrace_557b8123390d8d0c] = env->getMethodID(cls, "getTrace", "()D");
          mids$[mid_map_3634b37a29ba1206] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_mapToSelf_3634b37a29ba1206] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiply_340b47d21842d02c] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_754312f3734d6e2f] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_340b47d21842d02c] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_1db7c087750eaffe] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_operate_342d5b01463e0dc5] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_power_aec3de0a701ae468] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_preMultiply_1db7c087750eaffe] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_342d5b01463e0dc5] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_preMultiply_340b47d21842d02c] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarAdd_e95e381257af03e9] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarMultiply_e95e381257af03e9] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_3246bd31f432242d] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_4fd5e02248c1a963] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_a967cf1fffd0038f] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_754312f3734d6e2f] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_3246bd31f432242d] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_4fd5e02248c1a963] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_a967cf1fffd0038f] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_672f554eb45cea1a] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_340b47d21842d02c] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transpose_70a207fcbc031df2] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transposeMultiply_340b47d21842d02c] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_f151009359824fc3] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_3f821bf796d1a7b4] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_ab19ce00fffb9224] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_b64b35af60f84c7f] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_f151009359824fc3] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_3f821bf796d1a7b4] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_ab19ce00fffb9224] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_b64b35af60f84c7f] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_f151009359824fc3] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_3f821bf796d1a7b4] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_ab19ce00fffb9224] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_b64b35af60f84c7f] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealMatrix RealMatrix::add(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_add_340b47d21842d02c], a0.this$));
      }

      void RealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_754312f3734d6e2f], a0, a1, a2);
      }

      RealMatrix RealMatrix::blendArithmeticallyWith(const RealMatrix & a0, jdouble a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_a5ade44f7c8eaa17], a0.this$, a1));
      }

      RealMatrix RealMatrix::copy() const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_70a207fcbc031df2]));
      }

      void RealMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< jdouble > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_d61768f3ffd9b2b0], a0.this$, a1.this$, a2.this$);
      }

      void RealMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< jdouble > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_275b967e785238bf], a0, a1, a2, a3, a4.this$);
      }

      RealMatrix RealMatrix::createMatrix(jint a0, jint a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_e8546415f980523f], a0, a1));
      }

      JArray< jdouble > RealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_1da5c9e77f24f269], a0));
      }

      RealMatrix RealMatrix::getColumnMatrix(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_aec3de0a701ae468], a0));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_2a32cae841870443], a0));
      }

      JArray< JArray< jdouble > > RealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_8cf5267aa13a77f3]));
      }

      jdouble RealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_21b81d54c06b64b0], a0, a1);
      }

      jdouble RealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_557b8123390d8d0c]);
      }

      jdouble RealMatrix::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_557b8123390d8d0c]);
      }

      jdouble RealMatrix::getNormInfty() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInfty_557b8123390d8d0c]);
      }

      JArray< jdouble > RealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_1da5c9e77f24f269], a0));
      }

      RealMatrix RealMatrix::getRowMatrix(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_aec3de0a701ae468], a0));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_2a32cae841870443], a0));
      }

      RealMatrix RealMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_5948417ecf6c62f4], a0.this$, a1.this$));
      }

      RealMatrix RealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_dd66ee2a79d86a98], a0, a1, a2, a3));
      }

      jdouble RealMatrix::getTrace() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrace_557b8123390d8d0c]);
      }

      RealMatrix RealMatrix::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_map_3634b37a29ba1206], a0.this$));
      }

      RealMatrix RealMatrix::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_mapToSelf_3634b37a29ba1206], a0.this$));
      }

      RealMatrix RealMatrix::multiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_340b47d21842d02c], a0.this$));
      }

      void RealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_754312f3734d6e2f], a0, a1, a2);
      }

      RealMatrix RealMatrix::multiplyTransposed(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_340b47d21842d02c], a0.this$));
      }

      JArray< jdouble > RealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_1db7c087750eaffe], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_342d5b01463e0dc5], a0.this$));
      }

      RealMatrix RealMatrix::power(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_power_aec3de0a701ae468], a0));
      }

      JArray< jdouble > RealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_1db7c087750eaffe], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_342d5b01463e0dc5], a0.this$));
      }

      RealMatrix RealMatrix::preMultiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_340b47d21842d02c], a0.this$));
      }

      RealMatrix RealMatrix::scalarAdd(jdouble a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_e95e381257af03e9], a0));
      }

      RealMatrix RealMatrix::scalarMultiply(jdouble a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_e95e381257af03e9], a0));
      }

      void RealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_3246bd31f432242d], a0, a1.this$);
      }

      void RealMatrix::setColumnMatrix(jint a0, const RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_4fd5e02248c1a963], a0, a1.this$);
      }

      void RealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_a967cf1fffd0038f], a0, a1.this$);
      }

      void RealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_754312f3734d6e2f], a0, a1, a2);
      }

      void RealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_3246bd31f432242d], a0, a1.this$);
      }

      void RealMatrix::setRowMatrix(jint a0, const RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_4fd5e02248c1a963], a0, a1.this$);
      }

      void RealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_a967cf1fffd0038f], a0, a1.this$);
      }

      void RealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_672f554eb45cea1a], a0.this$, a1, a2);
      }

      RealMatrix RealMatrix::subtract(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_340b47d21842d02c], a0.this$));
      }

      RealMatrix RealMatrix::transpose() const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_70a207fcbc031df2]));
      }

      RealMatrix RealMatrix::transposeMultiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_340b47d21842d02c], a0.this$));
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_f151009359824fc3], a0.this$);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_3f821bf796d1a7b4], a0.this$);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_ab19ce00fffb9224], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_b64b35af60f84c7f], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_f151009359824fc3], a0.this$);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_3f821bf796d1a7b4], a0.this$);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_ab19ce00fffb9224], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_b64b35af60f84c7f], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_f151009359824fc3], a0.this$);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_3f821bf796d1a7b4], a0.this$);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_ab19ce00fffb9224], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_b64b35af60f84c7f], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_RealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrix_add(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_addToEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_blendArithmeticallyWith(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_copy(t_RealMatrix *self);
      static PyObject *t_RealMatrix_copySubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_createMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getColumn(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getColumnMatrix(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getColumnVector(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getData(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getFrobeniusNorm(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getNorm1(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getNormInfty(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getRow(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getRowMatrix(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getRowVector(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getSubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getTrace(t_RealMatrix *self);
      static PyObject *t_RealMatrix_map(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_mapToSelf(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_multiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_multiplyEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_multiplyTransposed(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_operate(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_power(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_preMultiply(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_scalarAdd(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_scalarMultiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_setColumn(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setColumnMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setColumnVector(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRow(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRowMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRowVector(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setSubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_subtract(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_transpose(t_RealMatrix *self);
      static PyObject *t_RealMatrix_transposeMultiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_walkInColumnOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_walkInOptimizedOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_walkInRowOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_get__data(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__frobeniusNorm(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__norm1(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__normInfty(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__trace(t_RealMatrix *self, void *data);
      static PyGetSetDef t_RealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_RealMatrix, data),
        DECLARE_GET_FIELD(t_RealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_RealMatrix, norm1),
        DECLARE_GET_FIELD(t_RealMatrix, normInfty),
        DECLARE_GET_FIELD(t_RealMatrix, trace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealMatrix__methods_[] = {
        DECLARE_METHOD(t_RealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrix, add, METH_O),
        DECLARE_METHOD(t_RealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_RealMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_RealMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_RealMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getFrobeniusNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getNorm1, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getNormInfty, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getRow, METH_O),
        DECLARE_METHOD(t_RealMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_RealMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_RealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, map, METH_O),
        DECLARE_METHOD(t_RealMatrix, mapToSelf, METH_O),
        DECLARE_METHOD(t_RealMatrix, multiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, multiplyTransposed, METH_O),
        DECLARE_METHOD(t_RealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, power, METH_O),
        DECLARE_METHOD(t_RealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_RealMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, subtract, METH_O),
        DECLARE_METHOD(t_RealMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, transposeMultiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrix)[] = {
        { Py_tp_methods, t_RealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AnyMatrix),
        NULL
      };

      DEFINE_TYPE(RealMatrix, t_RealMatrix, RealMatrix);

      void t_RealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrix), &PY_TYPE_DEF(RealMatrix), module, "RealMatrix", 0);
      }

      void t_RealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "class_", make_descriptor(RealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "wrapfn_", make_descriptor(t_RealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrix::initializeClass, 1)))
          return NULL;
        return t_RealMatrix::wrap_Object(RealMatrix(((t_RealMatrix *) arg)->object.this$));
      }
      static PyObject *t_RealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrix_add(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_addToEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_blendArithmeticallyWith(t_RealMatrix *self, PyObject *args)
      {
        RealMatrix a0((jobject) NULL);
        jdouble a1;
        RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kD", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_copy(t_RealMatrix *self)
      {
        RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RealMatrix_copySubMatrix(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[I[I[[D", &a0, &a1, &a2))
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
            JArray< JArray< jdouble > > a4((jobject) NULL);

            if (!parseArgs(args, "IIII[[D", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_createMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumn(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumnMatrix(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumnVector(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getData(t_RealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_RealMatrix_getEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getFrobeniusNorm(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getNorm1(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getNormInfty(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormInfty());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getRow(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getRowMatrix(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getRowVector(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getSubMatrix(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getTrace(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrace());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_map(t_RealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "map", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_mapToSelf(t_RealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiply(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiplyEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiplyTransposed(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyTransposed", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_operate(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_power(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_preMultiply(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            RealMatrix a0((jobject) NULL);
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_scalarAdd(t_RealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_scalarMultiply(t_RealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumn(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumnMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumnVector(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRow(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRowMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRowVector(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setSubMatrix(t_RealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_subtract(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_transpose(t_RealMatrix *self)
      {
        RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RealMatrix_transposeMultiply(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "transposeMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInColumnOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInOptimizedOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInRowOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_get__data(t_RealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_RealMatrix_get__frobeniusNorm(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__norm1(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__normInfty(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInfty());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__trace(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrace());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseTroposphericDelayModifier::class$ = NULL;
          jmethodID *PhaseTroposphericDelayModifier::mids$ = NULL;
          bool PhaseTroposphericDelayModifier::live$ = false;

          jclass PhaseTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b6cf54f3c9220bc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseTroposphericDelayModifier::PhaseTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6cf54f3c9220bc7, a0.this$)) {}

          ::java::util::List PhaseTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void PhaseTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void PhaseTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
        namespace modifiers {
          static PyObject *t_PhaseTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseTroposphericDelayModifier_init_(t_PhaseTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseTroposphericDelayModifier_getParametersDrivers(t_PhaseTroposphericDelayModifier *self);
          static PyObject *t_PhaseTroposphericDelayModifier_modify(t_PhaseTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_modifyWithoutDerivatives(t_PhaseTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_get__parametersDrivers(t_PhaseTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_PhaseTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_PhaseTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_PhaseTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseTroposphericDelayModifier, t_PhaseTroposphericDelayModifier, PhaseTroposphericDelayModifier);

          void t_PhaseTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseTroposphericDelayModifier), &PY_TYPE_DEF(PhaseTroposphericDelayModifier), module, "PhaseTroposphericDelayModifier", 0);
          }

          void t_PhaseTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "class_", make_descriptor(PhaseTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "wrapfn_", make_descriptor(t_PhaseTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseTroposphericDelayModifier::wrap_Object(PhaseTroposphericDelayModifier(((t_PhaseTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseTroposphericDelayModifier_init_(t_PhaseTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            PhaseTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = PhaseTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseTroposphericDelayModifier_getParametersDrivers(t_PhaseTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseTroposphericDelayModifier_modify(t_PhaseTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_PhaseTroposphericDelayModifier_modifyWithoutDerivatives(t_PhaseTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_PhaseTroposphericDelayModifier_get__parametersDrivers(t_PhaseTroposphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/String.h"
#include "java/lang/StringBuilder.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/Iterable.h"
#include "java/util/Locale.h"
#include "java/util/Comparator.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/util/stream/Stream.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *String::class$ = NULL;
    jmethodID *String::mids$ = NULL;
    bool String::live$ = false;
    ::java::util::Comparator *String::CASE_INSENSITIVE_ORDER = NULL;

    jclass String::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/String");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_49deac4a1f3c8251] = env->getMethodID(cls, "<init>", "(Ljava/lang/StringBuffer;)V");
        mids$[mid_init$_cc721af50c26f2c0] = env->getMethodID(cls, "<init>", "(Ljava/lang/StringBuilder;)V");
        mids$[mid_init$_d759c70c6670fd89] = env->getMethodID(cls, "<init>", "([B)V");
        mids$[mid_init$_916bf6d42d285c69] = env->getMethodID(cls, "<init>", "([C)V");
        mids$[mid_init$_71c023902f34f4ff] = env->getMethodID(cls, "<init>", "([BLjava/lang/String;)V");
        mids$[mid_init$_06927c633a4e39a9] = env->getMethodID(cls, "<init>", "([BI)V");
        mids$[mid_init$_ac782c7077255dd3] = env->getMethodID(cls, "<init>", "([BII)V");
        mids$[mid_init$_5421d1c1f03cf945] = env->getMethodID(cls, "<init>", "([CII)V");
        mids$[mid_init$_6e90031d211c9708] = env->getMethodID(cls, "<init>", "([III)V");
        mids$[mid_init$_e545af98154aef15] = env->getMethodID(cls, "<init>", "([BIILjava/lang/String;)V");
        mids$[mid_init$_36f62450844d555f] = env->getMethodID(cls, "<init>", "([BIII)V");
        mids$[mid_charAt_4affd00329d5d4cf] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_0092017e99012694] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_0092017e99012694] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_5625cf3db98dadc1] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_compareTo_a6602ba493f77974] = env->getMethodID(cls, "compareTo", "(Ljava/lang/String;)I");
        mids$[mid_compareToIgnoreCase_a6602ba493f77974] = env->getMethodID(cls, "compareToIgnoreCase", "(Ljava/lang/String;)I");
        mids$[mid_concat_60bb1b490b673cbf] = env->getMethodID(cls, "concat", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_contains_5a9971a665a2a1ae] = env->getMethodID(cls, "contains", "(Ljava/lang/CharSequence;)Z");
        mids$[mid_contentEquals_29fd06131cd190d5] = env->getMethodID(cls, "contentEquals", "(Ljava/lang/StringBuffer;)Z");
        mids$[mid_contentEquals_5a9971a665a2a1ae] = env->getMethodID(cls, "contentEquals", "(Ljava/lang/CharSequence;)Z");
        mids$[mid_copyValueOf_019265aa2e3f6a5e] = env->getStaticMethodID(cls, "copyValueOf", "([C)Ljava/lang/String;");
        mids$[mid_copyValueOf_18fb590a4349320e] = env->getStaticMethodID(cls, "copyValueOf", "([CII)Ljava/lang/String;");
        mids$[mid_endsWith_fd2162b8a05a22fe] = env->getMethodID(cls, "endsWith", "(Ljava/lang/String;)Z");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_equalsIgnoreCase_fd2162b8a05a22fe] = env->getMethodID(cls, "equalsIgnoreCase", "(Ljava/lang/String;)Z");
        mids$[mid_format_46364ebe4fe35fca] = env->getStaticMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_format_120989496d3396e1] = env->getStaticMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_getBytes_db390e6336d82be3] = env->getMethodID(cls, "getBytes", "()[B");
        mids$[mid_getBytes_01895d4b83897a8e] = env->getMethodID(cls, "getBytes", "(Ljava/lang/String;)[B");
        mids$[mid_getBytes_f9e67f939ad9e0e1] = env->getMethodID(cls, "getBytes", "(II[BI)V");
        mids$[mid_getChars_def23ac70d649d11] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_a6602ba493f77974] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_0092017e99012694] = env->getMethodID(cls, "indexOf", "(I)I");
        mids$[mid_indexOf_f5fd9af3faa747d5] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_indexOf_5625cf3db98dadc1] = env->getMethodID(cls, "indexOf", "(II)I");
        mids$[mid_intern_3cffd47377eca18a] = env->getMethodID(cls, "intern", "()Ljava/lang/String;");
        mids$[mid_isBlank_89b302893bdbe1f1] = env->getMethodID(cls, "isBlank", "()Z");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_join_bbd9cb23e518eeaf] = env->getStaticMethodID(cls, "join", "(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/String;");
        mids$[mid_join_04e42523fba4bea7] = env->getStaticMethodID(cls, "join", "(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;");
        mids$[mid_lastIndexOf_a6602ba493f77974] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_0092017e99012694] = env->getMethodID(cls, "lastIndexOf", "(I)I");
        mids$[mid_lastIndexOf_f5fd9af3faa747d5] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_lastIndexOf_5625cf3db98dadc1] = env->getMethodID(cls, "lastIndexOf", "(II)I");
        mids$[mid_length_412668abc8d889e9] = env->getMethodID(cls, "length", "()I");
        mids$[mid_lines_d7cce92225eb0db2] = env->getMethodID(cls, "lines", "()Ljava/util/stream/Stream;");
        mids$[mid_matches_fd2162b8a05a22fe] = env->getMethodID(cls, "matches", "(Ljava/lang/String;)Z");
        mids$[mid_offsetByCodePoints_5625cf3db98dadc1] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_regionMatches_3241c554c97a0407] = env->getMethodID(cls, "regionMatches", "(ILjava/lang/String;II)Z");
        mids$[mid_regionMatches_d93fd603dec17aa4] = env->getMethodID(cls, "regionMatches", "(ZILjava/lang/String;II)Z");
        mids$[mid_repeat_0f10d4a5e06f61c0] = env->getMethodID(cls, "repeat", "(I)Ljava/lang/String;");
        mids$[mid_replace_7d103dd056937320] = env->getMethodID(cls, "replace", "(CC)Ljava/lang/String;");
        mids$[mid_replace_008c0b6449a773bf] = env->getMethodID(cls, "replace", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;");
        mids$[mid_replaceAll_495add03b8c9417b] = env->getMethodID(cls, "replaceAll", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_replaceFirst_495add03b8c9417b] = env->getMethodID(cls, "replaceFirst", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_split_c6b001d9fe3bba6d] = env->getMethodID(cls, "split", "(Ljava/lang/String;)[Ljava/lang/String;");
        mids$[mid_split_67e28a0d1fc6cb86] = env->getMethodID(cls, "split", "(Ljava/lang/String;I)[Ljava/lang/String;");
        mids$[mid_startsWith_fd2162b8a05a22fe] = env->getMethodID(cls, "startsWith", "(Ljava/lang/String;)Z");
        mids$[mid_startsWith_a0a4dacb02cd39c9] = env->getMethodID(cls, "startsWith", "(Ljava/lang/String;I)Z");
        mids$[mid_strip_3cffd47377eca18a] = env->getMethodID(cls, "strip", "()Ljava/lang/String;");
        mids$[mid_stripLeading_3cffd47377eca18a] = env->getMethodID(cls, "stripLeading", "()Ljava/lang/String;");
        mids$[mid_stripTrailing_3cffd47377eca18a] = env->getMethodID(cls, "stripTrailing", "()Ljava/lang/String;");
        mids$[mid_subSequence_581d824833fd6c72] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_0f10d4a5e06f61c0] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_637f0334ff6ee92d] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toCharArray_36b234749513863e] = env->getMethodID(cls, "toCharArray", "()[C");
        mids$[mid_toLowerCase_3cffd47377eca18a] = env->getMethodID(cls, "toLowerCase", "()Ljava/lang/String;");
        mids$[mid_toLowerCase_4b51060c6b7ea981] = env->getMethodID(cls, "toLowerCase", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toUpperCase_3cffd47377eca18a] = env->getMethodID(cls, "toUpperCase", "()Ljava/lang/String;");
        mids$[mid_toUpperCase_4b51060c6b7ea981] = env->getMethodID(cls, "toUpperCase", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_trim_3cffd47377eca18a] = env->getMethodID(cls, "trim", "()Ljava/lang/String;");
        mids$[mid_valueOf_019265aa2e3f6a5e] = env->getStaticMethodID(cls, "valueOf", "([C)Ljava/lang/String;");
        mids$[mid_valueOf_2d14bb496c734036] = env->getStaticMethodID(cls, "valueOf", "(Z)Ljava/lang/String;");
        mids$[mid_valueOf_2e13aecc9b888e11] = env->getStaticMethodID(cls, "valueOf", "(C)Ljava/lang/String;");
        mids$[mid_valueOf_c03a7791f2fcb1f1] = env->getStaticMethodID(cls, "valueOf", "(D)Ljava/lang/String;");
        mids$[mid_valueOf_d2dc74ed6e6ec7d8] = env->getStaticMethodID(cls, "valueOf", "(F)Ljava/lang/String;");
        mids$[mid_valueOf_0f10d4a5e06f61c0] = env->getStaticMethodID(cls, "valueOf", "(I)Ljava/lang/String;");
        mids$[mid_valueOf_fa48e6cfb0766bbf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_valueOf_dffed0dde596e613] = env->getStaticMethodID(cls, "valueOf", "(J)Ljava/lang/String;");
        mids$[mid_valueOf_18fb590a4349320e] = env->getStaticMethodID(cls, "valueOf", "([CII)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CASE_INSENSITIVE_ORDER = new ::java::util::Comparator(env->getStaticObjectField(cls, "CASE_INSENSITIVE_ORDER", "Ljava/util/Comparator;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    String::String() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    String::String(const ::java::lang::StringBuffer & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49deac4a1f3c8251, a0.this$)) {}

    String::String(const ::java::lang::StringBuilder & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc721af50c26f2c0, a0.this$)) {}

    String::String(const JArray< jbyte > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d759c70c6670fd89, a0.this$)) {}

    String::String(const JArray< jchar > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_916bf6d42d285c69, a0.this$)) {}

    String::String(const JArray< jbyte > & a0, const String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71c023902f34f4ff, a0.this$, a1.this$)) {}

    String::String(const JArray< jbyte > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06927c633a4e39a9, a0.this$, a1)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ac782c7077255dd3, a0.this$, a1, a2)) {}

    String::String(const JArray< jchar > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5421d1c1f03cf945, a0.this$, a1, a2)) {}

    String::String(const JArray< jint > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e90031d211c9708, a0.this$, a1, a2)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2, const String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e545af98154aef15, a0.this$, a1, a2, a3.this$)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_36f62450844d555f, a0.this$, a1, a2, a3)) {}

    jchar String::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_4affd00329d5d4cf], a0);
    }

    jint String::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_0092017e99012694], a0);
    }

    jint String::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_0092017e99012694], a0);
    }

    jint String::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_5625cf3db98dadc1], a0, a1);
    }

    jint String::compareTo(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_a6602ba493f77974], a0.this$);
    }

    jint String::compareToIgnoreCase(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareToIgnoreCase_a6602ba493f77974], a0.this$);
    }

    String String::concat(const String & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_concat_60bb1b490b673cbf], a0.this$));
    }

    jboolean String::contains(const ::java::lang::CharSequence & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_5a9971a665a2a1ae], a0.this$);
    }

    jboolean String::contentEquals(const ::java::lang::StringBuffer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contentEquals_29fd06131cd190d5], a0.this$);
    }

    jboolean String::contentEquals(const ::java::lang::CharSequence & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contentEquals_5a9971a665a2a1ae], a0.this$);
    }

    String String::copyValueOf(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_copyValueOf_019265aa2e3f6a5e], a0.this$));
    }

    String String::copyValueOf(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_copyValueOf_18fb590a4349320e], a0.this$, a1, a2));
    }

    jboolean String::endsWith(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_endsWith_fd2162b8a05a22fe], a0.this$);
    }

    jboolean String::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jboolean String::equalsIgnoreCase(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equalsIgnoreCase_fd2162b8a05a22fe], a0.this$);
    }

    String String::format(const String & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_format_46364ebe4fe35fca], a0.this$, a1.this$));
    }

    String String::format(const ::java::util::Locale & a0, const String & a1, const JArray< ::java::lang::Object > & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_format_120989496d3396e1], a0.this$, a1.this$, a2.this$));
    }

    JArray< jbyte > String::getBytes() const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_getBytes_db390e6336d82be3]));
    }

    JArray< jbyte > String::getBytes(const String & a0) const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_getBytes_01895d4b83897a8e], a0.this$));
    }

    void String::getBytes(jint a0, jint a1, const JArray< jbyte > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getBytes_f9e67f939ad9e0e1], a0, a1, a2.this$, a3);
    }

    void String::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_def23ac70d649d11], a0, a1, a2.this$, a3);
    }

    jint String::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint String::indexOf(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_a6602ba493f77974], a0.this$);
    }

    jint String::indexOf(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_0092017e99012694], a0);
    }

    jint String::indexOf(const String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_f5fd9af3faa747d5], a0.this$, a1);
    }

    jint String::indexOf(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_5625cf3db98dadc1], a0, a1);
    }

    String String::intern() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_intern_3cffd47377eca18a]));
    }

    jboolean String::isBlank() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isBlank_89b302893bdbe1f1]);
    }

    jboolean String::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    String String::join(const ::java::lang::CharSequence & a0, const JArray< ::java::lang::CharSequence > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_join_bbd9cb23e518eeaf], a0.this$, a1.this$));
    }

    String String::join(const ::java::lang::CharSequence & a0, const ::java::lang::Iterable & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_join_04e42523fba4bea7], a0.this$, a1.this$));
    }

    jint String::lastIndexOf(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_a6602ba493f77974], a0.this$);
    }

    jint String::lastIndexOf(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_0092017e99012694], a0);
    }

    jint String::lastIndexOf(const String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_f5fd9af3faa747d5], a0.this$, a1);
    }

    jint String::lastIndexOf(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_5625cf3db98dadc1], a0, a1);
    }

    jint String::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_412668abc8d889e9]);
    }

    ::java::util::stream::Stream String::lines() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_lines_d7cce92225eb0db2]));
    }

    jboolean String::matches(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_matches_fd2162b8a05a22fe], a0.this$);
    }

    jint String::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_5625cf3db98dadc1], a0, a1);
    }

    jboolean String::regionMatches(jint a0, const String & a1, jint a2, jint a3) const
    {
      return env->callBooleanMethod(this$, mids$[mid_regionMatches_3241c554c97a0407], a0, a1.this$, a2, a3);
    }

    jboolean String::regionMatches(jboolean a0, jint a1, const String & a2, jint a3, jint a4) const
    {
      return env->callBooleanMethod(this$, mids$[mid_regionMatches_d93fd603dec17aa4], a0, a1, a2.this$, a3, a4);
    }

    String String::repeat(jint a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_repeat_0f10d4a5e06f61c0], a0));
    }

    String String::replace(jchar a0, jchar a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replace_7d103dd056937320], a0, a1));
    }

    String String::replace(const ::java::lang::CharSequence & a0, const ::java::lang::CharSequence & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replace_008c0b6449a773bf], a0.this$, a1.this$));
    }

    String String::replaceAll(const String & a0, const String & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replaceAll_495add03b8c9417b], a0.this$, a1.this$));
    }

    String String::replaceFirst(const String & a0, const String & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replaceFirst_495add03b8c9417b], a0.this$, a1.this$));
    }

    JArray< String > String::split(const String & a0) const
    {
      return JArray< String >(env->callObjectMethod(this$, mids$[mid_split_c6b001d9fe3bba6d], a0.this$));
    }

    JArray< String > String::split(const String & a0, jint a1) const
    {
      return JArray< String >(env->callObjectMethod(this$, mids$[mid_split_67e28a0d1fc6cb86], a0.this$, a1));
    }

    jboolean String::startsWith(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_startsWith_fd2162b8a05a22fe], a0.this$);
    }

    jboolean String::startsWith(const String & a0, jint a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_startsWith_a0a4dacb02cd39c9], a0.this$, a1);
    }

    String String::strip() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_strip_3cffd47377eca18a]));
    }

    String String::stripLeading() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_stripLeading_3cffd47377eca18a]));
    }

    String String::stripTrailing() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_stripTrailing_3cffd47377eca18a]));
    }

    ::java::lang::CharSequence String::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_581d824833fd6c72], a0, a1));
    }

    String String::substring(jint a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_substring_0f10d4a5e06f61c0], a0));
    }

    String String::substring(jint a0, jint a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_substring_637f0334ff6ee92d], a0, a1));
    }

    JArray< jchar > String::toCharArray() const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_toCharArray_36b234749513863e]));
    }

    String String::toLowerCase() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toLowerCase_3cffd47377eca18a]));
    }

    String String::toLowerCase(const ::java::util::Locale & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toLowerCase_4b51060c6b7ea981], a0.this$));
    }

    String String::toString() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    String String::toUpperCase() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toUpperCase_3cffd47377eca18a]));
    }

    String String::toUpperCase(const ::java::util::Locale & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toUpperCase_4b51060c6b7ea981], a0.this$));
    }

    String String::trim() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_trim_3cffd47377eca18a]));
    }

    String String::valueOf(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_019265aa2e3f6a5e], a0.this$));
    }

    String String::valueOf(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2d14bb496c734036], a0));
    }

    String String::valueOf(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2e13aecc9b888e11], a0));
    }

    String String::valueOf(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c03a7791f2fcb1f1], a0));
    }

    String String::valueOf(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d2dc74ed6e6ec7d8], a0));
    }

    String String::valueOf(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0f10d4a5e06f61c0], a0));
    }

    String String::valueOf(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fa48e6cfb0766bbf], a0.this$));
    }

    String String::valueOf(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dffed0dde596e613], a0));
    }

    String String::valueOf(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_18fb590a4349320e], a0.this$, a1, a2));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_String_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_String_instance_(PyTypeObject *type, PyObject *arg);
    static int t_String_init_(t_String *self, PyObject *args, PyObject *kwds);
    static PyObject *t_String_charAt(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointAt(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointBefore(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointCount(t_String *self, PyObject *args);
    static PyObject *t_String_compareTo(t_String *self, PyObject *arg);
    static PyObject *t_String_compareToIgnoreCase(t_String *self, PyObject *arg);
    static PyObject *t_String_concat(t_String *self, PyObject *arg);
    static PyObject *t_String_contains(t_String *self, PyObject *arg);
    static PyObject *t_String_contentEquals(t_String *self, PyObject *args);
    static PyObject *t_String_copyValueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_endsWith(t_String *self, PyObject *arg);
    static PyObject *t_String_equals(t_String *self, PyObject *args);
    static PyObject *t_String_equalsIgnoreCase(t_String *self, PyObject *arg);
    static PyObject *t_String_format(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_getBytes(t_String *self, PyObject *args);
    static PyObject *t_String_getChars(t_String *self, PyObject *args);
    static PyObject *t_String_hashCode(t_String *self, PyObject *args);
    static PyObject *t_String_indexOf(t_String *self, PyObject *args);
    static PyObject *t_String_intern(t_String *self);
    static PyObject *t_String_isBlank(t_String *self);
    static PyObject *t_String_isEmpty(t_String *self);
    static PyObject *t_String_join(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_lastIndexOf(t_String *self, PyObject *args);
    static PyObject *t_String_length(t_String *self);
    static PyObject *t_String_lines(t_String *self);
    static PyObject *t_String_matches(t_String *self, PyObject *arg);
    static PyObject *t_String_offsetByCodePoints(t_String *self, PyObject *args);
    static PyObject *t_String_regionMatches(t_String *self, PyObject *args);
    static PyObject *t_String_repeat(t_String *self, PyObject *arg);
    static PyObject *t_String_replace(t_String *self, PyObject *args);
    static PyObject *t_String_replaceAll(t_String *self, PyObject *args);
    static PyObject *t_String_replaceFirst(t_String *self, PyObject *args);
    static PyObject *t_String_split(t_String *self, PyObject *args);
    static PyObject *t_String_startsWith(t_String *self, PyObject *args);
    static PyObject *t_String_strip(t_String *self);
    static PyObject *t_String_stripLeading(t_String *self);
    static PyObject *t_String_stripTrailing(t_String *self);
    static PyObject *t_String_subSequence(t_String *self, PyObject *args);
    static PyObject *t_String_substring(t_String *self, PyObject *args);
    static PyObject *t_String_toCharArray(t_String *self);
    static PyObject *t_String_toLowerCase(t_String *self, PyObject *args);
    static PyObject *t_String_toString(t_String *self, PyObject *args);
    static PyObject *t_String_toUpperCase(t_String *self, PyObject *args);
    static PyObject *t_String_trim(t_String *self);
    static PyObject *t_String_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_get__blank(t_String *self, void *data);
    static PyObject *t_String_get__bytes(t_String *self, void *data);
    static PyObject *t_String_get__empty(t_String *self, void *data);
    static PyGetSetDef t_String__fields_[] = {
      DECLARE_GET_FIELD(t_String, blank),
      DECLARE_GET_FIELD(t_String, bytes),
      DECLARE_GET_FIELD(t_String, empty),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_String__methods_[] = {
      DECLARE_METHOD(t_String, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_String, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_String, charAt, METH_O),
      DECLARE_METHOD(t_String, codePointAt, METH_O),
      DECLARE_METHOD(t_String, codePointBefore, METH_O),
      DECLARE_METHOD(t_String, codePointCount, METH_VARARGS),
      DECLARE_METHOD(t_String, compareTo, METH_O),
      DECLARE_METHOD(t_String, compareToIgnoreCase, METH_O),
      DECLARE_METHOD(t_String, concat, METH_O),
      DECLARE_METHOD(t_String, contains, METH_O),
      DECLARE_METHOD(t_String, contentEquals, METH_VARARGS),
      DECLARE_METHOD(t_String, copyValueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, endsWith, METH_O),
      DECLARE_METHOD(t_String, equals, METH_VARARGS),
      DECLARE_METHOD(t_String, equalsIgnoreCase, METH_O),
      DECLARE_METHOD(t_String, format, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, getBytes, METH_VARARGS),
      DECLARE_METHOD(t_String, getChars, METH_VARARGS),
      DECLARE_METHOD(t_String, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_String, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_String, intern, METH_NOARGS),
      DECLARE_METHOD(t_String, isBlank, METH_NOARGS),
      DECLARE_METHOD(t_String, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_String, join, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_String, length, METH_NOARGS),
      DECLARE_METHOD(t_String, lines, METH_NOARGS),
      DECLARE_METHOD(t_String, matches, METH_O),
      DECLARE_METHOD(t_String, offsetByCodePoints, METH_VARARGS),
      DECLARE_METHOD(t_String, regionMatches, METH_VARARGS),
      DECLARE_METHOD(t_String, repeat, METH_O),
      DECLARE_METHOD(t_String, replace, METH_VARARGS),
      DECLARE_METHOD(t_String, replaceAll, METH_VARARGS),
      DECLARE_METHOD(t_String, replaceFirst, METH_VARARGS),
      DECLARE_METHOD(t_String, split, METH_VARARGS),
      DECLARE_METHOD(t_String, startsWith, METH_VARARGS),
      DECLARE_METHOD(t_String, strip, METH_NOARGS),
      DECLARE_METHOD(t_String, stripLeading, METH_NOARGS),
      DECLARE_METHOD(t_String, stripTrailing, METH_NOARGS),
      DECLARE_METHOD(t_String, subSequence, METH_VARARGS),
      DECLARE_METHOD(t_String, substring, METH_VARARGS),
      DECLARE_METHOD(t_String, toCharArray, METH_NOARGS),
      DECLARE_METHOD(t_String, toLowerCase, METH_VARARGS),
      DECLARE_METHOD(t_String, toString, METH_VARARGS),
      DECLARE_METHOD(t_String, toUpperCase, METH_VARARGS),
      DECLARE_METHOD(t_String, trim, METH_NOARGS),
      DECLARE_METHOD(t_String, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(String)[] = {
      { Py_tp_methods, t_String__methods_ },
      { Py_tp_init, (void *) t_String_init_ },
      { Py_tp_getset, t_String__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(String)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(String, t_String, String);

    void t_String::install(PyObject *module)
    {
      installType(&PY_TYPE(String), &PY_TYPE_DEF(String), module, "String", 0);
    }

    void t_String::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "class_", make_descriptor(String::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "wrapfn_", make_descriptor(unboxString));
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "boxfn_", make_descriptor(boxString));
      env->getClass(String::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "CASE_INSENSITIVE_ORDER", make_descriptor(::java::util::t_Comparator::wrap_Object(*String::CASE_INSENSITIVE_ORDER)));
    }

    static PyObject *t_String_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, String::initializeClass, 1)))
        return NULL;
      return t_String::wrap_Object(String(((t_String *) arg)->object.this$));
    }
    static PyObject *t_String_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, String::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_String_init_(t_String *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String object((jobject) NULL);

          INT_CALL(object = String());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::StringBuilder a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuilder::initializeClass, &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          String a1((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[Bs", &a0, &a1))
          {
            INT_CALL(object = String(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BI", &a0, &a1))
          {
            INT_CALL(object = String(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          String a3((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[BIIs", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = String(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BIII", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = String(a0, a1, a2, a3));
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

    static PyObject *t_String_charAt(t_String *self, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.charAt(a0));
        return c2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "charAt", arg);
      return NULL;
    }

    static PyObject *t_String_codePointAt(t_String *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointAt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointAt", arg);
      return NULL;
    }

    static PyObject *t_String_codePointBefore(t_String *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointBefore(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointBefore", arg);
      return NULL;
    }

    static PyObject *t_String_codePointCount(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.codePointCount(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_String_compareTo(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_String_compareToIgnoreCase(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.compareToIgnoreCase(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareToIgnoreCase", arg);
      return NULL;
    }

    static PyObject *t_String_concat(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.concat(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "concat", arg);
      return NULL;
    }

    static PyObject *t_String_contains(t_String *self, PyObject *arg)
    {
      ::java::lang::CharSequence a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_String_contentEquals(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.contentEquals(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.contentEquals(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "contentEquals", args);
      return NULL;
    }

    static PyObject *t_String_copyValueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::copyValueOf(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::copyValueOf(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "copyValueOf", args);
      return NULL;
    }

    static PyObject *t_String_endsWith(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.endsWith(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "endsWith", arg);
      return NULL;
    }

    static PyObject *t_String_equals(t_String *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_String_equalsIgnoreCase(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.equalsIgnoreCase(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equalsIgnoreCase", arg);
      return NULL;
    }

    static PyObject *t_String_format(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::String::format(a0, a1));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::format(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "format", args);
      return NULL;
    }

    static PyObject *t_String_getBytes(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< jbyte > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBytes());
          return result.wrap();
        }
        break;
       case 1:
        {
          String a0((jobject) NULL);
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.getBytes(a0));
            return result.wrap();
          }
        }
        break;
       case 4:
        {
          jint a0;
          jint a1;
          JArray< jbyte > a2((jobject) NULL);
          jint a3;

          if (!parseArgs(args, "II[BI", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.getBytes(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getBytes", args);
      return NULL;
    }

    static PyObject *t_String_getChars(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      JArray< jchar > a2((jobject) NULL);
      jint a3;

      if (!parseArgs(args, "II[CI", &a0, &a1, &a2, &a3))
      {
        OBJ_CALL(self->object.getChars(a0, a1, a2, a3));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "getChars", args);
      return NULL;
    }

    static PyObject *t_String_hashCode(t_String *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_String_indexOf(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", args);
      return NULL;
    }

    static PyObject *t_String_intern(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.intern());
      return j2p(result);
    }

    static PyObject *t_String_isBlank(t_String *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isBlank());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_String_isEmpty(t_String *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_String_join(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          JArray< ::java::lang::CharSequence > a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "O[O", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::String::join(a0, a1));
            return j2p(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          ::java::lang::Iterable a1((jobject) NULL);
          PyTypeObject **p1;
          String result((jobject) NULL);

          if (!parseArgs(args, "OK", ::java::lang::PY_TYPE(CharSequence), ::java::lang::Iterable::initializeClass, &a0, &a1, &p1, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = ::java::lang::String::join(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "join", args);
      return NULL;
    }

    static PyObject *t_String_lastIndexOf(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", args);
      return NULL;
    }

    static PyObject *t_String_length(t_String *self)
    {
      jint result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_String_lines(t_String *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.lines());
      return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_String_matches(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.matches(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "matches", arg);
      return NULL;
    }

    static PyObject *t_String_offsetByCodePoints(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.offsetByCodePoints(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_String_regionMatches(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 4:
        {
          jint a0;
          String a1((jobject) NULL);
          jint a2;
          jint a3;
          jboolean result;

          if (!parseArgs(args, "IsII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.regionMatches(a0, a1, a2, a3));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 5:
        {
          jboolean a0;
          jint a1;
          String a2((jobject) NULL);
          jint a3;
          jint a4;
          jboolean result;

          if (!parseArgs(args, "ZIsII", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.regionMatches(a0, a1, a2, a3, a4));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "regionMatches", args);
      return NULL;
    }

    static PyObject *t_String_repeat(t_String *self, PyObject *arg)
    {
      jint a0;
      String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.repeat(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "repeat", arg);
      return NULL;
    }

    static PyObject *t_String_replace(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jchar a0;
          jchar a1;
          String result((jobject) NULL);

          if (!parseArgs(args, "CC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return j2p(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          ::java::lang::CharSequence a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "OO", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_String_replaceAll(t_String *self, PyObject *args)
    {
      String a0((jobject) NULL);
      String a1((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.replaceAll(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replaceAll", args);
      return NULL;
    }

    static PyObject *t_String_replaceFirst(t_String *self, PyObject *args)
    {
      String a0((jobject) NULL);
      String a1((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.replaceFirst(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replaceFirst", args);
      return NULL;
    }

    static PyObject *t_String_split(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          JArray< String > result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.split(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          JArray< String > result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.split(a0, a1));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "split", args);
      return NULL;
    }

    static PyObject *t_String_startsWith(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.startsWith(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jboolean result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.startsWith(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "startsWith", args);
      return NULL;
    }

    static PyObject *t_String_strip(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.strip());
      return j2p(result);
    }

    static PyObject *t_String_stripLeading(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.stripLeading());
      return j2p(result);
    }

    static PyObject *t_String_stripTrailing(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.stripTrailing());
      return j2p(result);
    }

    static PyObject *t_String_subSequence(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::CharSequence result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSequence(a0, a1));
        return ::java::lang::t_CharSequence::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subSequence", args);
      return NULL;
    }

    static PyObject *t_String_substring(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.substring(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.substring(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "substring", args);
      return NULL;
    }

    static PyObject *t_String_toCharArray(t_String *self)
    {
      JArray< jchar > result((jobject) NULL);
      OBJ_CALL(result = self->object.toCharArray());
      return result.wrap();
    }

    static PyObject *t_String_toLowerCase(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String result((jobject) NULL);
          OBJ_CALL(result = self->object.toLowerCase());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.toLowerCase(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toLowerCase", args);
      return NULL;
    }

    static PyObject *t_String_toString(t_String *self, PyObject *args)
    {
      String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_String_toUpperCase(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String result((jobject) NULL);
          OBJ_CALL(result = self->object.toUpperCase());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.toUpperCase(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toUpperCase", args);
      return NULL;
    }

    static PyObject *t_String_trim(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.trim());
      return j2p(result);
    }

    static PyObject *t_String_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jboolean a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jchar a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jdouble a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jfloat a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jint a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jlong a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_String_get__blank(t_String *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isBlank());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_String_get__bytes(t_String *self, void *data)
    {
      JArray< jbyte > value((jobject) NULL);
      OBJ_CALL(value = self->object.getBytes());
      return value.wrap();
    }

    static PyObject *t_String_get__empty(t_String *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonFieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonFieldStaticTransform::class$ = NULL;
      jmethodID *PythonFieldStaticTransform::mids$ = NULL;
      bool PythonFieldStaticTransform::live$ = false;

      jclass PythonFieldStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonFieldStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_fe2c5c7bc73a25b6] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getRotation_73da4eeccf2b7e14] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getTranslation_2d64addf4c3391d9] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldStaticTransform::PythonFieldStaticTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldStaticTransform::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldStaticTransform::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldStaticTransform::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PythonFieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldStaticTransform_of_(t_PythonFieldStaticTransform *self, PyObject *args);
      static int t_PythonFieldStaticTransform_init_(t_PythonFieldStaticTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldStaticTransform_finalize(t_PythonFieldStaticTransform *self);
      static PyObject *t_PythonFieldStaticTransform_pythonExtension(t_PythonFieldStaticTransform *self, PyObject *args);
      static jobject JNICALL t_PythonFieldStaticTransform_getDate0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldStaticTransform_get__self(t_PythonFieldStaticTransform *self, void *data);
      static PyObject *t_PythonFieldStaticTransform_get__parameters_(t_PythonFieldStaticTransform *self, void *data);
      static PyGetSetDef t_PythonFieldStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldStaticTransform, self),
        DECLARE_GET_FIELD(t_PythonFieldStaticTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldStaticTransform__methods_[] = {
        DECLARE_METHOD(t_PythonFieldStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldStaticTransform)[] = {
        { Py_tp_methods, t_PythonFieldStaticTransform__methods_ },
        { Py_tp_init, (void *) t_PythonFieldStaticTransform_init_ },
        { Py_tp_getset, t_PythonFieldStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldStaticTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldStaticTransform, t_PythonFieldStaticTransform, PythonFieldStaticTransform);
      PyObject *t_PythonFieldStaticTransform::wrap_Object(const PythonFieldStaticTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldStaticTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldStaticTransform *self = (t_PythonFieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldStaticTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldStaticTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldStaticTransform *self = (t_PythonFieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldStaticTransform), &PY_TYPE_DEF(PythonFieldStaticTransform), module, "PythonFieldStaticTransform", 1);
      }

      void t_PythonFieldStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "class_", make_descriptor(PythonFieldStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "wrapfn_", make_descriptor(t_PythonFieldStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldStaticTransform::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonFieldStaticTransform_getDate0 },
          { "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;", (void *) t_PythonFieldStaticTransform_getInverse1 },
          { "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonFieldStaticTransform_getRotation2 },
          { "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonFieldStaticTransform_getTranslation3 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldStaticTransform_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldStaticTransform::initializeClass, 1)))
          return NULL;
        return t_PythonFieldStaticTransform::wrap_Object(PythonFieldStaticTransform(((t_PythonFieldStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldStaticTransform_of_(t_PythonFieldStaticTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldStaticTransform_init_(t_PythonFieldStaticTransform *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldStaticTransform object((jobject) NULL);

        INT_CALL(object = PythonFieldStaticTransform());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldStaticTransform_finalize(t_PythonFieldStaticTransform *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldStaticTransform_pythonExtension(t_PythonFieldStaticTransform *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldStaticTransform_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getDate", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldStaticTransform value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInverse", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldStaticTransform::initializeClass, &value))
        {
          throwTypeError("getInverse", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getRotation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
        {
          throwTypeError("getRotation", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTranslation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getTranslation", result);
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

      static void JNICALL t_PythonFieldStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldStaticTransform_get__self(t_PythonFieldStaticTransform *self, void *data)
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
      static PyObject *t_PythonFieldStaticTransform_get__parameters_(t_PythonFieldStaticTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunction$Parametric::class$ = NULL;
        jmethodID *PolynomialFunction$Parametric::mids$ = NULL;
        bool PolynomialFunction$Parametric::live$ = false;

        jclass PolynomialFunction$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_31b9a2982d73e37a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_1bc40469b56f2c3c] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunction$Parametric::PolynomialFunction$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        JArray< jdouble > PolynomialFunction$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_31b9a2982d73e37a], a0, a1.this$));
        }

        jdouble PolynomialFunction$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_1bc40469b56f2c3c], a0, a1.this$);
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
      namespace polynomials {
        static PyObject *t_PolynomialFunction$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunction$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunction$Parametric_init_(t_PolynomialFunction$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunction$Parametric_gradient(t_PolynomialFunction$Parametric *self, PyObject *args);
        static PyObject *t_PolynomialFunction$Parametric_value(t_PolynomialFunction$Parametric *self, PyObject *args);

        static PyMethodDef t_PolynomialFunction$Parametric__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunction$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunction$Parametric)[] = {
          { Py_tp_methods, t_PolynomialFunction$Parametric__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunction$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunction$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunction$Parametric, t_PolynomialFunction$Parametric, PolynomialFunction$Parametric);

        void t_PolynomialFunction$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunction$Parametric), &PY_TYPE_DEF(PolynomialFunction$Parametric), module, "PolynomialFunction$Parametric", 0);
        }

        void t_PolynomialFunction$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "class_", make_descriptor(PolynomialFunction$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "wrapfn_", make_descriptor(t_PolynomialFunction$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunction$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunction$Parametric::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunction$Parametric::wrap_Object(PolynomialFunction$Parametric(((t_PolynomialFunction$Parametric *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunction$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunction$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunction$Parametric_init_(t_PolynomialFunction$Parametric *self, PyObject *args, PyObject *kwds)
        {
          PolynomialFunction$Parametric object((jobject) NULL);

          INT_CALL(object = PolynomialFunction$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_PolynomialFunction$Parametric_gradient(t_PolynomialFunction$Parametric *self, PyObject *args)
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

        static PyObject *t_PolynomialFunction$Parametric_value(t_PolynomialFunction$Parametric *self, PyObject *args)
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
#include "org/hipparchus/analysis/solvers/MullerSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *MullerSolver::class$ = NULL;
        jmethodID *MullerSolver::mids$ = NULL;
        bool MullerSolver::live$ = false;

        jclass MullerSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/MullerSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_557b8123390d8d0c] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MullerSolver::MullerSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        MullerSolver::MullerSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        MullerSolver::MullerSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}
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
      namespace solvers {
        static PyObject *t_MullerSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver_of_(t_MullerSolver *self, PyObject *args);
        static int t_MullerSolver_init_(t_MullerSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MullerSolver_get__parameters_(t_MullerSolver *self, void *data);
        static PyGetSetDef t_MullerSolver__fields_[] = {
          DECLARE_GET_FIELD(t_MullerSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MullerSolver__methods_[] = {
          DECLARE_METHOD(t_MullerSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MullerSolver)[] = {
          { Py_tp_methods, t_MullerSolver__methods_ },
          { Py_tp_init, (void *) t_MullerSolver_init_ },
          { Py_tp_getset, t_MullerSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MullerSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(MullerSolver, t_MullerSolver, MullerSolver);
        PyObject *t_MullerSolver::wrap_Object(const MullerSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver *self = (t_MullerSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MullerSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver *self = (t_MullerSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MullerSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(MullerSolver), &PY_TYPE_DEF(MullerSolver), module, "MullerSolver", 0);
        }

        void t_MullerSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "class_", make_descriptor(MullerSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "wrapfn_", make_descriptor(t_MullerSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MullerSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MullerSolver::initializeClass, 1)))
            return NULL;
          return t_MullerSolver::wrap_Object(MullerSolver(((t_MullerSolver *) arg)->object.this$));
        }
        static PyObject *t_MullerSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MullerSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MullerSolver_of_(t_MullerSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MullerSolver_init_(t_MullerSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MullerSolver object((jobject) NULL);

              INT_CALL(object = MullerSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              MullerSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MullerSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              MullerSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = MullerSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_MullerSolver_get__parameters_(t_MullerSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DPOCMethodType::class$ = NULL;
              jmethodID *ShortTermEncounter2DPOCMethodType::mids$ = NULL;
              bool ShortTermEncounter2DPOCMethodType::live$ = false;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFANO_2005 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFRIEND_1999 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFRIEND_1999_MAX = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::CHAN_1997 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::LAAS_2015 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::PATERA_2005 = NULL;

              jclass ShortTermEncounter2DPOCMethodType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getCCSDSType_02085b86725642db] = env->getMethodID(cls, "getCCSDSType", "()Lorg/orekit/files/ccsds/definitions/PocMethodType;");
                  mids$[mid_getMethod_1c4e78fa057d8b26] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod;");
                  mids$[mid_valueOf_0a929b33f34202b3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_values_4888b74bec2cd8f3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ALFANO_2005 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFANO_2005", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  ALFRIEND_1999 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  ALFRIEND_1999_MAX = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999_MAX", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  CHAN_1997 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "CHAN_1997", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  LAAS_2015 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "LAAS_2015", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  PATERA_2005 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "PATERA_2005", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::definitions::PocMethodType ShortTermEncounter2DPOCMethodType::getCCSDSType() const
              {
                return ::org::orekit::files::ccsds::definitions::PocMethodType(env->callObjectMethod(this$, mids$[mid_getCCSDSType_02085b86725642db]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod ShortTermEncounter2DPOCMethodType::getMethod() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod(env->callObjectMethod(this$, mids$[mid_getMethod_1c4e78fa057d8b26]));
              }

              ShortTermEncounter2DPOCMethodType ShortTermEncounter2DPOCMethodType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ShortTermEncounter2DPOCMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0a929b33f34202b3], a0.this$));
              }

              JArray< ShortTermEncounter2DPOCMethodType > ShortTermEncounter2DPOCMethodType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ShortTermEncounter2DPOCMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_4888b74bec2cd8f3]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_ShortTermEncounter2DPOCMethodType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_of_(t_ShortTermEncounter2DPOCMethodType *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_getCCSDSType(t_ShortTermEncounter2DPOCMethodType *self);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_getMethod(t_ShortTermEncounter2DPOCMethodType *self);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_values(PyTypeObject *type);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__cCSDSType(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__method(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__parameters_(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DPOCMethodType__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, cCSDSType),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, method),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DPOCMethodType__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, getCCSDSType, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DPOCMethodType)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DPOCMethodType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShortTermEncounter2DPOCMethodType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DPOCMethodType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DPOCMethodType, t_ShortTermEncounter2DPOCMethodType, ShortTermEncounter2DPOCMethodType);
              PyObject *t_ShortTermEncounter2DPOCMethodType::wrap_Object(const ShortTermEncounter2DPOCMethodType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShortTermEncounter2DPOCMethodType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShortTermEncounter2DPOCMethodType *self = (t_ShortTermEncounter2DPOCMethodType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ShortTermEncounter2DPOCMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShortTermEncounter2DPOCMethodType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShortTermEncounter2DPOCMethodType *self = (t_ShortTermEncounter2DPOCMethodType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ShortTermEncounter2DPOCMethodType::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DPOCMethodType), &PY_TYPE_DEF(ShortTermEncounter2DPOCMethodType), module, "ShortTermEncounter2DPOCMethodType", 0);
              }

              void t_ShortTermEncounter2DPOCMethodType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "class_", make_descriptor(ShortTermEncounter2DPOCMethodType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "wrapfn_", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShortTermEncounter2DPOCMethodType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFANO_2005", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFANO_2005)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFRIEND_1999", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFRIEND_1999)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFRIEND_1999_MAX", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFRIEND_1999_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "CHAN_1997", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::CHAN_1997)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "LAAS_2015", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::LAAS_2015)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "PATERA_2005", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::PATERA_2005)));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DPOCMethodType::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DPOCMethodType::wrap_Object(ShortTermEncounter2DPOCMethodType(((t_ShortTermEncounter2DPOCMethodType *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DPOCMethodType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DPOCMethodType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_of_(t_ShortTermEncounter2DPOCMethodType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_getCCSDSType(t_ShortTermEncounter2DPOCMethodType *self)
              {
                ::org::orekit::files::ccsds::definitions::PocMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCCSDSType());
                return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_getMethod(t_ShortTermEncounter2DPOCMethodType *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethod::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::valueOf(a0));
                  return t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_values(PyTypeObject *type)
              {
                JArray< ShortTermEncounter2DPOCMethodType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::values());
                return JArray<jobject>(result.this$).wrap(t_ShortTermEncounter2DPOCMethodType::wrap_jobject);
              }
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__parameters_(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__cCSDSType(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::PocMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCCSDSType());
                return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__method(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethod::wrap_Object(value);
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
#include "org/hipparchus/analysis/function/Sinh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sinh::class$ = NULL;
        jmethodID *Sinh::mids$ = NULL;
        bool Sinh::live$ = false;

        jclass Sinh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sinh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sinh::Sinh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Sinh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sinh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Sinh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sinh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sinh_init_(t_Sinh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sinh_value(t_Sinh *self, PyObject *args);

        static PyMethodDef t_Sinh__methods_[] = {
          DECLARE_METHOD(t_Sinh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sinh)[] = {
          { Py_tp_methods, t_Sinh__methods_ },
          { Py_tp_init, (void *) t_Sinh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sinh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sinh, t_Sinh, Sinh);

        void t_Sinh::install(PyObject *module)
        {
          installType(&PY_TYPE(Sinh), &PY_TYPE_DEF(Sinh), module, "Sinh", 0);
        }

        void t_Sinh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "class_", make_descriptor(Sinh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "wrapfn_", make_descriptor(t_Sinh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sinh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sinh::initializeClass, 1)))
            return NULL;
          return t_Sinh::wrap_Object(Sinh(((t_Sinh *) arg)->object.this$));
        }
        static PyObject *t_Sinh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sinh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sinh_init_(t_Sinh *self, PyObject *args, PyObject *kwds)
        {
          Sinh object((jobject) NULL);

          INT_CALL(object = Sinh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sinh_value(t_Sinh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
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
#include "org/orekit/propagation/conversion/LutherIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *LutherIntegratorBuilder::class$ = NULL;
        jmethodID *LutherIntegratorBuilder::mids$ = NULL;
        bool LutherIntegratorBuilder::live$ = false;

        jclass LutherIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/LutherIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherIntegratorBuilder::LutherIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator LutherIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_f50d555477b898d8], a0.this$, a1.this$));
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
        static PyObject *t_LutherIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LutherIntegratorBuilder_init_(t_LutherIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherIntegratorBuilder_buildIntegrator(t_LutherIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_LutherIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_LutherIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherIntegratorBuilder)[] = {
          { Py_tp_methods, t_LutherIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_LutherIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LutherIntegratorBuilder, t_LutherIntegratorBuilder, LutherIntegratorBuilder);

        void t_LutherIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherIntegratorBuilder), &PY_TYPE_DEF(LutherIntegratorBuilder), module, "LutherIntegratorBuilder", 0);
        }

        void t_LutherIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "class_", make_descriptor(LutherIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "wrapfn_", make_descriptor(t_LutherIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_LutherIntegratorBuilder::wrap_Object(LutherIntegratorBuilder(((t_LutherIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_LutherIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LutherIntegratorBuilder_init_(t_LutherIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          LutherIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = LutherIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherIntegratorBuilder_buildIntegrator(t_LutherIntegratorBuilder *self, PyObject *args)
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
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedUnivariateSolver$Interval::class$ = NULL;
        jmethodID *BracketedUnivariateSolver$Interval::mids$ = NULL;
        bool BracketedUnivariateSolver$Interval::live$ = false;

        jclass BracketedUnivariateSolver$Interval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getLeftAbscissa_557b8123390d8d0c] = env->getMethodID(cls, "getLeftAbscissa", "()D");
            mids$[mid_getLeftValue_557b8123390d8d0c] = env->getMethodID(cls, "getLeftValue", "()D");
            mids$[mid_getRightAbscissa_557b8123390d8d0c] = env->getMethodID(cls, "getRightAbscissa", "()D");
            mids$[mid_getRightValue_557b8123390d8d0c] = env->getMethodID(cls, "getRightValue", "()D");
            mids$[mid_getSide_8a45426616f87252] = env->getMethodID(cls, "getSide", "(Lorg/hipparchus/analysis/solvers/AllowedSolution;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketedUnivariateSolver$Interval::BracketedUnivariateSolver$Interval(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

        jdouble BracketedUnivariateSolver$Interval::getLeftAbscissa() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLeftAbscissa_557b8123390d8d0c]);
        }

        jdouble BracketedUnivariateSolver$Interval::getLeftValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLeftValue_557b8123390d8d0c]);
        }

        jdouble BracketedUnivariateSolver$Interval::getRightAbscissa() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRightAbscissa_557b8123390d8d0c]);
        }

        jdouble BracketedUnivariateSolver$Interval::getRightValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRightValue_557b8123390d8d0c]);
        }

        jdouble BracketedUnivariateSolver$Interval::getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSide_8a45426616f87252], a0.this$);
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
      namespace solvers {
        static PyObject *t_BracketedUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_of_(t_BracketedUnivariateSolver$Interval *self, PyObject *args);
        static int t_BracketedUnivariateSolver$Interval_init_(t_BracketedUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftAbscissa(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftValue(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getRightAbscissa(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getRightValue(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getSide(t_BracketedUnivariateSolver$Interval *self, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftValue(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightValue(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__parameters_(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyGetSetDef t_BracketedUnivariateSolver$Interval__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, leftAbscissa),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, leftValue),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, rightAbscissa),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, rightValue),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedUnivariateSolver$Interval__methods_[] = {
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getLeftAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getLeftValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getRightAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getRightValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getSide, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedUnivariateSolver$Interval)[] = {
          { Py_tp_methods, t_BracketedUnivariateSolver$Interval__methods_ },
          { Py_tp_init, (void *) t_BracketedUnivariateSolver$Interval_init_ },
          { Py_tp_getset, t_BracketedUnivariateSolver$Interval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedUnivariateSolver$Interval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedUnivariateSolver$Interval, t_BracketedUnivariateSolver$Interval, BracketedUnivariateSolver$Interval);
        PyObject *t_BracketedUnivariateSolver$Interval::wrap_Object(const BracketedUnivariateSolver$Interval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver$Interval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver$Interval *self = (t_BracketedUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedUnivariateSolver$Interval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver$Interval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver$Interval *self = (t_BracketedUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedUnivariateSolver$Interval::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedUnivariateSolver$Interval), &PY_TYPE_DEF(BracketedUnivariateSolver$Interval), module, "BracketedUnivariateSolver$Interval", 0);
        }

        void t_BracketedUnivariateSolver$Interval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "class_", make_descriptor(BracketedUnivariateSolver$Interval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "wrapfn_", make_descriptor(t_BracketedUnivariateSolver$Interval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedUnivariateSolver$Interval::initializeClass, 1)))
            return NULL;
          return t_BracketedUnivariateSolver$Interval::wrap_Object(BracketedUnivariateSolver$Interval(((t_BracketedUnivariateSolver$Interval *) arg)->object.this$));
        }
        static PyObject *t_BracketedUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedUnivariateSolver$Interval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_of_(t_BracketedUnivariateSolver$Interval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketedUnivariateSolver$Interval_init_(t_BracketedUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          BracketedUnivariateSolver$Interval object((jobject) NULL);

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BracketedUnivariateSolver$Interval(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftAbscissa(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLeftAbscissa());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftValue(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLeftValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getRightAbscissa(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRightAbscissa());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getRightValue(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRightValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getSide(t_BracketedUnivariateSolver$Interval *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::AllowedSolution a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = self->object.getSide(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSide", arg);
          return NULL;
        }
        static PyObject *t_BracketedUnivariateSolver$Interval_get__parameters_(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLeftAbscissa());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftValue(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLeftValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRightAbscissa());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightValue(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRightValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02::class$ = NULL;
              jmethodID *SsrIgm02::mids$ = NULL;
              bool SsrIgm02::live$ = false;

              jclass SsrIgm02::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_87eda0b52690e3d3] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm02Data_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSsrIgm02Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02::SsrIgm02(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_87eda0b52690e3d3, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm02::getSsrIgm02Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm02Data_1e62c2f73fbdd1c4]));
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm02_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02_of_(t_SsrIgm02 *self, PyObject *args);
              static int t_SsrIgm02_init_(t_SsrIgm02 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm02_getSsrIgm02Data(t_SsrIgm02 *self);
              static PyObject *t_SsrIgm02_get__ssrIgm02Data(t_SsrIgm02 *self, void *data);
              static PyObject *t_SsrIgm02_get__parameters_(t_SsrIgm02 *self, void *data);
              static PyGetSetDef t_SsrIgm02__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm02, ssrIgm02Data),
                DECLARE_GET_FIELD(t_SsrIgm02, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm02__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm02, getSsrIgm02Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02)[] = {
                { Py_tp_methods, t_SsrIgm02__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02_init_ },
                { Py_tp_getset, t_SsrIgm02__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm02, t_SsrIgm02, SsrIgm02);
              PyObject *t_SsrIgm02::wrap_Object(const SsrIgm02& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm02::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm02 *self = (t_SsrIgm02 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm02::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm02::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm02 *self = (t_SsrIgm02 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm02::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02), &PY_TYPE_DEF(SsrIgm02), module, "SsrIgm02", 0);
              }

              void t_SsrIgm02::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "class_", make_descriptor(SsrIgm02::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "wrapfn_", make_descriptor(t_SsrIgm02::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02::wrap_Object(SsrIgm02(((t_SsrIgm02 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm02_of_(t_SsrIgm02 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm02_init_(t_SsrIgm02 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm02 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm02(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm02Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm02Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm02_getSsrIgm02Data(t_SsrIgm02 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm02Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm02_get__parameters_(t_SsrIgm02 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm02_get__ssrIgm02Data(t_SsrIgm02 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm02Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmData::class$ = NULL;
              jmethodID *ApmData::mids$ = NULL;
              bool ApmData::live$ = false;

              jclass ApmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d076a969b76543d3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;)V");
                  mids$[mid_addManeuver_97d51943868d9ed6] = env->getMethodID(cls, "addManeuver", "(Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;)V");
                  mids$[mid_getAngularVelocityBlock_06f6fa90aa75a35a] = env->getMethodID(cls, "getAngularVelocityBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;");
                  mids$[mid_getAttitude_01bb94f66a53b35f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/attitudes/Attitude;");
                  mids$[mid_getComments_0d9551367f7ecdef] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
                  mids$[mid_getEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getEulerBlock_fbcd84ef1de4cd5e] = env->getMethodID(cls, "getEulerBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;");
                  mids$[mid_getInertiaBlock_3fe2d2b2719cb298] = env->getMethodID(cls, "getInertiaBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;");
                  mids$[mid_getManeuver_2b0d6c2893b478cf] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;");
                  mids$[mid_getManeuvers_0d9551367f7ecdef] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getNbManeuvers_412668abc8d889e9] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getQuaternionBlock_4bf964b085beb1a5] = env->getMethodID(cls, "getQuaternionBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;");
                  mids$[mid_getSpinStabilizedBlock_5fd684779f02edc8] = env->getMethodID(cls, "getSpinStabilizedBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;");
                  mids$[mid_hasManeuvers_89b302893bdbe1f1] = env->getMethodID(cls, "hasManeuvers", "()Z");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmData::ApmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion & a2, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler & a3, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity & a4, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized & a5, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d076a969b76543d3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

              void ApmData::addManeuver(const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addManeuver_97d51943868d9ed6], a0.this$);
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity ApmData::getAngularVelocityBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity(env->callObjectMethod(this$, mids$[mid_getAngularVelocityBlock_06f6fa90aa75a35a]));
              }

              ::org::orekit::attitudes::Attitude ApmData::getAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) const
              {
                return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_01bb94f66a53b35f], a0.this$, a1.this$));
              }

              ::java::util::List ApmData::getComments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_0d9551367f7ecdef]));
              }

              ::org::orekit::time::AbsoluteDate ApmData::getEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_7a97f7e149e79afb]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Euler ApmData::getEulerBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Euler(env->callObjectMethod(this$, mids$[mid_getEulerBlock_fbcd84ef1de4cd5e]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Inertia ApmData::getInertiaBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Inertia(env->callObjectMethod(this$, mids$[mid_getInertiaBlock_3fe2d2b2719cb298]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver ApmData::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_2b0d6c2893b478cf], a0));
              }

              ::java::util::List ApmData::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_0d9551367f7ecdef]));
              }

              jint ApmData::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_412668abc8d889e9]);
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion ApmData::getQuaternionBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion(env->callObjectMethod(this$, mids$[mid_getQuaternionBlock_4bf964b085beb1a5]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized ApmData::getSpinStabilizedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized(env->callObjectMethod(this$, mids$[mid_getSpinStabilizedBlock_5fd684779f02edc8]));
              }

              jboolean ApmData::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_89b302893bdbe1f1]);
              }

              void ApmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
          namespace adm {
            namespace apm {
              static PyObject *t_ApmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ApmData_init_(t_ApmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmData_addManeuver(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_getAngularVelocityBlock(t_ApmData *self);
              static PyObject *t_ApmData_getAttitude(t_ApmData *self, PyObject *args);
              static PyObject *t_ApmData_getComments(t_ApmData *self);
              static PyObject *t_ApmData_getEpoch(t_ApmData *self);
              static PyObject *t_ApmData_getEulerBlock(t_ApmData *self);
              static PyObject *t_ApmData_getInertiaBlock(t_ApmData *self);
              static PyObject *t_ApmData_getManeuver(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_getManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_getNbManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_getQuaternionBlock(t_ApmData *self);
              static PyObject *t_ApmData_getSpinStabilizedBlock(t_ApmData *self);
              static PyObject *t_ApmData_hasManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_validate(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_get__angularVelocityBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__comments(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__epoch(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__eulerBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__inertiaBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__maneuvers(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__nbManeuvers(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__quaternionBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__spinStabilizedBlock(t_ApmData *self, void *data);
              static PyGetSetDef t_ApmData__fields_[] = {
                DECLARE_GET_FIELD(t_ApmData, angularVelocityBlock),
                DECLARE_GET_FIELD(t_ApmData, comments),
                DECLARE_GET_FIELD(t_ApmData, epoch),
                DECLARE_GET_FIELD(t_ApmData, eulerBlock),
                DECLARE_GET_FIELD(t_ApmData, inertiaBlock),
                DECLARE_GET_FIELD(t_ApmData, maneuvers),
                DECLARE_GET_FIELD(t_ApmData, nbManeuvers),
                DECLARE_GET_FIELD(t_ApmData, quaternionBlock),
                DECLARE_GET_FIELD(t_ApmData, spinStabilizedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmData__methods_[] = {
                DECLARE_METHOD(t_ApmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmData, addManeuver, METH_O),
                DECLARE_METHOD(t_ApmData, getAngularVelocityBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getAttitude, METH_VARARGS),
                DECLARE_METHOD(t_ApmData, getComments, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getEpoch, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getEulerBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getInertiaBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getManeuver, METH_O),
                DECLARE_METHOD(t_ApmData, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getQuaternionBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getSpinStabilizedBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, hasManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmData)[] = {
                { Py_tp_methods, t_ApmData__methods_ },
                { Py_tp_init, (void *) t_ApmData_init_ },
                { Py_tp_getset, t_ApmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ApmData, t_ApmData, ApmData);

              void t_ApmData::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmData), &PY_TYPE_DEF(ApmData), module, "ApmData", 0);
              }

              void t_ApmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "class_", make_descriptor(ApmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "wrapfn_", make_descriptor(t_ApmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmData::initializeClass, 1)))
                  return NULL;
                return t_ApmData::wrap_Object(ApmData(((t_ApmData *) arg)->object.this$));
              }
              static PyObject *t_ApmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ApmData_init_(t_ApmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler a3((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized a5((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia a6((jobject) NULL);
                ApmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Euler::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Inertia::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                {
                  INT_CALL(object = ApmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_ApmData_addManeuver(t_ApmData *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addManeuver(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addManeuver", arg);
                return NULL;
              }

              static PyObject *t_ApmData_getAngularVelocityBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularVelocityBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_AngularVelocity::wrap_Object(result);
              }

              static PyObject *t_ApmData_getAttitude(t_ApmData *self, PyObject *args)
              {
                ::org::orekit::frames::Frame a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::attitudes::Attitude result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getAttitude(a0, a1));
                  return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
                return NULL;
              }

              static PyObject *t_ApmData_getComments(t_ApmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getComments());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_ApmData_getEpoch(t_ApmData *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_ApmData_getEulerBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Euler::wrap_Object(result);
              }

              static PyObject *t_ApmData_getInertiaBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Inertia::wrap_Object(result);
              }

              static PyObject *t_ApmData_getManeuver(t_ApmData *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::apm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_ApmData_getManeuvers(t_ApmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::apm::PY_TYPE(Maneuver));
              }

              static PyObject *t_ApmData_getNbManeuvers(t_ApmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_ApmData_getQuaternionBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternionBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmQuaternion::wrap_Object(result);
              }

              static PyObject *t_ApmData_getSpinStabilizedBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpinStabilizedBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_SpinStabilized::wrap_Object(result);
              }

              static PyObject *t_ApmData_hasManeuvers(t_ApmData *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ApmData_validate(t_ApmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_ApmData_get__angularVelocityBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularVelocityBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_AngularVelocity::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__comments(t_ApmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getComments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__epoch(t_ApmData *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__eulerBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Euler::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__inertiaBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Inertia::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__maneuvers(t_ApmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__nbManeuvers(t_ApmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_ApmData_get__quaternionBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternionBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmQuaternion::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__spinStabilizedBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpinStabilizedBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_SpinStabilized::wrap_Object(value);
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
#include "org/hipparchus/analysis/interpolation/FieldHermiteInterpolator.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *FieldHermiteInterpolator::class$ = NULL;
        jmethodID *FieldHermiteInterpolator::mids$ = NULL;
        bool FieldHermiteInterpolator::live$ = false;

        jclass FieldHermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/FieldHermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSamplePoint_b905de7a007641fb] = env->getMethodID(cls, "addSamplePoint", "(Lorg/hipparchus/FieldElement;[[Lorg/hipparchus/FieldElement;)V");
            mids$[mid_derivatives_7e6a45a3e3b96ef6] = env->getMethodID(cls, "derivatives", "(Lorg/hipparchus/FieldElement;I)[[Lorg/hipparchus/FieldElement;");
            mids$[mid_value_fe86fae25ede109a] = env->getMethodID(cls, "value", "(Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldHermiteInterpolator::FieldHermiteInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void FieldHermiteInterpolator::addSamplePoint(const ::org::hipparchus::FieldElement & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSamplePoint_b905de7a007641fb], a0.this$, a1.this$);
        }

        JArray< JArray< ::org::hipparchus::FieldElement > > FieldHermiteInterpolator::derivatives(const ::org::hipparchus::FieldElement & a0, jint a1) const
        {
          return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_derivatives_7e6a45a3e3b96ef6], a0.this$, a1));
        }

        JArray< ::org::hipparchus::FieldElement > FieldHermiteInterpolator::value(const ::org::hipparchus::FieldElement & a0) const
        {
          return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_value_fe86fae25ede109a], a0.this$));
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
      namespace interpolation {
        static PyObject *t_FieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_of_(t_FieldHermiteInterpolator *self, PyObject *args);
        static int t_FieldHermiteInterpolator_init_(t_FieldHermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldHermiteInterpolator_addSamplePoint(t_FieldHermiteInterpolator *self, PyObject *args);
        static PyObject *t_FieldHermiteInterpolator_derivatives(t_FieldHermiteInterpolator *self, PyObject *args);
        static PyObject *t_FieldHermiteInterpolator_value(t_FieldHermiteInterpolator *self, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_get__parameters_(t_FieldHermiteInterpolator *self, void *data);
        static PyGetSetDef t_FieldHermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldHermiteInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldHermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldHermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, addSamplePoint, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, derivatives, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldHermiteInterpolator)[] = {
          { Py_tp_methods, t_FieldHermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_FieldHermiteInterpolator_init_ },
          { Py_tp_getset, t_FieldHermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldHermiteInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldHermiteInterpolator, t_FieldHermiteInterpolator, FieldHermiteInterpolator);
        PyObject *t_FieldHermiteInterpolator::wrap_Object(const FieldHermiteInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldHermiteInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldHermiteInterpolator *self = (t_FieldHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldHermiteInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldHermiteInterpolator *self = (t_FieldHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldHermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldHermiteInterpolator), &PY_TYPE_DEF(FieldHermiteInterpolator), module, "FieldHermiteInterpolator", 0);
        }

        void t_FieldHermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "class_", make_descriptor(FieldHermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldHermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldHermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldHermiteInterpolator::wrap_Object(FieldHermiteInterpolator(((t_FieldHermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldHermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldHermiteInterpolator_of_(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldHermiteInterpolator_init_(t_FieldHermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          FieldHermiteInterpolator object((jobject) NULL);

          INT_CALL(object = FieldHermiteInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldHermiteInterpolator_addSamplePoint(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "K[[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(self->object.addSamplePoint(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSamplePoint", args);
          return NULL;
        }

        static PyObject *t_FieldHermiteInterpolator_derivatives(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.derivatives(a0, a1));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "derivatives", args);
          return NULL;
        }

        static PyObject *t_FieldHermiteInterpolator_value(t_FieldHermiteInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
        static PyObject *t_FieldHermiteInterpolator_get__parameters_(t_FieldHermiteInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *GaussIntegrator::class$ = NULL;
          jmethodID *GaussIntegrator::mids$ = NULL;
          bool GaussIntegrator::live$ = false;

          jclass GaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/GaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7cd681864cf513c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_getNumberOfPoints_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfPoints", "()I");
              mids$[mid_getPoint_69cfb132c661aca4] = env->getMethodID(cls, "getPoint", "(I)D");
              mids$[mid_getWeight_69cfb132c661aca4] = env->getMethodID(cls, "getWeight", "(I)D");
              mids$[mid_integrate_b5020c81a1e55ffa] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/UnivariateFunction;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GaussIntegrator::GaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7cd681864cf513c2, a0.this$)) {}

          GaussIntegrator::GaussIntegrator(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

          jint GaussIntegrator::getNumberOfPoints() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfPoints_412668abc8d889e9]);
          }

          jdouble GaussIntegrator::getPoint(jint a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPoint_69cfb132c661aca4], a0);
          }

          jdouble GaussIntegrator::getWeight(jint a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWeight_69cfb132c661aca4], a0);
          }

          jdouble GaussIntegrator::integrate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_integrate_b5020c81a1e55ffa], a0.this$);
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
          static PyObject *t_GaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GaussIntegrator_init_(t_GaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GaussIntegrator_getNumberOfPoints(t_GaussIntegrator *self);
          static PyObject *t_GaussIntegrator_getPoint(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_getWeight(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_integrate(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_get__numberOfPoints(t_GaussIntegrator *self, void *data);
          static PyGetSetDef t_GaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_GaussIntegrator, numberOfPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_GaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegrator, getNumberOfPoints, METH_NOARGS),
            DECLARE_METHOD(t_GaussIntegrator, getPoint, METH_O),
            DECLARE_METHOD(t_GaussIntegrator, getWeight, METH_O),
            DECLARE_METHOD(t_GaussIntegrator, integrate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GaussIntegrator)[] = {
            { Py_tp_methods, t_GaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_GaussIntegrator_init_ },
            { Py_tp_getset, t_GaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GaussIntegrator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GaussIntegrator, t_GaussIntegrator, GaussIntegrator);

          void t_GaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(GaussIntegrator), &PY_TYPE_DEF(GaussIntegrator), module, "GaussIntegrator", 0);
          }

          void t_GaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "class_", make_descriptor(GaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "wrapfn_", make_descriptor(t_GaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_GaussIntegrator::wrap_Object(GaussIntegrator(((t_GaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_GaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GaussIntegrator_init_(t_GaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                GaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = GaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                GaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = GaussIntegrator(a0, a1));
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

          static PyObject *t_GaussIntegrator_getNumberOfPoints(t_GaussIntegrator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_GaussIntegrator_getPoint(t_GaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            jdouble result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_getWeight(t_GaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            jdouble result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getWeight(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWeight", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_integrate(t_GaussIntegrator *self, PyObject *arg)
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "integrate", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_get__numberOfPoints(t_GaussIntegrator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonStateJacobian.h"
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonStateJacobian::class$ = NULL;
      jmethodID *PythonStateJacobian::mids$ = NULL;
      bool PythonStateJacobian::live$ = false;

      jclass PythonStateJacobian::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonStateJacobian");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_223e694727d946d7] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStateJacobian::PythonStateJacobian() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonStateJacobian::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonStateJacobian::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonStateJacobian::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonStateJacobian_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStateJacobian_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStateJacobian_init_(t_PythonStateJacobian *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStateJacobian_finalize(t_PythonStateJacobian *self);
      static PyObject *t_PythonStateJacobian_pythonExtension(t_PythonStateJacobian *self, PyObject *args);
      static void JNICALL t_PythonStateJacobian_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStateJacobian_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonStateJacobian_get__self(t_PythonStateJacobian *self, void *data);
      static PyGetSetDef t_PythonStateJacobian__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStateJacobian, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStateJacobian__methods_[] = {
        DECLARE_METHOD(t_PythonStateJacobian, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateJacobian, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateJacobian, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStateJacobian, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStateJacobian)[] = {
        { Py_tp_methods, t_PythonStateJacobian__methods_ },
        { Py_tp_init, (void *) t_PythonStateJacobian_init_ },
        { Py_tp_getset, t_PythonStateJacobian__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStateJacobian)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStateJacobian, t_PythonStateJacobian, PythonStateJacobian);

      void t_PythonStateJacobian::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStateJacobian), &PY_TYPE_DEF(PythonStateJacobian), module, "PythonStateJacobian", 1);
      }

      void t_PythonStateJacobian::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "class_", make_descriptor(PythonStateJacobian::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "wrapfn_", make_descriptor(t_PythonStateJacobian::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStateJacobian::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonStateJacobian_pythonDecRef0 },
          { "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D", (void *) t_PythonStateJacobian_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStateJacobian_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStateJacobian::initializeClass, 1)))
          return NULL;
        return t_PythonStateJacobian::wrap_Object(PythonStateJacobian(((t_PythonStateJacobian *) arg)->object.this$));
      }
      static PyObject *t_PythonStateJacobian_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStateJacobian::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStateJacobian_init_(t_PythonStateJacobian *self, PyObject *args, PyObject *kwds)
      {
        PythonStateJacobian object((jobject) NULL);

        INT_CALL(object = PythonStateJacobian());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStateJacobian_finalize(t_PythonStateJacobian *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStateJacobian_pythonExtension(t_PythonStateJacobian *self, PyObject *args)
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

      static void JNICALL t_PythonStateJacobian_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonStateJacobian_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonStateJacobian_get__self(t_PythonStateJacobian *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/RangeRateBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *RangeRateBuilder::class$ = NULL;
          jmethodID *RangeRateBuilder::mids$ = NULL;
          bool RangeRateBuilder::live$ = false;

          jclass RangeRateBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/RangeRateBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bda3a2dd57982d0f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;ZDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_168c8b8efea8d8b9] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/RangeRate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateBuilder::RangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jboolean a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_bda3a2dd57982d0f, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::RangeRate RangeRateBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::RangeRate(env->callObjectMethod(this$, mids$[mid_build_168c8b8efea8d8b9], a0.this$, a1.this$));
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
        namespace generation {
          static PyObject *t_RangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateBuilder_of_(t_RangeRateBuilder *self, PyObject *args);
          static int t_RangeRateBuilder_init_(t_RangeRateBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateBuilder_build(t_RangeRateBuilder *self, PyObject *args);
          static PyObject *t_RangeRateBuilder_get__parameters_(t_RangeRateBuilder *self, void *data);
          static PyGetSetDef t_RangeRateBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_RangeRateBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RangeRateBuilder__methods_[] = {
            DECLARE_METHOD(t_RangeRateBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RangeRateBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateBuilder)[] = {
            { Py_tp_methods, t_RangeRateBuilder__methods_ },
            { Py_tp_init, (void *) t_RangeRateBuilder_init_ },
            { Py_tp_getset, t_RangeRateBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(RangeRateBuilder, t_RangeRateBuilder, RangeRateBuilder);
          PyObject *t_RangeRateBuilder::wrap_Object(const RangeRateBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeRateBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeRateBuilder *self = (t_RangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RangeRateBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeRateBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeRateBuilder *self = (t_RangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RangeRateBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateBuilder), &PY_TYPE_DEF(RangeRateBuilder), module, "RangeRateBuilder", 0);
          }

          void t_RangeRateBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "class_", make_descriptor(RangeRateBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "wrapfn_", make_descriptor(t_RangeRateBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateBuilder::initializeClass, 1)))
              return NULL;
            return t_RangeRateBuilder::wrap_Object(RangeRateBuilder(((t_RangeRateBuilder *) arg)->object.this$));
          }
          static PyObject *t_RangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RangeRateBuilder_of_(t_RangeRateBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RangeRateBuilder_init_(t_RangeRateBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            RangeRateBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkZDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RangeRateBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(RangeRate);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateBuilder_build(t_RangeRateBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::RangeRate result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_RangeRate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RangeRateBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_RangeRateBuilder_get__parameters_(t_RangeRateBuilder *self, void *data)
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
#include "org/orekit/propagation/conversion/AdamsBashforthFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsBashforthFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsBashforthFieldIntegratorBuilder::mids$ = NULL;
        bool AdamsBashforthFieldIntegratorBuilder::live$ = false;

        jclass AdamsBashforthFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsBashforthFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c4eb928bd0dae600] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthFieldIntegratorBuilder::AdamsBashforthFieldIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_c4eb928bd0dae600, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AdamsBashforthFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_of_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args);
        static int t_AdamsBashforthFieldIntegratorBuilder_init_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_buildIntegrator(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_get__parameters_(t_AdamsBashforthFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AdamsBashforthFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsBashforthFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsBashforthFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsBashforthFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AdamsBashforthFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthFieldIntegratorBuilder, t_AdamsBashforthFieldIntegratorBuilder, AdamsBashforthFieldIntegratorBuilder);
        PyObject *t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(const AdamsBashforthFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegratorBuilder *self = (t_AdamsBashforthFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegratorBuilder *self = (t_AdamsBashforthFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsBashforthFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthFieldIntegratorBuilder), &PY_TYPE_DEF(AdamsBashforthFieldIntegratorBuilder), module, "AdamsBashforthFieldIntegratorBuilder", 0);
        }

        void t_AdamsBashforthFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "class_", make_descriptor(AdamsBashforthFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(AdamsBashforthFieldIntegratorBuilder(((t_AdamsBashforthFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_of_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsBashforthFieldIntegratorBuilder_init_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsBashforthFieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsBashforthFieldIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_buildIntegrator(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(AdamsBashforthFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_get__parameters_(t_AdamsBashforthFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Metadata::class$ = NULL;
          jmethodID *Metadata::mids$ = NULL;
          bool Metadata::live$ = false;

          jclass Metadata::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Metadata");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTimeSystem_d0d0dc777cc1d8f8] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_setTimeSystem_dcfc8f760c17d3b6] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");
              mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");
              mids$[mid_getLaunchYear_a6602ba493f77974] = env->getMethodID(cls, "getLaunchYear", "(Ljava/lang/String;)I");
              mids$[mid_getLaunchNumber_a6602ba493f77974] = env->getMethodID(cls, "getLaunchNumber", "(Ljava/lang/String;)I");
              mids$[mid_getLaunchPiece_60bb1b490b673cbf] = env->getMethodID(cls, "getLaunchPiece", "(Ljava/lang/String;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::files::ccsds::definitions::TimeSystem Metadata::getTimeSystem() const
          {
            return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_d0d0dc777cc1d8f8]));
          }

          void Metadata::setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeSystem_dcfc8f760c17d3b6], a0.this$);
          }

          void Metadata::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
        namespace section {
          static PyObject *t_Metadata_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Metadata_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Metadata_getTimeSystem(t_Metadata *self);
          static PyObject *t_Metadata_setTimeSystem(t_Metadata *self, PyObject *arg);
          static PyObject *t_Metadata_validate(t_Metadata *self, PyObject *args);
          static PyObject *t_Metadata_get__timeSystem(t_Metadata *self, void *data);
          static int t_Metadata_set__timeSystem(t_Metadata *self, PyObject *arg, void *data);
          static PyGetSetDef t_Metadata__fields_[] = {
            DECLARE_GETSET_FIELD(t_Metadata, timeSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Metadata__methods_[] = {
            DECLARE_METHOD(t_Metadata, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Metadata, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Metadata, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_Metadata, setTimeSystem, METH_O),
            DECLARE_METHOD(t_Metadata, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Metadata)[] = {
            { Py_tp_methods, t_Metadata__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Metadata__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Metadata)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(Metadata, t_Metadata, Metadata);

          void t_Metadata::install(PyObject *module)
          {
            installType(&PY_TYPE(Metadata), &PY_TYPE_DEF(Metadata), module, "Metadata", 0);
          }

          void t_Metadata::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "class_", make_descriptor(Metadata::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "wrapfn_", make_descriptor(t_Metadata::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Metadata_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Metadata::initializeClass, 1)))
              return NULL;
            return t_Metadata::wrap_Object(Metadata(((t_Metadata *) arg)->object.this$));
          }
          static PyObject *t_Metadata_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Metadata::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Metadata_getTimeSystem(t_Metadata *self)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_Metadata_setTimeSystem(t_Metadata *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_Metadata_validate(t_Metadata *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Metadata), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_Metadata_get__timeSystem(t_Metadata *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
          }
          static int t_Metadata_set__timeSystem(t_Metadata *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIOffset.h"
#include "org/orekit/time/DateComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffset::class$ = NULL;
      jmethodID *UTCTAIOffset::mids$ = NULL;
      bool UTCTAIOffset::live$ = false;

      jclass UTCTAIOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLeap_557b8123390d8d0c] = env->getMethodID(cls, "getLeap", "()D");
          mids$[mid_getMJD_412668abc8d889e9] = env->getMethodID(cls, "getMJD", "()I");
          mids$[mid_getOffset_b0b988f941da47d8] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getOffset_b884068a2c99f6ca] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOffset_e4171ab80e571373] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_getValidityStart_7a97f7e149e79afb] = env->getMethodID(cls, "getValidityStart", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate UTCTAIOffset::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jdouble UTCTAIOffset::getLeap() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_557b8123390d8d0c]);
      }

      jint UTCTAIOffset::getMJD() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJD_412668abc8d889e9]);
      }

      jdouble UTCTAIOffset::getOffset(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCTAIOffset::getOffset(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOffset_b884068a2c99f6ca], a0.this$));
      }

      jdouble UTCTAIOffset::getOffset(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::org::orekit::time::AbsoluteDate UTCTAIOffset::getValidityStart() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidityStart_7a97f7e149e79afb]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffset_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffset_getDate(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getLeap(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getMJD(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getOffset(t_UTCTAIOffset *self, PyObject *args);
      static PyObject *t_UTCTAIOffset_getValidityStart(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_get__date(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__leap(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__mJD(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__validityStart(t_UTCTAIOffset *self, void *data);
      static PyGetSetDef t_UTCTAIOffset__fields_[] = {
        DECLARE_GET_FIELD(t_UTCTAIOffset, date),
        DECLARE_GET_FIELD(t_UTCTAIOffset, leap),
        DECLARE_GET_FIELD(t_UTCTAIOffset, mJD),
        DECLARE_GET_FIELD(t_UTCTAIOffset, validityStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UTCTAIOffset__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffset, getDate, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getLeap, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getMJD, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getOffset, METH_VARARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getValidityStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffset)[] = {
        { Py_tp_methods, t_UTCTAIOffset__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UTCTAIOffset__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffset, t_UTCTAIOffset, UTCTAIOffset);

      void t_UTCTAIOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffset), &PY_TYPE_DEF(UTCTAIOffset), module, "UTCTAIOffset", 0);
      }

      void t_UTCTAIOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "class_", make_descriptor(UTCTAIOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "wrapfn_", make_descriptor(t_UTCTAIOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffset::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffset::wrap_Object(UTCTAIOffset(((t_UTCTAIOffset *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffset_getDate(t_UTCTAIOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCTAIOffset_getLeap(t_UTCTAIOffset *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLeap());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_UTCTAIOffset_getMJD(t_UTCTAIOffset *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJD());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_UTCTAIOffset_getOffset(t_UTCTAIOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOffset(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getOffset", args);
        return NULL;
      }

      static PyObject *t_UTCTAIOffset_getValidityStart(t_UTCTAIOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getValidityStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCTAIOffset_get__date(t_UTCTAIOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCTAIOffset_get__leap(t_UTCTAIOffset *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLeap());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_UTCTAIOffset_get__mJD(t_UTCTAIOffset *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJD());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_UTCTAIOffset_get__validityStart(t_UTCTAIOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getValidityStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmWriter::class$ = NULL;
            jmethodID *TdmWriter::mids$ = NULL;
            bool TdmWriter::live$ = false;
            jdouble TdmWriter::CCSDS_TDM_VERS = (jdouble) 0;
            jint TdmWriter::KVN_PADDING_WIDTH = (jint) 0;

            jclass TdmWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_11d463aea965da03] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)V");
                mids$[mid_writeSegmentContent_e9836ce27ccfe3b9] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CCSDS_TDM_VERS = env->getStaticDoubleField(cls, "CCSDS_TDM_VERS");
                KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmWriter::TdmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_11d463aea965da03, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_TdmWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmWriter_of_(t_TdmWriter *self, PyObject *args);
            static int t_TdmWriter_init_(t_TdmWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_TdmWriter_get__parameters_(t_TdmWriter *self, void *data);
            static PyGetSetDef t_TdmWriter__fields_[] = {
              DECLARE_GET_FIELD(t_TdmWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmWriter__methods_[] = {
              DECLARE_METHOD(t_TdmWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmWriter, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmWriter)[] = {
              { Py_tp_methods, t_TdmWriter__methods_ },
              { Py_tp_init, (void *) t_TdmWriter_init_ },
              { Py_tp_getset, t_TdmWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
              NULL
            };

            DEFINE_TYPE(TdmWriter, t_TdmWriter, TdmWriter);
            PyObject *t_TdmWriter::wrap_Object(const TdmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmWriter *self = (t_TdmWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_TdmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmWriter *self = (t_TdmWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_TdmWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmWriter), &PY_TYPE_DEF(TdmWriter), module, "TdmWriter", 0);
            }

            void t_TdmWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "class_", make_descriptor(TdmWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "wrapfn_", make_descriptor(t_TdmWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "CCSDS_TDM_VERS", make_descriptor(TdmWriter::CCSDS_TDM_VERS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "KVN_PADDING_WIDTH", make_descriptor(TdmWriter::KVN_PADDING_WIDTH));
            }

            static PyObject *t_TdmWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmWriter::initializeClass, 1)))
                return NULL;
              return t_TdmWriter::wrap_Object(TdmWriter(((t_TdmWriter *) arg)->object.this$));
            }
            static PyObject *t_TdmWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmWriter_of_(t_TdmWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_TdmWriter_init_(t_TdmWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::utils::IERSConventions a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::data::DataContext a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a2((jobject) NULL);
              TdmWriter object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
              {
                INT_CALL(object = TdmWriter(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(TdmHeader);
                self->parameters[2] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(Tdm);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_TdmWriter_get__parameters_(t_TdmWriter *self, void *data)
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
#include "org/hipparchus/analysis/solvers/BisectionSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BisectionSolver::class$ = NULL;
        jmethodID *BisectionSolver::mids$ = NULL;
        bool BisectionSolver::live$ = false;

        jclass BisectionSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BisectionSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_557b8123390d8d0c] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BisectionSolver::BisectionSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        BisectionSolver::BisectionSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        BisectionSolver::BisectionSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}
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
      namespace solvers {
        static PyObject *t_BisectionSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BisectionSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BisectionSolver_of_(t_BisectionSolver *self, PyObject *args);
        static int t_BisectionSolver_init_(t_BisectionSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BisectionSolver_get__parameters_(t_BisectionSolver *self, void *data);
        static PyGetSetDef t_BisectionSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BisectionSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BisectionSolver__methods_[] = {
          DECLARE_METHOD(t_BisectionSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BisectionSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BisectionSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BisectionSolver)[] = {
          { Py_tp_methods, t_BisectionSolver__methods_ },
          { Py_tp_init, (void *) t_BisectionSolver_init_ },
          { Py_tp_getset, t_BisectionSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BisectionSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BisectionSolver, t_BisectionSolver, BisectionSolver);
        PyObject *t_BisectionSolver::wrap_Object(const BisectionSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BisectionSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BisectionSolver *self = (t_BisectionSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BisectionSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BisectionSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BisectionSolver *self = (t_BisectionSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BisectionSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BisectionSolver), &PY_TYPE_DEF(BisectionSolver), module, "BisectionSolver", 0);
        }

        void t_BisectionSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "class_", make_descriptor(BisectionSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "wrapfn_", make_descriptor(t_BisectionSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BisectionSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BisectionSolver::initializeClass, 1)))
            return NULL;
          return t_BisectionSolver::wrap_Object(BisectionSolver(((t_BisectionSolver *) arg)->object.this$));
        }
        static PyObject *t_BisectionSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BisectionSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BisectionSolver_of_(t_BisectionSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BisectionSolver_init_(t_BisectionSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BisectionSolver object((jobject) NULL);

              INT_CALL(object = BisectionSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              BisectionSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = BisectionSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BisectionSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BisectionSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_BisectionSolver_get__parameters_(t_BisectionSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *StateMapper::class$ = NULL;
        jmethodID *StateMapper::mids$ = NULL;
        bool StateMapper::live$ = false;

        jclass StateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/StateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapArrayToState_f38e2174d37ac0d2] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapArrayToState_a19517204e94b95e] = env->getMethodID(cls, "mapArrayToState", "(D[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapDateToDouble_b0b988f941da47d8] = env->getMethodID(cls, "mapDateToDouble", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_mapDoubleToDate_8ef471ef852a9678] = env->getMethodID(cls, "mapDoubleToDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapDoubleToDate_919074d9bf256a5d] = env->getMethodID(cls, "mapDoubleToDate", "(DLorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapStateToArray_c6e78d5a2304799f] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::AttitudeProvider StateMapper::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_6df6b78ab9377151]));
        }

        ::org::orekit::frames::Frame StateMapper::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        jdouble StateMapper::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::org::orekit::orbits::OrbitType StateMapper::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
        }

        ::org::orekit::orbits::PositionAngleType StateMapper::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
        }

        ::org::orekit::time::AbsoluteDate StateMapper::getReferenceDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_7a97f7e149e79afb]));
        }

        ::org::orekit::propagation::SpacecraftState StateMapper::mapArrayToState(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_f38e2174d37ac0d2], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::SpacecraftState StateMapper::mapArrayToState(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_a19517204e94b95e], a0, a1.this$, a2.this$, a3.this$));
        }

        jdouble StateMapper::mapDateToDouble(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mapDateToDouble_b0b988f941da47d8], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate StateMapper::mapDoubleToDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_8ef471ef852a9678], a0));
        }

        ::org::orekit::time::AbsoluteDate StateMapper::mapDoubleToDate(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_919074d9bf256a5d], a0, a1.this$));
        }

        void StateMapper::mapStateToArray(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_mapStateToArray_c6e78d5a2304799f], a0.this$, a1.this$, a2.this$);
        }

        void StateMapper::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
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
      namespace integration {
        static PyObject *t_StateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateMapper_getAttitudeProvider(t_StateMapper *self);
        static PyObject *t_StateMapper_getFrame(t_StateMapper *self);
        static PyObject *t_StateMapper_getMu(t_StateMapper *self);
        static PyObject *t_StateMapper_getOrbitType(t_StateMapper *self);
        static PyObject *t_StateMapper_getPositionAngleType(t_StateMapper *self);
        static PyObject *t_StateMapper_getReferenceDate(t_StateMapper *self);
        static PyObject *t_StateMapper_mapArrayToState(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_mapDateToDouble(t_StateMapper *self, PyObject *arg);
        static PyObject *t_StateMapper_mapDoubleToDate(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_mapStateToArray(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_setAttitudeProvider(t_StateMapper *self, PyObject *arg);
        static PyObject *t_StateMapper_get__attitudeProvider(t_StateMapper *self, void *data);
        static int t_StateMapper_set__attitudeProvider(t_StateMapper *self, PyObject *arg, void *data);
        static PyObject *t_StateMapper_get__frame(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__mu(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__orbitType(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__positionAngleType(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__referenceDate(t_StateMapper *self, void *data);
        static PyGetSetDef t_StateMapper__fields_[] = {
          DECLARE_GETSET_FIELD(t_StateMapper, attitudeProvider),
          DECLARE_GET_FIELD(t_StateMapper, frame),
          DECLARE_GET_FIELD(t_StateMapper, mu),
          DECLARE_GET_FIELD(t_StateMapper, orbitType),
          DECLARE_GET_FIELD(t_StateMapper, positionAngleType),
          DECLARE_GET_FIELD(t_StateMapper, referenceDate),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StateMapper__methods_[] = {
          DECLARE_METHOD(t_StateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateMapper, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getMu, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getReferenceDate, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, mapArrayToState, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, mapDateToDouble, METH_O),
          DECLARE_METHOD(t_StateMapper, mapDoubleToDate, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, mapStateToArray, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, setAttitudeProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StateMapper)[] = {
          { Py_tp_methods, t_StateMapper__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StateMapper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StateMapper, t_StateMapper, StateMapper);

        void t_StateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(StateMapper), &PY_TYPE_DEF(StateMapper), module, "StateMapper", 0);
        }

        void t_StateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "class_", make_descriptor(StateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "wrapfn_", make_descriptor(t_StateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StateMapper::initializeClass, 1)))
            return NULL;
          return t_StateMapper::wrap_Object(StateMapper(((t_StateMapper *) arg)->object.this$));
        }
        static PyObject *t_StateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StateMapper_getAttitudeProvider(t_StateMapper *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getFrame(t_StateMapper *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getMu(t_StateMapper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StateMapper_getOrbitType(t_StateMapper *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getPositionAngleType(t_StateMapper *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getReferenceDate(t_StateMapper *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_StateMapper_mapArrayToState(t_StateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k[D[DK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "D[D[DK", ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapArrayToState", args);
          return NULL;
        }

        static PyObject *t_StateMapper_mapDateToDouble(t_StateMapper *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.mapDateToDouble(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "mapDateToDouble", arg);
          return NULL;
        }

        static PyObject *t_StateMapper_mapDoubleToDate(t_StateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapDoubleToDate", args);
          return NULL;
        }

        static PyObject *t_StateMapper_mapStateToArray(t_StateMapper *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.mapStateToArray(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "mapStateToArray", args);
          return NULL;
        }

        static PyObject *t_StateMapper_setAttitudeProvider(t_StateMapper *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_StateMapper_get__attitudeProvider(t_StateMapper *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }
        static int t_StateMapper_set__attitudeProvider(t_StateMapper *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_StateMapper_get__frame(t_StateMapper *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__mu(t_StateMapper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StateMapper_get__orbitType(t_StateMapper *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__positionAngleType(t_StateMapper *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__referenceDate(t_StateMapper *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAdditionalStateProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAdditionalStateProvider::class$ = NULL;
      jmethodID *PythonAdditionalStateProvider::mids$ = NULL;
      bool PythonAdditionalStateProvider::live$ = false;

      jclass PythonAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalState_2a145999b8c9a41d] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_yield_abdf3beb789bbd4e] = env->getMethodID(cls, "yield", "(Lorg/orekit/propagation/SpacecraftState;)Z");
          mids$[mid_yield__abdf3beb789bbd4e] = env->getMethodID(cls, "yield_", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAdditionalStateProvider::PythonAdditionalStateProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonAdditionalStateProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAdditionalStateProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAdditionalStateProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }

      jboolean PythonAdditionalStateProvider::yield(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yield_abdf3beb789bbd4e], a0.this$);
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
      static PyObject *t_PythonAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAdditionalStateProvider_init_(t_PythonAdditionalStateProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAdditionalStateProvider_finalize(t_PythonAdditionalStateProvider *self);
      static PyObject *t_PythonAdditionalStateProvider_pythonExtension(t_PythonAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_PythonAdditionalStateProvider_yield(t_PythonAdditionalStateProvider *self, PyObject *arg);
      static jobject JNICALL t_PythonAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonAdditionalStateProvider_get__self(t_PythonAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_PythonAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAdditionalStateProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_PythonAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, yield, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAdditionalStateProvider)[] = {
        { Py_tp_methods, t_PythonAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) t_PythonAdditionalStateProvider_init_ },
        { Py_tp_getset, t_PythonAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAdditionalStateProvider, t_PythonAdditionalStateProvider, PythonAdditionalStateProvider);

      void t_PythonAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAdditionalStateProvider), &PY_TYPE_DEF(PythonAdditionalStateProvider), module, "PythonAdditionalStateProvider", 1);
      }

      void t_PythonAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "class_", make_descriptor(PythonAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "wrapfn_", make_descriptor(t_PythonAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAdditionalStateProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D", (void *) t_PythonAdditionalStateProvider_getAdditionalState0 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonAdditionalStateProvider_getName1 },
          { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonAdditionalStateProvider_init2 },
          { "pythonDecRef", "()V", (void *) t_PythonAdditionalStateProvider_pythonDecRef3 },
          { "yield_", "(Lorg/orekit/propagation/SpacecraftState;)Z", (void *) t_PythonAdditionalStateProvider_yield_4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_PythonAdditionalStateProvider::wrap_Object(PythonAdditionalStateProvider(((t_PythonAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAdditionalStateProvider_init_(t_PythonAdditionalStateProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonAdditionalStateProvider object((jobject) NULL);

        INT_CALL(object = PythonAdditionalStateProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAdditionalStateProvider_finalize(t_PythonAdditionalStateProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAdditionalStateProvider_pythonExtension(t_PythonAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_PythonAdditionalStateProvider_yield(t_PythonAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.yield(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yield", arg);
        return NULL;
      }

      static jobject JNICALL t_PythonAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("getAdditionalState", result);
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

      static jobject JNICALL t_PythonAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

      static void JNICALL t_PythonAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "yield_", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("yield_", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonAdditionalStateProvider_get__self(t_PythonAdditionalStateProvider *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ClassicalRungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *ClassicalRungeKuttaFieldIntegrator::mids$ = NULL;
        bool ClassicalRungeKuttaFieldIntegrator::live$ = false;

        jclass ClassicalRungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9ae9949e6b74bf6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_f180d140dce78d62] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_41762fd4377ff26e] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_41762fd4377ff26e] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_8dbaf646de1f9feb] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaFieldIntegrator::ClassicalRungeKuttaFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c9ae9949e6b74bf6, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > ClassicalRungeKuttaFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_f180d140dce78d62]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ClassicalRungeKuttaFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ClassicalRungeKuttaFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_41762fd4377ff26e]));
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
    namespace ode {
      namespace nonstiff {
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_of_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static int t_ClassicalRungeKuttaFieldIntegrator_init_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getA(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getB(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getC(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__a(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__b(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__c(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__parameters_(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, a),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, b),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, c),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaFieldIntegrator_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaFieldIntegrator, t_ClassicalRungeKuttaFieldIntegrator, ClassicalRungeKuttaFieldIntegrator);
        PyObject *t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(const ClassicalRungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegrator *self = (t_ClassicalRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegrator *self = (t_ClassicalRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ClassicalRungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaFieldIntegrator), &PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegrator), module, "ClassicalRungeKuttaFieldIntegrator", 0);
        }

        void t_ClassicalRungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "class_", make_descriptor(ClassicalRungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(ClassicalRungeKuttaFieldIntegrator(((t_ClassicalRungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_of_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ClassicalRungeKuttaFieldIntegrator_init_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ClassicalRungeKuttaFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = ClassicalRungeKuttaFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getA(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getB(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getC(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__parameters_(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__a(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__b(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__c(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Incrementor::class$ = NULL;
      jmethodID *Incrementor::mids$ = NULL;
      bool Incrementor::live$ = false;

      jclass Incrementor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Incrementor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_6115a254f339da5a] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)V");
          mids$[mid_canIncrement_89b302893bdbe1f1] = env->getMethodID(cls, "canIncrement", "()Z");
          mids$[mid_canIncrement_e034cac2b514bb09] = env->getMethodID(cls, "canIncrement", "(I)Z");
          mids$[mid_getCount_412668abc8d889e9] = env->getMethodID(cls, "getCount", "()I");
          mids$[mid_getMaximalCount_412668abc8d889e9] = env->getMethodID(cls, "getMaximalCount", "()I");
          mids$[mid_increment_0640e6acf969ed28] = env->getMethodID(cls, "increment", "()V");
          mids$[mid_increment_a3da1a935cb37f7b] = env->getMethodID(cls, "increment", "(I)V");
          mids$[mid_reset_0640e6acf969ed28] = env->getMethodID(cls, "reset", "()V");
          mids$[mid_withCallback_7d206f2689e80805] = env->getMethodID(cls, "withCallback", "(Lorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)Lorg/hipparchus/util/Incrementor;");
          mids$[mid_withCount_332fb07b2e329de7] = env->getMethodID(cls, "withCount", "(I)Lorg/hipparchus/util/Incrementor;");
          mids$[mid_withMaximalCount_332fb07b2e329de7] = env->getMethodID(cls, "withMaximalCount", "(I)Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Incrementor::Incrementor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      Incrementor::Incrementor(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      Incrementor::Incrementor(jint a0, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6115a254f339da5a, a0, a1.this$)) {}

      jboolean Incrementor::canIncrement() const
      {
        return env->callBooleanMethod(this$, mids$[mid_canIncrement_89b302893bdbe1f1]);
      }

      jboolean Incrementor::canIncrement(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_canIncrement_e034cac2b514bb09], a0);
      }

      jint Incrementor::getCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_412668abc8d889e9]);
      }

      jint Incrementor::getMaximalCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaximalCount_412668abc8d889e9]);
      }

      void Incrementor::increment() const
      {
        env->callVoidMethod(this$, mids$[mid_increment_0640e6acf969ed28]);
      }

      void Incrementor::increment(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_a3da1a935cb37f7b], a0);
      }

      void Incrementor::reset() const
      {
        env->callVoidMethod(this$, mids$[mid_reset_0640e6acf969ed28]);
      }

      Incrementor Incrementor::withCallback(const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withCallback_7d206f2689e80805], a0.this$));
      }

      Incrementor Incrementor::withCount(jint a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withCount_332fb07b2e329de7], a0));
      }

      Incrementor Incrementor::withMaximalCount(jint a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withMaximalCount_332fb07b2e329de7], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_Incrementor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Incrementor_init_(t_Incrementor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Incrementor_canIncrement(t_Incrementor *self, PyObject *args);
      static PyObject *t_Incrementor_getCount(t_Incrementor *self);
      static PyObject *t_Incrementor_getMaximalCount(t_Incrementor *self);
      static PyObject *t_Incrementor_increment(t_Incrementor *self, PyObject *args);
      static PyObject *t_Incrementor_reset(t_Incrementor *self);
      static PyObject *t_Incrementor_withCallback(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_withCount(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_withMaximalCount(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_get__count(t_Incrementor *self, void *data);
      static PyObject *t_Incrementor_get__maximalCount(t_Incrementor *self, void *data);
      static PyGetSetDef t_Incrementor__fields_[] = {
        DECLARE_GET_FIELD(t_Incrementor, count),
        DECLARE_GET_FIELD(t_Incrementor, maximalCount),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Incrementor__methods_[] = {
        DECLARE_METHOD(t_Incrementor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor, canIncrement, METH_VARARGS),
        DECLARE_METHOD(t_Incrementor, getCount, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, getMaximalCount, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, increment, METH_VARARGS),
        DECLARE_METHOD(t_Incrementor, reset, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, withCallback, METH_O),
        DECLARE_METHOD(t_Incrementor, withCount, METH_O),
        DECLARE_METHOD(t_Incrementor, withMaximalCount, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Incrementor)[] = {
        { Py_tp_methods, t_Incrementor__methods_ },
        { Py_tp_init, (void *) t_Incrementor_init_ },
        { Py_tp_getset, t_Incrementor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Incrementor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Incrementor, t_Incrementor, Incrementor);

      void t_Incrementor::install(PyObject *module)
      {
        installType(&PY_TYPE(Incrementor), &PY_TYPE_DEF(Incrementor), module, "Incrementor", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "MaxCountExceededCallback", make_descriptor(&PY_TYPE_DEF(Incrementor$MaxCountExceededCallback)));
      }

      void t_Incrementor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "class_", make_descriptor(Incrementor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "wrapfn_", make_descriptor(t_Incrementor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Incrementor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Incrementor::initializeClass, 1)))
          return NULL;
        return t_Incrementor::wrap_Object(Incrementor(((t_Incrementor *) arg)->object.this$));
      }
      static PyObject *t_Incrementor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Incrementor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Incrementor_init_(t_Incrementor *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Incrementor object((jobject) NULL);

            INT_CALL(object = Incrementor());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            Incrementor object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Incrementor(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a1((jobject) NULL);
            Incrementor object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Incrementor(a0, a1));
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

      static PyObject *t_Incrementor_canIncrement(t_Incrementor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jboolean result;
            OBJ_CALL(result = self->object.canIncrement());
            Py_RETURN_BOOL(result);
          }
          break;
         case 1:
          {
            jint a0;
            jboolean result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.canIncrement(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "canIncrement", args);
        return NULL;
      }

      static PyObject *t_Incrementor_getCount(t_Incrementor *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Incrementor_getMaximalCount(t_Incrementor *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaximalCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Incrementor_increment(t_Incrementor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.increment());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "increment", args);
        return NULL;
      }

      static PyObject *t_Incrementor_reset(t_Incrementor *self)
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      static PyObject *t_Incrementor_withCallback(t_Incrementor *self, PyObject *arg)
      {
        ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a0((jobject) NULL);
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withCallback(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCallback", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_withCount(t_Incrementor *self, PyObject *arg)
      {
        jint a0;
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withCount(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCount", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_withMaximalCount(t_Incrementor *self, PyObject *arg)
      {
        jint a0;
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaximalCount(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaximalCount", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_get__count(t_Incrementor *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCount());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Incrementor_get__maximalCount(t_Incrementor *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaximalCount());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *DutyCycleType::class$ = NULL;
          jmethodID *DutyCycleType::mids$ = NULL;
          bool DutyCycleType::live$ = false;
          DutyCycleType *DutyCycleType::CONTINUOUS = NULL;
          DutyCycleType *DutyCycleType::TIME = NULL;
          DutyCycleType *DutyCycleType::TIME_AND_ANGLE = NULL;

          jclass DutyCycleType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/DutyCycleType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_359b3e8047b89c25] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/DutyCycleType;");
              mids$[mid_values_e48acc29d2897535] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/DutyCycleType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CONTINUOUS = new DutyCycleType(env->getStaticObjectField(cls, "CONTINUOUS", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              TIME = new DutyCycleType(env->getStaticObjectField(cls, "TIME", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              TIME_AND_ANGLE = new DutyCycleType(env->getStaticObjectField(cls, "TIME_AND_ANGLE", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DutyCycleType DutyCycleType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DutyCycleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_359b3e8047b89c25], a0.this$));
          }

          JArray< DutyCycleType > DutyCycleType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DutyCycleType >(env->callStaticObjectMethod(cls, mids$[mid_values_e48acc29d2897535]));
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
        namespace definitions {
          static PyObject *t_DutyCycleType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DutyCycleType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DutyCycleType_of_(t_DutyCycleType *self, PyObject *args);
          static PyObject *t_DutyCycleType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DutyCycleType_values(PyTypeObject *type);
          static PyObject *t_DutyCycleType_get__parameters_(t_DutyCycleType *self, void *data);
          static PyGetSetDef t_DutyCycleType__fields_[] = {
            DECLARE_GET_FIELD(t_DutyCycleType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DutyCycleType__methods_[] = {
            DECLARE_METHOD(t_DutyCycleType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, of_, METH_VARARGS),
            DECLARE_METHOD(t_DutyCycleType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DutyCycleType)[] = {
            { Py_tp_methods, t_DutyCycleType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DutyCycleType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DutyCycleType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DutyCycleType, t_DutyCycleType, DutyCycleType);
          PyObject *t_DutyCycleType::wrap_Object(const DutyCycleType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DutyCycleType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DutyCycleType *self = (t_DutyCycleType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DutyCycleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DutyCycleType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DutyCycleType *self = (t_DutyCycleType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DutyCycleType::install(PyObject *module)
          {
            installType(&PY_TYPE(DutyCycleType), &PY_TYPE_DEF(DutyCycleType), module, "DutyCycleType", 0);
          }

          void t_DutyCycleType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "class_", make_descriptor(DutyCycleType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "wrapfn_", make_descriptor(t_DutyCycleType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "boxfn_", make_descriptor(boxObject));
            env->getClass(DutyCycleType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "CONTINUOUS", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::CONTINUOUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "TIME", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::TIME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "TIME_AND_ANGLE", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::TIME_AND_ANGLE)));
          }

          static PyObject *t_DutyCycleType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DutyCycleType::initializeClass, 1)))
              return NULL;
            return t_DutyCycleType::wrap_Object(DutyCycleType(((t_DutyCycleType *) arg)->object.this$));
          }
          static PyObject *t_DutyCycleType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DutyCycleType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DutyCycleType_of_(t_DutyCycleType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DutyCycleType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DutyCycleType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::DutyCycleType::valueOf(a0));
              return t_DutyCycleType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DutyCycleType_values(PyTypeObject *type)
          {
            JArray< DutyCycleType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::DutyCycleType::values());
            return JArray<jobject>(result.this$).wrap(t_DutyCycleType::wrap_jobject);
          }
          static PyObject *t_DutyCycleType_get__parameters_(t_DutyCycleType *self, void *data)
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
#include "org/orekit/models/earth/troposphere/PythonMappingFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *PythonMappingFunction::class$ = NULL;
          jmethodID *PythonMappingFunction::mids$ = NULL;
          bool PythonMappingFunction::live$ = false;

          jclass PythonMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/PythonMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_mappingFactors_e6ce6b157ff98280] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_964dc353437b5da2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMappingFunction::PythonMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonMappingFunction::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonMappingFunction::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonMappingFunction::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_PythonMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMappingFunction_init_(t_PythonMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMappingFunction_finalize(t_PythonMappingFunction *self);
          static PyObject *t_PythonMappingFunction_pythonExtension(t_PythonMappingFunction *self, PyObject *args);
          static jobject JNICALL t_PythonMappingFunction_mappingFactors0(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonMappingFunction_mappingFactors1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonMappingFunction_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMappingFunction_get__self(t_PythonMappingFunction *self, void *data);
          static PyGetSetDef t_PythonMappingFunction__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMappingFunction, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMappingFunction__methods_[] = {
            DECLARE_METHOD(t_PythonMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMappingFunction, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMappingFunction, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMappingFunction)[] = {
            { Py_tp_methods, t_PythonMappingFunction__methods_ },
            { Py_tp_init, (void *) t_PythonMappingFunction_init_ },
            { Py_tp_getset, t_PythonMappingFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMappingFunction, t_PythonMappingFunction, PythonMappingFunction);

          void t_PythonMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMappingFunction), &PY_TYPE_DEF(PythonMappingFunction), module, "PythonMappingFunction", 1);
          }

          void t_PythonMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "class_", make_descriptor(PythonMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "wrapfn_", make_descriptor(t_PythonMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMappingFunction::initializeClass);
            JNINativeMethod methods[] = {
              { "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonMappingFunction_mappingFactors0 },
              { "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonMappingFunction_mappingFactors1 },
              { "pythonDecRef", "()V", (void *) t_PythonMappingFunction_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMappingFunction::initializeClass, 1)))
              return NULL;
            return t_PythonMappingFunction::wrap_Object(PythonMappingFunction(((t_PythonMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_PythonMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMappingFunction_init_(t_PythonMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            PythonMappingFunction object((jobject) NULL);

            INT_CALL(object = PythonMappingFunction());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMappingFunction_finalize(t_PythonMappingFunction *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMappingFunction_pythonExtension(t_PythonMappingFunction *self, PyObject *args)
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

          static jobject JNICALL t_PythonMappingFunction_mappingFactors0(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactors", "dOO", (double) a0, o1, o2);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("mappingFactors", result);
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

          static jobject JNICALL t_PythonMappingFunction_mappingFactors1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *o1 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a1));
            PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactors", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactors", result);
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

          static void JNICALL t_PythonMappingFunction_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMappingFunction_get__self(t_PythonMappingFunction *self, void *data)
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
#include "org/orekit/frames/InterpolatingTransformProvider.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/FieldTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *InterpolatingTransformProvider::class$ = NULL;
      jmethodID *InterpolatingTransformProvider::mids$ = NULL;
      bool InterpolatingTransformProvider::live$ = false;

      jclass InterpolatingTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/InterpolatingTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_eb9cd2c2bb77ce9f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;IDIDD)V");
          mids$[mid_getGridPoints_412668abc8d889e9] = env->getMethodID(cls, "getGridPoints", "()I");
          mids$[mid_getRawProvider_5b1059d129debef8] = env->getMethodID(cls, "getRawProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getStep_557b8123390d8d0c] = env->getMethodID(cls, "getStep", "()D");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InterpolatingTransformProvider::InterpolatingTransformProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, jint a3, jdouble a4, jint a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb9cd2c2bb77ce9f, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

      jint InterpolatingTransformProvider::getGridPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getGridPoints_412668abc8d889e9]);
      }

      ::org::orekit::frames::TransformProvider InterpolatingTransformProvider::getRawProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getRawProvider_5b1059d129debef8]));
      }

      jdouble InterpolatingTransformProvider::getStep() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getStep_557b8123390d8d0c]);
      }

      ::org::orekit::frames::Transform InterpolatingTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_df04e3927954349e], a0.this$));
      }

      ::org::orekit::frames::FieldTransform InterpolatingTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e70631ba002d9a32], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_InterpolatingTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InterpolatingTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InterpolatingTransformProvider_init_(t_InterpolatingTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InterpolatingTransformProvider_getGridPoints(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getRawProvider(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getStep(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getTransform(t_InterpolatingTransformProvider *self, PyObject *args);
      static PyObject *t_InterpolatingTransformProvider_get__gridPoints(t_InterpolatingTransformProvider *self, void *data);
      static PyObject *t_InterpolatingTransformProvider_get__rawProvider(t_InterpolatingTransformProvider *self, void *data);
      static PyObject *t_InterpolatingTransformProvider_get__step(t_InterpolatingTransformProvider *self, void *data);
      static PyGetSetDef t_InterpolatingTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, gridPoints),
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, rawProvider),
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, step),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InterpolatingTransformProvider__methods_[] = {
        DECLARE_METHOD(t_InterpolatingTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getGridPoints, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getRawProvider, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getStep, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InterpolatingTransformProvider)[] = {
        { Py_tp_methods, t_InterpolatingTransformProvider__methods_ },
        { Py_tp_init, (void *) t_InterpolatingTransformProvider_init_ },
        { Py_tp_getset, t_InterpolatingTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InterpolatingTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InterpolatingTransformProvider, t_InterpolatingTransformProvider, InterpolatingTransformProvider);

      void t_InterpolatingTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(InterpolatingTransformProvider), &PY_TYPE_DEF(InterpolatingTransformProvider), module, "InterpolatingTransformProvider", 0);
      }

      void t_InterpolatingTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "class_", make_descriptor(InterpolatingTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "wrapfn_", make_descriptor(t_InterpolatingTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InterpolatingTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InterpolatingTransformProvider::initializeClass, 1)))
          return NULL;
        return t_InterpolatingTransformProvider::wrap_Object(InterpolatingTransformProvider(((t_InterpolatingTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_InterpolatingTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InterpolatingTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InterpolatingTransformProvider_init_(t_InterpolatingTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        jint a3;
        jdouble a4;
        jint a5;
        jdouble a6;
        jdouble a7;
        InterpolatingTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kKKIDIDD", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = InterpolatingTransformProvider(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_InterpolatingTransformProvider_getGridPoints(t_InterpolatingTransformProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGridPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_InterpolatingTransformProvider_getRawProvider(t_InterpolatingTransformProvider *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_InterpolatingTransformProvider_getStep(t_InterpolatingTransformProvider *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getStep());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_InterpolatingTransformProvider_getTransform(t_InterpolatingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_InterpolatingTransformProvider_get__gridPoints(t_InterpolatingTransformProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGridPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_InterpolatingTransformProvider_get__rawProvider(t_InterpolatingTransformProvider *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }

      static PyObject *t_InterpolatingTransformProvider_get__step(t_InterpolatingTransformProvider *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getStep());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedAngularCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedAngularCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedAngularCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_8d65f6d089410d57] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_a97116b9f853f824] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_getFilter_c2e9b2b1c0db39b3] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_interpolate_40509368b5f3fdda] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::AngularDerivativesFilter & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8d65f6d089410d57, a0, a1.this$)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::AngularDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a97116b9f853f824, a0, a1, a2.this$)) {}

      ::org::orekit::utils::AngularDerivativesFilter TimeStampedAngularCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_c2e9b2b1c0db39b3]));
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
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedAngularCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedAngularCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedAngularCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedAngularCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedAngularCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedAngularCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedAngularCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator, t_TimeStampedAngularCoordinatesHermiteInterpolator, TimeStampedAngularCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedAngularCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedAngularCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedAngularCoordinatesHermiteInterpolator), module, "TimeStampedAngularCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedAngularCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(TimeStampedAngularCoordinatesHermiteInterpolator(((t_TimeStampedAngularCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::AngularDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
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

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"
#include "java/io/IOException.h"
#include "java/lang/InstantiationException.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitMessages$UTF8Control::class$ = NULL;
      jmethodID *OrekitMessages$UTF8Control::mids$ = NULL;
      bool OrekitMessages$UTF8Control::live$ = false;

      jclass OrekitMessages$UTF8Control::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitMessages$UTF8Control");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_newBundle_c5caa61954589488] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitMessages$UTF8Control::OrekitMessages$UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::java::util::ResourceBundle OrekitMessages$UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
      {
        return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_c5caa61954589488], a0.this$, a1.this$, a2.this$, a3.this$, a4));
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
      static PyObject *t_OrekitMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages$UTF8Control_of_(t_OrekitMessages$UTF8Control *self, PyObject *args);
      static int t_OrekitMessages$UTF8Control_init_(t_OrekitMessages$UTF8Control *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitMessages$UTF8Control_newBundle(t_OrekitMessages$UTF8Control *self, PyObject *args);
      static PyObject *t_OrekitMessages$UTF8Control_get__parameters_(t_OrekitMessages$UTF8Control *self, void *data);
      static PyGetSetDef t_OrekitMessages$UTF8Control__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitMessages$UTF8Control, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitMessages$UTF8Control__methods_[] = {
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, newBundle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitMessages$UTF8Control)[] = {
        { Py_tp_methods, t_OrekitMessages$UTF8Control__methods_ },
        { Py_tp_init, (void *) t_OrekitMessages$UTF8Control_init_ },
        { Py_tp_getset, t_OrekitMessages$UTF8Control__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitMessages$UTF8Control)[] = {
        &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
        NULL
      };

      DEFINE_TYPE(OrekitMessages$UTF8Control, t_OrekitMessages$UTF8Control, OrekitMessages$UTF8Control);
      PyObject *t_OrekitMessages$UTF8Control::wrap_Object(const OrekitMessages$UTF8Control& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages$UTF8Control::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages$UTF8Control *self = (t_OrekitMessages$UTF8Control *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrekitMessages$UTF8Control::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages$UTF8Control::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages$UTF8Control *self = (t_OrekitMessages$UTF8Control *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrekitMessages$UTF8Control::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitMessages$UTF8Control), &PY_TYPE_DEF(OrekitMessages$UTF8Control), module, "OrekitMessages$UTF8Control", 0);
      }

      void t_OrekitMessages$UTF8Control::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "class_", make_descriptor(OrekitMessages$UTF8Control::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "wrapfn_", make_descriptor(t_OrekitMessages$UTF8Control::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitMessages$UTF8Control::initializeClass, 1)))
          return NULL;
        return t_OrekitMessages$UTF8Control::wrap_Object(OrekitMessages$UTF8Control(((t_OrekitMessages$UTF8Control *) arg)->object.this$));
      }
      static PyObject *t_OrekitMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitMessages$UTF8Control::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitMessages$UTF8Control_of_(t_OrekitMessages$UTF8Control *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrekitMessages$UTF8Control_init_(t_OrekitMessages$UTF8Control *self, PyObject *args, PyObject *kwds)
      {
        OrekitMessages$UTF8Control object((jobject) NULL);

        INT_CALL(object = OrekitMessages$UTF8Control());
        self->object = object;
        self->parameters[0] = ::org::orekit::errors::PY_TYPE(OrekitMessages);

        return 0;
      }

      static PyObject *t_OrekitMessages$UTF8Control_newBundle(t_OrekitMessages$UTF8Control *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::util::Locale a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::ClassLoader a3((jobject) NULL);
        jboolean a4;
        ::java::util::ResourceBundle result((jobject) NULL);

        if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
          return ::java::util::t_ResourceBundle::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OrekitMessages$UTF8Control), (PyObject *) self, "newBundle", args, 2);
      }
      static PyObject *t_OrekitMessages$UTF8Control_get__parameters_(t_OrekitMessages$UTF8Control *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SmoothedObservationDataSet::class$ = NULL;
          jmethodID *SmoothedObservationDataSet::mids$ = NULL;
          bool SmoothedObservationDataSet::live$ = false;

          jclass SmoothedObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_95b4b21ffaf71469] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getDataSet_438dd48fa809cabc] = env->getMethodID(cls, "getDataSet", "()Lorg/orekit/files/rinex/observation/ObservationDataSet;");
              mids$[mid_getSmoothedData_35f670e1101632be] = env->getMethodID(cls, "getSmoothedData", "()Lorg/orekit/files/rinex/observation/ObservationData;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SmoothedObservationDataSet::SmoothedObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationDataSet & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95b4b21ffaf71469, a0.this$, a1.this$)) {}

          ::org::orekit::files::rinex::observation::ObservationDataSet SmoothedObservationDataSet::getDataSet() const
          {
            return ::org::orekit::files::rinex::observation::ObservationDataSet(env->callObjectMethod(this$, mids$[mid_getDataSet_438dd48fa809cabc]));
          }

          ::org::orekit::files::rinex::observation::ObservationData SmoothedObservationDataSet::getSmoothedData() const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_getSmoothedData_35f670e1101632be]));
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
        namespace filtering {
          static PyObject *t_SmoothedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SmoothedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SmoothedObservationDataSet_init_(t_SmoothedObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SmoothedObservationDataSet_getDataSet(t_SmoothedObservationDataSet *self);
          static PyObject *t_SmoothedObservationDataSet_getSmoothedData(t_SmoothedObservationDataSet *self);
          static PyObject *t_SmoothedObservationDataSet_get__dataSet(t_SmoothedObservationDataSet *self, void *data);
          static PyObject *t_SmoothedObservationDataSet_get__smoothedData(t_SmoothedObservationDataSet *self, void *data);
          static PyGetSetDef t_SmoothedObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_SmoothedObservationDataSet, dataSet),
            DECLARE_GET_FIELD(t_SmoothedObservationDataSet, smoothedData),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SmoothedObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_SmoothedObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, getDataSet, METH_NOARGS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, getSmoothedData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SmoothedObservationDataSet)[] = {
            { Py_tp_methods, t_SmoothedObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_SmoothedObservationDataSet_init_ },
            { Py_tp_getset, t_SmoothedObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SmoothedObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SmoothedObservationDataSet, t_SmoothedObservationDataSet, SmoothedObservationDataSet);

          void t_SmoothedObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(SmoothedObservationDataSet), &PY_TYPE_DEF(SmoothedObservationDataSet), module, "SmoothedObservationDataSet", 0);
          }

          void t_SmoothedObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "class_", make_descriptor(SmoothedObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "wrapfn_", make_descriptor(t_SmoothedObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SmoothedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SmoothedObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_SmoothedObservationDataSet::wrap_Object(SmoothedObservationDataSet(((t_SmoothedObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_SmoothedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SmoothedObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SmoothedObservationDataSet_init_(t_SmoothedObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationDataSet a1((jobject) NULL);
            SmoothedObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SmoothedObservationDataSet(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SmoothedObservationDataSet_getDataSet(t_SmoothedObservationDataSet *self)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataSet());
            return ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(result);
          }

          static PyObject *t_SmoothedObservationDataSet_getSmoothedData(t_SmoothedObservationDataSet *self)
          {
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);
            OBJ_CALL(result = self->object.getSmoothedData());
            return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
          }

          static PyObject *t_SmoothedObservationDataSet_get__dataSet(t_SmoothedObservationDataSet *self, void *data)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataSet());
            return ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(value);
          }

          static PyObject *t_SmoothedObservationDataSet_get__smoothedData(t_SmoothedObservationDataSet *self, void *data)
          {
            ::org::orekit::files::rinex::observation::ObservationData value((jobject) NULL);
            OBJ_CALL(value = self->object.getSmoothedData());
            return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/DivertedSingularityAiming.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *DivertedSingularityAiming::class$ = NULL;
          jmethodID *DivertedSingularityAiming::mids$ = NULL;
          bool DivertedSingularityAiming::live$ = false;

          jclass DivertedSingularityAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/DivertedSingularityAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_64f9d0c569c80ccb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;)V");
              mids$[mid_alongTileDirection_94d0bf825c02adfa] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_0d9551367f7ecdef] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DivertedSingularityAiming::DivertedSingularityAiming(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64f9d0c569c80ccb, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D DivertedSingularityAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_94d0bf825c02adfa], a0.this$, a1.this$));
          }

          ::java::util::List DivertedSingularityAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_0d9551367f7ecdef]));
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
    namespace models {
      namespace earth {
        namespace tessellation {
          static PyObject *t_DivertedSingularityAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DivertedSingularityAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DivertedSingularityAiming_init_(t_DivertedSingularityAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DivertedSingularityAiming_alongTileDirection(t_DivertedSingularityAiming *self, PyObject *args);
          static PyObject *t_DivertedSingularityAiming_getSingularPoints(t_DivertedSingularityAiming *self);
          static PyObject *t_DivertedSingularityAiming_get__singularPoints(t_DivertedSingularityAiming *self, void *data);
          static PyGetSetDef t_DivertedSingularityAiming__fields_[] = {
            DECLARE_GET_FIELD(t_DivertedSingularityAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DivertedSingularityAiming__methods_[] = {
            DECLARE_METHOD(t_DivertedSingularityAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DivertedSingularityAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DivertedSingularityAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_DivertedSingularityAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DivertedSingularityAiming)[] = {
            { Py_tp_methods, t_DivertedSingularityAiming__methods_ },
            { Py_tp_init, (void *) t_DivertedSingularityAiming_init_ },
            { Py_tp_getset, t_DivertedSingularityAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DivertedSingularityAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DivertedSingularityAiming, t_DivertedSingularityAiming, DivertedSingularityAiming);

          void t_DivertedSingularityAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(DivertedSingularityAiming), &PY_TYPE_DEF(DivertedSingularityAiming), module, "DivertedSingularityAiming", 0);
          }

          void t_DivertedSingularityAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "class_", make_descriptor(DivertedSingularityAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "wrapfn_", make_descriptor(t_DivertedSingularityAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DivertedSingularityAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DivertedSingularityAiming::initializeClass, 1)))
              return NULL;
            return t_DivertedSingularityAiming::wrap_Object(DivertedSingularityAiming(((t_DivertedSingularityAiming *) arg)->object.this$));
          }
          static PyObject *t_DivertedSingularityAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DivertedSingularityAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DivertedSingularityAiming_init_(t_DivertedSingularityAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            DivertedSingularityAiming object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_))
            {
              INT_CALL(object = DivertedSingularityAiming(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DivertedSingularityAiming_alongTileDirection(t_DivertedSingularityAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_DivertedSingularityAiming_getSingularPoints(t_DivertedSingularityAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_DivertedSingularityAiming_get__singularPoints(t_DivertedSingularityAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}

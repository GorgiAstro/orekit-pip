#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *Array2DRowRealMatrix::class$ = NULL;
      jmethodID *Array2DRowRealMatrix::mids$ = NULL;
      bool Array2DRowRealMatrix::live$ = false;

      jclass Array2DRowRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/Array2DRowRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_edb361bfdd1ad9ae] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_init$_3490b011a7c22af0] = env->getMethodID(cls, "<init>", "([[DZ)V");
          mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_add_f317c35d7d377fcb] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_addToEntry_754312f3734d6e2f] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_70a207fcbc031df2] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createMatrix_e8546415f980523f] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_8cf5267aa13a77f3] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getDataRef_8cf5267aa13a77f3] = env->getMethodID(cls, "getDataRef", "()[[D");
          mids$[mid_getEntry_21b81d54c06b64b0] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRow_1da5c9e77f24f269] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getSubMatrix_dd66ee2a79d86a98] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_kroneckerProduct_340b47d21842d02c] = env->getMethodID(cls, "kroneckerProduct", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiply_f317c35d7d377fcb] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_multiplyEntry_754312f3734d6e2f] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_b7edd6157848a7f0] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyTransposed_340b47d21842d02c] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_1db7c087750eaffe] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_1db7c087750eaffe] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_setEntry_754312f3734d6e2f] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_3246bd31f432242d] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setSubMatrix_672f554eb45cea1a] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_stack_70a207fcbc031df2] = env->getMethodID(cls, "stack", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_subtract_f317c35d7d377fcb] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_transposeMultiply_b7edd6157848a7f0] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transposeMultiply_340b47d21842d02c] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_unstackSquare_70a207fcbc031df2] = env->getMethodID(cls, "unstackSquare", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_f151009359824fc3] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_3f821bf796d1a7b4] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_ab19ce00fffb9224] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_b64b35af60f84c7f] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_f151009359824fc3] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_3f821bf796d1a7b4] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_ab19ce00fffb9224] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_b64b35af60f84c7f] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Array2DRowRealMatrix::Array2DRowRealMatrix() : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< jdouble > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_edb361bfdd1ad9ae, a0.this$)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< JArray< jdouble > > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_3490b011a7c22af0, a0.this$, a1)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

      Array2DRowRealMatrix Array2DRowRealMatrix::add(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_add_f317c35d7d377fcb], a0.this$));
      }

      void Array2DRowRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_754312f3734d6e2f], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_e8546415f980523f], a0, a1));
      }

      jint Array2DRowRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      JArray< JArray< jdouble > > Array2DRowRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_8cf5267aa13a77f3]));
      }

      JArray< JArray< jdouble > > Array2DRowRealMatrix::getDataRef() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getDataRef_8cf5267aa13a77f3]));
      }

      jdouble Array2DRowRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_21b81d54c06b64b0], a0, a1);
      }

      JArray< jdouble > Array2DRowRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_1da5c9e77f24f269], a0));
      }

      jint Array2DRowRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_dd66ee2a79d86a98], a0, a1, a2, a3));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::kroneckerProduct(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_kroneckerProduct_340b47d21842d02c], a0.this$));
      }

      Array2DRowRealMatrix Array2DRowRealMatrix::multiply(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_f317c35d7d377fcb], a0.this$));
      }

      void Array2DRowRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_754312f3734d6e2f], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::multiplyTransposed(const Array2DRowRealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_b7edd6157848a7f0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_340b47d21842d02c], a0.this$));
      }

      JArray< jdouble > Array2DRowRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_1db7c087750eaffe], a0.this$));
      }

      JArray< jdouble > Array2DRowRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_1db7c087750eaffe], a0.this$));
      }

      void Array2DRowRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_754312f3734d6e2f], a0, a1, a2);
      }

      void Array2DRowRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_3246bd31f432242d], a0, a1.this$);
      }

      void Array2DRowRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_672f554eb45cea1a], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::stack() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_stack_70a207fcbc031df2]));
      }

      Array2DRowRealMatrix Array2DRowRealMatrix::subtract(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_f317c35d7d377fcb], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::transposeMultiply(const Array2DRowRealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_b7edd6157848a7f0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_340b47d21842d02c], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::unstackSquare() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_unstackSquare_70a207fcbc031df2]));
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_f151009359824fc3], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_3f821bf796d1a7b4], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_ab19ce00fffb9224], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_b64b35af60f84c7f], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_f151009359824fc3], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_3f821bf796d1a7b4], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_ab19ce00fffb9224], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
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
      static PyObject *t_Array2DRowRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Array2DRowRealMatrix_init_(t_Array2DRowRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Array2DRowRealMatrix_add(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_addToEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_copy(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_createMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getColumnDimension(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getData(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getDataRef(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_getEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getRow(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getRowDimension(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_kroneckerProduct(t_Array2DRowRealMatrix *self, PyObject *arg);
      static PyObject *t_Array2DRowRealMatrix_multiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_multiplyEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_multiplyTransposed(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_operate(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_preMultiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setRow(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_stack(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_subtract(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_transposeMultiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_unstackSquare(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_walkInColumnOrder(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_walkInRowOrder(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_get__columnDimension(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__data(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__dataRef(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__rowDimension(t_Array2DRowRealMatrix *self, void *data);
      static PyGetSetDef t_Array2DRowRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, data),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, dataRef),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Array2DRowRealMatrix__methods_[] = {
        DECLARE_METHOD(t_Array2DRowRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, kroneckerProduct, METH_O),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, stack, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, unstackSquare, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Array2DRowRealMatrix)[] = {
        { Py_tp_methods, t_Array2DRowRealMatrix__methods_ },
        { Py_tp_init, (void *) t_Array2DRowRealMatrix_init_ },
        { Py_tp_getset, t_Array2DRowRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Array2DRowRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(Array2DRowRealMatrix, t_Array2DRowRealMatrix, Array2DRowRealMatrix);

      void t_Array2DRowRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(Array2DRowRealMatrix), &PY_TYPE_DEF(Array2DRowRealMatrix), module, "Array2DRowRealMatrix", 0);
      }

      void t_Array2DRowRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "class_", make_descriptor(Array2DRowRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "wrapfn_", make_descriptor(t_Array2DRowRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Array2DRowRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Array2DRowRealMatrix::initializeClass, 1)))
          return NULL;
        return t_Array2DRowRealMatrix::wrap_Object(Array2DRowRealMatrix(((t_Array2DRowRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_Array2DRowRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Array2DRowRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Array2DRowRealMatrix_init_(t_Array2DRowRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Array2DRowRealMatrix object((jobject) NULL);

            INT_CALL(object = Array2DRowRealMatrix());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            jboolean a1;
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[DZ", &a0, &a1))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0, a1));
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

      static PyObject *t_Array2DRowRealMatrix_add(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_addToEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_copy(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_createMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getColumnDimension(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getData(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getDataRef(t_Array2DRowRealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_getEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getRow(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getRowDimension(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_kroneckerProduct(t_Array2DRowRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.kroneckerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "kroneckerProduct", arg);
        return NULL;
      }

      static PyObject *t_Array2DRowRealMatrix_multiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_multiplyEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_multiplyTransposed(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowRealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_operate(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_preMultiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setRow(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_stack(t_Array2DRowRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.stack());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_Array2DRowRealMatrix_subtract(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_transposeMultiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowRealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_unstackSquare(t_Array2DRowRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.unstackSquare());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_Array2DRowRealMatrix_walkInColumnOrder(t_Array2DRowRealMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "walkInColumnOrder", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_walkInRowOrder(t_Array2DRowRealMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_get__columnDimension(t_Array2DRowRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Array2DRowRealMatrix_get__data(t_Array2DRowRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_get__dataRef(t_Array2DRowRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_get__rowDimension(t_Array2DRowRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFHeader::class$ = NULL;
        jmethodID *CPFHeader::mids$ = NULL;
        bool CPFHeader::live$ = false;

        jclass CPFHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getCenterOfMassOffset_557b8123390d8d0c] = env->getMethodID(cls, "getCenterOfMassOffset", "()D");
            mids$[mid_getPrf_557b8123390d8d0c] = env->getMethodID(cls, "getPrf", "()D");
            mids$[mid_getRefFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getRefFrameId_412668abc8d889e9] = env->getMethodID(cls, "getRefFrameId", "()I");
            mids$[mid_getRotationalAngleType_412668abc8d889e9] = env->getMethodID(cls, "getRotationalAngleType", "()I");
            mids$[mid_getSource_3cffd47377eca18a] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
            mids$[mid_getStep_412668abc8d889e9] = env->getMethodID(cls, "getStep", "()I");
            mids$[mid_getSubDailySequenceNumber_412668abc8d889e9] = env->getMethodID(cls, "getSubDailySequenceNumber", "()I");
            mids$[mid_getTranspClkRef_557b8123390d8d0c] = env->getMethodID(cls, "getTranspClkRef", "()D");
            mids$[mid_getTranspOscDrift_557b8123390d8d0c] = env->getMethodID(cls, "getTranspOscDrift", "()D");
            mids$[mid_getTranspTransmitDelay_557b8123390d8d0c] = env->getMethodID(cls, "getTranspTransmitDelay", "()D");
            mids$[mid_getTranspUtcOffset_557b8123390d8d0c] = env->getMethodID(cls, "getTranspUtcOffset", "()D");
            mids$[mid_isCenterOfMassCorrectionApplied_89b302893bdbe1f1] = env->getMethodID(cls, "isCenterOfMassCorrectionApplied", "()Z");
            mids$[mid_isCompatibleWithTIVs_89b302893bdbe1f1] = env->getMethodID(cls, "isCompatibleWithTIVs", "()Z");
            mids$[mid_setCenterOfMassOffset_10f281d777284cea] = env->getMethodID(cls, "setCenterOfMassOffset", "(D)V");
            mids$[mid_setIsCenterOfMassCorrectionApplied_ed2afdb8506b9742] = env->getMethodID(cls, "setIsCenterOfMassCorrectionApplied", "(Z)V");
            mids$[mid_setIsCompatibleWithTIVs_ed2afdb8506b9742] = env->getMethodID(cls, "setIsCompatibleWithTIVs", "(Z)V");
            mids$[mid_setPrf_10f281d777284cea] = env->getMethodID(cls, "setPrf", "(D)V");
            mids$[mid_setRefFrame_535d1f91a93c8b4d] = env->getMethodID(cls, "setRefFrame", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_setRefFrameId_a3da1a935cb37f7b] = env->getMethodID(cls, "setRefFrameId", "(I)V");
            mids$[mid_setRotationalAngleType_a3da1a935cb37f7b] = env->getMethodID(cls, "setRotationalAngleType", "(I)V");
            mids$[mid_setSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
            mids$[mid_setStep_a3da1a935cb37f7b] = env->getMethodID(cls, "setStep", "(I)V");
            mids$[mid_setSubDailySequenceNumber_a3da1a935cb37f7b] = env->getMethodID(cls, "setSubDailySequenceNumber", "(I)V");
            mids$[mid_setTranspClkRef_10f281d777284cea] = env->getMethodID(cls, "setTranspClkRef", "(D)V");
            mids$[mid_setTranspOscDrift_10f281d777284cea] = env->getMethodID(cls, "setTranspOscDrift", "(D)V");
            mids$[mid_setTranspTransmitDelay_10f281d777284cea] = env->getMethodID(cls, "setTranspTransmitDelay", "(D)V");
            mids$[mid_setTranspUtcOffset_10f281d777284cea] = env->getMethodID(cls, "setTranspUtcOffset", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFHeader::CPFHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble CPFHeader::getCenterOfMassOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCenterOfMassOffset_557b8123390d8d0c]);
        }

        jdouble CPFHeader::getPrf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPrf_557b8123390d8d0c]);
        }

        ::org::orekit::frames::Frame CPFHeader::getRefFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getRefFrame_6c9bc0a928c56d4e]));
        }

        jint CPFHeader::getRefFrameId() const
        {
          return env->callIntMethod(this$, mids$[mid_getRefFrameId_412668abc8d889e9]);
        }

        jint CPFHeader::getRotationalAngleType() const
        {
          return env->callIntMethod(this$, mids$[mid_getRotationalAngleType_412668abc8d889e9]);
        }

        ::java::lang::String CPFHeader::getSource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_3cffd47377eca18a]));
        }

        jint CPFHeader::getStep() const
        {
          return env->callIntMethod(this$, mids$[mid_getStep_412668abc8d889e9]);
        }

        jint CPFHeader::getSubDailySequenceNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSubDailySequenceNumber_412668abc8d889e9]);
        }

        jdouble CPFHeader::getTranspClkRef() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspClkRef_557b8123390d8d0c]);
        }

        jdouble CPFHeader::getTranspOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspOscDrift_557b8123390d8d0c]);
        }

        jdouble CPFHeader::getTranspTransmitDelay() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspTransmitDelay_557b8123390d8d0c]);
        }

        jdouble CPFHeader::getTranspUtcOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspUtcOffset_557b8123390d8d0c]);
        }

        jboolean CPFHeader::isCenterOfMassCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCenterOfMassCorrectionApplied_89b302893bdbe1f1]);
        }

        jboolean CPFHeader::isCompatibleWithTIVs() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCompatibleWithTIVs_89b302893bdbe1f1]);
        }

        void CPFHeader::setCenterOfMassOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCenterOfMassOffset_10f281d777284cea], a0);
        }

        void CPFHeader::setIsCenterOfMassCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCenterOfMassCorrectionApplied_ed2afdb8506b9742], a0);
        }

        void CPFHeader::setIsCompatibleWithTIVs(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCompatibleWithTIVs_ed2afdb8506b9742], a0);
        }

        void CPFHeader::setPrf(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPrf_10f281d777284cea], a0);
        }

        void CPFHeader::setRefFrame(const ::org::orekit::frames::Frame & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRefFrame_535d1f91a93c8b4d], a0.this$);
        }

        void CPFHeader::setRefFrameId(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRefFrameId_a3da1a935cb37f7b], a0);
        }

        void CPFHeader::setRotationalAngleType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRotationalAngleType_a3da1a935cb37f7b], a0);
        }

        void CPFHeader::setSource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSource_f5ffdf29129ef90a], a0.this$);
        }

        void CPFHeader::setStep(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStep_a3da1a935cb37f7b], a0);
        }

        void CPFHeader::setSubDailySequenceNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSubDailySequenceNumber_a3da1a935cb37f7b], a0);
        }

        void CPFHeader::setTranspClkRef(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspClkRef_10f281d777284cea], a0);
        }

        void CPFHeader::setTranspOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspOscDrift_10f281d777284cea], a0);
        }

        void CPFHeader::setTranspTransmitDelay(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspTransmitDelay_10f281d777284cea], a0);
        }

        void CPFHeader::setTranspUtcOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspUtcOffset_10f281d777284cea], a0);
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
      namespace ilrs {
        static PyObject *t_CPFHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFHeader_init_(t_CPFHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFHeader_getCenterOfMassOffset(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getPrf(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRefFrame(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRefFrameId(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRotationalAngleType(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getSource(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getStep(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getSubDailySequenceNumber(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspClkRef(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspOscDrift(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspTransmitDelay(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspUtcOffset(t_CPFHeader *self);
        static PyObject *t_CPFHeader_isCenterOfMassCorrectionApplied(t_CPFHeader *self);
        static PyObject *t_CPFHeader_isCompatibleWithTIVs(t_CPFHeader *self);
        static PyObject *t_CPFHeader_setCenterOfMassOffset(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setIsCenterOfMassCorrectionApplied(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setIsCompatibleWithTIVs(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setPrf(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRefFrame(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRefFrameId(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRotationalAngleType(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setSource(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setStep(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setSubDailySequenceNumber(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspClkRef(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspOscDrift(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspTransmitDelay(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspUtcOffset(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_get__centerOfMassCorrectionApplied(t_CPFHeader *self, void *data);
        static PyObject *t_CPFHeader_get__centerOfMassOffset(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__centerOfMassOffset(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__compatibleWithTIVs(t_CPFHeader *self, void *data);
        static PyObject *t_CPFHeader_get__prf(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__prf(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__refFrame(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__refFrame(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__refFrameId(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__refFrameId(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__rotationalAngleType(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__rotationalAngleType(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__source(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__source(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__step(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__step(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__subDailySequenceNumber(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__subDailySequenceNumber(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpClkRef(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpClkRef(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpOscDrift(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpOscDrift(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpTransmitDelay(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpTransmitDelay(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpUtcOffset(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpUtcOffset(t_CPFHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_CPFHeader__fields_[] = {
          DECLARE_GET_FIELD(t_CPFHeader, centerOfMassCorrectionApplied),
          DECLARE_GETSET_FIELD(t_CPFHeader, centerOfMassOffset),
          DECLARE_GET_FIELD(t_CPFHeader, compatibleWithTIVs),
          DECLARE_GETSET_FIELD(t_CPFHeader, prf),
          DECLARE_GETSET_FIELD(t_CPFHeader, refFrame),
          DECLARE_GETSET_FIELD(t_CPFHeader, refFrameId),
          DECLARE_GETSET_FIELD(t_CPFHeader, rotationalAngleType),
          DECLARE_GETSET_FIELD(t_CPFHeader, source),
          DECLARE_GETSET_FIELD(t_CPFHeader, step),
          DECLARE_GETSET_FIELD(t_CPFHeader, subDailySequenceNumber),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpClkRef),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpOscDrift),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpTransmitDelay),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpUtcOffset),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPFHeader__methods_[] = {
          DECLARE_METHOD(t_CPFHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFHeader, getCenterOfMassOffset, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getPrf, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRefFrame, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRefFrameId, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRotationalAngleType, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getSource, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getStep, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getSubDailySequenceNumber, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspClkRef, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspTransmitDelay, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspUtcOffset, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, isCenterOfMassCorrectionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, isCompatibleWithTIVs, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, setCenterOfMassOffset, METH_O),
          DECLARE_METHOD(t_CPFHeader, setIsCenterOfMassCorrectionApplied, METH_O),
          DECLARE_METHOD(t_CPFHeader, setIsCompatibleWithTIVs, METH_O),
          DECLARE_METHOD(t_CPFHeader, setPrf, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRefFrame, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRefFrameId, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRotationalAngleType, METH_O),
          DECLARE_METHOD(t_CPFHeader, setSource, METH_O),
          DECLARE_METHOD(t_CPFHeader, setStep, METH_O),
          DECLARE_METHOD(t_CPFHeader, setSubDailySequenceNumber, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspClkRef, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspOscDrift, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspTransmitDelay, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspUtcOffset, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFHeader)[] = {
          { Py_tp_methods, t_CPFHeader__methods_ },
          { Py_tp_init, (void *) t_CPFHeader_init_ },
          { Py_tp_getset, t_CPFHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(CPFHeader, t_CPFHeader, CPFHeader);

        void t_CPFHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFHeader), &PY_TYPE_DEF(CPFHeader), module, "CPFHeader", 0);
        }

        void t_CPFHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "class_", make_descriptor(CPFHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "wrapfn_", make_descriptor(t_CPFHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFHeader::initializeClass, 1)))
            return NULL;
          return t_CPFHeader::wrap_Object(CPFHeader(((t_CPFHeader *) arg)->object.this$));
        }
        static PyObject *t_CPFHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFHeader_init_(t_CPFHeader *self, PyObject *args, PyObject *kwds)
        {
          CPFHeader object((jobject) NULL);

          INT_CALL(object = CPFHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_CPFHeader_getCenterOfMassOffset(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getCenterOfMassOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getPrf(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPrf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getRefFrame(t_CPFHeader *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_CPFHeader_getRefFrameId(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getRefFrameId());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getRotationalAngleType(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getRotationalAngleType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getSource(t_CPFHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSource());
          return j2p(result);
        }

        static PyObject *t_CPFHeader_getStep(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStep());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getSubDailySequenceNumber(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSubDailySequenceNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getTranspClkRef(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspClkRef());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspOscDrift(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspTransmitDelay(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspTransmitDelay());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspUtcOffset(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspUtcOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_isCenterOfMassCorrectionApplied(t_CPFHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CPFHeader_isCompatibleWithTIVs(t_CPFHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCompatibleWithTIVs());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CPFHeader_setCenterOfMassOffset(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setCenterOfMassOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setCenterOfMassOffset", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setIsCenterOfMassCorrectionApplied(t_CPFHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsCenterOfMassCorrectionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsCenterOfMassCorrectionApplied", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setIsCompatibleWithTIVs(t_CPFHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsCompatibleWithTIVs(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsCompatibleWithTIVs", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setPrf(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPrf(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPrf", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRefFrame(t_CPFHeader *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setRefFrame(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRefFrame", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRefFrameId(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRefFrameId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRefFrameId", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRotationalAngleType(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRotationalAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRotationalAngleType", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setSource(t_CPFHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSource", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setStep(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStep", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setSubDailySequenceNumber(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSubDailySequenceNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSubDailySequenceNumber", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspClkRef(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspClkRef(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspClkRef", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspOscDrift(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspTransmitDelay(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspTransmitDelay(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspTransmitDelay", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspUtcOffset(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspUtcOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspUtcOffset", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_get__centerOfMassCorrectionApplied(t_CPFHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CPFHeader_get__centerOfMassOffset(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getCenterOfMassOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__centerOfMassOffset(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setCenterOfMassOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "centerOfMassOffset", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__compatibleWithTIVs(t_CPFHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCompatibleWithTIVs());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CPFHeader_get__prf(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPrf());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__prf(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPrf(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "prf", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__refFrame(t_CPFHeader *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
        static int t_CPFHeader_set__refFrame(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &value))
            {
              INT_CALL(self->object.setRefFrame(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refFrame", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__refFrameId(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getRefFrameId());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__refFrameId(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRefFrameId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refFrameId", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__rotationalAngleType(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getRotationalAngleType());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__rotationalAngleType(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRotationalAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "rotationalAngleType", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__source(t_CPFHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSource());
          return j2p(value);
        }
        static int t_CPFHeader_set__source(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "source", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__step(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStep());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__step(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setStep(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "step", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__subDailySequenceNumber(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSubDailySequenceNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__subDailySequenceNumber(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSubDailySequenceNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "subDailySequenceNumber", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpClkRef(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspClkRef());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpClkRef(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspClkRef(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpClkRef", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpOscDrift(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpOscDrift(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpOscDrift", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpTransmitDelay(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspTransmitDelay());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpTransmitDelay(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspTransmitDelay(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpTransmitDelay", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpUtcOffset(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspUtcOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpUtcOffset(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspUtcOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpUtcOffset", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEnablingPredicate.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEnablingPredicate::class$ = NULL;
        jmethodID *PythonEnablingPredicate::mids$ = NULL;
        bool PythonEnablingPredicate::live$ = false;

        jclass PythonEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_eventIsEnabled_3634c1457eedfeb6] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEnablingPredicate::PythonEnablingPredicate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonEnablingPredicate::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonEnablingPredicate::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonEnablingPredicate::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      namespace events {
        static PyObject *t_PythonEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEnablingPredicate_init_(t_PythonEnablingPredicate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEnablingPredicate_finalize(t_PythonEnablingPredicate *self);
        static PyObject *t_PythonEnablingPredicate_pythonExtension(t_PythonEnablingPredicate *self, PyObject *args);
        static jboolean JNICALL t_PythonEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEnablingPredicate_get__self(t_PythonEnablingPredicate *self, void *data);
        static PyGetSetDef t_PythonEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEnablingPredicate, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_PythonEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEnablingPredicate, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEnablingPredicate, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEnablingPredicate)[] = {
          { Py_tp_methods, t_PythonEnablingPredicate__methods_ },
          { Py_tp_init, (void *) t_PythonEnablingPredicate_init_ },
          { Py_tp_getset, t_PythonEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEnablingPredicate, t_PythonEnablingPredicate, PythonEnablingPredicate);

        void t_PythonEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEnablingPredicate), &PY_TYPE_DEF(PythonEnablingPredicate), module, "PythonEnablingPredicate", 1);
        }

        void t_PythonEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "class_", make_descriptor(PythonEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "wrapfn_", make_descriptor(t_PythonEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEnablingPredicate::initializeClass);
          JNINativeMethod methods[] = {
            { "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z", (void *) t_PythonEnablingPredicate_eventIsEnabled0 },
            { "pythonDecRef", "()V", (void *) t_PythonEnablingPredicate_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_PythonEnablingPredicate::wrap_Object(PythonEnablingPredicate(((t_PythonEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_PythonEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEnablingPredicate_init_(t_PythonEnablingPredicate *self, PyObject *args, PyObject *kwds)
        {
          PythonEnablingPredicate object((jobject) NULL);

          INT_CALL(object = PythonEnablingPredicate());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEnablingPredicate_finalize(t_PythonEnablingPredicate *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEnablingPredicate_pythonExtension(t_PythonEnablingPredicate *self, PyObject *args)
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

        static jboolean JNICALL t_PythonEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a1));
          PyObject *result = PyObject_CallMethod(obj, "eventIsEnabled", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("eventIsEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEnablingPredicate_get__self(t_PythonEnablingPredicate *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Divide.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Divide::class$ = NULL;
        jmethodID *Divide::mids$ = NULL;
        bool Divide::live$ = false;

        jclass Divide::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Divide");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Divide::Divide() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Divide::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
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
        static PyObject *t_Divide_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Divide_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Divide_init_(t_Divide *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Divide_value(t_Divide *self, PyObject *args);

        static PyMethodDef t_Divide__methods_[] = {
          DECLARE_METHOD(t_Divide, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Divide, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Divide, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Divide)[] = {
          { Py_tp_methods, t_Divide__methods_ },
          { Py_tp_init, (void *) t_Divide_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Divide)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Divide, t_Divide, Divide);

        void t_Divide::install(PyObject *module)
        {
          installType(&PY_TYPE(Divide), &PY_TYPE_DEF(Divide), module, "Divide", 0);
        }

        void t_Divide::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "class_", make_descriptor(Divide::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "wrapfn_", make_descriptor(t_Divide::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Divide_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Divide::initializeClass, 1)))
            return NULL;
          return t_Divide::wrap_Object(Divide(((t_Divide *) arg)->object.this$));
        }
        static PyObject *t_Divide_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Divide::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Divide_init_(t_Divide *self, PyObject *args, PyObject *kwds)
        {
          Divide object((jobject) NULL);

          INT_CALL(object = Divide());
          self->object = object;

          return 0;
        }

        static PyObject *t_Divide_value(t_Divide *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
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
#include "org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateDifferentiableSolver::class$ = NULL;
        jmethodID *UnivariateDifferentiableSolver::mids$ = NULL;
        bool UnivariateDifferentiableSolver::live$ = false;

        jclass UnivariateDifferentiableSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_UnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_UnivariateDifferentiableSolver__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableSolver)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableSolver, t_UnivariateDifferentiableSolver, UnivariateDifferentiableSolver);

        void t_UnivariateDifferentiableSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableSolver), &PY_TYPE_DEF(UnivariateDifferentiableSolver), module, "UnivariateDifferentiableSolver", 0);
        }

        void t_UnivariateDifferentiableSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "class_", make_descriptor(UnivariateDifferentiableSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "wrapfn_", make_descriptor(t_UnivariateDifferentiableSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableSolver::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableSolver::wrap_Object(UnivariateDifferentiableSolver(((t_UnivariateDifferentiableSolver *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *MeasurementDecorator::class$ = NULL;
        jmethodID *MeasurementDecorator::mids$ = NULL;
        bool MeasurementDecorator::live$ = false;

        jclass MeasurementDecorator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/MeasurementDecorator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6b3d9251175727b2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getCovariance_70a207fcbc031df2] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getObservedMeasurement_1217c497a513de4c] = env->getMethodID(cls, "getObservedMeasurement", "()Lorg/orekit/estimation/measurements/ObservedMeasurement;");
            mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
            mids$[mid_getValue_75d50d73180655b4] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MeasurementDecorator::MeasurementDecorator(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6b3d9251175727b2, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::linear::RealMatrix MeasurementDecorator::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_70a207fcbc031df2]));
        }

        ::org::orekit::estimation::measurements::ObservedMeasurement MeasurementDecorator::getObservedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_getObservedMeasurement_1217c497a513de4c]));
        }

        jdouble MeasurementDecorator::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
        }

        ::org::hipparchus::linear::RealVector MeasurementDecorator::getValue() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getValue_75d50d73180655b4]));
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
      namespace sequential {
        static PyObject *t_MeasurementDecorator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MeasurementDecorator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MeasurementDecorator_init_(t_MeasurementDecorator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MeasurementDecorator_getCovariance(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getObservedMeasurement(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getTime(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getValue(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_get__covariance(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__observedMeasurement(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__time(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__value(t_MeasurementDecorator *self, void *data);
        static PyGetSetDef t_MeasurementDecorator__fields_[] = {
          DECLARE_GET_FIELD(t_MeasurementDecorator, covariance),
          DECLARE_GET_FIELD(t_MeasurementDecorator, observedMeasurement),
          DECLARE_GET_FIELD(t_MeasurementDecorator, time),
          DECLARE_GET_FIELD(t_MeasurementDecorator, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MeasurementDecorator__methods_[] = {
          DECLARE_METHOD(t_MeasurementDecorator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MeasurementDecorator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MeasurementDecorator, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getObservedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getTime, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MeasurementDecorator)[] = {
          { Py_tp_methods, t_MeasurementDecorator__methods_ },
          { Py_tp_init, (void *) t_MeasurementDecorator_init_ },
          { Py_tp_getset, t_MeasurementDecorator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MeasurementDecorator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MeasurementDecorator, t_MeasurementDecorator, MeasurementDecorator);

        void t_MeasurementDecorator::install(PyObject *module)
        {
          installType(&PY_TYPE(MeasurementDecorator), &PY_TYPE_DEF(MeasurementDecorator), module, "MeasurementDecorator", 0);
        }

        void t_MeasurementDecorator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "class_", make_descriptor(MeasurementDecorator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "wrapfn_", make_descriptor(t_MeasurementDecorator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MeasurementDecorator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MeasurementDecorator::initializeClass, 1)))
            return NULL;
          return t_MeasurementDecorator::wrap_Object(MeasurementDecorator(((t_MeasurementDecorator *) arg)->object.this$));
        }
        static PyObject *t_MeasurementDecorator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MeasurementDecorator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MeasurementDecorator_init_(t_MeasurementDecorator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          MeasurementDecorator object((jobject) NULL);

          if (!parseArgs(args, "Kkk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2))
          {
            INT_CALL(object = MeasurementDecorator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MeasurementDecorator_getCovariance(t_MeasurementDecorator *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_getObservedMeasurement(t_MeasurementDecorator *self)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_getTime(t_MeasurementDecorator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MeasurementDecorator_getValue(t_MeasurementDecorator *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_get__covariance(t_MeasurementDecorator *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MeasurementDecorator_get__observedMeasurement(t_MeasurementDecorator *self, void *data)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(value);
        }

        static PyObject *t_MeasurementDecorator_get__time(t_MeasurementDecorator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_MeasurementDecorator_get__value(t_MeasurementDecorator *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LazyLoadedEop::class$ = NULL;
      jmethodID *LazyLoadedEop::mids$ = NULL;
      bool LazyLoadedEop::live$ = false;

      jclass LazyLoadedEop::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LazyLoadedEop");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_451bc3479d2995cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_addDefaultEOP1980HistoryLoaders_2fb90663bf421a82] = env->getMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_2fb90663bf421a82] = env->getMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V");
          mids$[mid_addEOPHistoryLoader_4f61b75864dcff87] = env->getMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_clearEOPHistoryLoaders_0640e6acf969ed28] = env->getMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_getDataProvidersManager_090dc74a0d7a5aef] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_getEOPHistory_972b11dad6ca0bb8] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;ZLorg/orekit/time/TimeScales;)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_setEOPContinuityThreshold_10f281d777284cea] = env->getMethodID(cls, "setEOPContinuityThreshold", "(D)V");
          mids$[mid_setInterpolationDegree_a3da1a935cb37f7b] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedEop::LazyLoadedEop(const ::org::orekit::data::DataProvidersManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_451bc3479d2995cd, a0.this$)) {}

      void LazyLoadedEop::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::util::function::Supplier & a6) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP1980HistoryLoaders_2fb90663bf421a82], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$);
      }

      void LazyLoadedEop::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::util::function::Supplier & a6) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP2000HistoryLoaders_2fb90663bf421a82], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$);
      }

      void LazyLoadedEop::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addEOPHistoryLoader_4f61b75864dcff87], a0.this$, a1.this$);
      }

      void LazyLoadedEop::clearEOPHistoryLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEOPHistoryLoaders_0640e6acf969ed28]);
      }

      ::org::orekit::data::DataProvidersManager LazyLoadedEop::getDataProvidersManager() const
      {
        return ::org::orekit::data::DataProvidersManager(env->callObjectMethod(this$, mids$[mid_getDataProvidersManager_090dc74a0d7a5aef]));
      }

      ::org::orekit::frames::EOPHistory LazyLoadedEop::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1, const ::org::orekit::time::TimeScales & a2) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_972b11dad6ca0bb8], a0.this$, a1, a2.this$));
      }

      void LazyLoadedEop::setEOPContinuityThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setEOPContinuityThreshold_10f281d777284cea], a0);
      }

      void LazyLoadedEop::setInterpolationDegree(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_a3da1a935cb37f7b], a0);
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
      static PyObject *t_LazyLoadedEop_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedEop_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedEop_init_(t_LazyLoadedEop *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedEop_addDefaultEOP1980HistoryLoaders(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_addDefaultEOP2000HistoryLoaders(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_addEOPHistoryLoader(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_clearEOPHistoryLoaders(t_LazyLoadedEop *self);
      static PyObject *t_LazyLoadedEop_getDataProvidersManager(t_LazyLoadedEop *self);
      static PyObject *t_LazyLoadedEop_getEOPHistory(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_setEOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg);
      static PyObject *t_LazyLoadedEop_setInterpolationDegree(t_LazyLoadedEop *self, PyObject *arg);
      static PyObject *t_LazyLoadedEop_get__dataProvidersManager(t_LazyLoadedEop *self, void *data);
      static int t_LazyLoadedEop_set__eOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg, void *data);
      static int t_LazyLoadedEop_set__interpolationDegree(t_LazyLoadedEop *self, PyObject *arg, void *data);
      static PyGetSetDef t_LazyLoadedEop__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedEop, dataProvidersManager),
        DECLARE_SET_FIELD(t_LazyLoadedEop, eOPContinuityThreshold),
        DECLARE_SET_FIELD(t_LazyLoadedEop, interpolationDegree),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedEop__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedEop, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedEop, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedEop, addDefaultEOP1980HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, addDefaultEOP2000HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, addEOPHistoryLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, clearEOPHistoryLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedEop, getDataProvidersManager, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedEop, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, setEOPContinuityThreshold, METH_O),
        DECLARE_METHOD(t_LazyLoadedEop, setInterpolationDegree, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedEop)[] = {
        { Py_tp_methods, t_LazyLoadedEop__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedEop_init_ },
        { Py_tp_getset, t_LazyLoadedEop__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedEop)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedEop, t_LazyLoadedEop, LazyLoadedEop);

      void t_LazyLoadedEop::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedEop), &PY_TYPE_DEF(LazyLoadedEop), module, "LazyLoadedEop", 0);
      }

      void t_LazyLoadedEop::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "class_", make_descriptor(LazyLoadedEop::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "wrapfn_", make_descriptor(t_LazyLoadedEop::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedEop_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedEop::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedEop::wrap_Object(LazyLoadedEop(((t_LazyLoadedEop *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedEop_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedEop::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedEop_init_(t_LazyLoadedEop *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
        LazyLoadedEop object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
        {
          INT_CALL(object = LazyLoadedEop(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedEop_addDefaultEOP1980HistoryLoaders(t_LazyLoadedEop *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);
        ::java::util::function::Supplier a6((jobject) NULL);
        PyTypeObject **p6;

        if (!parseArgs(args, "ssssssK", ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(self->object.addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5, a6));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_addDefaultEOP2000HistoryLoaders(t_LazyLoadedEop *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);
        ::java::util::function::Supplier a6((jobject) NULL);
        PyTypeObject **p6;

        if (!parseArgs(args, "ssssssK", ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(self->object.addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5, a6));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_addEOPHistoryLoader(t_LazyLoadedEop *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(self->object.addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_clearEOPHistoryLoaders(t_LazyLoadedEop *self)
      {
        OBJ_CALL(self->object.clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedEop_getDataProvidersManager(t_LazyLoadedEop *self)
      {
        ::org::orekit::data::DataProvidersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedEop_getEOPHistory(t_LazyLoadedEop *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1, a2));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_setEOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_setInterpolationDegree(t_LazyLoadedEop *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setInterpolationDegree(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_get__dataProvidersManager(t_LazyLoadedEop *self, void *data)
      {
        ::org::orekit::data::DataProvidersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(value);
      }

      static int t_LazyLoadedEop_set__eOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }

      static int t_LazyLoadedEop_set__interpolationDegree(t_LazyLoadedEop *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setInterpolationDegree(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/util/List.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalGradientConverter::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalGradientConverter::mids$ = NULL;
        bool PythonAbstractAnalyticalGradientConverter::live$ = false;

        jclass PythonAbstractAnalyticalGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4de0bd046bd8fbcf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/AbstractAnalyticalPropagator;DI)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getPropagator_733af95624ce3e55] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalGradientConverter::PythonAbstractAnalyticalGradientConverter(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator & a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_4de0bd046bd8fbcf, a0.this$, a1, a2)) {}

        void PythonAbstractAnalyticalGradientConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractAnalyticalGradientConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractAnalyticalGradientConverter::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalGradientConverter_init_(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_finalize(t_PythonAbstractAnalyticalGradientConverter *self);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_pythonExtension(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getPropagator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_get__self(t_PythonAbstractAnalyticalGradientConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalGradientConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalGradientConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalGradientConverter)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalGradientConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalGradientConverter_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalGradientConverter, t_PythonAbstractAnalyticalGradientConverter, PythonAbstractAnalyticalGradientConverter);

        void t_PythonAbstractAnalyticalGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalGradientConverter), &PY_TYPE_DEF(PythonAbstractAnalyticalGradientConverter), module, "PythonAbstractAnalyticalGradientConverter", 1);
        }

        void t_PythonAbstractAnalyticalGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "class_", make_descriptor(PythonAbstractAnalyticalGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalGradientConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0 },
            { "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;", (void *) t_PythonAbstractAnalyticalGradientConverter_getPropagator1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalGradientConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalGradientConverter::wrap_Object(PythonAbstractAnalyticalGradientConverter(((t_PythonAbstractAnalyticalGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalGradientConverter_init_(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator a0((jobject) NULL);
          jdouble a1;
          jint a2;
          PythonAbstractAnalyticalGradientConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonAbstractAnalyticalGradientConverter(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_finalize(t_PythonAbstractAnalyticalGradientConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_pythonExtension(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
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

        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getPropagator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "getPropagator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator::initializeClass, &value))
          {
            throwTypeError("getPropagator", result);
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

        static void JNICALL t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_get__self(t_PythonAbstractAnalyticalGradientConverter *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/Beta.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Beta::class$ = NULL;
      jmethodID *Beta::mids$ = NULL;
      bool Beta::live$ = false;

      jclass Beta::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Beta");

          mids$ = new jmethodID[max_mid];
          mids$[mid_logBeta_2268d18be49a6087] = env->getStaticMethodID(cls, "logBeta", "(DD)D");
          mids$[mid_regularizedBeta_8d02ba458f22e508] = env->getStaticMethodID(cls, "regularizedBeta", "(DDD)D");
          mids$[mid_regularizedBeta_79d60f5d1a9d8623] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDD)D");
          mids$[mid_regularizedBeta_018e65b087664781] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDI)D");
          mids$[mid_regularizedBeta_45bae9b9d6f4d481] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDDI)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Beta::logBeta(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logBeta_2268d18be49a6087], a0, a1);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_8d02ba458f22e508], a0, a1, a2);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_79d60f5d1a9d8623], a0, a1, a2, a3);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_018e65b087664781], a0, a1, a2, a3);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_45bae9b9d6f4d481], a0, a1, a2, a3, a4);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      static PyObject *t_Beta_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Beta_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Beta_logBeta(PyTypeObject *type, PyObject *args);
      static PyObject *t_Beta_regularizedBeta(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Beta__methods_[] = {
        DECLARE_METHOD(t_Beta, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Beta, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Beta, logBeta, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Beta, regularizedBeta, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Beta)[] = {
        { Py_tp_methods, t_Beta__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Beta)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Beta, t_Beta, Beta);

      void t_Beta::install(PyObject *module)
      {
        installType(&PY_TYPE(Beta), &PY_TYPE_DEF(Beta), module, "Beta", 0);
      }

      void t_Beta::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "class_", make_descriptor(Beta::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "wrapfn_", make_descriptor(t_Beta::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Beta_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Beta::initializeClass, 1)))
          return NULL;
        return t_Beta::wrap_Object(Beta(((t_Beta *) arg)->object.this$));
      }
      static PyObject *t_Beta_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Beta::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Beta_logBeta(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::special::Beta::logBeta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "logBeta", args);
        return NULL;
      }

      static PyObject *t_Beta_regularizedBeta(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedBeta", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"
#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearProcess::class$ = NULL;
          jmethodID *LinearProcess::mids$ = NULL;
          bool LinearProcess::live$ = false;

          jclass LinearProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_2138a21d0289f4f7] = env->getMethodID(cls, "getEvolution", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/linear/LinearEvolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::linear::LinearEvolution LinearProcess::getEvolution(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::linear::LinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_2138a21d0289f4f7], a0.this$));
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
        namespace linear {
          static PyObject *t_LinearProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearProcess_of_(t_LinearProcess *self, PyObject *args);
          static PyObject *t_LinearProcess_getEvolution(t_LinearProcess *self, PyObject *arg);
          static PyObject *t_LinearProcess_get__parameters_(t_LinearProcess *self, void *data);
          static PyGetSetDef t_LinearProcess__fields_[] = {
            DECLARE_GET_FIELD(t_LinearProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearProcess__methods_[] = {
            DECLARE_METHOD(t_LinearProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_LinearProcess, getEvolution, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearProcess)[] = {
            { Py_tp_methods, t_LinearProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_LinearProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LinearProcess, t_LinearProcess, LinearProcess);
          PyObject *t_LinearProcess::wrap_Object(const LinearProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearProcess *self = (t_LinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_LinearProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearProcess *self = (t_LinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_LinearProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearProcess), &PY_TYPE_DEF(LinearProcess), module, "LinearProcess", 0);
          }

          void t_LinearProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "class_", make_descriptor(LinearProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "wrapfn_", make_descriptor(t_LinearProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearProcess::initializeClass, 1)))
              return NULL;
            return t_LinearProcess::wrap_Object(LinearProcess(((t_LinearProcess *) arg)->object.this$));
          }
          static PyObject *t_LinearProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LinearProcess_of_(t_LinearProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_LinearProcess_getEvolution(t_LinearProcess *self, PyObject *arg)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::linear::LinearEvolution result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEvolution(a0));
              return ::org::hipparchus::filtering::kalman::linear::t_LinearEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", arg);
            return NULL;
          }
          static PyObject *t_LinearProcess_get__parameters_(t_LinearProcess *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/GaussIntegratorFactory.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *GaussIntegratorFactory::class$ = NULL;
          jmethodID *GaussIntegratorFactory::mids$ = NULL;
          bool GaussIntegratorFactory::live$ = false;
          jint GaussIntegratorFactory::DEFAULT_DECIMAL_DIGITS = (jint) 0;

          jclass GaussIntegratorFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/GaussIntegratorFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_hermite_23e9f34c02f0a4e5] = env->getMethodID(cls, "hermite", "(I)Lorg/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator;");
              mids$[mid_laguerre_5f3aabdbfc0193e2] = env->getMethodID(cls, "laguerre", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendre_5f3aabdbfc0193e2] = env->getMethodID(cls, "legendre", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendre_db871802ef5ea1e9] = env->getMethodID(cls, "legendre", "(IDD)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendreHighPrecision_5f3aabdbfc0193e2] = env->getMethodID(cls, "legendreHighPrecision", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendreHighPrecision_db871802ef5ea1e9] = env->getMethodID(cls, "legendreHighPrecision", "(IDD)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_DECIMAL_DIGITS = env->getStaticIntField(cls, "DEFAULT_DECIMAL_DIGITS");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GaussIntegratorFactory::GaussIntegratorFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          GaussIntegratorFactory::GaussIntegratorFactory(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

          ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator GaussIntegratorFactory::hermite(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator(env->callObjectMethod(this$, mids$[mid_hermite_23e9f34c02f0a4e5], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::laguerre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_laguerre_5f3aabdbfc0193e2], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_5f3aabdbfc0193e2], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendre(jint a0, jdouble a1, jdouble a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_db871802ef5ea1e9], a0, a1, a2));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendreHighPrecision(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendreHighPrecision_5f3aabdbfc0193e2], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendreHighPrecision(jint a0, jdouble a1, jdouble a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendreHighPrecision_db871802ef5ea1e9], a0, a1, a2));
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
          static PyObject *t_GaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GaussIntegratorFactory_init_(t_GaussIntegratorFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GaussIntegratorFactory_hermite(t_GaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_laguerre(t_GaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_legendre(t_GaussIntegratorFactory *self, PyObject *args);
          static PyObject *t_GaussIntegratorFactory_legendreHighPrecision(t_GaussIntegratorFactory *self, PyObject *args);

          static PyMethodDef t_GaussIntegratorFactory__methods_[] = {
            DECLARE_METHOD(t_GaussIntegratorFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegratorFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegratorFactory, hermite, METH_O),
            DECLARE_METHOD(t_GaussIntegratorFactory, laguerre, METH_O),
            DECLARE_METHOD(t_GaussIntegratorFactory, legendre, METH_VARARGS),
            DECLARE_METHOD(t_GaussIntegratorFactory, legendreHighPrecision, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GaussIntegratorFactory)[] = {
            { Py_tp_methods, t_GaussIntegratorFactory__methods_ },
            { Py_tp_init, (void *) t_GaussIntegratorFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GaussIntegratorFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GaussIntegratorFactory, t_GaussIntegratorFactory, GaussIntegratorFactory);

          void t_GaussIntegratorFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(GaussIntegratorFactory), &PY_TYPE_DEF(GaussIntegratorFactory), module, "GaussIntegratorFactory", 0);
          }

          void t_GaussIntegratorFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "class_", make_descriptor(GaussIntegratorFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "wrapfn_", make_descriptor(t_GaussIntegratorFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(GaussIntegratorFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "DEFAULT_DECIMAL_DIGITS", make_descriptor(GaussIntegratorFactory::DEFAULT_DECIMAL_DIGITS));
          }

          static PyObject *t_GaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GaussIntegratorFactory::initializeClass, 1)))
              return NULL;
            return t_GaussIntegratorFactory::wrap_Object(GaussIntegratorFactory(((t_GaussIntegratorFactory *) arg)->object.this$));
          }
          static PyObject *t_GaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GaussIntegratorFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GaussIntegratorFactory_init_(t_GaussIntegratorFactory *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GaussIntegratorFactory object((jobject) NULL);

                INT_CALL(object = GaussIntegratorFactory());
                self->object = object;
                break;
              }
             case 1:
              {
                jint a0;
                GaussIntegratorFactory object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = GaussIntegratorFactory(a0));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GaussIntegratorFactory_hermite(t_GaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.hermite(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_SymmetricGaussIntegrator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "hermite", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_laguerre(t_GaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.laguerre(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "laguerre", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_legendre(t_GaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendre(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.legendre(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendre", args);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_legendreHighPrecision(t_GaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendreHighPrecision(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.legendreHighPrecision(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendreHighPrecision", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonExtendedPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonExtendedPVCoordinatesProvider::mids$ = NULL;
      bool PythonExtendedPVCoordinatesProvider::live$ = false;

      jclass PythonExtendedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonExtendedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonExtendedPVCoordinatesProvider::PythonExtendedPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonExtendedPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonExtendedPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonExtendedPVCoordinatesProvider::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonExtendedPVCoordinatesProvider_init_(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_finalize(t_PythonExtendedPVCoordinatesProvider *self);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_pythonExtension(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonExtendedPVCoordinatesProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_get__self(t_PythonExtendedPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonExtendedPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonExtendedPVCoordinatesProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonExtendedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonExtendedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonExtendedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonExtendedPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonExtendedPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonExtendedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonExtendedPVCoordinatesProvider, t_PythonExtendedPVCoordinatesProvider, PythonExtendedPVCoordinatesProvider);

      void t_PythonExtendedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonExtendedPVCoordinatesProvider), &PY_TYPE_DEF(PythonExtendedPVCoordinatesProvider), module, "PythonExtendedPVCoordinatesProvider", 1);
      }

      void t_PythonExtendedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "class_", make_descriptor(PythonExtendedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonExtendedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonExtendedPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1 },
          { "pythonDecRef", "()V", (void *) t_PythonExtendedPVCoordinatesProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonExtendedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonExtendedPVCoordinatesProvider::wrap_Object(PythonExtendedPVCoordinatesProvider(((t_PythonExtendedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonExtendedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonExtendedPVCoordinatesProvider_init_(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonExtendedPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonExtendedPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_finalize(t_PythonExtendedPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_pythonExtension(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static void JNICALL t_PythonExtendedPVCoordinatesProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_get__self(t_PythonExtendedPVCoordinatesProvider *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
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
                mids$[mid_accept_2810d2bec90e7b1c] = env->getMethodID(cls, "accept", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$VectorConsumer::accept(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_2810d2bec90e7b1c], a0.this$);
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
#include "org/orekit/data/AbstractSelfFeedingLoader.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *AbstractSelfFeedingLoader::class$ = NULL;
      jmethodID *AbstractSelfFeedingLoader::mids$ = NULL;
      bool AbstractSelfFeedingLoader::live$ = false;

      jclass AbstractSelfFeedingLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/AbstractSelfFeedingLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_28c7bdc075bb74e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_getDataProvidersManager_090dc74a0d7a5aef] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_feed_8002d1bd7ca19a7b] = env->getMethodID(cls, "feed", "(Lorg/orekit/data/DataLoader;)Z");
          mids$[mid_getSupportedNames_3cffd47377eca18a] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_setSupportedNames_f5ffdf29129ef90a] = env->getMethodID(cls, "setSupportedNames", "(Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractSelfFeedingLoader::AbstractSelfFeedingLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_28c7bdc075bb74e8, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_AbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractSelfFeedingLoader_init_(t_AbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_AbstractSelfFeedingLoader__methods_[] = {
        DECLARE_METHOD(t_AbstractSelfFeedingLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractSelfFeedingLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractSelfFeedingLoader)[] = {
        { Py_tp_methods, t_AbstractSelfFeedingLoader__methods_ },
        { Py_tp_init, (void *) t_AbstractSelfFeedingLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractSelfFeedingLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractSelfFeedingLoader, t_AbstractSelfFeedingLoader, AbstractSelfFeedingLoader);

      void t_AbstractSelfFeedingLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractSelfFeedingLoader), &PY_TYPE_DEF(AbstractSelfFeedingLoader), module, "AbstractSelfFeedingLoader", 0);
      }

      void t_AbstractSelfFeedingLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "class_", make_descriptor(AbstractSelfFeedingLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "wrapfn_", make_descriptor(t_AbstractSelfFeedingLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractSelfFeedingLoader::initializeClass, 1)))
          return NULL;
        return t_AbstractSelfFeedingLoader::wrap_Object(AbstractSelfFeedingLoader(((t_AbstractSelfFeedingLoader *) arg)->object.this$));
      }
      static PyObject *t_AbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractSelfFeedingLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractSelfFeedingLoader_init_(t_AbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        AbstractSelfFeedingLoader object((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
        {
          INT_CALL(object = AbstractSelfFeedingLoader(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEState::class$ = NULL;
      jmethodID *FieldODEState::mids$ = NULL;
      bool FieldODEState::live$ = false;

      jclass FieldODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_960efa47e0a8eec2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_5c6c9c90a6a087ff] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getCompleteState_41762fd4377ff26e] = env->getMethodID(cls, "getCompleteState", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCompleteStateDimension_412668abc8d889e9] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_41762fd4377ff26e] = env->getMethodID(cls, "getPrimaryState", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPrimaryStateDimension_412668abc8d889e9] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_9566838049dc0d99] = env->getMethodID(cls, "getSecondaryState", "(I)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSecondaryStateDimension_0092017e99012694] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_613c8f46c659f636] = env->getMethodID(cls, "getTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_copy_fcf24063c8a7c3ff] = env->getMethodID(cls, "copy", "([[Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldODEState::FieldODEState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_960efa47e0a8eec2, a0.this$, a1.this$)) {}

      FieldODEState::FieldODEState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5c6c9c90a6a087ff, a0.this$, a1.this$, a2.this$)) {}

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getCompleteState() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCompleteState_41762fd4377ff26e]));
      }

      jint FieldODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_412668abc8d889e9]);
      }

      jint FieldODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_412668abc8d889e9]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getPrimaryState() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_41762fd4377ff26e]));
      }

      jint FieldODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_412668abc8d889e9]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getSecondaryState(jint a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_9566838049dc0d99], a0));
      }

      jint FieldODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_0092017e99012694], a0);
      }

      ::org::hipparchus::CalculusFieldElement FieldODEState::getTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTime_613c8f46c659f636]));
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
      static PyObject *t_FieldODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEState_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEState_of_(t_FieldODEState *self, PyObject *args);
      static int t_FieldODEState_init_(t_FieldODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldODEState_getCompleteState(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getCompleteStateDimension(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getNumberOfSecondaryStates(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getPrimaryState(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getPrimaryStateDimension(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getSecondaryState(t_FieldODEState *self, PyObject *arg);
      static PyObject *t_FieldODEState_getSecondaryStateDimension(t_FieldODEState *self, PyObject *arg);
      static PyObject *t_FieldODEState_getTime(t_FieldODEState *self);
      static PyObject *t_FieldODEState_get__completeState(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__completeStateDimension(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__numberOfSecondaryStates(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__primaryState(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__primaryStateDimension(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__time(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__parameters_(t_FieldODEState *self, void *data);
      static PyGetSetDef t_FieldODEState__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEState, completeState),
        DECLARE_GET_FIELD(t_FieldODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_FieldODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_FieldODEState, primaryState),
        DECLARE_GET_FIELD(t_FieldODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_FieldODEState, time),
        DECLARE_GET_FIELD(t_FieldODEState, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEState__methods_[] = {
        DECLARE_METHOD(t_FieldODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEState, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_FieldODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_FieldODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEState)[] = {
        { Py_tp_methods, t_FieldODEState__methods_ },
        { Py_tp_init, (void *) t_FieldODEState_init_ },
        { Py_tp_getset, t_FieldODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldODEState, t_FieldODEState, FieldODEState);
      PyObject *t_FieldODEState::wrap_Object(const FieldODEState& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEState::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEState *self = (t_FieldODEState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEState::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEState::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEState *self = (t_FieldODEState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEState), &PY_TYPE_DEF(FieldODEState), module, "FieldODEState", 0);
      }

      void t_FieldODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "class_", make_descriptor(FieldODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "wrapfn_", make_descriptor(t_FieldODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEState::initializeClass, 1)))
          return NULL;
        return t_FieldODEState::wrap_Object(FieldODEState(((t_FieldODEState *) arg)->object.this$));
      }
      static PyObject *t_FieldODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEState_of_(t_FieldODEState *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldODEState_init_(t_FieldODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldODEState object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;
            FieldODEState object((jobject) NULL);

            if (!parseArgs(args, "K[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEState(a0, a1, a2));
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

      static PyObject *t_FieldODEState_getCompleteState(t_FieldODEState *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_getCompleteStateDimension(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getNumberOfSecondaryStates(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getPrimaryState(t_FieldODEState *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_getPrimaryStateDimension(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getSecondaryState(t_FieldODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_FieldODEState_getSecondaryStateDimension(t_FieldODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_FieldODEState_getTime(t_FieldODEState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldODEState_get__parameters_(t_FieldODEState *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEState_get__completeState(t_FieldODEState *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_get__completeStateDimension(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__numberOfSecondaryStates(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__primaryState(t_FieldODEState *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_get__primaryStateDimension(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__time(t_FieldODEState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CycleSlipDetectors::class$ = NULL;
          jmethodID *CycleSlipDetectors::mids$ = NULL;
          bool CycleSlipDetectors::live$ = false;

          jclass CycleSlipDetectors::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CycleSlipDetectors");

              mids$ = new jmethodID[max_mid];
              mids$[mid_detect_77cbef3c12dc7892] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List CycleSlipDetectors::detect(const ::java::util::List & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_detect_77cbef3c12dc7892], a0.this$));
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
          static PyObject *t_CycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectors_detect(t_CycleSlipDetectors *self, PyObject *arg);

          static PyMethodDef t_CycleSlipDetectors__methods_[] = {
            DECLARE_METHOD(t_CycleSlipDetectors, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectors, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectors, detect, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CycleSlipDetectors)[] = {
            { Py_tp_methods, t_CycleSlipDetectors__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CycleSlipDetectors)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CycleSlipDetectors, t_CycleSlipDetectors, CycleSlipDetectors);

          void t_CycleSlipDetectors::install(PyObject *module)
          {
            installType(&PY_TYPE(CycleSlipDetectors), &PY_TYPE_DEF(CycleSlipDetectors), module, "CycleSlipDetectors", 0);
          }

          void t_CycleSlipDetectors::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "class_", make_descriptor(CycleSlipDetectors::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "wrapfn_", make_descriptor(t_CycleSlipDetectors::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CycleSlipDetectors::initializeClass, 1)))
              return NULL;
            return t_CycleSlipDetectors::wrap_Object(CycleSlipDetectors(((t_CycleSlipDetectors *) arg)->object.this$));
          }
          static PyObject *t_CycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CycleSlipDetectors::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CycleSlipDetectors_detect(t_CycleSlipDetectors *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.detect(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
            }

            PyErr_SetArgsError((PyObject *) self, "detect", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *LocalizedException::class$ = NULL;
      jmethodID *LocalizedException::mids$ = NULL;
      bool LocalizedException::live$ = false;

      jclass LocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/LocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
      }

      JArray< ::java::lang::Object > LocalizedException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
      }

      ::org::hipparchus::exception::Localizable LocalizedException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
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
      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg);
      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self);
      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self);
      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data);
      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data);
      static PyGetSetDef t_LocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedException, parts),
        DECLARE_GET_FIELD(t_LocalizedException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedException__methods_[] = {
        DECLARE_METHOD(t_LocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, getMessage, METH_O),
        DECLARE_METHOD(t_LocalizedException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedException)[] = {
        { Py_tp_methods, t_LocalizedException__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalizedException, t_LocalizedException, LocalizedException);

      void t_LocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedException), &PY_TYPE_DEF(LocalizedException), module, "LocalizedException", 0);
      }

      void t_LocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "class_", make_descriptor(LocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "wrapfn_", make_descriptor(t_LocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedException::initializeClass, 1)))
          return NULL;
        return t_LocalizedException::wrap_Object(LocalizedException(((t_LocalizedException *) arg)->object.this$));
      }
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getMessage(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getMessage", arg);
        return NULL;
      }

      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/Frequency.h"
#include "java/util/Iterator.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Long.h"
#include "org/hipparchus/stat/Frequency.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *Frequency::class$ = NULL;
      jmethodID *Frequency::mids$ = NULL;
      bool Frequency::live$ = false;

      jclass Frequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/Frequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_349032d04af23bed] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
          mids$[mid_addValue_1e222383a0988b8a] = env->getMethodID(cls, "addValue", "(Ljava/lang/Comparable;)V");
          mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_entrySetIterator_834a3801c426326d] = env->getMethodID(cls, "entrySetIterator", "()Ljava/util/Iterator;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCount_afa7ed76ccf53f0c] = env->getMethodID(cls, "getCount", "(Ljava/lang/Comparable;)J");
          mids$[mid_getCumFreq_afa7ed76ccf53f0c] = env->getMethodID(cls, "getCumFreq", "(Ljava/lang/Comparable;)J");
          mids$[mid_getCumPct_045db5c4787a66b9] = env->getMethodID(cls, "getCumPct", "(Ljava/lang/Comparable;)D");
          mids$[mid_getMode_0d9551367f7ecdef] = env->getMethodID(cls, "getMode", "()Ljava/util/List;");
          mids$[mid_getPct_045db5c4787a66b9] = env->getMethodID(cls, "getPct", "(Ljava/lang/Comparable;)D");
          mids$[mid_getSumFreq_9e26256fb0d384a2] = env->getMethodID(cls, "getSumFreq", "()J");
          mids$[mid_getUniqueCount_412668abc8d889e9] = env->getMethodID(cls, "getUniqueCount", "()I");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_incrementValue_f8a5a43213a74b25] = env->getMethodID(cls, "incrementValue", "(Ljava/lang/Comparable;J)V");
          mids$[mid_merge_760509cbfffb9cf4] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/stat/Frequency;)V");
          mids$[mid_merge_3abde0be9b9c9773] = env->getMethodID(cls, "merge", "(Ljava/util/Collection;)V");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_valuesIterator_834a3801c426326d] = env->getMethodID(cls, "valuesIterator", "()Ljava/util/Iterator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Frequency::Frequency() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      Frequency::Frequency(const ::java::util::Comparator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_349032d04af23bed, a0.this$)) {}

      void Frequency::addValue(const ::java::lang::Comparable & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addValue_1e222383a0988b8a], a0.this$);
      }

      void Frequency::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
      }

      ::java::util::Iterator Frequency::entrySetIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_entrySetIterator_834a3801c426326d]));
      }

      jboolean Frequency::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jlong Frequency::getCount(const ::java::lang::Comparable & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCount_afa7ed76ccf53f0c], a0.this$);
      }

      jlong Frequency::getCumFreq(const ::java::lang::Comparable & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCumFreq_afa7ed76ccf53f0c], a0.this$);
      }

      jdouble Frequency::getCumPct(const ::java::lang::Comparable & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCumPct_045db5c4787a66b9], a0.this$);
      }

      ::java::util::List Frequency::getMode() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getMode_0d9551367f7ecdef]));
      }

      jdouble Frequency::getPct(const ::java::lang::Comparable & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPct_045db5c4787a66b9], a0.this$);
      }

      jlong Frequency::getSumFreq() const
      {
        return env->callLongMethod(this$, mids$[mid_getSumFreq_9e26256fb0d384a2]);
      }

      jint Frequency::getUniqueCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getUniqueCount_412668abc8d889e9]);
      }

      jint Frequency::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      void Frequency::incrementValue(const ::java::lang::Comparable & a0, jlong a1) const
      {
        env->callVoidMethod(this$, mids$[mid_incrementValue_f8a5a43213a74b25], a0.this$, a1);
      }

      void Frequency::merge(const Frequency & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_merge_760509cbfffb9cf4], a0.this$);
      }

      void Frequency::merge(const ::java::util::Collection & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_merge_3abde0be9b9c9773], a0.this$);
      }

      ::java::lang::String Frequency::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::java::util::Iterator Frequency::valuesIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_valuesIterator_834a3801c426326d]));
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
      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args);
      static int t_Frequency_init_(t_Frequency *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Frequency_addValue(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_clear(t_Frequency *self);
      static PyObject *t_Frequency_entrySetIterator(t_Frequency *self);
      static PyObject *t_Frequency_equals(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_getCount(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getCumFreq(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getCumPct(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getMode(t_Frequency *self);
      static PyObject *t_Frequency_getPct(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getSumFreq(t_Frequency *self);
      static PyObject *t_Frequency_getUniqueCount(t_Frequency *self);
      static PyObject *t_Frequency_hashCode(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_incrementValue(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_merge(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_toString(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_valuesIterator(t_Frequency *self);
      static PyObject *t_Frequency_get__mode(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__sumFreq(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__uniqueCount(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data);
      static PyGetSetDef t_Frequency__fields_[] = {
        DECLARE_GET_FIELD(t_Frequency, mode),
        DECLARE_GET_FIELD(t_Frequency, sumFreq),
        DECLARE_GET_FIELD(t_Frequency, uniqueCount),
        DECLARE_GET_FIELD(t_Frequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frequency__methods_[] = {
        DECLARE_METHOD(t_Frequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, addValue, METH_O),
        DECLARE_METHOD(t_Frequency, clear, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, entrySetIterator, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, equals, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, getCount, METH_O),
        DECLARE_METHOD(t_Frequency, getCumFreq, METH_O),
        DECLARE_METHOD(t_Frequency, getCumPct, METH_O),
        DECLARE_METHOD(t_Frequency, getMode, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getPct, METH_O),
        DECLARE_METHOD(t_Frequency, getSumFreq, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getUniqueCount, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, incrementValue, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, merge, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, toString, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, valuesIterator, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frequency)[] = {
        { Py_tp_methods, t_Frequency__methods_ },
        { Py_tp_init, (void *) t_Frequency_init_ },
        { Py_tp_getset, t_Frequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frequency)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frequency, t_Frequency, Frequency);
      PyObject *t_Frequency::wrap_Object(const Frequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Frequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Frequency::install(PyObject *module)
      {
        installType(&PY_TYPE(Frequency), &PY_TYPE_DEF(Frequency), module, "Frequency", 0);
      }

      void t_Frequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "class_", make_descriptor(Frequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "wrapfn_", make_descriptor(t_Frequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frequency::initializeClass, 1)))
          return NULL;
        return t_Frequency::wrap_Object(Frequency(((t_Frequency *) arg)->object.this$));
      }
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Frequency_init_(t_Frequency *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Frequency object((jobject) NULL);

            INT_CALL(object = Frequency());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            Frequency object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = Frequency(a0));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Frequency_addValue(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(self->object.addValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValue", arg);
        return NULL;
      }

      static PyObject *t_Frequency_clear(t_Frequency *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_Frequency_entrySetIterator(t_Frequency *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.entrySetIterator());
        return ::java::util::t_Iterator::wrap_Object(result);
      }

      static PyObject *t_Frequency_equals(t_Frequency *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Frequency_getCount(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getCumFreq(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCumFreq(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCumFreq", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getCumPct(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCumPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCumPct", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getMode(t_Frequency *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getMode());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Frequency_getPct(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPct", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getSumFreq(t_Frequency *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getSumFreq());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_Frequency_getUniqueCount(t_Frequency *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getUniqueCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Frequency_hashCode(t_Frequency *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Frequency_incrementValue(t_Frequency *self, PyObject *args)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong a1;

        if (!parseArgs(args, "KJ", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1))
        {
          OBJ_CALL(self->object.incrementValue(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "incrementValue", args);
        return NULL;
      }

      static PyObject *t_Frequency_merge(t_Frequency *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Frequency a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", Frequency::initializeClass, &a0, &p0, t_Frequency::parameters_))
            {
              OBJ_CALL(self->object.merge(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(self->object.merge(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "merge", args);
        return NULL;
      }

      static PyObject *t_Frequency_toString(t_Frequency *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Frequency_valuesIterator(t_Frequency *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.valuesIterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Frequency_get__mode(t_Frequency *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getMode());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_Frequency_get__sumFreq(t_Frequency *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getSumFreq());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_Frequency_get__uniqueCount(t_Frequency *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getUniqueCount());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *IERSConventions$NutationCorrectionConverter::class$ = NULL;
      jmethodID *IERSConventions$NutationCorrectionConverter::mids$ = NULL;
      bool IERSConventions$NutationCorrectionConverter::live$ = false;

      jclass IERSConventions$NutationCorrectionConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/IERSConventions$NutationCorrectionConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toEquinox_284d549d39f6cacb] = env->getMethodID(cls, "toEquinox", "(Lorg/orekit/time/AbsoluteDate;DD)[D");
          mids$[mid_toNonRotating_284d549d39f6cacb] = env->getMethodID(cls, "toNonRotating", "(Lorg/orekit/time/AbsoluteDate;DD)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > IERSConventions$NutationCorrectionConverter::toEquinox(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toEquinox_284d549d39f6cacb], a0.this$, a1, a2));
      }

      JArray< jdouble > IERSConventions$NutationCorrectionConverter::toNonRotating(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toNonRotating_284d549d39f6cacb], a0.this$, a1, a2));
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
      static PyObject *t_IERSConventions$NutationCorrectionConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_of_(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_toEquinox(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_toNonRotating(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_get__parameters_(t_IERSConventions$NutationCorrectionConverter *self, void *data);
      static PyGetSetDef t_IERSConventions$NutationCorrectionConverter__fields_[] = {
        DECLARE_GET_FIELD(t_IERSConventions$NutationCorrectionConverter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IERSConventions$NutationCorrectionConverter__methods_[] = {
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, of_, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, toEquinox, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, toNonRotating, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IERSConventions$NutationCorrectionConverter)[] = {
        { Py_tp_methods, t_IERSConventions$NutationCorrectionConverter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IERSConventions$NutationCorrectionConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IERSConventions$NutationCorrectionConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IERSConventions$NutationCorrectionConverter, t_IERSConventions$NutationCorrectionConverter, IERSConventions$NutationCorrectionConverter);
      PyObject *t_IERSConventions$NutationCorrectionConverter::wrap_Object(const IERSConventions$NutationCorrectionConverter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions$NutationCorrectionConverter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions$NutationCorrectionConverter *self = (t_IERSConventions$NutationCorrectionConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_IERSConventions$NutationCorrectionConverter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions$NutationCorrectionConverter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions$NutationCorrectionConverter *self = (t_IERSConventions$NutationCorrectionConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_IERSConventions$NutationCorrectionConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(IERSConventions$NutationCorrectionConverter), &PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter), module, "IERSConventions$NutationCorrectionConverter", 0);
      }

      void t_IERSConventions$NutationCorrectionConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "class_", make_descriptor(IERSConventions$NutationCorrectionConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "wrapfn_", make_descriptor(t_IERSConventions$NutationCorrectionConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IERSConventions$NutationCorrectionConverter::initializeClass, 1)))
          return NULL;
        return t_IERSConventions$NutationCorrectionConverter::wrap_Object(IERSConventions$NutationCorrectionConverter(((t_IERSConventions$NutationCorrectionConverter *) arg)->object.this$));
      }
      static PyObject *t_IERSConventions$NutationCorrectionConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IERSConventions$NutationCorrectionConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_of_(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_toEquinox(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.toEquinox(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "toEquinox", args);
        return NULL;
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_toNonRotating(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.toNonRotating(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "toNonRotating", args);
        return NULL;
      }
      static PyObject *t_IERSConventions$NutationCorrectionConverter_get__parameters_(t_IERSConventions$NutationCorrectionConverter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logistic$Parametric::class$ = NULL;
        jmethodID *Logistic$Parametric::mids$ = NULL;
        bool Logistic$Parametric::live$ = false;

        jclass Logistic$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logistic$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_31b9a2982d73e37a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_1bc40469b56f2c3c] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logistic$Parametric::Logistic$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        JArray< jdouble > Logistic$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_31b9a2982d73e37a], a0, a1.this$));
        }

        jdouble Logistic$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
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
      namespace function {
        static PyObject *t_Logistic$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logistic$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logistic$Parametric_init_(t_Logistic$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logistic$Parametric_gradient(t_Logistic$Parametric *self, PyObject *args);
        static PyObject *t_Logistic$Parametric_value(t_Logistic$Parametric *self, PyObject *args);

        static PyMethodDef t_Logistic$Parametric__methods_[] = {
          DECLARE_METHOD(t_Logistic$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Logistic$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logistic$Parametric)[] = {
          { Py_tp_methods, t_Logistic$Parametric__methods_ },
          { Py_tp_init, (void *) t_Logistic$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logistic$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logistic$Parametric, t_Logistic$Parametric, Logistic$Parametric);

        void t_Logistic$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Logistic$Parametric), &PY_TYPE_DEF(Logistic$Parametric), module, "Logistic$Parametric", 0);
        }

        void t_Logistic$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "class_", make_descriptor(Logistic$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "wrapfn_", make_descriptor(t_Logistic$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logistic$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logistic$Parametric::initializeClass, 1)))
            return NULL;
          return t_Logistic$Parametric::wrap_Object(Logistic$Parametric(((t_Logistic$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Logistic$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logistic$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logistic$Parametric_init_(t_Logistic$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Logistic$Parametric object((jobject) NULL);

          INT_CALL(object = Logistic$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Logistic$Parametric_gradient(t_Logistic$Parametric *self, PyObject *args)
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

        static PyObject *t_Logistic$Parametric_value(t_Logistic$Parametric *self, PyObject *args)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldCjSjCoefficient::class$ = NULL;
            jmethodID *FieldCjSjCoefficient::mids$ = NULL;
            bool FieldCjSjCoefficient::live$ = false;

            jclass FieldCjSjCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5514994c3b90e687] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)V");
                mids$[mid_getCj_8b3a1c735adfa4bc] = env->getMethodID(cls, "getCj", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDcjDh_8b3a1c735adfa4bc] = env->getMethodID(cls, "getDcjDh", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDcjDk_8b3a1c735adfa4bc] = env->getMethodID(cls, "getDcjDk", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDsjDh_8b3a1c735adfa4bc] = env->getMethodID(cls, "getDsjDh", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDsjDk_8b3a1c735adfa4bc] = env->getMethodID(cls, "getDsjDk", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getSj_8b3a1c735adfa4bc] = env->getMethodID(cls, "getSj", "(I)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldCjSjCoefficient::FieldCjSjCoefficient(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5514994c3b90e687, a0.this$, a1.this$, a2.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getCj(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCj_8b3a1c735adfa4bc], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDcjDh(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDcjDh_8b3a1c735adfa4bc], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDcjDk(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDcjDk_8b3a1c735adfa4bc], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDsjDh(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDsjDh_8b3a1c735adfa4bc], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDsjDk(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDsjDk_8b3a1c735adfa4bc], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getSj(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSj_8b3a1c735adfa4bc], a0));
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
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_FieldCjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_of_(t_FieldCjSjCoefficient *self, PyObject *args);
            static int t_FieldCjSjCoefficient_init_(t_FieldCjSjCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldCjSjCoefficient_getCj(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDcjDh(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDcjDk(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDsjDh(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDsjDk(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getSj(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_get__parameters_(t_FieldCjSjCoefficient *self, void *data);
            static PyGetSetDef t_FieldCjSjCoefficient__fields_[] = {
              DECLARE_GET_FIELD(t_FieldCjSjCoefficient, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldCjSjCoefficient__methods_[] = {
              DECLARE_METHOD(t_FieldCjSjCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getCj, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDcjDh, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDcjDk, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDsjDh, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDsjDk, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getSj, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldCjSjCoefficient)[] = {
              { Py_tp_methods, t_FieldCjSjCoefficient__methods_ },
              { Py_tp_init, (void *) t_FieldCjSjCoefficient_init_ },
              { Py_tp_getset, t_FieldCjSjCoefficient__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldCjSjCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldCjSjCoefficient, t_FieldCjSjCoefficient, FieldCjSjCoefficient);
            PyObject *t_FieldCjSjCoefficient::wrap_Object(const FieldCjSjCoefficient& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldCjSjCoefficient::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldCjSjCoefficient *self = (t_FieldCjSjCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldCjSjCoefficient::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldCjSjCoefficient::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldCjSjCoefficient *self = (t_FieldCjSjCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldCjSjCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldCjSjCoefficient), &PY_TYPE_DEF(FieldCjSjCoefficient), module, "FieldCjSjCoefficient", 0);
            }

            void t_FieldCjSjCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "class_", make_descriptor(FieldCjSjCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "wrapfn_", make_descriptor(t_FieldCjSjCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldCjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldCjSjCoefficient::initializeClass, 1)))
                return NULL;
              return t_FieldCjSjCoefficient::wrap_Object(FieldCjSjCoefficient(((t_FieldCjSjCoefficient *) arg)->object.this$));
            }
            static PyObject *t_FieldCjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldCjSjCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldCjSjCoefficient_of_(t_FieldCjSjCoefficient *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldCjSjCoefficient_init_(t_FieldCjSjCoefficient *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::Field a2((jobject) NULL);
              PyTypeObject **p2;
              FieldCjSjCoefficient object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldCjSjCoefficient(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldCjSjCoefficient_getCj(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getCj(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCj", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDcjDh(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDh(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDh", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDcjDk(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDk(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDk", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDsjDh(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDh(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDh", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDsjDk(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDk(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDk", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getSj(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getSj(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSj", arg);
              return NULL;
            }
            static PyObject *t_FieldCjSjCoefficient_get__parameters_(t_FieldCjSjCoefficient *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *PythonAbstractSolarActivityData::class$ = NULL;
            jmethodID *PythonAbstractSolarActivityData::mids$ = NULL;
            bool PythonAbstractSolarActivityData::live$ = false;

            jclass PythonAbstractSolarActivityData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ae5a3c6dd7a6713f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_get24HoursKp_b0b988f941da47d8] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_89e8b78e4211e023] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_b0b988f941da47d8] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_b0b988f941da47d8] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getInstantFlux_b0b988f941da47d8] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_b0b988f941da47d8] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getThreeHourlyKP_b0b988f941da47d8] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractSolarActivityData::PythonAbstractSolarActivityData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_ae5a3c6dd7a6713f, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7)) {}

            void PythonAbstractSolarActivityData::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonAbstractSolarActivityData::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonAbstractSolarActivityData::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_PythonAbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractSolarActivityData_of_(t_PythonAbstractSolarActivityData *self, PyObject *args);
            static int t_PythonAbstractSolarActivityData_init_(t_PythonAbstractSolarActivityData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractSolarActivityData_finalize(t_PythonAbstractSolarActivityData *self);
            static PyObject *t_PythonAbstractSolarActivityData_pythonExtension(t_PythonAbstractSolarActivityData *self, PyObject *args);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonAbstractSolarActivityData_getAp1(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getAverageFlux2(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getDailyFlux3(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getInstantFlux4(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getMeanFlux5(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getThreeHourlyKP6(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonAbstractSolarActivityData_pythonDecRef7(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAbstractSolarActivityData_get__self(t_PythonAbstractSolarActivityData *self, void *data);
            static PyObject *t_PythonAbstractSolarActivityData_get__parameters_(t_PythonAbstractSolarActivityData *self, void *data);
            static PyGetSetDef t_PythonAbstractSolarActivityData__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractSolarActivityData, self),
              DECLARE_GET_FIELD(t_PythonAbstractSolarActivityData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractSolarActivityData__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSolarActivityData)[] = {
              { Py_tp_methods, t_PythonAbstractSolarActivityData__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractSolarActivityData_init_ },
              { Py_tp_getset, t_PythonAbstractSolarActivityData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractSolarActivityData)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(PythonAbstractSolarActivityData, t_PythonAbstractSolarActivityData, PythonAbstractSolarActivityData);
            PyObject *t_PythonAbstractSolarActivityData::wrap_Object(const PythonAbstractSolarActivityData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAbstractSolarActivityData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractSolarActivityData *self = (t_PythonAbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonAbstractSolarActivityData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAbstractSolarActivityData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractSolarActivityData *self = (t_PythonAbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonAbstractSolarActivityData::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractSolarActivityData), &PY_TYPE_DEF(PythonAbstractSolarActivityData), module, "PythonAbstractSolarActivityData", 1);
            }

            void t_PythonAbstractSolarActivityData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "class_", make_descriptor(PythonAbstractSolarActivityData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "wrapfn_", make_descriptor(t_PythonAbstractSolarActivityData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractSolarActivityData::initializeClass);
              JNINativeMethod methods[] = {
                { "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_get24HoursKp0 },
                { "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonAbstractSolarActivityData_getAp1 },
                { "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getAverageFlux2 },
                { "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getDailyFlux3 },
                { "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getInstantFlux4 },
                { "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getMeanFlux5 },
                { "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getThreeHourlyKP6 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractSolarActivityData_pythonDecRef7 },
              };
              env->registerNatives(cls, methods, 8);
            }

            static PyObject *t_PythonAbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractSolarActivityData::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractSolarActivityData::wrap_Object(PythonAbstractSolarActivityData(((t_PythonAbstractSolarActivityData *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractSolarActivityData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractSolarActivityData_of_(t_PythonAbstractSolarActivityData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonAbstractSolarActivityData_init_(t_PythonAbstractSolarActivityData *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              jint a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              PythonAbstractSolarActivityData object((jobject) NULL);

              if (!parseArgs(args, "sKkkIDDD", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = PythonAbstractSolarActivityData(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonAbstractSolarActivityData_finalize(t_PythonAbstractSolarActivityData *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractSolarActivityData_pythonExtension(t_PythonAbstractSolarActivityData *self, PyObject *args)
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "get24HoursKp", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("get24HoursKp", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jobject JNICALL t_PythonAbstractSolarActivityData_getAp1(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getAp", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getAp", result);
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getAverageFlux2(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getAverageFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAverageFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getDailyFlux3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getDailyFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getDailyFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getInstantFlux4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getInstantFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getInstantFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getMeanFlux5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getMeanFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getMeanFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getThreeHourlyKP6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getThreeHourlyKP", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getThreeHourlyKP", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonAbstractSolarActivityData_pythonDecRef7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAbstractSolarActivityData_get__self(t_PythonAbstractSolarActivityData *self, void *data)
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
            static PyObject *t_PythonAbstractSolarActivityData_get__parameters_(t_PythonAbstractSolarActivityData *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/TDOABuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/TDOA.h"
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

          ::java::lang::Class *TDOABuilder::class$ = NULL;
          jmethodID *TDOABuilder::mids$ = NULL;
          bool TDOABuilder::live$ = false;

          jclass TDOABuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/TDOABuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_feb9739fac37e84c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_19002aa6b1653280] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/TDOA;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOABuilder::TDOABuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_feb9739fac37e84c, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::TDOA TDOABuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::TDOA(env->callObjectMethod(this$, mids$[mid_build_19002aa6b1653280], a0.this$, a1.this$));
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
          static PyObject *t_TDOABuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOABuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOABuilder_of_(t_TDOABuilder *self, PyObject *args);
          static int t_TDOABuilder_init_(t_TDOABuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOABuilder_build(t_TDOABuilder *self, PyObject *args);
          static PyObject *t_TDOABuilder_get__parameters_(t_TDOABuilder *self, void *data);
          static PyGetSetDef t_TDOABuilder__fields_[] = {
            DECLARE_GET_FIELD(t_TDOABuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOABuilder__methods_[] = {
            DECLARE_METHOD(t_TDOABuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOABuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOABuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_TDOABuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOABuilder)[] = {
            { Py_tp_methods, t_TDOABuilder__methods_ },
            { Py_tp_init, (void *) t_TDOABuilder_init_ },
            { Py_tp_getset, t_TDOABuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOABuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(TDOABuilder, t_TDOABuilder, TDOABuilder);
          PyObject *t_TDOABuilder::wrap_Object(const TDOABuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TDOABuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TDOABuilder *self = (t_TDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TDOABuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TDOABuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TDOABuilder *self = (t_TDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TDOABuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOABuilder), &PY_TYPE_DEF(TDOABuilder), module, "TDOABuilder", 0);
          }

          void t_TDOABuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "class_", make_descriptor(TDOABuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "wrapfn_", make_descriptor(t_TDOABuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOABuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOABuilder::initializeClass, 1)))
              return NULL;
            return t_TDOABuilder::wrap_Object(TDOABuilder(((t_TDOABuilder *) arg)->object.this$));
          }
          static PyObject *t_TDOABuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOABuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TDOABuilder_of_(t_TDOABuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_TDOABuilder_init_(t_TDOABuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            TDOABuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TDOABuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TDOA);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOABuilder_build(t_TDOABuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::TDOA result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_TDOA::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TDOABuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_TDOABuilder_get__parameters_(t_TDOABuilder *self, void *data)
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
#include "org/orekit/propagation/conversion/OsculatingToMeanElementsConverter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/Propagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *OsculatingToMeanElementsConverter::class$ = NULL;
        jmethodID *OsculatingToMeanElementsConverter::mids$ = NULL;
        bool OsculatingToMeanElementsConverter::live$ = false;

        jclass OsculatingToMeanElementsConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/OsculatingToMeanElementsConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_23a67b35bf21685c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/propagation/Propagator;D)V");
            mids$[mid_convert_15e85d5301b90ef8] = env->getMethodID(cls, "convert", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OsculatingToMeanElementsConverter::OsculatingToMeanElementsConverter(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, const ::org::orekit::propagation::Propagator & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_23a67b35bf21685c, a0.this$, a1, a2.this$, a3)) {}

        ::org::orekit::propagation::SpacecraftState OsculatingToMeanElementsConverter::convert() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_convert_15e85d5301b90ef8]));
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
        static PyObject *t_OsculatingToMeanElementsConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OsculatingToMeanElementsConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OsculatingToMeanElementsConverter_init_(t_OsculatingToMeanElementsConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OsculatingToMeanElementsConverter_convert(t_OsculatingToMeanElementsConverter *self);

        static PyMethodDef t_OsculatingToMeanElementsConverter__methods_[] = {
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, convert, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OsculatingToMeanElementsConverter)[] = {
          { Py_tp_methods, t_OsculatingToMeanElementsConverter__methods_ },
          { Py_tp_init, (void *) t_OsculatingToMeanElementsConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OsculatingToMeanElementsConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OsculatingToMeanElementsConverter, t_OsculatingToMeanElementsConverter, OsculatingToMeanElementsConverter);

        void t_OsculatingToMeanElementsConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(OsculatingToMeanElementsConverter), &PY_TYPE_DEF(OsculatingToMeanElementsConverter), module, "OsculatingToMeanElementsConverter", 0);
        }

        void t_OsculatingToMeanElementsConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "class_", make_descriptor(OsculatingToMeanElementsConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "wrapfn_", make_descriptor(t_OsculatingToMeanElementsConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OsculatingToMeanElementsConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OsculatingToMeanElementsConverter::initializeClass, 1)))
            return NULL;
          return t_OsculatingToMeanElementsConverter::wrap_Object(OsculatingToMeanElementsConverter(((t_OsculatingToMeanElementsConverter *) arg)->object.this$));
        }
        static PyObject *t_OsculatingToMeanElementsConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OsculatingToMeanElementsConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OsculatingToMeanElementsConverter_init_(t_OsculatingToMeanElementsConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jint a1;
          ::org::orekit::propagation::Propagator a2((jobject) NULL);
          jdouble a3;
          OsculatingToMeanElementsConverter object((jobject) NULL);

          if (!parseArgs(args, "kIkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = OsculatingToMeanElementsConverter(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OsculatingToMeanElementsConverter_convert(t_OsculatingToMeanElementsConverter *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.convert());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/TectonicsDisplacement.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *TectonicsDisplacement::class$ = NULL;
          jmethodID *TectonicsDisplacement::mids$ = NULL;
          bool TectonicsDisplacement::live$ = false;

          jclass TectonicsDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/TectonicsDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_900f9429442ceeb9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_displacement_2092c3958d15642d] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TectonicsDisplacement::TectonicsDisplacement(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_900f9429442ceeb9, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TectonicsDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_2092c3958d15642d], a0.this$, a1.this$, a2.this$));
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
        namespace displacement {
          static PyObject *t_TectonicsDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TectonicsDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TectonicsDisplacement_init_(t_TectonicsDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TectonicsDisplacement_displacement(t_TectonicsDisplacement *self, PyObject *args);

          static PyMethodDef t_TectonicsDisplacement__methods_[] = {
            DECLARE_METHOD(t_TectonicsDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TectonicsDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TectonicsDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TectonicsDisplacement)[] = {
            { Py_tp_methods, t_TectonicsDisplacement__methods_ },
            { Py_tp_init, (void *) t_TectonicsDisplacement_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TectonicsDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TectonicsDisplacement, t_TectonicsDisplacement, TectonicsDisplacement);

          void t_TectonicsDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(TectonicsDisplacement), &PY_TYPE_DEF(TectonicsDisplacement), module, "TectonicsDisplacement", 0);
          }

          void t_TectonicsDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "class_", make_descriptor(TectonicsDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "wrapfn_", make_descriptor(t_TectonicsDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TectonicsDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TectonicsDisplacement::initializeClass, 1)))
              return NULL;
            return t_TectonicsDisplacement::wrap_Object(TectonicsDisplacement(((t_TectonicsDisplacement *) arg)->object.this$));
          }
          static PyObject *t_TectonicsDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TectonicsDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TectonicsDisplacement_init_(t_TectonicsDisplacement *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            TectonicsDisplacement object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TectonicsDisplacement(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TectonicsDisplacement_displacement(t_TectonicsDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmParser::class$ = NULL;
            jmethodID *AdmParser::mids$ = NULL;
            bool AdmParser::live$ = false;

            jclass AdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMissionReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::time::AbsoluteDate AdmParser::getMissionReferenceDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_7a97f7e149e79afb]));
            }

            ::java::util::Map AdmParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4]));
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
            static PyObject *t_AdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmParser_of_(t_AdmParser *self, PyObject *args);
            static PyObject *t_AdmParser_getMissionReferenceDate(t_AdmParser *self);
            static PyObject *t_AdmParser_getSpecialXmlElementsBuilders(t_AdmParser *self, PyObject *args);
            static PyObject *t_AdmParser_get__missionReferenceDate(t_AdmParser *self, void *data);
            static PyObject *t_AdmParser_get__specialXmlElementsBuilders(t_AdmParser *self, void *data);
            static PyObject *t_AdmParser_get__parameters_(t_AdmParser *self, void *data);
            static PyGetSetDef t_AdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_AdmParser, missionReferenceDate),
              DECLARE_GET_FIELD(t_AdmParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_AdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmParser__methods_[] = {
              DECLARE_METHOD(t_AdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmParser, getMissionReferenceDate, METH_NOARGS),
              DECLARE_METHOD(t_AdmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmParser)[] = {
              { Py_tp_methods, t_AdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(AdmParser, t_AdmParser, AdmParser);
            PyObject *t_AdmParser::wrap_Object(const AdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmParser *self = (t_AdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_AdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmParser *self = (t_AdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_AdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmParser), &PY_TYPE_DEF(AdmParser), module, "AdmParser", 0);
            }

            void t_AdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "class_", make_descriptor(AdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "wrapfn_", make_descriptor(t_AdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmParser::initializeClass, 1)))
                return NULL;
              return t_AdmParser::wrap_Object(AdmParser(((t_AdmParser *) arg)->object.this$));
            }
            static PyObject *t_AdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmParser_of_(t_AdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmParser_getMissionReferenceDate(t_AdmParser *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AdmParser_getSpecialXmlElementsBuilders(t_AdmParser *self, PyObject *args)
            {
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
              }

              return callSuper(PY_TYPE(AdmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
            }
            static PyObject *t_AdmParser_get__parameters_(t_AdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AdmParser_get__missionReferenceDate(t_AdmParser *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AdmParser_get__specialXmlElementsBuilders(t_AdmParser *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "java/util/function/Supplier.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovariance::class$ = NULL;
            jmethodID *CartesianCovariance::mids$ = NULL;
            bool CartesianCovariance::live$ = false;

            jclass CartesianCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d1f229fbdda3f023] = env->getMethodID(cls, "<init>", "(Ljava/util/function/Supplier;)V");
                mids$[mid_getCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getReferenceFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_setCovarianceMatrixEntry_754312f3734d6e2f] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setEpoch_20affcbd28542333] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setReferenceFrame_f55eee1236275bb1] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CartesianCovariance::CartesianCovariance(const ::java::util::function::Supplier & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_d1f229fbdda3f023, a0.this$)) {}

            ::org::hipparchus::linear::RealMatrix CartesianCovariance::getCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_70a207fcbc031df2]));
            }

            ::org::orekit::time::AbsoluteDate CartesianCovariance::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_7a97f7e149e79afb]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CartesianCovariance::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_98f5fcaff3e3f9d2]));
            }

            void CartesianCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_754312f3734d6e2f], a0, a1, a2);
            }

            void CartesianCovariance::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_20affcbd28542333], a0.this$);
            }

            void CartesianCovariance::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_f55eee1236275bb1], a0.this$);
            }

            void CartesianCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
            static PyObject *t_CartesianCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CartesianCovariance_init_(t_CartesianCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CartesianCovariance_getCovarianceMatrix(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_getEpoch(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_getReferenceFrame(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_setCovarianceMatrixEntry(t_CartesianCovariance *self, PyObject *args);
            static PyObject *t_CartesianCovariance_setEpoch(t_CartesianCovariance *self, PyObject *arg);
            static PyObject *t_CartesianCovariance_setReferenceFrame(t_CartesianCovariance *self, PyObject *arg);
            static PyObject *t_CartesianCovariance_validate(t_CartesianCovariance *self, PyObject *args);
            static PyObject *t_CartesianCovariance_get__covarianceMatrix(t_CartesianCovariance *self, void *data);
            static PyObject *t_CartesianCovariance_get__epoch(t_CartesianCovariance *self, void *data);
            static int t_CartesianCovariance_set__epoch(t_CartesianCovariance *self, PyObject *arg, void *data);
            static PyObject *t_CartesianCovariance_get__referenceFrame(t_CartesianCovariance *self, void *data);
            static int t_CartesianCovariance_set__referenceFrame(t_CartesianCovariance *self, PyObject *arg, void *data);
            static PyGetSetDef t_CartesianCovariance__fields_[] = {
              DECLARE_GET_FIELD(t_CartesianCovariance, covarianceMatrix),
              DECLARE_GETSET_FIELD(t_CartesianCovariance, epoch),
              DECLARE_GETSET_FIELD(t_CartesianCovariance, referenceFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CartesianCovariance__methods_[] = {
              DECLARE_METHOD(t_CartesianCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovariance, getCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovariance, setEpoch, METH_O),
              DECLARE_METHOD(t_CartesianCovariance, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_CartesianCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovariance)[] = {
              { Py_tp_methods, t_CartesianCovariance__methods_ },
              { Py_tp_init, (void *) t_CartesianCovariance_init_ },
              { Py_tp_getset, t_CartesianCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(CartesianCovariance, t_CartesianCovariance, CartesianCovariance);

            void t_CartesianCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovariance), &PY_TYPE_DEF(CartesianCovariance), module, "CartesianCovariance", 0);
            }

            void t_CartesianCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "class_", make_descriptor(CartesianCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "wrapfn_", make_descriptor(t_CartesianCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CartesianCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovariance::initializeClass, 1)))
                return NULL;
              return t_CartesianCovariance::wrap_Object(CartesianCovariance(((t_CartesianCovariance *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CartesianCovariance_init_(t_CartesianCovariance *self, PyObject *args, PyObject *kwds)
            {
              ::java::util::function::Supplier a0((jobject) NULL);
              PyTypeObject **p0;
              CartesianCovariance object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
              {
                INT_CALL(object = CartesianCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CartesianCovariance_getCovarianceMatrix(t_CartesianCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_getEpoch(t_CartesianCovariance *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_getReferenceFrame(t_CartesianCovariance *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_setCovarianceMatrixEntry(t_CartesianCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_CartesianCovariance_setEpoch(t_CartesianCovariance *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
              return NULL;
            }

            static PyObject *t_CartesianCovariance_setReferenceFrame(t_CartesianCovariance *self, PyObject *arg)
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

            static PyObject *t_CartesianCovariance_validate(t_CartesianCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CartesianCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CartesianCovariance_get__covarianceMatrix(t_CartesianCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }

            static PyObject *t_CartesianCovariance_get__epoch(t_CartesianCovariance *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CartesianCovariance_set__epoch(t_CartesianCovariance *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epoch", arg);
              return -1;
            }

            static PyObject *t_CartesianCovariance_get__referenceFrame(t_CartesianCovariance *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CartesianCovariance_set__referenceFrame(t_CartesianCovariance *self, PyObject *arg, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEState::class$ = NULL;
      jmethodID *ODEState::mids$ = NULL;
      bool ODEState::live$ = false;

      jclass ODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_092013acd44a9e63] = env->getMethodID(cls, "<init>", "(D[D)V");
          mids$[mid_init$_8a53459a4359f093] = env->getMethodID(cls, "<init>", "(D[D[[D)V");
          mids$[mid_getCompleteState_a53a7513ecedada2] = env->getMethodID(cls, "getCompleteState", "()[D");
          mids$[mid_getCompleteStateDimension_412668abc8d889e9] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_a53a7513ecedada2] = env->getMethodID(cls, "getPrimaryState", "()[D");
          mids$[mid_getPrimaryStateDimension_412668abc8d889e9] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_1da5c9e77f24f269] = env->getMethodID(cls, "getSecondaryState", "(I)[D");
          mids$[mid_getSecondaryStateDimension_0092017e99012694] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
          mids$[mid_copy_2b7f9de2d1ea1ddb] = env->getMethodID(cls, "copy", "([[D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ODEState::ODEState(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_092013acd44a9e63, a0, a1.this$)) {}

      ODEState::ODEState(jdouble a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a53459a4359f093, a0, a1.this$, a2.this$)) {}

      JArray< jdouble > ODEState::getCompleteState() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCompleteState_a53a7513ecedada2]));
      }

      jint ODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_412668abc8d889e9]);
      }

      jint ODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_412668abc8d889e9]);
      }

      JArray< jdouble > ODEState::getPrimaryState() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_a53a7513ecedada2]));
      }

      jint ODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_412668abc8d889e9]);
      }

      JArray< jdouble > ODEState::getSecondaryState(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_1da5c9e77f24f269], a0));
      }

      jint ODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_0092017e99012694], a0);
      }

      jdouble ODEState::getTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
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
      static PyObject *t_ODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ODEState_init_(t_ODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ODEState_getCompleteState(t_ODEState *self);
      static PyObject *t_ODEState_getCompleteStateDimension(t_ODEState *self);
      static PyObject *t_ODEState_getNumberOfSecondaryStates(t_ODEState *self);
      static PyObject *t_ODEState_getPrimaryState(t_ODEState *self);
      static PyObject *t_ODEState_getPrimaryStateDimension(t_ODEState *self);
      static PyObject *t_ODEState_getSecondaryState(t_ODEState *self, PyObject *arg);
      static PyObject *t_ODEState_getSecondaryStateDimension(t_ODEState *self, PyObject *arg);
      static PyObject *t_ODEState_getTime(t_ODEState *self);
      static PyObject *t_ODEState_get__completeState(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__completeStateDimension(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__numberOfSecondaryStates(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__primaryState(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__primaryStateDimension(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__time(t_ODEState *self, void *data);
      static PyGetSetDef t_ODEState__fields_[] = {
        DECLARE_GET_FIELD(t_ODEState, completeState),
        DECLARE_GET_FIELD(t_ODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_ODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_ODEState, primaryState),
        DECLARE_GET_FIELD(t_ODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_ODEState, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEState__methods_[] = {
        DECLARE_METHOD(t_ODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_ODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_ODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEState)[] = {
        { Py_tp_methods, t_ODEState__methods_ },
        { Py_tp_init, (void *) t_ODEState_init_ },
        { Py_tp_getset, t_ODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ODEState, t_ODEState, ODEState);

      void t_ODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEState), &PY_TYPE_DEF(ODEState), module, "ODEState", 0);
      }

      void t_ODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "class_", make_descriptor(ODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "wrapfn_", make_descriptor(t_ODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEState::initializeClass, 1)))
          return NULL;
        return t_ODEState::wrap_Object(ODEState(((t_ODEState *) arg)->object.this$));
      }
      static PyObject *t_ODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ODEState_init_(t_ODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            ODEState object((jobject) NULL);

            if (!parseArgs(args, "D[D", &a0, &a1))
            {
              INT_CALL(object = ODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);
            ODEState object((jobject) NULL);

            if (!parseArgs(args, "D[D[[D", &a0, &a1, &a2))
            {
              INT_CALL(object = ODEState(a0, a1, a2));
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

      static PyObject *t_ODEState_getCompleteState(t_ODEState *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return result.wrap();
      }

      static PyObject *t_ODEState_getCompleteStateDimension(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getNumberOfSecondaryStates(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getPrimaryState(t_ODEState *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return result.wrap();
      }

      static PyObject *t_ODEState_getPrimaryStateDimension(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getSecondaryState(t_ODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_ODEState_getSecondaryStateDimension(t_ODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_ODEState_getTime(t_ODEState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ODEState_get__completeState(t_ODEState *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return value.wrap();
      }

      static PyObject *t_ODEState_get__completeStateDimension(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__numberOfSecondaryStates(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__primaryState(t_ODEState *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return value.wrap();
      }

      static PyObject *t_ODEState_get__primaryStateDimension(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__time(t_ODEState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00InputParameters::class$ = NULL;
          jmethodID *NRLMSISE00InputParameters::mids$ = NULL;
          bool NRLMSISE00InputParameters::live$ = false;

          jclass NRLMSISE00InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAp_89e8b78e4211e023] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getAverageFlux_b0b988f941da47d8] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getDailyFlux_b0b988f941da47d8] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jdouble > NRLMSISE00InputParameters::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_89e8b78e4211e023], a0.this$));
          }

          jdouble NRLMSISE00InputParameters::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_b0b988f941da47d8], a0.this$);
          }

          jdouble NRLMSISE00InputParameters::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_b0b988f941da47d8], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate NRLMSISE00InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
          }

          ::org::orekit::time::AbsoluteDate NRLMSISE00InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
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
        namespace atmosphere {
          static PyObject *t_NRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getAp(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getAverageFlux(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getDailyFlux(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getMaxDate(t_NRLMSISE00InputParameters *self);
          static PyObject *t_NRLMSISE00InputParameters_getMinDate(t_NRLMSISE00InputParameters *self);
          static PyObject *t_NRLMSISE00InputParameters_get__maxDate(t_NRLMSISE00InputParameters *self, void *data);
          static PyObject *t_NRLMSISE00InputParameters_get__minDate(t_NRLMSISE00InputParameters *self, void *data);
          static PyGetSetDef t_NRLMSISE00InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00InputParameters, maxDate),
            DECLARE_GET_FIELD(t_NRLMSISE00InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00InputParameters__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getAp, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getAverageFlux, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getDailyFlux, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getMinDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00InputParameters)[] = {
            { Py_tp_methods, t_NRLMSISE00InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NRLMSISE00InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00InputParameters, t_NRLMSISE00InputParameters, NRLMSISE00InputParameters);

          void t_NRLMSISE00InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00InputParameters), &PY_TYPE_DEF(NRLMSISE00InputParameters), module, "NRLMSISE00InputParameters", 0);
          }

          void t_NRLMSISE00InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "class_", make_descriptor(NRLMSISE00InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "wrapfn_", make_descriptor(t_NRLMSISE00InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00InputParameters::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00InputParameters::wrap_Object(NRLMSISE00InputParameters(((t_NRLMSISE00InputParameters *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NRLMSISE00InputParameters_getAp(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAp(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAp", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getAverageFlux(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAverageFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAverageFlux", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getDailyFlux(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDailyFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDailyFlux", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getMaxDate(t_NRLMSISE00InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00InputParameters_getMinDate(t_NRLMSISE00InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00InputParameters_get__maxDate(t_NRLMSISE00InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_NRLMSISE00InputParameters_get__minDate(t_NRLMSISE00InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *NormalizedRandomGenerator::class$ = NULL;
      jmethodID *NormalizedRandomGenerator::mids$ = NULL;
      bool NormalizedRandomGenerator::live$ = false;

      jclass NormalizedRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/NormalizedRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextNormalizedDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble NormalizedRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_557b8123390d8d0c]);
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
      static PyObject *t_NormalizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NormalizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NormalizedRandomGenerator_nextNormalizedDouble(t_NormalizedRandomGenerator *self);

      static PyMethodDef t_NormalizedRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_NormalizedRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NormalizedRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NormalizedRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NormalizedRandomGenerator)[] = {
        { Py_tp_methods, t_NormalizedRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NormalizedRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(NormalizedRandomGenerator, t_NormalizedRandomGenerator, NormalizedRandomGenerator);

      void t_NormalizedRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(NormalizedRandomGenerator), &PY_TYPE_DEF(NormalizedRandomGenerator), module, "NormalizedRandomGenerator", 0);
      }

      void t_NormalizedRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "class_", make_descriptor(NormalizedRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "wrapfn_", make_descriptor(t_NormalizedRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NormalizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NormalizedRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_NormalizedRandomGenerator::wrap_Object(NormalizedRandomGenerator(((t_NormalizedRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_NormalizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NormalizedRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NormalizedRandomGenerator_nextNormalizedDouble(t_NormalizedRandomGenerator *self)
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
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SatelliteSystem::class$ = NULL;
      jmethodID *SatelliteSystem::mids$ = NULL;
      bool SatelliteSystem::live$ = false;
      SatelliteSystem *SatelliteSystem::BEIDOU = NULL;
      SatelliteSystem *SatelliteSystem::GALILEO = NULL;
      SatelliteSystem *SatelliteSystem::GLONASS = NULL;
      SatelliteSystem *SatelliteSystem::GPS = NULL;
      SatelliteSystem *SatelliteSystem::IRNSS = NULL;
      SatelliteSystem *SatelliteSystem::MIXED = NULL;
      SatelliteSystem *SatelliteSystem::QZSS = NULL;
      SatelliteSystem *SatelliteSystem::SBAS = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_A = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_B = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_D = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_F = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_H = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_K = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_L = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_N = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_O = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_P = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Q = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_T = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_U = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_V = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_W = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_X = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Y = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Z = NULL;

      jclass SatelliteSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SatelliteSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_d156d1ce330f6993] = env->getMethodID(cls, "getKey", "()C");
          mids$[mid_getObservationTimeScale_31010a40d5712240] = env->getMethodID(cls, "getObservationTimeScale", "()Lorg/orekit/gnss/ObservationTimeScale;");
          mids$[mid_parseSatelliteSystem_b7e1b4a14c398762] = env->getStaticMethodID(cls, "parseSatelliteSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_parseSatelliteSystemWithGPSDefault_b7e1b4a14c398762] = env->getStaticMethodID(cls, "parseSatelliteSystemWithGPSDefault", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_valueOf_b7e1b4a14c398762] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_values_998ced82a595eb30] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/SatelliteSystem;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU = new SatelliteSystem(env->getStaticObjectField(cls, "BEIDOU", "Lorg/orekit/gnss/SatelliteSystem;"));
          GALILEO = new SatelliteSystem(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/gnss/SatelliteSystem;"));
          GLONASS = new SatelliteSystem(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/SatelliteSystem;"));
          GPS = new SatelliteSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/SatelliteSystem;"));
          IRNSS = new SatelliteSystem(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/gnss/SatelliteSystem;"));
          MIXED = new SatelliteSystem(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/gnss/SatelliteSystem;"));
          QZSS = new SatelliteSystem(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/SatelliteSystem;"));
          SBAS = new SatelliteSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_A = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_A", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_B = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_B", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_D = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_D", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_F = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_F", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_H = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_H", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_K = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_K", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_L = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_L", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_N = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_N", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_O = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_O", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_P = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_P", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Q = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Q", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_T = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_T", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_U = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_U", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_V = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_V", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_W = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_W", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_X = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_X", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Y = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Y", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Z = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Z", "Lorg/orekit/gnss/SatelliteSystem;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jchar SatelliteSystem::getKey() const
      {
        return env->callCharMethod(this$, mids$[mid_getKey_d156d1ce330f6993]);
      }

      ::org::orekit::gnss::ObservationTimeScale SatelliteSystem::getObservationTimeScale() const
      {
        return ::org::orekit::gnss::ObservationTimeScale(env->callObjectMethod(this$, mids$[mid_getObservationTimeScale_31010a40d5712240]));
      }

      SatelliteSystem SatelliteSystem::parseSatelliteSystem(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteSystem_b7e1b4a14c398762], a0.this$));
      }

      SatelliteSystem SatelliteSystem::parseSatelliteSystemWithGPSDefault(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteSystemWithGPSDefault_b7e1b4a14c398762], a0.this$));
      }

      SatelliteSystem SatelliteSystem::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b7e1b4a14c398762], a0.this$));
      }

      JArray< SatelliteSystem > SatelliteSystem::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< SatelliteSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_998ced82a595eb30]));
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
      static PyObject *t_SatelliteSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_of_(t_SatelliteSystem *self, PyObject *args);
      static PyObject *t_SatelliteSystem_getKey(t_SatelliteSystem *self);
      static PyObject *t_SatelliteSystem_getObservationTimeScale(t_SatelliteSystem *self);
      static PyObject *t_SatelliteSystem_parseSatelliteSystem(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_parseSatelliteSystemWithGPSDefault(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_SatelliteSystem_values(PyTypeObject *type);
      static PyObject *t_SatelliteSystem_get__key(t_SatelliteSystem *self, void *data);
      static PyObject *t_SatelliteSystem_get__observationTimeScale(t_SatelliteSystem *self, void *data);
      static PyObject *t_SatelliteSystem_get__parameters_(t_SatelliteSystem *self, void *data);
      static PyGetSetDef t_SatelliteSystem__fields_[] = {
        DECLARE_GET_FIELD(t_SatelliteSystem, key),
        DECLARE_GET_FIELD(t_SatelliteSystem, observationTimeScale),
        DECLARE_GET_FIELD(t_SatelliteSystem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatelliteSystem__methods_[] = {
        DECLARE_METHOD(t_SatelliteSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, of_, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteSystem, getKey, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteSystem, getObservationTimeScale, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteSystem, parseSatelliteSystem, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, parseSatelliteSystemWithGPSDefault, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatelliteSystem)[] = {
        { Py_tp_methods, t_SatelliteSystem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SatelliteSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatelliteSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(SatelliteSystem, t_SatelliteSystem, SatelliteSystem);
      PyObject *t_SatelliteSystem::wrap_Object(const SatelliteSystem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SatelliteSystem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SatelliteSystem *self = (t_SatelliteSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SatelliteSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SatelliteSystem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SatelliteSystem *self = (t_SatelliteSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SatelliteSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(SatelliteSystem), &PY_TYPE_DEF(SatelliteSystem), module, "SatelliteSystem", 0);
      }

      void t_SatelliteSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "class_", make_descriptor(SatelliteSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "wrapfn_", make_descriptor(t_SatelliteSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "boxfn_", make_descriptor(boxObject));
        env->getClass(SatelliteSystem::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "BEIDOU", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::BEIDOU)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GALILEO", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GALILEO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GLONASS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GLONASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GPS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "IRNSS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::IRNSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "MIXED", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::MIXED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "QZSS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::QZSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "SBAS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::SBAS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_A", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_B", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_D", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_F", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_F)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_H", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_H)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_K", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_K)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_L", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_N", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_O", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_O)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_P", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Q", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_T", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_T)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_U", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_U)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_V", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_V)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_W", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_X", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Y", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Z", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Z)));
      }

      static PyObject *t_SatelliteSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatelliteSystem::initializeClass, 1)))
          return NULL;
        return t_SatelliteSystem::wrap_Object(SatelliteSystem(((t_SatelliteSystem *) arg)->object.this$));
      }
      static PyObject *t_SatelliteSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatelliteSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SatelliteSystem_of_(t_SatelliteSystem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SatelliteSystem_getKey(t_SatelliteSystem *self)
      {
        jchar result;
        OBJ_CALL(result = self->object.getKey());
        return c2p(result);
      }

      static PyObject *t_SatelliteSystem_getObservationTimeScale(t_SatelliteSystem *self)
      {
        ::org::orekit::gnss::ObservationTimeScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getObservationTimeScale());
        return ::org::orekit::gnss::t_ObservationTimeScale::wrap_Object(result);
      }

      static PyObject *t_SatelliteSystem_parseSatelliteSystem(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::parseSatelliteSystem(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseSatelliteSystem", arg);
        return NULL;
      }

      static PyObject *t_SatelliteSystem_parseSatelliteSystemWithGPSDefault(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::parseSatelliteSystemWithGPSDefault(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseSatelliteSystemWithGPSDefault", arg);
        return NULL;
      }

      static PyObject *t_SatelliteSystem_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::valueOf(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_SatelliteSystem_values(PyTypeObject *type)
      {
        JArray< SatelliteSystem > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::values());
        return JArray<jobject>(result.this$).wrap(t_SatelliteSystem::wrap_jobject);
      }
      static PyObject *t_SatelliteSystem_get__parameters_(t_SatelliteSystem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SatelliteSystem_get__key(t_SatelliteSystem *self, void *data)
      {
        jchar value;
        OBJ_CALL(value = self->object.getKey());
        return c2p(value);
      }

      static PyObject *t_SatelliteSystem_get__observationTimeScale(t_SatelliteSystem *self, void *data)
      {
        ::org::orekit::gnss::ObservationTimeScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getObservationTimeScale());
        return ::org::orekit::gnss::t_ObservationTimeScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/BrentOptimizer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *BrentOptimizer::class$ = NULL;
        jmethodID *BrentOptimizer::mids$ = NULL;
        bool BrentOptimizer::live$ = false;

        jclass BrentOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/BrentOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b2b4889b70ee50e3] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/optim/ConvergenceChecker;)V");
            mids$[mid_doOptimize_31fa57ee28e1174a] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrentOptimizer::BrentOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        BrentOptimizer::BrentOptimizer(jdouble a0, jdouble a1, const ::org::hipparchus::optim::ConvergenceChecker & a2) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_b2b4889b70ee50e3, a0, a1, a2.this$)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        static PyObject *t_BrentOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentOptimizer_of_(t_BrentOptimizer *self, PyObject *args);
        static int t_BrentOptimizer_init_(t_BrentOptimizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrentOptimizer_get__parameters_(t_BrentOptimizer *self, void *data);
        static PyGetSetDef t_BrentOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_BrentOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrentOptimizer__methods_[] = {
          DECLARE_METHOD(t_BrentOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentOptimizer, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrentOptimizer)[] = {
          { Py_tp_methods, t_BrentOptimizer__methods_ },
          { Py_tp_init, (void *) t_BrentOptimizer_init_ },
          { Py_tp_getset, t_BrentOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrentOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::univariate::UnivariateOptimizer),
          NULL
        };

        DEFINE_TYPE(BrentOptimizer, t_BrentOptimizer, BrentOptimizer);
        PyObject *t_BrentOptimizer::wrap_Object(const BrentOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentOptimizer *self = (t_BrentOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BrentOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentOptimizer *self = (t_BrentOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BrentOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(BrentOptimizer), &PY_TYPE_DEF(BrentOptimizer), module, "BrentOptimizer", 0);
        }

        void t_BrentOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "class_", make_descriptor(BrentOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "wrapfn_", make_descriptor(t_BrentOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrentOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrentOptimizer::initializeClass, 1)))
            return NULL;
          return t_BrentOptimizer::wrap_Object(BrentOptimizer(((t_BrentOptimizer *) arg)->object.this$));
        }
        static PyObject *t_BrentOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrentOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BrentOptimizer_of_(t_BrentOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BrentOptimizer_init_(t_BrentOptimizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BrentOptimizer object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BrentOptimizer(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::optim::ConvergenceChecker a2((jobject) NULL);
              PyTypeObject **p2;
              BrentOptimizer object((jobject) NULL);

              if (!parseArgs(args, "DDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                INT_CALL(object = BrentOptimizer(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
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
        static PyObject *t_BrentOptimizer_get__parameters_(t_BrentOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}

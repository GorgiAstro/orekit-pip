#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *Array2DRowFieldMatrix::class$ = NULL;
      jmethodID *Array2DRowFieldMatrix::mids$ = NULL;
      bool Array2DRowFieldMatrix::live$ = false;

      jclass Array2DRowFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/Array2DRowFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b21b5587abda5ee9] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_f8690281fd65dda7] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_1b9cf9fe2f8d539c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_a9fee9688246cfde] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_39f6aac6b2351abf] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_5c7a85ea6ad48b17] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_a9ccb012d4cb48bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_add_9b7147116b9a105f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_addToEntry_a6d8caed839ba827] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_1d6b27621d7bea96] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createMatrix_f57999d9fe0fa8c7] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_7007d1e2762517a8] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getDataRef_7007d1e2762517a8] = env->getMethodID(cls, "getDataRef", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_a7f16df0741fd579] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRow_5bf832a9d0c2a7e7] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getSubMatrix_455eec4445ba70d4] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiply_9b7147116b9a105f] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_multiplyEntry_a6d8caed839ba827] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_edf152e6444ee5f7] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyTransposed_60dc3401cb1a0936] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_operate_ee5975d9ac401b83] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_ee5975d9ac401b83] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_setEntry_a6d8caed839ba827] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_25fe2a3042ba75d1] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubMatrix_7c2e1cd72b6eb4ce] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_9b7147116b9a105f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_transposeMultiply_edf152e6444ee5f7] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_60dc3401cb1a0936] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_7d4c76689ca2f3c1] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_76fd1db3efda6447] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_516fb751ccd95d3b] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_e5d38b926487f1a5] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_7d4c76689ca2f3c1] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_76fd1db3efda6447] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_516fb751ccd95d3b] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_e5d38b926487f1a5] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_b21b5587abda5ee9, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_f8690281fd65dda7, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_1b9cf9fe2f8d539c, a0.this$, a1.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_a9fee9688246cfde, a0.this$, a1.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_39f6aac6b2351abf, a0.this$, a1)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1, jboolean a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_5c7a85ea6ad48b17, a0.this$, a1.this$, a2)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_a9ccb012d4cb48bd, a0.this$, a1, a2)) {}

      Array2DRowFieldMatrix Array2DRowFieldMatrix::add(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_add_9b7147116b9a105f], a0.this$));
      }

      void Array2DRowFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_1d6b27621d7bea96]));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_f57999d9fe0fa8c7], a0, a1));
      }

      jint Array2DRowFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > Array2DRowFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_7007d1e2762517a8]));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > Array2DRowFieldMatrix::getDataRef() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getDataRef_7007d1e2762517a8]));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_a7f16df0741fd579], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_5bf832a9d0c2a7e7], a0));
      }

      jint Array2DRowFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_455eec4445ba70d4], a0, a1, a2, a3));
      }

      Array2DRowFieldMatrix Array2DRowFieldMatrix::multiply(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_9b7147116b9a105f], a0.this$));
      }

      void Array2DRowFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::multiplyTransposed(const Array2DRowFieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_edf152e6444ee5f7], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_60dc3401cb1a0936], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_ee5975d9ac401b83], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_ee5975d9ac401b83], a0.this$));
      }

      void Array2DRowFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      void Array2DRowFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_25fe2a3042ba75d1], a0, a1.this$);
      }

      void Array2DRowFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_7c2e1cd72b6eb4ce], a0.this$, a1, a2);
      }

      Array2DRowFieldMatrix Array2DRowFieldMatrix::subtract(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_9b7147116b9a105f], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::transposeMultiply(const Array2DRowFieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_edf152e6444ee5f7], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_60dc3401cb1a0936], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_7d4c76689ca2f3c1], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_76fd1db3efda6447], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_516fb751ccd95d3b], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_e5d38b926487f1a5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_7d4c76689ca2f3c1], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_76fd1db3efda6447], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_516fb751ccd95d3b], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_e5d38b926487f1a5], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_Array2DRowFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowFieldMatrix_of_(t_Array2DRowFieldMatrix *self, PyObject *args);
      static int t_Array2DRowFieldMatrix_init_(t_Array2DRowFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Array2DRowFieldMatrix_add(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_addToEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_copy(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_createMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getColumnDimension(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getData(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getDataRef(t_Array2DRowFieldMatrix *self);
      static PyObject *t_Array2DRowFieldMatrix_getEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getRow(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getRowDimension(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiplyEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiplyTransposed(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_operate(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_preMultiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setRow(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_subtract(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_transposeMultiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_walkInColumnOrder(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_walkInRowOrder(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_get__columnDimension(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__data(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__dataRef(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__rowDimension(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__parameters_(t_Array2DRowFieldMatrix *self, void *data);
      static PyGetSetDef t_Array2DRowFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, data),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, dataRef),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Array2DRowFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_Array2DRowFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Array2DRowFieldMatrix)[] = {
        { Py_tp_methods, t_Array2DRowFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_Array2DRowFieldMatrix_init_ },
        { Py_tp_getset, t_Array2DRowFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Array2DRowFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(Array2DRowFieldMatrix, t_Array2DRowFieldMatrix, Array2DRowFieldMatrix);
      PyObject *t_Array2DRowFieldMatrix::wrap_Object(const Array2DRowFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Array2DRowFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Array2DRowFieldMatrix *self = (t_Array2DRowFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Array2DRowFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Array2DRowFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Array2DRowFieldMatrix *self = (t_Array2DRowFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Array2DRowFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(Array2DRowFieldMatrix), &PY_TYPE_DEF(Array2DRowFieldMatrix), module, "Array2DRowFieldMatrix", 0);
      }

      void t_Array2DRowFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "class_", make_descriptor(Array2DRowFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "wrapfn_", make_descriptor(t_Array2DRowFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Array2DRowFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Array2DRowFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_Array2DRowFieldMatrix::wrap_Object(Array2DRowFieldMatrix(((t_Array2DRowFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_Array2DRowFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Array2DRowFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Array2DRowFieldMatrix_of_(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Array2DRowFieldMatrix_init_(t_Array2DRowFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
            PyTypeObject **p1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[[KZ", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1, a2));
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

      static PyObject *t_Array2DRowFieldMatrix_add(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_addToEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_copy(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_createMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getColumnDimension(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getData(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getDataRef(t_Array2DRowFieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_getEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getRow(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getRowDimension(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiplyEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiplyTransposed(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_operate(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_preMultiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setRow(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_subtract(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_transposeMultiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_walkInColumnOrder(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "walkInColumnOrder", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_walkInRowOrder(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }
      static PyObject *t_Array2DRowFieldMatrix_get__parameters_(t_Array2DRowFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Array2DRowFieldMatrix_get__columnDimension(t_Array2DRowFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__data(t_Array2DRowFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__dataRef(t_Array2DRowFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__rowDimension(t_Array2DRowFieldMatrix *self, void *data)
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
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *TileAiming::class$ = NULL;
          jmethodID *TileAiming::mids$ = NULL;
          bool TileAiming::live$ = false;

          jclass TileAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/TileAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_alongTileDirection_94d0bf825c02adfa] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_0d9551367f7ecdef] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TileAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_94d0bf825c02adfa], a0.this$, a1.this$));
          }

          ::java::util::List TileAiming::getSingularPoints() const
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
          static PyObject *t_TileAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TileAiming_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TileAiming_alongTileDirection(t_TileAiming *self, PyObject *args);
          static PyObject *t_TileAiming_getSingularPoints(t_TileAiming *self);
          static PyObject *t_TileAiming_get__singularPoints(t_TileAiming *self, void *data);
          static PyGetSetDef t_TileAiming__fields_[] = {
            DECLARE_GET_FIELD(t_TileAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TileAiming__methods_[] = {
            DECLARE_METHOD(t_TileAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TileAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TileAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_TileAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TileAiming)[] = {
            { Py_tp_methods, t_TileAiming__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TileAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TileAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TileAiming, t_TileAiming, TileAiming);

          void t_TileAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(TileAiming), &PY_TYPE_DEF(TileAiming), module, "TileAiming", 0);
          }

          void t_TileAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "class_", make_descriptor(TileAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "wrapfn_", make_descriptor(t_TileAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TileAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TileAiming::initializeClass, 1)))
              return NULL;
            return t_TileAiming::wrap_Object(TileAiming(((t_TileAiming *) arg)->object.this$));
          }
          static PyObject *t_TileAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TileAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TileAiming_alongTileDirection(t_TileAiming *self, PyObject *args)
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

          static PyObject *t_TileAiming_getSingularPoints(t_TileAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_TileAiming_get__singularPoints(t_TileAiming *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Line::class$ = NULL;
          jmethodID *Line::mids$ = NULL;
          bool Line::live$ = false;

          jclass Line::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Line");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b2fa07e96193ae69] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_init$_305e00e57a81d096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;DD)V");
              mids$[mid_contains_3a693ebb932d4aff] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Z");
              mids$[mid_copySelf_e207c2684f5ea968] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_distance_f29c6927714cda74] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_emptyHyperplane_c6d04aa189a69292] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/twod/SubLine;");
              mids$[mid_getAngle_557b8123390d8d0c] = env->getMethodID(cls, "getAngle", "()D");
              mids$[mid_getOffset_2ee22a1420c3a4b8] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)D");
              mids$[mid_getOffset_cf1fec2b7b1c0efe] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_b540ea36818b5810] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getOriginOffset_557b8123390d8d0c] = env->getMethodID(cls, "getOriginOffset", "()D");
              mids$[mid_getPointAt_37d36001218f4374] = env->getMethodID(cls, "getPointAt", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getReverse_e207c2684f5ea968] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getTransform_ed7f83d18c2135d3] = env->getStaticMethodID(cls, "getTransform", "(DDDDDD)Lorg/hipparchus/geometry/partitioning/Transform;");
              mids$[mid_intersection_a9dc84df4c4b4411] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_isParallelTo_7009eecb33826b22] = env->getMethodID(cls, "isParallelTo", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)Z");
              mids$[mid_project_328d0d966eeb9668] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_aa286ab7725055db] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_reset_c3edcc9ac6d6b0fb] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_revertSelf_0640e6acf969ed28] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_cb9274a363000a77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_setAngle_10f281d777284cea] = env->getMethodID(cls, "setAngle", "(D)V");
              mids$[mid_setOriginOffset_10f281d777284cea] = env->getMethodID(cls, "setOriginOffset", "(D)V");
              mids$[mid_toSpace_52abee4ee839df65] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSpace_adc34d508fd7001c] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSubSpace_42ff1f7fd4bd45c4] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toSubSpace_be3d5e0f525cd980] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_translateToPoint_086d06980fa26fc1] = env->getMethodID(cls, "translateToPoint", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_wholeHyperplane_c6d04aa189a69292] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/twod/SubLine;");
              mids$[mid_wholeSpace_14eed69045150761] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/twod/PolygonsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Line::Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b2fa07e96193ae69, a0.this$, a1.this$, a2)) {}

          Line::Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_305e00e57a81d096, a0.this$, a1, a2)) {}

          jboolean Line::contains(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_3a693ebb932d4aff], a0.this$);
          }

          Line Line::copySelf() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_copySelf_e207c2684f5ea968]));
          }

          jdouble Line::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_f29c6927714cda74], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::SubLine Line::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::SubLine(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_c6d04aa189a69292]));
          }

          jdouble Line::getAngle() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAngle_557b8123390d8d0c]);
          }

          jdouble Line::getOffset(const Line & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_2ee22a1420c3a4b8], a0.this$);
          }

          jdouble Line::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_cf1fec2b7b1c0efe], a0.this$);
          }

          jdouble Line::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_b540ea36818b5810], a0.this$);
          }

          jdouble Line::getOriginOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOriginOffset_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::getPointAt(const ::org::hipparchus::geometry::euclidean::oned::Vector1D & a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getPointAt_37d36001218f4374], a0.this$, a1));
          }

          Line Line::getReverse() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_getReverse_e207c2684f5ea968]));
          }

          jdouble Line::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::partitioning::Transform Line::getTransform(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::partitioning::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_ed7f83d18c2135d3], a0, a1, a2, a3, a4, a5));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::intersection(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_intersection_a9dc84df4c4b4411], a0.this$));
          }

          jboolean Line::isParallelTo(const Line & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isParallelTo_7009eecb33826b22], a0.this$);
          }

          ::org::hipparchus::geometry::Point Line::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_328d0d966eeb9668], a0.this$));
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_aa286ab7725055db], a0.this$, a1.this$);
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_c3edcc9ac6d6b0fb], a0.this$, a1);
          }

          void Line::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_0640e6acf969ed28]);
          }

          jboolean Line::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_cb9274a363000a77], a0.this$);
          }

          void Line::setAngle(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAngle_10f281d777284cea], a0);
          }

          void Line::setOriginOffset(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOriginOffset_10f281d777284cea], a0);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSpace_52abee4ee839df65], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSpace_adc34d508fd7001c], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_42ff1f7fd4bd45c4], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_be3d5e0f525cd980], a0.this$));
          }

          void Line::translateToPoint(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_translateToPoint_086d06980fa26fc1], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::SubLine Line::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::SubLine(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_c6d04aa189a69292]));
          }

          ::org::hipparchus::geometry::euclidean::twod::PolygonsSet Line::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::PolygonsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_14eed69045150761]));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Line_contains(t_Line *self, PyObject *arg);
          static PyObject *t_Line_copySelf(t_Line *self);
          static PyObject *t_Line_distance(t_Line *self, PyObject *arg);
          static PyObject *t_Line_emptyHyperplane(t_Line *self);
          static PyObject *t_Line_getAngle(t_Line *self);
          static PyObject *t_Line_getOffset(t_Line *self, PyObject *args);
          static PyObject *t_Line_getOriginOffset(t_Line *self);
          static PyObject *t_Line_getPointAt(t_Line *self, PyObject *args);
          static PyObject *t_Line_getReverse(t_Line *self);
          static PyObject *t_Line_getTolerance(t_Line *self);
          static PyObject *t_Line_getTransform(PyTypeObject *type, PyObject *args);
          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg);
          static PyObject *t_Line_isParallelTo(t_Line *self, PyObject *arg);
          static PyObject *t_Line_project(t_Line *self, PyObject *arg);
          static PyObject *t_Line_reset(t_Line *self, PyObject *args);
          static PyObject *t_Line_revertSelf(t_Line *self);
          static PyObject *t_Line_sameOrientationAs(t_Line *self, PyObject *arg);
          static PyObject *t_Line_setAngle(t_Line *self, PyObject *arg);
          static PyObject *t_Line_setOriginOffset(t_Line *self, PyObject *arg);
          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_translateToPoint(t_Line *self, PyObject *arg);
          static PyObject *t_Line_wholeHyperplane(t_Line *self);
          static PyObject *t_Line_wholeSpace(t_Line *self);
          static PyObject *t_Line_get__angle(t_Line *self, void *data);
          static int t_Line_set__angle(t_Line *self, PyObject *arg, void *data);
          static PyObject *t_Line_get__originOffset(t_Line *self, void *data);
          static int t_Line_set__originOffset(t_Line *self, PyObject *arg, void *data);
          static PyObject *t_Line_get__reverse(t_Line *self, void *data);
          static PyObject *t_Line_get__tolerance(t_Line *self, void *data);
          static PyGetSetDef t_Line__fields_[] = {
            DECLARE_GETSET_FIELD(t_Line, angle),
            DECLARE_GETSET_FIELD(t_Line, originOffset),
            DECLARE_GET_FIELD(t_Line, reverse),
            DECLARE_GET_FIELD(t_Line, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Line__methods_[] = {
            DECLARE_METHOD(t_Line, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, contains, METH_O),
            DECLARE_METHOD(t_Line, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Line, distance, METH_O),
            DECLARE_METHOD(t_Line, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Line, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_Line, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Line, getOriginOffset, METH_NOARGS),
            DECLARE_METHOD(t_Line, getPointAt, METH_VARARGS),
            DECLARE_METHOD(t_Line, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTransform, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Line, intersection, METH_O),
            DECLARE_METHOD(t_Line, isParallelTo, METH_O),
            DECLARE_METHOD(t_Line, project, METH_O),
            DECLARE_METHOD(t_Line, reset, METH_VARARGS),
            DECLARE_METHOD(t_Line, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Line, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Line, setAngle, METH_O),
            DECLARE_METHOD(t_Line, setOriginOffset, METH_O),
            DECLARE_METHOD(t_Line, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, translateToPoint, METH_O),
            DECLARE_METHOD(t_Line, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Line, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Line)[] = {
            { Py_tp_methods, t_Line__methods_ },
            { Py_tp_init, (void *) t_Line_init_ },
            { Py_tp_getset, t_Line__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Line)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Line, t_Line, Line);

          void t_Line::install(PyObject *module)
          {
            installType(&PY_TYPE(Line), &PY_TYPE_DEF(Line), module, "Line", 0);
          }

          void t_Line::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "class_", make_descriptor(Line::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "wrapfn_", make_descriptor(t_Line::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Line::initializeClass, 1)))
              return NULL;
            return t_Line::wrap_Object(Line(((t_Line *) arg)->object.this$));
          }
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Line::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                Line object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Line(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                Line object((jobject) NULL);

                if (!parseArgs(args, "kDD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Line(a0, a1, a2));
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

          static PyObject *t_Line_contains(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Line_copySelf(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_distance(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Line_emptyHyperplane(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::twod::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_getAngle(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAngle());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getOffset(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Line a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Line_getOriginOffset(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOriginOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getPointAt(t_Line *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::oned::Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPointAt(a0, a1));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", args);
            return NULL;
          }

          static PyObject *t_Line_getReverse(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_getTolerance(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getTransform(PyTypeObject *type, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::hipparchus::geometry::partitioning::Transform result((jobject) NULL);

            if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Line::getTransform(a0, a1, a2, a3, a4, a5));
              return ::org::hipparchus::geometry::partitioning::t_Transform::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D), ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            PyErr_SetArgsError(type, "getTransform", args);
            return NULL;
          }

          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_Line_isParallelTo(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isParallelTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isParallelTo", arg);
            return NULL;
          }

          static PyObject *t_Line_project(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Line_reset(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                jdouble a1;

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Line_revertSelf(t_Line *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Line_sameOrientationAs(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Line_setAngle(t_Line *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAngle(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAngle", arg);
            return NULL;
          }

          static PyObject *t_Line_setOriginOffset(t_Line *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOriginOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOriginOffset", arg);
            return NULL;
          }

          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Line_translateToPoint(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.translateToPoint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "translateToPoint", arg);
            return NULL;
          }

          static PyObject *t_Line_wholeHyperplane(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::twod::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_wholeSpace(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::PolygonsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_PolygonsSet::wrap_Object(result);
          }

          static PyObject *t_Line_get__angle(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAngle());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Line_set__angle(t_Line *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAngle(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "angle", arg);
            return -1;
          }

          static PyObject *t_Line_get__originOffset(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOriginOffset());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Line_set__originOffset(t_Line *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOriginOffset(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "originOffset", arg);
            return -1;
          }

          static PyObject *t_Line_get__reverse(t_Line *self, void *data)
          {
            Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_Line::wrap_Object(value);
          }

          static PyObject *t_Line_get__tolerance(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldLegendreRuleFactory::class$ = NULL;
          jmethodID *FieldLegendreRuleFactory::mids$ = NULL;
          bool FieldLegendreRuleFactory::live$ = false;

          jclass FieldLegendreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_9a5adfb225849173] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLegendreRuleFactory::FieldLegendreRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

          ::org::hipparchus::util::Pair FieldLegendreRuleFactory::computeRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_computeRule_9a5adfb225849173], a0));
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
          static PyObject *t_FieldLegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_of_(t_FieldLegendreRuleFactory *self, PyObject *args);
          static int t_FieldLegendreRuleFactory_init_(t_FieldLegendreRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLegendreRuleFactory_computeRule(t_FieldLegendreRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_get__parameters_(t_FieldLegendreRuleFactory *self, void *data);
          static PyGetSetDef t_FieldLegendreRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLegendreRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLegendreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldLegendreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, computeRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLegendreRuleFactory)[] = {
            { Py_tp_methods, t_FieldLegendreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldLegendreRuleFactory_init_ },
            { Py_tp_getset, t_FieldLegendreRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLegendreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldLegendreRuleFactory, t_FieldLegendreRuleFactory, FieldLegendreRuleFactory);
          PyObject *t_FieldLegendreRuleFactory::wrap_Object(const FieldLegendreRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLegendreRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLegendreRuleFactory *self = (t_FieldLegendreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLegendreRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLegendreRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLegendreRuleFactory *self = (t_FieldLegendreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLegendreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLegendreRuleFactory), &PY_TYPE_DEF(FieldLegendreRuleFactory), module, "FieldLegendreRuleFactory", 0);
          }

          void t_FieldLegendreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "class_", make_descriptor(FieldLegendreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "wrapfn_", make_descriptor(t_FieldLegendreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLegendreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldLegendreRuleFactory::wrap_Object(FieldLegendreRuleFactory(((t_FieldLegendreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldLegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLegendreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLegendreRuleFactory_of_(t_FieldLegendreRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLegendreRuleFactory_init_(t_FieldLegendreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldLegendreRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldLegendreRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLegendreRuleFactory_computeRule(t_FieldLegendreRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.computeRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeRule", arg);
            return NULL;
          }
          static PyObject *t_FieldLegendreRuleFactory_get__parameters_(t_FieldLegendreRuleFactory *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistoryMetadata::class$ = NULL;
              jmethodID *TrajectoryStateHistoryMetadata::mids$ = NULL;
              bool TrajectoryStateHistoryMetadata::live$ = false;
              jint TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_DEGREE = (jint) 0;
              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod *TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_METHOD = NULL;

              jclass TrajectoryStateHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_11edd4fa0b5a3eaf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_copy_3a8876e04e4abfef] = env->getMethodID(cls, "copy", "(D)Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;");
                  mids$[mid_getCenter_c642bce266d6d89a] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                  mids$[mid_getInterpolationDegree_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_8efb284b7b2c86d2] = env->getMethodID(cls, "getInterpolationMethod", "()Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_getOrbAveraging_3cffd47377eca18a] = env->getMethodID(cls, "getOrbAveraging", "()Ljava/lang/String;");
                  mids$[mid_getOrbRevNum_412668abc8d889e9] = env->getMethodID(cls, "getOrbRevNum", "()I");
                  mids$[mid_getOrbRevNumBasis_412668abc8d889e9] = env->getMethodID(cls, "getOrbRevNumBasis", "()I");
                  mids$[mid_getPropagator_3cffd47377eca18a] = env->getMethodID(cls, "getPropagator", "()Ljava/lang/String;");
                  mids$[mid_getTrajBasis_3cffd47377eca18a] = env->getMethodID(cls, "getTrajBasis", "()Ljava/lang/String;");
                  mids$[mid_getTrajBasisID_3cffd47377eca18a] = env->getMethodID(cls, "getTrajBasisID", "()Ljava/lang/String;");
                  mids$[mid_getTrajFrameEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getTrajFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTrajID_3cffd47377eca18a] = env->getMethodID(cls, "getTrajID", "()Ljava/lang/String;");
                  mids$[mid_getTrajNextID_3cffd47377eca18a] = env->getMethodID(cls, "getTrajNextID", "()Ljava/lang/String;");
                  mids$[mid_getTrajPrevID_3cffd47377eca18a] = env->getMethodID(cls, "getTrajPrevID", "()Ljava/lang/String;");
                  mids$[mid_getTrajReferenceFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getTrajReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTrajType_ada74ce902d29422] = env->getMethodID(cls, "getTrajType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_getTrajUnits_0d9551367f7ecdef] = env->getMethodID(cls, "getTrajUnits", "()Ljava/util/List;");
                  mids$[mid_getUseableStartTime_7a97f7e149e79afb] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_7a97f7e149e79afb] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_incrementTrajID_60bb1b490b673cbf] = env->getStaticMethodID(cls, "incrementTrajID", "(Ljava/lang/String;)Ljava/lang/String;");
                  mids$[mid_setCenter_e6f755c267d91c26] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                  mids$[mid_setInterpolationDegree_a3da1a935cb37f7b] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_db5b325923fed9a5] = env->getMethodID(cls, "setInterpolationMethod", "(Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;)V");
                  mids$[mid_setOrbAveraging_f5ffdf29129ef90a] = env->getMethodID(cls, "setOrbAveraging", "(Ljava/lang/String;)V");
                  mids$[mid_setOrbRevNum_a3da1a935cb37f7b] = env->getMethodID(cls, "setOrbRevNum", "(I)V");
                  mids$[mid_setOrbRevNumBasis_a3da1a935cb37f7b] = env->getMethodID(cls, "setOrbRevNumBasis", "(I)V");
                  mids$[mid_setPropagator_f5ffdf29129ef90a] = env->getMethodID(cls, "setPropagator", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajBasis_f5ffdf29129ef90a] = env->getMethodID(cls, "setTrajBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajBasisID_f5ffdf29129ef90a] = env->getMethodID(cls, "setTrajBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajFrameEpoch_20affcbd28542333] = env->getMethodID(cls, "setTrajFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTrajID_f5ffdf29129ef90a] = env->getMethodID(cls, "setTrajID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajNextID_f5ffdf29129ef90a] = env->getMethodID(cls, "setTrajNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajPrevID_f5ffdf29129ef90a] = env->getMethodID(cls, "setTrajPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajReferenceFrame_f55eee1236275bb1] = env->getMethodID(cls, "setTrajReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTrajType_94fd56ae4b55b80e] = env->getMethodID(cls, "setTrajType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;)V");
                  mids$[mid_setTrajUnits_4ccaedadb068bdeb] = env->getMethodID(cls, "setTrajUnits", "(Ljava/util/List;)V");
                  mids$[mid_setUseableStartTime_20affcbd28542333] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_20affcbd28542333] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_INTERPOLATION_DEGREE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_DEGREE");
                  DEFAULT_INTERPOLATION_METHOD = new ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->getStaticObjectField(cls, "DEFAULT_INTERPOLATION_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryStateHistoryMetadata::TrajectoryStateHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_11edd4fa0b5a3eaf, a0.this$, a1.this$)) {}

              TrajectoryStateHistoryMetadata TrajectoryStateHistoryMetadata::copy(jdouble a0) const
              {
                return TrajectoryStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_copy_3a8876e04e4abfef], a0));
              }

              ::org::orekit::files::ccsds::definitions::BodyFacade TrajectoryStateHistoryMetadata::getCenter() const
              {
                return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_c642bce266d6d89a]));
              }

              jint TrajectoryStateHistoryMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_412668abc8d889e9]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod TrajectoryStateHistoryMetadata::getInterpolationMethod() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_8efb284b7b2c86d2]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getOrbAveraging() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOrbAveraging_3cffd47377eca18a]));
              }

              jint TrajectoryStateHistoryMetadata::getOrbRevNum() const
              {
                return env->callIntMethod(this$, mids$[mid_getOrbRevNum_412668abc8d889e9]);
              }

              jint TrajectoryStateHistoryMetadata::getOrbRevNumBasis() const
              {
                return env->callIntMethod(this$, mids$[mid_getOrbRevNumBasis_412668abc8d889e9]);
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getPropagator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPropagator_3cffd47377eca18a]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajBasis_3cffd47377eca18a]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajBasisID_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getTrajFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTrajFrameEpoch_7a97f7e149e79afb]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajID_3cffd47377eca18a]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajNextID_3cffd47377eca18a]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajPrevID_3cffd47377eca18a]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade TrajectoryStateHistoryMetadata::getTrajReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getTrajReferenceFrame_98f5fcaff3e3f9d2]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType TrajectoryStateHistoryMetadata::getTrajType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getTrajType_ada74ce902d29422]));
              }

              ::java::util::List TrajectoryStateHistoryMetadata::getTrajUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajUnits_0d9551367f7ecdef]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_7a97f7e149e79afb]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::incrementTrajID(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_incrementTrajID_60bb1b490b673cbf], a0.this$));
              }

              void TrajectoryStateHistoryMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenter_e6f755c267d91c26], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_a3da1a935cb37f7b], a0);
              }

              void TrajectoryStateHistoryMetadata::setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_db5b325923fed9a5], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setOrbAveraging(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbAveraging_f5ffdf29129ef90a], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setOrbRevNum(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbRevNum_a3da1a935cb37f7b], a0);
              }

              void TrajectoryStateHistoryMetadata::setOrbRevNumBasis(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbRevNumBasis_a3da1a935cb37f7b], a0);
              }

              void TrajectoryStateHistoryMetadata::setPropagator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPropagator_f5ffdf29129ef90a], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajBasis_f5ffdf29129ef90a], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajBasisID_f5ffdf29129ef90a], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajFrameEpoch_20affcbd28542333], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajID_f5ffdf29129ef90a], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajNextID_f5ffdf29129ef90a], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajPrevID_f5ffdf29129ef90a], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajReferenceFrame_f55eee1236275bb1], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajType_94fd56ae4b55b80e], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajUnits_4ccaedadb068bdeb], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_20affcbd28542333], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_20affcbd28542333], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::validate(jdouble a0) const
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
          namespace odm {
            namespace ocm {
              static PyObject *t_TrajectoryStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryStateHistoryMetadata_init_(t_TrajectoryStateHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryStateHistoryMetadata_copy(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_getCenter(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationDegree(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationMethod(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbAveraging(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNum(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getPropagator(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasis(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasisID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajNextID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajPrevID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajType(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajUnits(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStartTime(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStopTime(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_incrementTrajID(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setCenter(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setPropagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_validate(t_TrajectoryStateHistoryMetadata *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__center(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__center(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbAveraging(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNum(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__propagator(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__propagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasis(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasisID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajNextID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajPrevID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajType(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajUnits(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStartTime(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__useableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStopTime(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__useableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_TrajectoryStateHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, center),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, interpolationMethod),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbAveraging),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbRevNum),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbRevNumBasis),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, propagator),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajBasis),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajBasisID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajFrameEpoch),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajNextID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajPrevID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajReferenceFrame),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajType),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajUnits),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, copy, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getCenter, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbAveraging, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbRevNum, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbRevNumBasis, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getPropagator, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajBasis, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajBasisID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajNextID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajPrevID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajType, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajUnits, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, incrementTrajID, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setCenter, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbAveraging, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbRevNum, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbRevNumBasis, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setPropagator, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajBasis, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajBasisID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajFrameEpoch, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajNextID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajPrevID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajReferenceFrame, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajType, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajUnits, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistoryMetadata)[] = {
                { Py_tp_methods, t_TrajectoryStateHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_TrajectoryStateHistoryMetadata_init_ },
                { Py_tp_getset, t_TrajectoryStateHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistoryMetadata, t_TrajectoryStateHistoryMetadata, TrajectoryStateHistoryMetadata);

              void t_TrajectoryStateHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistoryMetadata), &PY_TYPE_DEF(TrajectoryStateHistoryMetadata), module, "TrajectoryStateHistoryMetadata", 0);
              }

              void t_TrajectoryStateHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "class_", make_descriptor(TrajectoryStateHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "wrapfn_", make_descriptor(t_TrajectoryStateHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(TrajectoryStateHistoryMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "DEFAULT_INTERPOLATION_DEGREE", make_descriptor(TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_DEGREE));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "DEFAULT_INTERPOLATION_METHOD", make_descriptor(::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(*TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_METHOD)));
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistoryMetadata::wrap_Object(TrajectoryStateHistoryMetadata(((t_TrajectoryStateHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryStateHistoryMetadata_init_(t_TrajectoryStateHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::data::DataContext a1((jobject) NULL);
                TrajectoryStateHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = TrajectoryStateHistoryMetadata(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_copy(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;
                TrajectoryStateHistoryMetadata result((jobject) NULL);

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(result = self->object.copy(a0));
                  return t_TrajectoryStateHistoryMetadata::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "copy", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getCenter(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenter());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationDegree(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationMethod(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbAveraging(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbAveraging());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNum(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getOrbRevNum());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getOrbRevNumBasis());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getPropagator(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPropagator());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasis(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajBasis());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasisID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajBasisID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajNextID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajNextID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajPrevID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajPrevID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajType(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajUnits(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStartTime(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStopTime(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_incrementTrajID(PyTypeObject *type, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::incrementTrajID(a0));
                  return j2p(result);
                }

                PyErr_SetArgsError(type, "incrementTrajID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setCenter(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenter(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenter", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
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

              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::parameters_))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOrbAveraging(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbAveraging", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setOrbRevNum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbRevNum", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setOrbRevNumBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbRevNumBasis", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setPropagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPropagator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPropagator", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajBasis", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajBasisID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTrajFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajNextID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajPrevID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTrajReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setTrajType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajType", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setTrajUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajUnits", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_validate(t_TrajectoryStateHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(TrajectoryStateHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__center(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenter());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__center(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenter(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "center", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbAveraging(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbAveraging());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOrbAveraging(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbAveraging", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNum(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getOrbRevNum());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setOrbRevNum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbRevNum", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getOrbRevNumBasis());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setOrbRevNumBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbRevNumBasis", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__propagator(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPropagator());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__propagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPropagator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "propagator", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasis(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajBasis());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajBasis", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasisID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajBasisID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajBasisID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajNextID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajNextID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajNextID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajPrevID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajPrevID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajPrevID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajType(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajType", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajUnits(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajUnits", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStartTime(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__useableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStopTime(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__useableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
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
#include "org/orekit/files/sp3/SP3Writer.h"
#include "java/io/IOException.h"
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Writer::class$ = NULL;
        jmethodID *SP3Writer::mids$ = NULL;
        bool SP3Writer::live$ = false;

        jclass SP3Writer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Writer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7db31472897430b1] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_write_5e3a00a527a3c075] = env->getMethodID(cls, "write", "(Lorg/orekit/files/sp3/SP3;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Writer::SP3Writer(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7db31472897430b1, a0.this$, a1.this$, a2.this$)) {}

        void SP3Writer::write(const ::org::orekit::files::sp3::SP3 & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_write_5e3a00a527a3c075], a0.this$);
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
        static PyObject *t_SP3Writer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Writer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Writer_init_(t_SP3Writer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Writer_write(t_SP3Writer *self, PyObject *arg);

        static PyMethodDef t_SP3Writer__methods_[] = {
          DECLARE_METHOD(t_SP3Writer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Writer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Writer, write, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Writer)[] = {
          { Py_tp_methods, t_SP3Writer__methods_ },
          { Py_tp_init, (void *) t_SP3Writer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Writer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Writer, t_SP3Writer, SP3Writer);

        void t_SP3Writer::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Writer), &PY_TYPE_DEF(SP3Writer), module, "SP3Writer", 0);
        }

        void t_SP3Writer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "class_", make_descriptor(SP3Writer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "wrapfn_", make_descriptor(t_SP3Writer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Writer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Writer::initializeClass, 1)))
            return NULL;
          return t_SP3Writer::wrap_Object(SP3Writer(((t_SP3Writer *) arg)->object.this$));
        }
        static PyObject *t_SP3Writer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Writer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Writer_init_(t_SP3Writer *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::Appendable a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::time::TimeScales a2((jobject) NULL);
          SP3Writer object((jobject) NULL);

          if (!parseArgs(args, "ksk", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = SP3Writer(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Writer_write(t_SP3Writer *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3 a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3::initializeClass, &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonPotentialCoefficientsReader::class$ = NULL;
          jmethodID *PythonPotentialCoefficientsReader::mids$ = NULL;
          bool PythonPotentialCoefficientsReader::live$ = false;

          jclass PythonPotentialCoefficientsReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e5ca4b97ee6bd2b6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_738db7d6574836ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getProvider_f0b357b475e18957] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonPotentialCoefficientsReader::PythonPotentialCoefficientsReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_e5ca4b97ee6bd2b6, a0.this$, a1)) {}

          PythonPotentialCoefficientsReader::PythonPotentialCoefficientsReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_738db7d6574836ac, a0.this$, a1, a2.this$)) {}

          void PythonPotentialCoefficientsReader::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonPotentialCoefficientsReader::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonPotentialCoefficientsReader::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonPotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonPotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonPotentialCoefficientsReader_init_(t_PythonPotentialCoefficientsReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonPotentialCoefficientsReader_finalize(t_PythonPotentialCoefficientsReader *self);
          static PyObject *t_PythonPotentialCoefficientsReader_pythonExtension(t_PythonPotentialCoefficientsReader *self, PyObject *args);
          static jobject JNICALL t_PythonPotentialCoefficientsReader_getProvider0(JNIEnv *jenv, jobject jobj, jboolean a0, jint a1, jint a2);
          static void JNICALL t_PythonPotentialCoefficientsReader_loadData1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonPotentialCoefficientsReader_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonPotentialCoefficientsReader_get__self(t_PythonPotentialCoefficientsReader *self, void *data);
          static PyGetSetDef t_PythonPotentialCoefficientsReader__fields_[] = {
            DECLARE_GET_FIELD(t_PythonPotentialCoefficientsReader, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonPotentialCoefficientsReader__methods_[] = {
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonPotentialCoefficientsReader)[] = {
            { Py_tp_methods, t_PythonPotentialCoefficientsReader__methods_ },
            { Py_tp_init, (void *) t_PythonPotentialCoefficientsReader_init_ },
            { Py_tp_getset, t_PythonPotentialCoefficientsReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonPotentialCoefficientsReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(PythonPotentialCoefficientsReader, t_PythonPotentialCoefficientsReader, PythonPotentialCoefficientsReader);

          void t_PythonPotentialCoefficientsReader::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonPotentialCoefficientsReader), &PY_TYPE_DEF(PythonPotentialCoefficientsReader), module, "PythonPotentialCoefficientsReader", 1);
          }

          void t_PythonPotentialCoefficientsReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "class_", make_descriptor(PythonPotentialCoefficientsReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "wrapfn_", make_descriptor(t_PythonPotentialCoefficientsReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonPotentialCoefficientsReader::initializeClass);
            JNINativeMethod methods[] = {
              { "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;", (void *) t_PythonPotentialCoefficientsReader_getProvider0 },
              { "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V", (void *) t_PythonPotentialCoefficientsReader_loadData1 },
              { "pythonDecRef", "()V", (void *) t_PythonPotentialCoefficientsReader_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonPotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonPotentialCoefficientsReader::initializeClass, 1)))
              return NULL;
            return t_PythonPotentialCoefficientsReader::wrap_Object(PythonPotentialCoefficientsReader(((t_PythonPotentialCoefficientsReader *) arg)->object.this$));
          }
          static PyObject *t_PythonPotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonPotentialCoefficientsReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonPotentialCoefficientsReader_init_(t_PythonPotentialCoefficientsReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                PythonPotentialCoefficientsReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = PythonPotentialCoefficientsReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                PythonPotentialCoefficientsReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonPotentialCoefficientsReader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonPotentialCoefficientsReader_finalize(t_PythonPotentialCoefficientsReader *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonPotentialCoefficientsReader_pythonExtension(t_PythonPotentialCoefficientsReader *self, PyObject *args)
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

          static jobject JNICALL t_PythonPotentialCoefficientsReader_getProvider0(JNIEnv *jenv, jobject jobj, jboolean a0, jint a1, jint a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o0 = (a0 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "getProvider", "Oii", o0, (int) a1, (int) a2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getProvider", result);
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

          static void JNICALL t_PythonPotentialCoefficientsReader_loadData1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
            PyObject *o1 = env->fromJString((jstring) a1, 0);
            PyObject *result = PyObject_CallMethod(obj, "loadData", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonPotentialCoefficientsReader_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonPotentialCoefficientsReader_get__self(t_PythonPotentialCoefficientsReader *self, void *data)
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
#include "org/orekit/propagation/events/handlers/ContinueOnEvent.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *ContinueOnEvent::class$ = NULL;
          jmethodID *ContinueOnEvent::mids$ = NULL;
          bool ContinueOnEvent::live$ = false;

          jclass ContinueOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/ContinueOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_c85ac59cb25f2670] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContinueOnEvent::ContinueOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::ode::events::Action ContinueOnEvent::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_c85ac59cb25f2670], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_ContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ContinueOnEvent_init_(t_ContinueOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ContinueOnEvent_eventOccurred(t_ContinueOnEvent *self, PyObject *args);

          static PyMethodDef t_ContinueOnEvent__methods_[] = {
            DECLARE_METHOD(t_ContinueOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinueOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinueOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContinueOnEvent)[] = {
            { Py_tp_methods, t_ContinueOnEvent__methods_ },
            { Py_tp_init, (void *) t_ContinueOnEvent_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContinueOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ContinueOnEvent, t_ContinueOnEvent, ContinueOnEvent);

          void t_ContinueOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(ContinueOnEvent), &PY_TYPE_DEF(ContinueOnEvent), module, "ContinueOnEvent", 0);
          }

          void t_ContinueOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "class_", make_descriptor(ContinueOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "wrapfn_", make_descriptor(t_ContinueOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContinueOnEvent::initializeClass, 1)))
              return NULL;
            return t_ContinueOnEvent::wrap_Object(ContinueOnEvent(((t_ContinueOnEvent *) arg)->object.this$));
          }
          static PyObject *t_ContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContinueOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ContinueOnEvent_init_(t_ContinueOnEvent *self, PyObject *args, PyObject *kwds)
          {
            ContinueOnEvent object((jobject) NULL);

            INT_CALL(object = ContinueOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_ContinueOnEvent_eventOccurred(t_ContinueOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/SearchInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *SearchInterval::class$ = NULL;
        jmethodID *SearchInterval::mids$ = NULL;
        bool SearchInterval::live$ = false;

        jclass SearchInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/SearchInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getMax_557b8123390d8d0c] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_557b8123390d8d0c] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getStartValue_557b8123390d8d0c] = env->getMethodID(cls, "getStartValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SearchInterval::SearchInterval(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        SearchInterval::SearchInterval(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble SearchInterval::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_557b8123390d8d0c]);
        }

        jdouble SearchInterval::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_557b8123390d8d0c]);
        }

        jdouble SearchInterval::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_557b8123390d8d0c]);
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
    namespace optim {
      namespace univariate {
        static PyObject *t_SearchInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SearchInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SearchInterval_init_(t_SearchInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SearchInterval_getMax(t_SearchInterval *self);
        static PyObject *t_SearchInterval_getMin(t_SearchInterval *self);
        static PyObject *t_SearchInterval_getStartValue(t_SearchInterval *self);
        static PyObject *t_SearchInterval_get__max(t_SearchInterval *self, void *data);
        static PyObject *t_SearchInterval_get__min(t_SearchInterval *self, void *data);
        static PyObject *t_SearchInterval_get__startValue(t_SearchInterval *self, void *data);
        static PyGetSetDef t_SearchInterval__fields_[] = {
          DECLARE_GET_FIELD(t_SearchInterval, max),
          DECLARE_GET_FIELD(t_SearchInterval, min),
          DECLARE_GET_FIELD(t_SearchInterval, startValue),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SearchInterval__methods_[] = {
          DECLARE_METHOD(t_SearchInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SearchInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SearchInterval, getMax, METH_NOARGS),
          DECLARE_METHOD(t_SearchInterval, getMin, METH_NOARGS),
          DECLARE_METHOD(t_SearchInterval, getStartValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SearchInterval)[] = {
          { Py_tp_methods, t_SearchInterval__methods_ },
          { Py_tp_init, (void *) t_SearchInterval_init_ },
          { Py_tp_getset, t_SearchInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SearchInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SearchInterval, t_SearchInterval, SearchInterval);

        void t_SearchInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(SearchInterval), &PY_TYPE_DEF(SearchInterval), module, "SearchInterval", 0);
        }

        void t_SearchInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "class_", make_descriptor(SearchInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "wrapfn_", make_descriptor(t_SearchInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SearchInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SearchInterval::initializeClass, 1)))
            return NULL;
          return t_SearchInterval::wrap_Object(SearchInterval(((t_SearchInterval *) arg)->object.this$));
        }
        static PyObject *t_SearchInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SearchInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SearchInterval_init_(t_SearchInterval *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SearchInterval object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SearchInterval(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              SearchInterval object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = SearchInterval(a0, a1, a2));
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

        static PyObject *t_SearchInterval_getMax(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_getMin(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_getStartValue(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_get__max(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SearchInterval_get__min(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SearchInterval_get__startValue(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *SimpleRegression::class$ = NULL;
        jmethodID *SimpleRegression::mids$ = NULL;
        bool SimpleRegression::live$ = false;

        jclass SimpleRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/SimpleRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_addData_edb361bfdd1ad9ae] = env->getMethodID(cls, "addData", "([[D)V");
            mids$[mid_addData_ab23f4ae0fb33968] = env->getMethodID(cls, "addData", "(DD)V");
            mids$[mid_addObservation_3682f2e0c8382fe5] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_122207bd161e9ddc] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_append_e6378b3609f57f95] = env->getMethodID(cls, "append", "(Lorg/hipparchus/stat/regression/SimpleRegression;)V");
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getIntercept_557b8123390d8d0c] = env->getMethodID(cls, "getIntercept", "()D");
            mids$[mid_getInterceptStdErr_557b8123390d8d0c] = env->getMethodID(cls, "getInterceptStdErr", "()D");
            mids$[mid_getMeanSquareError_557b8123390d8d0c] = env->getMethodID(cls, "getMeanSquareError", "()D");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getR_557b8123390d8d0c] = env->getMethodID(cls, "getR", "()D");
            mids$[mid_getRSquare_557b8123390d8d0c] = env->getMethodID(cls, "getRSquare", "()D");
            mids$[mid_getRegressionSumSquares_557b8123390d8d0c] = env->getMethodID(cls, "getRegressionSumSquares", "()D");
            mids$[mid_getSignificance_557b8123390d8d0c] = env->getMethodID(cls, "getSignificance", "()D");
            mids$[mid_getSlope_557b8123390d8d0c] = env->getMethodID(cls, "getSlope", "()D");
            mids$[mid_getSlopeConfidenceInterval_557b8123390d8d0c] = env->getMethodID(cls, "getSlopeConfidenceInterval", "()D");
            mids$[mid_getSlopeConfidenceInterval_7e960cd6eee376d8] = env->getMethodID(cls, "getSlopeConfidenceInterval", "(D)D");
            mids$[mid_getSlopeStdErr_557b8123390d8d0c] = env->getMethodID(cls, "getSlopeStdErr", "()D");
            mids$[mid_getSumOfCrossProducts_557b8123390d8d0c] = env->getMethodID(cls, "getSumOfCrossProducts", "()D");
            mids$[mid_getSumSquaredErrors_557b8123390d8d0c] = env->getMethodID(cls, "getSumSquaredErrors", "()D");
            mids$[mid_getTotalSumSquares_557b8123390d8d0c] = env->getMethodID(cls, "getTotalSumSquares", "()D");
            mids$[mid_getXSumSquares_557b8123390d8d0c] = env->getMethodID(cls, "getXSumSquares", "()D");
            mids$[mid_hasIntercept_89b302893bdbe1f1] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_predict_7e960cd6eee376d8] = env->getMethodID(cls, "predict", "(D)D");
            mids$[mid_regress_2f78c8eefa6215e0] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_bfd11e26913ff479] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_removeData_edb361bfdd1ad9ae] = env->getMethodID(cls, "removeData", "([[D)V");
            mids$[mid_removeData_ab23f4ae0fb33968] = env->getMethodID(cls, "removeData", "(DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleRegression::SimpleRegression() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        SimpleRegression::SimpleRegression(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

        void SimpleRegression::addData(const JArray< JArray< jdouble > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addData_edb361bfdd1ad9ae], a0.this$);
        }

        void SimpleRegression::addData(jdouble a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addData_ab23f4ae0fb33968], a0, a1);
        }

        void SimpleRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_3682f2e0c8382fe5], a0.this$, a1);
        }

        void SimpleRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_122207bd161e9ddc], a0.this$, a1.this$);
        }

        void SimpleRegression::append(const SimpleRegression & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_append_e6378b3609f57f95], a0.this$);
        }

        void SimpleRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        jdouble SimpleRegression::getIntercept() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIntercept_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getInterceptStdErr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInterceptStdErr_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getMeanSquareError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMeanSquareError_557b8123390d8d0c]);
        }

        jlong SimpleRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        jdouble SimpleRegression::getR() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getR_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getRSquare() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRSquare_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getRegressionSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRegressionSumSquares_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getSignificance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSignificance_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getSlope() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlope_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getSlopeConfidenceInterval() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeConfidenceInterval_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getSlopeConfidenceInterval(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeConfidenceInterval_7e960cd6eee376d8], a0);
        }

        jdouble SimpleRegression::getSlopeStdErr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeStdErr_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getSumOfCrossProducts() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfCrossProducts_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getSumSquaredErrors() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumSquaredErrors_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getTotalSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalSumSquares_557b8123390d8d0c]);
        }

        jdouble SimpleRegression::getXSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXSumSquares_557b8123390d8d0c]);
        }

        jboolean SimpleRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_89b302893bdbe1f1]);
        }

        jdouble SimpleRegression::predict(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_predict_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::stat::regression::RegressionResults SimpleRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_2f78c8eefa6215e0]));
        }

        ::org::hipparchus::stat::regression::RegressionResults SimpleRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_bfd11e26913ff479], a0.this$));
        }

        void SimpleRegression::removeData(const JArray< JArray< jdouble > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_removeData_edb361bfdd1ad9ae], a0.this$);
        }

        void SimpleRegression::removeData(jdouble a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_removeData_ab23f4ae0fb33968], a0, a1);
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
      namespace regression {
        static PyObject *t_SimpleRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpleRegression_init_(t_SimpleRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleRegression_addData(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_addObservation(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_addObservations(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_append(t_SimpleRegression *self, PyObject *arg);
        static PyObject *t_SimpleRegression_clear(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getIntercept(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getInterceptStdErr(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getMeanSquareError(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getN(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getR(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getRSquare(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getRegressionSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSignificance(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSlope(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSlopeConfidenceInterval(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_getSlopeStdErr(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSumOfCrossProducts(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSumSquaredErrors(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getTotalSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getXSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_hasIntercept(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_predict(t_SimpleRegression *self, PyObject *arg);
        static PyObject *t_SimpleRegression_regress(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_removeData(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_get__intercept(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__interceptStdErr(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__meanSquareError(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__n(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__r(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__rSquare(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__regressionSumSquares(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__significance(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slope(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slopeConfidenceInterval(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slopeStdErr(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__sumOfCrossProducts(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__sumSquaredErrors(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__totalSumSquares(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__xSumSquares(t_SimpleRegression *self, void *data);
        static PyGetSetDef t_SimpleRegression__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleRegression, intercept),
          DECLARE_GET_FIELD(t_SimpleRegression, interceptStdErr),
          DECLARE_GET_FIELD(t_SimpleRegression, meanSquareError),
          DECLARE_GET_FIELD(t_SimpleRegression, n),
          DECLARE_GET_FIELD(t_SimpleRegression, r),
          DECLARE_GET_FIELD(t_SimpleRegression, rSquare),
          DECLARE_GET_FIELD(t_SimpleRegression, regressionSumSquares),
          DECLARE_GET_FIELD(t_SimpleRegression, significance),
          DECLARE_GET_FIELD(t_SimpleRegression, slope),
          DECLARE_GET_FIELD(t_SimpleRegression, slopeConfidenceInterval),
          DECLARE_GET_FIELD(t_SimpleRegression, slopeStdErr),
          DECLARE_GET_FIELD(t_SimpleRegression, sumOfCrossProducts),
          DECLARE_GET_FIELD(t_SimpleRegression, sumSquaredErrors),
          DECLARE_GET_FIELD(t_SimpleRegression, totalSumSquares),
          DECLARE_GET_FIELD(t_SimpleRegression, xSumSquares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleRegression__methods_[] = {
          DECLARE_METHOD(t_SimpleRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleRegression, addData, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, append, METH_O),
          DECLARE_METHOD(t_SimpleRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getIntercept, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getInterceptStdErr, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getMeanSquareError, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getR, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getRSquare, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getRegressionSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSignificance, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlope, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlopeConfidenceInterval, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlopeStdErr, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSumOfCrossProducts, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSumSquaredErrors, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getTotalSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getXSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, predict, METH_O),
          DECLARE_METHOD(t_SimpleRegression, regress, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, removeData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleRegression)[] = {
          { Py_tp_methods, t_SimpleRegression__methods_ },
          { Py_tp_init, (void *) t_SimpleRegression_init_ },
          { Py_tp_getset, t_SimpleRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleRegression, t_SimpleRegression, SimpleRegression);

        void t_SimpleRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleRegression), &PY_TYPE_DEF(SimpleRegression), module, "SimpleRegression", 0);
        }

        void t_SimpleRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "class_", make_descriptor(SimpleRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "wrapfn_", make_descriptor(t_SimpleRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleRegression::initializeClass, 1)))
            return NULL;
          return t_SimpleRegression::wrap_Object(SimpleRegression(((t_SimpleRegression *) arg)->object.this$));
        }
        static PyObject *t_SimpleRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpleRegression_init_(t_SimpleRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimpleRegression object((jobject) NULL);

              INT_CALL(object = SimpleRegression());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              SimpleRegression object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = SimpleRegression(a0));
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

        static PyObject *t_SimpleRegression_addData(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(self->object.addData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.addData(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addData", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_addObservation(t_SimpleRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_addObservations(t_SimpleRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_append(t_SimpleRegression *self, PyObject *arg)
        {
          SimpleRegression a0((jobject) NULL);

          if (!parseArg(arg, "k", SimpleRegression::initializeClass, &a0))
          {
            OBJ_CALL(self->object.append(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "append", arg);
          return NULL;
        }

        static PyObject *t_SimpleRegression_clear(t_SimpleRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_SimpleRegression_getIntercept(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIntercept());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getInterceptStdErr(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInterceptStdErr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getMeanSquareError(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getN(t_SimpleRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_SimpleRegression_getR(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getR());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getRSquare(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRSquare());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getRegressionSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSignificance(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSignificance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSlope(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSlope());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSlopeConfidenceInterval(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSlopeConfidenceInterval());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSlopeConfidenceInterval(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSlopeConfidenceInterval", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_getSlopeStdErr(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSlopeStdErr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSumOfCrossProducts(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfCrossProducts());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSumSquaredErrors(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumSquaredErrors());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getTotalSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getXSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_hasIntercept(t_SimpleRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SimpleRegression_predict(t_SimpleRegression *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.predict(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "predict", arg);
          return NULL;
        }

        static PyObject *t_SimpleRegression_regress(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_removeData(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(self->object.removeData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.removeData(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "removeData", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_get__intercept(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIntercept());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__interceptStdErr(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInterceptStdErr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__meanSquareError(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__n(t_SimpleRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_SimpleRegression_get__r(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getR());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__rSquare(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRSquare());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__regressionSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__significance(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSignificance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slope(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlope());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slopeConfidenceInterval(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlopeConfidenceInterval());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slopeStdErr(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlopeStdErr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__sumOfCrossProducts(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfCrossProducts());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__sumSquaredErrors(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumSquaredErrors());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__totalSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__xSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXSumSquares());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/util/List.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *Complex::class$ = NULL;
      jmethodID *Complex::mids$ = NULL;
      bool Complex::live$ = false;
      Complex *Complex::I = NULL;
      Complex *Complex::INF = NULL;
      Complex *Complex::MINUS_I = NULL;
      Complex *Complex::MINUS_ONE = NULL;
      Complex *Complex::NaN = NULL;
      Complex *Complex::ONE = NULL;
      Complex *Complex::PI = NULL;
      Complex *Complex::ZERO = NULL;

      jclass Complex::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/Complex");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_abs_921a2f30ecc499e5] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_acos_921a2f30ecc499e5] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_acosh_921a2f30ecc499e5] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_add_4e63ff3bda7c322e] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_add_66023ddbfb4db1a7] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_asin_921a2f30ecc499e5] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_asinh_921a2f30ecc499e5] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_atan_921a2f30ecc499e5] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_atan2_4e63ff3bda7c322e] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_atanh_921a2f30ecc499e5] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_cbrt_921a2f30ecc499e5] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_ceil_921a2f30ecc499e5] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_compareTo_e8a4259e80bac3dc] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/complex/Complex;)I");
          mids$[mid_conjugate_921a2f30ecc499e5] = env->getMethodID(cls, "conjugate", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_copySign_4e63ff3bda7c322e] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_copySign_66023ddbfb4db1a7] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_cos_921a2f30ecc499e5] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_cosh_921a2f30ecc499e5] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_divide_4e63ff3bda7c322e] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_divide_66023ddbfb4db1a7] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_1c8187c7f90e54f3] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Z");
          mids$[mid_equals_c9e48b77087b3986] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;D)Z");
          mids$[mid_equals_f5292f716bdfed1f] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;I)Z");
          mids$[mid_equalsWithRelativeTolerance_c9e48b77087b3986] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;D)Z");
          mids$[mid_exp_921a2f30ecc499e5] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_expm1_921a2f30ecc499e5] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_floor_921a2f30ecc499e5] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getArgument_557b8123390d8d0c] = env->getMethodID(cls, "getArgument", "()D");
          mids$[mid_getField_d1dc7459146fba31] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/complex/ComplexField;");
          mids$[mid_getImaginary_557b8123390d8d0c] = env->getMethodID(cls, "getImaginary", "()D");
          mids$[mid_getImaginaryPart_557b8123390d8d0c] = env->getMethodID(cls, "getImaginaryPart", "()D");
          mids$[mid_getPi_921a2f30ecc499e5] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getRealPart_557b8123390d8d0c] = env->getMethodID(cls, "getRealPart", "()D");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_4e63ff3bda7c322e] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isMathematicalInteger_89b302893bdbe1f1] = env->getMethodID(cls, "isMathematicalInteger", "()Z");
          mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isReal_89b302893bdbe1f1] = env->getMethodID(cls, "isReal", "()Z");
          mids$[mid_isZero_89b302893bdbe1f1] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_5622c83424d0d8db] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_2c5ed9ccbaf18fdd] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_7d14c7027947a4b0] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_0fc0afd3fc520a12] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_15a046d16a2afc6b] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_d45e1b090a76eb94] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_3459ff13f45baf14] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_077768f5b5b6d641] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_log_921a2f30ecc499e5] = env->getMethodID(cls, "log", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_log10_921a2f30ecc499e5] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_log1p_921a2f30ecc499e5] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_4e63ff3bda7c322e] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_66023ddbfb4db1a7] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_49c3af23f72848c1] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiplyMinusI_921a2f30ecc499e5] = env->getMethodID(cls, "multiplyMinusI", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiplyPlusI_921a2f30ecc499e5] = env->getMethodID(cls, "multiplyPlusI", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_negate_921a2f30ecc499e5] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_newInstance_66023ddbfb4db1a7] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_norm_557b8123390d8d0c] = env->getMethodID(cls, "norm", "()D");
          mids$[mid_nthRoot_da0a0ad213c4fa7f] = env->getMethodID(cls, "nthRoot", "(I)Ljava/util/List;");
          mids$[mid_pow_4e63ff3bda7c322e] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_pow_66023ddbfb4db1a7] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_pow_49c3af23f72848c1] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_reciprocal_921a2f30ecc499e5] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_remainder_4e63ff3bda7c322e] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_remainder_66023ddbfb4db1a7] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_rint_921a2f30ecc499e5] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_rootN_49c3af23f72848c1] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_scalb_49c3af23f72848c1] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_sign_921a2f30ecc499e5] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sin_921a2f30ecc499e5] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_921a2f30ecc499e5] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_921a2f30ecc499e5] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sqrt1z_921a2f30ecc499e5] = env->getMethodID(cls, "sqrt1z", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_subtract_4e63ff3bda7c322e] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_subtract_66023ddbfb4db1a7] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_tan_921a2f30ecc499e5] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_tanh_921a2f30ecc499e5] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toDegrees_921a2f30ecc499e5] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toRadians_921a2f30ecc499e5] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_921a2f30ecc499e5] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_valueOf_66023ddbfb4db1a7] = env->getStaticMethodID(cls, "valueOf", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_valueOf_00e4ffdd403af412] = env->getStaticMethodID(cls, "valueOf", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_createComplex_00e4ffdd403af412] = env->getMethodID(cls, "createComplex", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_readResolve_e661fe3ba2fafb22] = env->getMethodID(cls, "readResolve", "()Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          I = new Complex(env->getStaticObjectField(cls, "I", "Lorg/hipparchus/complex/Complex;"));
          INF = new Complex(env->getStaticObjectField(cls, "INF", "Lorg/hipparchus/complex/Complex;"));
          MINUS_I = new Complex(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/complex/Complex;"));
          MINUS_ONE = new Complex(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/complex/Complex;"));
          NaN = new Complex(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/complex/Complex;"));
          ONE = new Complex(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/complex/Complex;"));
          PI = new Complex(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/complex/Complex;"));
          ZERO = new Complex(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/complex/Complex;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Complex::Complex(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

      Complex::Complex(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

      Complex Complex::abs() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_abs_921a2f30ecc499e5]));
      }

      Complex Complex::acos() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_acos_921a2f30ecc499e5]));
      }

      Complex Complex::acosh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_acosh_921a2f30ecc499e5]));
      }

      Complex Complex::add(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_add_4e63ff3bda7c322e], a0.this$));
      }

      Complex Complex::add(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_add_66023ddbfb4db1a7], a0));
      }

      Complex Complex::asin() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_asin_921a2f30ecc499e5]));
      }

      Complex Complex::asinh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_asinh_921a2f30ecc499e5]));
      }

      Complex Complex::atan() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atan_921a2f30ecc499e5]));
      }

      Complex Complex::atan2(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atan2_4e63ff3bda7c322e], a0.this$));
      }

      Complex Complex::atanh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atanh_921a2f30ecc499e5]));
      }

      Complex Complex::cbrt() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cbrt_921a2f30ecc499e5]));
      }

      Complex Complex::ceil() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_ceil_921a2f30ecc499e5]));
      }

      jint Complex::compareTo(const Complex & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_e8a4259e80bac3dc], a0.this$);
      }

      Complex Complex::conjugate() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_conjugate_921a2f30ecc499e5]));
      }

      Complex Complex::copySign(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_copySign_4e63ff3bda7c322e], a0.this$));
      }

      Complex Complex::copySign(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_copySign_66023ddbfb4db1a7], a0));
      }

      Complex Complex::cos() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cos_921a2f30ecc499e5]));
      }

      Complex Complex::cosh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cosh_921a2f30ecc499e5]));
      }

      Complex Complex::divide(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_divide_4e63ff3bda7c322e], a0.this$));
      }

      Complex Complex::divide(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_divide_66023ddbfb4db1a7], a0));
      }

      jboolean Complex::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_1c8187c7f90e54f3], a0.this$, a1.this$);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_c9e48b77087b3986], a0.this$, a1.this$, a2);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_f5292f716bdfed1f], a0.this$, a1.this$, a2);
      }

      jboolean Complex::equalsWithRelativeTolerance(const Complex & a0, const Complex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_c9e48b77087b3986], a0.this$, a1.this$, a2);
      }

      Complex Complex::exp() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_exp_921a2f30ecc499e5]));
      }

      Complex Complex::expm1() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_expm1_921a2f30ecc499e5]));
      }

      Complex Complex::floor() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_floor_921a2f30ecc499e5]));
      }

      jdouble Complex::getArgument() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getArgument_557b8123390d8d0c]);
      }

      ::org::hipparchus::complex::ComplexField Complex::getField() const
      {
        return ::org::hipparchus::complex::ComplexField(env->callObjectMethod(this$, mids$[mid_getField_d1dc7459146fba31]));
      }

      jdouble Complex::getImaginary() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_557b8123390d8d0c]);
      }

      jdouble Complex::getImaginaryPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginaryPart_557b8123390d8d0c]);
      }

      Complex Complex::getPi() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_getPi_921a2f30ecc499e5]));
      }

      jdouble Complex::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
      }

      jdouble Complex::getRealPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRealPart_557b8123390d8d0c]);
      }

      jint Complex::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      Complex Complex::hypot(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_hypot_4e63ff3bda7c322e], a0.this$));
      }

      jboolean Complex::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
      }

      jboolean Complex::isMathematicalInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isMathematicalInteger_89b302893bdbe1f1]);
      }

      jboolean Complex::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
      }

      jboolean Complex::isReal() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isReal_89b302893bdbe1f1]);
      }

      jboolean Complex::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_89b302893bdbe1f1]);
      }

      Complex Complex::linearCombination(const JArray< jdouble > & a0, const JArray< Complex > & a1) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_5622c83424d0d8db], a0.this$, a1.this$));
      }

      Complex Complex::linearCombination(const JArray< Complex > & a0, const JArray< Complex > & a1) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_2c5ed9ccbaf18fdd], a0.this$, a1.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_7d14c7027947a4b0], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_0fc0afd3fc520a12], a0, a1.this$, a2, a3.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3, const Complex & a4, const Complex & a5) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_15a046d16a2afc6b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3, jdouble a4, const Complex & a5) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_d45e1b090a76eb94], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3, const Complex & a4, const Complex & a5, const Complex & a6, const Complex & a7) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_3459ff13f45baf14], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3, jdouble a4, const Complex & a5, jdouble a6, const Complex & a7) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_077768f5b5b6d641], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Complex Complex::log() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log_921a2f30ecc499e5]));
      }

      Complex Complex::log10() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log10_921a2f30ecc499e5]));
      }

      Complex Complex::log1p() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log1p_921a2f30ecc499e5]));
      }

      Complex Complex::multiply(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_4e63ff3bda7c322e], a0.this$));
      }

      Complex Complex::multiply(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_66023ddbfb4db1a7], a0));
      }

      Complex Complex::multiply(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_49c3af23f72848c1], a0));
      }

      Complex Complex::multiplyMinusI() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiplyMinusI_921a2f30ecc499e5]));
      }

      Complex Complex::multiplyPlusI() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiplyPlusI_921a2f30ecc499e5]));
      }

      Complex Complex::negate() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_negate_921a2f30ecc499e5]));
      }

      Complex Complex::newInstance(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_newInstance_66023ddbfb4db1a7], a0));
      }

      jdouble Complex::norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_norm_557b8123390d8d0c]);
      }

      ::java::util::List Complex::nthRoot(jint a0) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_nthRoot_da0a0ad213c4fa7f], a0));
      }

      Complex Complex::pow(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_4e63ff3bda7c322e], a0.this$));
      }

      Complex Complex::pow(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_66023ddbfb4db1a7], a0));
      }

      Complex Complex::pow(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_49c3af23f72848c1], a0));
      }

      Complex Complex::reciprocal() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_reciprocal_921a2f30ecc499e5]));
      }

      Complex Complex::remainder(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_remainder_4e63ff3bda7c322e], a0.this$));
      }

      Complex Complex::remainder(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_remainder_66023ddbfb4db1a7], a0));
      }

      Complex Complex::rint() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_rint_921a2f30ecc499e5]));
      }

      Complex Complex::rootN(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_rootN_49c3af23f72848c1], a0));
      }

      Complex Complex::scalb(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_scalb_49c3af23f72848c1], a0));
      }

      Complex Complex::sign() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sign_921a2f30ecc499e5]));
      }

      Complex Complex::sin() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sin_921a2f30ecc499e5]));
      }

      ::org::hipparchus::util::FieldSinCos Complex::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
      }

      Complex Complex::sinh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sinh_921a2f30ecc499e5]));
      }

      ::org::hipparchus::util::FieldSinhCosh Complex::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
      }

      Complex Complex::sqrt() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sqrt_921a2f30ecc499e5]));
      }

      Complex Complex::sqrt1z() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sqrt1z_921a2f30ecc499e5]));
      }

      Complex Complex::subtract(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_subtract_4e63ff3bda7c322e], a0.this$));
      }

      Complex Complex::subtract(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_subtract_66023ddbfb4db1a7], a0));
      }

      Complex Complex::tan() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_tan_921a2f30ecc499e5]));
      }

      Complex Complex::tanh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_tanh_921a2f30ecc499e5]));
      }

      Complex Complex::toDegrees() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_toDegrees_921a2f30ecc499e5]));
      }

      Complex Complex::toRadians() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_toRadians_921a2f30ecc499e5]));
      }

      ::java::lang::String Complex::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      Complex Complex::ulp() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_ulp_921a2f30ecc499e5]));
      }

      Complex Complex::valueOf(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Complex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_66023ddbfb4db1a7], a0));
      }

      Complex Complex::valueOf(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Complex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_00e4ffdd403af412], a0, a1));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_Complex_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Complex_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Complex_init_(t_Complex *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Complex_abs(t_Complex *self);
      static PyObject *t_Complex_acos(t_Complex *self);
      static PyObject *t_Complex_acosh(t_Complex *self);
      static PyObject *t_Complex_add(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_asin(t_Complex *self);
      static PyObject *t_Complex_asinh(t_Complex *self);
      static PyObject *t_Complex_atan(t_Complex *self);
      static PyObject *t_Complex_atan2(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_atanh(t_Complex *self);
      static PyObject *t_Complex_cbrt(t_Complex *self);
      static PyObject *t_Complex_ceil(t_Complex *self);
      static PyObject *t_Complex_compareTo(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_conjugate(t_Complex *self);
      static PyObject *t_Complex_copySign(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_cos(t_Complex *self);
      static PyObject *t_Complex_cosh(t_Complex *self);
      static PyObject *t_Complex_divide(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_equals(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_equals_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_exp(t_Complex *self);
      static PyObject *t_Complex_expm1(t_Complex *self);
      static PyObject *t_Complex_floor(t_Complex *self);
      static PyObject *t_Complex_getArgument(t_Complex *self);
      static PyObject *t_Complex_getField(t_Complex *self);
      static PyObject *t_Complex_getImaginary(t_Complex *self);
      static PyObject *t_Complex_getImaginaryPart(t_Complex *self);
      static PyObject *t_Complex_getPi(t_Complex *self);
      static PyObject *t_Complex_getReal(t_Complex *self);
      static PyObject *t_Complex_getRealPart(t_Complex *self);
      static PyObject *t_Complex_hashCode(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_hypot(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_isInfinite(t_Complex *self);
      static PyObject *t_Complex_isMathematicalInteger(t_Complex *self);
      static PyObject *t_Complex_isNaN(t_Complex *self);
      static PyObject *t_Complex_isReal(t_Complex *self);
      static PyObject *t_Complex_isZero(t_Complex *self);
      static PyObject *t_Complex_linearCombination(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_log(t_Complex *self);
      static PyObject *t_Complex_log10(t_Complex *self);
      static PyObject *t_Complex_log1p(t_Complex *self);
      static PyObject *t_Complex_multiply(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_multiplyMinusI(t_Complex *self);
      static PyObject *t_Complex_multiplyPlusI(t_Complex *self);
      static PyObject *t_Complex_negate(t_Complex *self);
      static PyObject *t_Complex_newInstance(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_norm(t_Complex *self);
      static PyObject *t_Complex_nthRoot(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_pow(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_reciprocal(t_Complex *self);
      static PyObject *t_Complex_remainder(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_rint(t_Complex *self);
      static PyObject *t_Complex_rootN(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_scalb(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_sign(t_Complex *self);
      static PyObject *t_Complex_sin(t_Complex *self);
      static PyObject *t_Complex_sinCos(t_Complex *self);
      static PyObject *t_Complex_sinh(t_Complex *self);
      static PyObject *t_Complex_sinhCosh(t_Complex *self);
      static PyObject *t_Complex_sqrt(t_Complex *self);
      static PyObject *t_Complex_sqrt1z(t_Complex *self);
      static PyObject *t_Complex_subtract(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_tan(t_Complex *self);
      static PyObject *t_Complex_tanh(t_Complex *self);
      static PyObject *t_Complex_toDegrees(t_Complex *self);
      static PyObject *t_Complex_toRadians(t_Complex *self);
      static PyObject *t_Complex_toString(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_ulp(t_Complex *self);
      static PyObject *t_Complex_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_get__argument(t_Complex *self, void *data);
      static PyObject *t_Complex_get__field(t_Complex *self, void *data);
      static PyObject *t_Complex_get__imaginary(t_Complex *self, void *data);
      static PyObject *t_Complex_get__imaginaryPart(t_Complex *self, void *data);
      static PyObject *t_Complex_get__infinite(t_Complex *self, void *data);
      static PyObject *t_Complex_get__mathematicalInteger(t_Complex *self, void *data);
      static PyObject *t_Complex_get__naN(t_Complex *self, void *data);
      static PyObject *t_Complex_get__pi(t_Complex *self, void *data);
      static PyObject *t_Complex_get__real(t_Complex *self, void *data);
      static PyObject *t_Complex_get__realPart(t_Complex *self, void *data);
      static PyObject *t_Complex_get__zero(t_Complex *self, void *data);
      static PyGetSetDef t_Complex__fields_[] = {
        DECLARE_GET_FIELD(t_Complex, argument),
        DECLARE_GET_FIELD(t_Complex, field),
        DECLARE_GET_FIELD(t_Complex, imaginary),
        DECLARE_GET_FIELD(t_Complex, imaginaryPart),
        DECLARE_GET_FIELD(t_Complex, infinite),
        DECLARE_GET_FIELD(t_Complex, mathematicalInteger),
        DECLARE_GET_FIELD(t_Complex, naN),
        DECLARE_GET_FIELD(t_Complex, pi),
        DECLARE_GET_FIELD(t_Complex, real),
        DECLARE_GET_FIELD(t_Complex, realPart),
        DECLARE_GET_FIELD(t_Complex, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Complex__methods_[] = {
        DECLARE_METHOD(t_Complex, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Complex, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Complex, abs, METH_NOARGS),
        DECLARE_METHOD(t_Complex, acos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, add, METH_VARARGS),
        DECLARE_METHOD(t_Complex, asin, METH_NOARGS),
        DECLARE_METHOD(t_Complex, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, atan, METH_NOARGS),
        DECLARE_METHOD(t_Complex, atan2, METH_O),
        DECLARE_METHOD(t_Complex, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Complex, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Complex, compareTo, METH_O),
        DECLARE_METHOD(t_Complex, conjugate, METH_NOARGS),
        DECLARE_METHOD(t_Complex, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Complex, cos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, divide, METH_VARARGS),
        DECLARE_METHOD(t_Complex, equals, METH_VARARGS),
        DECLARE_METHOD(t_Complex, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Complex, equals_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Complex, exp, METH_NOARGS),
        DECLARE_METHOD(t_Complex, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Complex, floor, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getArgument, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getField, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getImaginary, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getImaginaryPart, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getRealPart, METH_NOARGS),
        DECLARE_METHOD(t_Complex, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Complex, hypot, METH_O),
        DECLARE_METHOD(t_Complex, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isMathematicalInteger, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isReal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Complex, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Complex, log, METH_NOARGS),
        DECLARE_METHOD(t_Complex, log10, METH_NOARGS),
        DECLARE_METHOD(t_Complex, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Complex, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Complex, multiplyMinusI, METH_NOARGS),
        DECLARE_METHOD(t_Complex, multiplyPlusI, METH_NOARGS),
        DECLARE_METHOD(t_Complex, negate, METH_NOARGS),
        DECLARE_METHOD(t_Complex, newInstance, METH_O),
        DECLARE_METHOD(t_Complex, norm, METH_NOARGS),
        DECLARE_METHOD(t_Complex, nthRoot, METH_O),
        DECLARE_METHOD(t_Complex, pow, METH_VARARGS),
        DECLARE_METHOD(t_Complex, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Complex, rint, METH_NOARGS),
        DECLARE_METHOD(t_Complex, rootN, METH_O),
        DECLARE_METHOD(t_Complex, scalb, METH_O),
        DECLARE_METHOD(t_Complex, sign, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sin, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sqrt1z, METH_NOARGS),
        DECLARE_METHOD(t_Complex, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Complex, tan, METH_NOARGS),
        DECLARE_METHOD(t_Complex, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toString, METH_VARARGS),
        DECLARE_METHOD(t_Complex, ulp, METH_NOARGS),
        DECLARE_METHOD(t_Complex, valueOf, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Complex)[] = {
        { Py_tp_methods, t_Complex__methods_ },
        { Py_tp_init, (void *) t_Complex_init_ },
        { Py_tp_getset, t_Complex__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Complex)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Complex, t_Complex, Complex);

      void t_Complex::install(PyObject *module)
      {
        installType(&PY_TYPE(Complex), &PY_TYPE_DEF(Complex), module, "Complex", 0);
      }

      void t_Complex::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "class_", make_descriptor(Complex::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "wrapfn_", make_descriptor(t_Complex::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "boxfn_", make_descriptor(boxObject));
        env->getClass(Complex::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "I", make_descriptor(t_Complex::wrap_Object(*Complex::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "INF", make_descriptor(t_Complex::wrap_Object(*Complex::INF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "MINUS_I", make_descriptor(t_Complex::wrap_Object(*Complex::MINUS_I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "MINUS_ONE", make_descriptor(t_Complex::wrap_Object(*Complex::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "NaN", make_descriptor(t_Complex::wrap_Object(*Complex::NaN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "ONE", make_descriptor(t_Complex::wrap_Object(*Complex::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "PI", make_descriptor(t_Complex::wrap_Object(*Complex::PI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "ZERO", make_descriptor(t_Complex::wrap_Object(*Complex::ZERO)));
      }

      static PyObject *t_Complex_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Complex::initializeClass, 1)))
          return NULL;
        return t_Complex::wrap_Object(Complex(((t_Complex *) arg)->object.this$));
      }
      static PyObject *t_Complex_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Complex::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Complex_init_(t_Complex *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Complex object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = Complex(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            Complex object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Complex(a0, a1));
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

      static PyObject *t_Complex_abs(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_acos(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_acosh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_add(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Complex_asin(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_asinh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_atan(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_atan2(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        Complex result((jobject) NULL);

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Complex_atanh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_cbrt(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_ceil(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_compareTo(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Complex_conjugate(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.conjugate());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_copySign(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Complex_cos(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_cosh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_divide(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Complex_equals(t_Complex *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Complex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        Complex a0((jobject) NULL);
        Complex a1((jobject) NULL);
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "kkD", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Complex::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_Complex_equals_(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kk", Complex::initializeClass, Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "kkD", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jint a2;
            jboolean result;

            if (!parseArgs(args, "kkI", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equals_", args);
        return NULL;
      }

      static PyObject *t_Complex_exp(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_expm1(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_floor(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_getArgument(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getArgument());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getField(t_Complex *self)
      {
        ::org::hipparchus::complex::ComplexField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::complex::t_ComplexField::wrap_Object(result);
      }

      static PyObject *t_Complex_getImaginary(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getImaginary());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getImaginaryPart(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getImaginaryPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getPi(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_getReal(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getRealPart(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRealPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_hashCode(t_Complex *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Complex_hypot(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        Complex result((jobject) NULL);

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Complex_isInfinite(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isMathematicalInteger(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isNaN(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isReal(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isReal());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isZero(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_linearCombination(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Complex > a1((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            JArray< Complex > a0((jobject) NULL);
            JArray< Complex > a1((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Complex::initializeClass, Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex a4((jobject) NULL);
            Complex a5((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            jdouble a4;
            Complex a5((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex a4((jobject) NULL);
            Complex a5((jobject) NULL);
            Complex a6((jobject) NULL);
            Complex a7((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            jdouble a4;
            Complex a5((jobject) NULL);
            jdouble a6;
            Complex a7((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Complex_log(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_log10(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_log1p(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_multiply(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Complex_multiplyMinusI(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyMinusI());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_multiplyPlusI(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyPlusI());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_negate(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_newInstance(t_Complex *self, PyObject *arg)
      {
        jdouble a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Complex_norm(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.norm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_nthRoot(t_Complex *self, PyObject *arg)
      {
        jint a0;
        ::java::util::List result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nthRoot(a0));
          return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "nthRoot", arg);
        return NULL;
      }

      static PyObject *t_Complex_pow(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Complex_reciprocal(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_remainder(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Complex_rint(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_rootN(t_Complex *self, PyObject *arg)
      {
        jint a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Complex_scalb(t_Complex *self, PyObject *arg)
      {
        jint a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Complex_sign(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sin(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sinCos(t_Complex *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_Complex_sinh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sinhCosh(t_Complex *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_Complex_sqrt(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sqrt1z(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt1z());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_subtract(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Complex_tan(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_tanh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toDegrees(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toRadians(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toString(t_Complex *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Complex_ulp(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_valueOf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::valueOf(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::valueOf(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "valueOf", args);
        return NULL;
      }

      static PyObject *t_Complex_get__argument(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getArgument());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__field(t_Complex *self, void *data)
      {
        ::org::hipparchus::complex::ComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::complex::t_ComplexField::wrap_Object(value);
      }

      static PyObject *t_Complex_get__imaginary(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getImaginary());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__imaginaryPart(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getImaginaryPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__infinite(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__mathematicalInteger(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__naN(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__pi(t_Complex *self, void *data)
      {
        Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Complex::wrap_Object(value);
      }

      static PyObject *t_Complex_get__real(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__realPart(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRealPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__zero(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RiccatiEquationSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RiccatiEquationSolver::class$ = NULL;
      jmethodID *RiccatiEquationSolver::mids$ = NULL;
      bool RiccatiEquationSolver::live$ = false;

      jclass RiccatiEquationSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RiccatiEquationSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getK_70a207fcbc031df2] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_70a207fcbc031df2] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolver::getK() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getK_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolver::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_70a207fcbc031df2]));
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
      static PyObject *t_RiccatiEquationSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolver_getK(t_RiccatiEquationSolver *self);
      static PyObject *t_RiccatiEquationSolver_getP(t_RiccatiEquationSolver *self);
      static PyObject *t_RiccatiEquationSolver_get__k(t_RiccatiEquationSolver *self, void *data);
      static PyObject *t_RiccatiEquationSolver_get__p(t_RiccatiEquationSolver *self, void *data);
      static PyGetSetDef t_RiccatiEquationSolver__fields_[] = {
        DECLARE_GET_FIELD(t_RiccatiEquationSolver, k),
        DECLARE_GET_FIELD(t_RiccatiEquationSolver, p),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RiccatiEquationSolver__methods_[] = {
        DECLARE_METHOD(t_RiccatiEquationSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolver, getK, METH_NOARGS),
        DECLARE_METHOD(t_RiccatiEquationSolver, getP, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RiccatiEquationSolver)[] = {
        { Py_tp_methods, t_RiccatiEquationSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RiccatiEquationSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RiccatiEquationSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RiccatiEquationSolver, t_RiccatiEquationSolver, RiccatiEquationSolver);

      void t_RiccatiEquationSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(RiccatiEquationSolver), &PY_TYPE_DEF(RiccatiEquationSolver), module, "RiccatiEquationSolver", 0);
      }

      void t_RiccatiEquationSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "class_", make_descriptor(RiccatiEquationSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "wrapfn_", make_descriptor(t_RiccatiEquationSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RiccatiEquationSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RiccatiEquationSolver::initializeClass, 1)))
          return NULL;
        return t_RiccatiEquationSolver::wrap_Object(RiccatiEquationSolver(((t_RiccatiEquationSolver *) arg)->object.this$));
      }
      static PyObject *t_RiccatiEquationSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RiccatiEquationSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RiccatiEquationSolver_getK(t_RiccatiEquationSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolver_getP(t_RiccatiEquationSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolver_get__k(t_RiccatiEquationSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RiccatiEquationSolver_get__p(t_RiccatiEquationSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/PascalDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *PascalDistribution::class$ = NULL;
        jmethodID *PascalDistribution::mids$ = NULL;
        bool PascalDistribution::live$ = false;

        jclass PascalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/PascalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_69cfb132c661aca4] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfSuccesses_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfSuccesses", "()I");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_557b8123390d8d0c] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_69cfb132c661aca4] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_69cfb132c661aca4] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PascalDistribution::PascalDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

        jdouble PascalDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_69cfb132c661aca4], a0);
        }

        jint PascalDistribution::getNumberOfSuccesses() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfSuccesses_412668abc8d889e9]);
        }

        jdouble PascalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble PascalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble PascalDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_557b8123390d8d0c]);
        }

        jint PascalDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_412668abc8d889e9]);
        }

        jint PascalDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_412668abc8d889e9]);
        }

        jboolean PascalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble PascalDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_69cfb132c661aca4], a0);
        }

        jdouble PascalDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_69cfb132c661aca4], a0);
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
    namespace distribution {
      namespace discrete {
        static PyObject *t_PascalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PascalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PascalDistribution_init_(t_PascalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PascalDistribution_cumulativeProbability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getNumberOfSuccesses(t_PascalDistribution *self);
        static PyObject *t_PascalDistribution_getNumericalMean(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getNumericalVariance(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getProbabilityOfSuccess(t_PascalDistribution *self);
        static PyObject *t_PascalDistribution_getSupportLowerBound(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getSupportUpperBound(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_isSupportConnected(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_logProbability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_probability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_get__numberOfSuccesses(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__numericalMean(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__numericalVariance(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__probabilityOfSuccess(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportConnected(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportLowerBound(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportUpperBound(t_PascalDistribution *self, void *data);
        static PyGetSetDef t_PascalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_PascalDistribution, numberOfSuccesses),
          DECLARE_GET_FIELD(t_PascalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_PascalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_PascalDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_PascalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_PascalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_PascalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PascalDistribution__methods_[] = {
          DECLARE_METHOD(t_PascalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PascalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PascalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumberOfSuccesses, METH_NOARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_PascalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PascalDistribution)[] = {
          { Py_tp_methods, t_PascalDistribution__methods_ },
          { Py_tp_init, (void *) t_PascalDistribution_init_ },
          { Py_tp_getset, t_PascalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PascalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(PascalDistribution, t_PascalDistribution, PascalDistribution);

        void t_PascalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(PascalDistribution), &PY_TYPE_DEF(PascalDistribution), module, "PascalDistribution", 0);
        }

        void t_PascalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "class_", make_descriptor(PascalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "wrapfn_", make_descriptor(t_PascalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PascalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PascalDistribution::initializeClass, 1)))
            return NULL;
          return t_PascalDistribution::wrap_Object(PascalDistribution(((t_PascalDistribution *) arg)->object.this$));
        }
        static PyObject *t_PascalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PascalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PascalDistribution_init_(t_PascalDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          PascalDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = PascalDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PascalDistribution_cumulativeProbability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_PascalDistribution_getNumberOfSuccesses(t_PascalDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PascalDistribution_getNumericalMean(t_PascalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_PascalDistribution_getNumericalVariance(t_PascalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_PascalDistribution_getProbabilityOfSuccess(t_PascalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PascalDistribution_getSupportLowerBound(t_PascalDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_PascalDistribution_getSupportUpperBound(t_PascalDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_PascalDistribution_isSupportConnected(t_PascalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_PascalDistribution_logProbability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_PascalDistribution_probability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_PascalDistribution_get__numberOfSuccesses(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PascalDistribution_get__numericalMean(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__numericalVariance(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__probabilityOfSuccess(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__supportConnected(t_PascalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PascalDistribution_get__supportLowerBound(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PascalDistribution_get__supportUpperBound(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/PythonGNSSAttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *PythonGNSSAttitudeProvider::class$ = NULL;
        jmethodID *PythonGNSSAttitudeProvider::mids$ = NULL;
        bool PythonGNSSAttitudeProvider::live$ = false;

        jclass PythonGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/PythonGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
            mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_validityEnd_7a97f7e149e79afb] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_7a97f7e149e79afb] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGNSSAttitudeProvider::PythonGNSSAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonGNSSAttitudeProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonGNSSAttitudeProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonGNSSAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace attitude {
        static PyObject *t_PythonGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonGNSSAttitudeProvider_init_(t_PythonGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGNSSAttitudeProvider_finalize(t_PythonGNSSAttitudeProvider *self);
        static PyObject *t_PythonGNSSAttitudeProvider_pythonExtension(t_PythonGNSSAttitudeProvider *self, PyObject *args);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonGNSSAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityEnd3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityStart4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonGNSSAttitudeProvider_get__self(t_PythonGNSSAttitudeProvider *self, void *data);
        static PyGetSetDef t_PythonGNSSAttitudeProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGNSSAttitudeProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_PythonGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) t_PythonGNSSAttitudeProvider_init_ },
          { Py_tp_getset, t_PythonGNSSAttitudeProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonGNSSAttitudeProvider, t_PythonGNSSAttitudeProvider, PythonGNSSAttitudeProvider);

        void t_PythonGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGNSSAttitudeProvider), &PY_TYPE_DEF(PythonGNSSAttitudeProvider), module, "PythonGNSSAttitudeProvider", 1);
        }

        void t_PythonGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "class_", make_descriptor(PythonGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_PythonGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGNSSAttitudeProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonGNSSAttitudeProvider_getAttitude0 },
            { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonGNSSAttitudeProvider_getAttitude1 },
            { "pythonDecRef", "()V", (void *) t_PythonGNSSAttitudeProvider_pythonDecRef2 },
            { "validityEnd", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonGNSSAttitudeProvider_validityEnd3 },
            { "validityStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonGNSSAttitudeProvider_validityStart4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_PythonGNSSAttitudeProvider::wrap_Object(PythonGNSSAttitudeProvider(((t_PythonGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonGNSSAttitudeProvider_init_(t_PythonGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonGNSSAttitudeProvider object((jobject) NULL);

          INT_CALL(object = PythonGNSSAttitudeProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonGNSSAttitudeProvider_finalize(t_PythonGNSSAttitudeProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGNSSAttitudeProvider_pythonExtension(t_PythonGNSSAttitudeProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::Attitude value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
          {
            throwTypeError("getAttitude", result);
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
          {
            throwTypeError("getAttitude", result);
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

        static void JNICALL t_PythonGNSSAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityEnd3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "validityEnd", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("validityEnd", result);
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityStart4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "validityStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("validityStart", result);
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

        static PyObject *t_PythonGNSSAttitudeProvider_get__self(t_PythonGNSSAttitudeProvider *self, void *data)
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
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomGenerator::class$ = NULL;
      jmethodID *RandomGenerator::mids$ = NULL;
      bool RandomGenerator::live$ = false;

      jclass RandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_89b302893bdbe1f1] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_d759c70c6670fd89] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_ac782c7077255dd3] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_04fe014f7609dc26] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_557b8123390d8d0c] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_0092017e99012694] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_9e26256fb0d384a2] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_f4ad805a81234b49] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_ec63cb8a58ef5a54] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_a3da1a935cb37f7b] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3cd6a6b354c6aa22] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean RandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_89b302893bdbe1f1]);
      }

      void RandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d759c70c6670fd89], a0.this$);
      }

      void RandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_ac782c7077255dd3], a0.this$, a1, a2);
      }

      jdouble RandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_557b8123390d8d0c]);
      }

      jfloat RandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_04fe014f7609dc26]);
      }

      jdouble RandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_557b8123390d8d0c]);
      }

      jint RandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
      }

      jint RandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0092017e99012694], a0);
      }

      jlong RandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9e26256fb0d384a2]);
      }

      jlong RandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_f4ad805a81234b49], a0);
      }

      void RandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_ec63cb8a58ef5a54], a0.this$);
      }

      void RandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_a3da1a935cb37f7b], a0);
      }

      void RandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_RandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomGenerator_nextBoolean(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextBytes(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_nextDouble(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextFloat(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextGaussian(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextInt(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_nextLong(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_setSeed(t_RandomGenerator *self, PyObject *args);
      static int t_RandomGenerator_set__seed(t_RandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_RandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_RandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RandomGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomGenerator)[] = {
        { Py_tp_methods, t_RandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RandomGenerator, t_RandomGenerator, RandomGenerator);

      void t_RandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomGenerator), &PY_TYPE_DEF(RandomGenerator), module, "RandomGenerator", 0);
      }

      void t_RandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "class_", make_descriptor(RandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "wrapfn_", make_descriptor(t_RandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomGenerator::wrap_Object(RandomGenerator(((t_RandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RandomGenerator_nextBoolean(t_RandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RandomGenerator_nextBytes(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_nextDouble(t_RandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextFloat(t_RandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextGaussian(t_RandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextInt(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_nextLong(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_setSeed(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_RandomGenerator_set__seed(t_RandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDParser.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ilrs/CRD.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDParser::class$ = NULL;
        jmethodID *CRDParser::mids$ = NULL;
        bool CRDParser::live$ = false;
        ::java::lang::String *CRDParser::DEFAULT_CRD_SUPPORTED_NAMES = NULL;

        jclass CRDParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_3e3301925c0131d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
            mids$[mid_getTimeScale_527ee9dde1a96470] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
            mids$[mid_parse_55616e1bfd4b461a] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ilrs/CRD;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_CRD_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_CRD_SUPPORTED_NAMES", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDParser::CRDParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        CRDParser::CRDParser(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e3301925c0131d4, a0.this$)) {}

        ::org::orekit::time::TimeScale CRDParser::getTimeScale() const
        {
          return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_527ee9dde1a96470]));
        }

        ::org::orekit::files::ilrs::CRD CRDParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::ilrs::CRD(env->callObjectMethod(this$, mids$[mid_parse_55616e1bfd4b461a], a0.this$));
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
        static PyObject *t_CRDParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDParser_init_(t_CRDParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDParser_getTimeScale(t_CRDParser *self);
        static PyObject *t_CRDParser_parse(t_CRDParser *self, PyObject *arg);
        static PyObject *t_CRDParser_get__timeScale(t_CRDParser *self, void *data);
        static PyGetSetDef t_CRDParser__fields_[] = {
          DECLARE_GET_FIELD(t_CRDParser, timeScale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDParser__methods_[] = {
          DECLARE_METHOD(t_CRDParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDParser, getTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CRDParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDParser)[] = {
          { Py_tp_methods, t_CRDParser__methods_ },
          { Py_tp_init, (void *) t_CRDParser_init_ },
          { Py_tp_getset, t_CRDParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDParser, t_CRDParser, CRDParser);

        void t_CRDParser::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDParser), &PY_TYPE_DEF(CRDParser), module, "CRDParser", 0);
        }

        void t_CRDParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "class_", make_descriptor(CRDParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "wrapfn_", make_descriptor(t_CRDParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDParser::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "DEFAULT_CRD_SUPPORTED_NAMES", make_descriptor(j2p(*CRDParser::DEFAULT_CRD_SUPPORTED_NAMES)));
        }

        static PyObject *t_CRDParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDParser::initializeClass, 1)))
            return NULL;
          return t_CRDParser::wrap_Object(CRDParser(((t_CRDParser *) arg)->object.this$));
        }
        static PyObject *t_CRDParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDParser_init_(t_CRDParser *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CRDParser object((jobject) NULL);

              INT_CALL(object = CRDParser());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              CRDParser object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = CRDParser(a0));
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

        static PyObject *t_CRDParser_getTimeScale(t_CRDParser *self)
        {
          ::org::orekit::time::TimeScale result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        static PyObject *t_CRDParser_parse(t_CRDParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRD result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::ilrs::t_CRD::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }

        static PyObject *t_CRDParser_get__timeScale(t_CRDParser *self, void *data)
        {
          ::org::orekit::time::TimeScale value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *Theta::class$ = NULL;
          jmethodID *Theta::mids$ = NULL;
          bool Theta::live$ = false;

          jclass Theta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/Theta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_theta1_921a2f30ecc499e5] = env->getMethodID(cls, "theta1", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta2_921a2f30ecc499e5] = env->getMethodID(cls, "theta2", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta3_921a2f30ecc499e5] = env->getMethodID(cls, "theta3", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta4_921a2f30ecc499e5] = env->getMethodID(cls, "theta4", "()Lorg/hipparchus/complex/Complex;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex Theta::theta1() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta1_921a2f30ecc499e5]));
          }

          ::org::hipparchus::complex::Complex Theta::theta2() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta2_921a2f30ecc499e5]));
          }

          ::org::hipparchus::complex::Complex Theta::theta3() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta3_921a2f30ecc499e5]));
          }

          ::org::hipparchus::complex::Complex Theta::theta4() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta4_921a2f30ecc499e5]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_Theta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Theta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Theta_theta1(t_Theta *self);
          static PyObject *t_Theta_theta2(t_Theta *self);
          static PyObject *t_Theta_theta3(t_Theta *self);
          static PyObject *t_Theta_theta4(t_Theta *self);

          static PyMethodDef t_Theta__methods_[] = {
            DECLARE_METHOD(t_Theta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Theta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Theta, theta1, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta2, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta3, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta4, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Theta)[] = {
            { Py_tp_methods, t_Theta__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Theta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Theta, t_Theta, Theta);

          void t_Theta::install(PyObject *module)
          {
            installType(&PY_TYPE(Theta), &PY_TYPE_DEF(Theta), module, "Theta", 0);
          }

          void t_Theta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "class_", make_descriptor(Theta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "wrapfn_", make_descriptor(t_Theta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Theta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Theta::initializeClass, 1)))
              return NULL;
            return t_Theta::wrap_Object(Theta(((t_Theta *) arg)->object.this$));
          }
          static PyObject *t_Theta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Theta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Theta_theta1(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta1());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta2(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta2());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta3(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta3());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta4(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta4());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/SolutionCallback.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *SolutionCallback::class$ = NULL;
        jmethodID *SolutionCallback::mids$ = NULL;
        bool SolutionCallback::live$ = false;

        jclass SolutionCallback::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/SolutionCallback");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getSolution_adf293b2643f22b0] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_isSolutionOptimal_89b302893bdbe1f1] = env->getMethodID(cls, "isSolutionOptimal", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolutionCallback::SolutionCallback() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::optim::PointValuePair SolutionCallback::getSolution() const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_getSolution_adf293b2643f22b0]));
        }

        jboolean SolutionCallback::isSolutionOptimal() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSolutionOptimal_89b302893bdbe1f1]);
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
    namespace optim {
      namespace linear {
        static PyObject *t_SolutionCallback_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolutionCallback_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolutionCallback_init_(t_SolutionCallback *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolutionCallback_getSolution(t_SolutionCallback *self);
        static PyObject *t_SolutionCallback_isSolutionOptimal(t_SolutionCallback *self);
        static PyObject *t_SolutionCallback_get__solution(t_SolutionCallback *self, void *data);
        static PyObject *t_SolutionCallback_get__solutionOptimal(t_SolutionCallback *self, void *data);
        static PyGetSetDef t_SolutionCallback__fields_[] = {
          DECLARE_GET_FIELD(t_SolutionCallback, solution),
          DECLARE_GET_FIELD(t_SolutionCallback, solutionOptimal),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolutionCallback__methods_[] = {
          DECLARE_METHOD(t_SolutionCallback, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolutionCallback, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolutionCallback, getSolution, METH_NOARGS),
          DECLARE_METHOD(t_SolutionCallback, isSolutionOptimal, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolutionCallback)[] = {
          { Py_tp_methods, t_SolutionCallback__methods_ },
          { Py_tp_init, (void *) t_SolutionCallback_init_ },
          { Py_tp_getset, t_SolutionCallback__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolutionCallback)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SolutionCallback, t_SolutionCallback, SolutionCallback);

        void t_SolutionCallback::install(PyObject *module)
        {
          installType(&PY_TYPE(SolutionCallback), &PY_TYPE_DEF(SolutionCallback), module, "SolutionCallback", 0);
        }

        void t_SolutionCallback::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "class_", make_descriptor(SolutionCallback::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "wrapfn_", make_descriptor(t_SolutionCallback::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SolutionCallback_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolutionCallback::initializeClass, 1)))
            return NULL;
          return t_SolutionCallback::wrap_Object(SolutionCallback(((t_SolutionCallback *) arg)->object.this$));
        }
        static PyObject *t_SolutionCallback_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolutionCallback::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolutionCallback_init_(t_SolutionCallback *self, PyObject *args, PyObject *kwds)
        {
          SolutionCallback object((jobject) NULL);

          INT_CALL(object = SolutionCallback());
          self->object = object;

          return 0;
        }

        static PyObject *t_SolutionCallback_getSolution(t_SolutionCallback *self)
        {
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolution());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
        }

        static PyObject *t_SolutionCallback_isSolutionOptimal(t_SolutionCallback *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isSolutionOptimal());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SolutionCallback_get__solution(t_SolutionCallback *self, void *data)
        {
          ::org::hipparchus::optim::PointValuePair value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolution());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(value);
        }

        static PyObject *t_SolutionCallback_get__solutionOptimal(t_SolutionCallback *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSolutionOptimal());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *TokenType::class$ = NULL;
            jmethodID *TokenType::mids$ = NULL;
            bool TokenType::live$ = false;
            TokenType *TokenType::ENTRY = NULL;
            TokenType *TokenType::RAW_LINE = NULL;
            TokenType *TokenType::START = NULL;
            TokenType *TokenType::STOP = NULL;

            jclass TokenType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/TokenType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_de46747ae9eeb6d9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/utils/lexical/TokenType;");
                mids$[mid_values_6023496df8ab390b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/utils/lexical/TokenType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ENTRY = new TokenType(env->getStaticObjectField(cls, "ENTRY", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                RAW_LINE = new TokenType(env->getStaticObjectField(cls, "RAW_LINE", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                START = new TokenType(env->getStaticObjectField(cls, "START", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                STOP = new TokenType(env->getStaticObjectField(cls, "STOP", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TokenType TokenType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TokenType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_de46747ae9eeb6d9], a0.this$));
            }

            JArray< TokenType > TokenType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TokenType >(env->callStaticObjectMethod(cls, mids$[mid_values_6023496df8ab390b]));
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
            static PyObject *t_TokenType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TokenType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TokenType_of_(t_TokenType *self, PyObject *args);
            static PyObject *t_TokenType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TokenType_values(PyTypeObject *type);
            static PyObject *t_TokenType_get__parameters_(t_TokenType *self, void *data);
            static PyGetSetDef t_TokenType__fields_[] = {
              DECLARE_GET_FIELD(t_TokenType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TokenType__methods_[] = {
              DECLARE_METHOD(t_TokenType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TokenType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TokenType, of_, METH_VARARGS),
              DECLARE_METHOD(t_TokenType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TokenType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TokenType)[] = {
              { Py_tp_methods, t_TokenType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TokenType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TokenType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TokenType, t_TokenType, TokenType);
            PyObject *t_TokenType::wrap_Object(const TokenType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TokenType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TokenType *self = (t_TokenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TokenType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TokenType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TokenType *self = (t_TokenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TokenType::install(PyObject *module)
            {
              installType(&PY_TYPE(TokenType), &PY_TYPE_DEF(TokenType), module, "TokenType", 0);
            }

            void t_TokenType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "class_", make_descriptor(TokenType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "wrapfn_", make_descriptor(t_TokenType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "boxfn_", make_descriptor(boxObject));
              env->getClass(TokenType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "ENTRY", make_descriptor(t_TokenType::wrap_Object(*TokenType::ENTRY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "RAW_LINE", make_descriptor(t_TokenType::wrap_Object(*TokenType::RAW_LINE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "START", make_descriptor(t_TokenType::wrap_Object(*TokenType::START)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "STOP", make_descriptor(t_TokenType::wrap_Object(*TokenType::STOP)));
            }

            static PyObject *t_TokenType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TokenType::initializeClass, 1)))
                return NULL;
              return t_TokenType::wrap_Object(TokenType(((t_TokenType *) arg)->object.this$));
            }
            static PyObject *t_TokenType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TokenType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TokenType_of_(t_TokenType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TokenType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TokenType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::TokenType::valueOf(a0));
                return t_TokenType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TokenType_values(PyTypeObject *type)
            {
              JArray< TokenType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::TokenType::values());
              return JArray<jobject>(result.this$).wrap(t_TokenType::wrap_jobject);
            }
            static PyObject *t_TokenType_get__parameters_(t_TokenType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *AngularVelocity::class$ = NULL;
              jmethodID *AngularVelocity::mids$ = NULL;
              bool AngularVelocity::live$ = false;

              jclass AngularVelocity::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAngVelX_557b8123390d8d0c] = env->getMethodID(cls, "getAngVelX", "()D");
                  mids$[mid_getAngVelY_557b8123390d8d0c] = env->getMethodID(cls, "getAngVelY", "()D");
                  mids$[mid_getAngVelZ_557b8123390d8d0c] = env->getMethodID(cls, "getAngVelZ", "()D");
                  mids$[mid_getEndpoints_c66f753ddee38944] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_setAngVelX_10f281d777284cea] = env->getMethodID(cls, "setAngVelX", "(D)V");
                  mids$[mid_setAngVelY_10f281d777284cea] = env->getMethodID(cls, "setAngVelY", "(D)V");
                  mids$[mid_setAngVelZ_10f281d777284cea] = env->getMethodID(cls, "setAngVelZ", "(D)V");
                  mids$[mid_setFrame_f55eee1236275bb1] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AngularVelocity::AngularVelocity() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jdouble AngularVelocity::getAngVelX() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelX_557b8123390d8d0c]);
              }

              jdouble AngularVelocity::getAngVelY() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelY_557b8123390d8d0c]);
              }

              jdouble AngularVelocity::getAngVelZ() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelZ_557b8123390d8d0c]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AngularVelocity::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c66f753ddee38944]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AngularVelocity::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_98f5fcaff3e3f9d2]));
              }

              void AngularVelocity::setAngVelX(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelX_10f281d777284cea], a0);
              }

              void AngularVelocity::setAngVelY(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelY_10f281d777284cea], a0);
              }

              void AngularVelocity::setAngVelZ(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelZ_10f281d777284cea], a0);
              }

              void AngularVelocity::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_f55eee1236275bb1], a0.this$);
              }

              void AngularVelocity::validate(jdouble a0) const
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
              static PyObject *t_AngularVelocity_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocity_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AngularVelocity_init_(t_AngularVelocity *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AngularVelocity_getAngVelX(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getAngVelY(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getAngVelZ(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getEndpoints(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getFrame(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_setAngVelX(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setAngVelY(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setAngVelZ(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setFrame(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_validate(t_AngularVelocity *self, PyObject *args);
              static PyObject *t_AngularVelocity_get__angVelX(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelX(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__angVelY(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelY(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__angVelZ(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelZ(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__endpoints(t_AngularVelocity *self, void *data);
              static PyObject *t_AngularVelocity_get__frame(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__frame(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyGetSetDef t_AngularVelocity__fields_[] = {
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelX),
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelY),
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelZ),
                DECLARE_GET_FIELD(t_AngularVelocity, endpoints),
                DECLARE_GETSET_FIELD(t_AngularVelocity, frame),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AngularVelocity__methods_[] = {
                DECLARE_METHOD(t_AngularVelocity, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocity, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelX, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelY, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelZ, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, setAngVelX, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setAngVelY, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setAngVelZ, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setFrame, METH_O),
                DECLARE_METHOD(t_AngularVelocity, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AngularVelocity)[] = {
                { Py_tp_methods, t_AngularVelocity__methods_ },
                { Py_tp_init, (void *) t_AngularVelocity_init_ },
                { Py_tp_getset, t_AngularVelocity__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AngularVelocity)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AngularVelocity, t_AngularVelocity, AngularVelocity);

              void t_AngularVelocity::install(PyObject *module)
              {
                installType(&PY_TYPE(AngularVelocity), &PY_TYPE_DEF(AngularVelocity), module, "AngularVelocity", 0);
              }

              void t_AngularVelocity::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "class_", make_descriptor(AngularVelocity::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "wrapfn_", make_descriptor(t_AngularVelocity::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AngularVelocity_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AngularVelocity::initializeClass, 1)))
                  return NULL;
                return t_AngularVelocity::wrap_Object(AngularVelocity(((t_AngularVelocity *) arg)->object.this$));
              }
              static PyObject *t_AngularVelocity_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AngularVelocity::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AngularVelocity_init_(t_AngularVelocity *self, PyObject *args, PyObject *kwds)
              {
                AngularVelocity object((jobject) NULL);

                INT_CALL(object = AngularVelocity());
                self->object = object;

                return 0;
              }

              static PyObject *t_AngularVelocity_getAngVelX(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelX());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getAngVelY(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelY());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getAngVelZ(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelZ());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getEndpoints(t_AngularVelocity *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AngularVelocity_getFrame(t_AngularVelocity *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AngularVelocity_setAngVelX(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelX(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelX", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setAngVelY(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelY(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelY", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setAngVelZ(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelZ(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelZ", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setFrame(t_AngularVelocity *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFrame", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_validate(t_AngularVelocity *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AngularVelocity), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AngularVelocity_get__angVelX(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelX());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelX(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelX(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelX", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__angVelY(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelY());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelY(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelY(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelY", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__angVelZ(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelZ());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelZ(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelZ(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelZ", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__endpoints(t_AngularVelocity *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AngularVelocity_get__frame(t_AngularVelocity *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AngularVelocity_set__frame(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "frame", arg);
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
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereNequickGMessage::class$ = NULL;
          jmethodID *IonosphereNequickGMessage::mids$ = NULL;
          bool IonosphereNequickGMessage::live$ = false;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU = NULL;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU_PER_DEG = NULL;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU_PER_DEG2 = NULL;

          jclass IonosphereNequickGMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereNequickGMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e1b2f7b885c85083] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAi0_557b8123390d8d0c] = env->getMethodID(cls, "getAi0", "()D");
              mids$[mid_getAi1_557b8123390d8d0c] = env->getMethodID(cls, "getAi1", "()D");
              mids$[mid_getAi2_557b8123390d8d0c] = env->getMethodID(cls, "getAi2", "()D");
              mids$[mid_getFlags_412668abc8d889e9] = env->getMethodID(cls, "getFlags", "()I");
              mids$[mid_setAi0_10f281d777284cea] = env->getMethodID(cls, "setAi0", "(D)V");
              mids$[mid_setAi1_10f281d777284cea] = env->getMethodID(cls, "setAi1", "(D)V");
              mids$[mid_setAi2_10f281d777284cea] = env->getMethodID(cls, "setAi2", "(D)V");
              mids$[mid_setFlags_a3da1a935cb37f7b] = env->getMethodID(cls, "setFlags", "(I)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SFU = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU", "Lorg/orekit/utils/units/Unit;"));
              SFU_PER_DEG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU_PER_DEG", "Lorg/orekit/utils/units/Unit;"));
              SFU_PER_DEG2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU_PER_DEG2", "Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereNequickGMessage::IonosphereNequickGMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_e1b2f7b885c85083, a0.this$, a1, a2.this$)) {}

          jdouble IonosphereNequickGMessage::getAi0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi0_557b8123390d8d0c]);
          }

          jdouble IonosphereNequickGMessage::getAi1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi1_557b8123390d8d0c]);
          }

          jdouble IonosphereNequickGMessage::getAi2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi2_557b8123390d8d0c]);
          }

          jint IonosphereNequickGMessage::getFlags() const
          {
            return env->callIntMethod(this$, mids$[mid_getFlags_412668abc8d889e9]);
          }

          void IonosphereNequickGMessage::setAi0(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi0_10f281d777284cea], a0);
          }

          void IonosphereNequickGMessage::setAi1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi1_10f281d777284cea], a0);
          }

          void IonosphereNequickGMessage::setAi2(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi2_10f281d777284cea], a0);
          }

          void IonosphereNequickGMessage::setFlags(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFlags_a3da1a935cb37f7b], a0);
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
        namespace navigation {
          static PyObject *t_IonosphereNequickGMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereNequickGMessage_init_(t_IonosphereNequickGMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereNequickGMessage_getAi0(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getAi1(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getAi2(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getFlags(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_setAi0(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setAi1(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setAi2(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setFlags(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_get__ai0(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai0(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__ai1(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai1(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__ai2(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai2(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__flags(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__flags(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereNequickGMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai0),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai1),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai2),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, flags),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereNequickGMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereNequickGMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi0, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi1, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi2, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getFlags, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi0, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi1, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi2, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setFlags, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereNequickGMessage)[] = {
            { Py_tp_methods, t_IonosphereNequickGMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereNequickGMessage_init_ },
            { Py_tp_getset, t_IonosphereNequickGMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereNequickGMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereNequickGMessage, t_IonosphereNequickGMessage, IonosphereNequickGMessage);

          void t_IonosphereNequickGMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereNequickGMessage), &PY_TYPE_DEF(IonosphereNequickGMessage), module, "IonosphereNequickGMessage", 0);
          }

          void t_IonosphereNequickGMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "class_", make_descriptor(IonosphereNequickGMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "wrapfn_", make_descriptor(t_IonosphereNequickGMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphereNequickGMessage::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU_PER_DEG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU_PER_DEG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU_PER_DEG2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU_PER_DEG2)));
          }

          static PyObject *t_IonosphereNequickGMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereNequickGMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereNequickGMessage::wrap_Object(IonosphereNequickGMessage(((t_IonosphereNequickGMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereNequickGMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereNequickGMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereNequickGMessage_init_(t_IonosphereNequickGMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereNequickGMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereNequickGMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereNequickGMessage_getAi0(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getAi1(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getAi2(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getFlags(t_IonosphereNequickGMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFlags());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_IonosphereNequickGMessage_setAi0(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi0(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi0", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setAi1(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi1", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setAi2(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi2(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi2", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setFlags(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setFlags(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFlags", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai0(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi0());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai0(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi0(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai0", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai1(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai1(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai1", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai2(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi2());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai2(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi2(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai2", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__flags(t_IonosphereNequickGMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFlags());
            return PyLong_FromLong((long) value);
          }
          static int t_IonosphereNequickGMessage_set__flags(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setFlags(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "flags", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonEstimationModifier.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonEstimationModifier::class$ = NULL;
        jmethodID *PythonEstimationModifier::mids$ = NULL;
        bool PythonEstimationModifier::live$ = false;

        jclass PythonEstimationModifier::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonEstimationModifier");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEstimationModifier::PythonEstimationModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonEstimationModifier::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonEstimationModifier::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonEstimationModifier::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_PythonEstimationModifier_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationModifier_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationModifier_of_(t_PythonEstimationModifier *self, PyObject *args);
        static int t_PythonEstimationModifier_init_(t_PythonEstimationModifier *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEstimationModifier_finalize(t_PythonEstimationModifier *self);
        static PyObject *t_PythonEstimationModifier_pythonExtension(t_PythonEstimationModifier *self, PyObject *args);
        static jobject JNICALL t_PythonEstimationModifier_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEstimationModifier_modify1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEstimationModifier_modifyWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEstimationModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEstimationModifier_get__self(t_PythonEstimationModifier *self, void *data);
        static PyObject *t_PythonEstimationModifier_get__parameters_(t_PythonEstimationModifier *self, void *data);
        static PyGetSetDef t_PythonEstimationModifier__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEstimationModifier, self),
          DECLARE_GET_FIELD(t_PythonEstimationModifier, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEstimationModifier__methods_[] = {
          DECLARE_METHOD(t_PythonEstimationModifier, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationModifier, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationModifier, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonEstimationModifier, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEstimationModifier, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEstimationModifier)[] = {
          { Py_tp_methods, t_PythonEstimationModifier__methods_ },
          { Py_tp_init, (void *) t_PythonEstimationModifier_init_ },
          { Py_tp_getset, t_PythonEstimationModifier__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEstimationModifier)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEstimationModifier, t_PythonEstimationModifier, PythonEstimationModifier);
        PyObject *t_PythonEstimationModifier::wrap_Object(const PythonEstimationModifier& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonEstimationModifier::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonEstimationModifier *self = (t_PythonEstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonEstimationModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonEstimationModifier::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonEstimationModifier *self = (t_PythonEstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonEstimationModifier::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEstimationModifier), &PY_TYPE_DEF(PythonEstimationModifier), module, "PythonEstimationModifier", 1);
        }

        void t_PythonEstimationModifier::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "class_", make_descriptor(PythonEstimationModifier::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "wrapfn_", make_descriptor(t_PythonEstimationModifier::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEstimationModifier::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonEstimationModifier_getParametersDrivers0 },
            { "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V", (void *) t_PythonEstimationModifier_modify1 },
            { "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V", (void *) t_PythonEstimationModifier_modifyWithoutDerivatives2 },
            { "pythonDecRef", "()V", (void *) t_PythonEstimationModifier_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonEstimationModifier_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEstimationModifier::initializeClass, 1)))
            return NULL;
          return t_PythonEstimationModifier::wrap_Object(PythonEstimationModifier(((t_PythonEstimationModifier *) arg)->object.this$));
        }
        static PyObject *t_PythonEstimationModifier_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEstimationModifier::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonEstimationModifier_of_(t_PythonEstimationModifier *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonEstimationModifier_init_(t_PythonEstimationModifier *self, PyObject *args, PyObject *kwds)
        {
          PythonEstimationModifier object((jobject) NULL);

          INT_CALL(object = PythonEstimationModifier());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEstimationModifier_finalize(t_PythonEstimationModifier *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEstimationModifier_pythonExtension(t_PythonEstimationModifier *self, PyObject *args)
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

        static jobject JNICALL t_PythonEstimationModifier_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_9e26256fb0d384a2]);
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

        static void JNICALL t_PythonEstimationModifier_modify1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "modify", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEstimationModifier_modifyWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
          PyObject *result = PyObject_CallMethod(obj, "modifyWithoutDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEstimationModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEstimationModifier_get__self(t_PythonEstimationModifier *self, void *data)
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
        static PyObject *t_PythonEstimationModifier_get__parameters_(t_PythonEstimationModifier *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *SigmaEigenvectorsCovariance::class$ = NULL;
            jmethodID *SigmaEigenvectorsCovariance::mids$ = NULL;
            bool SigmaEigenvectorsCovariance::live$ = false;

            jclass SigmaEigenvectorsCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_getCsig3eigvec3_a53a7513ecedada2] = env->getMethodID(cls, "getCsig3eigvec3", "()[D");
                mids$[mid_isAltCovFlagSet_89b302893bdbe1f1] = env->getMethodID(cls, "isAltCovFlagSet", "()Z");
                mids$[mid_setCsig3eigvec3_cc18240f4a737f14] = env->getMethodID(cls, "setCsig3eigvec3", "([D)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SigmaEigenvectorsCovariance::SigmaEigenvectorsCovariance(jboolean a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

            JArray< jdouble > SigmaEigenvectorsCovariance::getCsig3eigvec3() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCsig3eigvec3_a53a7513ecedada2]));
            }

            jboolean SigmaEigenvectorsCovariance::isAltCovFlagSet() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isAltCovFlagSet_89b302893bdbe1f1]);
            }

            void SigmaEigenvectorsCovariance::setCsig3eigvec3(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsig3eigvec3_cc18240f4a737f14], a0.this$);
            }

            void SigmaEigenvectorsCovariance::validate(jdouble a0) const
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
          namespace cdm {
            static PyObject *t_SigmaEigenvectorsCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SigmaEigenvectorsCovariance_init_(t_SigmaEigenvectorsCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SigmaEigenvectorsCovariance_getCsig3eigvec3(t_SigmaEigenvectorsCovariance *self);
            static PyObject *t_SigmaEigenvectorsCovariance_isAltCovFlagSet(t_SigmaEigenvectorsCovariance *self);
            static PyObject *t_SigmaEigenvectorsCovariance_setCsig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovariance_validate(t_SigmaEigenvectorsCovariance *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovariance_get__altCovFlagSet(t_SigmaEigenvectorsCovariance *self, void *data);
            static PyObject *t_SigmaEigenvectorsCovariance_get__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, void *data);
            static int t_SigmaEigenvectorsCovariance_set__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg, void *data);
            static PyGetSetDef t_SigmaEigenvectorsCovariance__fields_[] = {
              DECLARE_GET_FIELD(t_SigmaEigenvectorsCovariance, altCovFlagSet),
              DECLARE_GETSET_FIELD(t_SigmaEigenvectorsCovariance, csig3eigvec3),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SigmaEigenvectorsCovariance__methods_[] = {
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, getCsig3eigvec3, METH_NOARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, isAltCovFlagSet, METH_NOARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, setCsig3eigvec3, METH_O),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SigmaEigenvectorsCovariance)[] = {
              { Py_tp_methods, t_SigmaEigenvectorsCovariance__methods_ },
              { Py_tp_init, (void *) t_SigmaEigenvectorsCovariance_init_ },
              { Py_tp_getset, t_SigmaEigenvectorsCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SigmaEigenvectorsCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(SigmaEigenvectorsCovariance, t_SigmaEigenvectorsCovariance, SigmaEigenvectorsCovariance);

            void t_SigmaEigenvectorsCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(SigmaEigenvectorsCovariance), &PY_TYPE_DEF(SigmaEigenvectorsCovariance), module, "SigmaEigenvectorsCovariance", 0);
            }

            void t_SigmaEigenvectorsCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "class_", make_descriptor(SigmaEigenvectorsCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "wrapfn_", make_descriptor(t_SigmaEigenvectorsCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SigmaEigenvectorsCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SigmaEigenvectorsCovariance::initializeClass, 1)))
                return NULL;
              return t_SigmaEigenvectorsCovariance::wrap_Object(SigmaEigenvectorsCovariance(((t_SigmaEigenvectorsCovariance *) arg)->object.this$));
            }
            static PyObject *t_SigmaEigenvectorsCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SigmaEigenvectorsCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SigmaEigenvectorsCovariance_init_(t_SigmaEigenvectorsCovariance *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              SigmaEigenvectorsCovariance object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = SigmaEigenvectorsCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SigmaEigenvectorsCovariance_getCsig3eigvec3(t_SigmaEigenvectorsCovariance *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getCsig3eigvec3());
              return result.wrap();
            }

            static PyObject *t_SigmaEigenvectorsCovariance_isAltCovFlagSet(t_SigmaEigenvectorsCovariance *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isAltCovFlagSet());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_setCsig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setCsig3eigvec3(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsig3eigvec3", arg);
              return NULL;
            }

            static PyObject *t_SigmaEigenvectorsCovariance_validate(t_SigmaEigenvectorsCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(SigmaEigenvectorsCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_get__altCovFlagSet(t_SigmaEigenvectorsCovariance *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isAltCovFlagSet());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_get__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getCsig3eigvec3());
              return value.wrap();
            }
            static int t_SigmaEigenvectorsCovariance_set__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setCsig3eigvec3(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csig3eigvec3", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistoryMetadata::class$ = NULL;
              jmethodID *OrbitCovarianceHistoryMetadata::mids$ = NULL;
              bool OrbitCovarianceHistoryMetadata::live$ = false;

              jclass OrbitCovarianceHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_20affcbd28542333] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getCovBasis_3cffd47377eca18a] = env->getMethodID(cls, "getCovBasis", "()Ljava/lang/String;");
                  mids$[mid_getCovBasisID_3cffd47377eca18a] = env->getMethodID(cls, "getCovBasisID", "()Ljava/lang/String;");
                  mids$[mid_getCovConfidence_557b8123390d8d0c] = env->getMethodID(cls, "getCovConfidence", "()D");
                  mids$[mid_getCovFrameEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getCovFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getCovID_3cffd47377eca18a] = env->getMethodID(cls, "getCovID", "()Ljava/lang/String;");
                  mids$[mid_getCovNextID_3cffd47377eca18a] = env->getMethodID(cls, "getCovNextID", "()Ljava/lang/String;");
                  mids$[mid_getCovOrdering_315fd39b1c41dd4c] = env->getMethodID(cls, "getCovOrdering", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");
                  mids$[mid_getCovPrevID_3cffd47377eca18a] = env->getMethodID(cls, "getCovPrevID", "()Ljava/lang/String;");
                  mids$[mid_getCovReferenceFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getCovReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getCovScaleMax_557b8123390d8d0c] = env->getMethodID(cls, "getCovScaleMax", "()D");
                  mids$[mid_getCovScaleMin_557b8123390d8d0c] = env->getMethodID(cls, "getCovScaleMin", "()D");
                  mids$[mid_getCovType_ada74ce902d29422] = env->getMethodID(cls, "getCovType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_getCovUnits_0d9551367f7ecdef] = env->getMethodID(cls, "getCovUnits", "()Ljava/util/List;");
                  mids$[mid_setCovBasis_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setCovBasisID_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovConfidence_10f281d777284cea] = env->getMethodID(cls, "setCovConfidence", "(D)V");
                  mids$[mid_setCovFrameEpoch_20affcbd28542333] = env->getMethodID(cls, "setCovFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setCovID_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovNextID_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovOrdering_aaad25c735d17afe] = env->getMethodID(cls, "setCovOrdering", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;)V");
                  mids$[mid_setCovPrevID_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovReferenceFrame_f55eee1236275bb1] = env->getMethodID(cls, "setCovReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setCovScaleMax_10f281d777284cea] = env->getMethodID(cls, "setCovScaleMax", "(D)V");
                  mids$[mid_setCovScaleMin_10f281d777284cea] = env->getMethodID(cls, "setCovScaleMin", "(D)V");
                  mids$[mid_setCovType_94fd56ae4b55b80e] = env->getMethodID(cls, "setCovType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;)V");
                  mids$[mid_setCovUnits_4ccaedadb068bdeb] = env->getMethodID(cls, "setCovUnits", "(Ljava/util/List;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovarianceHistoryMetadata::OrbitCovarianceHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_20affcbd28542333, a0.this$)) {}

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasis_3cffd47377eca18a]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasisID_3cffd47377eca18a]));
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovConfidence() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovConfidence_557b8123390d8d0c]);
              }

              ::org::orekit::time::AbsoluteDate OrbitCovarianceHistoryMetadata::getCovFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCovFrameEpoch_7a97f7e149e79afb]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovID_3cffd47377eca18a]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovNextID_3cffd47377eca18a]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering OrbitCovarianceHistoryMetadata::getCovOrdering() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering(env->callObjectMethod(this$, mids$[mid_getCovOrdering_315fd39b1c41dd4c]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovPrevID_3cffd47377eca18a]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade OrbitCovarianceHistoryMetadata::getCovReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCovReferenceFrame_98f5fcaff3e3f9d2]));
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovScaleMax() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovScaleMax_557b8123390d8d0c]);
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovScaleMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovScaleMin_557b8123390d8d0c]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType OrbitCovarianceHistoryMetadata::getCovType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getCovType_ada74ce902d29422]));
              }

              ::java::util::List OrbitCovarianceHistoryMetadata::getCovUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovUnits_0d9551367f7ecdef]));
              }

              void OrbitCovarianceHistoryMetadata::setCovBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasis_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasisID_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovConfidence(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovConfidence_10f281d777284cea], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovFrameEpoch_20affcbd28542333], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovID_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovNextID_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovOrdering(const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovOrdering_aaad25c735d17afe], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovPrevID_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovReferenceFrame_f55eee1236275bb1], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovScaleMax(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovScaleMax_10f281d777284cea], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovScaleMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovScaleMin_10f281d777284cea], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovType_94fd56ae4b55b80e], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovUnits_4ccaedadb068bdeb], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::validate(jdouble a0) const
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
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovarianceHistoryMetadata_init_(t_OrbitCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasis(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasisID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovConfidence(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovNextID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovOrdering(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovPrevID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMax(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMin(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovType(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovUnits(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_validate(t_OrbitCovarianceHistoryMetadata *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasis(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasisID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covConfidence(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covNextID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covOrdering(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covPrevID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covType(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covUnits(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitCovarianceHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covBasis),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covBasisID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covConfidence),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covFrameEpoch),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covNextID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covOrdering),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covPrevID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covReferenceFrame),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covScaleMax),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covScaleMin),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covType),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covUnits),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovBasis, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovBasisID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovConfidence, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovNextID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovOrdering, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovPrevID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovScaleMax, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovScaleMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovBasis, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovBasisID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovConfidence, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovFrameEpoch, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovNextID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovOrdering, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovPrevID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovReferenceFrame, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovScaleMax, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovScaleMin, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovType, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovUnits, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistoryMetadata)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_OrbitCovarianceHistoryMetadata_init_ },
                { Py_tp_getset, t_OrbitCovarianceHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistoryMetadata, t_OrbitCovarianceHistoryMetadata, OrbitCovarianceHistoryMetadata);

              void t_OrbitCovarianceHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistoryMetadata), &PY_TYPE_DEF(OrbitCovarianceHistoryMetadata), module, "OrbitCovarianceHistoryMetadata", 0);
              }

              void t_OrbitCovarianceHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "class_", make_descriptor(OrbitCovarianceHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "wrapfn_", make_descriptor(t_OrbitCovarianceHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistoryMetadata::wrap_Object(OrbitCovarianceHistoryMetadata(((t_OrbitCovarianceHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovarianceHistoryMetadata_init_(t_OrbitCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitCovarianceHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitCovarianceHistoryMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasis(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasis());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasisID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasisID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovConfidence(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovConfidence());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovNextID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovNextID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovOrdering(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovOrdering());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovPrevID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovPrevID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMax(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovScaleMax());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMin(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovScaleMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovType(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovUnits(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasis", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasisID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovConfidence(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovConfidence", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovNextID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::parameters_))
                {
                  OBJ_CALL(self->object.setCovOrdering(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovOrdering", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovPrevID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovScaleMax(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovScaleMax", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovScaleMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovScaleMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setCovType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovType", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setCovUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovUnits", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_validate(t_OrbitCovarianceHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitCovarianceHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasis(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasis());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasis", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasisID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasisID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasisID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covConfidence(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovConfidence());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovConfidence(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covConfidence", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covNextID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovNextID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covNextID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covOrdering(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovOrdering());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovOrdering(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covOrdering", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covPrevID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovPrevID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covPrevID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovScaleMax());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovScaleMax(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covScaleMax", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovScaleMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovScaleMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covScaleMin", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covType(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covType", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covUnits(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covUnits", arg);
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
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RtcmData::RtcmData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
#include "org/orekit/forces/PointingPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *PointingPanel::class$ = NULL;
      jmethodID *PointingPanel::mids$ = NULL;
      bool PointingPanel::live$ = false;

      jclass PointingPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/PointingPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_33885170a7f15c56] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DDDDD)V");
          mids$[mid_getNormal_503a254311e5da95] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_3fff8c49d4e2dc6b] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointingPanel::PointingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_33885170a7f15c56, a0.this$, a1.this$, a2, a3, a4, a5, a6)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PointingPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_503a254311e5da95], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PointingPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_3fff8c49d4e2dc6b], a0.this$));
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
      static PyObject *t_PointingPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointingPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PointingPanel_init_(t_PointingPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointingPanel_getNormal(t_PointingPanel *self, PyObject *args);

      static PyMethodDef t_PointingPanel__methods_[] = {
        DECLARE_METHOD(t_PointingPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointingPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointingPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointingPanel)[] = {
        { Py_tp_methods, t_PointingPanel__methods_ },
        { Py_tp_init, (void *) t_PointingPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointingPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(PointingPanel, t_PointingPanel, PointingPanel);

      void t_PointingPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(PointingPanel), &PY_TYPE_DEF(PointingPanel), module, "PointingPanel", 0);
      }

      void t_PointingPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointingPanel), "class_", make_descriptor(PointingPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointingPanel), "wrapfn_", make_descriptor(t_PointingPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointingPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointingPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointingPanel::initializeClass, 1)))
          return NULL;
        return t_PointingPanel::wrap_Object(PointingPanel(((t_PointingPanel *) arg)->object.this$));
      }
      static PyObject *t_PointingPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointingPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PointingPanel_init_(t_PointingPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        PointingPanel object((jobject) NULL);

        if (!parseArgs(args, "kkDDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          INT_CALL(object = PointingPanel(a0, a1, a2, a3, a4, a5, a6));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PointingPanel_getNormal(t_PointingPanel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(PointingPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/J2DifferentialEffect.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *J2DifferentialEffect::class$ = NULL;
        jmethodID *J2DifferentialEffect::mids$ = NULL;
        bool J2DifferentialEffect::live$ = false;

        jclass J2DifferentialEffect::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/J2DifferentialEffect");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_519c5a28a78e2613] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;ZLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_4f777417c3208264] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;ZLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_ed3daebd29329531] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;ZDDD)V");
            mids$[mid_init$_99b1fb73c43a8338] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;ZDDD)V");
            mids$[mid_apply_f66341a46b0a495a] = env->getMethodID(cls, "apply", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_apply_2c4cc16b11f79a6c] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_519c5a28a78e2613, a0.this$, a1.this$, a2, a3.this$)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a1, jboolean a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f777417c3208264, a0.this$, a1.this$, a2, a3.this$)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed3daebd29329531, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99b1fb73c43a8338, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        ::org::orekit::orbits::Orbit J2DifferentialEffect::apply(const ::org::orekit::orbits::Orbit & a0) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_apply_f66341a46b0a495a], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState J2DifferentialEffect::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_2c4cc16b11f79a6c], a0.this$));
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
        static PyObject *t_J2DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_J2DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg);
        static int t_J2DifferentialEffect_init_(t_J2DifferentialEffect *self, PyObject *args, PyObject *kwds);
        static PyObject *t_J2DifferentialEffect_apply(t_J2DifferentialEffect *self, PyObject *args);

        static PyMethodDef t_J2DifferentialEffect__methods_[] = {
          DECLARE_METHOD(t_J2DifferentialEffect, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_J2DifferentialEffect, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_J2DifferentialEffect, apply, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(J2DifferentialEffect)[] = {
          { Py_tp_methods, t_J2DifferentialEffect__methods_ },
          { Py_tp_init, (void *) t_J2DifferentialEffect_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(J2DifferentialEffect)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(J2DifferentialEffect, t_J2DifferentialEffect, J2DifferentialEffect);

        void t_J2DifferentialEffect::install(PyObject *module)
        {
          installType(&PY_TYPE(J2DifferentialEffect), &PY_TYPE_DEF(J2DifferentialEffect), module, "J2DifferentialEffect", 0);
        }

        void t_J2DifferentialEffect::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "class_", make_descriptor(J2DifferentialEffect::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "wrapfn_", make_descriptor(t_J2DifferentialEffect::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_J2DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, J2DifferentialEffect::initializeClass, 1)))
            return NULL;
          return t_J2DifferentialEffect::wrap_Object(J2DifferentialEffect(((t_J2DifferentialEffect *) arg)->object.this$));
        }
        static PyObject *t_J2DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, J2DifferentialEffect::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_J2DifferentialEffect_init_(t_J2DifferentialEffect *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              jboolean a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a1((jobject) NULL);
              jboolean a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZDDD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_J2DifferentialEffect_apply(t_J2DifferentialEffect *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/TriggerDate.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *TriggerDate::class$ = NULL;
          jmethodID *TriggerDate::mids$ = NULL;
          bool TriggerDate::live$ = false;

          jclass TriggerDate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/TriggerDate");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e40cbcd903d0f619] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ZLorg/orekit/forces/maneuvers/Maneuver;D)V");
              mids$[mid_getAdditionalState_2a145999b8c9a41d] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getMassDepletionDelay_6370f272e5bf9b88] = env->getMethodID(cls, "getMassDepletionDelay", "()Lorg/orekit/forces/maneuvers/jacobians/MassDepletionDelay;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_maneuverTriggered_45bf76e836befe86] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_resetState_2c4cc16b11f79a6c] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_yields_abdf3beb789bbd4e] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TriggerDate::TriggerDate(const ::java::lang::String & a0, const ::java::lang::String & a1, jboolean a2, const ::org::orekit::forces::maneuvers::Maneuver & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e40cbcd903d0f619, a0.this$, a1.this$, a2, a3.this$, a4)) {}

          JArray< jdouble > TriggerDate::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_2a145999b8c9a41d], a0.this$));
          }

          ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay TriggerDate::getMassDepletionDelay() const
          {
            return ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay(env->callObjectMethod(this$, mids$[mid_getMassDepletionDelay_6370f272e5bf9b88]));
          }

          ::java::lang::String TriggerDate::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          void TriggerDate::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
          }

          void TriggerDate::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_45bf76e836befe86], a0.this$, a1);
          }

          ::org::orekit::propagation::SpacecraftState TriggerDate::resetState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_2c4cc16b11f79a6c], a0.this$));
          }

          jboolean TriggerDate::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_abdf3beb789bbd4e], a0.this$);
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
      namespace maneuvers {
        namespace jacobians {
          static PyObject *t_TriggerDate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TriggerDate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TriggerDate_init_(t_TriggerDate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TriggerDate_getAdditionalState(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_getMassDepletionDelay(t_TriggerDate *self);
          static PyObject *t_TriggerDate_getName(t_TriggerDate *self);
          static PyObject *t_TriggerDate_init(t_TriggerDate *self, PyObject *args);
          static PyObject *t_TriggerDate_maneuverTriggered(t_TriggerDate *self, PyObject *args);
          static PyObject *t_TriggerDate_resetState(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_yields(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_get__massDepletionDelay(t_TriggerDate *self, void *data);
          static PyObject *t_TriggerDate_get__name(t_TriggerDate *self, void *data);
          static PyGetSetDef t_TriggerDate__fields_[] = {
            DECLARE_GET_FIELD(t_TriggerDate, massDepletionDelay),
            DECLARE_GET_FIELD(t_TriggerDate, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TriggerDate__methods_[] = {
            DECLARE_METHOD(t_TriggerDate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TriggerDate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TriggerDate, getAdditionalState, METH_O),
            DECLARE_METHOD(t_TriggerDate, getMassDepletionDelay, METH_NOARGS),
            DECLARE_METHOD(t_TriggerDate, getName, METH_NOARGS),
            DECLARE_METHOD(t_TriggerDate, init, METH_VARARGS),
            DECLARE_METHOD(t_TriggerDate, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_TriggerDate, resetState, METH_O),
            DECLARE_METHOD(t_TriggerDate, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TriggerDate)[] = {
            { Py_tp_methods, t_TriggerDate__methods_ },
            { Py_tp_init, (void *) t_TriggerDate_init_ },
            { Py_tp_getset, t_TriggerDate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TriggerDate)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TriggerDate, t_TriggerDate, TriggerDate);

          void t_TriggerDate::install(PyObject *module)
          {
            installType(&PY_TYPE(TriggerDate), &PY_TYPE_DEF(TriggerDate), module, "TriggerDate", 0);
          }

          void t_TriggerDate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "class_", make_descriptor(TriggerDate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "wrapfn_", make_descriptor(t_TriggerDate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TriggerDate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TriggerDate::initializeClass, 1)))
              return NULL;
            return t_TriggerDate::wrap_Object(TriggerDate(((t_TriggerDate *) arg)->object.this$));
          }
          static PyObject *t_TriggerDate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TriggerDate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TriggerDate_init_(t_TriggerDate *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean a2;
            ::org::orekit::forces::maneuvers::Maneuver a3((jobject) NULL);
            jdouble a4;
            TriggerDate object((jobject) NULL);

            if (!parseArgs(args, "ssZkD", ::org::orekit::forces::maneuvers::Maneuver::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = TriggerDate(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TriggerDate_getAdditionalState(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAdditionalState(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_getMassDepletionDelay(t_TriggerDate *self)
          {
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay result((jobject) NULL);
            OBJ_CALL(result = self->object.getMassDepletionDelay());
            return ::org::orekit::forces::maneuvers::jacobians::t_MassDepletionDelay::wrap_Object(result);
          }

          static PyObject *t_TriggerDate_getName(t_TriggerDate *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_TriggerDate_init(t_TriggerDate *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_TriggerDate_maneuverTriggered(t_TriggerDate *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_TriggerDate_resetState(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_yields(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_get__massDepletionDelay(t_TriggerDate *self, void *data)
          {
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay value((jobject) NULL);
            OBJ_CALL(value = self->object.getMassDepletionDelay());
            return ::org::orekit::forces::maneuvers::jacobians::t_MassDepletionDelay::wrap_Object(value);
          }

          static PyObject *t_TriggerDate_get__name(t_TriggerDate *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Coordinate::class$ = NULL;
        jmethodID *SP3Coordinate::mids$ = NULL;
        bool SP3Coordinate::live$ = false;
        SP3Coordinate *SP3Coordinate::DUMMY = NULL;

        jclass SP3Coordinate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Coordinate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a59e7ab90f97ad08] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDDZZZZ)V");
            mids$[mid_getClockAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getClockAccuracy", "()D");
            mids$[mid_getClockCorrection_557b8123390d8d0c] = env->getMethodID(cls, "getClockCorrection", "()D");
            mids$[mid_getClockRateAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getClockRateAccuracy", "()D");
            mids$[mid_getClockRateChange_557b8123390d8d0c] = env->getMethodID(cls, "getClockRateChange", "()D");
            mids$[mid_getPositionAccuracy_f88961cca75a2c0a] = env->getMethodID(cls, "getPositionAccuracy", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getVelocityAccuracy_f88961cca75a2c0a] = env->getMethodID(cls, "getVelocityAccuracy", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_hasClockEvent_89b302893bdbe1f1] = env->getMethodID(cls, "hasClockEvent", "()Z");
            mids$[mid_hasClockPrediction_89b302893bdbe1f1] = env->getMethodID(cls, "hasClockPrediction", "()Z");
            mids$[mid_hasOrbitManeuverEvent_89b302893bdbe1f1] = env->getMethodID(cls, "hasOrbitManeuverEvent", "()Z");
            mids$[mid_hasOrbitPrediction_89b302893bdbe1f1] = env->getMethodID(cls, "hasOrbitPrediction", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DUMMY = new SP3Coordinate(env->getStaticObjectField(cls, "DUMMY", "Lorg/orekit/files/sp3/SP3Coordinate;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Coordinate::SP3Coordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jboolean a9, jboolean a10, jboolean a11, jboolean a12) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a59e7ab90f97ad08, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8, a9, a10, a11, a12)) {}

        jdouble SP3Coordinate::getClockAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockAccuracy_557b8123390d8d0c]);
        }

        jdouble SP3Coordinate::getClockCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockCorrection_557b8123390d8d0c]);
        }

        jdouble SP3Coordinate::getClockRateAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockRateAccuracy_557b8123390d8d0c]);
        }

        jdouble SP3Coordinate::getClockRateChange() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockRateChange_557b8123390d8d0c]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SP3Coordinate::getPositionAccuracy() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPositionAccuracy_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SP3Coordinate::getVelocityAccuracy() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocityAccuracy_f88961cca75a2c0a]));
        }

        jboolean SP3Coordinate::hasClockEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasClockEvent_89b302893bdbe1f1]);
        }

        jboolean SP3Coordinate::hasClockPrediction() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasClockPrediction_89b302893bdbe1f1]);
        }

        jboolean SP3Coordinate::hasOrbitManeuverEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasOrbitManeuverEvent_89b302893bdbe1f1]);
        }

        jboolean SP3Coordinate::hasOrbitPrediction() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasOrbitPrediction_89b302893bdbe1f1]);
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
        static PyObject *t_SP3Coordinate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Coordinate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Coordinate_init_(t_SP3Coordinate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Coordinate_getClockAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockCorrection(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockRateAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockRateChange(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getPositionAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getVelocityAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasClockEvent(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasClockPrediction(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasOrbitManeuverEvent(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasOrbitPrediction(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_get__clockAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockCorrection(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockRateAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockRateChange(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__positionAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__velocityAccuracy(t_SP3Coordinate *self, void *data);
        static PyGetSetDef t_SP3Coordinate__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Coordinate, clockAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockCorrection),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockRateAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockRateChange),
          DECLARE_GET_FIELD(t_SP3Coordinate, positionAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, velocityAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Coordinate__methods_[] = {
          DECLARE_METHOD(t_SP3Coordinate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Coordinate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Coordinate, getClockAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockCorrection, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockRateAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockRateChange, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getPositionAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getVelocityAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasClockEvent, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasClockPrediction, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasOrbitManeuverEvent, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasOrbitPrediction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Coordinate)[] = {
          { Py_tp_methods, t_SP3Coordinate__methods_ },
          { Py_tp_init, (void *) t_SP3Coordinate_init_ },
          { Py_tp_getset, t_SP3Coordinate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Coordinate)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
          NULL
        };

        DEFINE_TYPE(SP3Coordinate, t_SP3Coordinate, SP3Coordinate);

        void t_SP3Coordinate::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Coordinate), &PY_TYPE_DEF(SP3Coordinate), module, "SP3Coordinate", 0);
        }

        void t_SP3Coordinate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "class_", make_descriptor(SP3Coordinate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "wrapfn_", make_descriptor(t_SP3Coordinate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Coordinate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "DUMMY", make_descriptor(t_SP3Coordinate::wrap_Object(*SP3Coordinate::DUMMY)));
        }

        static PyObject *t_SP3Coordinate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Coordinate::initializeClass, 1)))
            return NULL;
          return t_SP3Coordinate::wrap_Object(SP3Coordinate(((t_SP3Coordinate *) arg)->object.this$));
        }
        static PyObject *t_SP3Coordinate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Coordinate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Coordinate_init_(t_SP3Coordinate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jboolean a9;
          jboolean a10;
          jboolean a11;
          jboolean a12;
          SP3Coordinate object((jobject) NULL);

          if (!parseArgs(args, "kkkkkDDDDZZZZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
          {
            INT_CALL(object = SP3Coordinate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Coordinate_getClockAccuracy(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockCorrection(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockRateAccuracy(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockRateAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockRateChange(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockRateChange());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getPositionAccuracy(t_SP3Coordinate *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SP3Coordinate_getVelocityAccuracy(t_SP3Coordinate *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocityAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SP3Coordinate_hasClockEvent(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasClockEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasClockPrediction(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasClockPrediction());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasOrbitManeuverEvent(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasOrbitManeuverEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasOrbitPrediction(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasOrbitPrediction());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_get__clockAccuracy(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockCorrection(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockCorrection());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockRateAccuracy(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockRateAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockRateChange(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockRateChange());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__positionAccuracy(t_SP3Coordinate *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SP3Coordinate_get__velocityAccuracy(t_SP3Coordinate *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocityAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *AbstractBuilder::class$ = NULL;
          jmethodID *AbstractBuilder::mids$ = NULL;
          bool AbstractBuilder::live$ = false;

          jclass AbstractBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/AbstractBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConventions_690653480c12ac72] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_b259b25d6495e5b3] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getEquatorialRadius_557b8123390d8d0c] = env->getMethodID(cls, "getEquatorialRadius", "()D");
              mids$[mid_getFlattening_557b8123390d8d0c] = env->getMethodID(cls, "getFlattening", "()D");
              mids$[mid_getMissionReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getRangeUnitsConverter_5806a7bc4fd700bf] = env->getMethodID(cls, "getRangeUnitsConverter", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;");
              mids$[mid_withConventions_a430d35ec0120e11] = env->getMethodID(cls, "withConventions", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withDataContext_f1ec720b340e65e6] = env->getMethodID(cls, "withDataContext", "(Lorg/orekit/data/DataContext;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withEquatorialRadius_07391098c80e95e2] = env->getMethodID(cls, "withEquatorialRadius", "(D)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withFlattening_07391098c80e95e2] = env->getMethodID(cls, "withFlattening", "(D)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withMissionReferenceDate_13fd3e8f49e19c03] = env->getMethodID(cls, "withMissionReferenceDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withRangeUnitsConverter_4667add1a360d56c] = env->getMethodID(cls, "withRangeUnitsConverter", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_create_cbd54da82dabf79c] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::IERSConventions AbstractBuilder::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_690653480c12ac72]));
          }

          ::org::orekit::data::DataContext AbstractBuilder::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_b259b25d6495e5b3]));
          }

          jdouble AbstractBuilder::getEquatorialRadius() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_557b8123390d8d0c]);
          }

          jdouble AbstractBuilder::getFlattening() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlattening_557b8123390d8d0c]);
          }

          ::org::orekit::time::AbsoluteDate AbstractBuilder::getMissionReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_7a97f7e149e79afb]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter AbstractBuilder::getRangeUnitsConverter() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter(env->callObjectMethod(this$, mids$[mid_getRangeUnitsConverter_5806a7bc4fd700bf]));
          }

          AbstractBuilder AbstractBuilder::withConventions(const ::org::orekit::utils::IERSConventions & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withConventions_a430d35ec0120e11], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withDataContext(const ::org::orekit::data::DataContext & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withDataContext_f1ec720b340e65e6], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withEquatorialRadius(jdouble a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withEquatorialRadius_07391098c80e95e2], a0));
          }

          AbstractBuilder AbstractBuilder::withFlattening(jdouble a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withFlattening_07391098c80e95e2], a0));
          }

          AbstractBuilder AbstractBuilder::withMissionReferenceDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withMissionReferenceDate_13fd3e8f49e19c03], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withRangeUnitsConverter(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withRangeUnitsConverter_4667add1a360d56c], a0.this$));
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
          static PyObject *t_AbstractBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractBuilder_of_(t_AbstractBuilder *self, PyObject *args);
          static PyObject *t_AbstractBuilder_getConventions(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getDataContext(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getEquatorialRadius(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getFlattening(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getMissionReferenceDate(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getRangeUnitsConverter(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_withConventions(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withDataContext(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withEquatorialRadius(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withFlattening(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withMissionReferenceDate(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withRangeUnitsConverter(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_get__conventions(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__dataContext(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__equatorialRadius(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__flattening(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__missionReferenceDate(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__rangeUnitsConverter(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__parameters_(t_AbstractBuilder *self, void *data);
          static PyGetSetDef t_AbstractBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractBuilder, conventions),
            DECLARE_GET_FIELD(t_AbstractBuilder, dataContext),
            DECLARE_GET_FIELD(t_AbstractBuilder, equatorialRadius),
            DECLARE_GET_FIELD(t_AbstractBuilder, flattening),
            DECLARE_GET_FIELD(t_AbstractBuilder, missionReferenceDate),
            DECLARE_GET_FIELD(t_AbstractBuilder, rangeUnitsConverter),
            DECLARE_GET_FIELD(t_AbstractBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractBuilder__methods_[] = {
            DECLARE_METHOD(t_AbstractBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractBuilder, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getEquatorialRadius, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getFlattening, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getMissionReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getRangeUnitsConverter, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, withConventions, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withDataContext, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withEquatorialRadius, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withFlattening, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withMissionReferenceDate, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withRangeUnitsConverter, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractBuilder)[] = {
            { Py_tp_methods, t_AbstractBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractBuilder, t_AbstractBuilder, AbstractBuilder);
          PyObject *t_AbstractBuilder::wrap_Object(const AbstractBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractBuilder *self = (t_AbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractBuilder *self = (t_AbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractBuilder), &PY_TYPE_DEF(AbstractBuilder), module, "AbstractBuilder", 0);
          }

          void t_AbstractBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "class_", make_descriptor(AbstractBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "wrapfn_", make_descriptor(t_AbstractBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractBuilder::initializeClass, 1)))
              return NULL;
            return t_AbstractBuilder::wrap_Object(AbstractBuilder(((t_AbstractBuilder *) arg)->object.this$));
          }
          static PyObject *t_AbstractBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractBuilder_of_(t_AbstractBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractBuilder_getConventions(t_AbstractBuilder *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getDataContext(t_AbstractBuilder *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getEquatorialRadius(t_AbstractBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getEquatorialRadius());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_AbstractBuilder_getFlattening(t_AbstractBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFlattening());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_AbstractBuilder_getMissionReferenceDate(t_AbstractBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMissionReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getRangeUnitsConverter(t_AbstractBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter result((jobject) NULL);
            OBJ_CALL(result = self->object.getRangeUnitsConverter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_withConventions(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.withConventions(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withConventions", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withDataContext(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::data::DataContext a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withDataContext(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDataContext", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withEquatorialRadius(t_AbstractBuilder *self, PyObject *arg)
          {
            jdouble a0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withEquatorialRadius(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEquatorialRadius", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withFlattening(t_AbstractBuilder *self, PyObject *arg)
          {
            jdouble a0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withFlattening(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withFlattening", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withMissionReferenceDate(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withMissionReferenceDate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withMissionReferenceDate", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withRangeUnitsConverter(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withRangeUnitsConverter(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withRangeUnitsConverter", arg);
            return NULL;
          }
          static PyObject *t_AbstractBuilder_get__parameters_(t_AbstractBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractBuilder_get__conventions(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__dataContext(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__equatorialRadius(t_AbstractBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getEquatorialRadius());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractBuilder_get__flattening(t_AbstractBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlattening());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractBuilder_get__missionReferenceDate(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMissionReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__rangeUnitsConverter(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter value((jobject) NULL);
            OBJ_CALL(value = self->object.getRangeUnitsConverter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/python/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonFieldUnivariateFunction::class$ = NULL;
      jmethodID *PythonFieldUnivariateFunction::mids$ = NULL;
      bool PythonFieldUnivariateFunction::live$ = false;

      jclass PythonFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldUnivariateFunction::PythonFieldUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldUnivariateFunction::pythonExtension(jlong a0) const
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
    namespace python {
      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self);
      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFieldUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldUnivariateFunction, t_PythonFieldUnivariateFunction, PythonFieldUnivariateFunction);

      void t_PythonFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldUnivariateFunction), &PY_TYPE_DEF(PythonFieldUnivariateFunction), module, "PythonFieldUnivariateFunction", 1);
      }

      void t_PythonFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "class_", make_descriptor(PythonFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "wrapfn_", make_descriptor(t_PythonFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldUnivariateFunction_pythonDecRef0 },
          { "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFieldUnivariateFunction::wrap_Object(PythonFieldUnivariateFunction(((t_PythonFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonFieldUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
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

      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data)
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
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanLoadDeformationCoefficients::class$ = NULL;
          jmethodID *OceanLoadDeformationCoefficients::mids$ = NULL;
          bool OceanLoadDeformationCoefficients::live$ = false;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::GEGOUT = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_1996 = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_2003 = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_2010 = NULL;

          jclass OceanLoadDeformationCoefficients::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCoefficients_a53a7513ecedada2] = env->getMethodID(cls, "getCoefficients", "()[D");
              mids$[mid_valueOf_6b95500457f5a1c2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_values_bbf84a506094fe9b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GEGOUT = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "GEGOUT", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_1996 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_1996", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_2003 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_2003", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_2010 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_2010", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jdouble > OceanLoadDeformationCoefficients::getCoefficients() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_a53a7513ecedada2]));
          }

          OceanLoadDeformationCoefficients OceanLoadDeformationCoefficients::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OceanLoadDeformationCoefficients(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6b95500457f5a1c2], a0.this$));
          }

          JArray< OceanLoadDeformationCoefficients > OceanLoadDeformationCoefficients::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OceanLoadDeformationCoefficients >(env->callStaticObjectMethod(cls, mids$[mid_values_bbf84a506094fe9b]));
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
          static PyObject *t_OceanLoadDeformationCoefficients_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadDeformationCoefficients_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadDeformationCoefficients_of_(t_OceanLoadDeformationCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadDeformationCoefficients_getCoefficients(t_OceanLoadDeformationCoefficients *self);
          static PyObject *t_OceanLoadDeformationCoefficients_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OceanLoadDeformationCoefficients_values(PyTypeObject *type);
          static PyObject *t_OceanLoadDeformationCoefficients_get__coefficients(t_OceanLoadDeformationCoefficients *self, void *data);
          static PyObject *t_OceanLoadDeformationCoefficients_get__parameters_(t_OceanLoadDeformationCoefficients *self, void *data);
          static PyGetSetDef t_OceanLoadDeformationCoefficients__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadDeformationCoefficients, coefficients),
            DECLARE_GET_FIELD(t_OceanLoadDeformationCoefficients, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadDeformationCoefficients__methods_[] = {
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, of_, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, getCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadDeformationCoefficients)[] = {
            { Py_tp_methods, t_OceanLoadDeformationCoefficients__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OceanLoadDeformationCoefficients__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadDeformationCoefficients)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OceanLoadDeformationCoefficients, t_OceanLoadDeformationCoefficients, OceanLoadDeformationCoefficients);
          PyObject *t_OceanLoadDeformationCoefficients::wrap_Object(const OceanLoadDeformationCoefficients& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OceanLoadDeformationCoefficients::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OceanLoadDeformationCoefficients *self = (t_OceanLoadDeformationCoefficients *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OceanLoadDeformationCoefficients::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OceanLoadDeformationCoefficients::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OceanLoadDeformationCoefficients *self = (t_OceanLoadDeformationCoefficients *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OceanLoadDeformationCoefficients::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadDeformationCoefficients), &PY_TYPE_DEF(OceanLoadDeformationCoefficients), module, "OceanLoadDeformationCoefficients", 0);
          }

          void t_OceanLoadDeformationCoefficients::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "class_", make_descriptor(OceanLoadDeformationCoefficients::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "wrapfn_", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "boxfn_", make_descriptor(boxObject));
            env->getClass(OceanLoadDeformationCoefficients::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "GEGOUT", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::GEGOUT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_1996", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_1996)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_2003", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_2010", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_2010)));
          }

          static PyObject *t_OceanLoadDeformationCoefficients_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadDeformationCoefficients::initializeClass, 1)))
              return NULL;
            return t_OceanLoadDeformationCoefficients::wrap_Object(OceanLoadDeformationCoefficients(((t_OceanLoadDeformationCoefficients *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadDeformationCoefficients_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadDeformationCoefficients::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OceanLoadDeformationCoefficients_of_(t_OceanLoadDeformationCoefficients *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OceanLoadDeformationCoefficients_getCoefficients(t_OceanLoadDeformationCoefficients *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getCoefficients());
            return result.wrap();
          }

          static PyObject *t_OceanLoadDeformationCoefficients_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OceanLoadDeformationCoefficients result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::valueOf(a0));
              return t_OceanLoadDeformationCoefficients::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OceanLoadDeformationCoefficients_values(PyTypeObject *type)
          {
            JArray< OceanLoadDeformationCoefficients > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::values());
            return JArray<jobject>(result.this$).wrap(t_OceanLoadDeformationCoefficients::wrap_jobject);
          }
          static PyObject *t_OceanLoadDeformationCoefficients_get__parameters_(t_OceanLoadDeformationCoefficients *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OceanLoadDeformationCoefficients_get__coefficients(t_OceanLoadDeformationCoefficients *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getCoefficients());
            return value.wrap();
          }
        }
      }
    }
  }
}

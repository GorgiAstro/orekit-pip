#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative::class$ = NULL;
        jmethodID *UnivariateDerivative::mids$ = NULL;
        bool UnivariateDerivative::live$ = false;

        jclass UnivariateDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDerivative_2afcbc21f4e57ab2] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getFreeParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getPartialDerivative_bff393394ab19dc1] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_toDerivativeStructure_57983c4d4b4a2f7f] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative::UnivariateDerivative() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble UnivariateDerivative::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_2afcbc21f4e57ab2], a0);
        }

        jint UnivariateDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_55546ef6a647f39b]);
        }

        jdouble UnivariateDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_bff393394ab19dc1], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_57983c4d4b4a2f7f]));
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
      namespace differentiation {
        static PyObject *t_UnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative_of_(t_UnivariateDerivative *self, PyObject *args);
        static int t_UnivariateDerivative_init_(t_UnivariateDerivative *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative_getDerivative(t_UnivariateDerivative *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative_getFreeParameters(t_UnivariateDerivative *self);
        static PyObject *t_UnivariateDerivative_getPartialDerivative(t_UnivariateDerivative *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative_toDerivativeStructure(t_UnivariateDerivative *self);
        static PyObject *t_UnivariateDerivative_get__freeParameters(t_UnivariateDerivative *self, void *data);
        static PyObject *t_UnivariateDerivative_get__parameters_(t_UnivariateDerivative *self, void *data);
        static PyGetSetDef t_UnivariateDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative, freeParameters),
          DECLARE_GET_FIELD(t_UnivariateDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative, getDerivative, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative, toDerivativeStructure, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative)[] = {
          { Py_tp_methods, t_UnivariateDerivative__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative_init_ },
          { Py_tp_getset, t_UnivariateDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative, t_UnivariateDerivative, UnivariateDerivative);
        PyObject *t_UnivariateDerivative::wrap_Object(const UnivariateDerivative& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative *self = (t_UnivariateDerivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative *self = (t_UnivariateDerivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative), &PY_TYPE_DEF(UnivariateDerivative), module, "UnivariateDerivative", 0);
        }

        void t_UnivariateDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "class_", make_descriptor(UnivariateDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "wrapfn_", make_descriptor(t_UnivariateDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative::wrap_Object(UnivariateDerivative(((t_UnivariateDerivative *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative_of_(t_UnivariateDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative_init_(t_UnivariateDerivative *self, PyObject *args, PyObject *kwds)
        {
          UnivariateDerivative object((jobject) NULL);

          INT_CALL(object = UnivariateDerivative());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnivariateDerivative_getDerivative(t_UnivariateDerivative *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative_getFreeParameters(t_UnivariateDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateDerivative_getPartialDerivative(t_UnivariateDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative_toDerivativeStructure(t_UnivariateDerivative *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }
        static PyObject *t_UnivariateDerivative_get__parameters_(t_UnivariateDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative_get__freeParameters(t_UnivariateDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
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
          mids$[mid_add_e74c5d5fdc2ea025] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_c2695120fce254e7] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_blendArithmeticallyWith_532566022520f971] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copy_81d49643ce3a3c0b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copySubMatrix_c37e1208ec719e9a] = env->getMethodID(cls, "copySubMatrix", "([I[I[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_copySubMatrix_66c7ed41fa5e9c95] = env->getMethodID(cls, "copySubMatrix", "(IIII[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_createMatrix_add2e370542edc2f] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumn_32f3c1a06713be87] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnMatrix_2b05a6661cb56e40] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_06abfeddf4c4a28c] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_79f47d23e197eb68] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_d0f2803baa5859d6] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getRow_32f3c1a06713be87] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowMatrix_2b05a6661cb56e40] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_06abfeddf4c4a28c] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_6f66e4ac0405ef8b] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSubMatrix_fccf627d1096268f] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getTrace_2ff8de927fda4153] = env->getMethodID(cls, "getTrace", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_multiply_e74c5d5fdc2ea025] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_c2695120fce254e7] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_e74c5d5fdc2ea025] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_operate_0721a6f091b7d386] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_operate_0c912ec1e9dd9ed7] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_power_2b05a6661cb56e40] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_0721a6f091b7d386] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_e74c5d5fdc2ea025] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_0c912ec1e9dd9ed7] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_scalarAdd_7f54bca136ec1209] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_7f54bca136ec1209] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_a38853481346cb12] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_8b62bd16a362a59d] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_cd62bfbc5992c85f] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_c2695120fce254e7] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_a38853481346cb12] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_8b62bd16a362a59d] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_cd62bfbc5992c85f] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_3b5f1aa21de3920a] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_e74c5d5fdc2ea025] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transpose_81d49643ce3a3c0b] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_e74c5d5fdc2ea025] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_695885c54f7e1d00] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_0cfd3392c17e8c72] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_81e6970a97ecd473] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_aa15efee847b0fad] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_695885c54f7e1d00] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_0cfd3392c17e8c72] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_81e6970a97ecd473] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_aa15efee847b0fad] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_695885c54f7e1d00] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_0cfd3392c17e8c72] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_81e6970a97ecd473] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_aa15efee847b0fad] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldMatrix FieldMatrix::add(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_e74c5d5fdc2ea025], a0.this$));
      }

      void FieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      FieldMatrix FieldMatrix::blendArithmeticallyWith(const FieldMatrix & a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_532566022520f971], a0.this$, a1.this$));
      }

      FieldMatrix FieldMatrix::copy() const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_81d49643ce3a3c0b]));
      }

      void FieldMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_c37e1208ec719e9a], a0.this$, a1.this$, a2.this$);
      }

      void FieldMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< ::org::hipparchus::FieldElement > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_66c7ed41fa5e9c95], a0, a1, a2, a3, a4.this$);
      }

      FieldMatrix FieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_add2e370542edc2f], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_32f3c1a06713be87], a0));
      }

      FieldMatrix FieldMatrix::getColumnMatrix(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_2b05a6661cb56e40], a0));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_06abfeddf4c4a28c], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > FieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_79f47d23e197eb68]));
      }

      ::org::hipparchus::FieldElement FieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_d0f2803baa5859d6], a0, a1));
      }

      ::org::hipparchus::Field FieldMatrix::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_32f3c1a06713be87], a0));
      }

      FieldMatrix FieldMatrix::getRowMatrix(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_2b05a6661cb56e40], a0));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_06abfeddf4c4a28c], a0));
      }

      FieldMatrix FieldMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_6f66e4ac0405ef8b], a0.this$, a1.this$));
      }

      FieldMatrix FieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_fccf627d1096268f], a0, a1, a2, a3));
      }

      ::org::hipparchus::FieldElement FieldMatrix::getTrace() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getTrace_2ff8de927fda4153]));
      }

      FieldMatrix FieldMatrix::multiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e74c5d5fdc2ea025], a0.this$));
      }

      void FieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      FieldMatrix FieldMatrix::multiplyTransposed(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e74c5d5fdc2ea025], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_0721a6f091b7d386], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::operate(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_operate_0c912ec1e9dd9ed7], a0.this$));
      }

      FieldMatrix FieldMatrix::power(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_power_2b05a6661cb56e40], a0));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_0721a6f091b7d386], a0.this$));
      }

      FieldMatrix FieldMatrix::preMultiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_e74c5d5fdc2ea025], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_preMultiply_0c912ec1e9dd9ed7], a0.this$));
      }

      FieldMatrix FieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_7f54bca136ec1209], a0.this$));
      }

      FieldMatrix FieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_7f54bca136ec1209], a0.this$));
      }

      void FieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_a38853481346cb12], a0, a1.this$);
      }

      void FieldMatrix::setColumnMatrix(jint a0, const FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_8b62bd16a362a59d], a0, a1.this$);
      }

      void FieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_cd62bfbc5992c85f], a0, a1.this$);
      }

      void FieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      void FieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_a38853481346cb12], a0, a1.this$);
      }

      void FieldMatrix::setRowMatrix(jint a0, const FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_8b62bd16a362a59d], a0, a1.this$);
      }

      void FieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_cd62bfbc5992c85f], a0, a1.this$);
      }

      void FieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_3b5f1aa21de3920a], a0.this$, a1, a2);
      }

      FieldMatrix FieldMatrix::subtract(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_e74c5d5fdc2ea025], a0.this$));
      }

      FieldMatrix FieldMatrix::transpose() const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_81d49643ce3a3c0b]));
      }

      FieldMatrix FieldMatrix::transposeMultiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e74c5d5fdc2ea025], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_695885c54f7e1d00], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_0cfd3392c17e8c72], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_81e6970a97ecd473], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_aa15efee847b0fad], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_695885c54f7e1d00], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_0cfd3392c17e8c72], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_81e6970a97ecd473], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_aa15efee847b0fad], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_695885c54f7e1d00], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_0cfd3392c17e8c72], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_81e6970a97ecd473], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_aa15efee847b0fad], a0.this$, a1, a2, a3, a4));
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistoryMetadataKey::class$ = NULL;
              jmethodID *TrajectoryStateHistoryMetadataKey::mids$ = NULL;
              bool TrajectoryStateHistoryMetadataKey::live$ = false;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::CENTER_NAME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::COMMENT = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::INTERPOLATION = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::INTERPOLATION_DEGREE = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_AVERAGING = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_REVNUM = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_REVNUM_BASIS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::PROPAGATOR = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_BASIS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_BASIS_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_FRAME_EPOCH = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_NEXT_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_PREV_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_REF_FRAME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_TYPE = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_UNITS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::USEABLE_START_TIME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass TrajectoryStateHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_8c8f0a5e94dda5b0] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;)Z");
                  mids$[mid_valueOf_4d26094f8427f52a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;");
                  mids$[mid_values_038f89727dd84076] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CENTER_NAME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  COMMENT = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  INTERPOLATION = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  INTERPOLATION_DEGREE = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_AVERAGING = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_AVERAGING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_REVNUM = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_REVNUM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_REVNUM_BASIS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_REVNUM_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  PROPAGATOR = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "PROPAGATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_BASIS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_BASIS_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_FRAME_EPOCH = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_NEXT_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_PREV_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_REF_FRAME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_TYPE = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_UNITS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  USEABLE_START_TIME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  USEABLE_STOP_TIME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean TrajectoryStateHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_8c8f0a5e94dda5b0], a0.this$, a1.this$, a2.this$);
              }

              TrajectoryStateHistoryMetadataKey TrajectoryStateHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return TrajectoryStateHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4d26094f8427f52a], a0.this$));
              }

              JArray< TrajectoryStateHistoryMetadataKey > TrajectoryStateHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< TrajectoryStateHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_038f89727dd84076]));
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
              static PyObject *t_TrajectoryStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_of_(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_process(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_get__parameters_(t_TrajectoryStateHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_TrajectoryStateHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryStateHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistoryMetadataKey)[] = {
                { Py_tp_methods, t_TrajectoryStateHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_TrajectoryStateHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistoryMetadataKey, t_TrajectoryStateHistoryMetadataKey, TrajectoryStateHistoryMetadataKey);
              PyObject *t_TrajectoryStateHistoryMetadataKey::wrap_Object(const TrajectoryStateHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_TrajectoryStateHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_TrajectoryStateHistoryMetadataKey *self = (t_TrajectoryStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_TrajectoryStateHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_TrajectoryStateHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_TrajectoryStateHistoryMetadataKey *self = (t_TrajectoryStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_TrajectoryStateHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistoryMetadataKey), &PY_TYPE_DEF(TrajectoryStateHistoryMetadataKey), module, "TrajectoryStateHistoryMetadataKey", 0);
              }

              void t_TrajectoryStateHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "class_", make_descriptor(TrajectoryStateHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "wrapfn_", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(TrajectoryStateHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "CENTER_NAME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::CENTER_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "COMMENT", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "INTERPOLATION", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::INTERPOLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_AVERAGING", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_AVERAGING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_REVNUM", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_REVNUM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_REVNUM_BASIS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_REVNUM_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "PROPAGATOR", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::PROPAGATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_BASIS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_BASIS_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_FRAME_EPOCH", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_NEXT_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_PREV_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_REF_FRAME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_TYPE", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_UNITS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_UNITS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "USEABLE_START_TIME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistoryMetadataKey::wrap_Object(TrajectoryStateHistoryMetadataKey(((t_TrajectoryStateHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_of_(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_process(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                TrajectoryStateHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadataKey::valueOf(a0));
                  return t_TrajectoryStateHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< TrajectoryStateHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_TrajectoryStateHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_TrajectoryStateHistoryMetadataKey_get__parameters_(t_TrajectoryStateHistoryMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Laas2015::class$ = NULL;
              jmethodID *Laas2015::mids$ = NULL;
              bool Laas2015::live$ = false;
              jdouble Laas2015::DEFAULT_SCALING_THRESHOLD = (jdouble) 0;

              jclass Laas2015::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_init$_1af1b4c263b48b0c] = env->getMethodID(cls, "<init>", "(DI)V");
                  mids$[mid_compute_a73e6347f5238a63] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_11689cd07cf55453] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_SCALING_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_SCALING_THRESHOLD");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Laas2015::Laas2015() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              Laas2015::Laas2015(jdouble a0, jint a1) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_1af1b4c263b48b0c, a0, a1)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Laas2015::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a73e6347f5238a63], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Laas2015::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_11689cd07cf55453], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Laas2015::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_8397a286d982b383]));
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
              static PyObject *t_Laas2015_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Laas2015_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Laas2015_init_(t_Laas2015 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Laas2015_compute(t_Laas2015 *self, PyObject *args);
              static PyObject *t_Laas2015_getType(t_Laas2015 *self, PyObject *args);
              static PyObject *t_Laas2015_get__type(t_Laas2015 *self, void *data);
              static PyGetSetDef t_Laas2015__fields_[] = {
                DECLARE_GET_FIELD(t_Laas2015, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Laas2015__methods_[] = {
                DECLARE_METHOD(t_Laas2015, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Laas2015, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Laas2015, compute, METH_VARARGS),
                DECLARE_METHOD(t_Laas2015, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Laas2015)[] = {
                { Py_tp_methods, t_Laas2015__methods_ },
                { Py_tp_init, (void *) t_Laas2015_init_ },
                { Py_tp_getset, t_Laas2015__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Laas2015)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Laas2015, t_Laas2015, Laas2015);

              void t_Laas2015::install(PyObject *module)
              {
                installType(&PY_TYPE(Laas2015), &PY_TYPE_DEF(Laas2015), module, "Laas2015", 0);
              }

              void t_Laas2015::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "class_", make_descriptor(Laas2015::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "wrapfn_", make_descriptor(t_Laas2015::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "boxfn_", make_descriptor(boxObject));
                env->getClass(Laas2015::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "DEFAULT_SCALING_THRESHOLD", make_descriptor(Laas2015::DEFAULT_SCALING_THRESHOLD));
              }

              static PyObject *t_Laas2015_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Laas2015::initializeClass, 1)))
                  return NULL;
                return t_Laas2015::wrap_Object(Laas2015(((t_Laas2015 *) arg)->object.this$));
              }
              static PyObject *t_Laas2015_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Laas2015::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Laas2015_init_(t_Laas2015 *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    Laas2015 object((jobject) NULL);

                    INT_CALL(object = Laas2015());
                    self->object = object;
                    break;
                  }
                 case 2:
                  {
                    jdouble a0;
                    jint a1;
                    Laas2015 object((jobject) NULL);

                    if (!parseArgs(args, "DI", &a0, &a1))
                    {
                      INT_CALL(object = Laas2015(a0, a1));
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

              static PyObject *t_Laas2015_compute(t_Laas2015 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(Laas2015), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Laas2015_getType(t_Laas2015 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Laas2015), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Laas2015_get__type(t_Laas2015 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustPropulsionModel::class$ = NULL;
          jmethodID *ThrustPropulsionModel::mids$ = NULL;
          bool ThrustPropulsionModel::live$ = false;

          jclass ThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcceleration_e58d235f532e1fec] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getAcceleration_fa24c1d0852b99d1] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getDirection_9019a5b32b11453a] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getFlowRate_a17ea857ce74d258] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_8e86371c61460f23] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_f867476668f8eb00] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getIsp_a17ea857ce74d258] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getMassDerivatives_8e86371c61460f23] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_f867476668f8eb00] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getThrustVector_9019a5b32b11453a] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_0ce449c67b5ffd9c] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_20bded0292328743] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThrustPropulsionModel::getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_e58d235f532e1fec], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::Attitude & a1, const JArray< jdouble > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_fa24c1d0852b99d1], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getDirection(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_9019a5b32b11453a], a0.this$));
          }

          jdouble ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_a17ea857ce74d258], a0.this$);
          }

          jdouble ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_8e86371c61460f23], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_f867476668f8eb00], a0.this$, a1.this$));
          }

          jdouble ThrustPropulsionModel::getIsp(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_a17ea857ce74d258], a0.this$);
          }

          jdouble ThrustPropulsionModel::getMassDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMassDerivatives_8e86371c61460f23], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement ThrustPropulsionModel::getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMassDerivatives_f867476668f8eb00], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_9019a5b32b11453a], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_0ce449c67b5ffd9c], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_20bded0292328743], a0.this$, a1.this$));
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
        namespace propulsion {
          static PyObject *t_ThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getAcceleration(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getDirection(t_ThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getFlowRate(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getIsp(t_ThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getMassDerivatives(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getThrustVector(t_ThrustPropulsionModel *self, PyObject *args);

          static PyMethodDef t_ThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getAcceleration, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getDirection, METH_O),
            DECLARE_METHOD(t_ThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getIsp, METH_O),
            DECLARE_METHOD(t_ThrustPropulsionModel, getMassDerivatives, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::PropulsionModel),
            NULL
          };

          DEFINE_TYPE(ThrustPropulsionModel, t_ThrustPropulsionModel, ThrustPropulsionModel);

          void t_ThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustPropulsionModel), &PY_TYPE_DEF(ThrustPropulsionModel), module, "ThrustPropulsionModel", 0);
          }

          void t_ThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "class_", make_descriptor(ThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "wrapfn_", make_descriptor(t_ThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ThrustPropulsionModel::wrap_Object(ThrustPropulsionModel(((t_ThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustPropulsionModel_getAcceleration(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::Attitude a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ThrustPropulsionModel), (PyObject *) self, "getAcceleration", args, 2);
          }

          static PyObject *t_ThrustPropulsionModel_getDirection(t_ThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDirection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDirection", arg);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getFlowRate(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getIsp(t_ThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getIsp(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getIsp", arg);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getMassDerivatives(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(ThrustPropulsionModel), (PyObject *) self, "getMassDerivatives", args, 2);
          }

          static PyObject *t_ThrustPropulsionModel_getThrustVector(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *StreamingOcmWriter::class$ = NULL;
              jmethodID *StreamingOcmWriter::mids$ = NULL;
              bool StreamingOcmWriter::live$ = false;

              jclass StreamingOcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d22074dea2788852] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;)V");
                  mids$[mid_init$_6e2719a7f64ba2e5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Z)V");
                  mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newBlock_a12f324dd1b48d02] = env->getMethodID(cls, "newBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOcmWriter::StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d22074dea2788852, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

              StreamingOcmWriter::StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e2719a7f64ba2e5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

              void StreamingOcmWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter StreamingOcmWriter::newBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter(env->callObjectMethod(this$, mids$[mid_newBlock_a12f324dd1b48d02]));
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
              static PyObject *t_StreamingOcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOcmWriter_init_(t_StreamingOcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOcmWriter_close(t_StreamingOcmWriter *self);
              static PyObject *t_StreamingOcmWriter_newBlock(t_StreamingOcmWriter *self);

              static PyMethodDef t_StreamingOcmWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingOcmWriter, newBlock, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOcmWriter)[] = {
                { Py_tp_methods, t_StreamingOcmWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOcmWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOcmWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOcmWriter, t_StreamingOcmWriter, StreamingOcmWriter);

              void t_StreamingOcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOcmWriter), &PY_TYPE_DEF(StreamingOcmWriter), module, "StreamingOcmWriter", 0);
              }

              void t_StreamingOcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "class_", make_descriptor(StreamingOcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "wrapfn_", make_descriptor(t_StreamingOcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOcmWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOcmWriter::wrap_Object(StreamingOcmWriter(((t_StreamingOcmWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOcmWriter_init_(t_StreamingOcmWriter *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a3((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a4((jobject) NULL);
                    StreamingOcmWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a2, &a3, &a4))
                    {
                      INT_CALL(object = StreamingOcmWriter(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a3((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a4((jobject) NULL);
                    jboolean a5;
                    StreamingOcmWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkkZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = StreamingOcmWriter(a0, a1, a2, a3, a4, a5));
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

              static PyObject *t_StreamingOcmWriter_close(t_StreamingOcmWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingOcmWriter_newBlock(t_StreamingOcmWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_StreamingOcmWriter$BlockWriter::wrap_Object(result);
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
#include "org/orekit/propagation/integration/PythonAbstractGradientConverter.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAbstractGradientConverter::class$ = NULL;
        jmethodID *PythonAbstractGradientConverter::mids$ = NULL;
        bool PythonAbstractGradientConverter::live$ = false;

        jclass PythonAbstractGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAbstractGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_extend_40f2f08546258c9b] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_extend_3facea1cbc778867] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_extend_9b74b13fc2b0b45d] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFreeStateParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeStateParameters", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractGradientConverter::PythonAbstractGradientConverter(jint a0) : ::org::orekit::propagation::integration::AbstractGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

        ::org::hipparchus::analysis::differentiation::Gradient PythonAbstractGradientConverter::extend(const ::org::hipparchus::analysis::differentiation::Gradient & a0, jint a1) const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_extend_40f2f08546258c9b], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation PythonAbstractGradientConverter::extend(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_extend_3facea1cbc778867], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PythonAbstractGradientConverter::extend(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_extend_9b74b13fc2b0b45d], a0.this$, a1));
        }

        jint PythonAbstractGradientConverter::getFreeStateParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeStateParameters_55546ef6a647f39b]);
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
        static PyObject *t_PythonAbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractGradientConverter_init_(t_PythonAbstractGradientConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractGradientConverter_extend(t_PythonAbstractGradientConverter *self, PyObject *args);
        static PyObject *t_PythonAbstractGradientConverter_getFreeStateParameters(t_PythonAbstractGradientConverter *self, PyObject *args);
        static PyObject *t_PythonAbstractGradientConverter_get__freeStateParameters(t_PythonAbstractGradientConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractGradientConverter, freeStateParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractGradientConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, extend, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, getFreeStateParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGradientConverter)[] = {
          { Py_tp_methods, t_PythonAbstractGradientConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractGradientConverter_init_ },
          { Py_tp_getset, t_PythonAbstractGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractGradientConverter, t_PythonAbstractGradientConverter, PythonAbstractGradientConverter);

        void t_PythonAbstractGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractGradientConverter), &PY_TYPE_DEF(PythonAbstractGradientConverter), module, "PythonAbstractGradientConverter", 0);
        }

        void t_PythonAbstractGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "class_", make_descriptor(PythonAbstractGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "wrapfn_", make_descriptor(t_PythonAbstractGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PythonAbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractGradientConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractGradientConverter::wrap_Object(PythonAbstractGradientConverter(((t_PythonAbstractGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractGradientConverter_init_(t_PythonAbstractGradientConverter *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          PythonAbstractGradientConverter object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = PythonAbstractGradientConverter(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PythonAbstractGradientConverter_extend(t_PythonAbstractGradientConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::analysis::differentiation::Gradient a0((jobject) NULL);
              jint a1;
              ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extend", args);
          return NULL;
        }

        static PyObject *t_PythonAbstractGradientConverter_getFreeStateParameters(t_PythonAbstractGradientConverter *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFreeStateParameters());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractGradientConverter), (PyObject *) self, "getFreeStateParameters", args, 2);
        }

        static PyObject *t_PythonAbstractGradientConverter_get__freeStateParameters(t_PythonAbstractGradientConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *FieldAbstractAnalyticalPropagator::mids$ = NULL;
        bool FieldAbstractAnalyticalPropagator::live$ = false;

        jclass FieldAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addEventDetector_ca1d91eb6a3ce219] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getEphemerisGenerator_afe29c55086c638f] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
            mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getPvProvider_0d134b6a2504033c] = env->getMethodID(cls, "getPvProvider", "()Lorg/orekit/utils/FieldPVCoordinatesProvider;");
            mids$[mid_propagate_44f88f604c4d00f1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_acceptStep_5fb3751baed4c305] = env->getMethodID(cls, "acceptStep", "(Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator$FieldBasicStepInterpolator;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getMass_140b8964300ddedf] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_basicPropagate_70fecd201ca47d3b] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_resetIntermediateState_871885b409df9d57] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_propagateOrbit_f34a7a94e111b112] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldAbstractAnalyticalPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_ca1d91eb6a3ce219], a0.this$);
        }

        void FieldAbstractAnalyticalPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2]);
        }

        ::org::orekit::propagation::FieldEphemerisGenerator FieldAbstractAnalyticalPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_afe29c55086c638f]));
        }

        ::java::util::Collection FieldAbstractAnalyticalPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cb666ea1a15f5210]));
        }

        ::org::orekit::utils::FieldPVCoordinatesProvider FieldAbstractAnalyticalPropagator::getPvProvider() const
        {
          return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPvProvider_0d134b6a2504033c]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractAnalyticalPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_44f88f604c4d00f1], a0.this$, a1.this$));
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
        static PyObject *t_FieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractAnalyticalPropagator_of_(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_addEventDetector(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_clearEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getEphemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getPvProvider(t_FieldAbstractAnalyticalPropagator *self);
        static PyObject *t_FieldAbstractAnalyticalPropagator_propagate(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__ephemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__eventsDetectors(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__pvProvider(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__parameters_(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_FieldAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, pvProvider),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getPvProvider, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_FieldAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
          NULL
        };

        DEFINE_TYPE(FieldAbstractAnalyticalPropagator, t_FieldAbstractAnalyticalPropagator, FieldAbstractAnalyticalPropagator);
        PyObject *t_FieldAbstractAnalyticalPropagator::wrap_Object(const FieldAbstractAnalyticalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractAnalyticalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractAnalyticalPropagator *self = (t_FieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractAnalyticalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractAnalyticalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractAnalyticalPropagator *self = (t_FieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractAnalyticalPropagator), &PY_TYPE_DEF(FieldAbstractAnalyticalPropagator), module, "FieldAbstractAnalyticalPropagator", 0);
        }

        void t_FieldAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "class_", make_descriptor(FieldAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_FieldAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractAnalyticalPropagator::wrap_Object(FieldAbstractAnalyticalPropagator(((t_FieldAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_of_(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_addEventDetector(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_clearEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getEphemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getPvProvider(t_FieldAbstractAnalyticalPropagator *self)
        {
          ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPvProvider());
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_propagate(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.propagate(a0, a1));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "propagate", args, 2);
        }
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__parameters_(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__ephemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__eventsDetectors(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__pvProvider(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::utils::FieldPVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPvProvider());
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractFixedStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractFixedStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractFixedStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractFixedStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_checkStep_8ba9fe7a847cecad] = env->getMethodID(cls, "checkStep", "(D)V");
            mids$[mid_getFieldStep_ef8b0eba562dd98a] = env->getMethodID(cls, "getFieldStep", "(Lorg/hipparchus/Field;)Lorg/hipparchus/CalculusFieldElement;");

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
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_of_(t_AbstractFixedStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_get__parameters_(t_AbstractFixedStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractFixedStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFixedStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFixedStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFixedStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractFixedStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFixedStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFixedStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractFixedStepFieldIntegratorBuilder, t_AbstractFixedStepFieldIntegratorBuilder, AbstractFixedStepFieldIntegratorBuilder);
        PyObject *t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(const AbstractFixedStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFixedStepFieldIntegratorBuilder *self = (t_AbstractFixedStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFixedStepFieldIntegratorBuilder *self = (t_AbstractFixedStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFixedStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractFixedStepFieldIntegratorBuilder), module, "AbstractFixedStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractFixedStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractFixedStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFixedStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(AbstractFixedStepFieldIntegratorBuilder(((t_AbstractFixedStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFixedStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_of_(t_AbstractFixedStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_get__parameters_(t_AbstractFixedStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DependentVectorsHandler::class$ = NULL;
      jmethodID *DependentVectorsHandler::mids$ = NULL;
      bool DependentVectorsHandler::live$ = false;
      DependentVectorsHandler *DependentVectorsHandler::ADD_ZERO_VECTOR = NULL;
      DependentVectorsHandler *DependentVectorsHandler::GENERATE_EXCEPTION = NULL;
      DependentVectorsHandler *DependentVectorsHandler::REDUCE_BASE_TO_SPAN = NULL;

      jclass DependentVectorsHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DependentVectorsHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_manageDependent_20b0475ecaa6f78f] = env->getMethodID(cls, "manageDependent", "(ILjava/util/List;)I");
          mids$[mid_manageDependent_91c5f5a3a628b8ee] = env->getMethodID(cls, "manageDependent", "(Lorg/hipparchus/Field;ILjava/util/List;)I");
          mids$[mid_valueOf_1747ed25a6ab74f9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/linear/DependentVectorsHandler;");
          mids$[mid_values_795c2a9a023601ca] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/linear/DependentVectorsHandler;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADD_ZERO_VECTOR = new DependentVectorsHandler(env->getStaticObjectField(cls, "ADD_ZERO_VECTOR", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          GENERATE_EXCEPTION = new DependentVectorsHandler(env->getStaticObjectField(cls, "GENERATE_EXCEPTION", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          REDUCE_BASE_TO_SPAN = new DependentVectorsHandler(env->getStaticObjectField(cls, "REDUCE_BASE_TO_SPAN", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint DependentVectorsHandler::manageDependent(jint a0, const ::java::util::List & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_manageDependent_20b0475ecaa6f78f], a0, a1.this$);
      }

      jint DependentVectorsHandler::manageDependent(const ::org::hipparchus::Field & a0, jint a1, const ::java::util::List & a2) const
      {
        return env->callIntMethod(this$, mids$[mid_manageDependent_91c5f5a3a628b8ee], a0.this$, a1, a2.this$);
      }

      DependentVectorsHandler DependentVectorsHandler::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DependentVectorsHandler(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1747ed25a6ab74f9], a0.this$));
      }

      JArray< DependentVectorsHandler > DependentVectorsHandler::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< DependentVectorsHandler >(env->callStaticObjectMethod(cls, mids$[mid_values_795c2a9a023601ca]));
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
      static PyObject *t_DependentVectorsHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DependentVectorsHandler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DependentVectorsHandler_of_(t_DependentVectorsHandler *self, PyObject *args);
      static PyObject *t_DependentVectorsHandler_manageDependent(t_DependentVectorsHandler *self, PyObject *args);
      static PyObject *t_DependentVectorsHandler_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_DependentVectorsHandler_values(PyTypeObject *type);
      static PyObject *t_DependentVectorsHandler_get__parameters_(t_DependentVectorsHandler *self, void *data);
      static PyGetSetDef t_DependentVectorsHandler__fields_[] = {
        DECLARE_GET_FIELD(t_DependentVectorsHandler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DependentVectorsHandler__methods_[] = {
        DECLARE_METHOD(t_DependentVectorsHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, of_, METH_VARARGS),
        DECLARE_METHOD(t_DependentVectorsHandler, manageDependent, METH_VARARGS),
        DECLARE_METHOD(t_DependentVectorsHandler, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DependentVectorsHandler)[] = {
        { Py_tp_methods, t_DependentVectorsHandler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DependentVectorsHandler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DependentVectorsHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(DependentVectorsHandler, t_DependentVectorsHandler, DependentVectorsHandler);
      PyObject *t_DependentVectorsHandler::wrap_Object(const DependentVectorsHandler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DependentVectorsHandler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DependentVectorsHandler *self = (t_DependentVectorsHandler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DependentVectorsHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DependentVectorsHandler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DependentVectorsHandler *self = (t_DependentVectorsHandler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DependentVectorsHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(DependentVectorsHandler), &PY_TYPE_DEF(DependentVectorsHandler), module, "DependentVectorsHandler", 0);
      }

      void t_DependentVectorsHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "class_", make_descriptor(DependentVectorsHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "wrapfn_", make_descriptor(t_DependentVectorsHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "boxfn_", make_descriptor(boxObject));
        env->getClass(DependentVectorsHandler::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "ADD_ZERO_VECTOR", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::ADD_ZERO_VECTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "GENERATE_EXCEPTION", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::GENERATE_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "REDUCE_BASE_TO_SPAN", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::REDUCE_BASE_TO_SPAN)));
      }

      static PyObject *t_DependentVectorsHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DependentVectorsHandler::initializeClass, 1)))
          return NULL;
        return t_DependentVectorsHandler::wrap_Object(DependentVectorsHandler(((t_DependentVectorsHandler *) arg)->object.this$));
      }
      static PyObject *t_DependentVectorsHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DependentVectorsHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DependentVectorsHandler_of_(t_DependentVectorsHandler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_DependentVectorsHandler_manageDependent(t_DependentVectorsHandler *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            jint result;

            if (!parseArgs(args, "IK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.manageDependent(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint result;

            if (!parseArgs(args, "KIK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.manageDependent(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "manageDependent", args);
        return NULL;
      }

      static PyObject *t_DependentVectorsHandler_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        DependentVectorsHandler result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::DependentVectorsHandler::valueOf(a0));
          return t_DependentVectorsHandler::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_DependentVectorsHandler_values(PyTypeObject *type)
      {
        JArray< DependentVectorsHandler > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::DependentVectorsHandler::values());
        return JArray<jobject>(result.this$).wrap(t_DependentVectorsHandler::wrap_jobject);
      }
      static PyObject *t_DependentVectorsHandler_get__parameters_(t_DependentVectorsHandler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
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
          mids$[mid_nextNormalizedDouble_b74f83833fdad017] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble NormalizedRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_b74f83833fdad017]);
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
#include "org/orekit/estimation/measurements/AbstractMeasurement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AbstractMeasurement::class$ = NULL;
        jmethodID *AbstractMeasurement::mids$ = NULL;
        bool AbstractMeasurement::live$ = false;

        jclass AbstractMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AbstractMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addModifier_cb38ed914ba48f20] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_estimate_d598991c5cac8ab0] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_getBaseWeight_25e1757a36c4dde2] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getCoordinates_52bdf6f6bc7acbc0] = env->getStaticMethodID(cls, "getCoordinates", "(Lorg/orekit/propagation/SpacecraftState;II)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getModifiers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getObservedValue_25e1757a36c4dde2] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSatellites_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_25e1757a36c4dde2] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_9ab94ac1dc23b105] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_setEnabled_fcb96c98de6fad04] = env->getMethodID(cls, "setEnabled", "(Z)V");
            mids$[mid_signalTimeOfFlight_b6a0c46623a5e65d] = env->getStaticMethodID(cls, "signalTimeOfFlight", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signalTimeOfFlight_61d200a26515a6ab] = env->getStaticMethodID(cls, "signalTimeOfFlight", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_addParameterDriver_5791d10af4720a8e] = env->getMethodID(cls, "addParameterDriver", "(Lorg/orekit/utils/ParameterDriver;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractMeasurement::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addModifier_cb38ed914ba48f20], a0.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement AbstractMeasurement::estimate(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_estimate_d598991c5cac8ab0], a0, a1, a2.this$));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase AbstractMeasurement::estimateWithoutDerivatives(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->callObjectMethod(this$, mids$[mid_estimateWithoutDerivatives_9347cf3b1f0dd85a], a0, a1, a2.this$));
        }

        JArray< jdouble > AbstractMeasurement::getBaseWeight() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_25e1757a36c4dde2]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates AbstractMeasurement::getCoordinates(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getCoordinates_52bdf6f6bc7acbc0], a0.this$, a1, a2));
        }

        ::org::orekit::time::AbsoluteDate AbstractMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        jint AbstractMeasurement::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
        }

        ::java::util::List AbstractMeasurement::getModifiers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_e62d3bb06d56d7e3]));
        }

        JArray< jdouble > AbstractMeasurement::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_25e1757a36c4dde2]));
        }

        ::java::util::List AbstractMeasurement::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::java::util::List AbstractMeasurement::getSatellites() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_e62d3bb06d56d7e3]));
        }

        JArray< jdouble > AbstractMeasurement::getTheoreticalStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_25e1757a36c4dde2]));
        }

        jboolean AbstractMeasurement::isEnabled() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEnabled_9ab94ac1dc23b105]);
        }

        void AbstractMeasurement::setEnabled(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEnabled_fcb96c98de6fad04], a0);
        }

        ::org::hipparchus::CalculusFieldElement AbstractMeasurement::signalTimeOfFlight(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::FieldAbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_signalTimeOfFlight_b6a0c46623a5e65d], a0.this$, a1.this$, a2.this$));
        }

        jdouble AbstractMeasurement::signalTimeOfFlight(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_signalTimeOfFlight_61d200a26515a6ab], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMeasurement_of_(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_addModifier(t_AbstractMeasurement *self, PyObject *arg);
        static PyObject *t_AbstractMeasurement_estimate(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_estimateWithoutDerivatives(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_getBaseWeight(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getCoordinates(PyTypeObject *type, PyObject *args);
        static PyObject *t_AbstractMeasurement_getDate(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getDimension(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getModifiers(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getObservedValue(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getParametersDrivers(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getSatellites(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getTheoreticalStandardDeviation(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_isEnabled(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_setEnabled(t_AbstractMeasurement *self, PyObject *arg);
        static PyObject *t_AbstractMeasurement_signalTimeOfFlight(PyTypeObject *type, PyObject *args);
        static PyObject *t_AbstractMeasurement_get__baseWeight(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__date(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__dimension(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__enabled(t_AbstractMeasurement *self, void *data);
        static int t_AbstractMeasurement_set__enabled(t_AbstractMeasurement *self, PyObject *arg, void *data);
        static PyObject *t_AbstractMeasurement_get__modifiers(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__observedValue(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__parametersDrivers(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__satellites(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__theoreticalStandardDeviation(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__parameters_(t_AbstractMeasurement *self, void *data);
        static PyGetSetDef t_AbstractMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractMeasurement, baseWeight),
          DECLARE_GET_FIELD(t_AbstractMeasurement, date),
          DECLARE_GET_FIELD(t_AbstractMeasurement, dimension),
          DECLARE_GETSET_FIELD(t_AbstractMeasurement, enabled),
          DECLARE_GET_FIELD(t_AbstractMeasurement, modifiers),
          DECLARE_GET_FIELD(t_AbstractMeasurement, observedValue),
          DECLARE_GET_FIELD(t_AbstractMeasurement, parametersDrivers),
          DECLARE_GET_FIELD(t_AbstractMeasurement, satellites),
          DECLARE_GET_FIELD(t_AbstractMeasurement, theoreticalStandardDeviation),
          DECLARE_GET_FIELD(t_AbstractMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMeasurement__methods_[] = {
          DECLARE_METHOD(t_AbstractMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, addModifier, METH_O),
          DECLARE_METHOD(t_AbstractMeasurement, estimate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, estimateWithoutDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getBaseWeight, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getCoordinates, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getModifiers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getObservedValue, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getTheoreticalStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, isEnabled, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, setEnabled, METH_O),
          DECLARE_METHOD(t_AbstractMeasurement, signalTimeOfFlight, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMeasurement)[] = {
          { Py_tp_methods, t_AbstractMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMeasurement, t_AbstractMeasurement, AbstractMeasurement);
        PyObject *t_AbstractMeasurement::wrap_Object(const AbstractMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractMeasurement *self = (t_AbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractMeasurement *self = (t_AbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMeasurement), &PY_TYPE_DEF(AbstractMeasurement), module, "AbstractMeasurement", 0);
        }

        void t_AbstractMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "class_", make_descriptor(AbstractMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "wrapfn_", make_descriptor(t_AbstractMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMeasurement::initializeClass, 1)))
            return NULL;
          return t_AbstractMeasurement::wrap_Object(AbstractMeasurement(((t_AbstractMeasurement *) arg)->object.this$));
        }
        static PyObject *t_AbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractMeasurement_of_(t_AbstractMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractMeasurement_addModifier(t_AbstractMeasurement *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
          {
            OBJ_CALL(self->object.addModifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_estimate(t_AbstractMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimate(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_estimateWithoutDerivatives(t_AbstractMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateWithoutDerivatives(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateWithoutDerivatives", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_getBaseWeight(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseWeight());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_getCoordinates(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jint a1;
          jint a2;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kII", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::getCoordinates(a0, a1, a2));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError(type, "getCoordinates", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_getDate(t_AbstractMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractMeasurement_getDimension(t_AbstractMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractMeasurement_getModifiers(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_AbstractMeasurement_getObservedValue(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_getParametersDrivers(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_AbstractMeasurement_getSatellites(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::PY_TYPE(ObservableSatellite));
        }

        static PyObject *t_AbstractMeasurement_getTheoreticalStandardDeviation(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_isEnabled(t_AbstractMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEnabled());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractMeasurement_setEnabled(t_AbstractMeasurement *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setEnabled(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEnabled", arg);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_signalTimeOfFlight(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kkk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::signalTimeOfFlight(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::signalTimeOfFlight(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "signalTimeOfFlight", args);
          return NULL;
        }
        static PyObject *t_AbstractMeasurement_get__parameters_(t_AbstractMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractMeasurement_get__baseWeight(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseWeight());
          return value.wrap();
        }

        static PyObject *t_AbstractMeasurement_get__date(t_AbstractMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__dimension(t_AbstractMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractMeasurement_get__enabled(t_AbstractMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEnabled());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractMeasurement_set__enabled(t_AbstractMeasurement *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setEnabled(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "enabled", arg);
          return -1;
        }

        static PyObject *t_AbstractMeasurement_get__modifiers(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__observedValue(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }

        static PyObject *t_AbstractMeasurement_get__parametersDrivers(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__satellites(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__theoreticalStandardDeviation(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
          return value.wrap();
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
          mids$[mid_init$_f1c8159898f25396] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextNormalizedDouble_b74f83833fdad017] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianRandomGenerator::GaussianRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1c8159898f25396, a0.this$)) {}

      jdouble GaussianRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_b74f83833fdad017]);
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
#include "org/hipparchus/distribution/continuous/ConstantRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ConstantRealDistribution::class$ = NULL;
        jmethodID *ConstantRealDistribution::mids$ = NULL;
        bool ConstantRealDistribution::live$ = false;

        jclass ConstantRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ConstantRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantRealDistribution::ConstantRealDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        jdouble ConstantRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble ConstantRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble ConstantRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble ConstantRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble ConstantRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble ConstantRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble ConstantRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean ConstantRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
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
      namespace continuous {
        static PyObject *t_ConstantRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantRealDistribution_init_(t_ConstantRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantRealDistribution_cumulativeProbability(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_density(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getNumericalMean(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getNumericalVariance(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getSupportLowerBound(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getSupportUpperBound(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_inverseCumulativeProbability(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_isSupportConnected(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_get__numericalMean(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__numericalVariance(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportConnected(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportLowerBound(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportUpperBound(t_ConstantRealDistribution *self, void *data);
        static PyGetSetDef t_ConstantRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantRealDistribution__methods_[] = {
          DECLARE_METHOD(t_ConstantRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantRealDistribution)[] = {
          { Py_tp_methods, t_ConstantRealDistribution__methods_ },
          { Py_tp_init, (void *) t_ConstantRealDistribution_init_ },
          { Py_tp_getset, t_ConstantRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ConstantRealDistribution, t_ConstantRealDistribution, ConstantRealDistribution);

        void t_ConstantRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantRealDistribution), &PY_TYPE_DEF(ConstantRealDistribution), module, "ConstantRealDistribution", 0);
        }

        void t_ConstantRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "class_", make_descriptor(ConstantRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "wrapfn_", make_descriptor(t_ConstantRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantRealDistribution::initializeClass, 1)))
            return NULL;
          return t_ConstantRealDistribution::wrap_Object(ConstantRealDistribution(((t_ConstantRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_ConstantRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantRealDistribution_init_(t_ConstantRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ConstantRealDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ConstantRealDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantRealDistribution_cumulativeProbability(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_density(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getNumericalMean(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getNumericalVariance(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getSupportLowerBound(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getSupportUpperBound(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_inverseCumulativeProbability(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_isSupportConnected(t_ConstantRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_get__numericalMean(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__numericalVariance(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportConnected(t_ConstantRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportLowerBound(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportUpperBound(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBodyStaticContext::class$ = NULL;
            jmethodID *DSSTThirdBodyStaticContext::mids$ = NULL;
            bool DSSTThirdBodyStaticContext::live$ = false;

            jclass DSSTThirdBodyStaticContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3f7d3078b325cb52] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;DD[D)V");
                mids$[mid_getMaxAR3Pow_55546ef6a647f39b] = env->getMethodID(cls, "getMaxAR3Pow", "()I");
                mids$[mid_getMaxEccPow_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEccPow", "()I");
                mids$[mid_getMaxFreqF_55546ef6a647f39b] = env->getMethodID(cls, "getMaxFreqF", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBodyStaticContext::DSSTThirdBodyStaticContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_3f7d3078b325cb52, a0.this$, a1, a2, a3.this$)) {}

            jint DSSTThirdBodyStaticContext::getMaxAR3Pow() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxAR3Pow_55546ef6a647f39b]);
            }

            jint DSSTThirdBodyStaticContext::getMaxEccPow() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxEccPow_55546ef6a647f39b]);
            }

            jint DSSTThirdBodyStaticContext::getMaxFreqF() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxFreqF_55546ef6a647f39b]);
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
          namespace forces {
            static PyObject *t_DSSTThirdBodyStaticContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBodyStaticContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBodyStaticContext_init_(t_DSSTThirdBodyStaticContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxAR3Pow(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxEccPow(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxFreqF(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxAR3Pow(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxEccPow(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxFreqF(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyGetSetDef t_DSSTThirdBodyStaticContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxAR3Pow),
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxEccPow),
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxFreqF),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBodyStaticContext__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxAR3Pow, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxEccPow, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxFreqF, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBodyStaticContext)[] = {
              { Py_tp_methods, t_DSSTThirdBodyStaticContext__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBodyStaticContext_init_ },
              { Py_tp_getset, t_DSSTThirdBodyStaticContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBodyStaticContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBodyStaticContext, t_DSSTThirdBodyStaticContext, DSSTThirdBodyStaticContext);

            void t_DSSTThirdBodyStaticContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBodyStaticContext), &PY_TYPE_DEF(DSSTThirdBodyStaticContext), module, "DSSTThirdBodyStaticContext", 0);
            }

            void t_DSSTThirdBodyStaticContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "class_", make_descriptor(DSSTThirdBodyStaticContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "wrapfn_", make_descriptor(t_DSSTThirdBodyStaticContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTThirdBodyStaticContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBodyStaticContext::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBodyStaticContext::wrap_Object(DSSTThirdBodyStaticContext(((t_DSSTThirdBodyStaticContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBodyStaticContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBodyStaticContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBodyStaticContext_init_(t_DSSTThirdBodyStaticContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              DSSTThirdBodyStaticContext object((jobject) NULL);

              if (!parseArgs(args, "kDD[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DSSTThirdBodyStaticContext(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxAR3Pow(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxAR3Pow());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxEccPow(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxEccPow());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxFreqF(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxFreqF());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxAR3Pow(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxAR3Pow());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxEccPow(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxEccPow());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxFreqF(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxFreqF());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *SubHyperplane::class$ = NULL;
        jmethodID *SubHyperplane::mids$ = NULL;
        bool SubHyperplane::live$ = false;

        jclass SubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/SubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copySelf_0417f9f9ce6ee466] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getHyperplane_40a20a6ecfa9e745] = env->getMethodID(cls, "getHyperplane", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_getSize_b74f83833fdad017] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_reunite_263a5980faef7dc3] = env->getMethodID(cls, "reunite", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_split_30674c36ae2fcf9f] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SubHyperplane SubHyperplane::copySelf() const
        {
          return SubHyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_0417f9f9ce6ee466]));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane SubHyperplane::getHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_getHyperplane_40a20a6ecfa9e745]));
        }

        jdouble SubHyperplane::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_b74f83833fdad017]);
        }

        jboolean SubHyperplane::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
        }

        SubHyperplane SubHyperplane::reunite(const SubHyperplane & a0) const
        {
          return SubHyperplane(env->callObjectMethod(this$, mids$[mid_reunite_263a5980faef7dc3], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubHyperplane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_30674c36ae2fcf9f], a0.this$));
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
      namespace partitioning {
        static PyObject *t_SubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane_of_(t_SubHyperplane *self, PyObject *args);
        static PyObject *t_SubHyperplane_copySelf(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_getHyperplane(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_getSize(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_isEmpty(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_reunite(t_SubHyperplane *self, PyObject *arg);
        static PyObject *t_SubHyperplane_split(t_SubHyperplane *self, PyObject *arg);
        static PyObject *t_SubHyperplane_get__empty(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__hyperplane(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__size(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__parameters_(t_SubHyperplane *self, void *data);
        static PyGetSetDef t_SubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_SubHyperplane, empty),
          DECLARE_GET_FIELD(t_SubHyperplane, hyperplane),
          DECLARE_GET_FIELD(t_SubHyperplane, size),
          DECLARE_GET_FIELD(t_SubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SubHyperplane__methods_[] = {
          DECLARE_METHOD(t_SubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_SubHyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, getHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, getSize, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, isEmpty, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, reunite, METH_O),
          DECLARE_METHOD(t_SubHyperplane, split, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SubHyperplane)[] = {
          { Py_tp_methods, t_SubHyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SubHyperplane, t_SubHyperplane, SubHyperplane);
        PyObject *t_SubHyperplane::wrap_Object(const SubHyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane *self = (t_SubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane *self = (t_SubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(SubHyperplane), &PY_TYPE_DEF(SubHyperplane), module, "SubHyperplane", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "SplitSubHyperplane", make_descriptor(&PY_TYPE_DEF(SubHyperplane$SplitSubHyperplane)));
        }

        void t_SubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "class_", make_descriptor(SubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "wrapfn_", make_descriptor(t_SubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SubHyperplane::initializeClass, 1)))
            return NULL;
          return t_SubHyperplane::wrap_Object(SubHyperplane(((t_SubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_SubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SubHyperplane_of_(t_SubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SubHyperplane_copySelf(t_SubHyperplane *self)
        {
          SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane_getHyperplane(t_SubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane_getSize(t_SubHyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SubHyperplane_isEmpty(t_SubHyperplane *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEmpty());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SubHyperplane_reunite(t_SubHyperplane *self, PyObject *arg)
        {
          SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", SubHyperplane::initializeClass, &a0, &p0, t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.reunite(a0));
            return t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "reunite", arg);
          return NULL;
        }

        static PyObject *t_SubHyperplane_split(t_SubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }
        static PyObject *t_SubHyperplane_get__parameters_(t_SubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SubHyperplane_get__empty(t_SubHyperplane *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_SubHyperplane_get__hyperplane(t_SubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane_get__size(t_SubHyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CommonMetadataWriter::class$ = NULL;
            jmethodID *CommonMetadataWriter::mids$ = NULL;
            bool CommonMetadataWriter::live$ = false;

            jclass CommonMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_81a6fb4556427432] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;Lorg/orekit/files/ccsds/definitions/TimeConverter;)V");
                mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CommonMetadataWriter::CommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_81a6fb4556427432, a0.this$, a1.this$)) {}
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
            static PyObject *t_CommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CommonMetadataWriter_init_(t_CommonMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CommonMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_CommonMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonMetadataWriter)[] = {
              { Py_tp_methods, t_CommonMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_CommonMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CommonMetadataWriter, t_CommonMetadataWriter, CommonMetadataWriter);

            void t_CommonMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonMetadataWriter), &PY_TYPE_DEF(CommonMetadataWriter), module, "CommonMetadataWriter", 0);
            }

            void t_CommonMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "class_", make_descriptor(CommonMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "wrapfn_", make_descriptor(t_CommonMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_CommonMetadataWriter::wrap_Object(CommonMetadataWriter(((t_CommonMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_CommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CommonMetadataWriter_init_(t_CommonMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata a0((jobject) NULL);
              ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
              CommonMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata::initializeClass, ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CommonMetadataWriter(a0, a1));
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
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$SoftwareConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$SoftwareConfiguration::mids$ = NULL;
        bool CRDConfiguration$SoftwareConfiguration::live$ = false;

        jclass CRDConfiguration$SoftwareConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getProcessingSoftwareVersions_0f94e41879ab7062] = env->getMethodID(cls, "getProcessingSoftwareVersions", "()[Ljava/lang/String;");
            mids$[mid_getProcessingSoftwares_0f94e41879ab7062] = env->getMethodID(cls, "getProcessingSoftwares", "()[Ljava/lang/String;");
            mids$[mid_getSoftwareId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSoftwareId", "()Ljava/lang/String;");
            mids$[mid_getTrackingSoftwareVersions_0f94e41879ab7062] = env->getMethodID(cls, "getTrackingSoftwareVersions", "()[Ljava/lang/String;");
            mids$[mid_getTrackingSoftwares_0f94e41879ab7062] = env->getMethodID(cls, "getTrackingSoftwares", "()[Ljava/lang/String;");
            mids$[mid_setProcessingSoftwareVersions_4f1e9165cc3f09e7] = env->getMethodID(cls, "setProcessingSoftwareVersions", "([Ljava/lang/String;)V");
            mids$[mid_setProcessingSoftwares_4f1e9165cc3f09e7] = env->getMethodID(cls, "setProcessingSoftwares", "([Ljava/lang/String;)V");
            mids$[mid_setSoftwareId_734b91ac30d5f9b4] = env->getMethodID(cls, "setSoftwareId", "(Ljava/lang/String;)V");
            mids$[mid_setTrackingSoftwareVersions_4f1e9165cc3f09e7] = env->getMethodID(cls, "setTrackingSoftwareVersions", "([Ljava/lang/String;)V");
            mids$[mid_setTrackingSoftwares_4f1e9165cc3f09e7] = env->getMethodID(cls, "setTrackingSoftwares", "([Ljava/lang/String;)V");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$SoftwareConfiguration::CRDConfiguration$SoftwareConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getProcessingSoftwareVersions() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareVersions_0f94e41879ab7062]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getProcessingSoftwares() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwares_0f94e41879ab7062]));
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::getSoftwareId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSoftwareId_1c1fa1e935d6cdcf]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getTrackingSoftwareVersions() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTrackingSoftwareVersions_0f94e41879ab7062]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getTrackingSoftwares() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTrackingSoftwares_0f94e41879ab7062]));
        }

        void CRDConfiguration$SoftwareConfiguration::setProcessingSoftwareVersions(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareVersions_4f1e9165cc3f09e7], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setProcessingSoftwares(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwares_4f1e9165cc3f09e7], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setSoftwareId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSoftwareId_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setTrackingSoftwareVersions(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTrackingSoftwareVersions_4f1e9165cc3f09e7], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setTrackingSoftwares(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTrackingSoftwares_4f1e9165cc3f09e7], a0.this$);
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$SoftwareConfiguration_init_(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toCrdString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$SoftwareConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, processingSoftwareVersions),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, processingSoftwares),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, softwareId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, trackingSoftwareVersions),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, trackingSoftwares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$SoftwareConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getProcessingSoftwareVersions, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getProcessingSoftwares, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getSoftwareId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getTrackingSoftwareVersions, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getTrackingSoftwares, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setProcessingSoftwareVersions, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setProcessingSoftwares, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setSoftwareId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setTrackingSoftwareVersions, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setTrackingSoftwares, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$SoftwareConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$SoftwareConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$SoftwareConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$SoftwareConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$SoftwareConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$SoftwareConfiguration, t_CRDConfiguration$SoftwareConfiguration, CRDConfiguration$SoftwareConfiguration);

        void t_CRDConfiguration$SoftwareConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$SoftwareConfiguration), &PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration), module, "CRDConfiguration$SoftwareConfiguration", 0);
        }

        void t_CRDConfiguration$SoftwareConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "class_", make_descriptor(CRDConfiguration$SoftwareConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$SoftwareConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$SoftwareConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$SoftwareConfiguration::wrap_Object(CRDConfiguration$SoftwareConfiguration(((t_CRDConfiguration$SoftwareConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$SoftwareConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$SoftwareConfiguration_init_(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$SoftwareConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$SoftwareConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareVersions());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwares());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSoftwareId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrackingSoftwareVersions());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrackingSoftwares());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareVersions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareVersions", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwares(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwares", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSoftwareId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSoftwareId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setTrackingSoftwareVersions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTrackingSoftwareVersions", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setTrackingSoftwares(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTrackingSoftwares", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toCrdString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SoftwareConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SoftwareConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareVersions());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareVersions(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareVersions", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwares());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwares(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwares", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSoftwareId());
          return j2p(value);
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSoftwareId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "softwareId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrackingSoftwareVersions());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setTrackingSoftwareVersions(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trackingSoftwareVersions", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrackingSoftwares());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setTrackingSoftwares(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trackingSoftwares", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$ManeuvrableConsumer::class$ = NULL;
            jmethodID *ParseToken$ManeuvrableConsumer::mids$ = NULL;
            bool ParseToken$ManeuvrableConsumer::live$ = false;

            jclass ParseToken$ManeuvrableConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_8b2809315e926f23] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$ManeuvrableConsumer::accept(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_8b2809315e926f23], a0.this$);
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
            static PyObject *t_ParseToken$ManeuvrableConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$ManeuvrableConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$ManeuvrableConsumer_accept(t_ParseToken$ManeuvrableConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$ManeuvrableConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$ManeuvrableConsumer)[] = {
              { Py_tp_methods, t_ParseToken$ManeuvrableConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$ManeuvrableConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$ManeuvrableConsumer, t_ParseToken$ManeuvrableConsumer, ParseToken$ManeuvrableConsumer);

            void t_ParseToken$ManeuvrableConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$ManeuvrableConsumer), &PY_TYPE_DEF(ParseToken$ManeuvrableConsumer), module, "ParseToken$ManeuvrableConsumer", 0);
            }

            void t_ParseToken$ManeuvrableConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "class_", make_descriptor(ParseToken$ManeuvrableConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "wrapfn_", make_descriptor(t_ParseToken$ManeuvrableConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$ManeuvrableConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$ManeuvrableConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$ManeuvrableConsumer::wrap_Object(ParseToken$ManeuvrableConsumer(((t_ParseToken$ManeuvrableConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$ManeuvrableConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$ManeuvrableConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$ManeuvrableConsumer_accept(t_ParseToken$ManeuvrableConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::parameters_))
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
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_completed_9ab94ac1dc23b105] = env->getMethodID(cls, "completed", "()Z");
                  mids$[mid_getDV_8b724f8b4fdad1a2] = env->getMethodID(cls, "getDV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDeltaMass_b74f83833fdad017] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDuration_b74f83833fdad017] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEpochIgnition_c325492395d89b24] = env->getMethodID(cls, "getEpochIgnition", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getReferenceFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_setDV_d5322b8b512aeb26] = env->getMethodID(cls, "setDV", "(ID)V");
                  mids$[mid_setDeltaMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDuration_8ba9fe7a847cecad] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEpochIgnition_02135a6ef25adb4b] = env->getMethodID(cls, "setEpochIgnition", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setReferenceFrame_4755133c5c4c59be] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Maneuver::Maneuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jboolean Maneuver::completed() const
              {
                return env->callBooleanMethod(this$, mids$[mid_completed_9ab94ac1dc23b105]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::getDV() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDV_8b724f8b4fdad1a2]));
              }

              jdouble Maneuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_b74f83833fdad017]);
              }

              jdouble Maneuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_b74f83833fdad017]);
              }

              ::org::orekit::time::AbsoluteDate Maneuver::getEpochIgnition() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochIgnition_c325492395d89b24]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade Maneuver::getReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_69d8be1b6b0a1a94]));
              }

              void Maneuver::setDV(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDV_d5322b8b512aeb26], a0, a1);
              }

              void Maneuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_8ba9fe7a847cecad], a0);
              }

              void Maneuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_8ba9fe7a847cecad], a0);
              }

              void Maneuver::setEpochIgnition(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochIgnition_02135a6ef25adb4b], a0.this$);
              }

              void Maneuver::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setReferenceFrame_4755133c5c4c59be], a0.this$);
              }

              void Maneuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFields::class$ = NULL;
        jmethodID *GeoMagneticFields::mids$ = NULL;
        bool GeoMagneticFields::live$ = false;

        jclass GeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getField_63411221dee4d2d9] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_0b71ae56f8fa5718] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_0b71ae56f8fa5718] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getField_63411221dee4d2d9], a0.this$, a1));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getIGRF(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getIGRF_0b71ae56f8fa5718], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getWMM(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getWMM_0b71ae56f8fa5718], a0));
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
        static PyObject *t_GeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFields_getField(t_GeoMagneticFields *self, PyObject *args);
        static PyObject *t_GeoMagneticFields_getIGRF(t_GeoMagneticFields *self, PyObject *arg);
        static PyObject *t_GeoMagneticFields_getWMM(t_GeoMagneticFields *self, PyObject *arg);

        static PyMethodDef t_GeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFields, getField, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticFields, getIGRF, METH_O),
          DECLARE_METHOD(t_GeoMagneticFields, getWMM, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFields)[] = {
          { Py_tp_methods, t_GeoMagneticFields__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFields, t_GeoMagneticFields, GeoMagneticFields);

        void t_GeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFields), &PY_TYPE_DEF(GeoMagneticFields), module, "GeoMagneticFields", 0);
        }

        void t_GeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "class_", make_descriptor(GeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "wrapfn_", make_descriptor(t_GeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFields::wrap_Object(GeoMagneticFields(((t_GeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFields_getField(t_GeoMagneticFields *self, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticFields_getIGRF(t_GeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFields_getWMM(t_GeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWMM", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FastMath.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/SinCos.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FastMath::class$ = NULL;
      jmethodID *FastMath::mids$ = NULL;
      bool FastMath::live$ = false;
      jdouble FastMath::E = (jdouble) 0;
      jdouble FastMath::PI = (jdouble) 0;

      jclass FastMath::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FastMath");

          mids$ = new jmethodID[max_mid];
          mids$[mid_IEEEremainder_99e3200dafc19573] = env->getStaticMethodID(cls, "IEEEremainder", "(DD)D");
          mids$[mid_IEEEremainder_eda22c804f80f47e] = env->getStaticMethodID(cls, "IEEEremainder", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_IEEEremainder_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "IEEEremainder", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_abs_04fd0666b613d2ab] = env->getStaticMethodID(cls, "abs", "(D)D");
          mids$[mid_abs_5201d7c8dd0d0827] = env->getStaticMethodID(cls, "abs", "(F)F");
          mids$[mid_abs_0e7cf35192c3effe] = env->getStaticMethodID(cls, "abs", "(I)I");
          mids$[mid_abs_9db63109f74a74fc] = env->getStaticMethodID(cls, "abs", "(J)J");
          mids$[mid_abs_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "abs", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_absExact_0e7cf35192c3effe] = env->getStaticMethodID(cls, "absExact", "(I)I");
          mids$[mid_absExact_9db63109f74a74fc] = env->getStaticMethodID(cls, "absExact", "(J)J");
          mids$[mid_acos_04fd0666b613d2ab] = env->getStaticMethodID(cls, "acos", "(D)D");
          mids$[mid_acos_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "acos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_acosh_04fd0666b613d2ab] = env->getStaticMethodID(cls, "acosh", "(D)D");
          mids$[mid_acosh_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "acosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_addExact_92ecd94558bf0c68] = env->getStaticMethodID(cls, "addExact", "(II)I");
          mids$[mid_addExact_8f345e4204401ff5] = env->getStaticMethodID(cls, "addExact", "(JJ)J");
          mids$[mid_asin_04fd0666b613d2ab] = env->getStaticMethodID(cls, "asin", "(D)D");
          mids$[mid_asin_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "asin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_asinh_04fd0666b613d2ab] = env->getStaticMethodID(cls, "asinh", "(D)D");
          mids$[mid_asinh_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "asinh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atan_04fd0666b613d2ab] = env->getStaticMethodID(cls, "atan", "(D)D");
          mids$[mid_atan_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "atan", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atan2_99e3200dafc19573] = env->getStaticMethodID(cls, "atan2", "(DD)D");
          mids$[mid_atan2_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atanh_04fd0666b613d2ab] = env->getStaticMethodID(cls, "atanh", "(D)D");
          mids$[mid_atanh_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "atanh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cbrt_04fd0666b613d2ab] = env->getStaticMethodID(cls, "cbrt", "(D)D");
          mids$[mid_cbrt_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "cbrt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ceil_04fd0666b613d2ab] = env->getStaticMethodID(cls, "ceil", "(D)D");
          mids$[mid_ceil_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "ceil", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ceilDiv_92ecd94558bf0c68] = env->getStaticMethodID(cls, "ceilDiv", "(II)I");
          mids$[mid_ceilDiv_a60a6e0b1c5dfa26] = env->getStaticMethodID(cls, "ceilDiv", "(JI)J");
          mids$[mid_ceilDiv_8f345e4204401ff5] = env->getStaticMethodID(cls, "ceilDiv", "(JJ)J");
          mids$[mid_ceilDivExact_92ecd94558bf0c68] = env->getStaticMethodID(cls, "ceilDivExact", "(II)I");
          mids$[mid_ceilDivExact_8f345e4204401ff5] = env->getStaticMethodID(cls, "ceilDivExact", "(JJ)J");
          mids$[mid_ceilMod_92ecd94558bf0c68] = env->getStaticMethodID(cls, "ceilMod", "(II)I");
          mids$[mid_ceilMod_3838a158082992bc] = env->getStaticMethodID(cls, "ceilMod", "(JI)I");
          mids$[mid_ceilMod_8f345e4204401ff5] = env->getStaticMethodID(cls, "ceilMod", "(JJ)J");
          mids$[mid_clamp_f804f816b79164cb] = env->getStaticMethodID(cls, "clamp", "(DDD)D");
          mids$[mid_clamp_b4bd1bc861de7213] = env->getStaticMethodID(cls, "clamp", "(FFF)F");
          mids$[mid_clamp_06f6ba73b1164abe] = env->getStaticMethodID(cls, "clamp", "(III)I");
          mids$[mid_clamp_88f737e0857bfdfc] = env->getStaticMethodID(cls, "clamp", "(JII)I");
          mids$[mid_clamp_fdd9066580f9dcfe] = env->getStaticMethodID(cls, "clamp", "(JJJ)J");
          mids$[mid_copySign_99e3200dafc19573] = env->getStaticMethodID(cls, "copySign", "(DD)D");
          mids$[mid_copySign_4f5dd4904966745b] = env->getStaticMethodID(cls, "copySign", "(FF)F");
          mids$[mid_copySign_eda22c804f80f47e] = env->getStaticMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_copySign_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cos_04fd0666b613d2ab] = env->getStaticMethodID(cls, "cos", "(D)D");
          mids$[mid_cos_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "cos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cosh_04fd0666b613d2ab] = env->getStaticMethodID(cls, "cosh", "(D)D");
          mids$[mid_cosh_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "cosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_decrementExact_0e7cf35192c3effe] = env->getStaticMethodID(cls, "decrementExact", "(I)I");
          mids$[mid_decrementExact_9db63109f74a74fc] = env->getStaticMethodID(cls, "decrementExact", "(J)J");
          mids$[mid_divideExact_92ecd94558bf0c68] = env->getStaticMethodID(cls, "divideExact", "(II)I");
          mids$[mid_divideExact_8f345e4204401ff5] = env->getStaticMethodID(cls, "divideExact", "(JJ)J");
          mids$[mid_exp_04fd0666b613d2ab] = env->getStaticMethodID(cls, "exp", "(D)D");
          mids$[mid_exp_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "exp", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_expm1_04fd0666b613d2ab] = env->getStaticMethodID(cls, "expm1", "(D)D");
          mids$[mid_expm1_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "expm1", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_floor_04fd0666b613d2ab] = env->getStaticMethodID(cls, "floor", "(D)D");
          mids$[mid_floor_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "floor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_floorDiv_92ecd94558bf0c68] = env->getStaticMethodID(cls, "floorDiv", "(II)I");
          mids$[mid_floorDiv_a60a6e0b1c5dfa26] = env->getStaticMethodID(cls, "floorDiv", "(JI)J");
          mids$[mid_floorDiv_8f345e4204401ff5] = env->getStaticMethodID(cls, "floorDiv", "(JJ)J");
          mids$[mid_floorDivExact_92ecd94558bf0c68] = env->getStaticMethodID(cls, "floorDivExact", "(II)I");
          mids$[mid_floorDivExact_8f345e4204401ff5] = env->getStaticMethodID(cls, "floorDivExact", "(JJ)J");
          mids$[mid_floorMod_92ecd94558bf0c68] = env->getStaticMethodID(cls, "floorMod", "(II)I");
          mids$[mid_floorMod_3838a158082992bc] = env->getStaticMethodID(cls, "floorMod", "(JI)I");
          mids$[mid_floorMod_8f345e4204401ff5] = env->getStaticMethodID(cls, "floorMod", "(JJ)J");
          mids$[mid_fma_f804f816b79164cb] = env->getStaticMethodID(cls, "fma", "(DDD)D");
          mids$[mid_fma_b4bd1bc861de7213] = env->getStaticMethodID(cls, "fma", "(FFF)F");
          mids$[mid_getExponent_2af4736545087009] = env->getStaticMethodID(cls, "getExponent", "(D)I");
          mids$[mid_getExponent_5a61e72bed090dfc] = env->getStaticMethodID(cls, "getExponent", "(F)I");
          mids$[mid_hypot_99e3200dafc19573] = env->getStaticMethodID(cls, "hypot", "(DD)D");
          mids$[mid_hypot_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_incrementExact_0e7cf35192c3effe] = env->getStaticMethodID(cls, "incrementExact", "(I)I");
          mids$[mid_incrementExact_9db63109f74a74fc] = env->getStaticMethodID(cls, "incrementExact", "(J)J");
          mids$[mid_log_04fd0666b613d2ab] = env->getStaticMethodID(cls, "log", "(D)D");
          mids$[mid_log_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "log", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_log_99e3200dafc19573] = env->getStaticMethodID(cls, "log", "(DD)D");
          mids$[mid_log10_04fd0666b613d2ab] = env->getStaticMethodID(cls, "log10", "(D)D");
          mids$[mid_log10_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "log10", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_log1p_04fd0666b613d2ab] = env->getStaticMethodID(cls, "log1p", "(D)D");
          mids$[mid_log1p_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "log1p", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_max_99e3200dafc19573] = env->getStaticMethodID(cls, "max", "(DD)D");
          mids$[mid_max_4f5dd4904966745b] = env->getStaticMethodID(cls, "max", "(FF)F");
          mids$[mid_max_92ecd94558bf0c68] = env->getStaticMethodID(cls, "max", "(II)I");
          mids$[mid_max_8f345e4204401ff5] = env->getStaticMethodID(cls, "max", "(JJ)J");
          mids$[mid_max_eda22c804f80f47e] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_max_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_99e3200dafc19573] = env->getStaticMethodID(cls, "min", "(DD)D");
          mids$[mid_min_eda22c804f80f47e] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_4f5dd4904966745b] = env->getStaticMethodID(cls, "min", "(FF)F");
          mids$[mid_min_92ecd94558bf0c68] = env->getStaticMethodID(cls, "min", "(II)I");
          mids$[mid_min_8f345e4204401ff5] = env->getStaticMethodID(cls, "min", "(JJ)J");
          mids$[mid_min_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_multiplyExact_92ecd94558bf0c68] = env->getStaticMethodID(cls, "multiplyExact", "(II)I");
          mids$[mid_multiplyExact_a60a6e0b1c5dfa26] = env->getStaticMethodID(cls, "multiplyExact", "(JI)J");
          mids$[mid_multiplyExact_8f345e4204401ff5] = env->getStaticMethodID(cls, "multiplyExact", "(JJ)J");
          mids$[mid_multiplyFull_86fb9ef85bc94662] = env->getStaticMethodID(cls, "multiplyFull", "(II)J");
          mids$[mid_multiplyHigh_8f345e4204401ff5] = env->getStaticMethodID(cls, "multiplyHigh", "(JJ)J");
          mids$[mid_negateExact_0e7cf35192c3effe] = env->getStaticMethodID(cls, "negateExact", "(I)I");
          mids$[mid_negateExact_9db63109f74a74fc] = env->getStaticMethodID(cls, "negateExact", "(J)J");
          mids$[mid_nextAfter_99e3200dafc19573] = env->getStaticMethodID(cls, "nextAfter", "(DD)D");
          mids$[mid_nextAfter_209e462362f6f397] = env->getStaticMethodID(cls, "nextAfter", "(FD)F");
          mids$[mid_nextDown_04fd0666b613d2ab] = env->getStaticMethodID(cls, "nextDown", "(D)D");
          mids$[mid_nextDown_5201d7c8dd0d0827] = env->getStaticMethodID(cls, "nextDown", "(F)F");
          mids$[mid_nextUp_04fd0666b613d2ab] = env->getStaticMethodID(cls, "nextUp", "(D)D");
          mids$[mid_nextUp_5201d7c8dd0d0827] = env->getStaticMethodID(cls, "nextUp", "(F)F");
          mids$[mid_norm_5baa1648c914a132] = env->getStaticMethodID(cls, "norm", "(Lorg/hipparchus/CalculusFieldElement;)D");
          mids$[mid_pow_99e3200dafc19573] = env->getStaticMethodID(cls, "pow", "(DD)D");
          mids$[mid_pow_2eeda88661ae34d3] = env->getStaticMethodID(cls, "pow", "(DI)D");
          mids$[mid_pow_33d9ecc50b5d3d8b] = env->getStaticMethodID(cls, "pow", "(DJ)D");
          mids$[mid_pow_eda22c804f80f47e] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pow_37edb73a69dbfe81] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pow_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_random_b74f83833fdad017] = env->getStaticMethodID(cls, "random", "()D");
          mids$[mid_rint_04fd0666b613d2ab] = env->getStaticMethodID(cls, "rint", "(D)D");
          mids$[mid_rint_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "rint", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_round_12ed7e7112604870] = env->getStaticMethodID(cls, "round", "(D)J");
          mids$[mid_round_5a61e72bed090dfc] = env->getStaticMethodID(cls, "round", "(F)I");
          mids$[mid_round_410bdc8dae43e147] = env->getStaticMethodID(cls, "round", "(Lorg/hipparchus/CalculusFieldElement;)J");
          mids$[mid_scalb_2eeda88661ae34d3] = env->getStaticMethodID(cls, "scalb", "(DI)D");
          mids$[mid_scalb_7bd2126e67defb15] = env->getStaticMethodID(cls, "scalb", "(FI)F");
          mids$[mid_scalb_37edb73a69dbfe81] = env->getStaticMethodID(cls, "scalb", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sign_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "sign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_signum_04fd0666b613d2ab] = env->getStaticMethodID(cls, "signum", "(D)D");
          mids$[mid_signum_5201d7c8dd0d0827] = env->getStaticMethodID(cls, "signum", "(F)F");
          mids$[mid_sin_04fd0666b613d2ab] = env->getStaticMethodID(cls, "sin", "(D)D");
          mids$[mid_sin_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "sin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sinCos_59d0e5a71bc931a1] = env->getStaticMethodID(cls, "sinCos", "(D)Lorg/hipparchus/util/SinCos;");
          mids$[mid_sinCos_eddc913d9f7e73a7] = env->getStaticMethodID(cls, "sinCos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_04fd0666b613d2ab] = env->getStaticMethodID(cls, "sinh", "(D)D");
          mids$[mid_sinh_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "sinh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sinhCosh_fd86f31d69a2f5a3] = env->getStaticMethodID(cls, "sinhCosh", "(D)Lorg/hipparchus/util/SinhCosh;");
          mids$[mid_sinhCosh_520be849f30d7a2a] = env->getStaticMethodID(cls, "sinhCosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_04fd0666b613d2ab] = env->getStaticMethodID(cls, "sqrt", "(D)D");
          mids$[mid_sqrt_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "sqrt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_subtractExact_92ecd94558bf0c68] = env->getStaticMethodID(cls, "subtractExact", "(II)I");
          mids$[mid_subtractExact_8f345e4204401ff5] = env->getStaticMethodID(cls, "subtractExact", "(JJ)J");
          mids$[mid_tan_04fd0666b613d2ab] = env->getStaticMethodID(cls, "tan", "(D)D");
          mids$[mid_tan_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "tan", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_tanh_04fd0666b613d2ab] = env->getStaticMethodID(cls, "tanh", "(D)D");
          mids$[mid_tanh_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "tanh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toDegrees_04fd0666b613d2ab] = env->getStaticMethodID(cls, "toDegrees", "(D)D");
          mids$[mid_toDegrees_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "toDegrees", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toIntExact_da24d9dc605e436c] = env->getStaticMethodID(cls, "toIntExact", "(J)I");
          mids$[mid_toRadians_04fd0666b613d2ab] = env->getStaticMethodID(cls, "toRadians", "(D)D");
          mids$[mid_toRadians_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "toRadians", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ulp_04fd0666b613d2ab] = env->getStaticMethodID(cls, "ulp", "(D)D");
          mids$[mid_ulp_5201d7c8dd0d0827] = env->getStaticMethodID(cls, "ulp", "(F)F");
          mids$[mid_ulp_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "ulp", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_unsignedMultiplyHigh_8f345e4204401ff5] = env->getStaticMethodID(cls, "unsignedMultiplyHigh", "(JJ)J");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          E = env->getStaticDoubleField(cls, "E");
          PI = env->getStaticDoubleField(cls, "PI");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble FastMath::IEEEremainder(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_IEEEremainder_99e3200dafc19573], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::IEEEremainder(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_IEEEremainder_eda22c804f80f47e], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::IEEEremainder(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_IEEEremainder_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jdouble FastMath::abs(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_abs_04fd0666b613d2ab], a0);
      }

      jfloat FastMath::abs(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_abs_5201d7c8dd0d0827], a0);
      }

      jint FastMath::abs(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_abs_0e7cf35192c3effe], a0);
      }

      jlong FastMath::abs(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_abs_9db63109f74a74fc], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::abs(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_abs_6e00dc5eb352fe51], a0.this$));
      }

      jint FastMath::absExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_absExact_0e7cf35192c3effe], a0);
      }

      jlong FastMath::absExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_absExact_9db63109f74a74fc], a0);
      }

      jdouble FastMath::acos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_acos_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::acos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_acos_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::acosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_acosh_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::acosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_acosh_6e00dc5eb352fe51], a0.this$));
      }

      jint FastMath::addExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_addExact_92ecd94558bf0c68], a0, a1);
      }

      jlong FastMath::addExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_addExact_8f345e4204401ff5], a0, a1);
      }

      jdouble FastMath::asin(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_asin_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::asin(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_asin_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::asinh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_asinh_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::asinh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_asinh_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::atan(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atan_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atan(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atan_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::atan2(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atan2_99e3200dafc19573], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atan2(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atan2_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jdouble FastMath::atanh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atanh_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atanh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atanh_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::cbrt(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cbrt_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cbrt(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cbrt_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::ceil(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ceil_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::ceil(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ceil_6e00dc5eb352fe51], a0.this$));
      }

      jint FastMath::ceilDiv(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilDiv_92ecd94558bf0c68], a0, a1);
      }

      jlong FastMath::ceilDiv(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDiv_a60a6e0b1c5dfa26], a0, a1);
      }

      jlong FastMath::ceilDiv(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDiv_8f345e4204401ff5], a0, a1);
      }

      jint FastMath::ceilDivExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilDivExact_92ecd94558bf0c68], a0, a1);
      }

      jlong FastMath::ceilDivExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDivExact_8f345e4204401ff5], a0, a1);
      }

      jint FastMath::ceilMod(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilMod_92ecd94558bf0c68], a0, a1);
      }

      jint FastMath::ceilMod(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilMod_3838a158082992bc], a0, a1);
      }

      jlong FastMath::ceilMod(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilMod_8f345e4204401ff5], a0, a1);
      }

      jdouble FastMath::clamp(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_clamp_f804f816b79164cb], a0, a1, a2);
      }

      jfloat FastMath::clamp(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_clamp_b4bd1bc861de7213], a0, a1, a2);
      }

      jint FastMath::clamp(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_clamp_06f6ba73b1164abe], a0, a1, a2);
      }

      jint FastMath::clamp(jlong a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_clamp_88f737e0857bfdfc], a0, a1, a2);
      }

      jlong FastMath::clamp(jlong a0, jlong a1, jlong a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_clamp_fdd9066580f9dcfe], a0, a1, a2);
      }

      jdouble FastMath::copySign(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_copySign_99e3200dafc19573], a0, a1);
      }

      jfloat FastMath::copySign(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_copySign_4f5dd4904966745b], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::copySign(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_copySign_eda22c804f80f47e], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::copySign(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_copySign_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jdouble FastMath::cos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cos_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cos_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::cosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cosh_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cosh_6e00dc5eb352fe51], a0.this$));
      }

      jint FastMath::decrementExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_decrementExact_0e7cf35192c3effe], a0);
      }

      jlong FastMath::decrementExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_decrementExact_9db63109f74a74fc], a0);
      }

      jint FastMath::divideExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_divideExact_92ecd94558bf0c68], a0, a1);
      }

      jlong FastMath::divideExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_divideExact_8f345e4204401ff5], a0, a1);
      }

      jdouble FastMath::exp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_exp_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::exp(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_exp_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::expm1(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_expm1_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::expm1(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_expm1_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::floor(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_floor_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::floor(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_floor_6e00dc5eb352fe51], a0.this$));
      }

      jint FastMath::floorDiv(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorDiv_92ecd94558bf0c68], a0, a1);
      }

      jlong FastMath::floorDiv(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDiv_a60a6e0b1c5dfa26], a0, a1);
      }

      jlong FastMath::floorDiv(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDiv_8f345e4204401ff5], a0, a1);
      }

      jint FastMath::floorDivExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorDivExact_92ecd94558bf0c68], a0, a1);
      }

      jlong FastMath::floorDivExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDivExact_8f345e4204401ff5], a0, a1);
      }

      jint FastMath::floorMod(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorMod_92ecd94558bf0c68], a0, a1);
      }

      jint FastMath::floorMod(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorMod_3838a158082992bc], a0, a1);
      }

      jlong FastMath::floorMod(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorMod_8f345e4204401ff5], a0, a1);
      }

      jdouble FastMath::fma(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_fma_f804f816b79164cb], a0, a1, a2);
      }

      jfloat FastMath::fma(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_fma_b4bd1bc861de7213], a0, a1, a2);
      }

      jint FastMath::getExponent(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getExponent_2af4736545087009], a0);
      }

      jint FastMath::getExponent(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getExponent_5a61e72bed090dfc], a0);
      }

      jdouble FastMath::hypot(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hypot_99e3200dafc19573], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::hypot(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hypot_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jint FastMath::incrementExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_incrementExact_0e7cf35192c3effe], a0);
      }

      jlong FastMath::incrementExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_incrementExact_9db63109f74a74fc], a0);
      }

      jdouble FastMath::log(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::log(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log_99e3200dafc19573], a0, a1);
      }

      jdouble FastMath::log10(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log10_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log10(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log10_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::log1p(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log1p_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log1p(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log1p_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::max$(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_99e3200dafc19573], a0, a1);
      }

      jfloat FastMath::max$(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_max_4f5dd4904966745b], a0, a1);
      }

      jint FastMath::max$(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_max_92ecd94558bf0c68], a0, a1);
      }

      jlong FastMath::max$(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_max_8f345e4204401ff5], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::max$(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_eda22c804f80f47e], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::max$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jdouble FastMath::min$(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_99e3200dafc19573], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::min$(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_eda22c804f80f47e], a0.this$, a1));
      }

      jfloat FastMath::min$(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_min_4f5dd4904966745b], a0, a1);
      }

      jint FastMath::min$(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_min_92ecd94558bf0c68], a0, a1);
      }

      jlong FastMath::min$(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_min_8f345e4204401ff5], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::min$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jint FastMath::multiplyExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_multiplyExact_92ecd94558bf0c68], a0, a1);
      }

      jlong FastMath::multiplyExact(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyExact_a60a6e0b1c5dfa26], a0, a1);
      }

      jlong FastMath::multiplyExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyExact_8f345e4204401ff5], a0, a1);
      }

      jlong FastMath::multiplyFull(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyFull_86fb9ef85bc94662], a0, a1);
      }

      jlong FastMath::multiplyHigh(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyHigh_8f345e4204401ff5], a0, a1);
      }

      jint FastMath::negateExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_negateExact_0e7cf35192c3effe], a0);
      }

      jlong FastMath::negateExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_negateExact_9db63109f74a74fc], a0);
      }

      jdouble FastMath::nextAfter(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextAfter_99e3200dafc19573], a0, a1);
      }

      jfloat FastMath::nextAfter(jfloat a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextAfter_209e462362f6f397], a0, a1);
      }

      jdouble FastMath::nextDown(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextDown_04fd0666b613d2ab], a0);
      }

      jfloat FastMath::nextDown(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextDown_5201d7c8dd0d0827], a0);
      }

      jdouble FastMath::nextUp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextUp_04fd0666b613d2ab], a0);
      }

      jfloat FastMath::nextUp(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextUp_5201d7c8dd0d0827], a0);
      }

      jdouble FastMath::norm(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_norm_5baa1648c914a132], a0.this$);
      }

      jdouble FastMath::pow(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_99e3200dafc19573], a0, a1);
      }

      jdouble FastMath::pow(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_2eeda88661ae34d3], a0, a1);
      }

      jdouble FastMath::pow(jdouble a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_33d9ecc50b5d3d8b], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_eda22c804f80f47e], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_37edb73a69dbfe81], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jdouble FastMath::random()
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_random_b74f83833fdad017]);
      }

      jdouble FastMath::rint(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_rint_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::rint(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rint_6e00dc5eb352fe51], a0.this$));
      }

      jlong FastMath::round(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_round_12ed7e7112604870], a0);
      }

      jint FastMath::round(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_round_5a61e72bed090dfc], a0);
      }

      jlong FastMath::round(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_round_410bdc8dae43e147], a0.this$);
      }

      jdouble FastMath::scalb(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_scalb_2eeda88661ae34d3], a0, a1);
      }

      jfloat FastMath::scalb(jfloat a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_scalb_7bd2126e67defb15], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::scalb(const ::org::hipparchus::CalculusFieldElement & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_scalb_37edb73a69dbfe81], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sign(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sign_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::signum(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_signum_04fd0666b613d2ab], a0);
      }

      jfloat FastMath::signum(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_signum_5201d7c8dd0d0827], a0);
      }

      jdouble FastMath::sin(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sin_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sin(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sin_6e00dc5eb352fe51], a0.this$));
      }

      ::org::hipparchus::util::SinCos FastMath::sinCos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::SinCos(env->callStaticObjectMethod(cls, mids$[mid_sinCos_59d0e5a71bc931a1], a0));
      }

      ::org::hipparchus::util::FieldSinCos FastMath::sinCos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_sinCos_eddc913d9f7e73a7], a0.this$));
      }

      jdouble FastMath::sinh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sinh_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sinh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sinh_6e00dc5eb352fe51], a0.this$));
      }

      ::org::hipparchus::util::SinhCosh FastMath::sinhCosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sinhCosh_fd86f31d69a2f5a3], a0));
      }

      ::org::hipparchus::util::FieldSinhCosh FastMath::sinhCosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sinhCosh_520be849f30d7a2a], a0.this$));
      }

      jdouble FastMath::sqrt(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sqrt_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sqrt(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sqrt_6e00dc5eb352fe51], a0.this$));
      }

      jint FastMath::subtractExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_subtractExact_92ecd94558bf0c68], a0, a1);
      }

      jlong FastMath::subtractExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_subtractExact_8f345e4204401ff5], a0, a1);
      }

      jdouble FastMath::tan(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_tan_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::tan(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_tan_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::tanh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_tanh_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::tanh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_tanh_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::toDegrees(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_toDegrees_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::toDegrees(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_toDegrees_6e00dc5eb352fe51], a0.this$));
      }

      jint FastMath::toIntExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_toIntExact_da24d9dc605e436c], a0);
      }

      jdouble FastMath::toRadians(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_toRadians_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::toRadians(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_toRadians_6e00dc5eb352fe51], a0.this$));
      }

      jdouble FastMath::ulp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ulp_04fd0666b613d2ab], a0);
      }

      jfloat FastMath::ulp(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_ulp_5201d7c8dd0d0827], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::ulp(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ulp_6e00dc5eb352fe51], a0.this$));
      }

      jlong FastMath::unsignedMultiplyHigh(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_unsignedMultiplyHigh_8f345e4204401ff5], a0, a1);
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
      static PyObject *t_FastMath_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_IEEEremainder(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_abs(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_absExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_acos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_acosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_addExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_asin(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_asinh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atan(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atan2(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atanh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cbrt(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceil(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilDiv(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilDivExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilMod(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_clamp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_copySign(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_decrementExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_divideExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_exp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_expm1(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floor(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorDiv(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorDivExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorMod(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_fma(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_getExponent(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_hypot(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_incrementExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log10(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log1p(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyFull(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyHigh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_negateExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextAfter(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextDown(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextUp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_norm(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_random(PyTypeObject *type);
      static PyObject *t_FastMath_rint(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_round(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_scalb(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sign(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_signum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sin(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinCos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinhCosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sqrt(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_subtractExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_tan(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_tanh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_toDegrees(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_toIntExact(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_toRadians(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ulp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_unsignedMultiplyHigh(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FastMath__methods_[] = {
        DECLARE_METHOD(t_FastMath, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, IEEEremainder, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, abs, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, absExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, acos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, acosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, addExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, asin, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, asinh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atan, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atan2, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atanh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cbrt, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceil, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilDiv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilDivExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilMod, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, clamp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, copySign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, decrementExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, divideExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, exp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, expm1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floor, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorDiv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorDivExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorMod, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, fma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, getExponent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, hypot, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, incrementExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log10, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log1p, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyFull, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyHigh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, negateExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextAfter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextDown, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextUp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, norm, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, random, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, rint, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, round, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, scalb, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sign, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, signum, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sin, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinCos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinhCosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sqrt, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, subtractExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, tan, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, tanh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toDegrees, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toIntExact, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toRadians, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ulp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, unsignedMultiplyHigh, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FastMath)[] = {
        { Py_tp_methods, t_FastMath__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FastMath)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FastMath, t_FastMath, FastMath);

      void t_FastMath::install(PyObject *module)
      {
        installType(&PY_TYPE(FastMath), &PY_TYPE_DEF(FastMath), module, "FastMath", 0);
      }

      void t_FastMath::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "class_", make_descriptor(FastMath::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "wrapfn_", make_descriptor(t_FastMath::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "boxfn_", make_descriptor(boxObject));
        env->getClass(FastMath::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "E", make_descriptor(FastMath::E));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "PI", make_descriptor(FastMath::PI));
      }

      static PyObject *t_FastMath_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FastMath::initializeClass, 1)))
          return NULL;
        return t_FastMath::wrap_Object(FastMath(((t_FastMath *) arg)->object.this$));
      }
      static PyObject *t_FastMath_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FastMath::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FastMath_IEEEremainder(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "IEEEremainder", args);
        return NULL;
      }

      static PyObject *t_FastMath_abs(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "abs", args);
        return NULL;
      }

      static PyObject *t_FastMath_absExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::absExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::absExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "absExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_acos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "acos", args);
        return NULL;
      }

      static PyObject *t_FastMath_acosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acosh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acosh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "acosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_addExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::addExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::addExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "addExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_asin(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asin(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asin(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "asin", args);
        return NULL;
      }

      static PyObject *t_FastMath_asinh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asinh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asinh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "asinh", args);
        return NULL;
      }

      static PyObject *t_FastMath_atan(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atan", args);
        return NULL;
      }

      static PyObject *t_FastMath_atan2(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan2(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan2(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atan2", args);
        return NULL;
      }

      static PyObject *t_FastMath_atanh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atanh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atanh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atanh", args);
        return NULL;
      }

      static PyObject *t_FastMath_cbrt(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cbrt(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cbrt(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cbrt", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceil(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceil(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceil(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceil", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilDiv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilDiv", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilDivExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDivExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDivExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilDivExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilMod(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilMod", args);
        return NULL;
      }

      static PyObject *t_FastMath_clamp(PyTypeObject *type, PyObject *args)
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
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jfloat result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "JII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong a2;
            jlong result;

            if (!parseArgs(args, "JJJ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "clamp", args);
        return NULL;
      }

      static PyObject *t_FastMath_copySign(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "copySign", args);
        return NULL;
      }

      static PyObject *t_FastMath_cos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cos", args);
        return NULL;
      }

      static PyObject *t_FastMath_cosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cosh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cosh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_decrementExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::decrementExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::decrementExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "decrementExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_divideExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::divideExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::divideExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "divideExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_exp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::exp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::exp(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "exp", args);
        return NULL;
      }

      static PyObject *t_FastMath_expm1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::expm1(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::expm1(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "expm1", args);
        return NULL;
      }

      static PyObject *t_FastMath_floor(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floor(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floor(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "floor", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorDiv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorDiv", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorDivExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDivExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDivExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorDivExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorMod(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorMod", args);
        return NULL;
      }

      static PyObject *t_FastMath_fma(PyTypeObject *type, PyObject *args)
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
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::fma(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jfloat result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::fma(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "fma", args);
        return NULL;
      }

      static PyObject *t_FastMath_getExponent(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jint result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::getExponent(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jfloat a0;
            jint result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::getExponent(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "getExponent", args);
        return NULL;
      }

      static PyObject *t_FastMath_hypot(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::hypot(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::hypot(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "hypot", args);
        return NULL;
      }

      static PyObject *t_FastMath_incrementExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::incrementExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::incrementExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "incrementExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_log(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "log", args);
        return NULL;
      }

      static PyObject *t_FastMath_log10(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log10(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log10(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "log10", args);
        return NULL;
      }

      static PyObject *t_FastMath_log1p(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log1p(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log1p(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "log1p", args);
        return NULL;
      }

      static PyObject *t_FastMath_max(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_FastMath_min(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "multiplyExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyFull(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyFull(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "multiplyFull", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyHigh(PyTypeObject *type, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyHigh(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "multiplyHigh", args);
        return NULL;
      }

      static PyObject *t_FastMath_negateExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::negateExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::negateExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "negateExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextAfter(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextAfter(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jdouble a1;
            jfloat result;

            if (!parseArgs(args, "FD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextAfter(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextAfter", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextDown(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextDown(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextDown(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextDown", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextUp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextUp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextUp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextUp", args);
        return NULL;
      }

      static PyObject *t_FastMath_norm(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::norm(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "norm", arg);
        return NULL;
      }

      static PyObject *t_FastMath_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            jlong a1;
            jdouble result;

            if (!parseArgs(args, "DJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_FastMath_random(PyTypeObject *type)
      {
        jdouble result;
        OBJ_CALL(result = ::org::hipparchus::util::FastMath::random());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FastMath_rint(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::rint(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::rint(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "rint", args);
        return NULL;
      }

      static PyObject *t_FastMath_round(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jlong result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jfloat a0;
            jint result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jlong result;

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "round", args);
        return NULL;
      }

      static PyObject *t_FastMath_scalb(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jint a1;
            jfloat result;

            if (!parseArgs(args, "FI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "scalb", args);
        return NULL;
      }

      static PyObject *t_FastMath_sign(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::sign(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sign", arg);
        return NULL;
      }

      static PyObject *t_FastMath_signum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::signum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::signum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "signum", args);
        return NULL;
      }

      static PyObject *t_FastMath_sin(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sin(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sin(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sin", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinCos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::org::hipparchus::util::SinCos result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinCos(a0));
              return ::org::hipparchus::util::t_SinCos::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinCos(a0));
              return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinCos", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinh", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinhCosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::org::hipparchus::util::SinhCosh result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinhCosh(a0));
              return ::org::hipparchus::util::t_SinhCosh::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinhCosh(a0));
              return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinhCosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_sqrt(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sqrt(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sqrt(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sqrt", args);
        return NULL;
      }

      static PyObject *t_FastMath_subtractExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::subtractExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::subtractExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "subtractExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_tan(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tan(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tan(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "tan", args);
        return NULL;
      }

      static PyObject *t_FastMath_tanh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tanh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tanh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "tanh", args);
        return NULL;
      }

      static PyObject *t_FastMath_toDegrees(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toDegrees(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toDegrees(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toDegrees", args);
        return NULL;
      }

      static PyObject *t_FastMath_toIntExact(PyTypeObject *type, PyObject *arg)
      {
        jlong a0;
        jint result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::toIntExact(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError(type, "toIntExact", arg);
        return NULL;
      }

      static PyObject *t_FastMath_toRadians(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toRadians(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toRadians(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toRadians", args);
        return NULL;
      }

      static PyObject *t_FastMath_ulp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "ulp", args);
        return NULL;
      }

      static PyObject *t_FastMath_unsignedMultiplyHigh(PyTypeObject *type, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::unsignedMultiplyHigh(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "unsignedMultiplyHigh", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/MidpointIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *MidpointIntegrator::class$ = NULL;
        jmethodID *MidpointIntegrator::mids$ = NULL;
        bool MidpointIntegrator::live$ = false;

        jclass MidpointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/MidpointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_3b7b373db8e7887f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_25e1757a36c4dde2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_25e1757a36c4dde2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_e45e8cba4dd04d2d] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/MidpointStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointIntegrator::MidpointIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        JArray< JArray< jdouble > > MidpointIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_3b7b373db8e7887f]));
        }

        JArray< jdouble > MidpointIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_25e1757a36c4dde2]));
        }

        JArray< jdouble > MidpointIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_25e1757a36c4dde2]));
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
        static PyObject *t_MidpointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidpointIntegrator_init_(t_MidpointIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointIntegrator_getA(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_getB(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_getC(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_get__a(t_MidpointIntegrator *self, void *data);
        static PyObject *t_MidpointIntegrator_get__b(t_MidpointIntegrator *self, void *data);
        static PyObject *t_MidpointIntegrator_get__c(t_MidpointIntegrator *self, void *data);
        static PyGetSetDef t_MidpointIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointIntegrator, a),
          DECLARE_GET_FIELD(t_MidpointIntegrator, b),
          DECLARE_GET_FIELD(t_MidpointIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidpointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_MidpointIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_MidpointIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointIntegrator)[] = {
          { Py_tp_methods, t_MidpointIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidpointIntegrator_init_ },
          { Py_tp_getset, t_MidpointIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(MidpointIntegrator, t_MidpointIntegrator, MidpointIntegrator);

        void t_MidpointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointIntegrator), &PY_TYPE_DEF(MidpointIntegrator), module, "MidpointIntegrator", 0);
        }

        void t_MidpointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "class_", make_descriptor(MidpointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "wrapfn_", make_descriptor(t_MidpointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidpointIntegrator::wrap_Object(MidpointIntegrator(((t_MidpointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidpointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidpointIntegrator_init_(t_MidpointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          MidpointIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = MidpointIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointIntegrator_getA(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_MidpointIntegrator_getB(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_MidpointIntegrator_getC(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_MidpointIntegrator_get__a(t_MidpointIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_MidpointIntegrator_get__b(t_MidpointIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_MidpointIntegrator_get__c(t_MidpointIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldContinuedFraction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldContinuedFraction::class$ = NULL;
      jmethodID *FieldContinuedFraction::mids$ = NULL;
      bool FieldContinuedFraction::live$ = false;

      jclass FieldContinuedFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldContinuedFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_6e00dc5eb352fe51] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_eda22c804f80f47e] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_37edb73a69dbfe81] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_ac686843c7ed70e5] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_23984a6e38b0b1f2] = env->getMethodID(cls, "getA", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getB_23984a6e38b0b1f2] = env->getMethodID(cls, "getB", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_6e00dc5eb352fe51], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_eda22c804f80f47e], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jint a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_37edb73a69dbfe81], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1, jint a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_ac686843c7ed70e5], a0.this$, a1, a2));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::getA(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_23984a6e38b0b1f2], a0, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::getB(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_23984a6e38b0b1f2], a0, a1.this$));
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
      static PyObject *t_FieldContinuedFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldContinuedFraction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldContinuedFraction_evaluate(t_FieldContinuedFraction *self, PyObject *args);
      static PyObject *t_FieldContinuedFraction_getA(t_FieldContinuedFraction *self, PyObject *args);
      static PyObject *t_FieldContinuedFraction_getB(t_FieldContinuedFraction *self, PyObject *args);

      static PyMethodDef t_FieldContinuedFraction__methods_[] = {
        DECLARE_METHOD(t_FieldContinuedFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldContinuedFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldContinuedFraction, evaluate, METH_VARARGS),
        DECLARE_METHOD(t_FieldContinuedFraction, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldContinuedFraction, getB, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldContinuedFraction)[] = {
        { Py_tp_methods, t_FieldContinuedFraction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldContinuedFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldContinuedFraction, t_FieldContinuedFraction, FieldContinuedFraction);

      void t_FieldContinuedFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldContinuedFraction), &PY_TYPE_DEF(FieldContinuedFraction), module, "FieldContinuedFraction", 0);
      }

      void t_FieldContinuedFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "class_", make_descriptor(FieldContinuedFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "wrapfn_", make_descriptor(t_FieldContinuedFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldContinuedFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldContinuedFraction::initializeClass, 1)))
          return NULL;
        return t_FieldContinuedFraction::wrap_Object(FieldContinuedFraction(((t_FieldContinuedFraction *) arg)->object.this$));
      }
      static PyObject *t_FieldContinuedFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldContinuedFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldContinuedFraction_evaluate(t_FieldContinuedFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KDI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }

      static PyObject *t_FieldContinuedFraction_getA(t_FieldContinuedFraction *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getA(a0, a1));
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getA", args);
        return NULL;
      }

      static PyObject *t_FieldContinuedFraction_getB(t_FieldContinuedFraction *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getB(a0, a1));
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getB", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logit.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logit::class$ = NULL;
        jmethodID *Logit::mids$ = NULL;
        bool Logit::live$ = false;

        jclass Logit::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logit");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logit::Logit() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        Logit::Logit(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble Logit::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Logit::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Logit$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Logit_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logit_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logit_init_(t_Logit *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logit_value(t_Logit *self, PyObject *args);

        static PyMethodDef t_Logit__methods_[] = {
          DECLARE_METHOD(t_Logit, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logit)[] = {
          { Py_tp_methods, t_Logit__methods_ },
          { Py_tp_init, (void *) t_Logit_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logit)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logit, t_Logit, Logit);

        void t_Logit::install(PyObject *module)
        {
          installType(&PY_TYPE(Logit), &PY_TYPE_DEF(Logit), module, "Logit", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "Parametric", make_descriptor(&PY_TYPE_DEF(Logit$Parametric)));
        }

        void t_Logit::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "class_", make_descriptor(Logit::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "wrapfn_", make_descriptor(t_Logit::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logit_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logit::initializeClass, 1)))
            return NULL;
          return t_Logit::wrap_Object(Logit(((t_Logit *) arg)->object.this$));
        }
        static PyObject *t_Logit_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logit::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logit_init_(t_Logit *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Logit object((jobject) NULL);

              INT_CALL(object = Logit());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Logit object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Logit(a0, a1));
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

        static PyObject *t_Logit_value(t_Logit *self, PyObject *args)
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
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *RotationConvention::class$ = NULL;
          jmethodID *RotationConvention::mids$ = NULL;
          bool RotationConvention::live$ = false;
          RotationConvention *RotationConvention::FRAME_TRANSFORM = NULL;
          RotationConvention *RotationConvention::VECTOR_OPERATOR = NULL;

          jclass RotationConvention::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/RotationConvention");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_f092df088d0600b1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;");
              mids$[mid_values_ff7f663b6d62aea2] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FRAME_TRANSFORM = new RotationConvention(env->getStaticObjectField(cls, "FRAME_TRANSFORM", "Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;"));
              VECTOR_OPERATOR = new RotationConvention(env->getStaticObjectField(cls, "VECTOR_OPERATOR", "Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RotationConvention RotationConvention::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationConvention(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f092df088d0600b1], a0.this$));
          }

          JArray< RotationConvention > RotationConvention::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RotationConvention >(env->callStaticObjectMethod(cls, mids$[mid_values_ff7f663b6d62aea2]));
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
        namespace threed {
          static PyObject *t_RotationConvention_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationConvention_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationConvention_of_(t_RotationConvention *self, PyObject *args);
          static PyObject *t_RotationConvention_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RotationConvention_values(PyTypeObject *type);
          static PyObject *t_RotationConvention_get__parameters_(t_RotationConvention *self, void *data);
          static PyGetSetDef t_RotationConvention__fields_[] = {
            DECLARE_GET_FIELD(t_RotationConvention, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RotationConvention__methods_[] = {
            DECLARE_METHOD(t_RotationConvention, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, of_, METH_VARARGS),
            DECLARE_METHOD(t_RotationConvention, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RotationConvention)[] = {
            { Py_tp_methods, t_RotationConvention__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RotationConvention__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RotationConvention)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RotationConvention, t_RotationConvention, RotationConvention);
          PyObject *t_RotationConvention::wrap_Object(const RotationConvention& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationConvention::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationConvention *self = (t_RotationConvention *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RotationConvention::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationConvention::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationConvention *self = (t_RotationConvention *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RotationConvention::install(PyObject *module)
          {
            installType(&PY_TYPE(RotationConvention), &PY_TYPE_DEF(RotationConvention), module, "RotationConvention", 0);
          }

          void t_RotationConvention::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "class_", make_descriptor(RotationConvention::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "wrapfn_", make_descriptor(t_RotationConvention::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "boxfn_", make_descriptor(boxObject));
            env->getClass(RotationConvention::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "FRAME_TRANSFORM", make_descriptor(t_RotationConvention::wrap_Object(*RotationConvention::FRAME_TRANSFORM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "VECTOR_OPERATOR", make_descriptor(t_RotationConvention::wrap_Object(*RotationConvention::VECTOR_OPERATOR)));
          }

          static PyObject *t_RotationConvention_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RotationConvention::initializeClass, 1)))
              return NULL;
            return t_RotationConvention::wrap_Object(RotationConvention(((t_RotationConvention *) arg)->object.this$));
          }
          static PyObject *t_RotationConvention_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RotationConvention::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RotationConvention_of_(t_RotationConvention *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RotationConvention_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationConvention result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationConvention::valueOf(a0));
              return t_RotationConvention::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RotationConvention_values(PyTypeObject *type)
          {
            JArray< RotationConvention > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationConvention::values());
            return JArray<jobject>(result.this$).wrap(t_RotationConvention::wrap_jobject);
          }
          static PyObject *t_RotationConvention_get__parameters_(t_RotationConvention *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTSolarRadiationPressure::class$ = NULL;
            jmethodID *DSSTSolarRadiationPressure::mids$ = NULL;
            bool DSSTSolarRadiationPressure::live$ = false;

            jclass DSSTSolarRadiationPressure::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c2d149dbf242a70a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;D)V");
                mids$[mid_init$_469b9d23c5967fa5] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                mids$[mid_init$_930c2f779352a514] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;D)V");
                mids$[mid_init$_14afa2a4075b1e1e] = env->getMethodID(cls, "<init>", "(DDDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                mids$[mid_getEquatorialRadius_b74f83833fdad017] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                mids$[mid_getSpacecraft_6c4eac88f18322d9] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/radiation/RadiationSensitive;");
                mids$[mid_getLLimits_9b6fd6b3a2b07f62] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_1abf2eee80dffc68] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::orekit::forces::radiation::RadiationSensitive & a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_c2d149dbf242a70a, a0.this$, a1.this$, a2.this$, a3)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, jdouble a4) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_469b9d23c5967fa5, a0, a1, a2.this$, a3.this$, a4)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, const ::org::orekit::forces::radiation::RadiationSensitive & a4, jdouble a5) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_930c2f779352a514, a0, a1, a2.this$, a3.this$, a4.this$, a5)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::bodies::OneAxisEllipsoid & a5, jdouble a6) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_14afa2a4075b1e1e, a0, a1, a2, a3, a4.this$, a5.this$, a6)) {}

            jdouble DSSTSolarRadiationPressure::getEquatorialRadius() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_b74f83833fdad017]);
            }

            ::org::orekit::forces::radiation::RadiationSensitive DSSTSolarRadiationPressure::getSpacecraft() const
            {
              return ::org::orekit::forces::radiation::RadiationSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_6c4eac88f18322d9]));
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
          namespace forces {
            static PyObject *t_DSSTSolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTSolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTSolarRadiationPressure_init_(t_DSSTSolarRadiationPressure *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTSolarRadiationPressure_getEquatorialRadius(t_DSSTSolarRadiationPressure *self);
            static PyObject *t_DSSTSolarRadiationPressure_getSpacecraft(t_DSSTSolarRadiationPressure *self);
            static PyObject *t_DSSTSolarRadiationPressure_get__equatorialRadius(t_DSSTSolarRadiationPressure *self, void *data);
            static PyObject *t_DSSTSolarRadiationPressure_get__spacecraft(t_DSSTSolarRadiationPressure *self, void *data);
            static PyGetSetDef t_DSSTSolarRadiationPressure__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTSolarRadiationPressure, equatorialRadius),
              DECLARE_GET_FIELD(t_DSSTSolarRadiationPressure, spacecraft),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTSolarRadiationPressure__methods_[] = {
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, getEquatorialRadius, METH_NOARGS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, getSpacecraft, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTSolarRadiationPressure)[] = {
              { Py_tp_methods, t_DSSTSolarRadiationPressure__methods_ },
              { Py_tp_init, (void *) t_DSSTSolarRadiationPressure_init_ },
              { Py_tp_getset, t_DSSTSolarRadiationPressure__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTSolarRadiationPressure)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(DSSTSolarRadiationPressure, t_DSSTSolarRadiationPressure, DSSTSolarRadiationPressure);

            void t_DSSTSolarRadiationPressure::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTSolarRadiationPressure), &PY_TYPE_DEF(DSSTSolarRadiationPressure), module, "DSSTSolarRadiationPressure", 0);
            }

            void t_DSSTSolarRadiationPressure::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "class_", make_descriptor(DSSTSolarRadiationPressure::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "wrapfn_", make_descriptor(t_DSSTSolarRadiationPressure::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTSolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTSolarRadiationPressure::initializeClass, 1)))
                return NULL;
              return t_DSSTSolarRadiationPressure::wrap_Object(DSSTSolarRadiationPressure(((t_DSSTSolarRadiationPressure *) arg)->object.this$));
            }
            static PyObject *t_DSSTSolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTSolarRadiationPressure::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTSolarRadiationPressure_init_(t_DSSTSolarRadiationPressure *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                  ::org::orekit::forces::radiation::RadiationSensitive a2((jobject) NULL);
                  jdouble a3;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "kkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
                  jdouble a4;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
                  ::org::orekit::forces::radiation::RadiationSensitive a4((jobject) NULL);
                  jdouble a5;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDkkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a5((jobject) NULL);
                  jdouble a6;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDDDkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4, a5, a6));
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

            static PyObject *t_DSSTSolarRadiationPressure_getEquatorialRadius(t_DSSTSolarRadiationPressure *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEquatorialRadius());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTSolarRadiationPressure_getSpacecraft(t_DSSTSolarRadiationPressure *self)
            {
              ::org::orekit::forces::radiation::RadiationSensitive result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraft());
              return ::org::orekit::forces::radiation::t_RadiationSensitive::wrap_Object(result);
            }

            static PyObject *t_DSSTSolarRadiationPressure_get__equatorialRadius(t_DSSTSolarRadiationPressure *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEquatorialRadius());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTSolarRadiationPressure_get__spacecraft(t_DSSTSolarRadiationPressure *self, void *data)
            {
              ::org::orekit::forces::radiation::RadiationSensitive value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraft());
              return ::org::orekit::forces::radiation::t_RadiationSensitive::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/UniformRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UniformRandomGenerator::class$ = NULL;
      jmethodID *UniformRandomGenerator::mids$ = NULL;
      bool UniformRandomGenerator::live$ = false;

      jclass UniformRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UniformRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f1c8159898f25396] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextNormalizedDouble_b74f83833fdad017] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UniformRandomGenerator::UniformRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1c8159898f25396, a0.this$)) {}

      jdouble UniformRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_b74f83833fdad017]);
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
      static PyObject *t_UniformRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UniformRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UniformRandomGenerator_init_(t_UniformRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UniformRandomGenerator_nextNormalizedDouble(t_UniformRandomGenerator *self);

      static PyMethodDef t_UniformRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_UniformRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UniformRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UniformRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UniformRandomGenerator)[] = {
        { Py_tp_methods, t_UniformRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_UniformRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UniformRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UniformRandomGenerator, t_UniformRandomGenerator, UniformRandomGenerator);

      void t_UniformRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UniformRandomGenerator), &PY_TYPE_DEF(UniformRandomGenerator), module, "UniformRandomGenerator", 0);
      }

      void t_UniformRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "class_", make_descriptor(UniformRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "wrapfn_", make_descriptor(t_UniformRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UniformRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UniformRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_UniformRandomGenerator::wrap_Object(UniformRandomGenerator(((t_UniformRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_UniformRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UniformRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UniformRandomGenerator_init_(t_UniformRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        UniformRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = UniformRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_UniformRandomGenerator_nextNormalizedDouble(t_UniformRandomGenerator *self)
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
#include "org/orekit/forces/maneuvers/trigger/IntervalEventTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *IntervalEventTrigger::class$ = NULL;
          jmethodID *IntervalEventTrigger::mids$ = NULL;
          bool IntervalEventTrigger::live$ = false;

          jclass IntervalEventTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/IntervalEventTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_83e63d3f64ed1c29] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getFiringIntervalDetector_e060948c985b754b] = env->getMethodID(cls, "getFiringIntervalDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_convertIntervalDetector_323adeb6f2939c8a] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_isFiringOnInitialState_4ef3ef34329e6316] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntervalEventTrigger::IntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(env->newObject(initializeClass, &mids$, mid_init$_83e63d3f64ed1c29, a0.this$)) {}

          ::java::util::stream::Stream IntervalEventTrigger::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
          }

          ::java::util::stream::Stream IntervalEventTrigger::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
          }

          ::org::orekit::propagation::events::AbstractDetector IntervalEventTrigger::getFiringIntervalDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getFiringIntervalDetector_e060948c985b754b]));
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
        namespace trigger {
          static PyObject *t_IntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalEventTrigger_of_(t_IntervalEventTrigger *self, PyObject *args);
          static int t_IntervalEventTrigger_init_(t_IntervalEventTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntervalEventTrigger_getEventDetectors(t_IntervalEventTrigger *self, PyObject *args);
          static PyObject *t_IntervalEventTrigger_getFieldEventDetectors(t_IntervalEventTrigger *self, PyObject *args);
          static PyObject *t_IntervalEventTrigger_getFiringIntervalDetector(t_IntervalEventTrigger *self);
          static PyObject *t_IntervalEventTrigger_get__eventDetectors(t_IntervalEventTrigger *self, void *data);
          static PyObject *t_IntervalEventTrigger_get__firingIntervalDetector(t_IntervalEventTrigger *self, void *data);
          static PyObject *t_IntervalEventTrigger_get__parameters_(t_IntervalEventTrigger *self, void *data);
          static PyGetSetDef t_IntervalEventTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_IntervalEventTrigger, eventDetectors),
            DECLARE_GET_FIELD(t_IntervalEventTrigger, firingIntervalDetector),
            DECLARE_GET_FIELD(t_IntervalEventTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntervalEventTrigger__methods_[] = {
            DECLARE_METHOD(t_IntervalEventTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalEventTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalEventTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getFieldEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getFiringIntervalDetector, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntervalEventTrigger)[] = {
            { Py_tp_methods, t_IntervalEventTrigger__methods_ },
            { Py_tp_init, (void *) t_IntervalEventTrigger_init_ },
            { Py_tp_getset, t_IntervalEventTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntervalEventTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(IntervalEventTrigger, t_IntervalEventTrigger, IntervalEventTrigger);
          PyObject *t_IntervalEventTrigger::wrap_Object(const IntervalEventTrigger& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IntervalEventTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalEventTrigger *self = (t_IntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IntervalEventTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IntervalEventTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalEventTrigger *self = (t_IntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IntervalEventTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(IntervalEventTrigger), &PY_TYPE_DEF(IntervalEventTrigger), module, "IntervalEventTrigger", 0);
          }

          void t_IntervalEventTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "class_", make_descriptor(IntervalEventTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "wrapfn_", make_descriptor(t_IntervalEventTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntervalEventTrigger::initializeClass, 1)))
              return NULL;
            return t_IntervalEventTrigger::wrap_Object(IntervalEventTrigger(((t_IntervalEventTrigger *) arg)->object.this$));
          }
          static PyObject *t_IntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntervalEventTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntervalEventTrigger_of_(t_IntervalEventTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_IntervalEventTrigger_init_(t_IntervalEventTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            IntervalEventTrigger object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = IntervalEventTrigger(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntervalEventTrigger_getEventDetectors(t_IntervalEventTrigger *self, PyObject *args)
          {
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            return callSuper(PY_TYPE(IntervalEventTrigger), (PyObject *) self, "getEventDetectors", args, 2);
          }

          static PyObject *t_IntervalEventTrigger_getFieldEventDetectors(t_IntervalEventTrigger *self, PyObject *args)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            return callSuper(PY_TYPE(IntervalEventTrigger), (PyObject *) self, "getFieldEventDetectors", args, 2);
          }

          static PyObject *t_IntervalEventTrigger_getFiringIntervalDetector(t_IntervalEventTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getFiringIntervalDetector());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }
          static PyObject *t_IntervalEventTrigger_get__parameters_(t_IntervalEventTrigger *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_IntervalEventTrigger_get__eventDetectors(t_IntervalEventTrigger *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_IntervalEventTrigger_get__firingIntervalDetector(t_IntervalEventTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getFiringIntervalDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemSegment::class$ = NULL;
              jmethodID *OemSegment::mids$ = NULL;
              bool OemSegment::live$ = false;

              jclass OemSegment::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemSegment");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f12f30967885016d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Lorg/orekit/files/ccsds/ndm/odm/oem/OemData;D)V");
                  mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getCovarianceMatrices_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCovarianceMatrices", "()Ljava/util/List;");
                  mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInertialFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemSegment::OemSegment(const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemData & a1, jdouble a2) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_f12f30967885016d, a0.this$, a1.this$, a2)) {}

              ::org::orekit::utils::CartesianDerivativesFilter OemSegment::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c]));
              }

              ::java::util::List OemSegment::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_e62d3bb06d56d7e3]));
              }

              ::java::util::List OemSegment::getCovarianceMatrices() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrices_e62d3bb06d56d7e3]));
              }

              ::org::orekit::frames::Frame OemSegment::getFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
              }

              ::org::orekit::frames::Frame OemSegment::getInertialFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_2c51111cc6894ba1]));
              }

              jint OemSegment::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
              }

              jdouble OemSegment::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
              }

              ::org::orekit::time::AbsoluteDate OemSegment::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate OemSegment::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
            namespace oem {
              static PyObject *t_OemSegment_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSegment_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSegment_of_(t_OemSegment *self, PyObject *args);
              static int t_OemSegment_init_(t_OemSegment *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemSegment_getAvailableDerivatives(t_OemSegment *self);
              static PyObject *t_OemSegment_getCoordinates(t_OemSegment *self);
              static PyObject *t_OemSegment_getCovarianceMatrices(t_OemSegment *self);
              static PyObject *t_OemSegment_getFrame(t_OemSegment *self);
              static PyObject *t_OemSegment_getInertialFrame(t_OemSegment *self);
              static PyObject *t_OemSegment_getInterpolationSamples(t_OemSegment *self);
              static PyObject *t_OemSegment_getMu(t_OemSegment *self);
              static PyObject *t_OemSegment_getStart(t_OemSegment *self);
              static PyObject *t_OemSegment_getStop(t_OemSegment *self);
              static PyObject *t_OemSegment_get__availableDerivatives(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__coordinates(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__covarianceMatrices(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__frame(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__inertialFrame(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__interpolationSamples(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__mu(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__start(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__stop(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__parameters_(t_OemSegment *self, void *data);
              static PyGetSetDef t_OemSegment__fields_[] = {
                DECLARE_GET_FIELD(t_OemSegment, availableDerivatives),
                DECLARE_GET_FIELD(t_OemSegment, coordinates),
                DECLARE_GET_FIELD(t_OemSegment, covarianceMatrices),
                DECLARE_GET_FIELD(t_OemSegment, frame),
                DECLARE_GET_FIELD(t_OemSegment, inertialFrame),
                DECLARE_GET_FIELD(t_OemSegment, interpolationSamples),
                DECLARE_GET_FIELD(t_OemSegment, mu),
                DECLARE_GET_FIELD(t_OemSegment, start),
                DECLARE_GET_FIELD(t_OemSegment, stop),
                DECLARE_GET_FIELD(t_OemSegment, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemSegment__methods_[] = {
                DECLARE_METHOD(t_OemSegment, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSegment, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSegment, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemSegment, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getCovarianceMatrices, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getInertialFrame, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemSegment)[] = {
                { Py_tp_methods, t_OemSegment__methods_ },
                { Py_tp_init, (void *) t_OemSegment_init_ },
                { Py_tp_getset, t_OemSegment__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemSegment)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
                NULL
              };

              DEFINE_TYPE(OemSegment, t_OemSegment, OemSegment);
              PyObject *t_OemSegment::wrap_Object(const OemSegment& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemSegment::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemSegment *self = (t_OemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OemSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemSegment::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemSegment *self = (t_OemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OemSegment::install(PyObject *module)
              {
                installType(&PY_TYPE(OemSegment), &PY_TYPE_DEF(OemSegment), module, "OemSegment", 0);
              }

              void t_OemSegment::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "class_", make_descriptor(OemSegment::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "wrapfn_", make_descriptor(t_OemSegment::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemSegment_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemSegment::initializeClass, 1)))
                  return NULL;
                return t_OemSegment::wrap_Object(OemSegment(((t_OemSegment *) arg)->object.this$));
              }
              static PyObject *t_OemSegment_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemSegment::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemSegment_of_(t_OemSegment *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OemSegment_init_(t_OemSegment *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemData a1((jobject) NULL);
                jdouble a2;
                OemSegment object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemData::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = OemSegment(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemMetadata);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemSegment_getAvailableDerivatives(t_OemSegment *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getCoordinates(t_OemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemSegment_getCovarianceMatrices(t_OemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(CartesianCovariance));
              }

              static PyObject *t_OemSegment_getFrame(t_OemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getInertialFrame(t_OemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertialFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getInterpolationSamples(t_OemSegment *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OemSegment_getMu(t_OemSegment *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OemSegment_getStart(t_OemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getStop(t_OemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              static PyObject *t_OemSegment_get__parameters_(t_OemSegment *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OemSegment_get__availableDerivatives(t_OemSegment *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__coordinates(t_OemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__covarianceMatrices(t_OemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__frame(t_OemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__inertialFrame(t_OemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertialFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__interpolationSamples(t_OemSegment *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OemSegment_get__mu(t_OemSegment *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OemSegment_get__start(t_OemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__stop(t_OemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/hipparchus/geometry/euclidean/twod/hull/MonotoneChain.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *MonotoneChain::class$ = NULL;
            jmethodID *MonotoneChain::mids$ = NULL;
            bool MonotoneChain::live$ = false;

            jclass MonotoneChain::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/MonotoneChain");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_init$_8412042811f812bd] = env->getMethodID(cls, "<init>", "(ZD)V");
                mids$[mid_findHullVertices_394fcc3577736ad2] = env->getMethodID(cls, "findHullVertices", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MonotoneChain::MonotoneChain() : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            MonotoneChain::MonotoneChain(jboolean a0) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

            MonotoneChain::MonotoneChain(jboolean a0, jdouble a1) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_8412042811f812bd, a0, a1)) {}

            ::java::util::Collection MonotoneChain::findHullVertices(const ::java::util::Collection & a0) const
            {
              return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_findHullVertices_394fcc3577736ad2], a0.this$));
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_MonotoneChain_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MonotoneChain_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MonotoneChain_init_(t_MonotoneChain *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MonotoneChain_findHullVertices(t_MonotoneChain *self, PyObject *arg);

            static PyMethodDef t_MonotoneChain__methods_[] = {
              DECLARE_METHOD(t_MonotoneChain, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MonotoneChain, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MonotoneChain, findHullVertices, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MonotoneChain)[] = {
              { Py_tp_methods, t_MonotoneChain__methods_ },
              { Py_tp_init, (void *) t_MonotoneChain_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MonotoneChain)[] = {
              &PY_TYPE_DEF(::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D),
              NULL
            };

            DEFINE_TYPE(MonotoneChain, t_MonotoneChain, MonotoneChain);

            void t_MonotoneChain::install(PyObject *module)
            {
              installType(&PY_TYPE(MonotoneChain), &PY_TYPE_DEF(MonotoneChain), module, "MonotoneChain", 0);
            }

            void t_MonotoneChain::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "class_", make_descriptor(MonotoneChain::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "wrapfn_", make_descriptor(t_MonotoneChain::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MonotoneChain_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MonotoneChain::initializeClass, 1)))
                return NULL;
              return t_MonotoneChain::wrap_Object(MonotoneChain(((t_MonotoneChain *) arg)->object.this$));
            }
            static PyObject *t_MonotoneChain_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MonotoneChain::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MonotoneChain_init_(t_MonotoneChain *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  MonotoneChain object((jobject) NULL);

                  INT_CALL(object = MonotoneChain());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  jboolean a0;
                  MonotoneChain object((jobject) NULL);

                  if (!parseArgs(args, "Z", &a0))
                  {
                    INT_CALL(object = MonotoneChain(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jboolean a0;
                  jdouble a1;
                  MonotoneChain object((jobject) NULL);

                  if (!parseArgs(args, "ZD", &a0, &a1))
                  {
                    INT_CALL(object = MonotoneChain(a0, a1));
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

            static PyObject *t_MonotoneChain_findHullVertices(t_MonotoneChain *self, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Collection result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.findHullVertices(a0));
                return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
              }

              PyErr_SetArgsError((PyObject *) self, "findHullVertices", arg);
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
#include "org/hipparchus/random/SynchronizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *SynchronizedRandomGenerator::class$ = NULL;
      jmethodID *SynchronizedRandomGenerator::mids$ = NULL;
      bool SynchronizedRandomGenerator::live$ = false;

      jclass SynchronizedRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/SynchronizedRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f1c8159898f25396] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextBoolean_9ab94ac1dc23b105] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_459771b03534868e] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_a9fddc59b07ce512] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_b74f83833fdad017] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_1fb1bf0772ae5db7] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_b74f83833fdad017] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_0e7cf35192c3effe] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_6c0ce7e438e5ded4] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_9db63109f74a74fc] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_86a2769cb881d388] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_44ed599e93e8a30c] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3d7dd2314a0dd456] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SynchronizedRandomGenerator::SynchronizedRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1c8159898f25396, a0.this$)) {}

      jboolean SynchronizedRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_9ab94ac1dc23b105]);
      }

      void SynchronizedRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_459771b03534868e], a0.this$);
      }

      void SynchronizedRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_a9fddc59b07ce512], a0.this$, a1, a2);
      }

      jdouble SynchronizedRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_b74f83833fdad017]);
      }

      jfloat SynchronizedRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_1fb1bf0772ae5db7]);
      }

      jdouble SynchronizedRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_b74f83833fdad017]);
      }

      jint SynchronizedRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }

      jint SynchronizedRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0e7cf35192c3effe], a0);
      }

      jlong SynchronizedRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_6c0ce7e438e5ded4]);
      }

      jlong SynchronizedRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9db63109f74a74fc], a0);
      }

      void SynchronizedRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_86a2769cb881d388], a0.this$);
      }

      void SynchronizedRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_44ed599e93e8a30c], a0);
      }

      void SynchronizedRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3d7dd2314a0dd456], a0);
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
      static PyObject *t_SynchronizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SynchronizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SynchronizedRandomGenerator_init_(t_SynchronizedRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SynchronizedRandomGenerator_nextBoolean(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextBytes(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_nextDouble(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextFloat(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextGaussian(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextInt(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_nextLong(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_setSeed(t_SynchronizedRandomGenerator *self, PyObject *args);
      static int t_SynchronizedRandomGenerator_set__seed(t_SynchronizedRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_SynchronizedRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_SynchronizedRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SynchronizedRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_SynchronizedRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SynchronizedRandomGenerator)[] = {
        { Py_tp_methods, t_SynchronizedRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_SynchronizedRandomGenerator_init_ },
        { Py_tp_getset, t_SynchronizedRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SynchronizedRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SynchronizedRandomGenerator, t_SynchronizedRandomGenerator, SynchronizedRandomGenerator);

      void t_SynchronizedRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(SynchronizedRandomGenerator), &PY_TYPE_DEF(SynchronizedRandomGenerator), module, "SynchronizedRandomGenerator", 0);
      }

      void t_SynchronizedRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "class_", make_descriptor(SynchronizedRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "wrapfn_", make_descriptor(t_SynchronizedRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SynchronizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SynchronizedRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_SynchronizedRandomGenerator::wrap_Object(SynchronizedRandomGenerator(((t_SynchronizedRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_SynchronizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SynchronizedRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SynchronizedRandomGenerator_init_(t_SynchronizedRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        SynchronizedRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = SynchronizedRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextBoolean(t_SynchronizedRandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextBytes(t_SynchronizedRandomGenerator *self, PyObject *args)
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

      static PyObject *t_SynchronizedRandomGenerator_nextDouble(t_SynchronizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextFloat(t_SynchronizedRandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextGaussian(t_SynchronizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextInt(t_SynchronizedRandomGenerator *self, PyObject *args)
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

      static PyObject *t_SynchronizedRandomGenerator_nextLong(t_SynchronizedRandomGenerator *self, PyObject *args)
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

      static PyObject *t_SynchronizedRandomGenerator_setSeed(t_SynchronizedRandomGenerator *self, PyObject *args)
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

      static int t_SynchronizedRandomGenerator_set__seed(t_SynchronizedRandomGenerator *self, PyObject *arg, void *data)
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

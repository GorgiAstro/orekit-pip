#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OpenMapRealVector::class$ = NULL;
      jmethodID *OpenMapRealVector::mids$ = NULL;
      bool OpenMapRealVector::live$ = false;
      jdouble OpenMapRealVector::DEFAULT_ZERO_TOLERANCE = (jdouble) 0;

      jclass OpenMapRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OpenMapRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_dffaee884eb24974] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;)V");
          mids$[mid_init$_bdf205176b90cff1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_bc1ff02eb3693128] = env->getMethodID(cls, "<init>", "([DD)V");
          mids$[mid_init$_ce8c8b53c2138baa] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;D)V");
          mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_1506189166690b5e] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_add_f41b4392c3b0cbe8] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_add_613347e28dd909cd] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_f41b4392c3b0cbe8] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_append_bca8e4820c9cabf8] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_append_09df6803b1c624a1] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_copy_8ab6f9d2c3b24e14] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_ebeDivide_bca8e4820c9cabf8] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_ebeMultiply_bca8e4820c9cabf8] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_bd316bc7df5386b7] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/OpenMapRealVector;)D");
          mids$[mid_getDistance_c579a73494d20c67] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_46f85b53d9aedd96] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_bd316bc7df5386b7] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/OpenMapRealVector;)D");
          mids$[mid_getL1Distance_c579a73494d20c67] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfDistance_c579a73494d20c67] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getSparsity_dff5885c2c873297] = env->getMethodID(cls, "getSparsity", "()D");
          mids$[mid_getSubVector_583c2e0c30920a31] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_mapAdd_09df6803b1c624a1] = env->getMethodID(cls, "mapAdd", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_mapAddToSelf_09df6803b1c624a1] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_set_17db3a65980d3441] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_bb79ca80d85d0a66] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_18388821294f273e] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_sparseIterator_4d23511a9f0db098] = env->getMethodID(cls, "sparseIterator", "()Ljava/util/Iterator;");
          mids$[mid_subtract_f41b4392c3b0cbe8] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_subtract_613347e28dd909cd] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_toArray_60c7040667a7dc5c] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_unitVector_8ab6f9d2c3b24e14] = env->getMethodID(cls, "unitVector", "()Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_unitize_0fa09c18fee449d5] = env->getMethodID(cls, "unitize", "()V");
          mids$[mid_isDefaultValue_2e401133981893e4] = env->getMethodID(cls, "isDefaultValue", "(D)Z");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ZERO_TOLERANCE = env->getStaticDoubleField(cls, "DEFAULT_ZERO_TOLERANCE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenMapRealVector::OpenMapRealVector() : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< jdouble > & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< ::java::lang::Double > & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_dffaee884eb24974, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(const ::org::hipparchus::linear::RealVector & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_bdf205176b90cff1, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< jdouble > & a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_bc1ff02eb3693128, a0.this$, a1)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< ::java::lang::Double > & a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_ce8c8b53c2138baa, a0.this$, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jint a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jint a1, jdouble a2) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_1506189166690b5e, a0, a1, a2)) {}

      OpenMapRealVector OpenMapRealVector::add(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_add_f41b4392c3b0cbe8], a0.this$));
      }

      ::org::hipparchus::linear::RealVector OpenMapRealVector::add(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_add_613347e28dd909cd], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_f41b4392c3b0cbe8], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_bca8e4820c9cabf8], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_09df6803b1c624a1], a0));
      }

      OpenMapRealVector OpenMapRealVector::copy() const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_copy_8ab6f9d2c3b24e14]));
      }

      OpenMapRealVector OpenMapRealVector::ebeDivide(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_bca8e4820c9cabf8], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::ebeMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_bca8e4820c9cabf8], a0.this$));
      }

      jboolean OpenMapRealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jint OpenMapRealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      jdouble OpenMapRealVector::getDistance(const OpenMapRealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_bd316bc7df5386b7], a0.this$);
      }

      jdouble OpenMapRealVector::getDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_c579a73494d20c67], a0.this$);
      }

      jdouble OpenMapRealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_46f85b53d9aedd96], a0);
      }

      jdouble OpenMapRealVector::getL1Distance(const OpenMapRealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_bd316bc7df5386b7], a0.this$);
      }

      jdouble OpenMapRealVector::getL1Distance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_c579a73494d20c67], a0.this$);
      }

      jdouble OpenMapRealVector::getLInfDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_c579a73494d20c67], a0.this$);
      }

      jdouble OpenMapRealVector::getSparsity() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSparsity_dff5885c2c873297]);
      }

      OpenMapRealVector OpenMapRealVector::getSubVector(jint a0, jint a1) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_583c2e0c30920a31], a0, a1));
      }

      jint OpenMapRealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jboolean OpenMapRealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
      }

      jboolean OpenMapRealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
      }

      OpenMapRealVector OpenMapRealVector::mapAdd(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_mapAdd_09df6803b1c624a1], a0));
      }

      OpenMapRealVector OpenMapRealVector::mapAddToSelf(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_09df6803b1c624a1], a0));
      }

      void OpenMapRealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_17db3a65980d3441], a0);
      }

      void OpenMapRealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_bb79ca80d85d0a66], a0, a1);
      }

      void OpenMapRealVector::setSubVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_18388821294f273e], a0, a1.this$);
      }

      ::java::util::Iterator OpenMapRealVector::sparseIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_sparseIterator_4d23511a9f0db098]));
      }

      OpenMapRealVector OpenMapRealVector::subtract(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_subtract_f41b4392c3b0cbe8], a0.this$));
      }

      ::org::hipparchus::linear::RealVector OpenMapRealVector::subtract(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_subtract_613347e28dd909cd], a0.this$));
      }

      JArray< jdouble > OpenMapRealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_60c7040667a7dc5c]));
      }

      OpenMapRealVector OpenMapRealVector::unitVector() const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_unitVector_8ab6f9d2c3b24e14]));
      }

      void OpenMapRealVector::unitize() const
      {
        env->callVoidMethod(this$, mids$[mid_unitize_0fa09c18fee449d5]);
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
      static PyObject *t_OpenMapRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenMapRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenMapRealVector_init_(t_OpenMapRealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenMapRealVector_add(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_append(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_copy(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_ebeDivide(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_ebeMultiply(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_equals(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getDimension(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getDistance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getEntry(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getL1Distance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getLInfDistance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getSparsity(t_OpenMapRealVector *self);
      static PyObject *t_OpenMapRealVector_getSubVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_hashCode(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_isInfinite(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_isNaN(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_mapAdd(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_mapAddToSelf(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_set(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_setEntry(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_setSubVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_sparseIterator(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_subtract(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_toArray(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_unitVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_unitize(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_get__dimension(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__infinite(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__naN(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__sparsity(t_OpenMapRealVector *self, void *data);
      static PyGetSetDef t_OpenMapRealVector__fields_[] = {
        DECLARE_GET_FIELD(t_OpenMapRealVector, dimension),
        DECLARE_GET_FIELD(t_OpenMapRealVector, infinite),
        DECLARE_GET_FIELD(t_OpenMapRealVector, naN),
        DECLARE_GET_FIELD(t_OpenMapRealVector, sparsity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenMapRealVector__methods_[] = {
        DECLARE_METHOD(t_OpenMapRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealVector, add, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, copy, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getDistance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getL1Distance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getLInfDistance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getSparsity, METH_NOARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, isInfinite, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, isNaN, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, mapAdd, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, mapAddToSelf, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, set, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, sparseIterator, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, toArray, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, unitVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, unitize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenMapRealVector)[] = {
        { Py_tp_methods, t_OpenMapRealVector__methods_ },
        { Py_tp_init, (void *) t_OpenMapRealVector_init_ },
        { Py_tp_getset, t_OpenMapRealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenMapRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::SparseRealVector),
        NULL
      };

      DEFINE_TYPE(OpenMapRealVector, t_OpenMapRealVector, OpenMapRealVector);

      void t_OpenMapRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenMapRealVector), &PY_TYPE_DEF(OpenMapRealVector), module, "OpenMapRealVector", 0);
      }

      void t_OpenMapRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "class_", make_descriptor(OpenMapRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "wrapfn_", make_descriptor(t_OpenMapRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "boxfn_", make_descriptor(boxObject));
        env->getClass(OpenMapRealVector::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "DEFAULT_ZERO_TOLERANCE", make_descriptor(OpenMapRealVector::DEFAULT_ZERO_TOLERANCE));
      }

      static PyObject *t_OpenMapRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenMapRealVector::initializeClass, 1)))
          return NULL;
        return t_OpenMapRealVector::wrap_Object(OpenMapRealVector(((t_OpenMapRealVector *) arg)->object.this$));
      }
      static PyObject *t_OpenMapRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenMapRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenMapRealVector_init_(t_OpenMapRealVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OpenMapRealVector object((jobject) NULL);

            INT_CALL(object = OpenMapRealVector());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[O", ::java::lang::PY_TYPE(Double), &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[OD", ::java::lang::PY_TYPE(Double), &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1, a2));
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

      static PyObject *t_OpenMapRealVector_add(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_OpenMapRealVector_append(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "append", args, 2);
      }

      static PyObject *t_OpenMapRealVector_copy(t_OpenMapRealVector *self, PyObject *args)
      {
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_OpenMapRealVector_ebeDivide(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "ebeDivide", args, 2);
      }

      static PyObject *t_OpenMapRealVector_ebeMultiply(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "ebeMultiply", args, 2);
      }

      static PyObject *t_OpenMapRealVector_equals(t_OpenMapRealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getDimension(t_OpenMapRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getDimension", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getDistance(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDistance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDistance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getDistance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getEntry(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getL1Distance(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getL1Distance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getL1Distance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getL1Distance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getLInfDistance(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getLInfDistance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getSparsity(t_OpenMapRealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSparsity());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OpenMapRealVector_getSubVector(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getSubVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_hashCode(t_OpenMapRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_OpenMapRealVector_isInfinite(t_OpenMapRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isInfinite());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "isInfinite", args, 2);
      }

      static PyObject *t_OpenMapRealVector_isNaN(t_OpenMapRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isNaN());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "isNaN", args, 2);
      }

      static PyObject *t_OpenMapRealVector_mapAdd(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "mapAdd", args, 2);
      }

      static PyObject *t_OpenMapRealVector_mapAddToSelf(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "mapAddToSelf", args, 2);
      }

      static PyObject *t_OpenMapRealVector_set(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "set", args, 2);
      }

      static PyObject *t_OpenMapRealVector_setEntry(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_OpenMapRealVector_setSubVector(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "setSubVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_sparseIterator(t_OpenMapRealVector *self, PyObject *args)
      {
        ::java::util::Iterator result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.sparseIterator());
          return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "sparseIterator", args, 2);
      }

      static PyObject *t_OpenMapRealVector_subtract(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_OpenMapRealVector_toArray(t_OpenMapRealVector *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toArray());
          return result.wrap();
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "toArray", args, 2);
      }

      static PyObject *t_OpenMapRealVector_unitVector(t_OpenMapRealVector *self, PyObject *args)
      {
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.unitVector());
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "unitVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_unitize(t_OpenMapRealVector *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.unitize());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "unitize", args, 2);
      }

      static PyObject *t_OpenMapRealVector_get__dimension(t_OpenMapRealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OpenMapRealVector_get__infinite(t_OpenMapRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_OpenMapRealVector_get__naN(t_OpenMapRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_OpenMapRealVector_get__sparsity(t_OpenMapRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSparsity());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIllegalArgumentException::class$ = NULL;
      jmethodID *OrekitIllegalArgumentException::mids$ = NULL;
      bool OrekitIllegalArgumentException::live$ = false;

      jclass OrekitIllegalArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIllegalArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIllegalArgumentException::OrekitIllegalArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIllegalArgumentException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitIllegalArgumentException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitIllegalArgumentException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIllegalArgumentException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
      }

      ::org::hipparchus::exception::Localizable OrekitIllegalArgumentException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
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
      static PyObject *t_OrekitIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIllegalArgumentException_init_(t_OrekitIllegalArgumentException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIllegalArgumentException_getLocalizedMessage(t_OrekitIllegalArgumentException *self, PyObject *args);
      static PyObject *t_OrekitIllegalArgumentException_getMessage(t_OrekitIllegalArgumentException *self, PyObject *args);
      static PyObject *t_OrekitIllegalArgumentException_getParts(t_OrekitIllegalArgumentException *self);
      static PyObject *t_OrekitIllegalArgumentException_getSpecifier(t_OrekitIllegalArgumentException *self);
      static PyObject *t_OrekitIllegalArgumentException_get__localizedMessage(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__message(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__parts(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__specifier(t_OrekitIllegalArgumentException *self, void *data);
      static PyGetSetDef t_OrekitIllegalArgumentException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, message),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, parts),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIllegalArgumentException__methods_[] = {
        DECLARE_METHOD(t_OrekitIllegalArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIllegalArgumentException)[] = {
        { Py_tp_methods, t_OrekitIllegalArgumentException__methods_ },
        { Py_tp_init, (void *) t_OrekitIllegalArgumentException_init_ },
        { Py_tp_getset, t_OrekitIllegalArgumentException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIllegalArgumentException)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalArgumentException),
        NULL
      };

      DEFINE_TYPE(OrekitIllegalArgumentException, t_OrekitIllegalArgumentException, OrekitIllegalArgumentException);

      void t_OrekitIllegalArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIllegalArgumentException), &PY_TYPE_DEF(OrekitIllegalArgumentException), module, "OrekitIllegalArgumentException", 0);
      }

      void t_OrekitIllegalArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "class_", make_descriptor(OrekitIllegalArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "wrapfn_", make_descriptor(t_OrekitIllegalArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIllegalArgumentException::initializeClass, 1)))
          return NULL;
        return t_OrekitIllegalArgumentException::wrap_Object(OrekitIllegalArgumentException(((t_OrekitIllegalArgumentException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIllegalArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIllegalArgumentException_init_(t_OrekitIllegalArgumentException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIllegalArgumentException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIllegalArgumentException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIllegalArgumentException_getLocalizedMessage(t_OrekitIllegalArgumentException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIllegalArgumentException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalArgumentException_getMessage(t_OrekitIllegalArgumentException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitIllegalArgumentException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalArgumentException_getParts(t_OrekitIllegalArgumentException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalArgumentException_getSpecifier(t_OrekitIllegalArgumentException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__localizedMessage(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__message(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__parts(t_OrekitIllegalArgumentException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__specifier(t_OrekitIllegalArgumentException *self, void *data)
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
#include "org/hipparchus/complex/ComplexField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexField::class$ = NULL;
      jmethodID *ComplexField::mids$ = NULL;
      bool ComplexField::live$ = false;

      jclass ComplexField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_f304aeb797b96d24] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/complex/ComplexField;");
          mids$[mid_getOne_a6784e0b89dedf02] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_a6784e0b89dedf02] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ComplexField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      ComplexField ComplexField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_f304aeb797b96d24]));
      }

      ::org::hipparchus::complex::Complex ComplexField::getOne() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getOne_a6784e0b89dedf02]));
      }

      ::java::lang::Class ComplexField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
      }

      ::org::hipparchus::complex::Complex ComplexField::getZero() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getZero_a6784e0b89dedf02]));
      }

      jint ComplexField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
      static PyObject *t_ComplexField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexField_equals(t_ComplexField *self, PyObject *args);
      static PyObject *t_ComplexField_getInstance(PyTypeObject *type);
      static PyObject *t_ComplexField_getOne(t_ComplexField *self);
      static PyObject *t_ComplexField_getRuntimeClass(t_ComplexField *self);
      static PyObject *t_ComplexField_getZero(t_ComplexField *self);
      static PyObject *t_ComplexField_hashCode(t_ComplexField *self, PyObject *args);
      static PyObject *t_ComplexField_get__instance(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__one(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__runtimeClass(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__zero(t_ComplexField *self, void *data);
      static PyGetSetDef t_ComplexField__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexField, instance),
        DECLARE_GET_FIELD(t_ComplexField, one),
        DECLARE_GET_FIELD(t_ComplexField, runtimeClass),
        DECLARE_GET_FIELD(t_ComplexField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexField__methods_[] = {
        DECLARE_METHOD(t_ComplexField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, equals, METH_VARARGS),
        DECLARE_METHOD(t_ComplexField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexField)[] = {
        { Py_tp_methods, t_ComplexField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexField, t_ComplexField, ComplexField);

      void t_ComplexField::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexField), &PY_TYPE_DEF(ComplexField), module, "ComplexField", 0);
      }

      void t_ComplexField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "class_", make_descriptor(ComplexField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "wrapfn_", make_descriptor(t_ComplexField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexField::initializeClass, 1)))
          return NULL;
        return t_ComplexField::wrap_Object(ComplexField(((t_ComplexField *) arg)->object.this$));
      }
      static PyObject *t_ComplexField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexField_equals(t_ComplexField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ComplexField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ComplexField_getInstance(PyTypeObject *type)
      {
        ComplexField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::complex::ComplexField::getInstance());
        return t_ComplexField::wrap_Object(result);
      }

      static PyObject *t_ComplexField_getOne(t_ComplexField *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_ComplexField_getRuntimeClass(t_ComplexField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexField_getZero(t_ComplexField *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_ComplexField_hashCode(t_ComplexField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ComplexField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ComplexField_get__instance(t_ComplexField *self, void *data)
      {
        ComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_ComplexField::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__one(t_ComplexField *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__runtimeClass(t_ComplexField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__zero(t_ComplexField *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/File.h"
#include "org/orekit/data/DataSource$Opener.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource::class$ = NULL;
      jmethodID *DataSource::mids$ = NULL;
      bool DataSource::live$ = false;

      jclass DataSource::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0613af62f2ba5dba] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_cb4fb21723b801f8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataSource$ReaderOpener;)V");
          mids$[mid_init$_b8b39c0870e0929a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataSource$StreamOpener;)V");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getOpener_0bfb0ac7f0358ce6] = env->getMethodID(cls, "getOpener", "()Lorg/orekit/data/DataSource$Opener;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DataSource::DataSource(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0613af62f2ba5dba, a0.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0, const ::org::orekit::data::DataSource$ReaderOpener & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb4fb21723b801f8, a0.this$, a1.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0, const ::org::orekit::data::DataSource$StreamOpener & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b8b39c0870e0929a, a0.this$, a1.this$)) {}

      ::java::lang::String DataSource::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::org::orekit::data::DataSource$Opener DataSource::getOpener() const
      {
        return ::org::orekit::data::DataSource$Opener(env->callObjectMethod(this$, mids$[mid_getOpener_0bfb0ac7f0358ce6]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DataSource_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DataSource_init_(t_DataSource *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DataSource_getName(t_DataSource *self);
      static PyObject *t_DataSource_getOpener(t_DataSource *self);
      static PyObject *t_DataSource_get__name(t_DataSource *self, void *data);
      static PyObject *t_DataSource_get__opener(t_DataSource *self, void *data);
      static PyGetSetDef t_DataSource__fields_[] = {
        DECLARE_GET_FIELD(t_DataSource, name),
        DECLARE_GET_FIELD(t_DataSource, opener),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataSource__methods_[] = {
        DECLARE_METHOD(t_DataSource, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource, getName, METH_NOARGS),
        DECLARE_METHOD(t_DataSource, getOpener, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource)[] = {
        { Py_tp_methods, t_DataSource__methods_ },
        { Py_tp_init, (void *) t_DataSource_init_ },
        { Py_tp_getset, t_DataSource__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource, t_DataSource, DataSource);

      void t_DataSource::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource), &PY_TYPE_DEF(DataSource), module, "DataSource", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "StreamOpener", make_descriptor(&PY_TYPE_DEF(DataSource$StreamOpener)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "Opener", make_descriptor(&PY_TYPE_DEF(DataSource$Opener)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "ReaderOpener", make_descriptor(&PY_TYPE_DEF(DataSource$ReaderOpener)));
      }

      void t_DataSource::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "class_", make_descriptor(DataSource::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "wrapfn_", make_descriptor(t_DataSource::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource::initializeClass, 1)))
          return NULL;
        return t_DataSource::wrap_Object(DataSource(((t_DataSource *) arg)->object.this$));
      }
      static PyObject *t_DataSource_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DataSource_init_(t_DataSource *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::io::File a0((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
            {
              INT_CALL(object = DataSource(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = DataSource(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataSource$ReaderOpener a1((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataSource$ReaderOpener::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DataSource(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataSource$StreamOpener a1((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataSource$StreamOpener::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DataSource(a0, a1));
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

      static PyObject *t_DataSource_getName(t_DataSource *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_DataSource_getOpener(t_DataSource *self)
      {
        ::org::orekit::data::DataSource$Opener result((jobject) NULL);
        OBJ_CALL(result = self->object.getOpener());
        return ::org::orekit::data::t_DataSource$Opener::wrap_Object(result);
      }

      static PyObject *t_DataSource_get__name(t_DataSource *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_DataSource_get__opener(t_DataSource *self, void *data)
      {
        ::org::orekit::data::DataSource$Opener value((jobject) NULL);
        OBJ_CALL(value = self->object.getOpener());
        return ::org::orekit::data::t_DataSource$Opener::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/WilcoxonSignedRankTest.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *WilcoxonSignedRankTest::class$ = NULL;
        jmethodID *WilcoxonSignedRankTest::mids$ = NULL;
        bool WilcoxonSignedRankTest::live$ = false;

        jclass WilcoxonSignedRankTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/WilcoxonSignedRankTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ed87323846b88129] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_wilcoxonSignedRank_b561c6892e9976f8] = env->getMethodID(cls, "wilcoxonSignedRank", "([D[D)D");
            mids$[mid_wilcoxonSignedRankTest_c98cc76e0ea0aa4c] = env->getMethodID(cls, "wilcoxonSignedRankTest", "([D[DZ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WilcoxonSignedRankTest::WilcoxonSignedRankTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        WilcoxonSignedRankTest::WilcoxonSignedRankTest(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed87323846b88129, a0.this$, a1.this$)) {}

        jdouble WilcoxonSignedRankTest::wilcoxonSignedRank(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_wilcoxonSignedRank_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble WilcoxonSignedRankTest::wilcoxonSignedRankTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_wilcoxonSignedRankTest_c98cc76e0ea0aa4c], a0.this$, a1.this$, a2);
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
        static PyObject *t_WilcoxonSignedRankTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WilcoxonSignedRankTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_WilcoxonSignedRankTest_init_(t_WilcoxonSignedRankTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRank(t_WilcoxonSignedRankTest *self, PyObject *args);
        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRankTest(t_WilcoxonSignedRankTest *self, PyObject *args);

        static PyMethodDef t_WilcoxonSignedRankTest__methods_[] = {
          DECLARE_METHOD(t_WilcoxonSignedRankTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, wilcoxonSignedRank, METH_VARARGS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, wilcoxonSignedRankTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WilcoxonSignedRankTest)[] = {
          { Py_tp_methods, t_WilcoxonSignedRankTest__methods_ },
          { Py_tp_init, (void *) t_WilcoxonSignedRankTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WilcoxonSignedRankTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WilcoxonSignedRankTest, t_WilcoxonSignedRankTest, WilcoxonSignedRankTest);

        void t_WilcoxonSignedRankTest::install(PyObject *module)
        {
          installType(&PY_TYPE(WilcoxonSignedRankTest), &PY_TYPE_DEF(WilcoxonSignedRankTest), module, "WilcoxonSignedRankTest", 0);
        }

        void t_WilcoxonSignedRankTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "class_", make_descriptor(WilcoxonSignedRankTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "wrapfn_", make_descriptor(t_WilcoxonSignedRankTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WilcoxonSignedRankTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WilcoxonSignedRankTest::initializeClass, 1)))
            return NULL;
          return t_WilcoxonSignedRankTest::wrap_Object(WilcoxonSignedRankTest(((t_WilcoxonSignedRankTest *) arg)->object.this$));
        }
        static PyObject *t_WilcoxonSignedRankTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WilcoxonSignedRankTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_WilcoxonSignedRankTest_init_(t_WilcoxonSignedRankTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              WilcoxonSignedRankTest object((jobject) NULL);

              INT_CALL(object = WilcoxonSignedRankTest());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              WilcoxonSignedRankTest object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = WilcoxonSignedRankTest(a0, a1));
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

        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRank(t_WilcoxonSignedRankTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.wilcoxonSignedRank(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "wilcoxonSignedRank", args);
          return NULL;
        }

        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRankTest(t_WilcoxonSignedRankTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean a2;
          jdouble result;

          if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.wilcoxonSignedRankTest(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "wilcoxonSignedRankTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/ConvergenceCheckerAndMultiplexer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceCheckerAndMultiplexer::class$ = NULL;
      jmethodID *ConvergenceCheckerAndMultiplexer::mids$ = NULL;
      bool ConvergenceCheckerAndMultiplexer::live$ = false;

      jclass ConvergenceCheckerAndMultiplexer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceCheckerAndMultiplexer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_converged_7c442e0e70a8e8da] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConvergenceCheckerAndMultiplexer::ConvergenceCheckerAndMultiplexer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

      jboolean ConvergenceCheckerAndMultiplexer::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_7c442e0e70a8e8da], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceCheckerAndMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_of_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args);
      static int t_ConvergenceCheckerAndMultiplexer_init_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_converged(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_get__parameters_(t_ConvergenceCheckerAndMultiplexer *self, void *data);
      static PyGetSetDef t_ConvergenceCheckerAndMultiplexer__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceCheckerAndMultiplexer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceCheckerAndMultiplexer__methods_[] = {
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceCheckerAndMultiplexer)[] = {
        { Py_tp_methods, t_ConvergenceCheckerAndMultiplexer__methods_ },
        { Py_tp_init, (void *) t_ConvergenceCheckerAndMultiplexer_init_ },
        { Py_tp_getset, t_ConvergenceCheckerAndMultiplexer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceCheckerAndMultiplexer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceCheckerAndMultiplexer, t_ConvergenceCheckerAndMultiplexer, ConvergenceCheckerAndMultiplexer);
      PyObject *t_ConvergenceCheckerAndMultiplexer::wrap_Object(const ConvergenceCheckerAndMultiplexer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerAndMultiplexer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerAndMultiplexer *self = (t_ConvergenceCheckerAndMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceCheckerAndMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerAndMultiplexer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerAndMultiplexer *self = (t_ConvergenceCheckerAndMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceCheckerAndMultiplexer::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceCheckerAndMultiplexer), &PY_TYPE_DEF(ConvergenceCheckerAndMultiplexer), module, "ConvergenceCheckerAndMultiplexer", 0);
      }

      void t_ConvergenceCheckerAndMultiplexer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "class_", make_descriptor(ConvergenceCheckerAndMultiplexer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "wrapfn_", make_descriptor(t_ConvergenceCheckerAndMultiplexer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceCheckerAndMultiplexer::initializeClass, 1)))
          return NULL;
        return t_ConvergenceCheckerAndMultiplexer::wrap_Object(ConvergenceCheckerAndMultiplexer(((t_ConvergenceCheckerAndMultiplexer *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceCheckerAndMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceCheckerAndMultiplexer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_of_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ConvergenceCheckerAndMultiplexer_init_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ConvergenceCheckerAndMultiplexer object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = ConvergenceCheckerAndMultiplexer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_converged(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceCheckerAndMultiplexer_get__parameters_(t_ConvergenceCheckerAndMultiplexer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsNordsieckFieldTransformer::class$ = NULL;
        jmethodID *AdamsNordsieckFieldTransformer::mids$ = NULL;
        bool AdamsNordsieckFieldTransformer::live$ = false;

        jclass AdamsNordsieckFieldTransformer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_49ad421963f77d2c] = env->getStaticMethodID(cls, "getInstance", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer;");
            mids$[mid_initializeHighOrderDerivatives_8a387f2c5f491083] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase1_e3fbb99b5c5aabb2] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_ecf8fc9f38ab7a9d] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsNordsieckFieldTransformer AdamsNordsieckFieldTransformer::getInstance(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return AdamsNordsieckFieldTransformer(env->callStaticObjectMethod(cls, mids$[mid_getInstance_49ad421963f77d2c], a0.this$, a1));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsNordsieckFieldTransformer::initializeHighOrderDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a3) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_initializeHighOrderDerivatives_8a387f2c5f491083], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsNordsieckFieldTransformer::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_e3fbb99b5c5aabb2], a0.this$));
        }

        void AdamsNordsieckFieldTransformer::updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::linear::Array2DRowFieldMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_ecf8fc9f38ab7a9d], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsNordsieckFieldTransformer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_of_(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_getInstance(PyTypeObject *type, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckFieldTransformer *self, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_get__parameters_(t_AdamsNordsieckFieldTransformer *self, void *data);
        static PyGetSetDef t_AdamsNordsieckFieldTransformer__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsNordsieckFieldTransformer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsNordsieckFieldTransformer__methods_[] = {
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, getInstance, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, initializeHighOrderDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsNordsieckFieldTransformer)[] = {
          { Py_tp_methods, t_AdamsNordsieckFieldTransformer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AdamsNordsieckFieldTransformer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsNordsieckFieldTransformer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsNordsieckFieldTransformer, t_AdamsNordsieckFieldTransformer, AdamsNordsieckFieldTransformer);
        PyObject *t_AdamsNordsieckFieldTransformer::wrap_Object(const AdamsNordsieckFieldTransformer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsNordsieckFieldTransformer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsNordsieckFieldTransformer *self = (t_AdamsNordsieckFieldTransformer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsNordsieckFieldTransformer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsNordsieckFieldTransformer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsNordsieckFieldTransformer *self = (t_AdamsNordsieckFieldTransformer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsNordsieckFieldTransformer::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsNordsieckFieldTransformer), &PY_TYPE_DEF(AdamsNordsieckFieldTransformer), module, "AdamsNordsieckFieldTransformer", 0);
        }

        void t_AdamsNordsieckFieldTransformer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "class_", make_descriptor(AdamsNordsieckFieldTransformer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "wrapfn_", make_descriptor(t_AdamsNordsieckFieldTransformer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsNordsieckFieldTransformer::initializeClass, 1)))
            return NULL;
          return t_AdamsNordsieckFieldTransformer::wrap_Object(AdamsNordsieckFieldTransformer(((t_AdamsNordsieckFieldTransformer *) arg)->object.this$));
        }
        static PyObject *t_AdamsNordsieckFieldTransformer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsNordsieckFieldTransformer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_of_(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_getInstance(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          AdamsNordsieckFieldTransformer result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::nonstiff::AdamsNordsieckFieldTransformer::getInstance(a0, a1));
            return t_AdamsNordsieckFieldTransformer::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getInstance", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
          PyTypeObject **p2;
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArgs(args, "K[K[[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.initializeHighOrderDerivatives(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeHighOrderDerivatives", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckFieldTransformer *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowFieldMatrix a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::linear::Array2DRowFieldMatrix a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
        static PyObject *t_AdamsNordsieckFieldTransformer_get__parameters_(t_AdamsNordsieckFieldTransformer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonIntervalEventTrigger::class$ = NULL;
          jmethodID *PythonIntervalEventTrigger::mids$ = NULL;
          bool PythonIntervalEventTrigger::live$ = false;

          jclass PythonIntervalEventTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_958f8a74aa6ccd6d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_convertIntervalDetector_904dccaacafa0db1] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIntervalEventTrigger::PythonIntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_958f8a74aa6ccd6d, a0.this$)) {}

          void PythonIntervalEventTrigger::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonIntervalEventTrigger::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonIntervalEventTrigger::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonIntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntervalEventTrigger_of_(t_PythonIntervalEventTrigger *self, PyObject *args);
          static int t_PythonIntervalEventTrigger_init_(t_PythonIntervalEventTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIntervalEventTrigger_finalize(t_PythonIntervalEventTrigger *self);
          static PyObject *t_PythonIntervalEventTrigger_pythonExtension(t_PythonIntervalEventTrigger *self, PyObject *args);
          static jobject JNICALL t_PythonIntervalEventTrigger_convertIntervalDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonIntervalEventTrigger_getParametersDrivers1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonIntervalEventTrigger_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIntervalEventTrigger_get__self(t_PythonIntervalEventTrigger *self, void *data);
          static PyObject *t_PythonIntervalEventTrigger_get__parameters_(t_PythonIntervalEventTrigger *self, void *data);
          static PyGetSetDef t_PythonIntervalEventTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIntervalEventTrigger, self),
            DECLARE_GET_FIELD(t_PythonIntervalEventTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIntervalEventTrigger__methods_[] = {
            DECLARE_METHOD(t_PythonIntervalEventTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIntervalEventTrigger)[] = {
            { Py_tp_methods, t_PythonIntervalEventTrigger__methods_ },
            { Py_tp_init, (void *) t_PythonIntervalEventTrigger_init_ },
            { Py_tp_getset, t_PythonIntervalEventTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIntervalEventTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger),
            NULL
          };

          DEFINE_TYPE(PythonIntervalEventTrigger, t_PythonIntervalEventTrigger, PythonIntervalEventTrigger);
          PyObject *t_PythonIntervalEventTrigger::wrap_Object(const PythonIntervalEventTrigger& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonIntervalEventTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonIntervalEventTrigger *self = (t_PythonIntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonIntervalEventTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonIntervalEventTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonIntervalEventTrigger *self = (t_PythonIntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonIntervalEventTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIntervalEventTrigger), &PY_TYPE_DEF(PythonIntervalEventTrigger), module, "PythonIntervalEventTrigger", 1);
          }

          void t_PythonIntervalEventTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "class_", make_descriptor(PythonIntervalEventTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "wrapfn_", make_descriptor(t_PythonIntervalEventTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIntervalEventTrigger::initializeClass);
            JNINativeMethod methods[] = {
              { "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonIntervalEventTrigger_convertIntervalDetector0 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonIntervalEventTrigger_getParametersDrivers1 },
              { "pythonDecRef", "()V", (void *) t_PythonIntervalEventTrigger_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonIntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIntervalEventTrigger::initializeClass, 1)))
              return NULL;
            return t_PythonIntervalEventTrigger::wrap_Object(PythonIntervalEventTrigger(((t_PythonIntervalEventTrigger *) arg)->object.this$));
          }
          static PyObject *t_PythonIntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIntervalEventTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonIntervalEventTrigger_of_(t_PythonIntervalEventTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonIntervalEventTrigger_init_(t_PythonIntervalEventTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            PythonIntervalEventTrigger object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = PythonIntervalEventTrigger(a0));
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

          static PyObject *t_PythonIntervalEventTrigger_finalize(t_PythonIntervalEventTrigger *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIntervalEventTrigger_pythonExtension(t_PythonIntervalEventTrigger *self, PyObject *args)
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

          static jobject JNICALL t_PythonIntervalEventTrigger_convertIntervalDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertIntervalDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertIntervalDetector", result);
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

          static jobject JNICALL t_PythonIntervalEventTrigger_getParametersDrivers1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_492808a339bfa35f]);
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

          static void JNICALL t_PythonIntervalEventTrigger_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIntervalEventTrigger_get__self(t_PythonIntervalEventTrigger *self, void *data)
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
          static PyObject *t_PythonIntervalEventTrigger_get__parameters_(t_PythonIntervalEventTrigger *self, void *data)
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
#include "org/orekit/time/TimeScalesFactory.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/GMSTScale.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TCGScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScalesFactory::class$ = NULL;
      jmethodID *TimeScalesFactory::mids$ = NULL;
      bool TimeScalesFactory::live$ = false;

      jclass TimeScalesFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScalesFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addDefaultUTCTAIOffsetsLoaders_0fa09c18fee449d5] = env->getStaticMethodID(cls, "addDefaultUTCTAIOffsetsLoaders", "()V");
          mids$[mid_addUTCTAIOffsetsLoader_65100d031698831e] = env->getStaticMethodID(cls, "addUTCTAIOffsetsLoader", "(Lorg/orekit/time/UTCTAIOffsetsLoader;)V");
          mids$[mid_clearUTCTAIOffsetsLoaders_0fa09c18fee449d5] = env->getStaticMethodID(cls, "clearUTCTAIOffsetsLoaders", "()V");
          mids$[mid_getBDT_fc0e10255fdb9359] = env->getStaticMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getGLONASS_2b4079449103a541] = env->getStaticMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_17da19434c6eaf77] = env->getStaticMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_9e1c13089038a5fa] = env->getStaticMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_0569916ae20da9e6] = env->getStaticMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_acc0c9657c1b3fab] = env->getStaticMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_b61358961d42527b] = env->getStaticMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_542013db907f5b2d] = env->getStaticMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_a36a736c24a84bc8] = env->getStaticMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_bc03267fa6cc0068] = env->getStaticMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_01a9b50b4c9899e0] = env->getStaticMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_1cee2d27f65b3e44] = env->getStaticMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getTimeScales_81309dd1495ca0f7] = env->getStaticMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");
          mids$[mid_getUT1_9806ff584bac5289] = env->getStaticMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_03564ba2f50e6e3b] = env->getStaticMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_4611f4f4ac7b3711] = env->getStaticMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void TimeScalesFactory::addDefaultUTCTAIOffsetsLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultUTCTAIOffsetsLoaders_0fa09c18fee449d5]);
      }

      void TimeScalesFactory::addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addUTCTAIOffsetsLoader_65100d031698831e], a0.this$);
      }

      void TimeScalesFactory::clearUTCTAIOffsetsLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearUTCTAIOffsetsLoaders_0fa09c18fee449d5]);
      }

      ::org::orekit::time::BDTScale TimeScalesFactory::getBDT()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::BDTScale(env->callStaticObjectMethod(cls, mids$[mid_getBDT_fc0e10255fdb9359]));
      }

      ::org::orekit::time::GLONASSScale TimeScalesFactory::getGLONASS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GLONASSScale(env->callStaticObjectMethod(cls, mids$[mid_getGLONASS_2b4079449103a541]));
      }

      ::org::orekit::time::GMSTScale TimeScalesFactory::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GMSTScale(env->callStaticObjectMethod(cls, mids$[mid_getGMST_17da19434c6eaf77], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale TimeScalesFactory::getGPS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GPSScale(env->callStaticObjectMethod(cls, mids$[mid_getGPS_9e1c13089038a5fa]));
      }

      ::org::orekit::time::GalileoScale TimeScalesFactory::getGST()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GalileoScale(env->callStaticObjectMethod(cls, mids$[mid_getGST_0569916ae20da9e6]));
      }

      ::org::orekit::time::IRNSSScale TimeScalesFactory::getIRNSS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::IRNSSScale(env->callStaticObjectMethod(cls, mids$[mid_getIRNSS_acc0c9657c1b3fab]));
      }

      ::org::orekit::time::QZSSScale TimeScalesFactory::getQZSS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::QZSSScale(env->callStaticObjectMethod(cls, mids$[mid_getQZSS_b61358961d42527b]));
      }

      ::org::orekit::time::TAIScale TimeScalesFactory::getTAI()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TAIScale(env->callStaticObjectMethod(cls, mids$[mid_getTAI_542013db907f5b2d]));
      }

      ::org::orekit::time::TCBScale TimeScalesFactory::getTCB()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TCBScale(env->callStaticObjectMethod(cls, mids$[mid_getTCB_a36a736c24a84bc8]));
      }

      ::org::orekit::time::TCGScale TimeScalesFactory::getTCG()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TCGScale(env->callStaticObjectMethod(cls, mids$[mid_getTCG_bc03267fa6cc0068]));
      }

      ::org::orekit::time::TDBScale TimeScalesFactory::getTDB()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TDBScale(env->callStaticObjectMethod(cls, mids$[mid_getTDB_01a9b50b4c9899e0]));
      }

      ::org::orekit::time::TTScale TimeScalesFactory::getTT()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TTScale(env->callStaticObjectMethod(cls, mids$[mid_getTT_1cee2d27f65b3e44]));
      }

      ::org::orekit::time::LazyLoadedTimeScales TimeScalesFactory::getTimeScales()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::LazyLoadedTimeScales(env->callStaticObjectMethod(cls, mids$[mid_getTimeScales_81309dd1495ca0f7]));
      }

      ::org::orekit::time::UT1Scale TimeScalesFactory::getUT1(const ::org::orekit::frames::EOPHistory & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UT1Scale(env->callStaticObjectMethod(cls, mids$[mid_getUT1_9806ff584bac5289], a0.this$));
      }

      ::org::orekit::time::UT1Scale TimeScalesFactory::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UT1Scale(env->callStaticObjectMethod(cls, mids$[mid_getUT1_03564ba2f50e6e3b], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale TimeScalesFactory::getUTC()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UTCScale(env->callStaticObjectMethod(cls, mids$[mid_getUTC_4611f4f4ac7b3711]));
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
      static PyObject *t_TimeScalesFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_addDefaultUTCTAIOffsetsLoaders(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_addUTCTAIOffsetsLoader(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_clearUTCTAIOffsetsLoaders(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getBDT(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGLONASS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGMST(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeScalesFactory_getGPS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGST(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getIRNSS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getQZSS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTAI(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTCB(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTCG(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTDB(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTT(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTimeScales(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getUT1(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeScalesFactory_getUTC(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_get__bDT(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gLONASS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gPS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gST(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__iRNSS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__qZSS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tAI(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tCB(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tCG(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tDB(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tT(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__timeScales(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__uTC(t_TimeScalesFactory *self, void *data);
      static PyGetSetDef t_TimeScalesFactory__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScalesFactory, bDT),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gLONASS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gPS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gST),
        DECLARE_GET_FIELD(t_TimeScalesFactory, iRNSS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, qZSS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tAI),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tCB),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tCG),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tDB),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tT),
        DECLARE_GET_FIELD(t_TimeScalesFactory, timeScales),
        DECLARE_GET_FIELD(t_TimeScalesFactory, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScalesFactory__methods_[] = {
        DECLARE_METHOD(t_TimeScalesFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, addDefaultUTCTAIOffsetsLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, addUTCTAIOffsetsLoader, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, clearUTCTAIOffsetsLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getBDT, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGLONASS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGMST, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGPS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGST, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getIRNSS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getQZSS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTAI, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTCB, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTCG, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTDB, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTT, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTimeScales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getUT1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getUTC, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScalesFactory)[] = {
        { Py_tp_methods, t_TimeScalesFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScalesFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScalesFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScalesFactory, t_TimeScalesFactory, TimeScalesFactory);

      void t_TimeScalesFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScalesFactory), &PY_TYPE_DEF(TimeScalesFactory), module, "TimeScalesFactory", 0);
      }

      void t_TimeScalesFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "class_", make_descriptor(TimeScalesFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "wrapfn_", make_descriptor(t_TimeScalesFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScalesFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScalesFactory::initializeClass, 1)))
          return NULL;
        return t_TimeScalesFactory::wrap_Object(TimeScalesFactory(((t_TimeScalesFactory *) arg)->object.this$));
      }
      static PyObject *t_TimeScalesFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScalesFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScalesFactory_addDefaultUTCTAIOffsetsLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::time::TimeScalesFactory::addDefaultUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_TimeScalesFactory_addUTCTAIOffsetsLoader(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::time::UTCTAIOffsetsLoader a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UTCTAIOffsetsLoader::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::time::TimeScalesFactory::addUTCTAIOffsetsLoader(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addUTCTAIOffsetsLoader", arg);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_clearUTCTAIOffsetsLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::time::TimeScalesFactory::clearUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_TimeScalesFactory_getBDT(PyTypeObject *type)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGLONASS(PyTypeObject *type)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGMST(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGMST", args);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_getGPS(PyTypeObject *type)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGST(PyTypeObject *type)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getIRNSS(PyTypeObject *type)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getQZSS(PyTypeObject *type)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTAI(PyTypeObject *type)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTCB(PyTypeObject *type)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTCG(PyTypeObject *type)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTDB(PyTypeObject *type)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTT(PyTypeObject *type)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTimeScales(PyTypeObject *type)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getUT1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::EOPHistory a0((jobject) NULL);
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUT1(a0));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUT1(a0, a1));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getUT1", args);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_getUTC(PyTypeObject *type)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_get__bDT(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gLONASS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gPS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gST(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__iRNSS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__qZSS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tAI(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tCB(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tCG(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tDB(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tT(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__timeScales(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__uTC(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *ManeuverTriggersResetter::class$ = NULL;
          jmethodID *ManeuverTriggersResetter::mids$ = NULL;
          bool ManeuverTriggersResetter::live$ = false;

          jclass ManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_maneuverTriggered_33f4696e4edaa03c] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_resetState_f43130c50e9fafeb] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void ManeuverTriggersResetter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
          }

          void ManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_33f4696e4edaa03c], a0.this$, a1);
          }

          ::org::orekit::propagation::SpacecraftState ManeuverTriggersResetter::resetState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_f43130c50e9fafeb], a0.this$));
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
          static PyObject *t_ManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggersResetter_init(t_ManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_ManeuverTriggersResetter_maneuverTriggered(t_ManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_ManeuverTriggersResetter_resetState(t_ManeuverTriggersResetter *self, PyObject *arg);

          static PyMethodDef t_ManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_ManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, init, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, resetState, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_ManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ManeuverTriggersResetter, t_ManeuverTriggersResetter, ManeuverTriggersResetter);

          void t_ManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(ManeuverTriggersResetter), &PY_TYPE_DEF(ManeuverTriggersResetter), module, "ManeuverTriggersResetter", 0);
          }

          void t_ManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "class_", make_descriptor(ManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "wrapfn_", make_descriptor(t_ManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_ManeuverTriggersResetter::wrap_Object(ManeuverTriggersResetter(((t_ManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_ManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ManeuverTriggersResetter_init(t_ManeuverTriggersResetter *self, PyObject *args)
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

          static PyObject *t_ManeuverTriggersResetter_maneuverTriggered(t_ManeuverTriggersResetter *self, PyObject *args)
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

          static PyObject *t_ManeuverTriggersResetter_resetState(t_ManeuverTriggersResetter *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/PyhonData.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PyhonData::class$ = NULL;
          jmethodID *PyhonData::mids$ = NULL;
          bool PyhonData::live$ = false;

          jclass PyhonData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PyhonData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PyhonData::PyhonData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PyhonData::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PyhonData::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PyhonData::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PyhonData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PyhonData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PyhonData_init_(t_PyhonData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PyhonData_finalize(t_PyhonData *self);
          static PyObject *t_PyhonData_pythonExtension(t_PyhonData *self, PyObject *args);
          static void JNICALL t_PyhonData_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PyhonData_validate1(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PyhonData_get__self(t_PyhonData *self, void *data);
          static PyGetSetDef t_PyhonData__fields_[] = {
            DECLARE_GET_FIELD(t_PyhonData, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PyhonData__methods_[] = {
            DECLARE_METHOD(t_PyhonData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PyhonData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PyhonData, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PyhonData, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PyhonData)[] = {
            { Py_tp_methods, t_PyhonData__methods_ },
            { Py_tp_init, (void *) t_PyhonData_init_ },
            { Py_tp_getset, t_PyhonData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PyhonData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PyhonData, t_PyhonData, PyhonData);

          void t_PyhonData::install(PyObject *module)
          {
            installType(&PY_TYPE(PyhonData), &PY_TYPE_DEF(PyhonData), module, "PyhonData", 1);
          }

          void t_PyhonData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "class_", make_descriptor(PyhonData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "wrapfn_", make_descriptor(t_PyhonData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PyhonData::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PyhonData_pythonDecRef0 },
              { "validate", "(D)V", (void *) t_PyhonData_validate1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PyhonData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PyhonData::initializeClass, 1)))
              return NULL;
            return t_PyhonData::wrap_Object(PyhonData(((t_PyhonData *) arg)->object.this$));
          }
          static PyObject *t_PyhonData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PyhonData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PyhonData_init_(t_PyhonData *self, PyObject *args, PyObject *kwds)
          {
            PyhonData object((jobject) NULL);

            INT_CALL(object = PyhonData());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PyhonData_finalize(t_PyhonData *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PyhonData_pythonExtension(t_PyhonData *self, PyObject *args)
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

          static void JNICALL t_PyhonData_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PyhonData_validate1(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PyhonData_get__self(t_PyhonData *self, void *data)
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
#include "org/orekit/propagation/events/PythonFieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldAdaptableInterval::class$ = NULL;
        jmethodID *PythonFieldAdaptableInterval::mids$ = NULL;
        bool PythonFieldAdaptableInterval::live$ = false;

        jclass PythonFieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_currentInterval_b83144ffe3b4ef29] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAdaptableInterval::PythonFieldAdaptableInterval() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonFieldAdaptableInterval::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldAdaptableInterval::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldAdaptableInterval::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonFieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdaptableInterval_of_(t_PythonFieldAdaptableInterval *self, PyObject *args);
        static int t_PythonFieldAdaptableInterval_init_(t_PythonFieldAdaptableInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAdaptableInterval_finalize(t_PythonFieldAdaptableInterval *self);
        static PyObject *t_PythonFieldAdaptableInterval_pythonExtension(t_PythonFieldAdaptableInterval *self, PyObject *args);
        static jdouble JNICALL t_PythonFieldAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAdaptableInterval_get__self(t_PythonFieldAdaptableInterval *self, void *data);
        static PyObject *t_PythonFieldAdaptableInterval_get__parameters_(t_PythonFieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_PythonFieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAdaptableInterval, self),
          DECLARE_GET_FIELD(t_PythonFieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdaptableInterval)[] = {
          { Py_tp_methods, t_PythonFieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAdaptableInterval_init_ },
          { Py_tp_getset, t_PythonFieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldAdaptableInterval, t_PythonFieldAdaptableInterval, PythonFieldAdaptableInterval);
        PyObject *t_PythonFieldAdaptableInterval::wrap_Object(const PythonFieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdaptableInterval *self = (t_PythonFieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdaptableInterval *self = (t_PythonFieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAdaptableInterval), &PY_TYPE_DEF(PythonFieldAdaptableInterval), module, "PythonFieldAdaptableInterval", 1);
        }

        void t_PythonFieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "class_", make_descriptor(PythonFieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "wrapfn_", make_descriptor(t_PythonFieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAdaptableInterval::initializeClass);
          JNINativeMethod methods[] = {
            { "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D", (void *) t_PythonFieldAdaptableInterval_currentInterval0 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAdaptableInterval_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonFieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAdaptableInterval::wrap_Object(PythonFieldAdaptableInterval(((t_PythonFieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAdaptableInterval_of_(t_PythonFieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAdaptableInterval_init_(t_PythonFieldAdaptableInterval *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldAdaptableInterval object((jobject) NULL);

          INT_CALL(object = PythonFieldAdaptableInterval());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAdaptableInterval_finalize(t_PythonFieldAdaptableInterval *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAdaptableInterval_pythonExtension(t_PythonFieldAdaptableInterval *self, PyObject *args)
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

        static jdouble JNICALL t_PythonFieldAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "currentInterval", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("currentInterval", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonFieldAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAdaptableInterval_get__self(t_PythonFieldAdaptableInterval *self, void *data)
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
        static PyObject *t_PythonFieldAdaptableInterval_get__parameters_(t_PythonFieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Random.h"
#include "java/lang/Class.h"
#include "java/util/stream/DoubleStream.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Random::class$ = NULL;
    jmethodID *Random::mids$ = NULL;
    bool Random::live$ = false;

    jclass Random::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Random");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_doubles_0636ae0567d24d63] = env->getMethodID(cls, "doubles", "()Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_b87abe13a25ee77e] = env->getMethodID(cls, "doubles", "(J)Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_68977be6cce7f15f] = env->getMethodID(cls, "doubles", "(DD)Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_233d23af63f8a935] = env->getMethodID(cls, "doubles", "(JDD)Ljava/util/stream/DoubleStream;");
        mids$[mid_nextBoolean_b108b35ef48e27bd] = env->getMethodID(cls, "nextBoolean", "()Z");
        mids$[mid_nextBytes_20012b3010a39c05] = env->getMethodID(cls, "nextBytes", "([B)V");
        mids$[mid_nextDouble_dff5885c2c873297] = env->getMethodID(cls, "nextDouble", "()D");
        mids$[mid_nextFloat_5adccb493ada08e8] = env->getMethodID(cls, "nextFloat", "()F");
        mids$[mid_nextGaussian_dff5885c2c873297] = env->getMethodID(cls, "nextGaussian", "()D");
        mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");
        mids$[mid_nextInt_2235cd056f5a882b] = env->getMethodID(cls, "nextInt", "(I)I");
        mids$[mid_nextLong_492808a339bfa35f] = env->getMethodID(cls, "nextLong", "()J");
        mids$[mid_setSeed_3a8e7649f31fdb20] = env->getMethodID(cls, "setSeed", "(J)V");
        mids$[mid_next_2235cd056f5a882b] = env->getMethodID(cls, "next", "(I)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Random::Random() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    Random::Random(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

    ::java::util::stream::DoubleStream Random::doubles() const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_0636ae0567d24d63]));
    }

    ::java::util::stream::DoubleStream Random::doubles(jlong a0) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_b87abe13a25ee77e], a0));
    }

    ::java::util::stream::DoubleStream Random::doubles(jdouble a0, jdouble a1) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_68977be6cce7f15f], a0, a1));
    }

    ::java::util::stream::DoubleStream Random::doubles(jlong a0, jdouble a1, jdouble a2) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_233d23af63f8a935], a0, a1, a2));
    }

    jboolean Random::nextBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_nextBoolean_b108b35ef48e27bd]);
    }

    void Random::nextBytes(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_nextBytes_20012b3010a39c05], a0.this$);
    }

    jdouble Random::nextDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextDouble_dff5885c2c873297]);
    }

    jfloat Random::nextFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_nextFloat_5adccb493ada08e8]);
    }

    jdouble Random::nextGaussian() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextGaussian_dff5885c2c873297]);
    }

    jint Random::nextInt() const
    {
      return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
    }

    jint Random::nextInt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_nextInt_2235cd056f5a882b], a0);
    }

    jlong Random::nextLong() const
    {
      return env->callLongMethod(this$, mids$[mid_nextLong_492808a339bfa35f]);
    }

    void Random::setSeed(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setSeed_3a8e7649f31fdb20], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Random_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Random_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Random_init_(t_Random *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Random_doubles(t_Random *self, PyObject *args);
    static PyObject *t_Random_nextBoolean(t_Random *self);
    static PyObject *t_Random_nextBytes(t_Random *self, PyObject *arg);
    static PyObject *t_Random_nextDouble(t_Random *self);
    static PyObject *t_Random_nextFloat(t_Random *self);
    static PyObject *t_Random_nextGaussian(t_Random *self);
    static PyObject *t_Random_nextInt(t_Random *self, PyObject *args);
    static PyObject *t_Random_nextLong(t_Random *self);
    static PyObject *t_Random_setSeed(t_Random *self, PyObject *arg);
    static int t_Random_set__seed(t_Random *self, PyObject *arg, void *data);
    static PyGetSetDef t_Random__fields_[] = {
      DECLARE_SET_FIELD(t_Random, seed),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Random__methods_[] = {
      DECLARE_METHOD(t_Random, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Random, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Random, doubles, METH_VARARGS),
      DECLARE_METHOD(t_Random, nextBoolean, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextBytes, METH_O),
      DECLARE_METHOD(t_Random, nextDouble, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextFloat, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextGaussian, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextInt, METH_VARARGS),
      DECLARE_METHOD(t_Random, nextLong, METH_NOARGS),
      DECLARE_METHOD(t_Random, setSeed, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Random)[] = {
      { Py_tp_methods, t_Random__methods_ },
      { Py_tp_init, (void *) t_Random_init_ },
      { Py_tp_getset, t_Random__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Random)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Random, t_Random, Random);

    void t_Random::install(PyObject *module)
    {
      installType(&PY_TYPE(Random), &PY_TYPE_DEF(Random), module, "Random", 0);
    }

    void t_Random::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "class_", make_descriptor(Random::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "wrapfn_", make_descriptor(t_Random::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Random_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Random::initializeClass, 1)))
        return NULL;
      return t_Random::wrap_Object(Random(((t_Random *) arg)->object.this$));
    }
    static PyObject *t_Random_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Random::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Random_init_(t_Random *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Random object((jobject) NULL);

          INT_CALL(object = Random());
          self->object = object;
          break;
        }
       case 1:
        {
          jlong a0;
          Random object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Random(a0));
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

    static PyObject *t_Random_doubles(t_Random *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::stream::DoubleStream result((jobject) NULL);
          OBJ_CALL(result = self->object.doubles());
          return ::java::util::stream::t_DoubleStream::wrap_Object(result);
        }
        break;
       case 1:
        {
          jlong a0;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.doubles(a0));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          jdouble a0;
          jdouble a1;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.doubles(a0, a1));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          jlong a0;
          jdouble a1;
          jdouble a2;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "JDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.doubles(a0, a1, a2));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "doubles", args);
      return NULL;
    }

    static PyObject *t_Random_nextBoolean(t_Random *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.nextBoolean());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Random_nextBytes(t_Random *self, PyObject *arg)
    {
      JArray< jbyte > a0((jobject) NULL);

      if (!parseArg(arg, "[B", &a0))
      {
        OBJ_CALL(self->object.nextBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "nextBytes", arg);
      return NULL;
    }

    static PyObject *t_Random_nextDouble(t_Random *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextFloat(t_Random *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.nextFloat());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextGaussian(t_Random *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextGaussian());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextInt(t_Random *self, PyObject *args)
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

    static PyObject *t_Random_nextLong(t_Random *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.nextLong());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Random_setSeed(t_Random *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.setSeed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setSeed", arg);
      return NULL;
    }

    static int t_Random_set__seed(t_Random *self, PyObject *arg, void *data)
    {
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *FieldShortTermEncounter2DDefinition::class$ = NULL;
              jmethodID *FieldShortTermEncounter2DDefinition::mids$ = NULL;
              bool FieldShortTermEncounter2DDefinition::live$ = false;

              jclass FieldShortTermEncounter2DDefinition::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ae8f8ecc20bb037f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_init$_c63d77e22ae07039] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_init$_984dc387b0beff26] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_init$_99398f0359ac5cc4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_computeCombinedCovarianceInEncounterFrame_ebfb488262ed1a46] = env->getMethodID(cls, "computeCombinedCovarianceInEncounterFrame", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_computeCombinedCovarianceInReferenceTNW_ebfb488262ed1a46] = env->getMethodID(cls, "computeCombinedCovarianceInReferenceTNW", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_computeCoppolaEncounterDuration_eba8e72a22c984ac] = env->getMethodID(cls, "computeCoppolaEncounterDuration", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMahalanobisDistance_eba8e72a22c984ac] = env->getMethodID(cls, "computeMahalanobisDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMahalanobisDistance_616c74807d7607b4] = env->getMethodID(cls, "computeMahalanobisDistance", "(D)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMissDistance_eba8e72a22c984ac] = env->getMethodID(cls, "computeMissDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeOtherPositionInCollisionPlane_a55106adcf9f2022] = env->getMethodID(cls, "computeOtherPositionInCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_a55106adcf9f2022] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_a91b9a6749fb5a00] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "(D)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_aae6180d70913ad4] = env->getMethodID(cls, "computeOtherRelativeToReferencePVInReferenceInertial", "()Lorg/orekit/utils/FieldPVCoordinates;");
                  mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_c992983685c753c5] = env->getMethodID(cls, "computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_c992983685c753c5] = env->getMethodID(cls, "computeProjectedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_c992983685c753c5] = env->getMethodID(cls, "computeReferenceInertialToCollisionPlaneProjectionMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeSquaredMahalanobisDistance_eba8e72a22c984ac] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_616c74807d7607b4] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "(D)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_e2374fa9196c1e95] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_4a66279d01124751] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getCombinedRadius_eba8e72a22c984ac] = env->getMethodID(cls, "getCombinedRadius", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getEncounterFrame_6568301d8415835c] = env->getMethodID(cls, "getEncounterFrame", "()Lorg/orekit/frames/encounter/EncounterLOF;");
                  mids$[mid_getOtherAtTCA_71338e41eb93eedd] = env->getMethodID(cls, "getOtherAtTCA", "()Lorg/orekit/orbits/FieldOrbit;");
                  mids$[mid_getOtherCovariance_ebfb488262ed1a46] = env->getMethodID(cls, "getOtherCovariance", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_getReferenceAtTCA_71338e41eb93eedd] = env->getMethodID(cls, "getReferenceAtTCA", "()Lorg/orekit/orbits/FieldOrbit;");
                  mids$[mid_getReferenceCovariance_ebfb488262ed1a46] = env->getMethodID(cls, "getReferenceCovariance", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_getTca_51da00d5b8a3b5df] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/FieldAbsoluteDate;");
                  mids$[mid_toEncounter_b27cce090af5c1ba] = env->getMethodID(cls, "toEncounter", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae8f8ecc20bb037f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c63d77e22ae07039, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::encounter::EncounterLOFType & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_984dc387b0beff26, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::frames::encounter::EncounterLOFType & a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99398f0359ac5cc4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7)) {}

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::computeCombinedCovarianceInEncounterFrame() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInEncounterFrame_ebfb488262ed1a46]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::computeCombinedCovarianceInReferenceTNW() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInReferenceTNW_ebfb488262ed1a46]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeCoppolaEncounterDuration() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeCoppolaEncounterDuration_eba8e72a22c984ac]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMahalanobisDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMahalanobisDistance_eba8e72a22c984ac]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMahalanobisDistance(jdouble a0) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMahalanobisDistance_616c74807d7607b4], a0));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMissDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMissDistance_eba8e72a22c984ac]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInCollisionPlane_a55106adcf9f2022]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_a55106adcf9f2022]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane(jdouble a0) const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_a91b9a6749fb5a00], a0));
              }

              ::org::orekit::utils::FieldPVCoordinates FieldShortTermEncounter2DDefinition::computeOtherRelativeToReferencePVInReferenceInertial() const
              {
                return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_aae6180d70913ad4]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_c992983685c753c5]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeProjectedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_c992983685c753c5]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeReferenceInertialToCollisionPlaneProjectionMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_c992983685c753c5]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_eba8e72a22c984ac]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_616c74807d7607b4], a0));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0, const ::org::hipparchus::linear::FieldMatrix & a1)
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_e2374fa9196c1e95], a0.this$, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_4a66279d01124751], a0.this$, a1.this$, a2.this$, a3.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::getCombinedRadius() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCombinedRadius_eba8e72a22c984ac]));
              }

              ::org::orekit::frames::encounter::EncounterLOF FieldShortTermEncounter2DDefinition::getEncounterFrame() const
              {
                return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getEncounterFrame_6568301d8415835c]));
              }

              ::org::orekit::orbits::FieldOrbit FieldShortTermEncounter2DDefinition::getOtherAtTCA() const
              {
                return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOtherAtTCA_71338e41eb93eedd]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::getOtherCovariance() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_getOtherCovariance_ebfb488262ed1a46]));
              }

              ::org::orekit::orbits::FieldOrbit FieldShortTermEncounter2DDefinition::getReferenceAtTCA() const
              {
                return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getReferenceAtTCA_71338e41eb93eedd]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::getReferenceCovariance() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_getReferenceCovariance_ebfb488262ed1a46]));
              }

              ::org::orekit::time::FieldAbsoluteDate FieldShortTermEncounter2DDefinition::getTca() const
              {
                return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_51da00d5b8a3b5df]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition FieldShortTermEncounter2DDefinition::toEncounter() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition(env->callObjectMethod(this$, mids$[mid_toEncounter_b27cce090af5c1ba]));
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
              static PyObject *t_FieldShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldShortTermEncounter2DDefinition_of_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static int t_FieldShortTermEncounter2DDefinition_init_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMissDistance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getCombinedRadius(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getEncounterFrame(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherAtTCA(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherCovariance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceAtTCA(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceCovariance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getTca(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_toEncounter(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__combinedRadius(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__encounterFrame(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__tca(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__parameters_(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyGetSetDef t_FieldShortTermEncounter2DDefinition__fields_[] = {
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, combinedRadius),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, encounterFrame),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, otherAtTCA),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, otherCovariance),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, referenceAtTCA),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, referenceCovariance),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, tca),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldShortTermEncounter2DDefinition__methods_[] = {
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCombinedCovarianceInEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCombinedCovarianceInReferenceTNW, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCoppolaEncounterDuration, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeMissDistance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherPositionInCollisionPlane, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherPositionInRotatedCollisionPlane, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherRelativeToReferencePVInReferenceInertial, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeProjectedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeReferenceInertialToCollisionPlaneProjectionMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance_, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getCombinedRadius, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getOtherAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getOtherCovariance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getReferenceAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getReferenceCovariance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getTca, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, toEncounter, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldShortTermEncounter2DDefinition)[] = {
                { Py_tp_methods, t_FieldShortTermEncounter2DDefinition__methods_ },
                { Py_tp_init, (void *) t_FieldShortTermEncounter2DDefinition_init_ },
                { Py_tp_getset, t_FieldShortTermEncounter2DDefinition__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldShortTermEncounter2DDefinition)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldShortTermEncounter2DDefinition, t_FieldShortTermEncounter2DDefinition, FieldShortTermEncounter2DDefinition);
              PyObject *t_FieldShortTermEncounter2DDefinition::wrap_Object(const FieldShortTermEncounter2DDefinition& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldShortTermEncounter2DDefinition::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldShortTermEncounter2DDefinition *self = (t_FieldShortTermEncounter2DDefinition *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldShortTermEncounter2DDefinition::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldShortTermEncounter2DDefinition::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldShortTermEncounter2DDefinition *self = (t_FieldShortTermEncounter2DDefinition *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldShortTermEncounter2DDefinition::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldShortTermEncounter2DDefinition), &PY_TYPE_DEF(FieldShortTermEncounter2DDefinition), module, "FieldShortTermEncounter2DDefinition", 0);
              }

              void t_FieldShortTermEncounter2DDefinition::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "class_", make_descriptor(FieldShortTermEncounter2DDefinition::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "wrapfn_", make_descriptor(t_FieldShortTermEncounter2DDefinition::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldShortTermEncounter2DDefinition::initializeClass, 1)))
                  return NULL;
                return t_FieldShortTermEncounter2DDefinition::wrap_Object(FieldShortTermEncounter2DDefinition(((t_FieldShortTermEncounter2DDefinition *) arg)->object.this$));
              }
              static PyObject *t_FieldShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldShortTermEncounter2DDefinition::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_of_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldShortTermEncounter2DDefinition_init_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 7:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::frames::encounter::EncounterLOFType a5((jobject) NULL);
                    PyTypeObject **p5;
                    jdouble a6;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a6))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 8:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::orekit::frames::encounter::EncounterLOFType a6((jobject) NULL);
                    PyTypeObject **p6;
                    jdouble a7;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a7))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6, a7));
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

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInEncounterFrame());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInReferenceTNW());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCoppolaEncounterDuration());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeMahalanobisDistance());
                    return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeMahalanobisDistance(a0));
                      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMissDistance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.computeMissDistance());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherPositionInCollisionPlane());
                return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane());
                    return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane(a0));
                      return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeOtherPositionInRotatedCollisionPlane", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherRelativeToReferencePVInReferenceInertial());
                return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeReferenceInertialToCollisionPlaneProjectionMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance());
                    return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance(a0));
                      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeSquaredMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                  break;
                 case 4:
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1, a2, a3));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError(type, "computeSquaredMahalanobisDistance_", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getCombinedRadius(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.getCombinedRadius());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getEncounterFrame(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);
                OBJ_CALL(result = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherAtTCA(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherCovariance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceAtTCA(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceCovariance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getTca(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTca());
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_toEncounter(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition result((jobject) NULL);
                OBJ_CALL(result = self->object.toEncounter());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DDefinition::wrap_Object(result);
              }
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__parameters_(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__combinedRadius(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
                OBJ_CALL(value = self->object.getCombinedRadius());
                return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__encounterFrame(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::frames::encounter::EncounterLOF value((jobject) NULL);
                OBJ_CALL(value = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::FieldStateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::FieldStateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__tca(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTca());
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
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
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalSummary::class$ = NULL;
        jmethodID *StatisticalSummary::mids$ = NULL;
        bool StatisticalSummary::live$ = false;

        jclass StatisticalSummary::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalSummary");

            mids$ = new jmethodID[max_mid];
            mids$[mid_aggregate_e459112af7335a8c] = env->getStaticMethodID(cls, "aggregate", "([Lorg/hipparchus/stat/descriptive/StatisticalSummary;)Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_aggregate_d5a5307a7eb4ad68] = env->getStaticMethodID(cls, "aggregate", "(Ljava/lang/Iterable;)Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getMax_dff5885c2c873297] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_dff5885c2c873297] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_dff5885c2c873297] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_dff5885c2c873297] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_dff5885c2c873297] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getVariance_dff5885c2c873297] = env->getMethodID(cls, "getVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StatisticalSummary StatisticalSummary::aggregate(const JArray< StatisticalSummary > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StatisticalSummary(env->callStaticObjectMethod(cls, mids$[mid_aggregate_e459112af7335a8c], a0.this$));
        }

        StatisticalSummary StatisticalSummary::aggregate(const ::java::lang::Iterable & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StatisticalSummary(env->callStaticObjectMethod(cls, mids$[mid_aggregate_d5a5307a7eb4ad68], a0.this$));
        }

        jdouble StatisticalSummary::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_dff5885c2c873297]);
        }

        jdouble StatisticalSummary::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_dff5885c2c873297]);
        }

        jdouble StatisticalSummary::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_dff5885c2c873297]);
        }

        jlong StatisticalSummary::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        jdouble StatisticalSummary::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_dff5885c2c873297]);
        }

        jdouble StatisticalSummary::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_dff5885c2c873297]);
        }

        jdouble StatisticalSummary::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_dff5885c2c873297]);
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
      namespace descriptive {
        static PyObject *t_StatisticalSummary_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummary_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummary_aggregate(PyTypeObject *type, PyObject *args);
        static PyObject *t_StatisticalSummary_getMax(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getMean(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getMin(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getN(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getStandardDeviation(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getSum(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getVariance(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_get__max(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__mean(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__min(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__n(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__standardDeviation(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__sum(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__variance(t_StatisticalSummary *self, void *data);
        static PyGetSetDef t_StatisticalSummary__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalSummary, max),
          DECLARE_GET_FIELD(t_StatisticalSummary, mean),
          DECLARE_GET_FIELD(t_StatisticalSummary, min),
          DECLARE_GET_FIELD(t_StatisticalSummary, n),
          DECLARE_GET_FIELD(t_StatisticalSummary, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalSummary, sum),
          DECLARE_GET_FIELD(t_StatisticalSummary, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalSummary__methods_[] = {
          DECLARE_METHOD(t_StatisticalSummary, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, aggregate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getVariance, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalSummary)[] = {
          { Py_tp_methods, t_StatisticalSummary__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StatisticalSummary__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalSummary)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalSummary, t_StatisticalSummary, StatisticalSummary);

        void t_StatisticalSummary::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalSummary), &PY_TYPE_DEF(StatisticalSummary), module, "StatisticalSummary", 0);
        }

        void t_StatisticalSummary::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "class_", make_descriptor(StatisticalSummary::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "wrapfn_", make_descriptor(t_StatisticalSummary::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalSummary_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalSummary::initializeClass, 1)))
            return NULL;
          return t_StatisticalSummary::wrap_Object(StatisticalSummary(((t_StatisticalSummary *) arg)->object.this$));
        }
        static PyObject *t_StatisticalSummary_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalSummary::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StatisticalSummary_aggregate(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< StatisticalSummary > a0((jobject) NULL);
              StatisticalSummary result((jobject) NULL);

              if (!parseArgs(args, "[k", StatisticalSummary::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StatisticalSummary::aggregate(a0));
                return t_StatisticalSummary::wrap_Object(result);
              }
            }
            {
              ::java::lang::Iterable a0((jobject) NULL);
              PyTypeObject **p0;
              StatisticalSummary result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StatisticalSummary::aggregate(a0));
                return t_StatisticalSummary::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "aggregate", args);
          return NULL;
        }

        static PyObject *t_StatisticalSummary_getMax(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getMean(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getMin(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getN(t_StatisticalSummary *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalSummary_getStandardDeviation(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getSum(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getVariance(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_get__max(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__mean(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__min(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__n(t_StatisticalSummary *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalSummary_get__standardDeviation(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__sum(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__variance(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/UserRangeAccuracy.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *UserRangeAccuracy::class$ = NULL;
            jmethodID *UserRangeAccuracy::mids$ = NULL;
            bool UserRangeAccuracy::live$ = false;

            jclass UserRangeAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/UserRangeAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserRangeAccuracy::UserRangeAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            jdouble UserRangeAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_dff5885c2c873297]);
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
          namespace common {
            static PyObject *t_UserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserRangeAccuracy_init_(t_UserRangeAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserRangeAccuracy_getAccuracy(t_UserRangeAccuracy *self);
            static PyObject *t_UserRangeAccuracy_get__accuracy(t_UserRangeAccuracy *self, void *data);
            static PyGetSetDef t_UserRangeAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_UserRangeAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_UserRangeAccuracy__methods_[] = {
              DECLARE_METHOD(t_UserRangeAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserRangeAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserRangeAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserRangeAccuracy)[] = {
              { Py_tp_methods, t_UserRangeAccuracy__methods_ },
              { Py_tp_init, (void *) t_UserRangeAccuracy_init_ },
              { Py_tp_getset, t_UserRangeAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserRangeAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UserRangeAccuracy, t_UserRangeAccuracy, UserRangeAccuracy);

            void t_UserRangeAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(UserRangeAccuracy), &PY_TYPE_DEF(UserRangeAccuracy), module, "UserRangeAccuracy", 0);
            }

            void t_UserRangeAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "class_", make_descriptor(UserRangeAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "wrapfn_", make_descriptor(t_UserRangeAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserRangeAccuracy::initializeClass, 1)))
                return NULL;
              return t_UserRangeAccuracy::wrap_Object(UserRangeAccuracy(((t_UserRangeAccuracy *) arg)->object.this$));
            }
            static PyObject *t_UserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserRangeAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserRangeAccuracy_init_(t_UserRangeAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              UserRangeAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = UserRangeAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_UserRangeAccuracy_getAccuracy(t_UserRangeAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_UserRangeAccuracy_get__accuracy(t_UserRangeAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseAmbiguityModifier::class$ = NULL;
          jmethodID *PhaseAmbiguityModifier::mids$ = NULL;
          bool PhaseAmbiguityModifier::live$ = false;

          jclass PhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseAmbiguityModifier::PhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

          ::java::util::List PhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void PhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void PhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_PhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseAmbiguityModifier_init_(t_PhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseAmbiguityModifier_getParametersDrivers(t_PhaseAmbiguityModifier *self);
          static PyObject *t_PhaseAmbiguityModifier_modify(t_PhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_modifyWithoutDerivatives(t_PhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_get__parametersDrivers(t_PhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_PhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_PhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_PhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(PhaseAmbiguityModifier, t_PhaseAmbiguityModifier, PhaseAmbiguityModifier);

          void t_PhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseAmbiguityModifier), &PY_TYPE_DEF(PhaseAmbiguityModifier), module, "PhaseAmbiguityModifier", 0);
          }

          void t_PhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "class_", make_descriptor(PhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_PhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseAmbiguityModifier::wrap_Object(PhaseAmbiguityModifier(((t_PhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseAmbiguityModifier_init_(t_PhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            PhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = PhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseAmbiguityModifier_getParametersDrivers(t_PhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseAmbiguityModifier_modify(t_PhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseAmbiguityModifier_modifyWithoutDerivatives(t_PhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseAmbiguityModifier_get__parametersDrivers(t_PhaseAmbiguityModifier *self, void *data)
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
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *HarmonicCurveFitter::class$ = NULL;
      jmethodID *HarmonicCurveFitter::mids$ = NULL;
      bool HarmonicCurveFitter::live$ = false;

      jclass HarmonicCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/HarmonicCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_586df52afe97f16d] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_withMaxIterations_855d9801488433a2] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_withStartPoint_46785bef91928162] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_getProblem_c197708a453e8034] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HarmonicCurveFitter HarmonicCurveFitter::create()
      {
        jclass cls = env->getClass(initializeClass);
        return HarmonicCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_586df52afe97f16d]));
      }

      HarmonicCurveFitter HarmonicCurveFitter::withMaxIterations(jint a0) const
      {
        return HarmonicCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_855d9801488433a2], a0));
      }

      HarmonicCurveFitter HarmonicCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return HarmonicCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_46785bef91928162], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_HarmonicCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_create(PyTypeObject *type);
      static PyObject *t_HarmonicCurveFitter_withMaxIterations(t_HarmonicCurveFitter *self, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_withStartPoint(t_HarmonicCurveFitter *self, PyObject *arg);

      static PyMethodDef t_HarmonicCurveFitter__methods_[] = {
        DECLARE_METHOD(t_HarmonicCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_HarmonicCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HarmonicCurveFitter)[] = {
        { Py_tp_methods, t_HarmonicCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HarmonicCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(HarmonicCurveFitter, t_HarmonicCurveFitter, HarmonicCurveFitter);

      void t_HarmonicCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(HarmonicCurveFitter), &PY_TYPE_DEF(HarmonicCurveFitter), module, "HarmonicCurveFitter", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "ParameterGuesser", make_descriptor(&PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser)));
      }

      void t_HarmonicCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "class_", make_descriptor(HarmonicCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "wrapfn_", make_descriptor(t_HarmonicCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HarmonicCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HarmonicCurveFitter::initializeClass, 1)))
          return NULL;
        return t_HarmonicCurveFitter::wrap_Object(HarmonicCurveFitter(((t_HarmonicCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_HarmonicCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HarmonicCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_HarmonicCurveFitter_create(PyTypeObject *type)
      {
        HarmonicCurveFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fitting::HarmonicCurveFitter::create());
        return t_HarmonicCurveFitter::wrap_Object(result);
      }

      static PyObject *t_HarmonicCurveFitter_withMaxIterations(t_HarmonicCurveFitter *self, PyObject *arg)
      {
        jint a0;
        HarmonicCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_HarmonicCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_HarmonicCurveFitter_withStartPoint(t_HarmonicCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        HarmonicCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_HarmonicCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *IonosphericMappingFunction::class$ = NULL;
          jmethodID *IonosphericMappingFunction::mids$ = NULL;
          bool IonosphericMappingFunction::live$ = false;

          jclass IonosphericMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/IonosphericMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_mappingFactor_dcbc7ce2902fa136] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_a4b1871f4d29e58b] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble IonosphericMappingFunction::mappingFactor(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_mappingFactor_dcbc7ce2902fa136], a0);
          }

          ::org::hipparchus::CalculusFieldElement IonosphericMappingFunction::mappingFactor(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mappingFactor_a4b1871f4d29e58b], a0.this$));
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
        namespace ionosphere {
          static PyObject *t_IonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericMappingFunction_mappingFactor(t_IonosphericMappingFunction *self, PyObject *args);

          static PyMethodDef t_IonosphericMappingFunction__methods_[] = {
            DECLARE_METHOD(t_IonosphericMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericMappingFunction, mappingFactor, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericMappingFunction)[] = {
            { Py_tp_methods, t_IonosphericMappingFunction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IonosphericMappingFunction, t_IonosphericMappingFunction, IonosphericMappingFunction);

          void t_IonosphericMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericMappingFunction), &PY_TYPE_DEF(IonosphericMappingFunction), module, "IonosphericMappingFunction", 0);
          }

          void t_IonosphericMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "class_", make_descriptor(IonosphericMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "wrapfn_", make_descriptor(t_IonosphericMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericMappingFunction::initializeClass, 1)))
              return NULL;
            return t_IonosphericMappingFunction::wrap_Object(IonosphericMappingFunction(((t_IonosphericMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_IonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericMappingFunction_mappingFactor(t_IonosphericMappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactor", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservationWriter.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationWriter::class$ = NULL;
          jmethodID *RinexObservationWriter::mids$ = NULL;
          bool RinexObservationWriter::live$ = false;

          jclass RinexObservationWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_580b43eb7b580d53] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;)V");
              mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
              mids$[mid_prepareComments_de3e021e7266b71e] = env->getMethodID(cls, "prepareComments", "(Ljava/util/List;)V");
              mids$[mid_writeCompleteFile_f5988098843867b2] = env->getMethodID(cls, "writeCompleteFile", "(Lorg/orekit/files/rinex/observation/RinexObservation;)V");
              mids$[mid_writeHeader_2b1813bb25ab1e9c] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/rinex/observation/RinexObservationHeader;)V");
              mids$[mid_writeObservationDataSet_5e249044f63168db] = env->getMethodID(cls, "writeObservationDataSet", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_writePendingRinex2Observations_0fa09c18fee449d5] = env->getMethodID(cls, "writePendingRinex2Observations", "()V");
              mids$[mid_writePendingRinex34Observations_0fa09c18fee449d5] = env->getMethodID(cls, "writePendingRinex34Observations", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationWriter::RinexObservationWriter(const ::java::lang::Appendable & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_580b43eb7b580d53, a0.this$, a1.this$)) {}

          void RinexObservationWriter::close() const
          {
            env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
          }

          void RinexObservationWriter::prepareComments(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_prepareComments_de3e021e7266b71e], a0.this$);
          }

          void RinexObservationWriter::writeCompleteFile(const ::org::orekit::files::rinex::observation::RinexObservation & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeCompleteFile_f5988098843867b2], a0.this$);
          }

          void RinexObservationWriter::writeHeader(const ::org::orekit::files::rinex::observation::RinexObservationHeader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeHeader_2b1813bb25ab1e9c], a0.this$);
          }

          void RinexObservationWriter::writeObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeObservationDataSet_5e249044f63168db], a0.this$);
          }

          void RinexObservationWriter::writePendingRinex2Observations() const
          {
            env->callVoidMethod(this$, mids$[mid_writePendingRinex2Observations_0fa09c18fee449d5]);
          }

          void RinexObservationWriter::writePendingRinex34Observations() const
          {
            env->callVoidMethod(this$, mids$[mid_writePendingRinex34Observations_0fa09c18fee449d5]);
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
        namespace observation {
          static PyObject *t_RinexObservationWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationWriter_init_(t_RinexObservationWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationWriter_close(t_RinexObservationWriter *self);
          static PyObject *t_RinexObservationWriter_prepareComments(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeCompleteFile(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeHeader(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeObservationDataSet(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writePendingRinex2Observations(t_RinexObservationWriter *self);
          static PyObject *t_RinexObservationWriter_writePendingRinex34Observations(t_RinexObservationWriter *self);

          static PyMethodDef t_RinexObservationWriter__methods_[] = {
            DECLARE_METHOD(t_RinexObservationWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationWriter, close, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationWriter, prepareComments, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeCompleteFile, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeHeader, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeObservationDataSet, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writePendingRinex2Observations, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationWriter, writePendingRinex34Observations, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationWriter)[] = {
            { Py_tp_methods, t_RinexObservationWriter__methods_ },
            { Py_tp_init, (void *) t_RinexObservationWriter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexObservationWriter, t_RinexObservationWriter, RinexObservationWriter);

          void t_RinexObservationWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationWriter), &PY_TYPE_DEF(RinexObservationWriter), module, "RinexObservationWriter", 0);
          }

          void t_RinexObservationWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "class_", make_descriptor(RinexObservationWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "wrapfn_", make_descriptor(t_RinexObservationWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservationWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationWriter::initializeClass, 1)))
              return NULL;
            return t_RinexObservationWriter::wrap_Object(RinexObservationWriter(((t_RinexObservationWriter *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationWriter_init_(t_RinexObservationWriter *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::Appendable a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            RinexObservationWriter object((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::lang::Appendable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RinexObservationWriter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexObservationWriter_close(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.close());
            Py_RETURN_NONE;
          }

          static PyObject *t_RinexObservationWriter_prepareComments(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.prepareComments(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "prepareComments", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeCompleteFile(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::RinexObservation a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::observation::RinexObservation::initializeClass, &a0, &p0, ::org::orekit::files::rinex::observation::t_RinexObservation::parameters_))
            {
              OBJ_CALL(self->object.writeCompleteFile(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeCompleteFile", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeHeader(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::RinexObservationHeader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::RinexObservationHeader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.writeHeader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeHeader", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeObservationDataSet(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(self->object.writeObservationDataSet(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeObservationDataSet", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writePendingRinex2Observations(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.writePendingRinex2Observations());
            Py_RETURN_NONE;
          }

          static PyObject *t_RinexObservationWriter_writePendingRinex34Observations(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.writePendingRinex34Observations());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorPreservingVisitor::class$ = NULL;
      jmethodID *RealVectorPreservingVisitor::mids$ = NULL;
      bool RealVectorPreservingVisitor::live$ = false;

      jclass RealVectorPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_dff5885c2c873297] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_8336200ef3dde36b] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_bb79ca80d85d0a66] = env->getMethodID(cls, "visit", "(ID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealVectorPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_dff5885c2c873297]);
      }

      void RealVectorPreservingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_8336200ef3dde36b], a0, a1, a2);
      }

      void RealVectorPreservingVisitor::visit(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_bb79ca80d85d0a66], a0, a1);
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
      static PyObject *t_RealVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorPreservingVisitor_end(t_RealVectorPreservingVisitor *self);
      static PyObject *t_RealVectorPreservingVisitor_start(t_RealVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_RealVectorPreservingVisitor_visit(t_RealVectorPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_RealVectorPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealVectorPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorPreservingVisitor)[] = {
        { Py_tp_methods, t_RealVectorPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorPreservingVisitor, t_RealVectorPreservingVisitor, RealVectorPreservingVisitor);

      void t_RealVectorPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorPreservingVisitor), &PY_TYPE_DEF(RealVectorPreservingVisitor), module, "RealVectorPreservingVisitor", 0);
      }

      void t_RealVectorPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "class_", make_descriptor(RealVectorPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "wrapfn_", make_descriptor(t_RealVectorPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealVectorPreservingVisitor::wrap_Object(RealVectorPreservingVisitor(((t_RealVectorPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealVectorPreservingVisitor_end(t_RealVectorPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVectorPreservingVisitor_start(t_RealVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealVectorPreservingVisitor_visit(t_RealVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.visit(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince54FieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince54FieldIntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince54FieldIntegratorBuilder::mids$ = NULL;
        bool DormandPrince54FieldIntegratorBuilder::live$ = false;

        jclass DormandPrince54FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince54FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54FieldIntegratorBuilder::DormandPrince54FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator DormandPrince54FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_048f7039a7622a2b], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_of_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args);
        static int t_DormandPrince54FieldIntegratorBuilder_init_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_buildIntegrator(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_get__parameters_(t_DormandPrince54FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_DormandPrince54FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince54FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_DormandPrince54FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(DormandPrince54FieldIntegratorBuilder, t_DormandPrince54FieldIntegratorBuilder, DormandPrince54FieldIntegratorBuilder);
        PyObject *t_DormandPrince54FieldIntegratorBuilder::wrap_Object(const DormandPrince54FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegratorBuilder *self = (t_DormandPrince54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince54FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegratorBuilder *self = (t_DormandPrince54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince54FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54FieldIntegratorBuilder), &PY_TYPE_DEF(DormandPrince54FieldIntegratorBuilder), module, "DormandPrince54FieldIntegratorBuilder", 0);
        }

        void t_DormandPrince54FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "class_", make_descriptor(DormandPrince54FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince54FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54FieldIntegratorBuilder::wrap_Object(DormandPrince54FieldIntegratorBuilder(((t_DormandPrince54FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_of_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince54FieldIntegratorBuilder_init_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince54FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince54FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_buildIntegrator(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(DormandPrince54FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_get__parameters_(t_DormandPrince54FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays::class$ = NULL;
      jmethodID *MathArrays::mids$ = NULL;
      bool MathArrays::live$ = false;

      jclass MathArrays::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays");

          mids$ = new jmethodID[max_mid];
          mids$[mid_buildArray_53a8968856aac728] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_buildArray_9d0b4d67c7d5ec91] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;II)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_buildArray_bfb3642e16852529] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;III)[[[Lorg/hipparchus/FieldElement;");
          mids$[mid_checkEqualLength_e1f4b15468f5564a] = env->getStaticMethodID(cls, "checkEqualLength", "([D[D)V");
          mids$[mid_checkEqualLength_b091d33670ea17ab] = env->getStaticMethodID(cls, "checkEqualLength", "([I[I)V");
          mids$[mid_checkEqualLength_cbc98e7d0c0477db] = env->getStaticMethodID(cls, "checkEqualLength", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_checkEqualLength_2a23e9f4a2692a23] = env->getStaticMethodID(cls, "checkEqualLength", "([D[DZ)Z");
          mids$[mid_checkEqualLength_ef7981f2c05315da] = env->getStaticMethodID(cls, "checkEqualLength", "([I[IZ)Z");
          mids$[mid_checkEqualLength_61bb38d449624a13] = env->getStaticMethodID(cls, "checkEqualLength", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Z)Z");
          mids$[mid_checkNonNegative_c57942992c8467a1] = env->getStaticMethodID(cls, "checkNonNegative", "([J)V");
          mids$[mid_checkNonNegative_ade5c97d2456ed21] = env->getStaticMethodID(cls, "checkNonNegative", "([[J)V");
          mids$[mid_checkNotNaN_fa9d415d19f69361] = env->getStaticMethodID(cls, "checkNotNaN", "([D)V");
          mids$[mid_checkOrder_fa9d415d19f69361] = env->getStaticMethodID(cls, "checkOrder", "([D)V");
          mids$[mid_checkOrder_72479ee08453ef97] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_checkOrder_9825f8ead88fc7a2] = env->getStaticMethodID(cls, "checkOrder", "([DLorg/hipparchus/util/MathArrays$OrderDirection;Z)V");
          mids$[mid_checkOrder_7d4cfe1aa8d9500e] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/util/MathArrays$OrderDirection;Z)V");
          mids$[mid_checkOrder_ba626246740b4f78] = env->getStaticMethodID(cls, "checkOrder", "([DLorg/hipparchus/util/MathArrays$OrderDirection;ZZ)Z");
          mids$[mid_checkOrder_5e803c62cb962490] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/util/MathArrays$OrderDirection;ZZ)Z");
          mids$[mid_checkPositive_fa9d415d19f69361] = env->getStaticMethodID(cls, "checkPositive", "([D)V");
          mids$[mid_checkRectangular_ade5c97d2456ed21] = env->getStaticMethodID(cls, "checkRectangular", "([[J)V");
          mids$[mid_concatenate_c2fd47c0f811c269] = env->getStaticMethodID(cls, "concatenate", "([[D)[D");
          mids$[mid_convolve_96bbba26ca51c0d1] = env->getStaticMethodID(cls, "convolve", "([D[D)[D");
          mids$[mid_cosAngle_b561c6892e9976f8] = env->getStaticMethodID(cls, "cosAngle", "([D[D)D");
          mids$[mid_distance_b561c6892e9976f8] = env->getStaticMethodID(cls, "distance", "([D[D)D");
          mids$[mid_distance_c7a20f1226fb06ea] = env->getStaticMethodID(cls, "distance", "([I[I)D");
          mids$[mid_distance1_b561c6892e9976f8] = env->getStaticMethodID(cls, "distance1", "([D[D)D");
          mids$[mid_distance1_779c476bcabb05f3] = env->getStaticMethodID(cls, "distance1", "([I[I)I");
          mids$[mid_distanceInf_b561c6892e9976f8] = env->getStaticMethodID(cls, "distanceInf", "([D[D)D");
          mids$[mid_distanceInf_779c476bcabb05f3] = env->getStaticMethodID(cls, "distanceInf", "([I[I)I");
          mids$[mid_ebeAdd_96bbba26ca51c0d1] = env->getStaticMethodID(cls, "ebeAdd", "([D[D)[D");
          mids$[mid_ebeDivide_96bbba26ca51c0d1] = env->getStaticMethodID(cls, "ebeDivide", "([D[D)[D");
          mids$[mid_ebeMultiply_96bbba26ca51c0d1] = env->getStaticMethodID(cls, "ebeMultiply", "([D[D)[D");
          mids$[mid_ebeSubtract_96bbba26ca51c0d1] = env->getStaticMethodID(cls, "ebeSubtract", "([D[D)[D");
          mids$[mid_equals_026a317eb6da308c] = env->getStaticMethodID(cls, "equals", "([B[B)Z");
          mids$[mid_equals_b013f01484dd6b19] = env->getStaticMethodID(cls, "equals", "([D[D)Z");
          mids$[mid_equals_b2dc548396b699a5] = env->getStaticMethodID(cls, "equals", "([F[F)Z");
          mids$[mid_equals_f8ca155cbadf2a73] = env->getStaticMethodID(cls, "equals", "([I[I)Z");
          mids$[mid_equals_739455d93f7b2089] = env->getStaticMethodID(cls, "equals", "([J[J)Z");
          mids$[mid_equals_266b3ca27c6bb5ac] = env->getStaticMethodID(cls, "equals", "([S[S)Z");
          mids$[mid_equalsIncludingNaN_b013f01484dd6b19] = env->getStaticMethodID(cls, "equalsIncludingNaN", "([D[D)Z");
          mids$[mid_equalsIncludingNaN_b2dc548396b699a5] = env->getStaticMethodID(cls, "equalsIncludingNaN", "([F[F)Z");
          mids$[mid_isMonotonic_303cdb6f1e3d1d20] = env->getStaticMethodID(cls, "isMonotonic", "([DLorg/hipparchus/util/MathArrays$OrderDirection;Z)Z");
          mids$[mid_isMonotonic_ed716723e463a03e] = env->getStaticMethodID(cls, "isMonotonic", "([Ljava/lang/Comparable;Lorg/hipparchus/util/MathArrays$OrderDirection;Z)Z");
          mids$[mid_linearCombination_b561c6892e9976f8] = env->getStaticMethodID(cls, "linearCombination", "([D[D)D");
          mids$[mid_linearCombination_0f015b8be9d2dc40] = env->getStaticMethodID(cls, "linearCombination", "(DDDD)D");
          mids$[mid_linearCombination_07e50dbdbc6e25b6] = env->getStaticMethodID(cls, "linearCombination", "(DDDDDD)D");
          mids$[mid_linearCombination_982084a63a0acdbd] = env->getStaticMethodID(cls, "linearCombination", "(DDDDDDDD)D");
          mids$[mid_natural_10b428b076a044c1] = env->getStaticMethodID(cls, "natural", "(I)[I");
          mids$[mid_normalizeArray_7c03fc65848ac490] = env->getStaticMethodID(cls, "normalizeArray", "([DD)[D");
          mids$[mid_safeNorm_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "safeNorm", "([D)D");
          mids$[mid_scale_125ce48de7dbfde5] = env->getStaticMethodID(cls, "scale", "(D[D)[D");
          mids$[mid_scaleInPlace_f617b8481082c6ea] = env->getStaticMethodID(cls, "scaleInPlace", "(D[D)V");
          mids$[mid_sequence_4cce8278046f494a] = env->getStaticMethodID(cls, "sequence", "(III)[I");
          mids$[mid_shuffle_d147d7ce001e2d45] = env->getStaticMethodID(cls, "shuffle", "([I)V");
          mids$[mid_shuffle_cd72f2edc6fe3699] = env->getStaticMethodID(cls, "shuffle", "([ILorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_shuffle_4403e14380343a86] = env->getStaticMethodID(cls, "shuffle", "([IILorg/hipparchus/util/MathArrays$Position;)V");
          mids$[mid_shuffle_5274baa35baf0207] = env->getStaticMethodID(cls, "shuffle", "([IILorg/hipparchus/util/MathArrays$Position;Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_sortInPlace_0942607a80e88c17] = env->getStaticMethodID(cls, "sortInPlace", "([D[[D)V");
          mids$[mid_sortInPlace_b127a748d81177ab] = env->getStaticMethodID(cls, "sortInPlace", "([DLorg/hipparchus/util/MathArrays$OrderDirection;[[D)V");
          mids$[mid_unique_ac3d742ccc742f22] = env->getStaticMethodID(cls, "unique", "([D)[D");
          mids$[mid_verifyValues_ecd0e94e44eeb80d] = env->getStaticMethodID(cls, "verifyValues", "([DII)Z");
          mids$[mid_verifyValues_2ce8032ca4cc67c5] = env->getStaticMethodID(cls, "verifyValues", "([D[DII)Z");
          mids$[mid_verifyValues_fa5076ba832da619] = env->getStaticMethodID(cls, "verifyValues", "([DIIZ)Z");
          mids$[mid_verifyValues_44e8cc5a12cb39a9] = env->getStaticMethodID(cls, "verifyValues", "([D[DIIZ)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::FieldElement > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::org::hipparchus::FieldElement >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_53a8968856aac728], a0.this$, a1));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_9d0b4d67c7d5ec91], a0.this$, a1, a2));
      }

      JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< JArray< ::org::hipparchus::FieldElement > > >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_bfb3642e16852529], a0.this$, a1, a2, a3));
      }

      void MathArrays::checkEqualLength(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_e1f4b15468f5564a], a0.this$, a1.this$);
      }

      void MathArrays::checkEqualLength(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_b091d33670ea17ab], a0.this$, a1.this$);
      }

      void MathArrays::checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_cbc98e7d0c0477db], a0.this$, a1.this$);
      }

      jboolean MathArrays::checkEqualLength(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_2a23e9f4a2692a23], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkEqualLength(const JArray< jint > & a0, const JArray< jint > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_ef7981f2c05315da], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_61bb38d449624a13], a0.this$, a1.this$, a2);
      }

      void MathArrays::checkNonNegative(const JArray< jlong > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNonNegative_c57942992c8467a1], a0.this$);
      }

      void MathArrays::checkNonNegative(const JArray< JArray< jlong > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNonNegative_ade5c97d2456ed21], a0.this$);
      }

      void MathArrays::checkNotNaN(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNaN_fa9d415d19f69361], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_fa9d415d19f69361], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_72479ee08453ef97], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_9825f8ead88fc7a2], a0.this$, a1.this$, a2);
      }

      void MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_7d4cfe1aa8d9500e], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkOrder(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkOrder_ba626246740b4f78], a0.this$, a1.this$, a2, a3);
      }

      jboolean MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkOrder_5e803c62cb962490], a0.this$, a1.this$, a2, a3);
      }

      void MathArrays::checkPositive(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkPositive_fa9d415d19f69361], a0.this$);
      }

      void MathArrays::checkRectangular(const JArray< JArray< jlong > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRectangular_ade5c97d2456ed21], a0.this$);
      }

      JArray< jdouble > MathArrays::concatenate(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_concatenate_c2fd47c0f811c269], a0.this$));
      }

      JArray< jdouble > MathArrays::convolve(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_convolve_96bbba26ca51c0d1], a0.this$, a1.this$));
      }

      jdouble MathArrays::cosAngle(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cosAngle_b561c6892e9976f8], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance_b561c6892e9976f8], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance_c7a20f1226fb06ea], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance1(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance1_b561c6892e9976f8], a0.this$, a1.this$);
      }

      jint MathArrays::distance1(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_distance1_779c476bcabb05f3], a0.this$, a1.this$);
      }

      jdouble MathArrays::distanceInf(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_b561c6892e9976f8], a0.this$, a1.this$);
      }

      jint MathArrays::distanceInf(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_distanceInf_779c476bcabb05f3], a0.this$, a1.this$);
      }

      JArray< jdouble > MathArrays::ebeAdd(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeAdd_96bbba26ca51c0d1], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeDivide(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeDivide_96bbba26ca51c0d1], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeMultiply(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeMultiply_96bbba26ca51c0d1], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeSubtract(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeSubtract_96bbba26ca51c0d1], a0.this$, a1.this$));
      }

      jboolean MathArrays::equals(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_026a317eb6da308c], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_b013f01484dd6b19], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_b2dc548396b699a5], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_f8ca155cbadf2a73], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jlong > & a0, const JArray< jlong > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_739455d93f7b2089], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jshort > & a0, const JArray< jshort > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_266b3ca27c6bb5ac], a0.this$, a1.this$);
      }

      jboolean MathArrays::equalsIncludingNaN(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_b013f01484dd6b19], a0.this$, a1.this$);
      }

      jboolean MathArrays::equalsIncludingNaN(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_b2dc548396b699a5], a0.this$, a1.this$);
      }

      jboolean MathArrays::isMonotonic(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMonotonic_303cdb6f1e3d1d20], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::isMonotonic(const JArray< ::java::lang::Comparable > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMonotonic_ed716723e463a03e], a0.this$, a1.this$, a2);
      }

      jdouble MathArrays::linearCombination(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_b561c6892e9976f8], a0.this$, a1.this$);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_0f015b8be9d2dc40], a0, a1, a2, a3);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_07e50dbdbc6e25b6], a0, a1, a2, a3, a4, a5);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_982084a63a0acdbd], a0, a1, a2, a3, a4, a5, a6, a7);
      }

      JArray< jint > MathArrays::natural(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_natural_10b428b076a044c1], a0));
      }

      JArray< jdouble > MathArrays::normalizeArray(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_normalizeArray_7c03fc65848ac490], a0.this$, a1));
      }

      jdouble MathArrays::safeNorm(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_safeNorm_9dc1ec0bcc0a9a29], a0.this$);
      }

      JArray< jdouble > MathArrays::scale(jdouble a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_scale_125ce48de7dbfde5], a0, a1.this$));
      }

      void MathArrays::scaleInPlace(jdouble a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_scaleInPlace_f617b8481082c6ea], a0, a1.this$);
      }

      JArray< jint > MathArrays::sequence(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_sequence_4cce8278046f494a], a0, a1, a2));
      }

      void MathArrays::shuffle(const JArray< jint > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_d147d7ce001e2d45], a0.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, const ::org::hipparchus::random::RandomGenerator & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_cd72f2edc6fe3699], a0.this$, a1.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, jint a1, const ::org::hipparchus::util::MathArrays$Position & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_4403e14380343a86], a0.this$, a1, a2.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, jint a1, const ::org::hipparchus::util::MathArrays$Position & a2, const ::org::hipparchus::random::RandomGenerator & a3)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_5274baa35baf0207], a0.this$, a1, a2.this$, a3.this$);
      }

      void MathArrays::sortInPlace(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_sortInPlace_0942607a80e88c17], a0.this$, a1.this$);
      }

      void MathArrays::sortInPlace(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, const JArray< JArray< jdouble > > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_sortInPlace_b127a748d81177ab], a0.this$, a1.this$, a2.this$);
      }

      JArray< jdouble > MathArrays::unique(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_unique_ac3d742ccc742f22], a0.this$));
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_ecd0e94e44eeb80d], a0.this$, a1, a2);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_2ce8032ca4cc67c5], a0.this$, a1.this$, a2, a3);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, jint a1, jint a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_fa5076ba832da619], a0.this$, a1, a2, a3);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3, jboolean a4)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_44e8cc5a12cb39a9], a0.this$, a1.this$, a2, a3, a4);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/util/MathArrays$Function.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathArrays_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_buildArray(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkEqualLength(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkNonNegative(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkNotNaN(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_checkOrder(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkPositive(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_checkRectangular(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_concatenate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_convolve(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_cosAngle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distance(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distance1(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distanceInf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeAdd(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeDivide(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeMultiply(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeSubtract(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_equalsIncludingNaN(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_isMonotonic(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_linearCombination(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_natural(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_normalizeArray(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_safeNorm(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_scale(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_scaleInPlace(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_sequence(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_shuffle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_sortInPlace(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_unique(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_verifyValues(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MathArrays__methods_[] = {
        DECLARE_METHOD(t_MathArrays, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, buildArray, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkEqualLength, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkNonNegative, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkNotNaN, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkOrder, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkPositive, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkRectangular, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, concatenate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, convolve, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, cosAngle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distance1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distanceInf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeAdd, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeDivide, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeMultiply, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeSubtract, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, equalsIncludingNaN, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, isMonotonic, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, linearCombination, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, natural, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, normalizeArray, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, safeNorm, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, scale, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, scaleInPlace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, sequence, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, shuffle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, sortInPlace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, unique, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, verifyValues, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays)[] = {
        { Py_tp_methods, t_MathArrays__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathArrays, t_MathArrays, MathArrays);

      void t_MathArrays::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays), &PY_TYPE_DEF(MathArrays), module, "MathArrays", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "Position", make_descriptor(&PY_TYPE_DEF(MathArrays$Position)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "OrderDirection", make_descriptor(&PY_TYPE_DEF(MathArrays$OrderDirection)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "Function", make_descriptor(&PY_TYPE_DEF(MathArrays$Function)));
      }

      void t_MathArrays::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "class_", make_descriptor(MathArrays::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "wrapfn_", make_descriptor(t_MathArrays::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathArrays_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays::initializeClass, 1)))
          return NULL;
        return t_MathArrays::wrap_Object(MathArrays(((t_MathArrays *) arg)->object.this$));
      }
      static PyObject *t_MathArrays_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays_buildArray(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > result((jobject) NULL);

            if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
        }

        PyErr_SetArgsError(type, "buildArray", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkEqualLength(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[I[IZ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[K[KZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "checkEqualLength", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkNonNegative(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jlong > a0((jobject) NULL);

            if (!parseArgs(args, "[J", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkNonNegative(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< JArray< jlong > > a0((jobject) NULL);

            if (!parseArgs(args, "[[J", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkNonNegative(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkNonNegative", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkNotNaN(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkNotNaN(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkNotNaN", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_checkOrder(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;

            if (!parseArgs(args, "[DKZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;

            if (!parseArgs(args, "[KKZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[DKZZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[KKZZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "checkOrder", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkPositive(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkPositive(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkPositive", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_checkRectangular(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jlong > > a0((jobject) NULL);

        if (!parseArg(arg, "[[J", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkRectangular(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkRectangular", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_concatenate(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::concatenate(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "concatenate", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_convolve(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::convolve(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "convolve", args);
        return NULL;
      }

      static PyObject *t_MathArrays_cosAngle(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::cosAngle(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "cosAngle", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distance", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distance1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance1(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distance1", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distanceInf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distanceInf(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distanceInf", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeAdd(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeAdd(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeAdd", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeDivide(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeDivide(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeDivide", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeMultiply(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeMultiply(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeMultiply", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeSubtract(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeSubtract(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeSubtract", args);
        return NULL;
      }

      static PyObject *t_MathArrays_equals(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jbyte > a0((jobject) NULL);
            JArray< jbyte > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[B[B", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jfloat > a0((jobject) NULL);
            JArray< jfloat > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[F[F", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jlong > a0((jobject) NULL);
            JArray< jlong > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[J[J", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jshort > a0((jobject) NULL);
            JArray< jshort > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[S[S", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_MathArrays_equalsIncludingNaN(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jfloat > a0((jobject) NULL);
            JArray< jfloat > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[F[F", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equalsIncludingNaN", args);
        return NULL;
      }

      static PyObject *t_MathArrays_isMonotonic(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[DKZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::isMonotonic(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::java::lang::Comparable > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[KKZ", ::java::lang::Comparable::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::isMonotonic(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "isMonotonic", args);
        return NULL;
      }

      static PyObject *t_MathArrays_linearCombination(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 6:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble result;

            if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3, a4, a5));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 8:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble result;

            if (!parseArgs(args, "DDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_MathArrays_natural(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        JArray< jint > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::natural(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "natural", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_normalizeArray(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble a1;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::normalizeArray(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "normalizeArray", args);
        return NULL;
      }

      static PyObject *t_MathArrays_safeNorm(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::safeNorm(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "safeNorm", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_scale(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::scale(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "scale", args);
        return NULL;
      }

      static PyObject *t_MathArrays_scaleInPlace(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::scaleInPlace(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "scaleInPlace", args);
        return NULL;
      }

      static PyObject *t_MathArrays_sequence(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::sequence(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "sequence", args);
        return NULL;
      }

      static PyObject *t_MathArrays_shuffle(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);

            if (!parseArgs(args, "[Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::util::MathArrays$Position a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[IIK", ::org::hipparchus::util::MathArrays$Position::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::util::t_MathArrays$Position::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 4:
          {
            JArray< jint > a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::util::MathArrays$Position a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::random::RandomGenerator a3((jobject) NULL);

            if (!parseArgs(args, "[IIKk", ::org::hipparchus::util::MathArrays$Position::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::util::t_MathArrays$Position::parameters_, &a3))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "shuffle", args);
        return NULL;
      }

      static PyObject *t_MathArrays_sortInPlace(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< JArray< jdouble > > a1((jobject) NULL);

            if (!parseArgs(args, "[D[[D", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::sortInPlace(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[DK[[D", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::sortInPlace(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "sortInPlace", args);
        return NULL;
      }

      static PyObject *t_MathArrays_unique(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::unique(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "unique", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_verifyValues(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jint a2;
            jint a3;
            jboolean result;

            if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[DIIZ", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 5:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jint a2;
            jint a3;
            jboolean a4;
            jboolean result;

            if (!parseArgs(args, "[D[DIIZ", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3, a4));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "verifyValues", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHmsjPolynomials.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGHmsjPolynomials::class$ = NULL;
            jmethodID *FieldGHmsjPolynomials::mids$ = NULL;
            bool FieldGHmsjPolynomials::live$ = false;

            jclass FieldGHmsjPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGHmsjPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0eefce751720a9d6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)V");
                mids$[mid_getGmsj_4f221dcfbd8744de] = env->getMethodID(cls, "getGmsj", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHmsj_4f221dcfbd8744de] = env->getMethodID(cls, "getHmsj", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdAlpha_4f221dcfbd8744de] = env->getMethodID(cls, "getdGmsdAlpha", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdBeta_4f221dcfbd8744de] = env->getMethodID(cls, "getdGmsdBeta", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdh_4f221dcfbd8744de] = env->getMethodID(cls, "getdGmsdh", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdk_4f221dcfbd8744de] = env->getMethodID(cls, "getdGmsdk", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdAlpha_4f221dcfbd8744de] = env->getMethodID(cls, "getdHmsdAlpha", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdBeta_4f221dcfbd8744de] = env->getMethodID(cls, "getdHmsdBeta", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdh_4f221dcfbd8744de] = env->getMethodID(cls, "getdHmsdh", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdk_4f221dcfbd8744de] = env->getMethodID(cls, "getdHmsdk", "(III)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGHmsjPolynomials::FieldGHmsjPolynomials(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0eefce751720a9d6, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getGmsj(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGmsj_4f221dcfbd8744de], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getHmsj(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHmsj_4f221dcfbd8744de], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdAlpha_4f221dcfbd8744de], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdBeta(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdBeta_4f221dcfbd8744de], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdh(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdh_4f221dcfbd8744de], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdk(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdk_4f221dcfbd8744de], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdAlpha_4f221dcfbd8744de], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdBeta(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdBeta_4f221dcfbd8744de], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdh(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdh_4f221dcfbd8744de], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdk(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdk_4f221dcfbd8744de], a0, a1, a2));
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
            static PyObject *t_FieldGHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHmsjPolynomials_of_(t_FieldGHmsjPolynomials *self, PyObject *args);
            static int t_FieldGHmsjPolynomials_init_(t_FieldGHmsjPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGHmsjPolynomials_getGmsj(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getHmsj(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdh(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdk(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdh(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdk(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_get__parameters_(t_FieldGHmsjPolynomials *self, void *data);
            static PyGetSetDef t_FieldGHmsjPolynomials__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGHmsjPolynomials, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGHmsjPolynomials__methods_[] = {
              DECLARE_METHOD(t_FieldGHmsjPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getGmsj, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getHmsj, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGHmsjPolynomials)[] = {
              { Py_tp_methods, t_FieldGHmsjPolynomials__methods_ },
              { Py_tp_init, (void *) t_FieldGHmsjPolynomials_init_ },
              { Py_tp_getset, t_FieldGHmsjPolynomials__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGHmsjPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGHmsjPolynomials, t_FieldGHmsjPolynomials, FieldGHmsjPolynomials);
            PyObject *t_FieldGHmsjPolynomials::wrap_Object(const FieldGHmsjPolynomials& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHmsjPolynomials::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHmsjPolynomials *self = (t_FieldGHmsjPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGHmsjPolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHmsjPolynomials::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHmsjPolynomials *self = (t_FieldGHmsjPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGHmsjPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGHmsjPolynomials), &PY_TYPE_DEF(FieldGHmsjPolynomials), module, "FieldGHmsjPolynomials", 0);
            }

            void t_FieldGHmsjPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "class_", make_descriptor(FieldGHmsjPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "wrapfn_", make_descriptor(t_FieldGHmsjPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGHmsjPolynomials::initializeClass, 1)))
                return NULL;
              return t_FieldGHmsjPolynomials::wrap_Object(FieldGHmsjPolynomials(((t_FieldGHmsjPolynomials *) arg)->object.this$));
            }
            static PyObject *t_FieldGHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGHmsjPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGHmsjPolynomials_of_(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGHmsjPolynomials_init_(t_FieldGHmsjPolynomials *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;
              ::org::hipparchus::Field a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGHmsjPolynomials object((jobject) NULL);

              if (!parseArgs(args, "KKKKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldGHmsjPolynomials(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGHmsjPolynomials_getGmsj(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getGmsj(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGmsj", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getHmsj(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getHmsj(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHmsj", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdAlpha(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdBeta(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdh(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdh(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdk(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdk(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdAlpha(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdBeta(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdh(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdh(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdk(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdk(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdk", args);
              return NULL;
            }
            static PyObject *t_FieldGHmsjPolynomials_get__parameters_(t_FieldGHmsjPolynomials *self, void *data)
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
#include "org/hipparchus/analysis/function/Exp.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Exp::class$ = NULL;
        jmethodID *Exp::mids$ = NULL;
        bool Exp::live$ = false;

        jclass Exp::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Exp");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Exp::Exp() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Exp::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Exp::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Exp_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Exp_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Exp_init_(t_Exp *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Exp_value(t_Exp *self, PyObject *args);

        static PyMethodDef t_Exp__methods_[] = {
          DECLARE_METHOD(t_Exp, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Exp, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Exp, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Exp)[] = {
          { Py_tp_methods, t_Exp__methods_ },
          { Py_tp_init, (void *) t_Exp_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Exp)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Exp, t_Exp, Exp);

        void t_Exp::install(PyObject *module)
        {
          installType(&PY_TYPE(Exp), &PY_TYPE_DEF(Exp), module, "Exp", 0);
        }

        void t_Exp::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "class_", make_descriptor(Exp::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "wrapfn_", make_descriptor(t_Exp::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Exp_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Exp::initializeClass, 1)))
            return NULL;
          return t_Exp::wrap_Object(Exp(((t_Exp *) arg)->object.this$));
        }
        static PyObject *t_Exp_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Exp::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Exp_init_(t_Exp *self, PyObject *args, PyObject *kwds)
        {
          Exp object((jobject) NULL);

          INT_CALL(object = Exp());
          self->object = object;

          return 0;
        }

        static PyObject *t_Exp_value(t_Exp *self, PyObject *args)
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
#include "org/orekit/attitudes/TargetPointing.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TargetPointing::class$ = NULL;
      jmethodID *TargetPointing::mids$ = NULL;
      bool TargetPointing::live$ = false;

      jclass TargetPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TargetPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b54c157362136a00] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_8238e3d52ed5e244] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/BodyShape;)V");
          mids$[mid_getTargetPV_ad3e02e6f0d115f2] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_129d59e5c897146f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TargetPointing::TargetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_b54c157362136a00, a0.this$, a1.this$, a2.this$)) {}

      TargetPointing::TargetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_8238e3d52ed5e244, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates TargetPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ad3e02e6f0d115f2], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates TargetPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_129d59e5c897146f], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_TargetPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TargetPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TargetPointing_init_(t_TargetPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TargetPointing_getTargetPV(t_TargetPointing *self, PyObject *args);

      static PyMethodDef t_TargetPointing__methods_[] = {
        DECLARE_METHOD(t_TargetPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TargetPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TargetPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TargetPointing)[] = {
        { Py_tp_methods, t_TargetPointing__methods_ },
        { Py_tp_init, (void *) t_TargetPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TargetPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(TargetPointing, t_TargetPointing, TargetPointing);

      void t_TargetPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(TargetPointing), &PY_TYPE_DEF(TargetPointing), module, "TargetPointing", 0);
      }

      void t_TargetPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "class_", make_descriptor(TargetPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "wrapfn_", make_descriptor(t_TargetPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TargetPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TargetPointing::initializeClass, 1)))
          return NULL;
        return t_TargetPointing::wrap_Object(TargetPointing(((t_TargetPointing *) arg)->object.this$));
      }
      static PyObject *t_TargetPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TargetPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TargetPointing_init_(t_TargetPointing *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            TargetPointing object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TargetPointing(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::BodyShape a2((jobject) NULL);
            TargetPointing object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TargetPointing(a0, a1, a2));
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

      static PyObject *t_TargetPointing_getTargetPV(t_TargetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/GlobalMappingFunctionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *GlobalMappingFunctionModel::class$ = NULL;
          jmethodID *GlobalMappingFunctionModel::mids$ = NULL;
          bool GlobalMappingFunctionModel::live$ = false;

          jclass GlobalMappingFunctionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/GlobalMappingFunctionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_e93d77ad761aa1f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_mappingFactors_6f55c0ac27817ed2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_7ef12dc9276409e6] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalMappingFunctionModel::GlobalMappingFunctionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          GlobalMappingFunctionModel::GlobalMappingFunctionModel(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e93d77ad761aa1f2, a0.this$)) {}

          JArray< jdouble > GlobalMappingFunctionModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6f55c0ac27817ed2], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > GlobalMappingFunctionModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7ef12dc9276409e6], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_GlobalMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalMappingFunctionModel_init_(t_GlobalMappingFunctionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalMappingFunctionModel_mappingFactors(t_GlobalMappingFunctionModel *self, PyObject *args);

          static PyMethodDef t_GlobalMappingFunctionModel__methods_[] = {
            DECLARE_METHOD(t_GlobalMappingFunctionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalMappingFunctionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalMappingFunctionModel, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalMappingFunctionModel)[] = {
            { Py_tp_methods, t_GlobalMappingFunctionModel__methods_ },
            { Py_tp_init, (void *) t_GlobalMappingFunctionModel_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalMappingFunctionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalMappingFunctionModel, t_GlobalMappingFunctionModel, GlobalMappingFunctionModel);

          void t_GlobalMappingFunctionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalMappingFunctionModel), &PY_TYPE_DEF(GlobalMappingFunctionModel), module, "GlobalMappingFunctionModel", 0);
          }

          void t_GlobalMappingFunctionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "class_", make_descriptor(GlobalMappingFunctionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "wrapfn_", make_descriptor(t_GlobalMappingFunctionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalMappingFunctionModel::initializeClass, 1)))
              return NULL;
            return t_GlobalMappingFunctionModel::wrap_Object(GlobalMappingFunctionModel(((t_GlobalMappingFunctionModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalMappingFunctionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalMappingFunctionModel_init_(t_GlobalMappingFunctionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GlobalMappingFunctionModel object((jobject) NULL);

                INT_CALL(object = GlobalMappingFunctionModel());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                GlobalMappingFunctionModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  INT_CALL(object = GlobalMappingFunctionModel(a0));
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

          static PyObject *t_GlobalMappingFunctionModel_mappingFactors(t_GlobalMappingFunctionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationSingleCoefficient::class$ = NULL;
        jmethodID *IsotropicRadiationSingleCoefficient::mids$ = NULL;
        bool IsotropicRadiationSingleCoefficient::live$ = false;

        jclass IsotropicRadiationSingleCoefficient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getRadiationParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_c01594a6748cab78] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationSingleCoefficient::IsotropicRadiationSingleCoefficient(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        IsotropicRadiationSingleCoefficient::IsotropicRadiationSingleCoefficient(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

        ::java::util::List IsotropicRadiationSingleCoefficient::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_2afa36052df4765d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationSingleCoefficient::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_c01594a6748cab78], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationSingleCoefficient::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_IsotropicRadiationSingleCoefficient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationSingleCoefficient_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationSingleCoefficient_init_(t_IsotropicRadiationSingleCoefficient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationSingleCoefficient_getRadiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self);
        static PyObject *t_IsotropicRadiationSingleCoefficient_radiationPressureAcceleration(t_IsotropicRadiationSingleCoefficient *self, PyObject *args);
        static PyObject *t_IsotropicRadiationSingleCoefficient_get__radiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self, void *data);
        static PyGetSetDef t_IsotropicRadiationSingleCoefficient__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationSingleCoefficient, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationSingleCoefficient__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationSingleCoefficient)[] = {
          { Py_tp_methods, t_IsotropicRadiationSingleCoefficient__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationSingleCoefficient_init_ },
          { Py_tp_getset, t_IsotropicRadiationSingleCoefficient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationSingleCoefficient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationSingleCoefficient, t_IsotropicRadiationSingleCoefficient, IsotropicRadiationSingleCoefficient);

        void t_IsotropicRadiationSingleCoefficient::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationSingleCoefficient), &PY_TYPE_DEF(IsotropicRadiationSingleCoefficient), module, "IsotropicRadiationSingleCoefficient", 0);
        }

        void t_IsotropicRadiationSingleCoefficient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "class_", make_descriptor(IsotropicRadiationSingleCoefficient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "wrapfn_", make_descriptor(t_IsotropicRadiationSingleCoefficient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationSingleCoefficient::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationSingleCoefficient::wrap_Object(IsotropicRadiationSingleCoefficient(((t_IsotropicRadiationSingleCoefficient *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationSingleCoefficient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationSingleCoefficient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationSingleCoefficient_init_(t_IsotropicRadiationSingleCoefficient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IsotropicRadiationSingleCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IsotropicRadiationSingleCoefficient(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              IsotropicRadiationSingleCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = IsotropicRadiationSingleCoefficient(a0, a1, a2, a3));
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

        static PyObject *t_IsotropicRadiationSingleCoefficient_getRadiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_radiationPressureAcceleration(t_IsotropicRadiationSingleCoefficient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_get__radiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *WriterBuilder::class$ = NULL;
          jmethodID *WriterBuilder::mids$ = NULL;
          bool WriterBuilder::live$ = false;

          jclass WriterBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/WriterBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_47d99c12e4a42886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_buildAcmWriter_61f2a4ec79e5bf47] = env->getMethodID(cls, "buildAcmWriter", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmWriter;");
              mids$[mid_buildAemWriter_246980f88deb0b11] = env->getMethodID(cls, "buildAemWriter", "()Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;");
              mids$[mid_buildApmWriter_2f7fa7acd939cae5] = env->getMethodID(cls, "buildApmWriter", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmWriter;");
              mids$[mid_buildCdmWriter_008e25c97051213c] = env->getMethodID(cls, "buildCdmWriter", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmWriter;");
              mids$[mid_buildNdmWriter_c07f18cfae2cddd0] = env->getMethodID(cls, "buildNdmWriter", "()Lorg/orekit/files/ccsds/ndm/NdmWriter;");
              mids$[mid_buildOcmWriter_c14b3df774a8a8fc] = env->getMethodID(cls, "buildOcmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;");
              mids$[mid_buildOemWriter_1efdb07ed3084981] = env->getMethodID(cls, "buildOemWriter", "()Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;");
              mids$[mid_buildOmmWriter_2ec1346c9f0afc10] = env->getMethodID(cls, "buildOmmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmWriter;");
              mids$[mid_buildOpmWriter_09c1d1a79da9a806] = env->getMethodID(cls, "buildOpmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmWriter;");
              mids$[mid_buildTdmWriter_5969ebcddb2f144f] = env->getMethodID(cls, "buildTdmWriter", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmWriter;");
              mids$[mid_create_05cedacda1d25c1e] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/WriterBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          WriterBuilder::WriterBuilder() : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          WriterBuilder::WriterBuilder(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_47d99c12e4a42886, a0.this$)) {}

          ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter WriterBuilder::buildAcmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter(env->callObjectMethod(this$, mids$[mid_buildAcmWriter_61f2a4ec79e5bf47]));
          }

          ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter WriterBuilder::buildAemWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter(env->callObjectMethod(this$, mids$[mid_buildAemWriter_246980f88deb0b11]));
          }

          ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter WriterBuilder::buildApmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter(env->callObjectMethod(this$, mids$[mid_buildApmWriter_2f7fa7acd939cae5]));
          }

          ::org::orekit::files::ccsds::ndm::cdm::CdmWriter WriterBuilder::buildCdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::cdm::CdmWriter(env->callObjectMethod(this$, mids$[mid_buildCdmWriter_008e25c97051213c]));
          }

          ::org::orekit::files::ccsds::ndm::NdmWriter WriterBuilder::buildNdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::NdmWriter(env->callObjectMethod(this$, mids$[mid_buildNdmWriter_c07f18cfae2cddd0]));
          }

          ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter WriterBuilder::buildOcmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter(env->callObjectMethod(this$, mids$[mid_buildOcmWriter_c14b3df774a8a8fc]));
          }

          ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter WriterBuilder::buildOemWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter(env->callObjectMethod(this$, mids$[mid_buildOemWriter_1efdb07ed3084981]));
          }

          ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter WriterBuilder::buildOmmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter(env->callObjectMethod(this$, mids$[mid_buildOmmWriter_2ec1346c9f0afc10]));
          }

          ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter WriterBuilder::buildOpmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter(env->callObjectMethod(this$, mids$[mid_buildOpmWriter_09c1d1a79da9a806]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::TdmWriter WriterBuilder::buildTdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::TdmWriter(env->callObjectMethod(this$, mids$[mid_buildTdmWriter_5969ebcddb2f144f]));
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
          static PyObject *t_WriterBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WriterBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WriterBuilder_of_(t_WriterBuilder *self, PyObject *args);
          static int t_WriterBuilder_init_(t_WriterBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_WriterBuilder_buildAcmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildAemWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildApmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildCdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildNdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOcmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOemWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOmmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOpmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildTdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_get__parameters_(t_WriterBuilder *self, void *data);
          static PyGetSetDef t_WriterBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_WriterBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_WriterBuilder__methods_[] = {
            DECLARE_METHOD(t_WriterBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WriterBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WriterBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_WriterBuilder, buildAcmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildAemWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildApmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildCdmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildNdmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOcmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOemWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOmmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOpmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildTdmWriter, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WriterBuilder)[] = {
            { Py_tp_methods, t_WriterBuilder__methods_ },
            { Py_tp_init, (void *) t_WriterBuilder_init_ },
            { Py_tp_getset, t_WriterBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WriterBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(WriterBuilder, t_WriterBuilder, WriterBuilder);
          PyObject *t_WriterBuilder::wrap_Object(const WriterBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WriterBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WriterBuilder *self = (t_WriterBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_WriterBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WriterBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WriterBuilder *self = (t_WriterBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_WriterBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(WriterBuilder), &PY_TYPE_DEF(WriterBuilder), module, "WriterBuilder", 0);
          }

          void t_WriterBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "class_", make_descriptor(WriterBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "wrapfn_", make_descriptor(t_WriterBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WriterBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WriterBuilder::initializeClass, 1)))
              return NULL;
            return t_WriterBuilder::wrap_Object(WriterBuilder(((t_WriterBuilder *) arg)->object.this$));
          }
          static PyObject *t_WriterBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WriterBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WriterBuilder_of_(t_WriterBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_WriterBuilder_init_(t_WriterBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                WriterBuilder object((jobject) NULL);

                INT_CALL(object = WriterBuilder());
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(WriterBuilder);
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                WriterBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = WriterBuilder(a0));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(WriterBuilder);
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_WriterBuilder_buildAcmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAcmWriter());
            return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildAemWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAemWriter());
            return ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildApmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildApmWriter());
            return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildCdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::cdm::CdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildCdmWriter());
            return ::org::orekit::files::ccsds::ndm::cdm::t_CdmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildNdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::NdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildNdmWriter());
            return ::org::orekit::files::ccsds::ndm::t_NdmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOcmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOcmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOemWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOemWriter());
            return ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOmmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOmmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOpmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOpmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildTdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::TdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildTdmWriter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_TdmWriter::wrap_Object(result);
          }
          static PyObject *t_WriterBuilder_get__parameters_(t_WriterBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Binary64Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/Binary64.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Binary64Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Binary64Field::class$ = NULL;
      jmethodID *Binary64Field::mids$ = NULL;
      bool Binary64Field::live$ = false;

      jclass Binary64Field::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Binary64Field");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_7ba053ac589e30fa] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/util/Binary64Field;");
          mids$[mid_getOne_2ca6539856dec86f] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_2ca6539856dec86f] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean Binary64Field::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      Binary64Field Binary64Field::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return Binary64Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_7ba053ac589e30fa]));
      }

      ::org::hipparchus::util::Binary64 Binary64Field::getOne() const
      {
        return ::org::hipparchus::util::Binary64(env->callObjectMethod(this$, mids$[mid_getOne_2ca6539856dec86f]));
      }

      ::java::lang::Class Binary64Field::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
      }

      ::org::hipparchus::util::Binary64 Binary64Field::getZero() const
      {
        return ::org::hipparchus::util::Binary64(env->callObjectMethod(this$, mids$[mid_getZero_2ca6539856dec86f]));
      }

      jint Binary64Field::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
      static PyObject *t_Binary64Field_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64Field_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64Field_equals(t_Binary64Field *self, PyObject *args);
      static PyObject *t_Binary64Field_getInstance(PyTypeObject *type);
      static PyObject *t_Binary64Field_getOne(t_Binary64Field *self);
      static PyObject *t_Binary64Field_getRuntimeClass(t_Binary64Field *self);
      static PyObject *t_Binary64Field_getZero(t_Binary64Field *self);
      static PyObject *t_Binary64Field_hashCode(t_Binary64Field *self, PyObject *args);
      static PyObject *t_Binary64Field_get__instance(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__one(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__runtimeClass(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__zero(t_Binary64Field *self, void *data);
      static PyGetSetDef t_Binary64Field__fields_[] = {
        DECLARE_GET_FIELD(t_Binary64Field, instance),
        DECLARE_GET_FIELD(t_Binary64Field, one),
        DECLARE_GET_FIELD(t_Binary64Field, runtimeClass),
        DECLARE_GET_FIELD(t_Binary64Field, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Binary64Field__methods_[] = {
        DECLARE_METHOD(t_Binary64Field, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, equals, METH_VARARGS),
        DECLARE_METHOD(t_Binary64Field, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, getOne, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Binary64Field)[] = {
        { Py_tp_methods, t_Binary64Field__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Binary64Field__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Binary64Field)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Binary64Field, t_Binary64Field, Binary64Field);

      void t_Binary64Field::install(PyObject *module)
      {
        installType(&PY_TYPE(Binary64Field), &PY_TYPE_DEF(Binary64Field), module, "Binary64Field", 0);
      }

      void t_Binary64Field::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "class_", make_descriptor(Binary64Field::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "wrapfn_", make_descriptor(t_Binary64Field::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Binary64Field_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Binary64Field::initializeClass, 1)))
          return NULL;
        return t_Binary64Field::wrap_Object(Binary64Field(((t_Binary64Field *) arg)->object.this$));
      }
      static PyObject *t_Binary64Field_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Binary64Field::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Binary64Field_equals(t_Binary64Field *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Binary64Field), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Binary64Field_getInstance(PyTypeObject *type)
      {
        Binary64Field result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::Binary64Field::getInstance());
        return t_Binary64Field::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_getOne(t_Binary64Field *self)
      {
        ::org::hipparchus::util::Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_getRuntimeClass(t_Binary64Field *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64Field_getZero(t_Binary64Field *self)
      {
        ::org::hipparchus::util::Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_hashCode(t_Binary64Field *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64Field), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Binary64Field_get__instance(t_Binary64Field *self, void *data)
      {
        Binary64Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_Binary64Field::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__one(t_Binary64Field *self, void *data)
      {
        ::org::hipparchus::util::Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__runtimeClass(t_Binary64Field *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__zero(t_Binary64Field *self, void *data)
      {
        ::org::hipparchus::util::Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/MaxEval.h"
#include "org/hipparchus/optim/MaxEval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *MaxEval::class$ = NULL;
      jmethodID *MaxEval::mids$ = NULL;
      bool MaxEval::live$ = false;

      jclass MaxEval::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/MaxEval");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getMaxEval_412668abc8d889e9] = env->getMethodID(cls, "getMaxEval", "()I");
          mids$[mid_unlimited_df65f975db0d1d75] = env->getStaticMethodID(cls, "unlimited", "()Lorg/hipparchus/optim/MaxEval;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MaxEval::MaxEval(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      jint MaxEval::getMaxEval() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEval_412668abc8d889e9]);
      }

      MaxEval MaxEval::unlimited()
      {
        jclass cls = env->getClass(initializeClass);
        return MaxEval(env->callStaticObjectMethod(cls, mids$[mid_unlimited_df65f975db0d1d75]));
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
      static PyObject *t_MaxEval_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MaxEval_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MaxEval_init_(t_MaxEval *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MaxEval_getMaxEval(t_MaxEval *self);
      static PyObject *t_MaxEval_unlimited(PyTypeObject *type);
      static PyObject *t_MaxEval_get__maxEval(t_MaxEval *self, void *data);
      static PyGetSetDef t_MaxEval__fields_[] = {
        DECLARE_GET_FIELD(t_MaxEval, maxEval),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MaxEval__methods_[] = {
        DECLARE_METHOD(t_MaxEval, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxEval, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxEval, getMaxEval, METH_NOARGS),
        DECLARE_METHOD(t_MaxEval, unlimited, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MaxEval)[] = {
        { Py_tp_methods, t_MaxEval__methods_ },
        { Py_tp_init, (void *) t_MaxEval_init_ },
        { Py_tp_getset, t_MaxEval__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MaxEval)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MaxEval, t_MaxEval, MaxEval);

      void t_MaxEval::install(PyObject *module)
      {
        installType(&PY_TYPE(MaxEval), &PY_TYPE_DEF(MaxEval), module, "MaxEval", 0);
      }

      void t_MaxEval::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "class_", make_descriptor(MaxEval::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "wrapfn_", make_descriptor(t_MaxEval::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MaxEval_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MaxEval::initializeClass, 1)))
          return NULL;
        return t_MaxEval::wrap_Object(MaxEval(((t_MaxEval *) arg)->object.this$));
      }
      static PyObject *t_MaxEval_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MaxEval::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MaxEval_init_(t_MaxEval *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        MaxEval object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = MaxEval(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MaxEval_getMaxEval(t_MaxEval *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEval());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MaxEval_unlimited(PyTypeObject *type)
      {
        MaxEval result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::MaxEval::unlimited());
        return t_MaxEval::wrap_Object(result);
      }

      static PyObject *t_MaxEval_get__maxEval(t_MaxEval *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEval());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Gaussian$Parametric::class$ = NULL;
        jmethodID *Gaussian$Parametric::mids$ = NULL;
        bool Gaussian$Parametric::live$ = false;

        jclass Gaussian$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Gaussian$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_31b9a2982d73e37a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_1bc40469b56f2c3c] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gaussian$Parametric::Gaussian$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        JArray< jdouble > Gaussian$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_31b9a2982d73e37a], a0, a1.this$));
        }

        jdouble Gaussian$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
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
        static PyObject *t_Gaussian$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gaussian$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gaussian$Parametric_init_(t_Gaussian$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gaussian$Parametric_gradient(t_Gaussian$Parametric *self, PyObject *args);
        static PyObject *t_Gaussian$Parametric_value(t_Gaussian$Parametric *self, PyObject *args);

        static PyMethodDef t_Gaussian$Parametric__methods_[] = {
          DECLARE_METHOD(t_Gaussian$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Gaussian$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gaussian$Parametric)[] = {
          { Py_tp_methods, t_Gaussian$Parametric__methods_ },
          { Py_tp_init, (void *) t_Gaussian$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gaussian$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gaussian$Parametric, t_Gaussian$Parametric, Gaussian$Parametric);

        void t_Gaussian$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Gaussian$Parametric), &PY_TYPE_DEF(Gaussian$Parametric), module, "Gaussian$Parametric", 0);
        }

        void t_Gaussian$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "class_", make_descriptor(Gaussian$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "wrapfn_", make_descriptor(t_Gaussian$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gaussian$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gaussian$Parametric::initializeClass, 1)))
            return NULL;
          return t_Gaussian$Parametric::wrap_Object(Gaussian$Parametric(((t_Gaussian$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Gaussian$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gaussian$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gaussian$Parametric_init_(t_Gaussian$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Gaussian$Parametric object((jobject) NULL);

          INT_CALL(object = Gaussian$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Gaussian$Parametric_gradient(t_Gaussian$Parametric *self, PyObject *args)
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

        static PyObject *t_Gaussian$Parametric_value(t_Gaussian$Parametric *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *InertiaKey::class$ = NULL;
              jmethodID *InertiaKey::mids$ = NULL;
              bool InertiaKey::live$ = false;
              InertiaKey *InertiaKey::COMMENT = NULL;
              InertiaKey *InertiaKey::I11 = NULL;
              InertiaKey *InertiaKey::I12 = NULL;
              InertiaKey *InertiaKey::I13 = NULL;
              InertiaKey *InertiaKey::I22 = NULL;
              InertiaKey *InertiaKey::I23 = NULL;
              InertiaKey *InertiaKey::I33 = NULL;
              InertiaKey *InertiaKey::INERTIA_REF_FRAME = NULL;
              InertiaKey *InertiaKey::IXX = NULL;
              InertiaKey *InertiaKey::IXY = NULL;
              InertiaKey *InertiaKey::IXZ = NULL;
              InertiaKey *InertiaKey::IYY = NULL;
              InertiaKey *InertiaKey::IYZ = NULL;
              InertiaKey *InertiaKey::IZZ = NULL;

              jclass InertiaKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/InertiaKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_25f40cd108bfff82] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;)Z");
                  mids$[mid_valueOf_c7ca18690b3803f7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;");
                  mids$[mid_values_cca4a3229479c82f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new InertiaKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I11 = new InertiaKey(env->getStaticObjectField(cls, "I11", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I12 = new InertiaKey(env->getStaticObjectField(cls, "I12", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I13 = new InertiaKey(env->getStaticObjectField(cls, "I13", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I22 = new InertiaKey(env->getStaticObjectField(cls, "I22", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I23 = new InertiaKey(env->getStaticObjectField(cls, "I23", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I33 = new InertiaKey(env->getStaticObjectField(cls, "I33", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  INERTIA_REF_FRAME = new InertiaKey(env->getStaticObjectField(cls, "INERTIA_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXX = new InertiaKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXY = new InertiaKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXZ = new InertiaKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IYY = new InertiaKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IYZ = new InertiaKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IZZ = new InertiaKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean InertiaKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_25f40cd108bfff82], a0.this$, a1.this$, a2.this$);
              }

              InertiaKey InertiaKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return InertiaKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c7ca18690b3803f7], a0.this$));
              }

              JArray< InertiaKey > InertiaKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< InertiaKey >(env->callStaticObjectMethod(cls, mids$[mid_values_cca4a3229479c82f]));
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
              static PyObject *t_InertiaKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InertiaKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InertiaKey_of_(t_InertiaKey *self, PyObject *args);
              static PyObject *t_InertiaKey_process(t_InertiaKey *self, PyObject *args);
              static PyObject *t_InertiaKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_InertiaKey_values(PyTypeObject *type);
              static PyObject *t_InertiaKey_get__parameters_(t_InertiaKey *self, void *data);
              static PyGetSetDef t_InertiaKey__fields_[] = {
                DECLARE_GET_FIELD(t_InertiaKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_InertiaKey__methods_[] = {
                DECLARE_METHOD(t_InertiaKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_InertiaKey, process, METH_VARARGS),
                DECLARE_METHOD(t_InertiaKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(InertiaKey)[] = {
                { Py_tp_methods, t_InertiaKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_InertiaKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(InertiaKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(InertiaKey, t_InertiaKey, InertiaKey);
              PyObject *t_InertiaKey::wrap_Object(const InertiaKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InertiaKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InertiaKey *self = (t_InertiaKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_InertiaKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InertiaKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InertiaKey *self = (t_InertiaKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_InertiaKey::install(PyObject *module)
              {
                installType(&PY_TYPE(InertiaKey), &PY_TYPE_DEF(InertiaKey), module, "InertiaKey", 0);
              }

              void t_InertiaKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "class_", make_descriptor(InertiaKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "wrapfn_", make_descriptor(t_InertiaKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(InertiaKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "COMMENT", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I11", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I11)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I12", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I12)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I13", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I13)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I22", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I22)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I23", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I23)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I33", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I33)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "INERTIA_REF_FRAME", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::INERTIA_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXX", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXY", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IYY", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IYZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IZZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IZZ)));
              }

              static PyObject *t_InertiaKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, InertiaKey::initializeClass, 1)))
                  return NULL;
                return t_InertiaKey::wrap_Object(InertiaKey(((t_InertiaKey *) arg)->object.this$));
              }
              static PyObject *t_InertiaKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, InertiaKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_InertiaKey_of_(t_InertiaKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_InertiaKey_process(t_InertiaKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Inertia::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_InertiaKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                InertiaKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::InertiaKey::valueOf(a0));
                  return t_InertiaKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_InertiaKey_values(PyTypeObject *type)
              {
                JArray< InertiaKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::InertiaKey::values());
                return JArray<jobject>(result.this$).wrap(t_InertiaKey::wrap_jobject);
              }
              static PyObject *t_InertiaKey_get__parameters_(t_InertiaKey *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeRateTroposphericDelayModifier::mids$ = NULL;
          bool BaseRangeRateTroposphericDelayModifier::live$ = false;

          jclass BaseRangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeRateErrorTroposphericModel_17bae2e3aa9bc870] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeRateErrorTroposphericModel_81f653af97ea34a8] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getTropoModel_f33f77393a996753] = env->getMethodID(cls, "getTropoModel", "()Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeRateTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          jdouble BaseRangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_17bae2e3aa9bc870], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement BaseRangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_81f653af97ea34a8], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_getParametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_BaseRangeRateTroposphericDelayModifier *self, PyObject *args);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeRateTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeRateTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, rangeRateErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeRateTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeRateTroposphericDelayModifier, t_BaseRangeRateTroposphericDelayModifier, BaseRangeRateTroposphericDelayModifier);

          void t_BaseRangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeRateTroposphericDelayModifier), &PY_TYPE_DEF(BaseRangeRateTroposphericDelayModifier), module, "BaseRangeRateTroposphericDelayModifier", 0);
          }

          void t_BaseRangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "class_", make_descriptor(BaseRangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeRateTroposphericDelayModifier::wrap_Object(BaseRangeRateTroposphericDelayModifier(((t_BaseRangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_getParametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_BaseRangeRateTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "rangeRateErrorTroposphericModel", args);
            return NULL;
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "java/util/List.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanTidesReader::class$ = NULL;
          jmethodID *OceanTidesReader::mids$ = NULL;
          bool OceanTidesReader::live$ = false;

          jclass OceanTidesReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanTidesReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_canAdd_1e0f61f59fdd7111] = env->getMethodID(cls, "canAdd", "(II)Z");
              mids$[mid_getMaxParseDegree_412668abc8d889e9] = env->getMethodID(cls, "getMaxParseDegree", "()I");
              mids$[mid_getMaxParseOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxParseOrder", "()I");
              mids$[mid_getSupportedNames_3cffd47377eca18a] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_getWaves_0d9551367f7ecdef] = env->getMethodID(cls, "getWaves", "()Ljava/util/List;");
              mids$[mid_setMaxParseDegree_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxParseDegree", "(I)V");
              mids$[mid_setMaxParseOrder_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxParseOrder", "(I)V");
              mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");
              mids$[mid_addWaveCoefficients_9f0359e61fbe1af2] = env->getMethodID(cls, "addWaveCoefficients", "(IIIDDDDILjava/lang/String;)V");
              mids$[mid_endParse_0640e6acf969ed28] = env->getMethodID(cls, "endParse", "()V");
              mids$[mid_startParse_f5ffdf29129ef90a] = env->getMethodID(cls, "startParse", "(Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanTidesReader::OceanTidesReader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

          jboolean OceanTidesReader::canAdd(jint a0, jint a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_canAdd_1e0f61f59fdd7111], a0, a1);
          }

          jint OceanTidesReader::getMaxParseDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseDegree_412668abc8d889e9]);
          }

          jint OceanTidesReader::getMaxParseOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseOrder_412668abc8d889e9]);
          }

          ::java::lang::String OceanTidesReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_3cffd47377eca18a]));
          }

          ::java::util::List OceanTidesReader::getWaves() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getWaves_0d9551367f7ecdef]));
          }

          void OceanTidesReader::setMaxParseDegree(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseDegree_a3da1a935cb37f7b], a0);
          }

          void OceanTidesReader::setMaxParseOrder(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseOrder_a3da1a935cb37f7b], a0);
          }

          jboolean OceanTidesReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
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
          static PyObject *t_OceanTidesReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanTidesReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanTidesReader_init_(t_OceanTidesReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanTidesReader_canAdd(t_OceanTidesReader *self, PyObject *args);
          static PyObject *t_OceanTidesReader_getMaxParseDegree(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getMaxParseOrder(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getSupportedNames(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getWaves(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_setMaxParseDegree(t_OceanTidesReader *self, PyObject *arg);
          static PyObject *t_OceanTidesReader_setMaxParseOrder(t_OceanTidesReader *self, PyObject *arg);
          static PyObject *t_OceanTidesReader_stillAcceptsData(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_get__maxParseDegree(t_OceanTidesReader *self, void *data);
          static int t_OceanTidesReader_set__maxParseDegree(t_OceanTidesReader *self, PyObject *arg, void *data);
          static PyObject *t_OceanTidesReader_get__maxParseOrder(t_OceanTidesReader *self, void *data);
          static int t_OceanTidesReader_set__maxParseOrder(t_OceanTidesReader *self, PyObject *arg, void *data);
          static PyObject *t_OceanTidesReader_get__supportedNames(t_OceanTidesReader *self, void *data);
          static PyObject *t_OceanTidesReader_get__waves(t_OceanTidesReader *self, void *data);
          static PyGetSetDef t_OceanTidesReader__fields_[] = {
            DECLARE_GETSET_FIELD(t_OceanTidesReader, maxParseDegree),
            DECLARE_GETSET_FIELD(t_OceanTidesReader, maxParseOrder),
            DECLARE_GET_FIELD(t_OceanTidesReader, supportedNames),
            DECLARE_GET_FIELD(t_OceanTidesReader, waves),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanTidesReader__methods_[] = {
            DECLARE_METHOD(t_OceanTidesReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesReader, canAdd, METH_VARARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxParseDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxParseOrder, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getWaves, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, setMaxParseDegree, METH_O),
            DECLARE_METHOD(t_OceanTidesReader, setMaxParseOrder, METH_O),
            DECLARE_METHOD(t_OceanTidesReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanTidesReader)[] = {
            { Py_tp_methods, t_OceanTidesReader__methods_ },
            { Py_tp_init, (void *) t_OceanTidesReader_init_ },
            { Py_tp_getset, t_OceanTidesReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanTidesReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanTidesReader, t_OceanTidesReader, OceanTidesReader);

          void t_OceanTidesReader::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanTidesReader), &PY_TYPE_DEF(OceanTidesReader), module, "OceanTidesReader", 0);
          }

          void t_OceanTidesReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "class_", make_descriptor(OceanTidesReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "wrapfn_", make_descriptor(t_OceanTidesReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanTidesReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanTidesReader::initializeClass, 1)))
              return NULL;
            return t_OceanTidesReader::wrap_Object(OceanTidesReader(((t_OceanTidesReader *) arg)->object.this$));
          }
          static PyObject *t_OceanTidesReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanTidesReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanTidesReader_init_(t_OceanTidesReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            OceanTidesReader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = OceanTidesReader(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanTidesReader_canAdd(t_OceanTidesReader *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jboolean result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.canAdd(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "canAdd", args);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_getMaxParseDegree(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getMaxParseOrder(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getSupportedNames(t_OceanTidesReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_OceanTidesReader_getWaves(t_OceanTidesReader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getWaves());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
          }

          static PyObject *t_OceanTidesReader_setMaxParseDegree(t_OceanTidesReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseDegree(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseDegree", arg);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_setMaxParseOrder(t_OceanTidesReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseOrder(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseOrder", arg);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_stillAcceptsData(t_OceanTidesReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OceanTidesReader_get__maxParseDegree(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) value);
          }
          static int t_OceanTidesReader_set__maxParseDegree(t_OceanTidesReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseDegree(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseDegree", arg);
            return -1;
          }

          static PyObject *t_OceanTidesReader_get__maxParseOrder(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) value);
          }
          static int t_OceanTidesReader_set__maxParseOrder(t_OceanTidesReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseOrder(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseOrder", arg);
            return -1;
          }

          static PyObject *t_OceanTidesReader_get__supportedNames(t_OceanTidesReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }

          static PyObject *t_OceanTidesReader_get__waves(t_OceanTidesReader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getWaves());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmCommonMetadata::class$ = NULL;
            jmethodID *OdmCommonMetadata::mids$ = NULL;
            bool OdmCommonMetadata::live$ = false;

            jclass OdmCommonMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalizeMetadata_f673e6e131e83586] = env->getMethodID(cls, "finalizeMetadata", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getCenter_c642bce266d6d89a] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getFrameEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getLaunchNumber_412668abc8d889e9] = env->getMethodID(cls, "getLaunchNumber", "()I");
                mids$[mid_getLaunchPiece_3cffd47377eca18a] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
                mids$[mid_getLaunchYear_412668abc8d889e9] = env->getMethodID(cls, "getLaunchYear", "()I");
                mids$[mid_getObjectID_3cffd47377eca18a] = env->getMethodID(cls, "getObjectID", "()Ljava/lang/String;");
                mids$[mid_getReferenceFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_setCenter_e6f755c267d91c26] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setFrameEpoch_20affcbd28542333] = env->getMethodID(cls, "setFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setFrameEpochString_f5ffdf29129ef90a] = env->getMethodID(cls, "setFrameEpochString", "(Ljava/lang/String;)V");
                mids$[mid_setObjectID_f5ffdf29129ef90a] = env->getMethodID(cls, "setObjectID", "(Ljava/lang/String;)V");
                mids$[mid_setReferenceFrame_f55eee1236275bb1] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OdmCommonMetadata::OdmCommonMetadata() : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void OdmCommonMetadata::finalizeMetadata(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_finalizeMetadata_f673e6e131e83586], a0.this$);
            }

            ::org::orekit::files::ccsds::definitions::BodyFacade OdmCommonMetadata::getCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_c642bce266d6d89a]));
            }

            ::org::orekit::frames::Frame OdmCommonMetadata::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
            }

            ::org::orekit::time::AbsoluteDate OdmCommonMetadata::getFrameEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFrameEpoch_7a97f7e149e79afb]));
            }

            jint OdmCommonMetadata::getLaunchNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchNumber_412668abc8d889e9]);
            }

            ::java::lang::String OdmCommonMetadata::getLaunchPiece() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_3cffd47377eca18a]));
            }

            jint OdmCommonMetadata::getLaunchYear() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchYear_412668abc8d889e9]);
            }

            ::java::lang::String OdmCommonMetadata::getObjectID() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectID_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade OdmCommonMetadata::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_98f5fcaff3e3f9d2]));
            }

            void OdmCommonMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCenter_e6f755c267d91c26], a0.this$);
            }

            void OdmCommonMetadata::setFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameEpoch_20affcbd28542333], a0.this$);
            }

            void OdmCommonMetadata::setFrameEpochString(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameEpochString_f5ffdf29129ef90a], a0.this$);
            }

            void OdmCommonMetadata::setObjectID(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectID_f5ffdf29129ef90a], a0.this$);
            }

            void OdmCommonMetadata::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_f55eee1236275bb1], a0.this$);
            }

            void OdmCommonMetadata::validate(jdouble a0) const
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
            static PyObject *t_OdmCommonMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OdmCommonMetadata_init_(t_OdmCommonMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_OdmCommonMetadata_finalizeMetadata(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_getCenter(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getFrame(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getFrameEpoch(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchNumber(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchPiece(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchYear(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getObjectID(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getReferenceFrame(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_setCenter(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setFrameEpoch(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setFrameEpochString(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setObjectID(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setReferenceFrame(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_validate(t_OdmCommonMetadata *self, PyObject *args);
            static PyObject *t_OdmCommonMetadata_get__center(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__center(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__frame(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__frameEpoch(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__frameEpoch(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static int t_OdmCommonMetadata_set__frameEpochString(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchNumber(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchPiece(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchYear(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__objectID(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__objectID(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__referenceFrame(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__referenceFrame(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_OdmCommonMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, center),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, frame),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, frameEpoch),
              DECLARE_SET_FIELD(t_OdmCommonMetadata, frameEpochString),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchNumber),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchPiece),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchYear),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, objectID),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, referenceFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmCommonMetadata__methods_[] = {
              DECLARE_METHOD(t_OdmCommonMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmCommonMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmCommonMetadata, finalizeMetadata, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, getCenter, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getFrameEpoch, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchNumber, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchPiece, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchYear, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getObjectID, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, setCenter, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setFrameEpoch, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setFrameEpochString, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setObjectID, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmCommonMetadata)[] = {
              { Py_tp_methods, t_OdmCommonMetadata__methods_ },
              { Py_tp_init, (void *) t_OdmCommonMetadata_init_ },
              { Py_tp_getset, t_OdmCommonMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmCommonMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmMetadata),
              NULL
            };

            DEFINE_TYPE(OdmCommonMetadata, t_OdmCommonMetadata, OdmCommonMetadata);

            void t_OdmCommonMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmCommonMetadata), &PY_TYPE_DEF(OdmCommonMetadata), module, "OdmCommonMetadata", 0);
            }

            void t_OdmCommonMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "class_", make_descriptor(OdmCommonMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "wrapfn_", make_descriptor(t_OdmCommonMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmCommonMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmCommonMetadata::initializeClass, 1)))
                return NULL;
              return t_OdmCommonMetadata::wrap_Object(OdmCommonMetadata(((t_OdmCommonMetadata *) arg)->object.this$));
            }
            static PyObject *t_OdmCommonMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmCommonMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OdmCommonMetadata_init_(t_OdmCommonMetadata *self, PyObject *args, PyObject *kwds)
            {
              OdmCommonMetadata object((jobject) NULL);

              INT_CALL(object = OdmCommonMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_OdmCommonMetadata_finalizeMetadata(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.finalizeMetadata(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "finalizeMetadata", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_getCenter(t_OdmCommonMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getFrame(t_OdmCommonMetadata *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getFrameEpoch(t_OdmCommonMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchNumber(t_OdmCommonMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchPiece(t_OdmCommonMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaunchPiece());
              return j2p(result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchYear(t_OdmCommonMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchYear());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_OdmCommonMetadata_getObjectID(t_OdmCommonMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectID());
              return j2p(result);
            }

            static PyObject *t_OdmCommonMetadata_getReferenceFrame(t_OdmCommonMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_setCenter(t_OdmCommonMetadata *self, PyObject *arg)
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

            static PyObject *t_OdmCommonMetadata_setFrameEpoch(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameEpoch", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setFrameEpochString(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setFrameEpochString(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameEpochString", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setObjectID(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectID(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectID", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setReferenceFrame(t_OdmCommonMetadata *self, PyObject *arg)
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

            static PyObject *t_OdmCommonMetadata_validate(t_OdmCommonMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(OdmCommonMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_OdmCommonMetadata_get__center(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__center(t_OdmCommonMetadata *self, PyObject *arg, void *data)
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

            static PyObject *t_OdmCommonMetadata_get__frame(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_OdmCommonMetadata_get__frameEpoch(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__frameEpoch(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameEpoch", arg);
              return -1;
            }

            static int t_OdmCommonMetadata_set__frameEpochString(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setFrameEpochString(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameEpochString", arg);
              return -1;
            }

            static PyObject *t_OdmCommonMetadata_get__launchNumber(t_OdmCommonMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_OdmCommonMetadata_get__launchPiece(t_OdmCommonMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getLaunchPiece());
              return j2p(value);
            }

            static PyObject *t_OdmCommonMetadata_get__launchYear(t_OdmCommonMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchYear());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_OdmCommonMetadata_get__objectID(t_OdmCommonMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectID());
              return j2p(value);
            }
            static int t_OdmCommonMetadata_set__objectID(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectID(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectID", arg);
              return -1;
            }

            static PyObject *t_OdmCommonMetadata_get__referenceFrame(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__referenceFrame(t_OdmCommonMetadata *self, PyObject *arg, void *data)
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
#include "org/hipparchus/util/SinCos.h"
#include "org/hipparchus/util/SinCos.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *SinCos::class$ = NULL;
      jmethodID *SinCos::mids$ = NULL;
      bool SinCos::live$ = false;

      jclass SinCos::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/SinCos");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cos_557b8123390d8d0c] = env->getMethodID(cls, "cos", "()D");
          mids$[mid_difference_35070a900a305827] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/SinCos;Lorg/hipparchus/util/SinCos;)Lorg/hipparchus/util/SinCos;");
          mids$[mid_sin_557b8123390d8d0c] = env->getMethodID(cls, "sin", "()D");
          mids$[mid_sum_35070a900a305827] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/SinCos;Lorg/hipparchus/util/SinCos;)Lorg/hipparchus/util/SinCos;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble SinCos::cos() const
      {
        return env->callDoubleMethod(this$, mids$[mid_cos_557b8123390d8d0c]);
      }

      SinCos SinCos::difference(const SinCos & a0, const SinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinCos(env->callStaticObjectMethod(cls, mids$[mid_difference_35070a900a305827], a0.this$, a1.this$));
      }

      jdouble SinCos::sin() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sin_557b8123390d8d0c]);
      }

      SinCos SinCos::sum(const SinCos & a0, const SinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinCos(env->callStaticObjectMethod(cls, mids$[mid_sum_35070a900a305827], a0.this$, a1.this$));
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
      static PyObject *t_SinCos_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinCos_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinCos_cos(t_SinCos *self);
      static PyObject *t_SinCos_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_SinCos_sin(t_SinCos *self);
      static PyObject *t_SinCos_sum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_SinCos__methods_[] = {
        DECLARE_METHOD(t_SinCos, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinCos, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinCos, cos, METH_NOARGS),
        DECLARE_METHOD(t_SinCos, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SinCos, sin, METH_NOARGS),
        DECLARE_METHOD(t_SinCos, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SinCos)[] = {
        { Py_tp_methods, t_SinCos__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SinCos)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SinCos, t_SinCos, SinCos);

      void t_SinCos::install(PyObject *module)
      {
        installType(&PY_TYPE(SinCos), &PY_TYPE_DEF(SinCos), module, "SinCos", 0);
      }

      void t_SinCos::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "class_", make_descriptor(SinCos::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "wrapfn_", make_descriptor(t_SinCos::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SinCos_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SinCos::initializeClass, 1)))
          return NULL;
        return t_SinCos::wrap_Object(SinCos(((t_SinCos *) arg)->object.this$));
      }
      static PyObject *t_SinCos_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SinCos::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SinCos_cos(t_SinCos *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.cos());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinCos_difference(PyTypeObject *type, PyObject *args)
      {
        SinCos a0((jobject) NULL);
        SinCos a1((jobject) NULL);
        SinCos result((jobject) NULL);

        if (!parseArgs(args, "kk", SinCos::initializeClass, SinCos::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinCos::difference(a0, a1));
          return t_SinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_SinCos_sin(t_SinCos *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sin());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinCos_sum(PyTypeObject *type, PyObject *args)
      {
        SinCos a0((jobject) NULL);
        SinCos a1((jobject) NULL);
        SinCos result((jobject) NULL);

        if (!parseArgs(args, "kk", SinCos::initializeClass, SinCos::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinCos::sum(a0, a1));
          return t_SinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/OneDVariation.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *OneDVariation::class$ = NULL;
        jmethodID *OneDVariation::mids$ = NULL;
        bool OneDVariation::live$ = false;

        jclass OneDVariation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/OneDVariation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9604d7e460d56161] = env->getMethodID(cls, "<init>", "(DD[D)V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OneDVariation::OneDVariation(jdouble a0, jdouble a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9604d7e460d56161, a0, a1, a2.this$)) {}

        jdouble OneDVariation::value(jdouble a0, jdouble a1) const
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
  namespace orekit {
    namespace gnss {
      namespace antenna {
        static PyObject *t_OneDVariation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OneDVariation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OneDVariation_init_(t_OneDVariation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OneDVariation_value(t_OneDVariation *self, PyObject *args);

        static PyMethodDef t_OneDVariation__methods_[] = {
          DECLARE_METHOD(t_OneDVariation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneDVariation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneDVariation, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OneDVariation)[] = {
          { Py_tp_methods, t_OneDVariation__methods_ },
          { Py_tp_init, (void *) t_OneDVariation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OneDVariation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OneDVariation, t_OneDVariation, OneDVariation);

        void t_OneDVariation::install(PyObject *module)
        {
          installType(&PY_TYPE(OneDVariation), &PY_TYPE_DEF(OneDVariation), module, "OneDVariation", 0);
        }

        void t_OneDVariation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "class_", make_descriptor(OneDVariation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "wrapfn_", make_descriptor(t_OneDVariation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OneDVariation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OneDVariation::initializeClass, 1)))
            return NULL;
          return t_OneDVariation::wrap_Object(OneDVariation(((t_OneDVariation *) arg)->object.this$));
        }
        static PyObject *t_OneDVariation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OneDVariation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OneDVariation_init_(t_OneDVariation *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          JArray< jdouble > a2((jobject) NULL);
          OneDVariation object((jobject) NULL);

          if (!parseArgs(args, "DD[D", &a0, &a1, &a2))
          {
            INT_CALL(object = OneDVariation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OneDVariation_value(t_OneDVariation *self, PyObject *args)
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
#include "org/orekit/forces/gravity/ThirdBodyAttractionEpoch.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *ThirdBodyAttractionEpoch::class$ = NULL;
        jmethodID *ThirdBodyAttractionEpoch::mids$ = NULL;
        bool ThirdBodyAttractionEpoch::live$ = false;

        jclass ThirdBodyAttractionEpoch::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/ThirdBodyAttractionEpoch");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_971db345b01a6cfa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_getDerivativesToEpoch_387749838a638ee2] = env->getMethodID(cls, "getDerivativesToEpoch", "(Lorg/orekit/propagation/SpacecraftState;[D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThirdBodyAttractionEpoch::ThirdBodyAttractionEpoch(const ::org::orekit::bodies::CelestialBody & a0) : ::org::orekit::forces::gravity::ThirdBodyAttraction(env->newObject(initializeClass, &mids$, mid_init$_971db345b01a6cfa, a0.this$)) {}

        JArray< jdouble > ThirdBodyAttractionEpoch::getDerivativesToEpoch(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDerivativesToEpoch_387749838a638ee2], a0.this$, a1.this$));
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
        static PyObject *t_ThirdBodyAttractionEpoch_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThirdBodyAttractionEpoch_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThirdBodyAttractionEpoch_init_(t_ThirdBodyAttractionEpoch *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThirdBodyAttractionEpoch_getDerivativesToEpoch(t_ThirdBodyAttractionEpoch *self, PyObject *args);

        static PyMethodDef t_ThirdBodyAttractionEpoch__methods_[] = {
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, getDerivativesToEpoch, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThirdBodyAttractionEpoch)[] = {
          { Py_tp_methods, t_ThirdBodyAttractionEpoch__methods_ },
          { Py_tp_init, (void *) t_ThirdBodyAttractionEpoch_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThirdBodyAttractionEpoch)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::gravity::ThirdBodyAttraction),
          NULL
        };

        DEFINE_TYPE(ThirdBodyAttractionEpoch, t_ThirdBodyAttractionEpoch, ThirdBodyAttractionEpoch);

        void t_ThirdBodyAttractionEpoch::install(PyObject *module)
        {
          installType(&PY_TYPE(ThirdBodyAttractionEpoch), &PY_TYPE_DEF(ThirdBodyAttractionEpoch), module, "ThirdBodyAttractionEpoch", 0);
        }

        void t_ThirdBodyAttractionEpoch::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "class_", make_descriptor(ThirdBodyAttractionEpoch::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "wrapfn_", make_descriptor(t_ThirdBodyAttractionEpoch::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThirdBodyAttractionEpoch_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThirdBodyAttractionEpoch::initializeClass, 1)))
            return NULL;
          return t_ThirdBodyAttractionEpoch::wrap_Object(ThirdBodyAttractionEpoch(((t_ThirdBodyAttractionEpoch *) arg)->object.this$));
        }
        static PyObject *t_ThirdBodyAttractionEpoch_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThirdBodyAttractionEpoch::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThirdBodyAttractionEpoch_init_(t_ThirdBodyAttractionEpoch *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          ThirdBodyAttractionEpoch object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = ThirdBodyAttractionEpoch(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThirdBodyAttractionEpoch_getDerivativesToEpoch(t_ThirdBodyAttractionEpoch *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getDerivativesToEpoch(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivativesToEpoch", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistoryMetadataKey::class$ = NULL;
              jmethodID *AttitudeCovarianceHistoryMetadataKey::mids$ = NULL;
              bool AttitudeCovarianceHistoryMetadataKey::live$ = false;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COMMENT = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_BASIS = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_BASIS_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_PREV_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_REF_FRAME = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_TYPE = NULL;

              jclass AttitudeCovarianceHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_6fdf800dfc8ede24] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;)Z");
                  mids$[mid_valueOf_7c2e426ee9589283] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;");
                  mids$[mid_values_802962e782d8dab4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_BASIS = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_BASIS_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_PREV_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_REF_FRAME = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_TYPE = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeCovarianceHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_6fdf800dfc8ede24], a0.this$, a1.this$, a2.this$);
              }

              AttitudeCovarianceHistoryMetadataKey AttitudeCovarianceHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeCovarianceHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7c2e426ee9589283], a0.this$));
              }

              JArray< AttitudeCovarianceHistoryMetadataKey > AttitudeCovarianceHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeCovarianceHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_802962e782d8dab4]));
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
            namespace acm {
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_of_(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_process(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_get__parameters_(t_AttitudeCovarianceHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistoryMetadataKey)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeCovarianceHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistoryMetadataKey, t_AttitudeCovarianceHistoryMetadataKey, AttitudeCovarianceHistoryMetadataKey);
              PyObject *t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(const AttitudeCovarianceHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceHistoryMetadataKey *self = (t_AttitudeCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceHistoryMetadataKey *self = (t_AttitudeCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeCovarianceHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistoryMetadataKey), &PY_TYPE_DEF(AttitudeCovarianceHistoryMetadataKey), module, "AttitudeCovarianceHistoryMetadataKey", 0);
              }

              void t_AttitudeCovarianceHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "class_", make_descriptor(AttitudeCovarianceHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeCovarianceHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COMMENT", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_BASIS", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_BASIS_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_PREV_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_REF_FRAME", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_TYPE", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_TYPE)));
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(AttitudeCovarianceHistoryMetadataKey(((t_AttitudeCovarianceHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_of_(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_process(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeCovarianceHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadataKey::valueOf(a0));
                  return t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< AttitudeCovarianceHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_get__parameters_(t_AttitudeCovarianceHistoryMetadataKey *self, void *data)
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
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *SumOfSquares::class$ = NULL;
          jmethodID *SumOfSquares::mids$ = NULL;
          bool SumOfSquares::live$ = false;

          jclass SumOfSquares::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/SumOfSquares");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_95603f11d6fc6064] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/SumOfSquares;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_d9c42fff0f69ba3e] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/SumOfSquares;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SumOfSquares::SumOfSquares() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void SumOfSquares::aggregate(const SumOfSquares & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_95603f11d6fc6064], a0.this$);
          }

          void SumOfSquares::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          SumOfSquares SumOfSquares::copy() const
          {
            return SumOfSquares(env->callObjectMethod(this$, mids$[mid_copy_d9c42fff0f69ba3e]));
          }

          jdouble SumOfSquares::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jlong SumOfSquares::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble SumOfSquares::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void SumOfSquares::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
    namespace stat {
      namespace descriptive {
        namespace summary {
          static PyObject *t_SumOfSquares_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SumOfSquares_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SumOfSquares_init_(t_SumOfSquares *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SumOfSquares_aggregate(t_SumOfSquares *self, PyObject *arg);
          static PyObject *t_SumOfSquares_clear(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_copy(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_evaluate(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_getN(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_getResult(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_increment(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_get__n(t_SumOfSquares *self, void *data);
          static PyObject *t_SumOfSquares_get__result(t_SumOfSquares *self, void *data);
          static PyGetSetDef t_SumOfSquares__fields_[] = {
            DECLARE_GET_FIELD(t_SumOfSquares, n),
            DECLARE_GET_FIELD(t_SumOfSquares, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SumOfSquares__methods_[] = {
            DECLARE_METHOD(t_SumOfSquares, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfSquares, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfSquares, aggregate, METH_O),
            DECLARE_METHOD(t_SumOfSquares, clear, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, copy, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, getN, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SumOfSquares)[] = {
            { Py_tp_methods, t_SumOfSquares__methods_ },
            { Py_tp_init, (void *) t_SumOfSquares_init_ },
            { Py_tp_getset, t_SumOfSquares__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SumOfSquares)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SumOfSquares, t_SumOfSquares, SumOfSquares);

          void t_SumOfSquares::install(PyObject *module)
          {
            installType(&PY_TYPE(SumOfSquares), &PY_TYPE_DEF(SumOfSquares), module, "SumOfSquares", 0);
          }

          void t_SumOfSquares::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "class_", make_descriptor(SumOfSquares::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "wrapfn_", make_descriptor(t_SumOfSquares::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SumOfSquares_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SumOfSquares::initializeClass, 1)))
              return NULL;
            return t_SumOfSquares::wrap_Object(SumOfSquares(((t_SumOfSquares *) arg)->object.this$));
          }
          static PyObject *t_SumOfSquares_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SumOfSquares::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SumOfSquares_init_(t_SumOfSquares *self, PyObject *args, PyObject *kwds)
          {
            SumOfSquares object((jobject) NULL);

            INT_CALL(object = SumOfSquares());
            self->object = object;

            return 0;
          }

          static PyObject *t_SumOfSquares_aggregate(t_SumOfSquares *self, PyObject *arg)
          {
            SumOfSquares a0((jobject) NULL);

            if (!parseArg(arg, "k", SumOfSquares::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SumOfSquares_clear(t_SumOfSquares *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SumOfSquares_copy(t_SumOfSquares *self, PyObject *args)
          {
            SumOfSquares result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SumOfSquares::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SumOfSquares_evaluate(t_SumOfSquares *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SumOfSquares_getN(t_SumOfSquares *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_SumOfSquares_getResult(t_SumOfSquares *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SumOfSquares_increment(t_SumOfSquares *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SumOfSquares_get__n(t_SumOfSquares *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_SumOfSquares_get__result(t_SumOfSquares *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/MultistepFieldIntegrator.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *MultistepFieldIntegrator::class$ = NULL;
      jmethodID *MultistepFieldIntegrator::mids$ = NULL;
      bool MultistepFieldIntegrator::live$ = false;

      jclass MultistepFieldIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/MultistepFieldIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxGrowth_557b8123390d8d0c] = env->getMethodID(cls, "getMaxGrowth", "()D");
          mids$[mid_getMinReduction_557b8123390d8d0c] = env->getMethodID(cls, "getMinReduction", "()D");
          mids$[mid_getNSteps_412668abc8d889e9] = env->getMethodID(cls, "getNSteps", "()I");
          mids$[mid_getSafety_557b8123390d8d0c] = env->getMethodID(cls, "getSafety", "()D");
          mids$[mid_getStarterIntegrator_7ec434f55655b6ee] = env->getMethodID(cls, "getStarterIntegrator", "()Lorg/hipparchus/ode/FieldODEIntegrator;");
          mids$[mid_setMaxGrowth_10f281d777284cea] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
          mids$[mid_setMinReduction_10f281d777284cea] = env->getMethodID(cls, "setMinReduction", "(D)V");
          mids$[mid_setSafety_10f281d777284cea] = env->getMethodID(cls, "setSafety", "(D)V");
          mids$[mid_setStarterIntegrator_6ab3c20943a28a6d] = env->getMethodID(cls, "setStarterIntegrator", "(Lorg/hipparchus/ode/FieldODEIntegrator;)V");
          mids$[mid_rescale_1ee4bed350fde589] = env->getMethodID(cls, "rescale", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_initializeHighOrderDerivatives_688ff0660b77c6d1] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_computeStepGrowShrinkFactor_7e960cd6eee376d8] = env->getMethodID(cls, "computeStepGrowShrinkFactor", "(D)D");
          mids$[mid_start_9f9103ba16e9c6ab] = env->getMethodID(cls, "start", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultistepFieldIntegrator::getMaxGrowth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_557b8123390d8d0c]);
      }

      jdouble MultistepFieldIntegrator::getMinReduction() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinReduction_557b8123390d8d0c]);
      }

      jint MultistepFieldIntegrator::getNSteps() const
      {
        return env->callIntMethod(this$, mids$[mid_getNSteps_412668abc8d889e9]);
      }

      jdouble MultistepFieldIntegrator::getSafety() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSafety_557b8123390d8d0c]);
      }

      ::org::hipparchus::ode::FieldODEIntegrator MultistepFieldIntegrator::getStarterIntegrator() const
      {
        return ::org::hipparchus::ode::FieldODEIntegrator(env->callObjectMethod(this$, mids$[mid_getStarterIntegrator_7ec434f55655b6ee]));
      }

      void MultistepFieldIntegrator::setMaxGrowth(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxGrowth_10f281d777284cea], a0);
      }

      void MultistepFieldIntegrator::setMinReduction(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinReduction_10f281d777284cea], a0);
      }

      void MultistepFieldIntegrator::setSafety(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSafety_10f281d777284cea], a0);
      }

      void MultistepFieldIntegrator::setStarterIntegrator(const ::org::hipparchus::ode::FieldODEIntegrator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStarterIntegrator_6ab3c20943a28a6d], a0.this$);
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
      static PyObject *t_MultistepFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_of_(t_MultistepFieldIntegrator *self, PyObject *args);
      static PyObject *t_MultistepFieldIntegrator_getMaxGrowth(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getMinReduction(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getNSteps(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getSafety(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getStarterIntegrator(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_setMaxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setMinReduction(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setSafety(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setStarterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_get__maxGrowth(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__maxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__minReduction(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__minReduction(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__nSteps(t_MultistepFieldIntegrator *self, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__safety(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__safety(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__starterIntegrator(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__starterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__parameters_(t_MultistepFieldIntegrator *self, void *data);
      static PyGetSetDef t_MultistepFieldIntegrator__fields_[] = {
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, maxGrowth),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, minReduction),
        DECLARE_GET_FIELD(t_MultistepFieldIntegrator, nSteps),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, safety),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, starterIntegrator),
        DECLARE_GET_FIELD(t_MultistepFieldIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultistepFieldIntegrator__methods_[] = {
        DECLARE_METHOD(t_MultistepFieldIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getMaxGrowth, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getMinReduction, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getNSteps, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getSafety, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getStarterIntegrator, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setMaxGrowth, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setMinReduction, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setSafety, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setStarterIntegrator, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultistepFieldIntegrator)[] = {
        { Py_tp_methods, t_MultistepFieldIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultistepFieldIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultistepFieldIntegrator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator),
        NULL
      };

      DEFINE_TYPE(MultistepFieldIntegrator, t_MultistepFieldIntegrator, MultistepFieldIntegrator);
      PyObject *t_MultistepFieldIntegrator::wrap_Object(const MultistepFieldIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MultistepFieldIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MultistepFieldIntegrator *self = (t_MultistepFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MultistepFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MultistepFieldIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MultistepFieldIntegrator *self = (t_MultistepFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MultistepFieldIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultistepFieldIntegrator), &PY_TYPE_DEF(MultistepFieldIntegrator), module, "MultistepFieldIntegrator", 0);
      }

      void t_MultistepFieldIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "class_", make_descriptor(MultistepFieldIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "wrapfn_", make_descriptor(t_MultistepFieldIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultistepFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultistepFieldIntegrator::initializeClass, 1)))
          return NULL;
        return t_MultistepFieldIntegrator::wrap_Object(MultistepFieldIntegrator(((t_MultistepFieldIntegrator *) arg)->object.this$));
      }
      static PyObject *t_MultistepFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultistepFieldIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultistepFieldIntegrator_of_(t_MultistepFieldIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MultistepFieldIntegrator_getMaxGrowth(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getMinReduction(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinReduction());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getNSteps(t_MultistepFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNSteps());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getSafety(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSafety());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getStarterIntegrator(t_MultistepFieldIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEIntegrator result((jobject) NULL);
        OBJ_CALL(result = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_MultistepFieldIntegrator_setMaxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxGrowth(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setMinReduction(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinReduction(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setSafety(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setSafety(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setStarterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldODEIntegrator a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
        {
          OBJ_CALL(self->object.setStarterIntegrator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setStarterIntegrator", arg);
        return NULL;
      }
      static PyObject *t_MultistepFieldIntegrator_get__parameters_(t_MultistepFieldIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_MultistepFieldIntegrator_get__maxGrowth(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__maxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxGrowth(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__minReduction(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinReduction());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__minReduction(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinReduction(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__nSteps(t_MultistepFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNSteps());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultistepFieldIntegrator_get__safety(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSafety());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__safety(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setSafety(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "safety", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__starterIntegrator(t_MultistepFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEIntegrator value((jobject) NULL);
        OBJ_CALL(value = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(value);
      }
      static int t_MultistepFieldIntegrator_set__starterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::FieldODEIntegrator value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &value))
          {
            INT_CALL(self->object.setStarterIntegrator(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "starterIntegrator", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedField.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedField::class$ = NULL;
      jmethodID *TimeStampedField::mids$ = NULL;
      bool TimeStampedField::live$ = false;

      jclass TimeStampedField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d5f4c75911571e7f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_a4d7862fdbde3885] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getValue_613c8f46c659f636] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedField::TimeStampedField(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5f4c75911571e7f, a0.this$, a1.this$)) {}

      TimeStampedField::TimeStampedField(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a4d7862fdbde3885, a0.this$, a1.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate TimeStampedField::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
      }

      ::org::hipparchus::CalculusFieldElement TimeStampedField::getValue() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_613c8f46c659f636]));
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
      static PyObject *t_TimeStampedField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedField_of_(t_TimeStampedField *self, PyObject *args);
      static int t_TimeStampedField_init_(t_TimeStampedField *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedField_getDate(t_TimeStampedField *self);
      static PyObject *t_TimeStampedField_getValue(t_TimeStampedField *self);
      static PyObject *t_TimeStampedField_get__date(t_TimeStampedField *self, void *data);
      static PyObject *t_TimeStampedField_get__value(t_TimeStampedField *self, void *data);
      static PyObject *t_TimeStampedField_get__parameters_(t_TimeStampedField *self, void *data);
      static PyGetSetDef t_TimeStampedField__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedField, date),
        DECLARE_GET_FIELD(t_TimeStampedField, value),
        DECLARE_GET_FIELD(t_TimeStampedField, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedField__methods_[] = {
        DECLARE_METHOD(t_TimeStampedField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedField, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedField, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedField, getValue, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedField)[] = {
        { Py_tp_methods, t_TimeStampedField__methods_ },
        { Py_tp_init, (void *) t_TimeStampedField_init_ },
        { Py_tp_getset, t_TimeStampedField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedField, t_TimeStampedField, TimeStampedField);
      PyObject *t_TimeStampedField::wrap_Object(const TimeStampedField& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedField::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedField *self = (t_TimeStampedField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedField::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedField::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedField *self = (t_TimeStampedField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedField::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedField), &PY_TYPE_DEF(TimeStampedField), module, "TimeStampedField", 0);
      }

      void t_TimeStampedField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "class_", make_descriptor(TimeStampedField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "wrapfn_", make_descriptor(t_TimeStampedField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedField::initializeClass, 1)))
          return NULL;
        return t_TimeStampedField::wrap_Object(TimeStampedField(((t_TimeStampedField *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedField_of_(t_TimeStampedField *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedField_init_(t_TimeStampedField *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            TimeStampedField object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedField(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedField object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              INT_CALL(object = TimeStampedField(a0, a1));
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

      static PyObject *t_TimeStampedField_getDate(t_TimeStampedField *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedField_getValue(t_TimeStampedField *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_TimeStampedField_get__parameters_(t_TimeStampedField *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedField_get__date(t_TimeStampedField *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedField_get__value(t_TimeStampedField *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *SBASPropagatorBuilder::class$ = NULL;
          jmethodID *SBASPropagatorBuilder::mids$ = NULL;
          bool SBASPropagatorBuilder::live$ = false;

          jclass SBASPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87df8357a61486e2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;)V");
              mids$[mid_init$_4c7e21fae59e307a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;Lorg/orekit/frames/Frames;)V");
              mids$[mid_attitudeProvider_9a3d3b897b0e774d] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_build_21e9d28a362393d1] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
              mids$[mid_ecef_241de516bb56d0cf] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_eci_241de516bb56d0cf] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_mass_ed67a0d366e1e069] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_mu_ed67a0d366e1e069] = env->getMethodID(cls, "mu", "(D)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SBASPropagatorBuilder::SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87df8357a61486e2, a0.this$)) {}

          SBASPropagatorBuilder::SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements & a0, const ::org::orekit::frames::Frames & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c7e21fae59e307a, a0.this$, a1.this$)) {}

          SBASPropagatorBuilder SBASPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_9a3d3b897b0e774d], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_build_21e9d28a362393d1]));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_241de516bb56d0cf], a0.this$));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_241de516bb56d0cf], a0.this$));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::mass(jdouble a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_ed67a0d366e1e069], a0));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::mu(jdouble a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mu_ed67a0d366e1e069], a0));
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
        namespace gnss {
          static PyObject *t_SBASPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SBASPropagatorBuilder_init_(t_SBASPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SBASPropagatorBuilder_attitudeProvider(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_build(t_SBASPropagatorBuilder *self);
          static PyObject *t_SBASPropagatorBuilder_ecef(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_eci(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_mass(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_mu(t_SBASPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_SBASPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_SBASPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, mass, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, mu, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SBASPropagatorBuilder)[] = {
            { Py_tp_methods, t_SBASPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_SBASPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SBASPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SBASPropagatorBuilder, t_SBASPropagatorBuilder, SBASPropagatorBuilder);

          void t_SBASPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(SBASPropagatorBuilder), &PY_TYPE_DEF(SBASPropagatorBuilder), module, "SBASPropagatorBuilder", 0);
          }

          void t_SBASPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "class_", make_descriptor(SBASPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "wrapfn_", make_descriptor(t_SBASPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SBASPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SBASPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_SBASPropagatorBuilder::wrap_Object(SBASPropagatorBuilder(((t_SBASPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_SBASPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SBASPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SBASPropagatorBuilder_init_(t_SBASPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements a0((jobject) NULL);
                SBASPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = SBASPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements a0((jobject) NULL);
                ::org::orekit::frames::Frames a1((jobject) NULL);
                SBASPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SBASPropagatorBuilder(a0, a1));
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

          static PyObject *t_SBASPropagatorBuilder_attitudeProvider(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_build(t_SBASPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
          }

          static PyObject *t_SBASPropagatorBuilder_ecef(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_eci(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_mass(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_mu(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mu(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *GlonassUserRangeAccuracy::class$ = NULL;
            jmethodID *GlonassUserRangeAccuracy::mids$ = NULL;
            bool GlonassUserRangeAccuracy::live$ = false;

            jclass GlonassUserRangeAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GlonassUserRangeAccuracy::GlonassUserRangeAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            jdouble GlonassUserRangeAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_557b8123390d8d0c]);
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
            static PyObject *t_GlonassUserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GlonassUserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GlonassUserRangeAccuracy_init_(t_GlonassUserRangeAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GlonassUserRangeAccuracy_getAccuracy(t_GlonassUserRangeAccuracy *self);
            static PyObject *t_GlonassUserRangeAccuracy_get__accuracy(t_GlonassUserRangeAccuracy *self, void *data);
            static PyGetSetDef t_GlonassUserRangeAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_GlonassUserRangeAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GlonassUserRangeAccuracy__methods_[] = {
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GlonassUserRangeAccuracy)[] = {
              { Py_tp_methods, t_GlonassUserRangeAccuracy__methods_ },
              { Py_tp_init, (void *) t_GlonassUserRangeAccuracy_init_ },
              { Py_tp_getset, t_GlonassUserRangeAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GlonassUserRangeAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GlonassUserRangeAccuracy, t_GlonassUserRangeAccuracy, GlonassUserRangeAccuracy);

            void t_GlonassUserRangeAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(GlonassUserRangeAccuracy), &PY_TYPE_DEF(GlonassUserRangeAccuracy), module, "GlonassUserRangeAccuracy", 0);
            }

            void t_GlonassUserRangeAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "class_", make_descriptor(GlonassUserRangeAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "wrapfn_", make_descriptor(t_GlonassUserRangeAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GlonassUserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GlonassUserRangeAccuracy::initializeClass, 1)))
                return NULL;
              return t_GlonassUserRangeAccuracy::wrap_Object(GlonassUserRangeAccuracy(((t_GlonassUserRangeAccuracy *) arg)->object.this$));
            }
            static PyObject *t_GlonassUserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GlonassUserRangeAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GlonassUserRangeAccuracy_init_(t_GlonassUserRangeAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              GlonassUserRangeAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = GlonassUserRangeAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GlonassUserRangeAccuracy_getAccuracy(t_GlonassUserRangeAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GlonassUserRangeAccuracy_get__accuracy(t_GlonassUserRangeAccuracy *self, void *data)
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
#include "org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *PythonDiscreteTroposphericModel::class$ = NULL;
          jmethodID *PythonDiscreteTroposphericModel::mids$ = NULL;
          bool PythonDiscreteTroposphericModel::live$ = false;

          jclass PythonDiscreteTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParameters_a53a7513ecedada2] = env->getMethodID(cls, "getParameters", "()[D");
              mids$[mid_getParameters_4ab353685404cfce] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_129678f244f63094] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_a4fdd877b349d4a6] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDiscreteTroposphericModel::PythonDiscreteTroposphericModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonDiscreteTroposphericModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonDiscreteTroposphericModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonDiscreteTroposphericModel::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonDiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDiscreteTroposphericModel_init_(t_PythonDiscreteTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDiscreteTroposphericModel_finalize(t_PythonDiscreteTroposphericModel *self);
          static PyObject *t_PythonDiscreteTroposphericModel_pythonExtension(t_PythonDiscreteTroposphericModel *self, PyObject *args);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
          static jdouble JNICALL t_PythonDiscreteTroposphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2, jobject a3);
          static void JNICALL t_PythonDiscreteTroposphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDiscreteTroposphericModel_get__self(t_PythonDiscreteTroposphericModel *self, void *data);
          static PyGetSetDef t_PythonDiscreteTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDiscreteTroposphericModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDiscreteTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDiscreteTroposphericModel)[] = {
            { Py_tp_methods, t_PythonDiscreteTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_PythonDiscreteTroposphericModel_init_ },
            { Py_tp_getset, t_PythonDiscreteTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDiscreteTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDiscreteTroposphericModel, t_PythonDiscreteTroposphericModel, PythonDiscreteTroposphericModel);

          void t_PythonDiscreteTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDiscreteTroposphericModel), &PY_TYPE_DEF(PythonDiscreteTroposphericModel), module, "PythonDiscreteTroposphericModel", 1);
          }

          void t_PythonDiscreteTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "class_", make_descriptor(PythonDiscreteTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "wrapfn_", make_descriptor(t_PythonDiscreteTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDiscreteTroposphericModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getParameters", "()[D", (void *) t_PythonDiscreteTroposphericModel_getParameters0 },
              { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDiscreteTroposphericModel_getParameters1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDiscreteTroposphericModel_getParametersDrivers2 },
              { "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDiscreteTroposphericModel_pathDelay3 },
              { "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDiscreteTroposphericModel_pathDelay4 },
              { "pythonDecRef", "()V", (void *) t_PythonDiscreteTroposphericModel_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonDiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDiscreteTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_PythonDiscreteTroposphericModel::wrap_Object(PythonDiscreteTroposphericModel(((t_PythonDiscreteTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_PythonDiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDiscreteTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDiscreteTroposphericModel_init_(t_PythonDiscreteTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            PythonDiscreteTroposphericModel object((jobject) NULL);

            INT_CALL(object = PythonDiscreteTroposphericModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDiscreteTroposphericModel_finalize(t_PythonDiscreteTroposphericModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDiscreteTroposphericModel_pythonExtension(t_PythonDiscreteTroposphericModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_9e26256fb0d384a2]);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *o1 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOOO", o0, o1, o2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("pathDelay", result);
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

          static jdouble JNICALL t_PythonDiscreteTroposphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *o2 = JArray<jdouble>(a2).wrap();
            PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "dOOO", (double) a0, o1, o2, o3);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("pathDelay", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonDiscreteTroposphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDiscreteTroposphericModel_get__self(t_PythonDiscreteTroposphericModel *self, void *data)
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
#include "org/orekit/propagation/PythonFieldBoundedPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldBoundedPropagator::class$ = NULL;
      jmethodID *PythonFieldBoundedPropagator::mids$ = NULL;
      bool PythonFieldBoundedPropagator::live$ = false;

      jclass PythonFieldBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_1dbe9cc03f00d454] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_2ffeff0ffaf1deef] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_07866493eb3b3f17] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_381b3e011cde018d] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMaxDate_f1fe4daf77c66560] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMinDate_f1fe4daf77c66560] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMultiplexer_da8c64c8d63a3f9a] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_5324cbf9e5ce58fe] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_78f4b3ee8066e6b6] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldBoundedPropagator::PythonFieldBoundedPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldBoundedPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldBoundedPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldBoundedPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonFieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldBoundedPropagator_of_(t_PythonFieldBoundedPropagator *self, PyObject *args);
      static int t_PythonFieldBoundedPropagator_init_(t_PythonFieldBoundedPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldBoundedPropagator_finalize(t_PythonFieldBoundedPropagator *self);
      static PyObject *t_PythonFieldBoundedPropagator_pythonExtension(t_PythonFieldBoundedPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonFieldBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldBoundedPropagator_get__self(t_PythonFieldBoundedPropagator *self, void *data);
      static PyObject *t_PythonFieldBoundedPropagator_get__parameters_(t_PythonFieldBoundedPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldBoundedPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldBoundedPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldBoundedPropagator)[] = {
        { Py_tp_methods, t_PythonFieldBoundedPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldBoundedPropagator_init_ },
        { Py_tp_getset, t_PythonFieldBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldBoundedPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldBoundedPropagator, t_PythonFieldBoundedPropagator, PythonFieldBoundedPropagator);
      PyObject *t_PythonFieldBoundedPropagator::wrap_Object(const PythonFieldBoundedPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldBoundedPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldBoundedPropagator *self = (t_PythonFieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldBoundedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldBoundedPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldBoundedPropagator *self = (t_PythonFieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldBoundedPropagator), &PY_TYPE_DEF(PythonFieldBoundedPropagator), module, "PythonFieldBoundedPropagator", 1);
      }

      void t_PythonFieldBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "class_", make_descriptor(PythonFieldBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "wrapfn_", make_descriptor(t_PythonFieldBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldBoundedPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V", (void *) t_PythonFieldBoundedPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldBoundedPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldBoundedPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonFieldBoundedPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonFieldBoundedPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldBoundedPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldBoundedPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFieldBoundedPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonFieldBoundedPropagator_getManagedAdditionalStates9 },
          { "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldBoundedPropagator_getMaxDate10 },
          { "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldBoundedPropagator_getMinDate11 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;", (void *) t_PythonFieldBoundedPropagator_getMultiplexer12 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldBoundedPropagator_getPVCoordinates13 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonFieldBoundedPropagator_isAdditionalStateManaged14 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_propagate15 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_propagate16 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldBoundedPropagator_pythonDecRef17 },
          { "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldBoundedPropagator_resetInitialState18 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonFieldBoundedPropagator_setAttitudeProvider19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonFieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldBoundedPropagator::wrap_Object(PythonFieldBoundedPropagator(((t_PythonFieldBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldBoundedPropagator_of_(t_PythonFieldBoundedPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldBoundedPropagator_init_(t_PythonFieldBoundedPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldBoundedPropagator object((jobject) NULL);

        INT_CALL(object = PythonFieldBoundedPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldBoundedPropagator_finalize(t_PythonFieldBoundedPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldBoundedPropagator_pythonExtension(t_PythonFieldBoundedPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldAdditionalStateProvider::wrap_Object(::org::orekit::propagation::FieldAdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMaxDate", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMinDate", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
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

      static jboolean JNICALL t_PythonFieldBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonFieldBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonFieldBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonFieldBoundedPropagator_get__self(t_PythonFieldBoundedPropagator *self, void *data)
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
      static PyObject *t_PythonFieldBoundedPropagator_get__parameters_(t_PythonFieldBoundedPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbitBlender.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbitBlender::class$ = NULL;
      jmethodID *FieldOrbitBlender::mids$ = NULL;
      bool FieldOrbitBlender::live$ = false;

      jclass FieldOrbitBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbitBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e9daf8d337364749] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;Lorg/orekit/frames/Frame;)V");
          mids$[mid_interpolate_1240468fb80feea5] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldOrbitBlender::FieldOrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction & a0, const ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_e9daf8d337364749, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::orbits::FieldOrbit FieldOrbitBlender::interpolate(const ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData & a0) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_interpolate_1240468fb80feea5], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldOrbitBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitBlender_of_(t_FieldOrbitBlender *self, PyObject *args);
      static int t_FieldOrbitBlender_init_(t_FieldOrbitBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldOrbitBlender_interpolate(t_FieldOrbitBlender *self, PyObject *args);
      static PyObject *t_FieldOrbitBlender_get__parameters_(t_FieldOrbitBlender *self, void *data);
      static PyGetSetDef t_FieldOrbitBlender__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbitBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbitBlender__methods_[] = {
        DECLARE_METHOD(t_FieldOrbitBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitBlender, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbitBlender, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbitBlender)[] = {
        { Py_tp_methods, t_FieldOrbitBlender__methods_ },
        { Py_tp_init, (void *) t_FieldOrbitBlender_init_ },
        { Py_tp_getset, t_FieldOrbitBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbitBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractFieldOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldOrbitBlender, t_FieldOrbitBlender, FieldOrbitBlender);
      PyObject *t_FieldOrbitBlender::wrap_Object(const FieldOrbitBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitBlender *self = (t_FieldOrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbitBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitBlender *self = (t_FieldOrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbitBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbitBlender), &PY_TYPE_DEF(FieldOrbitBlender), module, "FieldOrbitBlender", 0);
      }

      void t_FieldOrbitBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "class_", make_descriptor(FieldOrbitBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "wrapfn_", make_descriptor(t_FieldOrbitBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbitBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbitBlender::initializeClass, 1)))
          return NULL;
        return t_FieldOrbitBlender::wrap_Object(FieldOrbitBlender(((t_FieldOrbitBlender *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbitBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbitBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbitBlender_of_(t_FieldOrbitBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldOrbitBlender_init_(t_FieldOrbitBlender *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        FieldOrbitBlender object((jobject) NULL);

        if (!parseArgs(args, "KKk", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction::initializeClass, ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::t_FieldAbstractAnalyticalPropagator::parameters_, &a2))
        {
          INT_CALL(object = FieldOrbitBlender(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldOrbitBlender_interpolate(t_FieldOrbitBlender *self, PyObject *args)
      {
        ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData::initializeClass, &a0, &p0, ::org::orekit::time::t_AbstractFieldTimeInterpolator$InterpolationData::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldOrbitBlender), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_FieldOrbitBlender_get__parameters_(t_FieldOrbitBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemSatelliteEphemeris::class$ = NULL;
              jmethodID *AemSatelliteEphemeris::mids$ = NULL;
              bool AemSatelliteEphemeris::live$ = false;

              jclass AemSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_013b264b441f07a2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
                  mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemSatelliteEphemeris::AemSatelliteEphemeris(const ::java::lang::String & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_013b264b441f07a2, a0.this$, a1.this$)) {}

              ::java::lang::String AemSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
              }

              ::java::util::List AemSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
              }

              ::org::orekit::time::AbsoluteDate AemSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate AemSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
            namespace aem {
              static PyObject *t_AemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemSatelliteEphemeris_init_(t_AemSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemSatelliteEphemeris_getId(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getSegments(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getStart(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getStop(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_get__id(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__segments(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__start(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__stop(t_AemSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_AemSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_AemSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemSatelliteEphemeris)[] = {
                { Py_tp_methods, t_AemSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_AemSatelliteEphemeris_init_ },
                { Py_tp_getset, t_AemSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AemSatelliteEphemeris, t_AemSatelliteEphemeris, AemSatelliteEphemeris);

              void t_AemSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(AemSatelliteEphemeris), &PY_TYPE_DEF(AemSatelliteEphemeris), module, "AemSatelliteEphemeris", 0);
              }

              void t_AemSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "class_", make_descriptor(AemSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "wrapfn_", make_descriptor(t_AemSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_AemSatelliteEphemeris::wrap_Object(AemSatelliteEphemeris(((t_AemSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_AemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemSatelliteEphemeris_init_(t_AemSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AemSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AemSatelliteEphemeris(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemSatelliteEphemeris_getId(t_AemSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AemSatelliteEphemeris_getSegments(t_AemSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment));
              }

              static PyObject *t_AemSatelliteEphemeris_getStart(t_AemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSatelliteEphemeris_getStop(t_AemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSatelliteEphemeris_get__id(t_AemSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__segments(t_AemSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__start(t_AemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__stop(t_AemSatelliteEphemeris *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/RungeKuttaIntegrator.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *RungeKuttaIntegrator::class$ = NULL;
        jmethodID *RungeKuttaIntegrator::mids$ = NULL;
        bool RungeKuttaIntegrator::live$ = false;

        jclass RungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/RungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDefaultStep_557b8123390d8d0c] = env->getMethodID(cls, "getDefaultStep", "()D");
            mids$[mid_integrate_7b1e7ccc98e27149] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_singleStep_ce20fc409e3571a8] = env->getMethodID(cls, "singleStep", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;D[DD)[D");
            mids$[mid_createInterpolator_11ab5d82310ecbfa] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble RungeKuttaIntegrator::getDefaultStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDefaultStep_557b8123390d8d0c]);
        }

        ::org::hipparchus::ode::ODEStateAndDerivative RungeKuttaIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7b1e7ccc98e27149], a0.this$, a1.this$, a2));
        }

        JArray< jdouble > RungeKuttaIntegrator::singleStep(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0, jdouble a1, const JArray< jdouble > & a2, jdouble a3) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_singleStep_ce20fc409e3571a8], a0.this$, a1, a2.this$, a3));
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
        static PyObject *t_RungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaIntegrator_getDefaultStep(t_RungeKuttaIntegrator *self);
        static PyObject *t_RungeKuttaIntegrator_integrate(t_RungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaIntegrator_singleStep(t_RungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaIntegrator_get__defaultStep(t_RungeKuttaIntegrator *self, void *data);
        static PyGetSetDef t_RungeKuttaIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_RungeKuttaIntegrator, defaultStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_RungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, getDefaultStep, METH_NOARGS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, singleStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_RungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractIntegrator),
          NULL
        };

        DEFINE_TYPE(RungeKuttaIntegrator, t_RungeKuttaIntegrator, RungeKuttaIntegrator);

        void t_RungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RungeKuttaIntegrator), &PY_TYPE_DEF(RungeKuttaIntegrator), module, "RungeKuttaIntegrator", 0);
        }

        void t_RungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "class_", make_descriptor(RungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "wrapfn_", make_descriptor(t_RungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_RungeKuttaIntegrator::wrap_Object(RungeKuttaIntegrator(((t_RungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RungeKuttaIntegrator_getDefaultStep(t_RungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDefaultStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RungeKuttaIntegrator_integrate(t_RungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(RungeKuttaIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_RungeKuttaIntegrator_singleStep(t_RungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
          jdouble a1;
          JArray< jdouble > a2((jobject) NULL);
          jdouble a3;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "kD[DD", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.singleStep(a0, a1, a2, a3));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "singleStep", args);
          return NULL;
        }

        static PyObject *t_RungeKuttaIntegrator_get__defaultStep(t_RungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDefaultStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultRealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultRealMatrixChangingVisitor::class$ = NULL;
      jmethodID *DefaultRealMatrixChangingVisitor::mids$ = NULL;
      bool DefaultRealMatrixChangingVisitor::live$ = false;

      jclass DefaultRealMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultRealMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_end_557b8123390d8d0c] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_b02282271d2e33e3] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_73f37cd0aafa4920] = env->getMethodID(cls, "visit", "(IID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultRealMatrixChangingVisitor::DefaultRealMatrixChangingVisitor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      jdouble DefaultRealMatrixChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_557b8123390d8d0c]);
      }

      void DefaultRealMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_b02282271d2e33e3], a0, a1, a2, a3, a4, a5);
      }

      jdouble DefaultRealMatrixChangingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_73f37cd0aafa4920], a0, a1, a2);
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
      static PyObject *t_DefaultRealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultRealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultRealMatrixChangingVisitor_init_(t_DefaultRealMatrixChangingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultRealMatrixChangingVisitor_end(t_DefaultRealMatrixChangingVisitor *self);
      static PyObject *t_DefaultRealMatrixChangingVisitor_start(t_DefaultRealMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultRealMatrixChangingVisitor_visit(t_DefaultRealMatrixChangingVisitor *self, PyObject *args);

      static PyMethodDef t_DefaultRealMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultRealMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_DefaultRealMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultRealMatrixChangingVisitor_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultRealMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultRealMatrixChangingVisitor, t_DefaultRealMatrixChangingVisitor, DefaultRealMatrixChangingVisitor);

      void t_DefaultRealMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultRealMatrixChangingVisitor), &PY_TYPE_DEF(DefaultRealMatrixChangingVisitor), module, "DefaultRealMatrixChangingVisitor", 0);
      }

      void t_DefaultRealMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "class_", make_descriptor(DefaultRealMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "wrapfn_", make_descriptor(t_DefaultRealMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultRealMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultRealMatrixChangingVisitor::wrap_Object(DefaultRealMatrixChangingVisitor(((t_DefaultRealMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultRealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultRealMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultRealMatrixChangingVisitor_init_(t_DefaultRealMatrixChangingVisitor *self, PyObject *args, PyObject *kwds)
      {
        DefaultRealMatrixChangingVisitor object((jobject) NULL);

        INT_CALL(object = DefaultRealMatrixChangingVisitor());
        self->object = object;

        return 0;
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_end(t_DefaultRealMatrixChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_start(t_DefaultRealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_visit(t_DefaultRealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GPSBlockIIF.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIF::class$ = NULL;
        jmethodID *GPSBlockIIF::mids$ = NULL;
        bool GPSBlockIIF::live$ = false;
        jdouble GPSBlockIIF::DEFAULT_YAW_BIAS = (jdouble) 0;
        jdouble GPSBlockIIF::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass GPSBlockIIF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_edf894401b24faef] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_2a43991494de952e] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_c46751716d57fe1f] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_BIAS = env->getStaticDoubleField(cls, "DEFAULT_YAW_BIAS");
            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIF::GPSBlockIIF(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_edf894401b24faef, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}
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
        static PyObject *t_GPSBlockIIF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIF_init_(t_GPSBlockIIF *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GPSBlockIIF__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIF, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIF)[] = {
          { Py_tp_methods, t_GPSBlockIIF__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIF_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIF)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIF, t_GPSBlockIIF, GPSBlockIIF);

        void t_GPSBlockIIF::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIF), &PY_TYPE_DEF(GPSBlockIIF), module, "GPSBlockIIF", 0);
        }

        void t_GPSBlockIIF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "class_", make_descriptor(GPSBlockIIF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "wrapfn_", make_descriptor(t_GPSBlockIIF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIF::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "DEFAULT_YAW_BIAS", make_descriptor(GPSBlockIIF::DEFAULT_YAW_BIAS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "DEFAULT_YAW_RATE", make_descriptor(GPSBlockIIF::DEFAULT_YAW_RATE));
        }

        static PyObject *t_GPSBlockIIF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIF::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIF::wrap_Object(GPSBlockIIF(((t_GPSBlockIIF *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIF_init_(t_GPSBlockIIF *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          GPSBlockIIF object((jobject) NULL);

          if (!parseArgs(args, "DDkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GPSBlockIIF(a0, a1, a2, a3, a4, a5));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/StableRandomGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *StableRandomGenerator::class$ = NULL;
      jmethodID *StableRandomGenerator::mids$ = NULL;
      bool StableRandomGenerator::live$ = false;

      jclass StableRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/StableRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7264f2f4bdb6e6d3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;DD)V");
          mids$[mid_nextNormalizedDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StableRandomGenerator::StableRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7264f2f4bdb6e6d3, a0.this$, a1, a2)) {}

      jdouble StableRandomGenerator::nextNormalizedDouble() const
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
      static PyObject *t_StableRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StableRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StableRandomGenerator_init_(t_StableRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StableRandomGenerator_nextNormalizedDouble(t_StableRandomGenerator *self);

      static PyMethodDef t_StableRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_StableRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StableRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StableRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StableRandomGenerator)[] = {
        { Py_tp_methods, t_StableRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_StableRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StableRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StableRandomGenerator, t_StableRandomGenerator, StableRandomGenerator);

      void t_StableRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(StableRandomGenerator), &PY_TYPE_DEF(StableRandomGenerator), module, "StableRandomGenerator", 0);
      }

      void t_StableRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "class_", make_descriptor(StableRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "wrapfn_", make_descriptor(t_StableRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StableRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StableRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_StableRandomGenerator::wrap_Object(StableRandomGenerator(((t_StableRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_StableRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StableRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StableRandomGenerator_init_(t_StableRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        StableRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = StableRandomGenerator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_StableRandomGenerator_nextNormalizedDouble(t_StableRandomGenerator *self)
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
#include "org/hipparchus/geometry/enclosing/WelzlEncloser.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/enclosing/Encloser.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *WelzlEncloser::class$ = NULL;
        jmethodID *WelzlEncloser::mids$ = NULL;
        bool WelzlEncloser::live$ = false;

        jclass WelzlEncloser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/WelzlEncloser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4145f8cd9fce66eb] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/enclosing/SupportBallGenerator;)V");
            mids$[mid_enclose_60fb4b68643b7fe8] = env->getMethodID(cls, "enclose", "(Ljava/lang/Iterable;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");
            mids$[mid_selectFarthest_63e86bafde776ef6] = env->getMethodID(cls, "selectFarthest", "(Ljava/lang/Iterable;Lorg/hipparchus/geometry/enclosing/EnclosingBall;)Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WelzlEncloser::WelzlEncloser(jdouble a0, const ::org::hipparchus::geometry::enclosing::SupportBallGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4145f8cd9fce66eb, a0, a1.this$)) {}

        ::org::hipparchus::geometry::enclosing::EnclosingBall WelzlEncloser::enclose(const ::java::lang::Iterable & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_enclose_60fb4b68643b7fe8], a0.this$));
        }

        ::org::hipparchus::geometry::Point WelzlEncloser::selectFarthest(const ::java::lang::Iterable & a0, const ::org::hipparchus::geometry::enclosing::EnclosingBall & a1) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_selectFarthest_63e86bafde776ef6], a0.this$, a1.this$));
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
      namespace enclosing {
        static PyObject *t_WelzlEncloser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WelzlEncloser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WelzlEncloser_of_(t_WelzlEncloser *self, PyObject *args);
        static int t_WelzlEncloser_init_(t_WelzlEncloser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WelzlEncloser_enclose(t_WelzlEncloser *self, PyObject *arg);
        static PyObject *t_WelzlEncloser_selectFarthest(t_WelzlEncloser *self, PyObject *args);
        static PyObject *t_WelzlEncloser_get__parameters_(t_WelzlEncloser *self, void *data);
        static PyGetSetDef t_WelzlEncloser__fields_[] = {
          DECLARE_GET_FIELD(t_WelzlEncloser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_WelzlEncloser__methods_[] = {
          DECLARE_METHOD(t_WelzlEncloser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WelzlEncloser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WelzlEncloser, of_, METH_VARARGS),
          DECLARE_METHOD(t_WelzlEncloser, enclose, METH_O),
          DECLARE_METHOD(t_WelzlEncloser, selectFarthest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WelzlEncloser)[] = {
          { Py_tp_methods, t_WelzlEncloser__methods_ },
          { Py_tp_init, (void *) t_WelzlEncloser_init_ },
          { Py_tp_getset, t_WelzlEncloser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WelzlEncloser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WelzlEncloser, t_WelzlEncloser, WelzlEncloser);
        PyObject *t_WelzlEncloser::wrap_Object(const WelzlEncloser& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_WelzlEncloser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_WelzlEncloser *self = (t_WelzlEncloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_WelzlEncloser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_WelzlEncloser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_WelzlEncloser *self = (t_WelzlEncloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_WelzlEncloser::install(PyObject *module)
        {
          installType(&PY_TYPE(WelzlEncloser), &PY_TYPE_DEF(WelzlEncloser), module, "WelzlEncloser", 0);
        }

        void t_WelzlEncloser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WelzlEncloser), "class_", make_descriptor(WelzlEncloser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WelzlEncloser), "wrapfn_", make_descriptor(t_WelzlEncloser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WelzlEncloser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WelzlEncloser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WelzlEncloser::initializeClass, 1)))
            return NULL;
          return t_WelzlEncloser::wrap_Object(WelzlEncloser(((t_WelzlEncloser *) arg)->object.this$));
        }
        static PyObject *t_WelzlEncloser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WelzlEncloser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_WelzlEncloser_of_(t_WelzlEncloser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_WelzlEncloser_init_(t_WelzlEncloser *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::hipparchus::geometry::enclosing::SupportBallGenerator a1((jobject) NULL);
          PyTypeObject **p1;
          WelzlEncloser object((jobject) NULL);

          if (!parseArgs(args, "DK", ::org::hipparchus::geometry::enclosing::SupportBallGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::enclosing::t_SupportBallGenerator::parameters_))
          {
            INT_CALL(object = WelzlEncloser(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_WelzlEncloser_enclose(t_WelzlEncloser *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.enclose(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "enclose", arg);
          return NULL;
        }

        static PyObject *t_WelzlEncloser_selectFarthest(t_WelzlEncloser *self, PyObject *args)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::lang::Iterable::initializeClass, ::org::hipparchus::geometry::enclosing::EnclosingBall::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_, &a1, &p1, ::org::hipparchus::geometry::enclosing::t_EnclosingBall::parameters_))
          {
            OBJ_CALL(result = self->object.selectFarthest(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::geometry::t_Point::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "selectFarthest", args);
          return NULL;
        }
        static PyObject *t_WelzlEncloser_get__parameters_(t_WelzlEncloser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NavigationSystem::class$ = NULL;
          jmethodID *NavigationSystem::mids$ = NULL;
          bool NavigationSystem::live$ = false;
          NavigationSystem *NavigationSystem::BDS = NULL;
          NavigationSystem *NavigationSystem::EMPTY = NULL;
          NavigationSystem *NavigationSystem::GAL = NULL;
          NavigationSystem *NavigationSystem::GLO = NULL;
          NavigationSystem *NavigationSystem::GPS = NULL;
          NavigationSystem *NavigationSystem::QZS = NULL;
          NavigationSystem *NavigationSystem::SBAS = NULL;

          jclass NavigationSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NavigationSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNavigationSystem_eae3ad692c83727b] = env->getStaticMethodID(cls, "getNavigationSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_valueOf_eae3ad692c83727b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");
              mids$[mid_values_9f5a969911311e6e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BDS = new NavigationSystem(env->getStaticObjectField(cls, "BDS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              EMPTY = new NavigationSystem(env->getStaticObjectField(cls, "EMPTY", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GAL = new NavigationSystem(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GLO = new NavigationSystem(env->getStaticObjectField(cls, "GLO", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GPS = new NavigationSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              QZS = new NavigationSystem(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              SBAS = new NavigationSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NavigationSystem NavigationSystem::getNavigationSystem(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return NavigationSystem(env->callStaticObjectMethod(cls, mids$[mid_getNavigationSystem_eae3ad692c83727b], a0.this$));
          }

          ::java::lang::String NavigationSystem::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
          }

          NavigationSystem NavigationSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return NavigationSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_eae3ad692c83727b], a0.this$));
          }

          JArray< NavigationSystem > NavigationSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< NavigationSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_9f5a969911311e6e]));
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
          static PyObject *t_NavigationSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_of_(t_NavigationSystem *self, PyObject *args);
          static PyObject *t_NavigationSystem_getNavigationSystem(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_toString(t_NavigationSystem *self, PyObject *args);
          static PyObject *t_NavigationSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_NavigationSystem_values(PyTypeObject *type);
          static PyObject *t_NavigationSystem_get__parameters_(t_NavigationSystem *self, void *data);
          static PyGetSetDef t_NavigationSystem__fields_[] = {
            DECLARE_GET_FIELD(t_NavigationSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NavigationSystem__methods_[] = {
            DECLARE_METHOD(t_NavigationSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_NavigationSystem, getNavigationSystem, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, toString, METH_VARARGS),
            DECLARE_METHOD(t_NavigationSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NavigationSystem)[] = {
            { Py_tp_methods, t_NavigationSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NavigationSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NavigationSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(NavigationSystem, t_NavigationSystem, NavigationSystem);
          PyObject *t_NavigationSystem::wrap_Object(const NavigationSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NavigationSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NavigationSystem *self = (t_NavigationSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NavigationSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NavigationSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NavigationSystem *self = (t_NavigationSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NavigationSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(NavigationSystem), &PY_TYPE_DEF(NavigationSystem), module, "NavigationSystem", 0);
          }

          void t_NavigationSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "class_", make_descriptor(NavigationSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "wrapfn_", make_descriptor(t_NavigationSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(NavigationSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "BDS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::BDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "EMPTY", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::EMPTY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GAL", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GLO", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GLO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GPS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "QZS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::QZS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "SBAS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::SBAS)));
          }

          static PyObject *t_NavigationSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NavigationSystem::initializeClass, 1)))
              return NULL;
            return t_NavigationSystem::wrap_Object(NavigationSystem(((t_NavigationSystem *) arg)->object.this$));
          }
          static PyObject *t_NavigationSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NavigationSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NavigationSystem_of_(t_NavigationSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NavigationSystem_getNavigationSystem(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            NavigationSystem result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::getNavigationSystem(a0));
              return t_NavigationSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNavigationSystem", arg);
            return NULL;
          }

          static PyObject *t_NavigationSystem_toString(t_NavigationSystem *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(NavigationSystem), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_NavigationSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            NavigationSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::valueOf(a0));
              return t_NavigationSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_NavigationSystem_values(PyTypeObject *type)
          {
            JArray< NavigationSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::values());
            return JArray<jobject>(result.this$).wrap(t_NavigationSystem::wrap_jobject);
          }
          static PyObject *t_NavigationSystem_get__parameters_(t_NavigationSystem *self, void *data)
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
#include "org/orekit/estimation/sequential/AbstractKalmanEstimator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *AbstractKalmanEstimator::class$ = NULL;
        jmethodID *AbstractKalmanEstimator::mids$ = NULL;
        bool AbstractKalmanEstimator::live$ = false;

        jclass AbstractKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/AbstractKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getOrbitalParametersDrivers_4f6dd8cf21dd8817] = env->getMethodID(cls, "getOrbitalParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_75d50d73180655b4] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPropagationParametersDrivers_4f6dd8cf21dd8817] = env->getMethodID(cls, "getPropagationParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getKalmanEstimation_32faeba2996c6566] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate AbstractKalmanEstimator::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_7a97f7e149e79afb]));
        }

        jint AbstractKalmanEstimator::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getOrbitalParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_4f6dd8cf21dd8817], a0));
        }

        ::org::hipparchus::linear::RealMatrix AbstractKalmanEstimator::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealVector AbstractKalmanEstimator::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_75d50d73180655b4]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getPropagationParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_4f6dd8cf21dd8817], a0));
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
        static PyObject *t_AbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_getCurrentDate(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getCurrentMeasurementNumber(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getEstimatedMeasurementsParameters(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getOrbitalParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedState(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getPropagationParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_get__currentDate(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__currentMeasurementNumber(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__estimatedMeasurementsParameters(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedState(t_AbstractKalmanEstimator *self, void *data);
        static PyGetSetDef t_AbstractKalmanEstimator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, currentDate),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, physicalEstimatedState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_AbstractKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getOrbitalParametersDrivers, METH_O),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPropagationParametersDrivers, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractKalmanEstimator)[] = {
          { Py_tp_methods, t_AbstractKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractKalmanEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractKalmanEstimator, t_AbstractKalmanEstimator, AbstractKalmanEstimator);

        void t_AbstractKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractKalmanEstimator), &PY_TYPE_DEF(AbstractKalmanEstimator), module, "AbstractKalmanEstimator", 0);
        }

        void t_AbstractKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "class_", make_descriptor(AbstractKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "wrapfn_", make_descriptor(t_AbstractKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_AbstractKalmanEstimator::wrap_Object(AbstractKalmanEstimator(((t_AbstractKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_AbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractKalmanEstimator_getCurrentDate(t_AbstractKalmanEstimator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getCurrentMeasurementNumber(t_AbstractKalmanEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractKalmanEstimator_getEstimatedMeasurementsParameters(t_AbstractKalmanEstimator *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getOrbitalParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getOrbitalParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOrbitalParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedState(t_AbstractKalmanEstimator *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getPropagationParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getPropagationParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagationParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_AbstractKalmanEstimator_get__currentDate(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__currentMeasurementNumber(t_AbstractKalmanEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__estimatedMeasurementsParameters(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedState(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TricubicInterpolatingFunction::class$ = NULL;
        jmethodID *TricubicInterpolatingFunction::mids$ = NULL;
        bool TricubicInterpolatingFunction::live$ = false;

        jclass TricubicInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_121a2aef88214875] = env->getMethodID(cls, "<init>", "([D[D[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D)V");
            mids$[mid_isValidPoint_3d7c70c33c048085] = env->getMethodID(cls, "isValidPoint", "(DDD)Z");
            mids$[mid_value_8d02ba458f22e508] = env->getMethodID(cls, "value", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TricubicInterpolatingFunction::TricubicInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3, const JArray< JArray< JArray< jdouble > > > & a4, const JArray< JArray< JArray< jdouble > > > & a5, const JArray< JArray< JArray< jdouble > > > & a6, const JArray< JArray< JArray< jdouble > > > & a7, const JArray< JArray< JArray< jdouble > > > & a8, const JArray< JArray< JArray< jdouble > > > & a9, const JArray< JArray< JArray< jdouble > > > & a10) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_121a2aef88214875, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$)) {}

        jboolean TricubicInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_3d7c70c33c048085], a0, a1, a2);
        }

        jdouble TricubicInterpolatingFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_8d02ba458f22e508], a0, a1, a2);
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
        static PyObject *t_TricubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TricubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TricubicInterpolatingFunction_init_(t_TricubicInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TricubicInterpolatingFunction_isValidPoint(t_TricubicInterpolatingFunction *self, PyObject *args);
        static PyObject *t_TricubicInterpolatingFunction_value(t_TricubicInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_TricubicInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_TricubicInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TricubicInterpolatingFunction)[] = {
          { Py_tp_methods, t_TricubicInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_TricubicInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TricubicInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TricubicInterpolatingFunction, t_TricubicInterpolatingFunction, TricubicInterpolatingFunction);

        void t_TricubicInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(TricubicInterpolatingFunction), &PY_TYPE_DEF(TricubicInterpolatingFunction), module, "TricubicInterpolatingFunction", 0);
        }

        void t_TricubicInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "class_", make_descriptor(TricubicInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "wrapfn_", make_descriptor(t_TricubicInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TricubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TricubicInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_TricubicInterpolatingFunction::wrap_Object(TricubicInterpolatingFunction(((t_TricubicInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_TricubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TricubicInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TricubicInterpolatingFunction_init_(t_TricubicInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a4((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a5((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a6((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a7((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a8((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a9((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a10((jobject) NULL);
          TricubicInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
          {
            INT_CALL(object = TricubicInterpolatingFunction(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TricubicInterpolatingFunction_isValidPoint(t_TricubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_TricubicInterpolatingFunction_value(t_TricubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2));
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *JacobiPolynomials::class$ = NULL;
            jmethodID *JacobiPolynomials::mids$ = NULL;
            bool JacobiPolynomials::live$ = false;

            jclass JacobiPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getValue_cf9cd6d4aea42e11] = env->getStaticMethodID(cls, "getValue", "(IIILorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
                mids$[mid_getValue_feba4baa7091dd05] = env->getStaticMethodID(cls, "getValue", "(IIILorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
                mids$[mid_getValueAndDerivative_de167a4ebcb09657] = env->getStaticMethodID(cls, "getValueAndDerivative", "(IIID)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::analysis::differentiation::FieldGradient JacobiPolynomials::getValue(jint a0, jint a1, jint a2, const ::org::hipparchus::analysis::differentiation::FieldGradient & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_getValue_cf9cd6d4aea42e11], a0, a1, a2, a3.this$));
            }

            ::org::hipparchus::analysis::differentiation::Gradient JacobiPolynomials::getValue(jint a0, jint a1, jint a2, const ::org::hipparchus::analysis::differentiation::Gradient & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::analysis::differentiation::Gradient(env->callStaticObjectMethod(cls, mids$[mid_getValue_feba4baa7091dd05], a0, a1, a2, a3.this$));
            }

            JArray< jdouble > JacobiPolynomials::getValueAndDerivative(jint a0, jint a1, jint a2, jdouble a3)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_getValueAndDerivative_de167a4ebcb09657], a0, a1, a2, a3));
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
            static PyObject *t_JacobiPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JacobiPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JacobiPolynomials_getValue(PyTypeObject *type, PyObject *args);
            static PyObject *t_JacobiPolynomials_getValueAndDerivative(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_JacobiPolynomials__methods_[] = {
              DECLARE_METHOD(t_JacobiPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, getValue, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, getValueAndDerivative, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(JacobiPolynomials)[] = {
              { Py_tp_methods, t_JacobiPolynomials__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(JacobiPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(JacobiPolynomials, t_JacobiPolynomials, JacobiPolynomials);

            void t_JacobiPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(JacobiPolynomials), &PY_TYPE_DEF(JacobiPolynomials), module, "JacobiPolynomials", 0);
            }

            void t_JacobiPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "class_", make_descriptor(JacobiPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "wrapfn_", make_descriptor(t_JacobiPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_JacobiPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, JacobiPolynomials::initializeClass, 1)))
                return NULL;
              return t_JacobiPolynomials::wrap_Object(JacobiPolynomials(((t_JacobiPolynomials *) arg)->object.this$));
            }
            static PyObject *t_JacobiPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, JacobiPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_JacobiPolynomials_getValue(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  ::org::hipparchus::analysis::differentiation::FieldGradient a3((jobject) NULL);
                  PyTypeObject **p3;
                  ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);

                  if (!parseArgs(args, "IIIK", ::org::hipparchus::analysis::differentiation::FieldGradient::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::analysis::differentiation::t_FieldGradient::parameters_))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValue(a0, a1, a2, a3));
                    return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result);
                  }
                }
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  ::org::hipparchus::analysis::differentiation::Gradient a3((jobject) NULL);
                  ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

                  if (!parseArgs(args, "IIIk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValue(a0, a1, a2, a3));
                    return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getValue", args);
              return NULL;
            }

            static PyObject *t_JacobiPolynomials_getValueAndDerivative(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble a3;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "IIID", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValueAndDerivative(a0, a1, a2, a3));
                return result.wrap();
              }

              PyErr_SetArgsError(type, "getValueAndDerivative", args);
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
            mids$[mid_aggregate_dd76cbfc149afa7e] = env->getStaticMethodID(cls, "aggregate", "([Lorg/hipparchus/stat/descriptive/StatisticalSummary;)Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_aggregate_ce28b77efd275ce0] = env->getStaticMethodID(cls, "aggregate", "(Ljava/lang/Iterable;)Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getMax_557b8123390d8d0c] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_557b8123390d8d0c] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_557b8123390d8d0c] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_557b8123390d8d0c] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_557b8123390d8d0c] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getVariance_557b8123390d8d0c] = env->getMethodID(cls, "getVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StatisticalSummary StatisticalSummary::aggregate(const JArray< StatisticalSummary > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StatisticalSummary(env->callStaticObjectMethod(cls, mids$[mid_aggregate_dd76cbfc149afa7e], a0.this$));
        }

        StatisticalSummary StatisticalSummary::aggregate(const ::java::lang::Iterable & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StatisticalSummary(env->callStaticObjectMethod(cls, mids$[mid_aggregate_ce28b77efd275ce0], a0.this$));
        }

        jdouble StatisticalSummary::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_557b8123390d8d0c]);
        }

        jdouble StatisticalSummary::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_557b8123390d8d0c]);
        }

        jdouble StatisticalSummary::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_557b8123390d8d0c]);
        }

        jlong StatisticalSummary::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        jdouble StatisticalSummary::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_557b8123390d8d0c]);
        }

        jdouble StatisticalSummary::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_557b8123390d8d0c]);
        }

        jdouble StatisticalSummary::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_557b8123390d8d0c]);
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
#include "org/orekit/models/earth/EarthStandardAtmosphereRefraction.h"
#include "java/lang/Class.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthStandardAtmosphereRefraction::class$ = NULL;
        jmethodID *EarthStandardAtmosphereRefraction::mids$ = NULL;
        bool EarthStandardAtmosphereRefraction::live$ = false;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_CORRECTION_FACTOR = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_PRESSURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_TEMPERATURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::STANDARD_ATM_PRESSURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::STANDARD_ATM_TEMPERATURE = (jdouble) 0;

        jclass EarthStandardAtmosphereRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthStandardAtmosphereRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getPressure_557b8123390d8d0c] = env->getMethodID(cls, "getPressure", "()D");
            mids$[mid_getRefraction_7e960cd6eee376d8] = env->getMethodID(cls, "getRefraction", "(D)D");
            mids$[mid_getTemperature_557b8123390d8d0c] = env->getMethodID(cls, "getTemperature", "()D");
            mids$[mid_setPressure_10f281d777284cea] = env->getMethodID(cls, "setPressure", "(D)V");
            mids$[mid_setTemperature_10f281d777284cea] = env->getMethodID(cls, "setTemperature", "(D)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_CORRECTION_FACTOR = env->getStaticDoubleField(cls, "DEFAULT_CORRECTION_FACTOR");
            DEFAULT_PRESSURE = env->getStaticDoubleField(cls, "DEFAULT_PRESSURE");
            DEFAULT_TEMPERATURE = env->getStaticDoubleField(cls, "DEFAULT_TEMPERATURE");
            STANDARD_ATM_PRESSURE = env->getStaticDoubleField(cls, "STANDARD_ATM_PRESSURE");
            STANDARD_ATM_TEMPERATURE = env->getStaticDoubleField(cls, "STANDARD_ATM_TEMPERATURE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EarthStandardAtmosphereRefraction::EarthStandardAtmosphereRefraction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        EarthStandardAtmosphereRefraction::EarthStandardAtmosphereRefraction(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble EarthStandardAtmosphereRefraction::getPressure() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPressure_557b8123390d8d0c]);
        }

        jdouble EarthStandardAtmosphereRefraction::getRefraction(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefraction_7e960cd6eee376d8], a0);
        }

        jdouble EarthStandardAtmosphereRefraction::getTemperature() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTemperature_557b8123390d8d0c]);
        }

        void EarthStandardAtmosphereRefraction::setPressure(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressure_10f281d777284cea], a0);
        }

        void EarthStandardAtmosphereRefraction::setTemperature(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTemperature_10f281d777284cea], a0);
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
        static PyObject *t_EarthStandardAtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EarthStandardAtmosphereRefraction_init_(t_EarthStandardAtmosphereRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EarthStandardAtmosphereRefraction_getPressure(t_EarthStandardAtmosphereRefraction *self);
        static PyObject *t_EarthStandardAtmosphereRefraction_getRefraction(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_getTemperature(t_EarthStandardAtmosphereRefraction *self);
        static PyObject *t_EarthStandardAtmosphereRefraction_setPressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_setTemperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_get__pressure(t_EarthStandardAtmosphereRefraction *self, void *data);
        static int t_EarthStandardAtmosphereRefraction_set__pressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data);
        static PyObject *t_EarthStandardAtmosphereRefraction_get__temperature(t_EarthStandardAtmosphereRefraction *self, void *data);
        static int t_EarthStandardAtmosphereRefraction_set__temperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data);
        static PyGetSetDef t_EarthStandardAtmosphereRefraction__fields_[] = {
          DECLARE_GETSET_FIELD(t_EarthStandardAtmosphereRefraction, pressure),
          DECLARE_GETSET_FIELD(t_EarthStandardAtmosphereRefraction, temperature),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthStandardAtmosphereRefraction__methods_[] = {
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getPressure, METH_NOARGS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getRefraction, METH_O),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getTemperature, METH_NOARGS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, setPressure, METH_O),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, setTemperature, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthStandardAtmosphereRefraction)[] = {
          { Py_tp_methods, t_EarthStandardAtmosphereRefraction__methods_ },
          { Py_tp_init, (void *) t_EarthStandardAtmosphereRefraction_init_ },
          { Py_tp_getset, t_EarthStandardAtmosphereRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthStandardAtmosphereRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EarthStandardAtmosphereRefraction, t_EarthStandardAtmosphereRefraction, EarthStandardAtmosphereRefraction);

        void t_EarthStandardAtmosphereRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthStandardAtmosphereRefraction), &PY_TYPE_DEF(EarthStandardAtmosphereRefraction), module, "EarthStandardAtmosphereRefraction", 0);
        }

        void t_EarthStandardAtmosphereRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "class_", make_descriptor(EarthStandardAtmosphereRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "wrapfn_", make_descriptor(t_EarthStandardAtmosphereRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(EarthStandardAtmosphereRefraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_CORRECTION_FACTOR", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_CORRECTION_FACTOR));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_PRESSURE", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_PRESSURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_TEMPERATURE", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_TEMPERATURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "STANDARD_ATM_PRESSURE", make_descriptor(EarthStandardAtmosphereRefraction::STANDARD_ATM_PRESSURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "STANDARD_ATM_TEMPERATURE", make_descriptor(EarthStandardAtmosphereRefraction::STANDARD_ATM_TEMPERATURE));
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthStandardAtmosphereRefraction::initializeClass, 1)))
            return NULL;
          return t_EarthStandardAtmosphereRefraction::wrap_Object(EarthStandardAtmosphereRefraction(((t_EarthStandardAtmosphereRefraction *) arg)->object.this$));
        }
        static PyObject *t_EarthStandardAtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthStandardAtmosphereRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EarthStandardAtmosphereRefraction_init_(t_EarthStandardAtmosphereRefraction *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              EarthStandardAtmosphereRefraction object((jobject) NULL);

              INT_CALL(object = EarthStandardAtmosphereRefraction());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              EarthStandardAtmosphereRefraction object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = EarthStandardAtmosphereRefraction(a0, a1));
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

        static PyObject *t_EarthStandardAtmosphereRefraction_getPressure(t_EarthStandardAtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPressure());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getRefraction(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRefraction(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getTemperature(t_EarthStandardAtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTemperature());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_setPressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPressure(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressure", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_setTemperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTemperature(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTemperature", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_get__pressure(t_EarthStandardAtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPressure());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EarthStandardAtmosphereRefraction_set__pressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPressure(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressure", arg);
          return -1;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_get__temperature(t_EarthStandardAtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTemperature());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EarthStandardAtmosphereRefraction_set__temperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTemperature(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "temperature", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *OneAxisEllipsoid::class$ = NULL;
      jmethodID *OneAxisEllipsoid::mids$ = NULL;
      bool OneAxisEllipsoid::live$ = false;

      jclass OneAxisEllipsoid::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/OneAxisEllipsoid");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77eb4a8c540c1776] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
          mids$[mid_azimuthBetweenPoints_c12f05cc315a69e3] = env->getMethodID(cls, "azimuthBetweenPoints", "(Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_azimuthBetweenPoints_f8a18075cef9d5b5] = env->getMethodID(cls, "azimuthBetweenPoints", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)D");
          mids$[mid_geodeticToIsometricLatitude_7e960cd6eee376d8] = env->getMethodID(cls, "geodeticToIsometricLatitude", "(D)D");
          mids$[mid_geodeticToIsometricLatitude_6672ad854985cb64] = env->getMethodID(cls, "geodeticToIsometricLatitude", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getBodyFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getCartesianIntersectionPoint_9e2216b0767a7217] = env->getMethodID(cls, "getCartesianIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getCartesianIntersectionPoint_5b94a85bc390db61] = env->getMethodID(cls, "getCartesianIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getEccentricity_557b8123390d8d0c] = env->getMethodID(cls, "getEccentricity", "()D");
          mids$[mid_getEccentricitySquared_557b8123390d8d0c] = env->getMethodID(cls, "getEccentricitySquared", "()D");
          mids$[mid_getEquatorialRadius_557b8123390d8d0c] = env->getMethodID(cls, "getEquatorialRadius", "()D");
          mids$[mid_getFlattening_557b8123390d8d0c] = env->getMethodID(cls, "getFlattening", "()D");
          mids$[mid_getIntersectionPoint_6391bd6fdaac29a3] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getIntersectionPoint_884873e1d3d77c4e] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_lowestAltitudeIntermediate_0a6051973c8e743d] = env->getMethodID(cls, "lowestAltitudeIntermediate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_lowestAltitudeIntermediate_4d15c4bf1b2cd849] = env->getMethodID(cls, "lowestAltitudeIntermediate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_3d4e9a6447a03aa9] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_4c5eeaf1ff845fca] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_setAngularThreshold_10f281d777284cea] = env->getMethodID(cls, "setAngularThreshold", "(D)V");
          mids$[mid_transform_8b70a50ea3e1f728] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_8b264141c1de262c] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_50a4031074ed92da] = env->getMethodID(cls, "transform", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_8e052cb77f98e021] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_4dfad8dc678d42b2] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OneAxisEllipsoid::OneAxisEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::bodies::Ellipsoid(env->newObject(initializeClass, &mids$, mid_init$_77eb4a8c540c1776, a0, a1, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement OneAxisEllipsoid::azimuthBetweenPoints(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_azimuthBetweenPoints_c12f05cc315a69e3], a0.this$, a1.this$));
      }

      jdouble OneAxisEllipsoid::azimuthBetweenPoints(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_azimuthBetweenPoints_f8a18075cef9d5b5], a0.this$, a1.this$);
      }

      jdouble OneAxisEllipsoid::geodeticToIsometricLatitude(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_geodeticToIsometricLatitude_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement OneAxisEllipsoid::geodeticToIsometricLatitude(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_geodeticToIsometricLatitude_6672ad854985cb64], a0.this$));
      }

      ::org::orekit::frames::Frame OneAxisEllipsoid::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_6c9bc0a928c56d4e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OneAxisEllipsoid::getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getCartesianIntersectionPoint_9e2216b0767a7217], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesianIntersectionPoint_5b94a85bc390db61], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      jdouble OneAxisEllipsoid::getEccentricity() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricity_557b8123390d8d0c]);
      }

      jdouble OneAxisEllipsoid::getEccentricitySquared() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricitySquared_557b8123390d8d0c]);
      }

      jdouble OneAxisEllipsoid::getEquatorialRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_557b8123390d8d0c]);
      }

      jdouble OneAxisEllipsoid::getFlattening() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFlattening_557b8123390d8d0c]);
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_6391bd6fdaac29a3], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_884873e1d3d77c4e], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_lowestAltitudeIntermediate_0a6051973c8e743d], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_lowestAltitudeIntermediate_4d15c4bf1b2cd849], a0.this$, a1.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates OneAxisEllipsoid::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_3d4e9a6447a03aa9], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_4c5eeaf1ff845fca], a0.this$, a1.this$, a2.this$));
      }

      void OneAxisEllipsoid::setAngularThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAngularThreshold_10f281d777284cea], a0);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OneAxisEllipsoid::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_8b70a50ea3e1f728], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_8b264141c1de262c], a0.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::transform(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_50a4031074ed92da], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_8e052cb77f98e021], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_4dfad8dc678d42b2], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_OneAxisEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OneAxisEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OneAxisEllipsoid_init_(t_OneAxisEllipsoid *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OneAxisEllipsoid_azimuthBetweenPoints(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_geodeticToIsometricLatitude(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_getBodyFrame(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getCartesianIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_getEccentricity(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getEccentricitySquared(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getEquatorialRadius(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getFlattening(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_lowestAltitudeIntermediate(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_projectToGround(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_setAngularThreshold(t_OneAxisEllipsoid *self, PyObject *arg);
      static PyObject *t_OneAxisEllipsoid_transform(t_OneAxisEllipsoid *self, PyObject *args);
      static int t_OneAxisEllipsoid_set__angularThreshold(t_OneAxisEllipsoid *self, PyObject *arg, void *data);
      static PyObject *t_OneAxisEllipsoid_get__bodyFrame(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__eccentricity(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__eccentricitySquared(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__equatorialRadius(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__flattening(t_OneAxisEllipsoid *self, void *data);
      static PyGetSetDef t_OneAxisEllipsoid__fields_[] = {
        DECLARE_SET_FIELD(t_OneAxisEllipsoid, angularThreshold),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, bodyFrame),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, eccentricity),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, eccentricitySquared),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, equatorialRadius),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, flattening),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OneAxisEllipsoid__methods_[] = {
        DECLARE_METHOD(t_OneAxisEllipsoid, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OneAxisEllipsoid, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OneAxisEllipsoid, azimuthBetweenPoints, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, geodeticToIsometricLatitude, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getBodyFrame, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getCartesianIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEccentricity, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEccentricitySquared, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEquatorialRadius, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getFlattening, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, lowestAltitudeIntermediate, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, projectToGround, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, setAngularThreshold, METH_O),
        DECLARE_METHOD(t_OneAxisEllipsoid, transform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OneAxisEllipsoid)[] = {
        { Py_tp_methods, t_OneAxisEllipsoid__methods_ },
        { Py_tp_init, (void *) t_OneAxisEllipsoid_init_ },
        { Py_tp_getset, t_OneAxisEllipsoid__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OneAxisEllipsoid)[] = {
        &PY_TYPE_DEF(::org::orekit::bodies::Ellipsoid),
        NULL
      };

      DEFINE_TYPE(OneAxisEllipsoid, t_OneAxisEllipsoid, OneAxisEllipsoid);

      void t_OneAxisEllipsoid::install(PyObject *module)
      {
        installType(&PY_TYPE(OneAxisEllipsoid), &PY_TYPE_DEF(OneAxisEllipsoid), module, "OneAxisEllipsoid", 0);
      }

      void t_OneAxisEllipsoid::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "class_", make_descriptor(OneAxisEllipsoid::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "wrapfn_", make_descriptor(t_OneAxisEllipsoid::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OneAxisEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OneAxisEllipsoid::initializeClass, 1)))
          return NULL;
        return t_OneAxisEllipsoid::wrap_Object(OneAxisEllipsoid(((t_OneAxisEllipsoid *) arg)->object.this$));
      }
      static PyObject *t_OneAxisEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OneAxisEllipsoid::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OneAxisEllipsoid_init_(t_OneAxisEllipsoid *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        OneAxisEllipsoid object((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OneAxisEllipsoid(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OneAxisEllipsoid_azimuthBetweenPoints(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.azimuthBetweenPoints(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.azimuthBetweenPoints(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "azimuthBetweenPoints", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_geodeticToIsometricLatitude(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.geodeticToIsometricLatitude(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.geodeticToIsometricLatitude(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "geodeticToIsometricLatitude", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_getBodyFrame(t_OneAxisEllipsoid *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_OneAxisEllipsoid_getCartesianIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getCartesianIntersectionPoint(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getCartesianIntersectionPoint(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getCartesianIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_getEccentricity(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricity());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getEccentricitySquared(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricitySquared());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getEquatorialRadius(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquatorialRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getFlattening(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFlattening());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_lowestAltitudeIntermediate(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.lowestAltitudeIntermediate(a0, a1));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.lowestAltitudeIntermediate(a0, a1));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "lowestAltitudeIntermediate", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_projectToGround(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_setAngularThreshold(t_OneAxisEllipsoid *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setAngularThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAngularThreshold", arg);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_transform(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transform", args);
        return NULL;
      }

      static int t_OneAxisEllipsoid_set__angularThreshold(t_OneAxisEllipsoid *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setAngularThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "angularThreshold", arg);
        return -1;
      }

      static PyObject *t_OneAxisEllipsoid_get__bodyFrame(t_OneAxisEllipsoid *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_OneAxisEllipsoid_get__eccentricity(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricity());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__eccentricitySquared(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricitySquared());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__equatorialRadius(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquatorialRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__flattening(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFlattening());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}

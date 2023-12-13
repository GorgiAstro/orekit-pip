#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Asinh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Asinh::class$ = NULL;
        jmethodID *Asinh::mids$ = NULL;
        bool Asinh::live$ = false;

        jclass Asinh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Asinh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Asinh::Asinh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Asinh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Asinh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Asinh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Asinh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Asinh_init_(t_Asinh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Asinh_value(t_Asinh *self, PyObject *args);

        static PyMethodDef t_Asinh__methods_[] = {
          DECLARE_METHOD(t_Asinh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asinh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asinh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Asinh)[] = {
          { Py_tp_methods, t_Asinh__methods_ },
          { Py_tp_init, (void *) t_Asinh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Asinh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Asinh, t_Asinh, Asinh);

        void t_Asinh::install(PyObject *module)
        {
          installType(&PY_TYPE(Asinh), &PY_TYPE_DEF(Asinh), module, "Asinh", 0);
        }

        void t_Asinh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "class_", make_descriptor(Asinh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "wrapfn_", make_descriptor(t_Asinh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Asinh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Asinh::initializeClass, 1)))
            return NULL;
          return t_Asinh::wrap_Object(Asinh(((t_Asinh *) arg)->object.this$));
        }
        static PyObject *t_Asinh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Asinh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Asinh_init_(t_Asinh *self, PyObject *args, PyObject *kwds)
        {
          Asinh object((jobject) NULL);

          INT_CALL(object = Asinh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Asinh_value(t_Asinh *self, PyObject *args)
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
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldOrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *FieldOrdinaryDifferentialEquation::mids$ = NULL;
      bool FieldOrdinaryDifferentialEquation::live$ = false;

      jclass FieldOrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldOrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_94164e01c2f25701] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_04a080b674a1ab25] = env->getMethodID(cls, "init", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldOrdinaryDifferentialEquation::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_94164e01c2f25701], a0.this$, a1.this$));
      }

      jint FieldOrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      void FieldOrdinaryDifferentialEquation::init(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_04a080b674a1ab25], a0.this$, a1.this$, a2.this$);
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
      static PyObject *t_FieldOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrdinaryDifferentialEquation_of_(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_computeDerivatives(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_getDimension(t_FieldOrdinaryDifferentialEquation *self);
      static PyObject *t_FieldOrdinaryDifferentialEquation_init(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__dimension(t_FieldOrdinaryDifferentialEquation *self, void *data);
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__parameters_(t_FieldOrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_FieldOrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrdinaryDifferentialEquation, dimension),
        DECLARE_GET_FIELD(t_FieldOrdinaryDifferentialEquation, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_FieldOrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldOrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldOrdinaryDifferentialEquation, t_FieldOrdinaryDifferentialEquation, FieldOrdinaryDifferentialEquation);
      PyObject *t_FieldOrdinaryDifferentialEquation::wrap_Object(const FieldOrdinaryDifferentialEquation& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrdinaryDifferentialEquation::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrdinaryDifferentialEquation *self = (t_FieldOrdinaryDifferentialEquation *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrdinaryDifferentialEquation::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrdinaryDifferentialEquation::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrdinaryDifferentialEquation *self = (t_FieldOrdinaryDifferentialEquation *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrdinaryDifferentialEquation), &PY_TYPE_DEF(FieldOrdinaryDifferentialEquation), module, "FieldOrdinaryDifferentialEquation", 0);
      }

      void t_FieldOrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "class_", make_descriptor(FieldOrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_FieldOrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_FieldOrdinaryDifferentialEquation::wrap_Object(FieldOrdinaryDifferentialEquation(((t_FieldOrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_FieldOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_of_(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_computeDerivatives(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_getDimension(t_FieldOrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_init(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__parameters_(t_FieldOrdinaryDifferentialEquation *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_get__dimension(t_FieldOrdinaryDifferentialEquation *self, void *data)
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
#include "org/orekit/gnss/rflink/gps/SubFrameAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrameAlmanac::class$ = NULL;
          jmethodID *SubFrameAlmanac::mids$ = NULL;
          bool SubFrameAlmanac::live$ = false;

          jclass SubFrameAlmanac::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrameAlmanac");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAF0_b74f83833fdad017] = env->getMethodID(cls, "getAF0", "()D");
              mids$[mid_getAF1_b74f83833fdad017] = env->getMethodID(cls, "getAF1", "()D");
              mids$[mid_getDeltai_b74f83833fdad017] = env->getMethodID(cls, "getDeltai", "()D");
              mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getLowercaseOmega_b74f83833fdad017] = env->getMethodID(cls, "getLowercaseOmega", "()D");
              mids$[mid_getM0_b74f83833fdad017] = env->getMethodID(cls, "getM0", "()D");
              mids$[mid_getOmegaDot_b74f83833fdad017] = env->getMethodID(cls, "getOmegaDot", "()D");
              mids$[mid_getPRN_55546ef6a647f39b] = env->getMethodID(cls, "getPRN", "()I");
              mids$[mid_getSqrtA_b74f83833fdad017] = env->getMethodID(cls, "getSqrtA", "()D");
              mids$[mid_getSvHealth_55546ef6a647f39b] = env->getMethodID(cls, "getSvHealth", "()I");
              mids$[mid_getToaA_55546ef6a647f39b] = env->getMethodID(cls, "getToaA", "()I");
              mids$[mid_getUppercaseOmega0_b74f83833fdad017] = env->getMethodID(cls, "getUppercaseOmega0", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrameAlmanac::getAF0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF0_b74f83833fdad017]);
          }

          jdouble SubFrameAlmanac::getAF1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF1_b74f83833fdad017]);
          }

          jdouble SubFrameAlmanac::getDeltai() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDeltai_b74f83833fdad017]);
          }

          jdouble SubFrameAlmanac::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
          }

          jdouble SubFrameAlmanac::getLowercaseOmega() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowercaseOmega_b74f83833fdad017]);
          }

          jdouble SubFrameAlmanac::getM0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM0_b74f83833fdad017]);
          }

          jdouble SubFrameAlmanac::getOmegaDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_b74f83833fdad017]);
          }

          jint SubFrameAlmanac::getPRN() const
          {
            return env->callIntMethod(this$, mids$[mid_getPRN_55546ef6a647f39b]);
          }

          jdouble SubFrameAlmanac::getSqrtA() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSqrtA_b74f83833fdad017]);
          }

          jint SubFrameAlmanac::getSvHealth() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_55546ef6a647f39b]);
          }

          jint SubFrameAlmanac::getToaA() const
          {
            return env->callIntMethod(this$, mids$[mid_getToaA_55546ef6a647f39b]);
          }

          jdouble SubFrameAlmanac::getUppercaseOmega0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUppercaseOmega0_b74f83833fdad017]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrameAlmanac_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameAlmanac_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameAlmanac_getAF0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getAF1(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getDeltai(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getE(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getLowercaseOmega(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getM0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getOmegaDot(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getPRN(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getSqrtA(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getSvHealth(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getToaA(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getUppercaseOmega0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_get__aF0(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__aF1(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__deltai(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__e(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__lowercaseOmega(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__m0(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__omegaDot(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__pRN(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__sqrtA(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__svHealth(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__toaA(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__uppercaseOmega0(t_SubFrameAlmanac *self, void *data);
          static PyGetSetDef t_SubFrameAlmanac__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrameAlmanac, aF0),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, aF1),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, deltai),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, e),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, lowercaseOmega),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, m0),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, omegaDot),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, pRN),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, sqrtA),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, svHealth),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, toaA),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, uppercaseOmega0),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrameAlmanac__methods_[] = {
            DECLARE_METHOD(t_SubFrameAlmanac, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameAlmanac, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameAlmanac, getAF0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getAF1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getDeltai, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getLowercaseOmega, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getM0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getOmegaDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getPRN, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getSqrtA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getSvHealth, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getToaA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getUppercaseOmega0, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrameAlmanac)[] = {
            { Py_tp_methods, t_SubFrameAlmanac__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrameAlmanac__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrameAlmanac)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrameAlmanac, t_SubFrameAlmanac, SubFrameAlmanac);

          void t_SubFrameAlmanac::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrameAlmanac), &PY_TYPE_DEF(SubFrameAlmanac), module, "SubFrameAlmanac", 0);
          }

          void t_SubFrameAlmanac::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "class_", make_descriptor(SubFrameAlmanac::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "wrapfn_", make_descriptor(t_SubFrameAlmanac::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrameAlmanac_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrameAlmanac::initializeClass, 1)))
              return NULL;
            return t_SubFrameAlmanac::wrap_Object(SubFrameAlmanac(((t_SubFrameAlmanac *) arg)->object.this$));
          }
          static PyObject *t_SubFrameAlmanac_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrameAlmanac::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrameAlmanac_getAF0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getAF1(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getDeltai(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDeltai());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getE(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getLowercaseOmega(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getM0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getOmegaDot(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getPRN(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPRN());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getSqrtA(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSqrtA());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getSvHealth(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvHealth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getToaA(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getToaA());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getUppercaseOmega0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_get__aF0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__aF1(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__deltai(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDeltai());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__e(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__lowercaseOmega(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__m0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__omegaDot(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__pRN(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPRN());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__sqrtA(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSqrtA());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__svHealth(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvHealth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__toaA(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getToaA());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__uppercaseOmega0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/SignalCode.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *ObservationType::class$ = NULL;
      jmethodID *ObservationType::mids$ = NULL;
      bool ObservationType::live$ = false;
      ObservationType *ObservationType::C0 = NULL;
      ObservationType *ObservationType::C1 = NULL;
      ObservationType *ObservationType::C1A = NULL;
      ObservationType *ObservationType::C1B = NULL;
      ObservationType *ObservationType::C1C = NULL;
      ObservationType *ObservationType::C1D = NULL;
      ObservationType *ObservationType::C1E = NULL;
      ObservationType *ObservationType::C1I = NULL;
      ObservationType *ObservationType::C1L = NULL;
      ObservationType *ObservationType::C1M = NULL;
      ObservationType *ObservationType::C1P = NULL;
      ObservationType *ObservationType::C1Q = NULL;
      ObservationType *ObservationType::C1S = NULL;
      ObservationType *ObservationType::C1W = NULL;
      ObservationType *ObservationType::C1X = NULL;
      ObservationType *ObservationType::C1Y = NULL;
      ObservationType *ObservationType::C1Z = NULL;
      ObservationType *ObservationType::C2 = NULL;
      ObservationType *ObservationType::C2C = NULL;
      ObservationType *ObservationType::C2D = NULL;
      ObservationType *ObservationType::C2I = NULL;
      ObservationType *ObservationType::C2L = NULL;
      ObservationType *ObservationType::C2M = NULL;
      ObservationType *ObservationType::C2P = NULL;
      ObservationType *ObservationType::C2Q = NULL;
      ObservationType *ObservationType::C2S = NULL;
      ObservationType *ObservationType::C2W = NULL;
      ObservationType *ObservationType::C2X = NULL;
      ObservationType *ObservationType::C2Y = NULL;
      ObservationType *ObservationType::C3I = NULL;
      ObservationType *ObservationType::C3Q = NULL;
      ObservationType *ObservationType::C3X = NULL;
      ObservationType *ObservationType::C4A = NULL;
      ObservationType *ObservationType::C4B = NULL;
      ObservationType *ObservationType::C4X = NULL;
      ObservationType *ObservationType::C5 = NULL;
      ObservationType *ObservationType::C5A = NULL;
      ObservationType *ObservationType::C5B = NULL;
      ObservationType *ObservationType::C5C = NULL;
      ObservationType *ObservationType::C5D = NULL;
      ObservationType *ObservationType::C5I = NULL;
      ObservationType *ObservationType::C5P = NULL;
      ObservationType *ObservationType::C5Q = NULL;
      ObservationType *ObservationType::C5X = NULL;
      ObservationType *ObservationType::C5Z = NULL;
      ObservationType *ObservationType::C6 = NULL;
      ObservationType *ObservationType::C6A = NULL;
      ObservationType *ObservationType::C6B = NULL;
      ObservationType *ObservationType::C6C = NULL;
      ObservationType *ObservationType::C6D = NULL;
      ObservationType *ObservationType::C6E = NULL;
      ObservationType *ObservationType::C6I = NULL;
      ObservationType *ObservationType::C6L = NULL;
      ObservationType *ObservationType::C6P = NULL;
      ObservationType *ObservationType::C6Q = NULL;
      ObservationType *ObservationType::C6S = NULL;
      ObservationType *ObservationType::C6X = NULL;
      ObservationType *ObservationType::C6Z = NULL;
      ObservationType *ObservationType::C7 = NULL;
      ObservationType *ObservationType::C7D = NULL;
      ObservationType *ObservationType::C7I = NULL;
      ObservationType *ObservationType::C7P = NULL;
      ObservationType *ObservationType::C7Q = NULL;
      ObservationType *ObservationType::C7X = NULL;
      ObservationType *ObservationType::C7Z = NULL;
      ObservationType *ObservationType::C8 = NULL;
      ObservationType *ObservationType::C8D = NULL;
      ObservationType *ObservationType::C8I = NULL;
      ObservationType *ObservationType::C8P = NULL;
      ObservationType *ObservationType::C8Q = NULL;
      ObservationType *ObservationType::C8X = NULL;
      ObservationType *ObservationType::C9A = NULL;
      ObservationType *ObservationType::C9B = NULL;
      ObservationType *ObservationType::C9C = NULL;
      ObservationType *ObservationType::C9X = NULL;
      ObservationType *ObservationType::CA = NULL;
      ObservationType *ObservationType::CB = NULL;
      ObservationType *ObservationType::CC = NULL;
      ObservationType *ObservationType::CD = NULL;
      ObservationType *ObservationType::D0 = NULL;
      ObservationType *ObservationType::D1 = NULL;
      ObservationType *ObservationType::D1A = NULL;
      ObservationType *ObservationType::D1B = NULL;
      ObservationType *ObservationType::D1C = NULL;
      ObservationType *ObservationType::D1D = NULL;
      ObservationType *ObservationType::D1E = NULL;
      ObservationType *ObservationType::D1I = NULL;
      ObservationType *ObservationType::D1L = NULL;
      ObservationType *ObservationType::D1M = NULL;
      ObservationType *ObservationType::D1N = NULL;
      ObservationType *ObservationType::D1P = NULL;
      ObservationType *ObservationType::D1S = NULL;
      ObservationType *ObservationType::D1W = NULL;
      ObservationType *ObservationType::D1X = NULL;
      ObservationType *ObservationType::D1Y = NULL;
      ObservationType *ObservationType::D1Z = NULL;
      ObservationType *ObservationType::D2 = NULL;
      ObservationType *ObservationType::D2C = NULL;
      ObservationType *ObservationType::D2D = NULL;
      ObservationType *ObservationType::D2I = NULL;
      ObservationType *ObservationType::D2L = NULL;
      ObservationType *ObservationType::D2M = NULL;
      ObservationType *ObservationType::D2N = NULL;
      ObservationType *ObservationType::D2P = NULL;
      ObservationType *ObservationType::D2Q = NULL;
      ObservationType *ObservationType::D2S = NULL;
      ObservationType *ObservationType::D2W = NULL;
      ObservationType *ObservationType::D2X = NULL;
      ObservationType *ObservationType::D2Y = NULL;
      ObservationType *ObservationType::D3I = NULL;
      ObservationType *ObservationType::D3Q = NULL;
      ObservationType *ObservationType::D3X = NULL;
      ObservationType *ObservationType::D4A = NULL;
      ObservationType *ObservationType::D4B = NULL;
      ObservationType *ObservationType::D4X = NULL;
      ObservationType *ObservationType::D5 = NULL;
      ObservationType *ObservationType::D5A = NULL;
      ObservationType *ObservationType::D5B = NULL;
      ObservationType *ObservationType::D5C = NULL;
      ObservationType *ObservationType::D5D = NULL;
      ObservationType *ObservationType::D5I = NULL;
      ObservationType *ObservationType::D5P = NULL;
      ObservationType *ObservationType::D5Q = NULL;
      ObservationType *ObservationType::D5X = NULL;
      ObservationType *ObservationType::D5Z = NULL;
      ObservationType *ObservationType::D6 = NULL;
      ObservationType *ObservationType::D6A = NULL;
      ObservationType *ObservationType::D6B = NULL;
      ObservationType *ObservationType::D6C = NULL;
      ObservationType *ObservationType::D6D = NULL;
      ObservationType *ObservationType::D6E = NULL;
      ObservationType *ObservationType::D6I = NULL;
      ObservationType *ObservationType::D6L = NULL;
      ObservationType *ObservationType::D6P = NULL;
      ObservationType *ObservationType::D6Q = NULL;
      ObservationType *ObservationType::D6S = NULL;
      ObservationType *ObservationType::D6X = NULL;
      ObservationType *ObservationType::D6Z = NULL;
      ObservationType *ObservationType::D7 = NULL;
      ObservationType *ObservationType::D7D = NULL;
      ObservationType *ObservationType::D7I = NULL;
      ObservationType *ObservationType::D7P = NULL;
      ObservationType *ObservationType::D7Q = NULL;
      ObservationType *ObservationType::D7X = NULL;
      ObservationType *ObservationType::D7Z = NULL;
      ObservationType *ObservationType::D8 = NULL;
      ObservationType *ObservationType::D8D = NULL;
      ObservationType *ObservationType::D8I = NULL;
      ObservationType *ObservationType::D8P = NULL;
      ObservationType *ObservationType::D8Q = NULL;
      ObservationType *ObservationType::D8X = NULL;
      ObservationType *ObservationType::D9A = NULL;
      ObservationType *ObservationType::D9B = NULL;
      ObservationType *ObservationType::D9C = NULL;
      ObservationType *ObservationType::D9X = NULL;
      ObservationType *ObservationType::DA = NULL;
      ObservationType *ObservationType::DB = NULL;
      ObservationType *ObservationType::DC = NULL;
      ObservationType *ObservationType::DD = NULL;
      ObservationType *ObservationType::L0 = NULL;
      ObservationType *ObservationType::L1 = NULL;
      ObservationType *ObservationType::L1A = NULL;
      ObservationType *ObservationType::L1B = NULL;
      ObservationType *ObservationType::L1C = NULL;
      ObservationType *ObservationType::L1D = NULL;
      ObservationType *ObservationType::L1E = NULL;
      ObservationType *ObservationType::L1I = NULL;
      ObservationType *ObservationType::L1L = NULL;
      ObservationType *ObservationType::L1M = NULL;
      ObservationType *ObservationType::L1N = NULL;
      ObservationType *ObservationType::L1P = NULL;
      ObservationType *ObservationType::L1S = NULL;
      ObservationType *ObservationType::L1W = NULL;
      ObservationType *ObservationType::L1X = NULL;
      ObservationType *ObservationType::L1Y = NULL;
      ObservationType *ObservationType::L1Z = NULL;
      ObservationType *ObservationType::L2 = NULL;
      ObservationType *ObservationType::L2C = NULL;
      ObservationType *ObservationType::L2D = NULL;
      ObservationType *ObservationType::L2I = NULL;
      ObservationType *ObservationType::L2L = NULL;
      ObservationType *ObservationType::L2M = NULL;
      ObservationType *ObservationType::L2N = NULL;
      ObservationType *ObservationType::L2P = NULL;
      ObservationType *ObservationType::L2Q = NULL;
      ObservationType *ObservationType::L2S = NULL;
      ObservationType *ObservationType::L2W = NULL;
      ObservationType *ObservationType::L2X = NULL;
      ObservationType *ObservationType::L2Y = NULL;
      ObservationType *ObservationType::L3I = NULL;
      ObservationType *ObservationType::L3Q = NULL;
      ObservationType *ObservationType::L3X = NULL;
      ObservationType *ObservationType::L4A = NULL;
      ObservationType *ObservationType::L4B = NULL;
      ObservationType *ObservationType::L4X = NULL;
      ObservationType *ObservationType::L5 = NULL;
      ObservationType *ObservationType::L5A = NULL;
      ObservationType *ObservationType::L5B = NULL;
      ObservationType *ObservationType::L5C = NULL;
      ObservationType *ObservationType::L5D = NULL;
      ObservationType *ObservationType::L5I = NULL;
      ObservationType *ObservationType::L5P = NULL;
      ObservationType *ObservationType::L5Q = NULL;
      ObservationType *ObservationType::L5X = NULL;
      ObservationType *ObservationType::L5Z = NULL;
      ObservationType *ObservationType::L6 = NULL;
      ObservationType *ObservationType::L6A = NULL;
      ObservationType *ObservationType::L6B = NULL;
      ObservationType *ObservationType::L6C = NULL;
      ObservationType *ObservationType::L6D = NULL;
      ObservationType *ObservationType::L6E = NULL;
      ObservationType *ObservationType::L6I = NULL;
      ObservationType *ObservationType::L6L = NULL;
      ObservationType *ObservationType::L6P = NULL;
      ObservationType *ObservationType::L6Q = NULL;
      ObservationType *ObservationType::L6S = NULL;
      ObservationType *ObservationType::L6X = NULL;
      ObservationType *ObservationType::L6Z = NULL;
      ObservationType *ObservationType::L7 = NULL;
      ObservationType *ObservationType::L7D = NULL;
      ObservationType *ObservationType::L7I = NULL;
      ObservationType *ObservationType::L7P = NULL;
      ObservationType *ObservationType::L7Q = NULL;
      ObservationType *ObservationType::L7X = NULL;
      ObservationType *ObservationType::L7Z = NULL;
      ObservationType *ObservationType::L8 = NULL;
      ObservationType *ObservationType::L8D = NULL;
      ObservationType *ObservationType::L8I = NULL;
      ObservationType *ObservationType::L8P = NULL;
      ObservationType *ObservationType::L8Q = NULL;
      ObservationType *ObservationType::L8X = NULL;
      ObservationType *ObservationType::L9A = NULL;
      ObservationType *ObservationType::L9B = NULL;
      ObservationType *ObservationType::L9C = NULL;
      ObservationType *ObservationType::L9X = NULL;
      ObservationType *ObservationType::LA = NULL;
      ObservationType *ObservationType::LB = NULL;
      ObservationType *ObservationType::LC = NULL;
      ObservationType *ObservationType::LD = NULL;
      ObservationType *ObservationType::P1 = NULL;
      ObservationType *ObservationType::P2 = NULL;
      ObservationType *ObservationType::S0 = NULL;
      ObservationType *ObservationType::S1 = NULL;
      ObservationType *ObservationType::S1A = NULL;
      ObservationType *ObservationType::S1B = NULL;
      ObservationType *ObservationType::S1C = NULL;
      ObservationType *ObservationType::S1D = NULL;
      ObservationType *ObservationType::S1E = NULL;
      ObservationType *ObservationType::S1I = NULL;
      ObservationType *ObservationType::S1L = NULL;
      ObservationType *ObservationType::S1M = NULL;
      ObservationType *ObservationType::S1N = NULL;
      ObservationType *ObservationType::S1P = NULL;
      ObservationType *ObservationType::S1S = NULL;
      ObservationType *ObservationType::S1W = NULL;
      ObservationType *ObservationType::S1X = NULL;
      ObservationType *ObservationType::S1Y = NULL;
      ObservationType *ObservationType::S1Z = NULL;
      ObservationType *ObservationType::S2 = NULL;
      ObservationType *ObservationType::S2C = NULL;
      ObservationType *ObservationType::S2D = NULL;
      ObservationType *ObservationType::S2I = NULL;
      ObservationType *ObservationType::S2L = NULL;
      ObservationType *ObservationType::S2M = NULL;
      ObservationType *ObservationType::S2N = NULL;
      ObservationType *ObservationType::S2P = NULL;
      ObservationType *ObservationType::S2Q = NULL;
      ObservationType *ObservationType::S2S = NULL;
      ObservationType *ObservationType::S2W = NULL;
      ObservationType *ObservationType::S2X = NULL;
      ObservationType *ObservationType::S2Y = NULL;
      ObservationType *ObservationType::S3I = NULL;
      ObservationType *ObservationType::S3Q = NULL;
      ObservationType *ObservationType::S3X = NULL;
      ObservationType *ObservationType::S4A = NULL;
      ObservationType *ObservationType::S4B = NULL;
      ObservationType *ObservationType::S4X = NULL;
      ObservationType *ObservationType::S5 = NULL;
      ObservationType *ObservationType::S5A = NULL;
      ObservationType *ObservationType::S5B = NULL;
      ObservationType *ObservationType::S5C = NULL;
      ObservationType *ObservationType::S5D = NULL;
      ObservationType *ObservationType::S5I = NULL;
      ObservationType *ObservationType::S5P = NULL;
      ObservationType *ObservationType::S5Q = NULL;
      ObservationType *ObservationType::S5X = NULL;
      ObservationType *ObservationType::S5Z = NULL;
      ObservationType *ObservationType::S6 = NULL;
      ObservationType *ObservationType::S6A = NULL;
      ObservationType *ObservationType::S6B = NULL;
      ObservationType *ObservationType::S6C = NULL;
      ObservationType *ObservationType::S6D = NULL;
      ObservationType *ObservationType::S6E = NULL;
      ObservationType *ObservationType::S6I = NULL;
      ObservationType *ObservationType::S6L = NULL;
      ObservationType *ObservationType::S6P = NULL;
      ObservationType *ObservationType::S6Q = NULL;
      ObservationType *ObservationType::S6S = NULL;
      ObservationType *ObservationType::S6X = NULL;
      ObservationType *ObservationType::S6Z = NULL;
      ObservationType *ObservationType::S7 = NULL;
      ObservationType *ObservationType::S7D = NULL;
      ObservationType *ObservationType::S7I = NULL;
      ObservationType *ObservationType::S7P = NULL;
      ObservationType *ObservationType::S7Q = NULL;
      ObservationType *ObservationType::S7X = NULL;
      ObservationType *ObservationType::S7Z = NULL;
      ObservationType *ObservationType::S8 = NULL;
      ObservationType *ObservationType::S8D = NULL;
      ObservationType *ObservationType::S8I = NULL;
      ObservationType *ObservationType::S8P = NULL;
      ObservationType *ObservationType::S8Q = NULL;
      ObservationType *ObservationType::S8X = NULL;
      ObservationType *ObservationType::S9A = NULL;
      ObservationType *ObservationType::S9B = NULL;
      ObservationType *ObservationType::S9C = NULL;
      ObservationType *ObservationType::S9X = NULL;
      ObservationType *ObservationType::SA = NULL;
      ObservationType *ObservationType::SB = NULL;
      ObservationType *ObservationType::SC = NULL;
      ObservationType *ObservationType::SD = NULL;

      jclass ObservationType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/ObservationType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFrequency_d6f69a0e1934b6e3] = env->getMethodID(cls, "getFrequency", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/gnss/Frequency;");
          mids$[mid_getMeasurementType_8c0a6decf9468215] = env->getMethodID(cls, "getMeasurementType", "()Lorg/orekit/gnss/MeasurementType;");
          mids$[mid_getSignalCode_c3b819016e2efc95] = env->getMethodID(cls, "getSignalCode", "()Lorg/orekit/gnss/SignalCode;");
          mids$[mid_valueOf_f33e58d3107f7f14] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/ObservationType;");
          mids$[mid_values_7b41c8c7af6242d9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/ObservationType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          C0 = new ObservationType(env->getStaticObjectField(cls, "C0", "Lorg/orekit/gnss/ObservationType;"));
          C1 = new ObservationType(env->getStaticObjectField(cls, "C1", "Lorg/orekit/gnss/ObservationType;"));
          C1A = new ObservationType(env->getStaticObjectField(cls, "C1A", "Lorg/orekit/gnss/ObservationType;"));
          C1B = new ObservationType(env->getStaticObjectField(cls, "C1B", "Lorg/orekit/gnss/ObservationType;"));
          C1C = new ObservationType(env->getStaticObjectField(cls, "C1C", "Lorg/orekit/gnss/ObservationType;"));
          C1D = new ObservationType(env->getStaticObjectField(cls, "C1D", "Lorg/orekit/gnss/ObservationType;"));
          C1E = new ObservationType(env->getStaticObjectField(cls, "C1E", "Lorg/orekit/gnss/ObservationType;"));
          C1I = new ObservationType(env->getStaticObjectField(cls, "C1I", "Lorg/orekit/gnss/ObservationType;"));
          C1L = new ObservationType(env->getStaticObjectField(cls, "C1L", "Lorg/orekit/gnss/ObservationType;"));
          C1M = new ObservationType(env->getStaticObjectField(cls, "C1M", "Lorg/orekit/gnss/ObservationType;"));
          C1P = new ObservationType(env->getStaticObjectField(cls, "C1P", "Lorg/orekit/gnss/ObservationType;"));
          C1Q = new ObservationType(env->getStaticObjectField(cls, "C1Q", "Lorg/orekit/gnss/ObservationType;"));
          C1S = new ObservationType(env->getStaticObjectField(cls, "C1S", "Lorg/orekit/gnss/ObservationType;"));
          C1W = new ObservationType(env->getStaticObjectField(cls, "C1W", "Lorg/orekit/gnss/ObservationType;"));
          C1X = new ObservationType(env->getStaticObjectField(cls, "C1X", "Lorg/orekit/gnss/ObservationType;"));
          C1Y = new ObservationType(env->getStaticObjectField(cls, "C1Y", "Lorg/orekit/gnss/ObservationType;"));
          C1Z = new ObservationType(env->getStaticObjectField(cls, "C1Z", "Lorg/orekit/gnss/ObservationType;"));
          C2 = new ObservationType(env->getStaticObjectField(cls, "C2", "Lorg/orekit/gnss/ObservationType;"));
          C2C = new ObservationType(env->getStaticObjectField(cls, "C2C", "Lorg/orekit/gnss/ObservationType;"));
          C2D = new ObservationType(env->getStaticObjectField(cls, "C2D", "Lorg/orekit/gnss/ObservationType;"));
          C2I = new ObservationType(env->getStaticObjectField(cls, "C2I", "Lorg/orekit/gnss/ObservationType;"));
          C2L = new ObservationType(env->getStaticObjectField(cls, "C2L", "Lorg/orekit/gnss/ObservationType;"));
          C2M = new ObservationType(env->getStaticObjectField(cls, "C2M", "Lorg/orekit/gnss/ObservationType;"));
          C2P = new ObservationType(env->getStaticObjectField(cls, "C2P", "Lorg/orekit/gnss/ObservationType;"));
          C2Q = new ObservationType(env->getStaticObjectField(cls, "C2Q", "Lorg/orekit/gnss/ObservationType;"));
          C2S = new ObservationType(env->getStaticObjectField(cls, "C2S", "Lorg/orekit/gnss/ObservationType;"));
          C2W = new ObservationType(env->getStaticObjectField(cls, "C2W", "Lorg/orekit/gnss/ObservationType;"));
          C2X = new ObservationType(env->getStaticObjectField(cls, "C2X", "Lorg/orekit/gnss/ObservationType;"));
          C2Y = new ObservationType(env->getStaticObjectField(cls, "C2Y", "Lorg/orekit/gnss/ObservationType;"));
          C3I = new ObservationType(env->getStaticObjectField(cls, "C3I", "Lorg/orekit/gnss/ObservationType;"));
          C3Q = new ObservationType(env->getStaticObjectField(cls, "C3Q", "Lorg/orekit/gnss/ObservationType;"));
          C3X = new ObservationType(env->getStaticObjectField(cls, "C3X", "Lorg/orekit/gnss/ObservationType;"));
          C4A = new ObservationType(env->getStaticObjectField(cls, "C4A", "Lorg/orekit/gnss/ObservationType;"));
          C4B = new ObservationType(env->getStaticObjectField(cls, "C4B", "Lorg/orekit/gnss/ObservationType;"));
          C4X = new ObservationType(env->getStaticObjectField(cls, "C4X", "Lorg/orekit/gnss/ObservationType;"));
          C5 = new ObservationType(env->getStaticObjectField(cls, "C5", "Lorg/orekit/gnss/ObservationType;"));
          C5A = new ObservationType(env->getStaticObjectField(cls, "C5A", "Lorg/orekit/gnss/ObservationType;"));
          C5B = new ObservationType(env->getStaticObjectField(cls, "C5B", "Lorg/orekit/gnss/ObservationType;"));
          C5C = new ObservationType(env->getStaticObjectField(cls, "C5C", "Lorg/orekit/gnss/ObservationType;"));
          C5D = new ObservationType(env->getStaticObjectField(cls, "C5D", "Lorg/orekit/gnss/ObservationType;"));
          C5I = new ObservationType(env->getStaticObjectField(cls, "C5I", "Lorg/orekit/gnss/ObservationType;"));
          C5P = new ObservationType(env->getStaticObjectField(cls, "C5P", "Lorg/orekit/gnss/ObservationType;"));
          C5Q = new ObservationType(env->getStaticObjectField(cls, "C5Q", "Lorg/orekit/gnss/ObservationType;"));
          C5X = new ObservationType(env->getStaticObjectField(cls, "C5X", "Lorg/orekit/gnss/ObservationType;"));
          C5Z = new ObservationType(env->getStaticObjectField(cls, "C5Z", "Lorg/orekit/gnss/ObservationType;"));
          C6 = new ObservationType(env->getStaticObjectField(cls, "C6", "Lorg/orekit/gnss/ObservationType;"));
          C6A = new ObservationType(env->getStaticObjectField(cls, "C6A", "Lorg/orekit/gnss/ObservationType;"));
          C6B = new ObservationType(env->getStaticObjectField(cls, "C6B", "Lorg/orekit/gnss/ObservationType;"));
          C6C = new ObservationType(env->getStaticObjectField(cls, "C6C", "Lorg/orekit/gnss/ObservationType;"));
          C6D = new ObservationType(env->getStaticObjectField(cls, "C6D", "Lorg/orekit/gnss/ObservationType;"));
          C6E = new ObservationType(env->getStaticObjectField(cls, "C6E", "Lorg/orekit/gnss/ObservationType;"));
          C6I = new ObservationType(env->getStaticObjectField(cls, "C6I", "Lorg/orekit/gnss/ObservationType;"));
          C6L = new ObservationType(env->getStaticObjectField(cls, "C6L", "Lorg/orekit/gnss/ObservationType;"));
          C6P = new ObservationType(env->getStaticObjectField(cls, "C6P", "Lorg/orekit/gnss/ObservationType;"));
          C6Q = new ObservationType(env->getStaticObjectField(cls, "C6Q", "Lorg/orekit/gnss/ObservationType;"));
          C6S = new ObservationType(env->getStaticObjectField(cls, "C6S", "Lorg/orekit/gnss/ObservationType;"));
          C6X = new ObservationType(env->getStaticObjectField(cls, "C6X", "Lorg/orekit/gnss/ObservationType;"));
          C6Z = new ObservationType(env->getStaticObjectField(cls, "C6Z", "Lorg/orekit/gnss/ObservationType;"));
          C7 = new ObservationType(env->getStaticObjectField(cls, "C7", "Lorg/orekit/gnss/ObservationType;"));
          C7D = new ObservationType(env->getStaticObjectField(cls, "C7D", "Lorg/orekit/gnss/ObservationType;"));
          C7I = new ObservationType(env->getStaticObjectField(cls, "C7I", "Lorg/orekit/gnss/ObservationType;"));
          C7P = new ObservationType(env->getStaticObjectField(cls, "C7P", "Lorg/orekit/gnss/ObservationType;"));
          C7Q = new ObservationType(env->getStaticObjectField(cls, "C7Q", "Lorg/orekit/gnss/ObservationType;"));
          C7X = new ObservationType(env->getStaticObjectField(cls, "C7X", "Lorg/orekit/gnss/ObservationType;"));
          C7Z = new ObservationType(env->getStaticObjectField(cls, "C7Z", "Lorg/orekit/gnss/ObservationType;"));
          C8 = new ObservationType(env->getStaticObjectField(cls, "C8", "Lorg/orekit/gnss/ObservationType;"));
          C8D = new ObservationType(env->getStaticObjectField(cls, "C8D", "Lorg/orekit/gnss/ObservationType;"));
          C8I = new ObservationType(env->getStaticObjectField(cls, "C8I", "Lorg/orekit/gnss/ObservationType;"));
          C8P = new ObservationType(env->getStaticObjectField(cls, "C8P", "Lorg/orekit/gnss/ObservationType;"));
          C8Q = new ObservationType(env->getStaticObjectField(cls, "C8Q", "Lorg/orekit/gnss/ObservationType;"));
          C8X = new ObservationType(env->getStaticObjectField(cls, "C8X", "Lorg/orekit/gnss/ObservationType;"));
          C9A = new ObservationType(env->getStaticObjectField(cls, "C9A", "Lorg/orekit/gnss/ObservationType;"));
          C9B = new ObservationType(env->getStaticObjectField(cls, "C9B", "Lorg/orekit/gnss/ObservationType;"));
          C9C = new ObservationType(env->getStaticObjectField(cls, "C9C", "Lorg/orekit/gnss/ObservationType;"));
          C9X = new ObservationType(env->getStaticObjectField(cls, "C9X", "Lorg/orekit/gnss/ObservationType;"));
          CA = new ObservationType(env->getStaticObjectField(cls, "CA", "Lorg/orekit/gnss/ObservationType;"));
          CB = new ObservationType(env->getStaticObjectField(cls, "CB", "Lorg/orekit/gnss/ObservationType;"));
          CC = new ObservationType(env->getStaticObjectField(cls, "CC", "Lorg/orekit/gnss/ObservationType;"));
          CD = new ObservationType(env->getStaticObjectField(cls, "CD", "Lorg/orekit/gnss/ObservationType;"));
          D0 = new ObservationType(env->getStaticObjectField(cls, "D0", "Lorg/orekit/gnss/ObservationType;"));
          D1 = new ObservationType(env->getStaticObjectField(cls, "D1", "Lorg/orekit/gnss/ObservationType;"));
          D1A = new ObservationType(env->getStaticObjectField(cls, "D1A", "Lorg/orekit/gnss/ObservationType;"));
          D1B = new ObservationType(env->getStaticObjectField(cls, "D1B", "Lorg/orekit/gnss/ObservationType;"));
          D1C = new ObservationType(env->getStaticObjectField(cls, "D1C", "Lorg/orekit/gnss/ObservationType;"));
          D1D = new ObservationType(env->getStaticObjectField(cls, "D1D", "Lorg/orekit/gnss/ObservationType;"));
          D1E = new ObservationType(env->getStaticObjectField(cls, "D1E", "Lorg/orekit/gnss/ObservationType;"));
          D1I = new ObservationType(env->getStaticObjectField(cls, "D1I", "Lorg/orekit/gnss/ObservationType;"));
          D1L = new ObservationType(env->getStaticObjectField(cls, "D1L", "Lorg/orekit/gnss/ObservationType;"));
          D1M = new ObservationType(env->getStaticObjectField(cls, "D1M", "Lorg/orekit/gnss/ObservationType;"));
          D1N = new ObservationType(env->getStaticObjectField(cls, "D1N", "Lorg/orekit/gnss/ObservationType;"));
          D1P = new ObservationType(env->getStaticObjectField(cls, "D1P", "Lorg/orekit/gnss/ObservationType;"));
          D1S = new ObservationType(env->getStaticObjectField(cls, "D1S", "Lorg/orekit/gnss/ObservationType;"));
          D1W = new ObservationType(env->getStaticObjectField(cls, "D1W", "Lorg/orekit/gnss/ObservationType;"));
          D1X = new ObservationType(env->getStaticObjectField(cls, "D1X", "Lorg/orekit/gnss/ObservationType;"));
          D1Y = new ObservationType(env->getStaticObjectField(cls, "D1Y", "Lorg/orekit/gnss/ObservationType;"));
          D1Z = new ObservationType(env->getStaticObjectField(cls, "D1Z", "Lorg/orekit/gnss/ObservationType;"));
          D2 = new ObservationType(env->getStaticObjectField(cls, "D2", "Lorg/orekit/gnss/ObservationType;"));
          D2C = new ObservationType(env->getStaticObjectField(cls, "D2C", "Lorg/orekit/gnss/ObservationType;"));
          D2D = new ObservationType(env->getStaticObjectField(cls, "D2D", "Lorg/orekit/gnss/ObservationType;"));
          D2I = new ObservationType(env->getStaticObjectField(cls, "D2I", "Lorg/orekit/gnss/ObservationType;"));
          D2L = new ObservationType(env->getStaticObjectField(cls, "D2L", "Lorg/orekit/gnss/ObservationType;"));
          D2M = new ObservationType(env->getStaticObjectField(cls, "D2M", "Lorg/orekit/gnss/ObservationType;"));
          D2N = new ObservationType(env->getStaticObjectField(cls, "D2N", "Lorg/orekit/gnss/ObservationType;"));
          D2P = new ObservationType(env->getStaticObjectField(cls, "D2P", "Lorg/orekit/gnss/ObservationType;"));
          D2Q = new ObservationType(env->getStaticObjectField(cls, "D2Q", "Lorg/orekit/gnss/ObservationType;"));
          D2S = new ObservationType(env->getStaticObjectField(cls, "D2S", "Lorg/orekit/gnss/ObservationType;"));
          D2W = new ObservationType(env->getStaticObjectField(cls, "D2W", "Lorg/orekit/gnss/ObservationType;"));
          D2X = new ObservationType(env->getStaticObjectField(cls, "D2X", "Lorg/orekit/gnss/ObservationType;"));
          D2Y = new ObservationType(env->getStaticObjectField(cls, "D2Y", "Lorg/orekit/gnss/ObservationType;"));
          D3I = new ObservationType(env->getStaticObjectField(cls, "D3I", "Lorg/orekit/gnss/ObservationType;"));
          D3Q = new ObservationType(env->getStaticObjectField(cls, "D3Q", "Lorg/orekit/gnss/ObservationType;"));
          D3X = new ObservationType(env->getStaticObjectField(cls, "D3X", "Lorg/orekit/gnss/ObservationType;"));
          D4A = new ObservationType(env->getStaticObjectField(cls, "D4A", "Lorg/orekit/gnss/ObservationType;"));
          D4B = new ObservationType(env->getStaticObjectField(cls, "D4B", "Lorg/orekit/gnss/ObservationType;"));
          D4X = new ObservationType(env->getStaticObjectField(cls, "D4X", "Lorg/orekit/gnss/ObservationType;"));
          D5 = new ObservationType(env->getStaticObjectField(cls, "D5", "Lorg/orekit/gnss/ObservationType;"));
          D5A = new ObservationType(env->getStaticObjectField(cls, "D5A", "Lorg/orekit/gnss/ObservationType;"));
          D5B = new ObservationType(env->getStaticObjectField(cls, "D5B", "Lorg/orekit/gnss/ObservationType;"));
          D5C = new ObservationType(env->getStaticObjectField(cls, "D5C", "Lorg/orekit/gnss/ObservationType;"));
          D5D = new ObservationType(env->getStaticObjectField(cls, "D5D", "Lorg/orekit/gnss/ObservationType;"));
          D5I = new ObservationType(env->getStaticObjectField(cls, "D5I", "Lorg/orekit/gnss/ObservationType;"));
          D5P = new ObservationType(env->getStaticObjectField(cls, "D5P", "Lorg/orekit/gnss/ObservationType;"));
          D5Q = new ObservationType(env->getStaticObjectField(cls, "D5Q", "Lorg/orekit/gnss/ObservationType;"));
          D5X = new ObservationType(env->getStaticObjectField(cls, "D5X", "Lorg/orekit/gnss/ObservationType;"));
          D5Z = new ObservationType(env->getStaticObjectField(cls, "D5Z", "Lorg/orekit/gnss/ObservationType;"));
          D6 = new ObservationType(env->getStaticObjectField(cls, "D6", "Lorg/orekit/gnss/ObservationType;"));
          D6A = new ObservationType(env->getStaticObjectField(cls, "D6A", "Lorg/orekit/gnss/ObservationType;"));
          D6B = new ObservationType(env->getStaticObjectField(cls, "D6B", "Lorg/orekit/gnss/ObservationType;"));
          D6C = new ObservationType(env->getStaticObjectField(cls, "D6C", "Lorg/orekit/gnss/ObservationType;"));
          D6D = new ObservationType(env->getStaticObjectField(cls, "D6D", "Lorg/orekit/gnss/ObservationType;"));
          D6E = new ObservationType(env->getStaticObjectField(cls, "D6E", "Lorg/orekit/gnss/ObservationType;"));
          D6I = new ObservationType(env->getStaticObjectField(cls, "D6I", "Lorg/orekit/gnss/ObservationType;"));
          D6L = new ObservationType(env->getStaticObjectField(cls, "D6L", "Lorg/orekit/gnss/ObservationType;"));
          D6P = new ObservationType(env->getStaticObjectField(cls, "D6P", "Lorg/orekit/gnss/ObservationType;"));
          D6Q = new ObservationType(env->getStaticObjectField(cls, "D6Q", "Lorg/orekit/gnss/ObservationType;"));
          D6S = new ObservationType(env->getStaticObjectField(cls, "D6S", "Lorg/orekit/gnss/ObservationType;"));
          D6X = new ObservationType(env->getStaticObjectField(cls, "D6X", "Lorg/orekit/gnss/ObservationType;"));
          D6Z = new ObservationType(env->getStaticObjectField(cls, "D6Z", "Lorg/orekit/gnss/ObservationType;"));
          D7 = new ObservationType(env->getStaticObjectField(cls, "D7", "Lorg/orekit/gnss/ObservationType;"));
          D7D = new ObservationType(env->getStaticObjectField(cls, "D7D", "Lorg/orekit/gnss/ObservationType;"));
          D7I = new ObservationType(env->getStaticObjectField(cls, "D7I", "Lorg/orekit/gnss/ObservationType;"));
          D7P = new ObservationType(env->getStaticObjectField(cls, "D7P", "Lorg/orekit/gnss/ObservationType;"));
          D7Q = new ObservationType(env->getStaticObjectField(cls, "D7Q", "Lorg/orekit/gnss/ObservationType;"));
          D7X = new ObservationType(env->getStaticObjectField(cls, "D7X", "Lorg/orekit/gnss/ObservationType;"));
          D7Z = new ObservationType(env->getStaticObjectField(cls, "D7Z", "Lorg/orekit/gnss/ObservationType;"));
          D8 = new ObservationType(env->getStaticObjectField(cls, "D8", "Lorg/orekit/gnss/ObservationType;"));
          D8D = new ObservationType(env->getStaticObjectField(cls, "D8D", "Lorg/orekit/gnss/ObservationType;"));
          D8I = new ObservationType(env->getStaticObjectField(cls, "D8I", "Lorg/orekit/gnss/ObservationType;"));
          D8P = new ObservationType(env->getStaticObjectField(cls, "D8P", "Lorg/orekit/gnss/ObservationType;"));
          D8Q = new ObservationType(env->getStaticObjectField(cls, "D8Q", "Lorg/orekit/gnss/ObservationType;"));
          D8X = new ObservationType(env->getStaticObjectField(cls, "D8X", "Lorg/orekit/gnss/ObservationType;"));
          D9A = new ObservationType(env->getStaticObjectField(cls, "D9A", "Lorg/orekit/gnss/ObservationType;"));
          D9B = new ObservationType(env->getStaticObjectField(cls, "D9B", "Lorg/orekit/gnss/ObservationType;"));
          D9C = new ObservationType(env->getStaticObjectField(cls, "D9C", "Lorg/orekit/gnss/ObservationType;"));
          D9X = new ObservationType(env->getStaticObjectField(cls, "D9X", "Lorg/orekit/gnss/ObservationType;"));
          DA = new ObservationType(env->getStaticObjectField(cls, "DA", "Lorg/orekit/gnss/ObservationType;"));
          DB = new ObservationType(env->getStaticObjectField(cls, "DB", "Lorg/orekit/gnss/ObservationType;"));
          DC = new ObservationType(env->getStaticObjectField(cls, "DC", "Lorg/orekit/gnss/ObservationType;"));
          DD = new ObservationType(env->getStaticObjectField(cls, "DD", "Lorg/orekit/gnss/ObservationType;"));
          L0 = new ObservationType(env->getStaticObjectField(cls, "L0", "Lorg/orekit/gnss/ObservationType;"));
          L1 = new ObservationType(env->getStaticObjectField(cls, "L1", "Lorg/orekit/gnss/ObservationType;"));
          L1A = new ObservationType(env->getStaticObjectField(cls, "L1A", "Lorg/orekit/gnss/ObservationType;"));
          L1B = new ObservationType(env->getStaticObjectField(cls, "L1B", "Lorg/orekit/gnss/ObservationType;"));
          L1C = new ObservationType(env->getStaticObjectField(cls, "L1C", "Lorg/orekit/gnss/ObservationType;"));
          L1D = new ObservationType(env->getStaticObjectField(cls, "L1D", "Lorg/orekit/gnss/ObservationType;"));
          L1E = new ObservationType(env->getStaticObjectField(cls, "L1E", "Lorg/orekit/gnss/ObservationType;"));
          L1I = new ObservationType(env->getStaticObjectField(cls, "L1I", "Lorg/orekit/gnss/ObservationType;"));
          L1L = new ObservationType(env->getStaticObjectField(cls, "L1L", "Lorg/orekit/gnss/ObservationType;"));
          L1M = new ObservationType(env->getStaticObjectField(cls, "L1M", "Lorg/orekit/gnss/ObservationType;"));
          L1N = new ObservationType(env->getStaticObjectField(cls, "L1N", "Lorg/orekit/gnss/ObservationType;"));
          L1P = new ObservationType(env->getStaticObjectField(cls, "L1P", "Lorg/orekit/gnss/ObservationType;"));
          L1S = new ObservationType(env->getStaticObjectField(cls, "L1S", "Lorg/orekit/gnss/ObservationType;"));
          L1W = new ObservationType(env->getStaticObjectField(cls, "L1W", "Lorg/orekit/gnss/ObservationType;"));
          L1X = new ObservationType(env->getStaticObjectField(cls, "L1X", "Lorg/orekit/gnss/ObservationType;"));
          L1Y = new ObservationType(env->getStaticObjectField(cls, "L1Y", "Lorg/orekit/gnss/ObservationType;"));
          L1Z = new ObservationType(env->getStaticObjectField(cls, "L1Z", "Lorg/orekit/gnss/ObservationType;"));
          L2 = new ObservationType(env->getStaticObjectField(cls, "L2", "Lorg/orekit/gnss/ObservationType;"));
          L2C = new ObservationType(env->getStaticObjectField(cls, "L2C", "Lorg/orekit/gnss/ObservationType;"));
          L2D = new ObservationType(env->getStaticObjectField(cls, "L2D", "Lorg/orekit/gnss/ObservationType;"));
          L2I = new ObservationType(env->getStaticObjectField(cls, "L2I", "Lorg/orekit/gnss/ObservationType;"));
          L2L = new ObservationType(env->getStaticObjectField(cls, "L2L", "Lorg/orekit/gnss/ObservationType;"));
          L2M = new ObservationType(env->getStaticObjectField(cls, "L2M", "Lorg/orekit/gnss/ObservationType;"));
          L2N = new ObservationType(env->getStaticObjectField(cls, "L2N", "Lorg/orekit/gnss/ObservationType;"));
          L2P = new ObservationType(env->getStaticObjectField(cls, "L2P", "Lorg/orekit/gnss/ObservationType;"));
          L2Q = new ObservationType(env->getStaticObjectField(cls, "L2Q", "Lorg/orekit/gnss/ObservationType;"));
          L2S = new ObservationType(env->getStaticObjectField(cls, "L2S", "Lorg/orekit/gnss/ObservationType;"));
          L2W = new ObservationType(env->getStaticObjectField(cls, "L2W", "Lorg/orekit/gnss/ObservationType;"));
          L2X = new ObservationType(env->getStaticObjectField(cls, "L2X", "Lorg/orekit/gnss/ObservationType;"));
          L2Y = new ObservationType(env->getStaticObjectField(cls, "L2Y", "Lorg/orekit/gnss/ObservationType;"));
          L3I = new ObservationType(env->getStaticObjectField(cls, "L3I", "Lorg/orekit/gnss/ObservationType;"));
          L3Q = new ObservationType(env->getStaticObjectField(cls, "L3Q", "Lorg/orekit/gnss/ObservationType;"));
          L3X = new ObservationType(env->getStaticObjectField(cls, "L3X", "Lorg/orekit/gnss/ObservationType;"));
          L4A = new ObservationType(env->getStaticObjectField(cls, "L4A", "Lorg/orekit/gnss/ObservationType;"));
          L4B = new ObservationType(env->getStaticObjectField(cls, "L4B", "Lorg/orekit/gnss/ObservationType;"));
          L4X = new ObservationType(env->getStaticObjectField(cls, "L4X", "Lorg/orekit/gnss/ObservationType;"));
          L5 = new ObservationType(env->getStaticObjectField(cls, "L5", "Lorg/orekit/gnss/ObservationType;"));
          L5A = new ObservationType(env->getStaticObjectField(cls, "L5A", "Lorg/orekit/gnss/ObservationType;"));
          L5B = new ObservationType(env->getStaticObjectField(cls, "L5B", "Lorg/orekit/gnss/ObservationType;"));
          L5C = new ObservationType(env->getStaticObjectField(cls, "L5C", "Lorg/orekit/gnss/ObservationType;"));
          L5D = new ObservationType(env->getStaticObjectField(cls, "L5D", "Lorg/orekit/gnss/ObservationType;"));
          L5I = new ObservationType(env->getStaticObjectField(cls, "L5I", "Lorg/orekit/gnss/ObservationType;"));
          L5P = new ObservationType(env->getStaticObjectField(cls, "L5P", "Lorg/orekit/gnss/ObservationType;"));
          L5Q = new ObservationType(env->getStaticObjectField(cls, "L5Q", "Lorg/orekit/gnss/ObservationType;"));
          L5X = new ObservationType(env->getStaticObjectField(cls, "L5X", "Lorg/orekit/gnss/ObservationType;"));
          L5Z = new ObservationType(env->getStaticObjectField(cls, "L5Z", "Lorg/orekit/gnss/ObservationType;"));
          L6 = new ObservationType(env->getStaticObjectField(cls, "L6", "Lorg/orekit/gnss/ObservationType;"));
          L6A = new ObservationType(env->getStaticObjectField(cls, "L6A", "Lorg/orekit/gnss/ObservationType;"));
          L6B = new ObservationType(env->getStaticObjectField(cls, "L6B", "Lorg/orekit/gnss/ObservationType;"));
          L6C = new ObservationType(env->getStaticObjectField(cls, "L6C", "Lorg/orekit/gnss/ObservationType;"));
          L6D = new ObservationType(env->getStaticObjectField(cls, "L6D", "Lorg/orekit/gnss/ObservationType;"));
          L6E = new ObservationType(env->getStaticObjectField(cls, "L6E", "Lorg/orekit/gnss/ObservationType;"));
          L6I = new ObservationType(env->getStaticObjectField(cls, "L6I", "Lorg/orekit/gnss/ObservationType;"));
          L6L = new ObservationType(env->getStaticObjectField(cls, "L6L", "Lorg/orekit/gnss/ObservationType;"));
          L6P = new ObservationType(env->getStaticObjectField(cls, "L6P", "Lorg/orekit/gnss/ObservationType;"));
          L6Q = new ObservationType(env->getStaticObjectField(cls, "L6Q", "Lorg/orekit/gnss/ObservationType;"));
          L6S = new ObservationType(env->getStaticObjectField(cls, "L6S", "Lorg/orekit/gnss/ObservationType;"));
          L6X = new ObservationType(env->getStaticObjectField(cls, "L6X", "Lorg/orekit/gnss/ObservationType;"));
          L6Z = new ObservationType(env->getStaticObjectField(cls, "L6Z", "Lorg/orekit/gnss/ObservationType;"));
          L7 = new ObservationType(env->getStaticObjectField(cls, "L7", "Lorg/orekit/gnss/ObservationType;"));
          L7D = new ObservationType(env->getStaticObjectField(cls, "L7D", "Lorg/orekit/gnss/ObservationType;"));
          L7I = new ObservationType(env->getStaticObjectField(cls, "L7I", "Lorg/orekit/gnss/ObservationType;"));
          L7P = new ObservationType(env->getStaticObjectField(cls, "L7P", "Lorg/orekit/gnss/ObservationType;"));
          L7Q = new ObservationType(env->getStaticObjectField(cls, "L7Q", "Lorg/orekit/gnss/ObservationType;"));
          L7X = new ObservationType(env->getStaticObjectField(cls, "L7X", "Lorg/orekit/gnss/ObservationType;"));
          L7Z = new ObservationType(env->getStaticObjectField(cls, "L7Z", "Lorg/orekit/gnss/ObservationType;"));
          L8 = new ObservationType(env->getStaticObjectField(cls, "L8", "Lorg/orekit/gnss/ObservationType;"));
          L8D = new ObservationType(env->getStaticObjectField(cls, "L8D", "Lorg/orekit/gnss/ObservationType;"));
          L8I = new ObservationType(env->getStaticObjectField(cls, "L8I", "Lorg/orekit/gnss/ObservationType;"));
          L8P = new ObservationType(env->getStaticObjectField(cls, "L8P", "Lorg/orekit/gnss/ObservationType;"));
          L8Q = new ObservationType(env->getStaticObjectField(cls, "L8Q", "Lorg/orekit/gnss/ObservationType;"));
          L8X = new ObservationType(env->getStaticObjectField(cls, "L8X", "Lorg/orekit/gnss/ObservationType;"));
          L9A = new ObservationType(env->getStaticObjectField(cls, "L9A", "Lorg/orekit/gnss/ObservationType;"));
          L9B = new ObservationType(env->getStaticObjectField(cls, "L9B", "Lorg/orekit/gnss/ObservationType;"));
          L9C = new ObservationType(env->getStaticObjectField(cls, "L9C", "Lorg/orekit/gnss/ObservationType;"));
          L9X = new ObservationType(env->getStaticObjectField(cls, "L9X", "Lorg/orekit/gnss/ObservationType;"));
          LA = new ObservationType(env->getStaticObjectField(cls, "LA", "Lorg/orekit/gnss/ObservationType;"));
          LB = new ObservationType(env->getStaticObjectField(cls, "LB", "Lorg/orekit/gnss/ObservationType;"));
          LC = new ObservationType(env->getStaticObjectField(cls, "LC", "Lorg/orekit/gnss/ObservationType;"));
          LD = new ObservationType(env->getStaticObjectField(cls, "LD", "Lorg/orekit/gnss/ObservationType;"));
          P1 = new ObservationType(env->getStaticObjectField(cls, "P1", "Lorg/orekit/gnss/ObservationType;"));
          P2 = new ObservationType(env->getStaticObjectField(cls, "P2", "Lorg/orekit/gnss/ObservationType;"));
          S0 = new ObservationType(env->getStaticObjectField(cls, "S0", "Lorg/orekit/gnss/ObservationType;"));
          S1 = new ObservationType(env->getStaticObjectField(cls, "S1", "Lorg/orekit/gnss/ObservationType;"));
          S1A = new ObservationType(env->getStaticObjectField(cls, "S1A", "Lorg/orekit/gnss/ObservationType;"));
          S1B = new ObservationType(env->getStaticObjectField(cls, "S1B", "Lorg/orekit/gnss/ObservationType;"));
          S1C = new ObservationType(env->getStaticObjectField(cls, "S1C", "Lorg/orekit/gnss/ObservationType;"));
          S1D = new ObservationType(env->getStaticObjectField(cls, "S1D", "Lorg/orekit/gnss/ObservationType;"));
          S1E = new ObservationType(env->getStaticObjectField(cls, "S1E", "Lorg/orekit/gnss/ObservationType;"));
          S1I = new ObservationType(env->getStaticObjectField(cls, "S1I", "Lorg/orekit/gnss/ObservationType;"));
          S1L = new ObservationType(env->getStaticObjectField(cls, "S1L", "Lorg/orekit/gnss/ObservationType;"));
          S1M = new ObservationType(env->getStaticObjectField(cls, "S1M", "Lorg/orekit/gnss/ObservationType;"));
          S1N = new ObservationType(env->getStaticObjectField(cls, "S1N", "Lorg/orekit/gnss/ObservationType;"));
          S1P = new ObservationType(env->getStaticObjectField(cls, "S1P", "Lorg/orekit/gnss/ObservationType;"));
          S1S = new ObservationType(env->getStaticObjectField(cls, "S1S", "Lorg/orekit/gnss/ObservationType;"));
          S1W = new ObservationType(env->getStaticObjectField(cls, "S1W", "Lorg/orekit/gnss/ObservationType;"));
          S1X = new ObservationType(env->getStaticObjectField(cls, "S1X", "Lorg/orekit/gnss/ObservationType;"));
          S1Y = new ObservationType(env->getStaticObjectField(cls, "S1Y", "Lorg/orekit/gnss/ObservationType;"));
          S1Z = new ObservationType(env->getStaticObjectField(cls, "S1Z", "Lorg/orekit/gnss/ObservationType;"));
          S2 = new ObservationType(env->getStaticObjectField(cls, "S2", "Lorg/orekit/gnss/ObservationType;"));
          S2C = new ObservationType(env->getStaticObjectField(cls, "S2C", "Lorg/orekit/gnss/ObservationType;"));
          S2D = new ObservationType(env->getStaticObjectField(cls, "S2D", "Lorg/orekit/gnss/ObservationType;"));
          S2I = new ObservationType(env->getStaticObjectField(cls, "S2I", "Lorg/orekit/gnss/ObservationType;"));
          S2L = new ObservationType(env->getStaticObjectField(cls, "S2L", "Lorg/orekit/gnss/ObservationType;"));
          S2M = new ObservationType(env->getStaticObjectField(cls, "S2M", "Lorg/orekit/gnss/ObservationType;"));
          S2N = new ObservationType(env->getStaticObjectField(cls, "S2N", "Lorg/orekit/gnss/ObservationType;"));
          S2P = new ObservationType(env->getStaticObjectField(cls, "S2P", "Lorg/orekit/gnss/ObservationType;"));
          S2Q = new ObservationType(env->getStaticObjectField(cls, "S2Q", "Lorg/orekit/gnss/ObservationType;"));
          S2S = new ObservationType(env->getStaticObjectField(cls, "S2S", "Lorg/orekit/gnss/ObservationType;"));
          S2W = new ObservationType(env->getStaticObjectField(cls, "S2W", "Lorg/orekit/gnss/ObservationType;"));
          S2X = new ObservationType(env->getStaticObjectField(cls, "S2X", "Lorg/orekit/gnss/ObservationType;"));
          S2Y = new ObservationType(env->getStaticObjectField(cls, "S2Y", "Lorg/orekit/gnss/ObservationType;"));
          S3I = new ObservationType(env->getStaticObjectField(cls, "S3I", "Lorg/orekit/gnss/ObservationType;"));
          S3Q = new ObservationType(env->getStaticObjectField(cls, "S3Q", "Lorg/orekit/gnss/ObservationType;"));
          S3X = new ObservationType(env->getStaticObjectField(cls, "S3X", "Lorg/orekit/gnss/ObservationType;"));
          S4A = new ObservationType(env->getStaticObjectField(cls, "S4A", "Lorg/orekit/gnss/ObservationType;"));
          S4B = new ObservationType(env->getStaticObjectField(cls, "S4B", "Lorg/orekit/gnss/ObservationType;"));
          S4X = new ObservationType(env->getStaticObjectField(cls, "S4X", "Lorg/orekit/gnss/ObservationType;"));
          S5 = new ObservationType(env->getStaticObjectField(cls, "S5", "Lorg/orekit/gnss/ObservationType;"));
          S5A = new ObservationType(env->getStaticObjectField(cls, "S5A", "Lorg/orekit/gnss/ObservationType;"));
          S5B = new ObservationType(env->getStaticObjectField(cls, "S5B", "Lorg/orekit/gnss/ObservationType;"));
          S5C = new ObservationType(env->getStaticObjectField(cls, "S5C", "Lorg/orekit/gnss/ObservationType;"));
          S5D = new ObservationType(env->getStaticObjectField(cls, "S5D", "Lorg/orekit/gnss/ObservationType;"));
          S5I = new ObservationType(env->getStaticObjectField(cls, "S5I", "Lorg/orekit/gnss/ObservationType;"));
          S5P = new ObservationType(env->getStaticObjectField(cls, "S5P", "Lorg/orekit/gnss/ObservationType;"));
          S5Q = new ObservationType(env->getStaticObjectField(cls, "S5Q", "Lorg/orekit/gnss/ObservationType;"));
          S5X = new ObservationType(env->getStaticObjectField(cls, "S5X", "Lorg/orekit/gnss/ObservationType;"));
          S5Z = new ObservationType(env->getStaticObjectField(cls, "S5Z", "Lorg/orekit/gnss/ObservationType;"));
          S6 = new ObservationType(env->getStaticObjectField(cls, "S6", "Lorg/orekit/gnss/ObservationType;"));
          S6A = new ObservationType(env->getStaticObjectField(cls, "S6A", "Lorg/orekit/gnss/ObservationType;"));
          S6B = new ObservationType(env->getStaticObjectField(cls, "S6B", "Lorg/orekit/gnss/ObservationType;"));
          S6C = new ObservationType(env->getStaticObjectField(cls, "S6C", "Lorg/orekit/gnss/ObservationType;"));
          S6D = new ObservationType(env->getStaticObjectField(cls, "S6D", "Lorg/orekit/gnss/ObservationType;"));
          S6E = new ObservationType(env->getStaticObjectField(cls, "S6E", "Lorg/orekit/gnss/ObservationType;"));
          S6I = new ObservationType(env->getStaticObjectField(cls, "S6I", "Lorg/orekit/gnss/ObservationType;"));
          S6L = new ObservationType(env->getStaticObjectField(cls, "S6L", "Lorg/orekit/gnss/ObservationType;"));
          S6P = new ObservationType(env->getStaticObjectField(cls, "S6P", "Lorg/orekit/gnss/ObservationType;"));
          S6Q = new ObservationType(env->getStaticObjectField(cls, "S6Q", "Lorg/orekit/gnss/ObservationType;"));
          S6S = new ObservationType(env->getStaticObjectField(cls, "S6S", "Lorg/orekit/gnss/ObservationType;"));
          S6X = new ObservationType(env->getStaticObjectField(cls, "S6X", "Lorg/orekit/gnss/ObservationType;"));
          S6Z = new ObservationType(env->getStaticObjectField(cls, "S6Z", "Lorg/orekit/gnss/ObservationType;"));
          S7 = new ObservationType(env->getStaticObjectField(cls, "S7", "Lorg/orekit/gnss/ObservationType;"));
          S7D = new ObservationType(env->getStaticObjectField(cls, "S7D", "Lorg/orekit/gnss/ObservationType;"));
          S7I = new ObservationType(env->getStaticObjectField(cls, "S7I", "Lorg/orekit/gnss/ObservationType;"));
          S7P = new ObservationType(env->getStaticObjectField(cls, "S7P", "Lorg/orekit/gnss/ObservationType;"));
          S7Q = new ObservationType(env->getStaticObjectField(cls, "S7Q", "Lorg/orekit/gnss/ObservationType;"));
          S7X = new ObservationType(env->getStaticObjectField(cls, "S7X", "Lorg/orekit/gnss/ObservationType;"));
          S7Z = new ObservationType(env->getStaticObjectField(cls, "S7Z", "Lorg/orekit/gnss/ObservationType;"));
          S8 = new ObservationType(env->getStaticObjectField(cls, "S8", "Lorg/orekit/gnss/ObservationType;"));
          S8D = new ObservationType(env->getStaticObjectField(cls, "S8D", "Lorg/orekit/gnss/ObservationType;"));
          S8I = new ObservationType(env->getStaticObjectField(cls, "S8I", "Lorg/orekit/gnss/ObservationType;"));
          S8P = new ObservationType(env->getStaticObjectField(cls, "S8P", "Lorg/orekit/gnss/ObservationType;"));
          S8Q = new ObservationType(env->getStaticObjectField(cls, "S8Q", "Lorg/orekit/gnss/ObservationType;"));
          S8X = new ObservationType(env->getStaticObjectField(cls, "S8X", "Lorg/orekit/gnss/ObservationType;"));
          S9A = new ObservationType(env->getStaticObjectField(cls, "S9A", "Lorg/orekit/gnss/ObservationType;"));
          S9B = new ObservationType(env->getStaticObjectField(cls, "S9B", "Lorg/orekit/gnss/ObservationType;"));
          S9C = new ObservationType(env->getStaticObjectField(cls, "S9C", "Lorg/orekit/gnss/ObservationType;"));
          S9X = new ObservationType(env->getStaticObjectField(cls, "S9X", "Lorg/orekit/gnss/ObservationType;"));
          SA = new ObservationType(env->getStaticObjectField(cls, "SA", "Lorg/orekit/gnss/ObservationType;"));
          SB = new ObservationType(env->getStaticObjectField(cls, "SB", "Lorg/orekit/gnss/ObservationType;"));
          SC = new ObservationType(env->getStaticObjectField(cls, "SC", "Lorg/orekit/gnss/ObservationType;"));
          SD = new ObservationType(env->getStaticObjectField(cls, "SD", "Lorg/orekit/gnss/ObservationType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::gnss::Frequency ObservationType::getFrequency(const ::org::orekit::gnss::SatelliteSystem & a0) const
      {
        return ::org::orekit::gnss::Frequency(env->callObjectMethod(this$, mids$[mid_getFrequency_d6f69a0e1934b6e3], a0.this$));
      }

      ::org::orekit::gnss::MeasurementType ObservationType::getMeasurementType() const
      {
        return ::org::orekit::gnss::MeasurementType(env->callObjectMethod(this$, mids$[mid_getMeasurementType_8c0a6decf9468215]));
      }

      ::org::orekit::gnss::SignalCode ObservationType::getSignalCode() const
      {
        return ::org::orekit::gnss::SignalCode(env->callObjectMethod(this$, mids$[mid_getSignalCode_c3b819016e2efc95]));
      }

      ObservationType ObservationType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ObservationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f33e58d3107f7f14], a0.this$));
      }

      JArray< ObservationType > ObservationType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ObservationType >(env->callStaticObjectMethod(cls, mids$[mid_values_7b41c8c7af6242d9]));
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
      static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args);
      static PyObject *t_ObservationType_getFrequency(t_ObservationType *self, PyObject *arg);
      static PyObject *t_ObservationType_getMeasurementType(t_ObservationType *self);
      static PyObject *t_ObservationType_getSignalCode(t_ObservationType *self);
      static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ObservationType_values(PyTypeObject *type);
      static PyObject *t_ObservationType_get__measurementType(t_ObservationType *self, void *data);
      static PyObject *t_ObservationType_get__signalCode(t_ObservationType *self, void *data);
      static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data);
      static PyGetSetDef t_ObservationType__fields_[] = {
        DECLARE_GET_FIELD(t_ObservationType, measurementType),
        DECLARE_GET_FIELD(t_ObservationType, signalCode),
        DECLARE_GET_FIELD(t_ObservationType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ObservationType__methods_[] = {
        DECLARE_METHOD(t_ObservationType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, of_, METH_VARARGS),
        DECLARE_METHOD(t_ObservationType, getFrequency, METH_O),
        DECLARE_METHOD(t_ObservationType, getMeasurementType, METH_NOARGS),
        DECLARE_METHOD(t_ObservationType, getSignalCode, METH_NOARGS),
        DECLARE_METHOD(t_ObservationType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ObservationType)[] = {
        { Py_tp_methods, t_ObservationType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ObservationType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ObservationType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ObservationType, t_ObservationType, ObservationType);
      PyObject *t_ObservationType::wrap_Object(const ObservationType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationType *self = (t_ObservationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ObservationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationType *self = (t_ObservationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ObservationType::install(PyObject *module)
      {
        installType(&PY_TYPE(ObservationType), &PY_TYPE_DEF(ObservationType), module, "ObservationType", 0);
      }

      void t_ObservationType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "class_", make_descriptor(ObservationType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "wrapfn_", make_descriptor(t_ObservationType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "boxfn_", make_descriptor(boxObject));
        env->getClass(ObservationType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "P1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::P1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "P2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::P2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SD)));
      }

      static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ObservationType::initializeClass, 1)))
          return NULL;
        return t_ObservationType::wrap_Object(ObservationType(((t_ObservationType *) arg)->object.this$));
      }
      static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ObservationType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ObservationType_getFrequency(t_ObservationType *self, PyObject *arg)
      {
        ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::gnss::Frequency result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
        {
          OBJ_CALL(result = self->object.getFrequency(a0));
          return ::org::orekit::gnss::t_Frequency::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrequency", arg);
        return NULL;
      }

      static PyObject *t_ObservationType_getMeasurementType(t_ObservationType *self)
      {
        ::org::orekit::gnss::MeasurementType result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeasurementType());
        return ::org::orekit::gnss::t_MeasurementType::wrap_Object(result);
      }

      static PyObject *t_ObservationType_getSignalCode(t_ObservationType *self)
      {
        ::org::orekit::gnss::SignalCode result((jobject) NULL);
        OBJ_CALL(result = self->object.getSignalCode());
        return ::org::orekit::gnss::t_SignalCode::wrap_Object(result);
      }

      static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ObservationType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::ObservationType::valueOf(a0));
          return t_ObservationType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ObservationType_values(PyTypeObject *type)
      {
        JArray< ObservationType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::ObservationType::values());
        return JArray<jobject>(result.this$).wrap(t_ObservationType::wrap_jobject);
      }
      static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ObservationType_get__measurementType(t_ObservationType *self, void *data)
      {
        ::org::orekit::gnss::MeasurementType value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeasurementType());
        return ::org::orekit::gnss::t_MeasurementType::wrap_Object(value);
      }

      static PyObject *t_ObservationType_get__signalCode(t_ObservationType *self, void *data)
      {
        ::org::orekit::gnss::SignalCode value((jobject) NULL);
        OBJ_CALL(value = self->object.getSignalCode());
        return ::org::orekit::gnss::t_SignalCode::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *MultivariateDifferentiableVectorFunction::class$ = NULL;
        jmethodID *MultivariateDifferentiableVectorFunction::mids$ = NULL;
        bool MultivariateDifferentiableVectorFunction::live$ = false;

        jclass MultivariateDifferentiableVectorFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_01b1fd3804ba68cc] = env->getMethodID(cls, "value", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > MultivariateDifferentiableVectorFunction::value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure >(env->callObjectMethod(this$, mids$[mid_value_01b1fd3804ba68cc], a0.this$));
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
        static PyObject *t_MultivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableVectorFunction_value(t_MultivariateDifferentiableVectorFunction *self, PyObject *args);

        static PyMethodDef t_MultivariateDifferentiableVectorFunction__methods_[] = {
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateDifferentiableVectorFunction)[] = {
          { Py_tp_methods, t_MultivariateDifferentiableVectorFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateDifferentiableVectorFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::MultivariateVectorFunction),
          NULL
        };

        DEFINE_TYPE(MultivariateDifferentiableVectorFunction, t_MultivariateDifferentiableVectorFunction, MultivariateDifferentiableVectorFunction);

        void t_MultivariateDifferentiableVectorFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateDifferentiableVectorFunction), &PY_TYPE_DEF(MultivariateDifferentiableVectorFunction), module, "MultivariateDifferentiableVectorFunction", 0);
        }

        void t_MultivariateDifferentiableVectorFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "class_", make_descriptor(MultivariateDifferentiableVectorFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "wrapfn_", make_descriptor(t_MultivariateDifferentiableVectorFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateDifferentiableVectorFunction::initializeClass, 1)))
            return NULL;
          return t_MultivariateDifferentiableVectorFunction::wrap_Object(MultivariateDifferentiableVectorFunction(((t_MultivariateDifferentiableVectorFunction *) arg)->object.this$));
        }
        static PyObject *t_MultivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateDifferentiableVectorFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateDifferentiableVectorFunction_value(t_MultivariateDifferentiableVectorFunction *self, PyObject *args)
        {
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a0((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_jobject);
          }

          return callSuper(PY_TYPE(MultivariateDifferentiableVectorFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/DefaultEncounterLOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *DefaultEncounterLOF::class$ = NULL;
        jmethodID *DefaultEncounterLOF::mids$ = NULL;
        bool DefaultEncounterLOF::live$ = false;

        jclass DefaultEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/DefaultEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3e711dd03f656c50] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;)V");
            mids$[mid_init$_e7272d224e58d28f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_getAxisNormalToCollisionPlane_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_98221d2e63674019] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_rotationFromInertial_bf95090cc5e2a8d4] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_8851faa33644affd] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DefaultEncounterLOF::DefaultEncounterLOF(const ::org::orekit::utils::FieldPVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_3e711dd03f656c50, a0.this$)) {}

        DefaultEncounterLOF::DefaultEncounterLOF(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_e7272d224e58d28f, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DefaultEncounterLOF::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DefaultEncounterLOF::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_98221d2e63674019], a0.this$));
        }

        ::java::lang::String DefaultEncounterLOF::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation DefaultEncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_bf95090cc5e2a8d4], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation DefaultEncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_8851faa33644affd], a0.this$, a1.this$, a2.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_DefaultEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DefaultEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DefaultEncounterLOF_init_(t_DefaultEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DefaultEncounterLOF_getAxisNormalToCollisionPlane(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_getName(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_rotationFromInertial(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_get__axisNormalToCollisionPlane(t_DefaultEncounterLOF *self, void *data);
        static PyObject *t_DefaultEncounterLOF_get__name(t_DefaultEncounterLOF *self, void *data);
        static PyGetSetDef t_DefaultEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_DefaultEncounterLOF, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_DefaultEncounterLOF, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DefaultEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_DefaultEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DefaultEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DefaultEncounterLOF, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_DefaultEncounterLOF, getName, METH_VARARGS),
          DECLARE_METHOD(t_DefaultEncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DefaultEncounterLOF)[] = {
          { Py_tp_methods, t_DefaultEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_DefaultEncounterLOF_init_ },
          { Py_tp_getset, t_DefaultEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DefaultEncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(DefaultEncounterLOF, t_DefaultEncounterLOF, DefaultEncounterLOF);

        void t_DefaultEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(DefaultEncounterLOF), &PY_TYPE_DEF(DefaultEncounterLOF), module, "DefaultEncounterLOF", 0);
        }

        void t_DefaultEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "class_", make_descriptor(DefaultEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "wrapfn_", make_descriptor(t_DefaultEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DefaultEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DefaultEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_DefaultEncounterLOF::wrap_Object(DefaultEncounterLOF(((t_DefaultEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_DefaultEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DefaultEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DefaultEncounterLOF_init_(t_DefaultEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              DefaultEncounterLOF object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                INT_CALL(object = DefaultEncounterLOF(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              DefaultEncounterLOF object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                INT_CALL(object = DefaultEncounterLOF(a0));
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

        static PyObject *t_DefaultEncounterLOF_getAxisNormalToCollisionPlane(t_DefaultEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "getAxisNormalToCollisionPlane", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_getName(t_DefaultEncounterLOF *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "getName", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_rotationFromInertial(t_DefaultEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_get__axisNormalToCollisionPlane(t_DefaultEncounterLOF *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_DefaultEncounterLOF_get__name(t_DefaultEncounterLOF *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonAbstractGenerator::class$ = NULL;
            jmethodID *PythonAbstractGenerator::mids$ = NULL;
            bool PythonAbstractGenerator::live$ = false;

            jclass PythonAbstractGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c8f0b9579f6d133f] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;DZ)V");
                mids$[mid_endMessage_734b91ac30d5f9b4] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormat_e4c64bde02ca34c3] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_startMessage_03ff9b80a9f63d81] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_0e7c3032c7c93ed3] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_bae21004607fffc6] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractGenerator::PythonAbstractGenerator(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, jdouble a2, jboolean a3) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_c8f0b9579f6d133f, a0.this$, a1.this$, a2, a3)) {}

            void PythonAbstractGenerator::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonAbstractGenerator::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonAbstractGenerator::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          namespace generation {
            static PyObject *t_PythonAbstractGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAbstractGenerator_init_(t_PythonAbstractGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractGenerator_finalize(t_PythonAbstractGenerator *self);
            static PyObject *t_PythonAbstractGenerator_pythonExtension(t_PythonAbstractGenerator *self, PyObject *args);
            static void JNICALL t_PythonAbstractGenerator_endMessage0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonAbstractGenerator_getFormat1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGenerator_startMessage3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static void JNICALL t_PythonAbstractGenerator_writeComments4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonAbstractGenerator_writeEntry5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static PyObject *t_PythonAbstractGenerator_get__self(t_PythonAbstractGenerator *self, void *data);
            static PyGetSetDef t_PythonAbstractGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractGenerator, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractGenerator__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGenerator, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractGenerator, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGenerator)[] = {
              { Py_tp_methods, t_PythonAbstractGenerator__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractGenerator_init_ },
              { Py_tp_getset, t_PythonAbstractGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(PythonAbstractGenerator, t_PythonAbstractGenerator, PythonAbstractGenerator);

            void t_PythonAbstractGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractGenerator), &PY_TYPE_DEF(PythonAbstractGenerator), module, "PythonAbstractGenerator", 1);
            }

            void t_PythonAbstractGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "class_", make_descriptor(PythonAbstractGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "wrapfn_", make_descriptor(t_PythonAbstractGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractGenerator::initializeClass);
              JNINativeMethod methods[] = {
                { "endMessage", "(Ljava/lang/String;)V", (void *) t_PythonAbstractGenerator_endMessage0 },
                { "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonAbstractGenerator_getFormat1 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractGenerator_pythonDecRef2 },
                { "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V", (void *) t_PythonAbstractGenerator_startMessage3 },
                { "writeComments", "(Ljava/util/List;)V", (void *) t_PythonAbstractGenerator_writeComments4 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonAbstractGenerator_writeEntry5 },
              };
              env->registerNatives(cls, methods, 6);
            }

            static PyObject *t_PythonAbstractGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractGenerator::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractGenerator::wrap_Object(PythonAbstractGenerator(((t_PythonAbstractGenerator *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAbstractGenerator_init_(t_PythonAbstractGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jboolean a3;
              PythonAbstractGenerator object((jobject) NULL);

              if (!parseArgs(args, "ksDZ", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractGenerator(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractGenerator_finalize(t_PythonAbstractGenerator *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractGenerator_pythonExtension(t_PythonAbstractGenerator *self, PyObject *args)
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

            static void JNICALL t_PythonAbstractGenerator_endMessage0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "endMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonAbstractGenerator_getFormat1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFormat", result);
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

            static void JNICALL t_PythonAbstractGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractGenerator_startMessage3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *result = PyObject_CallMethod(obj, "startMessage", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonAbstractGenerator_writeComments4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeComments", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonAbstractGenerator_writeEntry5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractGenerator_get__self(t_PythonAbstractGenerator *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GalileoScale::class$ = NULL;
      jmethodID *GalileoScale::mids$ = NULL;
      bool GalileoScale::live$ = false;

      jclass GalileoScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GalileoScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e7a49f02c43fd893] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GalileoScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble GalileoScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GalileoScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble GalileoScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::java::lang::String GalileoScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_GalileoScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GalileoScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GalileoScale_getName(t_GalileoScale *self);
      static PyObject *t_GalileoScale_offsetFromTAI(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_offsetToTAI(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_toString(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_get__name(t_GalileoScale *self, void *data);
      static PyGetSetDef t_GalileoScale__fields_[] = {
        DECLARE_GET_FIELD(t_GalileoScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GalileoScale__methods_[] = {
        DECLARE_METHOD(t_GalileoScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GalileoScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GalileoScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GalileoScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GalileoScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GalileoScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GalileoScale)[] = {
        { Py_tp_methods, t_GalileoScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GalileoScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GalileoScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GalileoScale, t_GalileoScale, GalileoScale);

      void t_GalileoScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GalileoScale), &PY_TYPE_DEF(GalileoScale), module, "GalileoScale", 0);
      }

      void t_GalileoScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "class_", make_descriptor(GalileoScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "wrapfn_", make_descriptor(t_GalileoScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GalileoScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GalileoScale::initializeClass, 1)))
          return NULL;
        return t_GalileoScale::wrap_Object(GalileoScale(((t_GalileoScale *) arg)->object.this$));
      }
      static PyObject *t_GalileoScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GalileoScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GalileoScale_getName(t_GalileoScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GalileoScale_offsetFromTAI(t_GalileoScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GalileoScale_offsetToTAI(t_GalileoScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GalileoScale_toString(t_GalileoScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GalileoScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GalileoScale_get__name(t_GalileoScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/fitting/MultivariateNormalMixtureExpectationMaximization.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {

        ::java::lang::Class *MultivariateNormalMixtureExpectationMaximization::class$ = NULL;
        jmethodID *MultivariateNormalMixtureExpectationMaximization::mids$ = NULL;
        bool MultivariateNormalMixtureExpectationMaximization::live$ = false;

        jclass MultivariateNormalMixtureExpectationMaximization::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/fitting/MultivariateNormalMixtureExpectationMaximization");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_07adb42ffaa97d31] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_estimate_2a9aa470bb57f929] = env->getStaticMethodID(cls, "estimate", "([[DI)Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;");
            mids$[mid_fit_7654a02307c9e59a] = env->getMethodID(cls, "fit", "(Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;)V");
            mids$[mid_fit_14b53135a588cc68] = env->getMethodID(cls, "fit", "(Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;ID)V");
            mids$[mid_getFittedModel_e2481b5744d79323] = env->getMethodID(cls, "getFittedModel", "()Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;");
            mids$[mid_getLogLikelihood_b74f83833fdad017] = env->getMethodID(cls, "getLogLikelihood", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateNormalMixtureExpectationMaximization::MultivariateNormalMixtureExpectationMaximization(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07adb42ffaa97d31, a0.this$)) {}

        ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution MultivariateNormalMixtureExpectationMaximization::estimate(const JArray< JArray< jdouble > > & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution(env->callStaticObjectMethod(cls, mids$[mid_estimate_2a9aa470bb57f929], a0.this$, a1));
        }

        void MultivariateNormalMixtureExpectationMaximization::fit(const ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_fit_7654a02307c9e59a], a0.this$);
        }

        void MultivariateNormalMixtureExpectationMaximization::fit(const ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution & a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_fit_14b53135a588cc68], a0.this$, a1, a2);
        }

        ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution MultivariateNormalMixtureExpectationMaximization::getFittedModel() const
        {
          return ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution(env->callObjectMethod(this$, mids$[mid_getFittedModel_e2481b5744d79323]));
        }

        jdouble MultivariateNormalMixtureExpectationMaximization::getLogLikelihood() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLogLikelihood_b74f83833fdad017]);
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
      namespace fitting {
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateNormalMixtureExpectationMaximization_init_(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_estimate(PyTypeObject *type, PyObject *args);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_fit(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getFittedModel(t_MultivariateNormalMixtureExpectationMaximization *self);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getLogLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__fittedModel(t_MultivariateNormalMixtureExpectationMaximization *self, void *data);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__logLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self, void *data);
        static PyGetSetDef t_MultivariateNormalMixtureExpectationMaximization__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateNormalMixtureExpectationMaximization, fittedModel),
          DECLARE_GET_FIELD(t_MultivariateNormalMixtureExpectationMaximization, logLikelihood),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateNormalMixtureExpectationMaximization__methods_[] = {
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, estimate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, fit, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, getFittedModel, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, getLogLikelihood, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateNormalMixtureExpectationMaximization)[] = {
          { Py_tp_methods, t_MultivariateNormalMixtureExpectationMaximization__methods_ },
          { Py_tp_init, (void *) t_MultivariateNormalMixtureExpectationMaximization_init_ },
          { Py_tp_getset, t_MultivariateNormalMixtureExpectationMaximization__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateNormalMixtureExpectationMaximization)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateNormalMixtureExpectationMaximization, t_MultivariateNormalMixtureExpectationMaximization, MultivariateNormalMixtureExpectationMaximization);

        void t_MultivariateNormalMixtureExpectationMaximization::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateNormalMixtureExpectationMaximization), &PY_TYPE_DEF(MultivariateNormalMixtureExpectationMaximization), module, "MultivariateNormalMixtureExpectationMaximization", 0);
        }

        void t_MultivariateNormalMixtureExpectationMaximization::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalMixtureExpectationMaximization), "class_", make_descriptor(MultivariateNormalMixtureExpectationMaximization::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalMixtureExpectationMaximization), "wrapfn_", make_descriptor(t_MultivariateNormalMixtureExpectationMaximization::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalMixtureExpectationMaximization), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateNormalMixtureExpectationMaximization::initializeClass, 1)))
            return NULL;
          return t_MultivariateNormalMixtureExpectationMaximization::wrap_Object(MultivariateNormalMixtureExpectationMaximization(((t_MultivariateNormalMixtureExpectationMaximization *) arg)->object.this$));
        }
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateNormalMixtureExpectationMaximization::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateNormalMixtureExpectationMaximization_init_(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args, PyObject *kwds)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          MultivariateNormalMixtureExpectationMaximization object((jobject) NULL);

          if (!parseArgs(args, "[[D", &a0))
          {
            INT_CALL(object = MultivariateNormalMixtureExpectationMaximization(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_estimate(PyTypeObject *type, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          jint a1;
          ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution result((jobject) NULL);

          if (!parseArgs(args, "[[DI", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::fitting::MultivariateNormalMixtureExpectationMaximization::estimate(a0, a1));
            return ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "estimate", args);
          return NULL;
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_fit(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution::initializeClass, &a0, &p0, ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::parameters_))
              {
                OBJ_CALL(self->object.fit(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "KID", ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution::initializeClass, &a0, &p0, ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::parameters_, &a1, &a2))
              {
                OBJ_CALL(self->object.fit(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "fit", args);
          return NULL;
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getFittedModel(t_MultivariateNormalMixtureExpectationMaximization *self)
        {
          ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution result((jobject) NULL);
          OBJ_CALL(result = self->object.getFittedModel());
          return ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::wrap_Object(result);
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getLogLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLogLikelihood());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__fittedModel(t_MultivariateNormalMixtureExpectationMaximization *self, void *data)
        {
          ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution value((jobject) NULL);
          OBJ_CALL(value = self->object.getFittedModel());
          return ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::wrap_Object(value);
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__logLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLogLikelihood());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince54Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince54Integrator::class$ = NULL;
        jmethodID *DormandPrince54Integrator::mids$ = NULL;
        bool DormandPrince54Integrator::live$ = false;

        jclass DormandPrince54Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince54Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aa31b8b89ee72c31] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_3b7b373db8e7887f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_25e1757a36c4dde2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_25e1757a36c4dde2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_51b6499481fc39b3] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince54StateInterpolator;");
            mids$[mid_estimateError_30c238558e44050a] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54Integrator::DormandPrince54Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_aa31b8b89ee72c31, a0, a1, a2.this$, a3.this$)) {}

        DormandPrince54Integrator::DormandPrince54Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > DormandPrince54Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_3b7b373db8e7887f]));
        }

        JArray< jdouble > DormandPrince54Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_25e1757a36c4dde2]));
        }

        JArray< jdouble > DormandPrince54Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_25e1757a36c4dde2]));
        }

        jint DormandPrince54Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
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
        static PyObject *t_DormandPrince54Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince54Integrator_init_(t_DormandPrince54Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54Integrator_getA(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getB(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getC(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getOrder(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_get__a(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__b(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__c(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__order(t_DormandPrince54Integrator *self, void *data);
        static PyGetSetDef t_DormandPrince54Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, a),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, b),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, c),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54Integrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54Integrator)[] = {
          { Py_tp_methods, t_DormandPrince54Integrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54Integrator_init_ },
          { Py_tp_getset, t_DormandPrince54Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince54Integrator, t_DormandPrince54Integrator, DormandPrince54Integrator);

        void t_DormandPrince54Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54Integrator), &PY_TYPE_DEF(DormandPrince54Integrator), module, "DormandPrince54Integrator", 0);
        }

        void t_DormandPrince54Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "class_", make_descriptor(DormandPrince54Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "wrapfn_", make_descriptor(t_DormandPrince54Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54Integrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54Integrator::wrap_Object(DormandPrince54Integrator(((t_DormandPrince54Integrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince54Integrator_init_(t_DormandPrince54Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              DormandPrince54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince54Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              DormandPrince54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince54Integrator(a0, a1, a2, a3));
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

        static PyObject *t_DormandPrince54Integrator_getA(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getB(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getC(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getOrder(t_DormandPrince54Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_get__a(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince54Integrator_get__b(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_DormandPrince54Integrator_get__c(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_DormandPrince54Integrator_get__order(t_DormandPrince54Integrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmWriter::class$ = NULL;
              jmethodID *AcmWriter::mids$ = NULL;
              bool AcmWriter::live$ = false;
              jdouble AcmWriter::CCSDS_ACM_VERS = (jdouble) 0;
              jint AcmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass AcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_5df9b2a3aa97175c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_writeSegmentContent_309d7ce7156c8c23] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_ACM_VERS = env->getStaticDoubleField(cls, "CCSDS_ACM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmWriter::AcmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_5df9b2a3aa97175c, a0.this$, a1.this$)) {}
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
              static PyObject *t_AcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmWriter_of_(t_AcmWriter *self, PyObject *args);
              static int t_AcmWriter_init_(t_AcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmWriter_get__parameters_(t_AcmWriter *self, void *data);
              static PyGetSetDef t_AcmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_AcmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmWriter__methods_[] = {
                DECLARE_METHOD(t_AcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmWriter)[] = {
                { Py_tp_methods, t_AcmWriter__methods_ },
                { Py_tp_init, (void *) t_AcmWriter_init_ },
                { Py_tp_getset, t_AcmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(AcmWriter, t_AcmWriter, AcmWriter);
              PyObject *t_AcmWriter::wrap_Object(const AcmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AcmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmWriter *self = (t_AcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_AcmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AcmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmWriter *self = (t_AcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_AcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmWriter), &PY_TYPE_DEF(AcmWriter), module, "AcmWriter", 0);
              }

              void t_AcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "class_", make_descriptor(AcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "wrapfn_", make_descriptor(t_AcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "CCSDS_ACM_VERS", make_descriptor(AcmWriter::CCSDS_ACM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "KVN_PADDING_WIDTH", make_descriptor(AcmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_AcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmWriter::initializeClass, 1)))
                  return NULL;
                return t_AcmWriter::wrap_Object(AcmWriter(((t_AcmWriter *) arg)->object.this$));
              }
              static PyObject *t_AcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmWriter_of_(t_AcmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AcmWriter_init_(t_AcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                AcmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
                {
                  INT_CALL(object = AcmWriter(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(Acm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_AcmWriter_get__parameters_(t_AcmWriter *self, void *data)
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
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *Tile$Location::class$ = NULL;
        jmethodID *Tile$Location::mids$ = NULL;
        bool Tile$Location::live$ = false;
        Tile$Location *Tile$Location::EAST = NULL;
        Tile$Location *Tile$Location::HAS_INTERPOLATION_NEIGHBORS = NULL;
        Tile$Location *Tile$Location::NORTH = NULL;
        Tile$Location *Tile$Location::NORTH_EAST = NULL;
        Tile$Location *Tile$Location::NORTH_WEST = NULL;
        Tile$Location *Tile$Location::SOUTH = NULL;
        Tile$Location *Tile$Location::SOUTH_EAST = NULL;
        Tile$Location *Tile$Location::SOUTH_WEST = NULL;
        Tile$Location *Tile$Location::WEST = NULL;

        jclass Tile$Location::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/Tile$Location");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_64b752fdb32980ea] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_values_74e8b448ca2f8620] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/raster/Tile$Location;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EAST = new Tile$Location(env->getStaticObjectField(cls, "EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            HAS_INTERPOLATION_NEIGHBORS = new Tile$Location(env->getStaticObjectField(cls, "HAS_INTERPOLATION_NEIGHBORS", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH = new Tile$Location(env->getStaticObjectField(cls, "NORTH", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH_EAST = new Tile$Location(env->getStaticObjectField(cls, "NORTH_EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH_WEST = new Tile$Location(env->getStaticObjectField(cls, "NORTH_WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH = new Tile$Location(env->getStaticObjectField(cls, "SOUTH", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH_EAST = new Tile$Location(env->getStaticObjectField(cls, "SOUTH_EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH_WEST = new Tile$Location(env->getStaticObjectField(cls, "SOUTH_WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            WEST = new Tile$Location(env->getStaticObjectField(cls, "WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tile$Location Tile$Location::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Tile$Location(env->callStaticObjectMethod(cls, mids$[mid_valueOf_64b752fdb32980ea], a0.this$));
        }

        JArray< Tile$Location > Tile$Location::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Tile$Location >(env->callStaticObjectMethod(cls, mids$[mid_values_74e8b448ca2f8620]));
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
        static PyObject *t_Tile$Location_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile$Location_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile$Location_of_(t_Tile$Location *self, PyObject *args);
        static PyObject *t_Tile$Location_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Tile$Location_values(PyTypeObject *type);
        static PyObject *t_Tile$Location_get__parameters_(t_Tile$Location *self, void *data);
        static PyGetSetDef t_Tile$Location__fields_[] = {
          DECLARE_GET_FIELD(t_Tile$Location, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Tile$Location__methods_[] = {
          DECLARE_METHOD(t_Tile$Location, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, of_, METH_VARARGS),
          DECLARE_METHOD(t_Tile$Location, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tile$Location)[] = {
          { Py_tp_methods, t_Tile$Location__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Tile$Location__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tile$Location)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Tile$Location, t_Tile$Location, Tile$Location);
        PyObject *t_Tile$Location::wrap_Object(const Tile$Location& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Tile$Location::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Tile$Location *self = (t_Tile$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Tile$Location::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Tile$Location::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Tile$Location *self = (t_Tile$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Tile$Location::install(PyObject *module)
        {
          installType(&PY_TYPE(Tile$Location), &PY_TYPE_DEF(Tile$Location), module, "Tile$Location", 0);
        }

        void t_Tile$Location::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "class_", make_descriptor(Tile$Location::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "wrapfn_", make_descriptor(t_Tile$Location::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "boxfn_", make_descriptor(boxObject));
          env->getClass(Tile$Location::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "HAS_INTERPOLATION_NEIGHBORS", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::HAS_INTERPOLATION_NEIGHBORS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH_EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH_EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH_WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH_WEST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH_EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH_EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH_WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH_WEST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::WEST)));
        }

        static PyObject *t_Tile$Location_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tile$Location::initializeClass, 1)))
            return NULL;
          return t_Tile$Location::wrap_Object(Tile$Location(((t_Tile$Location *) arg)->object.this$));
        }
        static PyObject *t_Tile$Location_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tile$Location::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Tile$Location_of_(t_Tile$Location *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Tile$Location_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::raster::Tile$Location::valueOf(a0));
            return t_Tile$Location::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Tile$Location_values(PyTypeObject *type)
        {
          JArray< Tile$Location > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::raster::Tile$Location::values());
          return JArray<jobject>(result.this$).wrap(t_Tile$Location::wrap_jobject);
        }
        static PyObject *t_Tile$Location_get__parameters_(t_Tile$Location *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/CholeskyDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *CholeskyDecomposer::class$ = NULL;
      jmethodID *CholeskyDecomposer::mids$ = NULL;
      bool CholeskyDecomposer::live$ = false;

      jclass CholeskyDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/CholeskyDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_decompose_8def7320d620ddc9] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CholeskyDecomposer::CholeskyDecomposer(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

      ::org::hipparchus::linear::DecompositionSolver CholeskyDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_8def7320d620ddc9], a0.this$));
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
      static PyObject *t_CholeskyDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CholeskyDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CholeskyDecomposer_init_(t_CholeskyDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CholeskyDecomposer_decompose(t_CholeskyDecomposer *self, PyObject *arg);

      static PyMethodDef t_CholeskyDecomposer__methods_[] = {
        DECLARE_METHOD(t_CholeskyDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CholeskyDecomposer)[] = {
        { Py_tp_methods, t_CholeskyDecomposer__methods_ },
        { Py_tp_init, (void *) t_CholeskyDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CholeskyDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CholeskyDecomposer, t_CholeskyDecomposer, CholeskyDecomposer);

      void t_CholeskyDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(CholeskyDecomposer), &PY_TYPE_DEF(CholeskyDecomposer), module, "CholeskyDecomposer", 0);
      }

      void t_CholeskyDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "class_", make_descriptor(CholeskyDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "wrapfn_", make_descriptor(t_CholeskyDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CholeskyDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CholeskyDecomposer::initializeClass, 1)))
          return NULL;
        return t_CholeskyDecomposer::wrap_Object(CholeskyDecomposer(((t_CholeskyDecomposer *) arg)->object.this$));
      }
      static PyObject *t_CholeskyDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CholeskyDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CholeskyDecomposer_init_(t_CholeskyDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        CholeskyDecomposer object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = CholeskyDecomposer(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CholeskyDecomposer_decompose(t_CholeskyDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AngularAzEl::class$ = NULL;
        jmethodID *AngularAzEl::mids$ = NULL;
        bool AngularAzEl::live$ = false;
        ::java::lang::String *AngularAzEl::MEASUREMENT_TYPE = NULL;

        jclass AngularAzEl::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AngularAzEl");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8d27fd33291dc567] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getObservedLineOfSight_982d534f80d70918] = env->getMethodID(cls, "getObservedLineOfSight", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularAzEl::AngularAzEl(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_8d27fd33291dc567, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularAzEl::getObservedLineOfSight(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getObservedLineOfSight_982d534f80d70918], a0.this$));
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
        static PyObject *t_AngularAzEl_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularAzEl_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularAzEl_of_(t_AngularAzEl *self, PyObject *args);
        static int t_AngularAzEl_init_(t_AngularAzEl *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularAzEl_getObservedLineOfSight(t_AngularAzEl *self, PyObject *arg);
        static PyObject *t_AngularAzEl_get__parameters_(t_AngularAzEl *self, void *data);
        static PyGetSetDef t_AngularAzEl__fields_[] = {
          DECLARE_GET_FIELD(t_AngularAzEl, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularAzEl__methods_[] = {
          DECLARE_METHOD(t_AngularAzEl, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularAzEl, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularAzEl, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularAzEl, getObservedLineOfSight, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularAzEl)[] = {
          { Py_tp_methods, t_AngularAzEl__methods_ },
          { Py_tp_init, (void *) t_AngularAzEl_init_ },
          { Py_tp_getset, t_AngularAzEl__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularAzEl)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(AngularAzEl, t_AngularAzEl, AngularAzEl);
        PyObject *t_AngularAzEl::wrap_Object(const AngularAzEl& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularAzEl::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularAzEl *self = (t_AngularAzEl *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularAzEl::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularAzEl::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularAzEl *self = (t_AngularAzEl *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularAzEl::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularAzEl), &PY_TYPE_DEF(AngularAzEl), module, "AngularAzEl", 0);
        }

        void t_AngularAzEl::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "class_", make_descriptor(AngularAzEl::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "wrapfn_", make_descriptor(t_AngularAzEl::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "boxfn_", make_descriptor(boxObject));
          env->getClass(AngularAzEl::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "MEASUREMENT_TYPE", make_descriptor(j2p(*AngularAzEl::MEASUREMENT_TYPE)));
        }

        static PyObject *t_AngularAzEl_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularAzEl::initializeClass, 1)))
            return NULL;
          return t_AngularAzEl::wrap_Object(AngularAzEl(((t_AngularAzEl *) arg)->object.this$));
        }
        static PyObject *t_AngularAzEl_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularAzEl::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularAzEl_of_(t_AngularAzEl *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularAzEl_init_(t_AngularAzEl *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< jdouble > a3((jobject) NULL);
          JArray< jdouble > a4((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
          AngularAzEl object((jobject) NULL);

          if (!parseArgs(args, "kk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = AngularAzEl(a0, a1, a2, a3, a4, a5));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularAzEl);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularAzEl_getObservedLineOfSight(t_AngularAzEl *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getObservedLineOfSight(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getObservedLineOfSight", arg);
          return NULL;
        }
        static PyObject *t_AngularAzEl_get__parameters_(t_AngularAzEl *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF$CPFCoordinate::class$ = NULL;
        jmethodID *CPF$CPFCoordinate::mids$ = NULL;
        bool CPF$CPFCoordinate::live$ = false;

        jclass CPF$CPFCoordinate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF$CPFCoordinate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5d015213e16af0ff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;I)V");
            mids$[mid_init$_028d70a811781efd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;I)V");
            mids$[mid_getLeap_55546ef6a647f39b] = env->getMethodID(cls, "getLeap", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF$CPFCoordinate::CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5d015213e16af0ff, a0.this$, a1.this$, a2)) {}

        CPF$CPFCoordinate::CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jint a3) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_028d70a811781efd, a0.this$, a1.this$, a2.this$, a3)) {}

        jint CPF$CPFCoordinate::getLeap() const
        {
          return env->callIntMethod(this$, mids$[mid_getLeap_55546ef6a647f39b]);
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
        static PyObject *t_CPF$CPFCoordinate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF$CPFCoordinate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF$CPFCoordinate_init_(t_CPF$CPFCoordinate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF$CPFCoordinate_getLeap(t_CPF$CPFCoordinate *self);
        static PyObject *t_CPF$CPFCoordinate_get__leap(t_CPF$CPFCoordinate *self, void *data);
        static PyGetSetDef t_CPF$CPFCoordinate__fields_[] = {
          DECLARE_GET_FIELD(t_CPF$CPFCoordinate, leap),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF$CPFCoordinate__methods_[] = {
          DECLARE_METHOD(t_CPF$CPFCoordinate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFCoordinate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFCoordinate, getLeap, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF$CPFCoordinate)[] = {
          { Py_tp_methods, t_CPF$CPFCoordinate__methods_ },
          { Py_tp_init, (void *) t_CPF$CPFCoordinate_init_ },
          { Py_tp_getset, t_CPF$CPFCoordinate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF$CPFCoordinate)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
          NULL
        };

        DEFINE_TYPE(CPF$CPFCoordinate, t_CPF$CPFCoordinate, CPF$CPFCoordinate);

        void t_CPF$CPFCoordinate::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF$CPFCoordinate), &PY_TYPE_DEF(CPF$CPFCoordinate), module, "CPF$CPFCoordinate", 0);
        }

        void t_CPF$CPFCoordinate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "class_", make_descriptor(CPF$CPFCoordinate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "wrapfn_", make_descriptor(t_CPF$CPFCoordinate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPF$CPFCoordinate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF$CPFCoordinate::initializeClass, 1)))
            return NULL;
          return t_CPF$CPFCoordinate::wrap_Object(CPF$CPFCoordinate(((t_CPF$CPFCoordinate *) arg)->object.this$));
        }
        static PyObject *t_CPF$CPFCoordinate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF$CPFCoordinate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF$CPFCoordinate_init_(t_CPF$CPFCoordinate *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jint a2;
              CPF$CPFCoordinate object((jobject) NULL);

              if (!parseArgs(args, "kkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CPF$CPFCoordinate(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jint a3;
              CPF$CPFCoordinate object((jobject) NULL);

              if (!parseArgs(args, "kkkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CPF$CPFCoordinate(a0, a1, a2, a3));
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

        static PyObject *t_CPF$CPFCoordinate_getLeap(t_CPF$CPFCoordinate *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLeap());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPF$CPFCoordinate_get__leap(t_CPF$CPFCoordinate *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLeap());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SingleFrequencyHatchFilter::class$ = NULL;
          jmethodID *SingleFrequencyHatchFilter::mids$ = NULL;
          bool SingleFrequencyHatchFilter::live$ = false;

          jclass SingleFrequencyHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_454e29151ebb03b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/MeasurementType;DDID)V");
              mids$[mid_filterData_6830603095908d75] = env->getMethodID(cls, "filterData", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleFrequencyHatchFilter::SingleFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::gnss::MeasurementType & a2, jdouble a3, jdouble a4, jint a5, jdouble a6) : ::org::orekit::estimation::measurements::filtering::HatchFilter(env->newObject(initializeClass, &mids$, mid_init$_454e29151ebb03b6, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::files::rinex::observation::ObservationData SingleFrequencyHatchFilter::filterData(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_filterData_6830603095908d75], a0.this$, a1.this$));
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
          static PyObject *t_SingleFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleFrequencyHatchFilter_init_(t_SingleFrequencyHatchFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleFrequencyHatchFilter_filterData(t_SingleFrequencyHatchFilter *self, PyObject *args);

          static PyMethodDef t_SingleFrequencyHatchFilter__methods_[] = {
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, filterData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleFrequencyHatchFilter)[] = {
            { Py_tp_methods, t_SingleFrequencyHatchFilter__methods_ },
            { Py_tp_init, (void *) t_SingleFrequencyHatchFilter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleFrequencyHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(SingleFrequencyHatchFilter, t_SingleFrequencyHatchFilter, SingleFrequencyHatchFilter);

          void t_SingleFrequencyHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleFrequencyHatchFilter), &PY_TYPE_DEF(SingleFrequencyHatchFilter), module, "SingleFrequencyHatchFilter", 0);
          }

          void t_SingleFrequencyHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "class_", make_descriptor(SingleFrequencyHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "wrapfn_", make_descriptor(t_SingleFrequencyHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleFrequencyHatchFilter::initializeClass, 1)))
              return NULL;
            return t_SingleFrequencyHatchFilter::wrap_Object(SingleFrequencyHatchFilter(((t_SingleFrequencyHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_SingleFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleFrequencyHatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleFrequencyHatchFilter_init_(t_SingleFrequencyHatchFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::gnss::MeasurementType a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jint a5;
            jdouble a6;
            SingleFrequencyHatchFilter object((jobject) NULL);

            if (!parseArgs(args, "kkKDDID", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::MeasurementType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_MeasurementType::parameters_, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = SingleFrequencyHatchFilter(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleFrequencyHatchFilter_filterData(t_SingleFrequencyHatchFilter *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.filterData(a0, a1));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "filterData", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldDeepSDP4.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldDeepSDP4::class$ = NULL;
          jmethodID *FieldDeepSDP4::mids$ = NULL;
          bool FieldDeepSDP4::live$ = false;

          jclass FieldDeepSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldDeepSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8d1f9859c5514da2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_5459c6c0c91f1c96] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_luniSolarTermsComputation_a1fa5dae97ea5ed2] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_f2b4bfa0af1007e8] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_f2b4bfa0af1007e8] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldDeepSDP4::FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_8d1f9859c5514da2, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldDeepSDP4::FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_5459c6c0c91f1c96, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
          static PyObject *t_FieldDeepSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDeepSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDeepSDP4_of_(t_FieldDeepSDP4 *self, PyObject *args);
          static int t_FieldDeepSDP4_init_(t_FieldDeepSDP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldDeepSDP4_get__parameters_(t_FieldDeepSDP4 *self, void *data);
          static PyGetSetDef t_FieldDeepSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldDeepSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldDeepSDP4__methods_[] = {
            DECLARE_METHOD(t_FieldDeepSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDeepSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDeepSDP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldDeepSDP4)[] = {
            { Py_tp_methods, t_FieldDeepSDP4__methods_ },
            { Py_tp_init, (void *) t_FieldDeepSDP4_init_ },
            { Py_tp_getset, t_FieldDeepSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldDeepSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldSDP4),
            NULL
          };

          DEFINE_TYPE(FieldDeepSDP4, t_FieldDeepSDP4, FieldDeepSDP4);
          PyObject *t_FieldDeepSDP4::wrap_Object(const FieldDeepSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDeepSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDeepSDP4 *self = (t_FieldDeepSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldDeepSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDeepSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDeepSDP4 *self = (t_FieldDeepSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldDeepSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldDeepSDP4), &PY_TYPE_DEF(FieldDeepSDP4), module, "FieldDeepSDP4", 0);
          }

          void t_FieldDeepSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "class_", make_descriptor(FieldDeepSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "wrapfn_", make_descriptor(t_FieldDeepSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldDeepSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldDeepSDP4::initializeClass, 1)))
              return NULL;
            return t_FieldDeepSDP4::wrap_Object(FieldDeepSDP4(((t_FieldDeepSDP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldDeepSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldDeepSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldDeepSDP4_of_(t_FieldDeepSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldDeepSDP4_init_(t_FieldDeepSDP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldDeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldDeepSDP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldDeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldDeepSDP4(a0, a1, a2, a3, a4));
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
          static PyObject *t_FieldDeepSDP4_get__parameters_(t_FieldDeepSDP4 *self, void *data)
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
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EcksteinHechlerPropagatorBuilder::class$ = NULL;
        jmethodID *EcksteinHechlerPropagatorBuilder::mids$ = NULL;
        bool EcksteinHechlerPropagatorBuilder::live$ = false;

        jclass EcksteinHechlerPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bf0ef0419ba5e85f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_3447fabd0e491d80] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_d6ba313b6b5b1808] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDLorg/orekit/forces/gravity/potential/TideSystem;DDDDDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_708cc138373fff03] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_0dbb96a0c5ab31f7] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_bf0ef0419ba5e85f, a0.this$, a1.this$, a2.this$, a3)) {}

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_3447fabd0e491d80, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::orbits::OrbitType & a9, const ::org::orekit::orbits::PositionAngleType & a10, jdouble a11) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_d6ba313b6b5b1808, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8, a9.this$, a10.this$, a11)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel EcksteinHechlerPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator EcksteinHechlerPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_708cc138373fff03], a0.this$));
        }

        EcksteinHechlerPropagatorBuilder EcksteinHechlerPropagatorBuilder::copy() const
        {
          return EcksteinHechlerPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_0dbb96a0c5ab31f7]));
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
        static PyObject *t_EcksteinHechlerPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EcksteinHechlerPropagatorBuilder_init_(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildLeastSquaresModel(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildPropagator(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_copy(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_EcksteinHechlerPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EcksteinHechlerPropagatorBuilder)[] = {
          { Py_tp_methods, t_EcksteinHechlerPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_EcksteinHechlerPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EcksteinHechlerPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(EcksteinHechlerPropagatorBuilder, t_EcksteinHechlerPropagatorBuilder, EcksteinHechlerPropagatorBuilder);

        void t_EcksteinHechlerPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EcksteinHechlerPropagatorBuilder), &PY_TYPE_DEF(EcksteinHechlerPropagatorBuilder), module, "EcksteinHechlerPropagatorBuilder", 0);
        }

        void t_EcksteinHechlerPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "class_", make_descriptor(EcksteinHechlerPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "wrapfn_", make_descriptor(t_EcksteinHechlerPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EcksteinHechlerPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_EcksteinHechlerPropagatorBuilder::wrap_Object(EcksteinHechlerPropagatorBuilder(((t_EcksteinHechlerPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EcksteinHechlerPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EcksteinHechlerPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EcksteinHechlerPropagatorBuilder_init_(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::orbits::OrbitType a9((jobject) NULL);
              PyTypeObject **p9;
              ::org::orekit::orbits::PositionAngleType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kDDKDDDDDKKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::orbits::t_OrbitType::parameters_, &a10, &p10, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a11))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildLeastSquaresModel(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildPropagator(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_copy(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          EcksteinHechlerPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_EcksteinHechlerPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenType::class$ = NULL;
            jmethodID *ScreenType::mids$ = NULL;
            bool ScreenType::live$ = false;
            ScreenType *ScreenType::PC = NULL;
            ScreenType *ScreenType::PC_MAX = NULL;
            ScreenType *ScreenType::SHAPE = NULL;

            jclass ScreenType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_574a5105c0d474dd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");
                mids$[mid_values_589d9ed72bb8f4b4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                PC = new ScreenType(env->getStaticObjectField(cls, "PC", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                PC_MAX = new ScreenType(env->getStaticObjectField(cls, "PC_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                SHAPE = new ScreenType(env->getStaticObjectField(cls, "SHAPE", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenType ScreenType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_574a5105c0d474dd], a0.this$));
            }

            JArray< ScreenType > ScreenType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenType >(env->callStaticObjectMethod(cls, mids$[mid_values_589d9ed72bb8f4b4]));
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
            static PyObject *t_ScreenType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenType_of_(t_ScreenType *self, PyObject *args);
            static PyObject *t_ScreenType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenType_values(PyTypeObject *type);
            static PyObject *t_ScreenType_get__parameters_(t_ScreenType *self, void *data);
            static PyGetSetDef t_ScreenType__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenType__methods_[] = {
              DECLARE_METHOD(t_ScreenType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenType)[] = {
              { Py_tp_methods, t_ScreenType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenType, t_ScreenType, ScreenType);
            PyObject *t_ScreenType::wrap_Object(const ScreenType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenType *self = (t_ScreenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenType *self = (t_ScreenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenType::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenType), &PY_TYPE_DEF(ScreenType), module, "ScreenType", 0);
            }

            void t_ScreenType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "class_", make_descriptor(ScreenType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "wrapfn_", make_descriptor(t_ScreenType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "PC", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::PC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "PC_MAX", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::PC_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "SHAPE", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::SHAPE)));
            }

            static PyObject *t_ScreenType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenType::initializeClass, 1)))
                return NULL;
              return t_ScreenType::wrap_Object(ScreenType(((t_ScreenType *) arg)->object.this$));
            }
            static PyObject *t_ScreenType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenType_of_(t_ScreenType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenType::valueOf(a0));
                return t_ScreenType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenType_values(PyTypeObject *type)
            {
              JArray< ScreenType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenType::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenType::wrap_jobject);
            }
            static PyObject *t_ScreenType_get__parameters_(t_ScreenType *self, void *data)
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
#include "org/orekit/frames/L1Frame.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L1Frame::class$ = NULL;
      jmethodID *L1Frame::mids$ = NULL;
      bool L1Frame::live$ = false;

      jclass L1Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L1Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8e55d90b2c31e510] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L1Frame::L1Frame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_8e55d90b2c31e510, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_L1Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L1Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L1Frame_init_(t_L1Frame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_L1Frame__methods_[] = {
        DECLARE_METHOD(t_L1Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1Frame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L1Frame)[] = {
        { Py_tp_methods, t_L1Frame__methods_ },
        { Py_tp_init, (void *) t_L1Frame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L1Frame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(L1Frame, t_L1Frame, L1Frame);

      void t_L1Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(L1Frame), &PY_TYPE_DEF(L1Frame), module, "L1Frame", 0);
      }

      void t_L1Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "class_", make_descriptor(L1Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "wrapfn_", make_descriptor(t_L1Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L1Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L1Frame::initializeClass, 1)))
          return NULL;
        return t_L1Frame::wrap_Object(L1Frame(((t_L1Frame *) arg)->object.this$));
      }
      static PyObject *t_L1Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L1Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L1Frame_init_(t_L1Frame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L1Frame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L1Frame(a0, a1));
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
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *SpacecraftToObservedBody::class$ = NULL;
        jmethodID *SpacecraftToObservedBody::mids$ = NULL;
        bool SpacecraftToObservedBody::live$ = false;

        jclass SpacecraftToObservedBody::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/SpacecraftToObservedBody");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0f674d7dd1f18c6f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DDLjava/util/List;Ljava/util/List;)V");
            mids$[mid_init$_a57c926a167fd3b3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DDLjava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
            mids$[mid_getBodyFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getBodyToInertial_976d4bc81671ce42] = env->getMethodID(cls, "getBodyToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getInertialFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialToBody_976d4bc81671ce42] = env->getMethodID(cls, "getInertialToBody", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getOvershootTolerance_b74f83833fdad017] = env->getMethodID(cls, "getOvershootTolerance", "()D");
            mids$[mid_getScToInertial_976d4bc81671ce42] = env->getMethodID(cls, "getScToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getTStep_b74f83833fdad017] = env->getMethodID(cls, "getTStep", "()D");
            mids$[mid_isInRange_a35647bda2901f54] = env->getMethodID(cls, "isInRange", "(Lorg/orekit/time/AbsoluteDate;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SpacecraftToObservedBody::SpacecraftToObservedBody(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, const ::java::util::List & a6, const ::java::util::List & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f674d7dd1f18c6f, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6.this$, a7.this$)) {}

        SpacecraftToObservedBody::SpacecraftToObservedBody(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, const ::java::util::List & a6, jint a7, const ::org::orekit::utils::CartesianDerivativesFilter & a8, const ::java::util::List & a9, jint a10, const ::org::orekit::utils::AngularDerivativesFilter & a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a57c926a167fd3b3, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6.this$, a7, a8.this$, a9.this$, a10, a11.this$)) {}

        ::org::orekit::frames::Frame SpacecraftToObservedBody::getBodyFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getBodyToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getBodyToInertial_976d4bc81671ce42], a0.this$));
        }

        ::org::orekit::frames::Frame SpacecraftToObservedBody::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getInertialToBody(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getInertialToBody_976d4bc81671ce42], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SpacecraftToObservedBody::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate SpacecraftToObservedBody::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
        }

        jdouble SpacecraftToObservedBody::getOvershootTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOvershootTolerance_b74f83833fdad017]);
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getScToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getScToInertial_976d4bc81671ce42], a0.this$));
        }

        jdouble SpacecraftToObservedBody::getTStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTStep_b74f83833fdad017]);
        }

        jboolean SpacecraftToObservedBody::isInRange(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isInRange_a35647bda2901f54], a0.this$);
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
      namespace utils {
        static PyObject *t_SpacecraftToObservedBody_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SpacecraftToObservedBody_init_(t_SpacecraftToObservedBody *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SpacecraftToObservedBody_getBodyFrame(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getBodyToInertial(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getInertialFrame(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getInertialToBody(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getMaxDate(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getMinDate(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getOvershootTolerance(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getScToInertial(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getTStep(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_isInRange(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_get__bodyFrame(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__inertialFrame(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__maxDate(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__minDate(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__overshootTolerance(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__tStep(t_SpacecraftToObservedBody *self, void *data);
        static PyGetSetDef t_SpacecraftToObservedBody__fields_[] = {
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, bodyFrame),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, inertialFrame),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, maxDate),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, minDate),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, overshootTolerance),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, tStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SpacecraftToObservedBody__methods_[] = {
          DECLARE_METHOD(t_SpacecraftToObservedBody, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getBodyFrame, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getBodyToInertial, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getInertialToBody, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getOvershootTolerance, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getScToInertial, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getTStep, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, isInRange, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SpacecraftToObservedBody)[] = {
          { Py_tp_methods, t_SpacecraftToObservedBody__methods_ },
          { Py_tp_init, (void *) t_SpacecraftToObservedBody_init_ },
          { Py_tp_getset, t_SpacecraftToObservedBody__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SpacecraftToObservedBody)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SpacecraftToObservedBody, t_SpacecraftToObservedBody, SpacecraftToObservedBody);

        void t_SpacecraftToObservedBody::install(PyObject *module)
        {
          installType(&PY_TYPE(SpacecraftToObservedBody), &PY_TYPE_DEF(SpacecraftToObservedBody), module, "SpacecraftToObservedBody", 0);
        }

        void t_SpacecraftToObservedBody::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "class_", make_descriptor(SpacecraftToObservedBody::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "wrapfn_", make_descriptor(t_SpacecraftToObservedBody::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SpacecraftToObservedBody_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SpacecraftToObservedBody::initializeClass, 1)))
            return NULL;
          return t_SpacecraftToObservedBody::wrap_Object(SpacecraftToObservedBody(((t_SpacecraftToObservedBody *) arg)->object.this$));
        }
        static PyObject *t_SpacecraftToObservedBody_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SpacecraftToObservedBody::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SpacecraftToObservedBody_init_(t_SpacecraftToObservedBody *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              ::java::util::List a6((jobject) NULL);
              PyTypeObject **p6;
              ::java::util::List a7((jobject) NULL);
              PyTypeObject **p7;
              SpacecraftToObservedBody object((jobject) NULL);

              if (!parseArgs(args, "kkkkDDKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_List::parameters_, &a7, &p7, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = SpacecraftToObservedBody(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              ::java::util::List a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;
              ::org::orekit::utils::CartesianDerivativesFilter a8((jobject) NULL);
              PyTypeObject **p8;
              ::java::util::List a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;
              ::org::orekit::utils::AngularDerivativesFilter a11((jobject) NULL);
              PyTypeObject **p11;
              SpacecraftToObservedBody object((jobject) NULL);

              if (!parseArgs(args, "kkkkDDKIKKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_List::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a9, &p9, ::java::util::t_List::parameters_, &a10, &a11, &p11, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                INT_CALL(object = SpacecraftToObservedBody(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_SpacecraftToObservedBody_getBodyFrame(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getBodyToInertial(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getBodyToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getBodyToInertial", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getInertialFrame(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getInertialToBody(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInertialToBody(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInertialToBody", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getMaxDate(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getMinDate(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getOvershootTolerance(t_SpacecraftToObservedBody *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SpacecraftToObservedBody_getScToInertial(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getScToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getScToInertial", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getTStep(t_SpacecraftToObservedBody *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SpacecraftToObservedBody_isInRange(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.isInRange(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isInRange", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_get__bodyFrame(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__inertialFrame(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__maxDate(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__minDate(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__overshootTolerance(t_SpacecraftToObservedBody *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__tStep(t_SpacecraftToObservedBody *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldAbstractGaussianContributionContext::class$ = NULL;
            jmethodID *FieldAbstractGaussianContributionContext::mids$ = NULL;
            bool FieldAbstractGaussianContributionContext::live$ = false;

            jclass FieldAbstractGaussianContributionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getA_81520b552cb3fa26] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCo2AB_81520b552cb3fa26] = env->getMethodID(cls, "getCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_81520b552cb3fa26] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMu_81520b552cb3fa26] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOOA_81520b552cb3fa26] = env->getMethodID(cls, "getOOA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOOAB_81520b552cb3fa26] = env->getMethodID(cls, "getOOAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoBpo_81520b552cb3fa26] = env->getMethodID(cls, "getOoBpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoMU_81520b552cb3fa26] = env->getMethodID(cls, "getOoMU", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getTon2a_81520b552cb3fa26] = env->getMethodID(cls, "getTon2a", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCo2AB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getMu() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOOA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOOA_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOOAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOOAB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOoBpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoBpo_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOoMU() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoMU_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getTon2a() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTon2a_81520b552cb3fa26]));
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
            static PyObject *t_FieldAbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAbstractGaussianContributionContext_of_(t_FieldAbstractGaussianContributionContext *self, PyObject *args);
            static PyObject *t_FieldAbstractGaussianContributionContext_getA(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getCo2AB(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getMeanMotion(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getMu(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOOA(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOOAB(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOoBpo(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOoMU(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getTon2a(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__a(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__co2AB(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__meanMotion(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__mu(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOA(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOAB(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooBpo(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooMU(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ton2a(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__parameters_(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyGetSetDef t_FieldAbstractGaussianContributionContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, a),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, co2AB),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, mu),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, oOA),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, oOAB),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ooBpo),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ooMU),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ton2a),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldAbstractGaussianContributionContext__methods_[] = {
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getMu, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOOA, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOOAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOoBpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOoMU, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getTon2a, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldAbstractGaussianContributionContext)[] = {
              { Py_tp_methods, t_FieldAbstractGaussianContributionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldAbstractGaussianContributionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldAbstractGaussianContributionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldAbstractGaussianContributionContext, t_FieldAbstractGaussianContributionContext, FieldAbstractGaussianContributionContext);
            PyObject *t_FieldAbstractGaussianContributionContext::wrap_Object(const FieldAbstractGaussianContributionContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAbstractGaussianContributionContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAbstractGaussianContributionContext *self = (t_FieldAbstractGaussianContributionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldAbstractGaussianContributionContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAbstractGaussianContributionContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAbstractGaussianContributionContext *self = (t_FieldAbstractGaussianContributionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldAbstractGaussianContributionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldAbstractGaussianContributionContext), &PY_TYPE_DEF(FieldAbstractGaussianContributionContext), module, "FieldAbstractGaussianContributionContext", 0);
            }

            void t_FieldAbstractGaussianContributionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "class_", make_descriptor(FieldAbstractGaussianContributionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "wrapfn_", make_descriptor(t_FieldAbstractGaussianContributionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldAbstractGaussianContributionContext::initializeClass, 1)))
                return NULL;
              return t_FieldAbstractGaussianContributionContext::wrap_Object(FieldAbstractGaussianContributionContext(((t_FieldAbstractGaussianContributionContext *) arg)->object.this$));
            }
            static PyObject *t_FieldAbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldAbstractGaussianContributionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_of_(t_FieldAbstractGaussianContributionContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getA(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getCo2AB(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getMeanMotion(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getMu(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMu());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOOA(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOOA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOOAB(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOOAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOoBpo(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoBpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOoMU(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoMU());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getTon2a(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getTon2a());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldAbstractGaussianContributionContext_get__parameters_(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__a(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__co2AB(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__meanMotion(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__mu(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMu());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOA(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOOA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOAB(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOOAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooBpo(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoBpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooMU(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoMU());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ton2a(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getTon2a());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince54FieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince54FieldIntegrator::class$ = NULL;
        jmethodID *DormandPrince54FieldIntegrator::mids$ = NULL;
        bool DormandPrince54FieldIntegrator::live$ = false;

        jclass DormandPrince54FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince54FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_05ca1b2bf7edc3a6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_19be2ee49bc66dd7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_34ce7b2f6a50059b] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_883be608cfc68c26] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_883be608cfc68c26] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_960bc248f4e3e353] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince54FieldStateInterpolator;");
            mids$[mid_estimateError_4b43ddf833459788] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54FieldIntegrator::DormandPrince54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_05ca1b2bf7edc3a6, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        DormandPrince54FieldIntegrator::DormandPrince54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_19be2ee49bc66dd7, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > DormandPrince54FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_34ce7b2f6a50059b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince54FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince54FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_883be608cfc68c26]));
        }

        jint DormandPrince54FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
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
        static PyObject *t_DormandPrince54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegrator_of_(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static int t_DormandPrince54FieldIntegrator_init_(t_DormandPrince54FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54FieldIntegrator_getA(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_getB(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_getC(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_getOrder(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_get__a(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__b(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__c(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__order(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__parameters_(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyGetSetDef t_DormandPrince54FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, a),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, b),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, c),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, order),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54FieldIntegrator)[] = {
          { Py_tp_methods, t_DormandPrince54FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54FieldIntegrator_init_ },
          { Py_tp_getset, t_DormandPrince54FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince54FieldIntegrator, t_DormandPrince54FieldIntegrator, DormandPrince54FieldIntegrator);
        PyObject *t_DormandPrince54FieldIntegrator::wrap_Object(const DormandPrince54FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegrator *self = (t_DormandPrince54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince54FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegrator *self = (t_DormandPrince54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince54FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54FieldIntegrator), &PY_TYPE_DEF(DormandPrince54FieldIntegrator), module, "DormandPrince54FieldIntegrator", 0);
        }

        void t_DormandPrince54FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegrator), "class_", make_descriptor(DormandPrince54FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegrator), "wrapfn_", make_descriptor(t_DormandPrince54FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54FieldIntegrator::wrap_Object(DormandPrince54FieldIntegrator(((t_DormandPrince54FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince54FieldIntegrator_of_(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince54FieldIntegrator_init_(t_DormandPrince54FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              DormandPrince54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince54FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              DormandPrince54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince54FieldIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_DormandPrince54FieldIntegrator_getA(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_getB(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_getC(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_getOrder(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_DormandPrince54FieldIntegrator_get__parameters_(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__a(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__b(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__c(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__order(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldAuxiliaryElements::class$ = NULL;
            jmethodID *FieldAuxiliaryElements::mids$ = NULL;
            bool FieldAuxiliaryElements::live$ = false;

            jclass FieldAuxiliaryElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4a0a7fa0526c4933] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;I)V");
                mids$[mid_getAlpha_81520b552cb3fa26] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getB_81520b552cb3fa26] = env->getMethodID(cls, "getB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBeta_81520b552cb3fa26] = env->getMethodID(cls, "getBeta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getC_81520b552cb3fa26] = env->getMethodID(cls, "getC", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
                mids$[mid_getEcc_81520b552cb3fa26] = env->getMethodID(cls, "getEcc", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGamma_81520b552cb3fa26] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getH_81520b552cb3fa26] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK_81520b552cb3fa26] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getKeplerianPeriod_81520b552cb3fa26] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLM_81520b552cb3fa26] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLe_81520b552cb3fa26] = env->getMethodID(cls, "getLe", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLv_81520b552cb3fa26] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_81520b552cb3fa26] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOrbit_52c9ebac01a11008] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/FieldOrbit;");
                mids$[mid_getP_81520b552cb3fa26] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getQ_81520b552cb3fa26] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRetrogradeFactor_55546ef6a647f39b] = env->getMethodID(cls, "getRetrogradeFactor", "()I");
                mids$[mid_getSma_81520b552cb3fa26] = env->getMethodID(cls, "getSma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getVectorF_ff5ac73a7b43eddd] = env->getMethodID(cls, "getVectorF", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_getVectorG_ff5ac73a7b43eddd] = env->getMethodID(cls, "getVectorG", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_getVectorW_ff5ac73a7b43eddd] = env->getMethodID(cls, "getVectorW", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_toAuxiliaryElements_bb7d61c7025dded3] = env->getMethodID(cls, "toAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldAuxiliaryElements::FieldAuxiliaryElements(const ::org::orekit::orbits::FieldOrbit & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4a0a7fa0526c4933, a0.this$, a1)) {}

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getAlpha() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getBeta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBeta_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getC() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getC_81520b552cb3fa26]));
            }

            ::org::orekit::time::FieldAbsoluteDate FieldAuxiliaryElements::getDate() const
            {
              return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getEcc() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEcc_81520b552cb3fa26]));
            }

            ::org::orekit::frames::Frame FieldAuxiliaryElements::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getGamma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getH() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getH_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getK() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getKeplerianPeriod() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLM() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLe() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLe_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLv() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_81520b552cb3fa26]));
            }

            ::org::orekit::orbits::FieldOrbit FieldAuxiliaryElements::getOrbit() const
            {
              return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOrbit_52c9ebac01a11008]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getP() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getP_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getQ() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ_81520b552cb3fa26]));
            }

            jint FieldAuxiliaryElements::getRetrogradeFactor() const
            {
              return env->callIntMethod(this$, mids$[mid_getRetrogradeFactor_55546ef6a647f39b]);
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getSma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSma_81520b552cb3fa26]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorF() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorF_ff5ac73a7b43eddd]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorG() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorG_ff5ac73a7b43eddd]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorW() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorW_ff5ac73a7b43eddd]));
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements FieldAuxiliaryElements::toAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(env->callObjectMethod(this$, mids$[mid_toAuxiliaryElements_bb7d61c7025dded3]));
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
            static PyObject *t_FieldAuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAuxiliaryElements_of_(t_FieldAuxiliaryElements *self, PyObject *args);
            static int t_FieldAuxiliaryElements_init_(t_FieldAuxiliaryElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldAuxiliaryElements_getAlpha(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getB(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getBeta(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getC(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getDate(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getEcc(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getFrame(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getGamma(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getH(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getK(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getKeplerianPeriod(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLM(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLe(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLv(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getMeanMotion(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getOrbit(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getP(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getQ(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getRetrogradeFactor(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getSma(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorF(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorG(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorW(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_toAuxiliaryElements(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_get__alpha(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__b(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__beta(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__c(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__date(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__ecc(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__frame(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__gamma(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__h(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__k(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__keplerianPeriod(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__lM(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__le(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__lv(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__meanMotion(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__orbit(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__p(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__q(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__retrogradeFactor(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__sma(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorF(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorG(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorW(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__parameters_(t_FieldAuxiliaryElements *self, void *data);
            static PyGetSetDef t_FieldAuxiliaryElements__fields_[] = {
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, alpha),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, b),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, beta),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, c),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, date),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, ecc),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, frame),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, gamma),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, h),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, k),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, keplerianPeriod),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, lM),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, le),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, lv),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, meanMotion),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, orbit),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, p),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, q),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, retrogradeFactor),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, sma),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorF),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorG),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorW),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldAuxiliaryElements__methods_[] = {
              DECLARE_METHOD(t_FieldAuxiliaryElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getC, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getDate, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getEcc, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getH, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getK, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getKeplerianPeriod, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLM, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLe, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLv, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getOrbit, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getP, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getQ, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getRetrogradeFactor, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorF, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorG, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorW, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, toAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldAuxiliaryElements)[] = {
              { Py_tp_methods, t_FieldAuxiliaryElements__methods_ },
              { Py_tp_init, (void *) t_FieldAuxiliaryElements_init_ },
              { Py_tp_getset, t_FieldAuxiliaryElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldAuxiliaryElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldAuxiliaryElements, t_FieldAuxiliaryElements, FieldAuxiliaryElements);
            PyObject *t_FieldAuxiliaryElements::wrap_Object(const FieldAuxiliaryElements& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAuxiliaryElements::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAuxiliaryElements *self = (t_FieldAuxiliaryElements *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldAuxiliaryElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAuxiliaryElements::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAuxiliaryElements *self = (t_FieldAuxiliaryElements *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldAuxiliaryElements::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldAuxiliaryElements), &PY_TYPE_DEF(FieldAuxiliaryElements), module, "FieldAuxiliaryElements", 0);
            }

            void t_FieldAuxiliaryElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "class_", make_descriptor(FieldAuxiliaryElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "wrapfn_", make_descriptor(t_FieldAuxiliaryElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldAuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldAuxiliaryElements::initializeClass, 1)))
                return NULL;
              return t_FieldAuxiliaryElements::wrap_Object(FieldAuxiliaryElements(((t_FieldAuxiliaryElements *) arg)->object.this$));
            }
            static PyObject *t_FieldAuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldAuxiliaryElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldAuxiliaryElements_of_(t_FieldAuxiliaryElements *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldAuxiliaryElements_init_(t_FieldAuxiliaryElements *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              FieldAuxiliaryElements object((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldAuxiliaryElements(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldAuxiliaryElements_getAlpha(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAlpha());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getB(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getBeta(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBeta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getC(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getC());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getDate(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getEcc(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getEcc());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getFrame(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getGamma(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGamma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getH(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getH());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getK(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getKeplerianPeriod(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getKeplerianPeriod());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLM(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLM());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLe(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLe());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLv(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLv());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getMeanMotion(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getOrbit(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbit());
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getP(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getP());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getQ(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getQ());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getRetrogradeFactor(t_FieldAuxiliaryElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_FieldAuxiliaryElements_getSma(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getSma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorF(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorG(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorW(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_toAuxiliaryElements(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.toAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(result);
            }
            static PyObject *t_FieldAuxiliaryElements_get__parameters_(t_FieldAuxiliaryElements *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldAuxiliaryElements_get__alpha(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAlpha());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__b(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__beta(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBeta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__c(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getC());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__date(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__ecc(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getEcc());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__frame(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__gamma(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGamma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__h(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getH());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__k(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__keplerianPeriod(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getKeplerianPeriod());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__lM(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLM());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__le(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLe());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__lv(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLv());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__meanMotion(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__orbit(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbit());
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__p(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getP());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__q(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getQ());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__retrogradeFactor(t_FieldAuxiliaryElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__sma(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getSma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorF(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorG(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorW(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
                  mids$[mid_init$_f14f121ad3022904] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_copy_dd0ebaaba4228d02] = env->getMethodID(cls, "copy", "(D)Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;");
                  mids$[mid_getCenter_52253a5b5c02abfe] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                  mids$[mid_getInterpolationDegree_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_0f2522b3fe45d99f] = env->getMethodID(cls, "getInterpolationMethod", "()Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_getOrbAveraging_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOrbAveraging", "()Ljava/lang/String;");
                  mids$[mid_getOrbRevNum_55546ef6a647f39b] = env->getMethodID(cls, "getOrbRevNum", "()I");
                  mids$[mid_getOrbRevNumBasis_55546ef6a647f39b] = env->getMethodID(cls, "getOrbRevNumBasis", "()I");
                  mids$[mid_getPropagator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPropagator", "()Ljava/lang/String;");
                  mids$[mid_getTrajBasis_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTrajBasis", "()Ljava/lang/String;");
                  mids$[mid_getTrajBasisID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTrajBasisID", "()Ljava/lang/String;");
                  mids$[mid_getTrajFrameEpoch_c325492395d89b24] = env->getMethodID(cls, "getTrajFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTrajID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTrajID", "()Ljava/lang/String;");
                  mids$[mid_getTrajNextID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTrajNextID", "()Ljava/lang/String;");
                  mids$[mid_getTrajPrevID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTrajPrevID", "()Ljava/lang/String;");
                  mids$[mid_getTrajReferenceFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getTrajReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTrajType_4eb559a63ad8d46d] = env->getMethodID(cls, "getTrajType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_getTrajUnits_e62d3bb06d56d7e3] = env->getMethodID(cls, "getTrajUnits", "()Ljava/util/List;");
                  mids$[mid_getUseableStartTime_c325492395d89b24] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_c325492395d89b24] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_incrementTrajID_6f0f3576df9f75ee] = env->getStaticMethodID(cls, "incrementTrajID", "(Ljava/lang/String;)Ljava/lang/String;");
                  mids$[mid_setCenter_564458ee450fa323] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                  mids$[mid_setInterpolationDegree_44ed599e93e8a30c] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_da218530d7e28b54] = env->getMethodID(cls, "setInterpolationMethod", "(Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;)V");
                  mids$[mid_setOrbAveraging_734b91ac30d5f9b4] = env->getMethodID(cls, "setOrbAveraging", "(Ljava/lang/String;)V");
                  mids$[mid_setOrbRevNum_44ed599e93e8a30c] = env->getMethodID(cls, "setOrbRevNum", "(I)V");
                  mids$[mid_setOrbRevNumBasis_44ed599e93e8a30c] = env->getMethodID(cls, "setOrbRevNumBasis", "(I)V");
                  mids$[mid_setPropagator_734b91ac30d5f9b4] = env->getMethodID(cls, "setPropagator", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajBasis_734b91ac30d5f9b4] = env->getMethodID(cls, "setTrajBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajBasisID_734b91ac30d5f9b4] = env->getMethodID(cls, "setTrajBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajFrameEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setTrajFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTrajID_734b91ac30d5f9b4] = env->getMethodID(cls, "setTrajID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajNextID_734b91ac30d5f9b4] = env->getMethodID(cls, "setTrajNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajPrevID_734b91ac30d5f9b4] = env->getMethodID(cls, "setTrajPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajReferenceFrame_4755133c5c4c59be] = env->getMethodID(cls, "setTrajReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTrajType_c891909ddae6c021] = env->getMethodID(cls, "setTrajType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;)V");
                  mids$[mid_setTrajUnits_0e7c3032c7c93ed3] = env->getMethodID(cls, "setTrajUnits", "(Ljava/util/List;)V");
                  mids$[mid_setUseableStartTime_02135a6ef25adb4b] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_02135a6ef25adb4b] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_INTERPOLATION_DEGREE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_DEGREE");
                  DEFAULT_INTERPOLATION_METHOD = new ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->getStaticObjectField(cls, "DEFAULT_INTERPOLATION_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryStateHistoryMetadata::TrajectoryStateHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_f14f121ad3022904, a0.this$, a1.this$)) {}

              TrajectoryStateHistoryMetadata TrajectoryStateHistoryMetadata::copy(jdouble a0) const
              {
                return TrajectoryStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_copy_dd0ebaaba4228d02], a0));
              }

              ::org::orekit::files::ccsds::definitions::BodyFacade TrajectoryStateHistoryMetadata::getCenter() const
              {
                return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_52253a5b5c02abfe]));
              }

              jint TrajectoryStateHistoryMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_55546ef6a647f39b]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod TrajectoryStateHistoryMetadata::getInterpolationMethod() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_0f2522b3fe45d99f]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getOrbAveraging() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOrbAveraging_1c1fa1e935d6cdcf]));
              }

              jint TrajectoryStateHistoryMetadata::getOrbRevNum() const
              {
                return env->callIntMethod(this$, mids$[mid_getOrbRevNum_55546ef6a647f39b]);
              }

              jint TrajectoryStateHistoryMetadata::getOrbRevNumBasis() const
              {
                return env->callIntMethod(this$, mids$[mid_getOrbRevNumBasis_55546ef6a647f39b]);
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getPropagator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPropagator_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajBasis_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajBasisID_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getTrajFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTrajFrameEpoch_c325492395d89b24]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajNextID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajPrevID_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade TrajectoryStateHistoryMetadata::getTrajReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getTrajReferenceFrame_69d8be1b6b0a1a94]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType TrajectoryStateHistoryMetadata::getTrajType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getTrajType_4eb559a63ad8d46d]));
              }

              ::java::util::List TrajectoryStateHistoryMetadata::getTrajUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajUnits_e62d3bb06d56d7e3]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_c325492395d89b24]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::incrementTrajID(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_incrementTrajID_6f0f3576df9f75ee], a0.this$));
              }

              void TrajectoryStateHistoryMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenter_564458ee450fa323], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_44ed599e93e8a30c], a0);
              }

              void TrajectoryStateHistoryMetadata::setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_da218530d7e28b54], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setOrbAveraging(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbAveraging_734b91ac30d5f9b4], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setOrbRevNum(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbRevNum_44ed599e93e8a30c], a0);
              }

              void TrajectoryStateHistoryMetadata::setOrbRevNumBasis(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbRevNumBasis_44ed599e93e8a30c], a0);
              }

              void TrajectoryStateHistoryMetadata::setPropagator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPropagator_734b91ac30d5f9b4], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajBasis_734b91ac30d5f9b4], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajBasisID_734b91ac30d5f9b4], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajFrameEpoch_02135a6ef25adb4b], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajID_734b91ac30d5f9b4], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajNextID_734b91ac30d5f9b4], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajPrevID_734b91ac30d5f9b4], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajReferenceFrame_4755133c5c4c59be], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajType_c891909ddae6c021], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajUnits_0e7c3032c7c93ed3], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_02135a6ef25adb4b], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_02135a6ef25adb4b], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::validate(jdouble a0) const
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
#include "org/hipparchus/fitting/AbstractCurveFitter.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *AbstractCurveFitter::class$ = NULL;
      jmethodID *AbstractCurveFitter::mids$ = NULL;
      bool AbstractCurveFitter::live$ = false;

      jclass AbstractCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/AbstractCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_fit_c635a920a1414ef9] = env->getMethodID(cls, "fit", "(Ljava/util/Collection;)[D");
          mids$[mid_getOptimizer_c2c32f8aeab465c5] = env->getMethodID(cls, "getOptimizer", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer;");
          mids$[mid_getProblem_067ae4e9e4e5b47a] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractCurveFitter::AbstractCurveFitter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      JArray< jdouble > AbstractCurveFitter::fit(const ::java::util::Collection & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_fit_c635a920a1414ef9], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_AbstractCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractCurveFitter_init_(t_AbstractCurveFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractCurveFitter_fit(t_AbstractCurveFitter *self, PyObject *arg);

      static PyMethodDef t_AbstractCurveFitter__methods_[] = {
        DECLARE_METHOD(t_AbstractCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractCurveFitter, fit, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractCurveFitter)[] = {
        { Py_tp_methods, t_AbstractCurveFitter__methods_ },
        { Py_tp_init, (void *) t_AbstractCurveFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractCurveFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractCurveFitter, t_AbstractCurveFitter, AbstractCurveFitter);

      void t_AbstractCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractCurveFitter), &PY_TYPE_DEF(AbstractCurveFitter), module, "AbstractCurveFitter", 0);
      }

      void t_AbstractCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "class_", make_descriptor(AbstractCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "wrapfn_", make_descriptor(t_AbstractCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractCurveFitter::initializeClass, 1)))
          return NULL;
        return t_AbstractCurveFitter::wrap_Object(AbstractCurveFitter(((t_AbstractCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_AbstractCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractCurveFitter_init_(t_AbstractCurveFitter *self, PyObject *args, PyObject *kwds)
      {
        AbstractCurveFitter object((jobject) NULL);

        INT_CALL(object = AbstractCurveFitter());
        self->object = object;

        return 0;
      }

      static PyObject *t_AbstractCurveFitter_fit(t_AbstractCurveFitter *self, PyObject *arg)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.fit(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "fit", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *OptimizationData::class$ = NULL;
      jmethodID *OptimizationData::mids$ = NULL;
      bool OptimizationData::live$ = false;

      jclass OptimizationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/OptimizationData");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_OptimizationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationData_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_OptimizationData__methods_[] = {
        DECLARE_METHOD(t_OptimizationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationData, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OptimizationData)[] = {
        { Py_tp_methods, t_OptimizationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OptimizationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OptimizationData, t_OptimizationData, OptimizationData);

      void t_OptimizationData::install(PyObject *module)
      {
        installType(&PY_TYPE(OptimizationData), &PY_TYPE_DEF(OptimizationData), module, "OptimizationData", 0);
      }

      void t_OptimizationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "class_", make_descriptor(OptimizationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "wrapfn_", make_descriptor(t_OptimizationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OptimizationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OptimizationData::initializeClass, 1)))
          return NULL;
        return t_OptimizationData::wrap_Object(OptimizationData(((t_OptimizationData *) arg)->object.this$));
      }
      static PyObject *t_OptimizationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OptimizationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/Exception.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken::class$ = NULL;
            jmethodID *ParseToken::mids$ = NULL;
            bool ParseToken::live$ = false;

            jclass ParseToken::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff11f9e3d9e4cb50] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/lexical/TokenType;Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;ILjava/lang/String;)V");
                mids$[mid_generateException_83f066486b752c49] = env->getMethodID(cls, "generateException", "(Ljava/lang/Exception;)Lorg/orekit/errors/OrekitException;");
                mids$[mid_getContentAsBoolean_9ab94ac1dc23b105] = env->getMethodID(cls, "getContentAsBoolean", "()Z");
                mids$[mid_getContentAsDouble_b74f83833fdad017] = env->getMethodID(cls, "getContentAsDouble", "()D");
                mids$[mid_getContentAsEnum_e83b47680c533776] = env->getMethodID(cls, "getContentAsEnum", "(Ljava/lang/Class;)Ljava/lang/Enum;");
                mids$[mid_getContentAsEnumList_c7d2d1c8b99782de] = env->getMethodID(cls, "getContentAsEnumList", "(Ljava/lang/Class;)Ljava/util/List;");
                mids$[mid_getContentAsFreeTextList_e62d3bb06d56d7e3] = env->getMethodID(cls, "getContentAsFreeTextList", "()Ljava/util/List;");
                mids$[mid_getContentAsInt_55546ef6a647f39b] = env->getMethodID(cls, "getContentAsInt", "()I");
                mids$[mid_getContentAsNormalizedList_e62d3bb06d56d7e3] = env->getMethodID(cls, "getContentAsNormalizedList", "()Ljava/util/List;");
                mids$[mid_getContentAsNormalizedString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getContentAsNormalizedString", "()Ljava/lang/String;");
                mids$[mid_getContentAsUppercaseCharacter_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getContentAsUppercaseCharacter", "()C");
                mids$[mid_getContentAsUppercaseList_e62d3bb06d56d7e3] = env->getMethodID(cls, "getContentAsUppercaseList", "()Ljava/util/List;");
                mids$[mid_getContentAsUppercaseString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getContentAsUppercaseString", "()Ljava/lang/String;");
                mids$[mid_getContentAsVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getContentAsVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getFileName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFileName", "()Ljava/lang/String;");
                mids$[mid_getLineNumber_55546ef6a647f39b] = env->getMethodID(cls, "getLineNumber", "()I");
                mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                mids$[mid_getRawContent_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRawContent", "()Ljava/lang/String;");
                mids$[mid_getType_6a00f69105284aab] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/utils/lexical/TokenType;");
                mids$[mid_getUnits_6466188dbb1eea22] = env->getMethodID(cls, "getUnits", "()Lorg/orekit/utils/units/Unit;");
                mids$[mid_processAsBoolean_6ce31a1abe723a1c] = env->getMethodID(cls, "processAsBoolean", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer;)Z");
                mids$[mid_processAsCenter_9c8156e918128908] = env->getMethodID(cls, "processAsCenter", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer;Lorg/orekit/bodies/CelestialBodies;)Z");
                mids$[mid_processAsCenterList_d6f264d980210dc1] = env->getMethodID(cls, "processAsCenterList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer;Lorg/orekit/bodies/CelestialBodies;)Z");
                mids$[mid_processAsDate_e1b93d36f5699839] = env->getMethodID(cls, "processAsDate", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer;Lorg/orekit/files/ccsds/utils/ContextBinding;)Z");
                mids$[mid_processAsDouble_c4040ec3da8d5d7a] = env->getMethodID(cls, "processAsDouble", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer;)Z");
                mids$[mid_processAsDoubleArray_8b8692f0ae4a83b5] = env->getMethodID(cls, "processAsDoubleArray", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer;)Z");
                mids$[mid_processAsDoublyIndexedDouble_7a747552c120c83b] = env->getMethodID(cls, "processAsDoublyIndexedDouble", "(IILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer;)Z");
                mids$[mid_processAsEnum_276b8667d6fbcd61] = env->getMethodID(cls, "processAsEnum", "(Ljava/lang/Class;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer;)Z");
                mids$[mid_processAsEnumsList_3448942b7d029341] = env->getMethodID(cls, "processAsEnumsList", "(Ljava/lang/Class;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer;)Z");
                mids$[mid_processAsFrame_158737351dca7a47] = env->getMethodID(cls, "processAsFrame", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer;Lorg/orekit/files/ccsds/utils/ContextBinding;ZZZ)Z");
                mids$[mid_processAsFreeTextList_d9fb86dfdec8b415] = env->getMethodID(cls, "processAsFreeTextList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsFreeTextString_034e896419ef4f59] = env->getMethodID(cls, "processAsFreeTextString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsIndexedDouble_aac489dc10588899] = env->getMethodID(cls, "processAsIndexedDouble", "(ILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer;)Z");
                mids$[mid_processAsIndexedDoubleArray_6d0af2e2f45e5ff5] = env->getMethodID(cls, "processAsIndexedDoubleArray", "(ILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer;)Z");
                mids$[mid_processAsIndexedInteger_e44d59f138e01710] = env->getMethodID(cls, "processAsIndexedInteger", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer;)Z");
                mids$[mid_processAsIndexedNormalizedString_47ba468f55500e86] = env->getMethodID(cls, "processAsIndexedNormalizedString", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer;)Z");
                mids$[mid_processAsIndexedUppercaseString_47ba468f55500e86] = env->getMethodID(cls, "processAsIndexedUppercaseString", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer;)Z");
                mids$[mid_processAsInteger_3f4ad73f3811cc5d] = env->getMethodID(cls, "processAsInteger", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer;)Z");
                mids$[mid_processAsIntegerArray_302a8d372179e12a] = env->getMethodID(cls, "processAsIntegerArray", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer;)Z");
                mids$[mid_processAsIntegerArrayNoSpace_302a8d372179e12a] = env->getMethodID(cls, "processAsIntegerArrayNoSpace", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer;)Z");
                mids$[mid_processAsLabeledDouble_4ca4a91eb7c1cf81] = env->getMethodID(cls, "processAsLabeledDouble", "(CLorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer;)Z");
                mids$[mid_processAsManeuvrableEnum_3bf09164ba042a1c] = env->getMethodID(cls, "processAsManeuvrableEnum", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer;)Z");
                mids$[mid_processAsNormalizedCharacter_734e277854810307] = env->getMethodID(cls, "processAsNormalizedCharacter", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer;)Z");
                mids$[mid_processAsNormalizedList_d9fb86dfdec8b415] = env->getMethodID(cls, "processAsNormalizedList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsNormalizedString_034e896419ef4f59] = env->getMethodID(cls, "processAsNormalizedString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsRotationOrder_39dab3d5f5ec57f9] = env->getMethodID(cls, "processAsRotationOrder", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer;)Z");
                mids$[mid_processAsTimeSystem_74b34998c4f00da3] = env->getMethodID(cls, "processAsTimeSystem", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer;)Z");
                mids$[mid_processAsUnitList_1bb54ede335382b1] = env->getMethodID(cls, "processAsUnitList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer;)Z");
                mids$[mid_processAsUppercaseList_d9fb86dfdec8b415] = env->getMethodID(cls, "processAsUppercaseList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsUppercaseString_034e896419ef4f59] = env->getMethodID(cls, "processAsUppercaseString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsVector_57e5a5ab6c57eb33] = env->getMethodID(cls, "processAsVector", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ParseToken::ParseToken(const ::org::orekit::files::ccsds::utils::lexical::TokenType & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::org::orekit::utils::units::Unit & a3, jint a4, const ::java::lang::String & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff11f9e3d9e4cb50, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

            ::org::orekit::errors::OrekitException ParseToken::generateException(const ::java::lang::Exception & a0) const
            {
              return ::org::orekit::errors::OrekitException(env->callObjectMethod(this$, mids$[mid_generateException_83f066486b752c49], a0.this$));
            }

            jboolean ParseToken::getContentAsBoolean() const
            {
              return env->callBooleanMethod(this$, mids$[mid_getContentAsBoolean_9ab94ac1dc23b105]);
            }

            jdouble ParseToken::getContentAsDouble() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getContentAsDouble_b74f83833fdad017]);
            }

            ::java::lang::Enum ParseToken::getContentAsEnum(const ::java::lang::Class & a0) const
            {
              return ::java::lang::Enum(env->callObjectMethod(this$, mids$[mid_getContentAsEnum_e83b47680c533776], a0.this$));
            }

            ::java::util::List ParseToken::getContentAsEnumList(const ::java::lang::Class & a0) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsEnumList_c7d2d1c8b99782de], a0.this$));
            }

            ::java::util::List ParseToken::getContentAsFreeTextList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsFreeTextList_e62d3bb06d56d7e3]));
            }

            jint ParseToken::getContentAsInt() const
            {
              return env->callIntMethod(this$, mids$[mid_getContentAsInt_55546ef6a647f39b]);
            }

            ::java::util::List ParseToken::getContentAsNormalizedList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsNormalizedList_e62d3bb06d56d7e3]));
            }

            ::java::lang::String ParseToken::getContentAsNormalizedString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getContentAsNormalizedString_1c1fa1e935d6cdcf]));
            }

            jchar ParseToken::getContentAsUppercaseCharacter() const
            {
              return env->callCharMethod(this$, mids$[mid_getContentAsUppercaseCharacter_5e2f8fc4d7c03fbd]);
            }

            ::java::util::List ParseToken::getContentAsUppercaseList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsUppercaseList_e62d3bb06d56d7e3]));
            }

            ::java::lang::String ParseToken::getContentAsUppercaseString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getContentAsUppercaseString_1c1fa1e935d6cdcf]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D ParseToken::getContentAsVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getContentAsVector_8b724f8b4fdad1a2]));
            }

            ::java::lang::String ParseToken::getFileName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFileName_1c1fa1e935d6cdcf]));
            }

            jint ParseToken::getLineNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLineNumber_55546ef6a647f39b]);
            }

            ::java::lang::String ParseToken::getName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String ParseToken::getRawContent() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRawContent_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::utils::lexical::TokenType ParseToken::getType() const
            {
              return ::org::orekit::files::ccsds::utils::lexical::TokenType(env->callObjectMethod(this$, mids$[mid_getType_6a00f69105284aab]));
            }

            ::org::orekit::utils::units::Unit ParseToken::getUnits() const
            {
              return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnits_6466188dbb1eea22]));
            }

            jboolean ParseToken::processAsBoolean(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsBoolean_6ce31a1abe723a1c], a0.this$);
            }

            jboolean ParseToken::processAsCenter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer & a0, const ::org::orekit::bodies::CelestialBodies & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsCenter_9c8156e918128908], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsCenterList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer & a0, const ::org::orekit::bodies::CelestialBodies & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsCenterList_d6f264d980210dc1], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsDate(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDate_e1b93d36f5699839], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsDouble(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDouble_c4040ec3da8d5d7a], a0.this$, a1.this$, a2.this$);
            }

            jboolean ParseToken::processAsDoubleArray(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDoubleArray_8b8692f0ae4a83b5], a0.this$, a1.this$, a2.this$);
            }

            jboolean ParseToken::processAsDoublyIndexedDouble(jint a0, jint a1, const ::org::orekit::utils::units::Unit & a2, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a3, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer & a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDoublyIndexedDouble_7a747552c120c83b], a0, a1, a2.this$, a3.this$, a4.this$);
            }

            jboolean ParseToken::processAsEnum(const ::java::lang::Class & a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsEnum_276b8667d6fbcd61], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsEnumsList(const ::java::lang::Class & a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsEnumsList_3448942b7d029341], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsFrame(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, jboolean a2, jboolean a3, jboolean a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFrame_158737351dca7a47], a0.this$, a1.this$, a2, a3, a4);
            }

            jboolean ParseToken::processAsFreeTextList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFreeTextList_d9fb86dfdec8b415], a0.this$);
            }

            jboolean ParseToken::processAsFreeTextString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFreeTextString_034e896419ef4f59], a0.this$);
            }

            jboolean ParseToken::processAsIndexedDouble(jint a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedDouble_aac489dc10588899], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsIndexedDoubleArray(jint a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedDoubleArray_6d0af2e2f45e5ff5], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsIndexedInteger(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedInteger_e44d59f138e01710], a0, a1.this$);
            }

            jboolean ParseToken::processAsIndexedNormalizedString(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedNormalizedString_47ba468f55500e86], a0, a1.this$);
            }

            jboolean ParseToken::processAsIndexedUppercaseString(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedUppercaseString_47ba468f55500e86], a0, a1.this$);
            }

            jboolean ParseToken::processAsInteger(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsInteger_3f4ad73f3811cc5d], a0.this$);
            }

            jboolean ParseToken::processAsIntegerArray(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIntegerArray_302a8d372179e12a], a0.this$);
            }

            jboolean ParseToken::processAsIntegerArrayNoSpace(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIntegerArrayNoSpace_302a8d372179e12a], a0.this$);
            }

            jboolean ParseToken::processAsLabeledDouble(jchar a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsLabeledDouble_4ca4a91eb7c1cf81], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsManeuvrableEnum(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsManeuvrableEnum_3bf09164ba042a1c], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedCharacter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedCharacter_734e277854810307], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedList_d9fb86dfdec8b415], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedString_034e896419ef4f59], a0.this$);
            }

            jboolean ParseToken::processAsRotationOrder(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsRotationOrder_39dab3d5f5ec57f9], a0.this$);
            }

            jboolean ParseToken::processAsTimeSystem(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsTimeSystem_74b34998c4f00da3], a0.this$);
            }

            jboolean ParseToken::processAsUnitList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUnitList_1bb54ede335382b1], a0.this$);
            }

            jboolean ParseToken::processAsUppercaseList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUppercaseList_d9fb86dfdec8b415], a0.this$);
            }

            jboolean ParseToken::processAsUppercaseString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUppercaseString_034e896419ef4f59], a0.this$);
            }

            jboolean ParseToken::processAsVector(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsVector_57e5a5ab6c57eb33], a0.this$, a1.this$, a2.this$);
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
            static PyObject *t_ParseToken_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ParseToken_init_(t_ParseToken *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ParseToken_generateException(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsBoolean(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsDouble(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsEnum(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsEnumList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsFreeTextList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsInt(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsNormalizedList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsNormalizedString(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseCharacter(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseString(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsVector(t_ParseToken *self);
            static PyObject *t_ParseToken_getFileName(t_ParseToken *self);
            static PyObject *t_ParseToken_getLineNumber(t_ParseToken *self);
            static PyObject *t_ParseToken_getName(t_ParseToken *self);
            static PyObject *t_ParseToken_getRawContent(t_ParseToken *self);
            static PyObject *t_ParseToken_getType(t_ParseToken *self);
            static PyObject *t_ParseToken_getUnits(t_ParseToken *self);
            static PyObject *t_ParseToken_processAsBoolean(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsCenter(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsCenterList(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDate(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDoubleArray(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDoublyIndexedDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsEnum(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsEnumsList(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsFrame(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsFreeTextList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsFreeTextString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIndexedDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedDoubleArray(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedInteger(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedNormalizedString(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedUppercaseString(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsInteger(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIntegerArray(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIntegerArrayNoSpace(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsLabeledDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsManeuvrableEnum(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedCharacter(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsRotationOrder(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsTimeSystem(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUnitList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUppercaseList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUppercaseString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsVector(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_get__contentAsBoolean(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsDouble(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsFreeTextList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsInt(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsNormalizedList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsNormalizedString(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseCharacter(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseString(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsVector(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__fileName(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__lineNumber(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__name(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__rawContent(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__type(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__units(t_ParseToken *self, void *data);
            static PyGetSetDef t_ParseToken__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken, contentAsBoolean),
              DECLARE_GET_FIELD(t_ParseToken, contentAsDouble),
              DECLARE_GET_FIELD(t_ParseToken, contentAsFreeTextList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsInt),
              DECLARE_GET_FIELD(t_ParseToken, contentAsNormalizedList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsNormalizedString),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseCharacter),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseString),
              DECLARE_GET_FIELD(t_ParseToken, contentAsVector),
              DECLARE_GET_FIELD(t_ParseToken, fileName),
              DECLARE_GET_FIELD(t_ParseToken, lineNumber),
              DECLARE_GET_FIELD(t_ParseToken, name),
              DECLARE_GET_FIELD(t_ParseToken, rawContent),
              DECLARE_GET_FIELD(t_ParseToken, type),
              DECLARE_GET_FIELD(t_ParseToken, units),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken__methods_[] = {
              DECLARE_METHOD(t_ParseToken, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken, generateException, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsBoolean, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsDouble, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsEnum, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsEnumList, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsFreeTextList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsInt, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsNormalizedList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsNormalizedString, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseCharacter, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseString, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsVector, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getFileName, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getLineNumber, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getName, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getRawContent, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getType, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getUnits, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, processAsBoolean, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsCenter, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsCenterList, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDate, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDoubleArray, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDoublyIndexedDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsEnum, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsEnumsList, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsFrame, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsFreeTextList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsFreeTextString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIndexedDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedDoubleArray, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedInteger, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedNormalizedString, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedUppercaseString, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsInteger, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIntegerArray, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIntegerArrayNoSpace, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsLabeledDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsManeuvrableEnum, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedCharacter, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsRotationOrder, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsTimeSystem, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUnitList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUppercaseList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUppercaseString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsVector, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken)[] = {
              { Py_tp_methods, t_ParseToken__methods_ },
              { Py_tp_init, (void *) t_ParseToken_init_ },
              { Py_tp_getset, t_ParseToken__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken, t_ParseToken, ParseToken);

            void t_ParseToken::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken), &PY_TYPE_DEF(ParseToken), module, "ParseToken", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "StringConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$StringConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedStringConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedStringConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "StringListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$StringListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "EnumConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$EnumConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "EnumListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$EnumListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "BooleanConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$BooleanConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IntConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IntConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedIntConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedIntConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IntegerArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IntegerArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CharConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CharConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "LabeledDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoublyIndexedDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoublyIndexedDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoubleArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoubleArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedDoubleArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedDoubleArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "VectorConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$VectorConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DateConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DateConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "TimeSystemConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$TimeSystemConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "FrameConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$FrameConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CenterConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CenterConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CenterListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CenterListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "RotationOrderConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$RotationOrderConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "UnitListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$UnitListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "ManeuvrableConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$ManeuvrableConsumer)));
            }

            void t_ParseToken::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "class_", make_descriptor(ParseToken::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "wrapfn_", make_descriptor(t_ParseToken::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken::initializeClass, 1)))
                return NULL;
              return t_ParseToken::wrap_Object(ParseToken(((t_ParseToken *) arg)->object.this$));
            }
            static PyObject *t_ParseToken_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ParseToken_init_(t_ParseToken *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::org::orekit::utils::units::Unit a3((jobject) NULL);
              jint a4;
              ::java::lang::String a5((jobject) NULL);
              ParseToken object((jobject) NULL);

              if (!parseArgs(args, "KsskIs", ::org::orekit::files::ccsds::utils::lexical::TokenType::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_TokenType::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ParseToken(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ParseToken_generateException(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Exception a0((jobject) NULL);
              ::org::orekit::errors::OrekitException result((jobject) NULL);

              if (!parseArg(arg, "k", ::java::lang::Exception::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.generateException(a0));
                return ::org::orekit::errors::t_OrekitException::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generateException", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsBoolean(t_ParseToken *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.getContentAsBoolean());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_ParseToken_getContentAsDouble(t_ParseToken *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getContentAsDouble());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ParseToken_getContentAsEnum(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Enum result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
              {
                OBJ_CALL(result = self->object.getContentAsEnum(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Enum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getContentAsEnum", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsEnumList(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
              {
                OBJ_CALL(result = self->object.getContentAsEnumList(a0));
                return ::java::util::t_List::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getContentAsEnumList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsFreeTextList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsFreeTextList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsInt(t_ParseToken *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getContentAsInt());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ParseToken_getContentAsNormalizedList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsNormalizedList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsNormalizedString(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsNormalizedString());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getContentAsUppercaseCharacter(t_ParseToken *self)
            {
              jchar result;
              OBJ_CALL(result = self->object.getContentAsUppercaseCharacter());
              return c2p(result);
            }

            static PyObject *t_ParseToken_getContentAsUppercaseList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsUppercaseList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsUppercaseString(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsUppercaseString());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getContentAsVector(t_ParseToken *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_ParseToken_getFileName(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileName());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getLineNumber(t_ParseToken *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLineNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ParseToken_getName(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getName());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getRawContent(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRawContent());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getType(t_ParseToken *self)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType result((jobject) NULL);
              OBJ_CALL(result = self->object.getType());
              return ::org::orekit::files::ccsds::utils::lexical::t_TokenType::wrap_Object(result);
            }

            static PyObject *t_ParseToken_getUnits(t_ParseToken *self)
            {
              ::org::orekit::utils::units::Unit result((jobject) NULL);
              OBJ_CALL(result = self->object.getUnits());
              return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
            }

            static PyObject *t_ParseToken_processAsBoolean(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsBoolean(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsBoolean", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsCenter(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsCenter(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsCenter", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsCenterList(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsCenterList(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsCenterList", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDate(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsDate(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDate", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDouble(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsDouble(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDoubleArray(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsDoubleArray(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDoubleArray", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDoublyIndexedDouble(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::orekit::utils::units::Unit a2((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer a4((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IIkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.processAsDoublyIndexedDouble(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDoublyIndexedDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsEnum(t_ParseToken *self, PyObject *args)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "KK", ::java::lang::Class::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1, &p1, ::org::orekit::files::ccsds::utils::lexical::t_ParseToken$EnumConsumer::parameters_))
              {
                OBJ_CALL(result = self->object.processAsEnum(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsEnum", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsEnumsList(t_ParseToken *self, PyObject *args)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "KK", ::java::lang::Class::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1, &p1, ::org::orekit::files::ccsds::utils::lexical::t_ParseToken$EnumListConsumer::parameters_))
              {
                OBJ_CALL(result = self->object.processAsEnumsList(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsEnumsList", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFrame(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              jboolean a2;
              jboolean a3;
              jboolean a4;
              jboolean result;

              if (!parseArgs(args, "kkZZZ", ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.processAsFrame(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFrame", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFreeTextList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsFreeTextList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFreeTextList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFreeTextString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsFreeTextString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFreeTextString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedDouble(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsIndexedDouble(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedDoubleArray(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsIndexedDoubleArray(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedDoubleArray", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedInteger(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedInteger(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedInteger", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedNormalizedString(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedNormalizedString(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedNormalizedString", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedUppercaseString(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedUppercaseString(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedUppercaseString", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsInteger(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsInteger(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsInteger", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIntegerArray(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsIntegerArray(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIntegerArray", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIntegerArrayNoSpace(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsIntegerArrayNoSpace(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIntegerArrayNoSpace", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsLabeledDouble(t_ParseToken *self, PyObject *args)
            {
              jchar a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "CkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsLabeledDouble(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsLabeledDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsManeuvrableEnum(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsManeuvrableEnum(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsManeuvrableEnum", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedCharacter(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedCharacter(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedCharacter", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsRotationOrder(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsRotationOrder(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsRotationOrder", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsTimeSystem(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsTimeSystem(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsTimeSystem", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUnitList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUnitList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUnitList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUppercaseList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUppercaseList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUppercaseList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUppercaseString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUppercaseString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUppercaseString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsVector(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsVector(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsVector", args);
              return NULL;
            }

            static PyObject *t_ParseToken_get__contentAsBoolean(t_ParseToken *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.getContentAsBoolean());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_ParseToken_get__contentAsDouble(t_ParseToken *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getContentAsDouble());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ParseToken_get__contentAsFreeTextList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsFreeTextList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsInt(t_ParseToken *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getContentAsInt());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_ParseToken_get__contentAsNormalizedList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsNormalizedList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsNormalizedString(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsNormalizedString());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseCharacter(t_ParseToken *self, void *data)
            {
              jchar value;
              OBJ_CALL(value = self->object.getContentAsUppercaseCharacter());
              return c2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsUppercaseList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseString(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsUppercaseString());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsVector(t_ParseToken *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__fileName(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileName());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__lineNumber(t_ParseToken *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLineNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_ParseToken_get__name(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getName());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__rawContent(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRawContent());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__type(t_ParseToken *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType value((jobject) NULL);
              OBJ_CALL(value = self->object.getType());
              return ::org::orekit::files::ccsds::utils::lexical::t_TokenType::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__units(t_ParseToken *self, void *data)
            {
              ::org::orekit::utils::units::Unit value((jobject) NULL);
              OBJ_CALL(value = self->object.getUnits());
              return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIHistoryFilesLoader$Parser::class$ = NULL;
      jmethodID *UTCTAIHistoryFilesLoader$Parser::mids$ = NULL;
      bool UTCTAIHistoryFilesLoader$Parser::live$ = false;

      jclass UTCTAIHistoryFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIHistoryFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_7b8887374449b257] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIHistoryFilesLoader$Parser::UTCTAIHistoryFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::java::util::List UTCTAIHistoryFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_7b8887374449b257], a0.this$, a1.this$));
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
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIHistoryFilesLoader$Parser_init_(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_parse(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_UTCTAIHistoryFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIHistoryFilesLoader$Parser)[] = {
        { Py_tp_methods, t_UTCTAIHistoryFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_UTCTAIHistoryFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIHistoryFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIHistoryFilesLoader$Parser, t_UTCTAIHistoryFilesLoader$Parser, UTCTAIHistoryFilesLoader$Parser);

      void t_UTCTAIHistoryFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIHistoryFilesLoader$Parser), &PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser), module, "UTCTAIHistoryFilesLoader$Parser", 0);
      }

      void t_UTCTAIHistoryFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "class_", make_descriptor(UTCTAIHistoryFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "wrapfn_", make_descriptor(t_UTCTAIHistoryFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIHistoryFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_UTCTAIHistoryFilesLoader$Parser::wrap_Object(UTCTAIHistoryFilesLoader$Parser(((t_UTCTAIHistoryFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIHistoryFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIHistoryFilesLoader$Parser_init_(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        UTCTAIHistoryFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = UTCTAIHistoryFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_parse(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/AbstractMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractMap::class$ = NULL;
    jmethodID *AbstractMap::mids$ = NULL;
    bool AbstractMap::live$ = false;

    jclass AbstractMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_containsKey_460c5e2d9d51c6cc] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_460c5e2d9d51c6cc] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_7e8f11dd23d1142c] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_5804c890f94a02b6] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_7e8f11dd23d1142c] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_2329cf24e33e570d] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_6648520b18d8ef1d] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_remove_5804c890f94a02b6] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_cb666ea1a15f5210] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void AbstractMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    jboolean AbstractMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean AbstractMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::util::Set AbstractMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_7e8f11dd23d1142c]));
    }

    jboolean AbstractMap::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object AbstractMap::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_5804c890f94a02b6], a0.this$));
    }

    jint AbstractMap::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean AbstractMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Set AbstractMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_7e8f11dd23d1142c]));
    }

    ::java::lang::Object AbstractMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_2329cf24e33e570d], a0.this$, a1.this$));
    }

    void AbstractMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_6648520b18d8ef1d], a0.this$);
    }

    ::java::lang::Object AbstractMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_5804c890f94a02b6], a0.this$));
    }

    jint AbstractMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    ::java::lang::String AbstractMap::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::util::Collection AbstractMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cb666ea1a15f5210]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractMap_of_(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_clear(t_AbstractMap *self);
    static PyObject *t_AbstractMap_containsKey(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_containsValue(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_entrySet(t_AbstractMap *self);
    static PyObject *t_AbstractMap_equals(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_get(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_hashCode(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_isEmpty(t_AbstractMap *self);
    static PyObject *t_AbstractMap_keySet(t_AbstractMap *self);
    static PyObject *t_AbstractMap_put(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_putAll(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_remove(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_size(t_AbstractMap *self);
    static PyObject *t_AbstractMap_toString(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_values(t_AbstractMap *self);
    static PyObject *t_AbstractMap_get__empty(t_AbstractMap *self, void *data);
    static PyObject *t_AbstractMap_get__parameters_(t_AbstractMap *self, void *data);
    static PyGetSetDef t_AbstractMap__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractMap, empty),
      DECLARE_GET_FIELD(t_AbstractMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractMap__methods_[] = {
      DECLARE_METHOD(t_AbstractMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, clear, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, containsKey, METH_O),
      DECLARE_METHOD(t_AbstractMap, containsValue, METH_O),
      DECLARE_METHOD(t_AbstractMap, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, get, METH_O),
      DECLARE_METHOD(t_AbstractMap, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, keySet, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, put, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, putAll, METH_O),
      DECLARE_METHOD(t_AbstractMap, remove, METH_O),
      DECLARE_METHOD(t_AbstractMap, size, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, toString, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractMap)[] = {
      { Py_tp_methods, t_AbstractMap__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractMap)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AbstractMap, t_AbstractMap, AbstractMap);
    PyObject *t_AbstractMap::wrap_Object(const AbstractMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_AbstractMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractMap *self = (t_AbstractMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_AbstractMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_AbstractMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractMap *self = (t_AbstractMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_AbstractMap::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractMap), &PY_TYPE_DEF(AbstractMap), module, "AbstractMap", 0);
    }

    void t_AbstractMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "class_", make_descriptor(AbstractMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "wrapfn_", make_descriptor(t_AbstractMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractMap::initializeClass, 1)))
        return NULL;
      return t_AbstractMap::wrap_Object(AbstractMap(((t_AbstractMap *) arg)->object.this$));
    }
    static PyObject *t_AbstractMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractMap_of_(t_AbstractMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractMap_clear(t_AbstractMap *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_AbstractMap_containsKey(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_containsValue(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsValue", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_entrySet(t_AbstractMap *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_AbstractMap_equals(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractMap_get(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_hashCode(t_AbstractMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractMap_isEmpty(t_AbstractMap *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_AbstractMap_keySet(t_AbstractMap *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_AbstractMap_put(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_AbstractMap_putAll(t_AbstractMap *self, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "putAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_remove(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_size(t_AbstractMap *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractMap_toString(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_AbstractMap_values(t_AbstractMap *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_AbstractMap_get__parameters_(t_AbstractMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_AbstractMap_get__empty(t_AbstractMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/NormalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *NormalDistribution::class$ = NULL;
        jmethodID *NormalDistribution::mids$ = NULL;
        bool NormalDistribution::live$ = false;

        jclass NormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/NormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMean_b74f83833fdad017] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getStandardDeviation_b74f83833fdad017] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_99e3200dafc19573] = env->getMethodID(cls, "probability", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NormalDistribution::NormalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        NormalDistribution::NormalDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble NormalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble NormalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble NormalDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_b74f83833fdad017]);
        }

        jdouble NormalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble NormalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble NormalDistribution::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_b74f83833fdad017]);
        }

        jdouble NormalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble NormalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble NormalDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean NormalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble NormalDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
        }

        jdouble NormalDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_99e3200dafc19573], a0, a1);
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
        static PyObject *t_NormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NormalDistribution_init_(t_NormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NormalDistribution_cumulativeProbability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_density(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getMean(t_NormalDistribution *self);
        static PyObject *t_NormalDistribution_getNumericalMean(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getNumericalVariance(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getStandardDeviation(t_NormalDistribution *self);
        static PyObject *t_NormalDistribution_getSupportLowerBound(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getSupportUpperBound(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_inverseCumulativeProbability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_isSupportConnected(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_logDensity(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_probability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_get__mean(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__numericalMean(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__numericalVariance(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__standardDeviation(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportConnected(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportLowerBound(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportUpperBound(t_NormalDistribution *self, void *data);
        static PyGetSetDef t_NormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_NormalDistribution, mean),
          DECLARE_GET_FIELD(t_NormalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_NormalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_NormalDistribution, standardDeviation),
          DECLARE_GET_FIELD(t_NormalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_NormalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_NormalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NormalDistribution__methods_[] = {
          DECLARE_METHOD(t_NormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_NormalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_NormalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, logDensity, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NormalDistribution)[] = {
          { Py_tp_methods, t_NormalDistribution__methods_ },
          { Py_tp_init, (void *) t_NormalDistribution_init_ },
          { Py_tp_getset, t_NormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(NormalDistribution, t_NormalDistribution, NormalDistribution);

        void t_NormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(NormalDistribution), &PY_TYPE_DEF(NormalDistribution), module, "NormalDistribution", 0);
        }

        void t_NormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "class_", make_descriptor(NormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "wrapfn_", make_descriptor(t_NormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NormalDistribution::initializeClass, 1)))
            return NULL;
          return t_NormalDistribution::wrap_Object(NormalDistribution(((t_NormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_NormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NormalDistribution_init_(t_NormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NormalDistribution object((jobject) NULL);

              INT_CALL(object = NormalDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              NormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = NormalDistribution(a0, a1));
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

        static PyObject *t_NormalDistribution_cumulativeProbability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_NormalDistribution_density(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_NormalDistribution_getMean(t_NormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NormalDistribution_getNumericalMean(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_NormalDistribution_getNumericalVariance(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_NormalDistribution_getStandardDeviation(t_NormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NormalDistribution_getSupportLowerBound(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_NormalDistribution_getSupportUpperBound(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_NormalDistribution_inverseCumulativeProbability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_NormalDistribution_isSupportConnected(t_NormalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_NormalDistribution_logDensity(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_NormalDistribution_probability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_NormalDistribution_get__mean(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__numericalMean(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__numericalVariance(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__standardDeviation(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__supportConnected(t_NormalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_NormalDistribution_get__supportLowerBound(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__supportUpperBound(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}

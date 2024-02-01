#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/DummyLocalizable.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *DummyLocalizable::class$ = NULL;
      jmethodID *DummyLocalizable::mids$ = NULL;
      bool DummyLocalizable::live$ = false;

      jclass DummyLocalizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/DummyLocalizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_getLocalizedString_5969ecf7afac3dba] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DummyLocalizable::DummyLocalizable(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      ::java::lang::String DummyLocalizable::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_5969ecf7afac3dba], a0.this$));
      }

      ::java::lang::String DummyLocalizable::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_d2c8eb4129821f0e]));
      }

      ::java::lang::String DummyLocalizable::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_DummyLocalizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DummyLocalizable_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DummyLocalizable_init_(t_DummyLocalizable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DummyLocalizable_getLocalizedString(t_DummyLocalizable *self, PyObject *arg);
      static PyObject *t_DummyLocalizable_getSourceString(t_DummyLocalizable *self);
      static PyObject *t_DummyLocalizable_toString(t_DummyLocalizable *self, PyObject *args);
      static PyObject *t_DummyLocalizable_get__sourceString(t_DummyLocalizable *self, void *data);
      static PyGetSetDef t_DummyLocalizable__fields_[] = {
        DECLARE_GET_FIELD(t_DummyLocalizable, sourceString),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DummyLocalizable__methods_[] = {
        DECLARE_METHOD(t_DummyLocalizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DummyLocalizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DummyLocalizable, getLocalizedString, METH_O),
        DECLARE_METHOD(t_DummyLocalizable, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_DummyLocalizable, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DummyLocalizable)[] = {
        { Py_tp_methods, t_DummyLocalizable__methods_ },
        { Py_tp_init, (void *) t_DummyLocalizable_init_ },
        { Py_tp_getset, t_DummyLocalizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DummyLocalizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DummyLocalizable, t_DummyLocalizable, DummyLocalizable);

      void t_DummyLocalizable::install(PyObject *module)
      {
        installType(&PY_TYPE(DummyLocalizable), &PY_TYPE_DEF(DummyLocalizable), module, "DummyLocalizable", 0);
      }

      void t_DummyLocalizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "class_", make_descriptor(DummyLocalizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "wrapfn_", make_descriptor(t_DummyLocalizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DummyLocalizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DummyLocalizable::initializeClass, 1)))
          return NULL;
        return t_DummyLocalizable::wrap_Object(DummyLocalizable(((t_DummyLocalizable *) arg)->object.this$));
      }
      static PyObject *t_DummyLocalizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DummyLocalizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DummyLocalizable_init_(t_DummyLocalizable *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        DummyLocalizable object((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          INT_CALL(object = DummyLocalizable(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DummyLocalizable_getLocalizedString(t_DummyLocalizable *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_DummyLocalizable_getSourceString(t_DummyLocalizable *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_DummyLocalizable_toString(t_DummyLocalizable *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DummyLocalizable), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DummyLocalizable_get__sourceString(t_DummyLocalizable *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenTesseralLinear::class$ = NULL;
              jmethodID *HansenTesseralLinear::mids$ = NULL;
              bool HansenTesseralLinear::live$ = false;

              jclass HansenTesseralLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_cd8b07b153e58289] = env->getMethodID(cls, "<init>", "(IIIII)V");
                  mids$[mid_computeInitValues_bd28dc6055dc5bbd] = env->getMethodID(cls, "computeInitValues", "(DDD)V");
                  mids$[mid_getDerivative_5540210c7d309f18] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_5540210c7d309f18] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenTesseralLinear::HansenTesseralLinear(jint a0, jint a1, jint a2, jint a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd8b07b153e58289, a0, a1, a2, a3, a4)) {}

              void HansenTesseralLinear::computeInitValues(jdouble a0, jdouble a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_bd28dc6055dc5bbd], a0, a1, a2);
              }

              jdouble HansenTesseralLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_5540210c7d309f18], a0, a1);
              }

              jdouble HansenTesseralLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_5540210c7d309f18], a0, a1);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenTesseralLinear_init_(t_HansenTesseralLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenTesseralLinear_computeInitValues(t_HansenTesseralLinear *self, PyObject *args);
              static PyObject *t_HansenTesseralLinear_getDerivative(t_HansenTesseralLinear *self, PyObject *args);
              static PyObject *t_HansenTesseralLinear_getValue(t_HansenTesseralLinear *self, PyObject *args);

              static PyMethodDef t_HansenTesseralLinear__methods_[] = {
                DECLARE_METHOD(t_HansenTesseralLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenTesseralLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenTesseralLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_HansenTesseralLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenTesseralLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenTesseralLinear)[] = {
                { Py_tp_methods, t_HansenTesseralLinear__methods_ },
                { Py_tp_init, (void *) t_HansenTesseralLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenTesseralLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenTesseralLinear, t_HansenTesseralLinear, HansenTesseralLinear);

              void t_HansenTesseralLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenTesseralLinear), &PY_TYPE_DEF(HansenTesseralLinear), module, "HansenTesseralLinear", 0);
              }

              void t_HansenTesseralLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "class_", make_descriptor(HansenTesseralLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "wrapfn_", make_descriptor(t_HansenTesseralLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenTesseralLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenTesseralLinear::wrap_Object(HansenTesseralLinear(((t_HansenTesseralLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenTesseralLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenTesseralLinear_init_(t_HansenTesseralLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                HansenTesseralLinear object((jobject) NULL);

                if (!parseArgs(args, "IIIII", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = HansenTesseralLinear(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenTesseralLinear_computeInitValues(t_HansenTesseralLinear *self, PyObject *args)
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_HansenTesseralLinear_getDerivative(t_HansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenTesseralLinear_getValue(t_HansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
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
#include "org/hipparchus/complex/ComplexUtils.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexUtils::class$ = NULL;
      jmethodID *ComplexUtils::mids$ = NULL;
      bool ComplexUtils::live$ = false;

      jclass ComplexUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convertToComplex_250fd87779dfc491] = env->getStaticMethodID(cls, "convertToComplex", "([D)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_polar2Complex_4e58ab40c2f85d5e] = env->getStaticMethodID(cls, "polar2Complex", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_polar2Complex_151d0ca7c89aa768] = env->getStaticMethodID(cls, "polar2Complex", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexUtils::convertToComplex(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::org::hipparchus::complex::Complex >(env->callStaticObjectMethod(cls, mids$[mid_convertToComplex_250fd87779dfc491], a0.this$));
      }

      ::org::hipparchus::complex::Complex ComplexUtils::polar2Complex(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_polar2Complex_4e58ab40c2f85d5e], a0, a1));
      }

      ::org::hipparchus::complex::FieldComplex ComplexUtils::polar2Complex(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_polar2Complex_151d0ca7c89aa768], a0.this$, a1.this$));
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
      static PyObject *t_ComplexUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_convertToComplex(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_polar2Complex(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_ComplexUtils__methods_[] = {
        DECLARE_METHOD(t_ComplexUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, convertToComplex, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, polar2Complex, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexUtils)[] = {
        { Py_tp_methods, t_ComplexUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexUtils, t_ComplexUtils, ComplexUtils);

      void t_ComplexUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexUtils), &PY_TYPE_DEF(ComplexUtils), module, "ComplexUtils", 0);
      }

      void t_ComplexUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "class_", make_descriptor(ComplexUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "wrapfn_", make_descriptor(t_ComplexUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexUtils::initializeClass, 1)))
          return NULL;
        return t_ComplexUtils::wrap_Object(ComplexUtils(((t_ComplexUtils *) arg)->object.this$));
      }
      static PyObject *t_ComplexUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexUtils_convertToComplex(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::convertToComplex(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError(type, "convertToComplex", arg);
        return NULL;
      }

      static PyObject *t_ComplexUtils_polar2Complex(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::polar2Complex(a0, a1));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::polar2Complex(a0, a1));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "polar2Complex", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *AbstractFieldODEStateInterpolator::class$ = NULL;
        jmethodID *AbstractFieldODEStateInterpolator::mids$ = NULL;
        bool AbstractFieldODEStateInterpolator::live$ = false;

        jclass AbstractFieldODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_15f5056f2d3c7d41] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getGlobalCurrentState_15f5056f2d3c7d41] = env->getMethodID(cls, "getGlobalCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getGlobalPreviousState_15f5056f2d3c7d41] = env->getMethodID(cls, "getGlobalPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_7a35201efb2d5095] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getPreviousState_15f5056f2d3c7d41] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_2a7d06ff6cc487fe] = env->getMethodID(cls, "restrictStep", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;");
            mids$[mid_computeInterpolatedStateAndDerivatives_318631c11a671600] = env->getMethodID(cls, "computeInterpolatedStateAndDerivatives", "(Lorg/hipparchus/ode/FieldEquationsMapper;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getMapper_505b2cb84189ee60] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/FieldEquationsMapper;");
            mids$[mid_create_ce34ea68c7aa6d21] = env->getMethodID(cls, "create", "(ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_15f5056f2d3c7d41]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getGlobalCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalCurrentState_15f5056f2d3c7d41]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getGlobalPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalPreviousState_15f5056f2d3c7d41]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_7a35201efb2d5095], a0.this$));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_15f5056f2d3c7d41]));
        }

        jboolean AbstractFieldODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_eee3de00fe971136]);
        }

        jboolean AbstractFieldODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_eee3de00fe971136]);
        }

        jboolean AbstractFieldODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_eee3de00fe971136]);
        }

        AbstractFieldODEStateInterpolator AbstractFieldODEStateInterpolator::restrictStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a1) const
        {
          return AbstractFieldODEStateInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_2a7d06ff6cc487fe], a0.this$, a1.this$));
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
      namespace sampling {
        static PyObject *t_AbstractFieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_of_(t_AbstractFieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractFieldODEStateInterpolator_getCurrentState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalCurrentState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalPreviousState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getInterpolatedState(t_AbstractFieldODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_getPreviousState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isCurrentStateInterpolated(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isForward(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isPreviousStateInterpolated(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_restrictStep(t_AbstractFieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__forward(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalCurrentState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalPreviousState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__parameters_(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyGetSetDef t_AbstractFieldODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, globalCurrentState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, globalPreviousState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, previousStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getGlobalCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getGlobalPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldODEStateInterpolator)[] = {
          { Py_tp_methods, t_AbstractFieldODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldODEStateInterpolator, t_AbstractFieldODEStateInterpolator, AbstractFieldODEStateInterpolator);
        PyObject *t_AbstractFieldODEStateInterpolator::wrap_Object(const AbstractFieldODEStateInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldODEStateInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEStateInterpolator *self = (t_AbstractFieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFieldODEStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldODEStateInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEStateInterpolator *self = (t_AbstractFieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFieldODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldODEStateInterpolator), &PY_TYPE_DEF(AbstractFieldODEStateInterpolator), module, "AbstractFieldODEStateInterpolator", 0);
        }

        void t_AbstractFieldODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "class_", make_descriptor(AbstractFieldODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldODEStateInterpolator::wrap_Object(AbstractFieldODEStateInterpolator(((t_AbstractFieldODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_of_(t_AbstractFieldODEStateInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getCurrentState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalCurrentState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalPreviousState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getInterpolatedState(t_AbstractFieldODEStateInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getPreviousState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isCurrentStateInterpolated(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isForward(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isPreviousStateInterpolated(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_restrictStep(t_AbstractFieldODEStateInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a1((jobject) NULL);
          PyTypeObject **p1;
          AbstractFieldODEStateInterpolator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_AbstractFieldODEStateInterpolator::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }
        static PyObject *t_AbstractFieldODEStateInterpolator_get__parameters_(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__forward(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalCurrentState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalPreviousState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonUnnormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *PythonUnnormalizedSphericalHarmonics::mids$ = NULL;
          bool PythonUnnormalizedSphericalHarmonics::live$ = false;

          jclass PythonUnnormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getUnnormalizedCnm_6d920aab27f0a3d2] = env->getMethodID(cls, "getUnnormalizedCnm", "(II)D");
              mids$[mid_getUnnormalizedSnm_6d920aab27f0a3d2] = env->getMethodID(cls, "getUnnormalizedSnm", "(II)D");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonUnnormalizedSphericalHarmonics::PythonUnnormalizedSphericalHarmonics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonUnnormalizedSphericalHarmonics::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonUnnormalizedSphericalHarmonics::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonUnnormalizedSphericalHarmonics::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonUnnormalizedSphericalHarmonics_init_(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_finalize(t_PythonUnnormalizedSphericalHarmonics *self);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_pythonExtension(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonics_getDate0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static void JNICALL t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_get__self(t_PythonUnnormalizedSphericalHarmonics *self, void *data);
          static PyGetSetDef t_PythonUnnormalizedSphericalHarmonics__fields_[] = {
            DECLARE_GET_FIELD(t_PythonUnnormalizedSphericalHarmonics, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonUnnormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonUnnormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_PythonUnnormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) t_PythonUnnormalizedSphericalHarmonics_init_ },
            { Py_tp_getset, t_PythonUnnormalizedSphericalHarmonics__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonUnnormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonUnnormalizedSphericalHarmonics, t_PythonUnnormalizedSphericalHarmonics, PythonUnnormalizedSphericalHarmonics);

          void t_PythonUnnormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonUnnormalizedSphericalHarmonics), &PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonics), module, "PythonUnnormalizedSphericalHarmonics", 1);
          }

          void t_PythonUnnormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "class_", make_descriptor(PythonUnnormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_PythonUnnormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonUnnormalizedSphericalHarmonics::initializeClass);
            JNINativeMethod methods[] = {
              { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonUnnormalizedSphericalHarmonics_getDate0 },
              { "getUnnormalizedCnm", "(II)D", (void *) t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1 },
              { "getUnnormalizedSnm", "(II)D", (void *) t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2 },
              { "pythonDecRef", "()V", (void *) t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonUnnormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_PythonUnnormalizedSphericalHarmonics::wrap_Object(PythonUnnormalizedSphericalHarmonics(((t_PythonUnnormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonUnnormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonUnnormalizedSphericalHarmonics_init_(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args, PyObject *kwds)
          {
            PythonUnnormalizedSphericalHarmonics object((jobject) NULL);

            INT_CALL(object = PythonUnnormalizedSphericalHarmonics());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_finalize(t_PythonUnnormalizedSphericalHarmonics *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_pythonExtension(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args)
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonics_getDate0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedCnm", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getUnnormalizedCnm", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedSnm", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getUnnormalizedSnm", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_get__self(t_PythonUnnormalizedSphericalHarmonics *self, void *data)
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
#include "org/orekit/frames/EclipticProvider.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EclipticProvider::class$ = NULL;
      jmethodID *EclipticProvider::mids$ = NULL;
      bool EclipticProvider::live$ = false;

      jclass EclipticProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EclipticProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ac70b017ca00646a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;)V");
          mids$[mid_init$_704fd9f6cce01267] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EclipticProvider::EclipticProvider(const ::org::orekit::utils::IERSConventions & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ac70b017ca00646a, a0.this$)) {}

      EclipticProvider::EclipticProvider(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScales & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_704fd9f6cce01267, a0.this$, a1.this$)) {}

      ::org::orekit::frames::Transform EclipticProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_02ca17ac51b6a4b2], a0.this$));
      }

      ::org::orekit::frames::FieldTransform EclipticProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_286745ef54e0a7f6], a0.this$));
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
      static PyObject *t_EclipticProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EclipticProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EclipticProvider_init_(t_EclipticProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EclipticProvider_getTransform(t_EclipticProvider *self, PyObject *args);

      static PyMethodDef t_EclipticProvider__methods_[] = {
        DECLARE_METHOD(t_EclipticProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EclipticProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EclipticProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EclipticProvider)[] = {
        { Py_tp_methods, t_EclipticProvider__methods_ },
        { Py_tp_init, (void *) t_EclipticProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EclipticProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EclipticProvider, t_EclipticProvider, EclipticProvider);

      void t_EclipticProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(EclipticProvider), &PY_TYPE_DEF(EclipticProvider), module, "EclipticProvider", 0);
      }

      void t_EclipticProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "class_", make_descriptor(EclipticProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "wrapfn_", make_descriptor(t_EclipticProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EclipticProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EclipticProvider::initializeClass, 1)))
          return NULL;
        return t_EclipticProvider::wrap_Object(EclipticProvider(((t_EclipticProvider *) arg)->object.this$));
      }
      static PyObject *t_EclipticProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EclipticProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EclipticProvider_init_(t_EclipticProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            EclipticProvider object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              INT_CALL(object = EclipticProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            EclipticProvider object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              INT_CALL(object = EclipticProvider(a0, a1));
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

      static PyObject *t_EclipticProvider_getTransform(t_EclipticProvider *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Maneuver::class$ = NULL;
              jmethodID *Maneuver::mids$ = NULL;
              bool Maneuver::live$ = false;

              jclass Maneuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Maneuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getDeltaMass_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDuration_9981f74b2d109da6] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEpochStart_80e11148db499dda] = env->getMethodID(cls, "getEpochStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getFrame_0fc1562b68204151] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTorque_032312bdeb3f2f93] = env->getMethodID(cls, "getTorque", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_setDeltaMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDuration_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEpochStart_8497861b879c83f7] = env->getMethodID(cls, "setEpochStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTorque_4320462275d66e78] = env->getMethodID(cls, "setTorque", "(ID)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Maneuver::Maneuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jdouble Maneuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_9981f74b2d109da6]);
              }

              jdouble Maneuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_9981f74b2d109da6]);
              }

              ::org::orekit::time::AbsoluteDate Maneuver::getEpochStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochStart_80e11148db499dda]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade Maneuver::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_0fc1562b68204151]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::getTorque() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTorque_032312bdeb3f2f93]));
              }

              void Maneuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_1ad26e8c8c0cd65b], a0);
              }

              void Maneuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_1ad26e8c8c0cd65b], a0);
              }

              void Maneuver::setEpochStart(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochStart_8497861b879c83f7], a0.this$);
              }

              void Maneuver::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_2c8b859a72c0094e], a0.this$);
              }

              void Maneuver::setTorque(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setTorque_4320462275d66e78], a0, a1);
              }

              void Maneuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self);
              static PyObject *t_Maneuver_getDuration(t_Maneuver *self);
              static PyObject *t_Maneuver_getEpochStart(t_Maneuver *self);
              static PyObject *t_Maneuver_getFrame(t_Maneuver *self);
              static PyObject *t_Maneuver_getTorque(t_Maneuver *self);
              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setEpochStart(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setFrame(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setTorque(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data);
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data);
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__epochStart(t_Maneuver *self, void *data);
              static int t_Maneuver_set__epochStart(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__frame(t_Maneuver *self, void *data);
              static int t_Maneuver_set__frame(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__torque(t_Maneuver *self, void *data);
              static PyGetSetDef t_Maneuver__fields_[] = {
                DECLARE_GETSET_FIELD(t_Maneuver, deltaMass),
                DECLARE_GETSET_FIELD(t_Maneuver, duration),
                DECLARE_GETSET_FIELD(t_Maneuver, epochStart),
                DECLARE_GETSET_FIELD(t_Maneuver, frame),
                DECLARE_GET_FIELD(t_Maneuver, torque),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Maneuver__methods_[] = {
                DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getEpochStart, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getTorque, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_Maneuver, setDuration, METH_O),
                DECLARE_METHOD(t_Maneuver, setEpochStart, METH_O),
                DECLARE_METHOD(t_Maneuver, setFrame, METH_O),
                DECLARE_METHOD(t_Maneuver, setTorque, METH_VARARGS),
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

              static PyObject *t_Maneuver_getEpochStart(t_Maneuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getFrame(t_Maneuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getTorque(t_Maneuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getTorque());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
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

              static PyObject *t_Maneuver_setEpochStart(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochStart(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochStart", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setFrame(t_Maneuver *self, PyObject *arg)
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

              static PyObject *t_Maneuver_setTorque(t_Maneuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setTorque(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTorque", args);
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

              static PyObject *t_Maneuver_get__epochStart(t_Maneuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Maneuver_set__epochStart(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochStart(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochStart", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__frame(t_Maneuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Maneuver_set__frame(t_Maneuver *self, PyObject *arg, void *data)
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

              static PyObject *t_Maneuver_get__torque(t_Maneuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getTorque());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
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
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFractionFormat::class$ = NULL;
      jmethodID *BigFractionFormat::mids$ = NULL;
      bool BigFractionFormat::live$ = false;

      jclass BigFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_327b6d3ae10b544b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_2f8f1e4936e49b8d] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_d93e7788c0c83732] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/BigFraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_8a939fb9d04314c2] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_formatBigFraction_7041aea86c845f7b] = env->getStaticMethodID(cls, "formatBigFraction", "(Lorg/hipparchus/fraction/BigFraction;)Ljava/lang/String;");
          mids$[mid_getAvailableLocales_faf2576acf90261b] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getImproperInstance_3ce867ff5032d8af] = env->getStaticMethodID(cls, "getImproperInstance", "()Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getImproperInstance_f4b80370cda6e548] = env->getStaticMethodID(cls, "getImproperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getProperInstance_3ce867ff5032d8af] = env->getStaticMethodID(cls, "getProperInstance", "()Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getProperInstance_f4b80370cda6e548] = env->getStaticMethodID(cls, "getProperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_parse_44acc1eaf9e750d5] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_parse_b5e88466531b881c] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_parseNextBigInteger_faab13a6e78082c7] = env->getMethodID(cls, "parseNextBigInteger", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/math/BigInteger;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigFractionFormat::BigFractionFormat() : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      BigFractionFormat::BigFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_327b6d3ae10b544b, a0.this$)) {}

      BigFractionFormat::BigFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_2f8f1e4936e49b8d, a0.this$, a1.this$)) {}

      ::java::lang::StringBuffer BigFractionFormat::format(const ::org::hipparchus::fraction::BigFraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_d93e7788c0c83732], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer BigFractionFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_8a939fb9d04314c2], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String BigFractionFormat::formatBigFraction(const ::org::hipparchus::fraction::BigFraction & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatBigFraction_7041aea86c845f7b], a0.this$));
      }

      JArray< ::java::util::Locale > BigFractionFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_faf2576acf90261b]));
      }

      BigFractionFormat BigFractionFormat::getImproperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_3ce867ff5032d8af]));
      }

      BigFractionFormat BigFractionFormat::getImproperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_f4b80370cda6e548], a0.this$));
      }

      BigFractionFormat BigFractionFormat::getProperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_3ce867ff5032d8af]));
      }

      BigFractionFormat BigFractionFormat::getProperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_f4b80370cda6e548], a0.this$));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_44acc1eaf9e750d5], a0.this$));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_b5e88466531b881c], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigFractionFormat_init_(t_BigFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigFractionFormat_format(t_BigFractionFormat *self, PyObject *args);
      static PyObject *t_BigFractionFormat_formatBigFraction(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_getProperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_parse(t_BigFractionFormat *self, PyObject *args);
      static PyObject *t_BigFractionFormat_get__availableLocales(t_BigFractionFormat *self, void *data);
      static PyObject *t_BigFractionFormat_get__improperInstance(t_BigFractionFormat *self, void *data);
      static PyObject *t_BigFractionFormat_get__properInstance(t_BigFractionFormat *self, void *data);
      static PyGetSetDef t_BigFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_BigFractionFormat, availableLocales),
        DECLARE_GET_FIELD(t_BigFractionFormat, improperInstance),
        DECLARE_GET_FIELD(t_BigFractionFormat, properInstance),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFractionFormat__methods_[] = {
        DECLARE_METHOD(t_BigFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_BigFractionFormat, formatBigFraction, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getAvailableLocales, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getImproperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getProperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFractionFormat)[] = {
        { Py_tp_methods, t_BigFractionFormat__methods_ },
        { Py_tp_init, (void *) t_BigFractionFormat_init_ },
        { Py_tp_getset, t_BigFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::AbstractFormat),
        NULL
      };

      DEFINE_TYPE(BigFractionFormat, t_BigFractionFormat, BigFractionFormat);

      void t_BigFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFractionFormat), &PY_TYPE_DEF(BigFractionFormat), module, "BigFractionFormat", 0);
      }

      void t_BigFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "class_", make_descriptor(BigFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "wrapfn_", make_descriptor(t_BigFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFractionFormat::initializeClass, 1)))
          return NULL;
        return t_BigFractionFormat::wrap_Object(BigFractionFormat(((t_BigFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_BigFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigFractionFormat_init_(t_BigFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat object((jobject) NULL);

            INT_CALL(object = BigFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            BigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = BigFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            BigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BigFractionFormat(a0, a1));
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

      static PyObject *t_BigFractionFormat_format(t_BigFractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::BigFraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BigFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_BigFractionFormat_formatBigFraction(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::fraction::BigFraction::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::formatBigFraction(a0));
          return j2p(result);
        }

        PyErr_SetArgsError(type, "formatBigFraction", arg);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getAvailableLocales());
          return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
        }

        return callSuper(type, "getAvailableLocales", args, 2);
      }

      static PyObject *t_BigFractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getImproperInstance());
            return t_BigFractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            BigFractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getImproperInstance(a0));
              return t_BigFractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getImproperInstance", args);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_getProperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getProperInstance());
            return t_BigFractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            BigFractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getProperInstance(a0));
              return t_BigFractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getProperInstance", args);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_parse(t_BigFractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BigFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_BigFractionFormat_get__availableLocales(t_BigFractionFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_BigFractionFormat_get__improperInstance(t_BigFractionFormat *self, void *data)
      {
        BigFractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImproperInstance());
        return t_BigFractionFormat::wrap_Object(value);
      }

      static PyObject *t_BigFractionFormat_get__properInstance(t_BigFractionFormat *self, void *data)
      {
        BigFractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getProperInstance());
        return t_BigFractionFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEEventDetector::class$ = NULL;
        jmethodID *ODEEventDetector::mids$ = NULL;
        bool ODEEventDetector::live$ = false;

        jclass ODEEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_c9c83b182b4bb0ba] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getHandler_6b3d990c0b31c333] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEEventHandler;");
            mids$[mid_getMaxCheckInterval_356086c80be497a8] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_8fd4d30625048ab7] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;");
            mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble ODEEventDetector::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_c9c83b182b4bb0ba], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventHandler ODEEventDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_6b3d990c0b31c333]));
        }

        ::org::hipparchus::ode::events::AdaptableInterval ODEEventDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_356086c80be497a8]));
        }

        jint ODEEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver ODEEventDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_8fd4d30625048ab7]));
        }

        void ODEEventDetector::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
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
      namespace events {
        static PyObject *t_ODEEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventDetector_g(t_ODEEventDetector *self, PyObject *arg);
        static PyObject *t_ODEEventDetector_getHandler(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getMaxCheckInterval(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getMaxIterationCount(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getSolver(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_init(t_ODEEventDetector *self, PyObject *args);
        static PyObject *t_ODEEventDetector_get__handler(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__maxCheckInterval(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__maxIterationCount(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__solver(t_ODEEventDetector *self, void *data);
        static PyGetSetDef t_ODEEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ODEEventDetector, handler),
          DECLARE_GET_FIELD(t_ODEEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_ODEEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_ODEEventDetector, solver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ODEEventDetector__methods_[] = {
          DECLARE_METHOD(t_ODEEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventDetector, g, METH_O),
          DECLARE_METHOD(t_ODEEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEEventDetector)[] = {
          { Py_tp_methods, t_ODEEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ODEEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEEventDetector, t_ODEEventDetector, ODEEventDetector);

        void t_ODEEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEEventDetector), &PY_TYPE_DEF(ODEEventDetector), module, "ODEEventDetector", 0);
        }

        void t_ODEEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "class_", make_descriptor(ODEEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "wrapfn_", make_descriptor(t_ODEEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEEventDetector::initializeClass, 1)))
            return NULL;
          return t_ODEEventDetector::wrap_Object(ODEEventDetector(((t_ODEEventDetector *) arg)->object.this$));
        }
        static PyObject *t_ODEEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEEventDetector_g(t_ODEEventDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_ODEEventDetector_getHandler(t_ODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::ODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(result);
        }

        static PyObject *t_ODEEventDetector_getMaxCheckInterval(t_ODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_ODEEventDetector_getMaxIterationCount(t_ODEEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ODEEventDetector_getSolver(t_ODEEventDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(result, ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction));
        }

        static PyObject *t_ODEEventDetector_init(t_ODEEventDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEEventDetector_get__handler(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_ODEEventDetector_get__maxCheckInterval(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_ODEEventDetector_get__maxIterationCount(t_ODEEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ODEEventDetector_get__solver(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *BlockFieldMatrix::class$ = NULL;
      jmethodID *BlockFieldMatrix::mids$ = NULL;
      bool BlockFieldMatrix::live$ = false;
      jint BlockFieldMatrix::BLOCK_SIZE = (jint) 0;

      jclass BlockFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/BlockFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab57da19aa96755a] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_ddbf374219cf6329] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_init$_94d81582232d54cc] = env->getMethodID(cls, "<init>", "(II[[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_add_546406c950533464] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_add_b180f987191970ad] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_8de38856a6ebea36] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_02883dbbe5db44ac] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createBlocksLayout_537724343e50c1ea] = env->getStaticMethodID(cls, "createBlocksLayout", "(Lorg/hipparchus/Field;II)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_createMatrix_71a6a4df501a3e03] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumn_9410bfc023ff0ee6] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_338ea041dc2f9292] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_229c51f1f7aa44e3] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_5d4bb4c2b3c3b853] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_a81b5a6b0760a7e3] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRow_9410bfc023ff0ee6] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_338ea041dc2f9292] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_229c51f1f7aa44e3] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_1acf4e5d8c70f8c1] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiply_546406c950533464] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_multiply_b180f987191970ad] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_8de38856a6ebea36] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_546406c950533464] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_multiplyTransposed_d1e0f34a5eb2f6c7] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_operate_da4e13f241d172b2] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_da4e13f241d172b2] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_scalarAdd_8a90f00b11f69825] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_8a90f00b11f69825] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_1d7c60cf27d9f179] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_87d8f99edb7a39ea] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_9f6a0cf723c2763b] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_8de38856a6ebea36] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_1d7c60cf27d9f179] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_32abae4e359e1ffc] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/BlockFieldMatrix;)V");
          mids$[mid_setRowMatrix_87d8f99edb7a39ea] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_9f6a0cf723c2763b] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_24d277c6faa30a04] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_546406c950533464] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_subtract_b180f987191970ad] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_toBlocksLayout_11bffb4a09ae7b58] = env->getStaticMethodID(cls, "toBlocksLayout", "([[Lorg/hipparchus/FieldElement;)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_transpose_02883dbbe5db44ac] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_546406c950533464] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_transposeMultiply_d1e0f34a5eb2f6c7] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_walkInOptimizedOrder_9511e2a4670e260a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_718adedab84e4562] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_4e13f6cf4599797e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_8e3632311c5af3b6] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_9511e2a4670e260a] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_718adedab84e4562] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_4e13f6cf4599797e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_8e3632311c5af3b6] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BLOCK_SIZE = env->getStaticIntField(cls, "BLOCK_SIZE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BlockFieldMatrix::BlockFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_ab57da19aa96755a, a0.this$)) {}

      BlockFieldMatrix::BlockFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_ddbf374219cf6329, a0.this$, a1, a2)) {}

      BlockFieldMatrix::BlockFieldMatrix(jint a0, jint a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2, jboolean a3) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_94d81582232d54cc, a0, a1, a2.this$, a3)) {}

      BlockFieldMatrix BlockFieldMatrix::add(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_add_546406c950533464], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::add(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_b180f987191970ad], a0.this$));
      }

      void BlockFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_02883dbbe5db44ac]));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::createBlocksLayout(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_createBlocksLayout_537724343e50c1ea], a0.this$, a1, a2));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_71a6a4df501a3e03], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_9410bfc023ff0ee6], a0));
      }

      jint BlockFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_338ea041dc2f9292], a0));
      }

      ::org::hipparchus::linear::FieldVector BlockFieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_229c51f1f7aa44e3], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_5d4bb4c2b3c3b853]));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_a81b5a6b0760a7e3], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_9410bfc023ff0ee6], a0));
      }

      jint BlockFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_338ea041dc2f9292], a0));
      }

      ::org::hipparchus::linear::FieldVector BlockFieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_229c51f1f7aa44e3], a0));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_1acf4e5d8c70f8c1], a0, a1, a2, a3));
      }

      BlockFieldMatrix BlockFieldMatrix::multiply(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_546406c950533464], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::multiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_b180f987191970ad], a0.this$));
      }

      void BlockFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      BlockFieldMatrix BlockFieldMatrix::multiplyTransposed(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_546406c950533464], a0.this$));
      }

      BlockFieldMatrix BlockFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_d1e0f34a5eb2f6c7], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_da4e13f241d172b2], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_da4e13f241d172b2], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_8a90f00b11f69825], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_8a90f00b11f69825], a0.this$));
      }

      void BlockFieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_1d7c60cf27d9f179], a0, a1.this$);
      }

      void BlockFieldMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_87d8f99edb7a39ea], a0, a1.this$);
      }

      void BlockFieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_9f6a0cf723c2763b], a0, a1.this$);
      }

      void BlockFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      void BlockFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_1d7c60cf27d9f179], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowMatrix(jint a0, const BlockFieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_32abae4e359e1ffc], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_87d8f99edb7a39ea], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_9f6a0cf723c2763b], a0, a1.this$);
      }

      void BlockFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_24d277c6faa30a04], a0.this$, a1, a2);
      }

      BlockFieldMatrix BlockFieldMatrix::subtract(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_546406c950533464], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::subtract(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_b180f987191970ad], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::toBlocksLayout(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_toBlocksLayout_11bffb4a09ae7b58], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::transpose() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_02883dbbe5db44ac]));
      }

      BlockFieldMatrix BlockFieldMatrix::transposeMultiply(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_546406c950533464], a0.this$));
      }

      BlockFieldMatrix BlockFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_d1e0f34a5eb2f6c7], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_9511e2a4670e260a], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_718adedab84e4562], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_4e13f6cf4599797e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_8e3632311c5af3b6], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_9511e2a4670e260a], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_718adedab84e4562], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_4e13f6cf4599797e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_8e3632311c5af3b6], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_BlockFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_of_(t_BlockFieldMatrix *self, PyObject *args);
      static int t_BlockFieldMatrix_init_(t_BlockFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BlockFieldMatrix_add(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_addToEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_copy(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args);
      static PyObject *t_BlockFieldMatrix_createMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumn(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnDimension(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getData(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRow(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowDimension(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getSubMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiplyEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiplyTransposed(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_operate(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_preMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_scalarAdd(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_scalarMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumn(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumnMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumnVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRow(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRowMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRowVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setSubMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_subtract(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_transpose(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_transposeMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_walkInOptimizedOrder(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_walkInRowOrder(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_get__columnDimension(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__data(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__rowDimension(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__parameters_(t_BlockFieldMatrix *self, void *data);
      static PyGetSetDef t_BlockFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_BlockFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, data),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BlockFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_BlockFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, createBlocksLayout, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, scalarAdd, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, scalarMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, toBlocksLayout, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, transpose, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BlockFieldMatrix)[] = {
        { Py_tp_methods, t_BlockFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_BlockFieldMatrix_init_ },
        { Py_tp_getset, t_BlockFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BlockFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(BlockFieldMatrix, t_BlockFieldMatrix, BlockFieldMatrix);
      PyObject *t_BlockFieldMatrix::wrap_Object(const BlockFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BlockFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BlockFieldMatrix *self = (t_BlockFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BlockFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BlockFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BlockFieldMatrix *self = (t_BlockFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BlockFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(BlockFieldMatrix), &PY_TYPE_DEF(BlockFieldMatrix), module, "BlockFieldMatrix", 0);
      }

      void t_BlockFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "class_", make_descriptor(BlockFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "wrapfn_", make_descriptor(t_BlockFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "boxfn_", make_descriptor(boxObject));
        env->getClass(BlockFieldMatrix::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "BLOCK_SIZE", make_descriptor(BlockFieldMatrix::BLOCK_SIZE));
      }

      static PyObject *t_BlockFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BlockFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_BlockFieldMatrix::wrap_Object(BlockFieldMatrix(((t_BlockFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_BlockFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BlockFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BlockFieldMatrix_of_(t_BlockFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_BlockFieldMatrix_init_(t_BlockFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = BlockFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = BlockFieldMatrix(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;
            jboolean a3;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "II[[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3))
            {
              INT_CALL(object = BlockFieldMatrix(a0, a1, a2, a3));
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

      static PyObject *t_BlockFieldMatrix_add(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_addToEntry(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_copy(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockFieldMatrix::createBlocksLayout(a0, a1, a2));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "createBlocksLayout", args);
        return NULL;
      }

      static PyObject *t_BlockFieldMatrix_createMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumn(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumn", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnDimension(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getData(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRow(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowDimension(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getSubMatrix(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiplyEntry(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiplyTransposed(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_operate(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_preMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_scalarAdd(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "scalarAdd", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_scalarMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "scalarMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumn(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumn", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumnMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumnMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumnVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumnVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setEntry(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRow(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRowMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            BlockFieldMatrix a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", BlockFieldMatrix::initializeClass, &a0, &a1, &p1, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRowMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRowVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRowVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setSubMatrix(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_subtract(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockFieldMatrix::toBlocksLayout(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "toBlocksLayout", arg);
        return NULL;
      }

      static PyObject *t_BlockFieldMatrix_transpose(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.transpose());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "transpose", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_transposeMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_walkInOptimizedOrder(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_walkInRowOrder(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }
      static PyObject *t_BlockFieldMatrix_get__parameters_(t_BlockFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BlockFieldMatrix_get__columnDimension(t_BlockFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BlockFieldMatrix_get__data(t_BlockFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_BlockFieldMatrix_get__rowDimension(t_BlockFieldMatrix *self, void *data)
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
#include "org/hipparchus/optim/SimpleValueChecker.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleValueChecker::class$ = NULL;
      jmethodID *SimpleValueChecker::mids$ = NULL;
      bool SimpleValueChecker::live$ = false;

      jclass SimpleValueChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleValueChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_a1d1049a885bc8f5] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/PointValuePair;Lorg/hipparchus/optim/PointValuePair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleValueChecker::SimpleValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

      SimpleValueChecker::SimpleValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

      jboolean SimpleValueChecker::converged(jint a0, const ::org::hipparchus::optim::PointValuePair & a1, const ::org::hipparchus::optim::PointValuePair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_a1d1049a885bc8f5], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimpleValueChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleValueChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleValueChecker_of_(t_SimpleValueChecker *self, PyObject *args);
      static int t_SimpleValueChecker_init_(t_SimpleValueChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleValueChecker_converged(t_SimpleValueChecker *self, PyObject *args);
      static PyObject *t_SimpleValueChecker_get__parameters_(t_SimpleValueChecker *self, void *data);
      static PyGetSetDef t_SimpleValueChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleValueChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleValueChecker__methods_[] = {
        DECLARE_METHOD(t_SimpleValueChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleValueChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleValueChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleValueChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleValueChecker)[] = {
        { Py_tp_methods, t_SimpleValueChecker__methods_ },
        { Py_tp_init, (void *) t_SimpleValueChecker_init_ },
        { Py_tp_getset, t_SimpleValueChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleValueChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimpleValueChecker, t_SimpleValueChecker, SimpleValueChecker);
      PyObject *t_SimpleValueChecker::wrap_Object(const SimpleValueChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleValueChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleValueChecker *self = (t_SimpleValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleValueChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleValueChecker *self = (t_SimpleValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleValueChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleValueChecker), &PY_TYPE_DEF(SimpleValueChecker), module, "SimpleValueChecker", 0);
      }

      void t_SimpleValueChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "class_", make_descriptor(SimpleValueChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "wrapfn_", make_descriptor(t_SimpleValueChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleValueChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleValueChecker::initializeClass, 1)))
          return NULL;
        return t_SimpleValueChecker::wrap_Object(SimpleValueChecker(((t_SimpleValueChecker *) arg)->object.this$));
      }
      static PyObject *t_SimpleValueChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleValueChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleValueChecker_of_(t_SimpleValueChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleValueChecker_init_(t_SimpleValueChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimpleValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimpleValueChecker(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimpleValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimpleValueChecker(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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

      static PyObject *t_SimpleValueChecker_converged(t_SimpleValueChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::optim::PointValuePair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::optim::PointValuePair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::optim::PointValuePair::initializeClass, ::org::hipparchus::optim::PointValuePair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::t_PointValuePair::parameters_, &a2, &p2, ::org::hipparchus::optim::t_PointValuePair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimpleValueChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimpleValueChecker_get__parameters_(t_SimpleValueChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *EphemerisOemWriter::class$ = NULL;
              jmethodID *EphemerisOemWriter::mids$ = NULL;
              bool EphemerisOemWriter::live$ = false;

              jclass EphemerisOemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ea551678138489b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_12ce9ebfe43ac6e6] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");
                  mids$[mid_writeSegment_9fe3766494d1e809] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/general/EphemerisFile$EphemerisSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              EphemerisOemWriter::EphemerisOemWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a0, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a1, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a2, const ::org::orekit::files::ccsds::utils::FileFormat & a3, const ::java::lang::String & a4, jdouble a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea551678138489b1, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6)) {}

              void EphemerisOemWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_12ce9ebfe43ac6e6], a0.this$, a1.this$);
              }

              void EphemerisOemWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::general::EphemerisFile$EphemerisSegment & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_writeSegment_9fe3766494d1e809], a0.this$, a1.this$);
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
              static PyObject *t_EphemerisOemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EphemerisOemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_EphemerisOemWriter_init_(t_EphemerisOemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_EphemerisOemWriter_write(t_EphemerisOemWriter *self, PyObject *args);
              static PyObject *t_EphemerisOemWriter_writeSegment(t_EphemerisOemWriter *self, PyObject *args);

              static PyMethodDef t_EphemerisOemWriter__methods_[] = {
                DECLARE_METHOD(t_EphemerisOemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOemWriter, write, METH_VARARGS),
                DECLARE_METHOD(t_EphemerisOemWriter, writeSegment, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EphemerisOemWriter)[] = {
                { Py_tp_methods, t_EphemerisOemWriter__methods_ },
                { Py_tp_init, (void *) t_EphemerisOemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EphemerisOemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(EphemerisOemWriter, t_EphemerisOemWriter, EphemerisOemWriter);

              void t_EphemerisOemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(EphemerisOemWriter), &PY_TYPE_DEF(EphemerisOemWriter), module, "EphemerisOemWriter", 0);
              }

              void t_EphemerisOemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "class_", make_descriptor(EphemerisOemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "wrapfn_", make_descriptor(t_EphemerisOemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_EphemerisOemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EphemerisOemWriter::initializeClass, 1)))
                  return NULL;
                return t_EphemerisOemWriter::wrap_Object(EphemerisOemWriter(((t_EphemerisOemWriter *) arg)->object.this$));
              }
              static PyObject *t_EphemerisOemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EphemerisOemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_EphemerisOemWriter_init_(t_EphemerisOemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                jdouble a5;
                jint a6;
                EphemerisOemWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkKsDI", ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = EphemerisOemWriter(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_EphemerisOemWriter_write(t_EphemerisOemWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
              }

              static PyObject *t_EphemerisOemWriter_writeSegment(t_EphemerisOemWriter *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile$EphemerisSegment a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::general::EphemerisFile$EphemerisSegment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile$EphemerisSegment::parameters_))
                {
                  OBJ_CALL(self->object.writeSegment(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
                return NULL;
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
#include "java/lang/Exception.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Exception::class$ = NULL;
    jmethodID *Exception::mids$ = NULL;
    bool Exception::live$ = false;

    jclass Exception::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Exception");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Exception::Exception() : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    Exception::Exception(const ::java::lang::String & a0) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Exception::Exception(const ::java::lang::Throwable & a0) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

    Exception::Exception(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Exception_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Exception_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Exception_init_(t_Exception *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_Exception__methods_[] = {
      DECLARE_METHOD(t_Exception, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Exception, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Exception)[] = {
      { Py_tp_methods, t_Exception__methods_ },
      { Py_tp_init, (void *) t_Exception_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Exception)[] = {
      &PY_TYPE_DEF(::java::lang::Throwable),
      NULL
    };

    DEFINE_TYPE(Exception, t_Exception, Exception);

    void t_Exception::install(PyObject *module)
    {
      installType(&PY_TYPE(Exception), &PY_TYPE_DEF(Exception), module, "Exception", 0);
    }

    void t_Exception::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "class_", make_descriptor(Exception::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "wrapfn_", make_descriptor(t_Exception::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Exception_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Exception::initializeClass, 1)))
        return NULL;
      return t_Exception::wrap_Object(Exception(((t_Exception *) arg)->object.this$));
    }
    static PyObject *t_Exception_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Exception::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Exception_init_(t_Exception *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Exception object((jobject) NULL);

          INT_CALL(object = Exception());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Exception(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = Exception(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Exception(a0, a1));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeProvider::class$ = NULL;
      jmethodID *AttitudeProvider::mids$ = NULL;
      bool AttitudeProvider::live$ = false;

      jclass AttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_267252ddff45220c] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_494718838b66cf03] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude AttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_267252ddff45220c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_494718838b66cf03], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProvider_getAttitude(t_AttitudeProvider *self, PyObject *args);
      static PyObject *t_AttitudeProvider_getAttitudeRotation(t_AttitudeProvider *self, PyObject *args);

      static PyMethodDef t_AttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_AttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AttitudeProvider, getAttitudeRotation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeProvider)[] = {
        { Py_tp_methods, t_AttitudeProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudeProvider, t_AttitudeProvider, AttitudeProvider);

      void t_AttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeProvider), &PY_TYPE_DEF(AttitudeProvider), module, "AttitudeProvider", 0);
      }

      void t_AttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "class_", make_descriptor(AttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "wrapfn_", make_descriptor(t_AttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_AttitudeProvider::wrap_Object(AttitudeProvider(((t_AttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_AttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeProvider_getAttitude(t_AttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_AttitudeProvider_getAttitudeRotation(t_AttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *TimeConverter::class$ = NULL;
          jmethodID *TimeConverter::mids$ = NULL;
          bool TimeConverter::live$ = false;

          jclass TimeConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/TimeConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ecd4f4b16922c47] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_components_44f88400d8e1d36b] = env->getMethodID(cls, "components", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/DateTimeComponents;");
              mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeScale_5e2cac12ab8da943] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_offset_209f08246d708042] = env->getMethodID(cls, "offset", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_parse_4fd6fc9cde281c90] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeConverter::TimeConverter(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ecd4f4b16922c47, a0.this$, a1.this$)) {}

          ::org::orekit::time::DateTimeComponents TimeConverter::components(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_components_44f88400d8e1d36b], a0.this$));
          }

          ::org::orekit::time::AbsoluteDate TimeConverter::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_80e11148db499dda]));
          }

          ::org::orekit::time::TimeScale TimeConverter::getTimeScale() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_5e2cac12ab8da943]));
          }

          jdouble TimeConverter::offset(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_offset_209f08246d708042], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate TimeConverter::parse(const ::java::lang::String & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_parse_4fd6fc9cde281c90], a0.this$));
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
          static PyObject *t_TimeConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeConverter_init_(t_TimeConverter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeConverter_components(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_getReferenceDate(t_TimeConverter *self);
          static PyObject *t_TimeConverter_getTimeScale(t_TimeConverter *self);
          static PyObject *t_TimeConverter_offset(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_parse(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_get__referenceDate(t_TimeConverter *self, void *data);
          static PyObject *t_TimeConverter_get__timeScale(t_TimeConverter *self, void *data);
          static PyGetSetDef t_TimeConverter__fields_[] = {
            DECLARE_GET_FIELD(t_TimeConverter, referenceDate),
            DECLARE_GET_FIELD(t_TimeConverter, timeScale),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeConverter__methods_[] = {
            DECLARE_METHOD(t_TimeConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeConverter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeConverter, components, METH_O),
            DECLARE_METHOD(t_TimeConverter, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_TimeConverter, getTimeScale, METH_NOARGS),
            DECLARE_METHOD(t_TimeConverter, offset, METH_O),
            DECLARE_METHOD(t_TimeConverter, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeConverter)[] = {
            { Py_tp_methods, t_TimeConverter__methods_ },
            { Py_tp_init, (void *) t_TimeConverter_init_ },
            { Py_tp_getset, t_TimeConverter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeConverter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeConverter, t_TimeConverter, TimeConverter);

          void t_TimeConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeConverter), &PY_TYPE_DEF(TimeConverter), module, "TimeConverter", 0);
          }

          void t_TimeConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "class_", make_descriptor(TimeConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "wrapfn_", make_descriptor(t_TimeConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TimeConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeConverter::initializeClass, 1)))
              return NULL;
            return t_TimeConverter::wrap_Object(TimeConverter(((t_TimeConverter *) arg)->object.this$));
          }
          static PyObject *t_TimeConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeConverter_init_(t_TimeConverter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            TimeConverter object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeConverter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TimeConverter_components(t_TimeConverter *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.components(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "components", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_getReferenceDate(t_TimeConverter *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TimeConverter_getTimeScale(t_TimeConverter *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_TimeConverter_offset(t_TimeConverter *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offset(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "offset", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_parse(t_TimeConverter *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_get__referenceDate(t_TimeConverter *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TimeConverter_get__timeScale(t_TimeConverter *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmSegment::class$ = NULL;
            jmethodID *CdmSegment::mids$ = NULL;
            bool CdmSegment::live$ = false;

            jclass CdmSegment::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmSegment");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d153127652104d64] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmSegment::CdmSegment(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmData & a1) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_d153127652104d64, a0.this$, a1.this$)) {}
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
            static PyObject *t_CdmSegment_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmSegment_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmSegment_of_(t_CdmSegment *self, PyObject *args);
            static int t_CdmSegment_init_(t_CdmSegment *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmSegment_get__parameters_(t_CdmSegment *self, void *data);
            static PyGetSetDef t_CdmSegment__fields_[] = {
              DECLARE_GET_FIELD(t_CdmSegment, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmSegment__methods_[] = {
              DECLARE_METHOD(t_CdmSegment, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmSegment, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmSegment, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmSegment)[] = {
              { Py_tp_methods, t_CdmSegment__methods_ },
              { Py_tp_init, (void *) t_CdmSegment_init_ },
              { Py_tp_getset, t_CdmSegment__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmSegment)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
              NULL
            };

            DEFINE_TYPE(CdmSegment, t_CdmSegment, CdmSegment);
            PyObject *t_CdmSegment::wrap_Object(const CdmSegment& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CdmSegment::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmSegment *self = (t_CdmSegment *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_CdmSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CdmSegment::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmSegment *self = (t_CdmSegment *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_CdmSegment::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmSegment), &PY_TYPE_DEF(CdmSegment), module, "CdmSegment", 0);
            }

            void t_CdmSegment::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "class_", make_descriptor(CdmSegment::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "wrapfn_", make_descriptor(t_CdmSegment::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmSegment_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmSegment::initializeClass, 1)))
                return NULL;
              return t_CdmSegment::wrap_Object(CdmSegment(((t_CdmSegment *) arg)->object.this$));
            }
            static PyObject *t_CdmSegment_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmSegment::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmSegment_of_(t_CdmSegment *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CdmSegment_init_(t_CdmSegment *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmData a1((jobject) NULL);
              CdmSegment object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmData::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CdmSegment(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmMetadata);
                self->parameters[1] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmData);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_CdmSegment_get__parameters_(t_CdmSegment *self, void *data)
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
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateFunction::class$ = NULL;
      jmethodID *UnivariateFunction::mids$ = NULL;
      bool UnivariateFunction::live$ = false;

      jclass UnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble UnivariateFunction::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
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
      static PyObject *t_UnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateFunction_value(t_UnivariateFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateFunction)[] = {
        { Py_tp_methods, t_UnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateFunction, t_UnivariateFunction, UnivariateFunction);

      void t_UnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateFunction), &PY_TYPE_DEF(UnivariateFunction), module, "UnivariateFunction", 0);
      }

      void t_UnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunction), "class_", make_descriptor(UnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunction), "wrapfn_", make_descriptor(t_UnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateFunction::wrap_Object(UnivariateFunction(((t_UnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateFunction_value(t_UnivariateFunction *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *FieldTimeDerivativesEquations::class$ = NULL;
        jmethodID *FieldTimeDerivativesEquations::mids$ = NULL;
        bool FieldTimeDerivativesEquations::live$ = false;

        jclass FieldTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/FieldTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addKeplerContribution_f63ca9e3185c722e] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addMassDerivative_f63ca9e3185c722e] = env->getMethodID(cls, "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addNonKeplerianAcceleration_1344cdbf3f0498af] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldTimeDerivativesEquations::addKeplerContribution(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addKeplerContribution_f63ca9e3185c722e], a0.this$);
        }

        void FieldTimeDerivativesEquations::addMassDerivative(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMassDerivative_f63ca9e3185c722e], a0.this$);
        }

        void FieldTimeDerivativesEquations::addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addNonKeplerianAcceleration_1344cdbf3f0498af], a0.this$);
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
        static PyObject *t_FieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_of_(t_FieldTimeDerivativesEquations *self, PyObject *args);
        static PyObject *t_FieldTimeDerivativesEquations_addKeplerContribution(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_addMassDerivative(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_addNonKeplerianAcceleration(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_get__parameters_(t_FieldTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_FieldTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTimeDerivativesEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addKeplerContribution, METH_O),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addMassDerivative, METH_O),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addNonKeplerianAcceleration, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_FieldTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldTimeDerivativesEquations, t_FieldTimeDerivativesEquations, FieldTimeDerivativesEquations);
        PyObject *t_FieldTimeDerivativesEquations::wrap_Object(const FieldTimeDerivativesEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTimeDerivativesEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTimeDerivativesEquations *self = (t_FieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTimeDerivativesEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTimeDerivativesEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTimeDerivativesEquations *self = (t_FieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTimeDerivativesEquations), &PY_TYPE_DEF(FieldTimeDerivativesEquations), module, "FieldTimeDerivativesEquations", 0);
        }

        void t_FieldTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "class_", make_descriptor(FieldTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "wrapfn_", make_descriptor(t_FieldTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_FieldTimeDerivativesEquations::wrap_Object(FieldTimeDerivativesEquations(((t_FieldTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_FieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTimeDerivativesEquations_of_(t_FieldTimeDerivativesEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldTimeDerivativesEquations_addKeplerContribution(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.addKeplerContribution(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", arg);
          return NULL;
        }

        static PyObject *t_FieldTimeDerivativesEquations_addMassDerivative(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.addMassDerivative(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMassDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldTimeDerivativesEquations_addNonKeplerianAcceleration(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
          {
            OBJ_CALL(self->object.addNonKeplerianAcceleration(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addNonKeplerianAcceleration", arg);
          return NULL;
        }
        static PyObject *t_FieldTimeDerivativesEquations_get__parameters_(t_FieldTimeDerivativesEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *MultiplexedMeasurement::class$ = NULL;
        jmethodID *MultiplexedMeasurement::mids$ = NULL;
        bool MultiplexedMeasurement::live$ = false;
        ::java::lang::String *MultiplexedMeasurement::MEASUREMENT_TYPE = NULL;

        jclass MultiplexedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/MultiplexedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_getEstimatedMeasurements_d751c1a57012b438] = env->getMethodID(cls, "getEstimatedMeasurements", "()Ljava/util/List;");
            mids$[mid_getEstimatedMeasurementsWithoutDerivatives_d751c1a57012b438] = env->getMethodID(cls, "getEstimatedMeasurementsWithoutDerivatives", "()Ljava/util/List;");
            mids$[mid_getMeasurements_d751c1a57012b438] = env->getMethodID(cls, "getMeasurements", "()Ljava/util/List;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiplexedMeasurement::MultiplexedMeasurement(const ::java::util::List & a0) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

        ::java::util::List MultiplexedMeasurement::getEstimatedMeasurements() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurements_d751c1a57012b438]));
        }

        ::java::util::List MultiplexedMeasurement::getEstimatedMeasurementsWithoutDerivatives() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsWithoutDerivatives_d751c1a57012b438]));
        }

        ::java::util::List MultiplexedMeasurement::getMeasurements() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getMeasurements_d751c1a57012b438]));
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
        static PyObject *t_MultiplexedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiplexedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiplexedMeasurement_of_(t_MultiplexedMeasurement *self, PyObject *args);
        static int t_MultiplexedMeasurement_init_(t_MultiplexedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurements(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_getMeasurements(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurements(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__measurements(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__parameters_(t_MultiplexedMeasurement *self, void *data);
        static PyGetSetDef t_MultiplexedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, estimatedMeasurements),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, estimatedMeasurementsWithoutDerivatives),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, measurements),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultiplexedMeasurement__methods_[] = {
          DECLARE_METHOD(t_MultiplexedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiplexedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiplexedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getEstimatedMeasurements, METH_NOARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getEstimatedMeasurementsWithoutDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getMeasurements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiplexedMeasurement)[] = {
          { Py_tp_methods, t_MultiplexedMeasurement__methods_ },
          { Py_tp_init, (void *) t_MultiplexedMeasurement_init_ },
          { Py_tp_getset, t_MultiplexedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiplexedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(MultiplexedMeasurement, t_MultiplexedMeasurement, MultiplexedMeasurement);
        PyObject *t_MultiplexedMeasurement::wrap_Object(const MultiplexedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiplexedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiplexedMeasurement *self = (t_MultiplexedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MultiplexedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiplexedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiplexedMeasurement *self = (t_MultiplexedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MultiplexedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiplexedMeasurement), &PY_TYPE_DEF(MultiplexedMeasurement), module, "MultiplexedMeasurement", 0);
        }

        void t_MultiplexedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "class_", make_descriptor(MultiplexedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "wrapfn_", make_descriptor(t_MultiplexedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "boxfn_", make_descriptor(boxObject));
          env->getClass(MultiplexedMeasurement::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "MEASUREMENT_TYPE", make_descriptor(j2p(*MultiplexedMeasurement::MEASUREMENT_TYPE)));
        }

        static PyObject *t_MultiplexedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiplexedMeasurement::initializeClass, 1)))
            return NULL;
          return t_MultiplexedMeasurement::wrap_Object(MultiplexedMeasurement(((t_MultiplexedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_MultiplexedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiplexedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiplexedMeasurement_of_(t_MultiplexedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MultiplexedMeasurement_init_(t_MultiplexedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          MultiplexedMeasurement object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = MultiplexedMeasurement(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(MultiplexedMeasurement);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurements(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurements());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsWithoutDerivatives());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MultiplexedMeasurement_getMeasurements(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurements());
          return ::java::util::t_List::wrap_Object(result);
        }
        static PyObject *t_MultiplexedMeasurement_get__parameters_(t_MultiplexedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurements(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurements());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsWithoutDerivatives());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_MultiplexedMeasurement_get__measurements(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurements());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldAttitude::class$ = NULL;
      jmethodID *FieldAttitude::mids$ = NULL;
      bool FieldAttitude::live$ = false;

      jclass FieldAttitude::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldAttitude");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f9186b23d2ab2a5d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)V");
          mids$[mid_init$_a937292011bfa7b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_da30998d712a0da0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldAngularCoordinates;)V");
          mids$[mid_init$_8b19bbb96b06c376] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_cc8fc18d776df738] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/Field;)V");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getOrientation_3c739ea1aa8f99e1] = env->getMethodID(cls, "getOrientation", "()Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_getReferenceFrame_cb151471db4570f0] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRotation_5c8e6f300713559c] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_d1b42a6748e907f9] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getSpin_d1b42a6748e907f9] = env->getMethodID(cls, "getSpin", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_d86ca4d933b5a0f2] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_shiftedBy_937a2bd33cd4a521] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_toAttitude_83f44b5ac6431edc] = env->getMethodID(cls, "toAttitude", "()Lorg/orekit/attitudes/Attitude;");
          mids$[mid_withReferenceFrame_640898f7e015318c] = env->getMethodID(cls, "withReferenceFrame", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAttitude::FieldAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f9186b23d2ab2a5d, a0.this$, a1.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::hipparchus::Field & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a937292011bfa7b6, a0.this$, a1.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::FieldAngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_da30998d712a0da0, a0.this$, a1.this$, a2.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b19bbb96b06c376, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc8fc18d776df738, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate FieldAttitude::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
      }

      ::org::orekit::utils::TimeStampedFieldAngularCoordinates FieldAttitude::getOrientation() const
      {
        return ::org::orekit::utils::TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getOrientation_3c739ea1aa8f99e1]));
      }

      ::org::orekit::frames::Frame FieldAttitude::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_cb151471db4570f0]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAttitude::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_5c8e6f300713559c]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAttitude::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAttitude::getSpin() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getSpin_d1b42a6748e907f9]));
      }

      FieldAttitude FieldAttitude::shiftedBy(jdouble a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_d86ca4d933b5a0f2], a0));
      }

      FieldAttitude FieldAttitude::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_937a2bd33cd4a521], a0.this$));
      }

      ::org::orekit::attitudes::Attitude FieldAttitude::toAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_toAttitude_83f44b5ac6431edc]));
      }

      FieldAttitude FieldAttitude::withReferenceFrame(const ::org::orekit::frames::Frame & a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_withReferenceFrame_640898f7e015318c], a0.this$));
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
      static PyObject *t_FieldAttitude_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitude_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitude_of_(t_FieldAttitude *self, PyObject *args);
      static int t_FieldAttitude_init_(t_FieldAttitude *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAttitude_getDate(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getOrientation(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getReferenceFrame(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getRotation(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getRotationAcceleration(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getSpin(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_shiftedBy(t_FieldAttitude *self, PyObject *args);
      static PyObject *t_FieldAttitude_toAttitude(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_withReferenceFrame(t_FieldAttitude *self, PyObject *arg);
      static PyObject *t_FieldAttitude_get__date(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__orientation(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__referenceFrame(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__rotation(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__rotationAcceleration(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__spin(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__parameters_(t_FieldAttitude *self, void *data);
      static PyGetSetDef t_FieldAttitude__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAttitude, date),
        DECLARE_GET_FIELD(t_FieldAttitude, orientation),
        DECLARE_GET_FIELD(t_FieldAttitude, referenceFrame),
        DECLARE_GET_FIELD(t_FieldAttitude, rotation),
        DECLARE_GET_FIELD(t_FieldAttitude, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldAttitude, spin),
        DECLARE_GET_FIELD(t_FieldAttitude, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAttitude__methods_[] = {
        DECLARE_METHOD(t_FieldAttitude, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitude, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitude, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitude, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getOrientation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getReferenceFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getSpin, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitude, toAttitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, withReferenceFrame, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAttitude)[] = {
        { Py_tp_methods, t_FieldAttitude__methods_ },
        { Py_tp_init, (void *) t_FieldAttitude_init_ },
        { Py_tp_getset, t_FieldAttitude__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAttitude)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAttitude, t_FieldAttitude, FieldAttitude);
      PyObject *t_FieldAttitude::wrap_Object(const FieldAttitude& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitude::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitude *self = (t_FieldAttitude *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAttitude::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitude::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitude *self = (t_FieldAttitude *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAttitude::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAttitude), &PY_TYPE_DEF(FieldAttitude), module, "FieldAttitude", 0);
      }

      void t_FieldAttitude::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "class_", make_descriptor(FieldAttitude::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "wrapfn_", make_descriptor(t_FieldAttitude::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAttitude_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAttitude::initializeClass, 1)))
          return NULL;
        return t_FieldAttitude::wrap_Object(FieldAttitude(((t_FieldAttitude *) arg)->object.this$));
      }
      static PyObject *t_FieldAttitude_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAttitude::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAttitude_of_(t_FieldAttitude *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAttitude_init_(t_FieldAttitude *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAttitude(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::FieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            ::org::hipparchus::Field a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkkkkK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_FieldAttitude_getDate(t_FieldAttitude *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getOrientation(t_FieldAttitude *self)
      {
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getReferenceFrame(t_FieldAttitude *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAttitude_getRotation(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getRotationAcceleration(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getSpin(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_shiftedBy(t_FieldAttitude *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAttitude_toAttitude(t_FieldAttitude *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.toAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_FieldAttitude_withReferenceFrame(t_FieldAttitude *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FieldAttitude result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withReferenceFrame(a0));
          return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "withReferenceFrame", arg);
        return NULL;
      }
      static PyObject *t_FieldAttitude_get__parameters_(t_FieldAttitude *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAttitude_get__date(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__orientation(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__referenceFrame(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__rotation(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__rotationAcceleration(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__spin(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *HighamHall54Integrator::class$ = NULL;
        jmethodID *HighamHall54Integrator::mids$ = NULL;
        bool HighamHall54Integrator::live$ = false;

        jclass HighamHall54Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/HighamHall54Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e3195482263a60ce] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_eda3f19b8225f78f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_be783177b060994b] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_be783177b060994b] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_357985cd2a4d75d0] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/HighamHall54StateInterpolator;");
            mids$[mid_estimateError_8c458726c8da3a78] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54Integrator::HighamHall54Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e3195482263a60ce, a0, a1, a2.this$, a3.this$)) {}

        HighamHall54Integrator::HighamHall54Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > HighamHall54Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_eda3f19b8225f78f]));
        }

        JArray< jdouble > HighamHall54Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_be783177b060994b]));
        }

        JArray< jdouble > HighamHall54Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_be783177b060994b]));
        }

        jint HighamHall54Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
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
        static PyObject *t_HighamHall54Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HighamHall54Integrator_init_(t_HighamHall54Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54Integrator_getA(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getB(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getC(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getOrder(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_get__a(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__b(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__c(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__order(t_HighamHall54Integrator *self, void *data);
        static PyGetSetDef t_HighamHall54Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54Integrator, a),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, b),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, c),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54Integrator__methods_[] = {
          DECLARE_METHOD(t_HighamHall54Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54Integrator)[] = {
          { Py_tp_methods, t_HighamHall54Integrator__methods_ },
          { Py_tp_init, (void *) t_HighamHall54Integrator_init_ },
          { Py_tp_getset, t_HighamHall54Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(HighamHall54Integrator, t_HighamHall54Integrator, HighamHall54Integrator);

        void t_HighamHall54Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54Integrator), &PY_TYPE_DEF(HighamHall54Integrator), module, "HighamHall54Integrator", 0);
        }

        void t_HighamHall54Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "class_", make_descriptor(HighamHall54Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "wrapfn_", make_descriptor(t_HighamHall54Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54Integrator::initializeClass, 1)))
            return NULL;
          return t_HighamHall54Integrator::wrap_Object(HighamHall54Integrator(((t_HighamHall54Integrator *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HighamHall54Integrator_init_(t_HighamHall54Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              HighamHall54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = HighamHall54Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              HighamHall54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = HighamHall54Integrator(a0, a1, a2, a3));
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

        static PyObject *t_HighamHall54Integrator_getA(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getB(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getC(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getOrder(t_HighamHall54Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_get__a(t_HighamHall54Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_HighamHall54Integrator_get__b(t_HighamHall54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_HighamHall54Integrator_get__c(t_HighamHall54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_HighamHall54Integrator_get__order(t_HighamHall54Integrator *self, void *data)
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
#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractPolynomialSolver::class$ = NULL;
        jmethodID *AbstractPolynomialSolver::mids$ = NULL;
        bool AbstractPolynomialSolver::live$ = false;

        jclass AbstractPolynomialSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractPolynomialSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCoefficients_be783177b060994b] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_setup_3e2ee186bbf6f701] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/polynomials/PolynomialFunction;DDD)V");

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
        static PyObject *t_AbstractPolynomialSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPolynomialSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPolynomialSolver_of_(t_AbstractPolynomialSolver *self, PyObject *args);
        static PyObject *t_AbstractPolynomialSolver_get__parameters_(t_AbstractPolynomialSolver *self, void *data);
        static PyGetSetDef t_AbstractPolynomialSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractPolynomialSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPolynomialSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractPolynomialSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPolynomialSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPolynomialSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPolynomialSolver)[] = {
          { Py_tp_methods, t_AbstractPolynomialSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPolynomialSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPolynomialSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractPolynomialSolver, t_AbstractPolynomialSolver, AbstractPolynomialSolver);
        PyObject *t_AbstractPolynomialSolver::wrap_Object(const AbstractPolynomialSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractPolynomialSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractPolynomialSolver *self = (t_AbstractPolynomialSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractPolynomialSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractPolynomialSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractPolynomialSolver *self = (t_AbstractPolynomialSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractPolynomialSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPolynomialSolver), &PY_TYPE_DEF(AbstractPolynomialSolver), module, "AbstractPolynomialSolver", 0);
        }

        void t_AbstractPolynomialSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "class_", make_descriptor(AbstractPolynomialSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "wrapfn_", make_descriptor(t_AbstractPolynomialSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPolynomialSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPolynomialSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractPolynomialSolver::wrap_Object(AbstractPolynomialSolver(((t_AbstractPolynomialSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractPolynomialSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPolynomialSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPolynomialSolver_of_(t_AbstractPolynomialSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractPolynomialSolver_get__parameters_(t_AbstractPolynomialSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionData::class$ = NULL;
              jmethodID *RtcmCorrectionData::mids$ = NULL;
              bool RtcmCorrectionData::live$ = false;

              jclass RtcmCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteID_d6ab429752e7c267] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setSatelliteID_8fd427ab23829bf5] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionData::RtcmCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint RtcmCorrectionData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_d6ab429752e7c267]);
              }

              void RtcmCorrectionData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_8fd427ab23829bf5], a0);
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
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCorrectionData_init_(t_RtcmCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionData_getSatelliteID(t_RtcmCorrectionData *self);
              static PyObject *t_RtcmCorrectionData_setSatelliteID(t_RtcmCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionData_get__satelliteID(t_RtcmCorrectionData *self, void *data);
              static int t_RtcmCorrectionData_set__satelliteID(t_RtcmCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCorrectionData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionData)[] = {
                { Py_tp_methods, t_RtcmCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionData_init_ },
                { Py_tp_getset, t_RtcmCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmData),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionData, t_RtcmCorrectionData, RtcmCorrectionData);

              void t_RtcmCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionData), &PY_TYPE_DEF(RtcmCorrectionData), module, "RtcmCorrectionData", 0);
              }

              void t_RtcmCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "class_", make_descriptor(RtcmCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "wrapfn_", make_descriptor(t_RtcmCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionData::wrap_Object(RtcmCorrectionData(((t_RtcmCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCorrectionData_init_(t_RtcmCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCorrectionData_getSatelliteID(t_RtcmCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionData_setSatelliteID(t_RtcmCorrectionData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteID", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionData_get__satelliteID(t_RtcmCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionData_set__satelliteID(t_RtcmCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteID", arg);
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$RotationOrderConsumer::class$ = NULL;
            jmethodID *ParseToken$RotationOrderConsumer::mids$ = NULL;
            bool ParseToken$RotationOrderConsumer::live$ = false;

            jclass ParseToken$RotationOrderConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_d6989ad0241efe2c] = env->getMethodID(cls, "accept", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$RotationOrderConsumer::accept(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_d6989ad0241efe2c], a0.this$);
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
            static PyObject *t_ParseToken$RotationOrderConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$RotationOrderConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$RotationOrderConsumer_accept(t_ParseToken$RotationOrderConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$RotationOrderConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$RotationOrderConsumer)[] = {
              { Py_tp_methods, t_ParseToken$RotationOrderConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$RotationOrderConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$RotationOrderConsumer, t_ParseToken$RotationOrderConsumer, ParseToken$RotationOrderConsumer);

            void t_ParseToken$RotationOrderConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$RotationOrderConsumer), &PY_TYPE_DEF(ParseToken$RotationOrderConsumer), module, "ParseToken$RotationOrderConsumer", 0);
            }

            void t_ParseToken$RotationOrderConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "class_", make_descriptor(ParseToken$RotationOrderConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "wrapfn_", make_descriptor(t_ParseToken$RotationOrderConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$RotationOrderConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$RotationOrderConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$RotationOrderConsumer::wrap_Object(ParseToken$RotationOrderConsumer(((t_ParseToken$RotationOrderConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$RotationOrderConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$RotationOrderConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$RotationOrderConsumer_accept(t_ParseToken$RotationOrderConsumer *self, PyObject *arg)
            {
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
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
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *EulerKey::class$ = NULL;
              jmethodID *EulerKey::mids$ = NULL;
              bool EulerKey::live$ = false;
              EulerKey *EulerKey::ANGLE_1 = NULL;
              EulerKey *EulerKey::ANGLE_1_DOT = NULL;
              EulerKey *EulerKey::ANGLE_2 = NULL;
              EulerKey *EulerKey::ANGLE_2_DOT = NULL;
              EulerKey *EulerKey::ANGLE_3 = NULL;
              EulerKey *EulerKey::ANGLE_3_DOT = NULL;
              EulerKey *EulerKey::COMMENT = NULL;
              EulerKey *EulerKey::EULER_DIR = NULL;
              EulerKey *EulerKey::EULER_FRAME_A = NULL;
              EulerKey *EulerKey::EULER_FRAME_B = NULL;
              EulerKey *EulerKey::EULER_ROT_SEQ = NULL;
              EulerKey *EulerKey::RATE_FRAME = NULL;
              EulerKey *EulerKey::REF_FRAME_A = NULL;
              EulerKey *EulerKey::REF_FRAME_B = NULL;
              EulerKey *EulerKey::X_ANGLE = NULL;
              EulerKey *EulerKey::X_RATE = NULL;
              EulerKey *EulerKey::Y_ANGLE = NULL;
              EulerKey *EulerKey::Y_RATE = NULL;
              EulerKey *EulerKey::Z_ANGLE = NULL;
              EulerKey *EulerKey::Z_RATE = NULL;
              EulerKey *EulerKey::rotationAngles = NULL;
              EulerKey *EulerKey::rotationRates = NULL;

              jclass EulerKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/EulerKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_c40ec13c52f2408c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;)Z");
                  mids$[mid_valueOf_21aa8efb583c87d9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;");
                  mids$[mid_values_587ff68756dc491d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE_1 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_1_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_2 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_2_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_3 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_3", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_3_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  COMMENT = new EulerKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_DIR = new EulerKey(env->getStaticObjectField(cls, "EULER_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_FRAME_A = new EulerKey(env->getStaticObjectField(cls, "EULER_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_FRAME_B = new EulerKey(env->getStaticObjectField(cls, "EULER_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_ROT_SEQ = new EulerKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  RATE_FRAME = new EulerKey(env->getStaticObjectField(cls, "RATE_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  REF_FRAME_A = new EulerKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  REF_FRAME_B = new EulerKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  X_ANGLE = new EulerKey(env->getStaticObjectField(cls, "X_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  X_RATE = new EulerKey(env->getStaticObjectField(cls, "X_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Y_ANGLE = new EulerKey(env->getStaticObjectField(cls, "Y_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Y_RATE = new EulerKey(env->getStaticObjectField(cls, "Y_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Z_ANGLE = new EulerKey(env->getStaticObjectField(cls, "Z_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Z_RATE = new EulerKey(env->getStaticObjectField(cls, "Z_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  rotationAngles = new EulerKey(env->getStaticObjectField(cls, "rotationAngles", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  rotationRates = new EulerKey(env->getStaticObjectField(cls, "rotationRates", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean EulerKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_c40ec13c52f2408c], a0.this$, a1.this$, a2.this$);
              }

              EulerKey EulerKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return EulerKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_21aa8efb583c87d9], a0.this$));
              }

              JArray< EulerKey > EulerKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< EulerKey >(env->callStaticObjectMethod(cls, mids$[mid_values_587ff68756dc491d]));
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
              static PyObject *t_EulerKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EulerKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EulerKey_of_(t_EulerKey *self, PyObject *args);
              static PyObject *t_EulerKey_process(t_EulerKey *self, PyObject *args);
              static PyObject *t_EulerKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_EulerKey_values(PyTypeObject *type);
              static PyObject *t_EulerKey_get__parameters_(t_EulerKey *self, void *data);
              static PyGetSetDef t_EulerKey__fields_[] = {
                DECLARE_GET_FIELD(t_EulerKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_EulerKey__methods_[] = {
                DECLARE_METHOD(t_EulerKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_EulerKey, process, METH_VARARGS),
                DECLARE_METHOD(t_EulerKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EulerKey)[] = {
                { Py_tp_methods, t_EulerKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_EulerKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EulerKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(EulerKey, t_EulerKey, EulerKey);
              PyObject *t_EulerKey::wrap_Object(const EulerKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_EulerKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_EulerKey *self = (t_EulerKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_EulerKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_EulerKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_EulerKey *self = (t_EulerKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_EulerKey::install(PyObject *module)
              {
                installType(&PY_TYPE(EulerKey), &PY_TYPE_DEF(EulerKey), module, "EulerKey", 0);
              }

              void t_EulerKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "class_", make_descriptor(EulerKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "wrapfn_", make_descriptor(t_EulerKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(EulerKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_1", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_1_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_2", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_2_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_3", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_3_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "COMMENT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_DIR", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_FRAME_A", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_FRAME_B", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_ROT_SEQ", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "RATE_FRAME", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::RATE_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "REF_FRAME_A", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "REF_FRAME_B", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "X_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::X_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "X_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::X_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Y_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Y_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Y_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Y_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Z_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Z_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Z_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Z_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "rotationAngles", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::rotationAngles)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "rotationRates", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::rotationRates)));
              }

              static PyObject *t_EulerKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EulerKey::initializeClass, 1)))
                  return NULL;
                return t_EulerKey::wrap_Object(EulerKey(((t_EulerKey *) arg)->object.this$));
              }
              static PyObject *t_EulerKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EulerKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_EulerKey_of_(t_EulerKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_EulerKey_process(t_EulerKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Euler::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_EulerKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                EulerKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::EulerKey::valueOf(a0));
                  return t_EulerKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_EulerKey_values(PyTypeObject *type)
              {
                JArray< EulerKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::EulerKey::values());
                return JArray<jobject>(result.this$).wrap(t_EulerKey::wrap_jobject);
              }
              static PyObject *t_EulerKey_get__parameters_(t_EulerKey *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldShortPeriodicsInterpolatedCoefficient.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldShortPeriodicsInterpolatedCoefficient::class$ = NULL;
            jmethodID *FieldShortPeriodicsInterpolatedCoefficient::mids$ = NULL;
            bool FieldShortPeriodicsInterpolatedCoefficient::live$ = false;

            jclass FieldShortPeriodicsInterpolatedCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldShortPeriodicsInterpolatedCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_addGridPoint_8810238087e40b6c] = env->getMethodID(cls, "addGridPoint", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_clearHistory_ff7cb6c242604316] = env->getMethodID(cls, "clearHistory", "()V");
                mids$[mid_value_977531d905f4ab3f] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldShortPeriodicsInterpolatedCoefficient::FieldShortPeriodicsInterpolatedCoefficient(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            void FieldShortPeriodicsInterpolatedCoefficient::addGridPoint(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addGridPoint_8810238087e40b6c], a0.this$, a1.this$);
            }

            void FieldShortPeriodicsInterpolatedCoefficient::clearHistory() const
            {
              env->callVoidMethod(this$, mids$[mid_clearHistory_ff7cb6c242604316]);
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldShortPeriodicsInterpolatedCoefficient::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_977531d905f4ab3f], a0.this$));
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
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_of_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static int t_FieldShortPeriodicsInterpolatedCoefficient_init_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_addGridPoint(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_clearHistory(t_FieldShortPeriodicsInterpolatedCoefficient *self);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_value(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *arg);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_get__parameters_(t_FieldShortPeriodicsInterpolatedCoefficient *self, void *data);
            static PyGetSetDef t_FieldShortPeriodicsInterpolatedCoefficient__fields_[] = {
              DECLARE_GET_FIELD(t_FieldShortPeriodicsInterpolatedCoefficient, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldShortPeriodicsInterpolatedCoefficient__methods_[] = {
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, addGridPoint, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, clearHistory, METH_NOARGS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldShortPeriodicsInterpolatedCoefficient)[] = {
              { Py_tp_methods, t_FieldShortPeriodicsInterpolatedCoefficient__methods_ },
              { Py_tp_init, (void *) t_FieldShortPeriodicsInterpolatedCoefficient_init_ },
              { Py_tp_getset, t_FieldShortPeriodicsInterpolatedCoefficient__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldShortPeriodicsInterpolatedCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldShortPeriodicsInterpolatedCoefficient, t_FieldShortPeriodicsInterpolatedCoefficient, FieldShortPeriodicsInterpolatedCoefficient);
            PyObject *t_FieldShortPeriodicsInterpolatedCoefficient::wrap_Object(const FieldShortPeriodicsInterpolatedCoefficient& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodicsInterpolatedCoefficient::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodicsInterpolatedCoefficient *self = (t_FieldShortPeriodicsInterpolatedCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldShortPeriodicsInterpolatedCoefficient::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodicsInterpolatedCoefficient::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodicsInterpolatedCoefficient *self = (t_FieldShortPeriodicsInterpolatedCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldShortPeriodicsInterpolatedCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), &PY_TYPE_DEF(FieldShortPeriodicsInterpolatedCoefficient), module, "FieldShortPeriodicsInterpolatedCoefficient", 0);
            }

            void t_FieldShortPeriodicsInterpolatedCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), "class_", make_descriptor(FieldShortPeriodicsInterpolatedCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), "wrapfn_", make_descriptor(t_FieldShortPeriodicsInterpolatedCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldShortPeriodicsInterpolatedCoefficient::initializeClass, 1)))
                return NULL;
              return t_FieldShortPeriodicsInterpolatedCoefficient::wrap_Object(FieldShortPeriodicsInterpolatedCoefficient(((t_FieldShortPeriodicsInterpolatedCoefficient *) arg)->object.this$));
            }
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldShortPeriodicsInterpolatedCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_of_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldShortPeriodicsInterpolatedCoefficient_init_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              FieldShortPeriodicsInterpolatedCoefficient object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = FieldShortPeriodicsInterpolatedCoefficient(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_addGridPoint(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(self->object.addGridPoint(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addGridPoint", args);
              return NULL;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_clearHistory(t_FieldShortPeriodicsInterpolatedCoefficient *self)
            {
              OBJ_CALL(self->object.clearHistory());
              Py_RETURN_NONE;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_value(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *arg)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_get__parameters_(t_FieldShortPeriodicsInterpolatedCoefficient *self, void *data)
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
              mids$[mid_valueOf_bd7eb673911963c3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_values_f05efbe7ae8dc712] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/RecordType;");

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
            return RecordType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bd7eb673911963c3], a0.this$));
          }

          JArray< RecordType > RecordType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RecordType >(env->callStaticObjectMethod(cls, mids$[mid_values_f05efbe7ae8dc712]));
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
#include "org/orekit/time/UTCScale.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/UTCTAIOffset.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCScale::class$ = NULL;
      jmethodID *UTCScale::mids$ = NULL;
      bool UTCScale::live$ = false;

      jclass UTCScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBaseOffsets_3bfef5c77ceb081a] = env->getMethodID(cls, "getBaseOffsets", "()Ljava/util/Collection;");
          mids$[mid_getFirstKnownLeapSecond_80e11148db499dda] = env->getMethodID(cls, "getFirstKnownLeapSecond", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLastKnownLeapSecond_80e11148db499dda] = env->getMethodID(cls, "getLastKnownLeapSecond", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLeap_209f08246d708042] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_cf010978f3c5a913] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getUTCTAIOffsets_d751c1a57012b438] = env->getMethodID(cls, "getUTCTAIOffsets", "()Ljava/util/List;");
          mids$[mid_insideLeap_b16e79ba1b2830a1] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_ada3024ac7559675] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_94772beff3ac8a91] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_23ced097258e06b3] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::Collection UTCScale::getBaseOffsets() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getBaseOffsets_3bfef5c77ceb081a]));
      }

      ::org::orekit::time::AbsoluteDate UTCScale::getFirstKnownLeapSecond() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFirstKnownLeapSecond_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate UTCScale::getLastKnownLeapSecond() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastKnownLeapSecond_80e11148db499dda]));
      }

      jdouble UTCScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_cf010978f3c5a913], a0.this$));
      }

      ::java::lang::String UTCScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::java::util::List UTCScale::getUTCTAIOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUTCTAIOffsets_d751c1a57012b438]));
      }

      jboolean UTCScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_b16e79ba1b2830a1], a0.this$);
      }

      jboolean UTCScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_ada3024ac7559675], a0.this$);
      }

      jint UTCScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_94772beff3ac8a91], a0.this$);
      }

      jint UTCScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_23ced097258e06b3], a0.this$);
      }

      jdouble UTCScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble UTCScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::java::lang::String UTCScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_UTCScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCScale_getBaseOffsets(t_UTCScale *self);
      static PyObject *t_UTCScale_getFirstKnownLeapSecond(t_UTCScale *self);
      static PyObject *t_UTCScale_getLastKnownLeapSecond(t_UTCScale *self);
      static PyObject *t_UTCScale_getLeap(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_getName(t_UTCScale *self);
      static PyObject *t_UTCScale_getUTCTAIOffsets(t_UTCScale *self);
      static PyObject *t_UTCScale_insideLeap(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_minuteDuration(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_offsetFromTAI(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_offsetToTAI(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_toString(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_get__baseOffsets(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__firstKnownLeapSecond(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__lastKnownLeapSecond(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__name(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__uTCTAIOffsets(t_UTCScale *self, void *data);
      static PyGetSetDef t_UTCScale__fields_[] = {
        DECLARE_GET_FIELD(t_UTCScale, baseOffsets),
        DECLARE_GET_FIELD(t_UTCScale, firstKnownLeapSecond),
        DECLARE_GET_FIELD(t_UTCScale, lastKnownLeapSecond),
        DECLARE_GET_FIELD(t_UTCScale, name),
        DECLARE_GET_FIELD(t_UTCScale, uTCTAIOffsets),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UTCScale__methods_[] = {
        DECLARE_METHOD(t_UTCScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCScale, getBaseOffsets, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getFirstKnownLeapSecond, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getLastKnownLeapSecond, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getUTCTAIOffsets, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCScale)[] = {
        { Py_tp_methods, t_UTCScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UTCScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCScale, t_UTCScale, UTCScale);

      void t_UTCScale::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCScale), &PY_TYPE_DEF(UTCScale), module, "UTCScale", 0);
      }

      void t_UTCScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "class_", make_descriptor(UTCScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "wrapfn_", make_descriptor(t_UTCScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCScale::initializeClass, 1)))
          return NULL;
        return t_UTCScale::wrap_Object(UTCScale(((t_UTCScale *) arg)->object.this$));
      }
      static PyObject *t_UTCScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCScale_getBaseOffsets(t_UTCScale *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getBaseOffsets());
        return ::java::util::t_Collection::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getFirstKnownLeapSecond(t_UTCScale *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getLastKnownLeapSecond(t_UTCScale *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getLeap(t_UTCScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_UTCScale_getName(t_UTCScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_UTCScale_getUTCTAIOffsets(t_UTCScale *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTCTAIOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(UTCTAIOffset));
      }

      static PyObject *t_UTCScale_insideLeap(t_UTCScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_UTCScale_minuteDuration(t_UTCScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_UTCScale_offsetFromTAI(t_UTCScale *self, PyObject *args)
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

      static PyObject *t_UTCScale_offsetToTAI(t_UTCScale *self, PyObject *args)
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

      static PyObject *t_UTCScale_toString(t_UTCScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(UTCScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_UTCScale_get__baseOffsets(t_UTCScale *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getBaseOffsets());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__firstKnownLeapSecond(t_UTCScale *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__lastKnownLeapSecond(t_UTCScale *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__name(t_UTCScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_UTCScale_get__uTCTAIOffsets(t_UTCScale *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTCTAIOffsets());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *OneWayGNSSPhaseBuilder::class$ = NULL;
          jmethodID *OneWayGNSSPhaseBuilder::mids$ = NULL;
          bool OneWayGNSSPhaseBuilder::live$ = false;

          jclass OneWayGNSSPhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_df5af693beceea73] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/OneWayGNSSPhase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase OneWayGNSSPhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase(env->callObjectMethod(this$, mids$[mid_build_df5af693beceea73], a0.this$, a1.this$));
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
          static PyObject *t_OneWayGNSSPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseBuilder_of_(t_OneWayGNSSPhaseBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSPhaseBuilder_build(t_OneWayGNSSPhaseBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSPhaseBuilder_get__parameters_(t_OneWayGNSSPhaseBuilder *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhaseBuilder)[] = {
            { Py_tp_methods, t_OneWayGNSSPhaseBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OneWayGNSSPhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhaseBuilder, t_OneWayGNSSPhaseBuilder, OneWayGNSSPhaseBuilder);
          PyObject *t_OneWayGNSSPhaseBuilder::wrap_Object(const OneWayGNSSPhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhaseBuilder *self = (t_OneWayGNSSPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSPhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhaseBuilder *self = (t_OneWayGNSSPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSPhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhaseBuilder), &PY_TYPE_DEF(OneWayGNSSPhaseBuilder), module, "OneWayGNSSPhaseBuilder", 0);
          }

          void t_OneWayGNSSPhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "class_", make_descriptor(OneWayGNSSPhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "wrapfn_", make_descriptor(t_OneWayGNSSPhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhaseBuilder::wrap_Object(OneWayGNSSPhaseBuilder(((t_OneWayGNSSPhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_of_(t_OneWayGNSSPhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_build(t_OneWayGNSSPhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_OneWayGNSSPhase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(OneWayGNSSPhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_OneWayGNSSPhaseBuilder_get__parameters_(t_OneWayGNSSPhaseBuilder *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunctionNewtonForm::class$ = NULL;
        jmethodID *PolynomialFunctionNewtonForm::mids$ = NULL;
        bool PolynomialFunctionNewtonForm::live$ = false;

        jclass PolynomialFunctionNewtonForm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_degree_d6ab429752e7c267] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_evaluate_65d620e9532c2371] = env->getStaticMethodID(cls, "evaluate", "([D[DD)D");
            mids$[mid_getCenters_be783177b060994b] = env->getMethodID(cls, "getCenters", "()[D");
            mids$[mid_getCoefficients_be783177b060994b] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_getNewtonCoefficients_be783177b060994b] = env->getMethodID(cls, "getNewtonCoefficients", "()[D");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_computeCoefficients_ff7cb6c242604316] = env->getMethodID(cls, "computeCoefficients", "()V");
            mids$[mid_verifyInputArray_64100e41ba74de8f] = env->getStaticMethodID(cls, "verifyInputArray", "([D[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunctionNewtonForm::PolynomialFunctionNewtonForm(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

        jint PolynomialFunctionNewtonForm::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_d6ab429752e7c267]);
        }

        jdouble PolynomialFunctionNewtonForm::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_evaluate_65d620e9532c2371], a0.this$, a1.this$, a2);
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getCenters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCenters_be783177b060994b]));
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_be783177b060994b]));
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getNewtonCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNewtonCoefficients_be783177b060994b]));
        }

        jdouble PolynomialFunctionNewtonForm::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialFunctionNewtonForm::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a3b854adede8eaaa], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialFunctionNewtonForm::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_PolynomialFunctionNewtonForm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunctionNewtonForm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunctionNewtonForm_init_(t_PolynomialFunctionNewtonForm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunctionNewtonForm_degree(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_evaluate(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionNewtonForm_getCenters(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_getCoefficients(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_getNewtonCoefficients(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_value(t_PolynomialFunctionNewtonForm *self, PyObject *args);
        static PyObject *t_PolynomialFunctionNewtonForm_get__centers(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyObject *t_PolynomialFunctionNewtonForm_get__coefficients(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyObject *t_PolynomialFunctionNewtonForm_get__newtonCoefficients(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyGetSetDef t_PolynomialFunctionNewtonForm__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, centers),
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, coefficients),
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, newtonCoefficients),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunctionNewtonForm__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, evaluate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getCenters, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getNewtonCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionNewtonForm)[] = {
          { Py_tp_methods, t_PolynomialFunctionNewtonForm__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunctionNewtonForm_init_ },
          { Py_tp_getset, t_PolynomialFunctionNewtonForm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunctionNewtonForm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunctionNewtonForm, t_PolynomialFunctionNewtonForm, PolynomialFunctionNewtonForm);

        void t_PolynomialFunctionNewtonForm::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunctionNewtonForm), &PY_TYPE_DEF(PolynomialFunctionNewtonForm), module, "PolynomialFunctionNewtonForm", 0);
        }

        void t_PolynomialFunctionNewtonForm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "class_", make_descriptor(PolynomialFunctionNewtonForm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "wrapfn_", make_descriptor(t_PolynomialFunctionNewtonForm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunctionNewtonForm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunctionNewtonForm::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunctionNewtonForm::wrap_Object(PolynomialFunctionNewtonForm(((t_PolynomialFunctionNewtonForm *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunctionNewtonForm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunctionNewtonForm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunctionNewtonForm_init_(t_PolynomialFunctionNewtonForm *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          PolynomialFunctionNewtonForm object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = PolynomialFunctionNewtonForm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_degree(t_PolynomialFunctionNewtonForm *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunctionNewtonForm_evaluate(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm::evaluate(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "evaluate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getCenters(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenters());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getCoefficients(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getNewtonCoefficients(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewtonCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_value(t_PolynomialFunctionNewtonForm *self, PyObject *args)
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
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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

        static PyObject *t_PolynomialFunctionNewtonForm_get__centers(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenters());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__coefficients(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__newtonCoefficients(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewtonCoefficients());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RiccatiEquationSolverImpl.h"
#include "org/hipparchus/linear/RiccatiEquationSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RiccatiEquationSolverImpl::class$ = NULL;
      jmethodID *RiccatiEquationSolverImpl::mids$ = NULL;
      bool RiccatiEquationSolverImpl::live$ = false;

      jclass RiccatiEquationSolverImpl::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RiccatiEquationSolverImpl");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5b32850569216899] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getK_b2eebabce70526d8] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_b2eebabce70526d8] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RiccatiEquationSolverImpl::RiccatiEquationSolverImpl(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5b32850569216899, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolverImpl::getK() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getK_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolverImpl::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_b2eebabce70526d8]));
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
      static PyObject *t_RiccatiEquationSolverImpl_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolverImpl_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RiccatiEquationSolverImpl_init_(t_RiccatiEquationSolverImpl *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RiccatiEquationSolverImpl_getK(t_RiccatiEquationSolverImpl *self);
      static PyObject *t_RiccatiEquationSolverImpl_getP(t_RiccatiEquationSolverImpl *self);
      static PyObject *t_RiccatiEquationSolverImpl_get__k(t_RiccatiEquationSolverImpl *self, void *data);
      static PyObject *t_RiccatiEquationSolverImpl_get__p(t_RiccatiEquationSolverImpl *self, void *data);
      static PyGetSetDef t_RiccatiEquationSolverImpl__fields_[] = {
        DECLARE_GET_FIELD(t_RiccatiEquationSolverImpl, k),
        DECLARE_GET_FIELD(t_RiccatiEquationSolverImpl, p),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RiccatiEquationSolverImpl__methods_[] = {
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, getK, METH_NOARGS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, getP, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RiccatiEquationSolverImpl)[] = {
        { Py_tp_methods, t_RiccatiEquationSolverImpl__methods_ },
        { Py_tp_init, (void *) t_RiccatiEquationSolverImpl_init_ },
        { Py_tp_getset, t_RiccatiEquationSolverImpl__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RiccatiEquationSolverImpl)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RiccatiEquationSolverImpl, t_RiccatiEquationSolverImpl, RiccatiEquationSolverImpl);

      void t_RiccatiEquationSolverImpl::install(PyObject *module)
      {
        installType(&PY_TYPE(RiccatiEquationSolverImpl), &PY_TYPE_DEF(RiccatiEquationSolverImpl), module, "RiccatiEquationSolverImpl", 0);
      }

      void t_RiccatiEquationSolverImpl::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "class_", make_descriptor(RiccatiEquationSolverImpl::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "wrapfn_", make_descriptor(t_RiccatiEquationSolverImpl::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RiccatiEquationSolverImpl_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RiccatiEquationSolverImpl::initializeClass, 1)))
          return NULL;
        return t_RiccatiEquationSolverImpl::wrap_Object(RiccatiEquationSolverImpl(((t_RiccatiEquationSolverImpl *) arg)->object.this$));
      }
      static PyObject *t_RiccatiEquationSolverImpl_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RiccatiEquationSolverImpl::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RiccatiEquationSolverImpl_init_(t_RiccatiEquationSolverImpl *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
        RiccatiEquationSolverImpl object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = RiccatiEquationSolverImpl(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RiccatiEquationSolverImpl_getK(t_RiccatiEquationSolverImpl *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolverImpl_getP(t_RiccatiEquationSolverImpl *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolverImpl_get__k(t_RiccatiEquationSolverImpl *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RiccatiEquationSolverImpl_get__p(t_RiccatiEquationSolverImpl *self, void *data)
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
#include "org/orekit/frames/FramesFactory.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FramesFactory::class$ = NULL;
      jmethodID *FramesFactory::mids$ = NULL;
      bool FramesFactory::live$ = false;
      ::java::lang::String *FramesFactory::BULLETINA_FILENAME = NULL;
      ::java::lang::String *FramesFactory::BULLETINB_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::BULLETINB_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::CSV_FILENAME = NULL;
      ::java::lang::String *FramesFactory::EOPC04_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::EOPC04_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::XML_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::XML_2000_FILENAME = NULL;

      jclass FramesFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FramesFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addDefaultEOP1980HistoryLoaders_799a817065a795a1] = env->getStaticMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_799a817065a795a1] = env->getStaticMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addEOPHistoryLoader_de5bd84d562632cf] = env->getStaticMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_buildUncachedITRF_3b3b622e31ec9f50] = env->getStaticMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/frames/EOPHistory;Lorg/orekit/time/UTCScale;)Lorg/orekit/frames/Frame;");
          mids$[mid_clearEOPHistoryLoaders_ff7cb6c242604316] = env->getStaticMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_findEOP_6f32f7ea37e7380b] = env->getStaticMethodID(cls, "findEOP", "(Lorg/orekit/frames/Frame;)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getCIRF_84e014d661e18862] = env->getStaticMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_449c13dc13254059] = env->getStaticMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_5f3b1864e8a02d51] = env->getStaticMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_6c55c8e7e159d424] = env->getStaticMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_2914574e34e220d9] = env->getStaticMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrames_6b4dd5dc4c932983] = env->getStaticMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGCRF_cb151471db4570f0] = env->getStaticMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_7aa0049260c7fcad] = env->getStaticMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_84e014d661e18862] = env->getStaticMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_cb151471db4570f0] = env->getStaticMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_84e014d661e18862] = env->getStaticMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_8580ffa0332936c5] = env->getStaticMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_84e014d661e18862] = env->getStaticMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_d7c1cc155dc219ec] = env->getStaticMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_7aa0049260c7fcad] = env->getStaticMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getNonInterpolatingTransform_53dc2db7b752bb5e] = env->getStaticMethodID(cls, "getNonInterpolatingTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getNonInterpolatingTransform_8a45f1c7458079da] = env->getStaticMethodID(cls, "getNonInterpolatingTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getPZ9011_84e014d661e18862] = env->getStaticMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_449c13dc13254059] = env->getStaticMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_d7c1cc155dc219ec] = env->getStaticMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_84e014d661e18862] = env->getStaticMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_7aa0049260c7fcad] = env->getStaticMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_84e014d661e18862] = env->getStaticMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_449c13dc13254059] = env->getStaticMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_setEOPContinuityThreshold_1ad26e8c8c0cd65b] = env->getStaticMethodID(cls, "setEOPContinuityThreshold", "(D)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BULLETINA_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINA_FILENAME", "Ljava/lang/String;"));
          BULLETINB_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINB_1980_FILENAME", "Ljava/lang/String;"));
          BULLETINB_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINB_2000_FILENAME", "Ljava/lang/String;"));
          CSV_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "CSV_FILENAME", "Ljava/lang/String;"));
          EOPC04_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EOPC04_1980_FILENAME", "Ljava/lang/String;"));
          EOPC04_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EOPC04_2000_FILENAME", "Ljava/lang/String;"));
          RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME", "Ljava/lang/String;"));
          RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME", "Ljava/lang/String;"));
          XML_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "XML_1980_FILENAME", "Ljava/lang/String;"));
          XML_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "XML_2000_FILENAME", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FramesFactory::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultEOP1980HistoryLoaders_799a817065a795a1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void FramesFactory::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultEOP2000HistoryLoaders_799a817065a795a1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void FramesFactory::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addEOPHistoryLoader_de5bd84d562632cf], a0.this$, a1.this$);
      }

      ::org::orekit::frames::Frame FramesFactory::buildUncachedITRF(const ::org::orekit::frames::EOPHistory & a0, const ::org::orekit::time::UTCScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_buildUncachedITRF_3b3b622e31ec9f50], a0.this$, a1.this$));
      }

      void FramesFactory::clearEOPHistoryLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearEOPHistoryLoaders_ff7cb6c242604316]);
      }

      ::org::orekit::frames::EOPHistory FramesFactory::findEOP(const ::org::orekit::frames::Frame & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::EOPHistory(env->callStaticObjectMethod(cls, mids$[mid_findEOP_6f32f7ea37e7380b], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getCIRF_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getEME2000()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getEME2000_449c13dc13254059]));
      }

      ::org::orekit::frames::EOPHistory FramesFactory::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::EOPHistory(env->callStaticObjectMethod(cls, mids$[mid_getEOPHistory_5f3b1864e8a02d51], a0.this$, a1));
      }

      ::org::orekit::frames::Frame FramesFactory::getEcliptic(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getEcliptic_6c55c8e7e159d424], a0.this$));
      }

      ::org::orekit::frames::Frame FramesFactory::getFrame(const ::org::orekit::frames::Predefined & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getFrame_2914574e34e220d9], a0.this$));
      }

      ::org::orekit::frames::LazyLoadedFrames FramesFactory::getFrames()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::LazyLoadedFrames(env->callStaticObjectMethod(cls, mids$[mid_getFrames_6b4dd5dc4c932983]));
      }

      ::org::orekit::frames::Frame FramesFactory::getGCRF()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getGCRF_cb151471db4570f0]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getGTOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getGTOD_7aa0049260c7fcad], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getGTOD_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::Frame FramesFactory::getICRF()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getICRF_cb151471db4570f0]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getITRF_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF FramesFactory::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::VersionedITRF(env->callStaticObjectMethod(cls, mids$[mid_getITRF_8580ffa0332936c5], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getITRFEquinox_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getMOD(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getMOD_d7c1cc155dc219ec], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getMOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getMOD_7aa0049260c7fcad], a0));
      }

      ::org::orekit::frames::Transform FramesFactory::getNonInterpolatingTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_getNonInterpolatingTransform_53dc2db7b752bb5e], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FieldTransform FramesFactory::getNonInterpolatingTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_getNonInterpolatingTransform_8a45f1c7458079da], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getPZ9011_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTEME()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTEME_449c13dc13254059]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTIRF(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTIRF_d7c1cc155dc219ec], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTIRF_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTOD_7aa0049260c7fcad], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTOD_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getVeis1950()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getVeis1950_449c13dc13254059]));
      }

      void FramesFactory::setEOPContinuityThreshold(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setEOPContinuityThreshold_1ad26e8c8c0cd65b], a0);
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
      static PyObject *t_FramesFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_addDefaultEOP1980HistoryLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_addDefaultEOP2000HistoryLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_addEOPHistoryLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_buildUncachedITRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_clearEOPHistoryLoaders(PyTypeObject *type);
      static PyObject *t_FramesFactory_findEOP(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getCIRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getEME2000(PyTypeObject *type);
      static PyObject *t_FramesFactory_getEOPHistory(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getEcliptic(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getFrame(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getFrames(PyTypeObject *type);
      static PyObject *t_FramesFactory_getGCRF(PyTypeObject *type);
      static PyObject *t_FramesFactory_getGTOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getICRF(PyTypeObject *type);
      static PyObject *t_FramesFactory_getITRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getITRFEquinox(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getMOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getNonInterpolatingTransform(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getPZ9011(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getTEME(PyTypeObject *type);
      static PyObject *t_FramesFactory_getTIRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getTOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getVeis1950(PyTypeObject *type);
      static PyObject *t_FramesFactory_setEOPContinuityThreshold(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_get__eME2000(t_FramesFactory *self, void *data);
      static int t_FramesFactory_set__eOPContinuityThreshold(t_FramesFactory *self, PyObject *arg, void *data);
      static PyObject *t_FramesFactory_get__frames(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__gCRF(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__iCRF(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__tEME(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__veis1950(t_FramesFactory *self, void *data);
      static PyGetSetDef t_FramesFactory__fields_[] = {
        DECLARE_GET_FIELD(t_FramesFactory, eME2000),
        DECLARE_SET_FIELD(t_FramesFactory, eOPContinuityThreshold),
        DECLARE_GET_FIELD(t_FramesFactory, frames),
        DECLARE_GET_FIELD(t_FramesFactory, gCRF),
        DECLARE_GET_FIELD(t_FramesFactory, iCRF),
        DECLARE_GET_FIELD(t_FramesFactory, tEME),
        DECLARE_GET_FIELD(t_FramesFactory, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FramesFactory__methods_[] = {
        DECLARE_METHOD(t_FramesFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addDefaultEOP1980HistoryLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addDefaultEOP2000HistoryLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addEOPHistoryLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, buildUncachedITRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, clearEOPHistoryLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, findEOP, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getCIRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEME2000, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEOPHistory, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEcliptic, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getFrame, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getFrames, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getGCRF, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getGTOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getICRF, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getITRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getITRFEquinox, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getMOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getNonInterpolatingTransform, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getPZ9011, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTEME, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTIRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getVeis1950, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, setEOPContinuityThreshold, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FramesFactory)[] = {
        { Py_tp_methods, t_FramesFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FramesFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FramesFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FramesFactory, t_FramesFactory, FramesFactory);

      void t_FramesFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(FramesFactory), &PY_TYPE_DEF(FramesFactory), module, "FramesFactory", 0);
      }

      void t_FramesFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "class_", make_descriptor(FramesFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "wrapfn_", make_descriptor(t_FramesFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "boxfn_", make_descriptor(boxObject));
        env->getClass(FramesFactory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINA_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINA_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINB_1980_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINB_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINB_2000_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINB_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "CSV_FILENAME", make_descriptor(j2p(*FramesFactory::CSV_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "EOPC04_1980_FILENAME", make_descriptor(j2p(*FramesFactory::EOPC04_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "EOPC04_2000_FILENAME", make_descriptor(j2p(*FramesFactory::EOPC04_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME", make_descriptor(j2p(*FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME", make_descriptor(j2p(*FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "XML_1980_FILENAME", make_descriptor(j2p(*FramesFactory::XML_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "XML_2000_FILENAME", make_descriptor(j2p(*FramesFactory::XML_2000_FILENAME)));
      }

      static PyObject *t_FramesFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FramesFactory::initializeClass, 1)))
          return NULL;
        return t_FramesFactory::wrap_Object(FramesFactory(((t_FramesFactory *) arg)->object.this$));
      }
      static PyObject *t_FramesFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FramesFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FramesFactory_addDefaultEOP1980HistoryLoaders(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_addDefaultEOP2000HistoryLoaders(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_addEOPHistoryLoader(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_buildUncachedITRF(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::UTCScale a1((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::time::UTCScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::buildUncachedITRF(a0, a1));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "buildUncachedITRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_clearEOPHistoryLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::frames::FramesFactory::clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_FramesFactory_findEOP(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::findEOP(a0));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "findEOP", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getCIRF(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getEME2000(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getEOPHistory(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getEcliptic(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getFrame(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getFrames(PyTypeObject *type)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getGCRF(PyTypeObject *type)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getGTOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getICRF(PyTypeObject *type)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getITRF(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getITRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getITRFEquinox(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getMOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getMOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getNonInterpolatingTransform(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getNonInterpolatingTransform(a0, a1, a2));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getNonInterpolatingTransform(a0, a1, a2));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getNonInterpolatingTransform", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getPZ9011(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getTEME(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getTIRF(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getTOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getTOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getVeis1950(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_setEOPContinuityThreshold(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_get__eME2000(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static int t_FramesFactory_set__eOPContinuityThreshold(t_FramesFactory *self, PyObject *arg, void *data)
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

      static PyObject *t_FramesFactory_get__frames(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__gCRF(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__iCRF(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__tEME(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__veis1950(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}

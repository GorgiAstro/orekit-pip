#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"
#include "java/util/Locale.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/IllegalAccessException.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/util/ResourceBundle.h"
#include "java/io/IOException.h"
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
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_newBundle_8ca50bd8ea3c1503] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitMessages$UTF8Control::OrekitMessages$UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::java::util::ResourceBundle OrekitMessages$UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
      {
        return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_8ca50bd8ea3c1503], a0.this$, a1.this$, a2.this$, a3.this$, a4));
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
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialSplineFunction::class$ = NULL;
        jmethodID *PolynomialSplineFunction::mids$ = NULL;
        bool PolynomialSplineFunction::live$ = false;

        jclass PolynomialSplineFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialSplineFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ea512a9f7292ec68] = env->getMethodID(cls, "<init>", "([D[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
            mids$[mid_getKnots_25e1757a36c4dde2] = env->getMethodID(cls, "getKnots", "()[D");
            mids$[mid_getN_55546ef6a647f39b] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_getPolynomials_6893f2a8a1a47500] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_isValidPoint_716249baa52d209e] = env->getMethodID(cls, "isValidPoint", "(D)Z");
            mids$[mid_polynomialSplineDerivative_8bbee61439e598b7] = env->getMethodID(cls, "polynomialSplineDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialSplineFunction::PolynomialSplineFunction(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea512a9f7292ec68, a0.this$, a1.this$)) {}

        JArray< jdouble > PolynomialSplineFunction::getKnots() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKnots_25e1757a36c4dde2]));
        }

        jint PolynomialSplineFunction::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_55546ef6a647f39b]);
        }

        JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > PolynomialSplineFunction::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_6893f2a8a1a47500]));
        }

        jboolean PolynomialSplineFunction::isValidPoint(jdouble a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_716249baa52d209e], a0);
        }

        PolynomialSplineFunction PolynomialSplineFunction::polynomialSplineDerivative() const
        {
          return PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_polynomialSplineDerivative_8bbee61439e598b7]));
        }

        jdouble PolynomialSplineFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialSplineFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6e00dc5eb352fe51], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialSplineFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
      namespace polynomials {
        static PyObject *t_PolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialSplineFunction_init_(t_PolynomialSplineFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialSplineFunction_getKnots(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_getN(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_getPolynomials(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_isValidPoint(t_PolynomialSplineFunction *self, PyObject *arg);
        static PyObject *t_PolynomialSplineFunction_polynomialSplineDerivative(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_value(t_PolynomialSplineFunction *self, PyObject *args);
        static PyObject *t_PolynomialSplineFunction_get__knots(t_PolynomialSplineFunction *self, void *data);
        static PyObject *t_PolynomialSplineFunction_get__n(t_PolynomialSplineFunction *self, void *data);
        static PyObject *t_PolynomialSplineFunction_get__polynomials(t_PolynomialSplineFunction *self, void *data);
        static PyGetSetDef t_PolynomialSplineFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, knots),
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, n),
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, polynomials),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialSplineFunction__methods_[] = {
          DECLARE_METHOD(t_PolynomialSplineFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSplineFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getKnots, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getN, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, isValidPoint, METH_O),
          DECLARE_METHOD(t_PolynomialSplineFunction, polynomialSplineDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialSplineFunction)[] = {
          { Py_tp_methods, t_PolynomialSplineFunction__methods_ },
          { Py_tp_init, (void *) t_PolynomialSplineFunction_init_ },
          { Py_tp_getset, t_PolynomialSplineFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialSplineFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialSplineFunction, t_PolynomialSplineFunction, PolynomialSplineFunction);

        void t_PolynomialSplineFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialSplineFunction), &PY_TYPE_DEF(PolynomialSplineFunction), module, "PolynomialSplineFunction", 0);
        }

        void t_PolynomialSplineFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "class_", make_descriptor(PolynomialSplineFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "wrapfn_", make_descriptor(t_PolynomialSplineFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialSplineFunction::initializeClass, 1)))
            return NULL;
          return t_PolynomialSplineFunction::wrap_Object(PolynomialSplineFunction(((t_PolynomialSplineFunction *) arg)->object.this$));
        }
        static PyObject *t_PolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialSplineFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialSplineFunction_init_(t_PolynomialSplineFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > a1((jobject) NULL);
          PolynomialSplineFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PolynomialSplineFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialSplineFunction_getKnots(t_PolynomialSplineFunction *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getKnots());
          return result.wrap();
        }

        static PyObject *t_PolynomialSplineFunction_getN(t_PolynomialSplineFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialSplineFunction_getPolynomials(t_PolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }

        static PyObject *t_PolynomialSplineFunction_isValidPoint(t_PolynomialSplineFunction *self, PyObject *arg)
        {
          jdouble a0;
          jboolean result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", arg);
          return NULL;
        }

        static PyObject *t_PolynomialSplineFunction_polynomialSplineDerivative(t_PolynomialSplineFunction *self)
        {
          PolynomialSplineFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialSplineDerivative());
          return t_PolynomialSplineFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialSplineFunction_value(t_PolynomialSplineFunction *self, PyObject *args)
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

        static PyObject *t_PolynomialSplineFunction_get__knots(t_PolynomialSplineFunction *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getKnots());
          return value.wrap();
        }

        static PyObject *t_PolynomialSplineFunction_get__n(t_PolynomialSplineFunction *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PolynomialSplineFunction_get__polynomials(t_PolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *OnBoardAntennaInterSatellitesPhaseModifier::mids$ = NULL;
          bool OnBoardAntennaInterSatellitesPhaseModifier::live$ = false;

          jclass OnBoardAntennaInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b651b5ef96594ce8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaInterSatellitesPhaseModifier::OnBoardAntennaInterSatellitesPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b651b5ef96594ce8, a0.this$, a1.this$)) {}

          ::java::util::List OnBoardAntennaInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void OnBoardAntennaInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaInterSatellitesPhaseModifier_init_(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaInterSatellitesPhaseModifier, t_OnBoardAntennaInterSatellitesPhaseModifier, OnBoardAntennaInterSatellitesPhaseModifier);

          void t_OnBoardAntennaInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), &PY_TYPE_DEF(OnBoardAntennaInterSatellitesPhaseModifier), module, "OnBoardAntennaInterSatellitesPhaseModifier", 0);
          }

          void t_OnBoardAntennaInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "class_", make_descriptor(OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaInterSatellitesPhaseModifier::wrap_Object(OnBoardAntennaInterSatellitesPhaseModifier(((t_OnBoardAntennaInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaInterSatellitesPhaseModifier_init_(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OnBoardAntennaInterSatellitesPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OnBoardAntennaInterSatellitesPhaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonOrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitStepInterpolator::class$ = NULL;
        jmethodID *PythonOrekitStepInterpolator::mids$ = NULL;
        bool PythonOrekitStepInterpolator::live$ = false;

        jclass PythonOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCurrentState_9d155cc8314c99cf] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getInterpolatedState_4f0008999861ca31] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPreviousState_9d155cc8314c99cf] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_restrictStep_975f0f3ab8227725] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitStepInterpolator::PythonOrekitStepInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonOrekitStepInterpolator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonOrekitStepInterpolator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonOrekitStepInterpolator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      namespace sampling {
        static PyObject *t_PythonOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitStepInterpolator_init_(t_PythonOrekitStepInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitStepInterpolator_finalize(t_PythonOrekitStepInterpolator *self);
        static PyObject *t_PythonOrekitStepInterpolator_pythonExtension(t_PythonOrekitStepInterpolator *self, PyObject *args);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isForward4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonOrekitStepInterpolator_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonOrekitStepInterpolator_restrictStep7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonOrekitStepInterpolator_get__self(t_PythonOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_PythonOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitStepInterpolator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_PythonOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitStepInterpolator_init_ },
          { Py_tp_getset, t_PythonOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitStepInterpolator, t_PythonOrekitStepInterpolator, PythonOrekitStepInterpolator);

        void t_PythonOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitStepInterpolator), &PY_TYPE_DEF(PythonOrekitStepInterpolator), module, "PythonOrekitStepInterpolator", 1);
        }

        void t_PythonOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "class_", make_descriptor(PythonOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "wrapfn_", make_descriptor(t_PythonOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitStepInterpolator::initializeClass);
          JNINativeMethod methods[] = {
            { "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getCurrentState0 },
            { "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getInterpolatedState1 },
            { "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getPreviousState2 },
            { "isCurrentStateInterpolated", "()Z", (void *) t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3 },
            { "isForward", "()Z", (void *) t_PythonOrekitStepInterpolator_isForward4 },
            { "isPreviousStateInterpolated", "()Z", (void *) t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitStepInterpolator_pythonDecRef6 },
            { "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;", (void *) t_PythonOrekitStepInterpolator_restrictStep7 },
          };
          env->registerNatives(cls, methods, 8);
        }

        static PyObject *t_PythonOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitStepInterpolator::wrap_Object(PythonOrekitStepInterpolator(((t_PythonOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitStepInterpolator_init_(t_PythonOrekitStepInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitStepInterpolator object((jobject) NULL);

          INT_CALL(object = PythonOrekitStepInterpolator());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitStepInterpolator_finalize(t_PythonOrekitStepInterpolator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitStepInterpolator_pythonExtension(t_PythonOrekitStepInterpolator *self, PyObject *args)
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCurrentState", result);
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInterpolatedState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getInterpolatedState", result);
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPreviousState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPreviousState", result);
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

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isCurrentStateInterpolated", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isCurrentStateInterpolated", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isForward4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForward", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForward", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isPreviousStateInterpolated", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isPreviousStateInterpolated", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonOrekitStepInterpolator_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonOrekitStepInterpolator_restrictStep7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::sampling::OrekitStepInterpolator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "restrictStep", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &value))
          {
            throwTypeError("restrictStep", result);
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

        static PyObject *t_PythonOrekitStepInterpolator_get__self(t_PythonOrekitStepInterpolator *self, void *data)
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
#include "org/hipparchus/optim/univariate/BracketFinder.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *BracketFinder::class$ = NULL;
        jmethodID *BracketFinder::mids$ = NULL;
        bool BracketFinder::live$ = false;

        jclass BracketFinder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/BracketFinder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1af1b4c263b48b0c] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFHi_b74f83833fdad017] = env->getMethodID(cls, "getFHi", "()D");
            mids$[mid_getFLo_b74f83833fdad017] = env->getMethodID(cls, "getFLo", "()D");
            mids$[mid_getFMid_b74f83833fdad017] = env->getMethodID(cls, "getFMid", "()D");
            mids$[mid_getHi_b74f83833fdad017] = env->getMethodID(cls, "getHi", "()D");
            mids$[mid_getLo_b74f83833fdad017] = env->getMethodID(cls, "getLo", "()D");
            mids$[mid_getMaxEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getMid_b74f83833fdad017] = env->getMethodID(cls, "getMid", "()D");
            mids$[mid_search_1cf84de2aa39fddf] = env->getMethodID(cls, "search", "(Lorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/optim/nonlinear/scalar/GoalType;DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketFinder::BracketFinder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        BracketFinder::BracketFinder(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1af1b4c263b48b0c, a0, a1)) {}

        jint BracketFinder::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        jdouble BracketFinder::getFHi() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFHi_b74f83833fdad017]);
        }

        jdouble BracketFinder::getFLo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFLo_b74f83833fdad017]);
        }

        jdouble BracketFinder::getFMid() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFMid_b74f83833fdad017]);
        }

        jdouble BracketFinder::getHi() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHi_b74f83833fdad017]);
        }

        jdouble BracketFinder::getLo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLo_b74f83833fdad017]);
        }

        jint BracketFinder::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_55546ef6a647f39b]);
        }

        jdouble BracketFinder::getMid() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMid_b74f83833fdad017]);
        }

        void BracketFinder::search(const ::org::hipparchus::analysis::UnivariateFunction & a0, const ::org::hipparchus::optim::nonlinear::scalar::GoalType & a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_search_1cf84de2aa39fddf], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_BracketFinder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketFinder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BracketFinder_init_(t_BracketFinder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketFinder_getEvaluations(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFHi(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFLo(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFMid(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getHi(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getLo(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getMaxEvaluations(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getMid(t_BracketFinder *self);
        static PyObject *t_BracketFinder_search(t_BracketFinder *self, PyObject *args);
        static PyObject *t_BracketFinder_get__evaluations(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fHi(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fLo(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fMid(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__hi(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__lo(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__maxEvaluations(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__mid(t_BracketFinder *self, void *data);
        static PyGetSetDef t_BracketFinder__fields_[] = {
          DECLARE_GET_FIELD(t_BracketFinder, evaluations),
          DECLARE_GET_FIELD(t_BracketFinder, fHi),
          DECLARE_GET_FIELD(t_BracketFinder, fLo),
          DECLARE_GET_FIELD(t_BracketFinder, fMid),
          DECLARE_GET_FIELD(t_BracketFinder, hi),
          DECLARE_GET_FIELD(t_BracketFinder, lo),
          DECLARE_GET_FIELD(t_BracketFinder, maxEvaluations),
          DECLARE_GET_FIELD(t_BracketFinder, mid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketFinder__methods_[] = {
          DECLARE_METHOD(t_BracketFinder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketFinder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketFinder, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFHi, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFLo, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFMid, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getHi, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getLo, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getMid, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, search, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketFinder)[] = {
          { Py_tp_methods, t_BracketFinder__methods_ },
          { Py_tp_init, (void *) t_BracketFinder_init_ },
          { Py_tp_getset, t_BracketFinder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketFinder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketFinder, t_BracketFinder, BracketFinder);

        void t_BracketFinder::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketFinder), &PY_TYPE_DEF(BracketFinder), module, "BracketFinder", 0);
        }

        void t_BracketFinder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "class_", make_descriptor(BracketFinder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "wrapfn_", make_descriptor(t_BracketFinder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketFinder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketFinder::initializeClass, 1)))
            return NULL;
          return t_BracketFinder::wrap_Object(BracketFinder(((t_BracketFinder *) arg)->object.this$));
        }
        static PyObject *t_BracketFinder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketFinder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BracketFinder_init_(t_BracketFinder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BracketFinder object((jobject) NULL);

              INT_CALL(object = BracketFinder());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              BracketFinder object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = BracketFinder(a0, a1));
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

        static PyObject *t_BracketFinder_getEvaluations(t_BracketFinder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketFinder_getFHi(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFHi());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getFLo(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFLo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getFMid(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFMid());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getHi(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHi());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getLo(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getMaxEvaluations(t_BracketFinder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketFinder_getMid(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMid());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_search(t_BracketFinder *self, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::scalar::GoalType a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          jdouble a3;

          if (!parseArgs(args, "kKDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::optim::nonlinear::scalar::GoalType::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::parameters_, &a2, &a3))
          {
            OBJ_CALL(self->object.search(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "search", args);
          return NULL;
        }

        static PyObject *t_BracketFinder_get__evaluations(t_BracketFinder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketFinder_get__fHi(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFHi());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__fLo(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFLo());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__fMid(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFMid());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__hi(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHi());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__lo(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLo());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__maxEvaluations(t_BracketFinder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketFinder_get__mid(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMid());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventState$EventOccurrence::class$ = NULL;
        jmethodID *FieldEventState$EventOccurrence::mids$ = NULL;
        bool FieldEventState$EventOccurrence::live$ = false;

        jclass FieldEventState$EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventState$EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAction_0afc8c14772bbac8] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getNewState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getStopDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getStopDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action FieldEventState$EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_0afc8c14772bbac8]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldEventState$EventOccurrence::getNewState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getNewState_fba6d56f8dbc98d0]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldEventState$EventOccurrence::getStopDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopDate_fa23a4301b9c83e7]));
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
        static PyObject *t_FieldEventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState$EventOccurrence_of_(t_FieldEventState$EventOccurrence *self, PyObject *args);
        static PyObject *t_FieldEventState$EventOccurrence_getAction(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_getNewState(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_getStopDate(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_get__action(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__newState(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__stopDate(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__parameters_(t_FieldEventState$EventOccurrence *self, void *data);
        static PyGetSetDef t_FieldEventState$EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, action),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, newState),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, stopDate),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState$EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getStopDate, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState$EventOccurrence)[] = {
          { Py_tp_methods, t_FieldEventState$EventOccurrence__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventState$EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState$EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState$EventOccurrence, t_FieldEventState$EventOccurrence, FieldEventState$EventOccurrence);
        PyObject *t_FieldEventState$EventOccurrence::wrap_Object(const FieldEventState$EventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState$EventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState$EventOccurrence *self = (t_FieldEventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventState$EventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState$EventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState$EventOccurrence *self = (t_FieldEventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventState$EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState$EventOccurrence), &PY_TYPE_DEF(FieldEventState$EventOccurrence), module, "FieldEventState$EventOccurrence", 0);
        }

        void t_FieldEventState$EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "class_", make_descriptor(FieldEventState$EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "wrapfn_", make_descriptor(t_FieldEventState$EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState$EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_FieldEventState$EventOccurrence::wrap_Object(FieldEventState$EventOccurrence(((t_FieldEventState$EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState$EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState$EventOccurrence_of_(t_FieldEventState$EventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getAction(t_FieldEventState$EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getNewState(t_FieldEventState$EventOccurrence *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getStopDate(t_FieldEventState$EventOccurrence *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldEventState$EventOccurrence_get__parameters_(t_FieldEventState$EventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__action(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__newState(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__stopDate(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *AbstractCovarianceMatrixProvider::class$ = NULL;
        jmethodID *AbstractCovarianceMatrixProvider::mids$ = NULL;
        bool AbstractCovarianceMatrixProvider::live$ = false;

        jclass AbstractCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInitialCovarianceMatrix_b7aa5791b069a41f] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix AbstractCovarianceMatrixProvider::getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialCovarianceMatrix_b7aa5791b069a41f], a0.this$));
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
        static PyObject *t_AbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractCovarianceMatrixProvider_getInitialCovarianceMatrix(t_AbstractCovarianceMatrixProvider *self, PyObject *arg);

        static PyMethodDef t_AbstractCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, getInitialCovarianceMatrix, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_AbstractCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractCovarianceMatrixProvider, t_AbstractCovarianceMatrixProvider, AbstractCovarianceMatrixProvider);

        void t_AbstractCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractCovarianceMatrixProvider), &PY_TYPE_DEF(AbstractCovarianceMatrixProvider), module, "AbstractCovarianceMatrixProvider", 0);
        }

        void t_AbstractCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "class_", make_descriptor(AbstractCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_AbstractCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_AbstractCovarianceMatrixProvider::wrap_Object(AbstractCovarianceMatrixProvider(((t_AbstractCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_AbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractCovarianceMatrixProvider_getInitialCovarianceMatrix(t_AbstractCovarianceMatrixProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInitialCovarianceMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInitialCovarianceMatrix", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldEphemerisGenerator::class$ = NULL;
      jmethodID *FieldEphemerisGenerator::mids$ = NULL;
      bool FieldEphemerisGenerator::live$ = false;

      jclass FieldEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getGeneratedEphemeris_a6ef4ff996c2247f] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::propagation::FieldBoundedPropagator FieldEphemerisGenerator::getGeneratedEphemeris() const
      {
        return ::org::orekit::propagation::FieldBoundedPropagator(env->callObjectMethod(this$, mids$[mid_getGeneratedEphemeris_a6ef4ff996c2247f]));
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
      static PyObject *t_FieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEphemerisGenerator_of_(t_FieldEphemerisGenerator *self, PyObject *args);
      static PyObject *t_FieldEphemerisGenerator_getGeneratedEphemeris(t_FieldEphemerisGenerator *self);
      static PyObject *t_FieldEphemerisGenerator_get__generatedEphemeris(t_FieldEphemerisGenerator *self, void *data);
      static PyObject *t_FieldEphemerisGenerator_get__parameters_(t_FieldEphemerisGenerator *self, void *data);
      static PyGetSetDef t_FieldEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEphemerisGenerator, generatedEphemeris),
        DECLARE_GET_FIELD(t_FieldEphemerisGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_FieldEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, getGeneratedEphemeris, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEphemerisGenerator)[] = {
        { Py_tp_methods, t_FieldEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEphemerisGenerator, t_FieldEphemerisGenerator, FieldEphemerisGenerator);
      PyObject *t_FieldEphemerisGenerator::wrap_Object(const FieldEphemerisGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEphemerisGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEphemerisGenerator *self = (t_FieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEphemerisGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEphemerisGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEphemerisGenerator *self = (t_FieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEphemerisGenerator), &PY_TYPE_DEF(FieldEphemerisGenerator), module, "FieldEphemerisGenerator", 0);
      }

      void t_FieldEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "class_", make_descriptor(FieldEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "wrapfn_", make_descriptor(t_FieldEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_FieldEphemerisGenerator::wrap_Object(FieldEphemerisGenerator(((t_FieldEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_FieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEphemerisGenerator_of_(t_FieldEphemerisGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldEphemerisGenerator_getGeneratedEphemeris(t_FieldEphemerisGenerator *self)
      {
        ::org::orekit::propagation::FieldBoundedPropagator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_FieldBoundedPropagator::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldEphemerisGenerator_get__parameters_(t_FieldEphemerisGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEphemerisGenerator_get__generatedEphemeris(t_FieldEphemerisGenerator *self, void *data)
      {
        ::org::orekit::propagation::FieldBoundedPropagator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_FieldBoundedPropagator::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarS::class$ = NULL;
          jmethodID *FieldCopolarS::mids$ = NULL;
          bool FieldCopolarS::live$ = false;

          jclass FieldCopolarS::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarS");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cs_81520b552cb3fa26] = env->getMethodID(cls, "cs", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_ds_81520b552cb3fa26] = env->getMethodID(cls, "ds", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_ns_81520b552cb3fa26] = env->getMethodID(cls, "ns", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::cs() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cs_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::ds() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_ds_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::ns() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_ns_81520b552cb3fa26]));
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
          static PyObject *t_FieldCopolarS_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarS_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarS_of_(t_FieldCopolarS *self, PyObject *args);
          static PyObject *t_FieldCopolarS_cs(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_ds(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_ns(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_get__parameters_(t_FieldCopolarS *self, void *data);
          static PyGetSetDef t_FieldCopolarS__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarS, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarS__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarS, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarS, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarS, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarS, cs, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarS, ds, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarS, ns, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarS)[] = {
            { Py_tp_methods, t_FieldCopolarS__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarS__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarS)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarS, t_FieldCopolarS, FieldCopolarS);
          PyObject *t_FieldCopolarS::wrap_Object(const FieldCopolarS& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarS::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarS *self = (t_FieldCopolarS *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarS::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarS::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarS *self = (t_FieldCopolarS *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarS::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarS), &PY_TYPE_DEF(FieldCopolarS), module, "FieldCopolarS", 0);
          }

          void t_FieldCopolarS::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "class_", make_descriptor(FieldCopolarS::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "wrapfn_", make_descriptor(t_FieldCopolarS::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarS_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarS::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarS::wrap_Object(FieldCopolarS(((t_FieldCopolarS *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarS_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarS::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarS_of_(t_FieldCopolarS *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarS_cs(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cs());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarS_ds(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.ds());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarS_ns(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.ns());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarS_get__parameters_(t_FieldCopolarS *self, void *data)
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
#include "org/orekit/files/ilrs/PythonILRSHeader.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *PythonILRSHeader::class$ = NULL;
        jmethodID *PythonILRSHeader::mids$ = NULL;
        bool PythonILRSHeader::live$ = false;

        jclass PythonILRSHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/PythonILRSHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonILRSHeader::PythonILRSHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonILRSHeader::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonILRSHeader::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonILRSHeader::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonILRSHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonILRSHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonILRSHeader_init_(t_PythonILRSHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonILRSHeader_finalize(t_PythonILRSHeader *self);
        static PyObject *t_PythonILRSHeader_pythonExtension(t_PythonILRSHeader *self, PyObject *args);
        static void JNICALL t_PythonILRSHeader_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonILRSHeader_get__self(t_PythonILRSHeader *self, void *data);
        static PyGetSetDef t_PythonILRSHeader__fields_[] = {
          DECLARE_GET_FIELD(t_PythonILRSHeader, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonILRSHeader__methods_[] = {
          DECLARE_METHOD(t_PythonILRSHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonILRSHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonILRSHeader, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonILRSHeader, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonILRSHeader)[] = {
          { Py_tp_methods, t_PythonILRSHeader__methods_ },
          { Py_tp_init, (void *) t_PythonILRSHeader_init_ },
          { Py_tp_getset, t_PythonILRSHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonILRSHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(PythonILRSHeader, t_PythonILRSHeader, PythonILRSHeader);

        void t_PythonILRSHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonILRSHeader), &PY_TYPE_DEF(PythonILRSHeader), module, "PythonILRSHeader", 1);
        }

        void t_PythonILRSHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "class_", make_descriptor(PythonILRSHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "wrapfn_", make_descriptor(t_PythonILRSHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonILRSHeader::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonILRSHeader_pythonDecRef0 },
          };
          env->registerNatives(cls, methods, 1);
        }

        static PyObject *t_PythonILRSHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonILRSHeader::initializeClass, 1)))
            return NULL;
          return t_PythonILRSHeader::wrap_Object(PythonILRSHeader(((t_PythonILRSHeader *) arg)->object.this$));
        }
        static PyObject *t_PythonILRSHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonILRSHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonILRSHeader_init_(t_PythonILRSHeader *self, PyObject *args, PyObject *kwds)
        {
          PythonILRSHeader object((jobject) NULL);

          INT_CALL(object = PythonILRSHeader());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonILRSHeader_finalize(t_PythonILRSHeader *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonILRSHeader_pythonExtension(t_PythonILRSHeader *self, PyObject *args)
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

        static void JNICALL t_PythonILRSHeader_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonILRSHeader::mids$[PythonILRSHeader::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonILRSHeader::mids$[PythonILRSHeader::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonILRSHeader_get__self(t_PythonILRSHeader *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRDHeader.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$CRDDataBlock::class$ = NULL;
        jmethodID *CRD$CRDDataBlock::mids$ = NULL;
        bool CRD$CRDDataBlock::live$ = false;

        jclass CRD$CRDDataBlock::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$CRDDataBlock");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addAnglesData_fbc37bc61c949d81] = env->getMethodID(cls, "addAnglesData", "(Lorg/orekit/files/ilrs/CRD$AnglesMeasurement;)V");
            mids$[mid_addCalibrationData_63900ae0399b7890] = env->getMethodID(cls, "addCalibrationData", "(Lorg/orekit/files/ilrs/CRD$Calibration;)V");
            mids$[mid_addCalibrationDetailData_5db45890b1fb8d37] = env->getMethodID(cls, "addCalibrationDetailData", "(Lorg/orekit/files/ilrs/CRD$CalibrationDetail;)V");
            mids$[mid_addMeteoData_968e9dab248d11bf] = env->getMethodID(cls, "addMeteoData", "(Lorg/orekit/files/ilrs/CRD$MeteorologicalMeasurement;)V");
            mids$[mid_addRangeData_e3d6d95f6db75380] = env->getMethodID(cls, "addRangeData", "(Lorg/orekit/files/ilrs/CRD$RangeMeasurement;)V");
            mids$[mid_addRangeSupplementData_d1790059222d58bd] = env->getMethodID(cls, "addRangeSupplementData", "(Lorg/orekit/files/ilrs/CRD$RangeSupplement;)V");
            mids$[mid_addSessionStatisticsData_b86eb554edcc3354] = env->getMethodID(cls, "addSessionStatisticsData", "(Lorg/orekit/files/ilrs/CRD$SessionStatistics;)V");
            mids$[mid_getAnglesData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAnglesData", "()Ljava/util/List;");
            mids$[mid_getCalibrationData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCalibrationData", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCalibrationDetailData", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailRecords_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCalibrationDetailRecords", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailRecords_abe6e889bc24795d] = env->getMethodID(cls, "getCalibrationDetailRecords", "(Ljava/lang/String;)Ljava/util/List;");
            mids$[mid_getCalibrationRecords_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCalibrationRecords", "()Ljava/util/List;");
            mids$[mid_getCalibrationRecords_abe6e889bc24795d] = env->getMethodID(cls, "getCalibrationRecords", "(Ljava/lang/String;)Ljava/util/List;");
            mids$[mid_getConfigurationRecords_4d6fc0a1d2e05f0e] = env->getMethodID(cls, "getConfigurationRecords", "()Lorg/orekit/files/ilrs/CRDConfiguration;");
            mids$[mid_getHeader_281c24c358e171c9] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ilrs/CRDHeader;");
            mids$[mid_getMeteoData_f3d4ff867f33b20a] = env->getMethodID(cls, "getMeteoData", "()Lorg/orekit/files/ilrs/CRD$Meteo;");
            mids$[mid_getRangeData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getRangeData", "()Ljava/util/List;");
            mids$[mid_getRangeSupplementData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getRangeSupplementData", "()Ljava/util/List;");
            mids$[mid_getSessionStatisticsData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSessionStatisticsData", "()Ljava/util/List;");
            mids$[mid_getSessionStatisticsRecord_1af4734de6ce8980] = env->getMethodID(cls, "getSessionStatisticsRecord", "()Lorg/orekit/files/ilrs/CRD$SessionStatistics;");
            mids$[mid_getSessionStatisticsRecord_a26d4619c23066d9] = env->getMethodID(cls, "getSessionStatisticsRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRD$SessionStatistics;");
            mids$[mid_getWavelength_e6d3d030f7d2838e] = env->getMethodID(cls, "getWavelength", "(Lorg/orekit/files/ilrs/CRD$RangeMeasurement;)D");
            mids$[mid_setConfigurationRecords_8d91c1ee735c647f] = env->getMethodID(cls, "setConfigurationRecords", "(Lorg/orekit/files/ilrs/CRDConfiguration;)V");
            mids$[mid_setHeader_44b4531a0cdbd508] = env->getMethodID(cls, "setHeader", "(Lorg/orekit/files/ilrs/CRDHeader;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$CRDDataBlock::CRD$CRDDataBlock() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void CRD$CRDDataBlock::addAnglesData(const ::org::orekit::files::ilrs::CRD$AnglesMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAnglesData_fbc37bc61c949d81], a0.this$);
        }

        void CRD$CRDDataBlock::addCalibrationData(const ::org::orekit::files::ilrs::CRD$Calibration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCalibrationData_63900ae0399b7890], a0.this$);
        }

        void CRD$CRDDataBlock::addCalibrationDetailData(const ::org::orekit::files::ilrs::CRD$CalibrationDetail & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCalibrationDetailData_5db45890b1fb8d37], a0.this$);
        }

        void CRD$CRDDataBlock::addMeteoData(const ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMeteoData_968e9dab248d11bf], a0.this$);
        }

        void CRD$CRDDataBlock::addRangeData(const ::org::orekit::files::ilrs::CRD$RangeMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addRangeData_e3d6d95f6db75380], a0.this$);
        }

        void CRD$CRDDataBlock::addRangeSupplementData(const ::org::orekit::files::ilrs::CRD$RangeSupplement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addRangeSupplementData_d1790059222d58bd], a0.this$);
        }

        void CRD$CRDDataBlock::addSessionStatisticsData(const ::org::orekit::files::ilrs::CRD$SessionStatistics & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSessionStatisticsData_b86eb554edcc3354], a0.this$);
        }

        ::java::util::List CRD$CRDDataBlock::getAnglesData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAnglesData_e62d3bb06d56d7e3]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationData_e62d3bb06d56d7e3]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailData_e62d3bb06d56d7e3]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailRecords_e62d3bb06d56d7e3]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailRecords(const ::java::lang::String & a0) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailRecords_abe6e889bc24795d], a0.this$));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationRecords_e62d3bb06d56d7e3]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationRecords(const ::java::lang::String & a0) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationRecords_abe6e889bc24795d], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration CRD$CRDDataBlock::getConfigurationRecords() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration(env->callObjectMethod(this$, mids$[mid_getConfigurationRecords_4d6fc0a1d2e05f0e]));
        }

        ::org::orekit::files::ilrs::CRDHeader CRD$CRDDataBlock::getHeader() const
        {
          return ::org::orekit::files::ilrs::CRDHeader(env->callObjectMethod(this$, mids$[mid_getHeader_281c24c358e171c9]));
        }

        ::org::orekit::files::ilrs::CRD$Meteo CRD$CRDDataBlock::getMeteoData() const
        {
          return ::org::orekit::files::ilrs::CRD$Meteo(env->callObjectMethod(this$, mids$[mid_getMeteoData_f3d4ff867f33b20a]));
        }

        ::java::util::List CRD$CRDDataBlock::getRangeData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRangeData_e62d3bb06d56d7e3]));
        }

        ::java::util::List CRD$CRDDataBlock::getRangeSupplementData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRangeSupplementData_e62d3bb06d56d7e3]));
        }

        ::java::util::List CRD$CRDDataBlock::getSessionStatisticsData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsData_e62d3bb06d56d7e3]));
        }

        ::org::orekit::files::ilrs::CRD$SessionStatistics CRD$CRDDataBlock::getSessionStatisticsRecord() const
        {
          return ::org::orekit::files::ilrs::CRD$SessionStatistics(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsRecord_1af4734de6ce8980]));
        }

        ::org::orekit::files::ilrs::CRD$SessionStatistics CRD$CRDDataBlock::getSessionStatisticsRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRD$SessionStatistics(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsRecord_a26d4619c23066d9], a0.this$));
        }

        jdouble CRD$CRDDataBlock::getWavelength(const ::org::orekit::files::ilrs::CRD$RangeMeasurement & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWavelength_e6d3d030f7d2838e], a0.this$);
        }

        void CRD$CRDDataBlock::setConfigurationRecords(const ::org::orekit::files::ilrs::CRDConfiguration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConfigurationRecords_8d91c1ee735c647f], a0.this$);
        }

        void CRD$CRDDataBlock::setHeader(const ::org::orekit::files::ilrs::CRDHeader & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHeader_44b4531a0cdbd508], a0.this$);
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
        static PyObject *t_CRD$CRDDataBlock_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$CRDDataBlock_init_(t_CRD$CRDDataBlock *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$CRDDataBlock_addAnglesData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addCalibrationData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addCalibrationDetailData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addMeteoData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addRangeData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addRangeSupplementData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addSessionStatisticsData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_getAnglesData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailRecords(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationRecords(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getConfigurationRecords(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getHeader(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getMeteoData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getRangeData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getRangeSupplementData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsRecord(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getWavelength(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_setConfigurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_setHeader(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_get__anglesData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailRecords(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationRecords(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__configurationRecords(t_CRD$CRDDataBlock *self, void *data);
        static int t_CRD$CRDDataBlock_set__configurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__header(t_CRD$CRDDataBlock *self, void *data);
        static int t_CRD$CRDDataBlock_set__header(t_CRD$CRDDataBlock *self, PyObject *arg, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__meteoData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__rangeData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__rangeSupplementData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsRecord(t_CRD$CRDDataBlock *self, void *data);
        static PyGetSetDef t_CRD$CRDDataBlock__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, anglesData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationDetailData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationDetailRecords),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationRecords),
          DECLARE_GETSET_FIELD(t_CRD$CRDDataBlock, configurationRecords),
          DECLARE_GETSET_FIELD(t_CRD$CRDDataBlock, header),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, meteoData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, rangeData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, rangeSupplementData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, sessionStatisticsData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, sessionStatisticsRecord),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$CRDDataBlock__methods_[] = {
          DECLARE_METHOD(t_CRD$CRDDataBlock, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addAnglesData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addCalibrationData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addCalibrationDetailData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addMeteoData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addRangeData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addRangeSupplementData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addSessionStatisticsData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getAnglesData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationDetailData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationDetailRecords, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationRecords, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getConfigurationRecords, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getMeteoData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getRangeData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getRangeSupplementData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getSessionStatisticsData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getSessionStatisticsRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getWavelength, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, setConfigurationRecords, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, setHeader, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$CRDDataBlock)[] = {
          { Py_tp_methods, t_CRD$CRDDataBlock__methods_ },
          { Py_tp_init, (void *) t_CRD$CRDDataBlock_init_ },
          { Py_tp_getset, t_CRD$CRDDataBlock__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$CRDDataBlock)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$CRDDataBlock, t_CRD$CRDDataBlock, CRD$CRDDataBlock);

        void t_CRD$CRDDataBlock::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$CRDDataBlock), &PY_TYPE_DEF(CRD$CRDDataBlock), module, "CRD$CRDDataBlock", 0);
        }

        void t_CRD$CRDDataBlock::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "class_", make_descriptor(CRD$CRDDataBlock::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "wrapfn_", make_descriptor(t_CRD$CRDDataBlock::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$CRDDataBlock_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$CRDDataBlock::initializeClass, 1)))
            return NULL;
          return t_CRD$CRDDataBlock::wrap_Object(CRD$CRDDataBlock(((t_CRD$CRDDataBlock *) arg)->object.this$));
        }
        static PyObject *t_CRD$CRDDataBlock_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$CRDDataBlock::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$CRDDataBlock_init_(t_CRD$CRDDataBlock *self, PyObject *args, PyObject *kwds)
        {
          CRD$CRDDataBlock object((jobject) NULL);

          INT_CALL(object = CRD$CRDDataBlock());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRD$CRDDataBlock_addAnglesData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$AnglesMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$AnglesMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAnglesData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAnglesData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addCalibrationData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$Calibration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$Calibration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCalibrationData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCalibrationData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addCalibrationDetailData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$CalibrationDetail a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$CalibrationDetail::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCalibrationDetailData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCalibrationDetailData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addMeteoData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addMeteoData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMeteoData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addRangeData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addRangeData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addRangeData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addRangeSupplementData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeSupplement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeSupplement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addRangeSupplementData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addRangeSupplementData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addSessionStatisticsData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$SessionStatistics a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$SessionStatistics::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addSessionStatisticsData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSessionStatisticsData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getAnglesData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAnglesData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$AnglesMeasurement));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCalibrationData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCalibrationDetailData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailRecords(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationDetailRecords());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationDetailRecords(a0));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationDetailRecords", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationRecords(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationRecords());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationRecords(a0));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationRecords", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getConfigurationRecords(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRDConfiguration result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationRecords());
          return ::org::orekit::files::ilrs::t_CRDConfiguration::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getHeader(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRDHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CRDHeader::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getMeteoData(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRD$Meteo result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeteoData());
          return ::org::orekit::files::ilrs::t_CRD$Meteo::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getRangeData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$RangeMeasurement));
        }

        static PyObject *t_CRD$CRDDataBlock_getRangeSupplementData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeSupplementData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$RangeSupplement));
        }

        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSessionStatisticsData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$SessionStatistics));
        }

        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsRecord(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRD$SessionStatistics result((jobject) NULL);
              OBJ_CALL(result = self->object.getSessionStatisticsRecord());
              return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRD$SessionStatistics result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getSessionStatisticsRecord(a0));
                return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSessionStatisticsRecord", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getWavelength(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeMeasurement a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getWavelength(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_setConfigurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDConfiguration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setConfigurationRecords(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConfigurationRecords", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_setHeader(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDHeader a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDHeader::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setHeader(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHeader", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_get__anglesData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAnglesData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationDetailData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationDetailRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__configurationRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationRecords());
          return ::org::orekit::files::ilrs::t_CRDConfiguration::wrap_Object(value);
        }
        static int t_CRD$CRDDataBlock_set__configurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::ilrs::CRDConfiguration value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration::initializeClass, &value))
            {
              INT_CALL(self->object.setConfigurationRecords(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "configurationRecords", arg);
          return -1;
        }

        static PyObject *t_CRD$CRDDataBlock_get__header(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CRDHeader::wrap_Object(value);
        }
        static int t_CRD$CRDDataBlock_set__header(t_CRD$CRDDataBlock *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::ilrs::CRDHeader value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDHeader::initializeClass, &value))
            {
              INT_CALL(self->object.setHeader(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "header", arg);
          return -1;
        }

        static PyObject *t_CRD$CRDDataBlock_get__meteoData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRD$Meteo value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteoData());
          return ::org::orekit::files::ilrs::t_CRD$Meteo::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__rangeData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__rangeSupplementData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeSupplementData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSessionStatisticsData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsRecord(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRD$SessionStatistics value((jobject) NULL);
          OBJ_CALL(value = self->object.getSessionStatisticsRecord());
          return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundReceiverCommonParametersWithoutDerivatives::class$ = NULL;
        jmethodID *GroundReceiverCommonParametersWithoutDerivatives::mids$ = NULL;
        bool GroundReceiverCommonParametersWithoutDerivatives::live$ = false;

        jclass GroundReceiverCommonParametersWithoutDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_07c57a746e2cf86f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Transform;Lorg/orekit/utils/TimeStampedPVCoordinates;DLorg/orekit/propagation/SpacecraftState;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getOffsetToInertialDownlink_417755e67b7f769d] = env->getMethodID(cls, "getOffsetToInertialDownlink", "()Lorg/orekit/frames/Transform;");
            mids$[mid_getState_9d155cc8314c99cf] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStationDownlink_136cc8ba23b21c29] = env->getMethodID(cls, "getStationDownlink", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getTauD_b74f83833fdad017] = env->getMethodID(cls, "getTauD", "()D");
            mids$[mid_getTransitPV_136cc8ba23b21c29] = env->getMethodID(cls, "getTransitPV", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getTransitState_9d155cc8314c99cf] = env->getMethodID(cls, "getTransitState", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverCommonParametersWithoutDerivatives::GroundReceiverCommonParametersWithoutDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Transform & a1, const ::org::orekit::utils::TimeStampedPVCoordinates & a2, jdouble a3, const ::org::orekit::propagation::SpacecraftState & a4, const ::org::orekit::utils::TimeStampedPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07c57a746e2cf86f, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5.this$)) {}

        ::org::orekit::frames::Transform GroundReceiverCommonParametersWithoutDerivatives::getOffsetToInertialDownlink() const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertialDownlink_417755e67b7f769d]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithoutDerivatives::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_9d155cc8314c99cf]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates GroundReceiverCommonParametersWithoutDerivatives::getStationDownlink() const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getStationDownlink_136cc8ba23b21c29]));
        }

        jdouble GroundReceiverCommonParametersWithoutDerivatives::getTauD() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTauD_b74f83833fdad017]);
        }

        ::org::orekit::utils::TimeStampedPVCoordinates GroundReceiverCommonParametersWithoutDerivatives::getTransitPV() const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTransitPV_136cc8ba23b21c29]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithoutDerivatives::getTransitState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getTransitState_9d155cc8314c99cf]));
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
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundReceiverCommonParametersWithoutDerivatives_init_(t_GroundReceiverCommonParametersWithoutDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getState(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTauD(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTransitState(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__state(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__tauD(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__transitState(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyGetSetDef t_GroundReceiverCommonParametersWithoutDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, offsetToInertialDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, state),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, stationDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, tauD),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, transitPV),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, transitState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundReceiverCommonParametersWithoutDerivatives__methods_[] = {
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getOffsetToInertialDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getState, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getStationDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getTauD, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getTransitPV, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getTransitState, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundReceiverCommonParametersWithoutDerivatives)[] = {
          { Py_tp_methods, t_GroundReceiverCommonParametersWithoutDerivatives__methods_ },
          { Py_tp_init, (void *) t_GroundReceiverCommonParametersWithoutDerivatives_init_ },
          { Py_tp_getset, t_GroundReceiverCommonParametersWithoutDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundReceiverCommonParametersWithoutDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundReceiverCommonParametersWithoutDerivatives, t_GroundReceiverCommonParametersWithoutDerivatives, GroundReceiverCommonParametersWithoutDerivatives);

        void t_GroundReceiverCommonParametersWithoutDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundReceiverCommonParametersWithoutDerivatives), &PY_TYPE_DEF(GroundReceiverCommonParametersWithoutDerivatives), module, "GroundReceiverCommonParametersWithoutDerivatives", 0);
        }

        void t_GroundReceiverCommonParametersWithoutDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithoutDerivatives), "class_", make_descriptor(GroundReceiverCommonParametersWithoutDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithoutDerivatives), "wrapfn_", make_descriptor(t_GroundReceiverCommonParametersWithoutDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithoutDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundReceiverCommonParametersWithoutDerivatives::initializeClass, 1)))
            return NULL;
          return t_GroundReceiverCommonParametersWithoutDerivatives::wrap_Object(GroundReceiverCommonParametersWithoutDerivatives(((t_GroundReceiverCommonParametersWithoutDerivatives *) arg)->object.this$));
        }
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundReceiverCommonParametersWithoutDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundReceiverCommonParametersWithoutDerivatives_init_(t_GroundReceiverCommonParametersWithoutDerivatives *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::frames::Transform a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates a2((jobject) NULL);
          jdouble a3;
          ::org::orekit::propagation::SpacecraftState a4((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates a5((jobject) NULL);
          GroundReceiverCommonParametersWithoutDerivatives object((jobject) NULL);

          if (!parseArgs(args, "kkkDkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GroundReceiverCommonParametersWithoutDerivatives(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          ::org::orekit::frames::Transform result((jobject) NULL);
          OBJ_CALL(result = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_Transform::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getState(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTauD(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTauD());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTransitState(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          ::org::orekit::frames::Transform value((jobject) NULL);
          OBJ_CALL(value = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_Transform::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__state(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__tauD(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTauD());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__transitState(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *UnivariateInterpolator::class$ = NULL;
        jmethodID *UnivariateInterpolator::mids$ = NULL;
        bool UnivariateInterpolator::live$ = false;

        jclass UnivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/UnivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_d166503635bf6802] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::UnivariateFunction UnivariateInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d166503635bf6802], a0.this$, a1.this$));
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
        static PyObject *t_UnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateInterpolator_interpolate(t_UnivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_UnivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_UnivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateInterpolator)[] = {
          { Py_tp_methods, t_UnivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateInterpolator, t_UnivariateInterpolator, UnivariateInterpolator);

        void t_UnivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateInterpolator), &PY_TYPE_DEF(UnivariateInterpolator), module, "UnivariateInterpolator", 0);
        }

        void t_UnivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "class_", make_descriptor(UnivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "wrapfn_", make_descriptor(t_UnivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_UnivariateInterpolator::wrap_Object(UnivariateInterpolator(((t_UnivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateInterpolator_interpolate(t_UnivariateInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ManBasis::class$ = NULL;
              jmethodID *ManBasis::mids$ = NULL;
              bool ManBasis::live$ = false;
              ManBasis *ManBasis::ANTICIPATED = NULL;
              ManBasis *ManBasis::CANDIDATE = NULL;
              ManBasis *ManBasis::DETERMINED_OD = NULL;
              ManBasis *ManBasis::DETERMINED_TLM = NULL;
              ManBasis *ManBasis::OTHER = NULL;
              ManBasis *ManBasis::PLANNED = NULL;
              ManBasis *ManBasis::SIMULATED = NULL;

              jclass ManBasis::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ManBasis");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_c4de497599612cf6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");
                  mids$[mid_values_ff909fd447627faf] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANTICIPATED = new ManBasis(env->getStaticObjectField(cls, "ANTICIPATED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  CANDIDATE = new ManBasis(env->getStaticObjectField(cls, "CANDIDATE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  DETERMINED_OD = new ManBasis(env->getStaticObjectField(cls, "DETERMINED_OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  DETERMINED_TLM = new ManBasis(env->getStaticObjectField(cls, "DETERMINED_TLM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  OTHER = new ManBasis(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  PLANNED = new ManBasis(env->getStaticObjectField(cls, "PLANNED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  SIMULATED = new ManBasis(env->getStaticObjectField(cls, "SIMULATED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ManBasis ManBasis::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManBasis(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c4de497599612cf6], a0.this$));
              }

              JArray< ManBasis > ManBasis::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManBasis >(env->callStaticObjectMethod(cls, mids$[mid_values_ff909fd447627faf]));
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
              static PyObject *t_ManBasis_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManBasis_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManBasis_of_(t_ManBasis *self, PyObject *args);
              static PyObject *t_ManBasis_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManBasis_values(PyTypeObject *type);
              static PyObject *t_ManBasis_get__parameters_(t_ManBasis *self, void *data);
              static PyGetSetDef t_ManBasis__fields_[] = {
                DECLARE_GET_FIELD(t_ManBasis, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManBasis__methods_[] = {
                DECLARE_METHOD(t_ManBasis, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManBasis, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManBasis)[] = {
                { Py_tp_methods, t_ManBasis__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManBasis__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManBasis)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManBasis, t_ManBasis, ManBasis);
              PyObject *t_ManBasis::wrap_Object(const ManBasis& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManBasis::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManBasis *self = (t_ManBasis *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManBasis::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManBasis::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManBasis *self = (t_ManBasis *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManBasis::install(PyObject *module)
              {
                installType(&PY_TYPE(ManBasis), &PY_TYPE_DEF(ManBasis), module, "ManBasis", 0);
              }

              void t_ManBasis::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "class_", make_descriptor(ManBasis::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "wrapfn_", make_descriptor(t_ManBasis::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManBasis::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "ANTICIPATED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::ANTICIPATED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "CANDIDATE", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::CANDIDATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "DETERMINED_OD", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::DETERMINED_OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "DETERMINED_TLM", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::DETERMINED_TLM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "OTHER", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::OTHER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "PLANNED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::PLANNED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "SIMULATED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::SIMULATED)));
              }

              static PyObject *t_ManBasis_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManBasis::initializeClass, 1)))
                  return NULL;
                return t_ManBasis::wrap_Object(ManBasis(((t_ManBasis *) arg)->object.this$));
              }
              static PyObject *t_ManBasis_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManBasis::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManBasis_of_(t_ManBasis *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManBasis_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManBasis result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::valueOf(a0));
                  return t_ManBasis::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManBasis_values(PyTypeObject *type)
              {
                JArray< ManBasis > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::values());
                return JArray<jobject>(result.this$).wrap(t_ManBasis::wrap_jobject);
              }
              static PyObject *t_ManBasis_get__parameters_(t_ManBasis *self, void *data)
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
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalMatricesHarvester.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalMatricesHarvester::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalMatricesHarvester::mids$ = NULL;
        bool PythonAbstractAnalyticalMatricesHarvester::live$ = false;

        jclass PythonAbstractAnalyticalMatricesHarvester::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalMatricesHarvester");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_785d8bc651853d9a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/AbstractAnalyticalPropagator;Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getGradientConverter_3c9b6f24c90a46d6] = env->getMethodID(cls, "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalMatricesHarvester::PythonAbstractAnalyticalMatricesHarvester(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator & a0, const ::java::lang::String & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester(env->newObject(initializeClass, &mids$, mid_init$_785d8bc651853d9a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void PythonAbstractAnalyticalMatricesHarvester::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractAnalyticalMatricesHarvester::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractAnalyticalMatricesHarvester::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalMatricesHarvester_init_(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_finalize(t_PythonAbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_pythonExtension(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_get__self(t_PythonAbstractAnalyticalMatricesHarvester *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalMatricesHarvester__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalMatricesHarvester, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalMatricesHarvester__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalMatricesHarvester)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalMatricesHarvester__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalMatricesHarvester_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalMatricesHarvester__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalMatricesHarvester)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalMatricesHarvester, t_PythonAbstractAnalyticalMatricesHarvester, PythonAbstractAnalyticalMatricesHarvester);

        void t_PythonAbstractAnalyticalMatricesHarvester::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), &PY_TYPE_DEF(PythonAbstractAnalyticalMatricesHarvester), module, "PythonAbstractAnalyticalMatricesHarvester", 1);
        }

        void t_PythonAbstractAnalyticalMatricesHarvester::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "class_", make_descriptor(PythonAbstractAnalyticalMatricesHarvester::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalMatricesHarvester::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalMatricesHarvester::initializeClass);
          JNINativeMethod methods[] = {
            { "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;", (void *) t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalMatricesHarvester::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalMatricesHarvester::wrap_Object(PythonAbstractAnalyticalMatricesHarvester(((t_PythonAbstractAnalyticalMatricesHarvester *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalMatricesHarvester::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalMatricesHarvester_init_(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
          PythonAbstractAnalyticalMatricesHarvester object((jobject) NULL);

          if (!parseArgs(args, "kskk", ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractAnalyticalMatricesHarvester(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_finalize(t_PythonAbstractAnalyticalMatricesHarvester *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_pythonExtension(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getGradientConverter", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter::initializeClass, &value))
          {
            throwTypeError("getGradientConverter", result);
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

        static void JNICALL t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_get__self(t_PythonAbstractAnalyticalMatricesHarvester *self, void *data)
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
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/util/IterationListener.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationManager::class$ = NULL;
      jmethodID *IterationManager::mids$ = NULL;
      bool IterationManager::live$ = false;

      jclass IterationManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_435c21a2398bab3e] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)V");
          mids$[mid_addIterationListener_5d4437a88351831e] = env->getMethodID(cls, "addIterationListener", "(Lorg/hipparchus/util/IterationListener;)V");
          mids$[mid_fireInitializationEvent_28fca0f2afbc79c2] = env->getMethodID(cls, "fireInitializationEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireIterationPerformedEvent_28fca0f2afbc79c2] = env->getMethodID(cls, "fireIterationPerformedEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireIterationStartedEvent_28fca0f2afbc79c2] = env->getMethodID(cls, "fireIterationStartedEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireTerminationEvent_28fca0f2afbc79c2] = env->getMethodID(cls, "fireTerminationEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_getIterations_55546ef6a647f39b] = env->getMethodID(cls, "getIterations", "()I");
          mids$[mid_getMaxIterations_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterations", "()I");
          mids$[mid_incrementIterationCount_a1fa5dae97ea5ed2] = env->getMethodID(cls, "incrementIterationCount", "()V");
          mids$[mid_removeIterationListener_5d4437a88351831e] = env->getMethodID(cls, "removeIterationListener", "(Lorg/hipparchus/util/IterationListener;)V");
          mids$[mid_resetIterationCount_a1fa5dae97ea5ed2] = env->getMethodID(cls, "resetIterationCount", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterationManager::IterationManager(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      IterationManager::IterationManager(jint a0, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_435c21a2398bab3e, a0, a1.this$)) {}

      void IterationManager::addIterationListener(const ::org::hipparchus::util::IterationListener & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addIterationListener_5d4437a88351831e], a0.this$);
      }

      void IterationManager::fireInitializationEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireInitializationEvent_28fca0f2afbc79c2], a0.this$);
      }

      void IterationManager::fireIterationPerformedEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireIterationPerformedEvent_28fca0f2afbc79c2], a0.this$);
      }

      void IterationManager::fireIterationStartedEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireIterationStartedEvent_28fca0f2afbc79c2], a0.this$);
      }

      void IterationManager::fireTerminationEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireTerminationEvent_28fca0f2afbc79c2], a0.this$);
      }

      jint IterationManager::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_55546ef6a647f39b]);
      }

      jint IterationManager::getMaxIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIterations_55546ef6a647f39b]);
      }

      void IterationManager::incrementIterationCount() const
      {
        env->callVoidMethod(this$, mids$[mid_incrementIterationCount_a1fa5dae97ea5ed2]);
      }

      void IterationManager::removeIterationListener(const ::org::hipparchus::util::IterationListener & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_removeIterationListener_5d4437a88351831e], a0.this$);
      }

      void IterationManager::resetIterationCount() const
      {
        env->callVoidMethod(this$, mids$[mid_resetIterationCount_a1fa5dae97ea5ed2]);
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
      static PyObject *t_IterationManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterationManager_init_(t_IterationManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterationManager_addIterationListener(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireInitializationEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireIterationPerformedEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireIterationStartedEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireTerminationEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_getIterations(t_IterationManager *self);
      static PyObject *t_IterationManager_getMaxIterations(t_IterationManager *self);
      static PyObject *t_IterationManager_incrementIterationCount(t_IterationManager *self);
      static PyObject *t_IterationManager_removeIterationListener(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_resetIterationCount(t_IterationManager *self);
      static PyObject *t_IterationManager_get__iterations(t_IterationManager *self, void *data);
      static PyObject *t_IterationManager_get__maxIterations(t_IterationManager *self, void *data);
      static PyGetSetDef t_IterationManager__fields_[] = {
        DECLARE_GET_FIELD(t_IterationManager, iterations),
        DECLARE_GET_FIELD(t_IterationManager, maxIterations),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterationManager__methods_[] = {
        DECLARE_METHOD(t_IterationManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationManager, addIterationListener, METH_O),
        DECLARE_METHOD(t_IterationManager, fireInitializationEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireIterationPerformedEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireIterationStartedEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireTerminationEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, getIterations, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, getMaxIterations, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, incrementIterationCount, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, removeIterationListener, METH_O),
        DECLARE_METHOD(t_IterationManager, resetIterationCount, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationManager)[] = {
        { Py_tp_methods, t_IterationManager__methods_ },
        { Py_tp_init, (void *) t_IterationManager_init_ },
        { Py_tp_getset, t_IterationManager__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IterationManager, t_IterationManager, IterationManager);

      void t_IterationManager::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationManager), &PY_TYPE_DEF(IterationManager), module, "IterationManager", 0);
      }

      void t_IterationManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "class_", make_descriptor(IterationManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "wrapfn_", make_descriptor(t_IterationManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationManager::initializeClass, 1)))
          return NULL;
        return t_IterationManager::wrap_Object(IterationManager(((t_IterationManager *) arg)->object.this$));
      }
      static PyObject *t_IterationManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterationManager_init_(t_IterationManager *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            IterationManager object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = IterationManager(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a1((jobject) NULL);
            IterationManager object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0, &a1))
            {
              INT_CALL(object = IterationManager(a0, a1));
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

      static PyObject *t_IterationManager_addIterationListener(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationListener a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationListener::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addIterationListener(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addIterationListener", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireInitializationEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireInitializationEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireInitializationEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireIterationPerformedEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireIterationPerformedEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireIterationPerformedEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireIterationStartedEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireIterationStartedEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireIterationStartedEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireTerminationEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireTerminationEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireTerminationEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_getIterations(t_IterationManager *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationManager_getMaxIterations(t_IterationManager *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationManager_incrementIterationCount(t_IterationManager *self)
      {
        OBJ_CALL(self->object.incrementIterationCount());
        Py_RETURN_NONE;
      }

      static PyObject *t_IterationManager_removeIterationListener(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationListener a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationListener::initializeClass, &a0))
        {
          OBJ_CALL(self->object.removeIterationListener(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "removeIterationListener", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_resetIterationCount(t_IterationManager *self)
      {
        OBJ_CALL(self->object.resetIterationCount());
        Py_RETURN_NONE;
      }

      static PyObject *t_IterationManager_get__iterations(t_IterationManager *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_IterationManager_get__maxIterations(t_IterationManager *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/NadirPointing.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *NadirPointing::class$ = NULL;
      jmethodID *NadirPointing::mids$ = NULL;
      bool NadirPointing::live$ = false;

      jclass NadirPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/NadirPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_33848d83da3704f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/BodyShape;)V");
          mids$[mid_getTargetPV_0c9a6603286e7c6f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_4a6b199bd28f952f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NadirPointing::NadirPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_33848d83da3704f2, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates NadirPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_0c9a6603286e7c6f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates NadirPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_4a6b199bd28f952f], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_NadirPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NadirPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_NadirPointing_init_(t_NadirPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NadirPointing_getTargetPV(t_NadirPointing *self, PyObject *args);

      static PyMethodDef t_NadirPointing__methods_[] = {
        DECLARE_METHOD(t_NadirPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NadirPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NadirPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NadirPointing)[] = {
        { Py_tp_methods, t_NadirPointing__methods_ },
        { Py_tp_init, (void *) t_NadirPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NadirPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(NadirPointing, t_NadirPointing, NadirPointing);

      void t_NadirPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(NadirPointing), &PY_TYPE_DEF(NadirPointing), module, "NadirPointing", 0);
      }

      void t_NadirPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "class_", make_descriptor(NadirPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "wrapfn_", make_descriptor(t_NadirPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NadirPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NadirPointing::initializeClass, 1)))
          return NULL;
        return t_NadirPointing::wrap_Object(NadirPointing(((t_NadirPointing *) arg)->object.this$));
      }
      static PyObject *t_NadirPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NadirPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_NadirPointing_init_(t_NadirPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::BodyShape a1((jobject) NULL);
        NadirPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1))
        {
          INT_CALL(object = NadirPointing(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_NadirPointing_getTargetPV(t_NadirPointing *self, PyObject *args)
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
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "java/lang/Iterable.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanEstimator::class$ = NULL;
        jmethodID *UnscentedKalmanEstimator::mids$ = NULL;
        bool UnscentedKalmanEstimator::live$ = false;

        jclass UnscentedKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_9988f04cca62e28c] = env->getMethodID(cls, "estimationStep", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_processMeasurements_3bf4a9b896d49678] = env->getMethodID(cls, "processMeasurements", "(Ljava/lang/Iterable;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setObserver_578d9ba5b3b8b483] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_10690b877ea302f7] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanEstimator::estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimationStep_9988f04cca62e28c], a0.this$));
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanEstimator::processMeasurements(const ::java::lang::Iterable & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_processMeasurements_3bf4a9b896d49678], a0.this$));
        }

        void UnscentedKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_578d9ba5b3b8b483], a0.this$);
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
        static PyObject *t_UnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_estimationStep(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_processMeasurements(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_setObserver(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static int t_UnscentedKalmanEstimator_set__observer(t_UnscentedKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_UnscentedKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_UnscentedKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnscentedKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, estimationStep, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanEstimator)[] = {
          { Py_tp_methods, t_UnscentedKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnscentedKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanEstimator, t_UnscentedKalmanEstimator, UnscentedKalmanEstimator);

        void t_UnscentedKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanEstimator), &PY_TYPE_DEF(UnscentedKalmanEstimator), module, "UnscentedKalmanEstimator", 0);
        }

        void t_UnscentedKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "class_", make_descriptor(UnscentedKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "wrapfn_", make_descriptor(t_UnscentedKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanEstimator::wrap_Object(UnscentedKalmanEstimator(((t_UnscentedKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnscentedKalmanEstimator_estimationStep(t_UnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimator_processMeasurements(t_UnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimator_setObserver(t_UnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_UnscentedKalmanEstimator_set__observer(t_UnscentedKalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldStepHandlerMultiplexer::class$ = NULL;
        jmethodID *FieldStepHandlerMultiplexer::mids$ = NULL;
        bool FieldStepHandlerMultiplexer::live$ = false;

        jclass FieldStepHandlerMultiplexer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldStepHandlerMultiplexer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_a80810763ccddce2] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");
            mids$[mid_add_73fc248bc2640832] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_finish_54d9efbf99822980] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
            mids$[mid_handleStep_fa82adff12d70536] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_remove_d5fcb644d05f317c] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_remove_a80810763ccddce2] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepHandlerMultiplexer::FieldStepHandlerMultiplexer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void FieldStepHandlerMultiplexer::add(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_a80810763ccddce2], a0.this$);
        }

        void FieldStepHandlerMultiplexer::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_add_73fc248bc2640832], a0.this$, a1.this$);
        }

        void FieldStepHandlerMultiplexer::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        void FieldStepHandlerMultiplexer::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_54d9efbf99822980], a0.this$);
        }

        ::java::util::List FieldStepHandlerMultiplexer::getHandlers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_e62d3bb06d56d7e3]));
        }

        void FieldStepHandlerMultiplexer::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_fa82adff12d70536], a0.this$);
        }

        void FieldStepHandlerMultiplexer::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
        }

        void FieldStepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_d5fcb644d05f317c], a0.this$);
        }

        void FieldStepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_a80810763ccddce2], a0.this$);
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
      namespace sampling {
        static PyObject *t_FieldStepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_of_(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static int t_FieldStepHandlerMultiplexer_init_(t_FieldStepHandlerMultiplexer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepHandlerMultiplexer_add(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_clear(t_FieldStepHandlerMultiplexer *self);
        static PyObject *t_FieldStepHandlerMultiplexer_finish(t_FieldStepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_getHandlers(t_FieldStepHandlerMultiplexer *self);
        static PyObject *t_FieldStepHandlerMultiplexer_handleStep(t_FieldStepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_init(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_remove(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_get__handlers(t_FieldStepHandlerMultiplexer *self, void *data);
        static PyObject *t_FieldStepHandlerMultiplexer_get__parameters_(t_FieldStepHandlerMultiplexer *self, void *data);
        static PyGetSetDef t_FieldStepHandlerMultiplexer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepHandlerMultiplexer, handlers),
          DECLARE_GET_FIELD(t_FieldStepHandlerMultiplexer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepHandlerMultiplexer__methods_[] = {
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, clear, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, finish, METH_O),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, getHandlers, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, remove, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepHandlerMultiplexer)[] = {
          { Py_tp_methods, t_FieldStepHandlerMultiplexer__methods_ },
          { Py_tp_init, (void *) t_FieldStepHandlerMultiplexer_init_ },
          { Py_tp_getset, t_FieldStepHandlerMultiplexer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepHandlerMultiplexer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepHandlerMultiplexer, t_FieldStepHandlerMultiplexer, FieldStepHandlerMultiplexer);
        PyObject *t_FieldStepHandlerMultiplexer::wrap_Object(const FieldStepHandlerMultiplexer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepHandlerMultiplexer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepHandlerMultiplexer *self = (t_FieldStepHandlerMultiplexer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepHandlerMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepHandlerMultiplexer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepHandlerMultiplexer *self = (t_FieldStepHandlerMultiplexer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepHandlerMultiplexer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepHandlerMultiplexer), &PY_TYPE_DEF(FieldStepHandlerMultiplexer), module, "FieldStepHandlerMultiplexer", 0);
        }

        void t_FieldStepHandlerMultiplexer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "class_", make_descriptor(FieldStepHandlerMultiplexer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "wrapfn_", make_descriptor(t_FieldStepHandlerMultiplexer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepHandlerMultiplexer::initializeClass, 1)))
            return NULL;
          return t_FieldStepHandlerMultiplexer::wrap_Object(FieldStepHandlerMultiplexer(((t_FieldStepHandlerMultiplexer *) arg)->object.this$));
        }
        static PyObject *t_FieldStepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepHandlerMultiplexer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_of_(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepHandlerMultiplexer_init_(t_FieldStepHandlerMultiplexer *self, PyObject *args, PyObject *kwds)
        {
          FieldStepHandlerMultiplexer object((jobject) NULL);

          INT_CALL(object = FieldStepHandlerMultiplexer());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_add(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
              {
                OBJ_CALL(self->object.add(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
              {
                OBJ_CALL(self->object.add(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_clear(t_FieldStepHandlerMultiplexer *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_finish(t_FieldStepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_getHandlers(t_FieldStepHandlerMultiplexer *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldStepHandlerMultiplexer_handleStep(t_FieldStepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_init(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_remove(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remove", args);
          return NULL;
        }
        static PyObject *t_FieldStepHandlerMultiplexer_get__parameters_(t_FieldStepHandlerMultiplexer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStepHandlerMultiplexer_get__handlers(t_FieldStepHandlerMultiplexer *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *TaylorMap::class$ = NULL;
        jmethodID *TaylorMap::mids$ = NULL;
        bool TaylorMap::live$ = false;

        jclass TaylorMap::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/TaylorMap");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9d69924e252c5b9a] = env->getMethodID(cls, "<init>", "([D[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_a0df4b8e4ed3805e] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_compose_6646fcff2910e26b] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/analysis/differentiation/TaylorMap;)Lorg/hipparchus/analysis/differentiation/TaylorMap;");
            mids$[mid_getFunction_7d1614ef7f412b0c] = env->getMethodID(cls, "getFunction", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getNbFunctions_55546ef6a647f39b] = env->getMethodID(cls, "getNbFunctions", "()I");
            mids$[mid_getNbParameters_55546ef6a647f39b] = env->getMethodID(cls, "getNbParameters", "()I");
            mids$[mid_getPoint_25e1757a36c4dde2] = env->getMethodID(cls, "getPoint", "()[D");
            mids$[mid_invert_1573c268f373a63b] = env->getMethodID(cls, "invert", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/analysis/differentiation/TaylorMap;");
            mids$[mid_value_14dee4cb8cc3e959] = env->getMethodID(cls, "value", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TaylorMap::TaylorMap(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9d69924e252c5b9a, a0.this$, a1.this$)) {}

        TaylorMap::TaylorMap(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0df4b8e4ed3805e, a0, a1, a2)) {}

        TaylorMap TaylorMap::compose(const TaylorMap & a0) const
        {
          return TaylorMap(env->callObjectMethod(this$, mids$[mid_compose_6646fcff2910e26b], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure TaylorMap::getFunction(jint a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getFunction_7d1614ef7f412b0c], a0));
        }

        jint TaylorMap::getNbFunctions() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbFunctions_55546ef6a647f39b]);
        }

        jint TaylorMap::getNbParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbParameters_55546ef6a647f39b]);
        }

        JArray< jdouble > TaylorMap::getPoint() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_25e1757a36c4dde2]));
        }

        TaylorMap TaylorMap::invert(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return TaylorMap(env->callObjectMethod(this$, mids$[mid_invert_1573c268f373a63b], a0.this$));
        }

        JArray< jdouble > TaylorMap::value(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_14dee4cb8cc3e959], a0.this$));
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
        static PyObject *t_TaylorMap_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TaylorMap_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TaylorMap_init_(t_TaylorMap *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TaylorMap_compose(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_getFunction(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_getNbFunctions(t_TaylorMap *self);
        static PyObject *t_TaylorMap_getNbParameters(t_TaylorMap *self);
        static PyObject *t_TaylorMap_getPoint(t_TaylorMap *self);
        static PyObject *t_TaylorMap_invert(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_value(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_get__nbFunctions(t_TaylorMap *self, void *data);
        static PyObject *t_TaylorMap_get__nbParameters(t_TaylorMap *self, void *data);
        static PyObject *t_TaylorMap_get__point(t_TaylorMap *self, void *data);
        static PyGetSetDef t_TaylorMap__fields_[] = {
          DECLARE_GET_FIELD(t_TaylorMap, nbFunctions),
          DECLARE_GET_FIELD(t_TaylorMap, nbParameters),
          DECLARE_GET_FIELD(t_TaylorMap, point),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TaylorMap__methods_[] = {
          DECLARE_METHOD(t_TaylorMap, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TaylorMap, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TaylorMap, compose, METH_O),
          DECLARE_METHOD(t_TaylorMap, getFunction, METH_O),
          DECLARE_METHOD(t_TaylorMap, getNbFunctions, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, getNbParameters, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, invert, METH_O),
          DECLARE_METHOD(t_TaylorMap, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TaylorMap)[] = {
          { Py_tp_methods, t_TaylorMap__methods_ },
          { Py_tp_init, (void *) t_TaylorMap_init_ },
          { Py_tp_getset, t_TaylorMap__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TaylorMap)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TaylorMap, t_TaylorMap, TaylorMap);

        void t_TaylorMap::install(PyObject *module)
        {
          installType(&PY_TYPE(TaylorMap), &PY_TYPE_DEF(TaylorMap), module, "TaylorMap", 0);
        }

        void t_TaylorMap::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "class_", make_descriptor(TaylorMap::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "wrapfn_", make_descriptor(t_TaylorMap::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TaylorMap_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TaylorMap::initializeClass, 1)))
            return NULL;
          return t_TaylorMap::wrap_Object(TaylorMap(((t_TaylorMap *) arg)->object.this$));
        }
        static PyObject *t_TaylorMap_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TaylorMap::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TaylorMap_init_(t_TaylorMap *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a1((jobject) NULL);
              TaylorMap object((jobject) NULL);

              if (!parseArgs(args, "[D[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0, &a1))
              {
                INT_CALL(object = TaylorMap(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jint a1;
              jint a2;
              TaylorMap object((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                INT_CALL(object = TaylorMap(a0, a1, a2));
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

        static PyObject *t_TaylorMap_compose(t_TaylorMap *self, PyObject *arg)
        {
          TaylorMap a0((jobject) NULL);
          TaylorMap result((jobject) NULL);

          if (!parseArg(arg, "k", TaylorMap::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_TaylorMap::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_getFunction(t_TaylorMap *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getFunction(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFunction", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_getNbFunctions(t_TaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbFunctions());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TaylorMap_getNbParameters(t_TaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TaylorMap_getPoint(t_TaylorMap *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPoint());
          return result.wrap();
        }

        static PyObject *t_TaylorMap_invert(t_TaylorMap *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          TaylorMap result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.invert(a0));
            return t_TaylorMap::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "invert", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_value(t_TaylorMap *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_get__nbFunctions(t_TaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbFunctions());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TaylorMap_get__nbParameters(t_TaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TaylorMap_get__point(t_TaylorMap *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPoint());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenZonalLinear::class$ = NULL;
              jmethodID *HansenZonalLinear::mids$ = NULL;
              bool HansenZonalLinear::live$ = false;

              jclass HansenZonalLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
                  mids$[mid_computeInitValues_8ba9fe7a847cecad] = env->getMethodID(cls, "computeInitValues", "(D)V");
                  mids$[mid_getDerivative_98e10c261c066ee7] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_98e10c261c066ee7] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenZonalLinear::HansenZonalLinear(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

              void HansenZonalLinear::computeInitValues(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_8ba9fe7a847cecad], a0);
              }

              jdouble HansenZonalLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_98e10c261c066ee7], a0, a1);
              }

              jdouble HansenZonalLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_98e10c261c066ee7], a0, a1);
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
              static PyObject *t_HansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenZonalLinear_init_(t_HansenZonalLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenZonalLinear_computeInitValues(t_HansenZonalLinear *self, PyObject *arg);
              static PyObject *t_HansenZonalLinear_getDerivative(t_HansenZonalLinear *self, PyObject *args);
              static PyObject *t_HansenZonalLinear_getValue(t_HansenZonalLinear *self, PyObject *args);

              static PyMethodDef t_HansenZonalLinear__methods_[] = {
                DECLARE_METHOD(t_HansenZonalLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenZonalLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenZonalLinear, computeInitValues, METH_O),
                DECLARE_METHOD(t_HansenZonalLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenZonalLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenZonalLinear)[] = {
                { Py_tp_methods, t_HansenZonalLinear__methods_ },
                { Py_tp_init, (void *) t_HansenZonalLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenZonalLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenZonalLinear, t_HansenZonalLinear, HansenZonalLinear);

              void t_HansenZonalLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenZonalLinear), &PY_TYPE_DEF(HansenZonalLinear), module, "HansenZonalLinear", 0);
              }

              void t_HansenZonalLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "class_", make_descriptor(HansenZonalLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "wrapfn_", make_descriptor(t_HansenZonalLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenZonalLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenZonalLinear::wrap_Object(HansenZonalLinear(((t_HansenZonalLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenZonalLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenZonalLinear_init_(t_HansenZonalLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                HansenZonalLinear object((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  INT_CALL(object = HansenZonalLinear(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenZonalLinear_computeInitValues(t_HansenZonalLinear *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.computeInitValues(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", arg);
                return NULL;
              }

              static PyObject *t_HansenZonalLinear_getDerivative(t_HansenZonalLinear *self, PyObject *args)
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

              static PyObject *t_HansenZonalLinear_getValue(t_HansenZonalLinear *self, PyObject *args)
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
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Blendable::class$ = NULL;
      jmethodID *Blendable::mids$ = NULL;
      bool Blendable::live$ = false;

      jclass Blendable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Blendable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_blendArithmeticallyWith_4c5ff869c16f4311] = env->getMethodID(cls, "blendArithmeticallyWith", "(Ljava/lang/Object;D)Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object Blendable::blendArithmeticallyWith(const ::java::lang::Object & a0, jdouble a1) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_4c5ff869c16f4311], a0.this$, a1));
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
      static PyObject *t_Blendable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Blendable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Blendable_of_(t_Blendable *self, PyObject *args);
      static PyObject *t_Blendable_blendArithmeticallyWith(t_Blendable *self, PyObject *args);
      static PyObject *t_Blendable_get__parameters_(t_Blendable *self, void *data);
      static PyGetSetDef t_Blendable__fields_[] = {
        DECLARE_GET_FIELD(t_Blendable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Blendable__methods_[] = {
        DECLARE_METHOD(t_Blendable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Blendable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Blendable, of_, METH_VARARGS),
        DECLARE_METHOD(t_Blendable, blendArithmeticallyWith, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Blendable)[] = {
        { Py_tp_methods, t_Blendable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Blendable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Blendable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Blendable, t_Blendable, Blendable);
      PyObject *t_Blendable::wrap_Object(const Blendable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Blendable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Blendable *self = (t_Blendable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Blendable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Blendable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Blendable *self = (t_Blendable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Blendable::install(PyObject *module)
      {
        installType(&PY_TYPE(Blendable), &PY_TYPE_DEF(Blendable), module, "Blendable", 0);
      }

      void t_Blendable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "class_", make_descriptor(Blendable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "wrapfn_", make_descriptor(t_Blendable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Blendable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Blendable::initializeClass, 1)))
          return NULL;
        return t_Blendable::wrap_Object(Blendable(((t_Blendable *) arg)->object.this$));
      }
      static PyObject *t_Blendable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Blendable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Blendable_of_(t_Blendable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Blendable_blendArithmeticallyWith(t_Blendable *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jdouble a1;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "OD", self->parameters[0], &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }
      static PyObject *t_Blendable_get__parameters_(t_Blendable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeRateTroposphericDelayModifier::mids$ = NULL;
          bool BistaticRangeRateTroposphericDelayModifier::live$ = false;

          jclass BistaticRangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_516bd20115aa9d9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateTroposphericDelayModifier::BistaticRangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_516bd20115aa9d9d, a0.this$)) {}

          void BistaticRangeRateTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void BistaticRangeRateTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeRateTroposphericDelayModifier_init_(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modify(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateTroposphericDelayModifier, t_BistaticRangeRateTroposphericDelayModifier, BistaticRangeRateTroposphericDelayModifier);

          void t_BistaticRangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateTroposphericDelayModifier), &PY_TYPE_DEF(BistaticRangeRateTroposphericDelayModifier), module, "BistaticRangeRateTroposphericDelayModifier", 0);
          }

          void t_BistaticRangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "class_", make_descriptor(BistaticRangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateTroposphericDelayModifier::wrap_Object(BistaticRangeRateTroposphericDelayModifier(((t_BistaticRangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeRateTroposphericDelayModifier_init_(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            BistaticRangeRateTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = BistaticRangeRateTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modify(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *InterSatellitesPhaseAmbiguityModifier::class$ = NULL;
          jmethodID *InterSatellitesPhaseAmbiguityModifier::mids$ = NULL;
          bool InterSatellitesPhaseAmbiguityModifier::live$ = false;

          jclass InterSatellitesPhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhaseAmbiguityModifier::InterSatellitesPhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

          ::java::util::List InterSatellitesPhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void InterSatellitesPhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void InterSatellitesPhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InterSatellitesPhaseAmbiguityModifier_init_(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_getParametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modify(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modifyWithoutDerivatives(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_get__parametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_InterSatellitesPhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_InterSatellitesPhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_InterSatellitesPhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhaseAmbiguityModifier, t_InterSatellitesPhaseAmbiguityModifier, InterSatellitesPhaseAmbiguityModifier);

          void t_InterSatellitesPhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhaseAmbiguityModifier), &PY_TYPE_DEF(InterSatellitesPhaseAmbiguityModifier), module, "InterSatellitesPhaseAmbiguityModifier", 0);
          }

          void t_InterSatellitesPhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "class_", make_descriptor(InterSatellitesPhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_InterSatellitesPhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhaseAmbiguityModifier::wrap_Object(InterSatellitesPhaseAmbiguityModifier(((t_InterSatellitesPhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InterSatellitesPhaseAmbiguityModifier_init_(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            InterSatellitesPhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = InterSatellitesPhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_getParametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modify(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modifyWithoutDerivatives(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_get__parametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self, void *data)
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
#include "org/hipparchus/fraction/ProperFractionFormat.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *ProperFractionFormat::class$ = NULL;
      jmethodID *ProperFractionFormat::mids$ = NULL;
      bool ProperFractionFormat::live$ = false;

      jclass ProperFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/ProperFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_b7f3d50b51ef7518] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_5e266d97253f08b1] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_87568a31a08a12c5] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/Fraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getWholeFormat_87ffffc449cd25a5] = env->getMethodID(cls, "getWholeFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_813491fbcb23677d] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/Fraction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ProperFractionFormat::ProperFractionFormat() : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ProperFractionFormat::ProperFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_b7f3d50b51ef7518, a0.this$)) {}

      ProperFractionFormat::ProperFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_5e266d97253f08b1, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::StringBuffer ProperFractionFormat::format(const ::org::hipparchus::fraction::Fraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_87568a31a08a12c5], a0.this$, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat ProperFractionFormat::getWholeFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getWholeFormat_87ffffc449cd25a5]));
      }

      ::org::hipparchus::fraction::Fraction ProperFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_813491fbcb23677d], a0.this$, a1.this$));
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
      static PyObject *t_ProperFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ProperFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ProperFractionFormat_init_(t_ProperFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ProperFractionFormat_format(t_ProperFractionFormat *self, PyObject *args);
      static PyObject *t_ProperFractionFormat_getWholeFormat(t_ProperFractionFormat *self);
      static PyObject *t_ProperFractionFormat_parse(t_ProperFractionFormat *self, PyObject *args);
      static PyObject *t_ProperFractionFormat_get__wholeFormat(t_ProperFractionFormat *self, void *data);
      static PyGetSetDef t_ProperFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ProperFractionFormat, wholeFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ProperFractionFormat__methods_[] = {
        DECLARE_METHOD(t_ProperFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ProperFractionFormat, getWholeFormat, METH_NOARGS),
        DECLARE_METHOD(t_ProperFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ProperFractionFormat)[] = {
        { Py_tp_methods, t_ProperFractionFormat__methods_ },
        { Py_tp_init, (void *) t_ProperFractionFormat_init_ },
        { Py_tp_getset, t_ProperFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ProperFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::FractionFormat),
        NULL
      };

      DEFINE_TYPE(ProperFractionFormat, t_ProperFractionFormat, ProperFractionFormat);

      void t_ProperFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ProperFractionFormat), &PY_TYPE_DEF(ProperFractionFormat), module, "ProperFractionFormat", 0);
      }

      void t_ProperFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "class_", make_descriptor(ProperFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "wrapfn_", make_descriptor(t_ProperFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ProperFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ProperFractionFormat::initializeClass, 1)))
          return NULL;
        return t_ProperFractionFormat::wrap_Object(ProperFractionFormat(((t_ProperFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_ProperFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ProperFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ProperFractionFormat_init_(t_ProperFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ProperFractionFormat object((jobject) NULL);

            INT_CALL(object = ProperFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ProperFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ProperFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ProperFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ProperFractionFormat(a0, a1, a2));
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

      static PyObject *t_ProperFractionFormat_format(t_ProperFractionFormat *self, PyObject *args)
      {
        ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
        ::java::lang::StringBuffer a1((jobject) NULL);
        ::java::text::FieldPosition a2((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.format(a0, a1, a2));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_ProperFractionFormat_getWholeFormat(t_ProperFractionFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ProperFractionFormat_parse(t_ProperFractionFormat *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_ProperFractionFormat_get__wholeFormat(t_ProperFractionFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *LeastSquaresTleGenerationAlgorithm::class$ = NULL;
            jmethodID *LeastSquaresTleGenerationAlgorithm::mids$ = NULL;
            bool LeastSquaresTleGenerationAlgorithm::live$ = false;
            jint LeastSquaresTleGenerationAlgorithm::DEFAULT_MAX_ITERATIONS = (jint) 0;

            jclass LeastSquaresTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_2598b202d3117bc5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)V");
                mids$[mid_generate_6e4ccfee7888f727] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_7dac79832039ea3a] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");
                mids$[mid_getRms_b74f83833fdad017] = env->getMethodID(cls, "getRms", "()D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_MAX_ITERATIONS = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm(jint a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2598b202d3117bc5, a0, a1.this$, a2.this$)) {}

            ::org::orekit::propagation::analytical::tle::FieldTLE LeastSquaresTleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_6e4ccfee7888f727], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE LeastSquaresTleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_7dac79832039ea3a], a0.this$, a1.this$));
            }

            jdouble LeastSquaresTleGenerationAlgorithm::getRms() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRms_b74f83833fdad017]);
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
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresTleGenerationAlgorithm_init_(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_generate(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_getRms(t_LeastSquaresTleGenerationAlgorithm *self);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_get__rms(t_LeastSquaresTleGenerationAlgorithm *self, void *data);
            static PyGetSetDef t_LeastSquaresTleGenerationAlgorithm__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresTleGenerationAlgorithm, rms),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, generate, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, getRms, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_LeastSquaresTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresTleGenerationAlgorithm_init_ },
              { Py_tp_getset, t_LeastSquaresTleGenerationAlgorithm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresTleGenerationAlgorithm, t_LeastSquaresTleGenerationAlgorithm, LeastSquaresTleGenerationAlgorithm);

            void t_LeastSquaresTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresTleGenerationAlgorithm), &PY_TYPE_DEF(LeastSquaresTleGenerationAlgorithm), module, "LeastSquaresTleGenerationAlgorithm", 0);
            }

            void t_LeastSquaresTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "class_", make_descriptor(LeastSquaresTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_LeastSquaresTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              env->getClass(LeastSquaresTleGenerationAlgorithm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "DEFAULT_MAX_ITERATIONS", make_descriptor(LeastSquaresTleGenerationAlgorithm::DEFAULT_MAX_ITERATIONS));
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresTleGenerationAlgorithm::wrap_Object(LeastSquaresTleGenerationAlgorithm(((t_LeastSquaresTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresTleGenerationAlgorithm_init_(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  INT_CALL(object = LeastSquaresTleGenerationAlgorithm());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  jint a0;
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = LeastSquaresTleGenerationAlgorithm(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jint a0;
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "Ikk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = LeastSquaresTleGenerationAlgorithm(a0, a1, a2));
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

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_generate(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args)
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

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_getRms(t_LeastSquaresTleGenerationAlgorithm *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRms());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_get__rms(t_LeastSquaresTleGenerationAlgorithm *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRms());
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
#include "org/hipparchus/analysis/interpolation/BicubicInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BicubicInterpolator::class$ = NULL;
        jmethodID *BicubicInterpolator::mids$ = NULL;
        bool BicubicInterpolator::live$ = false;

        jclass BicubicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BicubicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_42c8578f32117181] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/BicubicInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BicubicInterpolator::BicubicInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction BicubicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_42c8578f32117181], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_BicubicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BicubicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BicubicInterpolator_init_(t_BicubicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BicubicInterpolator_interpolate(t_BicubicInterpolator *self, PyObject *args);

        static PyMethodDef t_BicubicInterpolator__methods_[] = {
          DECLARE_METHOD(t_BicubicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BicubicInterpolator)[] = {
          { Py_tp_methods, t_BicubicInterpolator__methods_ },
          { Py_tp_init, (void *) t_BicubicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BicubicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BicubicInterpolator, t_BicubicInterpolator, BicubicInterpolator);

        void t_BicubicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BicubicInterpolator), &PY_TYPE_DEF(BicubicInterpolator), module, "BicubicInterpolator", 0);
        }

        void t_BicubicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "class_", make_descriptor(BicubicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "wrapfn_", make_descriptor(t_BicubicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BicubicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BicubicInterpolator::initializeClass, 1)))
            return NULL;
          return t_BicubicInterpolator::wrap_Object(BicubicInterpolator(((t_BicubicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BicubicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BicubicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BicubicInterpolator_init_(t_BicubicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          BicubicInterpolator object((jobject) NULL);

          INT_CALL(object = BicubicInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_BicubicInterpolator_interpolate(t_BicubicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_BicubicInterpolatingFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDHeader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDHeader::class$ = NULL;
        jmethodID *CRDHeader::mids$ = NULL;
        bool CRDHeader::live$ = false;

        jclass CRDHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDataReleaseFlag_55546ef6a647f39b] = env->getMethodID(cls, "getDataReleaseFlag", "()I");
            mids$[mid_getDataType_55546ef6a647f39b] = env->getMethodID(cls, "getDataType", "()I");
            mids$[mid_getDateAndTime_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDateAndTime", "()Ljava/lang/String;");
            mids$[mid_getEpochIdentifier_55546ef6a647f39b] = env->getMethodID(cls, "getEpochIdentifier", "()I");
            mids$[mid_getH1CrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getH1CrdString", "()Ljava/lang/String;");
            mids$[mid_getH2CrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getH2CrdString", "()Ljava/lang/String;");
            mids$[mid_getH3CrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getH3CrdString", "()Ljava/lang/String;");
            mids$[mid_getH4CrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getH4CrdString", "()Ljava/lang/String;");
            mids$[mid_getH5CrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getH5CrdString", "()Ljava/lang/String;");
            mids$[mid_getPredictionProvider_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPredictionProvider", "()Ljava/lang/String;");
            mids$[mid_getPredictionType_55546ef6a647f39b] = env->getMethodID(cls, "getPredictionType", "()I");
            mids$[mid_getQualityIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getQualityIndicator", "()I");
            mids$[mid_getRangeType_54a37f66575b569a] = env->getMethodID(cls, "getRangeType", "()Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_getSpacecraftEpochTimeScale_55546ef6a647f39b] = env->getMethodID(cls, "getSpacecraftEpochTimeScale", "()I");
            mids$[mid_getStationName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getStationName", "()Ljava/lang/String;");
            mids$[mid_getStationNetword_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getStationNetword", "()Ljava/lang/String;");
            mids$[mid_getSystemIdentifier_55546ef6a647f39b] = env->getMethodID(cls, "getSystemIdentifier", "()I");
            mids$[mid_getSystemNumber_55546ef6a647f39b] = env->getMethodID(cls, "getSystemNumber", "()I");
            mids$[mid_getSystemOccupancy_55546ef6a647f39b] = env->getMethodID(cls, "getSystemOccupancy", "()I");
            mids$[mid_getYearOfCentury_55546ef6a647f39b] = env->getMethodID(cls, "getYearOfCentury", "()I");
            mids$[mid_isCenterOfMassCorrectionApplied_9ab94ac1dc23b105] = env->getMethodID(cls, "isCenterOfMassCorrectionApplied", "()Z");
            mids$[mid_isReceiveAmplitudeCorrectionApplied_9ab94ac1dc23b105] = env->getMethodID(cls, "isReceiveAmplitudeCorrectionApplied", "()Z");
            mids$[mid_isStationSystemDelayApplied_9ab94ac1dc23b105] = env->getMethodID(cls, "isStationSystemDelayApplied", "()Z");
            mids$[mid_isTransponderDelayApplied_9ab94ac1dc23b105] = env->getMethodID(cls, "isTransponderDelayApplied", "()Z");
            mids$[mid_isTroposphericRefractionApplied_9ab94ac1dc23b105] = env->getMethodID(cls, "isTroposphericRefractionApplied", "()Z");
            mids$[mid_setDataReleaseFlag_44ed599e93e8a30c] = env->getMethodID(cls, "setDataReleaseFlag", "(I)V");
            mids$[mid_setDataType_44ed599e93e8a30c] = env->getMethodID(cls, "setDataType", "(I)V");
            mids$[mid_setDateAndTime_734b91ac30d5f9b4] = env->getMethodID(cls, "setDateAndTime", "(Ljava/lang/String;)V");
            mids$[mid_setEpochIdentifier_44ed599e93e8a30c] = env->getMethodID(cls, "setEpochIdentifier", "(I)V");
            mids$[mid_setIsCenterOfMassCorrectionApplied_fcb96c98de6fad04] = env->getMethodID(cls, "setIsCenterOfMassCorrectionApplied", "(Z)V");
            mids$[mid_setIsReceiveAmplitudeCorrectionApplied_fcb96c98de6fad04] = env->getMethodID(cls, "setIsReceiveAmplitudeCorrectionApplied", "(Z)V");
            mids$[mid_setIsStationSystemDelayApplied_fcb96c98de6fad04] = env->getMethodID(cls, "setIsStationSystemDelayApplied", "(Z)V");
            mids$[mid_setIsTransponderDelayApplied_fcb96c98de6fad04] = env->getMethodID(cls, "setIsTransponderDelayApplied", "(Z)V");
            mids$[mid_setIsTroposphericRefractionApplied_fcb96c98de6fad04] = env->getMethodID(cls, "setIsTroposphericRefractionApplied", "(Z)V");
            mids$[mid_setPredictionProvider_734b91ac30d5f9b4] = env->getMethodID(cls, "setPredictionProvider", "(Ljava/lang/String;)V");
            mids$[mid_setPredictionType_44ed599e93e8a30c] = env->getMethodID(cls, "setPredictionType", "(I)V");
            mids$[mid_setQualityIndicator_44ed599e93e8a30c] = env->getMethodID(cls, "setQualityIndicator", "(I)V");
            mids$[mid_setRangeType_44ed599e93e8a30c] = env->getMethodID(cls, "setRangeType", "(I)V");
            mids$[mid_setSpacecraftEpochTimeScale_44ed599e93e8a30c] = env->getMethodID(cls, "setSpacecraftEpochTimeScale", "(I)V");
            mids$[mid_setStationName_734b91ac30d5f9b4] = env->getMethodID(cls, "setStationName", "(Ljava/lang/String;)V");
            mids$[mid_setStationNetword_734b91ac30d5f9b4] = env->getMethodID(cls, "setStationNetword", "(Ljava/lang/String;)V");
            mids$[mid_setSystemIdentifier_44ed599e93e8a30c] = env->getMethodID(cls, "setSystemIdentifier", "(I)V");
            mids$[mid_setSystemNumber_44ed599e93e8a30c] = env->getMethodID(cls, "setSystemNumber", "(I)V");
            mids$[mid_setSystemOccupancy_44ed599e93e8a30c] = env->getMethodID(cls, "setSystemOccupancy", "(I)V");
            mids$[mid_setYearOfCentury_44ed599e93e8a30c] = env->getMethodID(cls, "setYearOfCentury", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDHeader::CRDHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jint CRDHeader::getDataReleaseFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataReleaseFlag_55546ef6a647f39b]);
        }

        jint CRDHeader::getDataType() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataType_55546ef6a647f39b]);
        }

        ::java::lang::String CRDHeader::getDateAndTime() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDateAndTime_1c1fa1e935d6cdcf]));
        }

        jint CRDHeader::getEpochIdentifier() const
        {
          return env->callIntMethod(this$, mids$[mid_getEpochIdentifier_55546ef6a647f39b]);
        }

        ::java::lang::String CRDHeader::getH1CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH1CrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDHeader::getH2CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH2CrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDHeader::getH3CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH3CrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDHeader::getH4CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH4CrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDHeader::getH5CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH5CrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDHeader::getPredictionProvider() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPredictionProvider_1c1fa1e935d6cdcf]));
        }

        jint CRDHeader::getPredictionType() const
        {
          return env->callIntMethod(this$, mids$[mid_getPredictionType_55546ef6a647f39b]);
        }

        jint CRDHeader::getQualityIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getQualityIndicator_55546ef6a647f39b]);
        }

        ::org::orekit::files::ilrs::CRDHeader$RangeType CRDHeader::getRangeType() const
        {
          return ::org::orekit::files::ilrs::CRDHeader$RangeType(env->callObjectMethod(this$, mids$[mid_getRangeType_54a37f66575b569a]));
        }

        jint CRDHeader::getSpacecraftEpochTimeScale() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpacecraftEpochTimeScale_55546ef6a647f39b]);
        }

        ::java::lang::String CRDHeader::getStationName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationName_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDHeader::getStationNetword() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationNetword_1c1fa1e935d6cdcf]));
        }

        jint CRDHeader::getSystemIdentifier() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemIdentifier_55546ef6a647f39b]);
        }

        jint CRDHeader::getSystemNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemNumber_55546ef6a647f39b]);
        }

        jint CRDHeader::getSystemOccupancy() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemOccupancy_55546ef6a647f39b]);
        }

        jint CRDHeader::getYearOfCentury() const
        {
          return env->callIntMethod(this$, mids$[mid_getYearOfCentury_55546ef6a647f39b]);
        }

        jboolean CRDHeader::isCenterOfMassCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCenterOfMassCorrectionApplied_9ab94ac1dc23b105]);
        }

        jboolean CRDHeader::isReceiveAmplitudeCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isReceiveAmplitudeCorrectionApplied_9ab94ac1dc23b105]);
        }

        jboolean CRDHeader::isStationSystemDelayApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isStationSystemDelayApplied_9ab94ac1dc23b105]);
        }

        jboolean CRDHeader::isTransponderDelayApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTransponderDelayApplied_9ab94ac1dc23b105]);
        }

        jboolean CRDHeader::isTroposphericRefractionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTroposphericRefractionApplied_9ab94ac1dc23b105]);
        }

        void CRDHeader::setDataReleaseFlag(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataReleaseFlag_44ed599e93e8a30c], a0);
        }

        void CRDHeader::setDataType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataType_44ed599e93e8a30c], a0);
        }

        void CRDHeader::setDateAndTime(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDateAndTime_734b91ac30d5f9b4], a0.this$);
        }

        void CRDHeader::setEpochIdentifier(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochIdentifier_44ed599e93e8a30c], a0);
        }

        void CRDHeader::setIsCenterOfMassCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCenterOfMassCorrectionApplied_fcb96c98de6fad04], a0);
        }

        void CRDHeader::setIsReceiveAmplitudeCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsReceiveAmplitudeCorrectionApplied_fcb96c98de6fad04], a0);
        }

        void CRDHeader::setIsStationSystemDelayApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsStationSystemDelayApplied_fcb96c98de6fad04], a0);
        }

        void CRDHeader::setIsTransponderDelayApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsTransponderDelayApplied_fcb96c98de6fad04], a0);
        }

        void CRDHeader::setIsTroposphericRefractionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsTroposphericRefractionApplied_fcb96c98de6fad04], a0);
        }

        void CRDHeader::setPredictionProvider(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPredictionProvider_734b91ac30d5f9b4], a0.this$);
        }

        void CRDHeader::setPredictionType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPredictionType_44ed599e93e8a30c], a0);
        }

        void CRDHeader::setQualityIndicator(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setQualityIndicator_44ed599e93e8a30c], a0);
        }

        void CRDHeader::setRangeType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRangeType_44ed599e93e8a30c], a0);
        }

        void CRDHeader::setSpacecraftEpochTimeScale(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpacecraftEpochTimeScale_44ed599e93e8a30c], a0);
        }

        void CRDHeader::setStationName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationName_734b91ac30d5f9b4], a0.this$);
        }

        void CRDHeader::setStationNetword(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationNetword_734b91ac30d5f9b4], a0.this$);
        }

        void CRDHeader::setSystemIdentifier(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemIdentifier_44ed599e93e8a30c], a0);
        }

        void CRDHeader::setSystemNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemNumber_44ed599e93e8a30c], a0);
        }

        void CRDHeader::setSystemOccupancy(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemOccupancy_44ed599e93e8a30c], a0);
        }

        void CRDHeader::setYearOfCentury(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setYearOfCentury_44ed599e93e8a30c], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDHeader_init_(t_CRDHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDHeader_getDataReleaseFlag(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getDataType(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getDateAndTime(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getEpochIdentifier(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH1CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH2CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH3CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH4CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH5CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getPredictionProvider(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getPredictionType(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getQualityIndicator(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getRangeType(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSpacecraftEpochTimeScale(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getStationName(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getStationNetword(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSystemIdentifier(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSystemNumber(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSystemOccupancy(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getYearOfCentury(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isCenterOfMassCorrectionApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isReceiveAmplitudeCorrectionApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isStationSystemDelayApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isTransponderDelayApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isTroposphericRefractionApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_setDataReleaseFlag(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setDataType(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setDateAndTime(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setEpochIdentifier(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsCenterOfMassCorrectionApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsReceiveAmplitudeCorrectionApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsStationSystemDelayApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsTransponderDelayApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsTroposphericRefractionApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setPredictionProvider(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setPredictionType(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setQualityIndicator(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setRangeType(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSpacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setStationName(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setStationNetword(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSystemIdentifier(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSystemNumber(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSystemOccupancy(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setYearOfCentury(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_get__centerOfMassCorrectionApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__dataReleaseFlag(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__dataReleaseFlag(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__dataType(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__dataType(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__dateAndTime(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__dateAndTime(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__epochIdentifier(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__epochIdentifier(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__h1CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h2CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h3CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h4CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h5CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__predictionProvider(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__predictionProvider(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__predictionType(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__predictionType(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__qualityIndicator(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__qualityIndicator(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__rangeType(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__rangeType(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__receiveAmplitudeCorrectionApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__spacecraftEpochTimeScale(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__spacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__stationName(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__stationName(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__stationNetword(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__stationNetword(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__stationSystemDelayApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__systemIdentifier(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__systemIdentifier(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__systemNumber(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__systemNumber(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__systemOccupancy(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__systemOccupancy(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__transponderDelayApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__troposphericRefractionApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__yearOfCentury(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__yearOfCentury(t_CRDHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDHeader__fields_[] = {
          DECLARE_GET_FIELD(t_CRDHeader, centerOfMassCorrectionApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, dataReleaseFlag),
          DECLARE_GETSET_FIELD(t_CRDHeader, dataType),
          DECLARE_GETSET_FIELD(t_CRDHeader, dateAndTime),
          DECLARE_GETSET_FIELD(t_CRDHeader, epochIdentifier),
          DECLARE_GET_FIELD(t_CRDHeader, h1CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h2CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h3CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h4CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h5CrdString),
          DECLARE_GETSET_FIELD(t_CRDHeader, predictionProvider),
          DECLARE_GETSET_FIELD(t_CRDHeader, predictionType),
          DECLARE_GETSET_FIELD(t_CRDHeader, qualityIndicator),
          DECLARE_GETSET_FIELD(t_CRDHeader, rangeType),
          DECLARE_GET_FIELD(t_CRDHeader, receiveAmplitudeCorrectionApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, spacecraftEpochTimeScale),
          DECLARE_GETSET_FIELD(t_CRDHeader, stationName),
          DECLARE_GETSET_FIELD(t_CRDHeader, stationNetword),
          DECLARE_GET_FIELD(t_CRDHeader, stationSystemDelayApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, systemIdentifier),
          DECLARE_GETSET_FIELD(t_CRDHeader, systemNumber),
          DECLARE_GETSET_FIELD(t_CRDHeader, systemOccupancy),
          DECLARE_GET_FIELD(t_CRDHeader, transponderDelayApplied),
          DECLARE_GET_FIELD(t_CRDHeader, troposphericRefractionApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, yearOfCentury),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDHeader__methods_[] = {
          DECLARE_METHOD(t_CRDHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader, getDataReleaseFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getDataType, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getDateAndTime, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getEpochIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH1CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH2CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH3CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH4CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH5CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getPredictionProvider, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getPredictionType, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getQualityIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getRangeType, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSpacecraftEpochTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getStationName, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getStationNetword, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSystemIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSystemNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSystemOccupancy, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getYearOfCentury, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isCenterOfMassCorrectionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isReceiveAmplitudeCorrectionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isStationSystemDelayApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isTransponderDelayApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isTroposphericRefractionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, setDataReleaseFlag, METH_O),
          DECLARE_METHOD(t_CRDHeader, setDataType, METH_O),
          DECLARE_METHOD(t_CRDHeader, setDateAndTime, METH_O),
          DECLARE_METHOD(t_CRDHeader, setEpochIdentifier, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsCenterOfMassCorrectionApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsReceiveAmplitudeCorrectionApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsStationSystemDelayApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsTransponderDelayApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsTroposphericRefractionApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setPredictionProvider, METH_O),
          DECLARE_METHOD(t_CRDHeader, setPredictionType, METH_O),
          DECLARE_METHOD(t_CRDHeader, setQualityIndicator, METH_O),
          DECLARE_METHOD(t_CRDHeader, setRangeType, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSpacecraftEpochTimeScale, METH_O),
          DECLARE_METHOD(t_CRDHeader, setStationName, METH_O),
          DECLARE_METHOD(t_CRDHeader, setStationNetword, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSystemIdentifier, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSystemNumber, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSystemOccupancy, METH_O),
          DECLARE_METHOD(t_CRDHeader, setYearOfCentury, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDHeader)[] = {
          { Py_tp_methods, t_CRDHeader__methods_ },
          { Py_tp_init, (void *) t_CRDHeader_init_ },
          { Py_tp_getset, t_CRDHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(CRDHeader, t_CRDHeader, CRDHeader);

        void t_CRDHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDHeader), &PY_TYPE_DEF(CRDHeader), module, "CRDHeader", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "RangeType", make_descriptor(&PY_TYPE_DEF(CRDHeader$RangeType)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "DataType", make_descriptor(&PY_TYPE_DEF(CRDHeader$DataType)));
        }

        void t_CRDHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "class_", make_descriptor(CRDHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "wrapfn_", make_descriptor(t_CRDHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDHeader::initializeClass, 1)))
            return NULL;
          return t_CRDHeader::wrap_Object(CRDHeader(((t_CRDHeader *) arg)->object.this$));
        }
        static PyObject *t_CRDHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDHeader_init_(t_CRDHeader *self, PyObject *args, PyObject *kwds)
        {
          CRDHeader object((jobject) NULL);

          INT_CALL(object = CRDHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDHeader_getDataReleaseFlag(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataReleaseFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getDataType(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getDateAndTime(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDateAndTime());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getEpochIdentifier(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEpochIdentifier());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getH1CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH1CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH2CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH2CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH3CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH3CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH4CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH4CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH5CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH5CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getPredictionProvider(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictionProvider());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getPredictionType(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPredictionType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getQualityIndicator(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getQualityIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getRangeType(t_CRDHeader *self)
        {
          ::org::orekit::files::ilrs::CRDHeader$RangeType result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeType());
          return ::org::orekit::files::ilrs::t_CRDHeader$RangeType::wrap_Object(result);
        }

        static PyObject *t_CRDHeader_getSpacecraftEpochTimeScale(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpacecraftEpochTimeScale());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getStationName(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationName());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getStationNetword(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationNetword());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getSystemIdentifier(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSystemIdentifier());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getSystemNumber(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSystemNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getSystemOccupancy(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSystemOccupancy());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getYearOfCentury(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getYearOfCentury());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_isCenterOfMassCorrectionApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isReceiveAmplitudeCorrectionApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isReceiveAmplitudeCorrectionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isStationSystemDelayApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isStationSystemDelayApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isTransponderDelayApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTransponderDelayApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isTroposphericRefractionApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTroposphericRefractionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_setDataReleaseFlag(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setDataReleaseFlag(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataReleaseFlag", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setDataType(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setDataType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setDateAndTime(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDateAndTime(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDateAndTime", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setEpochIdentifier(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setEpochIdentifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochIdentifier", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsCenterOfMassCorrectionApplied(t_CRDHeader *self, PyObject *arg)
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

        static PyObject *t_CRDHeader_setIsReceiveAmplitudeCorrectionApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsReceiveAmplitudeCorrectionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsReceiveAmplitudeCorrectionApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsStationSystemDelayApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsStationSystemDelayApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsStationSystemDelayApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsTransponderDelayApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsTransponderDelayApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsTransponderDelayApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsTroposphericRefractionApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsTroposphericRefractionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsTroposphericRefractionApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setPredictionProvider(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPredictionProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPredictionProvider", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setPredictionType(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setPredictionType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPredictionType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setQualityIndicator(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setQualityIndicator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setQualityIndicator", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setRangeType(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRangeType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRangeType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSpacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSpacecraftEpochTimeScale(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpacecraftEpochTimeScale", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setStationName(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setStationName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationName", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setStationNetword(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setStationNetword(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationNetword", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSystemIdentifier(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSystemIdentifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemIdentifier", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSystemNumber(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSystemNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSystemOccupancy(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSystemOccupancy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemOccupancy", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setYearOfCentury(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setYearOfCentury(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setYearOfCentury", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_get__centerOfMassCorrectionApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__dataReleaseFlag(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataReleaseFlag());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__dataReleaseFlag(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setDataReleaseFlag(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataReleaseFlag", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__dataType(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataType());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__dataType(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setDataType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataType", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__dateAndTime(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDateAndTime());
          return j2p(value);
        }
        static int t_CRDHeader_set__dateAndTime(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDateAndTime(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dateAndTime", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__epochIdentifier(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEpochIdentifier());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__epochIdentifier(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setEpochIdentifier(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochIdentifier", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__h1CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH1CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h2CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH2CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h3CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH3CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h4CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH4CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h5CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH5CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__predictionProvider(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictionProvider());
          return j2p(value);
        }
        static int t_CRDHeader_set__predictionProvider(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPredictionProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "predictionProvider", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__predictionType(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPredictionType());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__predictionType(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setPredictionType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "predictionType", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__qualityIndicator(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getQualityIndicator());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__qualityIndicator(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setQualityIndicator(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "qualityIndicator", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__rangeType(t_CRDHeader *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDHeader$RangeType value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeType());
          return ::org::orekit::files::ilrs::t_CRDHeader$RangeType::wrap_Object(value);
        }
        static int t_CRDHeader_set__rangeType(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRangeType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "rangeType", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__receiveAmplitudeCorrectionApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isReceiveAmplitudeCorrectionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__spacecraftEpochTimeScale(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpacecraftEpochTimeScale());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__spacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSpacecraftEpochTimeScale(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spacecraftEpochTimeScale", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__stationName(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationName());
          return j2p(value);
        }
        static int t_CRDHeader_set__stationName(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setStationName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationName", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__stationNetword(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationNetword());
          return j2p(value);
        }
        static int t_CRDHeader_set__stationNetword(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setStationNetword(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationNetword", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__stationSystemDelayApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isStationSystemDelayApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__systemIdentifier(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSystemIdentifier());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__systemIdentifier(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSystemIdentifier(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemIdentifier", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__systemNumber(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSystemNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__systemNumber(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSystemNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemNumber", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__systemOccupancy(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSystemOccupancy());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__systemOccupancy(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSystemOccupancy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemOccupancy", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__transponderDelayApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTransponderDelayApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__troposphericRefractionApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTroposphericRefractionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__yearOfCentury(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getYearOfCentury());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__yearOfCentury(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setYearOfCentury(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "yearOfCentury", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/ModifiedFrame.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *ModifiedFrame::class$ = NULL;
          jmethodID *ModifiedFrame::mids$ = NULL;
          bool ModifiedFrame::live$ = false;

          jclass ModifiedFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/ModifiedFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_de69c2063d8ea113] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;Lorg/orekit/bodies/CelestialBody;Ljava/lang/String;)V");
              mids$[mid_getCenterName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCenterName", "()Ljava/lang/String;");
              mids$[mid_getRefFrame_5ac4f33db9e11fd5] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifiedFrame::ModifiedFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame & a1, const ::org::orekit::bodies::CelestialBody & a2, const ::java::lang::String & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_de69c2063d8ea113, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::String ModifiedFrame::getCenterName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCenterName_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::files::ccsds::definitions::CelestialBodyFrame ModifiedFrame::getRefFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::CelestialBodyFrame(env->callObjectMethod(this$, mids$[mid_getRefFrame_5ac4f33db9e11fd5]));
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
          static PyObject *t_ModifiedFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifiedFrame_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifiedFrame_init_(t_ModifiedFrame *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ModifiedFrame_getCenterName(t_ModifiedFrame *self);
          static PyObject *t_ModifiedFrame_getRefFrame(t_ModifiedFrame *self);
          static PyObject *t_ModifiedFrame_get__centerName(t_ModifiedFrame *self, void *data);
          static PyObject *t_ModifiedFrame_get__refFrame(t_ModifiedFrame *self, void *data);
          static PyGetSetDef t_ModifiedFrame__fields_[] = {
            DECLARE_GET_FIELD(t_ModifiedFrame, centerName),
            DECLARE_GET_FIELD(t_ModifiedFrame, refFrame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ModifiedFrame__methods_[] = {
            DECLARE_METHOD(t_ModifiedFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedFrame, getCenterName, METH_NOARGS),
            DECLARE_METHOD(t_ModifiedFrame, getRefFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifiedFrame)[] = {
            { Py_tp_methods, t_ModifiedFrame__methods_ },
            { Py_tp_init, (void *) t_ModifiedFrame_init_ },
            { Py_tp_getset, t_ModifiedFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifiedFrame)[] = {
            &PY_TYPE_DEF(::org::orekit::frames::Frame),
            NULL
          };

          DEFINE_TYPE(ModifiedFrame, t_ModifiedFrame, ModifiedFrame);

          void t_ModifiedFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifiedFrame), &PY_TYPE_DEF(ModifiedFrame), module, "ModifiedFrame", 0);
          }

          void t_ModifiedFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "class_", make_descriptor(ModifiedFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "wrapfn_", make_descriptor(t_ModifiedFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifiedFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifiedFrame::initializeClass, 1)))
              return NULL;
            return t_ModifiedFrame::wrap_Object(ModifiedFrame(((t_ModifiedFrame *) arg)->object.this$));
          }
          static PyObject *t_ModifiedFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifiedFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifiedFrame_init_(t_ModifiedFrame *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::CelestialBody a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ModifiedFrame object((jobject) NULL);

            if (!parseArgs(args, "kKks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::parameters_, &a2, &a3))
            {
              INT_CALL(object = ModifiedFrame(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ModifiedFrame_getCenterName(t_ModifiedFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenterName());
            return j2p(result);
          }

          static PyObject *t_ModifiedFrame_getRefFrame(t_ModifiedFrame *self)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.getRefFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(result);
          }

          static PyObject *t_ModifiedFrame_get__centerName(t_ModifiedFrame *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenterName());
            return j2p(value);
          }

          static PyObject *t_ModifiedFrame_get__refFrame(t_ModifiedFrame *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame value((jobject) NULL);
            OBJ_CALL(value = self->object.getRefFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/UTCTAIOffset.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/time/OffsetModel.h"
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
          mids$[mid_getBaseOffsets_cb666ea1a15f5210] = env->getMethodID(cls, "getBaseOffsets", "()Ljava/util/Collection;");
          mids$[mid_getFirstKnownLeapSecond_c325492395d89b24] = env->getMethodID(cls, "getFirstKnownLeapSecond", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLastKnownLeapSecond_c325492395d89b24] = env->getMethodID(cls, "getLastKnownLeapSecond", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLeap_fd347811007a6ba3] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_140b8964300ddedf] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getUTCTAIOffsets_e62d3bb06d56d7e3] = env->getMethodID(cls, "getUTCTAIOffsets", "()Ljava/util/List;");
          mids$[mid_insideLeap_a35647bda2901f54] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_42be643fd1505244] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_b977b1a10a6965aa] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_e6b8e60343f2c829] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e7a49f02c43fd893] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::Collection UTCScale::getBaseOffsets() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getBaseOffsets_cb666ea1a15f5210]));
      }

      ::org::orekit::time::AbsoluteDate UTCScale::getFirstKnownLeapSecond() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFirstKnownLeapSecond_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate UTCScale::getLastKnownLeapSecond() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastKnownLeapSecond_c325492395d89b24]));
      }

      jdouble UTCScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_140b8964300ddedf], a0.this$));
      }

      ::java::lang::String UTCScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::java::util::List UTCScale::getUTCTAIOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUTCTAIOffsets_e62d3bb06d56d7e3]));
      }

      jboolean UTCScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_a35647bda2901f54], a0.this$);
      }

      jboolean UTCScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_42be643fd1505244], a0.this$);
      }

      jint UTCScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_b977b1a10a6965aa], a0.this$);
      }

      jint UTCScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_e6b8e60343f2c829], a0.this$);
      }

      jdouble UTCScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble UTCScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::java::lang::String UTCScale::toString() const
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractWindUp.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractWindUp::class$ = NULL;
          jmethodID *PythonAbstractWindUp::mids$ = NULL;
          bool PythonAbstractWindUp::live$ = false;

          jclass PythonAbstractWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a460ca1565b8ffe9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/Dipole;Lorg/orekit/estimation/measurements/gnss/Dipole;)V");
              mids$[mid_emitterToInert_3b9f748b89094cc6] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_receiverToInert_3b9f748b89094cc6] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractWindUp::PythonAbstractWindUp(const ::org::orekit::estimation::measurements::gnss::Dipole & a0, const ::org::orekit::estimation::measurements::gnss::Dipole & a1) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(env->newObject(initializeClass, &mids$, mid_init$_a460ca1565b8ffe9, a0.this$, a1.this$)) {}

          void PythonAbstractWindUp::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAbstractWindUp::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractWindUp::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonAbstractWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWindUp_of_(t_PythonAbstractWindUp *self, PyObject *args);
          static int t_PythonAbstractWindUp_init_(t_PythonAbstractWindUp *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractWindUp_finalize(t_PythonAbstractWindUp *self);
          static PyObject *t_PythonAbstractWindUp_pythonExtension(t_PythonAbstractWindUp *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractWindUp_emitterToInert0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractWindUp_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractWindUp_receiverToInert2(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonAbstractWindUp_get__self(t_PythonAbstractWindUp *self, void *data);
          static PyObject *t_PythonAbstractWindUp_get__parameters_(t_PythonAbstractWindUp *self, void *data);
          static PyGetSetDef t_PythonAbstractWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractWindUp, self),
            DECLARE_GET_FIELD(t_PythonAbstractWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractWindUp__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWindUp, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractWindUp, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractWindUp, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractWindUp)[] = {
            { Py_tp_methods, t_PythonAbstractWindUp__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractWindUp_init_ },
            { Py_tp_getset, t_PythonAbstractWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractWindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(PythonAbstractWindUp, t_PythonAbstractWindUp, PythonAbstractWindUp);
          PyObject *t_PythonAbstractWindUp::wrap_Object(const PythonAbstractWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractWindUp *self = (t_PythonAbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractWindUp *self = (t_PythonAbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractWindUp), &PY_TYPE_DEF(PythonAbstractWindUp), module, "PythonAbstractWindUp", 1);
          }

          void t_PythonAbstractWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "class_", make_descriptor(PythonAbstractWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "wrapfn_", make_descriptor(t_PythonAbstractWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractWindUp::initializeClass);
            JNINativeMethod methods[] = {
              { "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractWindUp_emitterToInert0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractWindUp_pythonDecRef1 },
              { "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractWindUp_receiverToInert2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAbstractWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractWindUp::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractWindUp::wrap_Object(PythonAbstractWindUp(((t_PythonAbstractWindUp *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractWindUp_of_(t_PythonAbstractWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractWindUp_init_(t_PythonAbstractWindUp *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::Dipole a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::Dipole a1((jobject) NULL);
            PythonAbstractWindUp object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PythonAbstractWindUp(a0, a1));
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

          static PyObject *t_PythonAbstractWindUp_finalize(t_PythonAbstractWindUp *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractWindUp_pythonExtension(t_PythonAbstractWindUp *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractWindUp_emitterToInert0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
            PyObject *result = PyObject_CallMethod(obj, "emitterToInert", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
            {
              throwTypeError("emitterToInert", result);
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

          static void JNICALL t_PythonAbstractWindUp_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonAbstractWindUp_receiverToInert2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
            PyObject *result = PyObject_CallMethod(obj, "receiverToInert", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
            {
              throwTypeError("receiverToInert", result);
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

          static PyObject *t_PythonAbstractWindUp_get__self(t_PythonAbstractWindUp *self, void *data)
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
          static PyObject *t_PythonAbstractWindUp_get__parameters_(t_PythonAbstractWindUp *self, void *data)
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
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldSpacecraftState::class$ = NULL;
      jmethodID *FieldSpacecraftState::mids$ = NULL;
      bool FieldSpacecraftState::live$ = false;

      jclass FieldSpacecraftState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldSpacecraftState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_beb4bdc45ab9c303] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_01b80e5fc8224f27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_b548402b0e1cc562] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;)V");
          mids$[mid_init$_8758b83db99c950e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_34cfdb95f9e80025] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_ed1a43c7982c29e0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;)V");
          mids$[mid_init$_84d3cf6d857753d9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_a6d98b09777eed78] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_init$_49f6b8e8e63ddd72] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_dd365696e7ab7496] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_6cb72fee56638319] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_bcb99ab75d454a16] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_ac71f4e74ab06572] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_8312fc657bcaa45f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_31a5e9459a250dac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_0832f51b90c9153f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_f379dbc3edea5c0b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_3ce811b3b358af52] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_0dcd565e8f424093] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_addAdditionalState_9512220711eb1448] = env->getMethodID(cls, "addAdditionalState", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_addAdditionalStateDerivative_9512220711eb1448] = env->getMethodID(cls, "addAdditionalStateDerivative", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_ensureCompatibleAdditionalStates_54d9efbf99822980] = env->getMethodID(cls, "ensureCompatibleAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_getA_81520b552cb3fa26] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAbsPVA_fdfa202bea07005b] = env->getMethodID(cls, "getAbsPVA", "()Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_getAdditionalState_f25dcdbfa4b24501] = env->getMethodID(cls, "getAdditionalState", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAdditionalStateDerivative_f25dcdbfa4b24501] = env->getMethodID(cls, "getAdditionalStateDerivative", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAdditionalStatesDerivatives_7c5d47860532e9d9] = env->getMethodID(cls, "getAdditionalStatesDerivatives", "()Lorg/orekit/utils/FieldArrayDictionary;");
          mids$[mid_getAdditionalStatesValues_7c5d47860532e9d9] = env->getMethodID(cls, "getAdditionalStatesValues", "()Lorg/orekit/utils/FieldArrayDictionary;");
          mids$[mid_getAttitude_e33cb3686942b4e6] = env->getMethodID(cls, "getAttitude", "()Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getE_81520b552cb3fa26] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_81520b552cb3fa26] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_81520b552cb3fa26] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_81520b552cb3fa26] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianMeanMotion_81520b552cb3fa26] = env->getMethodID(cls, "getKeplerianMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianPeriod_81520b552cb3fa26] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_81520b552cb3fa26] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_81520b552cb3fa26] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_81520b552cb3fa26] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMass_81520b552cb3fa26] = env->getMethodID(cls, "getMass", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMu_81520b552cb3fa26] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOrbit_52c9ebac01a11008] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_getPVCoordinates_243debd9cc1dd623] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_dda5a3346286675e] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_ff5ac73a7b43eddd] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_566ff18e6be34b64] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_hasAdditionalState_cde6b28e15c96b75] = env->getMethodID(cls, "hasAdditionalState", "(Ljava/lang/String;)Z");
          mids$[mid_hasAdditionalStateDerivative_cde6b28e15c96b75] = env->getMethodID(cls, "hasAdditionalStateDerivative", "(Ljava/lang/String;)Z");
          mids$[mid_isOrbitDefined_9ab94ac1dc23b105] = env->getMethodID(cls, "isOrbitDefined", "()Z");
          mids$[mid_shiftedBy_99abaac51ab0fa84] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_shiftedBy_1ff97eb187bf68c1] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_toSpacecraftState_9d155cc8314c99cf] = env->getMethodID(cls, "toSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_toStaticTransform_f5bae1937d1edbc7] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toTransform_b8c22ddb6f9598ea] = env->getMethodID(cls, "toTransform", "()Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_beb4bdc45ab9c303, a0.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_01b80e5fc8224f27, a0.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b548402b0e1cc562, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::utils::FieldArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8758b83db99c950e, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_34cfdb95f9e80025, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed1a43c7982c29e0, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::utils::FieldArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84d3cf6d857753d9, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::SpacecraftState & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a6d98b09777eed78, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49f6b8e8e63ddd72, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dd365696e7ab7496, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6cb72fee56638319, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bcb99ab75d454a16, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ac71f4e74ab06572, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8312fc657bcaa45f, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_31a5e9459a250dac, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0832f51b90c9153f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f379dbc3edea5c0b, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3, const ::org::orekit::utils::FieldArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3ce811b3b358af52, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3, const ::org::orekit::utils::FieldArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0dcd565e8f424093, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldSpacecraftState FieldSpacecraftState::addAdditionalState(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalState_9512220711eb1448], a0.this$, a1.this$));
      }

      FieldSpacecraftState FieldSpacecraftState::addAdditionalStateDerivative(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalStateDerivative_9512220711eb1448], a0.this$, a1.this$));
      }

      void FieldSpacecraftState::ensureCompatibleAdditionalStates(const FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_ensureCompatibleAdditionalStates_54d9efbf99822980], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_81520b552cb3fa26]));
      }

      ::org::orekit::utils::FieldAbsolutePVCoordinates FieldSpacecraftState::getAbsPVA() const
      {
        return ::org::orekit::utils::FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getAbsPVA_fdfa202bea07005b]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSpacecraftState::getAdditionalState(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_f25dcdbfa4b24501], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSpacecraftState::getAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalStateDerivative_f25dcdbfa4b24501], a0.this$));
      }

      ::org::orekit::utils::FieldArrayDictionary FieldSpacecraftState::getAdditionalStatesDerivatives() const
      {
        return ::org::orekit::utils::FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesDerivatives_7c5d47860532e9d9]));
      }

      ::org::orekit::utils::FieldArrayDictionary FieldSpacecraftState::getAdditionalStatesValues() const
      {
        return ::org::orekit::utils::FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesValues_7c5d47860532e9d9]));
      }

      ::org::orekit::attitudes::FieldAttitude FieldSpacecraftState::getAttitude() const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_e33cb3686942b4e6]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldSpacecraftState::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_81520b552cb3fa26]));
      }

      ::org::orekit::frames::Frame FieldSpacecraftState::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getKeplerianMeanMotion() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianMeanMotion_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getKeplerianPeriod() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getMass() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMass_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getMu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_81520b552cb3fa26]));
      }

      ::org::orekit::orbits::FieldOrbit FieldSpacecraftState::getOrbit() const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOrbit_52c9ebac01a11008]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldSpacecraftState::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_243debd9cc1dd623]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldSpacecraftState::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_dda5a3346286675e], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldSpacecraftState::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldSpacecraftState::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_566ff18e6be34b64], a0.this$));
      }

      jboolean FieldSpacecraftState::hasAdditionalState(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalState_cde6b28e15c96b75], a0.this$);
      }

      jboolean FieldSpacecraftState::hasAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalStateDerivative_cde6b28e15c96b75], a0.this$);
      }

      jboolean FieldSpacecraftState::isOrbitDefined() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isOrbitDefined_9ab94ac1dc23b105]);
      }

      FieldSpacecraftState FieldSpacecraftState::shiftedBy(jdouble a0) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_99abaac51ab0fa84], a0));
      }

      FieldSpacecraftState FieldSpacecraftState::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_1ff97eb187bf68c1], a0.this$));
      }

      ::org::orekit::propagation::SpacecraftState FieldSpacecraftState::toSpacecraftState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_toSpacecraftState_9d155cc8314c99cf]));
      }

      ::org::orekit::frames::FieldStaticTransform FieldSpacecraftState::toStaticTransform() const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_f5bae1937d1edbc7]));
      }

      ::java::lang::String FieldSpacecraftState::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::org::orekit::frames::FieldTransform FieldSpacecraftState::toTransform() const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_toTransform_b8c22ddb6f9598ea]));
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
      static PyObject *t_FieldSpacecraftState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_of_(t_FieldSpacecraftState *self, PyObject *args);
      static int t_FieldSpacecraftState_init_(t_FieldSpacecraftState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSpacecraftState_addAdditionalState(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_addAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_ensureCompatibleAdditionalStates(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getA(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAbsPVA(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAdditionalState(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getAdditionalStatesDerivatives(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAdditionalStatesValues(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAttitude(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getDate(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getE(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getEquinoctialEx(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getEquinoctialEy(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getFrame(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getHx(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getHy(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getI(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getKeplerianMeanMotion(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getKeplerianPeriod(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLE(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLM(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLv(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getMass(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getMu(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getOrbit(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getPVCoordinates(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_getPosition(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_hasAdditionalState(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_hasAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_isOrbitDefined(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_shiftedBy(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_toSpacecraftState(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_toStaticTransform(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_toString(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_toTransform(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_get__a(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__absPVA(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__additionalStatesDerivatives(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__additionalStatesValues(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__attitude(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__date(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__e(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__equinoctialEx(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__equinoctialEy(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__frame(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__hx(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__hy(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__i(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__keplerianMeanMotion(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__keplerianPeriod(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lE(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lM(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lv(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__mass(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__mu(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__orbit(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__orbitDefined(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__pVCoordinates(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__position(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__parameters_(t_FieldSpacecraftState *self, void *data);
      static PyGetSetDef t_FieldSpacecraftState__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSpacecraftState, a),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, absPVA),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, additionalStatesDerivatives),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, additionalStatesValues),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, attitude),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, date),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, e),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, frame),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, hx),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, hy),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, i),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, keplerianPeriod),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lE),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lM),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lv),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, mass),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, mu),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, orbit),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, orbitDefined),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, position),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSpacecraftState__methods_[] = {
        DECLARE_METHOD(t_FieldSpacecraftState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftState, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, addAdditionalState, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, addAdditionalStateDerivative, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, ensureCompatibleAdditionalStates, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAbsPVA, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStatesDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStatesValues, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAttitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getE, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getHx, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getHy, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLM, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLv, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getMass, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getMu, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getOrbit, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, hasAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, hasAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, isOrbitDefined, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toSpacecraftState, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toTransform, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSpacecraftState)[] = {
        { Py_tp_methods, t_FieldSpacecraftState__methods_ },
        { Py_tp_init, (void *) t_FieldSpacecraftState_init_ },
        { Py_tp_getset, t_FieldSpacecraftState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSpacecraftState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSpacecraftState, t_FieldSpacecraftState, FieldSpacecraftState);
      PyObject *t_FieldSpacecraftState::wrap_Object(const FieldSpacecraftState& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftState::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftState *self = (t_FieldSpacecraftState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSpacecraftState::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftState::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftState *self = (t_FieldSpacecraftState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSpacecraftState::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSpacecraftState), &PY_TYPE_DEF(FieldSpacecraftState), module, "FieldSpacecraftState", 0);
      }

      void t_FieldSpacecraftState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "class_", make_descriptor(FieldSpacecraftState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "wrapfn_", make_descriptor(t_FieldSpacecraftState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSpacecraftState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSpacecraftState::initializeClass, 1)))
          return NULL;
        return t_FieldSpacecraftState::wrap_Object(FieldSpacecraftState(((t_FieldSpacecraftState *) arg)->object.this$));
      }
      static PyObject *t_FieldSpacecraftState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSpacecraftState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSpacecraftState_of_(t_FieldSpacecraftState *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSpacecraftState_init_(t_FieldSpacecraftState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldArrayDictionary a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldArrayDictionary a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldArrayDictionary a4((jobject) NULL);
            PyTypeObject **p4;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldArrayDictionary a4((jobject) NULL);
            PyTypeObject **p4;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldSpacecraftState_addAdditionalState(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.addAdditionalState(a0, a1));
          return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalState", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_addAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.addAdditionalStateDerivative(a0, a1));
          return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateDerivative", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_ensureCompatibleAdditionalStates(t_FieldSpacecraftState *self, PyObject *arg)
      {
        FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", FieldSpacecraftState::initializeClass, &a0, &p0, t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.ensureCompatibleAdditionalStates(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "ensureCompatibleAdditionalStates", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getA(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getAbsPVA(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldAbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVA());
        return ::org::orekit::utils::t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalState(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalStateDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStatesDerivatives(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStatesValues(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAttitude(t_FieldSpacecraftState *self)
      {
        ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitude());
        return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getDate(t_FieldSpacecraftState *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getE(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getEquinoctialEx(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getEquinoctialEy(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getFrame(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getHx(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getHy(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getI(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getKeplerianMeanMotion(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getKeplerianPeriod(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLE(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLM(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLv(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLv());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getMass(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMass());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getMu(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getOrbit(t_FieldSpacecraftState *self)
      {
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbit());
        return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getPVCoordinates(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getPosition(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_hasAdditionalState(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalState(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_hasAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalStateDerivative(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_isOrbitDefined(t_FieldSpacecraftState *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isOrbitDefined());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldSpacecraftState_shiftedBy(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_toSpacecraftState(t_FieldSpacecraftState *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.toSpacecraftState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_toStaticTransform(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_toString(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftState), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldSpacecraftState_toTransform(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toTransform());
        return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldSpacecraftState_get__parameters_(t_FieldSpacecraftState *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSpacecraftState_get__a(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__absPVA(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldAbsolutePVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVA());
        return ::org::orekit::utils::t_FieldAbsolutePVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__additionalStatesDerivatives(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__additionalStatesValues(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__attitude(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitude());
        return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__date(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__e(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__equinoctialEx(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__equinoctialEy(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__frame(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__hx(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__hy(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__i(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__keplerianMeanMotion(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__keplerianPeriod(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lE(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lM(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lv(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__mass(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMass());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__mu(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__orbit(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbit());
        return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__orbitDefined(t_FieldSpacecraftState *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isOrbitDefined());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldSpacecraftState_get__pVCoordinates(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__position(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}

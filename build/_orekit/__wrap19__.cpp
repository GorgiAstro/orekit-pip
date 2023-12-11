#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/VariationalEquation$MismatchedEquations.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *VariationalEquation$MismatchedEquations::class$ = NULL;
      jmethodID *VariationalEquation$MismatchedEquations::mids$ = NULL;
      bool VariationalEquation$MismatchedEquations::live$ = false;

      jclass VariationalEquation$MismatchedEquations::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/VariationalEquation$MismatchedEquations");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      VariationalEquation$MismatchedEquations::VariationalEquation$MismatchedEquations() : ::org::hipparchus::exception::MathIllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_VariationalEquation$MismatchedEquations_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VariationalEquation$MismatchedEquations_instance_(PyTypeObject *type, PyObject *arg);
      static int t_VariationalEquation$MismatchedEquations_init_(t_VariationalEquation$MismatchedEquations *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_VariationalEquation$MismatchedEquations__methods_[] = {
        DECLARE_METHOD(t_VariationalEquation$MismatchedEquations, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation$MismatchedEquations, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VariationalEquation$MismatchedEquations)[] = {
        { Py_tp_methods, t_VariationalEquation$MismatchedEquations__methods_ },
        { Py_tp_init, (void *) t_VariationalEquation$MismatchedEquations_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VariationalEquation$MismatchedEquations)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathIllegalArgumentException),
        NULL
      };

      DEFINE_TYPE(VariationalEquation$MismatchedEquations, t_VariationalEquation$MismatchedEquations, VariationalEquation$MismatchedEquations);

      void t_VariationalEquation$MismatchedEquations::install(PyObject *module)
      {
        installType(&PY_TYPE(VariationalEquation$MismatchedEquations), &PY_TYPE_DEF(VariationalEquation$MismatchedEquations), module, "VariationalEquation$MismatchedEquations", 0);
      }

      void t_VariationalEquation$MismatchedEquations::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "class_", make_descriptor(VariationalEquation$MismatchedEquations::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "wrapfn_", make_descriptor(t_VariationalEquation$MismatchedEquations::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VariationalEquation$MismatchedEquations_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VariationalEquation$MismatchedEquations::initializeClass, 1)))
          return NULL;
        return t_VariationalEquation$MismatchedEquations::wrap_Object(VariationalEquation$MismatchedEquations(((t_VariationalEquation$MismatchedEquations *) arg)->object.this$));
      }
      static PyObject *t_VariationalEquation$MismatchedEquations_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VariationalEquation$MismatchedEquations::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_VariationalEquation$MismatchedEquations_init_(t_VariationalEquation$MismatchedEquations *self, PyObject *args, PyObject *kwds)
      {
        VariationalEquation$MismatchedEquations object((jobject) NULL);

        INT_CALL(object = VariationalEquation$MismatchedEquations());
        self->object = object;

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateFunction::mids$ = NULL;
      bool CalculusFieldMultivariateFunction::live$ = false;

      jclass CalculusFieldMultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_e3919ad898361abd] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldMultivariateFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_e3919ad898361abd], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_of_(t_CalculusFieldMultivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateFunction_value(t_CalculusFieldMultivariateFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_get__parameters_(t_CalculusFieldMultivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateFunction, t_CalculusFieldMultivariateFunction, CalculusFieldMultivariateFunction);
      PyObject *t_CalculusFieldMultivariateFunction::wrap_Object(const CalculusFieldMultivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateFunction *self = (t_CalculusFieldMultivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateFunction *self = (t_CalculusFieldMultivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateFunction), &PY_TYPE_DEF(CalculusFieldMultivariateFunction), module, "CalculusFieldMultivariateFunction", 0);
      }

      void t_CalculusFieldMultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "class_", make_descriptor(CalculusFieldMultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateFunction::wrap_Object(CalculusFieldMultivariateFunction(((t_CalculusFieldMultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateFunction_of_(t_CalculusFieldMultivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateFunction_value(t_CalculusFieldMultivariateFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateFunction_get__parameters_(t_CalculusFieldMultivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
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
            mids$[mid_g_4a3e96b6f1af9d91] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getHandler_1066bb0522dfdb81] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEEventHandler;");
            mids$[mid_getMaxCheckInterval_f27f9c0aa71fac14] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_88c9da53bb1865ce] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;");
            mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble ODEEventDetector::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_4a3e96b6f1af9d91], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventHandler ODEEventDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_1066bb0522dfdb81]));
        }

        ::org::hipparchus::ode::events::AdaptableInterval ODEEventDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_f27f9c0aa71fac14]));
        }

        jint ODEEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver ODEEventDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_88c9da53bb1865ce]));
        }

        void ODEEventDetector::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
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
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile$OrekitSatelliteEphemeris::class$ = NULL;
        jmethodID *OrekitEphemerisFile$OrekitSatelliteEphemeris::mids$ = NULL;
        bool OrekitEphemerisFile$OrekitSatelliteEphemeris::live$ = false;
        jint OrekitEphemerisFile$OrekitSatelliteEphemeris::DEFAULT_INTERPOLATION_SIZE = (jint) 0;

        jclass OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addNewSegment_e6890ac796bcffec] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_e8724d2b2bf80340] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;I)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_da1b8e3a515ccb91] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Lorg/orekit/bodies/CelestialBody;I)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_381a50f5d292489f] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Lorg/orekit/bodies/CelestialBody;ILorg/orekit/time/TimeScale;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_INTERPOLATION_SIZE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_SIZE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile$OrekitSatelliteEphemeris::OrekitEphemerisFile$OrekitSatelliteEphemeris(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_e6890ac796bcffec], a0.this$));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, jint a1) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_e8724d2b2bf80340], a0.this$, a1));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, const ::org::orekit::bodies::CelestialBody & a1, jint a2) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_da1b8e3a515ccb91], a0.this$, a1.this$, a2));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, const ::org::orekit::bodies::CelestialBody & a1, jint a2, const ::org::orekit::time::TimeScale & a3) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_381a50f5d292489f], a0.this$, a1.this$, a2, a3.this$));
        }

        ::java::lang::String OrekitEphemerisFile$OrekitSatelliteEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
        }

        jdouble OrekitEphemerisFile$OrekitSatelliteEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::java::util::List OrekitEphemerisFile$OrekitSatelliteEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitSatelliteEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitSatelliteEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
      namespace general {
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_addNewSegment(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getId(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getMu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getSegments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStart(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__id(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__mu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__segments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__start(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__stop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile$OrekitSatelliteEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, id),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, mu),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, segments),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, start),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile$OrekitSatelliteEphemeris__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, addNewSegment, METH_VARARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile$OrekitSatelliteEphemeris)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile$OrekitSatelliteEphemeris__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile$OrekitSatelliteEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile$OrekitSatelliteEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris, t_OrekitEphemerisFile$OrekitSatelliteEphemeris, OrekitEphemerisFile$OrekitSatelliteEphemeris);

        void t_OrekitEphemerisFile$OrekitSatelliteEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), &PY_TYPE_DEF(OrekitEphemerisFile$OrekitSatelliteEphemeris), module, "OrekitEphemerisFile$OrekitSatelliteEphemeris", 0);
        }

        void t_OrekitEphemerisFile$OrekitSatelliteEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "class_", make_descriptor(OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "wrapfn_", make_descriptor(t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
          env->getClass(OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "DEFAULT_INTERPOLATION_SIZE", make_descriptor(OrekitEphemerisFile$OrekitSatelliteEphemeris::DEFAULT_INTERPOLATION_SIZE));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_Object(OrekitEphemerisFile$OrekitSatelliteEphemeris(((t_OrekitEphemerisFile$OrekitSatelliteEphemeris *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          OrekitEphemerisFile$OrekitSatelliteEphemeris object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = OrekitEphemerisFile$OrekitSatelliteEphemeris(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_addNewSegment(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              jint a2;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KkI", ::java::util::List::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              jint a2;
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KkIk", ::java::util::List::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2, a3));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addNewSegment", args);
          return NULL;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getId(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getMu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getSegments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::general::PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStart(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__id(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__mu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__segments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__start(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__stop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonCovarianceMatrixProvider.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonCovarianceMatrixProvider::class$ = NULL;
        jmethodID *PythonCovarianceMatrixProvider::mids$ = NULL;
        bool PythonCovarianceMatrixProvider::live$ = false;

        jclass PythonCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getInitialCovarianceMatrix_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getProcessNoiseMatrix_158686209bf6089c] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonCovarianceMatrixProvider::PythonCovarianceMatrixProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonCovarianceMatrixProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonCovarianceMatrixProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonCovarianceMatrixProvider::pythonExtension(jlong a0) const
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
      namespace sequential {
        static PyObject *t_PythonCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonCovarianceMatrixProvider_init_(t_PythonCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonCovarianceMatrixProvider_finalize(t_PythonCovarianceMatrixProvider *self);
        static PyObject *t_PythonCovarianceMatrixProvider_pythonExtension(t_PythonCovarianceMatrixProvider *self, PyObject *args);
        static jobject JNICALL t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonCovarianceMatrixProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonCovarianceMatrixProvider_get__self(t_PythonCovarianceMatrixProvider *self, void *data);
        static PyGetSetDef t_PythonCovarianceMatrixProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonCovarianceMatrixProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_PythonCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) t_PythonCovarianceMatrixProvider_init_ },
          { Py_tp_getset, t_PythonCovarianceMatrixProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonCovarianceMatrixProvider, t_PythonCovarianceMatrixProvider, PythonCovarianceMatrixProvider);

        void t_PythonCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonCovarianceMatrixProvider), &PY_TYPE_DEF(PythonCovarianceMatrixProvider), module, "PythonCovarianceMatrixProvider", 1);
        }

        void t_PythonCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "class_", make_descriptor(PythonCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_PythonCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonCovarianceMatrixProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0 },
            { "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1 },
            { "pythonDecRef", "()V", (void *) t_PythonCovarianceMatrixProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_PythonCovarianceMatrixProvider::wrap_Object(PythonCovarianceMatrixProvider(((t_PythonCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonCovarianceMatrixProvider_init_(t_PythonCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonCovarianceMatrixProvider object((jobject) NULL);

          INT_CALL(object = PythonCovarianceMatrixProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonCovarianceMatrixProvider_finalize(t_PythonCovarianceMatrixProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonCovarianceMatrixProvider_pythonExtension(t_PythonCovarianceMatrixProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInitialCovarianceMatrix", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getInitialCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "getProcessNoiseMatrix", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getProcessNoiseMatrix", result);
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

        static void JNICALL t_PythonCovarianceMatrixProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonCovarianceMatrixProvider_get__self(t_PythonCovarianceMatrixProvider *self, void *data)
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
#include "org/hipparchus/distribution/continuous/GumbelDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *GumbelDistribution::class$ = NULL;
        jmethodID *GumbelDistribution::mids$ = NULL;
        bool GumbelDistribution::live$ = false;

        jclass GumbelDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/GumbelDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_557b8123390d8d0c] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GumbelDistribution::GumbelDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble GumbelDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble GumbelDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble GumbelDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_557b8123390d8d0c]);
        }

        jdouble GumbelDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble GumbelDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble GumbelDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }

        jdouble GumbelDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble GumbelDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble GumbelDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean GumbelDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
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
        static PyObject *t_GumbelDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GumbelDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GumbelDistribution_init_(t_GumbelDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GumbelDistribution_cumulativeProbability(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_density(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getLocation(t_GumbelDistribution *self);
        static PyObject *t_GumbelDistribution_getNumericalMean(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getNumericalVariance(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getScale(t_GumbelDistribution *self);
        static PyObject *t_GumbelDistribution_getSupportLowerBound(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getSupportUpperBound(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_inverseCumulativeProbability(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_isSupportConnected(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_get__location(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__numericalMean(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__numericalVariance(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__scale(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportConnected(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportLowerBound(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportUpperBound(t_GumbelDistribution *self, void *data);
        static PyGetSetDef t_GumbelDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GumbelDistribution, location),
          DECLARE_GET_FIELD(t_GumbelDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GumbelDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GumbelDistribution, scale),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GumbelDistribution__methods_[] = {
          DECLARE_METHOD(t_GumbelDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GumbelDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GumbelDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_GumbelDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_GumbelDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GumbelDistribution)[] = {
          { Py_tp_methods, t_GumbelDistribution__methods_ },
          { Py_tp_init, (void *) t_GumbelDistribution_init_ },
          { Py_tp_getset, t_GumbelDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GumbelDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(GumbelDistribution, t_GumbelDistribution, GumbelDistribution);

        void t_GumbelDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GumbelDistribution), &PY_TYPE_DEF(GumbelDistribution), module, "GumbelDistribution", 0);
        }

        void t_GumbelDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "class_", make_descriptor(GumbelDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "wrapfn_", make_descriptor(t_GumbelDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GumbelDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GumbelDistribution::initializeClass, 1)))
            return NULL;
          return t_GumbelDistribution::wrap_Object(GumbelDistribution(((t_GumbelDistribution *) arg)->object.this$));
        }
        static PyObject *t_GumbelDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GumbelDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GumbelDistribution_init_(t_GumbelDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          GumbelDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = GumbelDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GumbelDistribution_cumulativeProbability(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GumbelDistribution_density(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_GumbelDistribution_getLocation(t_GumbelDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GumbelDistribution_getNumericalMean(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GumbelDistribution_getNumericalVariance(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GumbelDistribution_getScale(t_GumbelDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GumbelDistribution_getSupportLowerBound(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GumbelDistribution_getSupportUpperBound(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GumbelDistribution_inverseCumulativeProbability(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_GumbelDistribution_isSupportConnected(t_GumbelDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GumbelDistribution_get__location(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__numericalMean(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__numericalVariance(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__scale(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__supportConnected(t_GumbelDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GumbelDistribution_get__supportLowerBound(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__supportUpperBound(t_GumbelDistribution *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonMultiSatFixedStepHandler::class$ = NULL;
        jmethodID *PythonMultiSatFixedStepHandler::mids$ = NULL;
        bool PythonMultiSatFixedStepHandler::live$ = false;

        jclass PythonMultiSatFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_4ccaedadb068bdeb] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_4ccaedadb068bdeb] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_fefad6c1f262d1e2] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonMultiSatFixedStepHandler::PythonMultiSatFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonMultiSatFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonMultiSatFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonMultiSatFixedStepHandler::pythonExtension(jlong a0) const
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
      namespace sampling {
        static PyObject *t_PythonMultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonMultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonMultiSatFixedStepHandler_init_(t_PythonMultiSatFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonMultiSatFixedStepHandler_finalize(t_PythonMultiSatFixedStepHandler *self);
        static PyObject *t_PythonMultiSatFixedStepHandler_pythonExtension(t_PythonMultiSatFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonMultiSatFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonMultiSatFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonMultiSatFixedStepHandler_get__self(t_PythonMultiSatFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonMultiSatFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonMultiSatFixedStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonMultiSatFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonMultiSatFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonMultiSatFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonMultiSatFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonMultiSatFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonMultiSatFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonMultiSatFixedStepHandler, t_PythonMultiSatFixedStepHandler, PythonMultiSatFixedStepHandler);

        void t_PythonMultiSatFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonMultiSatFixedStepHandler), &PY_TYPE_DEF(PythonMultiSatFixedStepHandler), module, "PythonMultiSatFixedStepHandler", 1);
        }

        void t_PythonMultiSatFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "class_", make_descriptor(PythonMultiSatFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "wrapfn_", make_descriptor(t_PythonMultiSatFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonMultiSatFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Ljava/util/List;)V", (void *) t_PythonMultiSatFixedStepHandler_finish0 },
            { "handleStep", "(Ljava/util/List;)V", (void *) t_PythonMultiSatFixedStepHandler_handleStep1 },
            { "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V", (void *) t_PythonMultiSatFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonMultiSatFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonMultiSatFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonMultiSatFixedStepHandler::wrap_Object(PythonMultiSatFixedStepHandler(((t_PythonMultiSatFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonMultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonMultiSatFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonMultiSatFixedStepHandler_init_(t_PythonMultiSatFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonMultiSatFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonMultiSatFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_finalize(t_PythonMultiSatFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_pythonExtension(t_PythonMultiSatFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonMultiSatFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_get__self(t_PythonMultiSatFixedStepHandler *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *SpinStabilized::class$ = NULL;
              jmethodID *SpinStabilized::mids$ = NULL;
              bool SpinStabilized::live$ = false;

              jclass SpinStabilized::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_c66f753ddee38944] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getMomentumAlpha_557b8123390d8d0c] = env->getMethodID(cls, "getMomentumAlpha", "()D");
                  mids$[mid_getMomentumDelta_557b8123390d8d0c] = env->getMethodID(cls, "getMomentumDelta", "()D");
                  mids$[mid_getNutation_557b8123390d8d0c] = env->getMethodID(cls, "getNutation", "()D");
                  mids$[mid_getNutationPeriod_557b8123390d8d0c] = env->getMethodID(cls, "getNutationPeriod", "()D");
                  mids$[mid_getNutationPhase_557b8123390d8d0c] = env->getMethodID(cls, "getNutationPhase", "()D");
                  mids$[mid_getNutationVel_557b8123390d8d0c] = env->getMethodID(cls, "getNutationVel", "()D");
                  mids$[mid_getSpinAlpha_557b8123390d8d0c] = env->getMethodID(cls, "getSpinAlpha", "()D");
                  mids$[mid_getSpinAngle_557b8123390d8d0c] = env->getMethodID(cls, "getSpinAngle", "()D");
                  mids$[mid_getSpinAngleVel_557b8123390d8d0c] = env->getMethodID(cls, "getSpinAngleVel", "()D");
                  mids$[mid_getSpinDelta_557b8123390d8d0c] = env->getMethodID(cls, "getSpinDelta", "()D");
                  mids$[mid_hasMomentum_89b302893bdbe1f1] = env->getMethodID(cls, "hasMomentum", "()Z");
                  mids$[mid_hasNutation_89b302893bdbe1f1] = env->getMethodID(cls, "hasNutation", "()Z");
                  mids$[mid_setMomentumAlpha_10f281d777284cea] = env->getMethodID(cls, "setMomentumAlpha", "(D)V");
                  mids$[mid_setMomentumDelta_10f281d777284cea] = env->getMethodID(cls, "setMomentumDelta", "(D)V");
                  mids$[mid_setNutation_10f281d777284cea] = env->getMethodID(cls, "setNutation", "(D)V");
                  mids$[mid_setNutationPeriod_10f281d777284cea] = env->getMethodID(cls, "setNutationPeriod", "(D)V");
                  mids$[mid_setNutationPhase_10f281d777284cea] = env->getMethodID(cls, "setNutationPhase", "(D)V");
                  mids$[mid_setNutationVel_10f281d777284cea] = env->getMethodID(cls, "setNutationVel", "(D)V");
                  mids$[mid_setSpinAlpha_10f281d777284cea] = env->getMethodID(cls, "setSpinAlpha", "(D)V");
                  mids$[mid_setSpinAngle_10f281d777284cea] = env->getMethodID(cls, "setSpinAngle", "(D)V");
                  mids$[mid_setSpinAngleVel_10f281d777284cea] = env->getMethodID(cls, "setSpinAngleVel", "(D)V");
                  mids$[mid_setSpinDelta_10f281d777284cea] = env->getMethodID(cls, "setSpinDelta", "(D)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SpinStabilized::SpinStabilized() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints SpinStabilized::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c66f753ddee38944]));
              }

              jdouble SpinStabilized::getMomentumAlpha() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMomentumAlpha_557b8123390d8d0c]);
              }

              jdouble SpinStabilized::getMomentumDelta() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMomentumDelta_557b8123390d8d0c]);
              }

              jdouble SpinStabilized::getNutation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutation_557b8123390d8d0c]);
              }

              jdouble SpinStabilized::getNutationPeriod() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationPeriod_557b8123390d8d0c]);
              }

              jdouble SpinStabilized::getNutationPhase() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationPhase_557b8123390d8d0c]);
              }

              jdouble SpinStabilized::getNutationVel() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationVel_557b8123390d8d0c]);
              }

              jdouble SpinStabilized::getSpinAlpha() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAlpha_557b8123390d8d0c]);
              }

              jdouble SpinStabilized::getSpinAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAngle_557b8123390d8d0c]);
              }

              jdouble SpinStabilized::getSpinAngleVel() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAngleVel_557b8123390d8d0c]);
              }

              jdouble SpinStabilized::getSpinDelta() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinDelta_557b8123390d8d0c]);
              }

              jboolean SpinStabilized::hasMomentum() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasMomentum_89b302893bdbe1f1]);
              }

              jboolean SpinStabilized::hasNutation() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasNutation_89b302893bdbe1f1]);
              }

              void SpinStabilized::setMomentumAlpha(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMomentumAlpha_10f281d777284cea], a0);
              }

              void SpinStabilized::setMomentumDelta(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMomentumDelta_10f281d777284cea], a0);
              }

              void SpinStabilized::setNutation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutation_10f281d777284cea], a0);
              }

              void SpinStabilized::setNutationPeriod(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationPeriod_10f281d777284cea], a0);
              }

              void SpinStabilized::setNutationPhase(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationPhase_10f281d777284cea], a0);
              }

              void SpinStabilized::setNutationVel(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationVel_10f281d777284cea], a0);
              }

              void SpinStabilized::setSpinAlpha(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAlpha_10f281d777284cea], a0);
              }

              void SpinStabilized::setSpinAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAngle_10f281d777284cea], a0);
              }

              void SpinStabilized::setSpinAngleVel(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAngleVel_10f281d777284cea], a0);
              }

              void SpinStabilized::setSpinDelta(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinDelta_10f281d777284cea], a0);
              }

              void SpinStabilized::validate(jdouble a0) const
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
              static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SpinStabilized_getEndpoints(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getMomentumAlpha(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getMomentumDelta(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutation(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationPeriod(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationPhase(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationVel(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAlpha(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAngle(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAngleVel(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinDelta(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_hasMomentum(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_hasNutation(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_setMomentumAlpha(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setMomentumDelta(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutation(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationPeriod(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationPhase(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationVel(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAlpha(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAngle(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAngleVel(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinDelta(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_validate(t_SpinStabilized *self, PyObject *args);
              static PyObject *t_SpinStabilized_get__endpoints(t_SpinStabilized *self, void *data);
              static PyObject *t_SpinStabilized_get__momentumAlpha(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__momentumAlpha(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__momentumDelta(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__momentumDelta(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutation(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutation(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationPeriod(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationPeriod(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationPhase(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationPhase(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationVel(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationVel(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAlpha(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAlpha(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAngle(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAngle(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAngleVel(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAngleVel(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinDelta(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinDelta(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyGetSetDef t_SpinStabilized__fields_[] = {
                DECLARE_GET_FIELD(t_SpinStabilized, endpoints),
                DECLARE_GETSET_FIELD(t_SpinStabilized, momentumAlpha),
                DECLARE_GETSET_FIELD(t_SpinStabilized, momentumDelta),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutation),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationPeriod),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationPhase),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationVel),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAlpha),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAngle),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAngleVel),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinDelta),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SpinStabilized__methods_[] = {
                DECLARE_METHOD(t_SpinStabilized, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilized, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilized, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getMomentumAlpha, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getMomentumDelta, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutation, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationPeriod, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationPhase, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationVel, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAlpha, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAngle, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAngleVel, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinDelta, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, hasMomentum, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, hasNutation, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, setMomentumAlpha, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setMomentumDelta, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutation, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationPeriod, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationPhase, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationVel, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAlpha, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAngle, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAngleVel, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinDelta, METH_O),
                DECLARE_METHOD(t_SpinStabilized, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SpinStabilized)[] = {
                { Py_tp_methods, t_SpinStabilized__methods_ },
                { Py_tp_init, (void *) t_SpinStabilized_init_ },
                { Py_tp_getset, t_SpinStabilized__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SpinStabilized)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(SpinStabilized, t_SpinStabilized, SpinStabilized);

              void t_SpinStabilized::install(PyObject *module)
              {
                installType(&PY_TYPE(SpinStabilized), &PY_TYPE_DEF(SpinStabilized), module, "SpinStabilized", 0);
              }

              void t_SpinStabilized::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "class_", make_descriptor(SpinStabilized::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "wrapfn_", make_descriptor(t_SpinStabilized::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SpinStabilized::initializeClass, 1)))
                  return NULL;
                return t_SpinStabilized::wrap_Object(SpinStabilized(((t_SpinStabilized *) arg)->object.this$));
              }
              static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SpinStabilized::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds)
              {
                SpinStabilized object((jobject) NULL);

                INT_CALL(object = SpinStabilized());
                self->object = object;

                return 0;
              }

              static PyObject *t_SpinStabilized_getEndpoints(t_SpinStabilized *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_SpinStabilized_getMomentumAlpha(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMomentumAlpha());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getMomentumDelta(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMomentumDelta());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutation(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationPeriod(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationPeriod());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationPhase(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationPhase());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationVel(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationVel());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAlpha(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAlpha());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAngle(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAngleVel(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAngleVel());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinDelta(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinDelta());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_hasMomentum(t_SpinStabilized *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasMomentum());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SpinStabilized_hasNutation(t_SpinStabilized *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasNutation());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SpinStabilized_setMomentumAlpha(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMomentumAlpha(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMomentumAlpha", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setMomentumDelta(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMomentumDelta(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMomentumDelta", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutation(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutation", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationPeriod(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationPeriod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationPeriod", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationPhase(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationPhase(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationPhase", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationVel(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationVel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationVel", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAlpha(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAlpha(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAlpha", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAngle(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAngle", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAngleVel(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAngleVel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAngleVel", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinDelta(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinDelta(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinDelta", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_validate(t_SpinStabilized *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(SpinStabilized), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_SpinStabilized_get__endpoints(t_SpinStabilized *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_SpinStabilized_get__momentumAlpha(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMomentumAlpha());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__momentumAlpha(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMomentumAlpha(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "momentumAlpha", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__momentumDelta(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMomentumDelta());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__momentumDelta(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMomentumDelta(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "momentumDelta", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutation(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutation(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutation", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationPeriod(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationPeriod());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationPeriod(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationPeriod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationPeriod", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationPhase(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationPhase());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationPhase(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationPhase(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationPhase", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationVel(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationVel());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationVel(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationVel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationVel", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAlpha(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAlpha());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAlpha(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAlpha(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAlpha", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAngle(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAngle(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAngle", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAngleVel(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAngleVel());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAngleVel(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAngleVel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAngleVel", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinDelta(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinDelta());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinDelta(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinDelta(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinDelta", arg);
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
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldDenseOutputModel::class$ = NULL;
      jmethodID *FieldDenseOutputModel::mids$ = NULL;
      bool FieldDenseOutputModel::live$ = false;

      jclass FieldDenseOutputModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldDenseOutputModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_append_d29cb43b00cb3f76] = env->getMethodID(cls, "append", "(Lorg/hipparchus/ode/FieldDenseOutputModel;)V");
          mids$[mid_finish_747fee420c9ba889] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
          mids$[mid_getFinalTime_613c8f46c659f636] = env->getMethodID(cls, "getFinalTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInitialTime_613c8f46c659f636] = env->getMethodID(cls, "getInitialTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInterpolatedState_2c40e49ec2799666] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_handleStep_e7d5f5a81e2a2b8e] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
          mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldDenseOutputModel::FieldDenseOutputModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void FieldDenseOutputModel::append(const FieldDenseOutputModel & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_append_d29cb43b00cb3f76], a0.this$);
      }

      void FieldDenseOutputModel::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_finish_747fee420c9ba889], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldDenseOutputModel::getFinalTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFinalTime_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDenseOutputModel::getInitialTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getInitialTime_613c8f46c659f636]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldDenseOutputModel::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_2c40e49ec2799666], a0.this$));
      }

      void FieldDenseOutputModel::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_handleStep_e7d5f5a81e2a2b8e], a0.this$);
      }

      void FieldDenseOutputModel::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
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
      static PyObject *t_FieldDenseOutputModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_of_(t_FieldDenseOutputModel *self, PyObject *args);
      static int t_FieldDenseOutputModel_init_(t_FieldDenseOutputModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldDenseOutputModel_append(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_finish(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_getFinalTime(t_FieldDenseOutputModel *self);
      static PyObject *t_FieldDenseOutputModel_getInitialTime(t_FieldDenseOutputModel *self);
      static PyObject *t_FieldDenseOutputModel_getInterpolatedState(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_handleStep(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_init(t_FieldDenseOutputModel *self, PyObject *args);
      static PyObject *t_FieldDenseOutputModel_get__finalTime(t_FieldDenseOutputModel *self, void *data);
      static PyObject *t_FieldDenseOutputModel_get__initialTime(t_FieldDenseOutputModel *self, void *data);
      static PyObject *t_FieldDenseOutputModel_get__parameters_(t_FieldDenseOutputModel *self, void *data);
      static PyGetSetDef t_FieldDenseOutputModel__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, finalTime),
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, initialTime),
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDenseOutputModel__methods_[] = {
        DECLARE_METHOD(t_FieldDenseOutputModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDenseOutputModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDenseOutputModel, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, append, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, finish, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, getFinalTime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, getInitialTime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, getInterpolatedState, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, handleStep, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDenseOutputModel)[] = {
        { Py_tp_methods, t_FieldDenseOutputModel__methods_ },
        { Py_tp_init, (void *) t_FieldDenseOutputModel_init_ },
        { Py_tp_getset, t_FieldDenseOutputModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDenseOutputModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDenseOutputModel, t_FieldDenseOutputModel, FieldDenseOutputModel);
      PyObject *t_FieldDenseOutputModel::wrap_Object(const FieldDenseOutputModel& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDenseOutputModel::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDenseOutputModel *self = (t_FieldDenseOutputModel *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDenseOutputModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDenseOutputModel::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDenseOutputModel *self = (t_FieldDenseOutputModel *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDenseOutputModel::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDenseOutputModel), &PY_TYPE_DEF(FieldDenseOutputModel), module, "FieldDenseOutputModel", 0);
      }

      void t_FieldDenseOutputModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "class_", make_descriptor(FieldDenseOutputModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "wrapfn_", make_descriptor(t_FieldDenseOutputModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDenseOutputModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDenseOutputModel::initializeClass, 1)))
          return NULL;
        return t_FieldDenseOutputModel::wrap_Object(FieldDenseOutputModel(((t_FieldDenseOutputModel *) arg)->object.this$));
      }
      static PyObject *t_FieldDenseOutputModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDenseOutputModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDenseOutputModel_of_(t_FieldDenseOutputModel *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldDenseOutputModel_init_(t_FieldDenseOutputModel *self, PyObject *args, PyObject *kwds)
      {
        FieldDenseOutputModel object((jobject) NULL);

        INT_CALL(object = FieldDenseOutputModel());
        self->object = object;

        return 0;
      }

      static PyObject *t_FieldDenseOutputModel_append(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        FieldDenseOutputModel a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", FieldDenseOutputModel::initializeClass, &a0, &p0, t_FieldDenseOutputModel::parameters_))
        {
          OBJ_CALL(self->object.append(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "append", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_finish(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
        {
          OBJ_CALL(self->object.finish(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "finish", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_getFinalTime(t_FieldDenseOutputModel *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getFinalTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDenseOutputModel_getInitialTime(t_FieldDenseOutputModel *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDenseOutputModel_getInterpolatedState(t_FieldDenseOutputModel *self, PyObject *arg)
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

      static PyObject *t_FieldDenseOutputModel_handleStep(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
        {
          OBJ_CALL(self->object.handleStep(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_init(t_FieldDenseOutputModel *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldDenseOutputModel_get__parameters_(t_FieldDenseOutputModel *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDenseOutputModel_get__finalTime(t_FieldDenseOutputModel *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getFinalTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDenseOutputModel_get__initialTime(t_FieldDenseOutputModel *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/time/GalileoScale.h"
#include "java/util/Collection.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TCGScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScales::class$ = NULL;
      jmethodID *TimeScales::mids$ = NULL;
      bool TimeScales::live$ = false;

      jclass TimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_createBesselianEpoch_8ef471ef852a9678] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_8ef471ef852a9678] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getBDT_9391834b1a937fd3] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getBeidouEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_7a97f7e149e79afb] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGLONASS_237364a28a8cf0b4] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_265dd6a5eaf62dee] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_0cd5c45ac1466124] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_3eb0a3a9b450fe42] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getGalileoEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIRNSS_64d2db466ba002ef] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getIrnssEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_7a97f7e149e79afb] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_7a97f7e149e79afb] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQZSS_513baddf28d44704] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getQzssEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTAI_d5c1bf5214e95dd6] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_1561497728a78b6a] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_2cdd0fa7c8f02aa9] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_777ef8538a45134b] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_f6e670da699ff3f8] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_672057b4f848abf0] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_81e037be1ebdb551] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate TimeScales::createBesselianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createBesselianEpoch_8ef471ef852a9678], a0));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::createJulianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createJulianEpoch_8ef471ef852a9678], a0));
      }

      ::org::orekit::time::BDTScale TimeScales::getBDT() const
      {
        return ::org::orekit::time::BDTScale(env->callObjectMethod(this$, mids$[mid_getBDT_9391834b1a937fd3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getBeidouEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeidouEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getCcsdsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCcsdsEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getFiftiesEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFiftiesEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getFutureInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFutureInfinity_7a97f7e149e79afb]));
      }

      ::org::orekit::time::GLONASSScale TimeScales::getGLONASS() const
      {
        return ::org::orekit::time::GLONASSScale(env->callObjectMethod(this$, mids$[mid_getGLONASS_237364a28a8cf0b4]));
      }

      ::org::orekit::time::GMSTScale TimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_265dd6a5eaf62dee], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale TimeScales::getGPS() const
      {
        return ::org::orekit::time::GPSScale(env->callObjectMethod(this$, mids$[mid_getGPS_0cd5c45ac1466124]));
      }

      ::org::orekit::time::GalileoScale TimeScales::getGST() const
      {
        return ::org::orekit::time::GalileoScale(env->callObjectMethod(this$, mids$[mid_getGST_3eb0a3a9b450fe42]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGalileoEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGalileoEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGlonassEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGlonassEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGpsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGpsEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::IRNSSScale TimeScales::getIRNSS() const
      {
        return ::org::orekit::time::IRNSSScale(env->callObjectMethod(this$, mids$[mid_getIRNSS_64d2db466ba002ef]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getIrnssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getIrnssEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJ2000Epoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJ2000Epoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJavaEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJavaEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJulianEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getModifiedJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getModifiedJulianEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getPastInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPastInfinity_7a97f7e149e79afb]));
      }

      ::org::orekit::time::QZSSScale TimeScales::getQZSS() const
      {
        return ::org::orekit::time::QZSSScale(env->callObjectMethod(this$, mids$[mid_getQZSS_513baddf28d44704]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getQzssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getQzssEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::TAIScale TimeScales::getTAI() const
      {
        return ::org::orekit::time::TAIScale(env->callObjectMethod(this$, mids$[mid_getTAI_d5c1bf5214e95dd6]));
      }

      ::org::orekit::time::TCBScale TimeScales::getTCB() const
      {
        return ::org::orekit::time::TCBScale(env->callObjectMethod(this$, mids$[mid_getTCB_1561497728a78b6a]));
      }

      ::org::orekit::time::TCGScale TimeScales::getTCG() const
      {
        return ::org::orekit::time::TCGScale(env->callObjectMethod(this$, mids$[mid_getTCG_2cdd0fa7c8f02aa9]));
      }

      ::org::orekit::time::TDBScale TimeScales::getTDB() const
      {
        return ::org::orekit::time::TDBScale(env->callObjectMethod(this$, mids$[mid_getTDB_777ef8538a45134b]));
      }

      ::org::orekit::time::TTScale TimeScales::getTT() const
      {
        return ::org::orekit::time::TTScale(env->callObjectMethod(this$, mids$[mid_getTT_f6e670da699ff3f8]));
      }

      ::org::orekit::time::UT1Scale TimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_672057b4f848abf0], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale TimeScales::getUTC() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTC_81e037be1ebdb551]));
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
      static PyObject *t_TimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScales_createBesselianEpoch(t_TimeScales *self, PyObject *arg);
      static PyObject *t_TimeScales_createJulianEpoch(t_TimeScales *self, PyObject *arg);
      static PyObject *t_TimeScales_getBDT(t_TimeScales *self);
      static PyObject *t_TimeScales_getBeidouEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getCcsdsEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getFiftiesEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getFutureInfinity(t_TimeScales *self);
      static PyObject *t_TimeScales_getGLONASS(t_TimeScales *self);
      static PyObject *t_TimeScales_getGMST(t_TimeScales *self, PyObject *args);
      static PyObject *t_TimeScales_getGPS(t_TimeScales *self);
      static PyObject *t_TimeScales_getGST(t_TimeScales *self);
      static PyObject *t_TimeScales_getGalileoEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getGlonassEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getGpsEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getIRNSS(t_TimeScales *self);
      static PyObject *t_TimeScales_getIrnssEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJ2000Epoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJavaEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJulianEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getModifiedJulianEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getPastInfinity(t_TimeScales *self);
      static PyObject *t_TimeScales_getQZSS(t_TimeScales *self);
      static PyObject *t_TimeScales_getQzssEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getTAI(t_TimeScales *self);
      static PyObject *t_TimeScales_getTCB(t_TimeScales *self);
      static PyObject *t_TimeScales_getTCG(t_TimeScales *self);
      static PyObject *t_TimeScales_getTDB(t_TimeScales *self);
      static PyObject *t_TimeScales_getTT(t_TimeScales *self);
      static PyObject *t_TimeScales_getUT1(t_TimeScales *self, PyObject *args);
      static PyObject *t_TimeScales_getUTC(t_TimeScales *self);
      static PyObject *t_TimeScales_get__bDT(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__beidouEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__ccsdsEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__fiftiesEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__futureInfinity(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gLONASS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gPS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gST(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__galileoEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__glonassEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gpsEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__iRNSS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__irnssEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__j2000Epoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__javaEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__julianEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__modifiedJulianEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__pastInfinity(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__qZSS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__qzssEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tAI(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tCB(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tCG(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tDB(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tT(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__uTC(t_TimeScales *self, void *data);
      static PyGetSetDef t_TimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScales, bDT),
        DECLARE_GET_FIELD(t_TimeScales, beidouEpoch),
        DECLARE_GET_FIELD(t_TimeScales, ccsdsEpoch),
        DECLARE_GET_FIELD(t_TimeScales, fiftiesEpoch),
        DECLARE_GET_FIELD(t_TimeScales, futureInfinity),
        DECLARE_GET_FIELD(t_TimeScales, gLONASS),
        DECLARE_GET_FIELD(t_TimeScales, gPS),
        DECLARE_GET_FIELD(t_TimeScales, gST),
        DECLARE_GET_FIELD(t_TimeScales, galileoEpoch),
        DECLARE_GET_FIELD(t_TimeScales, glonassEpoch),
        DECLARE_GET_FIELD(t_TimeScales, gpsEpoch),
        DECLARE_GET_FIELD(t_TimeScales, iRNSS),
        DECLARE_GET_FIELD(t_TimeScales, irnssEpoch),
        DECLARE_GET_FIELD(t_TimeScales, j2000Epoch),
        DECLARE_GET_FIELD(t_TimeScales, javaEpoch),
        DECLARE_GET_FIELD(t_TimeScales, julianEpoch),
        DECLARE_GET_FIELD(t_TimeScales, modifiedJulianEpoch),
        DECLARE_GET_FIELD(t_TimeScales, pastInfinity),
        DECLARE_GET_FIELD(t_TimeScales, qZSS),
        DECLARE_GET_FIELD(t_TimeScales, qzssEpoch),
        DECLARE_GET_FIELD(t_TimeScales, tAI),
        DECLARE_GET_FIELD(t_TimeScales, tCB),
        DECLARE_GET_FIELD(t_TimeScales, tCG),
        DECLARE_GET_FIELD(t_TimeScales, tDB),
        DECLARE_GET_FIELD(t_TimeScales, tT),
        DECLARE_GET_FIELD(t_TimeScales, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScales__methods_[] = {
        DECLARE_METHOD(t_TimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScales, createBesselianEpoch, METH_O),
        DECLARE_METHOD(t_TimeScales, createJulianEpoch, METH_O),
        DECLARE_METHOD(t_TimeScales, getBDT, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getBeidouEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getCcsdsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getFiftiesEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getFutureInfinity, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGLONASS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_TimeScales, getGPS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGST, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGalileoEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGlonassEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGpsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getIRNSS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getIrnssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJ2000Epoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJavaEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getModifiedJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getPastInfinity, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getQZSS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getQzssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTAI, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTCB, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTCG, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTDB, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTT, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_TimeScales, getUTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScales)[] = {
        { Py_tp_methods, t_TimeScales__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScales, t_TimeScales, TimeScales);

      void t_TimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScales), &PY_TYPE_DEF(TimeScales), module, "TimeScales", 0);
      }

      void t_TimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "class_", make_descriptor(TimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "wrapfn_", make_descriptor(t_TimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScales::initializeClass, 1)))
          return NULL;
        return t_TimeScales::wrap_Object(TimeScales(((t_TimeScales *) arg)->object.this$));
      }
      static PyObject *t_TimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScales_createBesselianEpoch(t_TimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createBesselianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_TimeScales_createJulianEpoch(t_TimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createJulianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_TimeScales_getBDT(t_TimeScales *self)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getBeidouEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getCcsdsEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getFiftiesEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getFutureInfinity(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGLONASS(t_TimeScales *self)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGMST(t_TimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGMST", args);
        return NULL;
      }

      static PyObject *t_TimeScales_getGPS(t_TimeScales *self)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGST(t_TimeScales *self)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGalileoEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGlonassEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGpsEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getIRNSS(t_TimeScales *self)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getIrnssEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJ2000Epoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJavaEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJulianEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getModifiedJulianEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getPastInfinity(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getQZSS(t_TimeScales *self)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getQzssEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTAI(t_TimeScales *self)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTCB(t_TimeScales *self)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTCG(t_TimeScales *self)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTDB(t_TimeScales *self)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTT(t_TimeScales *self)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getUT1(t_TimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getUT1(a0, a1));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1", args);
        return NULL;
      }

      static PyObject *t_TimeScales_getUTC(t_TimeScales *self)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_get__bDT(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__beidouEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__ccsdsEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__fiftiesEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__futureInfinity(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gLONASS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gPS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gST(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__galileoEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__glonassEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gpsEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__iRNSS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__irnssEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__j2000Epoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__javaEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__julianEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__modifiedJulianEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__pastInfinity(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__qZSS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__qzssEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tAI(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tCB(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tCG(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tDB(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tT(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__uTC(t_TimeScales *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMessageWriter::class$ = NULL;
            jmethodID *CdmMessageWriter::mids$ = NULL;
            bool CdmMessageWriter::live$ = false;
            ::java::lang::String *CdmMessageWriter::DEFAULT_ORIGINATOR = NULL;

            jclass CdmMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_17d2c89957221da8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getContext_cfb32720392d108f] = env->getMethodID(cls, "getContext", "()Lorg/orekit/files/ccsds/utils/ContextBinding;");
                mids$[mid_getDefaultVersion_557b8123390d8d0c] = env->getMethodID(cls, "getDefaultVersion", "()D");
                mids$[mid_getFormatVersionKey_3cffd47377eca18a] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_3cffd47377eca18a] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getTimeConverter_98138020b4258bf0] = env->getMethodID(cls, "getTimeConverter", "()Lorg/orekit/files/ccsds/definitions/TimeConverter;");
                mids$[mid_getVersion_557b8123390d8d0c] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_setContext_f673e6e131e83586] = env->getMethodID(cls, "setContext", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_writeFooter_0503da09b1f1eb3c] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_9f075cf20b3cbc79] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;)V");
                mids$[mid_writeRelativeMetadataContent_968820312130dbd5] = env->getMethodID(cls, "writeRelativeMetadataContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_writeSegment_d176b364c3b39f60] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/cdm/CdmSegment;)V");
                mids$[mid_writeSegmentContent_e9836ce27ccfe3b9] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_ORIGINATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ORIGINATOR", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMessageWriter::CdmMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17d2c89957221da8, a0.this$, a1.this$, a2, a3.this$)) {}

            ::org::orekit::files::ccsds::utils::ContextBinding CdmMessageWriter::getContext() const
            {
              return ::org::orekit::files::ccsds::utils::ContextBinding(env->callObjectMethod(this$, mids$[mid_getContext_cfb32720392d108f]));
            }

            jdouble CdmMessageWriter::getDefaultVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDefaultVersion_557b8123390d8d0c]);
            }

            ::java::lang::String CdmMessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_3cffd47377eca18a]));
            }

            ::java::lang::String CdmMessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::definitions::TimeConverter CdmMessageWriter::getTimeConverter() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getTimeConverter_98138020b4258bf0]));
            }

            jdouble CdmMessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_557b8123390d8d0c]);
            }

            void CdmMessageWriter::setContext(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setContext_f673e6e131e83586], a0.this$);
            }

            void CdmMessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_0503da09b1f1eb3c], a0.this$);
            }

            void CdmMessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_9f075cf20b3cbc79], a0.this$, a1.this$);
            }

            void CdmMessageWriter::writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRelativeMetadataContent_968820312130dbd5], a0.this$, a1, a2.this$);
            }

            void CdmMessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmSegment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_d176b364c3b39f60], a0.this$, a1.this$);
            }

            void CdmMessageWriter::writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::section::Segment & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegmentContent_e9836ce27ccfe3b9], a0.this$, a1, a2.this$);
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
            static PyObject *t_CdmMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMessageWriter_init_(t_CdmMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmMessageWriter_getContext(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getDefaultVersion(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getFormatVersionKey(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getRoot(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getTimeConverter(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getVersion(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_setContext(t_CdmMessageWriter *self, PyObject *arg);
            static PyObject *t_CdmMessageWriter_writeFooter(t_CdmMessageWriter *self, PyObject *arg);
            static PyObject *t_CdmMessageWriter_writeHeader(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeRelativeMetadataContent(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeSegment(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeSegmentContent(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_get__context(t_CdmMessageWriter *self, void *data);
            static int t_CdmMessageWriter_set__context(t_CdmMessageWriter *self, PyObject *arg, void *data);
            static PyObject *t_CdmMessageWriter_get__defaultVersion(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__formatVersionKey(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__root(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__timeConverter(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__version(t_CdmMessageWriter *self, void *data);
            static PyGetSetDef t_CdmMessageWriter__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmMessageWriter, context),
              DECLARE_GET_FIELD(t_CdmMessageWriter, defaultVersion),
              DECLARE_GET_FIELD(t_CdmMessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_CdmMessageWriter, root),
              DECLARE_GET_FIELD(t_CdmMessageWriter, timeConverter),
              DECLARE_GET_FIELD(t_CdmMessageWriter, version),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMessageWriter__methods_[] = {
              DECLARE_METHOD(t_CdmMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMessageWriter, getContext, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getDefaultVersion, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getTimeConverter, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, setContext, METH_O),
              DECLARE_METHOD(t_CdmMessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_CdmMessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeRelativeMetadataContent, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeSegment, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeSegmentContent, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMessageWriter)[] = {
              { Py_tp_methods, t_CdmMessageWriter__methods_ },
              { Py_tp_init, (void *) t_CdmMessageWriter_init_ },
              { Py_tp_getset, t_CdmMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmMessageWriter, t_CdmMessageWriter, CdmMessageWriter);

            void t_CdmMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMessageWriter), &PY_TYPE_DEF(CdmMessageWriter), module, "CdmMessageWriter", 0);
            }

            void t_CdmMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "class_", make_descriptor(CdmMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "wrapfn_", make_descriptor(t_CdmMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmMessageWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "DEFAULT_ORIGINATOR", make_descriptor(j2p(*CdmMessageWriter::DEFAULT_ORIGINATOR)));
            }

            static PyObject *t_CdmMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMessageWriter::initializeClass, 1)))
                return NULL;
              return t_CdmMessageWriter::wrap_Object(CdmMessageWriter(((t_CdmMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMessageWriter_init_(t_CdmMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              CdmMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CdmMessageWriter(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmMessageWriter_getContext(t_CdmMessageWriter *self)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding result((jobject) NULL);
              OBJ_CALL(result = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(result);
            }

            static PyObject *t_CdmMessageWriter_getDefaultVersion(t_CdmMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmMessageWriter_getFormatVersionKey(t_CdmMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_CdmMessageWriter_getRoot(t_CdmMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_CdmMessageWriter_getTimeConverter(t_CdmMessageWriter *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            static PyObject *t_CdmMessageWriter_getVersion(t_CdmMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmMessageWriter_setContext(t_CdmMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setContext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setContext", arg);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeFooter(t_CdmMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeHeader(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeRelativeMetadataContent(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.writeRelativeMetadataContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeRelativeMetadataContent", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeSegment(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmSegment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmSegment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::cdm::t_CdmSegment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeSegmentContent(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::section::Segment a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "kDK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegmentContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegmentContent", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_get__context(t_CdmMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
              OBJ_CALL(value = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(value);
            }
            static int t_CdmMessageWriter_set__context(t_CdmMessageWriter *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &value))
                {
                  INT_CALL(self->object.setContext(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "context", arg);
              return -1;
            }

            static PyObject *t_CdmMessageWriter_get__defaultVersion(t_CdmMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CdmMessageWriter_get__formatVersionKey(t_CdmMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_CdmMessageWriter_get__root(t_CdmMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_CdmMessageWriter_get__timeConverter(t_CdmMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(value);
            }

            static PyObject *t_CdmMessageWriter_get__version(t_CdmMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
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
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ElevationMask.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldElevationDetector::class$ = NULL;
        jmethodID *FieldElevationDetector::mids$ = NULL;
        bool FieldElevationDetector::live$ = false;

        jclass FieldElevationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldElevationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5ad0e9bb8a1deb62] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_d8af0e993415b2eb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getElevationMask_d8e21ec66d7f6ed7] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
            mids$[mid_getMinElevation_557b8123390d8d0c] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getRefractionModel_9124ab694682a769] = env->getMethodID(cls, "getRefractionModel", "()Lorg/orekit/models/AtmosphericRefractionModel;");
            mids$[mid_getTopocentricFrame_2bb3e750d93d59cc] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_withConstantElevation_b9a578648b0acaab] = env->getMethodID(cls, "withConstantElevation", "(D)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_withElevationMask_7455425acfa093e7] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_withRefraction_8bb5322c8d1891db] = env->getMethodID(cls, "withRefraction", "(Lorg/orekit/models/AtmosphericRefractionModel;)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_create_27ce6ca4fbdc0588] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldElevationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldElevationDetector::FieldElevationDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::TopocentricFrame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5ad0e9bb8a1deb62, a0.this$, a1.this$)) {}

        FieldElevationDetector::FieldElevationDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d8af0e993415b2eb, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldElevationDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::utils::ElevationMask FieldElevationDetector::getElevationMask() const
        {
          return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_d8e21ec66d7f6ed7]));
        }

        jdouble FieldElevationDetector::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_557b8123390d8d0c]);
        }

        ::org::orekit::models::AtmosphericRefractionModel FieldElevationDetector::getRefractionModel() const
        {
          return ::org::orekit::models::AtmosphericRefractionModel(env->callObjectMethod(this$, mids$[mid_getRefractionModel_9124ab694682a769]));
        }

        ::org::orekit::frames::TopocentricFrame FieldElevationDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_2bb3e750d93d59cc]));
        }

        FieldElevationDetector FieldElevationDetector::withConstantElevation(jdouble a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withConstantElevation_b9a578648b0acaab], a0));
        }

        FieldElevationDetector FieldElevationDetector::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withElevationMask_7455425acfa093e7], a0.this$));
        }

        FieldElevationDetector FieldElevationDetector::withRefraction(const ::org::orekit::models::AtmosphericRefractionModel & a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withRefraction_8bb5322c8d1891db], a0.this$));
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
        static PyObject *t_FieldElevationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationDetector_of_(t_FieldElevationDetector *self, PyObject *args);
        static int t_FieldElevationDetector_init_(t_FieldElevationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldElevationDetector_g(t_FieldElevationDetector *self, PyObject *args);
        static PyObject *t_FieldElevationDetector_getElevationMask(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getMinElevation(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getRefractionModel(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getTopocentricFrame(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_withConstantElevation(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_withElevationMask(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_withRefraction(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_get__elevationMask(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__minElevation(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__refractionModel(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__topocentricFrame(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__parameters_(t_FieldElevationDetector *self, void *data);
        static PyGetSetDef t_FieldElevationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldElevationDetector, elevationMask),
          DECLARE_GET_FIELD(t_FieldElevationDetector, minElevation),
          DECLARE_GET_FIELD(t_FieldElevationDetector, refractionModel),
          DECLARE_GET_FIELD(t_FieldElevationDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_FieldElevationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldElevationDetector__methods_[] = {
          DECLARE_METHOD(t_FieldElevationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getElevationMask, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getRefractionModel, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getTopocentricFrame, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, withConstantElevation, METH_O),
          DECLARE_METHOD(t_FieldElevationDetector, withElevationMask, METH_O),
          DECLARE_METHOD(t_FieldElevationDetector, withRefraction, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldElevationDetector)[] = {
          { Py_tp_methods, t_FieldElevationDetector__methods_ },
          { Py_tp_init, (void *) t_FieldElevationDetector_init_ },
          { Py_tp_getset, t_FieldElevationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldElevationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldElevationDetector, t_FieldElevationDetector, FieldElevationDetector);
        PyObject *t_FieldElevationDetector::wrap_Object(const FieldElevationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationDetector *self = (t_FieldElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldElevationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationDetector *self = (t_FieldElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldElevationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldElevationDetector), &PY_TYPE_DEF(FieldElevationDetector), module, "FieldElevationDetector", 0);
        }

        void t_FieldElevationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "class_", make_descriptor(FieldElevationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "wrapfn_", make_descriptor(t_FieldElevationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldElevationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldElevationDetector::initializeClass, 1)))
            return NULL;
          return t_FieldElevationDetector::wrap_Object(FieldElevationDetector(((t_FieldElevationDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldElevationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldElevationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldElevationDetector_of_(t_FieldElevationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldElevationDetector_init_(t_FieldElevationDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
              FieldElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldElevationDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              FieldElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldElevationDetector(a0, a1, a2));
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

        static PyObject *t_FieldElevationDetector_g(t_FieldElevationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldElevationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldElevationDetector_getElevationMask(t_FieldElevationDetector *self)
        {
          ::org::orekit::utils::ElevationMask result((jobject) NULL);
          OBJ_CALL(result = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_getMinElevation(t_FieldElevationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldElevationDetector_getRefractionModel(t_FieldElevationDetector *self)
        {
          ::org::orekit::models::AtmosphericRefractionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_getTopocentricFrame(t_FieldElevationDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_withConstantElevation(t_FieldElevationDetector *self, PyObject *arg)
        {
          jdouble a0;
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withConstantElevation(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationDetector_withElevationMask(t_FieldElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::utils::ElevationMask a0((jobject) NULL);
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withElevationMask(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationDetector_withRefraction(t_FieldElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withRefraction(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withRefraction", arg);
          return NULL;
        }
        static PyObject *t_FieldElevationDetector_get__parameters_(t_FieldElevationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldElevationDetector_get__elevationMask(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::utils::ElevationMask value((jobject) NULL);
          OBJ_CALL(value = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
        }

        static PyObject *t_FieldElevationDetector_get__minElevation(t_FieldElevationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldElevationDetector_get__refractionModel(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::models::AtmosphericRefractionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(value);
        }

        static PyObject *t_FieldElevationDetector_get__topocentricFrame(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Variance::class$ = NULL;
          jmethodID *Variance::mids$ = NULL;
          bool Variance::live$ = false;

          jclass Variance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Variance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b42241ac9de9fb3c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_466cd392a0f97ab1] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_aggregate_60f191d3bfda3334] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/Variance;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_f5aebf27311e06e7] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Variance;");
              mids$[mid_evaluate_05f591cf0826202b] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_abf45904c34f3045] = env->getMethodID(cls, "evaluate", "([D[DD)D");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_579f1672894f464a] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_evaluate_134920ed0a3e958a] = env->getMethodID(cls, "evaluate", "([DDII)D");
              mids$[mid_evaluate_fa204c95c755fb17] = env->getMethodID(cls, "evaluate", "([D[DDII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_isBiasCorrected_89b302893bdbe1f1] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrection_69eaa2921c58f477] = env->getMethodID(cls, "withBiasCorrection", "(Z)Lorg/hipparchus/stat/descriptive/moment/Variance;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Variance::Variance() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          Variance::Variance(const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_b42241ac9de9fb3c, a0.this$)) {}

          Variance::Variance(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

          Variance::Variance(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_466cd392a0f97ab1, a0, a1.this$)) {}

          void Variance::aggregate(const Variance & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_60f191d3bfda3334], a0.this$);
          }

          void Variance::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          Variance Variance::copy() const
          {
            return Variance(env->callObjectMethod(this$, mids$[mid_copy_f5aebf27311e06e7]));
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_05f591cf0826202b], a0.this$, a1);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_abf45904c34f3045], a0.this$, a1.this$, a2);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_579f1672894f464a], a0.this$, a1.this$, a2, a3);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_134920ed0a3e958a], a0.this$, a1, a2, a3);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2, jint a3, jint a4) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_fa204c95c755fb17], a0.this$, a1.this$, a2, a3, a4);
          }

          jlong Variance::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble Variance::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void Variance::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
          }

          jboolean Variance::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_89b302893bdbe1f1]);
          }

          Variance Variance::withBiasCorrection(jboolean a0) const
          {
            return Variance(env->callObjectMethod(this$, mids$[mid_withBiasCorrection_69eaa2921c58f477], a0));
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
        namespace moment {
          static PyObject *t_Variance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Variance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Variance_init_(t_Variance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Variance_aggregate(t_Variance *self, PyObject *arg);
          static PyObject *t_Variance_clear(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_copy(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_evaluate(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_getN(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_getResult(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_increment(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_isBiasCorrected(t_Variance *self);
          static PyObject *t_Variance_withBiasCorrection(t_Variance *self, PyObject *arg);
          static PyObject *t_Variance_get__biasCorrected(t_Variance *self, void *data);
          static PyObject *t_Variance_get__n(t_Variance *self, void *data);
          static PyObject *t_Variance_get__result(t_Variance *self, void *data);
          static PyGetSetDef t_Variance__fields_[] = {
            DECLARE_GET_FIELD(t_Variance, biasCorrected),
            DECLARE_GET_FIELD(t_Variance, n),
            DECLARE_GET_FIELD(t_Variance, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Variance__methods_[] = {
            DECLARE_METHOD(t_Variance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Variance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Variance, aggregate, METH_O),
            DECLARE_METHOD(t_Variance, clear, METH_VARARGS),
            DECLARE_METHOD(t_Variance, copy, METH_VARARGS),
            DECLARE_METHOD(t_Variance, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Variance, getN, METH_VARARGS),
            DECLARE_METHOD(t_Variance, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Variance, increment, METH_VARARGS),
            DECLARE_METHOD(t_Variance, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_Variance, withBiasCorrection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Variance)[] = {
            { Py_tp_methods, t_Variance__methods_ },
            { Py_tp_init, (void *) t_Variance_init_ },
            { Py_tp_getset, t_Variance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Variance)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Variance, t_Variance, Variance);

          void t_Variance::install(PyObject *module)
          {
            installType(&PY_TYPE(Variance), &PY_TYPE_DEF(Variance), module, "Variance", 0);
          }

          void t_Variance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "class_", make_descriptor(Variance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "wrapfn_", make_descriptor(t_Variance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Variance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Variance::initializeClass, 1)))
              return NULL;
            return t_Variance::wrap_Object(Variance(((t_Variance *) arg)->object.this$));
          }
          static PyObject *t_Variance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Variance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Variance_init_(t_Variance *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Variance object((jobject) NULL);

                INT_CALL(object = Variance());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a0((jobject) NULL);
                Variance object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0))
                {
                  INT_CALL(object = Variance(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                Variance object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = Variance(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a1((jobject) NULL);
                Variance object((jobject) NULL);

                if (!parseArgs(args, "Zk", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Variance(a0, a1));
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

          static PyObject *t_Variance_aggregate(t_Variance *self, PyObject *arg)
          {
            Variance a0((jobject) NULL);

            if (!parseArg(arg, "k", Variance::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Variance_clear(t_Variance *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Variance_copy(t_Variance *self, PyObject *args)
          {
            Variance result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Variance::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Variance_evaluate(t_Variance *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
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
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 5:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble a2;
                jint a3;
                jint a4;
                jdouble result;

                if (!parseArgs(args, "[D[DDII", &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3, a4));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Variance_getN(t_Variance *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Variance_getResult(t_Variance *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Variance_increment(t_Variance *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Variance_isBiasCorrected(t_Variance *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Variance_withBiasCorrection(t_Variance *self, PyObject *arg)
          {
            jboolean a0;
            Variance result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrection(a0));
              return t_Variance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrection", arg);
            return NULL;
          }

          static PyObject *t_Variance_get__biasCorrected(t_Variance *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Variance_get__n(t_Variance *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Variance_get__result(t_Variance *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer$Formula::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer$Formula::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer$Formula::live$ = false;
            NonLinearConjugateGradientOptimizer$Formula *NonLinearConjugateGradientOptimizer$Formula::FLETCHER_REEVES = NULL;
            NonLinearConjugateGradientOptimizer$Formula *NonLinearConjugateGradientOptimizer$Formula::POLAK_RIBIERE = NULL;

            jclass NonLinearConjugateGradientOptimizer$Formula::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_a9cc3413a2d8d610] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;");
                mids$[mid_values_06e50e69145ce8b2] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FLETCHER_REEVES = new NonLinearConjugateGradientOptimizer$Formula(env->getStaticObjectField(cls, "FLETCHER_REEVES", "Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;"));
                POLAK_RIBIERE = new NonLinearConjugateGradientOptimizer$Formula(env->getStaticObjectField(cls, "POLAK_RIBIERE", "Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer$Formula NonLinearConjugateGradientOptimizer$Formula::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return NonLinearConjugateGradientOptimizer$Formula(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a9cc3413a2d8d610], a0.this$));
            }

            JArray< NonLinearConjugateGradientOptimizer$Formula > NonLinearConjugateGradientOptimizer$Formula::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< NonLinearConjugateGradientOptimizer$Formula >(env->callStaticObjectMethod(cls, mids$[mid_values_06e50e69145ce8b2]));
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
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_of_(t_NonLinearConjugateGradientOptimizer$Formula *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_values(PyTypeObject *type);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_get__parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer$Formula__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer$Formula, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer$Formula__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer$Formula)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer$Formula__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer$Formula__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer$Formula)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer$Formula, t_NonLinearConjugateGradientOptimizer$Formula, NonLinearConjugateGradientOptimizer$Formula);
            PyObject *t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(const NonLinearConjugateGradientOptimizer$Formula& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$Formula *self = (t_NonLinearConjugateGradientOptimizer$Formula *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$Formula *self = (t_NonLinearConjugateGradientOptimizer$Formula *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer$Formula::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula), module, "NonLinearConjugateGradientOptimizer$Formula", 0);
            }

            void t_NonLinearConjugateGradientOptimizer$Formula::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "class_", make_descriptor(NonLinearConjugateGradientOptimizer$Formula::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "boxfn_", make_descriptor(boxObject));
              env->getClass(NonLinearConjugateGradientOptimizer$Formula::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "FLETCHER_REEVES", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(*NonLinearConjugateGradientOptimizer$Formula::FLETCHER_REEVES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "POLAK_RIBIERE", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(*NonLinearConjugateGradientOptimizer$Formula::POLAK_RIBIERE)));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer$Formula::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(NonLinearConjugateGradientOptimizer$Formula(((t_NonLinearConjugateGradientOptimizer$Formula *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer$Formula::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_of_(t_NonLinearConjugateGradientOptimizer$Formula *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              NonLinearConjugateGradientOptimizer$Formula result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::valueOf(a0));
                return t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_values(PyTypeObject *type)
            {
              JArray< NonLinearConjugateGradientOptimizer$Formula > result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::values());
              return JArray<jobject>(result.this$).wrap(t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject);
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_get__parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self, void *data)
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
#include "org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder.h"
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

        ::java::lang::Class *AdamsMoultonFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsMoultonFieldIntegratorBuilder::mids$ = NULL;
        bool AdamsMoultonFieldIntegratorBuilder::live$ = false;

        jclass AdamsMoultonFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c4eb928bd0dae600] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonFieldIntegratorBuilder::AdamsMoultonFieldIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_c4eb928bd0dae600, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AdamsMoultonFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_of_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args);
        static int t_AdamsMoultonFieldIntegratorBuilder_init_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_buildIntegrator(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_get__parameters_(t_AdamsMoultonFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AdamsMoultonFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsMoultonFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsMoultonFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsMoultonFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AdamsMoultonFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonFieldIntegratorBuilder, t_AdamsMoultonFieldIntegratorBuilder, AdamsMoultonFieldIntegratorBuilder);
        PyObject *t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(const AdamsMoultonFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegratorBuilder *self = (t_AdamsMoultonFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegratorBuilder *self = (t_AdamsMoultonFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsMoultonFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonFieldIntegratorBuilder), &PY_TYPE_DEF(AdamsMoultonFieldIntegratorBuilder), module, "AdamsMoultonFieldIntegratorBuilder", 0);
        }

        void t_AdamsMoultonFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "class_", make_descriptor(AdamsMoultonFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(AdamsMoultonFieldIntegratorBuilder(((t_AdamsMoultonFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_of_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsMoultonFieldIntegratorBuilder_init_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsMoultonFieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsMoultonFieldIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_buildIntegrator(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(AdamsMoultonFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_get__parameters_(t_AdamsMoultonFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/util/SortedMap.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *LnsCoefficients::class$ = NULL;
            jmethodID *LnsCoefficients::mids$ = NULL;
            bool LnsCoefficients::live$ = false;

            jclass LnsCoefficients::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_75c0bd93df30ee67] = env->getMethodID(cls, "<init>", "(II[[DLjava/util/SortedMap;D)V");
                mids$[mid_getLns_21b81d54c06b64b0] = env->getMethodID(cls, "getLns", "(II)D");
                mids$[mid_getdLnsdGamma_21b81d54c06b64b0] = env->getMethodID(cls, "getdLnsdGamma", "(II)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LnsCoefficients::LnsCoefficients(jint a0, jint a1, const JArray< JArray< jdouble > > & a2, const ::java::util::SortedMap & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75c0bd93df30ee67, a0, a1, a2.this$, a3.this$, a4)) {}

            jdouble LnsCoefficients::getLns(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLns_21b81d54c06b64b0], a0, a1);
            }

            jdouble LnsCoefficients::getdLnsdGamma(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdLnsdGamma_21b81d54c06b64b0], a0, a1);
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
            static PyObject *t_LnsCoefficients_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LnsCoefficients_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LnsCoefficients_init_(t_LnsCoefficients *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LnsCoefficients_getLns(t_LnsCoefficients *self, PyObject *args);
            static PyObject *t_LnsCoefficients_getdLnsdGamma(t_LnsCoefficients *self, PyObject *args);

            static PyMethodDef t_LnsCoefficients__methods_[] = {
              DECLARE_METHOD(t_LnsCoefficients, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LnsCoefficients, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LnsCoefficients, getLns, METH_VARARGS),
              DECLARE_METHOD(t_LnsCoefficients, getdLnsdGamma, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LnsCoefficients)[] = {
              { Py_tp_methods, t_LnsCoefficients__methods_ },
              { Py_tp_init, (void *) t_LnsCoefficients_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LnsCoefficients)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LnsCoefficients, t_LnsCoefficients, LnsCoefficients);

            void t_LnsCoefficients::install(PyObject *module)
            {
              installType(&PY_TYPE(LnsCoefficients), &PY_TYPE_DEF(LnsCoefficients), module, "LnsCoefficients", 0);
            }

            void t_LnsCoefficients::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "class_", make_descriptor(LnsCoefficients::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "wrapfn_", make_descriptor(t_LnsCoefficients::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LnsCoefficients_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LnsCoefficients::initializeClass, 1)))
                return NULL;
              return t_LnsCoefficients::wrap_Object(LnsCoefficients(((t_LnsCoefficients *) arg)->object.this$));
            }
            static PyObject *t_LnsCoefficients_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LnsCoefficients::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LnsCoefficients_init_(t_LnsCoefficients *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              JArray< JArray< jdouble > > a2((jobject) NULL);
              ::java::util::SortedMap a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              LnsCoefficients object((jobject) NULL);

              if (!parseArgs(args, "II[[DKD", ::java::util::SortedMap::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_SortedMap::parameters_, &a4))
              {
                INT_CALL(object = LnsCoefficients(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LnsCoefficients_getLns(t_LnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLns(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getLns", args);
              return NULL;
            }

            static PyObject *t_LnsCoefficients_getdLnsdGamma(t_LnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdLnsdGamma(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdLnsdGamma", args);
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
#include "org/orekit/bodies/Ellipse.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Ellipse::class$ = NULL;
      jmethodID *Ellipse::mids$ = NULL;
      bool Ellipse::live$ = false;

      jclass Ellipse::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Ellipse");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ce1f0f7b19db1321] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDLorg/orekit/frames/Frame;)V");
          mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getB_557b8123390d8d0c] = env->getMethodID(cls, "getB", "()D");
          mids$[mid_getCenter_f88961cca75a2c0a] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getCenterOfCurvature_990490e7ef486e74] = env->getMethodID(cls, "getCenterOfCurvature", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getU_f88961cca75a2c0a] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getV_f88961cca75a2c0a] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pointAt_20de5f9d51c6611f] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_projectToEllipse_fc4b100c90055253] = env->getMethodID(cls, "projectToEllipse", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToEllipse_990490e7ef486e74] = env->getMethodID(cls, "projectToEllipse", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_toPlane_3b3b6a3c97d1f7fa] = env->getMethodID(cls, "toPlane", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_toSpace_ac3ac1fb666bf55b] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Ellipse::Ellipse(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jdouble a4, const ::org::orekit::frames::Frame & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce1f0f7b19db1321, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

      jdouble Ellipse::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_557b8123390d8d0c]);
      }

      jdouble Ellipse::getB() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getB_557b8123390d8d0c]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getCenter() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenter_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getCenterOfCurvature_990490e7ef486e74], a0.this$));
      }

      ::org::orekit::frames::Frame Ellipse::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getU() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getU_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getV() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::pointAt(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAt_20de5f9d51c6611f], a0));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Ellipse::projectToEllipse(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToEllipse_fc4b100c90055253], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_projectToEllipse_990490e7ef486e74], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::toPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toPlane_3b3b6a3c97d1f7fa], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::toSpace(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_ac3ac1fb666bf55b], a0.this$));
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
      static PyObject *t_Ellipse_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Ellipse_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Ellipse_init_(t_Ellipse *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Ellipse_getA(t_Ellipse *self);
      static PyObject *t_Ellipse_getB(t_Ellipse *self);
      static PyObject *t_Ellipse_getCenter(t_Ellipse *self);
      static PyObject *t_Ellipse_getCenterOfCurvature(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_getFrame(t_Ellipse *self);
      static PyObject *t_Ellipse_getU(t_Ellipse *self);
      static PyObject *t_Ellipse_getV(t_Ellipse *self);
      static PyObject *t_Ellipse_pointAt(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_projectToEllipse(t_Ellipse *self, PyObject *args);
      static PyObject *t_Ellipse_toPlane(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_toSpace(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_get__a(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__b(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__center(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__frame(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__u(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__v(t_Ellipse *self, void *data);
      static PyGetSetDef t_Ellipse__fields_[] = {
        DECLARE_GET_FIELD(t_Ellipse, a),
        DECLARE_GET_FIELD(t_Ellipse, b),
        DECLARE_GET_FIELD(t_Ellipse, center),
        DECLARE_GET_FIELD(t_Ellipse, frame),
        DECLARE_GET_FIELD(t_Ellipse, u),
        DECLARE_GET_FIELD(t_Ellipse, v),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Ellipse__methods_[] = {
        DECLARE_METHOD(t_Ellipse, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipse, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipse, getA, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getB, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getCenter, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getCenterOfCurvature, METH_O),
        DECLARE_METHOD(t_Ellipse, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getU, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getV, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, pointAt, METH_O),
        DECLARE_METHOD(t_Ellipse, projectToEllipse, METH_VARARGS),
        DECLARE_METHOD(t_Ellipse, toPlane, METH_O),
        DECLARE_METHOD(t_Ellipse, toSpace, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Ellipse)[] = {
        { Py_tp_methods, t_Ellipse__methods_ },
        { Py_tp_init, (void *) t_Ellipse_init_ },
        { Py_tp_getset, t_Ellipse__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Ellipse)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Ellipse, t_Ellipse, Ellipse);

      void t_Ellipse::install(PyObject *module)
      {
        installType(&PY_TYPE(Ellipse), &PY_TYPE_DEF(Ellipse), module, "Ellipse", 0);
      }

      void t_Ellipse::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "class_", make_descriptor(Ellipse::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "wrapfn_", make_descriptor(t_Ellipse::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Ellipse_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Ellipse::initializeClass, 1)))
          return NULL;
        return t_Ellipse::wrap_Object(Ellipse(((t_Ellipse *) arg)->object.this$));
      }
      static PyObject *t_Ellipse_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Ellipse::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Ellipse_init_(t_Ellipse *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        jdouble a3;
        jdouble a4;
        ::org::orekit::frames::Frame a5((jobject) NULL);
        Ellipse object((jobject) NULL);

        if (!parseArgs(args, "kkkDDk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
        {
          INT_CALL(object = Ellipse(a0, a1, a2, a3, a4, a5));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Ellipse_getA(t_Ellipse *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipse_getB(t_Ellipse *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getB());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipse_getCenter(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getCenterOfCurvature(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getCenterOfCurvature(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCenterOfCurvature", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_getFrame(t_Ellipse *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getU(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getV(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_pointAt(t_Ellipse *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.pointAt(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_projectToEllipse(t_Ellipse *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToEllipse", args);
        return NULL;
      }

      static PyObject *t_Ellipse_toPlane(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toPlane(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toPlane", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_toSpace(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toSpace(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_get__a(t_Ellipse *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipse_get__b(t_Ellipse *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getB());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipse_get__center(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__frame(t_Ellipse *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__u(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__v(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *EstimatedTroposphericModel::class$ = NULL;
          jmethodID *EstimatedTroposphericModel::mids$ = NULL;
          bool EstimatedTroposphericModel::live$ = false;
          ::java::lang::String *EstimatedTroposphericModel::TOTAL_ZENITH_DELAY = NULL;

          jclass EstimatedTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/EstimatedTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7317e2601a139e8d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/MappingFunction;D)V");
              mids$[mid_init$_2fc4761e6015a9da] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/troposphere/MappingFunction;D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_a4fdd877b349d4a6] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_129678f244f63094] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              TOTAL_ZENITH_DELAY = new ::java::lang::String(env->getStaticObjectField(cls, "TOTAL_ZENITH_DELAY", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EstimatedTroposphericModel::EstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::MappingFunction & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7317e2601a139e8d, a0.this$, a1)) {}

          EstimatedTroposphericModel::EstimatedTroposphericModel(jdouble a0, jdouble a1, const ::org::orekit::models::earth::troposphere::MappingFunction & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2fc4761e6015a9da, a0, a1, a2.this$, a3)) {}

          ::java::util::List EstimatedTroposphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::hipparchus::CalculusFieldElement EstimatedTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_a4fdd877b349d4a6], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble EstimatedTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_129678f244f63094], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_EstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EstimatedTroposphericModel_init_(t_EstimatedTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EstimatedTroposphericModel_getParametersDrivers(t_EstimatedTroposphericModel *self);
          static PyObject *t_EstimatedTroposphericModel_pathDelay(t_EstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_EstimatedTroposphericModel_get__parametersDrivers(t_EstimatedTroposphericModel *self, void *data);
          static PyGetSetDef t_EstimatedTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_EstimatedTroposphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EstimatedTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_EstimatedTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EstimatedTroposphericModel)[] = {
            { Py_tp_methods, t_EstimatedTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_EstimatedTroposphericModel_init_ },
            { Py_tp_getset, t_EstimatedTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EstimatedTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EstimatedTroposphericModel, t_EstimatedTroposphericModel, EstimatedTroposphericModel);

          void t_EstimatedTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(EstimatedTroposphericModel), &PY_TYPE_DEF(EstimatedTroposphericModel), module, "EstimatedTroposphericModel", 0);
          }

          void t_EstimatedTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "class_", make_descriptor(EstimatedTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "wrapfn_", make_descriptor(t_EstimatedTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(EstimatedTroposphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "TOTAL_ZENITH_DELAY", make_descriptor(j2p(*EstimatedTroposphericModel::TOTAL_ZENITH_DELAY)));
          }

          static PyObject *t_EstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EstimatedTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_EstimatedTroposphericModel::wrap_Object(EstimatedTroposphericModel(((t_EstimatedTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_EstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EstimatedTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EstimatedTroposphericModel_init_(t_EstimatedTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::models::earth::troposphere::MappingFunction a0((jobject) NULL);
                jdouble a1;
                EstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::models::earth::troposphere::MappingFunction::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = EstimatedTroposphericModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::troposphere::MappingFunction a2((jobject) NULL);
                jdouble a3;
                EstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "DDkD", ::org::orekit::models::earth::troposphere::MappingFunction::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = EstimatedTroposphericModel(a0, a1, a2, a3));
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

          static PyObject *t_EstimatedTroposphericModel_getParametersDrivers(t_EstimatedTroposphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_EstimatedTroposphericModel_pathDelay(t_EstimatedTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_EstimatedTroposphericModel_get__parametersDrivers(t_EstimatedTroposphericModel *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "org/orekit/frames/Frames.h"
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
          namespace data {

            ::java::lang::Class *SBASNavigationMessage::class$ = NULL;
            jmethodID *SBASNavigationMessage::mids$ = NULL;
            bool SBASNavigationMessage::live$ = false;

            jclass SBASNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getAGf0_557b8123390d8d0c] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_557b8123390d8d0c] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getIODN_412668abc8d889e9] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPropagator_21e9d28a362393d1] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getPropagator_9172eb1b3e877a9f] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;)Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getPropagator_edafac9436d54b30] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;DD)Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getURA_557b8123390d8d0c] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_getWeek_412668abc8d889e9] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_setAGf0_10f281d777284cea] = env->getMethodID(cls, "setAGf0", "(D)V");
                mids$[mid_setAGf1_10f281d777284cea] = env->getMethodID(cls, "setAGf1", "(D)V");
                mids$[mid_setIODN_10f281d777284cea] = env->getMethodID(cls, "setIODN", "(D)V");
                mids$[mid_setTime_10f281d777284cea] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setURA_10f281d777284cea] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SBASNavigationMessage::SBASNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jdouble SBASNavigationMessage::getAGf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf0_557b8123390d8d0c]);
            }

            jdouble SBASNavigationMessage::getAGf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf1_557b8123390d8d0c]);
            }

            jint SBASNavigationMessage::getIODN() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODN_412668abc8d889e9]);
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_21e9d28a362393d1]));
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator(const ::org::orekit::frames::Frames & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_9172eb1b3e877a9f], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator(const ::org::orekit::frames::Frames & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4, jdouble a5) const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_edafac9436d54b30], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
            }

            jdouble SBASNavigationMessage::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
            }

            jdouble SBASNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_557b8123390d8d0c]);
            }

            jint SBASNavigationMessage::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_412668abc8d889e9]);
            }

            void SBASNavigationMessage::setAGf0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAGf0_10f281d777284cea], a0);
            }

            void SBASNavigationMessage::setAGf1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAGf1_10f281d777284cea], a0);
            }

            void SBASNavigationMessage::setIODN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODN_10f281d777284cea], a0);
            }

            void SBASNavigationMessage::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_10f281d777284cea], a0);
            }

            void SBASNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_10f281d777284cea], a0);
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
        namespace gnss {
          namespace data {
            static PyObject *t_SBASNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SBASNavigationMessage_init_(t_SBASNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SBASNavigationMessage_getAGf0(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getAGf1(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getIODN(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getPropagator(t_SBASNavigationMessage *self, PyObject *args);
            static PyObject *t_SBASNavigationMessage_getTime(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getURA(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getWeek(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_setAGf0(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setAGf1(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setIODN(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setTime(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setURA(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_get__aGf0(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__aGf0(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__aGf1(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__aGf1(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__iODN(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__iODN(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__propagator(t_SBASNavigationMessage *self, void *data);
            static PyObject *t_SBASNavigationMessage_get__time(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__time(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__uRA(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__uRA(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__week(t_SBASNavigationMessage *self, void *data);
            static PyGetSetDef t_SBASNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, aGf0),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, aGf1),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, iODN),
              DECLARE_GET_FIELD(t_SBASNavigationMessage, propagator),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, time),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, uRA),
              DECLARE_GET_FIELD(t_SBASNavigationMessage, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SBASNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_SBASNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASNavigationMessage, getAGf0, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getAGf1, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getIODN, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getTime, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, setAGf0, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setAGf1, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setIODN, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setTime, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SBASNavigationMessage)[] = {
              { Py_tp_methods, t_SBASNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_SBASNavigationMessage_init_ },
              { Py_tp_getset, t_SBASNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SBASNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage),
              NULL
            };

            DEFINE_TYPE(SBASNavigationMessage, t_SBASNavigationMessage, SBASNavigationMessage);

            void t_SBASNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(SBASNavigationMessage), &PY_TYPE_DEF(SBASNavigationMessage), module, "SBASNavigationMessage", 0);
            }

            void t_SBASNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "class_", make_descriptor(SBASNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "wrapfn_", make_descriptor(t_SBASNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SBASNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SBASNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_SBASNavigationMessage::wrap_Object(SBASNavigationMessage(((t_SBASNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_SBASNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SBASNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SBASNavigationMessage_init_(t_SBASNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              SBASNavigationMessage object((jobject) NULL);

              INT_CALL(object = SBASNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_SBASNavigationMessage_getAGf0(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getAGf1(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getIODN(t_SBASNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASNavigationMessage_getPropagator(t_SBASNavigationMessage *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                  }
                }
                break;
               case 6:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  jdouble a5;
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkDD", ::org::orekit::frames::Frames::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4, a5));
                    return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_getTime(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getURA(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getWeek(t_SBASNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASNavigationMessage_setAGf0(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAGf0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAGf0", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setAGf1(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAGf1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAGf1", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setIODN(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODN", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setTime(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setURA(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_get__aGf0(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__aGf0(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAGf0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aGf0", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__aGf1(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__aGf1(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAGf1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aGf1", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__iODN(t_SBASNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODN());
              return PyLong_FromLong((long) value);
            }
            static int t_SBASNavigationMessage_set__iODN(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODN", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__propagator(t_SBASNavigationMessage *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::SBASPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(value);
            }

            static PyObject *t_SBASNavigationMessage_get__time(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__time(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__uRA(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__uRA(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__week(t_SBASNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
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
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$StreamOpener::class$ = NULL;
      jmethodID *DataSource$StreamOpener::mids$ = NULL;
      bool DataSource$StreamOpener::live$ = false;

      jclass DataSource$StreamOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$StreamOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openOnce_ce4348991af8a1a1] = env->getMethodID(cls, "openOnce", "()Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::InputStream DataSource$StreamOpener::openOnce() const
      {
        return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openOnce_ce4348991af8a1a1]));
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
      static PyObject *t_DataSource$StreamOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$StreamOpener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$StreamOpener_openOnce(t_DataSource$StreamOpener *self);

      static PyMethodDef t_DataSource$StreamOpener__methods_[] = {
        DECLARE_METHOD(t_DataSource$StreamOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$StreamOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$StreamOpener, openOnce, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$StreamOpener)[] = {
        { Py_tp_methods, t_DataSource$StreamOpener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$StreamOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$StreamOpener, t_DataSource$StreamOpener, DataSource$StreamOpener);

      void t_DataSource$StreamOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$StreamOpener), &PY_TYPE_DEF(DataSource$StreamOpener), module, "DataSource$StreamOpener", 0);
      }

      void t_DataSource$StreamOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "class_", make_descriptor(DataSource$StreamOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "wrapfn_", make_descriptor(t_DataSource$StreamOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$StreamOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$StreamOpener::initializeClass, 1)))
          return NULL;
        return t_DataSource$StreamOpener::wrap_Object(DataSource$StreamOpener(((t_DataSource$StreamOpener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$StreamOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$StreamOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$StreamOpener_openOnce(t_DataSource$StreamOpener *self)
      {
        ::java::io::InputStream result((jobject) NULL);
        OBJ_CALL(result = self->object.openOnce());
        return ::java::io::t_InputStream::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/Galileo.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *Galileo::class$ = NULL;
        jmethodID *Galileo::mids$ = NULL;
        bool Galileo::live$ = false;
        jdouble Galileo::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass Galileo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/Galileo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d2624b53a7984676] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_2a43991494de952e] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_c46751716d57fe1f] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Galileo::Galileo(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_d2624b53a7984676, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
        static PyObject *t_Galileo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Galileo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Galileo_init_(t_Galileo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_Galileo__methods_[] = {
          DECLARE_METHOD(t_Galileo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Galileo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Galileo)[] = {
          { Py_tp_methods, t_Galileo__methods_ },
          { Py_tp_init, (void *) t_Galileo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Galileo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(Galileo, t_Galileo, Galileo);

        void t_Galileo::install(PyObject *module)
        {
          installType(&PY_TYPE(Galileo), &PY_TYPE_DEF(Galileo), module, "Galileo", 0);
        }

        void t_Galileo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "class_", make_descriptor(Galileo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "wrapfn_", make_descriptor(t_Galileo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "boxfn_", make_descriptor(boxObject));
          env->getClass(Galileo::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "DEFAULT_YAW_RATE", make_descriptor(Galileo::DEFAULT_YAW_RATE));
        }

        static PyObject *t_Galileo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Galileo::initializeClass, 1)))
            return NULL;
          return t_Galileo::wrap_Object(Galileo(((t_Galileo *) arg)->object.this$));
        }
        static PyObject *t_Galileo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Galileo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Galileo_init_(t_Galileo *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          Galileo object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Galileo(a0, a1, a2, a3, a4));
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
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableMatrixFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableMatrixFunction::mids$ = NULL;
        bool UnivariateDifferentiableMatrixFunction::live$ = false;

        jclass UnivariateDifferentiableMatrixFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_a79be7c8e7684eb4] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > UnivariateDifferentiableMatrixFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > >(env->callObjectMethod(this$, mids$[mid_value_a79be7c8e7684eb4], a0.this$));
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
        static PyObject *t_UnivariateDifferentiableMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableMatrixFunction_value(t_UnivariateDifferentiableMatrixFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableMatrixFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableMatrixFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableMatrixFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableMatrixFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateMatrixFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableMatrixFunction, t_UnivariateDifferentiableMatrixFunction, UnivariateDifferentiableMatrixFunction);

        void t_UnivariateDifferentiableMatrixFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableMatrixFunction), &PY_TYPE_DEF(UnivariateDifferentiableMatrixFunction), module, "UnivariateDifferentiableMatrixFunction", 0);
        }

        void t_UnivariateDifferentiableMatrixFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "class_", make_descriptor(UnivariateDifferentiableMatrixFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableMatrixFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableMatrixFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableMatrixFunction::wrap_Object(UnivariateDifferentiableMatrixFunction(((t_UnivariateDifferentiableMatrixFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableMatrixFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableMatrixFunction_value(t_UnivariateDifferentiableMatrixFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableMatrixFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Double.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ArrayRealVector::class$ = NULL;
      jmethodID *ArrayRealVector::mids$ = NULL;
      bool ArrayRealVector::live$ = false;

      jclass ArrayRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ArrayRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_c354c911a2a99469] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;)V");
          mids$[mid_init$_87d15d6564ad754f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_fbec1236c2bcb3a3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Lorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_f9ced59a30836914] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;[D)V");
          mids$[mid_init$_d16ecf07ee5cc977] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_22d90c27a54aa2bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_e5e74b7cece49119] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_cc9ae4efb8ef1ba2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Z)V");
          mids$[mid_init$_bdd4888f749f6b83] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_91b51b3c05127ead] = env->getMethodID(cls, "<init>", "([DII)V");
          mids$[mid_init$_3e0896aee0100cf3] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;II)V");
          mids$[mid_add_8588f37f94ff4d77] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_addToEntry_89aad365fb0ed8da] = env->getMethodID(cls, "addToEntry", "(ID)V");
          mids$[mid_append_c25d880db01cc755] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/ArrayRealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_append_342d5b01463e0dc5] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_6041102868c92dbb] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combine_590f13fbb2cfe7a8] = env->getMethodID(cls, "combine", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_combineToSelf_590f13fbb2cfe7a8] = env->getMethodID(cls, "combineToSelf", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_copy_f793fd79757f0404] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_dotProduct_4062041acf71098b] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_ebeDivide_8588f37f94ff4d77] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_ebeMultiply_8588f37f94ff4d77] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDataRef_a53a7513ecedada2] = env->getMethodID(cls, "getDataRef", "()[D");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_4062041acf71098b] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_69cfb132c661aca4] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_4062041acf71098b] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getL1Norm_557b8123390d8d0c] = env->getMethodID(cls, "getL1Norm", "()D");
          mids$[mid_getLInfDistance_4062041acf71098b] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfNorm_557b8123390d8d0c] = env->getMethodID(cls, "getLInfNorm", "()D");
          mids$[mid_getNorm_557b8123390d8d0c] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getSubVector_7d0bb0711f91d9f7] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_map_22b76d3604ea9d1a] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_mapAddToSelf_6041102868c92dbb] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivideToSelf_6041102868c92dbb] = env->getMethodID(cls, "mapDivideToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiplyToSelf_6041102868c92dbb] = env->getMethodID(cls, "mapMultiplyToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtractToSelf_6041102868c92dbb] = env->getMethodID(cls, "mapSubtractToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapToSelf_22b76d3604ea9d1a] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_outerProduct_62980eaee0411593] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_set_10f281d777284cea] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_89aad365fb0ed8da] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_3246bd31f432242d] = env->getMethodID(cls, "setSubVector", "(I[D)V");
          mids$[mid_setSubVector_a967cf1fffd0038f] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_subtract_8588f37f94ff4d77] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_toArray_a53a7513ecedada2] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_walkInDefaultOrder_06815b04d05d6656] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInDefaultOrder_5142e2b49b502547] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInDefaultOrder_5eb221680d1ddecd] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInDefaultOrder_a3edcb203ea44030] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_06815b04d05d6656] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5142e2b49b502547] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5eb221680d1ddecd] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_a3edcb203ea44030] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_checkVectorDimensions_87d15d6564ad754f] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_checkVectorDimensions_a3da1a935cb37f7b] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ArrayRealVector::ArrayRealVector() : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< ::java::lang::Double > & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_c354c911a2a99469, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(const ::org::hipparchus::linear::RealVector & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_87d15d6564ad754f, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(jint a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_fbec1236c2bcb3a3, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const JArray< jdouble > & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_f9ced59a30836914, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_d16ecf07ee5cc977, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const ::org::hipparchus::linear::RealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_22d90c27a54aa2bd, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ::org::hipparchus::linear::RealVector & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_e5e74b7cece49119, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, jboolean a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_cc9ae4efb8ef1ba2, a0.this$, a1)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, jboolean a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_bdd4888f749f6b83, a0.this$, a1)) {}

      ArrayRealVector::ArrayRealVector(jint a0, jdouble a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, jint a1, jint a2) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_91b51b3c05127ead, a0.this$, a1, a2)) {}

      ArrayRealVector::ArrayRealVector(const JArray< ::java::lang::Double > & a0, jint a1, jint a2) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_3e0896aee0100cf3, a0.this$, a1, a2)) {}

      ArrayRealVector ArrayRealVector::add(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_add_8588f37f94ff4d77], a0.this$));
      }

      void ArrayRealVector::addToEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_89aad365fb0ed8da], a0, a1);
      }

      ArrayRealVector ArrayRealVector::append(const ArrayRealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_append_c25d880db01cc755], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::append(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_append_342d5b01463e0dc5], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::append(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_append_6041102868c92dbb], a0));
      }

      ArrayRealVector ArrayRealVector::combine(jdouble a0, jdouble a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_combine_590f13fbb2cfe7a8], a0, a1, a2.this$));
      }

      ArrayRealVector ArrayRealVector::combineToSelf(jdouble a0, jdouble a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_combineToSelf_590f13fbb2cfe7a8], a0, a1, a2.this$));
      }

      ArrayRealVector ArrayRealVector::copy() const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_copy_f793fd79757f0404]));
      }

      jdouble ArrayRealVector::dotProduct(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_4062041acf71098b], a0.this$);
      }

      ArrayRealVector ArrayRealVector::ebeDivide(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_8588f37f94ff4d77], a0.this$));
      }

      ArrayRealVector ArrayRealVector::ebeMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_8588f37f94ff4d77], a0.this$));
      }

      jboolean ArrayRealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      JArray< jdouble > ArrayRealVector::getDataRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDataRef_a53a7513ecedada2]));
      }

      jint ArrayRealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      jdouble ArrayRealVector::getDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_4062041acf71098b], a0.this$);
      }

      jdouble ArrayRealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_69cfb132c661aca4], a0);
      }

      jdouble ArrayRealVector::getL1Distance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_4062041acf71098b], a0.this$);
      }

      jdouble ArrayRealVector::getL1Norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Norm_557b8123390d8d0c]);
      }

      jdouble ArrayRealVector::getLInfDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_4062041acf71098b], a0.this$);
      }

      jdouble ArrayRealVector::getLInfNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfNorm_557b8123390d8d0c]);
      }

      jdouble ArrayRealVector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_557b8123390d8d0c]);
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_7d0bb0711f91d9f7], a0, a1));
      }

      jint ArrayRealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jboolean ArrayRealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
      }

      jboolean ArrayRealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
      }

      ArrayRealVector ArrayRealVector::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_map_22b76d3604ea9d1a], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapAddToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_6041102868c92dbb], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapDivideToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_6041102868c92dbb], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapMultiplyToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_6041102868c92dbb], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapSubtractToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_6041102868c92dbb], a0));
      }

      ArrayRealVector ArrayRealVector::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_mapToSelf_22b76d3604ea9d1a], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix ArrayRealVector::outerProduct(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_62980eaee0411593], a0.this$));
      }

      void ArrayRealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_10f281d777284cea], a0);
      }

      void ArrayRealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_89aad365fb0ed8da], a0, a1);
      }

      void ArrayRealVector::setSubVector(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_3246bd31f432242d], a0, a1.this$);
      }

      void ArrayRealVector::setSubVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_a967cf1fffd0038f], a0, a1.this$);
      }

      ArrayRealVector ArrayRealVector::subtract(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_subtract_8588f37f94ff4d77], a0.this$));
      }

      JArray< jdouble > ArrayRealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_a53a7513ecedada2]));
      }

      ::java::lang::String ArrayRealVector::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_06815b04d05d6656], a0.this$);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_5142e2b49b502547], a0.this$);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_5eb221680d1ddecd], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_a3edcb203ea44030], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_06815b04d05d6656], a0.this$);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5142e2b49b502547], a0.this$);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5eb221680d1ddecd], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_a3edcb203ea44030], a0.this$, a1, a2);
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
      static PyObject *t_ArrayRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ArrayRealVector_init_(t_ArrayRealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ArrayRealVector_add(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_addToEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_append(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_combine(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_combineToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_copy(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_dotProduct(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_ebeDivide(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_ebeMultiply(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_equals(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getDataRef(t_ArrayRealVector *self);
      static PyObject *t_ArrayRealVector_getDimension(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getDistance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getL1Distance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getL1Norm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getLInfDistance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getLInfNorm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getNorm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getSubVector(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_hashCode(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_isInfinite(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_isNaN(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_map(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapAddToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapDivideToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapMultiplyToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapSubtractToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_outerProduct(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_set(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_setEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_setSubVector(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_subtract(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_toArray(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_toString(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_walkInDefaultOrder(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_walkInOptimizedOrder(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_get__dataRef(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__dimension(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__infinite(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__l1Norm(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__lInfNorm(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__naN(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__norm(t_ArrayRealVector *self, void *data);
      static PyGetSetDef t_ArrayRealVector__fields_[] = {
        DECLARE_GET_FIELD(t_ArrayRealVector, dataRef),
        DECLARE_GET_FIELD(t_ArrayRealVector, dimension),
        DECLARE_GET_FIELD(t_ArrayRealVector, infinite),
        DECLARE_GET_FIELD(t_ArrayRealVector, l1Norm),
        DECLARE_GET_FIELD(t_ArrayRealVector, lInfNorm),
        DECLARE_GET_FIELD(t_ArrayRealVector, naN),
        DECLARE_GET_FIELD(t_ArrayRealVector, norm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ArrayRealVector__methods_[] = {
        DECLARE_METHOD(t_ArrayRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayRealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayRealVector, add, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, combine, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, combineToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, copy, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, dotProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDimension, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDistance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getL1Distance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getL1Norm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getLInfDistance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getLInfNorm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getNorm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, isInfinite, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, isNaN, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, map, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapAddToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapDivideToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapMultiplyToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapSubtractToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, set, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, toArray, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, toString, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArrayRealVector)[] = {
        { Py_tp_methods, t_ArrayRealVector__methods_ },
        { Py_tp_init, (void *) t_ArrayRealVector_init_ },
        { Py_tp_getset, t_ArrayRealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArrayRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealVector),
        NULL
      };

      DEFINE_TYPE(ArrayRealVector, t_ArrayRealVector, ArrayRealVector);

      void t_ArrayRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(ArrayRealVector), &PY_TYPE_DEF(ArrayRealVector), module, "ArrayRealVector", 0);
      }

      void t_ArrayRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "class_", make_descriptor(ArrayRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "wrapfn_", make_descriptor(t_ArrayRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArrayRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArrayRealVector::initializeClass, 1)))
          return NULL;
        return t_ArrayRealVector::wrap_Object(ArrayRealVector(((t_ArrayRealVector *) arg)->object.this$));
      }
      static PyObject *t_ArrayRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArrayRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ArrayRealVector_init_(t_ArrayRealVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ArrayRealVector object((jobject) NULL);

            INT_CALL(object = ArrayRealVector());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[O", ::java::lang::PY_TYPE(Double), &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ArrayRealVector a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ArrayRealVector::initializeClass, ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "k[D", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[Dk", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ArrayRealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            jboolean a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kZ", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            jboolean a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DZ", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              INT_CALL(object = ArrayRealVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            jint a1;
            jint a2;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[OII", ::java::lang::PY_TYPE(Double), &a0, &a1, &a2))
            {
              INT_CALL(object = ArrayRealVector(a0, a1, a2));
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

      static PyObject *t_ArrayRealVector_add(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_ArrayRealVector_addToEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_append(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayRealVector a0((jobject) NULL);
            ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ArrayRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_ArrayRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "append", args, 2);
      }

      static PyObject *t_ArrayRealVector_combine(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combine(a0, a1, a2));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "combine", args, 2);
      }

      static PyObject *t_ArrayRealVector_combineToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combineToSelf(a0, a1, a2));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "combineToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_copy(t_ArrayRealVector *self, PyObject *args)
      {
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_ArrayRealVector_dotProduct(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "dotProduct", args, 2);
      }

      static PyObject *t_ArrayRealVector_ebeDivide(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "ebeDivide", args, 2);
      }

      static PyObject *t_ArrayRealVector_ebeMultiply(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "ebeMultiply", args, 2);
      }

      static PyObject *t_ArrayRealVector_equals(t_ArrayRealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ArrayRealVector_getDataRef(t_ArrayRealVector *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return result.wrap();
      }

      static PyObject *t_ArrayRealVector_getDimension(t_ArrayRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getDimension", args, 2);
      }

      static PyObject *t_ArrayRealVector_getDistance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getDistance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_getL1Distance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getL1Distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getL1Distance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getL1Norm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getL1Norm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getL1Norm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getLInfDistance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getLInfDistance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getLInfNorm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLInfNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getLInfNorm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getNorm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getNorm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getSubVector(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getSubVector", args, 2);
      }

      static PyObject *t_ArrayRealVector_hashCode(t_ArrayRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ArrayRealVector_isInfinite(t_ArrayRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isInfinite());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "isInfinite", args, 2);
      }

      static PyObject *t_ArrayRealVector_isNaN(t_ArrayRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isNaN());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "isNaN", args, 2);
      }

      static PyObject *t_ArrayRealVector_map(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "map", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapAddToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapAddToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapDivideToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapDivideToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapMultiplyToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapMultiplyToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapSubtractToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapSubtractToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_outerProduct(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "outerProduct", args, 2);
      }

      static PyObject *t_ArrayRealVector_set(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "set", args, 2);
      }

      static PyObject *t_ArrayRealVector_setEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_setSubVector(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "I[D", &a0, &a1))
            {
              OBJ_CALL(self->object.setSubVector(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setSubVector(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "setSubVector", args, 2);
      }

      static PyObject *t_ArrayRealVector_subtract(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_ArrayRealVector_toArray(t_ArrayRealVector *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toArray());
          return result.wrap();
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "toArray", args, 2);
      }

      static PyObject *t_ArrayRealVector_toString(t_ArrayRealVector *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ArrayRealVector_walkInDefaultOrder(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "walkInDefaultOrder", args, 2);
      }

      static PyObject *t_ArrayRealVector_walkInOptimizedOrder(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_ArrayRealVector_get__dataRef(t_ArrayRealVector *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return value.wrap();
      }

      static PyObject *t_ArrayRealVector_get__dimension(t_ArrayRealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ArrayRealVector_get__infinite(t_ArrayRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ArrayRealVector_get__l1Norm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL1Norm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ArrayRealVector_get__lInfNorm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ArrayRealVector_get__naN(t_ArrayRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ArrayRealVector_get__norm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "java/lang/Throwable.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFileWriter::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFileWriter::mids$ = NULL;
        bool PythonAttitudeEphemerisFileWriter::live$ = false;

        jclass PythonAttitudeEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_write_dd179231c59f3177] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFileWriter::PythonAttitudeEphemerisFileWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonAttitudeEphemerisFileWriter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAttitudeEphemerisFileWriter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAttitudeEphemerisFileWriter::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonAttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFileWriter_init_(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_finalize(t_PythonAttitudeEphemerisFileWriter *self);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_pythonExtension(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args);
        static void JNICALL t_PythonAttitudeEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonAttitudeEphemerisFileWriter_get__self(t_PythonAttitudeEphemerisFileWriter *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFileWriter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFileWriter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileWriter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFileWriter)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFileWriter_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFileWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFileWriter, t_PythonAttitudeEphemerisFileWriter, PythonAttitudeEphemerisFileWriter);

        void t_PythonAttitudeEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFileWriter), &PY_TYPE_DEF(PythonAttitudeEphemerisFileWriter), module, "PythonAttitudeEphemerisFileWriter", 1);
        }

        void t_PythonAttitudeEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "class_", make_descriptor(PythonAttitudeEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFileWriter::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFileWriter_pythonDecRef0 },
            { "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V", (void *) t_PythonAttitudeEphemerisFileWriter_write1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFileWriter::wrap_Object(PythonAttitudeEphemerisFileWriter(((t_PythonAttitudeEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFileWriter_init_(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFileWriter object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFileWriter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_finalize(t_PythonAttitudeEphemerisFileWriter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_pythonExtension(t_PythonAttitudeEphemerisFileWriter *self, PyObject *args)
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

        static void JNICALL t_PythonAttitudeEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAttitudeEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileWriter::mids$[PythonAttitudeEphemerisFileWriter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::lang::t_Appendable::wrap_Object(::java::lang::Appendable(a0));
          PyObject *o1 = ::org::orekit::files::general::t_AttitudeEphemerisFile::wrap_Object(::org::orekit::files::general::AttitudeEphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonAttitudeEphemerisFileWriter_get__self(t_PythonAttitudeEphemerisFileWriter *self, void *data)
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
#include "org/hipparchus/linear/DefaultRealMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultRealMatrixPreservingVisitor::class$ = NULL;
      jmethodID *DefaultRealMatrixPreservingVisitor::mids$ = NULL;
      bool DefaultRealMatrixPreservingVisitor::live$ = false;

      jclass DefaultRealMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultRealMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_end_557b8123390d8d0c] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_b02282271d2e33e3] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_754312f3734d6e2f] = env->getMethodID(cls, "visit", "(IID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultRealMatrixPreservingVisitor::DefaultRealMatrixPreservingVisitor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      jdouble DefaultRealMatrixPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_557b8123390d8d0c]);
      }

      void DefaultRealMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_b02282271d2e33e3], a0, a1, a2, a3, a4, a5);
      }

      void DefaultRealMatrixPreservingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_754312f3734d6e2f], a0, a1, a2);
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
      static PyObject *t_DefaultRealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultRealMatrixPreservingVisitor_init_(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_end(t_DefaultRealMatrixPreservingVisitor *self);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_start(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_visit(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_DefaultRealMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultRealMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_DefaultRealMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultRealMatrixPreservingVisitor_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultRealMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultRealMatrixPreservingVisitor, t_DefaultRealMatrixPreservingVisitor, DefaultRealMatrixPreservingVisitor);

      void t_DefaultRealMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultRealMatrixPreservingVisitor), &PY_TYPE_DEF(DefaultRealMatrixPreservingVisitor), module, "DefaultRealMatrixPreservingVisitor", 0);
      }

      void t_DefaultRealMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "class_", make_descriptor(DefaultRealMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_DefaultRealMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultRealMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultRealMatrixPreservingVisitor::wrap_Object(DefaultRealMatrixPreservingVisitor(((t_DefaultRealMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultRealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultRealMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultRealMatrixPreservingVisitor_init_(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds)
      {
        DefaultRealMatrixPreservingVisitor object((jobject) NULL);

        INT_CALL(object = DefaultRealMatrixPreservingVisitor());
        self->object = object;

        return 0;
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_end(t_DefaultRealMatrixPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_start(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args)
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

      static PyObject *t_DefaultRealMatrixPreservingVisitor_visit(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
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
#include "org/orekit/propagation/StateCovarianceMatrixProvider.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceMatrixProvider::class$ = NULL;
      jmethodID *StateCovarianceMatrixProvider::mids$ = NULL;
      bool StateCovarianceMatrixProvider::live$ = false;

      jclass StateCovarianceMatrixProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceMatrixProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a8816f52a3dd309f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/StateCovariance;)V");
          mids$[mid_getAdditionalState_2a145999b8c9a41d] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getCovarianceOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getCovarianceOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStateCovariance_8c42646c9f5a6c55] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_getStateCovariance_085bf38b9645784e] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_getStateCovariance_827e98e3cdbf34db] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_yields_abdf3beb789bbd4e] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceMatrixProvider::StateCovarianceMatrixProvider(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::propagation::MatricesHarvester & a2, const ::org::orekit::propagation::StateCovariance & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a8816f52a3dd309f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      JArray< jdouble > StateCovarianceMatrixProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_2a145999b8c9a41d], a0.this$));
      }

      ::org::orekit::orbits::OrbitType StateCovarianceMatrixProvider::getCovarianceOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getCovarianceOrbitType_2cea2a2cb3e02091]));
      }

      ::java::lang::String StateCovarianceMatrixProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_8c42646c9f5a6c55], a0.this$));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_085bf38b9645784e], a0.this$, a1.this$));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_827e98e3cdbf34db], a0.this$, a1.this$, a2.this$));
      }

      void StateCovarianceMatrixProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
      }

      jboolean StateCovarianceMatrixProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_abdf3beb789bbd4e], a0.this$);
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
      static PyObject *t_StateCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StateCovarianceMatrixProvider_init_(t_StateCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceMatrixProvider_getAdditionalState(t_StateCovarianceMatrixProvider *self, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_getCovarianceOrbitType(t_StateCovarianceMatrixProvider *self);
      static PyObject *t_StateCovarianceMatrixProvider_getName(t_StateCovarianceMatrixProvider *self);
      static PyObject *t_StateCovarianceMatrixProvider_getStateCovariance(t_StateCovarianceMatrixProvider *self, PyObject *args);
      static PyObject *t_StateCovarianceMatrixProvider_init(t_StateCovarianceMatrixProvider *self, PyObject *args);
      static PyObject *t_StateCovarianceMatrixProvider_yields(t_StateCovarianceMatrixProvider *self, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_get__covarianceOrbitType(t_StateCovarianceMatrixProvider *self, void *data);
      static PyObject *t_StateCovarianceMatrixProvider_get__name(t_StateCovarianceMatrixProvider *self, void *data);
      static PyGetSetDef t_StateCovarianceMatrixProvider__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceMatrixProvider, covarianceOrbitType),
        DECLARE_GET_FIELD(t_StateCovarianceMatrixProvider, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceMatrixProvider__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getCovarianceOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getStateCovariance, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceMatrixProvider)[] = {
        { Py_tp_methods, t_StateCovarianceMatrixProvider__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceMatrixProvider_init_ },
        { Py_tp_getset, t_StateCovarianceMatrixProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceMatrixProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateCovarianceMatrixProvider, t_StateCovarianceMatrixProvider, StateCovarianceMatrixProvider);

      void t_StateCovarianceMatrixProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceMatrixProvider), &PY_TYPE_DEF(StateCovarianceMatrixProvider), module, "StateCovarianceMatrixProvider", 0);
      }

      void t_StateCovarianceMatrixProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "class_", make_descriptor(StateCovarianceMatrixProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_StateCovarianceMatrixProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceMatrixProvider::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceMatrixProvider::wrap_Object(StateCovarianceMatrixProvider(((t_StateCovarianceMatrixProvider *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceMatrixProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StateCovarianceMatrixProvider_init_(t_StateCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester a2((jobject) NULL);
        ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
        StateCovarianceMatrixProvider object((jobject) NULL);

        if (!parseArgs(args, "sskk", ::org::orekit::propagation::MatricesHarvester::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = StateCovarianceMatrixProvider(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_StateCovarianceMatrixProvider_getAdditionalState(t_StateCovarianceMatrixProvider *self, PyObject *arg)
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

      static PyObject *t_StateCovarianceMatrixProvider_getCovarianceOrbitType(t_StateCovarianceMatrixProvider *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCovarianceOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_StateCovarianceMatrixProvider_getName(t_StateCovarianceMatrixProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_StateCovarianceMatrixProvider_getStateCovariance(t_StateCovarianceMatrixProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0, a1));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::orbits::OrbitType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0, a1, a2));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStateCovariance", args);
        return NULL;
      }

      static PyObject *t_StateCovarianceMatrixProvider_init(t_StateCovarianceMatrixProvider *self, PyObject *args)
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

      static PyObject *t_StateCovarianceMatrixProvider_yields(t_StateCovarianceMatrixProvider *self, PyObject *arg)
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

      static PyObject *t_StateCovarianceMatrixProvider_get__covarianceOrbitType(t_StateCovarianceMatrixProvider *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCovarianceOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_StateCovarianceMatrixProvider_get__name(t_StateCovarianceMatrixProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XYZCovariance::class$ = NULL;
            jmethodID *XYZCovariance::mids$ = NULL;
            bool XYZCovariance::live$ = false;

            jclass XYZCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XYZCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_getCdrgdrg_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgdrg", "()D");
                mids$[mid_getCdrgx_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgx", "()D");
                mids$[mid_getCdrgxdot_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgxdot", "()D");
                mids$[mid_getCdrgy_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgy", "()D");
                mids$[mid_getCdrgydot_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgydot", "()D");
                mids$[mid_getCdrgz_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgz", "()D");
                mids$[mid_getCdrgzdot_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgzdot", "()D");
                mids$[mid_getCsrpdrg_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpdrg", "()D");
                mids$[mid_getCsrpsrp_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpsrp", "()D");
                mids$[mid_getCsrpx_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpx", "()D");
                mids$[mid_getCsrpxdot_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpxdot", "()D");
                mids$[mid_getCsrpy_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpy", "()D");
                mids$[mid_getCsrpydot_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpydot", "()D");
                mids$[mid_getCsrpz_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpz", "()D");
                mids$[mid_getCsrpzdot_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpzdot", "()D");
                mids$[mid_getCthrdrg_557b8123390d8d0c] = env->getMethodID(cls, "getCthrdrg", "()D");
                mids$[mid_getCthrsrp_557b8123390d8d0c] = env->getMethodID(cls, "getCthrsrp", "()D");
                mids$[mid_getCthrthr_557b8123390d8d0c] = env->getMethodID(cls, "getCthrthr", "()D");
                mids$[mid_getCthrx_557b8123390d8d0c] = env->getMethodID(cls, "getCthrx", "()D");
                mids$[mid_getCthrxdot_557b8123390d8d0c] = env->getMethodID(cls, "getCthrxdot", "()D");
                mids$[mid_getCthry_557b8123390d8d0c] = env->getMethodID(cls, "getCthry", "()D");
                mids$[mid_getCthrydot_557b8123390d8d0c] = env->getMethodID(cls, "getCthrydot", "()D");
                mids$[mid_getCthrz_557b8123390d8d0c] = env->getMethodID(cls, "getCthrz", "()D");
                mids$[mid_getCthrzdot_557b8123390d8d0c] = env->getMethodID(cls, "getCthrzdot", "()D");
                mids$[mid_getCxdotx_557b8123390d8d0c] = env->getMethodID(cls, "getCxdotx", "()D");
                mids$[mid_getCxdotxdot_557b8123390d8d0c] = env->getMethodID(cls, "getCxdotxdot", "()D");
                mids$[mid_getCxdoty_557b8123390d8d0c] = env->getMethodID(cls, "getCxdoty", "()D");
                mids$[mid_getCxdotz_557b8123390d8d0c] = env->getMethodID(cls, "getCxdotz", "()D");
                mids$[mid_getCxx_557b8123390d8d0c] = env->getMethodID(cls, "getCxx", "()D");
                mids$[mid_getCydotx_557b8123390d8d0c] = env->getMethodID(cls, "getCydotx", "()D");
                mids$[mid_getCydotxdot_557b8123390d8d0c] = env->getMethodID(cls, "getCydotxdot", "()D");
                mids$[mid_getCydoty_557b8123390d8d0c] = env->getMethodID(cls, "getCydoty", "()D");
                mids$[mid_getCydotydot_557b8123390d8d0c] = env->getMethodID(cls, "getCydotydot", "()D");
                mids$[mid_getCydotz_557b8123390d8d0c] = env->getMethodID(cls, "getCydotz", "()D");
                mids$[mid_getCyx_557b8123390d8d0c] = env->getMethodID(cls, "getCyx", "()D");
                mids$[mid_getCyy_557b8123390d8d0c] = env->getMethodID(cls, "getCyy", "()D");
                mids$[mid_getCzdotx_557b8123390d8d0c] = env->getMethodID(cls, "getCzdotx", "()D");
                mids$[mid_getCzdotxdot_557b8123390d8d0c] = env->getMethodID(cls, "getCzdotxdot", "()D");
                mids$[mid_getCzdoty_557b8123390d8d0c] = env->getMethodID(cls, "getCzdoty", "()D");
                mids$[mid_getCzdotydot_557b8123390d8d0c] = env->getMethodID(cls, "getCzdotydot", "()D");
                mids$[mid_getCzdotz_557b8123390d8d0c] = env->getMethodID(cls, "getCzdotz", "()D");
                mids$[mid_getCzdotzdot_557b8123390d8d0c] = env->getMethodID(cls, "getCzdotzdot", "()D");
                mids$[mid_getCzx_557b8123390d8d0c] = env->getMethodID(cls, "getCzx", "()D");
                mids$[mid_getCzy_557b8123390d8d0c] = env->getMethodID(cls, "getCzy", "()D");
                mids$[mid_getCzz_557b8123390d8d0c] = env->getMethodID(cls, "getCzz", "()D");
                mids$[mid_getXYZCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getXYZCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_isCovXYZset_89b302893bdbe1f1] = env->getMethodID(cls, "isCovXYZset", "()Z");
                mids$[mid_setCdrgdrg_10f281d777284cea] = env->getMethodID(cls, "setCdrgdrg", "(D)V");
                mids$[mid_setCdrgx_10f281d777284cea] = env->getMethodID(cls, "setCdrgx", "(D)V");
                mids$[mid_setCdrgxdot_10f281d777284cea] = env->getMethodID(cls, "setCdrgxdot", "(D)V");
                mids$[mid_setCdrgy_10f281d777284cea] = env->getMethodID(cls, "setCdrgy", "(D)V");
                mids$[mid_setCdrgydot_10f281d777284cea] = env->getMethodID(cls, "setCdrgydot", "(D)V");
                mids$[mid_setCdrgz_10f281d777284cea] = env->getMethodID(cls, "setCdrgz", "(D)V");
                mids$[mid_setCdrgzdot_10f281d777284cea] = env->getMethodID(cls, "setCdrgzdot", "(D)V");
                mids$[mid_setCovarianceMatrixEntry_754312f3734d6e2f] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setCsrpdrg_10f281d777284cea] = env->getMethodID(cls, "setCsrpdrg", "(D)V");
                mids$[mid_setCsrpsrp_10f281d777284cea] = env->getMethodID(cls, "setCsrpsrp", "(D)V");
                mids$[mid_setCsrpx_10f281d777284cea] = env->getMethodID(cls, "setCsrpx", "(D)V");
                mids$[mid_setCsrpxdot_10f281d777284cea] = env->getMethodID(cls, "setCsrpxdot", "(D)V");
                mids$[mid_setCsrpy_10f281d777284cea] = env->getMethodID(cls, "setCsrpy", "(D)V");
                mids$[mid_setCsrpydot_10f281d777284cea] = env->getMethodID(cls, "setCsrpydot", "(D)V");
                mids$[mid_setCsrpz_10f281d777284cea] = env->getMethodID(cls, "setCsrpz", "(D)V");
                mids$[mid_setCsrpzdot_10f281d777284cea] = env->getMethodID(cls, "setCsrpzdot", "(D)V");
                mids$[mid_setCthrdrg_10f281d777284cea] = env->getMethodID(cls, "setCthrdrg", "(D)V");
                mids$[mid_setCthrsrp_10f281d777284cea] = env->getMethodID(cls, "setCthrsrp", "(D)V");
                mids$[mid_setCthrthr_10f281d777284cea] = env->getMethodID(cls, "setCthrthr", "(D)V");
                mids$[mid_setCthrx_10f281d777284cea] = env->getMethodID(cls, "setCthrx", "(D)V");
                mids$[mid_setCthrxdot_10f281d777284cea] = env->getMethodID(cls, "setCthrxdot", "(D)V");
                mids$[mid_setCthry_10f281d777284cea] = env->getMethodID(cls, "setCthry", "(D)V");
                mids$[mid_setCthrydot_10f281d777284cea] = env->getMethodID(cls, "setCthrydot", "(D)V");
                mids$[mid_setCthrz_10f281d777284cea] = env->getMethodID(cls, "setCthrz", "(D)V");
                mids$[mid_setCthrzdot_10f281d777284cea] = env->getMethodID(cls, "setCthrzdot", "(D)V");
                mids$[mid_setCxdotx_10f281d777284cea] = env->getMethodID(cls, "setCxdotx", "(D)V");
                mids$[mid_setCxdotxdot_10f281d777284cea] = env->getMethodID(cls, "setCxdotxdot", "(D)V");
                mids$[mid_setCxdoty_10f281d777284cea] = env->getMethodID(cls, "setCxdoty", "(D)V");
                mids$[mid_setCxdotz_10f281d777284cea] = env->getMethodID(cls, "setCxdotz", "(D)V");
                mids$[mid_setCxx_10f281d777284cea] = env->getMethodID(cls, "setCxx", "(D)V");
                mids$[mid_setCydotx_10f281d777284cea] = env->getMethodID(cls, "setCydotx", "(D)V");
                mids$[mid_setCydotxdot_10f281d777284cea] = env->getMethodID(cls, "setCydotxdot", "(D)V");
                mids$[mid_setCydoty_10f281d777284cea] = env->getMethodID(cls, "setCydoty", "(D)V");
                mids$[mid_setCydotydot_10f281d777284cea] = env->getMethodID(cls, "setCydotydot", "(D)V");
                mids$[mid_setCydotz_10f281d777284cea] = env->getMethodID(cls, "setCydotz", "(D)V");
                mids$[mid_setCyx_10f281d777284cea] = env->getMethodID(cls, "setCyx", "(D)V");
                mids$[mid_setCyy_10f281d777284cea] = env->getMethodID(cls, "setCyy", "(D)V");
                mids$[mid_setCzdotx_10f281d777284cea] = env->getMethodID(cls, "setCzdotx", "(D)V");
                mids$[mid_setCzdotxdot_10f281d777284cea] = env->getMethodID(cls, "setCzdotxdot", "(D)V");
                mids$[mid_setCzdoty_10f281d777284cea] = env->getMethodID(cls, "setCzdoty", "(D)V");
                mids$[mid_setCzdotydot_10f281d777284cea] = env->getMethodID(cls, "setCzdotydot", "(D)V");
                mids$[mid_setCzdotz_10f281d777284cea] = env->getMethodID(cls, "setCzdotz", "(D)V");
                mids$[mid_setCzdotzdot_10f281d777284cea] = env->getMethodID(cls, "setCzdotzdot", "(D)V");
                mids$[mid_setCzx_10f281d777284cea] = env->getMethodID(cls, "setCzx", "(D)V");
                mids$[mid_setCzy_10f281d777284cea] = env->getMethodID(cls, "setCzy", "(D)V");
                mids$[mid_setCzz_10f281d777284cea] = env->getMethodID(cls, "setCzz", "(D)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XYZCovariance::XYZCovariance(jboolean a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

            jdouble XYZCovariance::getCdrgdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgdrg_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCdrgx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgx_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCdrgxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgxdot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCdrgy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgy_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCdrgydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgydot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCdrgz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgz_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCdrgzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgzdot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCsrpdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpdrg_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCsrpsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpsrp_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCsrpx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpx_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCsrpxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpxdot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCsrpy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpy_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCsrpydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpydot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCsrpz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpz_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCsrpzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpzdot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCthrdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrdrg_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCthrsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrsrp_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCthrthr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrthr_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCthrx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrx_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCthrxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrxdot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCthry() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthry_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCthrydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrydot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCthrz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrz_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCthrzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrzdot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCxdotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotx_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCxdotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotxdot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCxdoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdoty_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCxdotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotz_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCxx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxx_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCydotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotx_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCydotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotxdot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCydoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydoty_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCydotydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotydot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCydotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotz_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCyx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCyx_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCyy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCyy_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCzdotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotx_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCzdotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotxdot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCzdoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdoty_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCzdotydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotydot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCzdotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotz_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCzdotzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotzdot_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCzx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzx_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCzy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzy_557b8123390d8d0c]);
            }

            jdouble XYZCovariance::getCzz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzz_557b8123390d8d0c]);
            }

            ::org::hipparchus::linear::RealMatrix XYZCovariance::getXYZCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getXYZCovarianceMatrix_70a207fcbc031df2]));
            }

            jboolean XYZCovariance::isCovXYZset() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCovXYZset_89b302893bdbe1f1]);
            }

            void XYZCovariance::setCdrgdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgdrg_10f281d777284cea], a0);
            }

            void XYZCovariance::setCdrgx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgx_10f281d777284cea], a0);
            }

            void XYZCovariance::setCdrgxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgxdot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCdrgy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgy_10f281d777284cea], a0);
            }

            void XYZCovariance::setCdrgydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgydot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCdrgz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgz_10f281d777284cea], a0);
            }

            void XYZCovariance::setCdrgzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgzdot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_754312f3734d6e2f], a0, a1, a2);
            }

            void XYZCovariance::setCsrpdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpdrg_10f281d777284cea], a0);
            }

            void XYZCovariance::setCsrpsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpsrp_10f281d777284cea], a0);
            }

            void XYZCovariance::setCsrpx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpx_10f281d777284cea], a0);
            }

            void XYZCovariance::setCsrpxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpxdot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCsrpy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpy_10f281d777284cea], a0);
            }

            void XYZCovariance::setCsrpydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpydot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCsrpz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpz_10f281d777284cea], a0);
            }

            void XYZCovariance::setCsrpzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpzdot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCthrdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrdrg_10f281d777284cea], a0);
            }

            void XYZCovariance::setCthrsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrsrp_10f281d777284cea], a0);
            }

            void XYZCovariance::setCthrthr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrthr_10f281d777284cea], a0);
            }

            void XYZCovariance::setCthrx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrx_10f281d777284cea], a0);
            }

            void XYZCovariance::setCthrxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrxdot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCthry(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthry_10f281d777284cea], a0);
            }

            void XYZCovariance::setCthrydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrydot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCthrz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrz_10f281d777284cea], a0);
            }

            void XYZCovariance::setCthrzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrzdot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCxdotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotx_10f281d777284cea], a0);
            }

            void XYZCovariance::setCxdotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotxdot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCxdoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdoty_10f281d777284cea], a0);
            }

            void XYZCovariance::setCxdotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotz_10f281d777284cea], a0);
            }

            void XYZCovariance::setCxx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxx_10f281d777284cea], a0);
            }

            void XYZCovariance::setCydotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotx_10f281d777284cea], a0);
            }

            void XYZCovariance::setCydotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotxdot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCydoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydoty_10f281d777284cea], a0);
            }

            void XYZCovariance::setCydotydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotydot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCydotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotz_10f281d777284cea], a0);
            }

            void XYZCovariance::setCyx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCyx_10f281d777284cea], a0);
            }

            void XYZCovariance::setCyy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCyy_10f281d777284cea], a0);
            }

            void XYZCovariance::setCzdotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotx_10f281d777284cea], a0);
            }

            void XYZCovariance::setCzdotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotxdot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCzdoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdoty_10f281d777284cea], a0);
            }

            void XYZCovariance::setCzdotydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotydot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCzdotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotz_10f281d777284cea], a0);
            }

            void XYZCovariance::setCzdotzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotzdot_10f281d777284cea], a0);
            }

            void XYZCovariance::setCzx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzx_10f281d777284cea], a0);
            }

            void XYZCovariance::setCzy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzy_10f281d777284cea], a0);
            }

            void XYZCovariance::setCzz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzz_10f281d777284cea], a0);
            }

            void XYZCovariance::validate(jdouble a0) const
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
            static PyObject *t_XYZCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XYZCovariance_init_(t_XYZCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XYZCovariance_getCdrgdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpsrp(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrsrp(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrthr(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthry(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCyx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCyy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getXYZCovarianceMatrix(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_isCovXYZset(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_setCdrgdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCovarianceMatrixEntry(t_XYZCovariance *self, PyObject *args);
            static PyObject *t_XYZCovariance_setCsrpdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpsrp(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrsrp(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrthr(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthry(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCyx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCyy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_validate(t_XYZCovariance *self, PyObject *args);
            static PyObject *t_XYZCovariance_get__cdrgdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__covXYZset(t_XYZCovariance *self, void *data);
            static PyObject *t_XYZCovariance_get__csrpdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpsrp(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpsrp(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrsrp(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrsrp(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrthr(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrthr(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthry(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthry(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cyx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cyx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cyy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cyy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__xYZCovarianceMatrix(t_XYZCovariance *self, void *data);
            static PyGetSetDef t_XYZCovariance__fields_[] = {
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgzdot),
              DECLARE_GET_FIELD(t_XYZCovariance, covXYZset),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpsrp),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrsrp),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrthr),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthry),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cyx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cyy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czz),
              DECLARE_GET_FIELD(t_XYZCovariance, xYZCovarianceMatrix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XYZCovariance__methods_[] = {
              DECLARE_METHOD(t_XYZCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpsrp, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrsrp, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrthr, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthry, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCyx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCyy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getXYZCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, isCovXYZset, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, setCdrgdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovariance, setCsrpdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpsrp, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrsrp, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrthr, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthry, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCyx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCyy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XYZCovariance)[] = {
              { Py_tp_methods, t_XYZCovariance__methods_ },
              { Py_tp_init, (void *) t_XYZCovariance_init_ },
              { Py_tp_getset, t_XYZCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XYZCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(XYZCovariance, t_XYZCovariance, XYZCovariance);

            void t_XYZCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(XYZCovariance), &PY_TYPE_DEF(XYZCovariance), module, "XYZCovariance", 0);
            }

            void t_XYZCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "class_", make_descriptor(XYZCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "wrapfn_", make_descriptor(t_XYZCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XYZCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XYZCovariance::initializeClass, 1)))
                return NULL;
              return t_XYZCovariance::wrap_Object(XYZCovariance(((t_XYZCovariance *) arg)->object.this$));
            }
            static PyObject *t_XYZCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XYZCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XYZCovariance_init_(t_XYZCovariance *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              XYZCovariance object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = XYZCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XYZCovariance_getCdrgdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpsrp(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrsrp(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrthr(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrthr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthry(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthry());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCyx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCyx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCyy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCyy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getXYZCovarianceMatrix(t_XYZCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getXYZCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_XYZCovariance_isCovXYZset(t_XYZCovariance *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isCovXYZset());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_XYZCovariance_setCdrgdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCovarianceMatrixEntry(t_XYZCovariance *self, PyObject *args)
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

            static PyObject *t_XYZCovariance_setCsrpdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpsrp(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpsrp", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrsrp(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrsrp", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrthr(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrthr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrthr", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthry(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthry(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthry", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCyx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCyx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCyx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCyy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCyy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCyy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_validate(t_XYZCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XYZCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_XYZCovariance_get__cdrgdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__covXYZset(t_XYZCovariance *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isCovXYZset());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_XYZCovariance_get__csrpdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpsrp(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpsrp(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpsrp", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrsrp(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrsrp(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrsrp", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrthr(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrthr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrthr(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrthr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrthr", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthry(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthry());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthry(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthry(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthry", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cyx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCyx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cyx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCyx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cyx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cyy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCyy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cyy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCyy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cyy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__xYZCovarianceMatrix(t_XYZCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getXYZCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/OLSMultipleLinearRegression.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *OLSMultipleLinearRegression::class$ = NULL;
        jmethodID *OLSMultipleLinearRegression::mids$ = NULL;
        bool OLSMultipleLinearRegression::live$ = false;

        jclass OLSMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/OLSMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_calculateAdjustedRSquared_557b8123390d8d0c] = env->getMethodID(cls, "calculateAdjustedRSquared", "()D");
            mids$[mid_calculateHat_70a207fcbc031df2] = env->getMethodID(cls, "calculateHat", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateRSquared_557b8123390d8d0c] = env->getMethodID(cls, "calculateRSquared", "()D");
            mids$[mid_calculateResidualSumOfSquares_557b8123390d8d0c] = env->getMethodID(cls, "calculateResidualSumOfSquares", "()D");
            mids$[mid_calculateTotalSumOfSquares_557b8123390d8d0c] = env->getMethodID(cls, "calculateTotalSumOfSquares", "()D");
            mids$[mid_newSampleData_d28c10701e55f94c] = env->getMethodID(cls, "newSampleData", "([D[[D)V");
            mids$[mid_newSampleData_91b51b3c05127ead] = env->getMethodID(cls, "newSampleData", "([DII)V");
            mids$[mid_newXSampleData_edb361bfdd1ad9ae] = env->getMethodID(cls, "newXSampleData", "([[D)V");
            mids$[mid_calculateBeta_75d50d73180655b4] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_70a207fcbc031df2] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OLSMultipleLinearRegression::OLSMultipleLinearRegression() : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        OLSMultipleLinearRegression::OLSMultipleLinearRegression(jdouble a0) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        jdouble OLSMultipleLinearRegression::calculateAdjustedRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateAdjustedRSquared_557b8123390d8d0c]);
        }

        ::org::hipparchus::linear::RealMatrix OLSMultipleLinearRegression::calculateHat() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_calculateHat_70a207fcbc031df2]));
        }

        jdouble OLSMultipleLinearRegression::calculateRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateRSquared_557b8123390d8d0c]);
        }

        jdouble OLSMultipleLinearRegression::calculateResidualSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateResidualSumOfSquares_557b8123390d8d0c]);
        }

        jdouble OLSMultipleLinearRegression::calculateTotalSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateTotalSumOfSquares_557b8123390d8d0c]);
        }

        void OLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_d28c10701e55f94c], a0.this$, a1.this$);
        }

        void OLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_91b51b3c05127ead], a0.this$, a1, a2);
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
        static PyObject *t_OLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OLSMultipleLinearRegression_init_(t_OLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OLSMultipleLinearRegression_calculateAdjustedRSquared(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateHat(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateRSquared(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateResidualSumOfSquares(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateTotalSumOfSquares(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_newSampleData(t_OLSMultipleLinearRegression *self, PyObject *args);

        static PyMethodDef t_OLSMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_OLSMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateAdjustedRSquared, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateHat, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateRSquared, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateResidualSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateTotalSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, newSampleData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OLSMultipleLinearRegression)[] = {
          { Py_tp_methods, t_OLSMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_OLSMultipleLinearRegression_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OLSMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::regression::AbstractMultipleLinearRegression),
          NULL
        };

        DEFINE_TYPE(OLSMultipleLinearRegression, t_OLSMultipleLinearRegression, OLSMultipleLinearRegression);

        void t_OLSMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(OLSMultipleLinearRegression), &PY_TYPE_DEF(OLSMultipleLinearRegression), module, "OLSMultipleLinearRegression", 0);
        }

        void t_OLSMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "class_", make_descriptor(OLSMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "wrapfn_", make_descriptor(t_OLSMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OLSMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_OLSMultipleLinearRegression::wrap_Object(OLSMultipleLinearRegression(((t_OLSMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_OLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OLSMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OLSMultipleLinearRegression_init_(t_OLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              OLSMultipleLinearRegression object((jobject) NULL);

              INT_CALL(object = OLSMultipleLinearRegression());
              self->object = object;
              break;
            }
           case 1:
            {
              jdouble a0;
              OLSMultipleLinearRegression object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = OLSMultipleLinearRegression(a0));
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

        static PyObject *t_OLSMultipleLinearRegression_calculateAdjustedRSquared(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateAdjustedRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateHat(t_OLSMultipleLinearRegression *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.calculateHat());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateRSquared(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateResidualSumOfSquares(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateResidualSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateTotalSumOfSquares(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateTotalSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_newSampleData(t_OLSMultipleLinearRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);

              if (!parseArgs(args, "[D[[D", &a0, &a1))
              {
                OBJ_CALL(self->object.newSampleData(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.newSampleData(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(OLSMultipleLinearRegression), (PyObject *) self, "newSampleData", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *YesNoUnknown::class$ = NULL;
          jmethodID *YesNoUnknown::mids$ = NULL;
          bool YesNoUnknown::live$ = false;
          YesNoUnknown *YesNoUnknown::NO = NULL;
          YesNoUnknown *YesNoUnknown::UNKOWN = NULL;
          YesNoUnknown *YesNoUnknown::YES = NULL;

          jclass YesNoUnknown::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/YesNoUnknown");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_32a386c88741ddc8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
              mids$[mid_values_fca4bc813a82fac6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NO = new YesNoUnknown(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              UNKOWN = new YesNoUnknown(env->getStaticObjectField(cls, "UNKOWN", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              YES = new YesNoUnknown(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          YesNoUnknown YesNoUnknown::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return YesNoUnknown(env->callStaticObjectMethod(cls, mids$[mid_valueOf_32a386c88741ddc8], a0.this$));
          }

          JArray< YesNoUnknown > YesNoUnknown::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< YesNoUnknown >(env->callStaticObjectMethod(cls, mids$[mid_values_fca4bc813a82fac6]));
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
          static PyObject *t_YesNoUnknown_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_YesNoUnknown_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_YesNoUnknown_of_(t_YesNoUnknown *self, PyObject *args);
          static PyObject *t_YesNoUnknown_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_YesNoUnknown_values(PyTypeObject *type);
          static PyObject *t_YesNoUnknown_get__parameters_(t_YesNoUnknown *self, void *data);
          static PyGetSetDef t_YesNoUnknown__fields_[] = {
            DECLARE_GET_FIELD(t_YesNoUnknown, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_YesNoUnknown__methods_[] = {
            DECLARE_METHOD(t_YesNoUnknown, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, of_, METH_VARARGS),
            DECLARE_METHOD(t_YesNoUnknown, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(YesNoUnknown)[] = {
            { Py_tp_methods, t_YesNoUnknown__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_YesNoUnknown__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(YesNoUnknown)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(YesNoUnknown, t_YesNoUnknown, YesNoUnknown);
          PyObject *t_YesNoUnknown::wrap_Object(const YesNoUnknown& object, PyTypeObject *p0)
          {
            PyObject *obj = t_YesNoUnknown::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_YesNoUnknown *self = (t_YesNoUnknown *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_YesNoUnknown::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_YesNoUnknown::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_YesNoUnknown *self = (t_YesNoUnknown *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_YesNoUnknown::install(PyObject *module)
          {
            installType(&PY_TYPE(YesNoUnknown), &PY_TYPE_DEF(YesNoUnknown), module, "YesNoUnknown", 0);
          }

          void t_YesNoUnknown::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "class_", make_descriptor(YesNoUnknown::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "wrapfn_", make_descriptor(t_YesNoUnknown::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "boxfn_", make_descriptor(boxObject));
            env->getClass(YesNoUnknown::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "NO", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::NO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "UNKOWN", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::UNKOWN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "YES", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::YES)));
          }

          static PyObject *t_YesNoUnknown_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, YesNoUnknown::initializeClass, 1)))
              return NULL;
            return t_YesNoUnknown::wrap_Object(YesNoUnknown(((t_YesNoUnknown *) arg)->object.this$));
          }
          static PyObject *t_YesNoUnknown_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, YesNoUnknown::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_YesNoUnknown_of_(t_YesNoUnknown *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_YesNoUnknown_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            YesNoUnknown result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::YesNoUnknown::valueOf(a0));
              return t_YesNoUnknown::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_YesNoUnknown_values(PyTypeObject *type)
          {
            JArray< YesNoUnknown > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::YesNoUnknown::values());
            return JArray<jobject>(result.this$).wrap(t_YesNoUnknown::wrap_jobject);
          }
          static PyObject *t_YesNoUnknown_get__parameters_(t_YesNoUnknown *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/DormandPrince54FieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
            mids$[mid_init$_4879aa54fb0b4b90] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_f2e08e06cc4e8e8d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_f180d140dce78d62] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_41762fd4377ff26e] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_41762fd4377ff26e] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_estimateError_db5b00c957704bb3] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");
            mids$[mid_createInterpolator_8a5005e52d76084e] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince54FieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54FieldIntegrator::DormandPrince54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_4879aa54fb0b4b90, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        DormandPrince54FieldIntegrator::DormandPrince54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f2e08e06cc4e8e8d, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > DormandPrince54FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_f180d140dce78d62]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince54FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince54FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_41762fd4377ff26e]));
        }

        jint DormandPrince54FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
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
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
              mids$[mid_valueOf_4df7f62f46196891] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_values_0672990ee2ea9349] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/gravity/potential/TideSystem;");

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
            return TideSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4df7f62f46196891], a0.this$));
          }

          JArray< TideSystem > TideSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< TideSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_0672990ee2ea9349]));
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
#include "org/orekit/geometry/fov/SmoothFieldOfView.h"
#include "java/util/List.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *SmoothFieldOfView::class$ = NULL;
        jmethodID *SmoothFieldOfView::mids$ = NULL;
        bool SmoothFieldOfView::live$ = false;

        jclass SmoothFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/SmoothFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCenter_f88961cca75a2c0a] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFootprint_37f5cab3ae6d781a] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getX_f88961cca75a2c0a] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getY_f88961cca75a2c0a] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getZ_f88961cca75a2c0a] = env->getMethodID(cls, "getZ", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_20de5f9d51c6611f] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getCenter() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenter_f88961cca75a2c0a]));
        }

        ::java::util::List SmoothFieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_37f5cab3ae6d781a], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getX() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getX_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getY() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getY_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getZ() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZ_f88961cca75a2c0a]));
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
        static PyObject *t_SmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothFieldOfView_getCenter(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getFootprint(t_SmoothFieldOfView *self, PyObject *args);
        static PyObject *t_SmoothFieldOfView_getX(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getY(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getZ(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_get__center(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__x(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__y(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__z(t_SmoothFieldOfView *self, void *data);
        static PyGetSetDef t_SmoothFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothFieldOfView, center),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, x),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, y),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, z),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothFieldOfView__methods_[] = {
          DECLARE_METHOD(t_SmoothFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothFieldOfView, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getX, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getY, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getZ, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothFieldOfView)[] = {
          { Py_tp_methods, t_SmoothFieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(SmoothFieldOfView, t_SmoothFieldOfView, SmoothFieldOfView);

        void t_SmoothFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothFieldOfView), &PY_TYPE_DEF(SmoothFieldOfView), module, "SmoothFieldOfView", 0);
        }

        void t_SmoothFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "class_", make_descriptor(SmoothFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "wrapfn_", make_descriptor(t_SmoothFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothFieldOfView::initializeClass, 1)))
            return NULL;
          return t_SmoothFieldOfView::wrap_Object(SmoothFieldOfView(((t_SmoothFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_SmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothFieldOfView_getCenter(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getFootprint(t_SmoothFieldOfView *self, PyObject *args)
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

          return callSuper(PY_TYPE(SmoothFieldOfView), (PyObject *) self, "getFootprint", args, 2);
        }

        static PyObject *t_SmoothFieldOfView_getX(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getX());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getY(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getY());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getZ(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getZ());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_get__center(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__x(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getX());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__y(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getY());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__z(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getZ());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
